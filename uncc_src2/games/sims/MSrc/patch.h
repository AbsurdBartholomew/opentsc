// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_PATCH_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_PATCH_H

typedef int Sint32;

enum SCID {
	TreeSimID = 1,
	cXPersonID = 2,
	cXMTObjectID = 3,
	cXCursorObjectID = 4,
	cXObjectID = 5,
	cXPortalID = 6,
	cXPersonImplID = 7,
	cXMTObjectImplID = 8,
	cXCursorObjectImplID = 9,
	cXObjectImplID = 10,
	cXPortalImplID = 11,
	ObjResFileID = 12,
	StdResFileID = 13,
	SeqResFileID = 14,
	ChainResFileID = 15,
	iResFileID = 16,
	QuickResFileID = 17,
	cSoundObjectID = 18,
	cSamplePatchID = 19
};

typedef bool __rb_tree_color_type;

struct __rb_tree_node_base {
	__rb_tree_color_type color;
	__rb_tree_node_base *parent;
	__rb_tree_node_base *left;
	__rb_tree_node_base *right;
	
	__rb_tree_node_base& operator=();
	__rb_tree_node_base();
	__rb_tree_node_base();
	static __rb_tree_node_base* minimum(/* parameters unknown */);
	static __rb_tree_node_base* maximum(/* parameters unknown */);
};

struct __rb_tree_base_iterator {
	__rb_tree_node_base *node;
	
	__rb_tree_base_iterator& operator=();
	__rb_tree_base_iterator();
	__rb_tree_base_iterator();
	void increment();
	void decrement();
};

typedef Sint32 SGUID;

struct less<const int> : binary_function<const int,const int,bool> {
	less<const int>& operator=();
	less();
	less();
	bool operator()();
};

struct rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > {
protected:
	__rb_tree_node<pair<const int,int> > *header;
	less<const int> key_compare;
	unsigned int node_count;
	
	__rb_tree_node<pair<const int,int> >* get_node();
	void put_node();
	__rb_tree_node<pair<const int,int> >*& root();
	__rb_tree_node<pair<const int,int> >*& leftmost();
	__rb_tree_node<pair<const int,int> >*& rightmost();
	static __rb_tree_node<pair<const int,int> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >*& parent(/* parameters unknown */);
	static pair<const int,int>& value(/* parameters unknown */);
	static int& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >*& parent(/* parameters unknown */);
	static pair<const int,int>& value(/* parameters unknown */);
	static int& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >* minimum(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >* maximum(/* parameters unknown */);
private:
	__rb_tree_iterator<pair<const int,int> > __insert();
	__rb_tree_node<pair<const int,int> >* __copy();
	void __erase();
	void init();
public:
	rb_tree();
	rb_tree();
	rb_tree(rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> >*, int, void);
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> >& operator=();
	less<const int> key_comp();
	__rb_tree_iterator<pair<const int,int> > begin();
	__rb_tree_const_iterator<pair<const int,int> > begin();
	__rb_tree_iterator<pair<const int,int> > end();
	__rb_tree_const_iterator<pair<const int,int> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,int> >,pair<const int,int>,pair<const int,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,int> >,pair<const int,int>,const pair<const int,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,int> >,pair<const int,int>,pair<const int,int> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,int> >,pair<const int,int>,const pair<const int,int> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_iterator<pair<const int,int> >,bool> insert_unique();
	__rb_tree_iterator<pair<const int,int> > insert_equal();
	__rb_tree_iterator<pair<const int,int> > insert_unique();
	__rb_tree_iterator<pair<const int,int> > insert_equal();
	void insert_unique();
	void insert_unique();
	void insert_equal();
	void insert_equal();
	void erase();
	unsigned int erase();
	void erase();
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
	bool __rb_verify();
};

typedef u16 HitObj;
typedef u16 SndObj;

struct Patch {
	u16 id;
	u16 bLoop;
	u32 sampleID;
};

struct HitPatch {
	u16 id;
	u32 sampleID;
	u32 musicID;
};

enum SPL {
	kSplNormal = 0,
	kSplTV = 1,
	kSplVox = 2,
	kSplStereo = 3
};

enum CtrGrp {
	kCtrlGrp0 = 0,
	kCtrlGrpSfx = 1,
	kCtrlGrpMusic = 2,
	kCtrlGrpVox = 3
};

enum DuckPriority {
	kDuckPriAlways = 0,
	kDuckPriLow = 10,
	kDuckPriNormal = 20,
	kDuckPriHigh = 30,
	kDuckPriEvenHigher = 50,
	kDuckPriNever = 100
};

enum ArgsType {
	kArgsNormal = 0,
	kArgsVolPan = 1,
	kArgsIdVolPan = 2
};

struct Track {
	u16 id;
	u16 lVolume;
	ArgsType lArgsType;
	DuckPriority lDuckingPri;
	CtrGrp lControlGroupId;
	SPL lSpl;
	SndObj lPatchId;
	HitObj lHitListId;
	TrackData *pTrackData;
};

struct GlobalHitlist {
	HitObj id;
	VECTOR<short unsigned int> values;
};

struct VoxHitlist {
	HitObj id;
	HitObj maleHitlist;
	HitObj femaleHitlist;
	HitObj childHitlist;
};

union RegUnion {
	RegCmd regCmd;
	ValueCmd valueCmd;
	RegValCmd regValCmd;
};

typedef ERQTable<snd::VoxHitlist> VoxHitlistTable;
typedef GlobalHitlist cHitList;
typedef Uint32 HitTimeVal;

struct TrackDataReader {
private:
	TrackData *m_pData;
	int m_iIndex;
	
public:
	TrackDataReader(TrackDataReader &data);
	TrackDataReader();
	TrackDataReader();
	TrackDataReader& operator=(TrackDataReader &data);
	TrackDataReader& operator=();
	TrackDataReader& operator--();
	TrackDataReader& operator+=(s32 incVal);
	RegUnion& ReadCommand();
	void JumpToEnd();
	bool IsValid();
};

struct cSoundCacheHandle {
private:
	Sint32 m_id;
	
public:
	cSoundCacheHandle& operator=();
	cSoundCacheHandle();
	cSoundCacheHandle();
	cSoundCacheHandle();
	cSoundObject* GetObject();
	cTrack* GetTrackObject();
	cSamplePatch* GetPatchObject();
	Sint32 GetID();
	bool operator<(cSoundCacheHandle &other);
	bool IsInMemory();
};

typedef list<cSoundCacheHandle,__malloc_alloc_template<0> > tTrackPlayerList;

struct cHitTimer {
protected:
	bool m_bRunning;
	HitTimeVal m_lElapsed;
	
public:
	cHitTimer& operator=();
	cHitTimer();
	cHitTimer();
	bool Init();
	bool Shutdown();
	bool Start();
	bool Stop();
	bool Update();
	HitTimeVal GetElapsedTime();
	HitTimeVal TimeNTicksFromNow();
	bool IsTimerRunning();
	void Restart();
};

struct cRegisterSet {
	bool m_bIsInitted;
	Sint32 m_lNumRegs;
	Sint32 m_lMinId;
	Sint32 *m_alVarReg;
	cRegisterSet *m_pChildSet;
	cRegisterSet *m_pDefaultSet;
	bool m_bMustDeleteArray;
	
	cRegisterSet& operator=();
	cRegisterSet();
	cRegisterSet();
	cRegisterSet(cRegisterSet*, int, void);
	bool Init(Sint32 lNumRegs, Sint32 lMinId);
	void SetChain();
	bool Shutdown();
	Sint32 RegisterVal(Sint32 lRegisterId);
	bool SetRegister(Sint32 lRegisterId, Sint32 lValue);
	void Copy(cRegisterSet *pSource);
	bool TakesRegisterId();
};

struct cSndobAttrRegisterSet : cRegisterSet {
	Sint32 m_lPriority;
	Sint32 m_lVolume;
	Sint32 m_lInternalVolume;
	Sint32 m_lPan;
	Sint32 m_lPitch;
	Sint32 m_lPaused;
	Sint32 m_lFxtype;
	Sint32 m_lFxlevel;
	Sint32 m_lDuckpri;
	Sint32 m_lIs3d;
	Sint32 m_lIsHeadRelative;
	Sint32 m_lMinDistance;
	Sint32 m_lMaxDistance;
	Sint32 m_lX;
	Sint32 m_lY;
	Sint32 m_lZ;
	Sint32 m_lFilterType;
	Sint32 m_lFilterCutoff;
	Sint32 m_lFilterLevel;
	Sint32 m_lAttack;
	Sint32 m_lDecay;
	Sint32 m_lIsStreamed;
	Sint32 m_lStreamingBufferSizeMultiplier;
	Sint32 m_lFadeDest;
	Sint32 m_lFadeVar;
	Sint32 m_lFadeSpeed;
	Sint32 m_lPreload;
	Sint32 m_lIsLooped;
	Sint32 m_lFadeOn;
	Sint32 m_lIsPlaying;
	Sint32 m_lSource;
	Sint32 m_lIllegalRegLast;
	
	cSndobAttrRegisterSet& operator=();
	cSndobAttrRegisterSet();
	cSndobAttrRegisterSet();
	cSndobAttrRegisterSet(cSndobAttrRegisterSet*, int, void);
	bool Init(Sint32 lNumRegs, Sint32 lMinId);
	bool Shutdown();
};

struct cTrackAttrRegisterSet : cRegisterSet {
	Sint32 m_lPatchId;
	Sint32 m_lWhatToDoWithUpdate;
	Sint32 m_lTempo;
	Sint32 m_lTarget;
	Sint32 m_lMuteGroup;
	Sint32 m_lInterrupt;
	Sint32 m_lIsPositioned;
	Sint32 m_lSpl;
	Sint32 m_lFadesWhenOffScreen;
	Sint32 m_lAllowMultipleInstances;
	Sint32 m_lAssociatedTrack0;
	Sint32 m_lAssociatedTrack1;
	Sint32 m_lAssociatedTrack2;
	Sint32 m_lAssociatedTrack3;
	int m_lPad[20];
	Sint32 m_lIllegalRegLast;
protected:
	Sint32 *m_alAssociatedTrack;
	
public:
	cTrackAttrRegisterSet& operator=();
	cTrackAttrRegisterSet();
	cTrackAttrRegisterSet();
	cTrackAttrRegisterSet(cTrackAttrRegisterSet*, int, void);
	bool Init(Sint32 lNumRegs, Sint32 lMinId);
	bool Shutdown();
};

struct cGlobalAttrRegisterSet : cRegisterSet {
	int m_alPad[10];
	Sint32 m_lDuckPri;
	Sint32 m_lVol;
	Sint32 m_lFxType;
	Sint32 m_lFxLevel;
	Sint32 m_lPause;
	Sint32 m_lIllegalRegLast;
protected:
	Sint32 *m_alAssociatedTrack;
	
public:
	cGlobalAttrRegisterSet& operator=();
	cGlobalAttrRegisterSet();
	cGlobalAttrRegisterSet();
	cGlobalAttrRegisterSet(cGlobalAttrRegisterSet*, int, void);
	bool Init(Sint32 lNumRegs, Sint32 lMinId);
	bool Shutdown();
};

struct less<int> : binary_function<int,int,bool> {
	less<int>& operator=();
	less();
	less();
	bool operator()();
};

struct rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > {
protected:
	__rb_tree_node<pair<const int,cHitControlGroup *> > *header;
	less<int> key_compare;
	unsigned int node_count;
	
	__rb_tree_node<pair<const int,cHitControlGroup *> >* get_node();
	void put_node();
	__rb_tree_node<pair<const int,cHitControlGroup *> >*& root();
	__rb_tree_node<pair<const int,cHitControlGroup *> >*& leftmost();
	__rb_tree_node<pair<const int,cHitControlGroup *> >*& rightmost();
	static __rb_tree_node<pair<const int,cHitControlGroup *> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >*& parent(/* parameters unknown */);
	static pair<const int,cHitControlGroup *>& value(/* parameters unknown */);
	static Sint32& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >*& parent(/* parameters unknown */);
	static pair<const int,cHitControlGroup *>& value(/* parameters unknown */);
	static Sint32& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >* minimum(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >* maximum(/* parameters unknown */);
private:
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > __insert();
	__rb_tree_node<pair<const int,cHitControlGroup *> >* __copy();
	void __erase();
	void init();
public:
	rb_tree();
	rb_tree();
	rb_tree(rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> >*, int, void);
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> >& operator=();
	less<int> key_comp();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > begin();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > begin();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > end();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,pair<const int,cHitControlGroup *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,const pair<const int,cHitControlGroup *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,pair<const int,cHitControlGroup *> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,const pair<const int,cHitControlGroup *> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> insert_unique();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > insert_equal();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > insert_unique();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > insert_equal();
	void insert_unique();
	void insert_unique();
	void insert_equal();
	void insert_equal();
	void erase();
	unsigned int erase();
	void erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > find();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > lower_bound();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > lower_bound();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > upper_bound();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > upper_bound();
	pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,__rb_tree_iterator<pair<const int,cHitControlGroup *> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > > equal_range();
	bool __rb_verify();
};

struct map<int,cHitControlGroup *,less<int>,__malloc_alloc_template<0> > {
private:
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > t;
	
public:
	map(map<int,cHitControlGroup *,less<int>,__malloc_alloc_template<0> >*, int, void);
	map();
	map();
	map();
	map();
	map();
	map();
	map();
	map<int,cHitControlGroup *,less<int>,__malloc_alloc_template<0> >& operator=();
	less<int> key_comp();
	value_compare value_comp();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > begin();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > begin();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > end();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,pair<const int,cHitControlGroup *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,pair<const int,cHitControlGroup *> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,const pair<const int,cHitControlGroup *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,const pair<const int,cHitControlGroup *> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	cHitControlGroup*& operator[]();
	void swap();
	pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> insert();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > insert();
	void insert();
	void insert();
	void erase();
	unsigned int erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > find();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > lower_bound();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > lower_bound();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > upper_bound();
	__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > upper_bound();
	pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,__rb_tree_iterator<pair<const int,cHitControlGroup *> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > > equal_range();
};

struct list<unsigned int,__malloc_alloc_template<0> > {
protected:
	__list_node<unsigned int> *node;
	unsigned int length;
	
	__list_node<unsigned int>* get_node();
	void put_node();
public:
	list();
	__list_iterator<unsigned int> begin();
	__list_const_iterator<unsigned int> begin();
	__list_iterator<unsigned int> end();
	__list_const_iterator<unsigned int> end();
	reverse_bidirectional_iterator<__list_iterator<unsigned int>,unsigned int,unsigned int &,int> rbegin();
	reverse_bidirectional_iterator<__list_const_iterator<unsigned int>,unsigned int,const unsigned int &,int> rbegin();
	reverse_bidirectional_iterator<__list_iterator<unsigned int>,unsigned int,unsigned int &,int> rend();
	reverse_bidirectional_iterator<__list_const_iterator<unsigned int>,unsigned int,const unsigned int &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	Uint32& front();
	Uint32& front();
	Uint32& back();
	Uint32& back();
	void swap();
	__list_iterator<unsigned int> insert();
	__list_iterator<unsigned int> insert();
	void insert();
	void insert();
	void insert();
	void push_front();
	void push_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
	void pop_front();
	void pop_back();
	list();
	list();
	list();
	list();
	list();
	list(list<unsigned int,__malloc_alloc_template<0> >*, int, void);
	list<unsigned int,__malloc_alloc_template<0> >& operator=();
protected:
	void transfer();
public:
	void splice();
	void splice();
	void splice();
	void remove();
	void unique();
	void merge();
	void reverse();
	void sort();
};

struct less<const cSoundCacheHandle> : binary_function<const cSoundCacheHandle,const cSoundCacheHandle,bool> {
	less<const cSoundCacheHandle>& operator=();
	less();
	less();
	bool operator()();
};

struct rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > {
protected:
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *header;
	less<const cSoundCacheHandle> key_compare;
	unsigned int node_count;
	
	__rb_tree_node<pair<const cSoundCacheHandle,int> >* get_node();
	void put_node();
	__rb_tree_node<pair<const cSoundCacheHandle,int> >*& root();
	__rb_tree_node<pair<const cSoundCacheHandle,int> >*& leftmost();
	__rb_tree_node<pair<const cSoundCacheHandle,int> >*& rightmost();
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >*& parent(/* parameters unknown */);
	static pair<const cSoundCacheHandle,int>& value(/* parameters unknown */);
	static cSoundCacheHandle& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >*& parent(/* parameters unknown */);
	static pair<const cSoundCacheHandle,int>& value(/* parameters unknown */);
	static cSoundCacheHandle& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >* minimum(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >* maximum(/* parameters unknown */);
private:
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > __insert();
	__rb_tree_node<pair<const cSoundCacheHandle,int> >* __copy();
	void __erase();
	void init();
public:
	rb_tree();
	rb_tree();
	rb_tree(rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> >*, int, void);
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> >& operator=();
	less<const cSoundCacheHandle> key_comp();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > begin();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > begin();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > end();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,pair<const cSoundCacheHandle,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,const pair<const cSoundCacheHandle,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,pair<const cSoundCacheHandle,int> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,const pair<const cSoundCacheHandle,int> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> insert_unique();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > insert_equal();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > insert_unique();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > insert_equal();
	void insert_unique();
	void insert_unique();
	void insert_equal();
	void insert_equal();
	void erase();
	unsigned int erase();
	void erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > find();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > lower_bound();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > lower_bound();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > upper_bound();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > upper_bound();
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,__rb_tree_iterator<pair<const cSoundCacheHandle,int> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > > equal_range();
	bool __rb_verify();
};

struct map<const cSoundCacheHandle,int,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > {
private:
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > t;
	
public:
	map(map<const cSoundCacheHandle,int,less<const cSoundCacheHandle>,__malloc_alloc_template<0> >*, int, void);
	map();
	map();
	map();
	map();
	map();
	map();
	map();
	map<const cSoundCacheHandle,int,less<const cSoundCacheHandle>,__malloc_alloc_template<0> >& operator=();
	less<const cSoundCacheHandle> key_comp();
	value_compare value_comp();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > begin();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > begin();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > end();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,pair<const cSoundCacheHandle,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,pair<const cSoundCacheHandle,int> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,const pair<const cSoundCacheHandle,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,const pair<const cSoundCacheHandle,int> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	Sint32& operator[]();
	void swap();
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> insert();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > insert();
	void insert();
	void insert();
	void erase();
	unsigned int erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > find();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > lower_bound();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > lower_bound();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > upper_bound();
	__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > upper_bound();
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,__rb_tree_iterator<pair<const cSoundCacheHandle,int> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > > equal_range();
};

struct cHitMan {
protected:
	cIGZSndSys *m_pSndSys;
	Sint32 m_lPauseRefs;
	tTrackPlayerList m_TrackUpdateList;
	__list_iterator<cSoundCacheHandle> m_itUpdate;
	cHitTimer m_Timer;
	cRZCallbackTimer *m_pCallbackTimer;
	bool m_bCallbackEnabled;
	void (*m_pfnTrackFlowErrorHandler)(/* parameters unknown */);
	map<int,cHitControlGroup *,less<int>,__malloc_alloc_template<0> > m_ControlGroupMap;
	bool (*m_pfnHandleSourceDataFieldRequest)(/* parameters unknown */);
	list<unsigned int,__malloc_alloc_template<0> > m_GZSndDeleteList;
	Uint32 m_lUpdateNum;
	map<const cSoundCacheHandle,int,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > m_DuckMap;
	VoxHitlistTable *m_pVoxHitlistTable;
	cSoundCache *m_pSoundCache;
public:
	int m_alSequenceGroupTrackId[1035];
	
	cHitMan& operator=();
	cHitMan(VoxHitlistTable *pVoxHitlist);
	cHitMan();
	cHitMan(cHitMan*, int, void);
	bool Init();
	bool Shutdown();
	bool Pause();
	bool Unpause();
	bool IsPaused();
	cIGZSndSys* GZSndSys();
	cTrackPlayer* CreateTrackPlayer();
	bool AddToUpdateList(cTrackPlayer *pTrackPlayer);
	bool RemoveFromUpdateList(cTrackPlayer *pTrackPlayer);
	tTrackPlayerList& ActiveTrackList();
	Sint32 NumActiveTracks();
	cHitTimer* Timer();
	void TimerCallback();
	bool StartCallbackTimer();
	bool StopCallbackTimer();
	Uint32 Random();
	Sint32 Callback();
	cSoundCacheHandle SoundObject();
	Sint32 SoundObjectId(cSoundObject *pObject);
	void KillAll();
	void KillInstance(Sint32 lInstanceId);
	void SetTrackFlowErrorHandler(void (*pfnTrackFlowErrorHandler)(/* parameters unknown */));
	void HandleTrackFlowError(cTrackPlayer *pTrackPlayer, char *szMsg2);
	cHitList* GlobalHitList(Sint32 lGlobalHitListId);
	bool SetRegister(Sint32 lRegisterNum, Sint32 lValue);
	bool GetSourceDataField(Sint32 lSourceId, Sint32 lRegisterId, Sint32 *plValue);
	bool RegisterSourceDataRequestHandler(bool (*pfnHandler)(/* parameters unknown */));
	cHitControlGroup* ControlGroup(Sint32 lControlGroupId);
	void DuckMapSetSndobPri(cSoundObject *pSndob, Sint32 lPri);
	Sint32 DuckMapSndobPri(cSoundObject *pSndob);
	Sint32 DuckMapMaxPri();
	void DuckMapRemoveAll();
	void UpdateActiveTrackVolumes();
	VoxHitlist* GetVoxHitlist(Sint32 id);
	cSoundCache* GetSoundCache();
	void SetSequenceGroupTrackId(Sint32 i, Sint32 id);
	Sint32 SequenceGroupTrackId(Sint32 i);
};

struct rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > {
protected:
	__rb_tree_node<int> *header;
	less<int> key_compare;
	unsigned int node_count;
	
	__rb_tree_node<int>* get_node();
	void put_node();
	__rb_tree_node<int>*& root();
	__rb_tree_node<int>*& leftmost();
	__rb_tree_node<int>*& rightmost();
	static __rb_tree_node<int>*& left(/* parameters unknown */);
	static __rb_tree_node<int>*& right(/* parameters unknown */);
	static __rb_tree_node<int>*& parent(/* parameters unknown */);
	static Sint32& value(/* parameters unknown */);
	static Sint32& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<int>*& left(/* parameters unknown */);
	static __rb_tree_node<int>*& right(/* parameters unknown */);
	static __rb_tree_node<int>*& parent(/* parameters unknown */);
	static Sint32& value(/* parameters unknown */);
	static Sint32& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<int>* minimum(/* parameters unknown */);
	static __rb_tree_node<int>* maximum(/* parameters unknown */);
private:
	__rb_tree_iterator<int> __insert();
	__rb_tree_node<int>* __copy();
	void __erase();
	void init();
public:
	rb_tree();
	rb_tree();
	rb_tree(rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> >*, int, void);
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> >& operator=();
	less<int> key_comp();
	__rb_tree_iterator<int> begin();
	__rb_tree_const_iterator<int> begin();
	__rb_tree_iterator<int> end();
	__rb_tree_const_iterator<int> end();
	reverse_bidirectional_iterator<__rb_tree_iterator<int>,int,int &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<int>,int,const int &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<int>,int,int &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<int>,int,const int &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_iterator<int>,bool> insert_unique();
	__rb_tree_iterator<int> insert_equal();
	__rb_tree_iterator<int> insert_unique();
	__rb_tree_iterator<int> insert_equal();
	void insert_unique();
	void insert_unique();
	void insert_equal();
	void insert_equal();
	void erase();
	unsigned int erase();
	void erase();
	void erase();
	void clear();
	__rb_tree_iterator<int> find();
	__rb_tree_const_iterator<int> find();
	unsigned int count();
	__rb_tree_iterator<int> lower_bound();
	__rb_tree_const_iterator<int> lower_bound();
	__rb_tree_iterator<int> upper_bound();
	__rb_tree_const_iterator<int> upper_bound();
	pair<__rb_tree_iterator<int>,__rb_tree_iterator<int> > equal_range();
	pair<__rb_tree_const_iterator<int>,__rb_tree_const_iterator<int> > equal_range();
	bool __rb_verify();
};

extern cGlobalAttrRegisterSet GlobalAttrRegisterSet;
extern cRegisterSet GlobalVarRegisterSet;
extern cGlobalAttrRegisterSet GlobalAttrDefaultsRegisterSet;
extern cSndobAttrRegisterSet SndobAttrDefaultsRegisterSet;
extern cTrackAttrRegisterSet TrackAttrDefaultsRegisterSet;
extern __vtbl_ptr_type cTrack virtual table[48];
extern __vtbl_ptr_type cTrackPlayer virtual table[46];
extern __vtbl_ptr_type cSampleChannel virtual table[41];
extern __vtbl_ptr_type cSamplePatch virtual table[41];
extern __vtbl_ptr_type cHitControlGroup virtual table[37];
extern __vtbl_ptr_type cSoundObject virtual table[37];
extern cHitMan *g_pHitMan;

void HandleTrackPlayerFlowControlError(cTrackPlayer *pTrackPlayer, char *szMsg2);
void cHitMan::~cHitMan(int __in_chrg);
void cSamplePatch::~cSamplePatch(int __in_chrg);
void cSampleChannel::~cSampleChannel(int __in_chrg);
void cRegisterSet::~cRegisterSet(int __in_chrg);
void cSoundCache::~cSoundCache(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
__rb_tree_const_iterator<int> rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::find(Sint32 &k);
__rb_tree_iterator<pair<const int,cHitControlGroup *> > rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::find(Sint32 &k);
__rb_tree_iterator<pair<const int,cHitControlGroup *> > rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const int,cHitControlGroup *> &v);
pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::insert_unique(pair<const int,cHitControlGroup *> &v);
void rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<int> *x);
__rb_tree_iterator<int> rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, Sint32 &v);
pair<__rb_tree_iterator<int>,bool> rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::insert_unique(Sint32 &v);
void list<cSoundCacheHandle, __malloc_alloc_template<0> >::clear();
void rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const int,cHitControlGroup *> > *x);
void list<unsigned int, __malloc_alloc_template<0> >::clear();
void rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const cSoundCacheHandle,int> > *x);
void rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::erase(__rb_tree_iterator<pair<const int,cHitControlGroup *> > first, __rb_tree_iterator<pair<const int,cHitControlGroup *> > last);
__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const cSoundCacheHandle,int> &v);
pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::insert_unique(pair<const cSoundCacheHandle,int> &v);
__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::lower_bound(cSoundCacheHandle &k);
__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::upper_bound(cSoundCacheHandle &k);
void rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::erase(__rb_tree_iterator<pair<const cSoundCacheHandle,int> > first, __rb_tree_iterator<pair<const cSoundCacheHandle,int> > last);
unsigned int rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::erase(cSoundCacheHandle &x);
__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::find(cSoundCacheHandle &k);
GlobalHitlist* snd::GlobalHitlist * FindAudioRes<snd::GlobalHitlist>(GlobalHitlist *begin, GlobalHitlist *end, u16 id);
__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::lower_bound(int &k);
__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::upper_bound(int &k);
void rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const int,int> > *x);
void rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::erase(__rb_tree_iterator<pair<const int,int> > first, __rb_tree_iterator<pair<const int,int> > last);
unsigned int rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::erase(int &x);
Track* snd::Track * FindAudioRes<snd::Track>(Track *begin, Track *end, u16 id);
Patch* snd::Patch * FindAudioRes<snd::Patch>(Patch *begin, Patch *end, u16 id);
HitPatch* snd::HitPatch * FindAudioRes<snd::HitPatch>(HitPatch *begin, HitPatch *end, u16 id);
void cSoundObject::~cSoundObject(int __in_chrg);
void cHitControlGroup::~cHitControlGroup(int __in_chrg);
void cTrackPlayer::~cTrackPlayer(int __in_chrg);
void cTrack::~cTrack(int __in_chrg);
void global constructors keyed to GlobalAttrRegisterSet();
void global destructors keyed to GlobalAttrRegisterSet();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_PATCH_H

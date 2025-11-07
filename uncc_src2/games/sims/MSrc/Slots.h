// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_SLOTS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_SLOTS_H

enum StdHeight {
	kHeightUndefined = 0,
	kHeightGround = 1,
	kHeightLowTable = 2,
	kHeightTable = 3,
	kHeightCounter = 4,
	kHeightNonStandard = 5,
	kHeightHand = 6,
	kHeightSitting = 7,
	kHeightEndTable = 8
};

struct ObjectSlot : Slot {
	SInt16 objectID;
	StdHeight height;
	Int maximumSize;
	Int flags;
	
	ObjectSlot& operator=();
	ObjectSlot(SlotDescriptor *sd);
	ObjectSlot();
	ObjectSlot();
	/* vtable[1] */ virtual ObjectSlot(ObjectSlot*, int, void);
	StdHeight GetHeight();
	void SetHeight(StdHeight h);
	bool IsSurface();
	static Int GetHeightMask(/* parameters unknown */);
};

struct SpriteSlot : Slot {
	Int ticksLeft;
	Int id;
	union {
		ObjSelector *selector;
		u32 renderer;
	};
	Int numFrames;
	Int frame;
	Int frameDelta;
	Int frameTicks;
	Int balloonSpriteID;
	Int notSignSpriteID;
	Int priority;
	bool showWhenInactive;
	cXObject *m_pObj;
	ESpriteRender *m_pSpriteRender;
	
	SpriteSlot& operator=();
	SpriteSlot(SlotDescriptor *sd, cXObject *pOb);
	SpriteSlot();
	SpriteSlot();
	/* vtable[1] */ virtual SpriteSlot(SpriteSlot*, int, void);
	static int GetTicksPerFrame(/* parameters unknown */);
	bool Tick();
	void ActivateForever();
	void ActivateForTicks(Int tickDuration);
	void ActivateForLoops(Int loopDuration);
	void Deactivate();
	bool IsActive();
	void SetSprite(ObjSelector *sel);
	void SetSprite();
	void UseBalloonSprite(Int id);
	void UseOverlaySprite(Int id);
	ObjSelector* GetSelector();
	Int GetSpriteID();
	Int GetBalloonSpriteID();
	Int GetOverlaySpriteID();
	Int GetCurrentFrame();
	cXObject* GetPPerson();
	void SetPriority(Int pri);
	Int GetPriority();
	bool GetShowOverInactivePeople();
	void SetShowOverInactivePeople(bool show);
};

enum VerticalPosition {
	kStanding = 0,
	kChairSitting = 1,
	kGroundSitting = 2
};

struct RoutingSlot : Slot {
private:
	int multipliers[3];
	Int rsFlags;
	Int snapTargetSlot;
	Int minProximity;
	Int maxProximity;
	Int optimalProximity;
	float gradient;
	Int facing;
	Int resolution;
	
public:
	RoutingSlot& operator=();
	RoutingSlot(SlotDescriptor *sd);
	RoutingSlot();
	RoutingSlot();
	/* vtable[1] */ virtual RoutingSlot(RoutingSlot*, int, void);
	bool IsOnTopOfObject();
	void SetIsOnTopOfObject();
	bool IsDirectionAllowed();
	void AllowDirection(Int dir);
	bool IsAnyRotationAllowed();
	void AllowAnyRotation();
	bool IsAnyFacingAllowed();
	void AllowAnyFacing();
	bool IsFacingTowardsObject();
	void FaceTowardsObject();
	bool IsFacingAwayFromObject();
	void FaceAwayFromObject();
	Int GetFacingDirection();
	void SetFacingDirection(Int dir);
	bool GetIgnoreRooms();
	void SetIgnoreRooms();
	void SetHasRandomScoring();
	bool HasRandomScoring();
	void SetAllowFailureTrees();
	bool GetAllowFailureTrees();
	void SetAllowDifferentAlts();
	bool GetAllowDifferentAlts();
	void SetUseAverageObjectLocation();
	bool GetUseAverageObjectLocation();
	Int GetMinDist();
	Int GetMaxDist();
	Int GetOptimalDist();
	Int GetResolution();
	float GetGradient();
	void SetDistances(Int min, Int max, Int optimal);
	void SetResolution(RoutingSlot*, int, void);
	void SetTileDistances(float min, float max, float optimal);
	Int GetMultiplier();
	void SetMultiplier(VerticalPosition v, Int mult);
	Int GetSnapTargetSlot();
	bool SnapsToDirection();
	Int GetSnapDirection();
	bool Absolute();
};

struct SlotLoader {
private:
	iResFile *fFile;
	StringSet *fSlotNames;
	SInt16 fStringsID;
	
public:
	SlotLoader& operator=();
	SlotLoader(iResFile *file, SInt16 stringsID);
	SlotLoader();
	SlotLoader(SlotLoader*, int, void);
	bool Load(SInt16 id, vector<ObjectSlot,__malloc_alloc_template<0> > *objectSlots, vector<RoutingSlot,__malloc_alloc_template<0> > *routingSlots);
	void GetSlotName(Slot *slot, BString &str);
};

struct vector<RoutingSlot,__malloc_alloc_template<0> > {
protected:
	RoutingSlot *start;
	RoutingSlot *finish;
	RoutingSlot *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	RoutingSlot* begin();
	RoutingSlot* begin();
	RoutingSlot* end();
	RoutingSlot* end();
	reverse_iterator<RoutingSlot *,RoutingSlot,RoutingSlot &,int> rbegin();
	reverse_iterator<const RoutingSlot *,RoutingSlot,const RoutingSlot &,int> rbegin();
	reverse_iterator<RoutingSlot *,RoutingSlot,RoutingSlot &,int> rend();
	reverse_iterator<const RoutingSlot *,RoutingSlot,const RoutingSlot &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	RoutingSlot& operator[]();
	RoutingSlot& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<RoutingSlot,__malloc_alloc_template<0> >*, int, void);
	vector<RoutingSlot,__malloc_alloc_template<0> >& operator=();
	void reserve();
	RoutingSlot& front();
	RoutingSlot& front();
	RoutingSlot& back();
	RoutingSlot& back();
	void push_back();
	void swap();
	RoutingSlot* insert();
	RoutingSlot* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct SlotDescriptor {
	SInt16 type;
	float xoffset;
	float yoffset;
	float altOffset;
	SInt32 maximumSize;
	SInt32 flags;
	SInt32 height;
	int multipliers[3];
	SInt32 rsFlags;
	SInt32 snapTargetSlot;
	SInt32 minProximity;
	SInt32 maxProximity;
	SInt32 optimalProximity;
	float gradient;
	SInt32 facing;
	SInt32 resolution;
	
	SlotDescriptor& operator=();
	SlotDescriptor();
	SlotDescriptor();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct VECTOR<SlotDescriptor> {
private:
	SlotDescriptor *pData;
	
public:
	VECTOR<SlotDescriptor>& operator=();
	VECTOR();
	VECTOR();
	int size();
	SlotDescriptor& operator[]();
	SlotDescriptor& operator[]();
	SlotDescriptor* begin();
	SlotDescriptor* end();
	SlotDescriptor* begin();
	SlotDescriptor* end();
};

struct SlotDescList : VECTOR<SlotDescriptor> {
	Int resID;
	
	SlotDescList& operator=();
	SlotDescList();
	SlotDescList();
	Int CountSlots();
};

extern __vtbl_ptr_type RoutingSlot virtual table[3];
extern __vtbl_ptr_type SpriteSlot virtual table[3];
extern __vtbl_ptr_type ObjectSlot virtual table[3];
extern __vtbl_ptr_type Slot virtual table[3];

Slot* Slot::Slot();
Slot* Slot::Slot(SlotDescriptor *sd);
void SpriteSlot::~SpriteSlot(int __in_chrg);
void SlotLoader::~SlotLoader(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
SlotDescList* SlotDescList * FindRes<SlotDescList>(SlotDescList *begin, SlotDescList *end, int resID);
ObjectSlot* ObjectSlot * copy_backward<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result);
ObjectSlot* ObjectSlot * uninitialized_copy<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result);
void vector<ObjectSlot, __malloc_alloc_template<0> >::insert_aux(ObjectSlot *position, ObjectSlot &x);
RoutingSlot* RoutingSlot * copy_backward<RoutingSlot *, RoutingSlot *>(RoutingSlot *first, RoutingSlot *last, RoutingSlot *result);
RoutingSlot* RoutingSlot * uninitialized_copy<RoutingSlot *, RoutingSlot *>(RoutingSlot *first, RoutingSlot *last, RoutingSlot *result);
void vector<RoutingSlot, __malloc_alloc_template<0> >::insert_aux(RoutingSlot *position, RoutingSlot &x);
void Slot::~Slot(int __in_chrg);
void ObjectSlot::~ObjectSlot(int __in_chrg);
void RoutingSlot::~RoutingSlot(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_SLOTS_H

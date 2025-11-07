// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_PERSON_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_PERSON_H

typedef struct {
	short int __delta;
	short int __index;
	void *__pfn;
	short int __delta2;
} __vtbl_ptr_type;

typedef UInt16 RoomID;

struct vector<SpriteSlot,__malloc_alloc_template<0> > {
protected:
	SpriteSlot *start;
	SpriteSlot *finish;
	SpriteSlot *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	SpriteSlot* begin();
	SpriteSlot* begin();
	SpriteSlot* end();
	SpriteSlot* end();
	reverse_iterator<SpriteSlot *,SpriteSlot,SpriteSlot &,int> rbegin();
	reverse_iterator<const SpriteSlot *,SpriteSlot,const SpriteSlot &,int> rbegin();
	reverse_iterator<SpriteSlot *,SpriteSlot,SpriteSlot &,int> rend();
	reverse_iterator<const SpriteSlot *,SpriteSlot,const SpriteSlot &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	SpriteSlot& operator[]();
	SpriteSlot& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<SpriteSlot,__malloc_alloc_template<0> >*, int, void);
	vector<SpriteSlot,__malloc_alloc_template<0> >& operator=();
	void reserve();
	SpriteSlot& front();
	SpriteSlot& front();
	SpriteSlot& back();
	SpriteSlot& back();
	void push_back();
	void swap();
	SpriteSlot* insert();
	SpriteSlot* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct vector<FTilePt,__malloc_alloc_template<0> > {
protected:
	FTilePt *start;
	FTilePt *finish;
	FTilePt *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	FTilePt* begin();
	FTilePt* begin();
	FTilePt* end();
	FTilePt* end();
	reverse_iterator<FTilePt *,FTilePt,FTilePt &,int> rbegin();
	reverse_iterator<const FTilePt *,FTilePt,const FTilePt &,int> rbegin();
	reverse_iterator<FTilePt *,FTilePt,FTilePt &,int> rend();
	reverse_iterator<const FTilePt *,FTilePt,const FTilePt &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	FTilePt& operator[]();
	FTilePt& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<FTilePt,__malloc_alloc_template<0> >*, int, void);
	vector<FTilePt,__malloc_alloc_template<0> >& operator=();
	void reserve();
	FTilePt& front();
	FTilePt& front();
	FTilePt& back();
	FTilePt& back();
	void push_back();
	void swap();
	FTilePt* insert();
	FTilePt* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct vector<RouteGoal,__malloc_alloc_template<0> > {
protected:
	RouteGoal *start;
	RouteGoal *finish;
	RouteGoal *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	RouteGoal* begin();
	RouteGoal* begin();
	RouteGoal* end();
	RouteGoal* end();
	reverse_iterator<RouteGoal *,RouteGoal,RouteGoal &,int> rbegin();
	reverse_iterator<const RouteGoal *,RouteGoal,const RouteGoal &,int> rbegin();
	reverse_iterator<RouteGoal *,RouteGoal,RouteGoal &,int> rend();
	reverse_iterator<const RouteGoal *,RouteGoal,const RouteGoal &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	RouteGoal& operator[]();
	RouteGoal& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<RouteGoal,__malloc_alloc_template<0> >*, int, void);
	vector<RouteGoal,__malloc_alloc_template<0> >& operator=();
	void reserve();
	RouteGoal& front();
	RouteGoal& front();
	RouteGoal& back();
	RouteGoal& back();
	void push_back();
	void swap();
	RouteGoal* insert();
	RouteGoal* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct XRoute : private vector<RouteGoal,__malloc_alloc_template<0> > {
private:
	RoutingSlot fSlot;
	cXObject *fDest;
	cXObject *fStart;
	Int fCurGoal;
	Int fMaxScore;
	Int fTrapCount;
	Int fWaitStartTicks;
	FTilePt fLastLocation;
	cXPortal *fCurPortal;
	FTilePt fStartPt;
	Int fExitDirFlag;
	bool fValid;
	cXPerson *fIgnore;
	cXPerson *fMoving;
	bool fMoveSuccess;
	Int fResult;
	SInt16 fBlockingObjectID;
	bool fIgnoreAllPeople;
	Int fMoveInteractionID;
	SInt16 fFootprintMask;
	Int fMaxGoalCount;
	
public:
	XRoute& operator=();
	XRoute(XRoute &_ctor_arg);
	XRoute(XRoute*, int, void);
private:
	void ChooseStartingPoint();
	void ConstructGoals();
	EvalTile EvalTileForGoal(FTilePt &loc, Int facingDirection);
	void Construct(cXObject *start, cXObject *dest, RoutingSlot *slot);
public:
	XRoute();
	XRoute();
	void BuildGoalList();
	bool FindPath(TileList &outTileList);
	int CountGoals();
	RouteGoal& GetNthGoal(int n);
	Int GetMaxScore();
	void AddGoal(RouteGoal &goal);
	bool HasCurrentGoal();
	RouteGoal& GetCurrentGoal();
	void SetCurrentGoal(Int goal);
	void ClearCurrentGoal();
	void ResetGoals();
	RoutingSlot* GetRoutingSlot();
	cXObject* GetDest();
	cXObject* GetStart();
	bool IsPersonSittingOnChairGoal(cXPerson *person);
	void DoStream(ReconBuffer *r, SInt32 version);
	Int GetTrapCount();
	void SetTrapCount(XRoute*, int, void);
	Int GetWaitStartTicks();
	void SetWaitStartTicks(XRoute*, int, void);
	FTilePt& GetLastLocation();
	void SetLastLocation();
	cXPortal* GetCurPortal();
	void SetCurPortal();
	SInt16 GetFootprintMask();
	void SetFootprintMask();
	FTilePt& GetStartPt();
	void SetStartPt();
	Int GetExitDirFlag();
	void SetExitDirFlag(XRoute*, int, void);
	bool GetValid();
	void SetValid();
	static float GetPersonVisibilityRadius(/* parameters unknown */);
	cXPerson* GetPersonToIgnore();
	void SetPersonToIgnore();
	cXPerson* GetMovingPerson();
	Int GetMovingInteractionID();
	void SetMovingPerson();
	bool GetMoveSuccess();
	void SetMoveSuccess();
	Int GetResult();
	void SetResult(XRoute*, int, void);
	SInt16 GetBlockingObjectID();
	void SetIgnoreAllPeople();
	bool ShouldIgnore(cXObject *obj);
};

// warning: multiple differing types with the same name (name not equal)
struct cXPerson : virtual cXObject {
	cXObject *$vb966;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1079;
	
	cXPerson& operator=();
	cXPerson();
protected:
	cXPerson();
	/* vtable[1] */ virtual cXPerson(cXPerson*, int, void);
	void setPersonImpl();
public:
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPerson*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPerson*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[12] */ virtual float GetMotive();
	/* vtable[13] */ virtual float* GetMotiveRef();
	/* vtable[14] */ virtual float* GetOldMotiveRef();
	/* vtable[15] */ virtual void SetMotive();
	/* vtable[16] */ virtual void SimMotives();
	/* vtable[17] */ virtual void CalcHappy();
	/* vtable[18] */ virtual bool AddAction();
	/* vtable[19] */ virtual bool RemoveAction();
	/* vtable[20] */ virtual Int CountActions();
	/* vtable[21] */ virtual Interaction* GetIndAction();
	/* vtable[22] */ virtual Interaction& GetCurrentAction();
	/* vtable[23] */ virtual Interaction& GetLastAction();
	/* vtable[24] */ virtual void DeleteTopAction();
	/* vtable[25] */ virtual void DebugDumpHappyScape();
	/* vtable[26] */ virtual void Skipping3D();
	/* vtable[27] */ virtual bool IsSelected();
	/* vtable[28] */ virtual StdPrm GetPersonData();
	/* vtable[29] */ virtual void SetPersonData();
	/* vtable[30] */ virtual StdPrm* GetPersonDataArray();
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[33] */ virtual StdPrm GetIdleState();
	/* vtable[34] */ virtual bool IsCarrying();
	/* vtable[35] */ virtual TileList* GetDestList();
	/* vtable[36] */ virtual SAnimator* GetSAnimator();
	/* vtable[37] */ virtual void GetJobSuitTex();
	/* vtable[38] */ virtual RoomID GetCurrentRoom();
	/* vtable[39] */ virtual void UpdateCurrentRoom();
	/* vtable[40] */ virtual SInt16 GetNeighborID();
	/* vtable[41] */ virtual void SetNeighborID();
	/* vtable[42] */ virtual bool IsSleeping();
	/* vtable[43] */ virtual bool IsRouting();
	/* vtable[44] */ virtual bool IsVisitor();
	/* vtable[45] */ virtual bool IsChild();
	/* vtable[46] */ virtual bool IsMale();
	/* vtable[47] */ virtual bool IsFemale();
	/* vtable[48] */ virtual bool IsAdult();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(cXPerson*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPerson*, int, void);
	/* vtable[61] */ virtual int GetRecordStartTicks();
	/* vtable[62] */ virtual int GetRecordCurTicks();
	/* vtable[63] */ virtual int GetRecordTicksElapsed();
	/* vtable[64] */ virtual Skill* GetRecordSkill();
	/* vtable[65] */ virtual void StartRecording();
	/* vtable[66] */ virtual void StopRecording();
	/* vtable[67] */ virtual void ClearRecording();
	/* vtable[68] */ virtual int TickRecording();
	/* vtable[69] */ virtual void LogEvent();
	/* vtable[70] */ virtual void Track();
	/* vtable[71] */ virtual bool ShouldInterrupt();
	/* vtable[72] */ virtual cXObject* GetControllingObject();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
	cXPersonImpl* CAST_IMPL();
};

struct ScoredInteraction {
	SInt16 fStackObjectID;
	Int fActionIndex;
	float fAttenScore;
	bool fAutoFirstSelect;
};

typedef vector<ScoredInteraction,__malloc_alloc_template<0> > ScoredInteractionVector;

struct ObjectRecord {
	cXObjectImpl *fObject;
	Int fStackLevel;
	bool fHasIcon;
	
	ObjectRecord& operator=();
	ObjectRecord();
	ObjectRecord();
	void DoStream(ReconBuffer *r, SInt32 ver);
};

typedef Queue<Interaction,8> ActionQueue;

struct MotiveInc {
	Int whichMotive;
	float incPerTick;
	float limit;
	
	MotiveInc& operator=();
	MotiveInc();
	MotiveInc();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct vector<MotiveInc,__malloc_alloc_template<0> > {
protected:
	MotiveInc *start;
	MotiveInc *finish;
	MotiveInc *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	MotiveInc* begin();
	MotiveInc* begin();
	MotiveInc* end();
	MotiveInc* end();
	reverse_iterator<MotiveInc *,MotiveInc,MotiveInc &,int> rbegin();
	reverse_iterator<const MotiveInc *,MotiveInc,const MotiveInc &,int> rbegin();
	reverse_iterator<MotiveInc *,MotiveInc,MotiveInc &,int> rend();
	reverse_iterator<const MotiveInc *,MotiveInc,const MotiveInc &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	MotiveInc& operator[]();
	MotiveInc& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<MotiveInc,__malloc_alloc_template<0> >*, int, void);
	vector<MotiveInc,__malloc_alloc_template<0> >& operator=();
	void reserve();
	MotiveInc& front();
	MotiveInc& front();
	MotiveInc& back();
	MotiveInc& back();
	void push_back();
	void swap();
	MotiveInc* insert();
	MotiveInc* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct vector<XRoute,__malloc_alloc_template<0> > {
protected:
	XRoute *start;
	XRoute *finish;
	XRoute *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	XRoute* begin();
	XRoute* begin();
	XRoute* end();
	XRoute* end();
	reverse_iterator<XRoute *,XRoute,XRoute &,int> rbegin();
	reverse_iterator<const XRoute *,XRoute,const XRoute &,int> rbegin();
	reverse_iterator<XRoute *,XRoute,XRoute &,int> rend();
	reverse_iterator<const XRoute *,XRoute,const XRoute &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	XRoute& operator[]();
	XRoute& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<XRoute,__malloc_alloc_template<0> >*, int, void);
	vector<XRoute,__malloc_alloc_template<0> >& operator=();
	void reserve();
	XRoute& front();
	XRoute& front();
	XRoute& back();
	XRoute& back();
	void push_back();
	void swap();
	XRoute* insert();
	XRoute* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct vector<ObjectRecord,__malloc_alloc_template<0> > {
protected:
	ObjectRecord *start;
	ObjectRecord *finish;
	ObjectRecord *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	ObjectRecord* begin();
	ObjectRecord* begin();
	ObjectRecord* end();
	ObjectRecord* end();
	reverse_iterator<ObjectRecord *,ObjectRecord,ObjectRecord &,int> rbegin();
	reverse_iterator<const ObjectRecord *,ObjectRecord,const ObjectRecord &,int> rbegin();
	reverse_iterator<ObjectRecord *,ObjectRecord,ObjectRecord &,int> rend();
	reverse_iterator<const ObjectRecord *,ObjectRecord,const ObjectRecord &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	ObjectRecord& operator[]();
	ObjectRecord& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<ObjectRecord,__malloc_alloc_template<0> >*, int, void);
	vector<ObjectRecord,__malloc_alloc_template<0> >& operator=();
	void reserve();
	ObjectRecord& front();
	ObjectRecord& front();
	ObjectRecord& back();
	ObjectRecord& back();
	void push_back();
	void swap();
	ObjectRecord* insert();
	ObjectRecord* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

extern Boolean gDrawDebugRoutes;
extern Boolean gDrawPersonOrigin;
extern float gMinAutonomyFamilyScore;
extern float gMinAutonomyVisitorScore;
extern float gMinAutonomySittingScore;
extern int gInteractionRandCount;
extern float gFunctionalScoreDistanceAttenuation;
extern int gFriendshipThreshold;
extern Int cXPerson::kSimTicksPerMotiveTick;
extern int gThoughtBubbleZTweak;
extern __vtbl_ptr_type AutonomyConstantsClient virtual table[5];
extern __vtbl_ptr_type cXPersonImpl::TreeSimImpl virtual table[6];
extern __vtbl_ptr_type cXPersonImpl::cXObjectImpl virtual table[8];
extern __vtbl_ptr_type cXPersonImpl::cXPerson virtual table[75];
extern __vtbl_ptr_type cXPersonImpl::cXObject virtual table[140];
extern __vtbl_ptr_type cXPersonImpl::TreeSim virtual table[18];
extern __vtbl_ptr_type RoutingSlot virtual table[3];
extern __vtbl_ptr_type ObjectSlot virtual table[3];
extern __vtbl_ptr_type Slot virtual table[3];
extern __vtbl_ptr_type cXPerson virtual table[75];
extern __vtbl_ptr_type cXPerson::cXObject virtual table[140];
extern __vtbl_ptr_type cXPerson::TreeSim virtual table[18];

ConstantsClient* GetAutonomyConstantsClient();
void cXPerson::~cXPerson(int __in_chrg);
void cXPersonImpl::~cXPersonImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
ObjectSlot* ObjectSlot * copy_backward<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result);
ObjectSlot* ObjectSlot * uninitialized_copy<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result);
void vector<ObjectSlot, __malloc_alloc_template<0> >::insert_aux(ObjectSlot *position, ObjectSlot &x);
SpriteSlot* SpriteSlot * copy_backward<SpriteSlot *, SpriteSlot *>(SpriteSlot *first, SpriteSlot *last, SpriteSlot *result);
SpriteSlot* SpriteSlot * uninitialized_copy<SpriteSlot *, SpriteSlot *>(SpriteSlot *first, SpriteSlot *last, SpriteSlot *result);
void vector<SpriteSlot, __malloc_alloc_template<0> >::insert_aux(SpriteSlot *position, SpriteSlot &x);
ScoredInteraction* ScoredInteraction * uninitialized_copy<ScoredInteraction *, ScoredInteraction *>(ScoredInteraction *first, ScoredInteraction *last, ScoredInteraction *result);
MotiveInc* MotiveInc * uninitialized_copy<MotiveInc *, MotiveInc *>(MotiveInc *first, MotiveInc *last, MotiveInc *result);
MotiveInc* MotiveInc * copy_backward<MotiveInc *, MotiveInc *>(MotiveInc *first, MotiveInc *last, MotiveInc *result);
void vector<MotiveInc, __malloc_alloc_template<0> >::insert_aux(MotiveInc *position, MotiveInc &x);
FTilePt* FTilePt * copy_backward<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result);
FTilePt* FTilePt * uninitialized_copy<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result);
void vector<FTilePt, __malloc_alloc_template<0> >::insert_aux(FTilePt *position, FTilePt &x);
RouteGoal* RouteGoal * uninitialized_copy<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result);
XRoute* XRoute * copy_backward<XRoute *, XRoute *>(XRoute *first, XRoute *last, XRoute *result);
XRoute* XRoute * uninitialized_copy<XRoute *, XRoute *>(XRoute *first, XRoute *last, XRoute *result);
void vector<XRoute, __malloc_alloc_template<0> >::insert_aux(XRoute *position, XRoute &x);
vector<RouteGoal,__malloc_alloc_template<0> >& vector<RouteGoal, __malloc_alloc_template<0> >::operator=(vector<RouteGoal,__malloc_alloc_template<0> > &x);
cXPersonImpl** cXPersonImpl ** copy_backward<cXPersonImpl **, cXPersonImpl **>(cXPersonImpl **first, cXPersonImpl **last, cXPersonImpl **result);
cXPersonImpl** cXPersonImpl ** uninitialized_copy<cXPersonImpl **, cXPersonImpl **>(cXPersonImpl **first, cXPersonImpl **last, cXPersonImpl **result);
void vector<cXPersonImpl *, __malloc_alloc_template<0> >::insert_aux(cXPersonImpl **position, cXPersonImpl *&x);
void void fill<XRoute *, XRoute>(XRoute *first, XRoute *last, XRoute &value);
XRoute* XRoute * uninitialized_fill_n<XRoute *, unsigned int, XRoute>(XRoute *first, unsigned int n, XRoute &x);
void vector<XRoute, __malloc_alloc_template<0> >::insert(XRoute *position, unsigned int n, XRoute &x);
void void DoContainerStream<vector<XRoute, __malloc_alloc_template<0> >, XRoute>(vector<XRoute,__malloc_alloc_template<0> > &cont, XRoute *dummy, ReconBuffer *r, SInt32 version);
ObjectRecord* ObjectRecord * uninitialized_copy<ObjectRecord *, ObjectRecord *>(ObjectRecord *first, ObjectRecord *last, ObjectRecord *result);
ObjectRecord* ObjectRecord * copy_backward<ObjectRecord *, ObjectRecord *>(ObjectRecord *first, ObjectRecord *last, ObjectRecord *result);
void void fill<ObjectRecord *, ObjectRecord>(ObjectRecord *first, ObjectRecord *last, ObjectRecord &value);
ObjectRecord* ObjectRecord * uninitialized_fill_n<ObjectRecord *, unsigned int, ObjectRecord>(ObjectRecord *first, unsigned int n, ObjectRecord &x);
void vector<ObjectRecord, __malloc_alloc_template<0> >::insert(ObjectRecord *position, unsigned int n, ObjectRecord &x);
void void DoContainerStream<vector<ObjectRecord, __malloc_alloc_template<0> >, ObjectRecord>(vector<ObjectRecord,__malloc_alloc_template<0> > &cont, ObjectRecord *dummy, ReconBuffer *r, SInt32 version);
void void fill<MotiveInc *, MotiveInc>(MotiveInc *first, MotiveInc *last, MotiveInc &value);
MotiveInc* MotiveInc * uninitialized_fill_n<MotiveInc *, unsigned int, MotiveInc>(MotiveInc *first, unsigned int n, MotiveInc &x);
void vector<MotiveInc, __malloc_alloc_template<0> >::insert(MotiveInc *position, unsigned int n, MotiveInc &x);
void void DoContainerStream<vector<MotiveInc, __malloc_alloc_template<0> >, MotiveInc>(vector<MotiveInc,__malloc_alloc_template<0> > &cont, MotiveInc *dummy, ReconBuffer *r, SInt32 version);
ScoredInteraction* ScoredInteraction * copy_backward<ScoredInteraction *, ScoredInteraction *>(ScoredInteraction *first, ScoredInteraction *last, ScoredInteraction *result);
void vector<ScoredInteraction, __malloc_alloc_template<0> >::insert_aux(ScoredInteraction *position, ScoredInteraction &x);
void vector<ObjectRecord, __malloc_alloc_template<0> >::insert_aux(ObjectRecord *position, ObjectRecord &x);
void Slot::~Slot(int __in_chrg);
void ObjectSlot::~ObjectSlot(int __in_chrg);
void RoutingSlot::~RoutingSlot(int __in_chrg);
void global constructors keyed to gDrawDebugRoutes();
void global destructors keyed to gDrawDebugRoutes();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_PERSON_H

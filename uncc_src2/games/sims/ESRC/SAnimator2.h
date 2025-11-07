// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_SANIMATOR2_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_SANIMATOR2_H

typedef PropRef *PropNameID;

enum PropKind {
	kAnchor = 0,
	kFootstep = 1,
	kInterruptable = 2,
	kLeftHand = 3,
	kRightHand = 4,
	kSound = 5,
	kXEvt = 6,
	kRumble = 7,
	kShadowEvt = 8,
	kSplash = 9,
	kParticle = 10
};

struct TimePropsAssociation {
	Int time;
	PropKind kind;
	union {
		Int number;
		ESimBoneIdx boneId;
		EventMapping *pEvent;
		RumbleDataElement *pRumble;
		EAnimParticleData *pParticle;
	} value;
};

enum BoneNums {
	kPelvisBone = 1,
	kHeadBone = 17,
	kHeadNub = 18,
	kRightHandBone = 39
};

enum FootSound {
	kOutdoors = 0,
	kConcrete = 1,
	kTile = 2,
	kWood = 3,
	kCarpet = 4,
	kGravel = 5,
	kFoliage = 6,
	kTrash = 7,
	kAsh = 8,
	kRoach = 9,
	kPuddle = 10,
	kPool = 11
};

typedef TRedBlackTree<unsigned int,TRedBlackTree<unsigned int,EBoneParticle *> *> EActiveBoneParticleTree;

struct EPropItem {
	u32 Id;
	bool DrawInWindow;
	ERModel *Model;
};

struct vector<EPropItem *,__malloc_alloc_template<0> > {
protected:
	EPropItem **start;
	EPropItem **finish;
	EPropItem **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	EPropItem** begin();
	EPropItem** begin();
	EPropItem** end();
	EPropItem** end();
	reverse_iterator<EPropItem **,EPropItem *,EPropItem *&,int> rbegin();
	reverse_iterator<EPropItem *const *,EPropItem *,EPropItem *const &,int> rbegin();
	reverse_iterator<EPropItem **,EPropItem *,EPropItem *&,int> rend();
	reverse_iterator<EPropItem *const *,EPropItem *,EPropItem *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	EPropItem*& operator[]();
	EPropItem*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<EPropItem *,__malloc_alloc_template<0> >*, int, void);
	vector<EPropItem *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	EPropItem*& front();
	EPropItem*& front();
	EPropItem*& back();
	EPropItem*& back();
	void push_back();
	void swap();
	EPropItem** insert();
	EPropItem** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct SAnimator2 : SAnimator {
protected:
	cXPerson *m_pPerson;
	ESim *m_pSim;
	TileList *m_pDestList;
	int m_FollowState;
	int m_LastFollowState;
	int m_CurrentDestNode;
	int m_FollowMode;
	bool m_StartOfPath;
	int m_MovementAnimationState;
	EVec2 m_Pos;
	bool m_ResetPos;
	float m_Dir;
	float m_RenderPosX;
	float m_RenderPosY;
	bool m_UseMovementPos;
	float m_CumulativeMoveTime;
	int m_iAnimDuration;
	float m_fAnimInterval;
	SkillNameID m_skillName;
	bool m_bBackwards;
	vector<int,__malloc_alloc_template<0> > m_eventQueue;
	bool m_bAnimatePrimitiveEntered;
	int m_iAnimatePrimitiveEventCount;
	EVec2 m_ContinueDestination;
	float m_TimeMultiplier;
	float m_LastTimeMultiplier;
	int m_WalkRunStyle;
	float m_LastWalkRunWeight;
	float m_WalkRunWeight;
	float m_LastSpeed;
	bool m_FadeInShuffle;
	float m_ShuffleIntensity;
	float m_LastShuffleIntensity;
	int m_ShuffleDir;
	int m_SkillTrackNum;
	int m_IdleMode;
	bool m_IdleInitialized;
	int m_IdleState;
	int m_ShuffleTrackNum;
	int m_WalkTrackNum;
	int m_SkillPlayTrackNum;
	int m_SkillBlendTrackNum;
	int m_SkillBlendProceedureTrackNum;
	float m_BlendTime;
	float m_BlendAccumulator;
	int m_BlendSkillTrackNum;
	bool m_HoldTransferredTrack;
	int m_CarryTrackNum;
	int m_IdleTrackNum;
	SkillNameID m_CustomIdleSkill;
	int m_CarryState;
	int m_CarryAnim;
	bool m_CarryOverride;
	vector<float,__malloc_alloc_template<0> > m_FloatArray;
	vector<float,__malloc_alloc_template<0> > m_FloatArray2;
	ERModel *m_UpperBodyCostumeRef;
	ERModel *m_LowerBodyCostumeRef;
	ERModel *m_ShoesCostumeRef;
	int m_LastCostume;
	EVec3 m_CarryPos;
	EVec3 m_CarryDir;
	EVec3 m_HeadPos;
	EVec3 m_PelvisPos;
	int m_LastIntDir;
	int m_LastPosX;
	int m_LastPosY;
	vector<EPropItem *,__malloc_alloc_template<0> > m_PropItemArray;
	int m_HappySadTrackNum;
	int m_LastHappySadAnimId;
	EBound3 m_CensorBoundingBox;
	bool m_DrawCensor;
	EMat4 m_mHeadOrient;
	float m_FootprintTiming;
	bool m_UpdateFootprints;
	int m_MinMovementIndex;
	int m_bFirstFollowRoute;
	char m_AnimationName[5][128];
	EActiveBoneParticleTree m_activeParticles;
	bool m_bInCensorship;
	ERShader *m_pPixelizationShader[3];
	u32 m_CurrentAnimationId;
	u32 m_SpecialOverrideAnimId;
	bool m_bSpecialAnimOverride;
	bool m_bCheckDrawCurtain;
	
public:
	SAnimator2& operator=();
	SAnimator2();
	SAnimator2();
	/* vtable[1] */ virtual SAnimator2(SAnimator2*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[2] */ virtual Boolean Initialize(cXPerson *person);
	/* vtable[3] */ virtual void Render(int which);
	/* vtable[4] */ virtual void Update();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void ResetSuits();
	/* vtable[7] */ virtual void SnapToGrid();
	/* vtable[8] */ virtual void ForceLocation();
	/* vtable[9] */ virtual TreeReturnCode TryAnimate(StackElem *elem, AnimateNewParam *param);
	/* vtable[10] */ virtual TreeReturnCode TryChangeSuit();
	/* vtable[11] */ virtual void SetAnimDisplacements(float xdisp, float ydisp, float dirdisp);
	/* vtable[12] */ virtual void BeginFollow();
	/* vtable[13] */ virtual TreeReturnCode FollowOneStep();
	/* vtable[14] */ virtual bool EndFollow();
	/* vtable[15] */ virtual int IsFollowing();
	/* vtable[16] */ virtual int IsInterruptable();
	/* vtable[17] */ virtual int StartReachAnimation(float height, bool extending);
	/* vtable[18] */ virtual int IsReachDone();
	/* vtable[19] */ virtual void StopReachAnimation();
	/* vtable[20] */ virtual void LookTowards(int targetID);
	/* vtable[21] */ virtual void LookTowards(SAnimator2*, int, void);
	/* vtable[22] */ virtual void Tick();
	/* vtable[23] */ virtual int DequeueAnimEvent(int *number);
	/* vtable[24] */ virtual void ReconStream(ReconBuffer *r, SInt32 version);
	/* vtable[25] */ virtual void ResetCensorship();
	/* vtable[26] */ virtual void SetPixelated(int val);
	/* vtable[27] */ virtual void Dress(PropNameID pProp);
	/* vtable[28] */ virtual void Undress(PropNameID pProp);
	/* vtable[29] */ virtual void GetCarryHandPosAndDir(EVec3 &Pos, EVec3 &Dir);
	/* vtable[30] */ virtual void DrawProps(ERC *prc, bool InWindow);
	/* vtable[31] */ virtual void DrawCensor(ERC *prc);
	/* vtable[33] */ virtual void GetBonePosAndDirForParticle(u32 bone, EMat4 &refMat);
	/* vtable[32] */ virtual void GetBonePos(BoneNums Bone, EVec3 &Pos);
	static FootSound GetFootSound(/* parameters unknown */);
	int getPersonX();
	int getPersonY();
	float getPersonDirection();
	void setPersonDirection(float dir);
	void moveAnimation();
	void rotateAnimation(float DeltaTime);
	void advanceAlongNode(float &DeltaTime);
	void continuePath(float &DeltaTime);
	void moveTowardsDestination(float &DeltaTime, EVec2 &Target);
	void handleShuffle();
	void updateMovementAnimations();
	void updateCensor();
	void adjustAnimationPlayRates();
	void updateRenderAnimation();
	void positionCharacter();
	void handleActionBlending();
	void handleShuffleAnimation();
	void handleIdleAnimation();
	void handleWalkRunAnimation();
	void handleFootprintSounds();
	void handleMoodAnimations();
	void playFootprint();
	int getFootSound(int foot);
	void updateRenderModels();
	void eventHandler(TimePropsAssociation &event);
	void processEvents(AnimRef &aref, int iStartTime, int interval, bool bBackward);
	EMat4& GetHeadOrient();
	void convertAnimationFormatToEngineFormat(EVec3 &InVec, EVec3 &OutVec);
	TreeReturnCode resolveSkillForPrimitive(StackElem *elem, AnimateNewParam *param, SkillNameID &theSkill);
	bool startSkill(SkillNameID skill, bool bBackwards);
	void footstepEvent(int val);
	bool isAnimationDone();
	void stopCurAnim();
	void blendAndTransferActionTrack();
	void updateCarryAnimation();
	void lockHandsUpCarryNodes();
	void lockCarryArmNodes();
	bool wearNormal();
	bool setJobModel();
	bool setNewModel(char *rowname, bool Override);
	bool removeCostume();
	void removeAllProps();
	void adjustCensorBox(EBound3 &bbox, EVec3 &Point, E3DWindow *pWin);
	void playRumble(RumbleDataElement *pRumble);
	void addAnimationName(char *Name);
	void drawLastAnimationNames(ERC *prc);
	u32 getCorrectId(PropNameID pProp);
	void procBoneParticleEvt(EAnimParticleData *pParticleData);
	void cleanupParticles();
	void updateParticles();
	void beginCensorParticles();
	void endCensorParticles();
};

struct AnimateNewParam {
	StdPrm animID;
	UInt8 localNumForEvent;
	UInt8 _pad;
	SInt8 source;
	SInt8 flags;
	SInt8 expectedEventCount;
	
	AnimateNewParam& operator=();
	AnimateNewParam();
	AnimateNewParam();
	bool GetBackwards();
	void SetBackwards();
	bool GetUsesStackVar();
	void SetUsesStackVar();
	bool GetInterruptible();
	void SetInterruptible();
	bool GetHurryable();
	void SetHurryable();
	bool GetUseLocalForEvents();
	void SetUseLocalForEvents();
	Int GetBehavior();
	void SetBehavior();
};

extern bool _bShowAnimNames;
extern __vtbl_ptr_type SAnimator2 virtual table[35];
extern __vtbl_ptr_type SAnimator virtual table[35];

void SAnimator2::~SAnimator2(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
EPropItem** EPropItem ** copy_backward<EPropItem **, EPropItem **>(EPropItem **first, EPropItem **last, EPropItem **result);
EPropItem** EPropItem ** uninitialized_copy<EPropItem **, EPropItem **>(EPropItem **first, EPropItem **last, EPropItem **result);
void vector<EPropItem *, __malloc_alloc_template<0> >::insert_aux(EPropItem **position, EPropItem *&x);
float* float * uninitialized_copy<float *, float *>(float *first, float *last, float *result);
int* int * copy_backward<int *, int *>(int *first, int *last, int *result);
int* int * uninitialized_copy<int *, int *>(int *first, int *last, int *result);
void vector<int, __malloc_alloc_template<0> >::insert_aux(int *position, int &x);
void SAnimator::~SAnimator(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_SANIMATOR2_H

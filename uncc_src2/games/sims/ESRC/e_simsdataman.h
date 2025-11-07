// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_E_SIMSDATAMAN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_E_SIMSDATAMAN_H

enum ESimsPreloadMode {
	kPreloadModeNone = 0,
	kPreloadModeSavegame = 1,
	KPreloadModeSelector = 2
};

struct ESimsDataManager : EResourceManager {
private:
	ESimsPreloadMode m_mode;
	u32 m_uTotalCompleted;
	u32 m_uTotalListSize;
	int m_iWorkQueued;
	static EResourceManager *_pCurrentManager;
	ObjSelector *m_pCurrentSelector;
	ObjectSaveTypeTable2 *m_pSaveTable;
	
public:
	ESimsDataManager& operator=();
	ESimsDataManager();
	ESimsDataManager();
	/* vtable[1] */ virtual ESimsDataManager(ESimsDataManager*, int, void);
	void LoadGamePrep(bool bWait);
	float GetLoadProgress();
	void PostLoadGame();
	void LoadSelectorData(ObjSelector *sel, bool bWait);
	void UnloadSelectorData(ObjSelector *sel, bool bWait);
	void QueueCommand(ESim *pSim, u32 command);
	void Flush();
	static bool compareID(/* parameters unknown */);
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
private:
	void undoPreload(ObjSelector *sel);
	void preload(ObjSelector *sel);
	void preloadResources(EEvent &event);
	void incWorkQueued();
	void decWorkQueued();
};

struct ESim : ISimInstance {
	static ETypeInfo m_typeInfo;
	static EHeap m_MyHeap;
protected:
	cXPerson *m_pPerson;
	ERModel *m_Models[6];
	u32 m_nTypeOfObject;
	unsigned int m_QueuedModelIds[6];
	unsigned int m_OriginalModelIds[6];
	bool m_bSwitchOutfits;
	bool m_bUseVanityDraw;
	ERModel *m_GlassesModel;
	ERModel *m_plowResShadowModel;
	ERModel *m_pPlumBob;
	EShader *m_SimShader;
	EVec3 m_Pos;
	EVec2 m_vMotiveDelta[8];
	ERModel *m_pTrackBase;
	ERModel *m_pTrackH;
	ERModel *m_pTrackCirDash;
	float m_ringRot;
	float m_scaletime;
	float m_fPreviousMotive[8];
	int m_ring_S0;
	int m_ring_S1;
	u32 m_uQueuedUpperBodyID;
	u32 m_uQueuedLowerBodyID;
	u32 m_uQueuedShoeID;
	ERShader *m_pESimShadow;
	bool m_bDontDrawHead;
	bool m_bOverrideDefaultSkin;
	bool m_bDrawShadow;
	bool m_bGetSign;
	bool m_bDontDrawCurtain;
	bool m_bDontDrawSim;
	int m_iQueueCount;
private:
	ESims3DHead *m_pSimHead;
	Costume *m_pInCostume;
	Costume *m_pVanityCostume;
	bool m_bSimIsHidden;
	ERModel *m_pShowerCurtain;
	int m_SkinChangeStage;
	float m_CurtainLevel;
	Costume *m_pCostumeToChangeTo;
	bool m_bSkipDrawNextFrame;
	
public:
	ESim& operator=();
	ESim();
	static ESim* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESim* CreateCopy();
	ESim();
	ESim();
	/* vtable[6] */ virtual ESim(ESim*, int, void);
	/* vtable[10] */ virtual void Update();
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[39] */ virtual void SetXOb(cXObject *p);
	/* vtable[19] */ virtual void CalcLights3(EVec3 &vPos, ELights3 &lights3Out);
	/* vtable[35] */ virtual void TestForCursorOverlap(int player, float cursrad, OverlapMode mode);
	/* vtable[36] */ virtual EVec3 GetObCenter();
	bool IsMale();
	bool IsFemale();
	bool IsAdult();
	bool IsChild();
	void SetAnim(char *nextSkill);
	cXPerson* GetPerson();
	static void SimOrderTableCallback(/* parameters unknown */);
	static void NpcOrderTableCallback(/* parameters unknown */);
	void CreateSkin(Costume *InCostume);
	void CreateSkinAsync(Costume *InCostume);
	EShader* GetSkin();
	ERModel* GetPart(int nBodyPart);
	void AlterBody(CustomCharacter *pOldBody, u32 nMessageID);
	ESims3DHead* GetSimHead();
	void DrawShadowAndPlumBob(ERC *prc);
	void SetShadowState(Int state);
	void CreateThumbnail(bool bIsSimStanding);
	bool HasQueuedOperation();
	void SetVanityDraw(bool bUse, u32 nType);
	bool UseVanityDraw(u32 *nType);
	float GetScaler();
	static void ScaleBones(/* parameters unknown */);
	EVec2* GetMotiveDelta(u32 nIndex);
protected:
	void DrawCursorHighLight(ERC *prc);
public:
	static void* DefaultAlloc(/* parameters unknown */);
	static void DefaultFree(/* parameters unknown */);
private:
	void initModel();
	void flushQueuedCostumeModels();
	void createSkinDirect(Costume *InCostume);
	void changeClothingColor(u8 nColorIndex, ERRleTexture *pTexture, u32 *pStoredPalette);
	void changeSkinColor(u8 nColorIndex, ERRleTexture *pTexture, u32 *pStoredPalette);
	void changeHairColor(u8 nColorIndex, ERRleTexture *pTexture, u32 *pStoredPalette);
	void restorePalette(ERRleTexture *pTexture, u32 *pStoredPalette);
	static u32 HSLtoRGB(/* parameters unknown */);
	static void RGBtoHSL(/* parameters unknown */);
	void tProcessCommand(u32 command);
	void UpdateSkinChange();
	u32 GetRGBFromSkinColor(u8 nColorIndex);
	void GetHSLChangeFromSkinColor(u8 nColorIndex, float &fHueOffset, float &fSatOffset, float &fLumOffset);
};

enum SeekType {
	ST_SET = 0,
	ST_CURRENT = 1,
	ST_END = 2,
	ST_UNSPECIFIED = 3,
	_ST_COUNT = 4
};

// warning: multiple differing types with the same name (enum constant not equal)
enum ErrorCode {
	ER_NONE = 0,
	ER_EOF = 1,
	ER_INVALID_HANDLE = 2,
	ER_INVALID_ARGUMENT = 3,
	ER_IO_FAULT = 4,
	ER_OUTOFMEMORY = 5,
	ER_ACCESS_DENIED = 6,
	ER_FILE_EXISTS = 7,
	ER_FILE_NOT_FOUND = 8,
	ER_DEVICE_NOT_FOUND = 9,
	ER_WRITE_PROTECT = 10,
	ER_TOO_MANY_OPEN_FILES = 11,
	ER_DEVICE_FULL = 12,
	ER_UNKNOWN = 13,
	_ER_COUNT = 14
};

extern ESimsDataManager _simsdataman;
extern EResourceManager *ESimsDataManager::_pCurrentManager;
extern __vtbl_ptr_type SimpleReconObject<ObjectSaveTypeTable2> virtual table[5];
extern __vtbl_ptr_type ESimsDataManager virtual table[7];
extern __vtbl_ptr_type EDummyFile virtual table[18];
extern __vtbl_ptr_type EFile virtual table[18];

bool isResInList(vector<unsigned int,__malloc_alloc_template<0> > &resList, u32 id);
void collectResInfoForSel(ObjSelector *pSel, vector<unsigned int,__malloc_alloc_template<0> > &resList);
void collectResInfoForMultSel(ObjSelector *pSel, vector<unsigned int,__malloc_alloc_template<0> > &resList, vector<ObjSelector *,__malloc_alloc_template<0> > *pSelList);
void addRefList(vector<unsigned int,__malloc_alloc_template<0> > &resList, u32 *pTotalCompleted);
void delRefList(vector<unsigned int,__malloc_alloc_template<0> > &resList);
void ESimsDataManager::~ESimsDataManager(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
u32* unsigned int * copy_backward<unsigned int *, unsigned int *>(u32 *first, u32 *last, u32 *result);
u32* unsigned int * uninitialized_copy<unsigned int *, unsigned int *>(u32 *first, u32 *last, u32 *result);
void vector<unsigned int, __malloc_alloc_template<0> >::insert_aux(u32 *position, u32 &x);
ObjSelector** ObjSelector ** copy_backward<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result);
ObjSelector** ObjSelector ** uninitialized_copy<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result);
void vector<ObjSelector *, __malloc_alloc_template<0> >::insert_aux(ObjSelector **position, ObjSelector *&x);
int int __lg<int>(int n);
void void __push_heap<unsigned int *, int, unsigned int, bool (*)>(u32 *first, int holeIndex, int topIndex, unsigned int value, bool (*comp)(/* parameters unknown */));
void void __adjust_heap<unsigned int *, int, unsigned int, bool (*)>(u32 *first, int holeIndex, int len, unsigned int value, bool (*comp)(/* parameters unknown */));
void void __make_heap<unsigned int *, bool (*), unsigned int, int>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */));
void void sort_heap<unsigned int *, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */));
void void __partial_sort<unsigned int *, unsigned int, bool (*)>(u32 *first, u32 *middle, u32 *last, bool (*comp)(/* parameters unknown */));
u32* unsigned int * __unguarded_partition<unsigned int *, unsigned int, bool (*)>(u32 *first, u32 *last, unsigned int pivot, bool (*comp)(/* parameters unknown */));
void void __introsort_loop<unsigned int *, unsigned int, int, bool (*)>(u32 *first, u32 *last, int depth_limit, bool (*comp)(/* parameters unknown */));
void void __unguarded_linear_insert<unsigned int *, unsigned int, bool (*)>(u32 *last, unsigned int value, bool (*comp)(/* parameters unknown */));
void void __insertion_sort<unsigned int *, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */));
void void __unguarded_insertion_sort_aux<unsigned int *, unsigned int, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */));
void void __final_insertion_sort<unsigned int *, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */));
ErrType int ReconLoadObject<ObjectSaveTypeTable2>(ObjectSaveTypeTable2 *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
void SimpleReconObject<ObjectSaveTypeTable2>::~SimpleReconObject(int __in_chrg);
void EFile::~EFile(int __in_chrg);
void EDummyFile::~EDummyFile(int __in_chrg);
void global constructors keyed to _simsdataman();
void global destructors keyed to _simsdataman();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_E_SIMSDATAMAN_H

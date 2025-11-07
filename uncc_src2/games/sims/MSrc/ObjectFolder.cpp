// STATUS: NOT STARTED

#include "ObjectFolder.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1581;
	__vtbl_ptr_type *$vf1627;
	
	cXObject& operator=();
	cXObject();
protected:
	cXObject();
	/* vtable[1] */ virtual cXObject(cXObject*, int, void);
	void setObjectImpl();
	void setPersonImpl();
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[7] */ virtual void SetHilite(cXObject*, int, void);
	/* vtable[8] */ virtual Int GetHilite();
	/* vtable[9] */ virtual void SetMiscFlag();
	/* vtable[10] */ virtual bool GetMiscFlag();
	/* vtable[11] */ virtual void UpdateSimFlags();
	/* vtable[12] */ virtual void Dirty();
	/* vtable[13] */ virtual void SetRenderLayer();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[15] */ virtual RenderLayer GetRenderLayer();
	/* vtable[16] */ virtual bool IsRenderingRoot();
	/* vtable[17] */ virtual RECT& GetLastDamage();
	/* vtable[18] */ virtual void SetLastDamage();
	/* vtable[19] */ virtual void ResetDamage();
	/* vtable[20] */ virtual bool IsEmissive();
	/* vtable[21] */ virtual bool IsBeingDraggedAround();
	/* vtable[22] */ virtual void CenterHouseViewOnMe();
	/* vtable[23] */ virtual void SetDrawLabel();
	/* vtable[24] */ virtual bool IsSpriteVisible();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static void SetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[29] */ virtual void Error();
	/* vtable[30] */ virtual void HandleError();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[41] */ virtual bool FindGoodLocation();
	/* vtable[42] */ virtual void GetPlacementInfo();
	/* vtable[43] */ virtual bool IsInWorld();
	/* vtable[44] */ virtual bool TestIntersection();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[46] */ virtual ObjFnTable* GetFnTable();
	/* vtable[47] */ virtual SInt16 GetTreeID();
	/* vtable[48] */ virtual void SetLevel(cXObject*, int, void);
	/* vtable[49] */ virtual bool IsOccupied();
	/* vtable[50] */ virtual void SetData();
	/* vtable[51] */ virtual void SetTemp();
	/* vtable[52] */ virtual void SetAttr();
	/* vtable[53] */ virtual ObjectProbe* GetObjectProbe();
	/* vtable[54] */ virtual void SetObjectProbe();
	/* vtable[55] */ virtual cXObject* GetInteractionLeader();
	/* vtable[56] */ virtual Int GetFrontFaceDirection();
	/* vtable[57] */ virtual ObjectFolder* GetFolder();
	/* vtable[58] */ virtual bool SimIndependent();
	/* vtable[59] */ virtual bool SimEnabled();
	/* vtable[60] */ virtual void EnableSim();
	/* vtable[61] */ virtual int GetIdleStatus();
	/* vtable[62] */ virtual void SetIdleStatus(cXObject*, int, void);
	/* vtable[63] */ virtual void ClearIdleStatus();
	/* vtable[64] */ virtual FTileRect& GetRect();
	/* vtable[65] */ virtual SInt16 GetData();
	/* vtable[66] */ virtual SInt16 GetTemp();
	/* vtable[67] */ virtual SInt16 GetAttr();
	/* vtable[68] */ virtual ObjectModule* GetModule();
	/* vtable[69] */ virtual AnimTable* GetAdultAnimTable();
	/* vtable[70] */ virtual AnimTable* GetChildAnimTable();
	/* vtable[71] */ virtual bool HideForCutaway();
	/* vtable[72] */ virtual TileWallsSegment GetRequiredSegment();
	/* vtable[73] */ virtual Int CountObjectSlots();
	/* vtable[74] */ virtual ObjectSlot* GetObjectSlot();
	/* vtable[75] */ virtual cXObject* GetContainedObject();
	/* vtable[76] */ virtual float GetSlotHeight();
	/* vtable[77] */ virtual cXObject* GetContainer();
	/* vtable[78] */ virtual bool IsContained();
	/* vtable[79] */ virtual SInt16 GetContainerID();
	/* vtable[80] */ virtual SInt16 GetContainedSlotNum();
	/* vtable[81] */ virtual cXObject* GetNextObjectSibling();
	/* vtable[82] */ virtual cXObject* GetPrevObjectSibling();
	/* vtable[83] */ virtual RoomID GetRoom();
	/* vtable[84] */ virtual ObjDefinition* GetDef();
	/* vtable[85] */ virtual SInt16 GetType();
	/* vtable[86] */ virtual void GetTypeName();
	/* vtable[87] */ virtual SInt16 GetID();
	/* vtable[88] */ virtual void GetLocation();
	/* vtable[89] */ virtual FTilePt& GetLocation();
	/* vtable[90] */ virtual int GetLevel();
	/* vtable[91] */ virtual CTilePt GetCTilePt();
	/* vtable[92] */ virtual TreeTable* GetTreeTab();
	/* vtable[93] */ virtual ObjSelector* GetSelector();
	/* vtable[94] */ virtual Behavior* GetBehavior();
	/* vtable[95] */ virtual iResFile* GetSelFile();
	static Int GetPersonWidth(/* parameters unknown */);
	/* vtable[96] */ virtual Int GetTileWidth();
	/* vtable[97] */ virtual bool IsMultiTile();
	/* vtable[98] */ virtual StdPrm GetFlags();
	/* vtable[99] */ virtual SInt16 GetWallPlacementFlags();
	/* vtable[100] */ virtual RelMatrix& GetRelMatrix();
	/* vtable[101] */ virtual cXObject* GetObstacleAtLocation();
	/* vtable[102] */ virtual int GetNumRoutingSlots();
	/* vtable[103] */ virtual RoutingSlot& GetRoutingSlot();
	/* vtable[104] */ virtual SInt16 GetCurrentValue();
	/* vtable[105] */ virtual SInt16 GetSize();
	/* vtable[106] */ virtual cSimulator* GetSim();
	/* vtable[107] */ virtual void GetErrorString();
	/* vtable[108] */ virtual Int GetAgeInMinutes();
	/* vtable[109] */ virtual bool CanChooseAutonomously();
	/* vtable[110] */ virtual int GetBuildModeType();
	/* vtable[111] */ virtual bool IsSupport();
	/* vtable[112] */ virtual bool ShouldAutoRotate();
	/* vtable[113] */ virtual bool CanContributeLight();
	/* vtable[114] */ virtual Int GetLightingContribution();
	/* vtable[115] */ virtual ObjectLightSource GetObjectLightSource();
	/* vtable[116] */ virtual bool IsDeletedByEvict();
	/* vtable[117] */ virtual bool IsFromCatalog();
	/* vtable[118] */ virtual bool IsBroken();
	/* vtable[119] */ virtual bool IsDirty();
	/* vtable[120] */ virtual bool IsBurning();
	/* vtable[121] */ virtual bool CanBurn();
	/* vtable[122] */ virtual bool IsFireproof();
	/* vtable[123] */ virtual bool HasZeroExtent();
	/* vtable[124] */ virtual bool CanIntersectPeople();
	/* vtable[125] */ virtual bool IsChair();
	/* vtable[126] */ virtual cXObject* GetObjectFromID();
	/* vtable[127] */ virtual cXObject* GetNext();
	/* vtable[128] */ virtual cXObject* GetFirst();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	static Int GetWallBlockFlagsAtTile(/* parameters unknown */);
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
	cXObjectImpl* CAST_IMPL();
};

struct vector<vector<char *,__malloc_alloc_template<0> >,__malloc_alloc_template<0> > {
protected:
	vector<char *,__malloc_alloc_template<0> > *start;
	vector<char *,__malloc_alloc_template<0> > *finish;
	vector<char *,__malloc_alloc_template<0> > *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	vector<char *,__malloc_alloc_template<0> >* begin();
	vector<char *,__malloc_alloc_template<0> >* begin();
	vector<char *,__malloc_alloc_template<0> >* end();
	vector<char *,__malloc_alloc_template<0> >* end();
	reverse_iterator<vector<char *,__malloc_alloc_template<0> > *,vector<char *,__malloc_alloc_template<0> >,vector<char *,__malloc_alloc_template<0> > &,int> rbegin();
	reverse_iterator<const vector<char *,__malloc_alloc_template<0> > *,vector<char *,__malloc_alloc_template<0> >,const vector<char *,__malloc_alloc_template<0> > &,int> rbegin();
	reverse_iterator<vector<char *,__malloc_alloc_template<0> > *,vector<char *,__malloc_alloc_template<0> >,vector<char *,__malloc_alloc_template<0> > &,int> rend();
	reverse_iterator<const vector<char *,__malloc_alloc_template<0> > *,vector<char *,__malloc_alloc_template<0> >,const vector<char *,__malloc_alloc_template<0> > &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	vector<char *,__malloc_alloc_template<0> >& operator[]();
	vector<char *,__malloc_alloc_template<0> >& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<vector<char *,__malloc_alloc_template<0> >,__malloc_alloc_template<0> >*, int, void);
	vector<vector<char *,__malloc_alloc_template<0> >,__malloc_alloc_template<0> >& operator=();
	void reserve();
	vector<char *,__malloc_alloc_template<0> >& front();
	vector<char *,__malloc_alloc_template<0> >& front();
	vector<char *,__malloc_alloc_template<0> >& back();
	vector<char *,__malloc_alloc_template<0> >& back();
	void push_back();
	void swap();
	vector<char *,__malloc_alloc_template<0> >* insert();
	vector<char *,__malloc_alloc_template<0> >* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct Spreadsheet {
private:
	vector<vector<char *,__malloc_alloc_template<0> >,__malloc_alloc_template<0> > fSheet;
	
public:
	Spreadsheet& operator=();
	Spreadsheet();
	Spreadsheet();
	Spreadsheet(Spreadsheet*, int, void);
	ErrType ReadFromFile();
	ErrType SaveToFile();
	int CountRows();
	int CountColumns();
	void GetEntry();
	char* GetEntry();
	void SetEntry();
	int GetIntegerValue();
	void SetIntegerValue();
};

typedef HashList<ObjSelector,int,256> SelectorList;

struct UserDataSaveLoad {
	s32 guid;
	BString2 name;
	CustomCharacter fCustomCharacter;
	
	UserDataSaveLoad& operator=();
	UserDataSaveLoad();
	UserDataSaveLoad();
	UserDataSaveLoad(UserDataSaveLoad*, int, void);
	void DoStream();
};

struct HashList<ObjSelector,int,256> {
	ObjSelector *table[256];
	
	HashList<ObjSelector,int,256>& operator=();
	HashList();
	HashList();
	HashList(HashList<ObjSelector,int,256>*, int, void);
private:
	void resetHash(HashList<ObjSelector,int,256>*, int, void);
	int getSize();
public:
	void clear();
	int size();
	void addNode();
	void addNode();
	void removeNode();
	void deleteItem();
	ObjSelector* findItem();
	ObjSelector* findItem();
	HashIterator<ObjSelector,int,256> find();
	HashIterator<ObjSelector,int,256> find();
	HashIterator<ObjSelector,int,256> begin();
	HashIterator<ObjSelector,int,256> end();
};

struct vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > {
protected:
	ObjectTypeAttrBlock **start;
	ObjectTypeAttrBlock **finish;
	ObjectTypeAttrBlock **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	ObjectTypeAttrBlock** begin();
	ObjectTypeAttrBlock** begin();
	ObjectTypeAttrBlock** end();
	ObjectTypeAttrBlock** end();
	reverse_iterator<ObjectTypeAttrBlock **,ObjectTypeAttrBlock *,ObjectTypeAttrBlock *&,int> rbegin();
	reverse_iterator<ObjectTypeAttrBlock *const *,ObjectTypeAttrBlock *,ObjectTypeAttrBlock *const &,int> rbegin();
	reverse_iterator<ObjectTypeAttrBlock **,ObjectTypeAttrBlock *,ObjectTypeAttrBlock *&,int> rend();
	reverse_iterator<ObjectTypeAttrBlock *const *,ObjectTypeAttrBlock *,ObjectTypeAttrBlock *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	ObjectTypeAttrBlock*& operator[]();
	ObjectTypeAttrBlock*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> >*, int, void);
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	ObjectTypeAttrBlock*& front();
	ObjectTypeAttrBlock*& front();
	ObjectTypeAttrBlock*& back();
	ObjectTypeAttrBlock*& back();
	void push_back();
	void swap();
	ObjectTypeAttrBlock** insert();
	ObjectTypeAttrBlock** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct TGrowPool<ObjSelector> : EGrowPool {
	TGrowPool<ObjSelector>& operator=();
	TGrowPool();
	TGrowPool(TGrowPool<ObjSelector>*, int, void);
	TGrowPool();
	ObjSelector* Alloc();
	void Free();
protected:
	void Free();
};

// warning: multiple differing types with the same name (type name not equal)
struct vector<int,__malloc_alloc_template<0> > {
protected:
	SInt32 *start;
	SInt32 *finish;
	SInt32 *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	SInt32* begin();
	SInt32* begin();
	SInt32* end();
	SInt32* end();
	reverse_iterator<int *,int,int &,int> rbegin();
	reverse_iterator<const int *,int,const int &,int> rbegin();
	reverse_iterator<int *,int,int &,int> rend();
	reverse_iterator<const int *,int,const int &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	SInt32& operator[]();
	SInt32& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<int,__malloc_alloc_template<0> >*, int, void);
	vector<int,__malloc_alloc_template<0> >& operator=();
	void reserve();
	SInt32& front();
	SInt32& front();
	SInt32& back();
	SInt32& back();
	void push_back();
	void swap();
	SInt32* insert();
	SInt32* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct ObjectFolderImpl : ObjectFolder, BehaviorFinder, Commander {
	bool fInitialized;
	QuickFileAllocator *fQuickFileList;
	SelectorList fSelectors;
	QuickResFile *fGlobalFile;
	FileName fObjPath;
	FileName fPath;
	bool fSkipDisabled;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > fTypeAttrBlocks;
	TGrowPool<ObjSelector> fSelAllocator;
	vector<int,__malloc_alloc_template<0> > fSaveTypes;
	ERQuickdata *m_pObjectData;
	ERQuickdata *m_pCreateSimData;
	ResFile *m_pGlobUserResFile;
	ObjDefinition *m_pTemplateUserDef;
	SInt16 m_fLastResID;
	u32 m_uBasePreloadCost;
	u32 m_uCurrentPreloadCost;
	u32 m_uCurrentPerformanceCost;
	
	ObjectFolderImpl& operator=();
	ObjectFolderImpl();
	ObjectFolderImpl();
	/* vtable[1] */ virtual ObjectFolderImpl(ObjectFolderImpl*, int, void);
	/* vtable[2] */ virtual void Init(char *scenPath, bool skipDisabled);
	/* vtable[3] */ virtual void Destroy();
	/* vtable[4] */ virtual Boolean DoCommand(SInt16 com, SInt32 inf);
	/* vtable[5] */ virtual char* GetPath();
	/* vtable[6] */ virtual iResFile* GetGlobFile();
	/* vtable[7] */ virtual iResFile* GetPersonGlobFile();
	/* vtable[8] */ virtual void FreeUnusedData();
	/* vtable[9] */ virtual void DeleteUserSelectors();
	/* vtable[10] */ virtual void ReconSelector(ObjSelector **selector, ReconBuffer *r, bool useTypeTab, SInt32 version);
	/* vtable[11] */ virtual void ReconBehavior(Behavior **behavior, ReconBuffer *r, SInt32 version);
	/* vtable[12] */ virtual Int CountSelectors();
	/* vtable[13] */ virtual ObjSelector* GetNextSelector(ObjSelector *sel);
	/* vtable[14] */ virtual ObjSelector* GetSelectorByGUID(SInt32 guid);
	/* vtable[15] */ virtual ObjSelector* GetSelectorByBehavior(Behavior *behavior);
	/* vtable[16] */ virtual ObjSelector* GetSubTileSelector(ObjSelector *original, Int subxcoord, Int subycoord, Int levelOff);
	/* vtable[17] */ virtual ObjSelector* GetLeadSelector(ObjSelector *original);
	/* vtable[18] */ virtual ObjSelector* GetMasterSelector(ObjSelector *original);
	/* vtable[19] */ virtual ObjSelector* GetNthSubSelector(ObjSelector *original, int n);
	/* vtable[20] */ virtual ObjectTypeAttrBlock* GetTypeAttrBlock(SInt32 guid);
	void NewFileAdded();
	/* vtable[21] */ virtual ErrType SetSemiGlobalFile(Behavior *behavior, StringBuffer &newFileName, StringBuffer &errorText);
	/* vtable[22] */ virtual bool RemoveSelector(ObjSelector *sel);
	/* vtable[24] */ virtual void LoadUserData(iResFile *file);
	/* vtable[25] */ virtual void SaveUserData(iResFile *file);
	/* vtable[23] */ virtual ObjSelector* CreateNewUserSelector();
	/* vtable[26] */ virtual void SuspendObjectFiles();
	/* vtable[27] */ virtual void ResumeObjectFiles();
	/* vtable[28] */ virtual void CreatingInstance(ObjSelector *sel);
	/* vtable[29] */ virtual void DeletingInstance(ObjSelector *sel);
	/* vtable[30] */ virtual void CreatingResFile(iResFile *pFile);
	/* vtable[31] */ virtual void DeletingResFile(iResFile *pFile);
	/* vtable[32] */ virtual void PrepareForModuleLoad(iResFile *file);
	/* vtable[33] */ virtual void PrepareForModuleSave(iResFile *file);
	/* vtable[34] */ virtual ErrType Save(iResFile *file);
	/* vtable[35] */ virtual ErrType Load(iResFile *file);
	/* vtable[36] */ virtual void DoStream(ReconBuffer *rb, SInt32 version);
	/* vtable[37] */ virtual ObjSelector* GetPlaceholder();
	/* vtable[38] */ virtual void OpenResFile(ObjSelector *sel);
	/* vtable[39] */ virtual void GetTreeTable(ObjSelector *sel);
	/* vtable[47] */ virtual void ApplyBCONTuningForFile(ObjResFile *objFile);
	/* vtable[48] */ virtual BehaviorFinder* GetBehaviorFinder();
	/* vtable[49] */ virtual ERQuickdata& GetObjectsDatabase();
	/* vtable[50] */ virtual EventMapping* GetSndEventByName(char *pName);
	/* vtable[51] */ virtual AnimRef* GetAnimRefByName(char *pName);
	/* vtable[52] */ virtual void GetAnimPreloadList(ChecksumList &animList);
	/* vtable[53] */ virtual void PreloadSelectors();
	/* vtable[40] */ virtual bool ForceDataPreload(ObjSelector *objSel, bool bWait);
	/* vtable[54] */ virtual void forceDataPreload(ObjSelector *sel, bool bWait);
	/* vtable[41] */ virtual u32 CalcPreloadMemoryCost(ObjSelector *objSel);
	/* vtable[42] */ virtual u32 CalcUnloadMemorySaving(ObjSelector *objSel);
	/* vtable[43] */ virtual u32 GetCurrentMemoryCost();
	/* vtable[44] */ virtual u32 GetBaseMemoryCost();
	u32 calcPreloadMemoryCost(ObjSelector *sel);
	u32 calcUnloadMemorySaving(ObjSelector *sel);
	/* vtable[45] */ virtual u32 CalcPerformanceCost(ObjSelector *objSel);
	/* vtable[46] */ virtual u32 GetCurrentPerformanceCost();
	u32 calcPerformanceCost(ObjSelector *sel);
	ObjSelector* AddUserSelector(Sint32 guid, Sint16 resID);
	void AddSelector(ObjDefinition *pObjDefinition, char *pObjName, char *pModuleName, ResFile *pResData, SInt16 defID, NPC *pNPCBody);
	void DestroySelector(ObjSelector *sel);
	void UnloadData(ObjSelector *sel);
	void LoadDatabase();
	void ApplyTTABTuningForSel(ObjSelector *sel);
	void unloadPreloadSelectors();
};

struct FileAllocator<QuickResFile> : FileList {
	FileAllocator<QuickResFile>& operator=();
	FileAllocator();
	FileAllocator();
	FileAllocator(FileAllocator<QuickResFile>*, int, void);
	QuickResFile* Find();
	QuickResFile* Get();
	bool Release();
	int size();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > begin();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > end();
};

struct QuickFileAllocator : FileAllocator<QuickResFile> {
};

struct ObjectSaveTypeTable {
private:
	ObjectFolderImpl *fFolder;
	
public:
	ObjectSaveTypeTable& operator=();
	ObjectSaveTypeTable();
	ObjectSaveTypeTable();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct HashIterator<ObjSelector,int,256> {
	HashList<ObjSelector,int,256> *pList;
	int i;
	ObjSelector *node;
	
	HashIterator<ObjSelector,int,256>& operator=();
	HashIterator();
	HashIterator();
	ObjSelector** operator++();
	bool operator==();
	bool operator!=();
	ObjSelector** operator ObjSelector **();
};

struct simple_alloc<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > {
	simple_alloc<ObjectTypeAttrBlock *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static ObjectTypeAttrBlock** allocate(/* parameters unknown */);
	static ObjectTypeAttrBlock** allocate(/* parameters unknown */);
	static ObjectTypeAttrBlock** allocate(/* parameters unknown */);
	static ObjectTypeAttrBlock** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

// warning: multiple differing types with the same name (type name not equal)
struct simple_alloc<int,__malloc_alloc_template<0> > {
	simple_alloc<int,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static SInt32* allocate(/* parameters unknown */);
	static SInt32* allocate(/* parameters unknown */);
	static SInt32* allocate(/* parameters unknown */);
	static SInt32* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct __rb_tree_const_iterator<pair<const ResFile *const,FileRec> > : __rb_tree_base_iterator {
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >& operator=();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	pair<const ResFile *const,FileRec>& operator*();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >& operator++();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > operator++();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >& operator--();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > operator--();
};

struct ERQTable<ObjDefinition> {
	char *pName;
	ObjDefinition *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct SimpleReconObject<UserDataSaveLoad> : ReconObject {
private:
	UserDataSaveLoad *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<UserDataSaveLoad>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<UserDataSaveLoad>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

struct SimpleReconObject<ThumbnailLoader> : ReconObject {
private:
	ThumbnailLoader *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ThumbnailLoader>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ThumbnailLoader>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

struct SimpleReconObject<ObjectSaveTypeTable> : ReconObject {
private:
	ObjectSaveTypeTable *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ObjectSaveTypeTable>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ObjectSaveTypeTable>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

struct SimpleReconObject<ObjectFolderImpl> : ReconObject {
private:
	ObjectFolderImpl *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ObjectFolderImpl>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ObjectFolderImpl>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

SInt32 kObjectTypeTableResType = 1868720756;
SInt32 kObjectTypeTableResID = 0;

__vtbl_ptr_type SimpleReconObject<ObjectFolderImpl> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectFolderImpl>::~SimpleReconObject,
		/* .__delta2 = */ 1192
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectFolderImpl>::DoStream,
		/* .__delta2 = */ 1224
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectFolderImpl>::GetType,
		/* .__delta2 = */ 1272
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SimpleReconObject<ObjectSaveTypeTable> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable>::~SimpleReconObject,
		/* .__delta2 = */ 1160
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable>::DoStream,
		/* .__delta2 = */ 1280
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable>::GetType,
		/* .__delta2 = */ 1312
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SimpleReconObject<ThumbnailLoader> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ThumbnailLoader>::~SimpleReconObject,
		/* .__delta2 = */ 1128
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ThumbnailLoader>::DoStream,
		/* .__delta2 = */ 1320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ThumbnailLoader>::GetType,
		/* .__delta2 = */ 1352
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SimpleReconObject<UserDataSaveLoad> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<UserDataSaveLoad>::~SimpleReconObject,
		/* .__delta2 = */ 1096
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<UserDataSaveLoad>::DoStream,
		/* .__delta2 = */ 1360
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<UserDataSaveLoad>::GetType,
		/* .__delta2 = */ 1464
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectFolderImpl::BehaviorFinder virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::ReconBehavior,
		/* .__delta2 = */ -11072
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectFolderImpl::Commander virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::~ObjectFolderImpl,
		/* .__delta2 = */ -19456
	},
	/* [2] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::DoCommand,
		/* .__delta2 = */ -1912
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectFolderImpl virtual table[56] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::~ObjectFolderImpl,
		/* .__delta2 = */ -19456
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::Init,
		/* .__delta2 = */ -16480
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::Destroy,
		/* .__delta2 = */ -16192
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::DoCommand,
		/* .__delta2 = */ -1912
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetPath,
		/* .__delta2 = */ 1016
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetGlobFile,
		/* .__delta2 = */ 1048
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetPersonGlobFile,
		/* .__delta2 = */ -10688
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::FreeUnusedData,
		/* .__delta2 = */ -5920
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::DeleteUserSelectors,
		/* .__delta2 = */ -5304
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::ReconSelector,
		/* .__delta2 = */ -11848
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::ReconBehavior,
		/* .__delta2 = */ -11072
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::CountSelectors,
		/* .__delta2 = */ -19032
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetNextSelector,
		/* .__delta2 = */ -18776
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetSelectorByGUID,
		/* .__delta2 = */ -18944
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetSelectorByBehavior,
		/* .__delta2 = */ -11448
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetSubTileSelector,
		/* .__delta2 = */ -17376
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetLeadSelector,
		/* .__delta2 = */ -17136
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetMasterSelector,
		/* .__delta2 = */ -16688
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetNthSubSelector,
		/* .__delta2 = */ -16928
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetTypeAttrBlock,
		/* .__delta2 = */ -4232
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::SetSemiGlobalFile,
		/* .__delta2 = */ -10696
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::RemoveSelector,
		/* .__delta2 = */ -9000
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::CreateNewUserSelector,
		/* .__delta2 = */ -9096
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::LoadUserData,
		/* .__delta2 = */ -10264
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::SaveUserData,
		/* .__delta2 = */ -9776
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::SuspendObjectFiles,
		/* .__delta2 = */ -1936
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::ResumeObjectFiles,
		/* .__delta2 = */ -1928
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::CreatingInstance,
		/* .__delta2 = */ -8192
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::DeletingInstance,
		/* .__delta2 = */ -8048
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::CreatingResFile,
		/* .__delta2 = */ -7936
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::DeletingResFile,
		/* .__delta2 = */ -7888
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::PrepareForModuleLoad,
		/* .__delta2 = */ -7840
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::PrepareForModuleSave,
		/* .__delta2 = */ -6696
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::Save,
		/* .__delta2 = */ -4168
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::Load,
		/* .__delta2 = */ -4128
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::DoStream,
		/* .__delta2 = */ -4088
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetPlaceholder,
		/* .__delta2 = */ -5968
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::OpenResFile,
		/* .__delta2 = */ -12816
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetTreeTable,
		/* .__delta2 = */ -1904
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::ForceDataPreload,
		/* .__delta2 = */ -8648
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::CalcPreloadMemoryCost,
		/* .__delta2 = */ -3008
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::CalcUnloadMemorySaving,
		/* .__delta2 = */ -2752
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetCurrentMemoryCost,
		/* .__delta2 = */ 1072
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetBaseMemoryCost,
		/* .__delta2 = */ 1080
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::CalcPerformanceCost,
		/* .__delta2 = */ -2232
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetCurrentPerformanceCost,
		/* .__delta2 = */ 1088
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::ApplyBCONTuningForFile,
		/* .__delta2 = */ -1944
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetBehaviorFinder,
		/* .__delta2 = */ 1056
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetObjectsDatabase,
		/* .__delta2 = */ 1064
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetSndEventByName,
		/* .__delta2 = */ -3712
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetAnimRefByName,
		/* .__delta2 = */ -3616
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::GetAnimPreloadList,
		/* .__delta2 = */ -3464
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::PreloadSelectors,
		/* .__delta2 = */ -18384
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolderImpl::forceDataPreload,
		/* .__delta2 = */ -8336
	},
	/* [55] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type GlobalConstantsClient virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &GlobalConstantsClient::GetFile,
		/* .__delta2 = */ -20920
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &GlobalConstantsClient::GetID,
		/* .__delta2 = */ -20872
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type BehaviorFinder virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectFolder virtual table[55] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectFolder::~ObjectFolder,
		/* .__delta2 = */ 968
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

u32 StringToHash(char *_name) {
	unsigned int result[4];
	int len;
	int diff;
	
  int iVar1;
  size_t sVar2;
  uint result [4];
  
  sVar2 = strlen(_name);
  iVar1 = (int)sVar2 + -0x10;
  if (0 < iVar1) {
    _name = _name + iVar1;
    sVar2 = (size_t)((int)sVar2 - iVar1);
  }
  if ((long)sVar2 < 0x10) {
    if ((long)sVar2 < 0xc) {
      if ((long)sVar2 < 8) {
        if ((long)sVar2 < 4) {
          if ((long)sVar2 < 2) {
            memset(result,(int)*_name,8);
          }
          else {
            memcpy(result,_name,2);
            memcpy((void *)((uint)result | 2),_name,2);
            memcpy((void *)((uint)result | 4),_name,2);
            memcpy((void *)((uint)result | 6),_name,2);
          }
        }
        else {
          memcpy(result,_name,4);
          memcpy((void *)((uint)result | 4),_name,4);
        }
      }
      else {
        memcpy(result,_name,8);
      }
    }
    else {
      memcpy(result,_name,0xc);
      result[1] = result[1] * result[2];
    }
  }
  else {
    memcpy(result,_name,0x10);
    result[0] = result[0] * result[2];
    result[1] = result[1] * result[3];
  }
  return result[0] * result[1];
}

ObjectFolder* ObjectFolder::CreateInstance() {
  ObjectFolderImpl *pOVar1;
  
  pOVar1 = (ObjectFolderImpl *)__builtin_new(0x684);
  pOVar1 = __16ObjectFolderImpl(pOVar1);
  return &pOVar1->field0_0x0;
}

void ObjectFolder::DestroyInstance(ObjectFolder *pInstance) {
  if (pInstance != (ObjectFolder *)0x0) {
    (*(code *)pInstance->__vtable->Destroy)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Init,3);
  }
  return;
}

static void ConvertToBackslash(StringBuffer &str) {
	int len;
	int i;
	
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = length__C12StringBuffer(str);
  if (0 < iVar1) {
    do {
      pcVar2 = buffer__12StringBuffer(str);
      if (pcVar2[iVar3] == '/') {
        pcVar2 = buffer__12StringBuffer(str);
        pcVar2[iVar3] = '\\';
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

void* ObjSelector::operator new(unsigned int size) {
	TGrowPool<ObjSelector> *this;
	EGrowPool *this;
	void *p;
	
  ObjectFolder__vtable *pOVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  pOVar1 = _5Globs_pObjectFolder[0x193].__vtable;
  if (pOVar1 == (ObjectFolder__vtable *)0x0) {
    pOVar1 = (ObjectFolder__vtable *)
             AllocNewSeg__9EGrowPool((EGrowPool *)(_5Globs_pObjectFolder + 0x193));
  }
  else {
    _5Globs_pObjectFolder[0x193].__vtable = *(ObjectFolder__vtable **)pOVar1;
  }
                    /* end of inlined section */
  return pOVar1;
}

void ObjSelector::operator delete(void *ptr) {
	ObjSelector *p;
	void *p;
	
  ObjectFolder *pOVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  pOVar1 = _5Globs_pObjectFolder;
  if (ptr != (void *)0x0) {
    *(ObjectFolder__vtable **)ptr = _5Globs_pObjectFolder[0x193].__vtable;
    pOVar1[0x193].__vtable = (ObjectFolder__vtable *)ptr;
  }
  return;
}

GlobalConstantsClient* GlobalConstantsClient::GlobalConstantsClient(SInt16 id) {
	ConstantsClient *this;
	
  this->fID = id;
  (this->field0_0x0).__vtable = (ConstantsClient__vtable *)_vt_21GlobalConstantsClient;
  return this;
}

iResFile* GlobalConstantsClient::GetFile() {
  iResFile__6_5027 *piVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  piVar1 = (iResFile__6_5027 *)
           (*(code *)_5Globs_pObjectFolder->__vtable->GetNextSelector)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->CountSelectors);
  return piVar1;
}

SInt16 GlobalConstantsClient::GetID() {
  return this->fID;
}

void ObjectSaveTypeTable::DoStream(ReconBuffer *r, SInt32 version) {
	SInt16 type;
	SInt16 objectType;
	SInt32 guid;
	SInt32 initTreeVersion;
	SInt32 mainTreeVersion;
	ReconBuffer *this;
	HashIterator<ObjSelector,int,256> it;
	HashIterator<ObjSelector,int,256> end;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *i;
	BString tempStr;
	ObjSelector *this;
	ObjSelector *this;
	HashIterator<ObjSelector,int,256> *this;
	BString tempStr;
	ObjSelector *sel;
	ObjSelector *this;
	ObjSelector *this;
	
  undefined *puVar1;
  ObjectFolderImpl *pOVar2;
  ObjectFolder__vtable *pOVar3;
  ulong *puVar4;
  byte bVar5;
  bool bVar6;
  CatalogResource *pCVar7;
  short **ppsVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ObjSelector *pOVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  BString tempStr;
  undefined local_cc [4];
  ObjSelector *local_c8;
  HashIterator_ObjSelector_int_256_ end;
  undefined local_b0 [8];
  ObjSelector *local_a8;
  HashIterator_ObjSelector_int_256_ result;
  ushort type;
  ushort objectType;
  int guid;
  int initTreeVersion;
  int mainTreeVersion;
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
  
  local_40 = (int)unaff_s4;
  uStack_3c = (int)((ulong)unaff_s4 >> 0x20);
  local_50 = (int)unaff_s3;
  uStack_4c = (int)((ulong)unaff_s3 >> 0x20);
  local_60 = (int)unaff_s2;
  uStack_5c = (int)((ulong)unaff_s2 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_20 = (int)unaff_s6;
  uStack_1c = (int)((ulong)unaff_s6 >> 0x20);
  local_30 = (int)unaff_s5;
  uStack_2c = (int)((ulong)unaff_s5 >> 0x20);
  local_70 = (int)unaff_s1;
  uStack_6c = (int)((ulong)unaff_s1 >> 0x20);
  local_80 = (int)unaff_s0;
  uStack_7c = (int)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  initTreeVersion = 0;
  mainTreeVersion = 0;
  if (r->fMode == kReading) {
    Recon32__11ReconBufferPii(r,&guid,1);
    do {
      if (guid == 0) {
        return;
      }
      if (0 < version) {
        Recon32__11ReconBufferPii(r,&initTreeVersion,1);
        Recon32__11ReconBufferPii(r,&mainTreeVersion,1);
      }
      Recon16__11ReconBufferPsi(r,&type,1);
      if (version < 2) {
        objectType = 0xffff;
      }
      else {
        Recon16__11ReconBufferPsi(r,&objectType,1);
      }
      __7BString(&tempStr);
      ReconString__11ReconBufferR7BString(r,&tempStr);
      pOVar3 = (this->fFolder->field0_0x0).__vtable;
      lVar10 = (*(code *)pOVar3->DeletingInstance)
                         ((int)&(this->fFolder->field0_0x0).__vtable +
                          (int)*(short *)&pOVar3->CreatingInstance,guid);
      if (lVar10 != 0) {
        pOVar12 = (ObjSelector *)lVar10;
        pOVar12->f_SaveType = type;
        if (version < 1) {
          bVar6 = GetIsPerson__11ObjSelector(pOVar12);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
          uVar11 = pOVar12->fFlags & 0xfffffffd;
          pOVar12->fFlags = uVar11;
          if (bVar6) goto LAB_0023b284;
        }
        else {
          bVar6 = false;
          iVar9 = GetInitTreeVersion__11ObjSelector(pOVar12);
          if ((iVar9 == initTreeVersion) &&
             (iVar9 = GetMainTreeVersion__11ObjSelector(pOVar12), iVar9 == mainTreeVersion)) {
            uVar11 = pOVar12->fFlags;
          }
          else {
            bVar6 = true;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
            uVar11 = pOVar12->fFlags;
          }
          uVar11 = uVar11 & 0xfffffffd;
          pOVar12->fFlags = uVar11;
          if (bVar6) {
LAB_0023b284:
                    /* end of inlined section */
            pOVar12->fFlags = uVar11 | 2;
          }
        }
                    /* end of inlined section */
        pOVar3 = (this->fFolder->field0_0x0).__vtable;
        (*(code *)pOVar3[2].ObjectFolder)
                  ((int)&(this->fFolder->field0_0x0).__vtable + (int)*(short *)(pOVar3 + 2),lVar10,1
                  );
      }
      Recon32__11ReconBufferPii(r,&guid,1);
      ___7BString(&tempStr,2);
    } while( true );
  }
  pOVar2 = this->fFolder;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
  result.pList = (HashList_ObjSelector_int_256_ *)&pOVar2->field26_0x20;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  local_c8 = (ObjSelector *)0x0;
  local_a8 = (ObjSelector *)0x0;
  local_b0 = (undefined  [8])CONCAT44(0x100,result.pList);
  puVar1 = (undefined *)((int)&end.i + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar11);
  *puVar4 = *puVar4 & -1L << (uVar11 + 1) * 8 | (ulong)local_b0 >> (7 - uVar11) * 8;
  end._0_8_ = (ulong)local_b0;
  end.node = (ObjSelector *)0x0;
  result.node = (ObjSelector *)0x0;
  result.i = 0;
  pOVar12 = (ObjSelector *)(pOVar2->field26_0x20).__vtable;
  if (pOVar12 == (ObjSelector *)0x0) {
    result.i = 0;
    do {
      result.i = result.i + 1;
      if (0xff < result.i) goto LAB_0023af58;
    } while ((ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable ==
             (ObjSelector *)0x0);
    result.node = (ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable;
  }
  else {
    result.node = pOVar12;
  }
LAB_0023af58:
  local_c8 = result.node;
  _tempStr = CONCAT44(result.i,result.pList);
  puVar1 = local_b0 + 7;
  uVar11 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar11) =
       *(ulong *)(puVar1 + -uVar11) & -1L << (uVar11 + 1) * 8 | _tempStr >> (7 - uVar11) * 8;
  local_b0 = (undefined  [8])_tempStr;
  local_a8 = local_c8;
  puVar1 = local_cc + 3;
                    /* end of inlined section */
  uVar11 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar11) =
       *(ulong *)(puVar1 + -uVar11) & -1L << (uVar11 + 1) * 8 | _tempStr >> (7 - uVar11) * 8;
  pOVar12 = local_c8;
  do {
    local_c8 = pOVar12;
    do {
      pOVar12 = local_c8;
      bVar5 = 0;
      if (local_cc == (undefined  [4])end.i) {
        bVar6 = true;
        if (local_c8 == end.node) {
          bVar5 = 1;
          if (tempStr.reference != (basic_string_ref *)end.pList) {
            bVar5 = 0;
          }
          goto LAB_0023b130;
        }
      }
      else {
LAB_0023b130:
        bVar6 = (bool)(bVar5 ^ 1);
      }
                    /* end of inlined section */
      if (!bVar6) {
        guid = 0;
        Recon32__11ReconBufferPii(r,&guid,1);
        return;
      }
                    /* end of inlined section */
      if (local_c8->f_SaveType != 0) {
        type = local_c8->f_SaveType;
        guid = GetGUID__11ObjSelector(local_c8);
        initTreeVersion = GetInitTreeVersion__11ObjSelector(pOVar12);
        mainTreeVersion = GetMainTreeVersion__11ObjSelector(pOVar12);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
        objectType = pOVar12->fHeader->type;
        __7BString((BString *)local_b0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
        if ((pOVar12->fHeader->masterID == 0) || (pOVar12->fHeader->subIndex == 0xffff)) {
          pCVar7 = GetCatalogResource__11ObjSelector(pOVar12);
          ppsVar8 = (short **)
                    (*(code *)pCVar7->__vtable[1].CatalogResource)
                              ((int)&pCVar7->__vtable + (int)*(short *)(pCVar7->__vtable + 1));
          assignDebug__7BStringPCUs((BString *)local_b0,*ppsVar8);
        }
        Recon32__11ReconBufferPii(r,&guid,1);
        Recon32__11ReconBufferPii(r,&initTreeVersion,1);
        Recon32__11ReconBufferPii(r,&mainTreeVersion,1);
        Recon16__11ReconBufferPsi(r,&type,1);
        Recon16__11ReconBufferPsi(r,&objectType,1);
        ReconString__11ReconBufferR7BString(r,(BString *)local_b0);
        ___7BString((BString *)local_b0,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
      }
      if (local_c8 == (ObjSelector *)0x0) break;
      local_c8 = local_c8->pNextHash;
      if (local_c8 == (ObjSelector *)0x0) {
        _tempStr = _tempStr & 0xffffffff | (ulong)((int)local_cc + 1) << 0x20;
      }
    } while (local_c8 != (ObjSelector *)0x0);
    while (pOVar12 = local_c8, (int)local_cc < 0x100) {
      pOVar12 = (ObjSelector *)(&(tempStr.reference)->ptr)[(int)local_cc];
      if ((ObjSelector *)(&(tempStr.reference)->ptr)[(int)local_cc] != (ObjSelector *)0x0) break;
      local_cc = (undefined  [4])((int)local_cc + 1);
      _tempStr = _tempStr & 0xffffffff | (ulong)(uint)local_cc << 0x20;
    }
  } while( true );
}

ObjectFolderImpl* ObjectFolderImpl::ObjectFolderImpl() {
	ObjectFolder *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	TGrowPool<ObjSelector> *this;
	int blockSize;
	EGrowPool *this;
	vector<int,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectFolder.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Behavior.h */
  *(__vtbl_ptr_type **)&this->field_0x4 = _vt_14BehaviorFinder;
                    /* end of inlined section */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (ObjectFolder__vtable *)_vt_12ObjectFolder;
  __9Commander((Commander *)&this->field_0x8);
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
                    /* end of inlined section */
  *(undefined4 *)&this->fInitialized = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
  this->fQuickFileList = (QuickFileAllocator *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (ObjectFolder__vtable *)_vt_16ObjectFolderImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
  *(__vtbl_ptr_type **)&this->field_0x14 = _vt_16ObjectFolderImpl_9Commander;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  *(__vtbl_ptr_type **)&this->field_0x4 = _vt_16ObjectFolderImpl_14BehaviorFinder;
  memset(&this->field26_0x20,0,0x400);
                    /* end of inlined section */
  this->fGlobalFile = (QuickResFile__125_899 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&(this->fObjPath).field0_0x0,(this->fObjPath).fChars,0x104);
  __12StringBufferPcUi(&(this->fPath).field0_0x0,(this->fPath).fChars,0x104);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->fTypeAttrBlocks).start = (ObjectTypeAttrBlock **)0x0;
                    /* end of inlined section */
  *(undefined4 *)&this->fSkipDisabled = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->fTypeAttrBlocks).end_of_storage = (ObjectTypeAttrBlock **)0x0;
  (this->fTypeAttrBlocks).finish = (ObjectTypeAttrBlock **)0x0;
  __9EGrowPool(&(this->fSelAllocator).field0_0x0);
  (this->fSelAllocator).field0_0x0.m_blockSize = 0x80;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->fSaveTypes).start = (int *)0x0;
  (this->fSaveTypes).end_of_storage = (int *)0x0;
  (this->fSaveTypes).finish = (int *)0x0;
                    /* end of inlined section */
  this->m_pObjectData = (ERQuickdata *)0x0;
  this->m_pCreateSimData = (ERQuickdata *)0x0;
  this->m_pGlobUserResFile = (ResFile *)0x0;
  this->m_pTemplateUserDef = (ObjDefinition *)0x0;
  this->m_fLastResID = 0;
  this->m_uBasePreloadCost = 0;
  this->m_uCurrentPreloadCost = 0;
  this->m_uCurrentPerformanceCost = 0;
  return this;
}

void ObjectFolderImpl::~ObjectFolderImpl(int __in_chrg) {
	vector<int,__malloc_alloc_template<0> > *this;
	SInt32 *last;
	SInt32 *first;
	SInt32 *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	ObjectTypeAttrBlock **last;
	ObjectTypeAttrBlock **first;
	ObjectTypeAttrBlock **pointer;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	int i;
	int index;
	ObjSelector *node;
	ObjectFolder *this;
	int __in_chrg;
	void *pAddress;
	
  int *piVar1;
  ObjectTypeAttrBlock **ppOVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *(__vtbl_ptr_type **)&this->field_0x4 = _vt_16ObjectFolderImpl_14BehaviorFinder;
  *(__vtbl_ptr_type **)&this->field_0x14 = _vt_16ObjectFolderImpl_9Commander;
  (this->field0_0x0).__vtable = (ObjectFolder__vtable *)_vt_16ObjectFolderImpl;
  Destroy__16ObjectFolderImpl(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  piVar4 = (this->fSaveTypes).start;
  piVar1 = (this->fSaveTypes).finish;
  if (piVar4 == piVar1) {
    piVar4 = (this->fSaveTypes).start;
  }
  else {
    do {
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
    piVar4 = (this->fSaveTypes).start;
  }
  if ((piVar4 != (int *)0x0) && ((int)(this->fSaveTypes).end_of_storage - (int)piVar4 >> 2 != 0)) {
    free(piVar4);
                    /* end of inlined section */
  }
  ___9EGrowPool(&(this->fSelAllocator).field0_0x0,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  for (ppOVar2 = (this->fTypeAttrBlocks).start; ppOVar2 != (this->fTypeAttrBlocks).finish;
      ppOVar2 = ppOVar2 + 1) {
  }
  ppOVar2 = (this->fTypeAttrBlocks).start;
  iVar5 = 0;
  if (ppOVar2 != (ObjectTypeAttrBlock **)0x0) {
    iVar3 = 0;
    if ((int)(this->fTypeAttrBlocks).end_of_storage - (int)ppOVar2 >> 2 == 0) goto LAB_0023b51c;
    free(ppOVar2);
  }
  iVar5 = 0;
  iVar3 = 0;
LAB_0023b51c:
  do {
    iVar5 = iVar5 + 1;
    piVar4 = (int *)((int)&(this->field26_0x20).__vtable + iVar3);
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      *piVar4 = 0;
      for (iVar3 = *(int *)(iVar3 + 0x7c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x7c)) {
      }
    }
    iVar3 = iVar5 * 4;
  } while (iVar5 < 0x100);
                    /* end of inlined section */
  ___9Commander((Commander *)&this->field_0x8,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectFolder.h */
  (this->field0_0x0).__vtable = (ObjectFolder__vtable *)_vt_12ObjectFolder;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

Int ObjectFolderImpl::CountSelectors() {
	HashList<ObjSelector,int,256> *this;
	int result;
	int i;
	int index;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	int result;
	
  BehaviorFinder__vtable *pBVar1;
  BehaviorFinder *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar4 = 0;
    pBVar2 = &this->field26_0x20 + iVar3;
    iVar3 = iVar3 + 1;
    for (pBVar1 = pBVar2->__vtable; pBVar1 != (BehaviorFinder__vtable *)0x0;
        pBVar1 = (BehaviorFinder__vtable *)pBVar1[0xf].ReconBehavior) {
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + iVar4;
  } while (iVar3 < 0x100);
                    /* end of inlined section */
  return iVar5;
}

ObjSelector* ObjectFolderImpl::GetSelectorByGUID(SInt32 guid) {
	HashList<ObjSelector,int,256> *this;
	SInt32 &cmp;
	unsigned int key;
	SInt32 &cmp;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	ObjSelector *prev;
	ObjSelector *this;
	SInt32 guid;
	
  ObjSelector *this_00;
  int iVar1;
  BehaviorFinder *pBVar2;
  ObjSelector *pOVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pBVar2 = &this->field26_0x20 + (guid & 0xff);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pOVar3 = (ObjSelector *)0x0;
  this_00 = (ObjSelector *)pBVar2->__vtable;
  while( true ) {
    if (this_00 == (ObjSelector *)0x0) {
      return (ObjSelector *)0x0;
    }
    iVar1 = GetGUID__11ObjSelector(this_00);
    if (guid == iVar1) break;
    pOVar3 = this_00;
    this_00 = this_00->pNextHash;
  }
  if (pOVar3 == (ObjSelector *)0x0) {
    return this_00;
  }
  pOVar3->pNextHash = this_00->pNextHash;
  this_00->pNextHash = (ObjSelector *)pBVar2->__vtable;
  pBVar2->__vtable = (BehaviorFinder__vtable *)this_00;
  return this_00;
                    /* end of inlined section */
}

ObjSelector* ObjectFolderImpl::GetNextSelector(ObjSelector *sel) {
	HashIterator<ObjSelector,int,256> it;
	HashList<ObjSelector,int,256> *this;
	SInt32 &cmp;
	SInt32 &cmp;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *this;
	SInt32 guid;
	HashIterator<ObjSelector,int,256> *this;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  BehaviorFinder *pBVar6;
  HashIterator_ObjSelector_int_256_ it;
  uint local_7c;
  ObjSelector *local_78;
  HashIterator_ObjSelector_int_256_ result;
  
  if (sel == (ObjSelector *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
    result.node = (ObjSelector *)0x0;
    result.i = 0;
    if (pOVar2 == (ObjSelector *)0x0) {
      result.i = 0;
      do {
        result.i = result.i + 1;
        pOVar2 = result.node;
        if (0xff < result.i) break;
        pOVar2 = (ObjSelector *)(&this->field26_0x20)[result.i].__vtable;
      } while (pOVar2 == (ObjSelector *)0x0);
    }
    result.node = pOVar2;
    puVar1 = (undefined *)((int)&it.i + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 |
              CONCAT44(result.i,&this->field26_0x20) >> (7 - uVar4) * 8;
    it.node = result.node;
  }
  else {
    uVar4 = GetGUID__11ObjSelector(sel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    pBVar6 = &this->field26_0x20;
    local_7c = uVar4 & 0xff;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    pOVar2 = (ObjSelector *)pBVar6[local_7c].__vtable;
    local_78 = (ObjSelector *)0x0;
    for (; pOVar2 != (ObjSelector *)0x0; pOVar2 = pOVar2->pNextHash) {
      uVar5 = GetGUID__11ObjSelector(pOVar2);
      if (uVar4 == uVar5) goto LAB_0023b728;
    }
    local_7c = 0x100;
    pOVar2 = local_78;
LAB_0023b728:
    local_78 = pOVar2;
    it._0_8_ = CONCAT44(local_7c,pBVar6);
    puVar1 = (undefined *)((int)&it.i + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | it._0_8_ >> (7 - uVar4) * 8;
    it.node = local_78;
    if (local_78 != (ObjSelector *)0x0) {
      it.node = local_78->pNextHash;
      if (it.node != (ObjSelector *)0x0) {
        return it.node;
      }
      it._0_8_ = CONCAT44(local_7c + 1,pBVar6);
    }
    while (it.i < 0x100) {
      if ((it.pList)->table[it.i] != (ObjSelector *)0x0) {
        return (it.pList)->table[it.i];
      }
      it.i = it.i + 1;
      it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(uint)it.i << 0x20;
    }
  }
  return it.node;
}

void ObjectFolderImpl::PreloadSelectors() {
	HashIterator<ObjSelector,int,256> end;
	HashIterator<ObjSelector,int,256> it;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *sel;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  ObjectFolder__vtable *pOVar3;
  uint uVar4;
  ulong *puVar5;
  byte bVar6;
  bool bVar7;
  HashIterator_ObjSelector_int_256_ end;
  HashIterator_ObjSelector_int_256_ it;
  undefined auStack_60 [8];
  ObjSelector *local_58;
  HashIterator_ObjSelector_int_256_ result;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  result.pList = (HashList_ObjSelector_int_256_ *)&this->field26_0x20;
  pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
  it.node = (ObjSelector *)0x0;
  it._0_8_ = CONCAT44(0x100,result.pList);
  puVar1 = (undefined *)((int)&end.i + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | it._0_8_ >> (7 - uVar4) * 8;
  end._0_8_ = it._0_8_;
  end.node = (ObjSelector *)0x0;
  it.node = (ObjSelector *)0x0;
  result.node = (ObjSelector *)0x0;
  result.i = 0;
  if (pOVar2 == (ObjSelector *)0x0) {
    result.i = 0;
    do {
      result.i = result.i + 1;
      if (0xff < result.i) goto LAB_0023b8d0;
    } while ((ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable ==
             (ObjSelector *)0x0);
    result.node = (ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable;
  }
  else {
    result.node = pOVar2;
  }
LAB_0023b8d0:
  it.node = result.node;
  it._0_8_ = CONCAT44(result.i,result.pList);
  puVar1 = auStack_60 + 7;
  uVar4 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar4) =
       *(ulong *)(puVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | it._0_8_ >> (7 - uVar4) * 8;
  auStack_60 = (undefined  [8])it._0_8_;
  local_58 = it.node;
  puVar1 = (undefined *)((int)&it.i + 3);
                    /* end of inlined section */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | it._0_8_ >> (7 - uVar4) * 8;
  pOVar2 = it.node;
  do {
    it.node = pOVar2;
    do {
      pOVar2 = it.node;
      bVar6 = 0;
      if (it.i == end.i) {
        bVar7 = true;
        if (it.node == end.node) {
          bVar6 = 1;
          if (it.pList != end.pList) {
            bVar6 = 0;
          }
          goto LAB_0023b9c8;
        }
      }
      else {
LAB_0023b9c8:
        bVar7 = (bool)(bVar6 ^ 1);
      }
                    /* end of inlined section */
      if (!bVar7) {
        if (this->m_uBasePreloadCost == 0) {
          this->m_uBasePreloadCost = this->m_uCurrentPreloadCost;
        }
        (*(code *)_pResLoader->__vtable->CloseAllArchiveFiles)
                  ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->OpenFiles);
        return;
      }
                    /* end of inlined section */
      bVar7 = IsPreloadable__C11ObjSelector(it.node);
      if (bVar7) {
        pOVar3 = (this->field0_0x0).__vtable;
        (*(code *)pOVar3[2].ObjectFolder)
                  ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pOVar3 + 2),pOVar2,1);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
      if (it.node == (ObjSelector *)0x0) break;
      it.node = (it.node)->pNextHash;
      if (it.node == (ObjSelector *)0x0) {
        it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(it.i + 1) << 0x20;
      }
    } while (it.node != (ObjSelector *)0x0);
    while ((pOVar2 = it.node, it.i < 0x100 &&
           (pOVar2 = (it.pList)->table[it.i], (it.pList)->table[it.i] == (ObjSelector *)0x0))) {
      it.i = it.i + 1;
      it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(uint)it.i << 0x20;
    }
  } while( true );
}

void ObjectFolderImpl::unloadPreloadSelectors() {
	HashIterator<ObjSelector,int,256> end;
	HashIterator<ObjSelector,int,256> it;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *sel;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  ResData *pRVar3;
  ulong *puVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  HashIterator_ObjSelector_int_256_ end;
  HashIterator_ObjSelector_int_256_ it;
  undefined auStack_60 [8];
  ObjSelector *local_58;
  HashIterator_ObjSelector_int_256_ result;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  result.pList = (HashList_ObjSelector_int_256_ *)&this->field26_0x20;
  pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
  it.node = (ObjSelector *)0x0;
  it._0_8_ = CONCAT44(0x100,result.pList);
  puVar1 = (undefined *)((int)&end.i + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar8);
  *puVar4 = *puVar4 & -1L << (uVar8 + 1) * 8 | it._0_8_ >> (7 - uVar8) * 8;
  end._0_8_ = it._0_8_;
  end.node = (ObjSelector *)0x0;
  it.node = (ObjSelector *)0x0;
  result.node = (ObjSelector *)0x0;
  result.i = 0;
  if (pOVar2 == (ObjSelector *)0x0) {
    result.i = 0;
    do {
      result.i = result.i + 1;
      if (0xff < result.i) goto LAB_0023bac0;
    } while ((ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable ==
             (ObjSelector *)0x0);
    result.node = (ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable;
  }
  else {
    result.node = pOVar2;
  }
LAB_0023bac0:
  it.node = result.node;
  it._0_8_ = CONCAT44(result.i,result.pList);
  puVar1 = auStack_60 + 7;
  uVar8 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar8) =
       *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 | it._0_8_ >> (7 - uVar8) * 8;
  auStack_60 = (undefined  [8])it._0_8_;
  local_58 = it.node;
  puVar1 = (undefined *)((int)&it.i + 3);
                    /* end of inlined section */
  uVar8 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar8);
  *puVar4 = *puVar4 & -1L << (uVar8 + 1) * 8 | it._0_8_ >> (7 - uVar8) * 8;
  pOVar2 = it.node;
  do {
    do {
      it.node = pOVar2;
      do {
        pOVar2 = it.node;
        bVar5 = 0;
        if (it.i == end.i) {
          bVar7 = true;
          if (it.node == end.node) {
            bVar5 = 1;
            if (it.pList != end.pList) {
              bVar5 = 0;
            }
            goto LAB_0023bbf8;
          }
        }
        else {
LAB_0023bbf8:
          bVar7 = (bool)(bVar5 ^ 1);
        }
                    /* end of inlined section */
        if (!bVar7) {
          return;
        }
                    /* end of inlined section */
        bVar7 = IsPreloadable__C11ObjSelector(it.node);
        if ((bVar7) && (pOVar2->fDesiredPreloadState == kDataLoaded)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pEORGlobals->__vtable->EndSaveGame)
                    ((int)_5Globs_pEORGlobals->_pSelectedSims +
                     *(short *)&_5Globs_pEORGlobals->__vtable->BeginSaveGame + -0x24,pOVar2);
          pRVar3 = pOVar2->fHeader->pResData;
          uVar8 = this->m_uCurrentPreloadCost;
          if (pRVar3 != (ResData *)0x0) {
            uVar8 = uVar8 - pRVar3->uMemoryCost;
          }
          this->m_uCurrentPreloadCost = uVar8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
        }
        if (it.node == (ObjSelector *)0x0) break;
        it.node = (it.node)->pNextHash;
        if (it.node == (ObjSelector *)0x0) {
          it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(it.i + 1) << 0x20;
        }
      } while (it.node != (ObjSelector *)0x0);
      pOVar2 = it.node;
    } while (0xff < it.i);
    iVar9 = it.i << 2;
    do {
      pOVar2 = *(ObjSelector **)((int)(it.pList)->table + iVar9);
      if (pOVar2 != (ObjSelector *)0x0) break;
      uVar8 = it.i + 1;
      iVar9 = uVar8 * 4;
      uVar6 = it._0_8_ & 0xffffffff;
      it._0_8_ = uVar6 | (ulong)uVar8 << 0x20;
      it.pList = (HashList_ObjSelector_int_256_ *)uVar6;
      pOVar2 = it.node;
    } while ((int)uVar8 < 0x100);
  } while( true );
}

ObjSelector* ObjectFolderImpl::GetSubTileSelector(ObjSelector *original, Int subxcoord, Int subycoord, Int levelOff) {
	ObjSelector *subsel;
	ObjDefinition *header;
	SInt16 masterID;
	SInt16 xycoord;
	ObjDefinition *this;
	
  ushort uVar1;
  ObjDefinition *pOVar2;
  bool bVar3;
  ushort uVar4;
  long lVar5;
  ObjectFolder__vtable *pOVar6;
  
  if (subxcoord < 0) {
LAB_0023bce4:
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (-1 < subycoord) {
      uVar4 = GetSubIndex__13ObjDefinitionii(subxcoord,subycoord);
      uVar1 = original->fHeader->masterID;
      lVar5 = 0;
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        do {
          pOVar6 = (this->field0_0x0).__vtable;
          while( true ) {
            while( true ) {
              while( true ) {
                lVar5 = (*(code *)pOVar6->ResumeObjectFiles)
                                  ((int)&(this->field0_0x0).__vtable +
                                   (int)*(short *)&pOVar6->SuspendObjectFiles,lVar5);
                if (lVar5 == 0) goto LAB_0023bce4;
                bVar3 = TestFromSameFile__C11ObjSelectorPC11ObjSelector
                                  ((ObjSelector *)lVar5,original);
                if (bVar3) break;
                pOVar6 = (this->field0_0x0).__vtable;
              }
              pOVar2 = ((ObjSelector *)lVar5)->fHeader;
              if (pOVar2->masterID == uVar1) break;
              pOVar6 = (this->field0_0x0).__vtable;
            }
            if (pOVar2->subIndex == uVar4) break;
            pOVar6 = (this->field0_0x0).__vtable;
          }
        } while ((long)(short)pOVar2->levelOffset != (long)levelOff);
      }
    }
  }
  return (ObjSelector *)lVar5;
}

ObjSelector* ObjectFolderImpl::GetLeadSelector(ObjSelector *original) {
	ObjDefinition *header;
	ObjSelector *subsel;
	ObjDefinition *this;
	
  ushort uVar1;
  ObjDefinition *pOVar2;
  bool bVar3;
  long lVar4;
  ObjectFolder__vtable *pOVar5;
  
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
  uVar1 = original->fHeader->masterID;
                    /* end of inlined section */
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      pOVar5 = (this->field0_0x0).__vtable;
      while( true ) {
        while( true ) {
          lVar4 = (*(code *)pOVar5->ResumeObjectFiles)
                            ((int)&(this->field0_0x0).__vtable +
                             (int)*(short *)&pOVar5->SuspendObjectFiles,lVar4);
          if (lVar4 == 0) {
            pOVar5 = (this->field0_0x0).__vtable;
            lVar4 = (*(code *)pOVar5->PrepareForModuleSave)
                              ((int)&(this->field0_0x0).__vtable +
                               (int)*(short *)&pOVar5->PrepareForModuleLoad,original,0,0,0);
            goto LAB_0023bdc4;
          }
          bVar3 = TestFromSameFile__C11ObjSelectorPC11ObjSelector((ObjSelector *)lVar4,original);
          if (bVar3) break;
          pOVar5 = (this->field0_0x0).__vtable;
        }
        pOVar2 = ((ObjSelector *)lVar4)->fHeader;
        if (pOVar2->masterID == uVar1) break;
        pOVar5 = (this->field0_0x0).__vtable;
      }
    } while (pOVar2->leadObject == 0);
  }
LAB_0023bdc4:
  return (ObjSelector *)lVar4;
}

ObjSelector* ObjectFolderImpl::GetNthSubSelector(ObjSelector *original, int n) {
	ObjSelector *subsel;
	ObjDefinition *header;
	SInt16 masterID;
	ObjDefinition *this;
	ObjDefinition *this;
	ObjDefinition *this;
	
  ushort uVar1;
  ushort uVar2;
  ObjDefinition *pOVar3;
  bool bVar4;
  ObjectFolder__vtable *pOVar5;
  long lVar6;
  
  uVar1 = original->fHeader->masterID;
  lVar6 = 0;
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    do {
      pOVar5 = (this->field0_0x0).__vtable;
      while( true ) {
        while( true ) {
          while( true ) {
            lVar6 = (*(code *)pOVar5->ResumeObjectFiles)
                              ((int)&(this->field0_0x0).__vtable +
                               (int)*(short *)&pOVar5->SuspendObjectFiles,lVar6);
            if (lVar6 == 0) {
              lVar6 = 0;
              goto LAB_0023bea8;
            }
            bVar4 = TestFromSameFile__C11ObjSelectorPC11ObjSelector((ObjSelector *)lVar6,original);
            if (bVar4) break;
            pOVar5 = (this->field0_0x0).__vtable;
          }
          pOVar3 = ((ObjSelector *)lVar6)->fHeader;
          uVar2 = pOVar3->masterID;
          if (uVar2 == uVar1) break;
          pOVar5 = (this->field0_0x0).__vtable;
        }
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
        bVar4 = false;
        if ((uVar2 != 0) && (bVar4 = true, pOVar3->subIndex != 0xffff)) {
          bVar4 = false;
        }
                    /* end of inlined section */
        if (!bVar4) break;
        pOVar5 = (this->field0_0x0).__vtable;
      }
      bVar4 = n != 0;
      n = n + -1;
    } while (bVar4);
  }
LAB_0023bea8:
  return (ObjSelector *)lVar6;
}

ObjSelector* ObjectFolderImpl::GetMasterSelector(ObjSelector *original) {
	ObjSelector *masterSel;
	ObjDefinition *header;
	SInt16 masterID;
	ObjDefinition *this;
	ObjDefinition *this;
	ObjDefinition *this;
	
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ObjectFolder__vtable *pOVar4;
  ObjSelector *this_00;
  long lVar5;
  
  uVar1 = original->fHeader->masterID;
  lVar5 = 0;
  this_00 = original;
  if (uVar1 != 0) {
    do {
      pOVar4 = (this->field0_0x0).__vtable;
      while( true ) {
        while( true ) {
          lVar5 = (*(code *)pOVar4->ResumeObjectFiles)
                            ((int)&(this->field0_0x0).__vtable +
                             (int)*(short *)&pOVar4->SuspendObjectFiles,lVar5);
          if (lVar5 == 0) {
            return original;
          }
          this_00 = (ObjSelector *)lVar5;
          bVar3 = TestFromSameFile__C11ObjSelectorPC11ObjSelector(this_00,original);
          if (bVar3) break;
          pOVar4 = (this->field0_0x0).__vtable;
        }
        uVar2 = this_00->fHeader->masterID;
        if (uVar2 == uVar1) break;
        pOVar4 = (this->field0_0x0).__vtable;
      }
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
      bVar3 = false;
      if ((uVar2 != 0) && (bVar3 = true, this_00->fHeader->subIndex != 0xffff)) {
        bVar3 = false;
      }
                    /* end of inlined section */
    } while (!bVar3);
  }
  return this_00;
}

void ObjectFolderImpl::Init(char *scenPath, bool skipDisabled) {
	void *result;
	
  QuickFileAllocator *pQVar1;
  __rb_tree_node_pair_const_ResFile__const_FileRec___ *p_Var2;
  StackString_260_ *this_00;
  StackString_260_ *this_01;
  
  pQVar1 = (QuickFileAllocator *)__builtin_new(0xc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  (pQVar1->field0_0x0).field0_0x0.fFiles.t.field_0x4 = 0;
  (pQVar1->field0_0x0).field0_0x0.fFiles.t.node_count = 0;
  p_Var2 = (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)malloc(0x1c);
  if (p_Var2 == (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)0x0) {
    p_Var2 = (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)
             oom_malloc__t23__malloc_alloc_template1i0Ui(0x1c);
    (pQVar1->field0_0x0).field0_0x0.fFiles.t.header = p_Var2;
  }
  else {
    (pQVar1->field0_0x0).field0_0x0.fFiles.t.header = p_Var2;
  }
                    /* end of inlined section */
  this_01 = &this->fPath;
                    /* inlined from Tree.h */
  *(undefined4 *)&p_Var2->field0_0x0 = 0;
                    /* end of inlined section */
  this_00 = &this->fObjPath;
                    /* inlined from Tree.h */
  (((pQVar1->field0_0x0).field0_0x0.fFiles.t.header)->field0_0x0).parent =
       (__rb_tree_node_base *)0x0;
  p_Var2 = (pQVar1->field0_0x0).field0_0x0.fFiles.t.header;
  (p_Var2->field0_0x0).left = &p_Var2->field0_0x0;
  p_Var2 = (pQVar1->field0_0x0).field0_0x0.fFiles.t.header;
  (p_Var2->field0_0x0).right = &p_Var2->field0_0x0;
                    /* end of inlined section */
  this->fQuickFileList = pQVar1;
  *(int *)&this->fSkipDisabled = (int)skipDisabled;
  copy__12StringBufferPCc(&this_01->field0_0x0,scenPath);
  copy__12StringBufferRC12StringBuffer(&this_00->field0_0x0,&this_01->field0_0x0);
  append__12StringBufferPCci(&this_00->field0_0x0,"GameData/Objects/",-1);
  ConvertToBackslash__FR12StringBuffer(&this_01->field0_0x0);
  ConvertToBackslash__FR12StringBuffer(&this_00->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pCareers->__vtable->GetNumCareers)
            ((int)&_5Globs_pCareers->__vtable +
             (int)*(short *)&_5Globs_pCareers->__vtable->GetCareerByID);
  LoadDatabase__16ObjectFolderImpl(this);
  InitSkillLookup__Fv();
  *(undefined4 *)&this->fInitialized = 1;
  GlobalDispatch__Fsi(0xdf,0);
  return;
}

void ObjectFolderImpl::Destroy() {
	ObjectTypeAttrBlock **i;
	HashIterator<ObjSelector,int,256> it;
	HashIterator<ObjSelector,int,256> end;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *sel;
	HashIterator<ObjSelector,int,256> *this;
	ObjSelector *node;
	ObjSelector *prev;
	ObjSelector *this;
	int i;
	int index;
	ObjSelector *node;
	QuickResFile *file;
	FileName name;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	iResFile *ptr;
	ObjectTypeAttrBlock **first;
	ObjectTypeAttrBlock **last;
	ObjectTypeAttrBlock **pointer;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  ObjSelector *pOVar3;
  iResFile__6_5027 *file;
  rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
  *this_00;
  __rb_tree_node_base *p_Var4;
  ulong *puVar5;
  bool bVar6;
  uint uVar7;
  iResFile__6_5027__vtable *piVar8;
  int iVar9;
  ObjectTypeAttrBlock **ppOVar10;
  long lVar11;
  ObjSelector *pOVar12;
  int *piVar13;
  QuickFileAllocator *pQVar14;
  ObjectTypeAttrBlock **ppOVar15;
  int iVar16;
  ERQuickdata *this_01;
  ObjectTypeAttrBlock *this_02;
  ObjectTypeAttrBlock **ppOVar17;
  HashIterator_ObjSelector_int_256_ it;
  HashIterator_ObjSelector_int_256_ end;
  undefined local_1a0 [8];
  ObjSelector *local_198;
  HashIterator_ObjSelector_int_256_ result;
  StackString_260_ name;
  
  DestroySkillLookup__Fv();
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pCareers->__vtable->GetIndexByCareer)
            ((int)&_5Globs_pCareers->__vtable +
             (int)*(short *)&_5Globs_pCareers->__vtable->GetCareerByIndex);
  unloadPreloadSelectors__16ObjectFolderImpl(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
  result.pList = (HashList_ObjSelector_int_256_ *)&this->field26_0x20;
  it.node = (ObjSelector *)0x0;
  local_198 = (ObjSelector *)0x0;
  local_1a0 = (undefined  [8])CONCAT44(0x100,result.pList);
  puVar1 = (undefined *)((int)&end.i + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar7);
  *puVar5 = *puVar5 & -1L << (uVar7 + 1) * 8 | (ulong)local_1a0 >> (7 - uVar7) * 8;
  end._0_8_ = (ulong)local_1a0;
  end.node = (ObjSelector *)0x0;
  result.node = (ObjSelector *)0x0;
  result.i = 0;
  if (pOVar2 == (ObjSelector *)0x0) {
    result.i = 0;
    do {
      result.i = result.i + 1;
      if (0xff < result.i) goto LAB_0023c190;
    } while ((ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable ==
             (ObjSelector *)0x0);
    result.node = (ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable;
  }
  else {
    result.node = pOVar2;
  }
LAB_0023c190:
  it.node = result.node;
  it._0_8_ = CONCAT44(result.i,result.pList);
  puVar1 = local_1a0 + 7;
  uVar7 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar7) =
       *(ulong *)(puVar1 + -uVar7) & -1L << (uVar7 + 1) * 8 | it._0_8_ >> (7 - uVar7) * 8;
  local_1a0 = (undefined  [8])it._0_8_;
  local_198 = it.node;
  puVar1 = (undefined *)((int)&it.i + 3);
                    /* end of inlined section */
  uVar7 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar7);
  *puVar5 = *puVar5 & -1L << (uVar7 + 1) * 8 | it._0_8_ >> (7 - uVar7) * 8;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    pOVar2 = it.node;
    bVar6 = false;
    if (it.i == end.i) {
      bVar6 = true;
      if (it.node == end.node) {
        bVar6 = it.pList == end.pList;
        goto LAB_0023c2e0;
      }
    }
    else {
LAB_0023c2e0:
      bVar6 = (bool)(bVar6 ^ 1);
    }
                    /* end of inlined section */
    if (!bVar6) {
      file = (iResFile__6_5027 *)this->fGlobalFile;
      if (file != (iResFile__6_5027 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
        bVar6 = ReleaseRef__8FileListP8iResFile((FileList *)this->fQuickFileList,file);
        if (bVar6) {
          lVar11 = (*(code *)file->__vtable->FindUniqueName)
                             ((int)&file->fNextFile + (int)*(short *)&file->__vtable->GetLanguage);
          if (lVar11 == 0) {
            piVar8 = file->__vtable;
          }
          else {
            (*(code *)file->__vtable->GetByName)
                      ((int)&file->fNextFile + (int)*(short *)&file->__vtable->GetByID);
            piVar8 = file->__vtable;
          }
          (*(code *)piVar8->Create)((int)&file->fNextFile + (int)*(short *)&piVar8->_dyncastimpl,3);
                    /* end of inlined section */
          this->fGlobalFile = (QuickResFile__125_899 *)0x0;
        }
        else {
          this->fGlobalFile = (QuickResFile__125_899 *)0x0;
        }
      }
      erase__12StringBuffer(&(this->fObjPath).field0_0x0);
      erase__12StringBuffer(&(this->fPath).field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
      iVar16 = 0;
      iVar9 = 0;
      do {
        iVar16 = iVar16 + 1;
        piVar13 = (int *)((int)&(this->field26_0x20).__vtable + iVar9);
        iVar9 = *piVar13;
        if (iVar9 != 0) {
          *piVar13 = 0;
          for (iVar9 = *(int *)(iVar9 + 0x7c); iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x7c)) {
          }
        }
        iVar9 = iVar16 * 4;
      } while (iVar16 < 0x100);
                    /* end of inlined section */
      if (this->m_pObjectData == (ERQuickdata *)0x0) {
        this_01 = this->m_pCreateSimData;
      }
      else {
        DelRef__9EResource(&this->m_pObjectData->field0_0x0);
        this->m_pObjectData = (ERQuickdata *)0x0;
        this_01 = this->m_pCreateSimData;
      }
      if (this_01 == (ERQuickdata *)0x0) {
        pQVar14 = this->fQuickFileList;
      }
      else {
        DelRef__9EResource(&this_01->field0_0x0);
        this->m_pCreateSimData = (ERQuickdata *)0x0;
        pQVar14 = this->fQuickFileList;
      }
      if (pQVar14 == (QuickFileAllocator *)0x0) {
        this->fQuickFileList = (QuickFileAllocator *)0x0;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
                    /* end of inlined section */
        if ((pQVar14->field0_0x0).field0_0x0.fFiles.t.node_count == 0) {
          this_00 = (rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
                     *)this->fQuickFileList;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
          p_Var4 = (((pQVar14->field0_0x0).field0_0x0.fFiles.t.header)->field0_0x0).left[1].left;
          if (p_Var4 == (__rb_tree_node_base *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (*(code *)p_Var4->right[1].parent)
                              (&p_Var4->color + *(short *)(p_Var4->right + 1),0x11);
          }
          __12StringBufferPcUi(&name.field0_0x0,name.fChars,0x104);
                    /* end of inlined section */
          (**(code **)(*(int *)(iVar9 + 0xc) + 0x5c))
                    (iVar9 + *(short *)(*(int *)(iVar9 + 0xc) + 0x58),&name);
          this_00 = (rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
                     *)this->fQuickFileList;
        }
        if (this_00 ==
            (rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
             *)0x0) {
          this->fQuickFileList = (QuickFileAllocator *)0x0;
        }
        else {
                    /* inlined from Tree.h */
          if (this_00->node_count != 0) {
            __erase__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCPC7ResFileZ7FileRec
                      (this_00,(__rb_tree_node_pair_const_ResFile__const_FileRec___ *)
                               (this_00->header->field0_0x0).parent);
            (this_00->header->field0_0x0).left = &this_00->header->field0_0x0;
            (this_00->header->field0_0x0).parent = (__rb_tree_node_base *)0x0;
            (this_00->header->field0_0x0).right = &this_00->header->field0_0x0;
            this_00->node_count = 0;
          }
          free(this_00->header);
          _memmanFree__FPv(this_00);
                    /* end of inlined section */
          this->fQuickFileList = (QuickFileAllocator *)0x0;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      ppOVar17 = (this->fTypeAttrBlocks).start;
      ppOVar10 = (this->fTypeAttrBlocks).finish;
                    /* end of inlined section */
      if (ppOVar17 == ppOVar10) {
        ppOVar17 = (this->fTypeAttrBlocks).start;
        ppOVar15 = ppOVar17;
      }
      else {
        this_02 = *ppOVar17;
        while( true ) {
          if (this_02 == (ObjectTypeAttrBlock *)0x0) {
            ppOVar10 = (this->fTypeAttrBlocks).finish;
          }
          else {
            ___19ObjectTypeAttrBlock(this_02,3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            ppOVar10 = (this->fTypeAttrBlocks).finish;
          }
                    /* end of inlined section */
          ppOVar17 = ppOVar17 + 1;
          if (ppOVar17 == ppOVar10) break;
          this_02 = *ppOVar17;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        ppOVar10 = (this->fTypeAttrBlocks).finish;
        ppOVar17 = (this->fTypeAttrBlocks).start;
        ppOVar15 = ppOVar17;
      }
      for (; ppOVar17 != ppOVar10; ppOVar17 = ppOVar17 + 1) {
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      (this->fTypeAttrBlocks).finish = ppOVar15;
                    /* end of inlined section */
      *(undefined4 *)&this->fInitialized = 0;
      GlobalDispatch__Fsi(0xdf,0);
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    if (it.node == (ObjSelector *)0x0) {
LAB_0023c204:
      while (pOVar12 = it.node, it.i < 0x100) {
        pOVar12 = (it.pList)->table[it.i];
        if ((it.pList)->table[it.i] != (ObjSelector *)0x0) break;
        it.i = it.i + 1;
        it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(uint)it.i << 0x20;
      }
    }
    else {
      it.node = (it.node)->pNextHash;
      pOVar12 = it.node;
      if (it.node == (ObjSelector *)0x0) {
        it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(it.i + 1) << 0x20;
        goto LAB_0023c204;
      }
    }
    it.node = pOVar12;
    uVar7 = GetGUID__11ObjSelector(pOVar2);
    pOVar12 = (ObjSelector *)(&this->field26_0x20)[uVar7 & 0xff].__vtable;
    if (pOVar2 == pOVar12) {
      (&this->field26_0x20)[uVar7 & 0xff].__vtable = (BehaviorFinder__vtable *)pOVar2->pNextHash;
    }
    else if (pOVar12 != (ObjSelector *)0x0) {
      for (pOVar3 = pOVar12->pNextHash; pOVar3 != (ObjSelector *)0x0; pOVar3 = pOVar3->pNextHash) {
        if (pOVar3 == pOVar2) {
          if (pOVar3 != (ObjSelector *)0x0) {
            pOVar12->pNextHash = pOVar2->pNextHash;
          }
          break;
        }
        pOVar12 = pOVar3;
      }
    }
    DestroySelector__16ObjectFolderImplP11ObjSelector(this,pOVar2);
  } while( true );
}

void ObjectFolderImpl::DestroySelector(ObjSelector *sel) {
	int i;
	ObjSelector *this;
	ObjSelector *this;
	
  ResData *pRVar1;
  iResFile__6_5027 *piVar2;
  Behavior *pBVar3;
  Language *pLVar4;
  VALUE *pAddress;
  bool bVar5;
  iResFile__6_5027__vtable *piVar6;
  NPC *pNVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  AnimTable **ppAVar11;
  int iVar12;
  
  if (sel->fDesiredPreloadState == kDataLoaded) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable->EndSaveGame)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable->BeginSaveGame + -0x24);
    pRVar1 = sel->fHeader->pResData;
    uVar10 = this->m_uCurrentPreloadCost;
    if (pRVar1 != (ResData *)0x0) {
      uVar10 = uVar10 - pRVar1->uMemoryCost;
    }
    this->m_uCurrentPreloadCost = uVar10;
  }
  ppAVar11 = sel->fAnimTables;
  iVar12 = 3;
  do {
    iVar12 = iVar12 + -1;
    if (*ppAVar11 != (AnimTable *)0x0) {
      DestroyInstance__9AnimTableP9AnimTable(*ppAVar11);
      *ppAVar11 = (AnimTable *)0x0;
    }
    ppAVar11 = ppAVar11 + 1;
  } while (-1 < iVar12);
  piVar2 = (iResFile__6_5027 *)sel->fSemiFile;
  if (piVar2 == (iResFile__6_5027 *)0x0) {
    piVar2 = (sel->field0_0x0).fFile;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
    bVar5 = ReleaseRef__8FileListP8iResFile((FileList *)this->fQuickFileList,piVar2);
    if (bVar5) {
      lVar9 = (*(code *)piVar2->__vtable->FindUniqueName)
                        ((int)&piVar2->fNextFile + (int)*(short *)&piVar2->__vtable->GetLanguage);
      if (lVar9 == 0) {
        piVar6 = piVar2->__vtable;
      }
      else {
        (*(code *)piVar2->__vtable->GetByName)
                  ((int)&piVar2->fNextFile + (int)*(short *)&piVar2->__vtable->GetByID);
        piVar6 = piVar2->__vtable;
      }
      (*(code *)piVar6->Create)((int)&piVar2->fNextFile + (int)*(short *)&piVar6->_dyncastimpl,3);
                    /* end of inlined section */
      sel->fSemiFile = (QuickResFile__182_935 *)0x0;
    }
    else {
      sel->fSemiFile = (QuickResFile__182_935 *)0x0;
    }
    piVar2 = (sel->field0_0x0).fFile;
  }
  if (piVar2 == (iResFile__6_5027 *)0x0) {
    pBVar3 = sel->fBehavior;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
    bVar5 = ReleaseRef__8FileListP8iResFile((FileList *)this->fQuickFileList,piVar2);
    if (bVar5) {
      lVar9 = (*(code *)piVar2->__vtable->FindUniqueName)
                        ((int)&piVar2->fNextFile + (int)*(short *)&piVar2->__vtable->GetLanguage);
      if (lVar9 == 0) {
        piVar6 = piVar2->__vtable;
      }
      else {
        (*(code *)piVar2->__vtable->GetByName)
                  ((int)&piVar2->fNextFile + (int)*(short *)&piVar2->__vtable->GetByID);
        piVar6 = piVar2->__vtable;
      }
      (*(code *)piVar6->Create)((int)&piVar2->fNextFile + (int)*(short *)&piVar6->_dyncastimpl,3);
                    /* end of inlined section */
      (sel->field0_0x0).fFile = (iResFile__6_5027 *)0x0;
    }
    else {
      (sel->field0_0x0).fFile = (iResFile__6_5027 *)0x0;
    }
    pBVar3 = sel->fBehavior;
  }
  if (pBVar3 != (Behavior *)0x0) {
    (**(code **)(pBVar3->__vtable + 1))
              ((int)&pBVar3->fGlobFile + (int)*(short *)&pBVar3->__vtable->GetResFile,3);
    sel->fBehavior = (Behavior *)0x0;
  }
  pLVar4 = sel->fLang;
  if (pLVar4 != (Language *)0x0) {
    (*(code *)pLVar4->__vtable->GetNodeText)
              ((int)&pLVar4->__vtable + (int)*(short *)&pLVar4->__vtable->GetTreeTypeName,3);
    sel->fLang = (Language *)0x0;
  }
  if (sel->fCustomCharacter == (CustomCharacter *)0x0) {
    pNVar7 = sel->fNPCharacter;
  }
  else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(sel->fCustomCharacter);
                    /* end of inlined section */
    sel->fCustomCharacter = (CustomCharacter *)0x0;
    pNVar7 = sel->fNPCharacter;
  }
  if (pNVar7 != (NPC *)0x0) {
    sel->fNPCharacter = (NPC *)0x0;
  }
  if (sel->fHeader == (ObjDefinition *)0x0) {
    pcVar8 = sel->fObjName;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
    if ((sel->fFlags & 0xcU) == 0) {
      sel->fHeader = (ObjDefinition *)0x0;
    }
    else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
      _memmanFree__FPv(sel->fHeader);
                    /* end of inlined section */
      sel->fHeader = (ObjDefinition *)0x0;
    }
    pcVar8 = sel->fObjName;
  }
  if (pcVar8 != (char *)0x0) {
    sel->fObjName = (char *)0x0;
  }
  if (sel->fModuleName != (char *)0x0) {
    sel->fModuleName = (char *)0x0;
  }
  if (sel->fCatalogResource != (CatalogResource *)0x0) {
    DestroyInstance__15CatalogResourceP15CatalogResource(sel->fCatalogResource);
    sel->fCatalogResource = (CatalogResource *)0x0;
  }
  DestroyInstance__10ObjFnTableP10ObjFnTable(sel->fFnTable);
  sel->fFnTable = (ObjFnTable *)0x0;
  if (sel->fUserName != (BString2 *)0x0) {
    ___8BString2(sel->fUserName,3);
    sel->fUserName = (BString2 *)0x0;
  }
  DestroyThumbnail__11ObjSelector(sel);
  if (sel != (ObjSelector *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    pAddress = (sel->fTreeTuning).values;
    if (pAddress != (VALUE *)0x0) {
      _memmanFree__FPv(pAddress);
    }
                    /* end of inlined section */
    __dl__11ObjSelectorPv(sel);
  }
  return;
}

ObjSelector* ObjectFolderImpl::AddUserSelector(Sint32 guid, Sint16 resID) {
	ObjSelector *pNew;
	ObjDefinition *def;
	int result;
	int i;
	int index;
	ObjSelector *node;
	int result;
	FileAllocator<QuickResFile> *this;
	QuickResFile *file;
	FileAllocator<QuickResFile> *this;
	iResFile *this;
	ObjSelector *this;
	SInt16 defID;
	ObjSelector *this;
	ObjectTypeAttrBlock *block;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	ObjSelector *node;
	ObjSelector *this;
	ObjSelector *node;
	
  undefined *puVar1;
  uint uVar2;
  ObjectFolder__vtable *pOVar3;
  BehaviorFinder__vtable *pBVar4;
  ResFile *pResFile;
  FileList *this_00;
  ObjectTypeAttrBlock **position;
  ulong *puVar5;
  ObjDefinition *pOVar6;
  ResData **ppRVar7;
  ObjSelector *pOVar8;
  BehaviorFinder *pBVar9;
  iResFile__6_5027 *this_01;
  QuickResFile__182_935 *this_02;
  XObjLang *pXVar10;
  Behavior *pBVar11;
  ObjectTypeAttrBlock *this_03;
  uint uVar12;
  long lVar13;
  ObjDefinition *pOVar14;
  int iVar15;
  ObjDefinition *pOVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong in_a3;
  undefined8 uVar22;
  ulong in_t0;
  undefined8 uVar23;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ObjectTypeAttrBlock *block;
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
  
  uVar19 = (ulong)guid;
  uVar20 = (ulong)(int)((uint)resID << 0x10);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  if (uVar19 == 0) {
    return (ObjSelector *)0x0;
  }
  pOVar3 = (this->field0_0x0).__vtable;
  lVar13 = (*(code *)pOVar3->DeletingInstance)
                     ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pOVar3->CreatingInstance);
  if (lVar13 != 0) {
    return (ObjSelector *)0x0;
  }
  pOVar6 = (ObjDefinition *)__builtin_new(0xc4);
  pOVar14 = this->m_pTemplateUserDef;
  pOVar16 = pOVar6;
  if ((((uint)pOVar14 | (uint)pOVar6) & 7) == 0) {
    ppRVar7 = &pOVar14->pResData;
    do {
      uVar21 = *(undefined8 *)&pOVar14->numGraphics;
      uVar22 = *(undefined8 *)&pOVar14->interactionGroup;
      uVar23 = *(undefined8 *)&pOVar14->washHandsTreeID_unused;
      *(undefined8 *)pOVar16 = *(undefined8 *)pOVar14;
      *(undefined8 *)&pOVar16->numGraphics = uVar21;
      *(undefined8 *)&pOVar16->interactionGroup = uVar22;
      *(undefined8 *)&pOVar16->washHandsTreeID_unused = uVar23;
      pOVar14 = (ObjDefinition *)&pOVar14->disabled;
      pOVar16 = (ObjDefinition *)&pOVar16->disabled;
    } while (pOVar14 != (ObjDefinition *)ppRVar7);
  }
  else {
    ppRVar7 = &pOVar14->pResData;
    do {
      puVar1 = (undefined *)((int)&pOVar14->baseGraphic + 1);
      uVar12 = (uint)puVar1 & 7;
      uVar2 = (uint)pOVar14 & 7;
      uVar19 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
               uVar19 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((int)pOVar14 - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&pOVar14->treeTableID + 1);
      uVar12 = (uint)puVar1 & 7;
      uVar2 = (uint)&pOVar14->numGraphics & 7;
      uVar20 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
               uVar20 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((int)&pOVar14->numGraphics - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&pOVar14->subIndex + 1);
      uVar12 = (uint)puVar1 & 7;
      uVar2 = (uint)&pOVar14->interactionGroup & 7;
      in_a3 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)&pOVar14->interactionGroup - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&pOVar14->guid + 3);
      uVar12 = (uint)puVar1 & 7;
      uVar2 = (uint)&pOVar14->washHandsTreeID_unused & 7;
      in_t0 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)&pOVar14->washHandsTreeID_unused - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&pOVar16->baseGraphic + 1);
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | uVar19 >> (7 - uVar12) * 8;
      uVar12 = (uint)pOVar16 & 7;
      *(ulong *)((int)pOVar16 - uVar12) =
           uVar19 << uVar12 * 8 |
           *(ulong *)((int)pOVar16 - uVar12) & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      puVar1 = (undefined *)((int)&pOVar16->treeTableID + 1);
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | uVar20 >> (7 - uVar12) * 8;
      uVar12 = (uint)&pOVar16->numGraphics & 7;
      puVar5 = (ulong *)((int)&pOVar16->numGraphics - uVar12);
      *puVar5 = uVar20 << uVar12 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      puVar1 = (undefined *)((int)&pOVar16->subIndex + 1);
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | in_a3 >> (7 - uVar12) * 8;
      uVar12 = (uint)&pOVar16->interactionGroup & 7;
      puVar5 = (ulong *)((int)&pOVar16->interactionGroup - uVar12);
      *puVar5 = in_a3 << uVar12 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      puVar1 = (undefined *)((int)&pOVar16->guid + 3);
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | in_t0 >> (7 - uVar12) * 8;
      uVar12 = (uint)&pOVar16->washHandsTreeID_unused & 7;
      puVar5 = (ulong *)((int)&pOVar16->washHandsTreeID_unused - uVar12);
      *puVar5 = in_t0 << uVar12 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      pOVar14 = (ObjDefinition *)&pOVar14->disabled;
      pOVar16 = (ObjDefinition *)&pOVar16->disabled;
    } while (pOVar14 != (ObjDefinition *)ppRVar7);
  }
  pOVar16->version = pOVar14->version;
  pOVar6->guid = guid;
  pOVar6->resID = resID;
  pOVar8 = (ObjSelector *)__nw__11ObjSelectorUi(0x80);
  pOVar8 = __11ObjSelector(pOVar8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  iVar18 = 0;
                    /* end of inlined section */
  pOVar8->fHeader = pOVar6;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  iVar15 = 0;
  do {
    iVar17 = 0;
    pBVar9 = &this->field26_0x20 + iVar15;
    iVar15 = iVar15 + 1;
    for (pBVar4 = pBVar9->__vtable; pBVar4 != (BehaviorFinder__vtable *)0x0;
        pBVar4 = (BehaviorFinder__vtable *)pBVar4[0xf].ReconBehavior) {
      iVar17 = iVar17 + 1;
    }
    iVar18 = iVar18 + iVar17;
  } while (iVar15 < 0x100);
                    /* end of inlined section */
  pOVar8->fIndex = iVar18;
  pOVar8->fFolder = &this->field0_0x0;
  pOVar8->fResData = this->m_pGlobUserResFile;
  pResFile = this->m_pGlobUserResFile->semiGlobFile;
  if (pResFile == (ResFile *)0x0) goto LAB_0023ca30;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
  this_00 = (FileList *)this->fQuickFileList;
  this_01 = Find__8FileListPC7ResFile(this_00,pResFile);
  if (this_01 == (iResFile__6_5027 *)0x0) {
    this_02 = (QuickResFile__182_935 *)__builtin_new(0x10);
    this_01 = (iResFile__6_5027 *)__12QuickResFile(this_02);
    ((iResFile__0_3211 *)this_01)->fResData = pResFile;
    Open__8iResFileRC12StringBufferQ28iResFile9OpenFlags
              ((iResFile__0_3211 *)this_01,(StringBuffer *)0x0,kJustOpen);
    lVar13 = (*(code *)((iResFile__0_3211 *)this_01)->__vtable->FindUniqueName)
                       ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                        (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->GetLanguage);
    if (lVar13 != 0) goto LAB_0023ca20;
    if (this_01 != (iResFile__6_5027 *)0x0) {
      (*(code *)((iResFile__0_3211 *)this_01)->__vtable->Create)
                ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                 (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->_dyncastimpl,3);
    }
    this_01 = (iResFile__6_5027 *)0x0;
  }
  else {
LAB_0023ca20:
    AddRef__8FileListP8iResFile(this_00,this_01);
  }
                    /* end of inlined section */
  pOVar8->fSemiFile = (QuickResFile__182_935 *)this_01;
LAB_0023ca30:
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  pOVar8->fModuleName = "TemplateModule";
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  pOVar8->fObjName = "UserDefined";
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
                    /* end of inlined section */
  pOVar8->fFlags =
       *(ushort *)&pOVar8->fFlags & 0xfff3 | ((int)((uint)resID << 0x10) >> 0x10) << 0x10 | 4;
  pXVar10 = (XObjLang *)__builtin_new(8);
  pXVar10 = __8XObjLangP11ObjSelector(pXVar10,pOVar8);
  pOVar8->fLang = &pXVar10->field0_0x0;
  pBVar11 = (Behavior *)__builtin_new(0x18);
  pBVar11 = __8BehaviorP8LanguageP8iResFileP11ObjSelectorT2
                      (pBVar11,pOVar8->fLang,(iResFile__6_5027 *)this->fGlobalFile,pOVar8,
                       (iResFile__6_5027 *)pOVar8->fSemiFile);
  pOVar8->fBehavior = pBVar11;
  if (pOVar6->numTypeAttributes != 0) {
    this_03 = (ObjectTypeAttrBlock *)__builtin_new(0xc);
    block = __19ObjectTypeAttrBlockii(this_03,pOVar6->guid,(int)(short)pOVar6->numTypeAttributes);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    position = (this->fTypeAttrBlocks).finish;
    if (position == (this->fTypeAttrBlocks).end_of_storage) {
      insert_aux__t6vector2ZP19ObjectTypeAttrBlockZt23__malloc_alloc_template1i0PP19ObjectTypeAttrBlockRCP19ObjectTypeAttrBlock
                (&this->fTypeAttrBlocks,position,&block);
    }
    else {
      *position = block;
      (this->fTypeAttrBlocks).finish = (this->fTypeAttrBlocks).finish + 1;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  uVar12 = GetGUID__11ObjSelector(pOVar8);
  pOVar8->pNextHash = (ObjSelector *)(&this->field26_0x20)[uVar12 & 0xff].__vtable;
  (&this->field26_0x20)[uVar12 & 0xff].__vtable = (BehaviorFinder__vtable *)pOVar8;
  return pOVar8;
}

void ObjectFolderImpl::AddSelector(ObjDefinition *pObjDefinition, char *pObjName, char *pModuleName, ResFile *pResData, SInt16 defID, NPC *pNPCBody) {
	bool disable;
	ObjSelector *pNew;
	int numAttr;
	HashList<ObjSelector,int,256> *this;
	int result;
	int i;
	int index;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	int result;
	FileAllocator<QuickResFile> *this;
	QuickResFile *file;
	FileAllocator<QuickResFile> *this;
	iResFile *this;
	ObjSelector *this;
	SInt16 defID;
	ObjSelector *this;
	ObjectTypeAttrBlock *block;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	ObjectTypeAttrBlock *&x;
	ObjectTypeAttrBlock *&value;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	ObjSelector *node;
	ObjSelector *this;
	ObjSelector *node;
	
  ushort uVar1;
  BehaviorFinder__vtable *pBVar2;
  ResFile *pResFile;
  FileList *this_00;
  ObjectTypeAttrBlock **position;
  bool bVar3;
  ObjSelector *pOVar4;
  BehaviorFinder *pBVar5;
  iResFile__6_5027 *this_01;
  QuickResFile__182_935 *this_02;
  XObjLang *pXVar6;
  Behavior *pBVar7;
  ObjectTypeAttrBlock *this_03;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  BString2 aBStack_c0 [4];
  ObjectTypeAttrBlock *block;
  BehaviorFinder *local_ac;
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
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  bVar3 = false;
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  if (pObjDefinition->disabled != 0) {
    bVar3 = *(int *)&this->fSkipDisabled != 0;
  }
  if (bVar3) {
    return;
  }
                    /* end of inlined section */
  pOVar4 = (ObjSelector *)__nw__11ObjSelectorUi(0x80);
  pOVar4 = __11ObjSelector(pOVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  local_ac = &this->field26_0x20;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  iVar12 = 0;
                    /* end of inlined section */
  pOVar4->fHeader = pObjDefinition;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  iVar10 = 0;
  do {
    iVar11 = 0;
    pBVar5 = local_ac + iVar10;
    iVar10 = iVar10 + 1;
    for (pBVar2 = pBVar5->__vtable; pBVar2 != (BehaviorFinder__vtable *)0x0;
        pBVar2 = (BehaviorFinder__vtable *)pBVar2[0xf].ReconBehavior) {
      iVar11 = iVar11 + 1;
    }
    iVar12 = iVar12 + iVar11;
  } while (iVar10 < 0x100);
                    /* end of inlined section */
  pOVar4->fIndex = iVar12;
  pOVar4->fFolder = &this->field0_0x0;
  pOVar4->fResData = pResData;
  pOVar4->fNPCharacter = pNPCBody;
  if (pNPCBody != (NPC *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    __8BString2PCUs(aBStack_c0,*(pNPCBody->name).ptr);
    SetUserName__11ObjSelectorRC8BString2(pOVar4,aBStack_c0);
    ___8BString2(aBStack_c0,2);
  }
  pResFile = pResData->semiGlobFile;
  if (pResFile == (ResFile *)0x0) goto LAB_0023ccf0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
  this_00 = (FileList *)this->fQuickFileList;
  this_01 = Find__8FileListPC7ResFile(this_00,pResFile);
  if (this_01 == (iResFile__6_5027 *)0x0) {
    this_02 = (QuickResFile__182_935 *)__builtin_new(0x10);
    this_01 = (iResFile__6_5027 *)__12QuickResFile(this_02);
    ((iResFile__0_3211 *)this_01)->fResData = pResFile;
    Open__8iResFileRC12StringBufferQ28iResFile9OpenFlags
              ((iResFile__0_3211 *)this_01,(StringBuffer *)0x0,kJustOpen);
    lVar9 = (*(code *)((iResFile__0_3211 *)this_01)->__vtable->FindUniqueName)
                      ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                       (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->GetLanguage);
    if (lVar9 != 0) goto LAB_0023cce0;
    if (this_01 != (iResFile__6_5027 *)0x0) {
      (*(code *)((iResFile__0_3211 *)this_01)->__vtable->Create)
                ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                 (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->_dyncastimpl,3);
    }
    this_01 = (iResFile__6_5027 *)0x0;
  }
  else {
LAB_0023cce0:
    AddRef__8FileListP8iResFile(this_00,this_01);
  }
                    /* end of inlined section */
  pOVar4->fSemiFile = (QuickResFile__182_935 *)this_01;
LAB_0023ccf0:
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  pOVar4->fObjName = pObjName;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  pOVar4->fModuleName = pModuleName;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  pOVar4->fFlags = *(ushort *)&pOVar4->fFlags & 0xfff3 | (int)(short)defID << 0x10;
  pXVar6 = (XObjLang *)__builtin_new(8);
  pXVar6 = __8XObjLangP11ObjSelector(pXVar6,pOVar4);
  pOVar4->fLang = &pXVar6->field0_0x0;
  pBVar7 = (Behavior *)__builtin_new(0x18);
  pBVar7 = __8BehaviorP8LanguageP8iResFileP11ObjSelectorT2
                     (pBVar7,pOVar4->fLang,(iResFile__6_5027 *)this->fGlobalFile,pOVar4,
                      (iResFile__6_5027 *)pOVar4->fSemiFile);
  pOVar4->fBehavior = pBVar7;
  uVar1 = pObjDefinition->numTypeAttributes;
  if (uVar1 != 0) {
    this_03 = (ObjectTypeAttrBlock *)__builtin_new(0xc);
    block = __19ObjectTypeAttrBlockii(this_03,pObjDefinition->guid,(int)(short)uVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    position = (this->fTypeAttrBlocks).finish;
    if (position == (this->fTypeAttrBlocks).end_of_storage) {
      insert_aux__t6vector2ZP19ObjectTypeAttrBlockZt23__malloc_alloc_template1i0PP19ObjectTypeAttrBlockRCP19ObjectTypeAttrBlock
                (&this->fTypeAttrBlocks,position,&block);
    }
    else {
      *position = block;
      (this->fTypeAttrBlocks).finish = (this->fTypeAttrBlocks).finish + 1;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  uVar8 = GetGUID__11ObjSelector(pOVar4);
  pOVar4->pNextHash = (ObjSelector *)local_ac[uVar8 & 0xff].__vtable;
  local_ac[uVar8 & 0xff].__vtable = (BehaviorFinder__vtable *)pOVar4;
                    /* end of inlined section */
  return;
}

void ObjectFolderImpl::OpenResFile(ObjSelector *sel) {
	FileAllocator<QuickResFile> *this;
	ResFile *pResFile;
	QuickResFile *file;
	ResFile *pResFile;
	FileAllocator<QuickResFile> *this;
	ResFile *pData;
	iResFile *this;
	
  ResFile *pResFile;
  FileList *this_00;
  iResFile__6_5027 *this_01;
  QuickResFile__182_935 *this_02;
  long lVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
  pResFile = sel->fResData;
  this_00 = (FileList *)this->fQuickFileList;
  this_01 = Find__8FileListPC7ResFile(this_00,pResFile);
  if (this_01 == (iResFile__6_5027 *)0x0) {
    this_02 = (QuickResFile__182_935 *)__builtin_new(0x10);
    this_01 = (iResFile__6_5027 *)__12QuickResFile(this_02);
    ((iResFile__0_3211 *)this_01)->fResData = pResFile;
    Open__8iResFileRC12StringBufferQ28iResFile9OpenFlags
              ((iResFile__0_3211 *)this_01,(StringBuffer *)0x0,kJustOpen);
    lVar1 = (*(code *)((iResFile__0_3211 *)this_01)->__vtable->FindUniqueName)
                      ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                       (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->GetLanguage);
    if (lVar1 == 0) {
      if (this_01 != (iResFile__6_5027 *)0x0) {
        (*(code *)((iResFile__0_3211 *)this_01)->__vtable->Create)
                  ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                   (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->_dyncastimpl,3);
      }
      this_01 = (iResFile__6_5027 *)0x0;
      goto LAB_0023cea8;
    }
  }
  AddRef__8FileListP8iResFile(this_00,this_01);
LAB_0023cea8:
                    /* end of inlined section */
  (sel->field0_0x0).fFile = this_01;
  ApplyTTABTuningForSel__16ObjectFolderImplP11ObjSelector(this,sel);
  return;
}

void ObjectFolderImpl::LoadDatabase() {
	ERQTable<ResFile> *pTable;
	ERQTable<Sim::NPC> *pNPCTable;
	u32 i;
	u32 numFiles;
	ERQTable<GlobalResFile> *pTable;
	GlobalResFile *pData;
	FileAllocator<QuickResFile> *this;
	ResFile *pResFile;
	QuickResFile *file;
	ResFile *pResFile;
	FileAllocator<QuickResFile> *this;
	ResFile *pData;
	iResFile *this;
	ResFile &row;
	char *pModuleName;
	NPC *pNPCBody;
	int j;
	VECTOR<ObjDefinition *> *this;
	ObjDefinition *pDef;
	char *pObjectName;
	VECTOR<ObjDefinition *> *this;
	unsigned int n;
	VECTOR<ObjDefinition *> *this;
	ObjDefinition *pData;
	ObjDefinition *pData;
	u32 index;
	ERQTable<ObjDefinition> *pTable;
	VECTOR<ObjDefinition *> *this;
	VECTOR<ObjDefinition *> *this;
	VECTOR<ObjDefinition *> *this;
	
  FileList *this_00;
  ObjDefinition *pObjDefinition;
  ERQuickdata *pEVar1;
  void *pvVar2;
  ResFile **ppRVar3;
  ResFile **ppRVar4;
  iResFile__6_5027 *this_01;
  QuickResFile__182_935 *this_02;
  NPC *pNPCBody;
  ObjDefinition **ppOVar5;
  long lVar6;
  char *pObjName;
  char *pcVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar8;
  undefined8 unaff_s2;
  ResFile *pRVar9;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  ObjDefinition *pOVar10;
  undefined8 unaff_s5;
  char *pModuleName;
  undefined8 unaff_s6;
  uint uVar11;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint index;
  ERQTable_ResFile_ *pTable;
  undefined1 *pNPCTable;
  uint numFiles;
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
  
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  pEVar1 = (ERQuickdata *)
           AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0xc33db41,(EFile *)0x0,0);
  this->m_pObjectData = pEVar1;
  pEVar1 = (ERQuickdata *)
           AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0)
  ;
  this->m_pCreateSimData = pEVar1;
  pTable = (ERQTable_ResFile_ *)getTable__11ERQuickdataPCc(this->m_pObjectData,"ResFile");
  pvVar2 = getTable__11ERQuickdataPCc(this->m_pObjectData,"GlobalResFile");
  pNPCTable = (undefined1 *)getTable__11ERQuickdataPCc(this->m_pCreateSimData,"Sim::NPC");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  ppRVar3 = (ResFile **)getRow__11ERQuickdataPCvPCc(this->m_pObjectData,pvVar2,"global");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  ppRVar4 = (ResFile **)getRow__11ERQuickdataPCvPCc(this->m_pObjectData,pvVar2,"templateperson");
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
  this_00 = (FileList *)this->fQuickFileList;
                    /* end of inlined section */
  this->m_pGlobUserResFile = *ppRVar4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
  pRVar9 = *ppRVar3;
                    /* end of inlined section */
  numFiles = pTable->uNumRows;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
  this_01 = Find__8FileListPC7ResFile(this_00,pRVar9);
  if (this_01 == (iResFile__6_5027 *)0x0) {
    this_02 = (QuickResFile__182_935 *)__builtin_new(0x10);
    this_01 = (iResFile__6_5027 *)__12QuickResFile(this_02);
    ((iResFile__0_3211 *)this_01)->fResData = pRVar9;
    Open__8iResFileRC12StringBufferQ28iResFile9OpenFlags
              ((iResFile__0_3211 *)this_01,(StringBuffer *)0x0,kJustOpen);
    lVar6 = (*(code *)((iResFile__0_3211 *)this_01)->__vtable->FindUniqueName)
                      ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                       (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->GetLanguage);
    if (lVar6 == 0) {
      if (this_01 != (iResFile__6_5027 *)0x0) {
        (*(code *)((iResFile__0_3211 *)this_01)->__vtable->Create)
                  ((int)&((iResFile__0_3211 *)this_01)->fNextFile +
                   (int)*(short *)&((iResFile__0_3211 *)this_01)->__vtable->_dyncastimpl,3);
      }
      this_01 = (iResFile__6_5027 *)0x0;
      goto LAB_0023d058;
    }
  }
  AddRef__8FileListP8iResFile(this_00,this_01);
LAB_0023d058:
                    /* end of inlined section */
  this->fGlobalFile = (QuickResFile__125_899 *)this_01;
  uVar11 = 0;
  if (numFiles != 0) {
    do {
      pRVar9 = pTable->pData + uVar11;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      ppOVar5 = (pRVar9->objDefinition).pData;
      pOVar10 = (ObjDefinition *)0x0;
      if (ppOVar5 != (ObjDefinition **)0x0) {
        pOVar10 = ppOVar5[-1];
      }
                    /* end of inlined section */
      if (pTable->ppRowNames == (char **)0x0) {
        pModuleName = "?";
      }
      else {
        pModuleName = pTable->ppRowNames[uVar11];
      }
      pNPCBody = (NPC *)0x0;
      if (pRVar9->pNPCBodyType != (char *)0x0) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
        pNPCBody = (NPC *)getRow__11ERQuickdataPCvPCc
                                    (this->m_pCreateSimData,pNPCTable,pRVar9->pNPCBodyType);
      }
                    /* end of inlined section */
      uVar11 = uVar11 + 1;
      iVar8 = 0;
      if (0 < (int)pOVar10) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        ppOVar5 = (pRVar9->objDefinition).pData;
        while( true ) {
                    /* end of inlined section */
          pcVar7 = (char *)0x0;
          pObjDefinition = ppOVar5[iVar8];
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
          pvVar2 = findRow__11ERQuickdataPCvPUi(this->m_pObjectData,pObjDefinition,&index);
          if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 8) != 0)) {
            pcVar7 = *(char **)(index * 4 + *(int *)((int)pvVar2 + 8));
                    /* end of inlined section */
          }
          pObjName = "?";
          if (pcVar7 != (char *)0x0) {
            pObjName = pcVar7;
          }
          iVar8 = iVar8 + 1;
          AddSelector__16ObjectFolderImplPC13ObjDefinitionPCcT2PC7ResFilesPCQ23Sim3NPC
                    (this,pObjDefinition,pObjName,pModuleName,pRVar9,pObjDefinition->resID,pNPCBody)
          ;
          if ((int)pOVar10 <= iVar8) break;
          ppOVar5 = (pRVar9->objDefinition).pData;
        }
      }
      if (this->m_pGlobUserResFile == pRVar9) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        this->m_pTemplateUserDef = *(pRVar9->objDefinition).pData;
      }
    } while (uVar11 < numFiles);
  }
  return;
}

void ObjectFolderImpl::ReconSelector(ObjSelector **selector, ReconBuffer *r, bool useTypeTab, SInt32 version) {
	int guid;
	SInt16 type;
	ReconBuffer *this;
	HashList<ObjSelector,int,256> *this;
	unsigned int key;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	ObjSelector *prev;
	ObjSelector *this;
	SInt32 guid;
	ReconBuffer *this;
	ReconBuffer *this;
	ReconBuffer *this;
	
  Mode__6_4959 MVar1;
  int iVar2;
  ObjectFolder__vtable *pOVar3;
  int iVar4;
  ObjSelector *pOVar5;
  BehaviorFinder *pBVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int *piVar7;
  undefined8 unaff_s3;
  ObjSelector *pOVar8;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  ushort type;
  int guid;
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
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if (version < 0x2f) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
    MVar1 = r->fMode;
  }
  else {
    if (useTypeTab) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
      if (r->fMode != kReading) {
        type = (*selector)->f_SaveType;
        Recon16__11ReconBufferPsi(r,&type,1);
        return;
      }
      Recon16__11ReconBufferPsi(r,&type,1);
      *selector = (ObjSelector *)0x0;
      if ((long)(short)type < 0) {
        return;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      piVar7 = (this->fSaveTypes).start;
                    /* end of inlined section */
      if ((ulong)(long)((int)(this->fSaveTypes).finish - (int)piVar7 >> 2) <=
          (ulong)(long)(short)type) {
        return;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      piVar7 = piVar7 + (short)type;
      pBVar6 = &this->field26_0x20 + *(byte *)piVar7;
      pOVar8 = (ObjSelector *)0x0;
      pOVar5 = (ObjSelector *)pBVar6->__vtable;
      while( true ) {
        if (pOVar5 == (ObjSelector *)0x0) {
          return;
        }
        iVar2 = *piVar7;
        iVar4 = GetGUID__11ObjSelector(pOVar5);
        if (iVar2 == iVar4) break;
        pOVar8 = pOVar5;
        pOVar5 = pOVar5->pNextHash;
      }
      if (pOVar8 != (ObjSelector *)0x0) {
        pOVar8->pNextHash = pOVar5->pNextHash;
        pOVar5->pNextHash = (ObjSelector *)pBVar6->__vtable;
        pBVar6->__vtable = (BehaviorFinder__vtable *)pOVar5;
      }
                    /* end of inlined section */
      if (pOVar5 == (ObjSelector *)0x0) {
        return;
      }
      *selector = pOVar5;
      return;
    }
    MVar1 = r->fMode;
  }
                    /* end of inlined section */
                    /* end of inlined section */
  if ((MVar1 == kWriting) || (MVar1 == kCounting)) {
    guid = GetGUID__11ObjSelector(*selector);
  }
  Recon32__11ReconBufferPii(r,(int *)((uint)&type | 4),1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
    pOVar3 = (this->field0_0x0).__vtable;
    pOVar5 = (ObjSelector *)
             (*(code *)pOVar3->DeletingInstance)
                       ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pOVar3->CreatingInstance
                        ,guid);
    *selector = pOVar5;
  }
  return;
}

ObjSelector* ObjectFolderImpl::GetSelectorByBehavior(Behavior *behavior) {
	HashIterator<ObjSelector,int,256> it;
	HashIterator<ObjSelector,int,256> end;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *this;
	HashIterator<ObjSelector,int,256> *this;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  byte bVar6;
  HashIterator_ObjSelector_int_256_ it;
  HashIterator_ObjSelector_int_256_ end;
  undefined local_20 [8];
  ObjSelector *local_18;
  HashIterator_ObjSelector_int_256_ result;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
  result.pList = (HashList_ObjSelector_int_256_ *)&this->field26_0x20;
  it.node = (ObjSelector *)0x0;
  local_18 = (ObjSelector *)0x0;
  local_20 = (undefined  [8])CONCAT44(0x100,result.pList);
  puVar1 = (undefined *)((int)&end.i + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)local_20 >> (7 - uVar3) * 8;
  end._0_8_ = (ulong)local_20;
  end.node = (ObjSelector *)0x0;
  result.node = (ObjSelector *)0x0;
  result.i = 0;
  if (pOVar2 == (ObjSelector *)0x0) {
                    /* end of inlined section */
    result.i = 0;
    do {
      result.i = result.i + 1;
      if (0xff < result.i) goto LAB_0023d3d0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    } while ((ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable ==
             (ObjSelector *)0x0);
    result.node = (ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable;
  }
  else {
    result.node = pOVar2;
  }
LAB_0023d3d0:
  it._0_8_ = CONCAT44(result.i,result.pList);
  puVar1 = local_20 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | it._0_8_ >> (7 - uVar3) * 8;
  local_20 = (undefined  [8])it._0_8_;
  local_18 = result.node;
  puVar1 = (undefined *)((int)&it.i + 3);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | it._0_8_ >> (7 - uVar3) * 8;
  it.node = result.node;
  pOVar2 = it.node;
  do {
    it.node = pOVar2;
    do {
      bVar6 = 0;
      if (it.i == end.i) {
        bVar5 = true;
        if (it.node == end.node) {
          bVar6 = 1;
          if (it.pList != end.pList) {
            bVar6 = 0;
          }
          goto LAB_0023d4a8;
        }
      }
      else {
LAB_0023d4a8:
        bVar5 = (bool)(bVar6 ^ 1);
      }
                    /* end of inlined section */
      if (!bVar5) {
        return (ObjSelector *)0x0;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
      if ((it.node)->fBehavior == behavior) {
        return it.node;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
      if (it.node == (ObjSelector *)0x0) break;
      it.node = (it.node)->pNextHash;
      if (it.node == (ObjSelector *)0x0) {
        it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(it.i + 1) << 0x20;
      }
    } while (it.node != (ObjSelector *)0x0);
    while (pOVar2 = it.node, it.i < 0x100) {
      pOVar2 = (it.pList)->table[it.i];
      if ((it.pList)->table[it.i] != (ObjSelector *)0x0) break;
      it.i = it.i + 1;
      it._0_8_ = it._0_8_ & 0xffffffff | (ulong)(uint)it.i << 0x20;
    }
  } while( true );
}

void ObjectFolderImpl::ReconBehavior(Behavior **behavior, ReconBuffer *r, SInt32 version) {
	SInt16 type;
	ReconBuffer *this;
	ObjSelector *sel;
	Behavior *this;
	HashList<ObjSelector,int,256> *this;
	unsigned int key;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	ObjSelector *prev;
	ObjSelector *this;
	SInt32 guid;
	int guid;
	ObjSelector *selector;
	
  ObjSelector *this_00;
  int iVar1;
  ObjectFolder__vtable *pOVar2;
  int iVar3;
  long lVar4;
  Language__vtable *pLVar5;
  BehaviorFinder *pBVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int *piVar7;
  undefined8 unaff_s3;
  ObjSelector *pOVar8;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  ushort type;
  int guid;
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
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (version < 0x2f) {
    Recon32__11ReconBufferPii(r,(int *)((uint)&type | 4),1);
    pOVar2 = (this->field0_0x0).__vtable;
    lVar4 = (*(code *)pOVar2->DeletingInstance)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pOVar2->CreatingInstance,
                       guid);
    if (lVar4 == 0) {
      *behavior = (Behavior *)0x0;
    }
    else {
      *behavior = *(Behavior **)((int)lVar4 + 8);
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
    if (r->fMode == kReading) {
      Recon16__11ReconBufferPsi(r,&type,1);
      *behavior = (Behavior *)0x0;
      if (-1 < (short)type) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        piVar7 = (this->fSaveTypes).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
        if ((uint)type < (uint)((int)(this->fSaveTypes).finish - (int)piVar7 >> 2)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
          piVar7 = (int *)((int)piVar7 + ((int)((uint)type << 0x10) >> 0xe));
          pBVar6 = &this->field26_0x20 + *(byte *)piVar7;
          pOVar8 = (ObjSelector *)0x0;
          for (this_00 = (ObjSelector *)pBVar6->__vtable; this_00 != (ObjSelector *)0x0;
              this_00 = this_00->pNextHash) {
            iVar1 = *piVar7;
            iVar3 = GetGUID__11ObjSelector(this_00);
            if (iVar1 == iVar3) {
              if (pOVar8 != (ObjSelector *)0x0) {
                pOVar8->pNextHash = this_00->pNextHash;
                this_00->pNextHash = (ObjSelector *)pBVar6->__vtable;
                pBVar6->__vtable = (BehaviorFinder__vtable *)this_00;
              }
                    /* end of inlined section */
              if (this_00 == (ObjSelector *)0x0) {
                return;
              }
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
              *behavior = this_00->fBehavior;
              return;
            }
            pOVar8 = this_00;
          }
        }
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Behavior.h */
                    /* end of inlined section */
      pLVar5 = (Language__vtable *)0x0;
      if ((*behavior)->fLanguage != (Language *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XLingo.h */
        pLVar5 = (*behavior)->fLanguage[1].__vtable;
      }
                    /* end of inlined section */
      type = *(ushort *)&pLVar5[2].GetNodeText;
      Recon16__11ReconBufferPsi(r,&type,1);
    }
  }
  return;
}

ErrType ObjectFolderImpl::SetSemiGlobalFile(Behavior *behavior, StringBuffer &newFileName, StringBuffer &errorText) {
  return -1;
}

iResFile* ObjectFolderImpl::GetPersonGlobFile() {
	HashIterator<ObjSelector,int,256> i;
	HashIterator<ObjSelector,int,256> end;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *this;
	HashIterator<ObjSelector,int,256> *this;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  byte bVar6;
  iResFile__6_5027 *piVar7;
  HashIterator_ObjSelector_int_256_ i;
  HashIterator_ObjSelector_int_256_ end;
  undefined local_30 [8];
  ObjSelector *local_28;
  HashIterator_ObjSelector_int_256_ result;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
  result.pList = (HashList_ObjSelector_int_256_ *)&this->field26_0x20;
  i.node = (ObjSelector *)0x0;
  local_28 = (ObjSelector *)0x0;
  local_30 = (undefined  [8])CONCAT44(0x100,result.pList);
  puVar1 = (undefined *)((int)&end.i + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)local_30 >> (7 - uVar3) * 8;
  end._0_8_ = (ulong)local_30;
  end.node = (ObjSelector *)0x0;
  result.node = (ObjSelector *)0x0;
  result.i = 0;
  if (pOVar2 == (ObjSelector *)0x0) {
    result.i = 0;
    do {
      result.i = result.i + 1;
      if (0xff < result.i) goto LAB_0023d6e0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    } while ((ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable ==
             (ObjSelector *)0x0);
    result.node = (ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable;
  }
  else {
    result.node = pOVar2;
  }
LAB_0023d6e0:
  i.node = result.node;
  i._0_8_ = CONCAT44(result.i,result.pList);
  puVar1 = local_30 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | i._0_8_ >> (7 - uVar3) * 8;
  local_30 = (undefined  [8])i._0_8_;
  local_28 = i.node;
  puVar1 = (undefined *)((int)&i.i + 3);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | i._0_8_ >> (7 - uVar3) * 8;
  pOVar2 = i.node;
  do {
    i.node = pOVar2;
    do {
      bVar6 = 0;
      if (i.i == end.i) {
        bVar5 = true;
        if (i.node == end.node) {
          bVar6 = 1;
          if (i.pList != end.pList) {
            bVar6 = 0;
          }
          goto LAB_0023d7c8;
        }
      }
      else {
LAB_0023d7c8:
        bVar5 = (bool)(bVar6 ^ 1);
      }
                    /* end of inlined section */
      if (!bVar5) {
        return (iResFile__6_5027 *)0x0;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
      if ((i.node)->fHeader->type == 2) {
                    /* end of inlined section */
        piVar7 = GetMiddleFile__8Behavior((i.node)->fBehavior);
        return piVar7;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
      if (i.node == (ObjSelector *)0x0) break;
      i.node = (i.node)->pNextHash;
      if (i.node == (ObjSelector *)0x0) {
        i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 1) << 0x20;
      }
    } while (i.node != (ObjSelector *)0x0);
    while (pOVar2 = i.node, i.i < 0x100) {
      pOVar2 = (i.pList)->table[i.i];
      if ((i.pList)->table[i.i] != (ObjSelector *)0x0) break;
      i.i = i.i + 1;
      i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(uint)i.i << 0x20;
    }
  } while( true );
}

void ObjectFolderImpl::LoadUserData(iResFile *file) {
	UserDataSaveLoad userData;
	int iCount;
	int i;
	HandleNode *handle;
	Sint16 resID;
	ObjSelector *sel;
	ThumbnailLoader thumb;
	ObjSelector *pSel;
	
  int iVar1;
  ObjSelector *this_00;
  CustomCharacter *pCVar2;
  ETexture *pTexture;
  long lVar3;
  iResFile__6_5027__vtable *piVar4;
  ushort uVar5;
  BString2 *this_01;
  int iVar6;
  UserDataSaveLoad userData;
  ushort resID;
  ThumbnailLoader thumb;
  
  this_01 = &userData.name;
  __8BString2(this_01);
  __15CustomCharacter(&userData.fCustomCharacter);
  iVar1 = (*(code *)file->__vtable->Add)
                    ((int)&file->fNextFile + (int)*(short *)&file->__vtable->SetID,0x55736572);
  this->m_fLastResID = 0;
  iVar6 = 0;
  if (0 < iVar1) {
    piVar4 = file->__vtable;
    while( true ) {
      iVar6 = iVar6 + 1;
      lVar3 = (**(code **)(piVar4 + 1))
                        ((int)&file->fNextFile + (int)*(short *)&piVar4->GetString,0x55736572,
                         iVar6 * 0x10000 >> 0x10,0);
      if (lVar3 != 0) {
        (*(code *)file->__vtable[1].Close)
                  ((int)&file->fNextFile + (int)*(short *)&file->__vtable[1].Reopen,lVar3,&resID);
        uVar5 = this->m_fLastResID;
        if ((short)this->m_fLastResID < (short)resID) {
          uVar5 = resID;
        }
        this->m_fLastResID = uVar5;
        ReconLoadObject__H1Z16UserDataSaveLoad_PX01PQ26Memory10HandleNodeiPi_v
                  (&userData,(HandleNode *)lVar3,0x55736572,(int *)0x0);
        this_00 = AddUserSelector__16ObjectFolderImplis(this,userData.guid,resID);
        if (this_00 != (ObjSelector *)0x0) {
          SetUserName__11ObjSelectorRC8BString2(this_00,this_01);
          pCVar2 = (CustomCharacter *)__builtin_new(0x18);
          pCVar2 = __15CustomCharacterRC15CustomCharacter(pCVar2,&userData.fCustomCharacter);
          this_00->fCustomCharacter = pCVar2;
          lVar3 = (*(code *)file->__vtable->Write)
                            ((int)&file->fNextFile + (int)*(short *)&file->__vtable->AddWithLanguage
                             ,0x74686d62,resID,0);
          if (lVar3 == 0) {
            pTexture = CreateEmptyThumbnail__15ThumbnailLoader();
            SetThumbnail__11ObjSelectorP8ETexture(this_00,pTexture);
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
            thumb.m_pSelector = this_00;
            ReconLoadObject__H1Z15ThumbnailLoader_PX01PQ26Memory10HandleNodeiPi_v
                      (&thumb,(HandleNode *)lVar3,0x74686d62,(int *)0x0);
          }
        }
      }
      if (iVar1 <= iVar6) break;
      piVar4 = file->__vtable;
    }
  }
  ___8BString2(this_01,2);
  return;
}

void ObjectFolderImpl::SaveUserData(iResFile *file) {
	HashIterator<ObjSelector,int,256> i;
	HashIterator<ObjSelector,int,256> end;
	int index;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *sel;
	ObjSelector *this;
	ObjSelector *this;
	UserDataSaveLoad userData;
	ThumbnailLoader thumb;
	ThumbnailLoader *this;
	ObjSelector *pSel;
	ObjSelector *this;
	HashIterator<ObjSelector,int,256> *this;
	
  undefined *puVar1;
  uint uVar2;
  BehaviorFinder__vtable *pBVar3;
  CustomCharacter *pCVar4;
  ObjSelector *pOVar5;
  ulong *puVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;
  ulong uVar10;
  uint uVar11;
  BString2 *str;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong in_t3;
  ushort id;
  HashIterator_ObjSelector_int_256_ i;
  HashIterator_ObjSelector_int_256_ end;
  UserDataSaveLoad userData;
  ThumbnailLoader thumb;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
  id = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pBVar3 = (this->field26_0x20).__vtable;
  i.node = (ObjSelector *)0x0;
  userData.fCustomCharacter._0_8_ = userData.fCustomCharacter._0_8_ & 0xffffffff00000000;
  userData._0_8_ = CONCAT44(0x100,&this->field26_0x20);
  puVar1 = (undefined *)((int)&end.i + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar11);
  *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | userData._0_8_ >> (7 - uVar11) * 8;
  end._0_8_ = userData._0_8_;
  end.node = (ObjSelector *)0x0;
  userData.fCustomCharacter._16_8_ = (ulong)userData.fCustomCharacter._20_4_ << 0x20;
  userData.fCustomCharacter._8_8_ = ZEXT48(&this->field26_0x20);
  if (pBVar3 == (BehaviorFinder__vtable *)0x0) {
    userData.fCustomCharacter._12_4_ = 0;
    do {
      userData.fCustomCharacter._12_4_ = userData.fCustomCharacter._12_4_ + 1;
      uVar13 = userData.fCustomCharacter._8_8_ & 0xffffffff;
      userData.fCustomCharacter._8_8_ = uVar13 | (ulong)userData.fCustomCharacter._12_4_ << 0x20;
      userData.fCustomCharacter._8_4_ = (int)uVar13;
      if (0xff < (int)userData.fCustomCharacter._12_4_) goto LAB_0023da88;
      iVar12 = *(int *)(userData.fCustomCharacter._8_4_ + userData.fCustomCharacter._12_4_ * 4);
    } while (iVar12 == 0);
    userData.fCustomCharacter._16_8_ = CONCAT44(userData.fCustomCharacter._20_4_,iVar12);
  }
  else {
    userData.fCustomCharacter._16_8_ = CONCAT44(userData.fCustomCharacter._20_4_,pBVar3);
  }
LAB_0023da88:
  uVar10 = userData.fCustomCharacter._16_8_;
  uVar13 = userData.fCustomCharacter._8_8_;
  uVar14 = (ulong)(int)userData.fCustomCharacter._16_4_;
  puVar1 = (undefined *)((int)&userData.name.reference + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar11);
  *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | userData.fCustomCharacter._8_8_ >> (7 - uVar11) * 8;
  userData._0_8_ = uVar13;
  userData.fCustomCharacter._0_8_ =
       uVar10 & 0xffffffff | (ulong)userData.fCustomCharacter._4_4_ << 0x20;
  puVar1 = (undefined *)((int)&i.i + 3);
                    /* end of inlined section */
  uVar11 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar11);
  *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | uVar13 >> (7 - uVar11) * 8;
  i._0_8_ = uVar13;
  i.node = userData.fCustomCharacter._16_4_;
  pOVar5 = i.node;
LAB_0023dc10:
  i.node = pOVar5;
LAB_0023dc14:
  pOVar5 = i.node;
  bVar9 = 0;
  if (i.i == end.i) {
    bVar8 = true;
    if (i.node == end.node) {
      bVar9 = 1;
      if (i.pList != end.pList) {
        bVar9 = 0;
      }
      goto LAB_0023dc44;
    }
  }
  else {
LAB_0023dc44:
    bVar8 = (bool)(bVar9 ^ 1);
  }
                    /* end of inlined section */
  if (!bVar8) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  if ((int)((i.node)->fFlags & 0xcU) >> 2 == 1) {
    __8BString2(&userData.name);
    __15CustomCharacter(&userData.fCustomCharacter);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    thumb.m_pSelector = pOVar5;
                    /* end of inlined section */
    uVar11 = GetGUID__11ObjSelector(pOVar5);
    userData._0_8_ = userData._0_8_ & 0xffffffff00000000 | (ulong)uVar11;
    str = GetUserName__11ObjSelector(pOVar5);
    __as__8BString2RC8BString2(&userData.name,str);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    pCVar4 = pOVar5->fCustomCharacter;
                    /* end of inlined section */
    uVar11 = (uint)&pCVar4->field_0x7 & 7;
    uVar2 = (uint)pCVar4 & 7;
    uVar13 = (*(long *)(&pCVar4->field_0x7 + -uVar11) << (7 - uVar11) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)pCVar4 - uVar2) >> uVar2 * 8;
    uVar11 = (uint)&pCVar4->m_nFacialHairIndex & 7;
    uVar2 = (uint)&pCVar4->m_nBodyType & 7;
    uVar14 = (*(long *)(&pCVar4->m_nFacialHairIndex + -uVar11) << (7 - uVar11) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)(&pCVar4->m_nBodyType + -uVar2) >> uVar2 * 8;
    uVar11 = (uint)&pCVar4->field_0x17 & 7;
    uVar2 = (uint)&pCVar4->m_nSkinColor & 7;
    in_t3 = (*(long *)(&pCVar4->field_0x17 + -uVar11) << (7 - uVar11) * 8 |
            in_t3 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)(&pCVar4->m_nSkinColor + -uVar2) >> uVar2 * 8;
    puVar1 = &userData.fCustomCharacter.field_0x7;
    uVar11 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar11);
    *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | uVar13 >> (7 - uVar11) * 8;
    pcVar7 = &userData.fCustomCharacter.m_nFacialHairIndex;
    uVar11 = (uint)pcVar7 & 7;
    pcVar7 = pcVar7 + -uVar11;
    *(ulong *)pcVar7 = *(ulong *)pcVar7 & -1L << (uVar11 + 1) * 8 | uVar14 >> (7 - uVar11) * 8;
    puVar1 = &userData.fCustomCharacter.field_0x17;
    uVar11 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar11);
    *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | in_t3 >> (7 - uVar11) * 8;
    userData.fCustomCharacter._0_8_ = uVar13;
    userData.fCustomCharacter._8_8_ = uVar14;
    userData.fCustomCharacter._16_8_ = in_t3;
    ReconSaveObject__H1Z16UserDataSaveLoad_PX01P8iResFileisi_i(&userData,file,0x55736572,id,1);
    ReconSaveObject__H1Z15ThumbnailLoader_PX01P8iResFileisi_i(&thumb,file,0x74686d62,id,1);
    ___8BString2(&userData.name,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    id = id + 1;
  }
  if (i.node != (ObjSelector *)0x0) goto code_r0x0023dba4;
  goto LAB_0023dbc8;
code_r0x0023dba4:
  i.node = (i.node)->pNextHash;
  if (i.node == (ObjSelector *)0x0) {
    i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 1) << 0x20;
  }
  if (i.node == (ObjSelector *)0x0) {
LAB_0023dbc8:
    iVar12 = i.i << 2;
    pOVar5 = i.node;
    if (i.i < 0x100) {
      while( true ) {
        pOVar5 = *(ObjSelector **)((int)(i.pList)->table + iVar12);
        if (pOVar5 != (ObjSelector *)0x0) goto LAB_0023dc10;
        i.i = i.i + 1;
        iVar12 = i.i * 4;
        uVar10 = i._0_8_ & 0xffffffff;
        i._0_8_ = uVar10 | (ulong)(uint)i.i << 0x20;
        if (0xff < i.i) break;
        i.pList = (HashList_ObjSelector_int_256_ *)uVar10;
      }
      goto LAB_0023dc14;
    }
    goto LAB_0023dc10;
  }
  goto LAB_0023dc14;
}

ObjSelector* ObjectFolderImpl::CreateNewUserSelector() {
	ObjSelector *result;
	
  ushort resID;
  uint guid;
  ObjSelector *pOVar1;
  CustomCharacter *pCVar2;
  
  guid = MakeNewGUID__10StubObject();
  resID = this->m_fLastResID + 1;
  this->m_fLastResID = resID;
  pOVar1 = AddUserSelector__16ObjectFolderImplis(this,guid,resID);
  pCVar2 = (CustomCharacter *)__builtin_new(0x18);
  pCVar2 = __15CustomCharacter(pCVar2);
  pOVar1->fCustomCharacter = pCVar2;
  return pOVar1;
}

bool ObjectFolderImpl::RemoveSelector(ObjSelector *sel) {
	SInt32 guid;
	HashList<ObjSelector,int,256> *this;
	SInt32 &cmp;
	unsigned int key;
	SInt32 &cmp;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	ObjSelector *prev;
	ObjSelector *this;
	SInt32 guid;
	HashList<ObjSelector,int,256> *this;
	ObjSelector *node;
	ObjSelector *prev;
	ObjSelector *this;
	
  uint uVar1;
  uint uVar2;
  ObjSelector *pOVar3;
  BehaviorFinder *pBVar4;
  ObjSelector *pOVar5;
  int guid;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
  uVar1 = GetGUID__11ObjSelector(sel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pBVar4 = &this->field26_0x20 + (uVar1 & 0xff);
  pOVar5 = (ObjSelector *)0x0;
  pOVar3 = (ObjSelector *)pBVar4->__vtable;
  while( true ) {
    if (pOVar3 == (ObjSelector *)0x0) {
      return false;
    }
    uVar2 = GetGUID__11ObjSelector(pOVar3);
    if (uVar1 == uVar2) break;
    pOVar5 = pOVar3;
    pOVar3 = pOVar3->pNextHash;
  }
  if (pOVar5 != (ObjSelector *)0x0) {
    pOVar5->pNextHash = pOVar3->pNextHash;
    pOVar3->pNextHash = (ObjSelector *)pBVar4->__vtable;
    pBVar4->__vtable = (BehaviorFinder__vtable *)pOVar3;
  }
                    /* end of inlined section */
  if (pOVar3 == (ObjSelector *)0x0) {
    return false;
  }
                    /* end of inlined section */
  GlobalDispatch__Fsi(0x103,uVar1);
  GlobalDispatch__Fsi(0xdf,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  uVar1 = GetGUID__11ObjSelector(sel);
  pOVar3 = (ObjSelector *)(&this->field26_0x20)[uVar1 & 0xff].__vtable;
  if (sel == pOVar3) {
    (&this->field26_0x20)[uVar1 & 0xff].__vtable = (BehaviorFinder__vtable *)sel->pNextHash;
  }
  else if (pOVar3 != (ObjSelector *)0x0) {
    for (pOVar5 = pOVar3->pNextHash; pOVar5 != (ObjSelector *)0x0; pOVar5 = pOVar5->pNextHash) {
      if (pOVar5 == sel) {
        if (pOVar5 != (ObjSelector *)0x0) {
          pOVar3->pNextHash = sel->pNextHash;
        }
        break;
      }
      pOVar3 = pOVar5;
    }
  }
  DestroySelector__16ObjectFolderImplP11ObjSelector(this,sel);
  return false;
}

bool ObjectFolderImpl::ForceDataPreload(ObjSelector *objSel, bool bWait) {
	bool result;
	ObjSelector *this;
	SInt16 masterID;
	ObjSelector *pSel;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ObjectFolder__vtable *pOVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  if (objSel->fHeader->pResData == (ResData *)0x0) {
                    /* end of inlined section */
    pOVar6 = (this->field0_0x0).__vtable;
    uVar1 = objSel->fHeader->masterID;
    lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                      ((int)&(this->field0_0x0).__vtable +
                       (int)*(short *)&pOVar6->SuspendObjectFiles,0);
    bVar3 = true;
    if (lVar4 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
      iVar5 = *(int *)((int)lVar4 + 0x18);
      bVar3 = true;
      while( true ) {
                    /* end of inlined section */
        if (*(ushort *)(iVar5 + 0x14) == uVar1) {
                    /* end of inlined section */
          if (*(int *)(iVar5 + 0xc0) == 0) {
            pOVar6 = (this->field0_0x0).__vtable;
          }
          else {
            bVar2 = TestFromSameFile__C11ObjSelectorPC11ObjSelector((ObjSelector *)lVar4,objSel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
            if ((bVar2) &&
               (pOVar6 = (this->field0_0x0).__vtable,
               (*(code *)pOVar6[2].ObjectFolder)
                         ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pOVar6 + 2),lVar4,
                          bWait), ((ObjSelector *)lVar4)->fActualPreloadState != kDataLoaded)) {
              bVar3 = false;
            }
            pOVar6 = (this->field0_0x0).__vtable;
          }
        }
        else {
          pOVar6 = (this->field0_0x0).__vtable;
        }
        lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                          ((int)&(this->field0_0x0).__vtable +
                           (int)*(short *)&pOVar6->SuspendObjectFiles,lVar4);
        if (lVar4 == 0) break;
        iVar5 = *(int *)((int)lVar4 + 0x18);
      }
    }
  }
  else {
    pOVar6 = (this->field0_0x0).__vtable;
    (*(code *)pOVar6[2].ObjectFolder)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pOVar6 + 2),objSel,bWait);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
    bVar3 = objSel->fActualPreloadState == kDataLoaded;
  }
  return bVar3;
}

void ObjectFolderImpl::forceDataPreload(ObjSelector *sel, bool bWait) {
  ObjectFolder__vtable *pOVar1;
  ObjDefinition *pOVar2;
  uint uVar3;
  
  if (sel->fDesiredPreloadState == kNotLoaded) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable->SwapSelectedSims)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable->DoModelessMessage + -0x24,sel,bWait);
    if ((sel->field0_0x0).fFile == (iResFile__6_5027 *)0x0) {
      pOVar1 = (this->field0_0x0).__vtable;
      (*(code *)pOVar1[1].CreateNewUserSelector)
                ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pOVar1[1].RemoveSelector,sel);
      pOVar2 = sel->fHeader;
    }
    else {
      pOVar2 = sel->fHeader;
    }
    uVar3 = this->m_uCurrentPreloadCost;
    if (pOVar2->pResData != (ResData *)0x0) {
      uVar3 = uVar3 + pOVar2->pResData->uMemoryCost;
    }
    this->m_uCurrentPreloadCost = uVar3;
  }
  return;
}

void ObjectFolderImpl::CreatingInstance(ObjSelector *sel) {
  ObjectFolder__vtable *pOVar1;
  bool bVar2;
  uint uVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  bVar2 = false;
  if ((sel->fActualPreloadState != kDataLoaded) &&
     (bVar2 = true, sel->fHeader->pResData == (ResData *)0x0)) {
    bVar2 = false;
  }
  if (bVar2) {
    pOVar1 = (this->field0_0x0).__vtable;
    (*(code *)pOVar1[2].ObjectFolder)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pOVar1 + 2),sel,1);
  }
  sel->fInstanceCount = sel->fInstanceCount + 1;
  uVar3 = calcPerformanceCost__16ObjectFolderImplP11ObjSelector(this,sel);
  this->m_uCurrentPerformanceCost = this->m_uCurrentPerformanceCost + uVar3;
  return;
}

void ObjectFolderImpl::DeletingInstance(ObjSelector *sel) {
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = sel->fInstanceCount + -1;
  sel->fInstanceCount = iVar2;
  if ((iVar2 == 0) && (bVar1 = IsPreloadable__C11ObjSelector(sel), !bVar1)) {
    UnloadData__16ObjectFolderImplP11ObjSelector(this,sel);
  }
  uVar3 = calcPerformanceCost__16ObjectFolderImplP11ObjSelector(this,sel);
  this->m_uCurrentPerformanceCost = this->m_uCurrentPerformanceCost - uVar3;
  return;
}

void ObjectFolderImpl::CreatingResFile(iResFile *pFile) {
  ResFile *pRVar1;
  uint uVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
  pRVar1 = pFile->fResData;
                    /* end of inlined section */
  if (pRVar1 != (ResFile *)0x0) {
    uVar2 = this->m_uCurrentPreloadCost + pRVar1->uAnimMemCost;
    this->m_uCurrentPreloadCost = uVar2;
    this->m_uCurrentPreloadCost = uVar2 + pRVar1->uPropMemCost;
  }
  return;
}

void ObjectFolderImpl::DeletingResFile(iResFile *pFile) {
  ResFile *pRVar1;
  uint uVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
  pRVar1 = pFile->fResData;
                    /* end of inlined section */
  if (pRVar1 != (ResFile *)0x0) {
    uVar2 = this->m_uCurrentPreloadCost - pRVar1->uAnimMemCost;
    this->m_uCurrentPreloadCost = uVar2;
    this->m_uCurrentPreloadCost = uVar2 - pRVar1->uPropMemCost;
  }
  return;
}

void ObjectFolderImpl::PrepareForModuleLoad(iResFile *file) {
	SInt16 type;
	HashIterator<ObjSelector,int,256> i;
	ObjectSaveTypeTable ott;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> *this;
	ObjectFolderImpl *f;
	SInt32 *first;
	SInt32 *last;
	SInt32 *pointer;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	vector<int,__malloc_alloc_template<0> > *this;
	SInt32 &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	HashIterator<ObjSelector,int,256> *this;
	
  undefined *puVar1;
  ushort uVar2;
  ulong *puVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  int *piVar7;
  ObjSelector *pOVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  BehaviorFinder *pBVar12;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  HashIterator_ObjSelector_int_256_ i;
  undefined local_c0 [8];
  ObjSelector *local_b8;
  HashIterator_ObjSelector_int_256_ result;
  ObjectSaveTypeTable ott;
  int local_8c;
  int local_88 [2];
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
  
  local_30 = (int)unaff_s5;
  uStack_2c = (int)((ulong)unaff_s5 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  local_50 = (int)unaff_s3;
  uStack_4c = (int)((ulong)unaff_s3 >> 0x20);
  local_80 = (int)unaff_s0;
  uStack_7c = (int)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  result.pList = (HashList_ObjSelector_int_256_ *)&this->field26_0x20;
  local_20 = (int)unaff_s6;
  uStack_1c = (int)((ulong)unaff_s6 >> 0x20);
  local_40 = (int)unaff_s4;
  uStack_3c = (int)((ulong)unaff_s4 >> 0x20);
  local_60 = (int)unaff_s2;
  uStack_5c = (int)((ulong)unaff_s2 >> 0x20);
  local_70 = (int)unaff_s1;
  uStack_6c = (int)((ulong)unaff_s1 >> 0x20);
  pOVar8 = (ObjSelector *)(this->field26_0x20).__vtable;
  i.node = (ObjSelector *)0x0;
  result.node = (ObjSelector *)0x0;
  result.i = 0;
  if (pOVar8 == (ObjSelector *)0x0) {
    result.i = 0;
    do {
      result.i = result.i + 1;
      if (0xff < result.i) goto LAB_0023e1f8;
    } while ((ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable ==
             (ObjSelector *)0x0);
    result.node = (ObjSelector *)((BehaviorFinder *)((int)result.pList + result.i * 4))->__vtable;
  }
  else {
    result.node = pOVar8;
  }
LAB_0023e1f8:
  local_b8 = result.node;
  i._0_8_ = CONCAT44(result.i,result.pList);
  puVar1 = local_c0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | i._0_8_ >> (7 - uVar10) * 8;
  local_c0 = (undefined  [8])i._0_8_;
  puVar1 = (undefined *)((int)&i.i + 3);
                    /* end of inlined section */
  uVar10 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar10);
  *puVar3 = *puVar3 & -1L << (uVar10 + 1) * 8 | i._0_8_ >> (7 - uVar10) * 8;
  i.node = local_b8;
  pBVar12 = &this->field26_0x20;
  pOVar8 = i.node;
LAB_0023e2bc:
  i.node = pOVar8;
  local_c0 = (undefined  [8])CONCAT44(0x100,pBVar12);
  puVar1 = local_c0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | (ulong)local_c0 >> (7 - uVar10) * 8;
  local_b8 = (ObjSelector *)0x0;
  bVar4 = false;
  if (i.i == 0x100) {
    bVar4 = true;
    if (i.node == (ObjSelector *)0x0) {
      bVar4 = i.pList == (HashList_ObjSelector_int_256_ *)pBVar12;
      goto LAB_0023e314;
    }
  }
  else {
LAB_0023e314:
    bVar4 = (bool)(bVar4 ^ 1);
  }
                    /* end of inlined section */
  if (bVar4) {
                    /* end of inlined section */
    (i.node)->f_SaveType = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
    if (i.node != (ObjSelector *)0x0) goto code_r0x0023e248;
    goto LAB_0023e26c;
  }
  ott.fFolder = this;
  ReconLoadObject__H1Z19ObjectSaveTypeTable_PX01P8iResFileisPi_i
            (&ott,file,kObjectTypeTableResType,(ushort)kObjectTypeTableResID,(int *)0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  piVar11 = (this->fSaveTypes).start;
  for (piVar7 = piVar11; piVar7 != (this->fSaveTypes).finish; piVar7 = piVar7 + 1) {
  }
  (this->fSaveTypes).finish = piVar11;
  local_8c = 0;
  if (piVar11 == (this->fSaveTypes).end_of_storage) {
    insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
              ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fSaveTypes,piVar11,
               &local_8c);
  }
  else {
    *piVar11 = 0;
    (this->fSaveTypes).finish = (this->fSaveTypes).finish + 1;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  pOVar8 = (ObjSelector *)(this->field26_0x20).__vtable;
  result.node = (ObjSelector *)0x0;
  result.pList = (HashList_ObjSelector_int_256_ *)pBVar12;
  result.i = 0;
  while (pOVar8 == (ObjSelector *)0x0) {
    result.i = result.i + 1;
    if (0xff < result.i) goto LAB_0023e3e4;
    pOVar8 = (ObjSelector *)pBVar12[result.i].__vtable;
  }
  result.node = pOVar8;
LAB_0023e3e4:
  i._0_8_ = CONCAT44(result.i,pBVar12);
  puVar1 = local_c0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | i._0_8_ >> (7 - uVar10) * 8;
  local_c0 = (undefined  [8])i._0_8_;
  local_b8 = result.node;
  puVar1 = (undefined *)((int)&i.i + 3);
                    /* end of inlined section */
  uVar10 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar10);
  *puVar3 = *puVar3 & -1L << (uVar10 + 1) * 8 | i._0_8_ >> (7 - uVar10) * 8;
  i.node = result.node;
  pOVar8 = i.node;
LAB_0023e544:
  i.node = pOVar8;
  result.node = (ObjSelector *)0x0;
  result.pList = (HashList_ObjSelector_int_256_ *)pBVar12;
  result.i = 0x100;
  local_c0 = (undefined  [8])CONCAT44(0x100,pBVar12);
  local_b8 = (ObjSelector *)0x0;
  puVar1 = local_c0 + 7;
  uVar10 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar10) =
       *(ulong *)(puVar1 + -uVar10) & -1L << (uVar10 + 1) * 8 | (ulong)local_c0 >> (7 - uVar10) * 8;
  bVar5 = 0;
  if (i.i == 0x100) {
    bVar4 = true;
    if (i.node == (ObjSelector *)0x0) {
      bVar5 = 1;
      if (i.pList != (HashList_ObjSelector_int_256_ *)pBVar12) {
        bVar5 = 0;
      }
      goto LAB_0023e5a0;
    }
  }
  else {
LAB_0023e5a0:
    bVar4 = (bool)(bVar5 ^ 1);
  }
                    /* end of inlined section */
  if (!bVar4) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  piVar11 = (this->fSaveTypes).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if ((uint)((int)(this->fSaveTypes).finish - (int)piVar11 >> 2) <= (uint)(i.node)->f_SaveType) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      piVar11 = (this->fSaveTypes).finish;
      local_88[0] = 0;
      if (piVar11 == (this->fSaveTypes).end_of_storage) {
        insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                  ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fSaveTypes,piVar11,
                   local_88);
      }
      else {
        *piVar11 = 0;
        (this->fSaveTypes).finish = (this->fSaveTypes).finish + 1;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      piVar11 = (this->fSaveTypes).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    } while ((uint)((int)(this->fSaveTypes).finish - (int)piVar11 >> 2) <=
             (uint)(i.node)->f_SaveType);
  }
                    /* end of inlined section */
  uVar2 = (i.node)->f_SaveType;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  iVar9 = GetGUID__11ObjSelector(i.node);
  piVar11[(short)uVar2] = iVar9;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  if (i.node != (ObjSelector *)0x0) goto code_r0x0023e4d4;
  goto LAB_0023e4f8;
code_r0x0023e248:
  i.node = (i.node)->pNextHash;
  pOVar8 = i.node;
  if (i.node == (ObjSelector *)0x0) {
    i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 1) << 0x20;
LAB_0023e26c:
    iVar9 = i.i << 2;
    pOVar8 = i.node;
    if (i.i < 0x100) {
      while (pOVar8 = *(ObjSelector **)((int)(i.pList)->table + iVar9), pOVar8 == (ObjSelector *)0x0
            ) {
        uVar10 = i.i + 1;
        iVar9 = uVar10 * 4;
        uVar6 = i._0_8_ & 0xffffffff;
        i._0_8_ = uVar6 | (ulong)uVar10 << 0x20;
        pOVar8 = i.node;
        if (0xff < (int)uVar10) break;
        i.pList = (HashList_ObjSelector_int_256_ *)uVar6;
      }
    }
  }
  goto LAB_0023e2bc;
code_r0x0023e4d4:
  i.node = (i.node)->pNextHash;
  pOVar8 = i.node;
  if (i.node == (ObjSelector *)0x0) {
    i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 1) << 0x20;
LAB_0023e4f8:
    iVar9 = i.i << 2;
    pOVar8 = i.node;
    if (i.i < 0x100) {
      while (pOVar8 = *(ObjSelector **)((int)(i.pList)->table + iVar9), pOVar8 == (ObjSelector *)0x0
            ) {
        uVar10 = i.i + 1;
        iVar9 = uVar10 * 4;
        uVar6 = i._0_8_ & 0xffffffff;
        i._0_8_ = uVar6 | (ulong)uVar10 << 0x20;
        pOVar8 = i.node;
        if (0xff < (int)uVar10) break;
        i.pList = (HashList_ObjSelector_int_256_ *)uVar6;
      }
    }
  }
  goto LAB_0023e544;
}

void ObjectFolderImpl::PrepareForModuleSave(iResFile *file) {
	SInt16 type;
	HashIterator<ObjSelector,int,256> i;
	ObjectSaveTypeTable ott;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	SInt32 *first;
	SInt32 *last;
	SInt32 *pointer;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	vector<int,__malloc_alloc_template<0> > *this;
	SInt32 &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	HashIterator<ObjSelector,int,256> *this;
	ObjectFolderImpl *f;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  byte bVar6;
  ObjSelector *pOVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  BehaviorFinder *pBVar11;
  int iVar12;
  HashIterator_ObjSelector_int_256_ i;
  undefined local_e0 [8];
  ObjSelector *local_d8;
  BehaviorFinder *local_d0;
  int local_cc;
  ObjSelector *local_c8;
  HashIterator_ObjSelector_int_256_ result;
  int local_b0;
  int local_ac;
  ObjectSaveTypeTable ott;
  iResFile__6_5027 *local_a4;
  
  iVar12 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pBVar11 = &this->field26_0x20;
  piVar2 = (this->fSaveTypes).start;
  for (piVar8 = piVar2; piVar8 != (this->fSaveTypes).finish; piVar8 = piVar8 + 1) {
  }
  (this->fSaveTypes).finish = piVar2;
                    /* end of inlined section */
  local_b0 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  piVar2 = (this->fSaveTypes).finish;
  if (piVar2 == (this->fSaveTypes).end_of_storage) {
    insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
              ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fSaveTypes,piVar2,&local_b0
              );
  }
  else {
    *piVar2 = 0;
    (this->fSaveTypes).finish = (this->fSaveTypes).finish + 1;
  }
  pOVar7 = (ObjSelector *)(this->field26_0x20).__vtable;
  i.node = (ObjSelector *)0x0;
  local_c8 = (ObjSelector *)0x0;
  local_d0 = pBVar11;
  local_cc = 0;
  while (pOVar7 == (ObjSelector *)0x0) {
    local_cc = local_cc + 1;
    if (0xff < local_cc) goto LAB_0023e6dc;
    pOVar7 = (ObjSelector *)pBVar11[local_cc].__vtable;
  }
  local_c8 = pOVar7;
LAB_0023e6dc:
                    /* end of inlined section */
  local_d8 = local_c8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  i._0_8_ = CONCAT44(local_cc,pBVar11);
  puVar1 = local_e0 + 7;
  uVar3 = (uint)puVar1 & 7;
  local_a4 = file;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | i._0_8_ >> (7 - uVar3) * 8;
  local_e0 = (undefined  [8])i._0_8_;
                    /* end of inlined section */
  iVar10 = 0x20000;
  puVar1 = (undefined *)((int)&i.i + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | i._0_8_ >> (7 - uVar3) * 8;
  i.node = local_d8;
  pOVar7 = i.node;
LAB_0023e7f8:
  i.node = pOVar7;
  result.node = (ObjSelector *)0x0;
  result.pList = (HashList_ObjSelector_int_256_ *)pBVar11;
  result.i = 0x100;
  local_e0 = (undefined  [8])CONCAT44(0x100,pBVar11);
  puVar1 = local_e0 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | (ulong)local_e0 >> (7 - uVar3) * 8;
  local_d8 = (ObjSelector *)0x0;
  bVar6 = 0;
  if (i.i == 0x100) {
    bVar5 = true;
    if (i.node == (ObjSelector *)0x0) {
      bVar6 = 1;
      if (i.pList != (HashList_ObjSelector_int_256_ *)pBVar11) {
        bVar6 = 0;
      }
      goto LAB_0023e854;
    }
  }
  else {
LAB_0023e854:
    bVar5 = (bool)(bVar6 ^ 1);
  }
                    /* end of inlined section */
  if (!bVar5) {
    ott.fFolder = this;
    ReconSaveObject__H1Z19ObjectSaveTypeTable_PX01P8iResFileisi_i
              (&ott,local_a4,kObjectTypeTableResType,(ushort)kObjectTypeTableResID,2);
    return;
  }
                    /* end of inlined section */
  if ((i.node)->fInstanceCount < 1) {
                    /* end of inlined section */
    (i.node)->f_SaveType = 0;
  }
  else {
                    /* end of inlined section */
    iVar9 = iVar10 >> 0x10;
    (i.node)->f_SaveType = (ushort)iVar12;
    iVar10 = iVar10 + 0x10000;
    local_ac = GetGUID__11ObjSelector(i.node);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    piVar2 = (this->fSaveTypes).finish;
    iVar12 = iVar9;
    if (piVar2 == (this->fSaveTypes).end_of_storage) {
      insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fSaveTypes,piVar2,
                 &local_ac);
                    /* end of inlined section */
    }
    else {
      *piVar2 = local_ac;
      (this->fSaveTypes).finish = (this->fSaveTypes).finish + 1;
    }
  }
  if (i.node != (ObjSelector *)0x0) goto code_r0x0023e79c;
  goto LAB_0023e7c0;
code_r0x0023e79c:
  i.node = (i.node)->pNextHash;
  pOVar7 = i.node;
  if (i.node == (ObjSelector *)0x0) {
    i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 1) << 0x20;
LAB_0023e7c0:
    while (pOVar7 = i.node, i.i < 0x100) {
      pOVar7 = (i.pList)->table[i.i];
      if ((i.pList)->table[i.i] != (ObjSelector *)0x0) break;
      i.i = i.i + 1;
      i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(uint)i.i << 0x20;
    }
  }
  goto LAB_0023e7f8;
}

ObjSelector* ObjectFolderImpl::GetPlaceholder() {
  ObjectFolder__vtable *pOVar1;
  ObjSelector *pOVar2;
  
  pOVar1 = (this->field0_0x0).__vtable;
  pOVar2 = (ObjSelector *)
           (*(code *)pOVar1->DeletingInstance)
                     ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pOVar1->CreatingInstance,
                      0x7fd96b54);
  return pOVar2;
}

void ObjectFolderImpl::FreeUnusedData() {
	CTGMicroTimer timer;
	HashIterator<ObjSelector,int,256> i;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *sel;
	ObjSelector *this;
	ObjSelector *this;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  CTGDump *pCVar6;
  long lVar7;
  BehaviorFinder *pBVar8;
  CTGMicroTimer timer;
  HashIterator_ObjSelector_int_256_ i;
  undefined local_b0 [8];
  ObjSelector *local_a8;
  BehaviorFinder *local_a0;
  int local_9c;
  ObjSelector *local_98;
  HashIterator_ObjSelector_int_256_ result;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/CTGMicroTimer.h */
  timer.mStart = 0;
  timer.mStop = 0;
  QueryPerformanceFrequency__FPl(&timer.mFrequency);
  timer.mIsRunning = 0;
  QueryPerformanceCounter__FPl(&timer.mStart);
  pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
  local_a0 = &this->field26_0x20;
  timer.mIsRunning = 1;
  i.node = (ObjSelector *)0x0;
  local_98 = (ObjSelector *)0x0;
  local_9c = 0;
  if (pOVar2 == (ObjSelector *)0x0) {
    local_9c = 0;
    do {
      local_9c = local_9c + 1;
      if (0xff < local_9c) goto LAB_0023e998;
    } while ((ObjSelector *)local_a0[local_9c].__vtable == (ObjSelector *)0x0);
    local_98 = (ObjSelector *)local_a0[local_9c].__vtable;
  }
  else {
    local_98 = pOVar2;
  }
LAB_0023e998:
  local_a8 = local_98;
  i._0_8_ = CONCAT44(local_9c,local_a0);
  puVar1 = local_b0 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | i._0_8_ >> (7 - uVar3) * 8;
  local_b0 = (undefined  [8])i._0_8_;
  puVar1 = (undefined *)((int)&i.i + 3);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | i._0_8_ >> (7 - uVar3) * 8;
  i.node = local_a8;
  pBVar8 = &this->field26_0x20;
  pOVar2 = i.node;
LAB_0023ea78:
  i.node = pOVar2;
  pOVar2 = i.node;
  result.node = (ObjSelector *)0x0;
  result.pList = (HashList_ObjSelector_int_256_ *)pBVar8;
  result.i = 0x100;
  local_b0 = (undefined  [8])CONCAT44(0x100,pBVar8);
  puVar1 = local_b0 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | (ulong)local_b0 >> (7 - uVar3) * 8;
  local_a8 = (ObjSelector *)0x0;
  bVar5 = false;
  if (i.i == 0x100) {
    bVar5 = true;
    if (i.node == (ObjSelector *)0x0) {
      bVar5 = i.pList == (HashList_ObjSelector_int_256_ *)pBVar8;
      goto LAB_0023ead0;
    }
  }
  else {
LAB_0023ead0:
    bVar5 = (bool)(bVar5 ^ 1);
  }
                    /* end of inlined section */
  if (!bVar5) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/CTGMicroTimer.h */
    QueryPerformanceCounter__FPl(&timer.mStop);
                    /* end of inlined section */
                    /* end of inlined section */
    timer.mIsRunning = 0;
    pCVar6 = __ls__7CTGDumpPCc(&ctgDump,"Object unload time: ");
    lVar7 = GetElapsedTime__C13CTGMicroTimer(&timer);
    pCVar6 = __ls__7CTGDumpi(pCVar6,(int)lVar7);
    __ls__7CTGDumpPCc(pCVar6,"\n");
    return;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  if ((((i.node)->fInstanceCount == 0) && (bVar5 = IsPreloadable__C11ObjSelector(i.node), !bVar5))
     && ((int)(pOVar2->fFlags & 0xcU) >> 2 != 1)) {
    UnloadData__16ObjectFolderImplP11ObjSelector(this,pOVar2);
  }
  if (i.node != (ObjSelector *)0x0) goto code_r0x0023ea18;
  goto LAB_0023ea50;
code_r0x0023ea18:
  i.node = (i.node)->pNextHash;
  pOVar2 = i.node;
  if (i.node == (ObjSelector *)0x0) {
    i.i = i.i + 1;
    i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(uint)i.i << 0x20;
LAB_0023ea50:
    while ((pOVar2 = i.node, i.i < 0x100 &&
           (pOVar2 = (i.pList)->table[i.i], (i.pList)->table[i.i] == (ObjSelector *)0x0))) {
      i.i = i.i + 1;
      i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(uint)i.i << 0x20;
    }
  }
  goto LAB_0023ea78;
}

void ObjectFolderImpl::DeleteUserSelectors() {
	HashIterator<ObjSelector,int,256> i;
	vector<ObjSelector *,__malloc_alloc_template<0> > killList;
	HashList<ObjSelector,int,256> *this;
	HashIterator<ObjSelector,int,256> result;
	HashIterator<ObjSelector,int,256> result;
	ObjSelector *sel;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *&x;
	ObjSelector *&value;
	HashIterator<ObjSelector,int,256> *this;
	int i;
	unsigned int n;
	ObjSelector *node;
	ObjSelector *prev;
	ObjSelector *this;
	unsigned int n;
	ObjSelector **last;
	ObjSelector **first;
	ObjSelector **pointer;
	
  undefined *puVar1;
  ObjSelector *pOVar2;
  ObjSelector *pOVar3;
  ulong *puVar4;
  bool bVar5;
  ObjSelector **ppOVar6;
  uint uVar7;
  ObjSelector *pOVar8;
  int iVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar10;
  undefined8 unaff_s2;
  int iVar11;
  undefined8 unaff_s3;
  BehaviorFinder *pBVar12;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  HashIterator_ObjSelector_int_256_ i;
  vector_ObjSelector_____malloc_alloc_template_0___ killList;
  undefined local_b0 [8];
  ObjSelector *local_a8;
  BehaviorFinder *local_a0;
  int local_9c;
  ObjSelector *local_98;
  HashIterator_ObjSelector_int_256_ result;
  ObjSelector *sel;
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
  
                    /* end of inlined section */
  local_20 = (int)unaff_s5;
  uStack_1c = (int)((ulong)unaff_s5 >> 0x20);
  local_70 = (int)unaff_s0;
  uStack_6c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  local_a0 = &this->field26_0x20;
  local_30 = (int)unaff_s4;
  uStack_2c = (int)((ulong)unaff_s4 >> 0x20);
  local_40 = (int)unaff_s3;
  uStack_3c = (int)((ulong)unaff_s3 >> 0x20);
  local_50 = (int)unaff_s2;
  uStack_4c = (int)((ulong)unaff_s2 >> 0x20);
  local_60 = (int)unaff_s1;
  uStack_5c = (int)((ulong)unaff_s1 >> 0x20);
  pOVar2 = (ObjSelector *)(this->field26_0x20).__vtable;
  i.node = (ObjSelector *)0x0;
  killList.start = (ObjSelector **)0x0;
  killList.finish = (ObjSelector **)0x0;
  killList.end_of_storage = (ObjSelector **)0x0;
  local_98 = (ObjSelector *)0x0;
  local_9c = 0;
  if (pOVar2 == (ObjSelector *)0x0) {
    local_9c = 0;
    do {
      local_9c = local_9c + 1;
      if (0xff < local_9c) goto LAB_0023ebd8;
    } while ((ObjSelector *)local_a0[local_9c].__vtable == (ObjSelector *)0x0);
    local_98 = (ObjSelector *)local_a0[local_9c].__vtable;
  }
  else {
    local_98 = pOVar2;
  }
LAB_0023ebd8:
  local_a8 = local_98;
  i._0_8_ = CONCAT44(local_9c,local_a0);
  puVar1 = local_b0 + 7;
  uVar7 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar7) =
       *(ulong *)(puVar1 + -uVar7) & -1L << (uVar7 + 1) * 8 | i._0_8_ >> (7 - uVar7) * 8;
  local_b0 = (undefined  [8])i._0_8_;
  puVar1 = (undefined *)((int)&i.i + 3);
                    /* end of inlined section */
  uVar7 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar7);
  *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | i._0_8_ >> (7 - uVar7) * 8;
  i.node = local_a8;
  pBVar12 = &this->field26_0x20;
  pOVar2 = i.node;
LAB_0023ecc0:
  i.node = pOVar2;
  result.node = (ObjSelector *)0x0;
  result.pList = (HashList_ObjSelector_int_256_ *)pBVar12;
  result.i = 0x100;
  local_b0 = (undefined  [8])CONCAT44(0x100,pBVar12);
  puVar1 = local_b0 + 7;
  uVar7 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar7) =
       *(ulong *)(puVar1 + -uVar7) & -1L << (uVar7 + 1) * 8 | (ulong)local_b0 >> (7 - uVar7) * 8;
  local_a8 = (ObjSelector *)0x0;
  bVar5 = false;
  if (i.i == 0x100) {
    bVar5 = true;
    if (i.node == (ObjSelector *)0x0) {
      bVar5 = i.pList == (HashList_ObjSelector_int_256_ *)pBVar12;
      goto LAB_0023ed18;
    }
  }
  else {
LAB_0023ed18:
    bVar5 = (bool)(bVar5 ^ 1);
  }
                    /* end of inlined section */
  if (!bVar5) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    iVar11 = (int)killList.finish - (int)killList.start >> 2;
                    /* end of inlined section */
    iVar10 = 0;
    ppOVar6 = killList.start;
    if (0 < iVar11) {
      do {
        pOVar2 = killList.start[iVar10];
        uVar7 = GetGUID__11ObjSelector(pOVar2);
        pOVar8 = (ObjSelector *)pBVar12[uVar7 & 0xff].__vtable;
        if (pOVar2 == pOVar8) {
          pBVar12[uVar7 & 0xff].__vtable = (BehaviorFinder__vtable *)pOVar8->pNextHash;
        }
        else if (pOVar8 != (ObjSelector *)0x0) {
          for (pOVar3 = pOVar8->pNextHash; pOVar3 != (ObjSelector *)0x0; pOVar3 = pOVar3->pNextHash)
          {
            if (pOVar3 == pOVar2) {
              if (pOVar3 != (ObjSelector *)0x0) {
                pOVar8->pNextHash = pOVar2->pNextHash;
              }
              break;
            }
            pOVar8 = pOVar3;
          }
        }
                    /* end of inlined section */
        iVar9 = iVar10 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
        DestroySelector__16ObjectFolderImplP11ObjSelector(this,killList.start[iVar10]);
        iVar10 = iVar9;
        ppOVar6 = killList.start;
      } while (iVar9 < iVar11);
    }
    for (; ppOVar6 != killList.finish; ppOVar6 = ppOVar6 + 1) {
    }
    if ((killList.start != (ObjSelector **)0x0) &&
       ((int)killList.end_of_storage - (int)killList.start >> 2 != 0)) {
      free(killList.start);
    }
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  sel = i.node;
  if ((int)((i.node)->fFlags & 0xcU) >> 2 == 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    if (killList.finish == killList.end_of_storage) {
      insert_aux__t6vector2ZP11ObjSelectorZt23__malloc_alloc_template1i0PP11ObjSelectorRCP11ObjSelector
                (&killList,killList.finish,&sel);
    }
    else {
      *killList.finish = i.node;
      killList.finish = killList.finish + 1;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashlist.h */
  if (i.node != (ObjSelector *)0x0) goto code_r0x0023ec60;
  goto LAB_0023ec84;
code_r0x0023ec60:
  i.node = (i.node)->pNextHash;
  pOVar2 = i.node;
  if (i.node == (ObjSelector *)0x0) {
    i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 1) << 0x20;
LAB_0023ec84:
    while (pOVar2 = i.node, i.i < 0x100) {
      pOVar2 = (i.pList)->table[i.i];
      if ((i.pList)->table[i.i] != (ObjSelector *)0x0) break;
      i.i = i.i + 1;
      i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(uint)i.i << 0x20;
    }
  }
  goto LAB_0023ecc0;
}

void ObjectFolderImpl::UnloadData(ObjSelector *sel) {
  iResFile__6_5027 *file;
  ResData *pRVar1;
  bool bVar2;
  iResFile__6_5027__vtable *piVar3;
  long lVar4;
  PreloadState PVar5;
  uint uVar6;
  ObjFnTable *pInstance;
  
                    /* end of inlined section */
  if (sel->fCatalogResource == (CatalogResource *)0x0) {
    pInstance = sel->fFnTable;
  }
  else {
    DestroyInstance__15CatalogResourceP15CatalogResource(sel->fCatalogResource);
    sel->fCatalogResource = (CatalogResource *)0x0;
    pInstance = sel->fFnTable;
  }
  if (pInstance == (ObjFnTable *)0x0) {
    file = (sel->field0_0x0).fFile;
  }
  else {
    DestroyInstance__10ObjFnTableP10ObjFnTable(pInstance);
    sel->fFnTable = (ObjFnTable *)0x0;
    file = (sel->field0_0x0).fFile;
  }
  if (file == (iResFile__6_5027 *)0x0) {
    PVar5 = sel->fDesiredPreloadState;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FileList.h */
    bVar2 = ReleaseRef__8FileListP8iResFile((FileList *)this->fQuickFileList,file);
    if (bVar2) {
      lVar4 = (*(code *)file->__vtable->FindUniqueName)
                        ((int)&file->fNextFile + (int)*(short *)&file->__vtable->GetLanguage);
      if (lVar4 == 0) {
        piVar3 = file->__vtable;
      }
      else {
        (*(code *)file->__vtable->GetByName)
                  ((int)&file->fNextFile + (int)*(short *)&file->__vtable->GetByID);
        piVar3 = file->__vtable;
      }
      (*(code *)piVar3->Create)((int)&file->fNextFile + (int)*(short *)&piVar3->_dyncastimpl,3);
                    /* end of inlined section */
      (sel->field0_0x0).fFile = (iResFile__6_5027 *)0x0;
    }
    else {
      (sel->field0_0x0).fFile = (iResFile__6_5027 *)0x0;
    }
    PVar5 = sel->fDesiredPreloadState;
  }
  if (PVar5 == kDataLoaded) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable->EndSaveGame)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable->BeginSaveGame + -0x24,sel);
    pRVar1 = sel->fHeader->pResData;
    uVar6 = this->m_uCurrentPreloadCost;
    if (pRVar1 != (ResData *)0x0) {
      uVar6 = uVar6 - pRVar1->uMemoryCost;
    }
    this->m_uCurrentPreloadCost = uVar6;
  }
  return;
}

ObjectTypeAttrBlock* ObjectFolderImpl::GetTypeAttrBlock(SInt32 guid) {
	ObjectTypeAttrBlock **i;
	ObjectTypeAttrBlock *this;
	
  ObjectTypeAttrBlock **ppOVar1;
  ObjectTypeAttrBlock *pOVar2;
  ObjectTypeAttrBlock **ppOVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  ppOVar1 = (this->fTypeAttrBlocks).finish;
  ppOVar3 = (this->fTypeAttrBlocks).start;
                    /* end of inlined section */
  if (ppOVar3 != ppOVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectTypeAttributes.h */
    pOVar2 = *ppOVar3;
    while( true ) {
                    /* end of inlined section */
      ppOVar3 = ppOVar3 + 1;
      if (pOVar2->fGUID == guid) {
        return pOVar2;
      }
      if (ppOVar3 == ppOVar1) break;
      pOVar2 = *ppOVar3;
    }
  }
  return (ObjectTypeAttrBlock *)0x0;
}

ErrType ObjectFolderImpl::Save(iResFile *file) {
  int iVar1;
  
  iVar1 = ReconSaveObject__H1Z16ObjectFolderImpl_PX01P8iResFileisi_i(this,file,0x54415454,1,0);
  return iVar1;
}

ErrType ObjectFolderImpl::Load(iResFile *file) {
  int iVar1;
  
  iVar1 = ReconLoadObject__H1Z16ObjectFolderImpl_PX01P8iResFileisPi_i
                    (this,file,0x54415454,1,(int *)0x0);
  return iVar1;
}

void ObjectFolderImpl::DoStream(ReconBuffer *rb, SInt32 version) {
	short int nullBuff[128];
	bool compress;
	Int count;
	int i;
	SInt32 guid;
	ObjectTypeAttrBlock *block;
	Int currentAttrCount;
	SInt16 *attrs;
	Int attrCount;
	unsigned int n;
	ObjectTypeAttrBlock *this;
	ObjectTypeAttrBlock *this;
	ObjectTypeAttrBlock *this;
	int j;
	
  ObjectFolder__vtable *pOVar1;
  ObjectTypeAttrBlock **ppOVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_s0;
  ushort *puVar6;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ushort nullBuff [128];
  bool compress;
  int count;
  int guid;
  int attrCount;
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
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  _compress = 1;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  ReconBool__11ReconBufferPb(rb,&compress);
  if (_compress == 0) {
    ppOVar2 = (this->fTypeAttrBlocks).finish;
  }
  else {
    EnableCompression__11ReconBuffer(rb);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    ppOVar2 = (this->fTypeAttrBlocks).finish;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  iVar5 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  count = (int)ppOVar2 - (int)(this->fTypeAttrBlocks).start >> 2;
                    /* end of inlined section */
  ReconInt__11ReconBufferPii(rb,&count,1);
  if (0 < count) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    ppOVar2 = (this->fTypeAttrBlocks).start;
    while( true ) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectTypeAttributes.h */
      guid = ppOVar2[iVar5]->fGUID;
                    /* end of inlined section */
      Recon32__11ReconBufferPii(rb,&guid,1);
      pOVar1 = (this->field0_0x0).__vtable;
      lVar3 = (*(code *)pOVar1->CalcPreloadMemoryCost)
                        ((int)&(this->field0_0x0).__vtable +
                         (int)*(short *)&pOVar1->ForceDataPreload,guid);
      iVar4 = 0x80;
      puVar6 = nullBuff;
      if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectTypeAttributes.h */
                    /* end of inlined section */
        iVar4 = *(int *)((int)lVar3 + 4);
        puVar6 = *(ushort **)((int)lVar3 + 8);
      }
      attrCount = iVar4;
      ReconInt__11ReconBufferPii(rb,&attrCount,1);
      if (iVar4 < attrCount) break;
      Recon16__11ReconBufferPsi(rb,puVar6,attrCount);
      iVar5 = iVar5 + 1;
      if (attrCount < iVar4) {
        puVar6 = puVar6 + attrCount;
        iVar4 = iVar4 - attrCount;
        do {
          *puVar6 = 0;
          iVar4 = iVar4 + -1;
          puVar6 = puVar6 + 1;
        } while (iVar4 != 0);
      }
      if (count <= iVar5) {
        return;
      }
      ppOVar2 = (this->fTypeAttrBlocks).start;
    }
  }
  return;
}

EventMapping* ObjectFolderImpl::GetSndEventByName(char *pName) {
	char *pRowName;
	NamedEvent *pData;
	
  void *_pTable;
  EventMapping **ppEVar1;
  EventMapping *pEVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pObjectData,"snd::NamedEvent");
  ppEVar1 = (EventMapping **)getRow__11ERQuickdataPCvPCc(this->m_pObjectData,_pTable,pName);
                    /* end of inlined section */
  pEVar2 = (EventMapping *)0x0;
  if (ppEVar1 != (EventMapping **)0x0) {
    pEVar2 = *ppEVar1;
  }
  return pEVar2;
}

AnimRef* ObjectFolderImpl::GetAnimRefByName(char *pName) {
	char *pRowName;
	NamedAnimation *pData;
	
  void *_pTable;
  AnimRef **ppAVar1;
  AnimRef *pAVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pObjectData,"NamedAnimation");
  ppAVar1 = (AnimRef **)getRow__11ERQuickdataPCvPCc(this->m_pObjectData,_pTable,pName);
                    /* end of inlined section */
  pAVar2 = (AnimRef *)0x0;
  if (ppAVar1 != (AnimRef **)0x0) {
    pAVar2 = *ppAVar1;
  }
  return pAVar2;
}

static bool findChecksum(u32 checksum, ChecksumList &list) {
	NLIterator it;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (list->field0_0x0).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      if (uVar1 == checksum) {
        return true;
      }
      pEVar2 = pEVar2->pNext;
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  return false;
}

void ObjectFolderImpl::GetAnimPreloadList(ChecksumList &animList) {
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > i;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	iResFile *pFile;
	VECTOR<AnimRefTable> &animTables;
	int i;
	iResFile *this;
	VECTOR<AnimRefTable> *this;
	int j;
	VECTOR<AnimRefTable> *this;
	unsigned int n;
	VECTOR<AnimRefTable> *this;
	AnimRef *pAnimRef;
	unsigned int n;
	TNodeList<unsigned int> *this;
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_ResFile__const_FileRec___ *p_Var1;
  ResFile *pRVar2;
  AnimRef *pAVar3;
  __rb_tree_node_base *p_Var4;
  bool bVar5;
  AnimRefTable *pAVar6;
  AnimRef **ppAVar7;
  __rb_tree_base_iterator _Var8;
  int iVar9;
  AnimRef *pAVar10;
  int iVar11;
  int iVar12;
  VECTOR_AnimRefTable_ *pVVar13;
  __rb_tree_const_iterator_pair_const_ResFile__const_FileRec___ i;
  
                    /* inlined from Tree.h */
  p_Var1 = (this->fQuickFileList->field0_0x0).field0_0x0.fFiles.t.header;
  i.field0_0x0.node =
       (__rb_tree_base_iterator)
       (__rb_tree_base_iterator)
       *(__rb_tree_node_pair_const_ResFile__const_FileRec___ **)&p_Var1->field0_0x0;
                    /* end of inlined section */
  while (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
    if (((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->left !=
        (__rb_tree_node_base *)this->fGlobalFile) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
      pRVar2 = *(ResFile **)
                ((int)&((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->left->color + 8);
      pAVar6 = (pRVar2->animTables).pData;
                    /* end of inlined section */
      pVVar13 = &pRVar2->animTables;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar11 = 0;
      if (pAVar6 != (AnimRefTable *)0x0) {
        iVar11 = *(int *)&pAVar6[-1].resID;
      }
                    /* end of inlined section */
      iVar12 = 0;
      if (0 < iVar11) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        pAVar6 = pVVar13->pData;
        while( true ) {
          pAVar6 = pAVar6 + iVar12;
          ppAVar7 = (pAVar6->field0_0x0).pData;
          pAVar10 = (AnimRef *)0x0;
          if (ppAVar7 != (AnimRef **)0x0) {
            pAVar10 = ppAVar7[-1];
          }
                    /* end of inlined section */
          iVar12 = iVar12 + 1;
          iVar9 = 0;
          if (0 < (int)pAVar10) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            ppAVar7 = (pAVar6->field0_0x0).pData;
            while( true ) {
                    /* end of inlined section */
              pAVar3 = ppAVar7[iVar9];
              if ((pAVar3 != (AnimRef *)0x0) &&
                 (bVar5 = findChecksum__FUiRC12ChecksumList(pAVar3->id,animList), !bVar5)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                AddHead__9ENodeListUi((ENodeList *)animList,pAVar3->id);
                    /* end of inlined section */
              }
              iVar9 = iVar9 + 1;
              if ((int)pAVar10 <= iVar9) break;
              ppAVar7 = (pAVar6->field0_0x0).pData;
            }
          }
          if (iVar11 <= iVar12) break;
          pAVar6 = pVVar13->pData;
        }
      }
    }
    _Var8.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
    if (_Var8.node == (__rb_tree_node_base *)0x0) {
      _Var8.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
      if (i.field0_0x0.node == (__rb_tree_node_base *)(_Var8.node)->right) {
        do {
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
          _Var8.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
        } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var8.node)->right);
      }
      if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var8.node) {
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
      }
    }
    else {
      p_Var4 = (_Var8.node)->left;
      while (i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node,
            p_Var4 != (__rb_tree_node_base *)0x0) {
        _Var8.node = (_Var8.node)->left;
        p_Var4 = (_Var8.node)->left;
      }
    }
  }
  return;
}

u32 ObjectFolderImpl::CalcPreloadMemoryCost(ObjSelector *objSel) {
	u32 result;
	ObjSelector *this;
	SInt16 masterID;
	ObjSelector *pSel;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ObjectFolder__vtable *pOVar6;
  uint uVar7;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  if (objSel->fHeader->pResData == (ResData *)0x0) {
                    /* end of inlined section */
    pOVar6 = (this->field0_0x0).__vtable;
    uVar1 = objSel->fHeader->masterID;
    lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                      ((int)&(this->field0_0x0).__vtable +
                       (int)*(short *)&pOVar6->SuspendObjectFiles,0);
    uVar7 = 0;
    if (lVar4 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
      iVar5 = *(int *)((int)lVar4 + 0x18);
      uVar7 = 0;
      while( true ) {
                    /* end of inlined section */
        if (*(ushort *)(iVar5 + 0x14) == uVar1) {
                    /* end of inlined section */
          if (*(int *)(iVar5 + 0xc0) == 0) {
            pOVar6 = (this->field0_0x0).__vtable;
          }
          else {
            bVar2 = TestFromSameFile__C11ObjSelectorPC11ObjSelector((ObjSelector *)lVar4,objSel);
            if (bVar2) {
              uVar3 = calcPreloadMemoryCost__16ObjectFolderImplP11ObjSelector
                                (this,(ObjSelector *)lVar4);
              uVar7 = uVar7 + uVar3;
              pOVar6 = (this->field0_0x0).__vtable;
            }
            else {
              pOVar6 = (this->field0_0x0).__vtable;
            }
          }
        }
        else {
          pOVar6 = (this->field0_0x0).__vtable;
        }
        lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                          ((int)&(this->field0_0x0).__vtable +
                           (int)*(short *)&pOVar6->SuspendObjectFiles,lVar4);
        if (lVar4 == 0) break;
        iVar5 = *(int *)((int)lVar4 + 0x18);
      }
    }
  }
  else {
    uVar7 = calcPreloadMemoryCost__16ObjectFolderImplP11ObjSelector(this,objSel);
  }
  return uVar7;
}

u32 ObjectFolderImpl::CalcUnloadMemorySaving(ObjSelector *objSel) {
	u32 result;
	ObjSelector *this;
	SInt16 masterID;
	ObjSelector *pSel;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ObjectFolder__vtable *pOVar6;
  uint uVar7;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  if (objSel->fHeader->pResData == (ResData *)0x0) {
                    /* end of inlined section */
    pOVar6 = (this->field0_0x0).__vtable;
    uVar1 = objSel->fHeader->masterID;
    lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                      ((int)&(this->field0_0x0).__vtable +
                       (int)*(short *)&pOVar6->SuspendObjectFiles,0);
    uVar7 = 0;
    if (lVar4 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
      iVar5 = *(int *)((int)lVar4 + 0x18);
      uVar7 = 0;
      while( true ) {
                    /* end of inlined section */
        if (*(ushort *)(iVar5 + 0x14) == uVar1) {
                    /* end of inlined section */
          if (*(int *)(iVar5 + 0xc0) == 0) {
            pOVar6 = (this->field0_0x0).__vtable;
          }
          else {
            bVar2 = TestFromSameFile__C11ObjSelectorPC11ObjSelector((ObjSelector *)lVar4,objSel);
            if (bVar2) {
              uVar3 = calcUnloadMemorySaving__16ObjectFolderImplP11ObjSelector
                                (this,(ObjSelector *)lVar4);
              uVar7 = uVar7 + uVar3;
              pOVar6 = (this->field0_0x0).__vtable;
            }
            else {
              pOVar6 = (this->field0_0x0).__vtable;
            }
          }
        }
        else {
          pOVar6 = (this->field0_0x0).__vtable;
        }
        lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                          ((int)&(this->field0_0x0).__vtable +
                           (int)*(short *)&pOVar6->SuspendObjectFiles,lVar4);
        if (lVar4 == 0) break;
        iVar5 = *(int *)((int)lVar4 + 0x18);
      }
    }
  }
  else {
    uVar7 = calcUnloadMemorySaving__16ObjectFolderImplP11ObjSelector(this,objSel);
  }
  return uVar7;
}

u32 ObjectFolderImpl::calcPreloadMemoryCost(ObjSelector *sel) {
	u32 result;
	ObjDefinition *pDef;
	
  ResData *pRVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (sel->fInstanceCount == 0) {
    pRVar1 = sel->fHeader->pResData;
    if (pRVar1 != (ResData *)0x0) {
      uVar3 = pRVar1->uMemoryCost;
    }
    uVar2 = GetRefCount__8FileListPC7ResFile((FileList *)this->fQuickFileList,sel->fResData);
    if (uVar2 == 0) {
      uVar3 = uVar3 + sel->fResData->uAnimMemCost + sel->fResData->uPropMemCost;
    }
  }
  return uVar3;
}

u32 ObjectFolderImpl::calcUnloadMemorySaving(ObjSelector *sel) {
	u32 result;
	ObjDefinition *pDef;
	
  ResData *pRVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = uVar4;
  if (sel->fInstanceCount == 1) {
    bVar2 = IsPreloadable__C11ObjSelector(sel);
    uVar5 = 0;
    if (!bVar2) {
      pRVar1 = sel->fHeader->pResData;
      if (pRVar1 != (ResData *)0x0) {
        uVar4 = pRVar1->uMemoryCost;
      }
      uVar3 = GetRefCount__8FileListPC7ResFile((FileList *)this->fQuickFileList,sel->fResData);
      uVar5 = uVar4;
      if (uVar3 == 1) {
        uVar5 = uVar4 + sel->fResData->uAnimMemCost + sel->fResData->uPropMemCost;
      }
    }
  }
  return uVar5;
}

u32 ObjectFolderImpl::CalcPerformanceCost(ObjSelector *objSel) {
	u32 result;
	ObjSelector *this;
	SInt16 masterID;
	ObjSelector *pSel;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ObjectFolder__vtable *pOVar6;
  uint uVar7;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  if (objSel->fHeader->pResData == (ResData *)0x0) {
                    /* end of inlined section */
    pOVar6 = (this->field0_0x0).__vtable;
    uVar1 = objSel->fHeader->masterID;
    lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                      ((int)&(this->field0_0x0).__vtable +
                       (int)*(short *)&pOVar6->SuspendObjectFiles,0);
    uVar7 = 0;
    if (lVar4 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
      iVar5 = *(int *)((int)lVar4 + 0x18);
      uVar7 = 0;
      while( true ) {
                    /* end of inlined section */
        if (*(ushort *)(iVar5 + 0x14) == uVar1) {
                    /* end of inlined section */
          if (*(int *)(iVar5 + 0xc0) == 0) {
            pOVar6 = (this->field0_0x0).__vtable;
          }
          else {
            bVar2 = TestFromSameFile__C11ObjSelectorPC11ObjSelector((ObjSelector *)lVar4,objSel);
            if (bVar2) {
              uVar3 = calcPerformanceCost__16ObjectFolderImplP11ObjSelector
                                (this,(ObjSelector *)lVar4);
              uVar7 = uVar7 + uVar3;
              pOVar6 = (this->field0_0x0).__vtable;
            }
            else {
              pOVar6 = (this->field0_0x0).__vtable;
            }
          }
        }
        else {
          pOVar6 = (this->field0_0x0).__vtable;
        }
        lVar4 = (*(code *)pOVar6->ResumeObjectFiles)
                          ((int)&(this->field0_0x0).__vtable +
                           (int)*(short *)&pOVar6->SuspendObjectFiles,lVar4);
        if (lVar4 == 0) break;
        iVar5 = *(int *)((int)lVar4 + 0x18);
      }
    }
  }
  else {
    uVar7 = calcPerformanceCost__16ObjectFolderImplP11ObjSelector(this,objSel);
  }
  return uVar7;
}

u32 ObjectFolderImpl::calcPerformanceCost(ObjSelector *sel) {
	ResData *pResData;
	
  ResData *pRVar1;
  uint uVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  pRVar1 = sel->fHeader->pResData;
  uVar2 = 0;
  if (pRVar1 != (ResData *)0x0) {
    uVar2 = pRVar1->uPerformanceCost;
  }
  return uVar2;
}

void ObjectFolderImpl::ApplyBCONTuningForFile(ObjResFile *objFile) {
  return;
}

void ObjectFolderImpl::SuspendObjectFiles() {
  return;
}

void ObjectFolderImpl::ResumeObjectFiles() {
  return;
}

void ObjectFolderImpl::ApplyTTABTuningForSel(ObjSelector *sel) {
  return;
}

Boolean ObjectFolderImpl::DoCommand(SInt16 com, SInt32 inf) {
  return 1;
}

void ObjectFolderImpl::GetTreeTable(ObjSelector *sel) {
	SInt16 treeTableID;
	Behavior *b;
	iResFile *file;
	ObjSelector *this;
	iResFile *this;
	VECTOR<TreeTable> *this;
	iResFile *this;
	VECTOR<TreeTable> *this;
	
  Behavior *this_00;
  ushort uVar1;
  iResFile__6_5027 *piVar2;
  TreeTable *pTVar3;
  int iVar4;
  
  uVar1 = GetEffectiveTreeTableID__11ObjSelector(sel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  this_00 = sel->fBehavior;
                    /* end of inlined section */
  piVar2 = GetPrivFile__8Behavior(this_00);
  pTVar3 = sel->fTreeTable;
  if (piVar2 != (iResFile__6_5027 *)0x0) {
    if (pTVar3 != (TreeTable *)0x0) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
    pTVar3 = (piVar2->fResData->TTAB).pData;
    iVar4 = 0;
    if (pTVar3 != (TreeTable *)0x0) {
      iVar4 = *(int *)&pTVar3[-1].fNumAds;
    }
                    /* end of inlined section */
    pTVar3 = FindRes__H1ZC9TreeTable_PX01T0i_PX01
                       (pTVar3,(piVar2->fResData->TTAB).pData + iVar4,(int)(short)uVar1);
    sel->fTreeTable = pTVar3;
    pTVar3 = sel->fTreeTable;
  }
  if (((pTVar3 == (TreeTable *)0x0) &&
      (piVar2 = GetMiddleFile__8Behavior(this_00), piVar2 != (iResFile__6_5027 *)0x0)) &&
     (sel->fTreeTable == (TreeTable *)0x0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
    pTVar3 = (piVar2->fResData->TTAB).pData;
    iVar4 = 0;
    if (pTVar3 != (TreeTable *)0x0) {
      iVar4 = *(int *)&pTVar3[-1].fNumAds;
    }
                    /* end of inlined section */
    pTVar3 = FindRes__H1ZC9TreeTable_PX01T0i_PX01
                       (pTVar3,(piVar2->fResData->TTAB).pData + iVar4,(int)(short)uVar1);
    sel->fTreeTable = pTVar3;
  }
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

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

void rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const ResFile *const,FileRec> > *x) {
	__rb_tree_node<pair<const ResFile *const,FileRec> > *y;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *p;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *p;
	void *p;
	
  __rb_tree_node_pair_const_ResFile__const_FileRec___ *p_Var1;
  __rb_tree_node_pair_const_ResFile__const_FileRec___ *x_00;
  
  if (x != (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)0x0) {
    x_00 = (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)(x->field0_0x0).right;
    while( true ) {
      __erase__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCPC7ResFileZ7FileRec
                (this,x_00);
      p_Var1 = (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)(x->field0_0x0).left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      free(x);
                    /* end of inlined section */
      if (p_Var1 == (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)0x0) break;
      x_00 = (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)(p_Var1->field0_0x0).right;
      x = p_Var1;
    }
  }
  return;
}

ObjectTypeAttrBlock** ObjectTypeAttrBlock ** copy_backward<ObjectTypeAttrBlock **, ObjectTypeAttrBlock **>(ObjectTypeAttrBlock **first, ObjectTypeAttrBlock **last, ObjectTypeAttrBlock **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

ObjectTypeAttrBlock** ObjectTypeAttrBlock ** uninitialized_copy<ObjectTypeAttrBlock **, ObjectTypeAttrBlock **>(ObjectTypeAttrBlock **first, ObjectTypeAttrBlock **last, ObjectTypeAttrBlock **result) {
	ObjectTypeAttrBlock **p;
	ObjectTypeAttrBlock *&value;
	void *pAddress;
	
  ObjectTypeAttrBlock *pOVar1;
  ObjectTypeAttrBlock **ppOVar2;
  
  ppOVar2 = result;
  if (first != last) {
    do {
      pOVar1 = *first;
      first = first + 1;
      result = ppOVar2 + 1;
      *ppOVar2 = pOVar1;
      ppOVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<ObjectTypeAttrBlock *, __malloc_alloc_template<0> >::insert_aux(ObjectTypeAttrBlock **position, ObjectTypeAttrBlock *&x) {
	ObjectTypeAttrBlock *x_copy;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	ObjectTypeAttrBlock **p;
	ObjectTypeAttrBlock *&value;
	void *pAddress;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	ObjectTypeAttrBlock **first;
	ObjectTypeAttrBlock **pointer;
	vector<ObjectTypeAttrBlock *,__malloc_alloc_template<0> > *this;
	
  ObjectTypeAttrBlock *pOVar1;
  uint size;
  ObjectTypeAttrBlock **ppOVar2;
  int iVar3;
  ObjectTypeAttrBlock **ppOVar4;
  int iVar5;
  
  ppOVar2 = this->finish;
  if (ppOVar2 == this->end_of_storage) {
    iVar5 = (int)ppOVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppOVar2 = (ObjectTypeAttrBlock **)0x0;
      size = 0;
    }
    else {
      ppOVar2 = (ObjectTypeAttrBlock **)malloc(size);
      if (ppOVar2 == (ObjectTypeAttrBlock **)0x0) {
        ppOVar2 = (ObjectTypeAttrBlock **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP19ObjectTypeAttrBlockZPP19ObjectTypeAttrBlock_X01X01X11_X11
              (this->start,position,ppOVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(ObjectTypeAttrBlock **)((int)ppOVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP19ObjectTypeAttrBlockZPP19ObjectTypeAttrBlock_X01X01X11_X11
              (position,this->finish,
               (ObjectTypeAttrBlock **)((int)ppOVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppOVar4 = this->start;
    if (ppOVar4 == this->finish) {
      ppOVar4 = this->start;
    }
    else {
      do {
        ppOVar4 = ppOVar4 + 1;
      } while (ppOVar4 != this->finish);
                    /* end of inlined section */
      ppOVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppOVar4 != (ObjectTypeAttrBlock **)0x0) &&
       ((int)this->end_of_storage - (int)ppOVar4 >> 2 != 0)) {
      free(ppOVar4);
                    /* end of inlined section */
    }
    ppOVar4 = ppOVar2 + iVar5;
    this->start = ppOVar2;
    this->end_of_storage = (ObjectTypeAttrBlock **)((int)ppOVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppOVar2 = ppOVar2[-1];
                    /* end of inlined section */
    pOVar1 = *x;
    copy_backward__H2ZPP19ObjectTypeAttrBlockZPP19ObjectTypeAttrBlock_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pOVar1;
    ppOVar4 = this->finish;
  }
  this->finish = ppOVar4 + 1;
  return;
}

void void ReconLoadObject<UserDataSaveLoad>(UserDataSaveLoad *obj, MHandle mem, SInt32 type, SInt32 *version) {
	SimpleReconObject<UserDataSaveLoad> recon;
	ReconBuilder rb;
	UserDataSaveLoad *obj;
	SInt32 type;
	
  SimpleReconObject_UserDataSaveLoad_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16UserDataSaveLoad;
  recon.fObj = obj;
  recon.fType = type;
  Reconstitute__12ReconBuilderP11ReconObjectPQ26Memory10HandleNodePi
            (&rb,&recon.field0_0x0,mem,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return;
}

void void ReconLoadObject<ThumbnailLoader>(ThumbnailLoader *obj, MHandle mem, SInt32 type, SInt32 *version) {
	SimpleReconObject<ThumbnailLoader> recon;
	ReconBuilder rb;
	ThumbnailLoader *obj;
	SInt32 type;
	
  SimpleReconObject_ThumbnailLoader_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z15ThumbnailLoader;
  recon.fObj = obj;
  recon.fType = type;
  Reconstitute__12ReconBuilderP11ReconObjectPQ26Memory10HandleNodePi
            (&rb,&recon.field0_0x0,mem,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return;
}

ErrType int ReconSaveObject<UserDataSaveLoad>(UserDataSaveLoad *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<UserDataSaveLoad> recon;
	ReconBuilder rb;
	UserDataSaveLoad *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_UserDataSaveLoad_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16UserDataSaveLoad;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles(&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconSaveObject<ThumbnailLoader>(ThumbnailLoader *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<ThumbnailLoader> recon;
	ReconBuilder rb;
	ThumbnailLoader *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ThumbnailLoader_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z15ThumbnailLoader;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles(&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconLoadObject<ObjectSaveTypeTable>(ObjectSaveTypeTable *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<ObjectSaveTypeTable> recon;
	ReconBuilder rb;
	ObjectSaveTypeTable *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectSaveTypeTable_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z19ObjectSaveTypeTable
  ;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    (&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

SInt32* int * copy_backward<int *, int *>(SInt32 *first, SInt32 *last, SInt32 *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

SInt32* int * uninitialized_copy<int *, int *>(SInt32 *first, SInt32 *last, SInt32 *result) {
	SInt32 *p;
	int &value;
	void *pAddress;
	
  int iVar1;
  int *piVar2;
  
  piVar2 = result;
  if (first != last) {
    do {
      iVar1 = *first;
      first = first + 1;
      result = piVar2 + 1;
      *piVar2 = iVar1;
      piVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<int, __malloc_alloc_template<0> >::insert_aux(SInt32 *position, SInt32 &x) {
	SInt32 x_copy;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	SInt32 *p;
	int &value;
	void *pAddress;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	SInt32 *first;
	SInt32 *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	
  uint size;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = this->finish;
  if (piVar1 == this->end_of_storage) {
    iVar4 = (int)piVar1 - (int)this->start >> 2;
    iVar2 = 1;
    if (iVar4 != 0) {
      iVar2 = iVar4 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar2 << 2;
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
      size = 0;
    }
    else {
      piVar1 = (int *)malloc(size);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11(this->start,position,piVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(int *)((int)piVar1 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11
              (position,this->finish,(int *)((int)piVar1 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    piVar3 = this->start;
    if (piVar3 == this->finish) {
      piVar3 = this->start;
    }
    else {
      do {
        piVar3 = piVar3 + 1;
      } while (piVar3 != this->finish);
                    /* end of inlined section */
      piVar3 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((piVar3 != (int *)0x0) && ((int)this->end_of_storage - (int)piVar3 >> 2 != 0)) {
      free(piVar3);
                    /* end of inlined section */
    }
    piVar3 = piVar1 + iVar4;
    this->start = piVar1;
    this->end_of_storage = (int *)((int)piVar1 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *piVar1 = piVar1[-1];
                    /* end of inlined section */
    iVar2 = *x;
    copy_backward__H2ZPiZPi_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = iVar2;
    piVar3 = this->finish;
  }
  this->finish = piVar3 + 1;
  return;
}

ErrType int ReconSaveObject<ObjectSaveTypeTable>(ObjectSaveTypeTable *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<ObjectSaveTypeTable> recon;
	ReconBuilder rb;
	ObjectSaveTypeTable *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectSaveTypeTable_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z19ObjectSaveTypeTable
  ;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles(&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ObjSelector** ObjSelector ** copy_backward<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

ObjSelector** ObjSelector ** uninitialized_copy<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result) {
	ObjSelector **p;
	ObjSelector *&value;
	void *pAddress;
	
  ObjSelector *pOVar1;
  ObjSelector **ppOVar2;
  
  ppOVar2 = result;
  if (first != last) {
    do {
      pOVar1 = *first;
      first = first + 1;
      result = ppOVar2 + 1;
      *ppOVar2 = pOVar1;
      ppOVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<ObjSelector *, __malloc_alloc_template<0> >::insert_aux(ObjSelector **position, ObjSelector *&x) {
	ObjSelector *x_copy;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	ObjSelector **p;
	ObjSelector *&value;
	void *pAddress;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	ObjSelector **first;
	ObjSelector **pointer;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	
  ObjSelector *pOVar1;
  uint size;
  ObjSelector **ppOVar2;
  int iVar3;
  ObjSelector **ppOVar4;
  int iVar5;
  
  ppOVar2 = this->finish;
  if (ppOVar2 == this->end_of_storage) {
    iVar5 = (int)ppOVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppOVar2 = (ObjSelector **)0x0;
      size = 0;
    }
    else {
      ppOVar2 = (ObjSelector **)malloc(size);
      if (ppOVar2 == (ObjSelector **)0x0) {
        ppOVar2 = (ObjSelector **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP11ObjSelectorZPP11ObjSelector_X01X01X11_X11
              (this->start,position,ppOVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(ObjSelector **)((int)ppOVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP11ObjSelectorZPP11ObjSelector_X01X01X11_X11
              (position,this->finish,
               (ObjSelector **)((int)ppOVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppOVar4 = this->start;
    if (ppOVar4 == this->finish) {
      ppOVar4 = this->start;
    }
    else {
      do {
        ppOVar4 = ppOVar4 + 1;
      } while (ppOVar4 != this->finish);
                    /* end of inlined section */
      ppOVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppOVar4 != (ObjSelector **)0x0) && ((int)this->end_of_storage - (int)ppOVar4 >> 2 != 0)) {
      free(ppOVar4);
                    /* end of inlined section */
    }
    ppOVar4 = ppOVar2 + iVar5;
    this->start = ppOVar2;
    this->end_of_storage = (ObjSelector **)((int)ppOVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppOVar2 = ppOVar2[-1];
                    /* end of inlined section */
    pOVar1 = *x;
    copy_backward__H2ZPP11ObjSelectorZPP11ObjSelector_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pOVar1;
    ppOVar4 = this->finish;
  }
  this->finish = ppOVar4 + 1;
  return;
}

ErrType int ReconSaveObject<ObjectFolderImpl>(ObjectFolderImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<ObjectFolderImpl> recon;
	ReconBuilder rb;
	ObjectFolderImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectFolderImpl_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16ObjectFolderImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles(&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconLoadObject<ObjectFolderImpl>(ObjectFolderImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<ObjectFolderImpl> recon;
	ReconBuilder rb;
	ObjectFolderImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectFolderImpl_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16ObjectFolderImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    (&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

TreeTable* TreeTable * FindRes<TreeTable>(TreeTable *begin, TreeTable *end, int resID) {
	int iCmp;
	TreeTable *middle;
	
  TreeTable *pTVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pTVar1 = end;
    iVar3 = (int)pTVar1 - (int)begin;
    iVar2 = iVar3 >> 3;
    if (iVar2 < 1) {
      return (TreeTable *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pTVar1;
    }
  }
  pTVar1 = (TreeTable *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pTVar1 = begin;
  }
  return pTVar1;
}

void ObjectFolder::~ObjectFolder(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ObjectFolder__vtable *)_vt_12ObjectFolder;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

char* ObjectFolderImpl::GetPath() {
  char *pcVar1;
  
  pcVar1 = c_str__C12StringBuffer(&(this->fPath).field0_0x0);
  return pcVar1;
}

iResFile* ObjectFolderImpl::GetGlobFile() {
  return (iResFile__6_5027 *)this->fGlobalFile;
}

BehaviorFinder* ObjectFolderImpl::GetBehaviorFinder() {
  return (BehaviorFinder *)&this->field_0x4;
}

ERQuickdata& ObjectFolderImpl::GetObjectsDatabase() {
  return this->m_pObjectData;
}

u32 ObjectFolderImpl::GetCurrentMemoryCost() {
  return this->m_uCurrentPreloadCost;
}

u32 ObjectFolderImpl::GetBaseMemoryCost() {
  return this->m_uBasePreloadCost;
}

u32 ObjectFolderImpl::GetCurrentPerformanceCost() {
  return this->m_uCurrentPerformanceCost;
}

void SimpleReconObject<UserDataSaveLoad>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ThumbnailLoader>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ObjectSaveTypeTable>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ObjectFolderImpl>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ObjectFolderImpl>::DoStream(ReconBuffer *r, SInt32 version) {
  ObjectFolder__vtable *pOVar1;
  
  pOVar1 = (this->fObj->field0_0x0).__vtable;
  (*(code *)pOVar1[1].GetNthSubSelector)
            ((int)&(this->fObj->field0_0x0).__vtable + (int)*(short *)&pOVar1[1].GetMasterSelector,r
             ,version);
  return;
}

SInt32 SimpleReconObject<ObjectFolderImpl>::GetType() {
  return this->fType;
}

void SimpleReconObject<ObjectSaveTypeTable>::DoStream(ReconBuffer *r, SInt32 version) {
  DoStream__19ObjectSaveTypeTableP11ReconBufferi(this->fObj,r,version);
  return;
}

SInt32 SimpleReconObject<ObjectSaveTypeTable>::GetType() {
  return this->fType;
}

void SimpleReconObject<ThumbnailLoader>::DoStream(ReconBuffer *r, SInt32 version) {
  DoStream__15ThumbnailLoaderP11ReconBufferi(this->fObj,r,version);
  return;
}

SInt32 SimpleReconObject<ThumbnailLoader>::GetType() {
  return this->fType;
}

void SimpleReconObject<UserDataSaveLoad>::DoStream(ReconBuffer *r, SInt32 version) {
	UserDataSaveLoad *this;
	ReconBuffer *r;
	SInt32 version;
	
  UserDataSaveLoad *value;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectFolder.cpp */
  value = this->fObj;
  Recon32__11ReconBufferPii(r,&value->guid,1);
  ReconString__11ReconBufferR8BString2(r,&value->name);
  DoStream__15CustomCharacterP11ReconBufferi(&value->fCustomCharacter,r,version);
  return;
}

SInt32 SimpleReconObject<UserDataSaveLoad>::GetType() {
  return this->fType;
}

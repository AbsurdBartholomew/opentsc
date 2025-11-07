// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECT_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECT_H

typedef int Int;

enum MiscFlag {
	kUnhilited = 0,
	kHilited = 1,
	kSelected = 2,
	kCanInterrupt = 4,
	kDeHilited = 8,
	kEndangered = 16,
	kHiliteMask = 31,
	kBeingKilled = 64,
	kInitialized = 128,
	kTreeError = 256,
	kIsDirty = 512,
	kIsTracing = 1024,
	kIsCleaningUp = 2048,
	kCleanupSelfOnly = 4096
};

struct FindGoodLocationParams {
private:
	bool fHasStart;
	FTilePt fLocation;
	Int fLevel;
	Int fDirectionVector;
	bool fStayInRoom;
	bool fPreferEmptyTiles;
	bool fEditableOnly;
	
public:
	FindGoodLocationParams& operator=();
	FindGoodLocationParams();
	FindGoodLocationParams();
	void SetStartLocation();
	bool GetStartLocation();
	int GetLevel();
	void SetStayInRoom();
	bool GetStayInRoom();
	void SetPreferEmptyTiles();
	bool GetPreferEmptyTiles();
	void SetDirectionVector();
	bool GetDirectionVector();
	void SetEditableTilesOnly();
	bool GetEditableTilesOnly();
};

struct Slot {
	float xoffset;
	float yoffset;
	float altOffset;
	Int nameIndex;
	__vtbl_ptr_type *$vf5800;
};

struct vector<ObjectSlot,__malloc_alloc_template<0> > {
protected:
	ObjectSlot *start;
	ObjectSlot *finish;
	ObjectSlot *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	ObjectSlot* begin();
	ObjectSlot* begin();
	ObjectSlot* end();
	ObjectSlot* end();
	reverse_iterator<ObjectSlot *,ObjectSlot,ObjectSlot &,int> rbegin();
	reverse_iterator<const ObjectSlot *,ObjectSlot,const ObjectSlot &,int> rbegin();
	reverse_iterator<ObjectSlot *,ObjectSlot,ObjectSlot &,int> rend();
	reverse_iterator<const ObjectSlot *,ObjectSlot,const ObjectSlot &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	ObjectSlot& operator[]();
	ObjectSlot& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<ObjectSlot,__malloc_alloc_template<0> >*, int, void);
	vector<ObjectSlot,__malloc_alloc_template<0> >& operator=();
	void reserve();
	ObjectSlot& front();
	ObjectSlot& front();
	ObjectSlot& back();
	ObjectSlot& back();
	void push_back();
	void swap();
	ObjectSlot* insert();
	ObjectSlot* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb899;
	__vtbl_ptr_type *$vf1030;
	
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

struct PlacementSpec {
	bool inWorld;
	FTilePt location;
	cXObjectImpl *container;
	Int slotNum;
	Int level;
	
	PlacementSpec& operator=();
	PlacementSpec(FTilePt &loc, int inLevel, cXObjectImpl *inContainer, Int inSlotNum);
	PlacementSpec();
	PlacementSpec();
	PlacementSpec();
	bool operator==();
	bool operator!=();
};

struct HierarchySite {
	bool inWorld;
	FTilePt location;
	cXObjectImpl *container;
	Int slotNum;
	Int level;
};

extern int cXObjectImpl::sXDirTable[9];
extern int cXObjectImpl::sYDirTable[9];
extern Int cXObjectImpl::gPersonWidth;
extern bool cXObjectImpl::sFreeWill;
extern bool cXObjectImpl::sAutoCenter;
extern bool cXObjectImpl::sAutoReset;
extern BString2 cXObjectImpl::sLastUserTypedName;
extern Int gPlacementError;
extern cXObject *gPlacementConflict;
extern __vtbl_ptr_type cXObjectImpl virtual table[8];
extern __vtbl_ptr_type cXObjectImpl::TreeSimImpl virtual table[6];
extern __vtbl_ptr_type cXObjectImpl::cXObject virtual table[140];
extern __vtbl_ptr_type cXObjectImpl::TreeSim virtual table[18];
extern __vtbl_ptr_type ObjectSlot virtual table[3];
extern __vtbl_ptr_type Slot virtual table[3];
extern __vtbl_ptr_type cXObject virtual table[140];
extern __vtbl_ptr_type cXObject::TreeSim virtual table[18];

void cXObject::~cXObject(int __in_chrg);
void cXObjectImpl::~cXObjectImpl(int __in_chrg);
HierarchySite* HierarchySite::HierarchySite(PlacementSpec *ps);
HierarchySite* HierarchySite::HierarchySite(cXObjectImpl *obj);
HierarchySite* HierarchySite::HierarchySite(cXObjectImpl *inContainer, FTilePt &loc, int inSlotNum);
HierarchySite* HierarchySite::HierarchySite(FTilePt &loc, int inLevel);
short unsigned int ResolveRoomID(FTilePt &inPt, int inLevel);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
ObjectSlot* ObjectSlot * copy_backward<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result);
ObjectSlot* ObjectSlot * uninitialized_copy<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result);
void vector<ObjectSlot, __malloc_alloc_template<0> >::insert_aux(ObjectSlot *position, ObjectSlot &x);
void Slot::~Slot(int __in_chrg);
void ObjectSlot::~ObjectSlot(int __in_chrg);
void global constructors keyed to cXObjectImpl::sXDirTable();
void global destructors keyed to cXObjectImpl::sXDirTable();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECT_H

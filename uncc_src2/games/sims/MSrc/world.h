// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_WORLD_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_WORLD_H

struct vector<CTilePt,__malloc_alloc_template<0> > {
protected:
	CTilePt *start;
	CTilePt *finish;
	CTilePt *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	CTilePt* begin();
	CTilePt* begin();
	CTilePt* end();
	CTilePt* end();
	reverse_iterator<CTilePt *,CTilePt,CTilePt &,int> rbegin();
	reverse_iterator<const CTilePt *,CTilePt,const CTilePt &,int> rbegin();
	reverse_iterator<CTilePt *,CTilePt,CTilePt &,int> rend();
	reverse_iterator<const CTilePt *,CTilePt,const CTilePt &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	CTilePt& operator[]();
	CTilePt& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<CTilePt,__malloc_alloc_template<0> >*, int, void);
	vector<CTilePt,__malloc_alloc_template<0> >& operator=();
	void reserve();
	CTilePt& front();
	CTilePt& front();
	CTilePt& back();
	CTilePt& back();
	void push_back();
	void swap();
	CTilePt* insert();
	CTilePt* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct cArray<unsigned char> : c2DArray<unsigned char> {
	cArray<unsigned char>& operator=();
	cArray();
	cArray(cArray<unsigned char>*, int, void);
	cArray();
	cArray();
	Int GetSize();
	cConstArrayRow<unsigned char> operator[]();
	cArrayRow<unsigned char> operator[]();
	UInt8& operator()();
	UInt8& operator()();
	cArray<unsigned char>* Clone();
	void DoOffset();
	void AndAll();
};

struct cFixedWorldImpl : cFixedWorld, Commander {
	Int fSize;
	CFloorArray *mFloorLayer;
	cArray<short unsigned int> *mRoomLayer;
	cArray<unsigned char> *mFlagLayer;
	CWallArray *mWallLayer;
	cArray<VertexConfig> *mVertexConfigs;
	WallManager *mWallManager;
	LightLayer *mLightLayer;
	
	cFixedWorldImpl& operator=();
	cFixedWorldImpl(Int size);
	cFixedWorldImpl();
	/* vtable[1] */ virtual cFixedWorldImpl(cFixedWorldImpl*, int, void);
	/* vtable[2] */ virtual ErrType Save(iResFile *file, SInt32 inVersion);
	/* vtable[3] */ virtual ErrType Load(iResFile *file, SInt32 inVersion);
	/* vtable[4] */ virtual Boolean DoCommand(SInt16 com, SInt32 info);
	/* vtable[5] */ virtual bool SetSize(Int newSize, bool Override);
	/* vtable[6] */ virtual Int GetSize();
	/* vtable[7] */ virtual Int GetMaxSize();
	/* vtable[8] */ virtual bool OutOfBounds(FTilePt &aPt);
	/* vtable[9] */ virtual bool OutOfGrid(FTilePt &aPt);
	/* vtable[10] */ virtual bool OutOfBounds();
	/* vtable[11] */ virtual bool OutOfGrid();
	/* vtable[12] */ virtual CFloorArray& GetFloorLayer();
	/* vtable[13] */ virtual FloorPattern GetFloor(CTilePt &in);
	/* vtable[14] */ virtual void SetFloor(CTilePt &in, FloorPattern newFloor);
	/* vtable[15] */ virtual CWallArray& GetWalls();
	/* vtable[16] */ virtual TileWalls GetWall(CTilePt &inPt);
	/* vtable[17] */ virtual void SetWall(CTilePt &inLocation, TileWalls inWalls);
	/* vtable[18] */ virtual bool HasWalls(CTilePt &where);
	/* vtable[19] */ virtual bool HasWalls();
	/* vtable[20] */ virtual TileWallStorage& GetWallStorage(CTilePt &where);
	/* vtable[21] */ virtual void SetWallStorage(CTilePt &where, TileWallStorage &in);
	/* vtable[22] */ virtual UInt16 GetRoom(CTilePt &in);
	/* vtable[23] */ virtual void SetRoom(CTilePt &in, UInt16 inRoom);
	/* vtable[24] */ virtual UInt8 GetFlags(CTilePt &in);
	/* vtable[25] */ virtual void SetFlags(CTilePt &in, UInt8 inFlags);
	/* vtable[26] */ virtual bool IsOutside(CTilePt &in);
	/* vtable[27] */ virtual VertexConfig GetVertexConfig(CTilePt &where);
	/* vtable[28] */ virtual void SetVertexConfig(CTilePt &inPt, VertexConfig &inCfg);
	/* vtable[29] */ virtual VertexConfig AnalyzeWallVertex(CTilePt &inPt);
	/* vtable[30] */ virtual LightEntry& GetLightEntry(CTilePt &inWhere);
	/* vtable[31] */ virtual void SetLightEntry(CTilePt &inWhere, LightEntry &inEntry);
	/* vtable[32] */ virtual void ComputeRooms(int inLevel);
	/* vtable[33] */ virtual int ComputeArchValue(bool *hasHouse);
	/* vtable[34] */ virtual WallManager* GetWallManager();
	/* vtable[35] */ virtual LightLayer* GetLightLayer(int inLevel);
	/* vtable[36] */ virtual int MayEditTile(CTilePt &inWhere);
	void DeleteArrays();
	void OffsetWorld(CTilePt &inOffset);
};

extern int num_adjacent_offsets;
extern int num_support_offsets;
extern __vtbl_ptr_type cFixedWorldImpl::Commander virtual table[4];
extern __vtbl_ptr_type cFixedWorldImpl virtual table[38];
extern __vtbl_ptr_type cFixedWorld virtual table[38];

int GetWallPrice(WallStyle style);
void cFixedWorldImpl::~cFixedWorldImpl(int __in_chrg);
void SetLotBorders(int tl, int tr, int bl, int br);
void CreateTheWorld();
void DestroyTheWorld();
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
CTilePt* CTilePt * copy_backward<CTilePt *, CTilePt *>(CTilePt *first, CTilePt *last, CTilePt *result);
CTilePt* CTilePt * uninitialized_copy<CTilePt *, CTilePt *>(CTilePt *first, CTilePt *last, CTilePt *result);
void vector<CTilePt, __malloc_alloc_template<0> >::insert_aux(CTilePt *position, CTilePt &x);
void cFixedWorld::~cFixedWorld(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_WORLD_H

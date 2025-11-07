// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_IFLOOR_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_IFLOOR_H

typedef void (*FOrderTableCallback)(/* parameters unknown */);

struct EOrderTableData {
	s32 sortMode;
	s32 sortValue;
	u32 renderFlags;
	EVec3 *pvPos;
	EShader *pShader;
	EMat4 *pmOrient;
	ELights *pLights;
	int nLights;
	FOrderTableCallback pfnCallback;
	u32 callbackParam1;
	u32 callbackParam2;
private:
	EOrderTableData *pNext;
	
public:
	EOrderTableData& operator=();
	EOrderTableData();
	EOrderTableData();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

typedef TNodeList<EFloorStripInfo> EFloorStripList;
typedef TRedBlackTree<unsigned int,EIFloor *> EIFloorTable;
typedef TNodeList<EIFloorDiagonalData *> EIFloorDiagonalDataList;
typedef TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *> EIFloorDiagonalDataListShaderSortTree;

struct EFloorStripInfo {
protected:
	union {
		struct {
			unsigned int m_shdid : 8;
			unsigned int m_row : 8;
			unsigned int m_col0 : 8;
			unsigned int m_col1 : 8;
		} m_bitf;
		u32 m_mask;
	} m_data;
	
public:
	EFloorStripInfo();
	EFloorStripInfo();
	EFloorStripInfo();
	EFloorStripInfo(EFloorStripInfo*, int, void);
	EFloorStripInfo& operator=();
	u32 operator unsigned int();
	u8 GetShdid();
	u8 GetCol0();
	u8 GetCol1();
	u8 GetRow();
	void SetShdid();
	void SetCol0();
	void SetCol1();
	void SetRow();
};

struct EIFloorDiagonalData {
	u16 x;
	u16 y;
	u16 roomID;
	u16 side;
	u32 shaderID;
};

struct EILightmapForRoom {
	EILightmap m_lightmap;
	u32 m_roomID;
	
	EILightmapForRoom& operator=();
	EILightmapForRoom();
	EILightmapForRoom();
	EILightmapForRoom(EILightmapForRoom*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void SafeDelete();
	void SetLightmapPos(Room *pRoom);
	void EnableShadows();
};

struct TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *> : ERedBlackTree {
	TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *>*, int, void);
	EILightmapForRoom* operator[]();
	EILightmapForRoom*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EILightmapForRoom* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EIFloorLightMapMan {
protected:
	TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *> m_lightmaps;
	
public:
	EIFloorLightMapMan& operator=();
	EIFloorLightMapMan();
	EIFloorLightMapMan();
	EIFloorLightMapMan(EIFloorLightMapMan*, int, void);
	void CreateLightMaps(ERLevel *pLevel);
	void AddFloors(EIFloorTable &floors);
	void DestroyLightMaps();
	void Compute();
	void EnableShadows(bool enable);
	void DrawDebug(ERC *prc);
	void CollectWallLightMaps(TRedBlackTree<EILightmap *,EILightmap *> &tree);
};

struct EFloorShdTblTempTable {
protected:
	EIFloorDiagonalDataListShaderSortTree m_tree;
	
public:
	EFloorShdTblTempTable& operator=();
	EFloorShdTblTempTable();
	EFloorShdTblTempTable();
	EFloorShdTblTempTable(EFloorShdTblTempTable*, int, void);
	void SortDiagonalTabel(EIFloorDiagonalDataList &inList);
	EIFloorDiagonalDataList* GetList(u32 shaderId);
};

struct EFloorShdTblNode {
protected:
	ERShader *m_pShader;
	EFloorStripList m_stripList;
	static bool m_bTableInited;
	static EFloorShdTblNode _eFloorOrderTable[64];
	static EIFloorDiagonalDataList m_diagonalTiles;
	static int _m_nStrips;
	
public:
	EFloorShdTblNode& operator=();
	EFloorShdTblNode();
	EFloorShdTblNode();
	EFloorShdTblNode(EFloorShdTblNode*, int, void);
	static bool CheckForHotTub(/* parameters unknown */);
	static void InitTable(/* parameters unknown */);
	static void EmptyTable(/* parameters unknown */);
	static void BuildTable(/* parameters unknown */);
	static void AddStripToTable(/* parameters unknown */);
	static void BuildStrip(/* parameters unknown */);
	static bool PreviewTable(/* parameters unknown */);
protected:
	void CleanUp();
};

extern EIFloorLightMapMan EIFloor::m_lightmapman;
extern EIFloorPool *_eIFloorAllocPool;
extern EIFloorEOrderTableDataPool *_eIFloorOtdPool;
extern u32 EIFloor::m_nAlloced;
extern EIFloorTable EIFloor::m_floors;
extern EFloorShdTblNode EFloorShdTblNode::_eFloorOrderTable[64];
extern EIFloorDiagonalDataList EFloorShdTblNode::m_diagonalTiles;
extern bool EFloorShdTblNode::m_bTableInited;
extern int EFloorShdTblNode::_m_nStrips;
extern ETypeInfo *gpTypeInfo_EIFloor;
extern EVec2 _vDiagSides[4][3];
extern EVec2 _vDiagSidesTc[4][3];
extern __vtbl_ptr_type EIFloor virtual table[25];
extern EFloorVertTint _vertColorLookup[63][63];
extern ETypeInfo EIFloor::m_typeInfo;

void InitVertColorLookup();
void EFloorShdTblNode::~EFloorShdTblNode(int __in_chrg);
u16 ConvertRoomSideToWallSide(Sides inside);
void Get2DNoiseIntensity(EFloorVertTint &color, float xPos, float yPos);
EStream& operator<<(EStream &s, EIFloor *pD);
EStream& operator>>(EStream &s, EIFloor *&pD);
void BuildDiagonalTri(ERC *prc, EIFloorDiagonalData &data);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EIFloor::~EIFloor(int __in_chrg);
void global constructors keyed to InitVertColorLookup();
void global destructors keyed to InitVertColorLookup();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_IFLOOR_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CURSORFLOORTOOL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CURSORFLOORTOOL_H

enum FloorPattern {
	kNoFloor = 0,
	kFloorFirstHardCoded = 1,
	kFloorLastHardCoded = 29,
	kOrigPlugInFloorPatternMin = 30,
	kOrigPlugInFloorPatternMax = 254,
	kDummyFloor = 255,
	kOrigFloorPatternCount = 255,
	kPlugInFloorPatternMin = 256,
	kPlugInFloorPatternMax = 65534,
	kFloorPatternInvalid = 65535,
	kFloorPatternCount = 65535
};

struct CursorFloorTile {
protected:
	FloorTile &m_node;
	EDL *m_pRect;
	EMat4 m_mPos;
	
public:
	CursorFloorTile& operator=();
	CursorFloorTile();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	CursorFloorTile();
	CursorFloorTile(CursorFloorTile*, int, void);
	void Init(float x, float y);
	void Draw(ERC *prc);
	void SetPos(EVec2 &v);
	FloorTile& GetNode();
	u32 GetMaxisIndex();
protected:
	void Cleanup();
};

bool CanPlaceFloor(CTilePt &point, FloorPattern floor);
int GetFloorCost(FloorPattern pattern);
int GetFloorRefund(FloorPattern pattern);
int GetTotalRefundOnTile(CTilePt &point);
s32 GetNewFloorCost(bool &bPlacedFloor, int startx, int stopx, int starty, int stopy, FloorPattern pattern);
s32 GetTotalFloorRefund(bool &bPlacedFloor, int startx, int stopx, int starty, int stopy, FloorPattern pattern);
s32 GetTotalRoomFillCost__FRbP4RoomRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i012FloorPattern(bool &bDidFloor, Room *pRoom, vector<CTilePt,__malloc_alloc_template<0> > &tiles, FloorPattern pattern);
void CheckDiagForRoomContainment(RoomImpl *pRoom, CTilePt &where, TileWalls &walls, DiagonalSideSelector &A, DiagonalSideSelector &B);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CURSORFLOORTOOL_H

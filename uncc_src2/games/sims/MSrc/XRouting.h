// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_XROUTING_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_XROUTING_H

struct tagRECT {
	LONG left;
	LONG top;
	LONG right;
	LONG bottom;
};

typedef tagRECT *LPRECT;

struct FTilePt {
	FInt y;
	FInt x;
	
	FTilePt& operator=();
	FTilePt();
	void Set();
	void Set();
	void Set();
	void Set();
	void Pin();
	Int SquareDist();
	void CenterOnTile();
	Int GetWholeXDelta();
	Int GetWholeYDelta();
	void GetWholePoint();
	void SetWholePoint();
	FTilePt& operator+=();
	FTilePt& operator-=();
	FTilePt& operator*=();
	FTilePt();
	FTilePt();
	FTilePt();
	FTilePt();
	FTilePt();
	bool operator==(FTilePt &inPt);
	bool operator!=();
	Int GetApproximateDirection();
	Int GetApproximateDirection();
};

typedef vector<PenaltyRect,__malloc_alloc_template<0> > Partition;

struct TileList : vector<FTilePt,__malloc_alloc_template<0> > {
	TileList& operator=();
	TileList();
	TileList();
	TileList(TileList*, int, void);
	void FindNearestPoint(FTilePt *inOutPt, Int curDest);
};

struct RouteGoal {
	FTilePt loc;
	Int score;
	SInt16 chairID;
	SInt16 entryDirFlag;
};

enum EvalTile {
	kEvalTileOutOfBounds = 0,
	kEvalTileObstacle = 1,
	kEvalTileRoom = 2,
	kEvalTileWallInFront = 3,
	kEvalTileAltsDontMatch = 4,
	kEvalTilePersonObstacle = 5,
	kEvalTileAllClear = 6
};

int localInflateRect(LPRECT lprc, int dx, int dy);
int localIntersectRect(LPRECT lprc, RECT *lprcSrc1, RECT *lprcSrc2);
int localIsRectEmpty(RECT *lprc);
void BuildRoomPartition(short unsigned int inRoom, Partition *outPartition, bool enableTerrainPenalty);
void BuildRoomPartition(short unsigned int inRoom, Partition *outPartition);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
RouteGoal* RouteGoal * copy_backward<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result);
RouteGoal* RouteGoal * uninitialized_copy<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result);
void vector<RouteGoal, __malloc_alloc_template<0> >::insert_aux(RouteGoal *position, RouteGoal &x);
PenaltyRect* PenaltyRect * copy_backward<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result);
PenaltyRect* PenaltyRect * uninitialized_copy<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result);
void vector<PenaltyRect, __malloc_alloc_template<0> >::insert_aux(PenaltyRect *position, PenaltyRect &x);
void void StressVector<PenaltyRect>(vector<PenaltyRect,__malloc_alloc_template<0> > *v);
NodeRef* int * copy_backward<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result);
NodeRef* int * uninitialized_copy<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result);
void vector<int, __malloc_alloc_template<0> >::insert_aux(NodeRef *position, NodeRef &x);
void void StressVector<int>(vector<int,__malloc_alloc_template<0> > *v);
FTilePt* FTilePt * copy_backward<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result);
FTilePt* FTilePt * uninitialized_copy<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result);
void vector<FTilePt, __malloc_alloc_template<0> >::insert_aux(FTilePt *position, FTilePt &x);
void void StressVector<FTilePt>(vector<FTilePt,__malloc_alloc_template<0> > *v);
RouteGoal* RouteGoal * uninitialized_copy<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result);
void Path::~Path(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_XROUTING_H

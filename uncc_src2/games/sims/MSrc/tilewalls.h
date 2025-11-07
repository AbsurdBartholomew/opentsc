// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_TILEWALLS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_TILEWALLS_H

typedef Byte Uint8;

enum TileWallsSegment {
	kNoWalls = 0,
	kTopLeft = 1,
	kTopRight = 2,
	kBottomRight = 4,
	kBottomLeft = 8,
	kHorizDiag = 16,
	kVertDiag = 32,
	kAllWalls = 255
};

enum SheerPlacement {
	kUpper = 1,
	kLower = 2,
	kBoth = 3
};

struct TileWalls {
private:
	TileWallsSegment mSegments;
	int mPlacement;
	short unsigned int mStyles[6];
	short unsigned int mPatterns[8];
	int mRotation;
	bool mBelowLeftHasDiagonal;
	bool mBelowRightHasDiagonal;
	bool mAboveLeftHasDiagonal;
	bool mAboveRightHasDiagonal;
	static unsigned char mVertexConfigToShapeLookup[256];
	static TileWallsSegment sRotateSegmentLookup[4][64];
	static DiagonalSideSelector sRotateDiagonalLookup[4][5];
	
	static bool IsSingleWall(/* parameters unknown */);
public:
	TileWalls(TileWalls &in);
	TileWalls();
	TileWalls();
	TileWalls();
	TileWalls(TileWalls*, int, void);
	TileWalls& operator=(TileWalls &in);
	WallPattern GetPattern(TileWallsSegment inSeg, DiagonalSideSelector inSel);
	WallStyle GetStyle(TileWallsSegment inSeg);
	bool HasWall();
	bool HasWall();
	bool HasWallNotFence(TileWallsSegment inSeg);
	bool HasDiagonal();
	bool HasDiagonalNotFence();
	bool CanAdd(TileWallsSegment inSeg);
	SheerPlacement GetPlacement(TileWallsSegment inSeg);
	TileWallsSegment SetPattern(WallPattern inPattern, TileWallsSegment inSeg, DiagonalSideSelector inSel);
	TileWallsSegment SetStyle(WallStyle inStyle, TileWallsSegment inSeg);
	TileWallsSegment AddWall(TileWallsSegment inSeg);
	void RemoveWall(TileWallsSegment inSeg);
	void RemoveAllWalls();
	TileWallsSegment SetPlacement(SheerPlacement inPlc, TileWallsSegment inSeg);
	TileWallsSegment First();
	TileWallsSegment Next(TileWallsSegment inPrevious);
	void ConvertToViewCoords(int inRotation);
	void ConvertToWorldCoords();
	FloorPattern GetFloorValue(DiagonalSideSelector inSelector);
	void SetFloorValue(FloorPattern inFloor, DiagonalSideSelector inSelector);
	void Rotate(int inRot);
	static TileWallsSegment RotateSegment(/* parameters unknown */);
	static DiagonalSideSelector RotateDiagonal(/* parameters unknown */);
	static TileWallsSegment GetOppositeSegment(/* parameters unknown */);
	static TileWallsSegment DirToWallSeg(/* parameters unknown */);
	static void GetAdjacentTile(/* parameters unknown */);
	static TileWallsSegment GetWallBetween(/* parameters unknown */);
	static int SegmentToIndex(/* parameters unknown */);
	static TileWallsSegment IndexToSegment(/* parameters unknown */);
	static void GenerateRotationLookups(/* parameters unknown */);
	static int GetGlobalWallPatternSpriteList(/* parameters unknown */);
	static int GetGlobalWallStyleSpriteList(/* parameters unknown */);
	static int GetCustomWallStyleSpriteList(/* parameters unknown */);
	static int GetThickWallSpriteList(/* parameters unknown */);
	static int GetThickCutawayWallPixelSpriteList(/* parameters unknown */);
	static int GetThickCutawayWallZSpriteList(/* parameters unknown */);
	static int VertexConfigToSpriteIndex(/* parameters unknown */);
};

struct TileWallStorage {
	Uint8 mSegments;
	Uint8 mPlacement;
	u8 mTopLeftStyle;
	union {
		u8 mTopRightStyle;
		u8 mDiagonalStyle;
	};
	u8 mTopLeftPattern;
	u8 mTopRightPattern;
	union {
		u8 mBottomLeftPattern;
		u8 mDiagTopLeftPattern;
	};
	union {
		u8 mBottomRightPattern;
		u8 mDiagBottomRightPattern;
	};
	
	TileWallStorage& operator=();
	TileWallStorage();
	TileWallStorage();
	void ConvertOldStyleWall();
	bool HasDiagonal();
	bool HasDiagonalNotFence();
	bool HasWalls();
	bool HasWalls();
	bool operator==();
	TileWallStorage& Clear();
};

extern unsigned char TileWalls::mVertexConfigToShapeLookup[256];
extern TileWallsSegment TileWalls::sRotateSegmentLookup[4][64];
extern DiagonalSideSelector TileWalls::sRotateDiagonalLookup[4][5];

void TileWalls::~TileWalls(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_TILEWALLS_H

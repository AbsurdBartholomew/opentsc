// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_WALLS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_WALLS_H

typedef unsigned char Byte;
typedef Byte UInt8;
typedef short unsigned int Boolean;

struct FInt {
	Int whole;
	
	FInt& operator=();
	FInt();
	FInt();
	FInt();
	Int Frac();
	Int Integer();
	void SetFrac();
	void SetInteger();
	float ToFloat();
	FInt& Increment();
	FInt& Decrement();
	bool operator==();
};

struct FTileRect {
	FInt bottom;
	FInt right;
	FInt top;
	FInt left;
	
	FTileRect& operator=();
	FTileRect();
	FTileRect();
	FTileRect();
	void Set();
	void Set();
	void SetWhole();
	bool Sect();
	void FindCenter();
	void GetWholeRect();
	bool ContainsPt();
};

Boolean CanWalkThrough(UInt8 style);
Boolean CanWalkThrough(WallStyle inStyle);
Boolean TestDoorCondition(TileWalls &inFailedWalls, TileWallsSegment inAllowedWallMask);
Boolean SectWall(FTileRect *testRect, Int inLevel);
Boolean ValidDoorLocation(Int level, Int x1, Int y1, Int x2, Int y2);
UInt8 RotateWallBits(UInt8 wallBits, Int notches);
Boolean CheckWallFlags(FTilePt location, Int level, Int objDir, Int wflags);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_WALLS_H

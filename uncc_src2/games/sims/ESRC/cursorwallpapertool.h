// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CURSORWALLPAPERTOOL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CURSORWALLPAPERTOOL_H

enum TilePtDir {
	kNE = 0,
	kSW = 1,
	kNW = 2,
	kSE = 3,
	kN = 4,
	kS = 5,
	kE = 6,
	kW = 7,
	kNone = 8
};

enum WallPattern {
	kWallFirstLowRangeHardCoded = 0,
	kSheetRockPattern = 0,
	kLivingRoomPattern = 1,
	kMasterBedPattern = 2,
	kDiningRoomPattern = 3,
	kKitchenPattern = 4,
	kChildRoomPattern = 5,
	kBrickPattern = 6,
	kWallPattern7 = 7,
	kWallPattern8 = 8,
	kChildRoom2Pattern = 9,
	kNurseryPattern = 10,
	kWallPattern011 = 11,
	kWallPattern012 = 12,
	kWallPattern013 = 13,
	kWallPattern014 = 14,
	kWallPattern015 = 15,
	kWallPattern016 = 16,
	kWallPattern017 = 17,
	kWallPattern018 = 18,
	kWallPattern019 = 19,
	kWallPattern020 = 20,
	kWallPattern021 = 21,
	kWallPattern022 = 22,
	kWallPattern023 = 23,
	kWallPattern024 = 24,
	kWallPattern025 = 25,
	kWallPattern026 = 26,
	kWallPattern027 = 27,
	kWallPattern028 = 28,
	kWallPattern029 = 29,
	kWallPattern030 = 30,
	kWallLastLowRangeHardCoded = 30,
	kOrigPlugInWallPatternMin = 31,
	kOrigPlugInWallPatternMax = 247,
	kWallFirstHighRangeHardCoded = 248,
	kFence1Pattern = 248,
	kFence2Pattern = 249,
	kFence3Pattern = 250,
	kFence4Pattern = 251,
	kCutawayTransL = 252,
	kCutawayTransR = 253,
	kCutawayPattern = 254,
	kUnderConstructionPattern = 255,
	kWallLastHighRangeHardCoded = 255,
	kOrigWallPatternCount = 256,
	kPlugInWallPatternMin = 256,
	kPlugInWallPatternMax = 65534,
	kWallPatternInvalid = 65535,
	kWallPatternCount = 65535
};

extern TilePtDir _PerpTilePointTab[9];
extern float _wallpaperOff;

void ForcePointDir(CTilePt &c0, CTilePt &c1);
int GetPaperRefundOnWall(WallPattern pattern);
int GetPaperCostAtPoint(bool bDoRefund, s32 price, TileWallsSegment theSeg, TileWalls &theWalls, DiagonalSideSelector side);
void EorGetAdjacentTile(TileWallsSegment &theSeg, int whichSide, DiagonalSideSelector &side, CTilePt &out0, CTilePt &out1);
UInt16 GetRoomIdFromPoint(CTilePt &wherePt);
int ComputeRoomCost(u32 shader, short unsigned int room);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CURSORWALLPAPERTOOL_H

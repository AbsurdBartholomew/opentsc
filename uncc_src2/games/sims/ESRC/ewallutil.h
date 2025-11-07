// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EWALLUTIL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EWALLUTIL_H

struct EWallSetup {
	float xoff;
	float yoff;
	float rot;
	float pad;
};

struct EDiagRoomWallModelIdTableNode {
	unsigned int standardEndCapidx[4];
};

struct ERoomWallModelIdTableNode {
	unsigned int standardEndCapidx[4];
	unsigned int doorEndCapidx[4];
	unsigned int windowStanEndCapidx[4];
	unsigned int windowPlatEndCapidx[4];
	unsigned int windowPrivEndCapidx[4];
};

extern TileWallsSegment _EWallConfigIdxMap[6];
extern EWallSetup _EWallConfigs[6];
extern ERoomWallModelIdTableNode _ERoomWallModelIdTable[4];
extern EDiagRoomWallModelIdTableNode _EDiagRoomWallModelIdTable[4];

void SwapXY(EMat4 &m);
int RemapWallCfgIdx(TileWallsSegment seg);
u32 RemapWallpaperId(u32 patt);
u32 RemapFloorId(u32 patt);
void global constructors keyed to SwapXY();
void global destructors keyed to SwapXY();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EWALLUTIL_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_ESIMSCRATCHPADMAN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_ESIMSCRATCHPADMAN_H

extern EHeap *ESimScratchPadMan::m_pHeap;
extern void *ESimScratchPadMan::m_pHead;
extern CWallArray *ESimScratchPadMan::mWallLayer;
extern CFloorArray *ESimScratchPadMan::mFloorLayer;

void* _Default2dArrayAlloc(u32 size);
void _Default2dArrayFree(void *p);
void* _WallFloorUndoableAlloc(u32 size);
void _WallFloorUndoableFree(void *p);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_ESIMSCRATCHPADMAN_H

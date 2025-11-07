// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CURSOR_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CURSOR_H

enum PointToObjectMode {
	kPointToAnyObject = 0,
	kPointToRegularObject = 1,
	kPointToDoorObject = 2,
	kPointToWindowObject = 3
};

enum CursorMode {
	kDefault = 0,
	kPiMenu = 1,
	kFloorTool = 2,
	kWallTool = 3,
	kPaperTool = 4,
	kFenceTool = 5,
	kPausedPanel = 6,
	nToolModes = 7
};

extern bool esmscrsrPauseUpdate;
extern float kRefundRate;
extern EBound3 ESimsCursor::m_lotBound;
extern ELights m_esmc_playerColorLight[2];
extern ELights m_esmc_deflight;
extern float _curs_move_pause;
extern float _cursRadMin;
extern float _cursRadMax;
extern ERShader *ESimsCursor::m_pWhiteLineShader;
extern ERShader *ESimsCursor::m_pWallUnderConstructionShd;
extern ERShader *ESimsCursor::m_pBuildToolGuideShd;
extern bool ESimsCursor::m_bGridInit;
extern EDL *ESimsCursor::m_pGridDl;
extern __vtbl_ptr_type ESimsCursor::Panelstateman virtual table[5];
extern __vtbl_ptr_type ESimsCursor virtual table[16];
extern __vtbl_ptr_type Panelstateman virtual table[5];

void GetObjectInstance(cXObject *pXObj, TNodeList<ISimInstance *> &instances);
void ESimsCursor::~ESimsCursor(int __in_chrg);
bool TryFindAlternativeUndoLoc(cXObject *newObj);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void Panelstateman::~Panelstateman(int __in_chrg);
void global constructors keyed to esmscrsrPauseUpdate();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CURSOR_H

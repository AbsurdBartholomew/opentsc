// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_SIMSMEMCARD_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_SIMSMEMCARD_H

struct ESimsMemCard {
	bool m_bLoadSuccessful;
	bool m_bSaveSuccessful;
protected:
	bool m_bOverride;
	bool m_bCheckingCard;
	int m_bCheckingCardDrawMode;
	int m_MemCardMode;
	bool m_bDrawCalled;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pCircIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pMemcardBackground;
	bool m_bAlreadyCheckedForFile;
	bool m_bNoFile;
	char m_FileList[8][32];
	bool m_bSaveLoadActive;
	char *m_pNeighborhoodName;
	bool m_bProhibitDraw;
	bool m_bCheckForCurrentNghFile;
	bool m_bErrorSavingFile;
	bool m_bLoadMsgMode;
	bool m_bLoadInittedMenu;
	ESimsMemCardMenuMgr *m_pMemCardMenuMgr;
	int m_DrawLoadOneFrame;
	NghResFile *m_pNghPtr;
	bool m_bWaitForButUp;
	int m_SaveSize;
	int m_SaveConfigSize;
	ERFont *m_pFont;
	bool m_bLastMemCardModeWasConfig;
	bool m_bSpecialSaveSequence;
	OptionsRecon *m_pTempOR;
	int m_LoadStoryAndNeighborhoodMode;
	bool m_bExitSymbolIsTriangle;
	bool m_CanFormat;
	bool m_bSkipCurrentNeighborhood;
	bool m_bArtificialWait;
	float m_ArtificialWaitTime;
	bool m_bCheckForOverwrite;
	bool m_bOkToOverwrite;
	bool m_bWaitOneFrame;
	bool m_bWaitOneFrameDraw;
	
public:
	ESimsMemCard& operator=();
	ESimsMemCard();
	ESimsMemCard();
	ESimsMemCard(ESimsMemCard*, int, void);
	void Init();
	void Update();
	void Draw(ERC *prc);
	void Reset();
	bool OverrideNormalFunctionality();
	void SetMemCardCheckMode();
	void SetLoadNeighborhoodMode();
	void SetLoadStoryMode();
	void SetLoadNeighborhoodAndStoryMode();
	void SetSaveNeighborhoodMode();
	void SetImportNeighborhoodMode(NghResFile *ptr, bool SkipCurrentNeighborhood);
	void SetSaveConfigMode();
	void SetLoadConfigMode();
	void SetSaveNeighborhoodAndConfigMode();
protected:
	void UpdateMemCardCheckMode();
	void UpdateLoadNeighborhoodMode();
	void UpdateSaveNeighborhoodMode();
	void UpdateImportHouseMode();
	void UpdateSaveConfigMode();
	void UpdateLoadConfigMode();
	void UpdateSpecialSaveStage1();
	void UpdateSpecialSaveStage2();
	void DrawMemCardCheckMode(ERC *prc);
	void DrawLoadNeighborhoodMode(ERC *prc);
	void DrawSaveNeighborhoodMode(ERC *prc);
	void DrawImportHouseMode(ERC *prc);
	void DrawSaveConfigMode(ERC *prc);
	void DrawLoadConfigMode(ERC *prc);
	void DrawGenericMessage(ERC *prc, c16 *Line1, c16 *Line2, c16 *Line3, c16 *Line4);
	void DrawGenericStatementBox(ERC *prc, c16 *Line1, c16 *Line2, c16 *Line3);
	void DrawGenericMessageBox(ERC *prc, c16 *Title, c16 *Line1, c16 *Line2, c16 *Line3);
	void SaveNeighborhoodFileDirect();
	void LoadNeighborhoodFileDirect(char *NeighborhoodName);
	int CheckCardUpdate(bool ReturnOnError);
	void CheckCardDraw(ERC *prc);
	void GetCompressedNeighborhoodName(char *OutName);
};

extern __vtbl_ptr_type SimpleReconObject<OptionsRecon> virtual table[5];

void ESimsMemCard::~ESimsMemCard(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
HandleNode* Memory::HandleNode * ReconSaveObject<OptionsRecon>(OptionsRecon *obj, SInt32 type, SInt32 version);
void void ReconLoadObject<OptionsRecon>(OptionsRecon *obj, HandleNode *mem, SInt32 type, SInt32 *version);
UnlockedId* UnlockedId * copy_backward<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
void vector<UnlockedId, __malloc_alloc_template<0> >::insert_aux(UnlockedId *position, UnlockedId &x);
void SimpleReconObject<OptionsRecon>::~SimpleReconObject(int __in_chrg);
void global constructors keyed to ESimsMemCard::ESimsMemCard();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_SIMSMEMCARD_H

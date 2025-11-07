// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_INTROMODE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_INTROMODE_H

struct EIntroMode : EGameState {
protected:
	float m_introdoneTime;
	int m_CurrentSubmode;
	float m_fAlpha;
	EDialogMenu m_DialogMenu;
	c16 *m_ppLanguages[8];
	bool m_bAlreadyCheckedMem;
	EVec2 m_vLine1Pos;
	EVec2 m_vLine2Pos;
	EVec2 m_vLine3Pos;
	EVec2 m_vLine4Pos;
	EVec2 m_vLine1PosStart;
	EVec2 m_vLine2PosStart;
	EVec2 m_vLine3PosStart;
	EVec2 m_vLine4PosStart;
	EVec2 m_vLine1PosEnd;
	EVec2 m_vLine2PosEnd;
	EVec2 m_vLine3PosEnd;
	EVec2 m_vLine4PosEnd;
	bool m_bMovieNeedsPlaying;
	bool m_bArcFilesNeedOpening;
	bool m_bMovieNeedsFading;
	int m_CurrentLogo;
	int m_MemCardCheckState;
	ERShader *m_pGradient;
	ERShader *m_pDevelopedBy;
	
public:
	EIntroMode& operator=();
	EIntroMode();
	EIntroMode();
	/* vtable[1] */ virtual EIntroMode(EIntroMode*, int, void);
	/* vtable[2] */ virtual void Init(int FromState);
	/* vtable[5] */ virtual void Reset(int ToState);
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw(ERC *prc);
protected:
	void openArcFiles();
};

struct ArcFileSizes {
	u32 uAudioStream;
	u32 uSample;
	u32 uMovie;
};

extern __vtbl_ptr_type EIntroMode virtual table[7];
extern __vtbl_ptr_type EGameState virtual table[7];

void EIntroMode::~EIntroMode(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EGameState::~EGameState(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_INTROMODE_H

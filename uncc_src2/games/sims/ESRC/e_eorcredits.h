// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_E_EORCREDITS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_E_EORCREDITS_H

struct EEorEmployeeName {
protected:
	char *m_szName;
	EVec2 m_vScreenPos;
	
public:
	EEorEmployeeName& operator=();
	EEorEmployeeName(c16 *szName);
	EEorEmployeeName();
	EEorEmployeeName(EEorEmployeeName*, int, void);
	void Draw(ERC *prc, float fDelta);
	void SetScreenPosition();
	float GetYPos();
};

struct EEorJobTitle {
protected:
	c16 *m_szName;
	EVec2 m_vScreenPos;
	EVec2 m_vUpperLeft;
	EVec2 m_vLowerRight;
	
public:
	EEorJobTitle& operator=();
	EEorJobTitle(c16 *szName);
	EEorJobTitle();
	EEorJobTitle(EEorJobTitle*, int, void);
	void DrawText(ERC *prc);
	void DrawLine(ERC *prc, float fDelta);
	void SetScreenPosition(EVec2 vNewPos);
};

enum MOVIE_FADE {
	kFadeNone = 0,
	kFadeUp = 1,
	kFadeDown = 2
};

struct EEorCreditsMode : EGameState {
protected:
	u32 m_nLastIndex;
	u32 m_nCurrentMode;
	bool m_bEorMovieNeedsPlaying;
	bool m_bMaxisMovieNeedsPlaying;
	bool m_bWaitingForMovieToStop;
	bool m_bLoadingNeighborhoodData;
	MOVIE_FADE m_FadingAudio;
	bool m_bDrawCredits;
	float m_fPauseTime;
	float m_fFrameCount;
	ERBinary *m_pCreditText;
	EEorJobTitle **m_pTitles;
	EEorEmployeeName **m_pNames;
	EUIIcon m_PromptIcon;
	EUIPrompt m_Prompt;
	EPromptBar m_PromptBar;
	
public:
	EEorCreditsMode& operator=();
	EEorCreditsMode();
	EEorCreditsMode();
	/* vtable[1] */ virtual EEorCreditsMode(EEorCreditsMode*, int, void);
	/* vtable[2] */ virtual void Init(int FromState);
	/* vtable[5] */ virtual void Reset(int ToState);
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw(ERC *prc);
protected:
	void InitEorCredits();
	void InitMaxisCredits();
	void ClearCurrentCredits();
};

extern __vtbl_ptr_type EEorCreditsMode virtual table[7];
extern __vtbl_ptr_type EGameState virtual table[7];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EEorCreditsMode::~EEorCreditsMode(int __in_chrg);
void EEorJobTitle::~EEorJobTitle(int __in_chrg);
void EEorEmployeeName::~EEorEmployeeName(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void EGameState::~EGameState(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_E_EORCREDITS_H

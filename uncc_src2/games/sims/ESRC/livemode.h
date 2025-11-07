// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_LIVEMODE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_LIVEMODE_H

struct ELiveMode : EGameState {
protected:
	EPanel *m_pPanel;
	bool m_Initialized;
	int m_FinalScreen;
	int m_ClearFinalScreenCounter;
	int m_ModeTransitionedFrom;
	float m_LoadProgress;
	bool m_BackgroundColorSet;
	float m_FadeinTime;
	float m_FadeinTimeLeft;
	float m_ResetTimeout;
	bool m_AlreadyGameOver;
	bool m_VibrationReady[2];
	bool m_bStoryModeIntroScreenUp;
	bool m_bAskingToSave;
	bool m_bXIsDown;
	ERShader *m_pXIcon;
	ERShader *m_p2PlayerDivShad;
	bool m_bGoingToNeighborhoodMode;
	bool m_bGoingToCreditsMode;
	float m_TimeAccumulator;
	int m_InitializationStage;
	bool m_bWaitForSaveReturn;
	float m_FadeOutPercent;
	bool m_bDisplayStoryModeTransitionScreen;
	ERShader *m_pUpShdr;
	ERShader *m_pDownShdr;
	ERShader *m_pLeftShdr;
	ERShader *m_pRightShdr;
	ERShader *m_pDPadBack;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	EUIIcon m_XIcon;
	EUIPrompt m_Prompts[1];
	EPromptBar m_PromptBar;
	
public:
	ELiveMode& operator=();
	ELiveMode();
	ELiveMode();
	/* vtable[1] */ virtual ELiveMode(ELiveMode*, int, void);
	/* vtable[2] */ virtual void Init(int FromState);
	/* vtable[5] */ virtual void Reset(int ToState);
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw(ERC *prc);
protected:
	void DrawMain(ERC *prc);
	void DrawGrid();
	void DrawStickFigures();
	bool initContinue();
	void initDrawContinue(ERC *prc);
	void StartStoryModeTransScreen();
	void StartStoryModeBeginScreen();
};

extern ERTexture *_pMaskTexture;
extern float _2pDivWidth;
extern float _2pDivHeight;
extern float _fReBoot;
extern EVec3 _lightpos;
extern float _amb;
extern float _dir;
extern float _dir2;
extern EVec3 _ambColor;
extern EVec3 _dirColor;
extern EVec3 _dir2Color;
extern E3DWindow _2Dwin;
extern EPortalWindow _ELiveMode_win;
extern float _p1yshift;
extern float _p1xshift;
extern bool _drawPlayer[2];
extern int _nLoops;
extern bool _splitportal;
extern bool _usemask;
extern bool _newvp;
extern float _2pdivBlend;
extern __vtbl_ptr_type ELiveMode virtual table[7];
extern __vtbl_ptr_type EGameState virtual table[7];
extern __vtbl_ptr_type EUIIconDef virtual table[3];
extern EGEPackedParticle _2pDivParticle;

void ELiveMode::~ELiveMode(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void EGameState::~EGameState(int __in_chrg);
void global constructors keyed to _pMaskTexture();
void global destructors keyed to _pMaskTexture();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_LIVEMODE_H

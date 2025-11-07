// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_STARTMODE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_STARTMODE_H

struct EGameState {
protected:
	EGameStateId m_state;
	EGameStateMan *m_pStateMan;
public:
	__vtbl_ptr_type *$vf2441;
	
	EGameState& operator=();
	EGameState();
	EGameState();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[1] */ virtual EGameState(EGameState*, int, void);
	/* vtable[2] */ virtual void Init(EGameState*, int, void);
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw();
	/* vtable[5] */ virtual void Reset(EGameState*, int, void);
	EGameStateId GetState();
};

struct EStartMode : EGameState {
protected:
	float m_introdoneTime;
	float m_flashTime;
	bool m_bDrawPrompt;
	u8 m_nDisplayMode;
	EVec2 m_vBarPos;
	float m_fBarWidth;
	float m_fHighestProgress;
	EWindow *m_pClipWin;
	ERShader *m_pBackground;
	ERShader *m_BarLeft;
	ERShader *m_BarMiddle;
	ERShader *m_BarRight;
	ERShader *m_BarHighlightLeft;
	ERShader *m_BarHighlightMiddle;
	ERShader *m_BarHighlightRight;
	bool m_bDrawFirstTime;
	bool m_bMovieNeedsFading;
	
public:
	EStartMode& operator=();
	EStartMode();
	EStartMode();
	/* vtable[1] */ virtual EStartMode(EStartMode*, int, void);
	/* vtable[2] */ virtual void Init(int FromState);
	/* vtable[5] */ virtual void Reset(int ToState);
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw(ERC *prc);
};

extern __vtbl_ptr_type EStartMode virtual table[7];
extern __vtbl_ptr_type EGameState virtual table[7];

void EStartMode::~EStartMode(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EGameState::~EGameState(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_STARTMODE_H

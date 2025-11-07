// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_DPADWIN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_DPADWIN_H

enum Panelstate {
	LIVE_DEFAULT_STATE = 0,
	LIVE_DIALOG_STATE = 1,
	LIVE_ACTIONQ_STATE = 2,
	LIVE_INFOUP_1_STATE = 3,
	LIVE_INFOUP_2_STATE = 4,
	LIVE_PIMENU_STATE = 5,
	LIVE_FIRSTPERSON = 6,
	LIVE_SIM_EDIT = 7,
	PAUSED_PANEL_STATE = 8,
	PAUSED_CURSOR_STATE = 9,
	NSTATES = 10
};

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1647;
protected:
	EVec2 m_vPosOff;
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_fnTab[10];
public:
	static bool m_bInit;
	static ERShader *m_pBack;
	static ERShader *m_pBack1;
	static ERShader *m_pBack2;
	static ERShader *m_pUpShdr;
	static ERShader *m_pDownShdr;
	static ERShader *m_pLeftShdr;
	static ERShader *m_pRightShdr;
	static ERShader *m_pDelqueueShdr;
	static ERShader *m_pJobShdr;
	static ERShader *m_pMoodShdr;
	static ERShader *m_pMovequeueShdr;
	static ERShader *m_pPersonalityShdr;
	static ERShader *m_pRelationshipsShdr;
	static ERShader *m_pBlankUp;
	static ERShader *m_pBlankDown;
	static ERShader *m_pBlankLeft;
	static ERShader *m_pBlankRight;
	static ERShader *m_pQuestion;
	static ERShader *m_pCancle;
	
	DPadWin& operator=();
	DPadWin();
	DPadWin();
	/* vtable[1] */ virtual DPadWin(DPadWin*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void SetDefaultFlags();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawButtonPrompts(/* parameters unknown */);
protected:
	void DrawHead();
	void DrawLIVE_DEFAULT();
	void DrawLIVE_DIALOG();
	void DrawLIVE_ACTIONQ();
	void DrawLIVE_INFOUP();
	void DrawLIVE_PIMENU();
};

extern ERShader *DPadWin::m_pBack;
extern ERShader *DPadWin::m_pBack1;
extern ERShader *DPadWin::m_pBack2;
extern ERShader *DPadWin::m_pUpShdr;
extern ERShader *DPadWin::m_pDownShdr;
extern ERShader *DPadWin::m_pLeftShdr;
extern ERShader *DPadWin::m_pRightShdr;
extern ERShader *DPadWin::m_pDelqueueShdr;
extern ERShader *DPadWin::m_pJobShdr;
extern ERShader *DPadWin::m_pMoodShdr;
extern ERShader *DPadWin::m_pMovequeueShdr;
extern ERShader *DPadWin::m_pPersonalityShdr;
extern ERShader *DPadWin::m_pRelationshipsShdr;
extern ERShader *DPadWin::m_pBlankUp;
extern ERShader *DPadWin::m_pBlankDown;
extern ERShader *DPadWin::m_pBlankLeft;
extern ERShader *DPadWin::m_pBlankRight;
extern ERShader *DPadWin::m_pQuestion;
extern ERShader *DPadWin::m_pCancle;
extern bool DPadWin::m_bInit;
extern EVec2 _p2DpadOff;
extern EVec2 DPadWin_liveoff[3];
extern EVec2 DPadWin_pauseoff[3];
extern __vtbl_ptr_type DPadWin::Panelstateman virtual table[5];
extern __vtbl_ptr_type DPadWin virtual table[15];
extern __vtbl_ptr_type Panelstateman virtual table[5];

void DPadWin::~DPadWin(int __in_chrg);
void DrawDPadBack(ERC *prc, int player, Panelstate state, float alpha);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void Panelstateman::~Panelstateman(int __in_chrg);
void global constructors keyed to DPadWin::m_pBack();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_DPADWIN_H

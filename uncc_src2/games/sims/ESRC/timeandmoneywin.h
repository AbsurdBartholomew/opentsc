// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_TIMEANDMONEYWIN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_TIMEANDMONEYWIN_H

struct Panelstateman {
protected:
	Panelstate m_state;
public:
	__vtbl_ptr_type *$vf1676;
	
	Panelstateman& operator=();
	Panelstateman();
	Panelstateman();
	/* vtable[1] */ virtual Panelstateman(Panelstateman*, int, void);
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	Panelstate GetState();
	static bool GamePaused(/* parameters unknown */);
};

struct ESlideTextBox {
	bool m_bVis;
	float m_clock;
	EVec2 m_vStart;
	EVec2 m_vStop;
	EVec2 m_vCur;
	
	ESlideTextBox& operator=();
	ESlideTextBox();
	ESlideTextBox();
	ESlideTextBox(ESlideTextBox*, int, void);
	void Init();
	void Update();
	void Draw(ERC *prc, c16 *szText, int ijust, EVec4 &vColor);
};

struct TimeWindowAndPauseBar : Panelstateman {
protected:
	ERShader *m_pBackGround;
	ERShader *m_pPause_Speed_Indicators[6];
	ERFont *m_pFont;
	u16 *m_pszAm;
	u16 *m_pszPm;
	bool m_bSpeedOverride;
	bool m_bWasTwoPlayer;
	int m_butDownLastFrame;
	bool m_bAllAwakeAndVisible;
	float m_fSecondsSinceStopWatchStart;
	float m_fTotalStopWatchTime;
	
public:
	TimeWindowAndPauseBar& operator=();
	TimeWindowAndPauseBar();
	TimeWindowAndPauseBar();
	/* vtable[1] */ virtual TimeWindowAndPauseBar(TimeWindowAndPauseBar*, int, void);
	void Draw(ERC *prc);
	void Update();
	void UnPause();
	void Pause();
	void HandlePipEvent();
	/* vtable[2] */ virtual void SetState(Panelstate newstate);
	/* vtable[3] */ virtual void SetEvent(PanelEvent event, u32 data);
};

extern ESlideTextBox _topLBack;
extern ESlideTextBox _botRBack;
extern EVec2 _vspeed_l1off;
extern EVec2 _vspeed_r1off;
extern EVec2 _vPlayOff;
extern EVec2 _vPlay2xOff;
extern EVec2 _vPlay3xOff;
extern EVec2 _vTimeOff;
extern EVec2 _timewinpos;
extern EVec2 _time_row_2;
extern float _time_font_size;
extern EVec2 _vPauseStateOff;
extern EVec2 _vTimeStateOff;
extern EVec2 _vPauseStateOff2;
extern EVec2 _vTimeStateOff2;
extern __vtbl_ptr_type TimeWindowAndPauseBar virtual table[5];
extern __vtbl_ptr_type Panelstateman virtual table[5];

void TimeWindowAndPauseBar::~TimeWindowAndPauseBar(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void Panelstateman::~Panelstateman(int __in_chrg);
void global constructors keyed to _topLBack();
void global destructors keyed to _topLBack();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_TIMEANDMONEYWIN_H

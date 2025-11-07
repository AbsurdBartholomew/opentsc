// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_MEMORYMETERWIN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_MEMORYMETERWIN_H

struct EMemoryMeterWin : Panelstateman {
protected:
	u32 m_nMode;
	EVec2 m_vPos;
	EVec2 m_vSize;
	u32 m_nCurVal;
	u32 m_nCurPerformanceVal;
	u32 m_nPerformanceMax;
	u32 m_nObjectFloor;
	u32 m_nObjectRange;
	u32 m_nDisplayMax;
	float m_fTicker;
	EWindow *m_pClipWin;
	ERShader *m_pBlankShader;
	ERShader *m_pBarTopShader;
	ERShader *m_pBarMidShader;
	ERShader *m_pBarBotShader;
	ERShader *m_pBarTopHShader;
	ERShader *m_pBarMidHShader;
	ERShader *m_pBarBotHShader;
	ERShader *m_pIconWall;
	ERShader *m_pIconFence;
	ERShader *m_pIconMemory;
	ERFont *m_pFont;
	
public:
	EMemoryMeterWin& operator=();
	EMemoryMeterWin();
	EMemoryMeterWin();
	/* vtable[1] */ virtual EMemoryMeterWin(EMemoryMeterWin*, int, void);
	void Draw(ERC *prc);
	void Update();
	void Init();
	void Reset();
	bool GetAffordable(ObjSelector *sel);
	/* vtable[2] */ virtual void SetState(Panelstate newstate);
	/* vtable[3] */ virtual void SetEvent(PanelEvent event, u32 data);
};

extern __vtbl_ptr_type EMemoryMeterWin virtual table[5];
extern __vtbl_ptr_type Panelstateman virtual table[5];

void EMemoryMeterWin::~EMemoryMeterWin(int __in_chrg);
void Panelstateman::~Panelstateman(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_MEMORYMETERWIN_H

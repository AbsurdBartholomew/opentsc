// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_SIMHEAD_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_SIMHEAD_H

struct ESims3DHead : EUIObjectNode {
protected:
	static ERShader *m_pShd;
	static ERShader *m_pHeadBorder;
	static ERShader *m_pLbutton;
	static ERShader *m_pRbutton;
	static ERShader *m_pStatsBackTop;
	static ERShader *m_pStatsBackBot;
	E3DWindow m_win;
	cXPerson *m_pPerson;
	ESim *m_pESim;
	EMat4 m_mLastOrientMatrix;
	
public:
	ESims3DHead& operator=();
	ESims3DHead(ESim *pESim);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESims3DHead();
	ESims3DHead();
	/* vtable[1] */ virtual ESims3DHead(ESims3DHead*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void InitHead(cXPerson *pPerson);
	void SetModel();
	u16* GetName();
	void MakeSelected();
	static void InitShaders(/* parameters unknown */);
	static void ResetShaders(/* parameters unknown */);
	void Draw2D(ERC *prc, cXPerson *pSim);
};

extern float ESims3DHead_yfov;
extern float ESims3DHead_near;
extern float ESims3DHead_far;
extern ERShader *ESims3DHead::m_pShd;
extern ERShader *ESims3DHead::m_pHeadBorder;
extern ERShader *ESims3DHead::m_pLbutton;
extern ERShader *ESims3DHead::m_pRbutton;
extern ERShader *ESims3DHead::m_pStatsBackTop;
extern ERShader *ESims3DHead::m_pStatsBackBot;
extern float _p2head_xoff;
extern float _p1head_yoff;
extern float _button_yoff;
extern float _lbutton_xoff;
extern float _rbutton_xoff;
extern float _head_win_l;
extern float _head_win_r;
extern float _head_win_t;
extern float _head_win_b;
extern float _quick_stat_w;
extern float _quick_stat_h;
extern float _quick_stat_xoff;
extern float _quick_stat_yoff;
extern EVec2 _v3DHeadOff;
extern EVec2 _v3DHeadOffp1;
extern EVec2 _v3DHeadOffp2;
extern __vtbl_ptr_type ESims3DHead virtual table[15];
extern float moodfactor;

void ESims3DHead::~ESims3DHead(int __in_chrg);
EVec4& GetColor(float precent, EVec4 &blinkColor);
void global constructors keyed to ESims3DHead_yfov();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_SIMHEAD_H

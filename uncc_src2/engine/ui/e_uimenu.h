// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UIMENU_H
#define C__EOR_SRC2_ENGINE_UI_E_UIMENU_H

struct EUIMenu : EUIObjectNode {
protected:
	EUIObjectNode *m_pCurOpt;
	ERShader *m_pBackgroundShader;
	unsigned int m_maxBackShdrSize[2];
	u32 m_stick;
	s32 m_layout;
	s32 m_nOpts;
	s32 m_optJustx;
	s32 m_optJusty;
	int m_ActivatedPad;
	int m_pressed;
	f32 m_totalWidth;
	f32 m_totalHeight;
	f32 m_optgap;
	f32 m_yoff;
	f32 m_xoff;
	f32 m_pulseTime;
	bool m_bClampListTrav;
	int m_btnNext;
	int m_btnPrev;
	int m_choiceAxis;
	int m_stickDirFactor;
	float m_lastStickValue;
	
public:
	EUIMenu& operator=();
	EUIMenu(int _layout, int background_id, float optGap, float _yoff, float _xoff);
	EUIMenu();
	/* vtable[1] */ virtual EUIMenu(EUIMenu*, int, void);
	/* vtable[14] */ virtual void RemoveAllOpts();
	/* vtable[5] */ virtual void SetBoxDims(EVec2 &dims);
	/* vtable[6] */ virtual void SetBoxDims();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[12] */ virtual void AddChild(EUIObjectNode *pChild);
	/* vtable[15] */ virtual void RemoveOpt(EUIObjectNode *pOpt);
	/* vtable[16] */ virtual void AddOpt(EUIObjectNode *pOpt, EVec3 pos);
	/* vtable[17] */ virtual void SetPositions();
	/* vtable[18] */ virtual void SetCurOpt(EUIObjectNode *pOpt);
	/* vtable[19] */ virtual void SetLayout(int layout, int justx, int justy);
	/* vtable[9] */ virtual void OnButtonRepeat(int buttonId);
	/* vtable[10] */ virtual void OnStickRepeat(int stickId, int axisId, int direction);
	void SetOptGap(float gap);
	void SetYOffset(float yoff);
	void SetXOffset(float xoff);
	void SetPulseTime(float time);
	EUIObjectNode* GetCurOpt();
	int GetNOpts();
	int GetLayout();
	float GetOptGap();
	void InitBackground(u32 shaderid);
	void SetOptJust(int justx, int justy);
	/* vtable[20] */ virtual void SetStick(u32 stick);
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
protected:
	void SetupVertLayout();
	void SetupHorizLayout();
	void SetupWheelLayout();
	void ListForward(bool sound);
	void ListBackward(bool sound);
	int GetDirection();
	void SetListTravClamp(bool on);
	void ProcessStickAndButtonEvents(EControllerContext *pPadContext);
	/* vtable[23] */ virtual void ProcessStickAndButtonAutoRepeat(int ctrlIndex);
	void ProcessUserInput();
};

extern __vtbl_ptr_type EUIMenu virtual table[25];

void EUIMenu::~EUIMenu(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_UI_E_UIMENU_H

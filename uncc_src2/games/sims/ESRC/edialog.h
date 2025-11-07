// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EDIALOG_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EDIALOG_H

// warning: multiple differing types with the same name (enum constant not equal)
enum Status {
	kNotShownYet = 0,
	kWaitingForUser = 1,
	kUserClickedYes = 2,
	kUserClickedNo = 3,
	kUserClickedCancel = 4
};

struct EDialogWin {
protected:
	static ERShader *m_pIcon;
	static ERShader *m_pXIcon;
	static ERShader *m_pTriIcon;
	static ERShader *m_pCircIcon;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pBlackBoxBGBL;
	static ERShader *m_pBlackBoxBGBR;
	static ERShader *m_pBlackBoxBGTL;
	static ERShader *m_pBlackBoxBGTR;
	static ERShader *m_pBlackBoxBGML;
	static ERShader *m_pBlackBoxBGMR;
	static ERShader *m_pBlackBoxBGTC;
	static ERShader *m_pBlackBoxBGBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pMoreUpShd;
	static ERShader *m_pMoreDownShd;
	ObjMoverWrapper *m_mover;
	DialogStrContainer *m_pStrings;
	EDialog *m_pDialogMan;
	ETextEntryDialog *m_keyboard;
	DialogParam *m_pParams;
	EWindow *m_pWin;
	cXObject *fObject;
	ObjSelector *fSel;
	u32 m_curPlayerId;
	u32 m_butt;
	u32 fTemp;
	u32 fType;
	Status fStatus;
	SInt16 fStackObjectID;
	int m_nLinesScrolled;
	int m_nSkippedLines;
	bool m_bAllstringsVis;
	bool m_bTriggerUp;
	bool m_bTriggerDown;
	bool m_bUpToggle;
	bool m_bDownToggle;
	float m_fDPadUpTime;
	float m_fDPadDownTime;
	float m_fNextUpToggle;
	float m_fNextDownToggle;
public:
	__vtbl_ptr_type *$vf2218;
	
	EDialogWin& operator=();
	EDialogWin();
	EDialogWin();
	/* vtable[1] */ virtual EDialogWin(EDialogWin*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[2] */ virtual void SafeDelete();
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw(ERC *prc);
	cXObject* GetTheObject();
	/* vtable[5] */ virtual void GetEnteredText(BString2 &szOut);
	/* vtable[6] */ virtual void SetObject(ObjSelector *sel);
	/* vtable[7] */ virtual void SetObject();
	/* vtable[8] */ virtual void SetParams(StackElem *elem, DialogParam *param);
	/* vtable[9] */ virtual void PutPanelToSleep();
	static void DrawBigBox(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigBlackBox(/* parameters unknown */);
protected:
	TreeReturnCode ProcUserInput();
	bool GetBut(int mask);
	void Reset();
	int GetDestTemp();
	int GetType();
	void SetupDialog(bool b2player);
	void AssignMessageStrings(BString2 &str, bool b2player);
	static void AssignString(/* parameters unknown */);
	void DrawCancleNoYes(ERC *prc);
	void DrawNoYes(ERC *prc);
	void DrawYes(ERC *prc);
	void DrawText(ERC *prc, bool scroll);
};

extern EVec2 ObjMoverWrapper::vTopLeft;
extern EVec2 ObjMoverWrapper::vTopLeftMessage;
extern float ObjMoverWrapper::m_popupTime;
extern EVec2 ObjMoverWrapper::vWHDialog;
extern EVec2 ObjMoverWrapper::vWHMessageBack;
extern EVec2 ObjMoverWrapper::vWHMessageBox;
extern EVec2 ObjMoverWrapper::vWTitleBar;
extern EVec2 ObjMoverWrapper::vWPromptBar;
extern float ObjMoverWrapper::m_fontSize;
extern float __message_text_margin;
extern float DialogStrContainer::m_promptoff;
extern float DialogStrContainer::m_promptgap;
extern float DialogStrContainer::onTextGap;
extern float DialogStrContainer::m_titleoff;
extern float DialogStrContainer::onW;
extern ERShader *EDialogWin::m_pTextBoxBGBL;
extern ERShader *EDialogWin::m_pTextBoxBGBR;
extern ERShader *EDialogWin::m_pTextBoxBGTL;
extern ERShader *EDialogWin::m_pTextBoxBGTR;
extern ERShader *EDialogWin::m_pTextBoxBGML;
extern ERShader *EDialogWin::m_pTextBoxBGMR;
extern ERShader *EDialogWin::m_pTextBoxBGTC;
extern ERShader *EDialogWin::m_pTextBoxBGBC;
extern ERShader *EDialogWin::m_pBlackBoxBGBL;
extern ERShader *EDialogWin::m_pBlackBoxBGBR;
extern ERShader *EDialogWin::m_pBlackBoxBGTL;
extern ERShader *EDialogWin::m_pBlackBoxBGTR;
extern ERShader *EDialogWin::m_pBlackBoxBGML;
extern ERShader *EDialogWin::m_pBlackBoxBGMR;
extern ERShader *EDialogWin::m_pBlackBoxBGTC;
extern ERShader *EDialogWin::m_pBlackBoxBGBC;
extern ERShader *EDialogWin::m_pTextLineBGL;
extern ERShader *EDialogWin::m_pTextLineBGR;
extern ERShader *EDialogWin::m_pTextLineBGC;
extern ERShader *EDialogWin::m_pMoreUpShd;
extern ERShader *EDialogWin::m_pMoreDownShd;
extern ERShader *EDialogWin::m_pXIcon;
extern ERShader *EDialogWin::m_pTriIcon;
extern ERShader *EDialogWin::m_pCircIcon;
extern float _scrollinc;
extern float _dialog_prompt_yoff;
extern __vtbl_ptr_type EDialog virtual table[8];
extern __vtbl_ptr_type EDialogWin virtual table[11];
extern short unsigned int _edialogwinTextEntryBuffer[32];
extern short unsigned int __MessageBuff[128];

void EDialogWin::~EDialogWin(int __in_chrg);
bool Isspace(c16 wc);
void EDialog::~EDialog(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to ObjMoverWrapper::vTopLeft();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EDIALOG_H

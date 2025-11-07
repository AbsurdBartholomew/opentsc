// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_E2PDIALOG_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_E2PDIALOG_H

struct E2PDialog {
protected:
	int m_ControllerNum;
	bool m_DialogActive;
	bool m_Button1Down;
	bool m_Button2Down;
	bool m_Button3Down;
	bool m_Button4Down;
	BString2 m_TitleString;
	BString2 m_Choice1String;
	BString2 m_Choice2String;
	BString2 m_Choice3String;
	BString2 m_StatusString;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pCircIcon;
	ERShader *m_pSquareIcon;
	StackElem *m_pLastElem;
	DialogParam *m_pLastParam;
	cXObject *m_pLastObj;
public:
	__vtbl_ptr_type *$vf1024;
	
	E2PDialog& operator=();
	E2PDialog(int ControllerNum);
	E2PDialog();
	/* vtable[1] */ virtual E2PDialog(E2PDialog*, int, void);
	void Init();
	/* vtable[2] */ virtual TreeReturnCode SetParams(StackElem *elem, DialogParam *param, cXObject *pObj);
	void Update();
	void Draw(ERC *prc);
};

extern __vtbl_ptr_type E2PDialog virtual table[4];

void E2PDialog::~E2PDialog(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_E2PDIALOG_H

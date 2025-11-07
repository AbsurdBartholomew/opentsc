// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDPERSONALITEM_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDPERSONALITEM_H

struct ECharedPersonalItem : EUIObjectNode {
protected:
	u8 m_nNumBlocksFilled;
	float m_fLeftOffset;
	float m_fTotalWidth;
	EVec4 m_vLeftArrowColor;
	EVec4 m_vRightArrowColor;
	c16 *m_szDescription[2];
	ERFont *m_pFont;
	ERShader *m_pBlankShdr;
	ERShader *m_pLeftArrowShdr;
	ERShader *m_pRightArrowShdr;
	
public:
	ECharedPersonalItem& operator=();
	ECharedPersonalItem();
	ECharedPersonalItem();
	/* vtable[1] */ virtual ECharedPersonalItem(ECharedPersonalItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void Init();
	void CleanUp();
	void SetStrings(c16 *szOne, c16 *szTwo);
	int GetNumBlocksFilled();
	void SetNumBlocksFilled(int nNew);
	void NewLeftOffset(float fNewOffset);
	float GetLeftOffset();
	float GetTotalWidth();
};

struct ECharedBirthSign : EUIObjectNode {
protected:
	u8 m_nCurrentSign;
	c16 *m_szZodiacNames[13];
	ERFont *m_pFont;
	ERShader *m_pBlankShdr;
	ERShader *m_pLeftArrowShdr;
	ERShader *m_pRightArrowShdr;
	
public:
	ECharedBirthSign& operator=();
	ECharedBirthSign();
	ECharedBirthSign();
	/* vtable[1] */ virtual ECharedBirthSign(ECharedBirthSign*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void Init();
	void Cleanup();
	int GetCurrentSign();
	void SetSign(int nNewSign);
};

struct ECharedTextIcon : EUIObjectNode {
protected:
	u8 m_nCurrentState;
	float m_fLeftOffset;
	c16 *m_szLabel;
	c16 *m_szCurrentSelection;
	ERFont *m_pFont;
	ERShader *m_pBlankShdr;
	ERShader *m_pLeftArrowShdr;
	ERShader *m_pRightArrowShdr;
	
public:
	ECharedTextIcon& operator=();
	ECharedTextIcon();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void Init();
	void Cleanup();
	ECharedTextIcon();
	/* vtable[1] */ virtual ECharedTextIcon(ECharedTextIcon*, int, void);
	void NewLeftOffset(float fNewOffset);
	float GetLeftOffset();
};

struct ECharedName : ECharedTextIcon {
	ECharedName& operator=();
	ECharedName();
	/* vtable[1] */ virtual ECharedName(ECharedName*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void Init();
	void SetName(c16 *szNewName);
	ECharedName();
};

struct ECharedAge : ECharedTextIcon {
protected:
	bool m_bAllowTextChange;
	
public:
	ECharedAge& operator=();
	ECharedAge();
	/* vtable[1] */ virtual ECharedAge(ECharedAge*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void Init();
	void SetAge(bool bIsAdult);
	bool IsAdult();
	void AllowTextChange(bool bAllow);
	ECharedAge();
};

struct ECharedGender : ECharedTextIcon {
protected:
	bool m_bAllowTextChange;
	
public:
	ECharedGender& operator=();
	ECharedGender();
	/* vtable[1] */ virtual ECharedGender(ECharedGender*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void Init();
	void SetGender(bool bIsMale);
	bool IsMale();
	void AllowTextChange(bool bAllow);
	ECharedGender();
};

extern float _arrowpos;
extern __vtbl_ptr_type ECharedGender virtual table[15];
extern __vtbl_ptr_type ECharedAge virtual table[15];
extern __vtbl_ptr_type ECharedName virtual table[15];
extern __vtbl_ptr_type ECharedTextIcon virtual table[15];
extern __vtbl_ptr_type ECharedBirthSign virtual table[15];
extern __vtbl_ptr_type ECharedPersonalItem virtual table[15];

void ECharedPersonalItem::~ECharedPersonalItem(int __in_chrg);
void ECharedBirthSign::~ECharedBirthSign(int __in_chrg);
void ECharedTextIcon::~ECharedTextIcon(int __in_chrg);
void ECharedName::~ECharedName(int __in_chrg);
void ECharedAge::~ECharedAge(int __in_chrg);
void ECharedGender::~ECharedGender(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDPERSONALITEM_H

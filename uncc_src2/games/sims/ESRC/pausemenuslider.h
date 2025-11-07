// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMENUSLIDER_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMENUSLIDER_H

struct EPauseMenuSlider : EUIPrompt {
protected:
	u8 m_nDrawMode;
	u32 m_nMessage;
	float m_SlideTime;
	float m_DelayTime;
	float m_IconWidth;
	int m_bFinishedSlideOpen;
	EWindow *m_pWin;
	ERShader *m_pBlankShdr;
	ERShader *m_pTextBoxBGBC;
	ERShader *m_pTextBoxBGBL;
	ERShader *m_pTextBoxBGBR;
	static float SlideMaxTime;
	
public:
	EPauseMenuSlider& operator=();
	EPauseMenuSlider(char *str, EUIIconDef &icondef, EUITextIconDef &textdef, int fontId, EVec3 vPos);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseMenuSlider();
	/* vtable[1] */ virtual EPauseMenuSlider(EPauseMenuSlider*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void UpdateAnimation();
	void SetMessage(u32 nMessage);
	void CalculateIconWidth();
	float GetSliderWidth();
	static void SetSlideMaxTime(/* parameters unknown */);
	static float GetSlideMaxTime(/* parameters unknown */);
protected:
	void DrawNormal(ERC *prc);
	void DrawSliding(ERC *prc);
};

extern __vtbl_ptr_type EPauseMenuSlider virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];
extern float EPauseMenuSlider::SlideMaxTime;

void EPauseMenuSlider::~EPauseMenuSlider(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMENUSLIDER_H

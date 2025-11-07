// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDMENUITEMS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDMENUITEMS_H

struct ECharedTextMenuItem : EUIObjectNode {
protected:
	EVec4 m_vLeftArrowColor;
	EVec4 m_vRightArrowColor;
	c16 *m_szText;
	int m_nCurrentButton;
	u32 m_nNextMessage;
	u32 m_nPrevMessage;
	u32 m_nCameraMessage;
	ERFont *m_pFont;
	ERShader *m_pBlankShdr;
	ERShader *m_pLeftArrowShdr;
	ERShader *m_pRightArrowShdr;
	
public:
	ECharedTextMenuItem& operator=();
	ECharedTextMenuItem();
	ECharedTextMenuItem();
	/* vtable[1] */ virtual ECharedTextMenuItem(ECharedTextMenuItem*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void Init();
	void CleanUp();
	void SetText(c16 *szText);
	void SetMessages(u32 nNext, u32 nPrev);
	void SetCameraMessage(u32 nNew);
	u32 GetCameraMessage();
	float GetWidth();
};

struct ECharedDiamondMenuItem : EUIObjectNode {
protected:
	float m_fDiamondRot;
	EVec3 m_vDiamondPos;
	u8 m_nSimIndex;
	u8 m_nSelectedMessage;
	ERModel *m_pDiamondModel;
	
public:
	ECharedDiamondMenuItem& operator=();
	ECharedDiamondMenuItem(int nMessage);
	ECharedDiamondMenuItem();
	/* vtable[1] */ virtual ECharedDiamondMenuItem(ECharedDiamondMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void SetPosition(EVec3 vNewPos);
	void SetCharacterIndex(int nNewIndex);
	int GetSimIndex();
	EVec2 GetPosition();
};

extern __vtbl_ptr_type ECharedDiamondMenuItem virtual table[15];
extern __vtbl_ptr_type ECharedTextMenuItem virtual table[15];

void ECharedDiamondMenuItem::~ECharedDiamondMenuItem(int __in_chrg);
void ECharedTextMenuItem::~ECharedTextMenuItem(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDMENUITEMS_H

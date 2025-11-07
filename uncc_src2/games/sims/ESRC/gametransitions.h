// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_GAMETRANSITIONS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_GAMETRANSITIONS_H

struct EGenericTrans {
protected:
	EWindow *m_pWin;
	ERShader *m_pImages[1];
	bool m_ImageUsed[1];
	char m_TextMsgs[11][64];
	bool m_TextMsgUsed[11];
	int m_NumImages;
	int m_NumTextMsgs;
	int m_CurrentSlide;
	int m_LastTextMsg;
	int m_CurrentMsg;
	int m_NextMsg;
	float m_LastDisplacement;
	float m_dtImageAccumulator;
	float m_dtTextAccumulator;
	float m_TextWaitTime;
	float m_TextFlashingAccumulator;
	bool m_FirstSlide;
	ERFont *m_pFont;
	
public:
	EGenericTrans& operator=();
	EGenericTrans();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EGenericTrans();
	EGenericTrans(EGenericTrans*, int, void);
	void Initialize(int ToState);
	void Update(ERC *prc, int finalScreen);
	void Reset();
};

void EGenericTrans::~EGenericTrans(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_GAMETRANSITIONS_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJTILEBOUNDRECT_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJTILEBOUNDRECT_H

struct EIObjTileBoundRect {
protected:
	EVec4 m_vLRBT;
	
public:
	EIObjTileBoundRect& operator=();
	EIObjTileBoundRect();
	EIObjTileBoundRect();
	EIObjTileBoundRect();
	EIObjTileBoundRect();
	EIObjTileBoundRect();
	EIObjTileBoundRect(EIObjTileBoundRect*, int, void);
	void Set(EVec2 &vIn);
	void Set();
	void Set();
	void Set();
	void Set();
	void Set();
	void AddTilePt(EVec2 &cPt);
	void AddTilePt();
	void MirrorYX();
	void GetCenter(EVec2 &vOut);
	bool PtInRect(CTilePt &cPt);
	float GetW();
	float GetH();
	bool PtInRect();
	bool Overlap(EIObjTileBoundRect &r);
	void Scale(float xs, float ys);
};

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJTILEBOUNDRECT_H

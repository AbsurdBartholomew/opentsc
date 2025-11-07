// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_CTILEPT_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_CTILEPT_H

struct TilePt {
	Int x;
	Int y;
};

struct CTilePt {
	SInt8 mX;
	SInt8 mY;
	SInt8 mLevel;
	static CTilePt sDirections[8];
	
	CTilePt(TilePtDir inDir, int inLevel);
	EVec3 GetEVec3M();
	EVec3 GetEVec3();
	float GetXf();
	float GetYf();
	static TilePtDir GetDirection(/* parameters unknown */);
	CTilePt();
	CTilePt();
	CTilePt();
	CTilePt();
	CTilePt();
	CTilePt();
	CTilePt(CTilePt*, int, void);
	CTilePt& operator=(CTilePt &in);
	bool operator==(CTilePt &in);
	bool operator!=(CTilePt &in);
	bool operator<(CTilePt &in);
	CTilePt& operator+=(CTilePt &in);
	CTilePt& operator-=(CTilePt &in);
	CTilePt& operator*=(int inFactor);
	CTilePt operator*(int inFactor);
	CTilePt operator+(CTilePt &in);
	CTilePt operator-(CTilePt &in);
	int GetRow();
	int GetColumn();
	bool IsoCompare(CTilePt &in);
	bool IsNorthOf(CTilePt &in);
	bool IsSouthOf(CTilePt &in);
	bool IsWestOf(CTilePt &in);
	bool IsEastOf(CTilePt &in);
	bool SameRowParity(CTilePt &in);
	bool SameColumnParity(CTilePt &in);
	TilePt ToTilePt();
	FTilePt ToFTilePt();
	int GetX();
	int GetY();
	void Get(int *outX, int *outY, int *outLevel);
	void Get();
	int SetX(int x);
	int SetY(int y);
	void Set(int x, int y, int level);
	void Set();
	int GetLevel();
	void SetLevel(CTilePt &in);
	void SetLevel();
};

extern CTilePt CTilePt::sDirections[8];

void CTilePt::~CTilePt(int __in_chrg);
CTilePt operator*(int a, CTilePt &b);
CTGDump& operator<<(CTGDump &This, CTilePt &in);
void global constructors keyed to CTilePt::CTilePt();
void global destructors keyed to CTilePt::CTilePt();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_CTILEPT_H

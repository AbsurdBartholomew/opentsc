// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_PIECEWISE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_PIECEWISE_H

struct PiecewisePt {
	float fX;
	float fY;
};

struct PiecewiseFn {
private:
	PiecewisePt *fPoints;
	float *fReciprocals;
	int fNumPoints;
	int fMaxPoints;
	
	void UpdateReciprocals();
public:
	PiecewiseFn();
	PiecewiseFn(PiecewiseFn*, int, void);
	PiecewiseFn& operator=();
	PiecewiseFn();
	void Reset();
	void SetMaxPoints(int maxPoints);
	void AddPoint(PiecewisePt &inPt);
	void AddPointsFromText(char *pointList);
	float GetValue();
};

void PiecewiseFn::~PiecewiseFn(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_PIECEWISE_H

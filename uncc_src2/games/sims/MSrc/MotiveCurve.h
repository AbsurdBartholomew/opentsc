// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVECURVE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVECURVE_H

struct MotiveCurve : PiecewiseFn {
private:
	Int fMotive;
	
public:
	MotiveCurve& operator=();
	MotiveCurve();
	MotiveCurve(MotiveCurve*, int, void);
	MotiveCurve();
	void SetMotive(MotiveCurve*, int, void);
	Int GetMotive();
};

struct MotiveCurveSet {
private:
	MotiveCurve *fCurves;
	int fNumCurves;
	
public:
	MotiveCurveSet& operator=();
	MotiveCurveSet();
	MotiveCurveSet();
	void PrintMotiveGraph(char *filename);
	void PrintMotiveGraph();
	void LoadFromFile(iResFile *file, SInt16 id);
	int size();
	MotiveCurve* begin();
	MotiveCurve* end();
	MotiveCurve& operator[]();
};

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVECURVE_H

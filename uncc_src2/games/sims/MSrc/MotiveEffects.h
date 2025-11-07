// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVEEFFECTS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVEEFFECTS_H

struct TreeTableAd {
	StdPrm fPersonalityAd;
	StdPrm fMin;
	StdPrm fRange;
	
	TreeTableAd& operator=();
	TreeTableAd();
	TreeTableAd();
	Int GetPersonalityAd();
	Int GetMin();
	Int GetMax();
	void SetMax();
	Int GetRange();
};

struct MotiveCurveArray<9> : MotiveCurveSet {
private:
	MotiveCurve fCurveArray[9];
};

struct MotiveEffects : MotiveCurveArray<9> {
private:
	cXPerson *fPerson;
	Motives *fMotives;
	
public:
	MotiveEffects& operator=();
	MotiveEffects(cXPerson *person);
	MotiveEffects(MotiveEffects*, int, void);
	MotiveEffects();
	float GetCurrentScore();
	float GetInteractionScore(TreeTableAd *ads);
};


#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVEEFFECTS_H

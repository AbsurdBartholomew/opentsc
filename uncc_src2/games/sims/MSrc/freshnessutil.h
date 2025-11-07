// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_FRESHNESSUTIL_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_FRESHNESSUTIL_H

struct cFreshCell {
	u32 sampleID;
	u8 m_bUseFastTimer;
	Sint32 m_lVol;
	Sint32 m_lPanX;
	Sint32 m_lPanZ;
	u8 m_bVolIsRandom;
	u8 m_bPanIsRandom;
	Sint32 m_lFadeInTime;
	Sint32 m_lFadeOutTime;
	Sint32 m_lStartDelay;
	Sint32 m_lProbability;
	u8 m_bDelayIsRandom;
	Sint32 m_lLoopLength;
	Sint32 m_lQuantize;
	u8 m_bSampleLooped;
	Sint32 m_lRandPitchShiftLow;
	Sint32 m_lRandPitchShiftHigh;
	Sint32 m_lGroupId;
	u8 m_bStereoSample;
};

struct cFreshArray {
	cFreshCell a[26][14];
};

struct cFreshScore {
	Sint32 m_lVol;
	Sint32 m_lPriority;
	Sint32 m_lMinCellsPlaying;
	Sint32 m_lMaxCellsPlaying;
	Sint32 m_lMinCellsXDiff;
	Sint32 m_lMinCellsYDiff;
	Sint32 m_lSelectionAreaMaxYDistance;
	Sint32 m_lSelectionAreaMaxXDistance;
	Sint32 m_lTempo;
	Sint32 m_lBeatsPerBar;
	Sint32 m_lInputQuantizeX;
	Sint32 m_lInputQuantizeY;
	Sint32 m_lInitialXPos;
	Sint32 m_lInitialYPos;
	ERQuickdata *m_pFreshData;
	cFreshArray *m_pFreshArray;
	
	cFreshScore& operator=();
	cFreshScore();
	cFreshScore();
	cFreshScore(cFreshScore*, int, void);
	bool LoadScore();
	cFreshCell* GetCell(int y, int x);
};

// warning: multiple differing types with the same name (enum constant not equal)
enum Status {
	kNotPlaying = 0,
	kWaitingForReadAhead = 1,
	kWaitingForStart = 2,
	kDelayingStart = 3,
	kPlaying = 4,
	kFading = 5
};

struct cFreshCellPlayer {
	cFreshPlayer *m_pFreshPlayer;
	cIGZSnd *m_pSnd;
	Status m_eState;
	cFreshCell *m_pCell;
	Sint32 m_lLoopTimer;
	bool m_bHasFastTimerRef;
	bool m_bKillMe;
protected:
	bool m_bIsDead;
	
public:
	cFreshCellPlayer& operator=();
	cFreshCellPlayer(cFreshPlayer *pFreshPlayer);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	cFreshCellPlayer();
	bool Start(cFreshCell *pCell);
	void Update(bool bTooMuchError, Sint32 lBeatNum);
	bool Stop();
	bool Kill();
	bool SetVol(Sint32 lVol);
	bool IsPlaying();
	bool IsBusy();
	bool IsDead();
	void SetDead();
	void UpdatePan();
	bool NeedFastTimerNextBeat(Sint32 lNextBeatNum);
};

extern double afFreqMult[13];
extern double fMultFactor;
extern Sint32 lSlamQuadrant;

void cFreshScore::~cFreshScore(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_FRESHNESSUTIL_H

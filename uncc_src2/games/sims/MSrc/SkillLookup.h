// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_SKILLLOOKUP_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_SKILLLOOKUP_H

typedef AnimRef *SkillNameID;

enum StdAnimIdx {
	kAnimBlank = 0,
	kAnimSittingLoop = 1,
	kAnimSittingFloorLoop = 2,
	kAnimStandingLoop = 3,
	kAnimStandingTurn180CW = 4,
	kAnimStandingTurn180CCW = 5,
	kAnimStandingTurn90CW = 6,
	kAnimStandingTurn90CCW = 7,
	kAnimStandingTurn45CW = 8,
	kAnimStandingTurn45CCW = 9,
	kAnimStandingTurn0 = 10,
	kAnimStandingAdjustN = 11,
	kAnimStandingAdjustNW = 12,
	kAnimStandingAdjustNE = 13,
	kAnimStandingAdjustW = 14,
	kAnimStandingAdjustE = 15,
	kAnimStandingAdjustSW = 16,
	kAnimStandingAdjustSE = 17,
	kAnimStandingAdjustS = 18,
	kAnimWalkingStart = 19,
	kAnimWalkingLoop = 20,
	kAnimRunningLoop = 21,
	kAnimRunningStart = 22,
	kAnimRunningStop = 23,
	kAnimWalkingFastLoop = 24,
	kAnimWalkingHalfLoop = 25,
	kAnimWalkingQuarterLoop = 26,
	kAnimWalkingStopLeft = 27,
	kAnimWalkingStopRight = 28,
	kAnimWalkingTurn90CWLeft = 29,
	kAnimWalkingTurn90CWRight = 30,
	kAnimWalkingTurn90CCWLeft = 31,
	kAnimWalkingTurn90CCWRight = 32,
	kAnimWalkingTurn45CWLeft = 33,
	kAnimWalkingTurn45CWRight = 34,
	kAnimWalkingTurn45CCWLeft = 35,
	kAnimWalkingTurn45CCWRight = 36,
	kAnimPlaceholder = 37,
	kAnimRightArmCarry = 38,
	kAnimCount = 39
};

enum ReachAnimIdx {
	kReachBlank = 0,
	kReachFloor = 1,
	kReachFloorSeated = 2,
	kReachSeat = 3,
	kReachSeatSeated = 4,
	kReachTable = 5,
	kReachTableSeated = 6,
	kReachCounter = 7,
	kReachCounterSeated = 8,
	kReachMouth = 9,
	kReachMouthSeated = 10,
	kReachCount = 11
};


void InitSkillLookup();
void DestroySkillLookup();
TreeReturnCode GetStdAnimRef(cXPerson *p, StdAnimIdx idx, SkillNameID &name);
TreeReturnCode GetReachAnimRef(cXPerson *p, ReachAnimIdx idx, SkillNameID &name);
TreeReturnCode GetMiscAnimRef(cXPerson *p, int idx, SkillNameID &name);
TreeReturnCode GetObjectAnimRef(cXObject *obj, cXPerson *p, int idx, bool c2a, SkillNameID &name);
TreeReturnCode GetPersonStockAnimRef(cXPerson *p, int idx, SkillNameID &name);
TreeReturnCode GetGlobalAnimRef(cXPerson *p, int idx, SkillNameID &name);
AnimTable* GetLegacyPersonSkillTable();
AnimTable* GetLegacyGlobalSkillTable();
AnimTable* GetMiscSkillTable();
void GlobalSkillTables::~GlobalSkillTables(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_SKILLLOOKUP_H

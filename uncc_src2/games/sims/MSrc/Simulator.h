// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_SIMULATOR_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_SIMULATOR_H

enum ExpenseType {
	kExp_Misc = 0,
	kExp_JobIncome = 1,
	kExp_MiscIncome = 2,
	kExp_Food = 3,
	kExp_Bills = 4,
	kExp_Maint = 5,
	kExp_Purchases = 6,
	kExp_Architecture = 7,
	kExp_Count = 8
};

struct ExpenseReport {
private:
	int fSpent[8];
	
public:
	ExpenseReport& operator=();
	ExpenseReport();
	ExpenseReport();
	void reset();
	void Spend();
	Int GetSpent();
	void SetSpent();
};

enum TimeOfDay {
	kTimeOfDay_Day = 0,
	kTimeOfDay_Dusk = 1,
	kTimeOfDay_Night = 2,
	kTimeOfDay_Dawn = 3
};

enum SimSpeed {
	kSpeedMed = 0,
	kSpeedSlow = -1,
	kSpeedFast = -2,
	kSpeedVeryFast = -3
};

// warning: multiple differing types with the same name (enum constant not equal)
enum Mode {
	kSimMode = 0,
	kBuildMode = 1,
	kBuyMode = 2,
	kOptionsMode = 3,
	kCameraMode = 4
};

struct cSimulatorImpl : cSimulator, Commander {
	short int fSimGlobals[42];
	SInt32 fFunds;
	SInt32 fPendingFunds;
	SInt32 fTicks;
	Int fLotValue;
	Int fObjectsValue;
	Int fArchValue;
	UInt32 fRandSeed;
	SimLoopProbe *fProbe;
	float fElapsed;
	float fOrigDt;
	float m_fSecondsSinceStopWatchStart;
	float m_fTotalStopWatchTime;
	ExpenseReport fExpHistory[5];
	ExpenseReport fExpenses;
	int fCurObjectID;
	bool fInsideSimulate;
	
	cSimulatorImpl& operator=();
	cSimulatorImpl();
	TimeOfDay ComputeTimeOfDay();
	bool TickAllObjects();
	bool SimulateOneTick();
	cSimulatorImpl();
	/* vtable[1] */ virtual cSimulatorImpl(cSimulatorImpl*, int, void);
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Simulate();
	/* vtable[4] */ virtual SInt16 GetGlobal(SInt16 index);
	/* vtable[5] */ virtual void SetGlobal(SInt16 index, SInt16 newValue);
	/* vtable[6] */ virtual void SetSpeed(SimSpeed speed);
	/* vtable[7] */ virtual SimSpeed GetSpeed();
	/* vtable[8] */ virtual void Pause();
	/* vtable[9] */ virtual void Resume();
	/* vtable[10] */ virtual bool IsPaused();
	/* vtable[11] */ virtual bool IsStopped();
	/* vtable[12] */ virtual Mode GetMode();
	/* vtable[13] */ virtual void SetMode(Mode mode);
	/* vtable[14] */ virtual Boolean DoCommand(SInt16 com, SInt32 info);
	/* vtable[15] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[16] */ virtual SInt32 GetFunds();
	/* vtable[17] */ virtual void Spend(ExpenseType expType, SInt32 amount);
	/* vtable[18] */ virtual void GetTodaysExpenses(ExpenseReport *outReport);
	/* vtable[19] */ virtual void GetPreviousExpenses(int days_back, ExpenseReport *outReport);
	/* vtable[20] */ virtual void GetExpensesHistory(ExpenseReport *outReport);
	/* vtable[21] */ virtual int GetDaysRunning();
	/* vtable[22] */ virtual void SetFunds(SInt32 newFunds);
	/* vtable[23] */ virtual void ClearHistory();
	/* vtable[24] */ virtual void SetCurrentHour(Int newHour);
	/* vtable[25] */ virtual SInt32 GetTicks();
	/* vtable[26] */ virtual TimeOfDay GetTimeOfDay();
	/* vtable[27] */ virtual void SetTimeOfDay(TimeOfDay inTime);
	/* vtable[28] */ virtual bool GetTutorialOn();
	/* vtable[29] */ virtual Int GetLotValue();
	/* vtable[30] */ virtual void SetLotValue(Int lotValue);
	/* vtable[31] */ virtual Int GetArchValue();
	/* vtable[32] */ virtual void SetArchValue(Int archValue);
	/* vtable[33] */ virtual Int GetObjectsValue();
	/* vtable[34] */ virtual void SetObjectsValue(Int objectsValue);
	/* vtable[35] */ virtual SimLoopProbe* GetProbe();
	/* vtable[36] */ virtual void SetProbe(SimLoopProbe *probe);
	/* vtable[37] */ virtual void RestoreTrueDt();
};

extern __vtbl_ptr_type cSimulatorImpl::Commander virtual table[4];
extern __vtbl_ptr_type cSimulatorImpl virtual table[39];
extern __vtbl_ptr_type cSimulator virtual table[39];

void cSimulatorImpl::~cSimulatorImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void cSimulator::~cSimulator(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_SIMULATOR_H

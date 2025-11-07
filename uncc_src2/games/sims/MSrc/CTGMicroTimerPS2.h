// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_CTGMICROTIMERPS2_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_CTGMICROTIMERPS2_H

typedef long int Sint64;
typedef long int _LARGE_INTEGER;

struct CTGMicroTimer {
private:
	Sint64 mStart;
	Sint64 mStop;
	Sint64 mFrequency;
	int mIsRunning;
	
public:
	CTGMicroTimer& operator=();
	CTGMicroTimer();
	CTGMicroTimer();
	CTGMicroTimer(CTGMicroTimer*, int, void);
	void Start();
	void Stop();
	Sint64 GetElapsedTime();
	Sint64 GetElapsedTicks();
	Sint64 GetClockSpeed();
	int IsRunning();
};


int QueryPerformanceFrequency(_LARGE_INTEGER *freq);
void QueryPerformanceCounter(_LARGE_INTEGER *tempNow);
void InitPerformanceCounter();
Uint32 GetTimeDate();
int timeGetTime();
void global constructors keyed to CTGMicroTimer::GetElapsedTime();
void global destructors keyed to CTGMicroTimer::GetElapsedTime();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_CTGMICROTIMERPS2_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_ENGINE_H
#define C__EOR_SRC2_ENGINE_E_ENGINE_H

struct EEngine : EGlobalManagerClient {
protected:
	bool m_initialized;
	bool m_frameRateSmoothing;
	EClock m_frameClock;
	EEvent m_frameEvent;
	EClock m_cpuClock;
	int m_retraceHistoryCpu[3];
	int m_retraceHistoryRend[3];
	int m_retraceHistoryPos;
	
public:
	EEngine& operator=();
	EEngine();
	EEngine();
	/* vtable[1] */ virtual EEngine(EEngine*, int, void);
	/* vtable[4] */ virtual bool Init();
	/* vtable[5] */ virtual void EnterMovieMode();
	/* vtable[6] */ virtual void ExitMovieMode();
	/* vtable[7] */ virtual void PreFrameUpdate();
	/* vtable[8] */ virtual void PostFrameUpdate();
	void FrameComplete();
	/* vtable[9] */ virtual void Idle();
	void EnableFrameRateSmoothing(bool enable);
	int GetMinRatraces();
	/* vtable[10] */ virtual void ShutdownThreads();
	/* vtable[11] */ virtual void Reboot();
protected:
	/* vtable[12] */ virtual bool InitSubsystems();
	/* vtable[13] */ virtual bool InitFileSystem();
	/* vtable[14] */ virtual bool InitResourceManagers();
	/* vtable[15] */ virtual void ShutdownResourceManagers();
	/* vtable[2] */ virtual bool ManagedStartup();
	/* vtable[3] */ virtual void ManagedShutdown();
	void PrintBanner();
	void PrintConfiguration();
	void Line();
	void RetraceUpdate(float frameTime);
};

extern int _evenodd;
extern int _framecount;
extern int _retracecount;
extern int _d_retraces;
extern float _dt;
extern float _invdt;
extern int _fps;
extern float _cputime;
extern float _rendtime;
extern double _time;
extern EClock _sysclock;
extern EMat4 _mId;
extern EQuat _qId;
extern EVec3 _vZero;
extern EVec3 _vAxes[3];
extern __vtbl_ptr_type EEngine virtual table[17];
extern __vtbl_ptr_type EGlobalManagerClient virtual table[5];
extern float _retracetime;

void EEngine::~EEngine(int __in_chrg);
void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg);
void global constructors keyed to _evenodd();
void global destructors keyed to _evenodd();

#endif // C__EOR_SRC2_ENGINE_E_ENGINE_H

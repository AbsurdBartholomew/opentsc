/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/util/e_globalmanager.h"
#include "engine/e_clock.h"

#include "games/sims/ESRC/e_semaphore.h"

struct EEvent {
protected:
	ESemaphore m_sema;
	
public:
	EEvent();
	bool Wait();
	void Signal();
	void iSignal();
	void Clear();
};

class EEngine : EGlobalManagerClient
{
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
	EEngine();
	virtual bool Init();
	virtual void EnterMovieMode();
	virtual void ExitMovieMode();
	virtual void PreFrameUpdate();
	virtual void PostFrameUpdate();
	void FrameComplete();
	virtual void Idle();
	void EnableFrameRateSmoothing(bool enable);
	int GetMinRatraces();
	virtual void ShutdownThreads();
	virtual void Reboot();

protected:
	virtual bool InitSubsystems();
	virtual bool InitFileSystem();
	virtual bool InitResourceManagers();
	virtual void ShutdownResourceManagers();
	virtual bool ManagedStartup();
	virtual void ManagedShutdown();
	void PrintBanner();
	void PrintConfiguration();
	void Line();
	void RetraceUpdate(float frameTime);
};
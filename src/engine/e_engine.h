/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "engine/e_clock.h"

class EEngine // : EGlobalManagerClient
{
protected:
	bool m_initialized;
	bool m_frameRateSmoothing;
	EClock m_frameClock;
	//EEvent m_frameEvent;
	EClock m_cpuClock;
	int m_retraceHistoryCpu[3];
	int m_retraceHistoryRend[3];
	int m_retraceHistoryPos;


};
/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

enum EMetricType {
	E_METRIC_FLOAT = 0,
	E_METRIC_INT = 1,
	E_METRIC_PTR = 2
};

struct EMetricValue {
	void *pValue;
	char *szDescription;
	EMetricType type;
	EMetricValue *pLast;
	EMetricValue *pNext;
};

template <class T, int, int> class TLinkedList
{

};
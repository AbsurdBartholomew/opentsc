// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_METRICS_H
#define C__EOR_SRC2_ENGINE_E_METRICS_H

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

struct TLinkedList<EMetricValue,12,16> {
protected:
	EMetricValue *m_pHead;
	EMetricValue *m_pTail;
	
public:
	TLinkedList<EMetricValue,12,16>& operator=();
	TLinkedList();
	TLinkedList();
	static EMetricValue*& Last(/* parameters unknown */);
	static EMetricValue*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EMetricValue* Head();
	EMetricValue* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct EMetrics {
protected:
	bool m_enable;
	float m_maxWidth;
	bool m_maxWidthNeedsComputing;
	TLinkedList<EMetricValue,12,16> m_metricList;
	
public:
	EMetrics& operator=();
	EMetrics();
	EMetrics();
	EMetricValue* Add();
	EMetricValue* Add();
	EMetricValue* Add();
	void Remove(EMetricValue *pMetric);
	void Draw();
	void Enable();
protected:
	EMetricValue* AddByType(void *pValue, char *szDescription, EMetricType type);
	void ComputeMaxWidth(ERFont *pFont);
};

extern EMetrics _metrics;

void global constructors keyed to _metrics();

#endif // C__EOR_SRC2_ENGINE_E_METRICS_H

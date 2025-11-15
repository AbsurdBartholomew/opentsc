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

template <class T, int a, int b> class TLinkedList
{
public:
	T *m_pHead;
	T *m_pTail;

	int x = a;
	int y = b;

public:
	TLinkedList()
	{
		Init();
	}

	static T*& Last(T* node)
	{

	}

	static T*& Next(T* node)
	{

	}

	void Init()
	{
		x = 0;
		y = 0;
	}

	void RemoveAll()
	{

	}

	T* Head()
	{

	}

	T* Tail()
	{

	}

	bool IsEmpty()
	{

	}

	void AddHead()
	{

	}

	void AddTail()
	{

	}

	void InsertBefore()
	{

	}

	void InsertAfter()
	{

	}

	void Remove()
	{

	}

	void Delete()
	{

	}

	void DeleteAll()
	{

	}

	void SafeDeleteAll()
	{

	}

	void SetHeadAndTail()
	{

	}

	int GetSize()
	{

	}

	int GetCount()
	{
		
	}
};
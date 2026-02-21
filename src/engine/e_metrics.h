/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

//#include "engine/memory/e_memman.h"

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
public: // protected:
	T *m_pHead;
	T *m_pTail;

	int count;

	int x = a;
	int y = b;

public:
	TLinkedList()
	{
		Init();
	}

	static T*& Last(T* node)
	{
		return node->m_pTail;
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
		_memmanFree(m_pHead);
		_memmanFree(m_pTail);
	}

	T* Head()
	{
		return m_pHead;
	}

	T* Tail()
	{
		return m_pTail;
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
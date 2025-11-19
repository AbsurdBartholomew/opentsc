/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once
#include "engine/e_metrics.h"
#include "common/types.h"

typedef u32 NLData;

struct NLIteratorPtrType 
{ // PlaceHolder Structure
};

typedef NLIteratorPtrType *NLIterator;

class ENodeListNode {
	//NLData data;
	ENodeListNode *pLast;
	ENodeListNode *pNext;
	
	ENodeListNode& operator=(ENodeListNode) { ; }
	ENodeListNode();
};
typedef TLinkedList<ENodeListNode,4,8> ENodeListList;

class ENodeList
{
protected:
    ENodeListList m_l;
	static NLIterator Last(/* parameters unknown */);
	static NLIterator Next(/* parameters unknown */);
	static bool IsValid(/* parameters unknown */);
	static NLData GetData(/* parameters unknown */);
	NLIterator Head();
	NLIterator Tail();
	bool IsEmpty();
	void Init();
	NLIterator Search(NLData data);
	void Remove(NLIterator i);
	void RemoveAll();
	void FreeAll();
	NLIterator AddHead(ENodeList &list);
	NLIterator AddTail(ENodeList &list);
	//void AddHead();
	//void AddTail();
	NLIterator InsertBefore(NLIterator target, NLData data);
	NLIterator InsertAfter(NLIterator target, NLData data);
	int GetSize();
	int GetCount();
	void MoveContents(ENodeList &source);
};

template <typename T> struct TNodeList : public ENodeList {
	TNodeList() { ; }

	static u32 GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	//TNodeList<T>& operator=();
	void MoveContents();
};
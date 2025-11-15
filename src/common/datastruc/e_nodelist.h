/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once
#include "engine/e_metrics.h"
#include "common/types.h"

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
};

template <typename T> struct TNodeList : public ENodeList {
	TNodeList();
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
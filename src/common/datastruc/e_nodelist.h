/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once
#include "engine/e_metrics.h"

class ENodeListNode {
	//NLData data;
	ENodeListNode *pLast;
	ENodeListNode *pNext;
	
	ENodeListNode& operator=(ENodeListNode) { ; }
	ENodeListNode();
	//static void* operator new(/* parameters unknown */);
	//static void operator delete(/* parameters unknown */);
};
typedef TLinkedList<ENodeListNode,4,8> ENodeListList;

class ENodeList
{
protected:
    //ENodeListList m_l;
};
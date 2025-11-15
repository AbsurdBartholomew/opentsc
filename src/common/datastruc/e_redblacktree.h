/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once
#include "common/types.h"
#include "engine/e_metrics.h"

struct RBIteratorPtrType // can't find a definition for this struct anywhere ???
{

};

typedef u32 RBKey;
typedef u32 RBValue;
typedef RBIteratorPtrType *RBIterator;

enum RBNodeColor
{
    RB_BLACK = 0,
    RB_RED = 1
};

struct ERedBlackTreeNode
{
    ERedBlackTreeNode *pLeft;
    ERedBlackTreeNode *pRight;
    ERedBlackTreeNode *pParent;
    ERedBlackTreeNode *pLast;
    ERedBlackTreeNode *pNext;
    RBNodeColor color;
    RBKey key;
    RBValue value;
};

typedef TLinkedList<ERedBlackTreeNode, 12, 16> ERedBlackTreeNodeList;

struct ERedBlackTree
{
protected:
    ERedBlackTreeNodeList m_list;
    ERedBlackTreeNode *m_pRoot;
    static ERedBlackTreeNode m_sentinel;

public:
    ERedBlackTree(ERedBlackTree &s);
    ERedBlackTree();
    static bool IsValid(/* parameters unknown */);

    //ERedBlackTree &operator=(ERedBlackTree &s);
    //bool operator==(ERedBlackTree &s);
    //bool operator!=();
    //RBValue operator[](RBKey key);
    //RBValue &operator[]();

    RBIterator Insert(RBKey key, RBValue value, bool allowDuplicates);
    RBIterator Find(RBKey key, RBValue *pOutValue);
    RBIterator FindFirst(RBKey key, RBValue *pOutValue);
    RBIterator FindNext(RBIterator i, RBValue *pOutValue);

    bool Remove(RBIterator i);
    void Remove();
    void RemoveAll();
    void FreeAll();

    static RBIterator Last(/* parameters unknown */);
    static RBIterator Next(/* parameters unknown */);

    RBIterator Head();
    RBIterator Tail();

    bool IsEmpty();

    RBIterator SetValue(RBKey key, RBValue value);
    static void SetValue(/* parameters unknown */);
    void SetValues(ERedBlackTree &s, bool allowDuplicates);
    static RBKey GetKey(/* parameters unknown */);
    static RBValue GetValue(/* parameters unknown */);
    int GetSize();
    ERedBlackTreeNodeList *GetList();

protected:
    void Init();

    void RotateLeft(ERedBlackTreeNode *x);
    void RotateRight(ERedBlackTreeNode *x);
    void InsertFixup(ERedBlackTreeNode *x);
    void RemoveFixup(ERedBlackTreeNode *x);

    ERedBlackTreeNode *FindKeyOrParent(RBKey key);
    ERedBlackTreeNode *FindParent(RBKey key);

    RBIterator InsertAt(ERedBlackTreeNode *pParent, RBKey key, RBValue value);
};

template<typename a, typename T> struct TRedBlackTree : public ERedBlackTree {
	TRedBlackTree() { ; }
	//T* operator[]();
	//T*& operator[]();

	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();

	bool Remove();
	bool Delete();

	RBIterator SetValue();
	void SetValues();

	static u32 GetKey(/* parameters unknown */);
	static T* GetValue(/* parameters unknown */);
    
	void DeleteAll();
	void SafeDeleteAll();
};
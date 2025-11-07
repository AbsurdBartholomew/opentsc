// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_COLLISION_E_OVERLAPTRACKER_H
#define C__EOR_SRC2_ENGINE_COLLISION_E_OVERLAPTRACKER_H

struct EOTOverlapPair {
	u32 typeFlags;
	
	EOTOverlapPair& operator=();
	EOTOverlapPair();
	EOTOverlapPair();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EOTBound {
	EInstance *pInstance;
	EOTBound *pLast;
	EOTBound *pNext;
};

typedef OTIteratorPtrType *OTIterator;

struct TLinkedList<EOTBound,4,8> {
protected:
	EOTBound *m_pHead;
	EOTBound *m_pTail;
	
public:
	TLinkedList<EOTBound,4,8>& operator=();
	TLinkedList();
	TLinkedList();
	static EOTBound*& Last(/* parameters unknown */);
	static EOTBound*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EOTBound* Head();
	EOTBound* Tail();
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

struct EOverlapTracker {
protected:
	TLinkedList<EOTBound,4,8> m_dims[2];
	static int m_axes[2];
	bool m_warnOnBadReference;
	
public:
	EOverlapTracker& operator=();
	EOverlapTracker();
	EOverlapTracker();
	EOverlapTracker(EOverlapTracker*, int, void);
	void Insert(EInstance *pInstance, EInstance *pRef);
	void Remove(EInstance *pInstance);
	void UpdatePosition(EInstance *pInstance, EBound3 &bNewPos);
	static OTIterator GetFirstOverlap(/* parameters unknown */);
	static OTIterator GetNextOverlap(/* parameters unknown */);
	static EInstance* GetOverlapInstance(/* parameters unknown */);
	static EOTData* GetOverlapOTData(/* parameters unknown */);
	static EOTOverlapPair* GetOverlapPair(/* parameters unknown */);
	static u32 GetOverlapType(/* parameters unknown */);
	void ResetStats();
	bool WarnOnBadReference(bool enable);
protected:
	static RBIterator GetOverlap(/* parameters unknown */);
	static bool TrackAnyOverlaps(/* parameters unknown */);
	static bool TrackOverlap(/* parameters unknown */);
	static bool OverlapFlagsMatch(/* parameters unknown */);
	static bool OverlapFlagsAreSubset(/* parameters unknown */);
	static u32 OverlapTypeFlags(/* parameters unknown */);
	static bool IsMinBound(/* parameters unknown */);
	static float GetValue(/* parameters unknown */);
	void TestAddOverlap(EBound3 &bOldPos, EBound3 &bNewPos, EInstance *pSelf, EInstance *pOther);
	void AddOverlap(EInstance *pSelf, EInstance *pOther);
	void TestRemoveOverlap(EBound3 &bOldPos, EBound3 &bNewPos, EInstance *pSelf, EInstance *pOther);
	void RemoveOverlap(EInstance *pSelf, EInstance *pOther);
	static void MoveAfter(/* parameters unknown */);
	static void MoveBefore(/* parameters unknown */);
	void RemoveAllOverlaps(EInstance *pInstance);
	static bool OverlapTest(/* parameters unknown */);
};

extern int EOverlapTracker::m_axes[2];

void EOverlapTracker::~EOverlapTracker(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_COLLISION_E_OVERLAPTRACKER_H

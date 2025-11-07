// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_COLLISION_E_OVERLAPTRACKERTYPES_H
#define C__EOR_SRC2_ENGINE_COLLISION_E_OVERLAPTRACKERTYPES_H

typedef TRedBlackTree<EInstance *,EOTOverlapPair *> EOTOverlapSet;

struct EOTData {
protected:
	EBound3 m_bPos;
	u32 m_causeFlags;
	u32 m_receiveFlags;
	EOTOverlapSet m_overlaps;
	EOTBound m_minPos[2];
	EOTBound m_maxPos[2];
	
public:
	EOTData& operator=();
	EOTData();
	EOTData();
	EOTData(EOTData*, int, void);
	EBound3& GetPos();
	EOTOverlapSet& GetOverlaps();
	u32 GetCauseFlags();
	u32 GetReceiveFlags();
};

void EOTData::~EOTData(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_COLLISION_E_OVERLAPTRACKERTYPES_H

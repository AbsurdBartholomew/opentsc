// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_WINDOW_E_PORTALWINDOW_H
#define C__EOR_SRC2_ENGINE_WINDOW_E_PORTALWINDOW_H

enum EFrustCorner {
	E_FC_UPPER_LEFT = 0,
	E_FC_UPPER_RIGHT = 1,
	E_FC_LOWER_LEFT = 2,
	E_FC_LOWER_RIGHT = 3,
	E_FC_EYE = 4
};

struct EPortalDef {
	EVec3 vCorners[6];
	int nCorners;
	u32 flags;
	EMat4 mReOrient;
};

struct EOccluderDef {
	EVec3 vCorners[6];
	int nCorners;
};

struct EClipPlane {
	EVec3 vCorners[3];
	EVec4 vPlane;
	bool cull;
	EClipPlane *pLast;
	EClipPlane *pNext;
	
	EClipPlane& operator=();
	EClipPlane();
	EClipPlane();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

typedef TLinkedList<EClipPlane,68,72> EClipPlaneList;

struct EClipOccluder {
	EOccluderDef o;
	int nPlanes;
	EClipPlaneList planeList;
	EClipOccluder *pLast;
	EClipOccluder *pNext;
	
	EClipOccluder& operator=();
	EClipOccluder();
	EClipOccluder();
	EClipOccluder(EClipOccluder*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

typedef TLinkedList<EClipOccluder,88,92> EClipOccluderList;

struct EClipContext {
	EVec3 m_vEye;
	EVec3 m_vFrustCenter;
	EVec3 m_vFrustCorner;
	EVec3 m_vLookDir;
	float m_frustInnerRadius;
	float m_frustOuterRadius;
	float m_fovYDegrees;
	float m_aspect;
	float m_nearPlane;
	float m_farPlane;
	bool m_reverseCulling;
	bool m_reoriented;
	int m_nPortalPlanes;
	EClipPlaneList m_portalPlaneList;
	EClipPlaneList m_clipPlaneList;
	int m_nOccluders;
	EClipOccluderList m_occluderList;
	int m_dataSize;
	int m_clipDataSize;
	int m_boundClipDataSize;
	u8 *m_pData;
	u8 *m_pBoundData;
	EMat4 m_mLookAt;
	
	EClipContext& operator=();
	EClipContext();
	EClipContext();
	void Reset();
	void AddClipPlanes(EVec3 *vCorners, int nCorners, bool frust, EVec3 *pvNearPoint);
	static float DistanceFromPlane(/* parameters unknown */);
	void SetUpClipPlane(EClipPlane *pPlane, bool frust);
	void RemoveAndDeleteClipOccluder(EClipOccluder *pOccluder);
	void CalcOuterRadius();
protected:
	void ClipClipPlanes(EClipPlane *pFirstToTest, EClipPlane *pTestEnd, EClipPlane *pFirstCompare, EClipPlane *pCompareEnd);
	void RemoveAndDeleteClipPlane(EClipPlane *pPlane);
	void CalcInnerRadiusFromPlaneList(EClipPlaneList &list);
	void CalcInnerRadius();
};

struct EBoundClipPlane {
	EVec4 m_vPlane;
	unsigned char m_nearOffsets[4];
	unsigned char m_farOffsets[4];
	
	EBoundClipPlane& operator=();
	EBoundClipPlane();
	EBoundClipPlane();
	void Build(EVec4 &vPlane);
	float TestNear();
	float TestFar();
};

extern __vtbl_ptr_type EPortalWindow virtual table[18];

void EPortalWindow::~EPortalWindow(int __in_chrg);
EVec3 operator*(float scaler, EVec3 &vVec);

#endif // C__EOR_SRC2_ENGINE_WINDOW_E_PORTALWINDOW_H

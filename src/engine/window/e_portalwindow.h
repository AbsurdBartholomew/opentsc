/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/types.h"
#include "e_3dwindow.h"

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
};

typedef TLinkedList<EClipPlane,68,72> EClipPlaneList;

struct EClipOccluder {
	EOccluderDef o;
	int nPlanes;
	EClipPlaneList planeList;
	EClipOccluder *pLast;
	EClipOccluder *pNext;
};

typedef TLinkedList<EClipOccluder,88,92> EClipOccluderList;

class EClipContext 
{
public:
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

class EPortalWindow : public E3DWindow
{
protected:
	EClipContext *m_pcc;
	EClipContext m_contexts[16];
	int m_nCurrentContext;
	unsigned int m_dataBuffer[512];
	EVec3 m_vFrustCorners[5];
	float m_clipRatio;
	bool m_viewNeedsSettingUp;
public:
    EPortalWindow();
    virtual ~EPortalWindow();

    void DeallocateData();

    virtual void SetProjection(/* a1 5 */ EMat4 &mProjection);
	virtual void SetLookAt(/* a1 5 */ EMat4 &mLookAt);
	virtual void SetLookAtPos(/* a1 5 */ EMat4 &mLookAtPos);
	virtual void SetLookAt();
    void SetReverseCulling(/* a1 5 */ bool reverseCulling);
	void SetClipRatio(/* f12 50 */ float clipRatio);
	float GetClipRatio();
	bool PushPortal(/* s3 19 */ EPortalDef &portal, /* s0 16 */ bool testBackCullingAndVisibility, /* s1 17 */ u32 parentVis);
	void PopPortal();
	static void CalcMirrorMatrix(/* parameters unknown */);
	void AddClipPlane(/* s1 17 */ EVec3 *vCorners);
	void Reset();
	EVec3& GetFrustCorner(/* s1 17 */ EFrustCorner fc);
	bool AddOccluder(/* s0 16 */ EOccluderDef &occluder, /* s1 17 */ bool testBackCullingAndVisibility, /* s3 19 */ u32 parentVis);
	u32 GetRootVisFlags();
	u32 Test(/* s1 17 */ EVec3 *vPoints, /* s0 16 */ int nPoints, /* s3 19 */ u32 parentVis);
	u32 Test();
	u32 IntermediateTest(/* s1 17 */ EVec3 *vPoints, /* s0 16 */ int nPoints, /* s4 20 */ bool skipNearPlane, /* s3 19 */ u32 parentVis);
	void GetViewParams(/* a1 5 */ EVec3 &vEyeOut, /* a2 6 */ float &fovYDegreesOut, /* a3 7 */ float &aspectOut, /* t0 8 */ float &nearPlaneOut, /* t1 9 */ float &farPlaneOut);
	EVec3& GetLookDir();
	/* vtable[2] */ virtual void Select(/* s0 16 */ ERC *prc);
	/* vtable[8] */ virtual EPortalWindow* CastPortalWindow();
protected:
	void SetupView();
	void ResetCurrentContext();
	bool TestBackCull(/* t2 10 */ EVec3 *vCorners);
	bool TestBackCullingAndVisibility(/* s1 17 */ EVec3 *vCorners, /* s3 19 */ int nCorners, /* s2 18 */ u32 parentVis);
	void ViewChanged();
	void PrepareForUse();
	void CopyPlaneList(/* s1 17 */ EPortalDef &portal, /* a2 6 */ EClipPlaneList &src, /* s3 19 */ EClipPlaneList &dest);
	bool NearClipPoly(/* s4 20 */ EVec3 *vIn, /* s2 18 */ int inSides, /* t2 10 */ EVec3 *vOut, /* s3 19 */ int &outSides, /* t1 9 */ int parentVis);
	void SetUpClipOccluder(/* s3 19 */ EClipOccluder *pOccluder);
	/* vtable[10] */ virtual void SetProjection();
	/* vtable[11] */ virtual void SetOrthoProjection(/* f12 50 */ float left, /* f13 51 */ float right, /* f14 52 */ float bottom, /* f15 53 */ float top, /* f16 54 */ float nearPlane, /* f17 55 */ float farPlane);
};
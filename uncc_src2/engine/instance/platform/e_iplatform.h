// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_PLATFORM_E_IPLATFORM_H
#define C__EOR_SRC2_ENGINE_INSTANCE_PLATFORM_E_IPLATFORM_H

enum PlatformSplineMode {
	PSM_NULL = 0,
	PSM_NORMAL = 1,
	PSM_LOOP = 2,
	PSM_TELEPORT = 3,
	PSM_MAX = 4
};

struct EUpdateInstance {
	EIGameInstance *pIGameInstance;
	bool notUpdated;
	EUpdateInstance *pLast;
	EUpdateInstance *pNext;
};

typedef TLinkedList<EUpdateInstance,8,12> EIUpdateList;

struct EIPlatform : EIGameInstance {
	static ETypeInfo m_typeInfo;
protected:
	bool m_active;
	bool m_collision;
	bool m_visible;
	u32 m_updateScriptId;
	u32 m_collisionScriptId;
	EVec3 m_vPos;
	EVec3 m_vScale;
	EQuat m_qRot;
	EMat4 m_mOrient;
	u32 m_modelId;
	EIBezierSpline *m_pSpline;
	EVec3 m_vSplineTan;
	EVec3 m_vSplinePos;
	EVec3 m_vLastSplinePos;
	u32 m_splineId;
	float m_splineBlend;
	PlatformSplineMode m_splineMode;
	float m_splineSpeed;
	bool m_splineDirection;
	float m_splineTime;
	ERModel *m_pModel;
	EVec3 m_vDesiredPos;
	EVec3 m_vOldPos;
	EVec3 m_vDesiredScale;
	EVec3 m_vOldScale;
	EVec3 m_vStoredScale;
	EVec3 m_vStoredPos;
	EQuat m_qStoredRot;
	EBoundSphere m_boundSphere;
	EMat4 m_mCurrentOrient;
	EMat4 m_mLastOrient;
	EMat4 m_mInvOrient;
	bool m_computeInv;
	EIUpdateList m_Instances;
	EQuat m_qDesiredRot;
	EQuat m_qOldRot;
	bool m_startState;
	float m_time;
	float m_moveToDuration;
	float m_moveToTime;
	float m_rotateToDuration;
	float m_rotateToTime;
	EVec3 m_vScaleToDuration;
	EVec3 m_vScaleToTime;
	ERScript *m_pUpdateScript;
	ERScript *m_pCollisionScript;
	u32 m_currentVis;
	
public:
	EIPlatform& operator=();
	EIPlatform();
	static EIPlatform* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIPlatform* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EIPlatform();
	/* vtable[6] */ virtual EIPlatform(EIPlatform*, int, void);
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[13] */ virtual void DrawWireFrame(ERC *prc, u32 renderFlags);
	/* vtable[10] */ virtual void Update();
	/* vtable[9] */ virtual void Init();
	/* vtable[29] */ virtual void InitDebug(u32 pId, bool collision, bool visibility, u32 collideScript, u32 updateScript, u32 modelId, EVec3 vPos);
	/* vtable[16] */ virtual bool CollidePointWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pInst);
	/* vtable[17] */ virtual bool CollideSphereWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pInst);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[20] */ virtual void GetBoundSphere(EBoundSphere &boundSphereOut);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	/* vtable[30] */ virtual bool ResetOrient();
	/* vtable[31] */ virtual bool MoveTo(EVec3 &vPos, float speed, EInstance *pInstance);
	/* vtable[32] */ virtual bool MoveToRelative(EVec3 &vPos, float duration, EInstance *pInstance);
	/* vtable[33] */ virtual bool RotateTo(EVec3 &vRot, float duration, EInstance *pInstance);
	/* vtable[34] */ virtual bool RotateToRelative(EVec3 &vRot, float duration, EInstance *pInstance);
	/* vtable[35] */ virtual bool QuatRotateTo(EQuat &qRot, float duration, EInstance *pInstance);
	/* vtable[36] */ virtual bool ScaleTo(EVec3 &vScale, EVec3 vDuration, EInstance *pInstance);
	/* vtable[37] */ virtual bool ScaleToRelative(EVec3 &vScale, EVec3 vDuration, EInstance *pInstance);
	/* vtable[38] */ virtual bool Teleport(EVec3 &vPos, EInstance *pInstance);
	/* vtable[39] */ virtual bool SetTime(float newTime, EInstance *pInstance);
	/* vtable[40] */ virtual float GetTime(EInstance *pInstance);
	/* vtable[41] */ virtual bool StartAnimation(u32 animId, f32 speed, f32 intensity, f32 frame, EInstance *pInstance);
	/* vtable[42] */ virtual bool StopAnimation(u32 animId, EInstance *pInstance);
	/* vtable[43] */ virtual bool ChangeAnimationSpeed(u32 animId, f32 speed, EInstance *pInstance);
	/* vtable[44] */ virtual bool ChangeAnimationIntensity(u32 animId, f32 intensity, EInstance *pInstance);
	/* vtable[45] */ virtual bool IsAnimationPlaying(u32 animId, EInstance *pInstance);
	/* vtable[46] */ virtual u32 GetLastAnim(EInstance *pInstance);
	/* vtable[47] */ virtual bool RunScript(ERScript *pScript, EInstance *pInstance);
	/* vtable[48] */ virtual bool Destroy(EInstance *pInstance);
	/* vtable[49] */ virtual bool Suspend(bool suspend, EInstance *pInstance);
	/* vtable[50] */ virtual bool Visibility(bool visible, EInstance *pInstance);
	/* vtable[51] */ virtual bool Collision(bool collision, EInstance *pInstance);
	/* vtable[52] */ virtual bool ChangeModel(u32 newModelId, EInstance *pInstance);
	/* vtable[53] */ virtual bool CheckId(u32 queryId);
	/* vtable[54] */ virtual bool AddInstance(EIGameInstance *pIGameInstance);
	/* vtable[26] */ virtual bool GetAbsolutePosition(EVec3 &vPos);
	/* vtable[55] */ virtual EVec3 GetRotation();
	/* vtable[56] */ virtual EVec4 GetScale();
	bool IsSuspended();
	bool IsVisibile();
	bool IsCollidable();
	/* vtable[57] */ virtual bool IsMoving();
	/* vtable[58] */ virtual bool IsRotating();
	/* vtable[59] */ virtual bool IsScaling();
	/* vtable[60] */ virtual bool SetSpline(EIBezierSpline *pSpline);
	/* vtable[61] */ virtual bool SetSpline();
	/* vtable[62] */ virtual bool SetSplineMode(PlatformSplineMode mode);
	/* vtable[63] */ virtual bool SetSplineSpeed(float speed);
	/* vtable[64] */ virtual bool SetSplineDirection(bool direction);
	/* vtable[65] */ virtual bool SetSplineBlend(float blend);
	/* vtable[66] */ virtual bool SplineEnd();
	/* vtable[67] */ virtual bool SplineEndTravel();
	/* vtable[68] */ virtual float SplineTime();
	EIBezierSpline* GetSpline();
	float GetSplineSpeed();
	float GetSplineBlend();
	bool GetSplineDirection();
	float GetSplineTime();
	float GetMaxSplineBlend();
protected:
	void RemoveScripts();
	void RemoveModel();
	/* vtable[69] */ virtual void UpdateScript();
	/* vtable[70] */ virtual void ComputeBounds();
	/* vtable[71] */ virtual void UpdateMoveTo();
	/* vtable[72] */ virtual void UpdateScaleTo();
	/* vtable[73] */ virtual void UpdateRotateTo();
	/* vtable[74] */ virtual void UpdateSpline();
	void PreRotate(EVec3 &vRot);
	void InvertOrient(EMat4 &mOrient);
	/* vtable[75] */ virtual void CollisionEvent(EInstance *pInstance);
	/* vtable[76] */ virtual void UpdateInstanceList();
	/* vtable[77] */ virtual void PruneInstanceList();
	/* vtable[78] */ virtual bool CollisionTest(EIGameInstance *pIGameInstance);
	void RemoveNode(EUpdateInstance *pNode);
	bool InList(EIGameInstance *pIGameInstance);
	EMat4* GetDrawMatrix(ERC *prc);
	/* vtable[79] */ virtual void SplineEndBehavior(float curBlend);
	EVec3 ComputeSplineTangent();
	void ApplyRotation();
};

extern ETypeInfo *gpTypeInfo_EIPlatform;
extern __vtbl_ptr_type EIPlatform virtual table[81];
extern ETypeInfo EIPlatform::m_typeInfo;

EStream& operator<<(EStream &s, EIPlatform *pD);
EStream& operator>>(EStream &s, EIPlatform *&pD);
void EIPlatform::~EIPlatform(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIPlatform();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_PLATFORM_E_IPLATFORM_H

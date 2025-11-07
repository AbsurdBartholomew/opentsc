// STATUS: NOT STARTED

#include "e_iplatform.h"

enum ESurfaceBehavior {
	E_SB_IGNORE = 0,
	E_SB_STOP = 1,
	E_SB_SLIDE = 2,
	E_SB_SLIDE_NOVERTICAL = 3,
	E_SB_BOUNCE = 4
};

struct EMoveBehavior {
	EVec3 vUp;
	float gravityAccel;
	float bounceRestitution;
	float cosMaxGroundAngle;
	float climbOverRayHeightFactor;
	float climbOverRayLengthFactor;
	float climbOverRayLengthRequired;
	ESurfaceBehavior groundBehavior;
	ESurfaceBehavior groundWallBehavior;
	ESurfaceBehavior wallBehavior;
	bool usePhysics;
	bool useRamps;
	bool groundTrack;
	bool controlInAir;
};

struct ECollisionState {
	ECollisionInfo ci;
	EVec3 vDesired;
	EVec3 vOriginalDelta;
	int nSlidePlanes;
	EVec4 vSlidePlanes[2];
	float remainT;
	bool groundTrack;
};

struct EICharacter : EIGameInstance {
	static ETypeInfo m_typeInfo;
	EAnimController m_ac;
	bool m_onGround;
protected:
	EBoundSphere m_boundSphere;
	u32 m_characterId;
	u32 m_modelId;
	EVec3 m_vPos;
	EVec3 m_vRot;
	EVec3 m_vScale;
	EMat4 m_mOrient;
	EVec3 m_vVelocity;
	float m_collisionRadius;
	EOrderTableData *m_otds;
	ERModel *m_pModel;
	static EMoveBehavior m_defaultMoveBehavior;
	bool m_overCliff;
	bool m_onSurface;
	bool m_lastGroundTrack;
	bool m_allowMovement;
	bool m_useCollisionWithMovement;
	bool m_groundCollided;
	bool m_climbOverCollided;
	ECollisionInfo m_ciGround;
	ECollisionInfo m_ciClimbOver;
	EVec3 m_vGroundNormal;
	EVec3 m_vGroundPos;
	EVec3 m_vSurfaceNormal;
	EVec3 m_vLastVelocity;
	
public:
	EICharacter& operator=();
	EICharacter();
	static EICharacter* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EICharacter* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EICharacter();
	/* vtable[6] */ virtual EICharacter(EICharacter*, int, void);
	/* vtable[9] */ virtual void Init();
	/* vtable[10] */ virtual void Update();
	/* vtable[29] */ virtual void UpdateMovement();
	/* vtable[11] */ virtual u32 VisibilityTest();
	/* vtable[12] */ virtual void Draw();
	void SetCharacter();
	void SetCharacter();
	void SetModel();
	void SetModel();
	u32 GetModelId();
	void SetScale();
	void SetAllowMovement();
	void SetUseCollisionWithMovement();
	void Move();
	void MoveRelative();
	void SetPos();
	void Jump();
	bool GetGround();
	void SetVelocity();
	/* vtable[7] */ virtual void Read();
	/* vtable[8] */ virtual void Write();
protected:
	/* vtable[30] */ virtual void CalcOrientMatrix();
	void Deallocate();
	void DeallocateModel();
	void CalcCollisionRadius();
	void SetOTDs();
	void DeallocateOTDs();
	static void OrderTableCallback(/* parameters unknown */);
	/* vtable[31] */ virtual EMoveBehavior* GetMoveBehavior();
	/* vtable[32] */ virtual ESurfaceBehavior GetSurfaceBehavior();
	bool ReactToCollision();
	bool IsGround();
	bool CanClimb();
	bool TestGroundTrack();
	static void AddSlidePlane(/* parameters unknown */);
	void CalcGroundState();
	void DoMove();
};

ETypeInfo *gpTypeInfo_EIPlatform = NULL;

__vtbl_ptr_type EIPlatform virtual table[81] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SafeDelete,
		/* .__delta2 = */ -11168
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetTypeInfo,
		/* .__delta2 = */ -11112
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetTypeName,
		/* .__delta2 = */ -11096
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetTypeKey,
		/* .__delta2 = */ -11080
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetTypeVersion,
		/* .__delta2 = */ -11064
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::~EIPlatform,
		/* .__delta2 = */ -22272
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Read,
		/* .__delta2 = */ -15032
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Write,
		/* .__delta2 = */ -14696
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Init,
		/* .__delta2 = */ -18976
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Update,
		/* .__delta2 = */ -21656
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::VisibilityTest,
		/* .__delta2 = */ -15520
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Draw,
		/* .__delta2 = */ -22032
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::DrawWireFrame,
		/* .__delta2 = */ -21776
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetOrient,
		/* .__delta2 = */ -5168
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::CollidePointWithInstance,
		/* .__delta2 = */ -18112
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::CollideSphereWithInstance,
		/* .__delta2 = */ -16896
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetBoundSphere,
		/* .__delta2 = */ -15072
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::Damage,
		/* .__delta2 = */ 9184
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::PlatformOrient,
		/* .__delta2 = */ 9192
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetAbsolutePosition,
		/* .__delta2 = */ -15440
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::UserFunc,
		/* .__delta2 = */ 8776
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::ExecScript,
		/* .__delta2 = */ 8784
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::InitDebug,
		/* .__delta2 = */ -18528
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::ResetOrient,
		/* .__delta2 = */ -10864
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::MoveTo,
		/* .__delta2 = */ -14352
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::MoveToRelative,
		/* .__delta2 = */ -14048
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::RotateTo,
		/* .__delta2 = */ -13920
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::RotateToRelative,
		/* .__delta2 = */ -13776
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::QuatRotateTo,
		/* .__delta2 = */ -13472
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::ScaleTo,
		/* .__delta2 = */ -12920
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::ScaleToRelative,
		/* .__delta2 = */ -12736
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Teleport,
		/* .__delta2 = */ -12584
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SetTime,
		/* .__delta2 = */ -10664
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetTime,
		/* .__delta2 = */ -10648
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::StartAnimation,
		/* .__delta2 = */ -10640
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::StopAnimation,
		/* .__delta2 = */ -10632
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::ChangeAnimationSpeed,
		/* .__delta2 = */ -10624
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::ChangeAnimationIntensity,
		/* .__delta2 = */ -10616
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::IsAnimationPlaying,
		/* .__delta2 = */ -10608
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetLastAnim,
		/* .__delta2 = */ -10600
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::RunScript,
		/* .__delta2 = */ -12512
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Destroy,
		/* .__delta2 = */ -12344
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Suspend,
		/* .__delta2 = */ -12288
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Visibility,
		/* .__delta2 = */ -12272
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::Collision,
		/* .__delta2 = */ -12240
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::ChangeModel,
		/* .__delta2 = */ -12192
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::CheckId,
		/* .__delta2 = */ -12208
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::AddInstance,
		/* .__delta2 = */ -11784
	},
	/* [55] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetRotation,
		/* .__delta2 = */ -10592
	},
	/* [56] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::GetScale,
		/* .__delta2 = */ -10568
	},
	/* [57] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::IsMoving,
		/* .__delta2 = */ -10488
	},
	/* [58] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::IsRotating,
		/* .__delta2 = */ -10448
	},
	/* [59] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::IsScaling,
		/* .__delta2 = */ -10408
	},
	/* [60] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SetSpline,
		/* .__delta2 = */ -12048
	},
	/* [61] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SetSpline,
		/* .__delta2 = */ -10344
	},
	/* [62] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SetSplineMode,
		/* .__delta2 = */ -10328
	},
	/* [63] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SetSplineSpeed,
		/* .__delta2 = */ -10312
	},
	/* [64] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SetSplineDirection,
		/* .__delta2 = */ -10296
	},
	/* [65] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SetSplineBlend,
		/* .__delta2 = */ -10280
	},
	/* [66] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SplineEnd,
		/* .__delta2 = */ -19592
	},
	/* [67] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SplineEndTravel,
		/* .__delta2 = */ -19456
	},
	/* [68] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SplineTime,
		/* .__delta2 = */ -10264
	},
	/* [69] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::UpdateScript,
		/* .__delta2 = */ -21328
	},
	/* [70] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::ComputeBounds,
		/* .__delta2 = */ -15408
	},
	/* [71] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::UpdateMoveTo,
		/* .__delta2 = */ -21168
	},
	/* [72] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::UpdateScaleTo,
		/* .__delta2 = */ -20976
	},
	/* [73] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::UpdateRotateTo,
		/* .__delta2 = */ -19304
	},
	/* [74] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::UpdateSpline,
		/* .__delta2 = */ -20672
	},
	/* [75] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::CollisionEvent,
		/* .__delta2 = */ -12000
	},
	/* [76] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::UpdateInstanceList,
		/* .__delta2 = */ -19224
	},
	/* [77] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::PruneInstanceList,
		/* .__delta2 = */ -19112
	},
	/* [78] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::CollisionTest,
		/* .__delta2 = */ -15680
	},
	/* [79] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPlatform::SplineEndBehavior,
		/* .__delta2 = */ -20312
	},
	/* [80] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIPlatform::m_typeInfo;

EStream& operator<<(EStream &s, EIPlatform *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIPlatform *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EIPlatform *)pStorable;
  return s;
}

EIPlatform* EIPlatform::EIPlatform() {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EInstance *this;
	EInstance *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong in_t1;
  ulong uVar8;
  ulong in_t3;
  float rotX;
  
  __14EIGameInstance(&this->field0_0x0);
  this->m_currentVis = 0x2a;
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_10EIPlatform;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_Instances).m_pTail = (EUpdateInstance *)0x0;
  (this->m_Instances).m_pHead = (EUpdateInstance *)0x0;
                    /* end of inlined section */
  *(undefined4 *)&this->m_active = 0;
  *(undefined4 *)&this->m_startState = 0;
  *(undefined4 *)&this->m_collision = 0;
  *(undefined4 *)&this->m_visible = 0;
  *(undefined4 *)&this->m_computeInv = 0;
  this->m_time = 0.0;
  this->m_updateScriptId = 0;
  this->m_collisionScriptId = 0;
  this->m_pUpdateScript = (ERScript *)0x0;
  this->m_pCollisionScript = (ERScript *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vPos).field0_0x0.d[1] = 0.0;
  (this->m_vPos).field0_0x0.d[2] = 0.0;
  (this->m_vPos).field0_0x0.d[0] = 0.0;
  (this->m_vScale).field0_0x0.d[1] = 0.0;
  (this->m_vScale).field0_0x0.d[2] = 0.0;
  (this->m_vScale).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  rotX = (this->m_vScale).field0_0x0.d[0];
  Set__5EQuatfff(&this->m_qRot,rotX,rotX,rotX);
  Id__5EMat4(&this->m_mOrient);
  Id__5EMat4(&this->m_mLastOrient);
  Id__5EMat4(&this->m_mCurrentOrient);
  Id__5EMat4(&this->m_mInvOrient);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vDesiredPos).field0_0x0.d[1] = rotX;
  (this->m_vDesiredPos).field0_0x0.d[2] = rotX;
  (this->m_vDesiredPos).field0_0x0.d[0] = rotX;
                    /* end of inlined section */
  this->m_modelId = 0;
  this->m_pModel = (ERModel *)0x0;
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
  puVar1 = (undefined *)((int)&(this->m_boundSphere).vCenter.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | CONCAT44(rotX,rotX) >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_boundSphere & 7;
  puVar6 = (ulong *)((int)&this->m_boundSphere - uVar5);
  *puVar6 = CONCAT44(rotX,rotX) << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_boundSphere).vCenter.field0_0x0.d[2] = rotX;
  (this->m_boundSphere).radius = rotX;
                    /* end of inlined section */
  SetOverlapReceiveFlags__9EInstanceUi
            ((EInstance *)this,(this->field0_0x0).field0_0x0.m_otd.m_receiveFlags | 0x39);
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
  SetOverlapCauseFlags__9EInstanceUi
            ((EInstance *)this,(this->field0_0x0).field0_0x0.m_otd.m_causeFlags | 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[1] = rotX;
  (this->m_vScaleToTime).field0_0x0.d[2] = rotX;
  (this->m_vScaleToTime).field0_0x0.d[0] = rotX;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToDuration).field0_0x0.d[1] = rotX;
  (this->m_vScaleToDuration).field0_0x0.d[2] = rotX;
  (this->m_vScaleToDuration).field0_0x0.d[0] = rotX;
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vScale & 7;
  uVar8 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          in_t1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vScale - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vDesiredScale).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_vDesiredScale & 7;
  puVar6 = (ulong *)((int)&this->m_vDesiredScale - uVar5);
  *puVar6 = uVar8 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_vDesiredScale).field0_0x0.d[2] = fVar4;
  this->m_moveToTime = rotX;
  this->m_moveToDuration = rotX;
  this->m_rotateToTime = rotX;
  this->m_rotateToDuration = rotX;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vOldPos).field0_0x0.d[1] = rotX;
  (this->m_vOldPos).field0_0x0.d[2] = rotX;
  (this->m_vOldPos).field0_0x0.d[0] = rotX;
  (this->m_vOldScale).field0_0x0.d[1] = rotX;
  (this->m_vOldScale).field0_0x0.d[2] = rotX;
  (this->m_vOldScale).field0_0x0.d[0] = rotX;
  puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 7);
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_qRot & 7;
  uVar8 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          (long)(int)&this->m_vOldPos & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
          -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_qRot - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 0xf);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 8);
  uVar3 = (uint)puVar2 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          (long)(int)&this->m_vOldScale & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
          -1L << (8 - uVar3) * 8 | *(ulong *)(puVar2 + -uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_qDesiredRot & 7;
  puVar6 = (ulong *)((int)&this->m_qDesiredRot - uVar5);
  *puVar6 = uVar8 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 0xf);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 8);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_qDesiredRot & 7;
  uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          in_t3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_qDesiredRot - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 0xf);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 8);
  uVar3 = (uint)puVar2 & 7;
  uVar8 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          (long)(int)&this->m_vScaleToDuration & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
          -1L << (8 - uVar3) * 8 | *(ulong *)(puVar2 + -uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_qOldRot & 7;
  puVar6 = (ulong *)((int)&this->m_qOldRot - uVar5);
  *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 0xf);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 8);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = uVar8 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  *(undefined4 *)&this->m_splineDirection = 1;
  this->m_splineBlend = rotX;
  this->m_splineTime = rotX;
  this->m_splineSpeed = rotX;
  this->m_pSpline = (EIBezierSpline *)0x0;
  this->m_splineMode = PSM_NULL;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vLastSplinePos).field0_0x0.d[1] = rotX;
  (this->m_vLastSplinePos).field0_0x0.d[2] = rotX;
  (this->m_vLastSplinePos).field0_0x0.d[0] = rotX;
  (this->m_vSplinePos).field0_0x0.d[1] = rotX;
  (this->m_vSplinePos).field0_0x0.d[2] = rotX;
  (this->m_vSplinePos).field0_0x0.d[0] = rotX;
  return this;
}

void EIPlatform::~EIPlatform(int __in_chrg) {
	void *p;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_Instances).m_pTail = (EUpdateInstance *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_Instances).m_pHead = (EUpdateInstance *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_10EIPlatform;
  RemoveModel__10EIPlatform(this);
  RemoveScripts__10EIPlatform(this);
  ___14EIGameInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EIPlatform::RemoveScripts() {
  ERScript *this_00;
  
  if (this->m_pUpdateScript == (ERScript *)0x0) {
    this_00 = this->m_pCollisionScript;
  }
  else {
    DelRef__9EResource(&this->m_pUpdateScript->field0_0x0);
    this_00 = this->m_pCollisionScript;
  }
  if (this_00 != (ERScript *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
  }
  return;
}

void EIPlatform::RemoveModel() {
  if (this->m_pModel != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_pModel->field0_0x0);
    this->m_pModel = (ERModel *)0x0;
  }
  return;
}

void EIPlatform::Draw(ERC *prc, u32 renderFlags) {
  short sVar1;
  ERC__vtable *pEVar2;
  EMat4 *pEVar3;
  
  if ((*(int *)&this->m_active != 0) && (*(int *)&this->m_visible != 0)) {
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
    pEVar2 = prc->__vtable;
    sVar1 = *(short *)&pEVar2->MipMapSetup;
    pEVar3 = GetDrawMatrix__10EIPlatformP3ERC(this,prc);
    (*(code *)pEVar2->SetMipMap)((int)&prc->m_pdl + (int)sVar1,pEVar3);
    Draw__7ERModelP3ERCUi(this->m_pModel,prc,renderFlags);
  }
  return;
}

EMat4* EIPlatform::GetDrawMatrix(ERC *prc) {
  EMat4 *this_00;
  
                    /* inlined from e_dl.h */
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(this_00,&this->m_mCurrentOrient);
  return this_00;
}

void EIPlatform::DrawWireFrame(ERC *prc, u32 renderFlags) {
  if ((*(int *)&this->m_active != 0) && (*(int *)&this->m_visible != 0)) {
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices,prc,renderFlags);
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,&this->m_mCurrentOrient
              );
    DrawWireFrame__7ERModelP3ERC(this->m_pModel,prc);
  }
  return;
}

void EIPlatform::Update() {
  EStorable__vtable *pEVar1;
  EMat4 *m;
  float fVar2;
  
  m = &this->m_mCurrentOrient;
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  this->m_time = this->m_time + _dt;
  (*(code *)pEVar1[0x11].GetTypeInfo)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0x11].SafeDelete);
  __as__5EMat4RC5EMat4(&this->m_mLastOrient,m);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  *(undefined4 *)&this->m_computeInv = 1;
  (*(code *)pEVar1[0xf].GetTypeKey)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0xf].GetTypeName);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[0xf].Write)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0xf].Read);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[0x10].SafeDelete)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)(pEVar1 + 0x10));
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[0x10].GetTypeName)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0x10].GetTypeInfo);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[0x11].EStorable)
            (this->m_splineBlend,
             (int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0x11].GetTypeVersion);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[0x10].GetTypeVersion)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0x10].GetTypeKey);
  __as__5EMat4RC5EMat4(m,&this->m_mOrient);
  ApplyRotation__10EIPlatform(this);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar2 = (this->m_vPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_mCurrentOrient).field0_0x0.d[3][0] = (this->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_mCurrentOrient).field0_0x0.d[3][1] = fVar2;
                    /* end of inlined section */
  (this->m_mCurrentOrient).field0_0x0.d[3][2] = (this->m_vPos).field0_0x0.d[2];
  PreScale__5EMat4RC5EVec3(m,&this->m_vScale);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[0xf].EStorable)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0xf].GetTypeVersion);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 0x11))
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[0x10].Write);
  return;
}

void EIPlatform::UpdateScript() {
	EScriptParams scriptParams;
	
  undefined *puVar1;
  uint uVar2;
  ERScript *pScript;
  uint uVar3;
  ulong *puVar4;
  EScriptParams scriptParams;
  
  pScript = this->m_pUpdateScript;
  if (pScript != (ERScript *)0x0) {
                    /* inlined from /eor/src2/engine/script/e_scriptparams.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptparams.h */
    scriptParams.pCauseInst = (EInstance *)0x0;
    scriptParams.pReceiverList = (TNodeList_EInstance___ *)0x0;
    puVar1 = (undefined *)((int)&scriptParams.vPos.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
    scriptParams.vPos.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&scriptParams.vNormal.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
    uVar3 = (uint)&scriptParams.vNormal & 7;
    puVar4 = (ulong *)((int)&scriptParams.vNormal - uVar3);
    *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    scriptParams.vNormal.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->m_vPos & 7;
    scriptParams.vPos.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&this->m_vPos - uVar2) >> uVar2 * 8;
    scriptParams.vPos.field0_0x0.d[2] = (this->m_vPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&scriptParams.vPos.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              (ulong)scriptParams.vPos.field0_0x0._0_8_ >> (7 - uVar3) * 8;
    Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
              (&_scriptEngine,pScript,(EInstance *)this,&scriptParams);
  }
  return;
}

void EIPlatform::UpdateMoveTo() {
	EVec3 *this;
	EVec3 &v;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = this->m_moveToTime + _dt;
  this->m_moveToTime = fVar6;
  if (fVar6 <= this->m_moveToDuration) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar6 = fVar6 / this->m_moveToDuration;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = (this->m_vOldPos).field0_0x0.d[2];
    fVar5 = (this->m_vDesiredPos).field0_0x0.d[2];
    fVar9 = (this->m_vOldPos).field0_0x0.d[0];
    fVar7 = (this->m_vOldPos).field0_0x0.d[2];
                    /* end of inlined section */
    uVar4 = CONCAT44((this->m_vOldPos).field0_0x0.d[1] +
                     fVar6 * ((this->m_vDesiredPos).field0_0x0.d[1] -
                             (this->m_vOldPos).field0_0x0.d[1]),
                     fVar9 + fVar6 * ((this->m_vDesiredPos).field0_0x0.d[0] - fVar9));
    puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vPos & 7;
    puVar3 = (ulong *)((int)&this->m_vPos - uVar2);
    *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vPos).field0_0x0.d[2] = fVar7 + fVar6 * (fVar5 - fVar8);
  }
  return;
}

void EIPlatform::UpdateScaleTo() {
	float v;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	float newScale;
	int i;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	float a;
	float b;
	int value;
	int value;
	int value;
	int value;
	int value;
	
  bool bVar1;
  EVec3 *pEVar2;
  EVec3 *pEVar3;
  EVec3 *pEVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = _dt;
  (this->m_vScaleToTime).field0_0x0.d[0] = (this->m_vScaleToTime).field0_0x0.d[0] + _dt;
  fVar7 = (this->m_vScaleToTime).field0_0x0.d[2];
  (this->m_vScaleToTime).field0_0x0.d[1] = (this->m_vScaleToTime).field0_0x0.d[1] + fVar8;
  (this->m_vScaleToTime).field0_0x0.d[2] = fVar7 + fVar8;
  bVar1 = false;
  if ((this->m_vDesiredScale).field0_0x0.d[0] == (this->m_vScale).field0_0x0.d[0]) {
    if ((this->m_vDesiredScale).field0_0x0.d[1] != (this->m_vScale).field0_0x0.d[1]) {
      bVar1 = true;
      goto LAB_0030aea8;
    }
    if ((this->m_vDesiredScale).field0_0x0.d[2] == (this->m_vScale).field0_0x0.d[2])
    goto LAB_0030aea8;
  }
  bVar1 = true;
LAB_0030aea8:
                    /* end of inlined section */
  if (bVar1) {
    pEVar4 = &this->m_vScaleToDuration;
    pEVar2 = &this->m_vScale;
    iVar5 = 0;
    pEVar3 = &this->m_vScaleToTime;
    do {
                    /* end of inlined section */
      if ((pEVar3->field0_0x0).d[0] <= (pEVar4->field0_0x0).d[0]) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
        fVar8 = *(float *)((int)(pEVar2 + 0x10) + 8);
        fVar6 = *(float *)((int)(pEVar2 + 0xf) + 8);
        fVar7 = fVar8 + ((pEVar3->field0_0x0).d[0] / (pEVar4->field0_0x0).d[0]) * (fVar6 - fVar8);
                    /* end of inlined section */
                    /* end of inlined section */
        if ((fVar8 <= fVar7) && (fVar8 = fVar7, fVar6 < fVar7)) {
          fVar8 = fVar6;
        }
                    /* end of inlined section */
        (pEVar2->field0_0x0).d[0] = fVar8;
      }
      iVar5 = iVar5 + 1;
      pEVar2 = (EVec3 *)((int)&pEVar2->field0_0x0 + 4);
      pEVar3 = (EVec3 *)((int)&pEVar3->field0_0x0 + 4);
      pEVar4 = (EVec3 *)((int)&pEVar4->field0_0x0 + 4);
    } while (iVar5 < 3);
  }
  return;
}

void EIPlatform::UpdateSpline() {
	float blendMax;
	float newBlend;
	float deltaBlend;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  EVec3 *pEVar5;
  ulong uVar6;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar7;
  float fVar8;
  ulong uStack_40;
  float local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (this->m_splineMode == PSM_NULL) {
    return;
  }
  if (this->m_pSpline == (EIBezierSpline *)0x0) {
    return;
  }
  this->m_splineTime = this->m_splineTime + _dt;
                    /* inlined from /eor/src2/engine/instance/spline/e_ibezierspline.h */
  uVar3 = this->m_pSpline->m_NumSplines;
                    /* end of inlined section */
  if ((int)uVar3 < 0) {
    fVar8 = (float)(uVar3 & 1 | uVar3 >> 1);
    fVar8 = fVar8 + fVar8;
    fVar7 = this->m_splineSpeed;
  }
  else {
    fVar8 = (float)uVar3;
    fVar7 = this->m_splineSpeed;
  }
  fVar7 = _dt * (1.0 / fVar7) * fVar8;
  if ((long)*(int *)&this->m_splineDirection == 0) {
    fVar7 = this->m_splineBlend - fVar7;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
      goto LAB_0030b02c;
    }
  }
  else {
    fVar7 = this->m_splineBlend + fVar7;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
      goto LAB_0030b02c;
    }
  }
  fVar7 = (float)((int)fVar7 * (uint)(fVar7 < fVar8) | (int)fVar8 * (uint)(fVar7 >= fVar8));
LAB_0030b02c:
  puVar1 = (undefined *)((int)&(this->m_vSplinePos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vSplinePos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          (long)*(int *)&this->m_splineDirection & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
          -1L << (8 - uVar2) * 8 | *(ulong *)((int)&this->m_vSplinePos - uVar2) >> uVar2 * 8;
  fVar8 = (this->m_vSplinePos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vLastSplinePos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLastSplinePos & 7;
  puVar4 = (ulong *)((int)&this->m_vLastSplinePos - uVar3);
  *puVar4 = uVar6 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vLastSplinePos).field0_0x0.d[2] = fVar8;
  ComputeSplinePoint__14EIBezierSplinef((EVec3 *)&uStack_40,this->m_pSpline,fVar7);
  puVar1 = (undefined *)((int)&(this->m_vSplinePos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uStack_40 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vSplinePos & 7;
  puVar4 = (ulong *)((int)&this->m_vSplinePos - uVar3);
  *puVar4 = uStack_40 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vSplinePos).field0_0x0.d[2] = local_38;
  this->m_splineBlend = fVar7;
  pEVar5 = ComputeSplineTangent__10EIPlatform((EVec3 *)&uStack_40,this);
  puVar1 = (undefined *)((int)&(this->m_vSplinePos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vSplinePos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          (long)(int)pEVar5 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&this->m_vSplinePos - uVar2) >> uVar2 * 8;
  fVar7 = (this->m_vSplinePos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vPos & 7;
  puVar4 = (ulong *)((int)&this->m_vPos - uVar3);
  *puVar4 = uVar6 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar7;
  return;
}

void EIPlatform::SplineEndBehavior(float curBlend) {
	float blendMax;
	
  uint uVar1;
  PlatformSplineMode PVar2;
  float fVar3;
  
  if ((this->m_splineMode == PSM_NULL) || (this->m_pSpline == (EIBezierSpline *)0x0)) {
    return;
  }
                    /* inlined from /eor/src2/engine/instance/spline/e_ibezierspline.h */
  uVar1 = this->m_pSpline->m_NumSplines;
                    /* end of inlined section */
  if ((int)uVar1 < 0) {
    fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)uVar1;
  }
  if (curBlend == fVar3) {
    PVar2 = this->m_splineMode;
  }
  else {
    if (curBlend != 0.0) {
      return;
    }
    PVar2 = this->m_splineMode;
  }
  this->m_splineTime = 0.0;
  if (PVar2 != PSM_LOOP) {
    if ((2 < (int)PVar2) && (PVar2 == PSM_TELEPORT)) {
      if (curBlend == fVar3) {
        if (*(int *)&this->m_splineDirection != 0) {
          this->m_splineBlend = 0.0;
          return;
        }
        this->m_splineBlend = fVar3;
      }
      else {
        if (*(int *)&this->m_splineDirection != 0) {
          return;
        }
        this->m_splineBlend = fVar3;
      }
    }
    return;
  }
  *(uint *)&this->m_splineDirection = *(uint *)&this->m_splineDirection ^ 1;
  return;
}

EVec3 EIPlatform::ComputeSplineTangent() {
	float blendMax;
	float minu;
	float maxu;
	EVec3 vMinPos;
	EVec3 vMaxPos;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vMinPos;
  EVec3 vMaxPos;
  
  if (this->m_pSpline == (EIBezierSpline *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (__return_storage_ptr__->field0_0x0).d[0] = (this->m_vSplineTan).field0_0x0.d[0];
    (__return_storage_ptr__->field0_0x0).d[1] = (this->m_vSplineTan).field0_0x0.d[1];
                    /* end of inlined section */
    (__return_storage_ptr__->field0_0x0).d[2] = (this->m_vSplineTan).field0_0x0.d[2];
  }
  else {
                    /* inlined from /eor/src2/engine/instance/spline/e_ibezierspline.h */
    uVar2 = this->m_pSpline->m_NumSplines;
                    /* end of inlined section */
    if ((int)uVar2 < 0) {
      fVar5 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)uVar2;
    }
    fVar7 = 0.0;
    fVar6 = this->m_splineBlend - 0.1;
    fVar8 = this->m_splineBlend + 0.1;
    ComputeSplinePoint__14EIBezierSplinef
              (&vMinPos,this->m_pSpline,(float)((int)fVar6 * (uint)(0.0 < fVar6)));
    ComputeSplinePoint__14EIBezierSplinef
              (&vMaxPos,this->m_pSpline,
               (float)((int)fVar8 * (uint)(fVar8 < fVar5) | (int)fVar5 * (uint)(fVar8 >= fVar5)));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = CONCAT44(vMaxPos.field0_0x0.d[1] - vMinPos.field0_0x0.d[1],
                     vMaxPos.field0_0x0.d[0] - vMinPos.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&(this->m_vSplineTan).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vSplineTan & 7;
    puVar3 = (ulong *)((int)&this->m_vSplineTan - uVar2);
    *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vSplineTan).field0_0x0.d[2] = vMaxPos.field0_0x0.d[2] - vMinPos.field0_0x0.d[2];
    if (*(int *)&this->m_splineDirection == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      (this->m_vSplineTan).field0_0x0.d[0] = -(this->m_vSplineTan).field0_0x0.d[0];
      fVar5 = (this->m_vSplineTan).field0_0x0.d[2];
      (this->m_vSplineTan).field0_0x0.d[1] = -(this->m_vSplineTan).field0_0x0.d[1];
      (this->m_vSplineTan).field0_0x0.d[2] = -fVar5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar5 = (this->m_vSplineTan).field0_0x0.d[0];
    }
    else {
      fVar5 = (this->m_vSplineTan).field0_0x0.d[0];
    }
    fVar6 = (this->m_vSplineTan).field0_0x0.d[1];
    fVar8 = (this->m_vSplineTan).field0_0x0.d[2];
    fVar5 = sqrtf(fVar5 * fVar5 + fVar6 * fVar6 + fVar8 * fVar8);
    fVar6 = (this->m_vSplineTan).field0_0x0.d[0];
    if (fVar5 != fVar7) {
      fVar5 = 1.0 / fVar5;
      (this->m_vSplineTan).field0_0x0.d[0] = fVar6 * fVar5;
      fVar6 = (this->m_vSplineTan).field0_0x0.d[2];
      (this->m_vSplineTan).field0_0x0.d[1] = (this->m_vSplineTan).field0_0x0.d[1] * fVar5;
      (this->m_vSplineTan).field0_0x0.d[2] = fVar6 * fVar5;
      fVar6 = (this->m_vSplineTan).field0_0x0.d[0];
    }
    (__return_storage_ptr__->field0_0x0).d[0] = fVar6;
    (__return_storage_ptr__->field0_0x0).d[1] = (this->m_vSplineTan).field0_0x0.d[1];
    (__return_storage_ptr__->field0_0x0).d[2] = (this->m_vSplineTan).field0_0x0.d[2];
  }
                    /* end of inlined section */
  return __return_storage_ptr__;
}

bool EIPlatform::SplineEnd() {
	float blendMax;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (this->m_pSpline == (EIBezierSpline *)0x0) {
    return false;
  }
  uVar1 = this->m_pSpline->m_NumSplines;
                    /* end of inlined section */
  if ((int)uVar1 < 0) {
    fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
    fVar3 = fVar3 + fVar3;
    fVar2 = this->m_splineBlend;
  }
  else {
    fVar3 = (float)uVar1;
    fVar2 = this->m_splineBlend;
  }
  if ((fVar2 != fVar3) && (fVar2 != 0.0)) {
    return false;
  }
  return true;
}

bool EIPlatform::SplineEndTravel() {
	float blendMax;
	
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (this->m_pSpline != (EIBezierSpline *)0x0) {
    uVar1 = this->m_pSpline->m_NumSplines;
                    /* end of inlined section */
    if ((int)uVar1 < 0) {
      fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar3 = fVar3 + fVar3;
      fVar4 = this->m_splineBlend;
    }
    else {
      fVar3 = (float)uVar1;
      fVar4 = this->m_splineBlend;
    }
    if ((((fVar4 != fVar3) || (bVar2 = true, *(int *)&this->m_splineDirection == 0)) &&
        (bVar2 = false, fVar4 == 0.0)) && (bVar2 = true, *(int *)&this->m_splineDirection != 0)) {
      bVar2 = false;
    }
    return bVar2;
  }
  return false;
}

void EIPlatform::UpdateRotateTo() {
  float fVar1;
  
  fVar1 = this->m_rotateToTime + _dt;
  this->m_rotateToTime = fVar1;
  if (fVar1 <= this->m_rotateToDuration) {
    SlerpNoInvert__5EQuatfRC5EQuatT2
              (&this->m_qRot,fVar1 / this->m_rotateToDuration,&this->m_qOldRot,&this->m_qDesiredRot)
    ;
  }
  return;
}

void EIPlatform::UpdateInstanceList() {
	EUpdateInstance *pNode;
	void *pNode;
	
  EIGameInstance *pEVar1;
  EStorable__vtable *pEVar2;
  EUpdateInstance *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((*(int *)&this->m_active != 0) &&
     (pEVar3 = (this->m_Instances).m_pHead, pEVar3 != (EUpdateInstance *)0x0)) {
    pEVar1 = pEVar3->pIGameInstance;
    while( true ) {
      pEVar2 = (pEVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar2[5].EStorable)
                ((int)((pEVar1->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar2[5].GetTypeVersion,&this->m_mLastOrient,
                 &this->m_mCurrentOrient);
      pEVar3 = pEVar3->pNext;
      if (pEVar3 == (EUpdateInstance *)0x0) break;
      pEVar1 = pEVar3->pIGameInstance;
    }
  }
  return;
}

void EIPlatform::PruneInstanceList() {
	EUpdateInstance *pNode;
	EUpdateInstance *pTemp;
	void *pNode;
	
  EUpdateInstance *pEVar1;
  long lVar2;
  EStorable__vtable *pEVar3;
  EUpdateInstance *pNode;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((*(int *)&this->m_active != 0) &&
     (pNode = (this->m_Instances).m_pHead, pNode != (EUpdateInstance *)0x0)) {
                    /* end of inlined section */
    pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    while( true ) {
      pEVar1 = pNode->pNext;
      lVar2 = (*(code *)pEVar3[0x11].GetTypeKey)
                        ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                         (int)*(short *)&pEVar3[0x11].GetTypeName,pNode->pIGameInstance);
      if (lVar2 == 0) {
        RemoveNode__10EIPlatformP15EUpdateInstance(this,pNode);
      }
      if (pEVar1 == (EUpdateInstance *)0x0) break;
      pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      pNode = pEVar1;
    }
  }
  return;
}

void EIPlatform::Init() {
	EIPlatform *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  EStorable__vtable *pEVar6;
  ulong *puVar7;
  bool bVar8;
  ERModel *pEVar9;
  ERScript *pEVar10;
  EMat4 *m;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  EMat4 *this_00;
  float fVar15;
  ulong uVar14;
  
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  *(undefined4 *)&this->m_startState = *(undefined4 *)&this->m_active;
  pEVar9 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei
                     (&_modelman.field0_0x0,this->m_modelId,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pModel = pEVar9;
  if (this->m_collisionScriptId != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar10 = (ERScript *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_scriptman.field0_0x0,this->m_collisionScriptId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pCollisionScript = pEVar10;
  }
  uVar13 = 0;
  if (this->m_updateScriptId != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar10 = (ERScript *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_scriptman.field0_0x0,this->m_updateScriptId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pUpdateScript = pEVar10;
  }
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar15 = (this->m_vPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_mOrient).field0_0x0.d[3][0] = (this->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_mOrient).field0_0x0.d[3][1] = fVar15;
  this_00 = &this->m_mCurrentOrient;
                    /* end of inlined section */
  uVar14 = (ulong)(int)this_00;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_mOrient).field0_0x0.d[3][2] = (this->m_vPos).field0_0x0.d[2];
  m = __as__5EMat4RC5EMat4(&this->m_mLastOrient,&this->m_mOrient);
  __as__5EMat4RC5EMat4(this_00,m);
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
  *(undefined4 *)&this->m_computeInv = 0;
  uVar12 = (ulong)(int)&this->m_mInvOrient;
  bVar8 = Invert__5EMat4RC5EMat4(&this->m_mInvOrient,this_00);
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vPos & 7;
  uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           (long)bVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&this->m_vPos - uVar4) >> uVar4 * 8;
  fVar15 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vDesiredPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vDesiredPos & 7;
  puVar7 = (ulong *)((int)&this->m_vDesiredPos - uVar3);
  *puVar7 = uVar11 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vDesiredPos).field0_0x0.d[2] = fVar15;
  puVar1 = (undefined *)((int)&(this->m_vDesiredPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vDesiredPos & 7;
  uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&this->m_vDesiredPos - uVar4) >> uVar4 * 8;
  fVar15 = (this->m_vDesiredPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vOldPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vOldPos & 7;
  puVar7 = (ulong *)((int)&this->m_vOldPos - uVar3);
  *puVar7 = uVar13 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vOldPos).field0_0x0.d[2] = fVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[1] = 0.0;
  (this->m_vScaleToTime).field0_0x0.d[2] = 0.0;
  (this->m_vScaleToTime).field0_0x0.d[0] = 0.0;
  (this->m_vScaleToDuration).field0_0x0.d[1] = 0.0;
  (this->m_vScaleToDuration).field0_0x0.d[2] = 0.0;
  (this->m_vScaleToDuration).field0_0x0.d[0] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vScale & 7;
  uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&this->m_vScale - uVar4) >> uVar4 * 8;
  fVar15 = (this->m_vScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vDesiredScale).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vDesiredScale & 7;
  puVar7 = (ulong *)((int)&this->m_vDesiredScale - uVar3);
  *puVar7 = uVar13 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vDesiredScale).field0_0x0.d[2] = fVar15;
  puVar1 = (undefined *)((int)&(this->m_vDesiredScale).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vDesiredScale & 7;
  uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           uVar14 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&this->m_vDesiredScale - uVar4) >> uVar4 * 8;
  fVar5 = (this->m_vDesiredScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vOldScale).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vOldScale & 7;
  puVar7 = (ulong *)((int)&this->m_vOldScale - uVar3);
  *puVar7 = uVar13 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vOldScale).field0_0x0.d[2] = fVar5;
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vScale & 7;
  uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           uVar12 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&this->m_vScale - uVar4) >> uVar4 * 8;
  fVar5 = (this->m_vScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vStoredScale).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vStoredScale & 7;
  puVar7 = (ulong *)((int)&this->m_vStoredScale - uVar3);
  *puVar7 = uVar13 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vStoredScale).field0_0x0.d[2] = fVar5;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vPos & 7;
  uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           (long)(int)&this->m_vScaleToDuration & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
           -1L << (8 - uVar4) * 8 | *(ulong *)((int)&this->m_vPos - uVar4) >> uVar4 * 8;
  fVar5 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vStoredPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vStoredPos & 7;
  puVar7 = (ulong *)((int)&this->m_vStoredPos - uVar3);
  *puVar7 = uVar11 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vStoredPos).field0_0x0.d[2] = fVar5;
  puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_qRot & 7;
  uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           (long)(int)fVar15 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&this->m_qRot - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 0xf);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 8);
  uVar4 = (uint)puVar2 & 7;
  uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(this->m_qStoredRot).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_qStoredRot & 7;
  puVar7 = (ulong *)((int)&this->m_qStoredRot - uVar3);
  *puVar7 = uVar13 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_qStoredRot).field0_0x0 + 0xf);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_qStoredRot).field0_0x0 + 8);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = uVar11 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  pEVar6 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar6[0xf].EStorable)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar6[0xf].GetTypeVersion);
  this->m_time = 0.0;
  return;
}

void EIPlatform::InitDebug(u32 pId, bool collision, bool visibility, u32 collideScript, u32 updateScript, u32 modelId, EVec3 vPos) {
	EIPlatform *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ERScript *pEVar5;
  ERModel *pEVar6;
  EMat4 *m;
  ulong in_v1;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
  *(undefined4 *)&this->m_startState = 1;
  (this->field0_0x0).field0_0x0.m_instanceId = pId;
  *(int *)&this->m_collision = (int)collision;
  *(int *)&this->m_visible = (int)visibility;
  *(undefined4 *)&this->m_active = 1;
  this->m_collisionScriptId = collideScript;
  if (collideScript != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar5 = (ERScript *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_scriptman.field0_0x0,collideScript,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pCollisionScript = pEVar5;
  }
  this->m_updateScriptId = updateScript;
  if (updateScript != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar5 = (ERScript *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_scriptman.field0_0x0,updateScript,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pUpdateScript = pEVar5;
  }
  this->m_modelId = modelId;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  uVar8 = 0;
  pEVar6 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,modelId,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pModel = pEVar6;
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vPos & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
  fVar9 = (vPos->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar4 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar9;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = (this->m_vPos).field0_0x0.d[1];
  (this->m_mOrient).field0_0x0.d[3][0] = (this->m_vPos).field0_0x0.d[0];
  (this->m_mOrient).field0_0x0.d[3][1] = fVar9;
                    /* end of inlined section */
  (this->m_mOrient).field0_0x0.d[3][2] = (this->m_vPos).field0_0x0.d[2];
  m = __as__5EMat4RC5EMat4(&this->m_mLastOrient,&this->m_mOrient);
  __as__5EMat4RC5EMat4(&this->m_mCurrentOrient,m);
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
  *(undefined4 *)&this->m_computeInv = 0;
  Invert__5EMat4RC5EMat4(&this->m_mInvOrient,&this->m_mCurrentOrient);
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vPos & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
  fVar9 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vDesiredPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDesiredPos & 7;
  puVar4 = (ulong *)((int)&this->m_vDesiredPos - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDesiredPos).field0_0x0.d[2] = fVar9;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  puVar1 = (undefined *)((int)&(this->m_vDesiredPos).field0_0x0 + 7);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vDesiredPos & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vDesiredPos - uVar3) >> uVar3 * 8;
  fVar9 = (this->m_vDesiredPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vOldPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vOldPos & 7;
  puVar4 = (ulong *)((int)&this->m_vOldPos - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vOldPos).field0_0x0.d[2] = fVar9;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScale).field0_0x0.d[1] = 1.0;
  (this->m_vScale).field0_0x0.d[2] = 1.0;
  (this->m_vScale).field0_0x0.d[0] = 1.0;
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vScale & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)(int)&this->m_vScale & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
          -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_vScale - uVar3) >> uVar3 * 8;
  fVar9 = (this->m_vScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vDesiredScale).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDesiredScale & 7;
  puVar4 = (ulong *)((int)&this->m_vDesiredScale - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDesiredScale).field0_0x0.d[2] = fVar9;
  puVar1 = (undefined *)((int)&(this->m_vDesiredScale).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vDesiredScale & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vDesiredScale - uVar3) >> uVar3 * 8;
  fVar9 = (this->m_vDesiredScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vOldScale).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vOldScale & 7;
  puVar4 = (ulong *)((int)&this->m_vOldScale - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vOldScale).field0_0x0.d[2] = fVar9;
  return;
}

bool EIPlatform::CollidePointWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pInst) {
	EVec3 vModelStart;
	EVec3 vUseEnd;
	float tmult;
	bool collided;
	EIPlatform *this;
	EVec3 &vLeft;
	EVec3 &vLeft;
	int cSubModel;
	ESubModel *pSubModel;
	int index;
	int cShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	ESubModelShader *pSubModelShader;
	TArray<ESubModelShader> *this;
	int index;
	EVec3 &vLeft;
	EVec3 &v;
	EVec3 vR;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  EStorable__vtable *pEVar5;
  ulong *puVar6;
  undefined uVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  EVec3 vModelStart;
  EVec3 vUseEnd;
  EVec3 vR;
  uint local_d0;
  int local_cc;
  EInstance *local_c8;
  bool collided;
  int index;
  
  local_cc = (int)testOnly;
  if ((*(int *)&this->m_active == 0) || (*(int *)&this->m_collision == 0)) {
    uVar7 = 0;
  }
  else {
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
    if (*(int *)&this->m_computeInv != 0) {
      *(undefined4 *)&this->m_computeInv = 0;
      Invert__5EMat4RC5EMat4(&this->m_mInvOrient,&this->m_mCurrentOrient);
    }
    fVar14 = (vStart->field0_0x0).d[0];
                    /* end of inlined section */
    index = 0;
    fVar27 = 1.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar20 = (vStart->field0_0x0).d[1];
                    /* end of inlined section */
    _collided = 0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar18 = (this->m_mInvOrient).field0_0x0.d[0];
    fVar15 = (vEnd->field0_0x0).d[0];
    fVar16 = (this->m_mInvOrient).field0_0x0.d[1][2];
    fVar24 = (vEnd->field0_0x0).d[1];
    fVar21 = (this->m_mInvOrient).field0_0x0.d[2][0];
    fVar17 = (vStart->field0_0x0).d[2];
    fVar19 = (vEnd->field0_0x0).d[2];
    fVar22 = (this->m_mInvOrient).field0_0x0.d[2][1];
    fVar25 = (this->m_mInvOrient).field0_0x0.d[3][0];
    fVar26 = (this->m_mInvOrient).field0_0x0.d[3][1];
    fVar23 = (this->m_mInvOrient).field0_0x0.d[3][2];
    vModelStart.field0_0x0.d[0] =
         fVar14 * fVar18 + fVar20 * (this->m_mInvOrient).field0_0x0.d[1][0] + fVar17 * fVar21 +
         fVar25;
    vModelStart.field0_0x0.d[1] =
         fVar14 * (this->m_mInvOrient).field0_0x0.d[1] +
         fVar20 * (this->m_mInvOrient).field0_0x0.d[1][1] + fVar17 * fVar22 + fVar26;
    vModelStart.field0_0x0.d[2] =
         fVar14 * (this->m_mInvOrient).field0_0x0.d[2] + fVar20 * fVar16 +
         fVar17 * (this->m_mInvOrient).field0_0x0.d[2][2] + fVar23;
    vUseEnd.field0_0x0.d[2] =
         fVar15 * (this->m_mInvOrient).field0_0x0.d[2] + fVar24 * fVar16 +
         fVar19 * (this->m_mInvOrient).field0_0x0.d[2][2] + fVar23;
    vUseEnd.field0_0x0._0_8_ =
         CONCAT44(fVar15 * (this->m_mInvOrient).field0_0x0.d[1] +
                  fVar24 * (this->m_mInvOrient).field0_0x0.d[1][1] + fVar19 * fVar22 + fVar26,
                  fVar15 * fVar18 + fVar24 * (this->m_mInvOrient).field0_0x0.d[1][0] +
                  fVar19 * fVar21 + fVar25);
                    /* end of inlined section */
    local_c8 = pInst;
    if (0 < (this->m_pModel->m_subModels).field0_0x0.m_size) {
      iVar13 = 0;
      local_d0 = type;
      do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        piVar11 = (int *)((int)(this->m_pModel->m_subModels).field0_0x0.m_p + iVar13);
                    /* end of inlined section */
        iVar10 = 0;
        if (0 < piVar11[1]) {
          iVar12 = 0;
          do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
            iVar4 = *piVar11;
                    /* end of inlined section */
            if (((local_d0 != 0x20) ||
                (bVar8 = IsCollideable__15ESubModelShader((ESubModelShader *)(iVar4 + iVar12)),
                bVar8)) &&
               (uVar9 = (long)(int)ciOut,
               bVar8 = CollidePoint__15ESubModelShaderR14ECollisionInfoRC5EVec3T2b
                                 ((ESubModelShader *)(iVar4 + iVar12),ciOut,&vModelStart,&vUseEnd,
                                  SUB41(local_cc,0)), bVar8)) {
              if (local_cc != 0) {
                return true;
              }
              _collided = 1;
              fVar27 = fVar27 * ciOut->t;
              puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
              uVar2 = (uint)puVar1 & 7;
              uVar3 = (uint)&ciOut->vPos & 7;
              vUseEnd.field0_0x0._0_8_ =
                   (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                   uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
              vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
              puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
              uVar2 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar2);
              *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                        (ulong)vUseEnd.field0_0x0._0_8_ >> (7 - uVar2) * 8;
            }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
            iVar10 = iVar10 + 1;
            iVar12 = iVar12 + 0x4c;
          } while (iVar10 < piVar11[1]);
        }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
        index = index + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
        iVar13 = iVar13 + 0x18;
      } while (index < (this->m_pModel->m_subModels).field0_0x0.m_size);
    }
    if (_collided != 0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar14 = (ciOut->vPos).field0_0x0.d[0];
                    /* end of inlined section */
      ciOut->t = ciOut->t * fVar27;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar16 = (ciOut->vPos).field0_0x0.d[1];
      fVar27 = (this->m_mCurrentOrient).field0_0x0.d[2];
      fVar19 = (this->m_mCurrentOrient).field0_0x0.d[1][2];
      fVar18 = (ciOut->vPos).field0_0x0.d[2];
      fVar15 = (this->m_mCurrentOrient).field0_0x0.d[2][2];
      fVar17 = (this->m_mCurrentOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
      uVar9 = CONCAT44(fVar14 * (this->m_mCurrentOrient).field0_0x0.d[1] +
                       fVar16 * (this->m_mCurrentOrient).field0_0x0.d[1][1] +
                       fVar18 * (this->m_mCurrentOrient).field0_0x0.d[2][1] +
                       (this->m_mCurrentOrient).field0_0x0.d[3][1],
                       fVar14 * (this->m_mCurrentOrient).field0_0x0.d[0] +
                       fVar16 * (this->m_mCurrentOrient).field0_0x0.d[1][0] +
                       fVar18 * (this->m_mCurrentOrient).field0_0x0.d[2][0] +
                       (this->m_mCurrentOrient).field0_0x0.d[3][0]);
      puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
      uVar2 = (uint)&ciOut->vPos & 7;
      puVar6 = (ulong *)((int)&ciOut->vPos - uVar2);
      *puVar6 = uVar9 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (ciOut->vPos).field0_0x0.d[2] = fVar14 * fVar27 + fVar16 * fVar19 + fVar18 * fVar15 + fVar17;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar27 = (ciOut->vNormal).field0_0x0.d[0];
      fVar18 = (ciOut->vNormal).field0_0x0.d[1];
      fVar17 = (this->m_mCurrentOrient).field0_0x0.d[2];
      fVar15 = (this->m_mCurrentOrient).field0_0x0.d[1][2];
      fVar14 = (ciOut->vNormal).field0_0x0.d[2];
      fVar16 = (this->m_mCurrentOrient).field0_0x0.d[2][2];
                    /* end of inlined section */
      uVar9 = CONCAT44(fVar27 * (this->m_mCurrentOrient).field0_0x0.d[1] +
                       fVar18 * (this->m_mCurrentOrient).field0_0x0.d[1][1] +
                       fVar14 * (this->m_mCurrentOrient).field0_0x0.d[2][1],
                       fVar27 * (this->m_mCurrentOrient).field0_0x0.d[0] +
                       fVar18 * (this->m_mCurrentOrient).field0_0x0.d[1][0] +
                       fVar14 * (this->m_mCurrentOrient).field0_0x0.d[2][0]);
      puVar1 = (undefined *)((int)&(ciOut->vNormal).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
      uVar2 = (uint)&ciOut->vNormal & 7;
      puVar6 = (ulong *)((int)&ciOut->vNormal - uVar2);
      *puVar6 = uVar9 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (ciOut->vNormal).field0_0x0.d[2] = fVar27 * fVar17 + fVar18 * fVar15 + fVar14 * fVar16;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar14 = (ciOut->vNormal).field0_0x0.d[0];
      fVar27 = (ciOut->vNormal).field0_0x0.d[1];
      fVar15 = (ciOut->vNormal).field0_0x0.d[2];
      fVar27 = sqrtf(fVar14 * fVar14 + fVar27 * fVar27 + fVar15 * fVar15);
      if (fVar27 == 0.0) {
        ciOut->pInst = (EInstance *)this;
      }
      else {
        fVar27 = 1.0 / fVar27;
        (ciOut->vNormal).field0_0x0.d[0] = (ciOut->vNormal).field0_0x0.d[0] * fVar27;
        fVar14 = (ciOut->vNormal).field0_0x0.d[2];
        (ciOut->vNormal).field0_0x0.d[1] = (ciOut->vNormal).field0_0x0.d[1] * fVar27;
        (ciOut->vNormal).field0_0x0.d[2] = fVar14 * fVar27;
                    /* end of inlined section */
        ciOut->pInst = (EInstance *)this;
      }
      if (local_c8 != (EInstance *)0x0) {
        pEVar5 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar5[0x10].Read)
                  ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                   (int)*(short *)&pEVar5[0x10].EStorable,local_c8);
      }
    }
    uVar7 = (undefined)_collided;
  }
  return (bool)uVar7;
}

bool EIPlatform::CollideSphereWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pInst) {
	EVec3 vModelStart;
	float modelRadius;
	float tmult;
	bool collided;
	EVec3 vUseEnd;
	EIPlatform *this;
	EVec3 &vLeft;
	EVec3 &vLeft;
	int cSubModel;
	ESubModel *pSubModel;
	int index;
	int cShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	EVec3 &vLeft;
	EVec3 &v;
	EVec3 vR;
	
  undefined *puVar1;
  uint uVar2;
  EStorable__vtable *pEVar3;
  uint uVar4;
  ulong *puVar5;
  undefined uVar6;
  bool bVar7;
  int iVar8;
  ERModel *pEVar9;
  ulong uVar10;
  ESubModel *this_00;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  EVec3 vModelStart;
  EVec3 vUseEnd;
  EVec3 vR;
  EInstance *local_c0;
  bool collided;
  
  if ((*(int *)&this->m_active == 0) || (*(int *)&this->m_collision == 0)) {
    uVar6 = 0;
  }
  else {
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
    if (*(int *)&this->m_computeInv != 0) {
      *(undefined4 *)&this->m_computeInv = 0;
      Invert__5EMat4RC5EMat4(&this->m_mInvOrient,&this->m_mCurrentOrient);
    }
    fVar14 = (vStart->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar18 = (vStart->field0_0x0).d[1];
                    /* end of inlined section */
    _collided = 0;
    fVar15 = 1.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar16 = (vStart->field0_0x0).d[2];
    vModelStart.field0_0x0.d[0] =
         fVar14 * (this->m_mInvOrient).field0_0x0.d[0] +
         fVar18 * (this->m_mInvOrient).field0_0x0.d[1][0] +
         fVar16 * (this->m_mInvOrient).field0_0x0.d[2][0] + (this->m_mInvOrient).field0_0x0.d[3][0];
    vModelStart.field0_0x0.d[1] =
         fVar14 * (this->m_mInvOrient).field0_0x0.d[1] +
         fVar18 * (this->m_mInvOrient).field0_0x0.d[1][1] +
         fVar16 * (this->m_mInvOrient).field0_0x0.d[2][1] + (this->m_mInvOrient).field0_0x0.d[3][1];
    vModelStart.field0_0x0.d[2] =
         fVar14 * (this->m_mInvOrient).field0_0x0.d[2] +
         fVar18 * (this->m_mInvOrient).field0_0x0.d[1][2] +
         fVar16 * (this->m_mInvOrient).field0_0x0.d[2][2] + (this->m_mInvOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
    fVar14 = GetMaxScale__C5EMat4(&this->m_mInvOrient);
    fVar14 = radius * fVar14;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar16 = (vEnd->field0_0x0).d[0];
    fVar19 = (vEnd->field0_0x0).d[1];
    fVar18 = (vEnd->field0_0x0).d[2];
    vUseEnd.field0_0x0.d[2] =
         fVar16 * (this->m_mInvOrient).field0_0x0.d[2] +
         fVar19 * (this->m_mInvOrient).field0_0x0.d[1][2] +
         fVar18 * (this->m_mInvOrient).field0_0x0.d[2][2] + (this->m_mInvOrient).field0_0x0.d[3][2];
    vUseEnd.field0_0x0._0_8_ =
         CONCAT44(fVar16 * (this->m_mInvOrient).field0_0x0.d[1] +
                  fVar19 * (this->m_mInvOrient).field0_0x0.d[1][1] +
                  fVar18 * (this->m_mInvOrient).field0_0x0.d[2][1] +
                  (this->m_mInvOrient).field0_0x0.d[3][1],
                  fVar16 * (this->m_mInvOrient).field0_0x0.d[0] +
                  fVar19 * (this->m_mInvOrient).field0_0x0.d[1][0] +
                  fVar18 * (this->m_mInvOrient).field0_0x0.d[2][0] +
                  (this->m_mInvOrient).field0_0x0.d[3][0]);
                    /* end of inlined section */
    iVar13 = 0;
    local_c0 = pInst;
    if (0 < (this->m_pModel->m_subModels).field0_0x0.m_size) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      pEVar9 = this->m_pModel;
      do {
        iVar11 = iVar13 * 0x18;
                    /* end of inlined section */
        iVar13 = iVar13 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        this_00 = (ESubModel *)((int)(pEVar9->m_subModels).field0_0x0.m_p + iVar11);
                    /* end of inlined section */
        iVar11 = 0;
        if (0 < (this_00->m_subModelShaders).field0_0x0.m_size) {
          iVar12 = 0;
          do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
            if ((type != 0x20) ||
               (bVar7 = IsCollideable__15ESubModelShader
                                  ((ESubModelShader *)
                                   ((int)(this_00->m_subModelShaders).field0_0x0.m_p + iVar12)),
               bVar7)) {
              uVar10 = (long)(int)this_00;
              bVar7 = CollideSphere__9ESubModelR14ECollisionInfoRC5EVec3T2f
                                (this_00,ciOut,&vModelStart,&vUseEnd,fVar14);
              if (bVar7) {
                _collided = 1;
                fVar15 = fVar15 * ciOut->t;
                puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
                uVar4 = (uint)puVar1 & 7;
                uVar2 = (uint)&ciOut->vPos & 7;
                vUseEnd.field0_0x0._0_8_ =
                     (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                     uVar10 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)((int)&ciOut->vPos - uVar2) >> uVar2 * 8;
                vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
                puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
                uVar4 = (uint)puVar1 & 7;
                puVar5 = (ulong *)(puVar1 + -uVar4);
                *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                          (ulong)vUseEnd.field0_0x0._0_8_ >> (7 - uVar4) * 8;
              }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
              iVar8 = (this_00->m_subModelShaders).field0_0x0.m_size;
            }
            else {
              iVar8 = (this_00->m_subModelShaders).field0_0x0.m_size;
            }
                    /* end of inlined section */
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + 0x4c;
          } while (iVar11 < iVar8);
        }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        pEVar9 = this->m_pModel;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      } while (iVar13 < (pEVar9->m_subModels).field0_0x0.m_size);
    }
    uVar6 = (undefined)_collided;
    if (_collided != 0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar14 = (ciOut->vPos).field0_0x0.d[0];
                    /* end of inlined section */
      ciOut->t = ciOut->t * fVar15;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar18 = (ciOut->vPos).field0_0x0.d[1];
      fVar15 = (this->m_mCurrentOrient).field0_0x0.d[2];
      fVar20 = (this->m_mCurrentOrient).field0_0x0.d[1][2];
      fVar17 = (ciOut->vPos).field0_0x0.d[2];
      fVar16 = (this->m_mCurrentOrient).field0_0x0.d[2][2];
      fVar19 = (this->m_mCurrentOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
      uVar10 = CONCAT44(fVar14 * (this->m_mCurrentOrient).field0_0x0.d[1] +
                        fVar18 * (this->m_mCurrentOrient).field0_0x0.d[1][1] +
                        fVar17 * (this->m_mCurrentOrient).field0_0x0.d[2][1] +
                        (this->m_mCurrentOrient).field0_0x0.d[3][1],
                        fVar14 * (this->m_mCurrentOrient).field0_0x0.d[0] +
                        fVar18 * (this->m_mCurrentOrient).field0_0x0.d[1][0] +
                        fVar17 * (this->m_mCurrentOrient).field0_0x0.d[2][0] +
                        (this->m_mCurrentOrient).field0_0x0.d[3][0]);
      puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
      uVar4 = (uint)&ciOut->vPos & 7;
      puVar5 = (ulong *)((int)&ciOut->vPos - uVar4);
      *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (ciOut->vPos).field0_0x0.d[2] = fVar14 * fVar15 + fVar18 * fVar20 + fVar17 * fVar16 + fVar19;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar15 = (ciOut->vNormal).field0_0x0.d[0];
      fVar17 = (ciOut->vNormal).field0_0x0.d[1];
      fVar19 = (this->m_mCurrentOrient).field0_0x0.d[2];
      fVar16 = (this->m_mCurrentOrient).field0_0x0.d[1][2];
      fVar14 = (ciOut->vNormal).field0_0x0.d[2];
      fVar18 = (this->m_mCurrentOrient).field0_0x0.d[2][2];
                    /* end of inlined section */
      uVar10 = CONCAT44(fVar15 * (this->m_mCurrentOrient).field0_0x0.d[1] +
                        fVar17 * (this->m_mCurrentOrient).field0_0x0.d[1][1] +
                        fVar14 * (this->m_mCurrentOrient).field0_0x0.d[2][1],
                        fVar15 * (this->m_mCurrentOrient).field0_0x0.d[0] +
                        fVar17 * (this->m_mCurrentOrient).field0_0x0.d[1][0] +
                        fVar14 * (this->m_mCurrentOrient).field0_0x0.d[2][0]);
      puVar1 = (undefined *)((int)&(ciOut->vNormal).field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
      uVar4 = (uint)&ciOut->vNormal & 7;
      puVar5 = (ulong *)((int)&ciOut->vNormal - uVar4);
      *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (ciOut->vNormal).field0_0x0.d[2] = fVar15 * fVar19 + fVar17 * fVar16 + fVar14 * fVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar14 = (ciOut->vNormal).field0_0x0.d[0];
      fVar15 = (ciOut->vNormal).field0_0x0.d[1];
      fVar16 = (ciOut->vNormal).field0_0x0.d[2];
      fVar15 = sqrtf(fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16);
      if (fVar15 == 0.0) {
        ciOut->pInst = (EInstance *)this;
      }
      else {
        fVar15 = 1.0 / fVar15;
        (ciOut->vNormal).field0_0x0.d[0] = (ciOut->vNormal).field0_0x0.d[0] * fVar15;
        fVar14 = (ciOut->vNormal).field0_0x0.d[2];
        (ciOut->vNormal).field0_0x0.d[1] = (ciOut->vNormal).field0_0x0.d[1] * fVar15;
        (ciOut->vNormal).field0_0x0.d[2] = fVar14 * fVar15;
                    /* end of inlined section */
        ciOut->pInst = (EInstance *)this;
      }
      if (local_c0 != (EInstance *)0x0) {
        pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar3[0x10].Read)
                  ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                   (int)*(short *)&pEVar3[0x10].EStorable);
      }
    }
  }
  return (bool)uVar6;
}

bool EIPlatform::CollisionTest(EIGameInstance *pIGameInstance) {
	ECollisionInfo cInfo;
	EVec3 vStart;
	EVec3 vEnd;
	
  EStorable__vtable *pEVar1;
  bool bVar2;
  long lVar3;
  ECollisionInfo cInfo;
  EVec3 vStart;
  EVec3 vEnd;
  
  pEVar1 = (pIGameInstance->field0_0x0).field0_0x0.__vtable;
  lVar3 = (*(code *)pEVar1[5].Write)
                    ((int)((pIGameInstance->field0_0x0).m_otd.m_minPos + -7) +
                     (int)*(short *)&pEVar1[5].Read,&vStart);
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    vEnd.field0_0x0.d[2] = vStart.field0_0x0.d[2] - 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vEnd.field0_0x0.d[0] = vStart.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vEnd.field0_0x0.d[1] = vStart.field0_0x0.d[1];
                    /* end of inlined section */
    bVar2 = CollidePointWithInstance__10EIPlatformR14ECollisionInfoRC5EVec3T2UibP9EInstance
                      (this,&cInfo,&vStart,&vEnd,0x20,true,(EInstance *)0x0);
  }
  return bVar2;
}

u32 EIPlatform::VisibilityTest(EPortalWindow &win, u32 parentVis) {
  uint uVar1;
  
  if ((*(int *)&this->m_active == 0) || (*(int *)&this->m_visible == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = Test__13EPortalWindowRC12EBoundSphereUi(win,&this->m_boundSphere,parentVis);
    this->m_currentVis = uVar1;
  }
  return uVar1;
}

bool EIPlatform::GetAbsolutePosition(EVec3 &vPos) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v1;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vPos & 7;
  *(ulong *)((int)vPos - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vPos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vPos->field0_0x0).d[2] = fVar4;
  return true;
}

void EIPlatform::ComputeBounds() {
	EBound3 b;
	EVec3 &vLeft;
	EMat4 &mRight;
	
  undefined *puVar1;
  uint uVar2;
  ERModel *pEVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  EBound3 b;
  
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  pEVar3 = this->m_pModel;
  fVar11 = (pEVar3->m_boundSphere).vCenter.field0_0x0.d[1];
  fVar7 = (pEVar3->m_boundSphere).vCenter.field0_0x0.d[0];
  fVar9 = (this->m_mCurrentOrient).field0_0x0.d[1][2];
  fVar8 = (this->m_mCurrentOrient).field0_0x0.d[2];
  fVar13 = (pEVar3->m_boundSphere).vCenter.field0_0x0.d[2];
  fVar10 = (this->m_mCurrentOrient).field0_0x0.d[2][2];
  fVar12 = (this->m_mCurrentOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
  uVar6 = CONCAT44(fVar7 * (this->m_mCurrentOrient).field0_0x0.d[1] +
                   fVar11 * (this->m_mCurrentOrient).field0_0x0.d[1][1] +
                   fVar13 * (this->m_mCurrentOrient).field0_0x0.d[2][1] +
                   (this->m_mCurrentOrient).field0_0x0.d[3][1],
                   fVar7 * (this->m_mCurrentOrient).field0_0x0.d[0] +
                   fVar11 * (this->m_mCurrentOrient).field0_0x0.d[1][0] +
                   fVar13 * (this->m_mCurrentOrient).field0_0x0.d[2][0] +
                   (this->m_mCurrentOrient).field0_0x0.d[3][0]);
  puVar1 = (undefined *)((int)&(this->m_boundSphere).vCenter.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_boundSphere & 7;
  puVar5 = (ulong *)((int)&this->m_boundSphere - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_boundSphere).vCenter.field0_0x0.d[2] =
       fVar7 * fVar8 + fVar11 * fVar9 + fVar13 * fVar10 + fVar12;
  fVar8 = GetMaxScale__C5EMat4(&this->m_mCurrentOrient);
  pEVar3 = this->m_pModel;
  fVar7 = (pEVar3->m_boundSphere).radius;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
  uVar4 = (uint)&b.vMax & 7;
  puVar5 = (ulong *)((int)&b.vMax - uVar4);
  *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  b.vMax.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  (this->m_boundSphere).radius = fVar7 * fVar8;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar4 = (uint)puVar1 & 7;
  uVar2 = (uint)&b.vMax & 7;
  b.vMin.field0_0x0._0_8_ =
       *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)&b.vMax - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
  b.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  Compute__7EBound3RC7EBound3RC5EMat4(&b,&pEVar3->m_boundBox,&this->m_mCurrentOrient);
  SetBounds__9EInstanceRC7EBound3((EInstance *)this,&b);
  return;
}

void EIPlatform::GetBoundSphere(EBoundSphere &boundSphereOut) {
	EBoundSphere *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_boundSphere).vCenter.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_boundSphere & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_boundSphere - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_boundSphere).vCenter.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(boundSphereOut->vCenter).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)boundSphereOut & 7;
  *(ulong *)((int)boundSphereOut - uVar2) =
       uVar6 << uVar2 * 8 |
       *(ulong *)((int)boundSphereOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (boundSphereOut->vCenter).field0_0x0.d[2] = fVar4;
  boundSphereOut->radius = (this->m_boundSphere).radius;
  return;
}

void EIPlatform::Read(EStream &s) {
	EStream &s;
	u8 v;
	u8 v;
	u8 v;
	
  EStream *pEVar1;
  EStorable__vtable *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uchar v;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Read__9EInstanceR7EStream((EInstance *)this,s);
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
                    /* end of inlined section */
  if (_10EIPlatform_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_active = (uint)(v != '\0');
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_collision = (uint)(v != '\0');
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_visible = (uint)(v != '\0');
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_updateScriptId,
               4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
               &this->m_collisionScriptId,4);
                    /* end of inlined section */
    pEVar1 = __rs__FR7EStreamR5EVec3(s,&this->m_vPos);
    pEVar1 = __rs__FR7EStreamR5EVec3(pEVar1,&this->m_vScale);
    pEVar1 = __rs__FR7EStreamR5EQuat(pEVar1,&this->m_qRot);
    pEVar1 = __rs__FR7EStreamR5EMat4(pEVar1,&this->m_mOrient);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_modelId,4);
                    /* end of inlined section */
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  }
  else {
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  }
  (*(code *)pEVar2[2].SafeDelete)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) + (int)*(short *)(pEVar2 + 2))
  ;
  return;
}

void EIPlatform::Write(EStream &s) {
	EStream &s;
	u8 v;
	u8 v;
	u8 v;
	unsigned int d;
	unsigned int d;
	unsigned int d;
	
  EStream *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uchar v;
  uint local_50;
  uint local_4c;
  uint d;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  Write__9EInstanceR7EStream((EInstance *)this,s);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  v = *(int *)&this->m_active != 0;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
  v = *(int *)&this->m_collision != 0;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
  v = *(int *)&this->m_visible != 0;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
  local_50 = this->m_updateScriptId;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_50,4);
  local_4c = this->m_collisionScriptId;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_4c,4);
                    /* end of inlined section */
  pEVar1 = __ls__FR7EStreamRC5EVec3(s,&this->m_vPos);
  pEVar1 = __ls__FR7EStreamRC5EVec3(pEVar1,&this->m_vScale);
  pEVar1 = __ls__FR7EStreamRC5EQuat(pEVar1,&this->m_qRot);
  pEVar1 = __ls__FR7EStreamRC5EMat4(pEVar1,&this->m_mOrient);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  d = this->m_modelId;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&d,4);
  return;
}

bool EIPlatform::MoveTo(EVec3 &vPos, float speed, EInstance *pInstance) {
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  ulong uVar6;
  ulong in_a3;
  ulong in_t0;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* end of inlined section */
  if ((long)*(int *)&this->m_active == 0) {
    bVar5 = false;
  }
  else {
    puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vPos & 7;
    uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            (long)*(int *)&this->m_active & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
            -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
    fVar7 = (this->m_vPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->m_vOldPos).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vOldPos & 7;
    puVar4 = (ulong *)((int)&this->m_vOldPos - uVar2);
    *puVar4 = uVar6 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vOldPos).field0_0x0.d[2] = fVar7;
    if (0.0 < speed) {
      this->m_moveToTime = 0.0;
      puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)vPos & 7;
      uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
      fVar7 = (vPos->field0_0x0).d[2];
      puVar1 = (undefined *)((int)&(this->m_vDesiredPos).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
      uVar2 = (uint)&this->m_vDesiredPos & 7;
      puVar4 = (ulong *)((int)&this->m_vDesiredPos - uVar2);
      *puVar4 = uVar6 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (this->m_vDesiredPos).field0_0x0.d[2] = fVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar8 = (this->m_vDesiredPos).field0_0x0.d[0] - (this->m_vOldPos).field0_0x0.d[0];
      fVar9 = (this->m_vDesiredPos).field0_0x0.d[1] - (this->m_vOldPos).field0_0x0.d[1];
      fVar7 = (this->m_vDesiredPos).field0_0x0.d[2] - (this->m_vOldPos).field0_0x0.d[2];
      fVar7 = sqrtf(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
                    /* end of inlined section */
      this->m_moveToDuration = fVar7 / speed;
    }
    else {
      this->m_moveToDuration = 0.0;
      puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)vPos & 7;
      uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
      fVar7 = (vPos->field0_0x0).d[2];
      puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
      uVar2 = (uint)&this->m_vPos & 7;
      puVar4 = (ulong *)((int)&this->m_vPos - uVar2);
      *puVar4 = uVar6 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (this->m_vPos).field0_0x0.d[2] = fVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      (this->m_mCurrentOrient).field0_0x0.d[3][0] = (vPos->field0_0x0).d[0];
      (this->m_mCurrentOrient).field0_0x0.d[3][1] = (vPos->field0_0x0).d[1];
      (this->m_mCurrentOrient).field0_0x0.d[3][2] = (vPos->field0_0x0).d[2];
      puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
                    /* end of inlined section */
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)vPos & 7;
      uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
      fVar7 = (vPos->field0_0x0).d[2];
      puVar1 = (undefined *)((int)&(this->m_vDesiredPos).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
      uVar2 = (uint)&this->m_vDesiredPos & 7;
      puVar4 = (ulong *)((int)&this->m_vDesiredPos - uVar2);
      *puVar4 = uVar6 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (this->m_vDesiredPos).field0_0x0.d[2] = fVar7;
    }
    bVar5 = true;
  }
  return bVar5;
}

bool EIPlatform::MoveToRelative(EVec3 &vPos, float duration, EInstance *pInstance) {
	EVec3 *this;
	EVec3 &v;
	
  EStorable__vtable *pEVar1;
  undefined uVar2;
  undefined8 unaff_retaddr;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_active == 0) {
    uVar2 = 0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_18 = (this->m_vPos).field0_0x0.d[2] + (vPos->field0_0x0).d[2];
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1c = (this->m_vPos).field0_0x0.d[1] + (vPos->field0_0x0).d[1];
    local_20 = (this->m_vPos).field0_0x0.d[0] + (vPos->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar2 = (**(code **)(pEVar1 + 7))
                      ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                       (int)*(short *)&pEVar1[6].Write,&local_20,pInstance);
  }
  return (bool)uVar2;
}

bool EIPlatform::RotateTo(EVec3 &vRot, float duration, EInstance *pInstance) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  short sVar1;
  EStorable__vtable *pEVar2;
  undefined uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EQuat EStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_active == 0) {
    uVar3 = 0;
  }
  else {
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
    sVar1 = *(short *)&pEVar2[7].Read;
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
    Set__5EQuatfff(&EStack_60,(vRot->field0_0x0).d[0],(vRot->field0_0x0).d[1],
                   (vRot->field0_0x0).d[2]);
                    /* end of inlined section */
    uVar3 = (*(code *)pEVar2[7].Write)
                      (duration,(int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                                (int)sVar1,&EStack_60,pInstance);
  }
  return (bool)uVar3;
}

bool EIPlatform::RotateToRelative(EVec3 &vRot, float duration, EInstance *pInstance) {
	EQuat qRelative;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EQuat *this;
	
  EStorable__vtable *pEVar1;
  undefined uVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  EQuat qRelative;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_active == 0) {
    uVar2 = 0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_quat.h */
    Set__5EQuatfff(&qRelative,(vRot->field0_0x0).d[0],(vRot->field0_0x0).d[1],
                   (vRot->field0_0x0).d[2]);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
    fVar4 = (this->m_qRot).field0_0x0.d[1];
    fVar3 = (this->m_qRot).field0_0x0.d[0];
    fVar5 = (this->m_qRot).field0_0x0.d[2];
    fVar6 = (this->m_qRot).field0_0x0.d[3];
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
    local_50 = (qRelative.field0_0x0.d[3] * fVar3 - qRelative.field0_0x0.d[2] * fVar4) +
               qRelative.field0_0x0.d[1] * fVar5 + qRelative.field0_0x0.d[0] * fVar6;
    local_4c = ((qRelative.field0_0x0.d[2] * fVar3 + qRelative.field0_0x0.d[3] * fVar4) -
               qRelative.field0_0x0.d[0] * fVar5) + qRelative.field0_0x0.d[1] * fVar6;
    local_48 = -qRelative.field0_0x0.d[1] * fVar3 + qRelative.field0_0x0.d[0] * fVar4 +
               qRelative.field0_0x0.d[3] * fVar5 + qRelative.field0_0x0.d[2] * fVar6;
    local_44 = ((-qRelative.field0_0x0.d[0] * fVar3 - qRelative.field0_0x0.d[1] * fVar4) -
               qRelative.field0_0x0.d[2] * fVar5) + qRelative.field0_0x0.d[3] * fVar6;
                    /* end of inlined section */
    uVar2 = (*(code *)pEVar1[7].Write)
                      (duration,(int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                                (int)*(short *)&pEVar1[7].Read,&local_50,pInstance);
  }
  return (bool)uVar2;
}

bool EIPlatform::QuatRotateTo(EQuat &qRot, float duration, EInstance *pInstance) {
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  EQuat *pEVar7;
  EQuat *pEVar8;
  ulong uVar9;
  ulong uVar10;
  ulong in_v1;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar10 = (ulong)(int)pInstance;
  uVar12 = (ulong)(int)qRot;
  if ((long)*(int *)&this->m_active == 0) {
    bVar6 = false;
  }
  else {
    puVar1 = (undefined *)((int)&qRot->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)qRot & 7;
    uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)*(int *)&this->m_active & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
            -1L << (8 - uVar4) * 8 | *(ulong *)((int)qRot - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&qRot->field0_0x0 + 0xf);
    uVar3 = (uint)puVar1 & 7;
    puVar2 = (undefined *)((int)&qRot->field0_0x0 + 8);
    uVar4 = (uint)puVar2 & 7;
    uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
    uVar3 = (uint)&this->m_qDesiredRot & 7;
    puVar5 = (ulong *)((int)&this->m_qDesiredRot - uVar3);
    *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 0xf);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 8);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = uVar11 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_quat.h */
    fVar16 = (this->m_qDesiredRot).field0_0x0.d[0];
    fVar15 = (this->m_qDesiredRot).field0_0x0.d[1];
    fVar13 = (this->m_qDesiredRot).field0_0x0.d[2];
    fVar14 = (this->m_qDesiredRot).field0_0x0.d[3];
    fVar13 = sqrtf(fVar16 * fVar16 + fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
    if (fVar13 == 0.0) {
      pEVar7 = Id__5EQuat(&this->m_qDesiredRot);
      uVar9 = (ulong)(int)pEVar7;
    }
    else {
      fVar13 = 1.0 / fVar13;
      (this->m_qDesiredRot).field0_0x0.d[0] = (this->m_qDesiredRot).field0_0x0.d[0] * fVar13;
      fVar14 = (this->m_qDesiredRot).field0_0x0.d[2];
      fVar15 = (this->m_qDesiredRot).field0_0x0.d[3];
      (this->m_qDesiredRot).field0_0x0.d[1] = (this->m_qDesiredRot).field0_0x0.d[1] * fVar13;
      (this->m_qDesiredRot).field0_0x0.d[2] = fVar14 * fVar13;
      (this->m_qDesiredRot).field0_0x0.d[3] = fVar15 * fVar13;
    }
                    /* end of inlined section */
    pEVar7 = &this->m_qRot;
    if (0.0 < duration) {
      this->m_rotateToDuration = duration;
                    /* end of inlined section */
      this->m_rotateToTime = 0.0;
                    /* inlined from /eor/src2/common/math/e_quat.h */
      fVar16 = (this->m_qRot).field0_0x0.d[0];
      fVar15 = (this->m_qRot).field0_0x0.d[1];
      fVar13 = (this->m_qRot).field0_0x0.d[2];
      fVar14 = (this->m_qRot).field0_0x0.d[3];
      fVar13 = sqrtf(fVar16 * fVar16 + fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
      if (fVar13 == 0.0) {
        pEVar8 = Id__5EQuat(pEVar7);
        uVar9 = (ulong)(int)pEVar8;
      }
      else {
        fVar13 = 1.0 / fVar13;
        (this->m_qRot).field0_0x0.d[0] = (this->m_qRot).field0_0x0.d[0] * fVar13;
        fVar14 = (this->m_qRot).field0_0x0.d[2];
        fVar15 = (this->m_qRot).field0_0x0.d[3];
        (this->m_qRot).field0_0x0.d[1] = (this->m_qRot).field0_0x0.d[1] * fVar13;
        (this->m_qRot).field0_0x0.d[2] = fVar14 * fVar13;
        (this->m_qRot).field0_0x0.d[3] = fVar15 * fVar13;
      }
      puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 7);
                    /* end of inlined section */
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)pEVar7 & 7;
      uVar12 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)pEVar7 - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 0xf);
      uVar3 = (uint)puVar1 & 7;
      puVar2 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 8);
      uVar4 = (uint)puVar2 & 7;
      uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_qOldRot & 7;
      puVar5 = (ulong *)((int)&this->m_qOldRot - uVar3);
      *puVar5 = uVar12 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 0xf);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 8);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = uVar10 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      bVar6 = true;
    }
    else {
      puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_qDesiredRot & 7;
      uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_qDesiredRot - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 0xf);
      uVar3 = (uint)puVar1 & 7;
      puVar2 = (undefined *)((int)&(this->m_qDesiredRot).field0_0x0 + 8);
      uVar4 = (uint)puVar2 & 7;
      uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_qRot & 7;
      puVar5 = (ulong *)((int)&this->m_qRot - uVar3);
      *puVar5 = uVar11 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 0xf);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 8);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = uVar10 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_qRot & 7;
      uVar12 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar12 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_qRot - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 0xf);
      uVar3 = (uint)puVar1 & 7;
      puVar2 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 8);
      uVar4 = (uint)puVar2 & 7;
      uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_qOldRot & 7;
      puVar5 = (ulong *)((int)&this->m_qOldRot - uVar3);
      *puVar5 = uVar12 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 0xf);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_qOldRot).field0_0x0 + 8);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = uVar10 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      bVar6 = true;
    }
  }
  return bVar6;
}

bool EIPlatform::ScaleTo(EVec3 &vScale, EVec3 vDuration, EInstance *pInstance) {
	int comp;
	EVec3 *this;
	int value;
	int value;
	EVec3 *this;
	int value;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  EVec3 *pEVar6;
  ulong uVar7;
  EVec3 *pEVar8;
  int iVar9;
  ulong in_t0;
  ulong in_t1;
  
  if (*(int *)&this->m_active == 0) {
    return false;
  }
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vScale & 7;
  uVar7 = *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vScale - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vOldScale).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vOldScale & 7;
  puVar5 = (ulong *)((int)&this->m_vOldScale - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vOldScale).field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&vScale->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vScale & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vScale - uVar3) >> uVar3 * 8;
  fVar4 = (vScale->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vDesiredScale).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDesiredScale & 7;
  puVar5 = (ulong *)((int)&this->m_vDesiredScale - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDesiredScale).field0_0x0.d[2] = fVar4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  pEVar8 = &this->m_vScaleToDuration;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  iVar9 = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  pEVar6 = &this->m_vScale;
  puVar1 = (undefined *)((int)&vDuration->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vDuration & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vDuration - uVar3) >> uVar3 * 8;
  fVar4 = (vDuration->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vScaleToDuration).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vScaleToDuration & 7;
  puVar5 = (ulong *)((int)&this->m_vScaleToDuration - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vScaleToDuration).field0_0x0.d[2] = fVar4;
  do {
                    /* end of inlined section */
    if ((pEVar8->field0_0x0).d[0] <= 0.0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      (pEVar6->field0_0x0).d[0] = (vScale->field0_0x0).d[0];
    }
    pEVar6 = (EVec3 *)((int)&pEVar6->field0_0x0 + 4);
    vScale = (EVec3 *)((int)&vScale->field0_0x0 + 4);
    iVar9 = iVar9 + -1;
    pEVar8 = (EVec3 *)((int)&pEVar8->field0_0x0 + 4);
  } while (-1 < iVar9);
  return true;
}

bool EIPlatform::ScaleToRelative(EVec3 &vScale, EVec3 vDuration, EInstance *pInstance) {
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	
  EStorable__vtable *pEVar1;
  undefined uVar2;
  undefined8 unaff_retaddr;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_active == 0) {
    uVar2 = 0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_28 = (vDuration->field0_0x0).d[2];
    local_30 = (vDuration->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_2c = (vDuration->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_18 = (this->m_vScale).field0_0x0.d[2] + (vScale->field0_0x0).d[2];
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1c = (this->m_vScale).field0_0x0.d[1] + (vScale->field0_0x0).d[1];
    local_20 = (this->m_vScale).field0_0x0.d[0] + (vScale->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar2 = (*(code *)pEVar1[8].SafeDelete)
                      ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                       (int)*(short *)(pEVar1 + 8),&local_20,&local_30,pInstance);
  }
  return (bool)uVar2;
}

bool EIPlatform::Teleport(EVec3 &vPos, EInstance *pInstance) {
  EStorable__vtable *pEVar1;
  undefined uVar2;
  
  uVar2 = 0;
  if (*(int *)&this->m_active != 0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    uVar2 = (**(code **)(pEVar1 + 7))
                      (0,(int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                         (int)*(short *)&pEVar1[6].Write,vPos,pInstance);
  }
  return (bool)uVar2;
}

bool EIPlatform::RunScript(ERScript *pScript, EInstance *pInstance) {
	EScriptParams scriptParams;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  EScriptParams scriptParams;
  
  bVar2 = *(int *)&this->m_active != 0;
  if (bVar2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptparams.h */
    scriptParams.pCauseInst = (EInstance *)0x0;
    scriptParams.pReceiverList = (TNodeList_EInstance___ *)0x0;
    puVar1 = (undefined *)((int)&scriptParams.vPos.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
    scriptParams.vPos.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&scriptParams.vNormal.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
    uVar4 = (uint)&scriptParams.vNormal & 7;
    puVar5 = (ulong *)((int)&scriptParams.vNormal - uVar4);
    *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    scriptParams.vNormal.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vPos & 7;
    scriptParams.vPos.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
    scriptParams.vPos.field0_0x0.d[2] = (this->m_vPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&scriptParams.vPos.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
              (ulong)scriptParams.vPos.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
              (&_scriptEngine,pScript,(EInstance *)this,&scriptParams);
  }
  return bVar2;
}

bool EIPlatform::Destroy(EInstance *pInstance) {
  EStorable__vtable *pEVar1;
  
  if (this != (EIPlatform *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return true;
}

bool EIPlatform::Suspend(bool suspend, EInstance *pInstance) {
  *(int *)&this->m_active = (int)suspend;
  return true;
}

bool EIPlatform::Visibility(bool visible, EInstance *pInstance) {
  if (*(int *)&this->m_active != 0) {
    *(int *)&this->m_visible = (int)visible;
    return true;
  }
  return false;
}

bool EIPlatform::Collision(bool collision, EInstance *pInstance) {
  if (*(int *)&this->m_active != 0) {
    *(int *)&this->m_collision = (int)collision;
    return true;
  }
  return false;
}

bool EIPlatform::CheckId(u32 queryId) {
  return queryId == (this->field0_0x0).field0_0x0.m_instanceId;
}

bool EIPlatform::ChangeModel(u32 newModelId, EInstance *pInstance) {
  EStorable__vtable *pEVar1;
  bool bVar2;
  ERModel *pEVar3;
  
  if (*(int *)&this->m_active == 0) {
    bVar2 = false;
  }
  else {
    if (this->m_pModel == (ERModel *)0x0) {
      this->m_modelId = newModelId;
    }
    else {
      DelRef__9EResource(&this->m_pModel->field0_0x0);
      this->m_pModel = (ERModel *)0x0;
      this->m_modelId = newModelId;
    }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar3 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,newModelId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pModel = pEVar3;
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[0xf].EStorable)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[0xf].GetTypeVersion);
    bVar2 = true;
  }
  return bVar2;
}

bool EIPlatform::SetSpline(EIBezierSpline *pSpline, PlatformSplineMode mode, float speed, bool direction) {
  if (*(int *)&this->m_active != 0) {
    *(int *)&this->m_splineDirection = (int)direction;
    this->m_pSpline = pSpline;
    this->m_splineMode = mode;
    this->m_splineSpeed = speed;
    this->m_splineTime = 0.0;
    return true;
  }
  return false;
}

void EIPlatform::CollisionEvent(EInstance *pInstance) {
	bool added;
	EScriptParams scriptParams;
	
  undefined *puVar1;
  uint uVar2;
  EStorable__vtable *pEVar3;
  ERScript *pScript;
  uint uVar4;
  ulong *puVar5;
  EStorable *pEVar6;
  long lVar7;
  EScriptParams scriptParams;
  
  pEVar6 = DynamicCast__9EStorableP9ETypeInfo(&pInstance->field0_0x0,&_14EIGameInstance_m_typeInfo);
  if (pEVar6 != (EStorable *)0x0) {
    pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    lVar7 = (*(code *)pEVar3[0xc].SafeDelete)
                      ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                       (int)*(short *)(pEVar3 + 0xc),pEVar6);
    pScript = this->m_pCollisionScript;
    if ((pScript != (ERScript *)0x0) && (lVar7 != 0)) {
                    /* inlined from /eor/src2/engine/script/e_scriptparams.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptparams.h */
      scriptParams.pCauseInst = (EInstance *)0x0;
      scriptParams.pReceiverList = (TNodeList_EInstance___ *)0x0;
      puVar1 = (undefined *)((int)&scriptParams.vPos.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      scriptParams.vPos.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&scriptParams.vNormal.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      uVar4 = (uint)&scriptParams.vNormal & 7;
      puVar5 = (ulong *)((int)&scriptParams.vNormal - uVar4);
      *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      scriptParams.vNormal.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      uVar2 = (uint)&this->m_vPos & 7;
      scriptParams.vPos.field0_0x0._0_8_ =
           *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&this->m_vPos - uVar2) >> uVar2 * 8;
      scriptParams.vPos.field0_0x0.d[2] = (this->m_vPos).field0_0x0.d[2];
      puVar1 = (undefined *)((int)&scriptParams.vPos.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                (ulong)scriptParams.vPos.field0_0x0._0_8_ >> (7 - uVar4) * 8;
      Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
                (&_scriptEngine,pScript,(EInstance *)this,&scriptParams);
    }
  }
  return;
}

bool EIPlatform::AddInstance(EIGameInstance *pIGameInstance) {
	EUpdateInstance *pNew;
	TLinkedList<EUpdateInstance,8,12> *this;
	EUpdateInstance *pNewNode;
	void *pNode;
	EUpdateInstance *pNode;
	
  EUpdateInstance *pEVar1;
  bool bVar2;
  bool bVar3;
  EUpdateInstance *pEVar4;
  
  bVar2 = InList__10EIPlatformP14EIGameInstance(this,pIGameInstance);
  bVar3 = false;
  if (!bVar2) {
    pEVar4 = (EUpdateInstance *)__builtin_new(0x10);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1 = (this->m_Instances).m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    pEVar4->pIGameInstance = pIGameInstance;
    *(undefined4 *)&pEVar4->notUpdated = 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4->pNext = pEVar1;
    if (pEVar1 == (EUpdateInstance *)0x0) {
      (this->m_Instances).m_pTail = pEVar4;
    }
    else {
      pEVar1->pLast = pEVar4;
    }
    (this->m_Instances).m_pHead = pEVar4;
                    /* end of inlined section */
    bVar3 = true;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4->pLast = (EUpdateInstance *)0x0;
  }
                    /* end of inlined section */
  return bVar3;
}

void EIPlatform::RemoveNode(EUpdateInstance *pNode) {
	TLinkedList<EUpdateInstance,8,12> *this;
	EUpdateInstance *pNode;
	EUpdateInstance *pNode;
	TLinkedList<EUpdateInstance,8,12> *this;
	void *pNode;
	EUpdateInstance *pNode;
	void *pNode;
	void *pNode;
	EUpdateInstance *pNode;
	void *pNode;
	EUpdateInstance *pNode;
	EUpdateInstance *pNode;
	void *pAddress;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_Instances).m_pHead == pNode) {
    (this->m_Instances).m_pHead = pNode->pNext;
  }
  else {
    pNode->pLast->pNext = pNode->pNext;
  }
  if ((this->m_Instances).m_pTail == pNode) {
    (this->m_Instances).m_pTail = pNode->pLast;
  }
  else {
    pNode->pNext->pLast = pNode->pLast;
  }
  _memmanFree__FPv(pNode);
  return;
}

bool EIPlatform::InList(EIGameInstance *pIGameInstance) {
	EUpdateInstance *pNode;
	void *pNode;
	
  EIGameInstance *pEVar1;
  EUpdateInstance *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_Instances).m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (EUpdateInstance *)0x0) {
    pEVar1 = pEVar2->pIGameInstance;
    while( true ) {
      if (pEVar1 == pIGameInstance) {
        return true;
      }
      pEVar2 = (EUpdateInstance *)(&pEVar2->pIGameInstance)[3];
      if (pEVar2 == (EUpdateInstance *)0x0) break;
      pEVar1 = pEVar2->pIGameInstance;
    }
  }
  return false;
}

float EIPlatform::GetMaxSplineBlend() {
  uint uVar1;
  float fVar2;
  
  if (this->m_pSpline == (EIBezierSpline *)0x0) {
    return 0.0;
  }
  uVar1 = this->m_pSpline->m_NumSplines;
                    /* end of inlined section */
  if (-1 < (int)uVar1) {
    return (float)uVar1;
  }
  fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
  return fVar2 + fVar2;
}

void EIPlatform::ApplyRotation() {
	EMat4 mRot;
	
  float (*paafVar1) [4] [4];
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EMat4 mRot;
  EMat4 EStack_60;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  ToMat4__C5EQuatR5EMat4(&this->m_qRot,&mRot);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  paafVar1 = __opRA3_A3_f__5EMat4(&EStack_60);
  sceVu0MulMatrix(paafVar1,&mRot,&this->m_mCurrentOrient);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(&this->m_mCurrentOrient,&EStack_60);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
    gpTypeInfo_EIPlatform =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_10EIPlatform_m_typeInfo,New__10EIPlatform,0,"EIPlatform",
                    &_14EIGameInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

sceVu0FMATRIX& EMat4::operator float (&)[3][3]() {
  return (float (*) [4] [4])this;
}

EQuat& EQuat::Id() {
  (this->field0_0x0).d[0] = 0.0;
  (this->field0_0x0).d[3] = 1.0;
  (this->field0_0x0).d[2] = 0.0;
  (this->field0_0x0).d[1] = 0.0;
  return this;
}

EIPlatform* EIPlatform::New() {
  EIPlatform *pEVar1;
  
  pEVar1 = (EIPlatform *)__nw__10EIPlatformUi(0x2e0);
  pEVar1 = __10EIPlatform(pEVar1);
  return pEVar1;
}

void EIPlatform::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIPlatform *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIPlatform::GetTypeInfo() {
  return &_10EIPlatform_m_typeInfo;
}

char* EIPlatform::GetTypeName() {
  return _10EIPlatform_m_typeInfo.m_name;
}

u32 EIPlatform::GetTypeKey() {
  return _10EIPlatform_m_typeInfo.m_key;
}

u16 EIPlatform::GetTypeVersion() {
  return _10EIPlatform_m_typeInfo.m_version;
}

u16 EIPlatform::GetReadVersion() {
  return _10EIPlatform_m_typeInfo.m_readVersion;
}

ETypeInfo* EIPlatform::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_10EIPlatform_m_typeInfo,New__10EIPlatform,version,"EIPlatform",
                      &_14EIGameInstance_m_typeInfo);
  return pEVar1;
}

EIPlatform* EIPlatform::CreateCopy() {
  EIPlatform *pEVar1;
  
  pEVar1 = (EIPlatform *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EIPlatform::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

void* EIPlatform::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EIPlatform::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

bool EIPlatform::ResetOrient() {
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  EMat4 *pEVar6;
  ulong uVar7;
  ulong uVar8;
  ulong in_a2;
  ulong uVar9;
  float fVar10;
  
  uVar8 = (ulong)(int)&this->m_mOrient;
  pEVar6 = __as__5EMat4RC5EMat4(&this->m_mCurrentOrient,&this->m_mOrient);
  puVar1 = (undefined *)((int)&(this->m_vStoredScale).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vStoredScale & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          (long)(int)pEVar6 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&this->m_vStoredScale - uVar4) >> uVar4 * 8;
  fVar10 = (this->m_vStoredScale).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vScale & 7;
  puVar5 = (ulong *)((int)&this->m_vScale - uVar3);
  *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vScale).field0_0x0.d[2] = fVar10;
  puVar1 = (undefined *)((int)&(this->m_vStoredPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_vStoredPos & 7;
  uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&this->m_vStoredPos - uVar4) >> uVar4 * 8;
  fVar10 = (this->m_vStoredPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vPos & 7;
  puVar5 = (ulong *)((int)&this->m_vPos - uVar3);
  *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar10;
  puVar1 = (undefined *)((int)&(this->m_qStoredRot).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_qStoredRot & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&this->m_qStoredRot - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(this->m_qStoredRot).field0_0x0 + 0xf);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&(this->m_qStoredRot).field0_0x0 + 8);
  uVar4 = (uint)puVar2 & 7;
  uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_qRot & 7;
  puVar5 = (ulong *)((int)&this->m_qRot - uVar3);
  *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 0xf);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_qRot).field0_0x0 + 8);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vScaleToTime).field0_0x0.d[0] = 0.0;
  (this->m_vScaleToDuration).field0_0x0.d[1] = 0.0;
  (this->m_vScaleToDuration).field0_0x0.d[2] = 0.0;
  (this->m_vScaleToDuration).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  fVar10 = (this->m_vScaleToDuration).field0_0x0.d[0];
  *(undefined4 *)&this->m_computeInv = 1;
  this->m_time = fVar10;
  *(undefined4 *)&this->m_active = *(undefined4 *)&this->m_startState;
  this->m_moveToTime = fVar10;
  this->m_moveToDuration = fVar10;
  this->m_rotateToTime = fVar10;
  this->m_rotateToDuration = fVar10;
  return true;
}

bool EIPlatform::SetTime(float newTime, EInstance *pInstance) {
  this->m_time = newTime;
  return true;
}

float EIPlatform::GetTime(EInstance *pInstance) {
  return this->m_time;
}

bool EIPlatform::StartAnimation(u32 animId, f32 speed, f32 intensity, f32 frame, EInstance *pInstance) {
  return false;
}

bool EIPlatform::StopAnimation(u32 animId, EInstance *pInstance) {
  return false;
}

bool EIPlatform::ChangeAnimationSpeed(u32 animId, f32 speed, EInstance *pInstance) {
  return false;
}

bool EIPlatform::ChangeAnimationIntensity(u32 animId, f32 intensity, EInstance *pInstance) {
  return false;
}

bool EIPlatform::IsAnimationPlaying(u32 animId, EInstance *pInstance) {
  return false;
}

u32 EIPlatform::GetLastAnim(EInstance *pInstance) {
  return 0;
}

EVec3 EIPlatform::GetRotation() {
	EVec3 *this;
	
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[2] = 0.0;
  (__return_storage_ptr__->field0_0x0).d[1] = 0.0;
  (__return_storage_ptr__->field0_0x0).d[0] = 0.0;
  return __return_storage_ptr__;
}

EVec4 EIPlatform::GetScale() {
	EVec4 *this;
	EVec3 &v;
	
  float fVar1;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (__return_storage_ptr__->field0_0x0).d[0] = (this->m_vScale).field0_0x0.d[0];
  (__return_storage_ptr__->field0_0x0).d[1] = (this->m_vScale).field0_0x0.d[1];
  fVar1 = (this->m_vScale).field0_0x0.d[2];
  (__return_storage_ptr__->field0_0x0).d[3] = 1.0;
  (__return_storage_ptr__->field0_0x0).d[2] = fVar1;
  return __return_storage_ptr__;
}

bool EIPlatform::IsSuspended() {
  return (bool)((byte)*(undefined4 *)&this->m_active ^ 1);
}

bool EIPlatform::IsVisibile() {
  return SUB41(*(undefined4 *)&this->m_visible,0);
}

bool EIPlatform::IsCollidable() {
  return SUB41(*(undefined4 *)&this->m_collision,0);
}

bool EIPlatform::IsMoving() {
  return this->m_moveToTime <= this->m_moveToDuration;
}

bool EIPlatform::IsRotating() {
  return this->m_rotateToTime <= this->m_rotateToDuration;
}

bool EIPlatform::IsScaling() {
	int i;
	int value;
	int value;
	
  int iVar1;
  EVec3 *pEVar2;
  
  pEVar2 = &this->m_vScaleToTime;
  iVar1 = 0;
  do {
                    /* end of inlined section */
    iVar1 = iVar1 + 1;
    if ((pEVar2->field0_0x0).d[0] <= pEVar2[-1].field0_0x0.d[0]) {
      return true;
    }
    pEVar2 = (EVec3 *)((int)&pEVar2->field0_0x0 + 4);
  } while (iVar1 < 3);
  return false;
}

bool EIPlatform::SetSpline(EIBezierSpline *pSpline) {
  this->m_pSpline = pSpline;
  return true;
}

bool EIPlatform::SetSplineMode(PlatformSplineMode mode) {
  this->m_splineMode = mode;
  return true;
}

bool EIPlatform::SetSplineSpeed(float speed) {
  this->m_splineSpeed = speed;
  return true;
}

bool EIPlatform::SetSplineDirection(bool direction) {
  *(int *)&this->m_splineDirection = (int)direction;
  return true;
}

bool EIPlatform::SetSplineBlend(float blend) {
  this->m_splineBlend = blend;
  return true;
}

float EIPlatform::SplineTime() {
  return this->m_splineTime;
}

EIBezierSpline* EIPlatform::GetSpline() {
  return this->m_pSpline;
}

float EIPlatform::GetSplineSpeed() {
  return this->m_splineSpeed;
}

float EIPlatform::GetSplineBlend() {
  return this->m_splineBlend;
}

bool EIPlatform::GetSplineDirection() {
  return SUB41(*(undefined4 *)&this->m_splineDirection,0);
}

float EIPlatform::GetSplineTime() {
  return this->m_splineTime;
}

void EIPlatform::PreRotate(EVec3 &vRot) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  EMat4 *this_00;
  
  this_00 = &this->m_mCurrentOrient;
  PreRotateZ__5EMat4f(this_00,(vRot->field0_0x0).d[2]);
  PreRotateX__5EMat4f(this_00,(vRot->field0_0x0).d[0]);
  PreRotateY__5EMat4f(this_00,(vRot->field0_0x0).d[1]);
  return;
}

void EIPlatform::InvertOrient(EMat4 &mOrient) {
  if (*(int *)&this->m_computeInv != 0) {
    *(undefined4 *)&this->m_computeInv = 0;
    Invert__5EMat4RC5EMat4(&this->m_mInvOrient,mOrient);
  }
  return;
}

void global constructors keyed to gpTypeInfo_EIPlatform() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

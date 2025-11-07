// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_ISWIMPOOL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_ISWIMPOOL_H

enum ESimBoneIdx {
	kPelvis1 = 1,
	kSpine2 = 2,
	kL_Thigh3 = 3,
	kL_Calf4 = 4,
	kL_Foot5 = 5,
	kL_Toe06 = 6,
	kL_Toe0Nub7 = 7,
	kR_Thigh3 = 8,
	kR_Calf4 = 9,
	kR_Foot5 = 10,
	kR_Toe06 = 11,
	kR_Toe0Nub7 = 12,
	kSpine13 = 13,
	kSpine24 = 14,
	kSpine35 = 15,
	kNeck6 = 16,
	kHead7 = 17,
	kHeadNub8 = 18,
	kEyeLidBone8 = 19,
	kJawBone8 = 20,
	kBottomLipBone9 = 21,
	kL_EyeBall8 = 22,
	kL_EyeBrowBone8 = 23,
	kL_LipBone8 = 24,
	kR_EyeBall8 = 25,
	kR_EyeBrowBone8 = 26,
	kR_LipBone8 = 27,
	kUpperLipBone8 = 28,
	kL_Clavicle7 = 29,
	kL_UpperArm8 = 30,
	kL_Forearm9 = 31,
	kL_Hand10 = 32,
	kL_Finger011 = 33,
	kL_Finger0Nub12 = 34,
	kR_Clavicle7 = 35,
	kR_UpperArm8 = 36,
	kR_Forearm9 = 37,
	kR_Hand10 = 38,
	kR_Finger011 = 39,
	kR_Finger0R12 = 40
};

struct EISwimPoolWaveType {
	ESimBoneIdx m_id;
	float m_magnitude;
	float m_radius;
	float m_frequency;
	float m_peakdist;
	float m_ripplespeed;
	float m_duration;
};

struct EISwimPool : ISimsMultiTileObjectModel {
	static ETypeInfo m_typeInfo;
protected:
	EIWaterPatch m_waterPatch;
	static float _m_peakdist;
	static float _m_frequency;
	static float _m_ripplespeed;
	static float _m_radius;
	static float _m_txtreps;
	static float _m_resolution;
	static float _m_magnitude;
	static float _m_duration;
	static float _m_current;
	static bool _m_texturing;
	static ERShader *_m_pRShader;
	
public:
	EISwimPool& operator=();
	EISwimPool();
	static EISwimPool* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EISwimPool* CreateCopy();
	EISwimPool();
	/* vtable[6] */ virtual EISwimPool(EISwimPool*, int, void);
	/* vtable[25] */ virtual void Create(cXObject *pXOb, EHouse *pEHouse);
	/* vtable[2] */ virtual void SetObjOrient();
	void SetupWater();
	void StartWaveInPool(EVec3 &vPoint, ESimBoneIdx waveType);
	static void InitResForSwimPool(/* parameters unknown */);
	static void CleanupResForSwimPool(/* parameters unknown */);
};

extern float EISwimPool::_m_peakdist;
extern float EISwimPool::_m_frequency;
extern float EISwimPool::_m_ripplespeed;
extern float EISwimPool::_m_radius;
extern float EISwimPool::_m_txtreps;
extern float EISwimPool::_m_resolution;
extern float EISwimPool::_m_magnitude;
extern float EISwimPool::_m_duration;
extern float EISwimPool::_m_current;
extern bool EISwimPool::_m_texturing;
extern ETypeInfo *gpTypeInfo_EISwimPool;
extern __vtbl_ptr_type EISwimPool::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type EISwimPool virtual table[41];
extern ETypeInfo EISwimPool::m_typeInfo;

EISwimPoolWaveType* GetWaveData(ESimBoneIdx bone);
EStream& operator<<(EStream &s, EISwimPool *pD);
EStream& operator>>(EStream &s, EISwimPool *&pD);
void EISwimPool::~EISwimPool(int __in_chrg);
void StartWaveInPool(ISimInstance *pPool, ESimBoneIdx waveType, EVec3 &vPoint);
void global constructors keyed to EISwimPool::_m_peakdist();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_ISWIMPOOL_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_EFFECTS_E_WATER_H
#define C__EOR_SRC2_ENGINE_EFFECTS_E_WATER_H

struct EWaterWave {
	float period;
	float lifetime;
	float startMagnitude;
	EVec2 vCenter;
	float age;
	float speed;
	float magnitude;
	float distance;
	u8 bounceFlags;
	EWaterWave *pNext;
	EWaterWave *pLast;
};

typedef TLinkedList<EWaterWave,44,40> EWaterWaveList;

struct EWaterStatic {
	EVec2 vMin;
	EVec2 vMax;
	bool active;
};

struct EIWaterPatch : EInstance {
	static ETypeInfo m_typeInfo;
protected:
	EOrderTableData m_orderTableData;
	EVec3 m_vCenter;
	float m_radius;
	EVec2 m_vMin;
	EVec2 m_vMax;
	int m_nSteps[2];
	float m_stepSize[2];
	EWaterWaveList m_waves;
	EWaterStatic m_statics[4];
	float m_positionsXY;
	float m_uvs;
	EVec2 m_vActiveMin;
	EVec2 m_vActiveMax;
	EVec2 m_uvStart0;
	EVec2 m_uvStart1;
	EVec2 m_uvEnd0;
	EVec2 m_uvEnd1;
	EVec2 m_vUVSpeed;
	float m_uvPhase;
	float m_resolution;
	EVec2 m_vCurrentSpeed;
	float m_frequency;
	float m_splashRad;
	float m_txtReps;
	float m_peakDistance;
	float m_rippleSpeed;
	float m_elasticity;
	u8 *m_pWhiteColors;
	s8 *m_pUpNormals;
	ERShader *m_pRShaderBase;
	ERShader *m_pRShaderReflect;
	
public:
	EIWaterPatch& operator=();
	EIWaterPatch();
	static EIWaterPatch* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIWaterPatch* CreateCopy();
	EIWaterPatch();
	/* vtable[6] */ virtual EIWaterPatch(EIWaterPatch*, int, void);
	/* vtable[10] */ virtual void Update();
	/* vtable[12] */ virtual void Draw(ERC *pRC, u32 renderFlags);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	static void OrderTableCallback(/* parameters unknown */);
	void SetPos(EVec3 &vCenter, float xSize, float ySize);
	void SetResolution(float resolution);
	void SetFrequency(float frequency);
	void SetRadius(float radius);
	void SetTxtReps(float reps);
	void SetPeakDistance(float dist);
	void SetRippleSpeed(float speed);
	void SetCurrentSpeed(float xSpeed, float ySpeed);
	void SetShaders(u32 idBase, u32 idReflect);
	void SetShaders();
	void SetElasticity(float elasticity);
	EWaterWave* StartWave(EVec2 vPos, float magnitude, float lifetime);
	/* vtable[22] */ virtual void ReadInstanceData(EStream &s);
protected:
	void RecomputeTextureScroll();
	void BounceWave(EWaterWave *pWave, EVec2 &vNewCenter, u8 bounceFlag);
	float GetHeight(float worldX, float worldY, EVec3 *pNrm);
	void DrawStatic(ERC *pRC, EWaterStatic *pStatic);
	void DrawActiveCircle(ERC *pRC);
	void DrawActiveGrid(ERC *pRC);
	float QuickSin(float angle);
	void GetUV(float x, float y, float *u, float *v, int pass);
	void DrawStrip(ERC *pRC, int nVtxs, float *pXYZ, float *pUV0, float *pUV1, u8 *pRGB, s8 *pIJK);
	void DrawCircleWedge(ERC *pRC, EVec2 &vCenter, EVec2 &vCorner, float startRad, float radStep, float startAngle, float angleStep, int nRings, int nSlices);
	void ComputeVertex(EVec2 &pos0, EVec2 &pos1, EVec2 &uv00, EVec2 &uv01, EVec2 &uv10, EVec2 &uv11, float *pXYZ, float *pUV0, float *pUV1, u8 *pRGB, s8 *pIJK);
};

extern ETypeInfo *gpTypeInfo_EIWaterPatch;
extern __vtbl_ptr_type EIWaterPatch virtual table[25];
extern ETypeInfo EIWaterPatch::m_typeInfo;

EStream& operator<<(EStream &s, EIWaterPatch *pD);
EStream& operator>>(EStream &s, EIWaterPatch *&pD);
void EIWaterPatch::~EIWaterPatch(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIWaterPatch();

#endif // C__EOR_SRC2_ENGINE_EFFECTS_E_WATER_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_ILIGHT_H
#define C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_ILIGHT_H

struct EILight : EInstance {
	static ETypeInfo m_typeInfo;
	bool m_on;
	bool m_shadows;
	bool m_sourceCastsShadows;
	EInstance *m_pSource;
	float m_intensity;
	EVec3 m_vColor;
	
	EILight& operator=();
	EILight();
	/* vtable[6] */ virtual EILight(EILight*, int, void);
	static EILight* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EILight* CreateCopy();
	EILight();
	/* vtable[24] */ virtual void CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious);
	/* vtable[25] */ virtual void CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut);
	/* vtable[26] */ virtual void AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels);
	/* vtable[27] */ virtual void Setup();
	/* vtable[9] */ virtual void Init();
	/* vtable[28] */ virtual bool BackCullTest(EVec3 &vPointOnSurface, EVec3 &vSurfaceNormal);
	/* vtable[29] */ virtual bool CanCastShadows();
	/* vtable[30] */ virtual EVec3 GetShadowSourcePos();
	float GetMonoIntensity();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void GetScaledIntColor(float scaler, unsigned int *intOut);
	bool Raytrace(EVec3 &vStart, EVec3 &vEnd, bool resetPrevious);
};

extern ETypeInfo *gpTypeInfo_EILight;
extern __vtbl_ptr_type EILight virtual table[32];
extern ETypeInfo EILight::m_typeInfo;

EStream& operator<<(EStream &s, EILight *pD);
EStream& operator>>(EStream &s, EILight *&pD);
void EILight::~EILight(int __in_chrg);
void global constructors keyed to gpTypeInfo_EILight();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_ILIGHT_H

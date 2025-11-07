// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IPOINTLIGHT_H
#define C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IPOINTLIGHT_H

struct EIPointLight : EILight {
	static ETypeInfo m_typeInfo;
	EVec3 m_vPos;
	float m_falloffStartDistance;
	float m_falloffEndDistance;
	bool m_distanceFalloffEnabled;
	
	EIPointLight& operator=();
	EIPointLight();
	/* vtable[6] */ virtual EIPointLight(EIPointLight*, int, void);
	static EIPointLight* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIPointLight* CreateCopy();
	EIPointLight();
	/* vtable[24] */ virtual void CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious);
	/* vtable[25] */ virtual void CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut);
	/* vtable[26] */ virtual void AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels);
	/* vtable[28] */ virtual bool BackCullTest(EVec3 &vPointOnSurface, EVec3 &vSurfaceNormal);
	/* vtable[27] */ virtual void Setup();
	/* vtable[29] */ virtual bool CanCastShadows();
	/* vtable[30] */ virtual EVec3 GetShadowSourcePos();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void AddPointLightReceiverFlags();
	void RemovePointLightReceiverFlags();
};

extern ETypeInfo *gpTypeInfo_EIPointLight;
extern __vtbl_ptr_type EIPointLight virtual table[32];
extern ETypeInfo EIPointLight::m_typeInfo;

EStream& operator<<(EStream &s, EIPointLight *pD);
EStream& operator>>(EStream &s, EIPointLight *&pD);
void EIPointLight::~EIPointLight(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIPointLight();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IPOINTLIGHT_H

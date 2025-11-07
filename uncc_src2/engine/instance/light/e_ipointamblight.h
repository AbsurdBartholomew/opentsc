// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IPOINTAMBLIGHT_H
#define C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IPOINTAMBLIGHT_H

struct EIPointAmbLight : EILight {
	static ETypeInfo m_typeInfo;
	EVec3 m_vPos;
	float m_falloffStartDistance;
	float m_falloffEndDistance;
	bool m_distanceFalloffEnabled;
	
	EIPointAmbLight& operator=();
	EIPointAmbLight();
	/* vtable[6] */ virtual EIPointAmbLight(EIPointAmbLight*, int, void);
	static EIPointAmbLight* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIPointAmbLight* CreateCopy();
	EIPointAmbLight();
	/* vtable[24] */ virtual void CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious);
	/* vtable[25] */ virtual void CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut);
	/* vtable[26] */ virtual void AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels);
	/* vtable[27] */ virtual void Setup();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void AddPointLightReceiverFlags();
	void RemovePointLightReceiverFlags();
};

extern ETypeInfo *gpTypeInfo_EIPointAmbLight;
extern __vtbl_ptr_type EIPointAmbLight virtual table[32];
extern ETypeInfo EIPointAmbLight::m_typeInfo;

EStream& operator<<(EStream &s, EIPointAmbLight *pD);
EStream& operator>>(EStream &s, EIPointAmbLight *&pD);
void EIPointAmbLight::~EIPointAmbLight(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIPointAmbLight();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IPOINTAMBLIGHT_H

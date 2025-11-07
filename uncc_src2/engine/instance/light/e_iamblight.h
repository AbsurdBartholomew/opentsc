// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IAMBLIGHT_H
#define C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IAMBLIGHT_H

struct EIAmbLight : EILight {
	static ETypeInfo m_typeInfo;
	
	EIAmbLight& operator=();
	EIAmbLight();
	EIAmbLight();
	/* vtable[6] */ virtual EIAmbLight(EIAmbLight*, int, void);
	static EIAmbLight* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIAmbLight* CreateCopy();
	/* vtable[24] */ virtual void CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious);
	/* vtable[25] */ virtual void CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut);
	/* vtable[26] */ virtual void AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels);
	/* vtable[27] */ virtual void Setup();
};

extern ETypeInfo *gpTypeInfo_EIAmbLight;
extern __vtbl_ptr_type EIAmbLight virtual table[32];
extern ETypeInfo EIAmbLight::m_typeInfo;

EStream& operator<<(EStream &s, EIAmbLight *pD);
EStream& operator>>(EStream &s, EIAmbLight *&pD);
void EIAmbLight::~EIAmbLight(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIAmbLight();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IAMBLIGHT_H

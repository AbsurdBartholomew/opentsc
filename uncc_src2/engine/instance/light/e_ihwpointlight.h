// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IHWPOINTLIGHT_H
#define C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IHWPOINTLIGHT_H

struct EIHWPointLight : EIPointLight {
	static ETypeInfo m_typeInfo;
	bool m_receiversFlagged;
	EPointLight *m_pGfxPointLight;
	
	EIHWPointLight& operator=();
	EIHWPointLight();
	/* vtable[6] */ virtual EIHWPointLight(EIHWPointLight*, int, void);
	static EIHWPointLight* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIHWPointLight* CreateCopy();
	EIHWPointLight();
	/* vtable[27] */ virtual void Setup();
protected:
	void AddPointLightReceiverFlags();
	void RemovePointLightReceiverFlags();
};

extern ETypeInfo *gpTypeInfo_EIHWPointLight;
extern __vtbl_ptr_type EIHWPointLight virtual table[32];
extern ETypeInfo EIHWPointLight::m_typeInfo;

EStream& operator<<(EStream &s, EIHWPointLight *pD);
EStream& operator>>(EStream &s, EIHWPointLight *&pD);
void EIHWPointLight::~EIHWPointLight(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIHWPointLight();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_IHWPOINTLIGHT_H

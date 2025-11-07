// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_E_INSTANCE_H
#define C__EOR_SRC2_ENGINE_INSTANCE_E_INSTANCE_H

typedef TNodeList<ETrigger *> ETriggerList;

struct EBrightLight {
	EVec3 vColor;
	EVec3 vDir;
	float dirMag;
	float colorMag;
};

extern ETypeInfo *gpTypeInfo_EInstance;
extern __vtbl_ptr_type EInstance virtual table[25];
extern __vtbl_ptr_type EStorable virtual table[10];
extern ETypeInfo EInstance::m_typeInfo;

EStream& operator<<(EStream &s, EInstance *pD);
EStream& operator>>(EStream &s, EInstance *&pD);
void EInstance::~EInstance(int __in_chrg);
EBrightLight* EInstance::CalcLights3__9EInstanceRC5EVec3R8ELights3.0::EBrightLight::EBrightLight();
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to gpTypeInfo_EInstance();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_E_INSTANCE_H

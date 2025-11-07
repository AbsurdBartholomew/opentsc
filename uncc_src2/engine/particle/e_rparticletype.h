// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_RPARTICLETYPE_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_RPARTICLETYPE_H

extern ETypeInfo *gpTypeInfo_ERParticleType;
extern __vtbl_ptr_type ERParticleType virtual table[16];
extern ETypeInfo ERParticleType::m_typeInfo;

EStream& operator<<(EStream &s, ERParticleType *pD);
EStream& operator>>(EStream &s, ERParticleType *&pD);
void ERParticleType::~ERParticleType(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERParticleType();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_RPARTICLETYPE_H

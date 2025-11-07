// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_BONEPARTICLE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_BONEPARTICLE_H

struct EAnimParticleData {
	ESimBoneIdx m_boneId;
	u32 m_particleId;
	float x;
	float y;
	float z;
};

struct EBoneParticle {
	cXPerson *m_pPerson;
	ESimBoneIdx m_boneId;
	EIParticleEmit *m_pEmit;
	ERParticleType *m_pType;
	EVec3 m_v;
	
	EBoneParticle& operator=();
	EBoneParticle(u32 typeId, cXPerson *pPerson, EAnimParticleData *pParticleData);
	EBoneParticle();
	EBoneParticle();
	EBoneParticle(EBoneParticle*, int, void);
	void Update();
};

void EBoneParticle::~EBoneParticle(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_BONEPARTICLE_H

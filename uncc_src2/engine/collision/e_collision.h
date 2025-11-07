// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_COLLISION_E_COLLISION_H
#define C__EOR_SRC2_ENGINE_COLLISION_E_COLLISION_H

struct ECollisionInfo {
	float t;
	EVec3 vPos;
	EVec3 vNormal;
	EInstance *pInst;
};

extern EVec4 ECollision::m_vSkipPlanes[2][16];
extern int ECollision::m_nSkipPlanes[2];
extern int ECollision::m_skipPlanesToggle;
extern long unsigned int ECollision::m_multMaskTable[256];
extern long unsigned int ECollision::m_lineMaskTable[8][8][8][8];

void global constructors keyed to ECollision::m_vSkipPlanes();

#endif // C__EOR_SRC2_ENGINE_COLLISION_E_COLLISION_H

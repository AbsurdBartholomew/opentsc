// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_ESIM_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_ESIM_H

struct EDirLight {
	EVec3 vColor;
	float pad0;
	EVec3 vDir;
	float pad1;
};

struct ELights3 : ELights {
	EDirLight d[3];
};

struct LayeredPart {
	u32 model;
	u32 layer1;
	u32 layer2;
};

struct SinglePart {
	u32 model;
	u32 layer1;
};

struct NPC {
	Sex sex;
	Age age;
	u32 body;
	u32 thumbnail;
	ELocString name;
};

struct Costume {
	LayeredPart upperBody;
	LayeredPart lowerBody;
	SinglePart shoe;
};

extern EHeap ESim::m_MyHeap;
extern ETypeInfo *gpTypeInfo_ESim;
extern float _esim_plumbob_off_;
extern EVec3 __pbob__v1;
extern EVec3 __pbob__v2;
extern float __pbob_ambFactor;
extern bool _drawSimRect;
extern EVec3 _vGhostBlue;
extern EVec3 _vGhostGreen;
extern ELights _ESim_GhostLight;
extern ELights _ESim_GreenLight;
extern __vtbl_ptr_type ESim::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type ESim virtual table[41];
extern ETypeInfo ESim::m_typeInfo;

EStream& operator<<(EStream &s, ESim *pD);
EStream& operator>>(EStream &s, ESim *&pD);
void ESim::~ESim(int __in_chrg);
EBrightLight* EInstance::CalcLights3__4ESimRC5EVec3R8ELights3.0::EBrightLight::EBrightLight();
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to ESim::m_MyHeap();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_ESIM_H

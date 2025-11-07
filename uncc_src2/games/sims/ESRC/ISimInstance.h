// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_ISIMINSTANCE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_ISIMINSTANCE_H

struct EAmbLight {
	EVec3 vColor;
	float pad;
};

struct ELights {
	EAmbLight a;
};

struct IBaseSimInstance {
	__vtbl_ptr_type *$vf5533;
	
	IBaseSimInstance& operator=();
	IBaseSimInstance();
	IBaseSimInstance();
	/* vtable[1] */ virtual IBaseSimInstance(IBaseSimInstance*, int, void);
	/* vtable[2] */ virtual void SetObjOrient();
	/* vtable[3] */ virtual void SetCursFlags();
	/* vtable[4] */ virtual u32 GetCursFlags();
	/* vtable[5] */ virtual ISimInstance* GetSimInstance();
};

enum OverlapMode {
	OV_MODE_LIVE = 0,
	OV_MODE_BUY = 1,
	OV_MODE_BUILD = 2,
	OV_MODE_ALL = 3
};

extern ELights ISimInstance::_ERRORLightCur;
extern EVec3 ISimInstance::_ERRORLight;
extern float _cursorlightfadedur;
extern ETypeInfo *gpTypeInfo_ISimInstance;
extern __vtbl_ptr_type ISimInstance::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type ISimInstance virtual table[40];
extern __vtbl_ptr_type IBaseSimInstance virtual table[7];
extern ETypeInfo ISimInstance::m_typeInfo;

void IBaseSimInstance::~IBaseSimInstance(int __in_chrg);
EStream& operator<<(EStream &s, ISimInstance *pD);
EStream& operator>>(EStream &s, ISimInstance *&pD);
void ISimInstance::~ISimInstance(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to ISimInstance::_ERRORLightCur();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_ISIMINSTANCE_H

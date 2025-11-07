// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_E_IGAMEINSTANCE_H
#define C__EOR_SRC2_ENGINE_INSTANCE_E_IGAMEINSTANCE_H

struct EIGameInstance : EInstance {
	static ETypeInfo m_typeInfo;
	
	EIGameInstance& operator=();
	EIGameInstance();
	static EIGameInstance* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIGameInstance* CreateCopy();
	EIGameInstance();
	/* vtable[6] */ virtual EIGameInstance(EIGameInstance*, int, void);
	/* vtable[24] */ virtual void Damage(int damage, EInstance *pCause, u32 hitType, ECollisionInfo *ci, float power);
	/* vtable[25] */ virtual void PlatformOrient(EMat4 &mLast, EMat4 &mCurrent);
	/* vtable[26] */ virtual bool GetAbsolutePosition(EVec3 &vPos);
	/* vtable[27] */ virtual bool UserFunc(void *pVoid);
	/* vtable[28] */ virtual void ExecScript(ERScript *pScript, EScriptParams *pParams);
};

extern ETypeInfo *gpTypeInfo_EIGameInstance;
extern __vtbl_ptr_type EIGameInstance virtual table[30];
extern ETypeInfo EIGameInstance::m_typeInfo;

EStream& operator<<(EStream &s, EIGameInstance *pD);
EStream& operator>>(EStream &s, EIGameInstance *&pD);
void EIGameInstance::~EIGameInstance(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIGameInstance();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_E_IGAMEINSTANCE_H

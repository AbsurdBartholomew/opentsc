// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_HAVOK_E_HAVOKWORLD_H
#define C__EOR_SRC2_ENGINE_HAVOK_E_HAVOKWORLD_H

struct EHavokWorld : EStorable {
	static ETypeInfo m_typeInfo;
protected:
	ERModel *m_pLevelModel;
	
public:
	EHavokWorld& operator=();
	EHavokWorld();
	static EHavokWorld* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EHavokWorld* CreateCopy();
	EHavokWorld();
	/* vtable[6] */ virtual EHavokWorld(EHavokWorld*, int, void);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	void Init(char *szLevelName);
	void Update();
protected:
	int GetSubSteps();
};

extern bool _Physics;
extern bool _UseFastSubSpace;
extern ETypeInfo *gpTypeInfo_EHavokWorld;
extern __vtbl_ptr_type EHavokWorld virtual table[10];
extern __vtbl_ptr_type EStorable virtual table[10];
extern ETypeInfo EHavokWorld::m_typeInfo;

EStream& operator<<(EStream &s, EHavokWorld *pD);
EStream& operator>>(EStream &s, EHavokWorld *&pD);
void EHavokWorld::~EHavokWorld(int __in_chrg);
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to _Physics();

#endif // C__EOR_SRC2_ENGINE_HAVOK_E_HAVOKWORLD_H

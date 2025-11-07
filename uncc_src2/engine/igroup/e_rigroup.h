// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_IGROUP_E_RIGROUP_H
#define C__EOR_SRC2_ENGINE_IGROUP_E_RIGROUP_H

struct ERIGroup : EResource {
	static ETypeInfo m_typeInfo;
protected:
	TNodeList<EInstance *> m_instances;
	ERLevel *m_pLevel;
	
public:
	ERIGroup& operator=();
	ERIGroup();
	static ERIGroup* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERIGroup* CreateCopy();
	ERIGroup();
	/* vtable[6] */ virtual ERIGroup(ERIGroup*, int, void);
	void Load(EStream &s);
	void RemoveInstance(EInstance *pInstance);
	void AddToLevel(ERLevel *pLevel);
	void RemoveFromLevel(ERLevel *pLevel);
	void InitializeInstances();
	/* vtable[10] */ virtual void Reload(EStream &s);
protected:
	void Deallocate();
};

extern ETypeInfo *gpTypeInfo_ERIGroup;
extern __vtbl_ptr_type ERIGroup virtual table[13];
extern ETypeInfo ERIGroup::m_typeInfo;

EStream& operator<<(EStream &s, ERIGroup *pD);
EStream& operator>>(EStream &s, ERIGroup *&pD);
void ERIGroup::~ERIGroup(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERIGroup();

#endif // C__EOR_SRC2_ENGINE_IGROUP_E_RIGROUP_H

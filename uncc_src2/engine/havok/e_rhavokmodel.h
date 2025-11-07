// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_HAVOK_E_RHAVOKMODEL_H
#define C__EOR_SRC2_ENGINE_HAVOK_E_RHAVOKMODEL_H

struct ERHavokModel : EResource {
	static ETypeInfo m_typeInfo;
protected:
	int m_numGeometries;
	int m_isLevel;
	bool m_owns;
	
public:
	ERHavokModel& operator=();
	ERHavokModel();
	static ERHavokModel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERHavokModel* CreateCopy();
	ERHavokModel();
	/* vtable[6] */ virtual ERHavokModel(ERHavokModel*, int, void);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	/* vtable[10] */ virtual void Reload(EStream &s);
	int IsLevel();
	void SetLevel(bool level);
	int GetNumGeometries();
};

extern ETypeInfo *gpTypeInfo_ERHavokModel;
extern __vtbl_ptr_type ERHavokModel virtual table[13];
extern ETypeInfo ERHavokModel::m_typeInfo;

EStream& operator<<(EStream &s, ERHavokModel *pD);
EStream& operator>>(EStream &s, ERHavokModel *&pD);
void ERHavokModel::~ERHavokModel(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERHavokModel();

#endif // C__EOR_SRC2_ENGINE_HAVOK_E_RHAVOKMODEL_H

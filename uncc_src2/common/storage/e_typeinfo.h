// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_STORAGE_E_TYPEINFO_H
#define C__EOR_SRC2_COMMON_STORAGE_E_TYPEINFO_H

typedef EStorable* (*FnNew)(/* parameters unknown */);

struct ETypeInfo {
	FnNew m_pfnNew;
	char *m_name;
	u32 m_key;
	u16 m_version;
	u16 m_readVersion;
	ETypeInfo *m_pBaseClass;
	ETypeInfo *m_pTreeLeft;
	ETypeInfo *m_pTreeRight;
	ETypeInfo *m_pListNext;
	static ETypeInfo *m_pTreeHead;
	static ETypeInfo *m_pListHead;
	static int m_count;
	
	ETypeInfo& operator=();
	ETypeInfo();
	ETypeInfo();
	ETypeInfo* Register(FnNew pfnNew, u16 version, char *name, ETypeInfo *pBaseClass);
	EStorable* New();
	static ETypeInfo* Find(/* parameters unknown */);
	static ETypeInfo* Find(/* parameters unknown */);
	void SetReadVersion();
	u16 GetVersion();
	ETypeInfo* GetBaseClass();
	char* GetName();
	u32 GetKey();
	static u32 CalcKey(/* parameters unknown */);
	bool IsDerivedFrom(ETypeInfo *pType);
private:
	void Insert();
};

extern ETypeInfo *ETypeInfo::m_pTreeHead;
extern ETypeInfo *ETypeInfo::m_pListHead;
extern int ETypeInfo::m_count;


#endif // C__EOR_SRC2_COMMON_STORAGE_E_TYPEINFO_H

/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once


#include "common/types.h"

class EStorable;

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
	
	ETypeInfo();
	ETypeInfo* Register(FnNew pfnNew, u16 version, char *name, ETypeInfo *pBaseClass);
	EStorable* New();
	static ETypeInfo* Find(u32 key);
	void SetReadVersion();
	u16 GetVersion() { return m_version; }
	ETypeInfo* GetBaseClass() { return m_pBaseClass; }
	char* GetName() { return m_name; }
	u32 GetKey() { return m_key; }
	static u32 CalcKey(char *string);
	bool IsDerivedFrom(ETypeInfo *pType);
private:
	void Insert();
};

#define DECLARE_TYPEINFO(class_name) \
    static class_name *New(); \
    /* vtable[1] */ virtual void SafeDelete(); \
    /* vtable[2] */ virtual ETypeInfo *GetTypeInfo(); \
    /* vtable[3] */ virtual char *GetTypeName(); \
    /* vtable[4] */ virtual u32 GetTypeKey(); \
    /* vtable[5] */ virtual u16 GetTypeVersion(); \
    static u16 GetReadVersion(/* parameters unknown */); \
    static ETypeInfo *RegisterType(u16 version); \
    class_name *CreateCopy();

// Macro to make life easier - likely what EOR had in their codebase somewhere
#define DEFINE_TYPEINFO(class_name) \
	ETypeInfo class_name::m_typeInfo; \
	\
	class_name *class_name::New() \
	{ \
		return new class_name(); \
	}\
	\
    ETypeInfo *class_name::GetTypeInfo() \
    { \
        return &m_typeInfo; \
    } \
    \
    char *class_name::GetTypeName() \
    { \
        return m_typeInfo.m_name; \
    } \
    \
    u32 class_name::GetTypeKey()\
    { \
        return m_typeInfo.m_key; \
    } \
    \
    u16 class_name::GetTypeVersion() \
    { \
        return m_typeInfo.m_version; \
    } \
    \
    u16 class_name::GetReadVersion() \
    { \
        return m_typeInfo.m_readVersion; \
    } \
    \
    ETypeInfo *class_name::RegisterType(u16 version) \
    { \
        return m_typeInfo.Register((FnNew)New, version, #class_name, &m_typeInfo); \
    } \
	void class_name::SafeDelete() \
	{ \
		if(this != NULL) \
		{ \
			delete this; \
		} \
	} \
    \
    class_name *class_name::CreateCopy() \
    { \
        CreateCopy(); \
    } \

/*SafeDelete:
EStorable__vtable *pEVar1;
  
  if (this != (ESphereTreeNode *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)this->m_pChildren + *(short *)&pEVar1[1].GetTypeName + -0x18,3);
  }
  return;
*/
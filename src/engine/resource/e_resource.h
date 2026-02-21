/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/datastruc/e_string.h"
#include "common/storage/e_storage.h"
#include "common/storage/e_storable.h"
#include "common/file/e_file.h"
#include "common/types.h"
#include "engine/resource/e_resloader.h"

class EResourceManager;

class EResource : public EStorable 
{	
public:
	EResource();
	static EResource* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(u16 version);
	EResource* CreateCopy();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	void DelRef();
	void AddRef();
	u32 GetResId();
	/* vtable[9] */ virtual void Init();
	/* vtable[10] */ virtual void Reload(EStream &s);
	/* vtable[11] */ virtual void Reload(EFile *pFile);

	static ETypeInfo m_typeInfo;
	EString m_name;

	friend class EResourceManager;
protected:
	EResourceManager *m_pManager;
	u32 m_resId;
	s32 m_nRefs;
};

// Macro to make life easier - likely what EOR had in their codebase somewhere
#define FILL_OUT_TYPE_INFO(class_name) \
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
    \
    class_name *class_name::CreateCopy() \
    { \
        CreateCopy(); \
    }
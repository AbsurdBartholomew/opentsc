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
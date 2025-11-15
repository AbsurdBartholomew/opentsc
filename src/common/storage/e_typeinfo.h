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
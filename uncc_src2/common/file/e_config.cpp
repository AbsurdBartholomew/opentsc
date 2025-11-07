// STATUS: NOT STARTED

#include "e_config.h"

struct TRedBlackTree<NLIteratorPtrType *,EString *> : ERedBlackTree {
	TRedBlackTree<NLIteratorPtrType *,EString *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<NLIteratorPtrType *,EString *>*, int, void);
	EString* operator[]();
	EString*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static NLIterator GetKey(/* parameters unknown */);
	static EString* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TStringRedBlackTreeNoCase<NLIteratorPtrType *> : EStringRedBlackTreeNoCase {
	TStringRedBlackTreeNoCase<NLIteratorPtrType *>& operator=();
	TStringRedBlackTreeNoCase();
	TStringRedBlackTreeNoCase();
	TStringRedBlackTreeNoCase(TStringRedBlackTreeNoCase<NLIteratorPtrType *>*, int, void);
	NLIterator operator[]();
	NLIterator& operator[]();
	SRBNCIterator Insert();
	SRBNCIterator Find();
	SRBNCIterator FindFirst();
	SRBNCIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	SRBNCIterator SetValue();
	static void SetValue(/* parameters unknown */);
	void SetValues();
	static NLIterator GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

bool EConfig::Open(char *szFilename) {
	EFile *pFile;
	char szBuffer[4096];
	int pos;
	
  bool bVar1;
  EString *this_00;
  undefined1 *value;
  int iVar2;
  char *pcVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  char szBuffer [4096];
  EString local_c0 [4];
  EFile *pFile;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  Close__7EConfigbT1PCc(this,true,false,(char *)0x0);
  __as__7EStringPCc(&this->m_file,szFilename);
  bVar1 = Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
                    (&_eorFileSys.field0_0x0,&pFile,(this->m_file).m_p,"r",DT_DEFAULT,
                     AM_SEQUENTIAL_SCAN);
  if (bVar1) {
    while (pcVar3 = GetS__7EConfigPciP5EFile(szBuffer,0xfff,pFile), pcVar3 != (char *)0x0) {
      this_00 = (EString *)__builtin_new(4);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
      SetToNull__7EString(this_00);
      value = AddTail__9ENodeListUi(&(this->m_lines).field0_0x0,(uint)this_00);
                    /* end of inlined section */
      __as__7EStringPCc(this_00,szBuffer);
      iVar2 = Find__C7EStringc(this_00,'=');
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
      if (((iVar2 != -1) && (*this_00->m_p != ';')) && (*this_00->m_p != '#')) {
        Left__C7EStringi(local_c0,(int)this_00);
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
        SetValue__18EStringTableNoCasePCcUi
                  (&(this->m_entries).field0_0x0,local_c0[0].m_p,(uint)value);
        Deallocate__7EStringPc(local_c0,local_c0[0].m_p);
      }
    }
    Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&pFile);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

bool EConfig::Close(bool updateChanges, bool forceWrite, char *pszSection) {
	bool success;
	EConfig *this;
	TNodeList<EString *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EString *this_00;
  bool bVar1;
  ENodeListNode *pEVar2;
  
  bVar1 = false;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if ((*(this->m_file).m_p != '\0') &&
     (((*(int *)this != 0 || (bVar1 = true, forceWrite)) && (bVar1 = true, updateChanges)))) {
    bVar1 = Write__7EConfigPCc(this,pszSection);
  }
  Empty__7EString(&this->m_file);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_lines).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    this_00 = (EString *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      if (this_00 != (EString *)0x0) {
        Deallocate__7EStringPc(this_00,this_00->m_p);
        _memmanFree__FPv(this_00);
      }
      if (pEVar2 == (ENodeListNode *)0x0) break;
      this_00 = (EString *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_lines).field0_0x0);
                    /* end of inlined section */
  RemoveAll__18EStringTableNoCase(&(this->m_entries).field0_0x0);
  *(undefined4 *)this = 0;
  return bVar1;
}

bool EConfig::Write(char *pszSection) {
	char pszBuff[4096];
	EFile *pFile;
	NLIterator i;
	int nLen;
	NLIterator i;
	NLIterator i;
	
  bool bVar1;
  size_t sVar2;
  char **ppcVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  ENodeListNode *pEVar4;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  char pszBuff [4096];
  EFile *pFile;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  bVar1 = Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
                    (&_eorFileSys.field0_0x0,&pFile,(this->m_file).m_p,"w",DT_DEFAULT,
                     AM_RANDOM_ACCESS);
  if (bVar1) {
    pEVar4 = (this->m_lines).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      ppcVar3 = (char **)pEVar4->data;
      while( true ) {
                    /* end of inlined section */
        sVar2 = strlen(*ppcVar3);
        sprintf(pszBuff,"%s\r\n");
        (*(code *)pFile->__vtable->GetLastError)
                  ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Flush,pszBuff,
                   (int)sVar2 + 2);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar4 = pEVar4->pNext;
                    /* end of inlined section */
        if (pEVar4 == (ENodeListNode *)0x0) break;
        ppcVar3 = (char **)pEVar4->data;
      }
    }
    Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&pFile);
    *(undefined4 *)this = 0;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

void EConfig::SetString(char *szLabel, char *szValue) {
	NLIterator li;
	EString *pLine;
	char szBuffer[4096];
	TStringTableNoCase<NLIteratorPtrType *> *this;
	char *szKey;
	NLIterator i;
	NLIterator i;
	EString *data;
	char *szKey;
	EString *this;
	
  undefined1 *puVar1;
  EString *this_00;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  char szBuffer [4096];
  undefined1 *li;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
  puVar1 = Find__C18EStringTableNoCasePCcPUi(&(this->m_entries).field0_0x0,szLabel,(uint *)&li);
                    /* end of inlined section */
  if (puVar1 == (undefined1 *)0x0) {
    this_00 = (EString *)__builtin_new(4);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
    SetToNull__7EString(this_00);
    li = AddTail__9ENodeListUi(&(this->m_lines).field0_0x0,(uint)this_00);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
    SetValue__18EStringTableNoCasePCcUi(&(this->m_entries).field0_0x0,szLabel,(uint)li);
                    /* end of inlined section */
    *(undefined4 *)this = 1;
  }
  else {
                    /* end of inlined section */
    this_00 = *(EString **)li;
  }
  sprintf(szBuffer,"%s=%s");
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  iVar2 = Compare__C7EStringPCc(this_00,szBuffer);
                    /* end of inlined section */
  if (iVar2 != 0) {
    __as__7EStringPCc(this_00,szBuffer);
    *(undefined4 *)this = 1;
  }
  return;
}

bool EConfig::Delete(char *szLabel) {
	NLIterator li;
	TStringTableNoCase<NLIteratorPtrType *> *this;
	NLIterator i;
	NLIterator i;
	
  EString *this_00;
  bool bVar1;
  undefined1 *i;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined1 *li;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  i = Find__C18EStringTableNoCasePCcPUi(&(this->m_entries).field0_0x0,szLabel,(uint *)&li);
                    /* end of inlined section */
  if (i == (undefined1 *)0x0) {
    bVar1 = false;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = *(EString **)li;
    Remove__9ENodeListP17NLIteratorPtrType(&(this->m_lines).field0_0x0,li);
    Remove__18EStringTableNoCaseP19STNCIteratorPtrType(&(this->m_entries).field0_0x0,i);
                    /* end of inlined section */
    if (this_00 != (EString *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
      Deallocate__7EStringPc(this_00,this_00->m_p);
      _memmanFree__FPv(this_00);
                    /* end of inlined section */
    }
    bVar1 = true;
    *(undefined4 *)this = 1;
  }
  return bVar1;
}

char* EConfig::GetString(char *szLabel, char *szDefaultString) {
	NLIterator li;
	NLIterator i;
	NLIterator i;
	int pos;
	
  EString *this_00;
  undefined1 *puVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined1 *li;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
  puVar1 = Find__C18EStringTableNoCasePCcPUi(&(this->m_entries).field0_0x0,szLabel,(uint *)&li);
                    /* end of inlined section */
  if (puVar1 != (undefined1 *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = *(EString **)li;
                    /* end of inlined section */
    iVar2 = Find__C7EStringc(this_00,'=');
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
    szDefaultString = this_00->m_p + iVar2 + 1;
  }
  return szDefaultString;
}

void EConfig::SetInt(char *szLabel, int value) {
	char szBuffer[128];
	
  char szBuffer [128];
  
  sprintf(szBuffer,"%d");
  SetString__7EConfigPCcT1(this,szLabel,szBuffer);
  return;
}

int EConfig::GetInt(char *szLabel, int defaultValue) {
	char *szValue;
	
  char *s;
  
  s = GetString__7EConfigPCcT1(this,szLabel,(char *)0x0);
  if (s != (char *)0x0) {
    defaultValue = atoi(s);
  }
  return defaultValue;
}

void EConfig::SetFloat(char *szLabel, float value) {
	char szBuffer[128];
	
  char szBuffer [128];
  
  sprintf(szBuffer,"%f");
  SetString__7EConfigPCcT1(this,szLabel,szBuffer);
  return;
}

float EConfig::GetFloat(char *szLabel, float defaultValue) {
	char *szValue;
	
  char *s;
  double dVar1;
  
  s = GetString__7EConfigPCcT1(this,szLabel,(char *)0x0);
  if (s != (char *)0x0) {
    dVar1 = (double)atof(s);
    defaultValue = (float)dVar1;
  }
  return defaultValue;
}

void EConfig::AddComment(char *szComment) {
  EString *this_00;
  
  this_00 = (EString *)__builtin_new(4);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  SetToNull__7EString(this_00);
                    /* end of inlined section */
  __as__7EStringPCc(this_00,"# ");
  __apl__7EStringPCc(this_00,szComment);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&(this->m_lines).field0_0x0,(uint)this_00);
                    /* end of inlined section */
  *(undefined4 *)this = 1;
  return;
}

void EConfig::Sort() {
	TRedBlackTree<NLIteratorPtrType *,EString *> iteratorMap;
	TStringRedBlackTreeNoCase<NLIteratorPtrType *> sortTree;
	STNCIterator ei;
	NLIterator li;
	SRBNCIterator si;
	STNCIterator i;
	STNCIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator key;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	EString *pString;
	SRBNCIterator i;
	SRBNCIterator i;
	EString *data;
	
  undefined4 *key;
  char **ppcVar1;
  ENodeListNode *pEVar2;
  EString *pEVar3;
  uint *puVar4;
  EString **ppEVar5;
  undefined1 *puVar6;
  uint key_00;
  ENodeListNode *pEVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EStringTableNoCaseNode *pEVar8;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  TNodeList_EString___ *this_00;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  TRedBlackTree_NLIteratorPtrType___EString___ iteratorMap;
  TStringRedBlackTreeNoCase_NLIteratorPtrType___ sortTree;
  EString local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->m_entries).field0_0x0.m_list.m_pHead != (EStringTableNoCaseNode *)0x0) {
    this_00 = &this->m_lines;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    __13ERedBlackTree((ERedBlackTree *)&iteratorMap);
    __25EStringRedBlackTreeNoCase((EStringRedBlackTreeNoCase *)&sortTree);
    pEVar8 = (this->m_entries).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
    if (pEVar8 == (EStringTableNoCaseNode *)0x0) {
      pEVar7 = (this->m_lines).field0_0x0.m_l.m_pHead;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
      key = (undefined4 *)pEVar8->value;
      while( true ) {
        ppcVar1 = (char **)*key;
        puVar4 = __vc__13ERedBlackTreeUi((ERedBlackTree *)&iteratorMap,(uint)key);
                    /* end of inlined section */
        *puVar4 = (uint)ppcVar1;
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktreenocase.h */
        puVar4 = __vc__25EStringRedBlackTreeNoCasePCc
                           ((EStringRedBlackTreeNoCase *)&sortTree,*ppcVar1);
                    /* end of inlined section */
        *puVar4 = (uint)key;
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
        pEVar8 = pEVar8->pListNext;
                    /* end of inlined section */
        if (pEVar8 == (EStringTableNoCaseNode *)0x0) break;
        key = (undefined4 *)pEVar8->value;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar7 = (this->m_lines).field0_0x0.m_l.m_pHead;
    }
                    /* end of inlined section */
    if (pEVar7 == (ENodeListNode *)0x0) {
      pEVar7 = (this->m_lines).field0_0x0.m_l.m_pHead;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar7->pNext;
      while( true ) {
        puVar6 = Find__C13ERedBlackTreeUiPUi((ERedBlackTree *)&iteratorMap,(uint)pEVar7,(uint *)0x0)
        ;
                    /* end of inlined section */
        if (puVar6 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          Remove__9ENodeListP17NLIteratorPtrType(&this_00->field0_0x0,(undefined1 *)pEVar7);
        }
                    /* end of inlined section */
        if (pEVar2 == (ENodeListNode *)0x0) break;
        pEVar7 = pEVar2;
        pEVar2 = pEVar2->pNext;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar7 = (this->m_lines).field0_0x0.m_l.m_pHead;
    }
    if (pEVar7 != (ENodeListNode *)0x0) {
      pEVar3 = (EString *)pEVar7->data;
      while( true ) {
        pEVar7 = pEVar7->pNext;
        if (pEVar3 != (EString *)0x0) {
          Deallocate__7EStringPc(pEVar3,pEVar3->m_p);
          _memmanFree__FPv(pEVar3);
        }
        if (pEVar7 == (ENodeListNode *)0x0) break;
        pEVar3 = (EString *)pEVar7->data;
      }
    }
    RemoveAll__9ENodeList(&this_00->field0_0x0);
                    /* end of inlined section */
    if (sortTree.field0_0x0.m_list.m_pHead != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktreenocase.h */
      key_00 = (sortTree.field0_0x0.m_list.m_pHead)->value;
      while( true ) {
        ppEVar5 = (EString **)__vc__13ERedBlackTreeUi((ERedBlackTree *)&iteratorMap,key_00);
                    /* end of inlined section */
        pEVar3 = *ppEVar5;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        puVar6 = AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar3);
                    /* end of inlined section */
        Find__C7EStringc(pEVar3,'=');
        Left__C7EStringi(local_80,(int)pEVar3);
                    /* inlined from /eor/src2/common/datastruc/e_stringtablenocase.h */
        SetValue__18EStringTableNoCasePCcUi
                  (&(this->m_entries).field0_0x0,local_80[0].m_p,(uint)puVar6);
        Deallocate__7EStringPc(local_80,local_80[0].m_p);
        sortTree.field0_0x0.m_list.m_pHead = (sortTree.field0_0x0.m_list.m_pHead)->pNext;
                    /* end of inlined section */
        if (sortTree.field0_0x0.m_list.m_pHead == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) break;
        key_00 = (sortTree.field0_0x0.m_list.m_pHead)->value;
      }
    }
                    /* inlined from /eor/src2/common/datastruc/e_stringredblacktreenocase.h */
    *(undefined4 *)this = 1;
    RemoveAll__25EStringRedBlackTreeNoCase((EStringRedBlackTreeNoCase *)&sortTree);
    RemoveAll__13ERedBlackTree((ERedBlackTree *)&iteratorMap);
                    /* end of inlined section */
  }
  return;
}

void EConfig::Empty() {
	TNodeList<EString *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EString *this_00;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar1 = (this->m_lines).field0_0x0.m_l.m_pHead;
  if (pEVar1 != (ENodeListNode *)0x0) {
    this_00 = (EString *)pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      if (this_00 != (EString *)0x0) {
        Deallocate__7EStringPc(this_00,this_00->m_p);
        _memmanFree__FPv(this_00);
      }
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (EString *)pEVar1->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_lines).field0_0x0);
                    /* end of inlined section */
  RemoveAll__18EStringTableNoCase(&(this->m_entries).field0_0x0);
  *(undefined4 *)this = 1;
  return;
}

NLIterator EConfig::GetNextLabelAndValue(EString &labelOut, EString &valueOut, NLIterator i) {
	NLIterator i;
	NLIterator next;
	int pos;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	EString *this;
	int pos;
	
  EString *this_00;
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  EString local_a0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (i == (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    i = (undefined1 *)(this->m_lines).field0_0x0.m_l.m_pHead;
  }
                    /* end of inlined section */
  if ((ENodeListNode *)i != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = (EString *)*(uint *)i;
    while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      i = *(undefined1 **)((int)i + 8);
                    /* end of inlined section */
      iVar1 = Find__C7EStringc(this_00,'=');
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
      if (((iVar1 != -1) && (*this_00->m_p != ';')) && (*this_00->m_p != '#')) {
        Left__C7EStringi(local_a0,(int)this_00);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
        __as__7EStringPCc(labelOut,local_a0[0].m_p);
        Deallocate__7EStringPc(local_a0,local_a0[0].m_p);
                    /* end of inlined section */
        __as__7EStringPCc(valueOut,this_00->m_p + iVar1 + 1);
        return (undefined1 *)(ENodeListNode *)i;
      }
      if ((ENodeListNode *)i == (ENodeListNode *)0x0) break;
      this_00 = (EString *)*(uint *)i;
    }
  }
  return (undefined1 *)0x0;
}

EConfigIterator EConfig::GetFirst(EString &labelOut, EString &valueOut) {
  undefined1 *puVar1;
  
  puVar1 = GetNextLabelAndValue__7EConfigR7EStringT1P17NLIteratorPtrType
                     (this,labelOut,valueOut,(undefined1 *)0x0);
  return puVar1;
}

EConfigIterator EConfig::GetNext(EConfigIterator i, EString &labelOut, EString &valueOut) {
  undefined1 *puVar1;
  
  puVar1 = GetNextLabelAndValue__7EConfigR7EStringT1P17NLIteratorPtrType(this,labelOut,valueOut,i);
  return puVar1;
}

char* EConfig::GetS(char *string, int count, EFile *pFile) {
	char *pointer;
	char ch;
	
  long lVar1;
  char *pcVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  char ch;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  pcVar2 = string;
  if (count < 1) {
LAB_0032a98c:
    string = (char *)0x0;
  }
  else {
    while (count = count + -1, count != 0) {
      lVar1 = (*(code *)pFile->__vtable->Tell)
                        ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,&ch,1);
      if (lVar1 == 0) {
        if (pcVar2 != string) {
          *pcVar2 = '\0';
          return string;
        }
        goto LAB_0032a98c;
      }
      if (ch != '\r') {
        if (ch == '\n') {
          *pcVar2 = '\0';
          return string;
        }
        *pcVar2 = ch;
        pcVar2 = pcVar2 + 1;
      }
    }
    *pcVar2 = '\0';
  }
  return string;
}

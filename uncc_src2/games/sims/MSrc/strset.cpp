// STATUS: NOT STARTED

#include "strset.h"

struct CHKNAME {
	char name[5];
	
	CHKNAME& operator=();
	CHKNAME();
	CHKNAME();
	char* ToChar();
};

struct String {
	char *fStr;
	char *fDesc;
	char fLanguage;
};

enum LanguageType {
	nLanguageNone = -1,
	nLanguageDefault = 0,
	nLanguageBegin = 1,
	nLanguageUSEnglish = 1,
	nLanguageEnglish = 1,
	nLanguageUKEnglish = 2,
	nLanguageFrench = 3,
	nLanguageGerman = 4,
	nLanguageItalian = 5,
	nLanguageSpanish = 6,
	nLanguageDutch = 7,
	nLanguageDanish = 8,
	nLanguageSwedish = 9,
	nLanguageNorwegian = 10,
	nLanguageFinnish = 11,
	nLanguageHebrew = 12,
	nLanguageRussian = 13,
	nLanguagePortuguese = 14,
	nLanguageJapanese = 15,
	nLanguagePolish = 16,
	nLanguageSimplifiedChinese = 17,
	nLanguageTraditionalChinese = 18,
	nLanguageThai = 19,
	nLanguageKorean = 20,
	nLanguageCount = 21
};

struct QuickStringSet : StringSet {
	WStringSet *m_pWStringSet;
	AStringSet *m_pStringSet;
	ELocString m_defLocString;
	static c16 *s_nullPointer;
	
	QuickStringSet& operator=();
	QuickStringSet();
	QuickStringSet();
	/* vtable[1] */ virtual QuickStringSet(QuickStringSet*, int, void);
	/* vtable[2] */ virtual void Copy(StringSet *source);
	/* vtable[3] */ virtual Int Count(char nLanguage);
	/* vtable[4] */ virtual Int size();
	/* vtable[5] */ virtual char* GetString(Int index, char nLanguage);
	/* vtable[6] */ virtual ELocString GetLocString(Int index);
	/* vtable[7] */ virtual char* GetNativeString(Int index, char *pnLanguage);
	/* vtable[8] */ virtual void SetString(Int index, c16 *newString, char nLanguage);
	/* vtable[9] */ virtual void SetString();
	/* vtable[10] */ virtual void InsertString(Int index, char *str, char nLanguage);
	/* vtable[11] */ virtual void RemoveString(Int index, char nLanguage);
	/* vtable[12] */ virtual char* GetDescription(Int index, char nLanguage);
	/* vtable[13] */ virtual void SetDescription(Int index, char *desc, char nLanguage);
	/* vtable[14] */ virtual void GetName(StringBuffer *title);
	/* vtable[15] */ virtual void SetName(StringBuffer *title);
	/* vtable[16] */ virtual void SetInfo(iResFile *file, SInt16 resID, ResType type, bool cst, char nLanguage);
	/* vtable[17] */ virtual void SetLocInfo(iResFile *file, SInt16 resID, ResType type, bool cst, char nLanguage);
	/* vtable[18] */ virtual ErrType LoadRes(iResFile *file, SInt16 resID, bool bLoadAllLanguages);
	/* vtable[19] */ virtual ErrType LoadLocRes(iResFile *file, SInt16 resID, bool bLoadAllLanguages);
	/* vtable[20] */ virtual ErrType Save();
	/* vtable[21] */ virtual ErrType LoadDef(bool bLoadAllLanguages, bool bDefaultToEnglish);
	/* vtable[22] */ virtual ErrType Save();
	/* vtable[23] */ virtual SInt16 GetID();
	/* vtable[24] */ virtual iResFile* GetFile();
	/* vtable[25] */ virtual void WriteAnsiToDB();
	/* vtable[26] */ virtual void WriteWideToDB();
};

c16 *QuickStringSet::s_nullPointer = NULL;

__vtbl_ptr_type QuickStringSet virtual table[28] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::~QuickStringSet,
		/* .__delta2 = */ 28552
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::Copy,
		/* .__delta2 = */ 29000
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::Count,
		/* .__delta2 = */ 29008
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::size,
		/* .__delta2 = */ 29048
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::GetString,
		/* .__delta2 = */ 29096
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::GetLocString,
		/* .__delta2 = */ 29184
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::GetNativeString,
		/* .__delta2 = */ 29272
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::SetString,
		/* .__delta2 = */ 29280
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::SetString,
		/* .__delta2 = */ 29288
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::InsertString,
		/* .__delta2 = */ 29296
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::RemoveString,
		/* .__delta2 = */ 29304
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::GetDescription,
		/* .__delta2 = */ 29312
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::SetDescription,
		/* .__delta2 = */ 29320
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::GetName,
		/* .__delta2 = */ 29328
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::SetName,
		/* .__delta2 = */ 29360
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::SetInfo,
		/* .__delta2 = */ 29368
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::SetLocInfo,
		/* .__delta2 = */ 29480
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::LoadRes,
		/* .__delta2 = */ 29592
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::LoadLocRes,
		/* .__delta2 = */ 29808
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::Save,
		/* .__delta2 = */ 29896
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::LoadDef,
		/* .__delta2 = */ 29904
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::Save,
		/* .__delta2 = */ 29912
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::GetID,
		/* .__delta2 = */ 29920
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::GetFile,
		/* .__delta2 = */ 29952
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::WriteAnsiToDB,
		/* .__delta2 = */ 29960
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickStringSet::WriteWideToDB,
		/* .__delta2 = */ 29968
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type StringSet virtual table[28] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &StringSet::~StringSet,
		/* .__delta2 = */ 28952
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

StringSet* StringSet::CreateInstance() {
  QuickStringSet *pQVar1;
  
  pQVar1 = (QuickStringSet *)__builtin_new(0x10);
  pQVar1 = __14QuickStringSet(pQVar1);
  return &pQVar1->field0_0x0;
}

void StringSet::DestroyInstance(StringSet *pInstance) {
  if (pInstance != (StringSet *)0x0) {
    (*(code *)pInstance->__vtable->Count)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Copy,3);
  }
  return;
}

QuickStringSet* QuickStringSet::QuickStringSet() {
	StringSet *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  (this->m_defLocString).ptr = &_14QuickStringSet_s_nullPointer;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (StringSet__vtable *)_vt_14QuickStringSet;
  this->m_pWStringSet = (WStringSet *)0x0;
  this->m_pStringSet = (AStringSet *)0x0;
  return this;
}

void QuickStringSet::~QuickStringSet(int __in_chrg) {
	StringSet *this;
	void *pAddress;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/strset.h */
  (this->field0_0x0).__vtable = (StringSet__vtable *)_vt_9StringSet;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

AStringSet* AStringSet * FindRes<AStringSet>(AStringSet *begin, AStringSet *end, int resID) {
	int iCmp;
	AStringSet *middle;
	
  int iVar1;
  AStringSet *pAVar2;
  int iVar3;
  
  while( true ) {
    pAVar2 = end;
    iVar1 = ((int)pAVar2 - (int)begin) * -0x55555555;
    iVar3 = iVar1 >> 2;
    if (iVar3 < 1) {
      return (AStringSet *)0x0;
    }
    if (iVar3 == 1) break;
    end = begin + (iVar3 - (iVar1 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pAVar2;
    }
  }
  pAVar2 = (AStringSet *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pAVar2 = begin;
  }
  return pAVar2;
}

WStringSet* WStringSet * FindRes<WStringSet>(WStringSet *begin, WStringSet *end, int resID) {
	int iCmp;
	WStringSet *middle;
	
  int iVar1;
  WStringSet *pWVar2;
  int iVar3;
  
  while( true ) {
    pWVar2 = end;
    iVar1 = ((int)pWVar2 - (int)begin) * -0x55555555;
    iVar3 = iVar1 >> 2;
    if (iVar3 < 1) {
      return (WStringSet *)0x0;
    }
    if (iVar3 == 1) break;
    end = begin + (iVar3 - (iVar1 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pWVar2;
    }
  }
  pWVar2 = (WStringSet *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pWVar2 = begin;
  }
  return pWVar2;
}

void StringSet::~StringSet(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (StringSet__vtable *)_vt_9StringSet;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void QuickStringSet::Copy(StringSet *source) {
  return;
}

Int QuickStringSet::Count(char nLanguage) {
  char **ppcVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  if ((this->m_pStringSet != (AStringSet *)0x0) &&
     (ppcVar1 = (this->m_pStringSet->field0_0x0).pData, ppcVar1 != (char **)0x0)) {
    return (int)ppcVar1[-1];
  }
                    /* end of inlined section */
  return 0;
}

Int QuickStringSet::size() {
  StringSet__vtable *pSVar1;
  int iVar2;
  
  pSVar1 = (this->field0_0x0).__vtable;
  iVar2 = (*(code *)pSVar1->GetNativeString)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1->GetLocString,0);
  return iVar2;
}

char* QuickStringSet::GetString(Int index, char nLanguage) {
	VECTOR<const char *> *this;
	unsigned int n;
	VECTOR<const char *> *this;
	
  char **ppcVar1;
  char *pcVar2;
  
  if (this->m_pStringSet == (AStringSet *)0x0) {
    return (char *)0x0;
  }
  if (0 < index) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    ppcVar1 = (this->m_pStringSet->field0_0x0).pData;
    if (ppcVar1 == (char **)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = ppcVar1[-1];
    }
                    /* end of inlined section */
    if (index <= (int)pcVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      return (this->m_pStringSet->field0_0x0).pData[index + -1];
    }
  }
  return (char *)0x0;
}

ELocString QuickStringSet::GetLocString(Int index) {
	VECTOR<ELocString> *this;
	unsigned int n;
	VECTOR<ELocString> *this;
	
  ELocString *pEVar1;
  short **ppsVar2;
  
  if (this->m_pWStringSet == (WStringSet *)0x0) {
    return (ELocString)(this->m_defLocString).ptr;
  }
  if (0 < index) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar1 = (this->m_pWStringSet->field0_0x0).pData;
    if (pEVar1 == (ELocString *)0x0) {
      ppsVar2 = (short **)0x0;
    }
    else {
      ppsVar2 = pEVar1[-1].ptr;
    }
                    /* end of inlined section */
    if (index <= (int)ppsVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      return (ELocString)(this->m_pWStringSet->field0_0x0).pData[index + -1].ptr;
    }
  }
  return (ELocString)(this->m_defLocString).ptr;
}

char* QuickStringSet::GetNativeString(Int index, char *pnLanguage) {
  return (char *)0x0;
}

void QuickStringSet::SetString(Int index, char *newString, char nLanguage) {
  return;
}

void QuickStringSet::SetString(Int index, c16 *newString, char nLanguage) {
  return;
}

void QuickStringSet::InsertString(Int index, char *str, char nLanguage) {
  return;
}

void QuickStringSet::RemoveString(Int index, char nLanguage) {
  return;
}

char* QuickStringSet::GetDescription(Int index, char nLanguage) {
  return (char *)0x0;
}

void QuickStringSet::SetDescription(Int index, char *desc, char nLanguage) {
  return;
}

void QuickStringSet::GetName(StringBuffer *title) {
  erase__12StringBuffer(title);
  return;
}

void QuickStringSet::SetName(StringBuffer *title) {
  return;
}

void QuickStringSet::SetInfo(iResFile *file, SInt16 resID, ResType type, bool cst, char nLanguage) {
	iResFile *this;
	VECTOR<AStringSet> *this;
	
  ResFile *pRVar1;
  AStringSet *pAVar2;
  int iVar3;
  
  this->m_pWStringSet = (WStringSet *)0x0;
  this->m_pStringSet = (AStringSet *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
                    /* end of inlined section */
  if ((file != (iResFile__0_3211 *)0x0) && (pRVar1 = file->fResData, pRVar1 != (ResFile *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pAVar2 = (pRVar1->stringSet).pData;
    iVar3 = 0;
    if (pAVar2 != (AStringSet *)0x0) {
      iVar3 = *(int *)&pAVar2[-1].resID;
    }
                    /* end of inlined section */
    pAVar2 = FindRes__H1ZC10AStringSet_PX01T0i_PX01
                       (pAVar2,(pRVar1->stringSet).pData + iVar3,(int)(short)resID);
    this->m_pStringSet = pAVar2;
  }
  return;
}

void QuickStringSet::SetLocInfo(iResFile *file, SInt16 resID, ResType type, bool cst, char nLanguage) {
	iResFile *this;
	VECTOR<WStringSet> *this;
	
  ResFile *pRVar1;
  WStringSet *pWVar2;
  int iVar3;
  
  if (file != (iResFile__0_3211 *)0x0) {
    this->m_pWStringSet = (WStringSet *)0x0;
    this->m_pStringSet = (AStringSet *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
    pRVar1 = file->fResData;
                    /* end of inlined section */
    if (pRVar1 != (ResFile *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pWVar2 = (pRVar1->locStringSet).pData;
      iVar3 = 0;
      if (pWVar2 != (WStringSet *)0x0) {
        iVar3 = *(int *)&pWVar2[-1].resID;
      }
                    /* end of inlined section */
      pWVar2 = FindRes__H1ZC10WStringSet_PX01T0i_PX01
                         (pWVar2,(pRVar1->locStringSet).pData + iVar3,(int)(short)resID);
      this->m_pWStringSet = pWVar2;
    }
  }
  return;
}

ErrType QuickStringSet::LoadRes(iResFile *file, SInt16 resID, bool bLoadAllLanguages) {
	ErrType err;
	
  StringSet__vtable *pSVar1;
  long lVar2;
  
  pSVar1 = (this->field0_0x0).__vtable;
  (*(code *)pSVar1[1].GetLocString)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1[1].GetString,file,resID,
             0x53545223,0,0xffffffffffffffff);
  pSVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pSVar1[1].SetInfo)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1[1].SetName,
                     bLoadAllLanguages,1);
  if (lVar2 != 0) {
    pSVar1 = (this->field0_0x0).__vtable;
    (*(code *)pSVar1[1].GetLocString)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1[1].GetString,file,resID,
               0x43535400,1,0xffffffffffffffff);
    pSVar1 = (this->field0_0x0).__vtable;
    lVar2 = (*(code *)pSVar1[1].SetInfo)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1[1].SetName,
                       bLoadAllLanguages,1);
  }
  return (int)lVar2;
}

ErrType QuickStringSet::LoadLocRes(iResFile *file, SInt16 resID, bool bLoadAllLanguages) {
  StringSet__vtable *pSVar1;
  int iVar2;
  
  pSVar1 = (this->field0_0x0).__vtable;
  (*(code *)pSVar1[1].SetString)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1[1].GetNativeString,file,
             resID,0x53545223,0,0xffffffffffffffff);
  iVar2 = -1;
  if (this->m_pWStringSet != (WStringSet *)0x0) {
    iVar2 = 0;
  }
  return iVar2;
}

ErrType QuickStringSet::Save(iResFile *file, SInt16 resID) {
  return 0;
}

ErrType QuickStringSet::LoadDef(bool bLoadAllLanguages, bool bDefaultToEnglish) {
  return 0;
}

ErrType QuickStringSet::Save() {
  return 0;
}

SInt16 QuickStringSet::GetID() {
  if (this->m_pStringSet == (AStringSet *)0x0) {
    return 0;
  }
  return this->m_pStringSet->resID;
}

iResFile* QuickStringSet::GetFile() {
  return (iResFile__0_3211 *)0x0;
}

void QuickStringSet::WriteAnsiToDB() {
  return;
}

void QuickStringSet::WriteWideToDB() {
  return;
}

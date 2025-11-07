// STATUS: NOT STARTED

#include "Careers.h"

struct CareersImpl : Careers {
	ERQuickdata *m_pCareerData;
	ERQTable<Career> *m_pCareerTable;
	WStringSet *m_pGradeStrings;
	WStringSet *m_pPerformanceStrings;
	c16 m_emptyChar;
	c16 *m_emptyString;
	ELocString m_emptyLocString;
	
	CareersImpl& operator=();
	CareersImpl();
	CareersImpl();
	/* vtable[1] */ virtual CareersImpl(CareersImpl*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[2] */ virtual void Load();
	/* vtable[3] */ virtual void TearDown();
	/* vtable[4] */ virtual Career* GetCareerByID(Int id);
	/* vtable[5] */ virtual int GetNumCareers();
	/* vtable[6] */ virtual Career* GetCareerByIndex(int iIndex);
	/* vtable[7] */ virtual int GetIndexByCareer(Career *pCareer);
	/* vtable[8] */ virtual ELocString& GetJobPerformance(int performance);
	/* vtable[9] */ virtual ELocString& GetJobGrade(int grade);
	/* vtable[10] */ virtual ELocString& GetOfferDialogText(Career &career, bool female);
	/* vtable[11] */ virtual bool GetBehCareerData(Career &career, Int jobLevel, Int dataIndex, SInt16 *data);
	/* vtable[12] */ virtual ELocString& GetJobName(Job &job, bool female);
	/* vtable[13] */ virtual ELocString& GetShortName(Job &job, bool female);
	/* vtable[14] */ virtual Int GetCarpoolHour(Job &job);
	/* vtable[15] */ virtual char* GetSuit(Job &job, bool female);
};

struct ERQTable<Career> {
	char *pName;
	Career *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

__vtbl_ptr_type CareersImpl virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::~CareersImpl,
		/* .__delta2 = */ -24496
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::Load,
		/* .__delta2 = */ -25744
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::TearDown,
		/* .__delta2 = */ -25488
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetCareerByID,
		/* .__delta2 = */ -25416
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetNumCareers,
		/* .__delta2 = */ -25344
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetCareerByIndex,
		/* .__delta2 = */ -25328
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetIndexByCareer,
		/* .__delta2 = */ -25304
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetJobPerformance,
		/* .__delta2 = */ -25272
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetJobGrade,
		/* .__delta2 = */ -25088
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetOfferDialogText,
		/* .__delta2 = */ -25024
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetBehCareerData,
		/* .__delta2 = */ -24976
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetJobName,
		/* .__delta2 = */ -24688
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetShortName,
		/* .__delta2 = */ -24640
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetCarpoolHour,
		/* .__delta2 = */ -24592
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CareersImpl::GetSuit,
		/* .__delta2 = */ -24552
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Careers virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Careers::~Careers,
		/* .__delta2 = */ -26016
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void Careers::~Careers(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Careers__vtable *)_vt_7Careers;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

Careers* Careers::CreateInstance() {
  Careers *pCVar1;
  
  pCVar1 = (Careers *)calloc(0x20,1);
  pCVar1->__vtable = (Careers__vtable *)_vt_11CareersImpl;
  return pCVar1;
}

void Careers::DestroyInstance(Careers *pInstance) {
  if (pInstance != (Careers *)0x0) {
    (*(code *)pInstance->__vtable->TearDown)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,3);
  }
  return;
}

WStringSet* FindStringSet(VECTOR<WStringSet> &sets, SInt16 fResID, SInt32 fResType) {
	int i;
	WStringSet *result;
	WStringSet *pSet;
	VECTOR<WStringSet> *this;
	VECTOR<WStringSet> *this;
	VECTOR<WStringSet> *this;
	
  int iVar1;
  int iVar2;
  WStringSet *pWVar3;
  int iVar4;
  WStringSet *pWVar5;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  iVar4 = 0;
  if (sets->pData != (WStringSet *)0x0) {
    iVar4 = *(int *)&sets->pData[-1].resID;
  }
                    /* end of inlined section */
  if (iVar4 == 0) {
    pWVar3 = (WStringSet *)0x0;
  }
  else {
                    /* end of inlined section */
    pWVar3 = sets->pData;
  }
  iVar2 = 0;
  pWVar5 = (WStringSet *)0x0;
  if (0 < iVar4) {
    iVar1 = pWVar3->resType;
    while (((iVar2 = iVar2 + 1, iVar1 != fResType ||
            (pWVar5 = pWVar3, (long)(short)pWVar3->resID != (long)(int)(short)fResID)) &&
           (pWVar5 = (WStringSet *)0x0, iVar2 < iVar4))) {
      iVar1 = pWVar3[1].resType;
      pWVar3 = pWVar3 + 1;
    }
  }
  return pWVar5;
}

void CareersImpl::Load() {
	ERQTable<Career> **ppTable;
	ERQTable<Career> *pTable;
	ERQTable<WStringSet> *pTable;
	WStringSet **ppData;
	WStringSet *pData;
	WStringSet **ppData;
	WStringSet *pData;
	c16 **p;
	
  Careers__vtable *pCVar1;
  ERQuickdata *pEVar2;
  ERQTable_Career_ *pEVar3;
  void *_pTable;
  WStringSet *pWVar4;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
  pCVar1 = (this->field0_0x0).__vtable;
  (*(code *)pCVar1->GetIndexByCareer)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pCVar1->GetCareerByIndex);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  pEVar2 = (ERQuickdata *)
           AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0x4f40c4ec,(EFile *)0x0,0)
  ;
  this->m_pCareerData = pEVar2;
  pEVar3 = (ERQTable_Career_ *)getTable__11ERQuickdataPCc(pEVar2,"Career");
  if (pEVar3 == (ERQTable_Career_ *)0x0) {
    if (this != (CareersImpl *)0xfffffff8) {
      this->m_pCareerTable = (ERQTable_Career_ *)0x0;
    }
  }
  else {
    pEVar2 = pERamfffffffc;
    if (this == (CareersImpl *)0xfffffff8) goto LAB_00269bf4;
    this->m_pCareerTable = pEVar3;
  }
  pEVar2 = this->m_pCareerData;
LAB_00269bf4:
  _pTable = getTable__11ERQuickdataPCc(pEVar2,"WStringSet");
  pWVar4 = (WStringSet *)getRow__11ERQuickdataPCvPCc(this->m_pCareerData,_pTable,"Grades");
  if (this != (CareersImpl *)0xfffffff4) {
    this->m_pGradeStrings = pWVar4;
  }
  pWVar4 = (WStringSet *)getRow__11ERQuickdataPCvPCc(this->m_pCareerData,_pTable,"Performance");
  if (this != (CareersImpl *)0xfffffff0) {
    this->m_pPerformanceStrings = pWVar4;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  (this->m_emptyLocString).ptr = &this->m_emptyString;
                    /* end of inlined section */
  this->m_emptyString = &this->m_emptyChar;
  this->m_emptyChar = 0;
  return;
}

void CareersImpl::TearDown() {
  if (this->m_pCareerData != (ERQuickdata *)0x0) {
    DelRef__9EResource(&this->m_pCareerData->field0_0x0);
    this->m_pPerformanceStrings = (WStringSet *)0x0;
    this->m_pCareerData = (ERQuickdata *)0x0;
    this->m_pCareerTable = (ERQTable_Career_ *)0x0;
    this->m_pGradeStrings = (WStringSet *)0x0;
  }
  return;
}

Career* CareersImpl::GetCareerByID(Int id) {
	Career *result;
	Career *c;
	u32 i;
	u32 numCareers;
	
  uint uVar1;
  int iVar2;
  Career *pCVar3;
  Career *pCVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = this->m_pCareerTable->uNumRows;
  pCVar3 = this->m_pCareerTable->pData;
  pCVar4 = (Career *)0x0;
  if (uVar1 != 0) {
    iVar2 = pCVar3->fID;
    while ((uVar5 = uVar5 + 1, pCVar4 = pCVar3, iVar2 != id &&
           (pCVar3 = pCVar3 + 1, pCVar4 = (Career *)0x0, uVar5 < uVar1))) {
      iVar2 = pCVar3->fID;
    }
  }
  return pCVar4;
}

int CareersImpl::GetNumCareers() {
  return this->m_pCareerTable->uNumRows;
}

Career* CareersImpl::GetCareerByIndex(int iIndex) {
  return this->m_pCareerTable->pData + iIndex;
}

int CareersImpl::GetIndexByCareer(Career *pCareer) {
  return ((int)pCareer - (int)this->m_pCareerTable->pData) * -0x33333333 >> 2;
}

ELocString& CareersImpl::GetJobPerformance(int performance) {
	int strIdx;
	VECTOR<ELocString> *this;
	unsigned int n;
	
  ELocString *pEVar1;
  short **ppsVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)performance;
  iVar3 = 0;
  if ((((-60.0 <= fVar4) && (iVar3 = 1, -30.0 <= fVar4)) && (iVar3 = 2, 30.0 <= fVar4)) &&
     (iVar3 = 4, fVar4 < 60.0)) {
    iVar3 = 3;
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pEVar1 = (this->m_pPerformanceStrings->field0_0x0).pData;
  if (pEVar1 == (ELocString *)0x0) {
    ppsVar2 = (short **)0x0;
  }
  else {
    ppsVar2 = pEVar1[-1].ptr;
  }
                    /* end of inlined section */
  if ((int)ppsVar2 <= iVar3) {
    return &this->m_emptyLocString;
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  return (this->m_pPerformanceStrings->field0_0x0).pData + iVar3;
}

ELocString& CareersImpl::GetJobGrade(int grade) {
	VECTOR<ELocString> *this;
	VECTOR<ELocString> *this;
	unsigned int n;
	VECTOR<ELocString> *this;
	
  ELocString *pEVar1;
  short **ppsVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pEVar1 = (this->m_pGradeStrings->field0_0x0).pData;
  if (pEVar1 == (ELocString *)0x0) {
    ppsVar2 = (short **)0x0;
  }
  else {
    ppsVar2 = pEVar1[-1].ptr;
  }
                    /* end of inlined section */
  if (grade < (int)ppsVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    return (this->m_pGradeStrings->field0_0x0).pData + grade;
  }
  return &this->m_emptyLocString;
}

ELocString& CareersImpl::GetOfferDialogText(Career &career, bool female) {
	ELocString *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  if ((female) && (**career->fOfferDialogText[1].ptr != 0)) {
    return career->fOfferDialogText + 1;
  }
  return career->fOfferDialogText;
}

bool CareersImpl::GetBehCareerData(Career &career, Int jobLevel, Int dataIndex, SInt16 *data) {
	Job *job;
	unsigned int n;
	
  Careers__vtable *pCVar1;
  short **ppsVar2;
  long lVar3;
  ushort uVar4;
  Job *pJVar5;
  
  if (dataIndex == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pJVar5 = (career->fJobs).pData;
    if (pJVar5 == (Job *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ushort)pJVar5[-1].fDescription.ptr;
    }
                    /* end of inlined section */
    *data = uVar4;
    goto LAB_00269f7c;
  }
  ppsVar2 = (short **)0x0;
  if (jobLevel < 0) goto LAB_00269f80;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pJVar5 = (career->fJobs).pData;
  if (pJVar5 != (Job *)0x0) {
    ppsVar2 = pJVar5[-1].fDescription.ptr;
  }
                    /* end of inlined section */
  if (jobLevel < (int)ppsVar2) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pJVar5 = pJVar5 + jobLevel;
                    /* end of inlined section */
    switch(dataIndex) {
    case 1:
      *data = *(ushort *)&pJVar5->fSalary;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      *data = *(ushort *)(pJVar5->fMinReqs + dataIndex + -2);
      break;
    case 0xc:
      *data = *(ushort *)&pJVar5->fStartHour;
      break;
    case 0xd:
      *data = *(ushort *)&pJVar5->fEndHour;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      *data = *(ushort *)(pJVar5->fMinReqs + dataIndex + -4);
      break;
    case 0x15:
      *data = *(ushort *)&pJVar5->fCarID;
      break;
    case 0x16:
      pCVar1 = (this->field0_0x0).__vtable;
      lVar3 = (*(code *)pCVar1[1].GetSuit)
                        ((int)&(this->field0_0x0).__vtable +
                         (int)*(short *)&pCVar1[1].GetCarpoolHour,pJVar5,0);
      *data = (ushort)(lVar3 != 0);
      break;
    default:
      goto switchD_00269ee8_caseD_16;
    }
LAB_00269f7c:
    ppsVar2 = (short **)&pGifTag1;
  }
  else {
switchD_00269ee8_caseD_16:
    ppsVar2 = (short **)0x0;
  }
LAB_00269f80:
  return SUB41(ppsVar2,0);
}

ELocString& CareersImpl::GetJobName(Job &job, bool female) {
	ELocString *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  if ((female) && (**(job->fFemaleName).ptr != 0)) {
    return &job->fFemaleName;
  }
  return &job->fName;
}

ELocString& CareersImpl::GetShortName(Job &job, bool female) {
	ELocString *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  if ((female) && (**(job->fShortFemaleName).ptr != 0)) {
    return &job->fShortFemaleName;
  }
  return &job->fShortName;
}

Int CareersImpl::GetCarpoolHour(Job &job) {
  return (job->fStartHour + 0x17) % 0x18;
}

char* CareersImpl::GetSuit(Job &job, bool female) {
  return job->fSuit;
}

Careers* Careers::Careers() {
  this->__vtable = (Careers__vtable *)_vt_7Careers;
  return this;
}

CareersImpl* CareersImpl::CareersImpl() {
	Careers *this;
	
  (this->field0_0x0).__vtable = (Careers__vtable *)_vt_11CareersImpl;
  return this;
}

void CareersImpl::~CareersImpl(int __in_chrg) {
  (this->field0_0x0).__vtable = (Careers__vtable *)_vt_11CareersImpl;
  TearDown__11CareersImpl(this);
  ___7Careers(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__11CareersImplPv(this);
  }
  return;
}

void* CareersImpl::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = calloc(size,1);
  return pvVar1;
}

void CareersImpl::operator delete(void *ptr) {
  free(ptr);
  return;
}

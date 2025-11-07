// STATUS: NOT STARTED

#include "HouseRecon.h"

struct ObjectSaveTypeTable3 {
	HouseRecon *m_pOwner;
	
	ObjectSaveTypeTable3& operator=();
	ObjectSaveTypeTable3();
	ObjectSaveTypeTable3();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct ObjectSaveIDTable {
	HouseRecon *m_pOwner;
	
	ObjectSaveIDTable& operator=();
	ObjectSaveIDTable();
	ObjectSaveIDTable();
	void DoStream(ReconBuffer *r, SInt32 version);
	HRSelector* findHRSel(Sint16 selID);
};

struct SimpleReconObject<ObjectSaveTypeTable3> : ReconObject {
private:
	ObjectSaveTypeTable3 *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ObjectSaveTypeTable3>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ObjectSaveTypeTable3>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

struct SimpleReconObject<ObjectSaveIDTable> : ReconObject {
private:
	ObjectSaveIDTable *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ObjectSaveIDTable>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ObjectSaveIDTable>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

__vtbl_ptr_type SimpleReconObject<ObjectSaveIDTable> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveIDTable>::~SimpleReconObject,
		/* .__delta2 = */ 28144
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveIDTable>::DoStream,
		/* .__delta2 = */ 28176
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveIDTable>::GetType,
		/* .__delta2 = */ 28208
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SimpleReconObject<ObjectSaveTypeTable3> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable3>::~SimpleReconObject,
		/* .__delta2 = */ 28112
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable3>::DoStream,
		/* .__delta2 = */ 28216
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable3>::GetType,
		/* .__delta2 = */ 28248
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void ObjectSaveTypeTable3::DoStream(ReconBuffer *r, SInt32 version) {
	HRSelector *pHRSel;
	int &iNumSelectors;
	ReconBuffer *this;
	ReconBuffer *this;
	
  HouseRecon *pHVar1;
  ObjectFolder__vtable *pOVar2;
  ObjectFolder *pOVar3;
  ObjSelector *pOVar4;
  int iVar5;
  int *piVar6;
  HRSelector *pHVar7;
  
  pOVar3 = _5Globs_pObjectFolder;
                    /* inlined from ../MSrc/Globs.h */
                    /* end of inlined section */
  pHVar1 = this->m_pOwner;
  piVar6 = &pHVar1->m_iNumSelectors;
  *piVar6 = 0;
  pHVar7 = pHVar1->m_selectors;
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
  if ((r->fMode == kReading) || (pHVar7->guid == 0)) {
LAB_001665e0:
    iVar5 = *piVar6;
  }
  else if (*(int *)&pHVar1->m_selectors[0].bDiscard == 0) {
    iVar5 = *piVar6;
  }
  else {
    iVar5 = *piVar6;
    while( true ) {
      *piVar6 = iVar5 + 1;
      if (pHVar7[iVar5 + 1].guid == 0) break;
      if (*(int *)&pHVar7[iVar5 + 1].bDiscard == 0) goto LAB_001665e0;
      iVar5 = *piVar6;
    }
    iVar5 = *piVar6;
  }
  Recon32__11ReconBufferPii(r,&pHVar7[iVar5].guid,1);
  iVar5 = pHVar7[*piVar6].guid;
  do {
    if (iVar5 == 0) {
      return;
    }
    if (0 < version) {
      Recon32__11ReconBufferPii(r,&pHVar7[*piVar6].initTreeVersion,1);
      Recon32__11ReconBufferPii(r,&pHVar7[*piVar6].mainTreeVersion,1);
    }
    Recon16__11ReconBufferPsi(r,&pHVar7[*piVar6].type,1);
    if (version < 2) {
      pHVar7[*piVar6].objectType = 0xffff;
      iVar5 = *piVar6;
    }
    else {
      Recon16__11ReconBufferPsi(r,&pHVar7[*piVar6].objectType,1);
      iVar5 = *piVar6;
    }
    ReconString__11ReconBufferR7BString(r,&pHVar7[iVar5].tempStr);
    pOVar2 = pOVar3->__vtable;
    pOVar4 = (ObjSelector *)
             (*(code *)pOVar2->DeletingInstance)
                       ((int)&pOVar3->__vtable + (int)*(short *)&pOVar2->CreatingInstance,
                        pHVar7[*piVar6].guid);
    pHVar7[*piVar6].pObjSel = pOVar4;
    *(undefined4 *)&pHVar7[*piVar6].bDiscard = 0;
    iVar5 = *piVar6;
    *piVar6 = iVar5 + 1;
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
    if (r->fMode == kReading) {
LAB_00166778:
      iVar5 = *piVar6;
    }
    else if (pHVar7[iVar5 + 1].guid == 0) {
      iVar5 = *piVar6;
    }
    else if (*(int *)&pHVar7[iVar5 + 1].bDiscard == 0) {
      iVar5 = *piVar6;
    }
    else {
      iVar5 = *piVar6;
      while( true ) {
        *piVar6 = iVar5 + 1;
        if (pHVar7[iVar5 + 1].guid == 0) break;
        if (*(int *)&pHVar7[iVar5 + 1].bDiscard == 0) goto LAB_00166778;
        iVar5 = *piVar6;
      }
      iVar5 = *piVar6;
    }
    Recon32__11ReconBufferPii(r,&pHVar7[iVar5].guid,1);
    iVar5 = pHVar7[*piVar6].guid;
  } while( true );
}

void ObjectSaveIDTable::DoStream(ReconBuffer *r, SInt32 version) {
	HRObject *pHRObj;
	int &iNumObjects;
	bool compress;
	SInt16 id;
	SInt16 selID;
	
  HouseRecon *pHVar1;
  HRSelector *pHVar2;
  int *piVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  ushort id;
  ushort selID;
  bool compress;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pHVar1 = this->m_pOwner;
  _compress = 1;
  piVar3 = &pHVar1->m_iNumObjects;
  ReconBool__11ReconBufferPb(r,(bool *)((uint)&id | 4));
  if (_compress != 0) {
    EnableCompression__11ReconBuffer(r);
  }
  Recon16__11ReconBufferPsi(r,&id,1);
  *piVar3 = 0;
  while (id != 0) {
    Recon16__11ReconBufferPsi(r,&selID,1);
    pHVar2 = findHRSel__C17ObjectSaveIDTables(this,selID);
    pHVar1->m_objects[*piVar3].pHRSel = pHVar2;
    pHVar1->m_objects[*piVar3].id = id;
    *piVar3 = *piVar3 + 1;
    Recon16__11ReconBufferPsi(r,&id,1);
  }
  return;
}

HRSelector* ObjectSaveIDTable::findHRSel(Sint16 selID) {
	HRSelector *result;
	int &iNumSelectors;
	HRSelector *pHRSel;
	int i;
	
  HouseRecon *pHVar1;
  int iVar2;
  int iVar3;
  HRSelector *pHVar4;
  int *piVar5;
  
  pHVar1 = this->m_pOwner;
  piVar5 = &pHVar1->m_iNumSelectors;
  iVar3 = 0;
  pHVar4 = (HRSelector *)0x0;
  if ((0 < *piVar5) &&
     (pHVar4 = pHVar1->m_selectors,
     (long)(short)pHVar1->m_selectors[0].type != (long)(int)(short)selID)) {
    iVar2 = *piVar5;
    while ((iVar3 = iVar3 + 1, pHVar4 = (HRSelector *)0x0, iVar3 < iVar2 &&
           (pHVar4 = pHVar1->m_selectors + iVar3,
           (long)(short)pHVar4->type != (long)(int)(short)selID))) {
      iVar2 = *piVar5;
    }
  }
  return pHVar4;
}

HouseRecon* HouseRecon::HouseRecon() {
  HRSelector *pHVar1;
  int iVar2;
  
  iVar2 = 0x7ff;
  pHVar1 = this->m_selectors;
  this->m_iNumObjects = 0;
  do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/HouseRecon.h */
    iVar2 = iVar2 + -1;
    __7BString(&pHVar1->tempStr);
                    /* end of inlined section */
    pHVar1 = pHVar1 + 1;
  } while (iVar2 != -1);
  this->m_iNumSelectors = 0;
  return this;
}

void HouseRecon::~HouseRecon(int __in_chrg) {
	HRSelector *this;
	void *pAddress;
	void *pAddress;
	
  bool bVar1;
  HRSelector *pHVar2;
  
  if ((this != (HouseRecon *)0xffff7ffc) &&
     (this->m_selectors != (HRSelector *)&this->m_iNumSelectors)) {
    pHVar2 = this->m_selectors + 0x7ff;
    do {
      ___7BString(&pHVar2->tempStr,2);
      bVar1 = this->m_selectors != pHVar2;
      pHVar2 = pHVar2 + -1;
    } while (bVar1);
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

int HouseRecon::findHRSelector(SInt32 guid) {
	int iNumSelectors;
	int i;
	
  int iVar1;
  HRSelector *pHVar2;
  
  iVar1 = 0;
  if (0 < this->m_iNumSelectors) {
    pHVar2 = this->m_selectors;
    do {
      if (pHVar2->guid == guid) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pHVar2 = pHVar2 + 1;
    } while (iVar1 < this->m_iNumSelectors);
  }
  return -1;
}

void HouseRecon::LoadHouseData(iResFile *pFile) {
	ObjectSaveTypeTable3 saveTable;
	ObjectSaveIDTable saveIDTable;
	HandleNode *handle;
	HouseRecon *pOwner;
	ObjectSaveIDTable *this;
	HouseRecon *pOwner;
	HandleNode *mem;
	SInt32 *pGuid;
	int iSize;
	int i;
	HandleNode *mem;
	HandleNode *mem;
	int iIndex;
	HandleNode *mem;
	HandleNode *h;
	
  uint *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  ObjectSaveTypeTable3 saveTable;
  ObjectSaveIDTable saveIDTable;
  
  saveTable.m_pOwner = this;
  saveIDTable.m_pOwner = this;
  ReconLoadObject__H1Z20ObjectSaveTypeTable3_PX01P8iResFileisPi_i
            (&saveTable,pFile,0x6f626a74,0,(int *)0x0);
  ReconLoadObject__H1Z17ObjectSaveIDTable_PX01P8iResFileisPi_i
            (&saveIDTable,pFile,0x4f626a4d,1,(int *)0x0);
  lVar3 = (*(code *)pFile->__vtable->Write)
                    ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable->AddWithLanguage,
                     0x44554d50,1,0);
                    /* inlined from ../MSrc/MHandle.h */
  uVar4 = 0;
  puVar1 = (uint *)lVar3;
  if (lVar3 != 0) {
    uVar4 = *puVar1;
  }
                    /* end of inlined section */
  if (uVar4 != 0) {
                    /* inlined from ../MSrc/MHandle.h */
    piVar5 = (int *)puVar1[1];
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = *puVar1;
    }
                    /* end of inlined section */
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      iVar2 = findHRSelector__10HouseReconi(this,*piVar5);
      if (-1 < iVar2) {
        *(undefined4 *)&this->m_selectors[iVar2].bDiscard = 1;
      }
      piVar5 = piVar5 + 1;
    }
  }
  return;
}

void HouseRecon::SaveHouseData(iResFile *pFile, SInt32 version) {
	int iNumSelectors;
	int i;
	int iNumDiscards;
	HandleNode *handle;
	ResourceName dummy;
	SInt32 *pGuid;
	HandleNode *ptr;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *h;
	
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  HRSelector *pHVar5;
  int iVar6;
  int iVar7;
  bool *pbVar8;
  uint size;
  StackString_64_ dummy;
  
  iVar4 = 0;
  iVar7 = this->m_iNumSelectors;
  if (0 < iVar7) {
    pbVar8 = &this->m_selectors[0].bDiscard;
    iVar6 = iVar7;
    do {
      iVar1 = *(int *)pbVar8;
      pbVar8 = pbVar8 + 0x1c;
      iVar6 = iVar6 + -1;
      if (iVar1 != 0) {
        iVar4 = iVar4 + 1;
      }
    } while (iVar6 != 0);
  }
  puVar2 = (uint *)0x0;
  if (iVar4 != 0) {
                    /* inlined from ../MSrc/MHandle.h */
    size = iVar4 << 2;
    puVar2 = (uint *)malloc(0xc);
    *puVar2 = size;
    if (size == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)malloc(size);
    }
    puVar2[2] = 1;
                    /* end of inlined section */
    puVar2[1] = (uint)piVar3;
    if (0 < iVar7) {
      pHVar5 = this->m_selectors;
      do {
        iVar7 = iVar7 + -1;
        if (*(int *)&pHVar5->bDiscard != 0) {
          *piVar3 = pHVar5->guid;
          piVar3 = piVar3 + 1;
        }
        pHVar5 = pHVar5 + 1;
      } while (iVar7 != 0);
    }
  }
                    /* inlined from ../MSrc/StringBuffer.h */
  __12StringBufferPcUi(&dummy.field0_0x0,dummy.fChars,0x40);
                    /* end of inlined section */
  (*(code *)pFile->__vtable[1].FindUniqueID)
            ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable[1].FindUniqueName,puVar2,
             0x44554d50,1,&dummy,1);
  return;
}

ErrType int ReconLoadObject<ObjectSaveTypeTable3>(ObjectSaveTypeTable3 *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<ObjectSaveTypeTable3> recon;
	ReconBuilder rb;
	ObjectSaveTypeTable3 *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectSaveTypeTable3_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable =
       (ReconObject__vtable *)_vt_t17SimpleReconObject1Z20ObjectSaveTypeTable3;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    (&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconLoadObject<ObjectSaveIDTable>(ObjectSaveIDTable *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<ObjectSaveIDTable> recon;
	ReconBuilder rb;
	ObjectSaveIDTable *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectSaveIDTable_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z17ObjectSaveIDTable;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    (&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

void SimpleReconObject<ObjectSaveTypeTable3>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ObjectSaveIDTable>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ObjectSaveIDTable>::DoStream(ReconBuffer *r, SInt32 version) {
  DoStream__17ObjectSaveIDTableP11ReconBufferi(this->fObj,r,version);
  return;
}

SInt32 SimpleReconObject<ObjectSaveIDTable>::GetType() {
  return this->fType;
}

void SimpleReconObject<ObjectSaveTypeTable3>::DoStream(ReconBuffer *r, SInt32 version) {
  DoStream__20ObjectSaveTypeTable3P11ReconBufferi(this->fObj,r,version);
  return;
}

SInt32 SimpleReconObject<ObjectSaveTypeTable3>::GetType() {
  return this->fType;
}

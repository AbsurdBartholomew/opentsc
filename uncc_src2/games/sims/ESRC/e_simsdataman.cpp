// STATUS: NOT STARTED

#include "e_simsdataman.h"

struct EDummyFile : EFile {
	u32 m_uOffset;
	
	EDummyFile& operator=();
	EDummyFile();
	EDummyFile();
	/* vtable[1] */ virtual EDummyFile(EDummyFile*, int, void);
	/* vtable[2] */ virtual unsigned int Read(void *pBuffer, unsigned int nSize);
	/* vtable[3] */ virtual unsigned int Write(void *pBuffer, unsigned int nSize);
	/* vtable[4] */ virtual unsigned int Seek(int nOffset, SeekType eMode);
	/* vtable[5] */ virtual unsigned int Tell();
	/* vtable[6] */ virtual bool Flush();
	/* vtable[7] */ virtual ErrorCode GetLastError();
	/* vtable[8] */ virtual IOMode GetIOMode();
	/* vtable[9] */ virtual AccessMode GetAccessMode();
	/* vtable[10] */ virtual DeviceType GetDeviceType();
	/* vtable[11] */ virtual char* GetDrive();
	/* vtable[12] */ virtual char* GetPath();
	/* vtable[13] */ virtual char* GetName();
	/* vtable[14] */ virtual char* GetExt();
	/* vtable[15] */ virtual void* GetSystemHandle();
	/* vtable[16] */ virtual void Destroy();
};

// warning: multiple differing types with the same name (type name not equal)
struct vector<unsigned int,__malloc_alloc_template<0> > {
protected:
	u32 *start;
	u32 *finish;
	u32 *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	u32* begin();
	u32* begin();
	u32* end();
	u32* end();
	reverse_iterator<unsigned int *,unsigned int,unsigned int &,int> rbegin();
	reverse_iterator<const unsigned int *,unsigned int,const unsigned int &,int> rbegin();
	reverse_iterator<unsigned int *,unsigned int,unsigned int &,int> rend();
	reverse_iterator<const unsigned int *,unsigned int,const unsigned int &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	u32& operator[]();
	u32& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<unsigned int,__malloc_alloc_template<0> >*, int, void);
	vector<unsigned int,__malloc_alloc_template<0> >& operator=();
	void reserve();
	u32& front();
	u32& front();
	u32& back();
	u32& back();
	void push_back();
	void swap();
	u32* insert();
	u32* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct ObjectSaveTypeTable2 {
	vector<unsigned int,__malloc_alloc_template<0> > datasetList;
	
	ObjectSaveTypeTable2& operator=();
	ObjectSaveTypeTable2();
	ObjectSaveTypeTable2(ObjectSaveTypeTable2*, int, void);
	ObjectSaveTypeTable2();
	void DoStream(ReconBuffer *r, SInt32 version);
};

// warning: multiple differing types with the same name (type name not equal)
struct simple_alloc<unsigned int,__malloc_alloc_template<0> > {
	simple_alloc<unsigned int,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static u32* allocate(/* parameters unknown */);
	static u32* allocate(/* parameters unknown */);
	static u32* allocate(/* parameters unknown */);
	static u32* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct SimpleReconObject<ObjectSaveTypeTable2> : ReconObject {
private:
	ObjectSaveTypeTable2 *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ObjectSaveTypeTable2>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ObjectSaveTypeTable2>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

ESimsDataManager _simsdataman = {
	/* base class 0 = */ {
		/* .m_dataMutex = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_sema = */ {
				/* base class 0 = */ {
					/* .$vf1686 = */ NULL
				},
				/* .m_id = */ 0,
				/* .m_maxCount = */ 0,
				/* .m_waits = */ 0,
				/* .m_count = */ 0
			}
		},
		/* .m_resourceMap = */ {
			/* base class 0 = */ {
				/* .m_list = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				},
				/* .m_pRoot = */ NULL
			}
		},
		/* .m_dataType = */ {
			/* .m_p = */ NULL
		},
		/* .m_path = */ {
			/* .m_p = */ NULL
		},
		/* .m_initialized = */ false,
		/* .m_pIndex = */ NULL,
		/* .m_pArchiveFile = */ NULL,
		/* .m_bSeqAccess = */ false,
		/* .m_pLast = */ NULL,
		/* .m_pNext = */ NULL,
		/* .$vf1914 = */ NULL
	},
	/* .m_mode = */ kPreloadModeNone,
	/* .m_uTotalCompleted = */ 0,
	/* .m_uTotalListSize = */ 0,
	/* .m_iWorkQueued = */ 0,
	/* .m_pCurrentSelector = */ NULL,
	/* .m_pSaveTable = */ NULL
};

EResourceManager *ESimsDataManager::_pCurrentManager = NULL;

__vtbl_ptr_type SimpleReconObject<ObjectSaveTypeTable2> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable2>::~SimpleReconObject,
		/* .__delta2 = */ 27720
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable2>::DoStream,
		/* .__delta2 = */ 27752
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectSaveTypeTable2>::GetType,
		/* .__delta2 = */ 27784
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ESimsDataManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsDataManager::~ESimsDataManager,
		/* .__delta2 = */ 22256
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceManager::Init,
		/* .__delta2 = */ 13824
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceManager::Shutdown,
		/* .__delta2 = */ 13704
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsDataManager::AllocateAndLoadResource,
		/* .__delta2 = */ 22384
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResourceManager::AllocateAndLoadResource,
		/* .__delta2 = */ 17888
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static EDummyFile _dummyFile;

__vtbl_ptr_type EDummyFile virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::~EDummyFile,
		/* .__delta2 = */ 27840
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::Read,
		/* .__delta2 = */ 27888
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::Write,
		/* .__delta2 = */ 27896
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::Seek,
		/* .__delta2 = */ 27904
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::Tell,
		/* .__delta2 = */ 27920
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::Flush,
		/* .__delta2 = */ 27928
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetLastError,
		/* .__delta2 = */ 27936
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetIOMode,
		/* .__delta2 = */ 27944
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetAccessMode,
		/* .__delta2 = */ 27952
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetDeviceType,
		/* .__delta2 = */ 27960
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetDrive,
		/* .__delta2 = */ 27968
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetPath,
		/* .__delta2 = */ 27976
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetName,
		/* .__delta2 = */ 27984
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetExt,
		/* .__delta2 = */ 27992
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::GetSystemHandle,
		/* .__delta2 = */ 28000
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDummyFile::Destroy,
		/* .__delta2 = */ 28008
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EFile virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFile::~EFile,
		/* .__delta2 = */ 27792
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

bool isResInList(vector<unsigned int,__malloc_alloc_template<0> > &resList, u32 id) {
	bool result;
	int i;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
                    /* inlined from ../MSrc/vector.h */
  iVar3 = (int)resList->finish - (int)resList->start >> 2;
                    /* end of inlined section */
  bVar4 = false;
  if (0 < iVar3) {
    if (*resList->start == id) {
      bVar4 = true;
    }
    else {
      iVar2 = 1;
      do {
        if (iVar3 <= iVar2) {
          return false;
        }
                    /* inlined from ../MSrc/vector.h */
        puVar1 = resList->start + iVar2;
                    /* end of inlined section */
        iVar2 = iVar2 + 1;
      } while (*puVar1 != id);
      bVar4 = true;
    }
  }
  return bVar4;
}

void collectResInfoForSel(ObjSelector *pSel, vector<unsigned int,__malloc_alloc_template<0> > &resList) {
	ResData *pResData;
	ObjSelector *this;
	ObjSelector *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	u32 &x;
	unsigned int &value;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	u32 &x;
	unsigned int &value;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	
  ResFile *pRVar1;
  ResData *pRVar2;
  uint *puVar3;
  bool bVar4;
  
                    /* inlined from ../MSrc/ObjSelector.h */
  pRVar1 = pSel->fResData;
                    /* end of inlined section */
  pRVar2 = pSel->fHeader->pResData;
  if ((pRVar1->datasetID != 0) &&
     (bVar4 = isResInList__FRt6vector2ZUiZt23__malloc_alloc_template1i0Ui(resList,pRVar1->datasetID)
     , !bVar4)) {
                    /* inlined from ../MSrc/vector.h */
    puVar3 = resList->finish;
    if (puVar3 == resList->end_of_storage) {
      insert_aux__t6vector2ZUiZt23__malloc_alloc_template1i0PUiRCUi
                (resList,puVar3,&pRVar1->datasetID);
    }
    else {
      *puVar3 = pRVar1->datasetID;
      resList->finish = resList->finish + 1;
    }
  }
                    /* end of inlined section */
  if (((pRVar2 != (ResData *)0x0) && (pRVar2->datasetID != 0)) &&
     (bVar4 = isResInList__FRt6vector2ZUiZt23__malloc_alloc_template1i0Ui(resList,pRVar2->datasetID)
     , !bVar4)) {
                    /* inlined from ../MSrc/vector.h */
    puVar3 = resList->finish;
    if (puVar3 == resList->end_of_storage) {
      insert_aux__t6vector2ZUiZt23__malloc_alloc_template1i0PUiRCUi
                (resList,puVar3,&pRVar2->datasetID);
                    /* end of inlined section */
    }
    else {
      *puVar3 = pRVar2->datasetID;
      resList->finish = resList->finish + 1;
    }
  }
  return;
}

void collectResInfoForMultSel(ObjSelector *pSel, vector<unsigned int,__malloc_alloc_template<0> > &resList, vector<ObjSelector *,__malloc_alloc_template<0> > *pSelList) {
	ObjSelector *this;
	SInt16 masterID;
	ObjSelector *p;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	ObjSelector *&x;
	ObjSelector *&value;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	
  ushort uVar1;
  ObjSelector **ppOVar2;
  ObjectFolder *pOVar3;
  bool bVar4;
  long lVar5;
  ObjectFolder__vtable *pOVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  ObjSelector *this;
  ObjSelector *local_5c [3];
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
  
  pOVar3 = _5Globs_pObjectFolder;
                    /* inlined from ../MSrc/ObjSelector.h */
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  local_5c[0] = pSel;
  if (pSel->fHeader->pResData == (ResData *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    uVar1 = pSel->fHeader->masterID;
    lVar5 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                      ((int)&_5Globs_pObjectFolder->__vtable +
                       (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,0);
    this = (ObjSelector *)lVar5;
    while (lVar5 != 0) {
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
      if (this->fHeader->masterID == uVar1) {
                    /* end of inlined section */
        if (this->fHeader->pResData == (ResData *)0x0) {
          pOVar6 = pOVar3->__vtable;
        }
        else {
          bVar4 = TestFromSameFile__C11ObjSelectorPC11ObjSelector(this,local_5c[0]);
          if (bVar4) {
            collectResInfoForSel__FP11ObjSelectorRt6vector2ZUiZt23__malloc_alloc_template1i0
                      (this,resList);
            if (pSelList == (vector_ObjSelector_____malloc_alloc_template_0___ *)0x0) {
              pOVar6 = pOVar3->__vtable;
            }
            else {
                    /* inlined from ../MSrc/vector.h */
              ppOVar2 = pSelList->finish;
              if (ppOVar2 == pSelList->end_of_storage) {
                insert_aux__t6vector2ZP11ObjSelectorZt23__malloc_alloc_template1i0PP11ObjSelectorRCP11ObjSelector
                          (pSelList,ppOVar2,&this);
              }
              else {
                *ppOVar2 = this;
                pSelList->finish = pSelList->finish + 1;
              }
                    /* end of inlined section */
              pOVar6 = pOVar3->__vtable;
            }
          }
          else {
            pOVar6 = pOVar3->__vtable;
          }
        }
      }
      else {
        pOVar6 = pOVar3->__vtable;
      }
      lVar5 = (*(code *)pOVar6->ResumeObjectFiles)
                        ((int)&pOVar3->__vtable + (int)*(short *)&pOVar6->SuspendObjectFiles,this);
      this = (ObjSelector *)lVar5;
    }
  }
  else {
    collectResInfoForSel__FP11ObjSelectorRt6vector2ZUiZt23__malloc_alloc_template1i0(pSel,resList);
    if (pSelList != (vector_ObjSelector_____malloc_alloc_template_0___ *)0x0) {
                    /* inlined from ../MSrc/vector.h */
      ppOVar2 = pSelList->finish;
      if (ppOVar2 == pSelList->end_of_storage) {
        insert_aux__t6vector2ZP11ObjSelectorZt23__malloc_alloc_template1i0PP11ObjSelectorRCP11ObjSelector
                  (pSelList,ppOVar2,local_5c);
      }
      else {
        *ppOVar2 = local_5c[0];
        pSelList->finish = pSelList->finish + 1;
      }
    }
  }
  return;
}

bool ESimsDataManager::compareID(u32 &id1, u32 &id2) {
	u32 offs1;
	u32 offs2;
	u32 length1;
	u32 length2;
	u32 id;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint offs1;
  uint length1;
  uint offs2;
  uint length2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  offs1 = 0;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
                    /* end of inlined section */
  offs2 = 0;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
  LookupId__16EResourceManagerUiRUiT2
            (&_datasetman.field0_0x0,*id1,&offs1,(uint *)((uint)&offs1 | 4));
  LookupId__16EResourceManagerUiRUiT2
            (&_datasetman.field0_0x0,*id2,(uint *)((uint)&offs1 | 8),(uint *)((uint)&offs1 | 0xc));
                    /* end of inlined section */
  return offs1 < offs2;
}

void addRefList(vector<unsigned int,__malloc_alloc_template<0> > &resList, u32 *pTotalCompleted) {
	int i;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	
  uint *first;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int n;
  
                    /* inlined from ../MSrc/vector.h */
  puVar2 = resList->finish;
  first = resList->start;
  n = (int)puVar2 - (int)first >> 2;
                    /* end of inlined section */
  if (n != 0) {
    iVar3 = 0;
                    /* inlined from ../MSrc/vector.h */
                    /* inlined from ../MSrc/algo.h */
    iVar1 = __lg__H1Zi_X01_X01(n);
    __introsort_loop__H4ZPUiZUiZiZPFRCUiRCUi_b_X01X01PX11X21X31_v
              (first,puVar2,0,(undefined1 *)(iVar1 << 1));
    __final_insertion_sort__H2ZPUiZPFRCUiRCUi_b_X01X01X11_v
              (first,puVar2,compareID__16ESimsDataManagerRCUiT1);
                    /* end of inlined section */
    if (0 < n) {
                    /* inlined from ../MSrc/vector.h */
      puVar2 = resList->start;
      while( true ) {
        AddRef__16EResourceManagerUiP5EFilei(&_datasetman.field0_0x0,puVar2[iVar3],(EFile *)0x0,0);
                    /* end of inlined section */
        iVar3 = iVar3 + 1;
        if (pTotalCompleted != (uint *)0x0) {
          *pTotalCompleted = *pTotalCompleted + 1;
        }
        if (n <= iVar3) break;
        puVar2 = resList->start;
      }
    }
  }
  return;
}

void delRefList(vector<unsigned int,__malloc_alloc_template<0> > &resList) {
	int i;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	
  uint *puVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from ../MSrc/vector.h */
  iVar3 = (int)resList->finish - (int)resList->start >> 2;
                    /* end of inlined section */
  if (0 < iVar3) {
                    /* inlined from ../MSrc/vector.h */
    puVar1 = resList->start;
    iVar2 = 0;
    while( true ) {
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,puVar1[iVar2]);
      if (iVar3 <= iVar2 + 1) break;
      puVar1 = resList->start;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

void ObjectSaveTypeTable2::DoStream(ReconBuffer *r, SInt32 version) {
	BString tempStr;
	SInt16 type;
	SInt16 objectType;
	SInt32 guid;
	SInt32 initTreeVersion;
	SInt32 mainTreeVersion;
	ObjSelector *sel;
	
  ObjectFolder__vtable *pOVar1;
  ObjectFolder *pOVar2;
  long lVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  BString tempStr;
  ushort type;
  ushort objectType;
  int guid;
  int initTreeVersion;
  int mainTreeVersion;
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
  
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  __7BString(&tempStr);
  pOVar2 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  initTreeVersion = 0;
  mainTreeVersion = 0;
  Recon32__11ReconBufferPii(r,&guid,1);
  while (guid != 0) {
    if (0 < version) {
      Recon32__11ReconBufferPii(r,&initTreeVersion,1);
      Recon32__11ReconBufferPii(r,&mainTreeVersion,1);
    }
    Recon16__11ReconBufferPsi(r,&type,1);
    if (version < 2) {
      objectType = 0xffff;
    }
    else {
      Recon16__11ReconBufferPsi(r,&objectType,1);
    }
    ReconString__11ReconBufferR7BString(r,&tempStr);
    pOVar1 = pOVar2->__vtable;
    lVar3 = (*(code *)pOVar1->DeletingInstance)
                      ((int)&pOVar2->__vtable + (int)*(short *)&pOVar1->CreatingInstance,guid);
    if (lVar3 != 0) {
      collectResInfoForMultSel__FP11ObjSelectorRt6vector2ZUiZt23__malloc_alloc_template1i0Pt6vector2ZP11ObjSelectorZt23__malloc_alloc_template1i0
                ((ObjSelector *)lVar3,&this->datasetList,
                 (vector_ObjSelector_____malloc_alloc_template_0___ *)0x0);
    }
    Recon32__11ReconBufferPii(r,&guid,1);
  }
  ___7BString(&tempStr,2);
  return;
}

ESimsDataManager* ESimsDataManager::ESimsDataManager() {
  __16EResourceManager(&this->field0_0x0);
  *(undefined4 *)&(this->field0_0x0).m_initialized = 1;
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_16ESimsDataManager;
  this->m_mode = kPreloadModeNone;
  this->m_uTotalCompleted = 0;
  this->m_uTotalListSize = 0;
  this->m_iWorkQueued = 0;
  this->m_pCurrentSelector = (ObjSelector *)0x0;
  this->m_pSaveTable = (ObjectSaveTypeTable2 *)0x0;
  return this;
}

void ESimsDataManager::~ESimsDataManager(int __in_chrg) {
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_16ESimsDataManager;
  *(undefined4 *)&(this->field0_0x0).m_initialized = 0;
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

float ESimsDataManager::GetLoadProgress() {
  if (this->m_mode != kPreloadModeSavegame) {
    return -1.0;
  }
  if (this->m_uTotalListSize != 0) {
    return (float)this->m_uTotalCompleted / (float)this->m_uTotalListSize;
  }
  return 0.0;
}

EResource* ESimsDataManager::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	ESim *pSim;
	EAutoMutex fmtx;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  ESim *this_00;
  long lVar2;
  EAutoMutex fmtx;
  
  if (this->m_mode == kPreloadModeSavegame) {
    preloadResources__16ESimsDataManagerR6EEvent(this,(EEvent *)uLength);
    this->m_mode = kPreloadModeNone;
  }
  else if (this->m_mode == KPreloadModeSelector) {
    lVar2 = (*(code *)pFile->__vtable->GetDrive)
                      ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
    if (lVar2 == 0) {
      this->m_pCurrentSelector = (ObjSelector *)uLength;
      if (this->m_pCurrentSelector->fDesiredPreloadState == kDataLoaded) {
        preload__16ESimsDataManagerP11ObjSelector(this,this->m_pCurrentSelector);
      }
      this->m_pCurrentSelector = (ObjSelector *)0x0;
    }
    else {
      this_00 = (ESim *)(*(code *)pFile->__vtable->GetDrive)
                                  ((int)&pFile->__vtable +
                                   (int)*(short *)&pFile->__vtable->GetDeviceType);
      tProcessCommand__4ESimUi(this_00,uLength);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
      (**(code **)(pEVar1 + 1))
                ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
                 (int)*(short *)&pEVar1->Release,0xffffffffffffffff);
                    /* end of inlined section */
      this_00->m_iQueueCount = this_00->m_iQueueCount + -1;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
                 (int)*(short *)&pEVar1[1].ESyncObject);
    }
                    /* end of inlined section */
    decWorkQueued__16ESimsDataManager(this);
  }
  return (EResource *)0x0;
}

void ESimsDataManager::LoadGamePrep(bool bWait) {
	EEvent event;
	
  ObjectFolder__vtable *pOVar1;
  EResourceLoader__vtable *pEVar2;
  EResourceLoader *pEVar3;
  ObjectFolder *pOVar4;
  ObjectSaveTypeTable2 *pOVar5;
  EEvent event;
  
                    /* inlined from /eor/src2/common/sync/e_event.h */
  __10ESemaphore((ESemaphore *)&event);
  Create__10ESemaphoreii((ESemaphore *)&event,1,0);
                    /* end of inlined section */
  pOVar5 = (ObjectSaveTypeTable2 *)__builtin_new(0xc);
  pOVar4 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_pSaveTable = pOVar5;
                    /* inlined from ../MSrc/vector.h */
  (pOVar5->datasetList).start = (uint *)0x0;
  (pOVar5->datasetList).finish = (uint *)0x0;
  (pOVar5->datasetList).end_of_storage = (uint *)0x0;
                    /* end of inlined section */
  pOVar1 = pOVar4->__vtable;
  (*(code *)pOVar1->GetObjectsDatabase)
            ((int)&pOVar4->__vtable + (int)*(short *)&pOVar1->GetBehaviorFinder,_5Globs_pNghResFile)
  ;
  pEVar3 = _pResLoader;
  this->m_uTotalListSize = 0;
  this->m_mode = kPreloadModeSavegame;
  this->m_uTotalCompleted = 0;
  pEVar2 = pEVar3->__vtable;
  (*(code *)pEVar2[1].TerminateThread)
            ((int)&pEVar3->__vtable + (int)*(short *)&pEVar2[1].Shutdown,this,1,0x3d0780,0,&event,
             bWait);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  Acquire__10ESemaphoreUi((ESemaphore *)&event,0xffffffff);
  Destroy__10ESemaphore((ESemaphore *)&event);
  ___10ESemaphore((ESemaphore *)&event,2);
  return;
}

void ESimsDataManager::preloadResources(EEvent &event) {
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	EEvent *this;
	
  ReconLoadObject__H1Z20ObjectSaveTypeTable2_PX01P8iResFileisPi_i
            (this->m_pSaveTable,(iResFile__6_5027 *)_5Globs_pNghResFile,0x6f626a74,0,(int *)0x0);
                    /* inlined from ../MSrc/vector.h */
  this->m_uTotalListSize =
       (int)(this->m_pSaveTable->datasetList).finish - (int)(this->m_pSaveTable->datasetList).start
       >> 2;
  Release__10ESemaphore(&event->m_sema);
                    /* end of inlined section */
  addRefList__FRt6vector2ZUiZt23__malloc_alloc_template1i0PUi
            ((vector_unsigned_int___malloc_alloc_template_0_____26_4545 *)this->m_pSaveTable,
             &this->m_uTotalCompleted);
  return;
}

void ESimsDataManager::PostLoadGame() {
	u32 *first;
	u32 *last;
	u32 *pointer;
	
  ObjectSaveTypeTable2 *pAddress;
  uint *pAddress_00;
  uint *puVar1;
  
  if ((vector_unsigned_int___malloc_alloc_template_0_____26_4545 *)this->m_pSaveTable !=
      (vector_unsigned_int___malloc_alloc_template_0_____26_4545 *)0x0) {
    delRefList__FRt6vector2ZUiZt23__malloc_alloc_template1i0
              ((vector_unsigned_int___malloc_alloc_template_0_____26_4545 *)this->m_pSaveTable);
    pAddress = this->m_pSaveTable;
    if (pAddress == (ObjectSaveTypeTable2 *)0x0) {
      this->m_pSaveTable = (ObjectSaveTypeTable2 *)0x0;
    }
    else {
                    /* inlined from ../MSrc/vector.h */
      pAddress_00 = (pAddress->datasetList).start;
      for (puVar1 = pAddress_00; puVar1 != (pAddress->datasetList).finish; puVar1 = puVar1 + 1) {
      }
      if ((pAddress_00 != (uint *)0x0) &&
         ((int)(pAddress->datasetList).end_of_storage - (int)pAddress_00 >> 2 != 0)) {
        free(pAddress_00);
      }
      _memmanFree__FPv(pAddress);
                    /* end of inlined section */
      this->m_pSaveTable = (ObjectSaveTypeTable2 *)0x0;
    }
  }
  return;
}

void ESimsDataManager::incWorkQueued() {
	EAutoMutex fmtx;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EAutoMutex fmtx;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)&pEVar1->Release,0xffffffffffffffff);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  this->m_iWorkQueued = this->m_iWorkQueued + 1;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void ESimsDataManager::decWorkQueued() {
	EAutoMutex fmtx;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  EAutoMutex fmtx;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)&pEVar1->Release,0xffffffffffffffff);
                    /* end of inlined section */
  iVar2 = this->m_iWorkQueued + -1;
  this->m_iWorkQueued = iVar2;
  if (iVar2 == 0) {
    this->m_mode = kPreloadModeNone;
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void ESimsDataManager::LoadSelectorData(ObjSelector *sel, bool bWait) {
  EResourceLoader__vtable *pEVar1;
  EResourceLoader *pEVar2;
  
  sel->fDesiredPreloadState = kDataLoaded;
  if ((this->m_mode != kPreloadModeNone) || (sel->fActualPreloadState != kDataLoaded)) {
    incWorkQueued__16ESimsDataManager(this);
    pEVar2 = _pResLoader;
    this->m_mode = KPreloadModeSelector;
    pEVar1 = pEVar2->__vtable;
    (*(code *)pEVar1[1].TerminateThread)
              ((int)&pEVar2->__vtable + (int)*(short *)&pEVar1[1].Shutdown,this,1,0x3d0780,0,sel,
               bWait);
  }
  return;
}

void ESimsDataManager::UnloadSelectorData(ObjSelector *sel, bool bWait) {
  sel->fDesiredPreloadState = kNotLoaded;
  if ((this->m_mode != kPreloadModeNone) || (sel->fActualPreloadState != kNotLoaded)) {
    if (this->m_pCurrentSelector == sel) {
      (*(code *)_pResLoader->__vtable->CloseAllArchiveFiles)
                ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->OpenFiles,
                 _pResLoader,bWait);
    }
    undoPreload__16ESimsDataManagerP11ObjSelector(this,sel);
  }
  return;
}

void ESimsDataManager::undoPreload(ObjSelector *sel) {
	vector<unsigned int,__malloc_alloc_template<0> > resList;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	u32 *last;
	u32 *first;
	u32 *pointer;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  uint *puVar1;
  vector_unsigned_int___malloc_alloc_template_0_____26_4545 resList;
  
  if (sel->fActualPreloadState != kNotLoaded) {
                    /* inlined from ../MSrc/vector.h */
    resList.start = (uint *)0x0;
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
    resList.finish = (uint *)0x0;
    resList.end_of_storage = (uint *)0x0;
                    /* end of inlined section */
    collectResInfoForMultSel__FP11ObjSelectorRt6vector2ZUiZt23__malloc_alloc_template1i0Pt6vector2ZP11ObjSelectorZt23__malloc_alloc_template1i0
              (sel,&resList,(vector_ObjSelector_____malloc_alloc_template_0___ *)0x0);
    delRefList__FRt6vector2ZUiZt23__malloc_alloc_template1i0(&resList);
    sel->fActualPreloadState = kNotLoaded;
                    /* inlined from ../MSrc/algobase.h */
    for (puVar1 = resList.start; puVar1 != resList.finish; puVar1 = puVar1 + 1) {
    }
    if ((resList.start != (uint *)0x0) &&
       ((int)resList.end_of_storage - (int)resList.start >> 2 != 0)) {
      free(resList.start);
    }
  }
  return;
}

void ESimsDataManager::preload(ObjSelector *sel) {
	vector<unsigned int,__malloc_alloc_template<0> > resList;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	u32 *last;
	u32 *first;
	u32 *pointer;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  uint *puVar1;
  vector_unsigned_int___malloc_alloc_template_0_____26_4545 resList;
  
  if (sel->fActualPreloadState != kDataLoaded) {
                    /* inlined from ../MSrc/vector.h */
    resList.start = (uint *)0x0;
    resList.finish = (uint *)0x0;
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
    resList.end_of_storage = (uint *)0x0;
                    /* end of inlined section */
    collectResInfoForMultSel__FP11ObjSelectorRt6vector2ZUiZt23__malloc_alloc_template1i0Pt6vector2ZP11ObjSelectorZt23__malloc_alloc_template1i0
              (sel,&resList,(vector_ObjSelector_____malloc_alloc_template_0___ *)0x0);
    addRefList__FRt6vector2ZUiZt23__malloc_alloc_template1i0PUi(&resList,(uint *)0x0);
    sel->fActualPreloadState = kDataLoaded;
                    /* inlined from ../MSrc/algobase.h */
    for (puVar1 = resList.start; puVar1 != resList.finish; puVar1 = puVar1 + 1) {
    }
    if ((resList.start != (uint *)0x0) &&
       ((int)resList.end_of_storage - (int)resList.start >> 2 != 0)) {
      free(resList.start);
    }
  }
  return;
}

void ESimsDataManager::QueueCommand(ESim *pSim, u32 command) {
	EAutoMutex fmtx;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EAutoMutex fmtx;
  
  incWorkQueued__16ESimsDataManager(this);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  this->m_mode = KPreloadModeSelector;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)&pEVar1->Release,0xffffffffffffffff);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  pSim->m_iQueueCount = pSim->m_iQueueCount + 1;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->field0_0x0).m_dataMutex.field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  (*(code *)_pResLoader->__vtable[1].TerminateThread)
            ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable[1].Shutdown,this,1,
             0x3d0780,pSim,command,0);
  return;
}

void ESimsDataManager::Flush() {
  (*(code *)_pResLoader->__vtable->CloseAllArchiveFiles)
            ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->OpenFiles);
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

u32* unsigned int * copy_backward<unsigned int *, unsigned int *>(u32 *first, u32 *last, u32 *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

u32* unsigned int * uninitialized_copy<unsigned int *, unsigned int *>(u32 *first, u32 *last, u32 *result) {
	u32 *p;
	unsigned int &value;
	void *pAddress;
	
  uint uVar1;
  uint *puVar2;
  
  puVar2 = result;
  if (first != last) {
    do {
      uVar1 = *first;
      first = first + 1;
      result = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<unsigned int, __malloc_alloc_template<0> >::insert_aux(u32 *position, u32 &x) {
	u32 x_copy;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	u32 *p;
	unsigned int &value;
	void *pAddress;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	u32 *first;
	u32 *pointer;
	vector<unsigned int,__malloc_alloc_template<0> > *this;
	
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  puVar2 = this->finish;
  if (puVar2 == this->end_of_storage) {
    iVar5 = (int)puVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from ../MSrc/alloc.h */
    uVar1 = iVar3 << 2;
    if (iVar3 == 0) {
      puVar2 = (uint *)0x0;
      uVar1 = 0;
    }
    else {
      puVar2 = (uint *)malloc(uVar1);
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar1);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPUiZPUi_X01X01X11_X11(this->start,position,puVar2);
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *(uint *)((int)puVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPUiZPUi_X01X01X11_X11
              (position,this->finish,(uint *)((int)puVar2 + (int)position + (4 - (int)this->start)))
    ;
                    /* inlined from ../MSrc/algobase.h */
    puVar4 = this->start;
    if (puVar4 == this->finish) {
      puVar4 = this->start;
    }
    else {
      do {
        puVar4 = puVar4 + 1;
      } while (puVar4 != this->finish);
                    /* end of inlined section */
      puVar4 = this->start;
    }
                    /* inlined from ../MSrc/alloc.h */
    if ((puVar4 != (uint *)0x0) && ((int)this->end_of_storage - (int)puVar4 >> 2 != 0)) {
      free(puVar4);
                    /* end of inlined section */
    }
    puVar4 = puVar2 + iVar5;
    this->start = puVar2;
    this->end_of_storage = (uint *)((int)puVar2 + uVar1);
  }
  else {
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *puVar2 = puVar2[-1];
                    /* end of inlined section */
    uVar1 = *x;
    copy_backward__H2ZPUiZPUi_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = uVar1;
    puVar4 = this->finish;
  }
  this->finish = puVar4 + 1;
  return;
}

ObjSelector** ObjSelector ** copy_backward<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

ObjSelector** ObjSelector ** uninitialized_copy<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result) {
	ObjSelector **p;
	ObjSelector *&value;
	void *pAddress;
	
  ObjSelector *pOVar1;
  ObjSelector **ppOVar2;
  
  ppOVar2 = result;
  if (first != last) {
    do {
      pOVar1 = *first;
      first = first + 1;
      result = ppOVar2 + 1;
      *ppOVar2 = pOVar1;
      ppOVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<ObjSelector *, __malloc_alloc_template<0> >::insert_aux(ObjSelector **position, ObjSelector *&x) {
	ObjSelector *x_copy;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	ObjSelector **p;
	ObjSelector *&value;
	void *pAddress;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	ObjSelector **first;
	ObjSelector **pointer;
	vector<ObjSelector *,__malloc_alloc_template<0> > *this;
	
  ObjSelector *pOVar1;
  uint size;
  ObjSelector **ppOVar2;
  int iVar3;
  ObjSelector **ppOVar4;
  int iVar5;
  
  ppOVar2 = this->finish;
  if (ppOVar2 == this->end_of_storage) {
    iVar5 = (int)ppOVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from ../MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppOVar2 = (ObjSelector **)0x0;
      size = 0;
    }
    else {
      ppOVar2 = (ObjSelector **)malloc(size);
      if (ppOVar2 == (ObjSelector **)0x0) {
        ppOVar2 = (ObjSelector **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP11ObjSelectorZPP11ObjSelector_X01X01X11_X11
              (this->start,position,ppOVar2);
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *(ObjSelector **)((int)ppOVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP11ObjSelectorZPP11ObjSelector_X01X01X11_X11
              (position,this->finish,
               (ObjSelector **)((int)ppOVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from ../MSrc/algobase.h */
    ppOVar4 = this->start;
    if (ppOVar4 == this->finish) {
      ppOVar4 = this->start;
    }
    else {
      do {
        ppOVar4 = ppOVar4 + 1;
      } while (ppOVar4 != this->finish);
                    /* end of inlined section */
      ppOVar4 = this->start;
    }
                    /* inlined from ../MSrc/alloc.h */
    if ((ppOVar4 != (ObjSelector **)0x0) && ((int)this->end_of_storage - (int)ppOVar4 >> 2 != 0)) {
      free(ppOVar4);
                    /* end of inlined section */
    }
    ppOVar4 = ppOVar2 + iVar5;
    this->start = ppOVar2;
    this->end_of_storage = (ObjSelector **)((int)ppOVar2 + size);
  }
  else {
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *ppOVar2 = ppOVar2[-1];
                    /* end of inlined section */
    pOVar1 = *x;
    copy_backward__H2ZPP11ObjSelectorZPP11ObjSelector_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pOVar1;
    ppOVar4 = this->finish;
  }
  this->finish = ppOVar4 + 1;
  return;
}

int int __lg<int>(int n) {
	int k;
	
  int iVar1;
  
  iVar1 = 0;
  if (n != 1) {
    do {
      n = n / 2;
      iVar1 = iVar1 + 1;
    } while (n != 1);
  }
  return iVar1;
}

void void __push_heap<unsigned int *, int, unsigned int, bool (*)>(u32 *first, int holeIndex, int topIndex, unsigned int value, bool (*comp)(/* parameters unknown */)) {
	int parent;
	
  int iVar1;
  long lVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar3;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  uint local_80 [4];
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
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  iVar1 = holeIndex + -1;
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_80[0] = value;
  while( true ) {
    iVar3 = iVar1 / 2;
    if (holeIndex <= topIndex) break;
    lVar2 = (*(code *)comp)(first + iVar3,local_80);
    if (lVar2 == 0) break;
    iVar1 = iVar3 + -1;
    first[holeIndex] = first[iVar3];
    holeIndex = iVar3;
  }
  first[holeIndex] = local_80[0];
  return;
}

void void __adjust_heap<unsigned int *, int, unsigned int, bool (*)>(u32 *first, int holeIndex, int len, unsigned int value, bool (*comp)(/* parameters unknown */)) {
	int topIndex;
	int secondChild;
	
  long lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int holeIndex_00;
  
  iVar3 = holeIndex * 2 + 2;
  holeIndex_00 = holeIndex;
  while (iVar3 < len) {
    lVar1 = (*(code *)comp)(first + iVar3,first + iVar3 + -1);
    iVar4 = iVar3;
    if (lVar1 != 0) {
      iVar4 = iVar3 + -1;
    }
    first[holeIndex_00] = first[iVar4];
    holeIndex_00 = iVar4;
    iVar3 = (iVar4 + 1) * 2;
  }
  if (iVar3 == len) {
    puVar2 = first + holeIndex_00;
    holeIndex_00 = iVar3 + -1;
    *puVar2 = first[iVar3 + -1];
  }
  __push_heap__H4ZPUiZiZUiZPFRCUiRCUi_b_X01X11X11X21X31_v(first,holeIndex_00,holeIndex,value,comp);
  return;
}

void void __make_heap<unsigned int *, bool (*), unsigned int, int>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */)) {
	ptrdiff_t parent;
	
  int holeIndex;
  uint *puVar1;
  int len;
  
  len = (int)last - (int)first >> 2;
  if (1 < len) {
    holeIndex = (len + -2) / 2;
    puVar1 = first + holeIndex;
    while( true ) {
      __adjust_heap__H4ZPUiZiZUiZPFRCUiRCUi_b_X01X11X11X21X31_v(first,holeIndex,len,*puVar1,comp);
      puVar1 = puVar1 + -1;
      if (holeIndex == 0) break;
      holeIndex = holeIndex + -1;
    }
  }
  return;
}

void void sort_heap<unsigned int *, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */)) {
	u32 *first;
	bool (*comp)(/* parameters unknown */);
	bool (*comp)(/* parameters unknown */);
	u32 *first;
	u32 *first;
	unsigned int value;
	bool (*comp)(/* parameters unknown */);
	
  uint value;
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (1 < (int)last - (int)first >> 2) {
    iVar3 = (int)last - (int)first;
    uVar1 = *first;
    puVar2 = last;
    while( true ) {
      puVar2 = puVar2 + -1;
      value = *puVar2;
      iVar3 = iVar3 + -4;
      *puVar2 = uVar1;
      last = last + -1;
      __adjust_heap__H4ZPUiZiZUiZPFRCUiRCUi_b_X01X11X11X21X31_v(first,0,iVar3 >> 2,value,comp);
      if ((int)last - (int)first >> 2 < 2) break;
      uVar1 = *first;
    }
  }
  return;
}

void void __partial_sort<unsigned int *, unsigned int, bool (*)>(u32 *first, u32 *middle, u32 *last, bool (*comp)(/* parameters unknown */)) {
	u32 *first;
	u32 *last;
	bool (*comp)(/* parameters unknown */);
	u32 *i;
	u32 *first;
	u32 *last;
	u32 *result;
	unsigned int value;
	bool (*comp)(/* parameters unknown */);
	
  uint value;
  long lVar1;
  code *in_t0_lo;
  uint *puVar2;
  
                    /* inlined from ../MSrc/heap.h */
  __make_heap__H4ZPUiZPFRCUiRCUi_bZUiZi_X01X01X11PX21PX31_v(first,middle,in_t0_lo);
                    /* end of inlined section */
  if (middle < last) {
    puVar2 = middle;
    do {
      lVar1 = (*in_t0_lo)(puVar2,first);
      if (lVar1 != 0) {
                    /* inlined from ../MSrc/iterator.h */
        value = *puVar2;
        *puVar2 = *first;
        __adjust_heap__H4ZPUiZiZUiZPFRCUiRCUi_b_X01X11X11X21X31_v
                  (first,0,(int)middle - (int)first >> 2,value,in_t0_lo);
      }
                    /* end of inlined section */
      puVar2 = puVar2 + 1;
    } while (puVar2 < last);
  }
  sort_heap__H2ZPUiZPFRCUiRCUi_b_X01X01X11_v(first,middle,in_t0_lo);
  return;
}

u32* unsigned int * __unguarded_partition<unsigned int *, unsigned int, bool (*)>(u32 *first, u32 *last, unsigned int pivot, bool (*comp)(/* parameters unknown */)) {
	u32 *a;
	u32 *b;
	u32 *b;
	u32 *a;
	u32 tmp;
	
  uint uVar1;
  long lVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50[0] = pivot;
  while( true ) {
    while( true ) {
      lVar2 = (*(code *)comp)(first,local_50);
      if (lVar2 == 0) break;
      first = first + 1;
    }
    do {
      last = last + -1;
      lVar2 = (*(code *)comp)(local_50,last);
    } while (lVar2 != 0);
    if (last <= first) break;
                    /* inlined from ../MSrc/algobase.h */
    uVar1 = *first;
    *first = *last;
    *last = uVar1;
    first = first + 1;
                    /* end of inlined section */
  }
  return first;
}

void void __introsort_loop<unsigned int *, unsigned int, int, bool (*)>(u32 *first, u32 *last, int depth_limit, bool (*comp)(/* parameters unknown */)) {
	u32 *cut;
	u32 *first;
	u32 *middle;
	u32 *last;
	bool (*comp)(/* parameters unknown */);
	unsigned int &a;
	unsigned int &b;
	unsigned int &c;
	bool (*comp)(/* parameters unknown */);
	
  int iVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  code *in_t0_lo;
  uint *puVar5;
  
  iVar1 = (int)last - (int)first;
  while( true ) {
    if (iVar1 >> 2 < 0x11) {
      return;
    }
    if (comp == (undefined1 *)0x0) break;
    comp = comp + -1;
    puVar5 = last + -1;
    puVar2 = first + (((int)last - (int)first >> 2) - ((int)last - (int)first >> 0x1f) >> 1);
    lVar3 = (*in_t0_lo)(first,puVar2);
    if (lVar3 == 0) {
      lVar3 = (*in_t0_lo)(first,puVar5);
      puVar4 = first;
      if ((lVar3 == 0) && (lVar3 = (*in_t0_lo)(puVar2,puVar5), puVar4 = puVar5, lVar3 == 0)) {
        puVar4 = puVar2;
      }
    }
    else {
      lVar3 = (*in_t0_lo)(puVar2,puVar5);
      puVar4 = puVar2;
      if ((lVar3 == 0) && (lVar3 = (*in_t0_lo)(first,puVar5), puVar4 = puVar5, lVar3 == 0)) {
        puVar4 = first;
      }
    }
    puVar2 = __unguarded_partition__H3ZPUiZUiZPFRCUiRCUi_b_X01X01X11X21_X01
                       (first,last,*puVar4,in_t0_lo);
    __introsort_loop__H4ZPUiZUiZiZPFRCUiRCUi_b_X01X01PX11X21X31_v(puVar2,last,0,comp);
    iVar1 = (int)puVar2 - (int)first;
    last = puVar2;
  }
                    /* end of inlined section */
  __partial_sort__H3ZPUiZUiZPFRCUiRCUi_b_X01X01X01PX11X21_v(first,last,last,(undefined1 *)0x0);
  return;
}

void void __unguarded_linear_insert<unsigned int *, unsigned int, bool (*)>(u32 *last, unsigned int value, bool (*comp)(/* parameters unknown */)) {
	u32 *next;
	
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  puVar1 = last + -1;
  local_50[0] = value;
  while( true ) {
    puVar3 = puVar1;
    lVar2 = (*(code *)comp)(local_50,puVar3);
    if (lVar2 == 0) break;
    *last = *puVar3;
    puVar1 = puVar3 + -1;
    last = puVar3;
  }
  *last = local_50[0];
  return;
}

void void __insertion_sort<unsigned int *, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */)) {
	u32 *i;
	u32 *first;
	u32 *last;
	bool (*comp)(/* parameters unknown */);
	u32 value;
	
  long lVar1;
  undefined8 unaff_s0;
  uint *last_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uint value;
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
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((first != last) && (last_00 = first + 1, last_00 != last)) {
                    /* end of inlined section */
    value = *last_00;
    while( true ) {
      lVar1 = (*(code *)comp)(&value,first);
      if (lVar1 == 0) {
        __unguarded_linear_insert__H3ZPUiZUiZPFRCUiRCUi_b_X01X11X21_v(last_00,value,comp);
      }
      else {
        copy_backward__H2ZPUiZPUi_X01X01X11_X11(first,last_00,last_00 + 1);
        *first = value;
      }
      last_00 = last_00 + 1;
      if (last_00 == last) break;
      value = *last_00;
    }
  }
  return;
}

void void __unguarded_insertion_sort_aux<unsigned int *, unsigned int, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */)) {
	u32 *i;
	
  uint value;
  undefined1 *in_a3_lo;
  uint *puVar1;
  
  if (first != last) {
    value = *first;
    while( true ) {
      puVar1 = first + 1;
      __unguarded_linear_insert__H3ZPUiZUiZPFRCUiRCUi_b_X01X11X21_v(first,value,in_a3_lo);
      if (puVar1 == last) break;
      value = *puVar1;
      first = puVar1;
    }
  }
  return;
}

void void __final_insertion_sort<unsigned int *, bool (*)>(u32 *first, u32 *last, bool (*comp)(/* parameters unknown */)) {
	u32 *last;
	bool (*comp)(/* parameters unknown */);
	
  if ((int)last - (int)first >> 2 < 0x11) {
    __insertion_sort__H2ZPUiZPFRCUiRCUi_b_X01X01X11_v(first,last,comp);
  }
  else {
    __insertion_sort__H2ZPUiZPFRCUiRCUi_b_X01X01X11_v(first,first + 0x10,comp);
    __unguarded_insertion_sort_aux__H3ZPUiZUiZPFRCUiRCUi_b_X01X01PX11X21_v
              (first + 0x10,last,(undefined1 *)0x0);
  }
  return;
}

ErrType int ReconLoadObject<ObjectSaveTypeTable2>(ObjectSaveTypeTable2 *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<ObjectSaveTypeTable2> recon;
	ReconBuilder rb;
	ObjectSaveTypeTable2 *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectSaveTypeTable2_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable =
       (ReconObject__vtable *)_vt_t17SimpleReconObject1Z20ObjectSaveTypeTable2;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
                    /* inlined from /eor/src2/common/file/e_file.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/file/e_file.h */
      _dummyFile.field0_0x0.__vtable = (EFile__vtable *)_vt_5EFile;
                    /* end of inlined section */
      ___16ESimsDataManager(&_simsdataman,2);
    }
    else {
      __16ESimsDataManager(&_simsdataman);
      _dummyFile.field0_0x0.__vtable = (EFile__vtable *)_vt_10EDummyFile;
    }
  }
  return;
}

void SimpleReconObject<ObjectSaveTypeTable2>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ObjectSaveTypeTable2>::DoStream(ReconBuffer *r, SInt32 version) {
  DoStream__20ObjectSaveTypeTable2P11ReconBufferi(this->fObj,r,version);
  return;
}

SInt32 SimpleReconObject<ObjectSaveTypeTable2>::GetType() {
  return this->fType;
}

void EFile::~EFile(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EFile__vtable *)_vt_5EFile;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EDummyFile::~EDummyFile(int __in_chrg) {
	EFile *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EFile__vtable *)_vt_5EFile;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
  return;
}

unsigned int EDummyFile::Read(void *pBuffer, unsigned int nSize) {
  return nSize;
}

unsigned int EDummyFile::Write(void *pBuffer, unsigned int nSize) {
  return nSize;
}

unsigned int EDummyFile::Seek(int nOffset, SeekType eMode) {
  this->m_uOffset = nOffset;
  return nOffset;
}

unsigned int EDummyFile::Tell() {
  return this->m_uOffset;
}

bool EDummyFile::Flush() {
  return true;
}

ErrorCode EDummyFile::GetLastError() {
  return ER_NONE;
}

IOMode EDummyFile::GetIOMode() {
  return IOM_READ;
}

AccessMode EDummyFile::GetAccessMode() {
  return AM_RANDOM_ACCESS;
}

DeviceType EDummyFile::GetDeviceType() {
  return DT_DEFAULT;
}

char* EDummyFile::GetDrive() {
  return (char *)0x0;
}

char* EDummyFile::GetPath() {
  return (char *)0x0;
}

char* EDummyFile::GetName() {
  return (char *)0x0;
}

char* EDummyFile::GetExt() {
  return (char *)0x0;
}

void* EDummyFile::GetSystemHandle() {
  return (void *)0x0;
}

void EDummyFile::Destroy() {
  return;
}

void global constructors keyed to _simsdataman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _simsdataman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

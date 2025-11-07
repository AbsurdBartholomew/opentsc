// STATUS: NOT STARTED

#include "e_movieman.h"

EMovieMan _movieman = {
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
	}
};

__vtbl_ptr_type EMovieMan virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovieMan::~EMovieMan,
		/* .__delta2 = */ 28824
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
		/* .__pfn = */ &EMovieMan::AllocateAndLoadResource,
		/* .__delta2 = */ 28584
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

EResource* EMovieMan::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	u32 start;
	ERMovie *pRMovie;
	
  uint start;
  ERMovie *pEVar1;
  
  start = (*(code *)pFile->__vtable->GetDrive)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
                    /* inlined from c:/eor/src2/engine/e_rmovie.h */
  pEVar1 = (ERMovie *)_memmanAlloc__FUiUi(0x24,4);
                    /* end of inlined section */
  pEVar1 = __7ERMovieP5EFileUiUi(pEVar1,pFile,start,uLength);
  (*(code *)pFile->__vtable->GetAccessMode)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,uLength,1);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_movieman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/e_movieman.h */
      __16EResourceManager(&_movieman.field0_0x0);
      _movieman.field0_0x0._56_4_ = 1;
                    /* end of inlined section */
      _movieman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_9EMovieMan;
    }
  }
  return;
}

void EMovieMan::~EMovieMan(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERMovie* EMovieMan::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERMovie *pEVar1;
  
  pEVar1 = (ERMovie *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERMovie* EMovieMan::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERMovie *pEVar1;
  
  pEVar1 = (ERMovie *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

EMovieMan* EMovieMan::EMovieMan() {
  __16EResourceManager(&this->field0_0x0);
  *(undefined4 *)&(this->field0_0x0).m_bSeqAccess = 1;
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_9EMovieMan;
  return this;
}

void global constructors keyed to _movieman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _movieman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

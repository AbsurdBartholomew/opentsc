// STATUS: NOT STARTED

#include "e_audiostreamman.h"

EAudioStreamManager _audiostreamman = {
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

__vtbl_ptr_type EAudioStreamManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EAudioStreamManager::~EAudioStreamManager,
		/* .__delta2 = */ -13144
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
		/* .__pfn = */ &EAudioStreamManager::AllocateAndLoadResource,
		/* .__delta2 = */ -13512
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

__vtbl_ptr_type ERAudioStream virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::SafeDelete,
		/* .__delta2 = */ 10488
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeInfo,
		/* .__delta2 = */ 10544
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeName,
		/* .__delta2 = */ 10560
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeKey,
		/* .__delta2 = */ 10576
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeVersion,
		/* .__delta2 = */ 10592
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERAudioStream::~ERAudioStream,
		/* .__delta2 = */ -13232
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Read,
		/* .__delta2 = */ 9848
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Write,
		/* .__delta2 = */ 9808
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10736
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EResource* EAudioStreamManager::AllocateAndLoadResource(EFile *pFile, u32 uLength) {
	u32 start;
	EFile *pFile;
	u32 start;
	u32 end;
	
  char *pcVar1;
  EResource *this_00;
  
  pcVar1 = (char *)(*(code *)pFile->__vtable->GetDrive)
                             ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType
                             );
                    /* inlined from c:/eor/src2/engine/audiostream/e_raudiostream.h */
  this_00 = (EResource *)_memmanAlloc__FUiUi(0x20,4);
  __9EResource(this_00);
  this_00[1].m_name.m_p = pcVar1;
  this_00[1].m_pManager = (EResourceManager *)(pcVar1 + (uLength - 1));
  this_00[1].field0_0x0.__vtable = (EStorable__vtable *)pFile;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/audiostream/e_raudiostream.h */
  (this_00->field0_0x0).__vtable = (EStorable__vtable *)_vt_13ERAudioStream;
                    /* end of inlined section */
  (*(code *)pFile->__vtable->GetAccessMode)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,uLength,1);
  return this_00;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_audiostreamman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/audiostream/e_audiostreamman.h */
      __16EResourceManager(&_audiostreamman.field0_0x0);
      _audiostreamman.field0_0x0._56_4_ = 1;
                    /* end of inlined section */
      _audiostreamman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_19EAudioStreamManager;
    }
  }
  return;
}

void ERAudioStream::~ERAudioStream(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_13ERAudioStream;
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__13ERAudioStreamPv(this);
  }
  return;
}

void EAudioStreamManager::~EAudioStreamManager(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/audiostream/e_audiostreamman.cpp */
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERAudioStream* EAudioStreamManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERAudioStream *pEVar1;
  
  pEVar1 = (ERAudioStream *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERAudioStream* EAudioStreamManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERAudioStream *pEVar1;
  
  pEVar1 = (ERAudioStream *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

EAudioStreamManager* EAudioStreamManager::EAudioStreamManager() {
  __16EResourceManager(&this->field0_0x0);
  *(undefined4 *)&(this->field0_0x0).m_bSeqAccess = 1;
  (this->field0_0x0).__vtable = (EResourceManager__vtable *)_vt_19EAudioStreamManager;
  return this;
}

void ERAudioStream::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void global constructors keyed to _audiostreamman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _audiostreamman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

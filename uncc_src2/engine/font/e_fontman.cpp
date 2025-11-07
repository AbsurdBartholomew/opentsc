// STATUS: NOT STARTED

#include "e_fontman.h"

EFontManager _fontman = {
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

__vtbl_ptr_type EFontManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontManager::~EFontManager,
		/* .__delta2 = */ 22672
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
		/* .__pfn = */ &EResourceManager::AllocateAndLoadResource,
		/* .__delta2 = */ 17928
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontManager::AllocateAndLoadResource,
		/* .__delta2 = */ 22504
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EResource* EFontManager::AllocateAndLoadResource(EStream &s) {
	ERFont *pRFont;
	
  ERFont *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/font/e_rfont.h */
  pEVar1 = (ERFont *)_memmanAlloc__FUiUi(0x70,0x10);
                    /* end of inlined section */
  pEVar1 = __6ERFont(pEVar1);
  Load__6ERFontR7EStream(pEVar1,s);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_fontman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/font/e_fontman.h */
      __16EResourceManager(&_fontman.field0_0x0);
                    /* end of inlined section */
      _fontman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_12EFontManager;
    }
  }
  return;
}

void EFontManager::~EFontManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERFont* EFontManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERFont *pEVar1;
  
  pEVar1 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERFont* EFontManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERFont *pEVar1;
  
  pEVar1 = (ERFont *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

void global constructors keyed to _fontman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _fontman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

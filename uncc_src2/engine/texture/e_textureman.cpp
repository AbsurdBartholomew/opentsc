// STATUS: NOT STARTED

#include "e_textureman.h"

ETextureManager _textureman = {
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

__vtbl_ptr_type ETextureManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETextureManager::~ETextureManager,
		/* .__delta2 = */ 23360
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
		/* .__pfn = */ &ETextureManager::AllocateAndLoadResource,
		/* .__delta2 = */ 23192
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EResource* ETextureManager::AllocateAndLoadResource(EStream &s) {
	ERTexture *pRTexture;
	
  ERTexture *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/texture/e_rtexture.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/texture/e_rtexture.h */
  pEVar1 = (ERTexture *)_allocBucketAlloc__FUiUi(0x18,0x18);
                    /* end of inlined section */
  pEVar1 = __9ERTexture(pEVar1);
  Load__9ERTextureR7EStream(pEVar1,s);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_textureman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/texture/e_textureman.h */
      __16EResourceManager(&_textureman.field0_0x0);
                    /* end of inlined section */
      _textureman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_15ETextureManager;
    }
  }
  return;
}

void ETextureManager::~ETextureManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERTexture* ETextureManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERTexture *pEVar1;
  
  pEVar1 = (ERTexture *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERTexture* ETextureManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERTexture *pEVar1;
  
  pEVar1 = (ERTexture *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

void global constructors keyed to _textureman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _textureman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

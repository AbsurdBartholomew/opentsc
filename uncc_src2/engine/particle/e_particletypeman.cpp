// STATUS: NOT STARTED

#include "e_particletypeman.h"

EParticleTypeManager _particletypeman = {
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

__vtbl_ptr_type EParticleTypeManager virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleTypeManager::~EParticleTypeManager,
		/* .__delta2 = */ 14952
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
		/* .__pfn = */ &EParticleTypeManager::AllocateAndLoadResource,
		/* .__delta2 = */ 14784
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EResource* EParticleTypeManager::AllocateAndLoadResource(EStream &s) {
	ERParticleType *pRParticleType;
	
  ERParticleType *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/particle/e_rparticletype.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_rparticletype.h */
  pEVar1 = (ERParticleType *)_allocBucketAlloc__FUiUi(0x230,0x1e);
                    /* end of inlined section */
  pEVar1 = __14ERParticleType(pEVar1);
  Load__14ERParticleTypeR7EStream(pEVar1,s);
  return &pEVar1->field0_0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EResourceManager(&_particletypeman.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
      __16EResourceManager(&_particletypeman.field0_0x0);
                    /* end of inlined section */
      _particletypeman.field0_0x0.__vtable = (EResourceManager__vtable *)_vt_20EParticleTypeManager;
    }
  }
  return;
}

void EParticleTypeManager::~EParticleTypeManager(int __in_chrg) {
  ___16EResourceManager(&this->field0_0x0,__in_chrg);
  return;
}

ERParticleType* EParticleTypeManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) {
  ERParticleType *pEVar1;
  
  pEVar1 = (ERParticleType *)
           AddRef__16EResourceManagerUiP5EFilei(&this->field0_0x0,id,pSourceFile,seekIfLoaded);
  return pEVar1;
}

ERParticleType* EParticleTypeManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) {
  ERParticleType *pEVar1;
  
  pEVar1 = (ERParticleType *)
           AddRef__16EResourceManagerPCcP5EFilei(&this->field0_0x0,szName,pSourceFile,seekIfLoaded);
  return pEVar1;
}

void global constructors keyed to _particletypeman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _particletypeman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

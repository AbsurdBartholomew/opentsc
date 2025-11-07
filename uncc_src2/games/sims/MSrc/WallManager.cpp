// STATUS: NOT STARTED

#include "WallManager.h"

struct WallManagerImpl : WallManager {
	WallManagerImpl& operator=();
	WallManagerImpl();
	WallManagerImpl();
	/* vtable[1] */ virtual WallManagerImpl(WallManagerImpl*, int, void);
	/* vtable[2] */ virtual void DrawWalls(RECT *inClip, int inLevel);
	/* vtable[3] */ virtual void SetRotation(int inRotation);
	/* vtable[4] */ virtual void SetCutaway(bool inCutaway, int inLevel);
	/* vtable[5] */ virtual void ComputeCutaway(BitMatrix64 &inVis, int inLevel);
	/* vtable[6] */ virtual void BuildGraphFromMap(int inLevel);
	/* vtable[7] */ virtual void RefreshFromMap(int inLevel);
	/* vtable[8] */ virtual Vertex* GetVertex(CTilePt &inPt);
	/* vtable[9] */ virtual void AddWall(Wall *inWall, int level);
	/* vtable[10] */ virtual void AddVertex(Vertex *inVertex, int level);
	/* vtable[11] */ virtual void CleanupConstruction();
	/* vtable[12] */ virtual bool CheckWallConsistency();
	/* vtable[13] */ virtual void AsynchronousRebuild(int inLevel);
	/* vtable[14] */ virtual void AsynchronousRefresh(int inLevel);
	/* vtable[15] */ virtual void HandleDirty();
};

__vtbl_ptr_type WallManagerImpl virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::~WallManagerImpl,
		/* .__delta2 = */ -23808
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::DrawWalls,
		/* .__delta2 = */ -23944
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::SetRotation,
		/* .__delta2 = */ -23936
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::SetCutaway,
		/* .__delta2 = */ -23928
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::ComputeCutaway,
		/* .__delta2 = */ -23920
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::BuildGraphFromMap,
		/* .__delta2 = */ -23912
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::RefreshFromMap,
		/* .__delta2 = */ -23904
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::GetVertex,
		/* .__delta2 = */ -23896
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::AddWall,
		/* .__delta2 = */ -23888
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::AddVertex,
		/* .__delta2 = */ -23880
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::CleanupConstruction,
		/* .__delta2 = */ -23872
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::CheckWallConsistency,
		/* .__delta2 = */ -23864
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::AsynchronousRebuild,
		/* .__delta2 = */ -23856
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::AsynchronousRefresh,
		/* .__delta2 = */ -23848
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManagerImpl::HandleDirty,
		/* .__delta2 = */ -23840
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type WallManager virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &WallManager::~WallManager,
		/* .__delta2 = */ -24088
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

void WallManager::~WallManager(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (WallManager__vtable *)_vt_11WallManager;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

WallManager* WallManager::CreateInstance() {
  WallManagerImpl *this;
  WallManager *pWVar1;
  
  this = (WallManagerImpl *)__builtin_new(4);
  pWVar1 = (WallManager *)__15WallManagerImpl(this);
  return pWVar1;
}

void WallManager::DestroyInstance(WallManager *pInstance) {
  if (pInstance != (WallManager *)0x0) {
    (*(code *)pInstance->__vtable->SetRotation)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->DrawWalls,3);
  }
  return;
}

void WallManagerImpl::DrawWalls(RECT *inClip, int inLevel) {
  return;
}

void WallManagerImpl::SetRotation(int inRotation) {
  return;
}

void WallManagerImpl::SetCutaway(bool inCutaway, int inLevel) {
  return;
}

void WallManagerImpl::ComputeCutaway(BitMatrix64 &inVis, int inLevel) {
  return;
}

void WallManagerImpl::BuildGraphFromMap(int inLevel) {
  return;
}

void WallManagerImpl::RefreshFromMap(int inLevel) {
  return;
}

Vertex* WallManagerImpl::GetVertex(CTilePt &inPt) {
  return (undefined1 *)0x0;
}

void WallManagerImpl::AddWall(Wall *inWall, int level) {
  return;
}

void WallManagerImpl::AddVertex(Vertex *inVertex, int level) {
  return;
}

void WallManagerImpl::CleanupConstruction() {
  return;
}

bool WallManagerImpl::CheckWallConsistency() {
  return false;
}

void WallManagerImpl::AsynchronousRebuild(int inLevel) {
  return;
}

void WallManagerImpl::AsynchronousRefresh(int inLevel) {
  return;
}

void WallManagerImpl::HandleDirty() {
  return;
}

WallManagerImpl* WallManagerImpl::WallManagerImpl() {
	WallManager *this;
	
  (this->field0_0x0).__vtable = (WallManager__vtable *)_vt_15WallManagerImpl;
  return this;
}

void WallManagerImpl::~WallManagerImpl(int __in_chrg) {
  (this->field0_0x0).__vtable = (WallManager__vtable *)_vt_15WallManagerImpl;
  ___11WallManager(&this->field0_0x0,__in_chrg);
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

WallManager* WallManager::WallManager() {
  this->__vtable = (WallManager__vtable *)_vt_11WallManager;
  return this;
}

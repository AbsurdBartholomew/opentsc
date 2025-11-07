// STATUS: NOT STARTED

#include "controllpad.h"

__vtbl_ptr_type Controllpad virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Controllpad::~Controllpad,
		/* .__delta2 = */ -7360
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Controllpad::GetButDown,
		/* .__delta2 = */ -6976
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Controllpad::ClearBut,
		/* .__delta2 = */ -6872
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Controllpad::GetBut,
		/* .__delta2 = */ -6840
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EUIVirtualCtrl virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIVirtualCtrl::~EUIVirtualCtrl,
		/* .__delta2 = */ -6920
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

Controllpad* Controllpad::Controllpad() {
	EUIVirtualCtrl *this;
	
  (this->field0_0x0).__vtable = (EUIVirtualCtrl__vtable *)_vt_11Controllpad;
  this->m_released[1] = 0xffffffff;
  this->m_pressed[0] = 0;
  this->m_pressed[1] = 0;
  this->m_released[0] = 0xffffffff;
  return this;
}

void Controllpad::~Controllpad(int __in_chrg) {
	EUIVirtualCtrl *this;
	void *pAddress;
	
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (this->field0_0x0).__vtable = (EUIVirtualCtrl__vtable *)_vt_14EUIVirtualCtrl;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void Controllpad::Update() {
	int i;
	u32 butts;
	int j;
	u32 mask;
	
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint mask;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar1 = 0;
  while( true ) {
    puVar6 = (uint *)((int)this->m_released + iVar1);
    puVar5 = (uint *)((int)this->m_pressed + iVar1);
    iVar8 = iVar8 + 1;
    uVar2 = GetDownButtons__11EControlleri(*(EController **)((int)_ctrlPads + iVar1),-1);
    uVar7 = 0;
    do {
      puVar4 = (uint *)((int)this->m_released + iVar1);
      mask = 1 << (uVar7 & 0x1f);
      uVar7 = uVar7 + 1;
      if (((uVar2 & mask) == 0) || ((*puVar4 & mask) == 0)) {
        uVar3 = GetDownButtons__11EControlleri(*(EController **)((int)_ctrlPads + iVar1),mask);
        if (uVar3 == 0) {
          *puVar6 = *puVar6 | mask;
          *puVar5 = *puVar5 & ~mask;
        }
        else {
          *puVar5 = *puVar5 & ~mask;
        }
      }
      else {
        *puVar5 = *puVar5 | mask;
        *puVar4 = *puVar4 & ~mask;
      }
    } while ((int)uVar7 < 0x10);
    if (7 < iVar8) break;
    iVar1 = iVar8 * 4;
  }
  return;
}

bool Controllpad::GetButDown(u32 player, u32 mask) {
  uint uVar1;
  
  uVar1 = GetDownButtons__11EControlleri(_ctrlPads[player],mask);
  return uVar1 != 0;
}

void EUIVirtualCtrl::~EUIVirtualCtrl(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EUIVirtualCtrl__vtable *)_vt_14EUIVirtualCtrl;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void Controllpad::ClearBut(u32 player, u32 mask) {
  this->m_released[player] = this->m_released[player] | mask;
  return;
}

bool Controllpad::GetBut(u32 player, u32 mask) {
  uint uVar1;
  
  uVar1 = this->m_pressed[player];
  if ((uVar1 & mask) == 0) {
    return false;
  }
  this->m_pressed[player] = uVar1 & ~mask;
  return true;
}

// STATUS: NOT STARTED

#include "e_rendersurface.h"

__vtbl_ptr_type ERenderSurface virtual table[12] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERenderSurface::~ERenderSurface,
		/* .__delta2 = */ 30944
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
		/* .__pfn = */ &ERenderSurface::GetOutputRect,
		/* .__delta2 = */ 31016
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
		/* .__pfn = */ &ERenderSurface::SetFlags,
		/* .__delta2 = */ 31080
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERenderSurface::GetFlags,
		/* .__delta2 = */ 31088
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ERenderSurface* ERenderSurface::ERenderSurface() {
  this->m_xsize = -1;
  this->__vtable = (ERenderSurface__vtable *)_vt_14ERenderSurface;
  this->m_ysize = -1;
  return this;
}

void ERenderSurface::~ERenderSurface(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ERenderSurface__vtable *)_vt_14ERenderSurface;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool ERenderSurface::SetSize(int xsize, int ysize, int format) {
  this->m_format = format;
  this->m_xsize = xsize;
  this->m_ysize = ysize;
  return true;
}

void ERenderSurface::GetOutputRect(EFloatRect &rect) {
	TRect<float> *this;
	
  int iVar1;
  int iVar2;
  
  iVar1 = this->m_ysize;
  iVar2 = this->m_xsize;
                    /* inlined from /eor/src2/common/math/e_rect.h */
  rect->left = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  rect->top = 0.0;
  rect->bottom = (float)(iVar1 + -1);
  rect->right = (float)(iVar2 + -1);
  return;
}

void ERenderSurface::SetFlags(u32 flags) {
  this->m_flags = flags;
  return;
}

u32 ERenderSurface::GetFlags() {
  return this->m_flags;
}

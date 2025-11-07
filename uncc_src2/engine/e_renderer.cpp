// STATUS: NOT STARTED

#include "e_renderer.h"

__vtbl_ptr_type ERenderer virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERenderer::~ERenderer,
		/* .__delta2 = */ 31152
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EThread::Main,
		/* .__delta2 = */ -8968
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERenderer::GetCurrentTexture,
		/* .__delta2 = */ 31192
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ERenderer* ERenderer::ERenderer() {
  __7EThread(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EThread__vtable *)_vt_9ERenderer;
  return this;
}

void ERenderer::~ERenderer(int __in_chrg) {
  (this->field0_0x0).__vtable = (EThread__vtable *)_vt_9ERenderer;
  ___7EThread(&this->field0_0x0,__in_chrg);
  return;
}

ETexture* ERenderer::GetCurrentTexture(int renderPass) {
  return (ETexture *)0x0;
}

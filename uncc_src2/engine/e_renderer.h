// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_RENDERER_H
#define C__EOR_SRC2_ENGINE_E_RENDERER_H

struct ERenderer : EThread {
	ERenderer& operator=();
	ERenderer();
	ERenderer();
	/* vtable[1] */ virtual ERenderer(ERenderer*, int, void);
	/* vtable[3] */ virtual ETexture* GetCurrentTexture(int renderPass);
};

extern __vtbl_ptr_type ERenderer virtual table[5];

void ERenderer::~ERenderer(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_RENDERER_H

/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once
#include "common/sync/sdl/e_thread.h"
#include "engine/texture/e_texture.h"

struct ERenderer : EThread {
	ERenderer();
	/* vtable[3] */ virtual ETexture* GetCurrentTexture(int renderPass);
};
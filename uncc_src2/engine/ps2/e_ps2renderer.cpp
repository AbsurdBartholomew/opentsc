// STATUS: NOT STARTED

#include "e_ps2renderer.h"

ERenderer *_pRend = NULL;

EPs2Renderer _ps2rend = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .m_threadId = */ 0,
			/* .m_pStack = */ NULL,
			/* .m_stackSize = */ 0,
			/* .m_stackAutoAllocated = */ false,
			/* .m_szName = */ NULL,
			/* .m_pLastThread = */ NULL,
			/* .m_pNextThread = */ NULL,
			/* .$vf897 = */ NULL
		}
	},
	/* .m_pc = */ NULL,
	/* .m_callStack = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL,
		/* [4] = */ NULL,
		/* [5] = */ NULL,
		/* [6] = */ NULL,
		/* [7] = */ NULL,
		/* [8] = */ NULL,
		/* [9] = */ NULL
	},
	/* .m_callStackPos = */ 0,
	/* .m_stateStackPos = */ 0,
	/* .m_nInputBuffer = */ 0,
	/* .m_nTotalVerts = */ 0,
	/* .m_currentFrameBuffer = */ 0,
	/* .m_done = */ false,
	/* .m_testRegistersNeedSetting = */ false,
	/* .m_stateStack = */ {
		/* [0] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [1] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [2] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [3] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [4] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [5] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [6] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [7] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [8] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		},
		/* [9] = */ {
			/* .geomModes = */ 0,
			/* .p = */ {
				/* [0] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				},
				/* [1] = */ {
					/* .rasterModes = */ 0,
					/* .test = */ {
						/* .zbTest = */ 0,
						/* .zbMethod = */ 0,
						/* .zbWrite = */ 0,
						/* .alphaTest = */ 0,
						/* .alphaMethod = */ 0,
						/* .alphaThreshold = */ 0
					}
				}
			}
		}
	},
	/* .m_callbackParam32 = */ 0,
	/* .m_callbackParam16 = */ 0,
	/* .m_callbackParam8 = */ 0,
	/* .m_commandQueue = */ {
		/* .m_inSema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		},
		/* .m_outSema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		},
		/* .m_cIn = */ 0,
		/* .m_cOut = */ 0,
		/* .m_size = */ 0,
		/* .m_pMsgs = */ NULL,
		/* .m_autoAllocated = */ false
	},
	/* .m_textureSemaphore = */ {
		/* base class 0 = */ {
			/* .$vf1686 = */ NULL
		},
		/* .m_id = */ 0,
		/* .m_maxCount = */ 0,
		/* .m_waits = */ 0,
		/* .m_count = */ 0
	},
	/* .m_testDL = */ {
		/* [0] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [1] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [2] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [3] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [4] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [5] = */ VECTOR(0.f, 0.f, 0.f, 0.f)
	},
	/* .m_blendDL = */ {
		/* [0] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [1] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [2] = */ VECTOR(0.f, 0.f, 0.f, 0.f)
	},
	/* .m_combineDL = */ {
		/* [0] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [1] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [2] = */ VECTOR(0.f, 0.f, 0.f, 0.f)
	},
	/* .m_test = */ {
		/* [0] = */ {
			/* .zbTest = */ 0,
			/* .zbMethod = */ 0,
			/* .zbWrite = */ 0,
			/* .alphaTest = */ 0,
			/* .alphaMethod = */ 0,
			/* .alphaThreshold = */ 0
		},
		/* [1] = */ {
			/* .zbTest = */ 0,
			/* .zbMethod = */ 0,
			/* .zbWrite = */ 0,
			/* .alphaTest = */ 0,
			/* .alphaMethod = */ 0,
			/* .alphaThreshold = */ 0
		}
	},
	/* .m_rendClock = */ {
		/* .m_pData = */ NULL
	},
	/* .m_totalTime = */ 0.f,
	/* .m_geClock = */ {
		/* .m_pData = */ NULL
	},
	/* .m_geTime = */ 0.f,
	/* .m_nVUInterrupts = */ 0,
	/* .m_nGSInterrupts = */ 0,
	/* .m_nVramLoadBytes = */ 0,
	/* .m_nTextureFaults = */ 0,
	/* .m_nMPGLoads = */ 0
};

float _getime = 0.0166666675f;
int _vertsperframe = 0;
int _nVUInterrupts = 0;
int _nMPGLoads = 0;
int _nGSInterrupts = 0;
int _nVramLoadBytes = 0;
int _nTextureFaults = 0;
ETexture *_pWaitTexture = NULL;

void (*EPs2Renderer::m_jumpTable[62])(/* parameters unknown */) = {
	/* [0] = */ &EPs2Renderer::TriStrip,
	/* [1] = */ &EPs2Renderer::TriFan,
	/* [2] = */ &EPs2Renderer::TriList,
	/* [3] = */ &EPs2Renderer::QuadList,
	/* [4] = */ &EPs2Renderer::PointList,
	/* [5] = */ &EPs2Renderer::SpriteList,
	/* [6] = */ &EPs2Renderer::DisplayList,
	/* [7] = */ &EPs2Renderer::Goto,
	/* [8] = */ &EPs2Renderer::End,
	/* [9] = */ &EPs2Renderer::Viewport,
	/* [10] = */ &EPs2Renderer::ClipRatio,
	/* [11] = */ &EPs2Renderer::Scissor,
	/* [12] = */ &EPs2Renderer::ModelMatrices,
	/* [13] = */ &EPs2Renderer::ViewMatrix,
	/* [14] = */ &EPs2Renderer::ProjectionMatrix,
	/* [15] = */ &EPs2Renderer::WindowMatrix,
	/* [16] = */ &EPs2Renderer::TextureMatrix,
	/* [17] = */ &EPs2Renderer::Texture,
	/* [18] = */ &EPs2Renderer::EnableGeometryModes,
	/* [19] = */ &EPs2Renderer::DisableGeometryModes,
	/* [20] = */ &EPs2Renderer::SetGeometryModes,
	/* [21] = */ &EPs2Renderer::EnableRasterModes,
	/* [22] = */ &EPs2Renderer::DisableRasterModes,
	/* [23] = */ &EPs2Renderer::SetRasterModes,
	/* [24] = */ &EPs2Renderer::Lights,
	/* [25] = */ &EPs2Renderer::SendGSDisplayList,
	/* [26] = */ &EPs2Renderer::LineList,
	/* [27] = */ &EPs2Renderer::LineStrip,
	/* [28] = */ &EPs2Renderer::SaveState,
	/* [29] = */ &EPs2Renderer::RestoreState,
	/* [30] = */ &EPs2Renderer::CallbackParam,
	/* [31] = */ &EPs2Renderer::Callback,
	/* [32] = */ &EPs2Renderer::GEList,
	/* [33] = */ &EPs2Renderer::Rect,
	/* [34] = */ &EPs2Renderer::Memcpy,
	/* [35] = */ &EPs2Renderer::Material,
	/* [36] = */ &EPs2Renderer::MipMapSetup,
	/* [37] = */ &EPs2Renderer::RecalcMatrices,
	/* [38] = */ &EPs2Renderer::Debug,
	/* [39] = */ &EPs2Renderer::SetMipMap,
	/* [40] = */ &EPs2Renderer::GeometrySetup,
	/* [41] = */ &EPs2Renderer::DirectRect,
	/* [42] = */ &EPs2Renderer::TriStripPacked,
	/* [43] = */ &EPs2Renderer::ZTest,
	/* [44] = */ &EPs2Renderer::AlphaTest,
	/* [45] = */ &EPs2Renderer::RenderSurface,
	/* [46] = */ &EPs2Renderer::Vertex,
	/* [47] = */ &EPs2Renderer::TriIndexed,
	/* [48] = */ &EPs2Renderer::SaveImageData,
	/* [49] = */ &EPs2Renderer::PointListPacked,
	/* [50] = */ &EPs2Renderer::SpriteListPacked,
	/* [51] = */ &EPs2Renderer::SetCombineMode,
	/* [52] = */ &EPs2Renderer::SetBlendMode,
	/* [53] = */ &EPs2Renderer::PointLight,
	/* [54] = */ &EPs2Renderer::Noop,
	/* [55] = */ &EPs2Renderer::ClipRect,
	/* [56] = */ &EPs2Renderer::MovieFrame,
	/* [57] = */ &EPs2Renderer::TriStripPackedInt,
	/* [58] = */ &EPs2Renderer::VerifyMpg,
	/* [59] = */ &EPs2Renderer::RectList,
	/* [60] = */ &EPs2Renderer::ParticleList,
	/* [61] = */ &EPs2Renderer::ParticleListRot
};

__vtbl_ptr_type EPs2Renderer virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Renderer::~EPs2Renderer,
		/* .__delta2 = */ -3256
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Renderer::Main,
		/* .__delta2 = */ -2376
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Renderer::GetCurrentTexture,
		/* .__delta2 = */ 15088
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static EMutex _loadMutex;
static EPs2TextureLock _locks[2];

EPs2Renderer* EPs2Renderer::EPs2Renderer() {
  __9ERenderer(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EThread__vtable *)_vt_12EPs2Renderer;
  __9EMsgQueue(&this->m_commandQueue);
  __10ESemaphore(&this->m_textureSemaphore);
  __6EClock(&this->m_rendClock);
  __6EClock(&this->m_geClock);
  _pRend = &this->field0_0x0;
  this->m_nTotalVerts = 0;
  this->m_totalTime = 0.0;
  return this;
}

void EPs2Renderer::~EPs2Renderer(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EThread__vtable *)_vt_12EPs2Renderer;
  _pRend = &this->field0_0x0;
  ___6EClock(&this->m_geClock,2);
  ___6EClock(&this->m_rendClock,2);
  ___10ESemaphore(&this->m_textureSemaphore,2);
  ___9EMsgQueue(&this->m_commandQueue,2);
  ___9ERenderer(&this->field0_0x0,__in_chrg);
  return;
}

bool EPs2Renderer::Init() {
	EDisplayDL *pLastDisplayDL;
	int p;
	EThread *this;
	int i;
	EPs2TextureLock *pl;
	int j;
	
  long lVar1;
  EDisplayDL *pEVar2;
  bool bVar3;
  EPs2TestState *pEVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  Id__5EMat4((EMat4 *)&DAT_1100cd80);
  Id__5EMat4((EMat4 *)&DAT_1100ffb0);
  this->m_nInputBuffer = 0;
  this->m_callStackPos = 0;
  this->m_stateStackPos = 0;
  bVar3 = Create__10ESemaphoreii(&this->m_textureSemaphore,0x7ffffff5,0);
  if (bVar3) {
    DAT_1100ce50 = 1;
    DAT_1100c7a8 = 0x208;
    DAT_1100c7a4 = 8;
    DAT_1100c7a0 = 1;
    pEVar4 = this->m_test;
    iVar7 = 1;
    do {
      pEVar4->zbTest = '\x01';
      iVar7 = iVar7 + -1;
      pEVar4->zbMethod = '\x02';
      pEVar4->zbWrite = '\0';
      pEVar4->alphaTest = '\0';
      pEVar4->alphaMethod = '\x05';
      pEVar4->alphaThreshold = '@';
      pEVar2 = _ps2gfx.m_pLastDisplayDL;
      pEVar4 = pEVar4 + 1;
    } while (-1 < iVar7);
    *(undefined4 *)this->m_testDL = 0;
    *(undefined4 *)((int)this->m_testDL + 4) = 0;
    *(undefined4 *)((int)this->m_testDL + 8) = 0;
    *(undefined4 *)((int)this->m_testDL + 0xc) = 0;
    *(ulong *)this->m_testDL = *(ulong *)this->m_testDL & 0xfffffffffff8000 | 0x1000000000008005;
    *(ulong *)((int)this->m_testDL + 8) =
         *(ulong *)((int)this->m_testDL + 8) & 0xfffffffffffffff0 | 0xe;
    uVar9 = *(undefined4 *)&(pEVar2->draw1).zbuf1.field_0x4;
    uVar10 = *(undefined4 *)&(pEVar2->draw1).zbuf1addr;
    uVar11 = *(undefined4 *)((int)&(pEVar2->draw1).zbuf1addr + 4);
    *(undefined4 *)(this->m_testDL + 1) = *(undefined4 *)&(pEVar2->draw1).zbuf1;
    *(undefined4 *)((int)this->m_testDL + 0x14) = uVar9;
    *(undefined4 *)((int)this->m_testDL + 0x18) = uVar10;
    *(undefined4 *)((int)this->m_testDL + 0x1c) = uVar11;
    uVar9 = *(undefined4 *)&(pEVar2->draw2).zbuf2.field_0x4;
    lVar1 = (pEVar2->draw2).zbuf2addr;
    *(undefined4 *)(this->m_testDL + 2) = *(undefined4 *)&(pEVar2->draw2).zbuf2;
    *(undefined4 *)((int)this->m_testDL + 0x24) = uVar9;
    *(int *)((int)this->m_testDL + 0x28) = (int)lVar1;
    *(int *)((int)this->m_testDL + 0x2c) = (int)((ulong)lVar1 >> 0x20);
    uVar9 = *(undefined4 *)&(pEVar2->draw1).test1.field_0x4;
    uVar10 = *(undefined4 *)&(pEVar2->draw1).test1addr;
    uVar11 = *(undefined4 *)((int)&(pEVar2->draw1).test1addr + 4);
    *(undefined4 *)(this->m_testDL + 3) = *(undefined4 *)&(pEVar2->draw1).test1;
    *(undefined4 *)((int)this->m_testDL + 0x34) = uVar9;
    *(undefined4 *)((int)this->m_testDL + 0x38) = uVar10;
    *(undefined4 *)((int)this->m_testDL + 0x3c) = uVar11;
    uVar9 = *(undefined4 *)&(pEVar2->draw2).test2.field_0x4;
    lVar1 = (pEVar2->draw2).test2addr;
    *(undefined4 *)(this->m_testDL + 4) = *(undefined4 *)&(pEVar2->draw2).test2;
    *(undefined4 *)((int)this->m_testDL + 0x44) = uVar9;
    *(int *)((int)this->m_testDL + 0x48) = (int)lVar1;
    *(int *)((int)this->m_testDL + 0x4c) = (int)((ulong)lVar1 >> 0x20);
    uVar9 = *(undefined4 *)&pEVar2->signal;
    uVar10 = *(undefined4 *)((int)&pEVar2->signal + 4);
    uVar11 = *(undefined4 *)&pEVar2->sigAddr;
    uVar12 = *(undefined4 *)((int)&pEVar2->sigAddr + 4);
    *(undefined4 *)this->m_combineDL = 0;
    *(undefined4 *)((int)this->m_combineDL + 4) = 0;
    *(undefined4 *)((int)this->m_combineDL + 8) = 0;
    *(undefined4 *)((int)this->m_combineDL + 0xc) = 0;
    *(undefined4 *)(this->m_testDL + 5) = uVar9;
    *(undefined4 *)((int)this->m_testDL + 0x54) = uVar10;
    *(undefined4 *)((int)this->m_testDL + 0x58) = uVar11;
    *(undefined4 *)((int)this->m_testDL + 0x5c) = uVar12;
    *(ulong *)this->m_combineDL =
         *(ulong *)this->m_combineDL & 0xfffffffffff8000 | 0x1000000000008002;
    *(ulong *)((int)this->m_combineDL + 8) =
         *(ulong *)((int)this->m_combineDL + 8) & 0xfffffffffffffff0 | 0xe;
    *(undefined4 *)this->m_blendDL = 0;
    *(undefined4 *)((int)this->m_blendDL + 4) = 0;
    *(undefined4 *)((int)this->m_blendDL + 8) = 0;
    *(undefined4 *)((int)this->m_blendDL + 0xc) = 0;
    *(undefined8 *)((int)this->m_combineDL + 0x18) = 6;
    uVar6 = *(ulong *)this->m_blendDL;
    *(undefined8 *)(this->m_combineDL + 1) = 0;
    *(undefined8 *)(this->m_combineDL + 2) = 0;
    *(undefined8 *)((int)this->m_combineDL + 0x28) = 0x60;
    *(ulong *)this->m_blendDL = uVar6 & 0xfffffffffff8000 | 0x1000000000008002;
    *(ulong *)((int)this->m_blendDL + 8) =
         *(ulong *)((int)this->m_blendDL + 8) & 0xfffffffffffffff0 | 0xe;
    *(undefined8 *)(this->m_blendDL + 2) = 0;
    *(undefined8 *)((int)this->m_blendDL + 0x28) = 0x60;
    *(undefined4 *)&this->m_testRegistersNeedSetting = 1;
    InitGE__12EPs2Renderer(this);
    bVar3 = Create__9EMsgQueueiPUi(&this->m_commandQueue,0x400,(uint *)0x0);
    if (bVar3) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
      (this->field0_0x0).field0_0x0.m_szName = "Renderer";
                    /* end of inlined section */
      iVar5 = 0;
      iVar7 = 0;
      do {
        Create__10ESemaphoreii
                  ((ESemaphore *)((int)&_locks[0].ringBufferSemaphore.field0_0x0.__vtable + iVar7),
                   0x800,0x800);
        *(undefined4 *)((int)&_locks[0].curLocked + iVar7) = 0;
        iVar5 = iVar5 + 1;
        *(undefined4 *)((int)&_locks[0].curUnlocked + iVar7) = 0;
        puVar8 = (undefined4 *)((int)_locks[0].pLockedTextures + iVar7 + 0x1ffc);
        *(undefined4 *)((int)&_locks[0].totalLocked + iVar7) = 0;
        iVar13 = 0x7ff;
        *(undefined4 *)((int)&_locks[0].totalUnlocked + iVar7) = 0;
        do {
          *puVar8 = 0;
          iVar13 = iVar13 + -1;
          puVar8 = puVar8 + -1;
        } while (-1 < iVar13);
        iVar7 = iVar5 * 0x2024;
      } while (iVar5 < 2);
      bVar3 = Create__7EThreadiiPv((EThread *)this,0x5d,0x4000,(void *)0x0);
      if (!bVar3) {
        return false;
      }
      Start__7EThread((EThread *)this);
      return true;
    }
  }
  return false;
}

void EPs2Renderer::Queue(ESchedCommand *pCmd) {
  Send__9EMsgQueueUib(&this->m_commandQueue,(uint)pCmd,true);
  return;
}

void EPs2Renderer::Main() {
	u32 msg;
	ESchedCommand *pCmd;
	EDL *pDL;
	EDL *this;
	EDL *this;
	
  int iVar1;
  EThread__vtable *pEVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar5;
  uint msg;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  do {
    while( true ) {
      Receive__9EMsgQueuePUib(&this->m_commandQueue,&msg,true);
      if (msg != 0) break;
      _vertsperframe = this->m_nTotalVerts;
      _rendtime = this->m_totalTime;
      *(undefined4 *)&this->m_testRegistersNeedSetting = 1;
      this->m_nTotalVerts = 0;
      _getime = this->m_geTime;
      this->m_totalTime = 0.0;
      _nVUInterrupts = this->m_nVUInterrupts;
      _nMPGLoads = this->m_nMPGLoads;
      _nGSInterrupts = this->m_nGSInterrupts;
      _nVramLoadBytes = this->m_nVramLoadBytes;
      _nTextureFaults = this->m_nTextureFaults;
      this->m_geTime = 0.0;
      this->m_nVUInterrupts = 0;
      this->m_nGSInterrupts = 0;
      this->m_nVramLoadBytes = 0;
      this->m_nTextureFaults = 0;
      this->m_nMPGLoads = 0;
    }
    Start__6EClock(&this->m_rendClock);
    uVar3 = msg;
    this->m_currentFrameBuffer = *(uint *)(msg + 0xc) & 3;
    iVar1 = *(int *)(msg + 4);
                    /* inlined from e_dl.h */
                    /* end of inlined section */
    this->m_nTotalVerts = this->m_nTotalVerts + *(int *)(iVar1 + 0x3c);
    BeginFrame__12EPs2Renderer(this);
    iVar4 = *(int *)(iVar1 + 0x48);
    if (iVar4 == -1) {
      iVar4 = *(int *)(iVar1 + 0x50);
    }
    else if (DAT_1100cdc0 == iVar4) {
      iVar4 = *(int *)(iVar1 + 0x50);
    }
    else {
      LoadMPG__4EVU1i(&_vu1,iVar4);
      this->m_nMPGLoads = this->m_nMPGLoads + 1;
      iVar4 = *(int *)(iVar1 + 0x50);
    }
    this->m_nMPGLoads = this->m_nMPGLoads + iVar4;
    Execute__12EPs2RendererP8EDLEntry(this,*(EDLEntry **)(iVar1 + 0x30));
    EndFrame__12EPs2Renderer(this);
    pEVar2 = (_pSched->field0_0x0).__vtable;
    (**(code **)(pEVar2 + 7))
              ((int)&(_pSched->field0_0x0).m_threadId + (int)*(short *)&pEVar2[6].Main,uVar3);
    fVar5 = GetSec__6EClock(&this->m_rendClock);
    this->m_totalTime = this->m_totalTime + fVar5;
  } while( true );
}

void EPs2Renderer::VerifyMicrocodeConstants() {
  return;
}

void EPs2Renderer::InitGE() {
	float clipRatio;
	int i;
	EMat4 mIds[4];
	int cl;
	
  bool bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  EMat4 *pEVar4;
  int iVar5;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  EMat4 mIds [4];
  
  iVar5 = 1;
  geResetInputBuffers__Fv();
  VerifyMicrocodeConstants__12EPs2Renderer(this);
  Id__5EMat4((EMat4 *)&DAT_1100c2e0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100c7b0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100c7b4 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100c7bc = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100c7b8 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff9c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff98 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff94 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff90 = 0;
                    /* end of inlined section */
  DAT_1100c698 = 0x20;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  DAT_1100c6e8 = 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  DAT_1100c69c = 0xbf800000;
  DAT_1100c6a8 = 0x10;
  DAT_1100c6b8 = 8;
  puVar2 = &DAT_1100ff00;
  DAT_1100c6c8 = 4;
  DAT_1100c6d8 = 2;
  DAT_1100c6bc = 0xbf800000;
  DAT_1100c6cc = 0x3f800000;
  DAT_1100c6dc = 0xbf800000;
  DAT_1100c6ec = 0x3f800000;
  DAT_1100c6ac = 0x3f800000;
  DAT_1100c690 = 2;
  DAT_1100c6a0 = 2;
  DAT_1100c6b0 = 1;
  DAT_1100c6c0 = 1;
  DAT_1100c6d0 = 0;
  DAT_1100c6e0 = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100c700 = 0;
  DAT_1100c704 = 0;
  DAT_1100c708 = 0;
  DAT_1100c70c = 0;
  DAT_1100c6f0 = 0x3f800000;
  DAT_1100c6f4 = 0x3f800000;
  DAT_1100c6f8 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100c6fc = 0x3f800000;
  do {
    *puVar2 = 0;
    iVar5 = iVar5 + -1;
    puVar2[1] = 0;
    puVar2[2] = 0x43800000;
    puVar2[3] = 0x43800000;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar5);
  DAT_1100ff20 = 0;
  __as__5EMat4f((EMat4 *)&DAT_1100c750,0.0);
  __as__5EMat4f((EMat4 *)&DAT_1100c710,0.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff3c = 0;
                    /* end of inlined section */
  puVar2 = &DAT_1100ff40;
  DAT_1100c74c = 0x3f800000;
  iVar5 = 2;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff30 = 0;
  DAT_1100ff34 = 0;
  DAT_1100ff38 = 0;
  do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *puVar2 = 0;
                    /* end of inlined section */
    iVar5 = iVar5 + -1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
                    /* end of inlined section */
    puVar2 = puVar2 + 4;
  } while (-1 < iVar5);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff7c = 0x3f800000;
  DAT_1100ff70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff74 = 0x3f800000;
                    /* end of inlined section */
  pEVar4 = (EMat4 *)&DAT_1100c020;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff78 = 0x3f800000;
                    /* end of inlined section */
  iVar5 = 3;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  DAT_1100ff8c = 0x3f800000;
  DAT_1100ff80 = 0x3f800000;
  DAT_1100ff84 = 0x3f800000;
  DAT_1100ff88 = 0x3f800000;
  do {
                    /* end of inlined section */
    iVar5 = iVar5 + -1;
    Id__5EMat4(pEVar4);
    pEVar4 = pEVar4 + 2;
  } while (-1 < iVar5);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_170 = 0x3c010204;
                    /* end of inlined section */
  iVar5 = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_168 = 0x3c010204;
  local_16c = 0x3c010204;
  Scale__5EMat4RC5EVec3((EMat4 *)&DAT_1100c320,(EVec3 *)&local_170);
                    /* end of inlined section */
  Id__5EMat4((EMat4 *)&DAT_1100c260);
  Id__5EMat4((EMat4 *)&DAT_1100cd80);
  Id__5EMat4((EMat4 *)&DAT_1100c3e0);
  DAT_1100c664 = &DAT_1100c4b0;
  DAT_1100c674 = &DAT_1100c420;
  DAT_1100c66c = &DAT_1100c540;
  DAT_1100c670 = &DAT_1100c5d0;
  puVar3 = &DAT_1100eaf0;
  DAT_1100c660 = &DAT_1100c420;
  puVar2 = &DAT_1100e960;
  DAT_1100c668 = &DAT_1100c540;
  do {
    puVar2[0x2b1] = puVar3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar3 = puVar3 + 0xad0;
    *(undefined8 *)(puVar2 + 6) = 0;
    iVar5 = iVar5 + -1;
    *(undefined8 *)(puVar2 + 4) = 0x1000000000000001;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 0x2b4;
  } while (-1 < iVar5);
  DAT_1100c000 = 0x4000000000008000;
  DAT_1100c010 = 0x4100000000008000;
  DAT_1100c018 = 0x412f;
  DAT_1100c008 = 0x41f2;
  Id__5EMat4((EMat4 *)&DAT_1100c7c0);
  DAT_1100dbd0 = 0x12345678;
  DAT_1100cd38 = 0x3f800000;
  DAT_1100cd3c = 0x42800000;
  DAT_1100fef0 = 0x12345678;
  DAT_1100f420 = 0x12345678;
  DAT_1100e950 = 0x12345678;
  DAT_1100cd30 = 0x3f800000;
  DAT_1100cd34 = 0x42800000;
  DAT_1100cdd0 = (undefined4)DAT_1100e970;
  DAT_1100cdd4 = (undefined4)((ulong)DAT_1100e970 >> 0x20);
  DAT_1100cdd8 = (undefined4)DAT_1100e978;
  DAT_1100cddc = (undefined4)((ulong)DAT_1100e978 >> 0x20);
  DAT_1100cde0 = (undefined4)DAT_1100e980;
  DAT_1100cde4 = (undefined4)((ulong)DAT_1100e980 >> 0x20);
  DAT_1100cde8 = (undefined4)DAT_1100e988;
  DAT_1100cdec = (undefined4)((ulong)DAT_1100e988 >> 0x20);
  DAT_1100cdf0 = (undefined4)DAT_1100c000;
  DAT_1100cdf4 = (undefined4)((ulong)DAT_1100c000 >> 0x20);
  DAT_1100cdf8 = (undefined4)DAT_1100c008;
  DAT_1100cdfc = DAT_1100c008._4_4_;
  DAT_1100cd2c = 0;
  DAT_1100cd28 = 0;
  DAT_1100cd24 = 0;
  DAT_1100cd20 = 0;
  DAT_1100cdc4 = 0;
  DAT_1100c688 = 0;
  DAT_1100cdc8 = 0;
  DAT_1100ce5c = 0x3440;
  DAT_1100ce00 = 0x3000000000008000;
  DAT_1100ce08 = 0x412;
  DAT_1100cdc0 = 0xffffffff;
  DAT_1100c684 = 0xeff;
  DAT_1100ce58 = 0x8000;
  geSwapOutputBuffers__Fv();
                    /* end of inlined section */
  iVar5 = 2;
  do {
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  iVar5 = 3;
  pEVar4 = mIds;
  do {
    iVar5 = iVar5 + -1;
    Id__5EMat4(pEVar4);
    pEVar4 = pEVar4 + 1;
  } while (-1 < iVar5);
  geUploadModelMatrices__FPC5EMat4ii(mIds,0,4);
  geRecalcLookatTextureXForm__Fv();
  geRecalcModelMatrixData__Fii(0,4);
  UpdateGELightData__12EPs2Renderer(this);
  geRecalcModelMatrixData__Fii(0,4);
  geResetInputBuffers__Fv();
  return;
}

void EPs2Renderer::Execute(EDLEntry *pDLE) {
	EDLEntry *pCurrentEntry;
	u32 command;
	EDLEntry *pe;
	
  byte bVar1;
  EDLEntry *pEVar2;
  
  this->m_pc = pDLE;
  *(undefined4 *)&this->m_done = 0;
  pEVar2 = this->m_pc;
  while( true ) {
    bVar1 = *(byte *)&pEVar2->align_data;
    this->m_pc = pEVar2 + 1;
    (*(code *)_12EPs2Renderer_m_jumpTable[bVar1])(this);
    if (*(int *)&this->m_done != 0) break;
    pEVar2 = this->m_pc;
  }
  return;
}

void EPs2Renderer::UpdateGELightData() {
  geRecalcLightData__Fv();
  return;
}

void EPs2Renderer::SyncDMA(void *pDest, void *pSource, u32 size) {
  UploadData__4EVU1PvT1i(&_vu1,pDest,pSource,size);
  return;
}

void EPs2Renderer::TriStrip(EPs2Renderer *pThis, EDLEntry *pe) {
	int nVerts;
	PFNCPUGECommand pfnCommand;
	unsigned int primModes[2];
	EGEVert *verts;
	int thisLoad;
	int thisAdvance;
	EPs2Renderer *this;
	
  bool bVar1;
  void *pSource;
  code **ppcVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  uint primModes [2];
  
  Start__6EClock(&pThis->m_geClock);
  uVar5 = (uint)*(ushort *)((int)&pe->align_data + 2);
  pcVar4 = (code *)(DAT_1100c7a4 | 4);
  pcVar3 = (code *)(DAT_1100c7a8 | 4);
  bVar1 = uVar5 < 0x29;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    ppcVar2 = DAT_1100c680;
    uVar7 = uVar5;
    uVar6 = uVar5;
    if (!bVar1) {
      uVar7 = 0x28;
      uVar6 = 0x26;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    uVar5 = uVar5 - uVar6;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,uVar7 * 0x50);
    *ppcVar2 = geTriStrip__Fv;
    ppcVar2[1] = (code *)(uVar7 - 2);
    ppcVar2[2] = pcVar4;
    ppcVar2[3] = pcVar3;
    geTriStrip__Fv();
    bVar1 = (int)uVar5 < 0x29;
    pSource = (void *)(uVar6 * 0x50 + (int)pSource);
  } while (uVar5 != 0);
  fVar8 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar8;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::ResetPrimModes() {
  DAT_1100c7a4 = DAT_1100c7a4 & 0xfffffff8;
  DAT_1100c7a8 = DAT_1100c7a8 & 0xfffffff8;
  return;
}

void EPs2Renderer::TriFan(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	EGEVert *pFirstVert;
	int nVerts;
	unsigned int primModes[2];
	EPs2GEInputBuffer *pInputBuffer;
	EPs2Renderer *this;
	int thisLoad;
	int thisAdvance;
	EPs2Renderer *this;
	
  ushort uVar1;
  void *pSource;
  code **ppcVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pSource_00;
  uint primModes [2];
  
  ppcVar2 = DAT_1100c680;
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  pSource = *(void **)((int)&pe->align_data + 4);
  pcVar3 = (code *)(DAT_1100c7a4 | 3);
  pcVar4 = (code *)(DAT_1100c7a8 | 3);
  uVar5 = (uint)uVar1;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
  if (uVar1 < 0x2b) {
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,uVar5 * 0x50);
    ppcVar2[1] = (code *)(uVar5 - 2);
    *ppcVar2 = geTriFan__Fv;
    ppcVar2[2] = pcVar3;
    ppcVar2[3] = pcVar4;
    geTriFan__Fv();
  }
  else {
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,0xd20);
    ppcVar2[1] = (code *)0x28;
    *ppcVar2 = geTriFan__Fv;
    iVar6 = uVar5 - 0x29;
    ppcVar2[2] = pcVar3;
    ppcVar2[3] = pcVar4;
    geTriFan__Fv();
    pSource_00 = (void *)((int)pSource + 0xcd0);
    do {
      ppcVar2 = DAT_1100c680;
      iVar7 = iVar6;
      iVar8 = iVar6;
      if (0x29 < iVar6) {
        iVar7 = 0x28;
        iVar8 = 0x29;
      }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
      iVar6 = iVar6 - iVar7;
      SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,0x50);
      SyncDMA__12EPs2RendererPvT1Ui(pThis,ppcVar2 + 0x28,pSource_00,iVar8 * 0x50);
      *ppcVar2 = geTriStrip__Fv;
      ppcVar2[1] = (code *)(iVar8 + -1);
      ppcVar2[2] = pcVar3;
      ppcVar2[3] = pcVar4;
      geTriFan__Fv();
      pSource_00 = (void *)(iVar7 * 0x50 + (int)pSource_00);
    } while (iVar6 != 0);
    ResetPrimModes__12EPs2Renderer();
  }
  return;
}

void EPs2Renderer::TriList(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	int nVerts;
	unsigned int primModes[2];
	int thisLoad;
	EPs2Renderer *this;
	
  ushort uVar1;
  bool bVar2;
  void *pSource;
  code **ppcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint primModes [2];
  
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  uVar7 = (uint)uVar1;
  pcVar5 = (code *)(DAT_1100c7a4 | 3);
  pcVar4 = (code *)(DAT_1100c7a8 | 3);
  bVar2 = uVar1 < 0x2b;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    ppcVar3 = DAT_1100c680;
    uVar6 = 0x2a;
    if (bVar2) {
      uVar6 = uVar7;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    uVar7 = uVar7 - uVar6;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,uVar6 * 0x50);
    *ppcVar3 = geTriList__Fv;
    ppcVar3[1] = (code *)((int)uVar6 / 3);
    ppcVar3[2] = pcVar5;
    ppcVar3[3] = pcVar4;
    geTriList__Fv();
    bVar2 = (int)uVar7 < 0x2b;
    pSource = (void *)((int)pSource + uVar6 * 0x50);
  } while (uVar7 != 0);
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::QuadList(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	int nVerts;
	unsigned int primModes[2];
	int thisLoad;
	EPs2Renderer *this;
	
  ushort uVar1;
  bool bVar2;
  void *pSource;
  code **ppcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint primModes [2];
  
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  uVar8 = (uint)uVar1;
  pcVar5 = (code *)(DAT_1100c7a4 | 3);
  pcVar4 = (code *)(DAT_1100c7a8 | 3);
  bVar2 = uVar1 < 0x29;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    ppcVar3 = DAT_1100c680;
    uVar7 = 0x28;
    if (bVar2) {
      uVar7 = uVar8;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    uVar8 = uVar8 - uVar7;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,uVar7 * 0x50);
    uVar6 = uVar7 + 3;
    if (-1 < (int)uVar7) {
      uVar6 = uVar7;
    }
    *ppcVar3 = geQuadList__Fv;
    ppcVar3[1] = (code *)((int)uVar6 >> 2);
    ppcVar3[2] = pcVar5;
    ppcVar3[3] = pcVar4;
    geQuadList__Fv();
    bVar2 = (int)uVar8 < 0x29;
    pSource = (void *)((int)pSource + uVar7 * 0x50);
  } while (uVar8 != 0);
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::LineList(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	int nVerts;
	unsigned int primModes[2];
	int thisLoad;
	EPs2Renderer *this;
	
  ushort uVar1;
  bool bVar2;
  void *pSource;
  code **ppcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint primModes [2];
  
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  uVar7 = (uint)uVar1;
  pcVar5 = (code *)(DAT_1100c7a4 | 1);
  pcVar4 = (code *)(DAT_1100c7a8 | 1);
  bVar2 = uVar1 < 0x2b;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    ppcVar3 = DAT_1100c680;
    uVar6 = 0x2a;
    if (bVar2) {
      uVar6 = uVar7;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    uVar7 = uVar7 - uVar6;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,uVar6 * 0x50);
    *ppcVar3 = geLineList__Fv;
    ppcVar3[1] = (code *)((int)uVar6 / 2);
    ppcVar3[2] = pcVar5;
    ppcVar3[3] = pcVar4;
    geLineList__Fv();
    bVar2 = (int)uVar7 < 0x2b;
    pSource = (void *)((int)pSource + uVar6 * 0x50);
  } while (uVar7 != 0);
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::LineStrip(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	int nVerts;
	unsigned int primModes[2];
	int thisLoad;
	int thisAdvance;
	EPs2Renderer *this;
	
  bool bVar1;
  void *pSource;
  code **ppcVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint primModes [2];
  
  uVar6 = (uint)*(ushort *)((int)&pe->align_data + 2);
  pcVar4 = (code *)(DAT_1100c7a4 | 1);
  pcVar3 = (code *)(DAT_1100c7a8 | 1);
  bVar1 = uVar6 < 0x2b;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    ppcVar2 = DAT_1100c680;
    uVar7 = uVar6;
    uVar5 = uVar6;
    if (!bVar1) {
      uVar7 = 0x2a;
      uVar5 = 0x29;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    uVar6 = uVar6 - uVar5;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,uVar7 * 0x50);
    *ppcVar2 = geLineStrip__Fv;
    ppcVar2[1] = (code *)(uVar7 - 1);
    ppcVar2[2] = pcVar4;
    ppcVar2[3] = pcVar3;
    geLineStrip__Fv();
    bVar1 = (int)uVar6 < 0x2b;
    pSource = (void *)(uVar5 * 0x50 + (int)pSource);
  } while (uVar6 != 0);
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::PointList(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	int nVerts;
	unsigned int primModes[2];
	int thisLoad;
	EPs2Renderer *this;
	
  ushort uVar1;
  bool bVar2;
  void *pSource;
  code **ppcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  uint primModes [2];
  
  pcVar5 = DAT_1100c7a8;
  pcVar4 = DAT_1100c7a4;
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  pcVar7 = (code *)(uint)uVar1;
  bVar2 = uVar1 < 0x2b;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    ppcVar3 = DAT_1100c680;
    pcVar6 = (code *)0x2a;
    if (bVar2) {
      pcVar6 = pcVar7;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    pcVar7 = pcVar7 + -(int)pcVar6;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,(int)pcVar6 * 0x50);
    *ppcVar3 = gePointList__Fv;
    ppcVar3[1] = pcVar6;
    ppcVar3[2] = pcVar4;
    ppcVar3[3] = pcVar5;
    gePointList__Fv();
    bVar2 = (int)pcVar7 < 0x2b;
    pSource = (void *)((int)pSource + (int)pcVar6 * 0x50);
  } while (pcVar7 != (code *)0x0);
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::SpriteList(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	int nVerts;
	unsigned int primModes[2];
	int thisLoad;
	EPs2Renderer *this;
	
  ushort uVar1;
  bool bVar2;
  void *pSource;
  code **ppcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint primModes [2];
  
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  uVar7 = (uint)uVar1;
  pcVar5 = (code *)(DAT_1100c7a4 | 6);
  pcVar4 = (code *)(DAT_1100c7a8 | 6);
  bVar2 = uVar1 < 0x2b;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    ppcVar3 = DAT_1100c680;
    uVar6 = 0x2a;
    if (bVar2) {
      uVar6 = uVar7;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    uVar7 = uVar7 - uVar6;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,DAT_1100c680 + 0x14,pSource,uVar6 * 0x50);
    *ppcVar3 = geSpriteList__Fv;
    ppcVar3[1] = (code *)((int)uVar6 / 2);
    ppcVar3[2] = pcVar5;
    ppcVar3[3] = pcVar4;
    geSpriteList__Fv();
    bVar2 = (int)uVar7 < 0x2b;
    pSource = (void *)((int)pSource + uVar6 * 0x50);
  } while (uVar7 != 0);
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::DisplayList(EPs2Renderer *pThis, EDLEntry *pe) {
  int iVar1;
  
  iVar1 = pThis->m_callStackPos;
  pThis->m_callStack[iVar1] = pThis->m_pc;
  pThis->m_callStackPos = iVar1 + 1;
  pThis->m_pc = *(EDLEntry **)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::Goto(EPs2Renderer *pThis, EDLEntry *pe) {
  pThis->m_pc = *(EDLEntry **)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::End(EPs2Renderer *pThis, EDLEntry *pe) {
  int iVar1;
  
  iVar1 = pThis->m_callStackPos;
  if (iVar1 == 0) {
    *(undefined4 *)&pThis->m_done = 1;
  }
  else {
    pThis->m_callStackPos = iVar1 + -1;
    pThis->m_pc = pThis->m_callStack[iVar1 + -1];
  }
  geResetInputBuffers__Fv();
  return;
}

void EPs2Renderer::SaveState(EPs2Renderer *pThis, EDLEntry *pe) {
	EPs2RenderState *pState;
	int p;
	
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  EPs2TestState *pEVar8;
  uint *puVar9;
  EPs2TestState *pEVar10;
  int iVar11;
  
  iVar3 = pThis->m_stateStackPos;
  pEVar10 = pThis->m_test;
  puVar9 = &DAT_1100c7a4;
  iVar11 = 1;
  pThis->m_stateStackPos = iVar3 + 1;
  pThis->m_stateStack[iVar3].geomModes = DAT_1100c7a0;
  pEVar8 = &pThis->m_stateStack[iVar3].p[0].test;
  do {
    uVar4 = *puVar9;
    iVar11 = iVar11 + -1;
    puVar9 = puVar9 + 1;
    *(uint *)((int)(pEVar8 + -1) + 2) = uVar4;
    uVar5 = (uint)&pEVar10->alphaTest & 3;
    uVar6 = (uint)pEVar10 & 3;
    uVar4 = (*(int *)(&pEVar10->alphaTest + -uVar5) << (3 - uVar5) * 8 |
            uVar4 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar6) * 8 |
            *(uint *)((int)pEVar10 - uVar6) >> uVar6 * 8;
    uVar1 = pEVar10->alphaMethod;
    uVar2 = pEVar10->alphaThreshold;
    uVar5 = (uint)&pEVar8->alphaTest & 3;
    puVar7 = &pEVar8->alphaTest + -uVar5;
    *(uint *)puVar7 = *(uint *)puVar7 & -1 << (uVar5 + 1) * 8 | uVar4 >> (3 - uVar5) * 8;
    uVar5 = (uint)pEVar8 & 3;
    *(uint *)((int)pEVar8 - uVar5) =
         *(uint *)((int)pEVar8 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar4 << uVar5 * 8;
    pEVar8->alphaMethod = uVar1;
    pEVar8->alphaThreshold = uVar2;
    pEVar8 = pEVar8 + 2;
    pEVar10 = pEVar10 + 1;
  } while (-1 < iVar11);
  return;
}

void EPs2Renderer::RestoreState(EPs2Renderer *pThis, EDLEntry *pe) {
	EPs2RenderState *pState;
	int p;
	
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  EPs2TestState *pEVar8;
  uint *puVar9;
  EPs2TestState *pEVar10;
  int iVar11;
  
  pEVar10 = pThis->m_test;
  puVar9 = &DAT_1100c7a4;
  iVar3 = pThis->m_stateStackPos;
  iVar11 = 1;
  pThis->m_stateStackPos = iVar3 + -1;
  DAT_1100c7a0 = pThis->m_stateStack[iVar3 + -1].geomModes;
  pEVar8 = &pThis->m_stateStack[iVar3 + -1].p[0].test;
  do {
    uVar4 = *(uint *)((int)(pEVar8 + -1) + 2);
    iVar11 = iVar11 + -1;
    *puVar9 = uVar4;
    uVar5 = (uint)&pEVar8->alphaTest & 3;
    uVar6 = (uint)pEVar8 & 3;
    uVar4 = (*(int *)(&pEVar8->alphaTest + -uVar5) << (3 - uVar5) * 8 |
            uVar4 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar6) * 8 |
            *(uint *)((int)pEVar8 - uVar6) >> uVar6 * 8;
    uVar1 = pEVar8->alphaMethod;
    uVar2 = pEVar8->alphaThreshold;
    uVar5 = (uint)&pEVar10->alphaTest & 3;
    puVar7 = &pEVar10->alphaTest + -uVar5;
    *(uint *)puVar7 = *(uint *)puVar7 & -1 << (uVar5 + 1) * 8 | uVar4 >> (3 - uVar5) * 8;
    uVar5 = (uint)pEVar10 & 3;
    *(uint *)((int)pEVar10 - uVar5) =
         *(uint *)((int)pEVar10 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar4 << uVar5 * 8;
    pEVar10->alphaMethod = uVar1;
    puVar9 = puVar9 + 1;
    pEVar10->alphaThreshold = uVar2;
    pEVar10 = pEVar10 + 1;
    pEVar8 = pEVar8 + 2;
  } while (-1 < iVar11);
  SetTestRegisters__12EPs2Renderer(pThis);
  return;
}

void EPs2Renderer::Viewport(EPs2Renderer *pThis, EDLEntry *pe) {
	EViewport *pVp;
	
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)&pe->align_data + 4);
  DAT_1100c6f0 = *puVar1;
  DAT_1100c6f4 = puVar1[1];
  DAT_1100c6f8 = puVar1[2];
  DAT_1100c6fc = puVar1[3];
  DAT_1100c700 = puVar1[4];
  DAT_1100c704 = puVar1[5];
  DAT_1100c708 = puVar1[6];
  DAT_1100c70c = puVar1[7];
  geRecalcCombinedView__Fv();
  return;
}

void EPs2Renderer::ClipRatio(EPs2Renderer *pThis, EDLEntry *pe) {
  DAT_1100c6cc = *(float *)((int)&pe->align_data + 4);
  DAT_1100ff90 = 0;
  DAT_1100ff94 = 0;
  DAT_1100c7b0 = 1.0 / DAT_1100c6cc;
  DAT_1100c7b4 = 1.0 / DAT_1100c6cc;
  DAT_1100c6bc = -DAT_1100c6cc;
  DAT_1100c6dc = -DAT_1100c6cc;
  DAT_1100c7a0 = DAT_1100c7a0 & 0xffffdfff;
  DAT_1100c6ec = DAT_1100c6cc;
  return;
}

void EPs2Renderer::ClipRect(EPs2Renderer *pThis, EDLEntry *pe) {
	EFloatRect rect;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TRect_float_ rect;
  
  pThis->m_pc = pThis->m_pc + 2;
  fVar3 = *(float *)((int)&pe[1].align_data + 4);
  fVar4 = *(float *)((int)&pe[2].align_data + 4);
                    /* inlined from /eor/src2/common/math/e_rect.h */
  fVar5 = fVar4 - fVar3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  fVar2 = *(float *)&pe[2].align_data - *(float *)&pe[1].align_data;
                    /* end of inlined section */
  fVar1 = (*(float *)&pe[1].align_data + *(float *)&pe[2].align_data) * 0.5 - 0.5;
  fVar3 = ((fVar3 + fVar4) * 0.5 - 0.5) * -2.0;
  fVar1 = fVar1 + fVar1;
  DAT_1100c7b4 = 1.0 / fVar5;
  DAT_1100c7b0 = 1.0 / fVar2;
  DAT_1100ff94 = -fVar3 * (1.0 / fVar5);
  DAT_1100ff90 = -fVar1 * (1.0 / fVar2);
  DAT_1100c6dc = fVar1 - fVar2;
  DAT_1100c6ec = fVar2 + fVar1;
  DAT_1100c6bc = fVar3 - fVar5;
  DAT_1100c7a0 = DAT_1100c7a0 | 0x2000;
  DAT_1100c6cc = fVar5 + fVar3;
  return;
}

void EPs2Renderer::Scissor(EPs2Renderer *pThis, EDLEntry *pe) {
  return;
}

void EPs2Renderer::ModelMatrices(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 pos;
	u32 count;
	
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((int)&pe->align_data + 1);
  bVar2 = *(byte *)((int)&pe->align_data + 2);
  geUploadModelMatrices__FPC5EMat4ii(*(EMat4 **)((int)&pe->align_data + 4),(uint)bVar1,(uint)bVar2);
  geRecalcModelMatrixData__Fii((uint)bVar1,(uint)bVar2);
  return;
}

void RecalcMetersPerPixel() {
	EMat4 mEye;
	EVec3 vPoint;
	EVec4 vWorld;
	EVec4 vScreen;
	float xLength;
	float xWidth;
	float yHeight;
	float pixPerMeterX;
	float aspect;
	float *rows[4];
	EGraphics *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  EMat4 mEye;
  EVec3 vPoint;
  EVec4 vWorld;
  EVec4 vScreen;
  
  vPoint.field0_0x0.d[0] = (float)&mEye;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  __as__5EMat4RC5EMat4(&mEye,(EMat4 *)&DAT_1100cd80);
  vPoint.field0_0x0.d[1] = (float)((int)&mEye.field0_0x0 + 0x10);
  vPoint.field0_0x0.d[2] = (float)((int)&mEye.field0_0x0 + 0x20);
  MatrixInvert__FPCPfi((float **)&vPoint,4);
  fVar3 = mEye.field0_0x0.d[3][0] + mEye.field0_0x0.d[2][0] * -256.0 + mEye.field0_0x0.d[0][0];
  fVar2 = mEye.field0_0x0.d[3][1] + mEye.field0_0x0.d[2][1] * -256.0 + mEye.field0_0x0.d[0][1];
  fVar1 = mEye.field0_0x0.d[3][2] + mEye.field0_0x0.d[2][2] * -256.0 + mEye.field0_0x0.d[0][2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vScreen.field0_0x0.d[3] =
       fVar3 * DAT_1100c2ec + fVar2 * DAT_1100c2fc + fVar1 * DAT_1100c30c + DAT_1100c31c * 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  if (vScreen.field0_0x0.d[3] == 0.0) {
                    /* end of inlined section */
    vScreen.field0_0x0.d[3] = 1.0;
  }
                    /* end of inlined section */
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
  fVar1 = (float)_pGfx->m_xscreen *
          ((fVar3 * DAT_1100c2e0 + fVar2 * DAT_1100c2f0 + fVar1 * DAT_1100c300 + DAT_1100c310 * 1.0)
          / vScreen.field0_0x0.d[3]) * 0.5;
  DAT_1100cd30 = fVar1 * fVar1 * ((float)_pGfx->m_yscreen / (float)_pGfx->m_xscreen);
  return;
}

void EPs2Renderer::ViewMatrix(EPs2Renderer *pThis, EDLEntry *pe) {
	EMat4 *pmView;
	EMat4 mLookAtNoTranslate;
	EMat4 &m;
	
  EMat4 *m;
  EMat4 mLookAtNoTranslate;
  
  m = *(EMat4 **)((int)&pe->align_data + 4);
  __as__5EMat4RC5EMat4((EMat4 *)&DAT_1100cd80,m);
  SoftwareMult__5EMat4RC5EMat4T1
            ((EMat4 *)&DAT_1100c2e0,(EMat4 *)&DAT_1100cd80,(EMat4 *)&DAT_1100ffb0);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  __as__5EMat4RC5EMat4(&mLookAtNoTranslate,m);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  mLookAtNoTranslate.field0_0x0.d[3][0] = 0.0;
  mLookAtNoTranslate.field0_0x0.d[3][1] = 0.0;
                    /* end of inlined section */
  mLookAtNoTranslate.field0_0x0.d[3][2] = 0.0;
  __as__5EMat4RC5EMat4((EMat4 *)&DAT_1100c260,&mLookAtNoTranslate);
  geRecalcCombinedView__Fv();
  geRecalcLookatTextureXForm__Fv();
  geRecalcModelMatrixData__Fii(0,4);
  RecalcMetersPerPixel__Fv();
  return;
}

void EPs2Renderer::ProjectionMatrix(EPs2Renderer *pThis, EDLEntry *pe) {
  __as__5EMat4RC5EMat4((EMat4 *)&DAT_1100ffb0,*(EMat4 **)((int)&pe->align_data + 4));
  SoftwareMult__5EMat4RC5EMat4T1
            ((EMat4 *)&DAT_1100c2e0,(EMat4 *)&DAT_1100cd80,(EMat4 *)&DAT_1100ffb0);
  geRecalcCombinedView__Fv();
  geRecalcLookatTextureXForm__Fv();
  geRecalcModelMatrixData__Fii(0,4);
  RecalcMetersPerPixel__Fv();
  return;
}

void EPs2Renderer::WindowMatrix(EPs2Renderer *pThis, EDLEntry *pe) {
  __as__5EMat4RC5EMat4((EMat4 *)&DAT_1100c7c0,*(EMat4 **)((int)&pe->align_data + 4));
  return;
}

void EPs2Renderer::TextureMatrix(EPs2Renderer *pThis, EDLEntry *pe) {
	ETCTransformSource source;
	
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((int)&pe->align_data + 2);
  bVar2 = *(byte *)((int)&pe->align_data + 1);
  __as__5EMat4RC5EMat4((EMat4 *)&DAT_1100c3e0,*(EMat4 **)((int)&pe->align_data + 4));
  DAT_1100c7ac = (uint)bVar2;
  DAT_1100c7a0 = DAT_1100c7a0 & 0xfffff9ff | (uint)bVar1 << 7;
  geRecalcLookatTextureXForm__Fv();
  geVU1RecalcModelMatrixData__Fii(0,4);
  return;
}

void EPs2Renderer::DoTextureDone(int renderPass) {
	EPs2GETextureState *ps;
	ETexture *pCurTexture;
	
  if (((&DAT_1100ff04)[renderPass * 4] & 0xfffffffe) != 0) {
    (&DAT_1100ff00)[renderPass * 4] = (&DAT_1100ff00)[renderPass * 4] + 1;
  }
  return;
}

void EPs2Renderer::DoTextureWait(ETexture *pTexture) {
  if (pTexture != (ETexture *)0x0) {
    WaitForNewTexture__12EPs2RendererP8ETexture(this,pTexture);
  }
  return;
}

void EPs2Renderer::DoTextureSetup(ETexture *pNewTexture, int renderPass) {
	u32 *pPrimModes;
	ETexture *this;
	ETexture *this;
	
  uint *puVar1;
  
  puVar1 = &DAT_1100c7a4 + renderPass;
  if (pNewTexture == (ETexture *)0x0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  else {
    (*(code *)pNewTexture->__vtable[1].Select)
              ((int)&(pNewTexture->m_textureDef).pfnAllocAlign +
               (int)*(short *)&pNewTexture->__vtable[1].Validate,renderPass);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
    (&DAT_1100ff08)[renderPass * 4] = (float)(uint)(ushort)(pNewTexture->m_textureDef).xsize;
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
    (&DAT_1100ff0c)[renderPass * 4] = (float)(uint)(ushort)(pNewTexture->m_textureDef).ysize;
    *puVar1 = *puVar1 | 0x10;
  }
  return;
}

void EPs2Renderer::DoSetCurTexture(ETexture *pNewTexture, int renderPass) {
	EPs2GETextureState *ps;
	
  uint uVar1;
  
  uVar1 = (uint)pNewTexture | 1;
  if (pNewTexture == (ETexture *)0x0) {
    uVar1 = 0;
  }
  (&DAT_1100ff04)[renderPass * 4] = uVar1;
  return;
}

void EPs2Renderer::Texture(EPs2Renderer *pThis, EDLEntry *pe) {
	ETexture *pNewTexture;
	int renderPass;
	
  byte bVar1;
  ETexture *pTexture;
  
  bVar1 = *(byte *)((int)&pe->align_data + 1);
  pTexture = *(ETexture **)((int)&pe->align_data + 4);
  DoTextureDone__12EPs2Rendereri(pThis,(uint)bVar1);
  DoTextureWait__12EPs2RendererP8ETexture(pThis,pTexture);
  DoSetCurTexture__12EPs2RendererP8ETexturei(pThis,pTexture,(uint)bVar1);
  DoTextureSetup__12EPs2RendererP8ETexturei(pThis,pTexture,(uint)bVar1);
  return;
}

void EPs2Renderer::WaitForNewTexture(ETexture *pWaitTexture) {
  Acquire__6EMutexUi(&_loadMutex,0xffffffff);
  if (*(int *)&pWaitTexture[1].m_textureDef.imageFormat == 0) {
    _pWaitTexture = pWaitTexture;
    Release__6EMutex(&_loadMutex);
    Acquire__10ESemaphoreUi(&this->m_textureSemaphore,0xffffffff);
  }
  else {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
    Acquire__6EMutexUi(&_11EPs2Texture_m_lockMutex,0xffffffff);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
                    /* end of inlined section */
    DAT_1100ffa0 = *DAT_1100ffa8;
    _DAT_1100ffa8 = DAT_1100ffa8[1];
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
    Release__6EMutex(&_11EPs2Texture_m_lockMutex);
                    /* end of inlined section */
    Release__6EMutex(&_loadMutex);
  }
  return;
}

void EPs2Renderer::EnableGeometryModes(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 modes;
	
  DAT_1100c7a0 = DAT_1100c7a0 | *(uint *)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::DisableGeometryModes(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 modes;
	
  DAT_1100c7a0 = DAT_1100c7a0 & *(uint *)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::SetGeometryModes(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 modes;
	
  DAT_1100c7a0 = *(undefined4 *)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::EnableRasterModes(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 modes;
	int renderPass;
	u32 *pPrimModes;
	
  (&DAT_1100c7a4)[*(byte *)((int)&pe->align_data + 1)] =
       (&DAT_1100c7a4)[*(byte *)((int)&pe->align_data + 1)] | *(uint *)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::DisableRasterModes(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 modes;
	int renderPass;
	u32 *pPrimModes;
	
  (&DAT_1100c7a4)[*(byte *)((int)&pe->align_data + 1)] =
       (&DAT_1100c7a4)[*(byte *)((int)&pe->align_data + 1)] & *(uint *)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::SetRasterModes(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 modes;
	int renderPass;
	u32 *pPrimModes;
	
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)&pe->align_data + 1);
  uVar2 = *(uint *)((int)&pe->align_data + 4);
  if (bVar1 != 0) {
    uVar2 = uVar2 | 0x200;
  }
  (&DAT_1100c7a4)[bVar1] = uVar2;
  return;
}

void EPs2Renderer::Lights(EPs2Renderer *pThis, EDLEntry *pe) {
	int nLights;
	ELights3 *pLights;
	int cdl;
	EVec3 &vVec;
	int cdl;
	
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 unaff_s0;
  float *pfVar4;
  undefined8 unaff_s1;
  int column;
  int iVar5;
  undefined8 unaff_s2;
  uint uVar6;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar7;
  float fVar8;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pfVar1 = *(float **)((int)&pe->align_data + 4);
  uVar6 = (uint)*(byte *)((int)&pe->align_data + 1);
  __as__5EMat4f((EMat4 *)&DAT_1100c710,0.0);
  DAT_1100c74c = 0x3f800000;
  if (pfVar1 == (float *)0x0) {
    if (uVar6 != 0) {
      puVar3 = &DAT_1100ff40;
      do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        *puVar3 = 0;
                    /* end of inlined section */
        uVar6 = uVar6 - 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
                    /* end of inlined section */
        puVar3 = puVar3 + 4;
      } while (uVar6 != 0);
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    DAT_1100ff30 = 0.0;
    DAT_1100ff34 = 0.0;
    DAT_1100ff38 = 0.0;
    DAT_1100ff3c = 0;
  }
  else {
    if (uVar6 != 0) {
      pfVar4 = (float *)&DAT_1100ff40;
      column = 0;
      pfVar2 = pfVar1;
      do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_90 = -pfVar2[8];
        local_8c = -pfVar2[9];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_88 = -pfVar2[10];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        iVar5 = column + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        SetColumn__5EMat4iRC5EVec3((EMat4 *)&DAT_1100c710,column,(EVec3 *)&local_90);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar8 = pfVar2[5];
        fVar7 = pfVar2[6];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        *pfVar4 = pfVar2[4] * 128.0;
        pfVar4[1] = fVar8 * 128.0;
        pfVar4[2] = fVar7 * 128.0;
        pfVar4 = pfVar4 + 4;
        column = iVar5;
        pfVar2 = pfVar2 + 8;
                    /* end of inlined section */
      } while (iVar5 < (int)uVar6);
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    DAT_1100ff38 = pfVar1[2] * 128.0;
    DAT_1100ff30 = *pfVar1 * 128.0;
    DAT_1100ff34 = pfVar1[1] * 128.0;
    local_90 = DAT_1100ff30;
    local_8c = DAT_1100ff34;
    local_88 = DAT_1100ff38;
                    /* end of inlined section */
  }
                    /* end of inlined section */
  ComputeLightColorMatrix__12EPs2Renderer(pThis);
  UpdateGELightData__12EPs2Renderer(pThis);
  return;
}

void EPs2Renderer::PointLight(EPs2Renderer *pThis, EDLEntry *pe) {
	EPointLight *pPointLight;
	EVec3 &vVec;
	
  float *pfVar1;
  
  pfVar1 = *(float **)((int)&pe->align_data + 4);
  if (pfVar1 != (float *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    DAT_1100ff68 = pfVar1[2] * 128.0;
    DAT_1100ff60 = *pfVar1 * 128.0;
    DAT_1100ff64 = pfVar1[1] * 128.0;
                    /* end of inlined section */
    ComputeLightColorMatrix__12EPs2Renderer(pThis);
    DAT_1100c790 = pfVar1[3];
    DAT_1100c794 = pfVar1[4];
    DAT_1100c798 = pfVar1[5];
    DAT_1100c79c = 1.0 / pfVar1[6];
    UpdateGELightData__12EPs2Renderer(pThis);
  }
  return;
}

void EPs2Renderer::ComputeLightColorMatrix() {
	int i;
	int row;
	int row;
	
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = 2;
  pfVar1 = (float *)&DAT_1100ff40;
  do {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar5 = DAT_1100ff84 * pfVar1[1];
    fVar3 = DAT_1100ff88 * pfVar1[2];
    fVar4 = DAT_1100ff8c * pfVar1[3];
                    /* end of inlined section */
    pfVar1[-0xdfc] = DAT_1100ff80 * *pfVar1;
    pfVar1[-0xdfb] = fVar5;
    pfVar1[-0xdfa] = fVar3;
    pfVar1[-0xdf9] = fVar4;
    pfVar1 = pfVar1 + 4;
  } while (-1 < iVar2);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  DAT_1100c780 = DAT_1100ff70 * DAT_1100ff30;
  DAT_1100c784 = DAT_1100ff74 * DAT_1100ff34;
  DAT_1100c788 = DAT_1100ff78 * DAT_1100ff38;
  DAT_1100c78c = DAT_1100ff7c * DAT_1100ff3c;
  return;
}

void EPs2Renderer::Material(EPs2Renderer *pThis, EDLEntry *pe) {
	EMaterial *pm;
	
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)&pe->align_data + 4);
  DAT_1100ff70 = puVar1[4];
  DAT_1100ff74 = puVar1[5];
  DAT_1100ff78 = puVar1[6];
  DAT_1100ff7c = puVar1[7];
  DAT_1100ff80 = *puVar1;
  DAT_1100ff84 = puVar1[1];
  DAT_1100ff88 = puVar1[2];
  DAT_1100ff8c = puVar1[3];
  ComputeLightColorMatrix__12EPs2Renderer(pThis);
  return;
}

void EPs2Renderer::MipMapSetup(EPs2Renderer *pThis, EDLEntry *pe) {
	EGEVert *verts;
	bool useSize;
	EVec3 v01;
	EVec3 v02;
	EVec4 *this;
	EVec4 &v;
	EVec4 *this;
	EVec4 &v;
	EVec3 vNrm;
	EVec3 vNrmWorld;
	EVec3 vNrmScreen;
	float angMult;
	EVec3 vR;
	EVec3 vBaseUnit;
	EVec3 vf30;
	EVec3 vHeight;
	float areaTri;
	float areaTC;
	EPs2GETextureState *ps;
	float areaTexels;
	float pixPerTri256;
	EVec3 vR;
	EVec3 vR;
	EVec4 *this;
	EVec4 &v;
	EVec4 *this;
	
  undefined *puVar1;
  char cVar2;
  float *pfVar3;
  uint uVar4;
  ulong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec3 v01;
  EVec3 v02;
  EVec3 vNrm;
  EVec3 vR;
  EVec3 vNrmScreen;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pfVar3 = *(float **)((int)&pe->align_data + 4);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  v01.field0_0x0.d[0] = pfVar3[0x14] - *pfVar3;
  v01.field0_0x0.d[1] = pfVar3[0x15] - pfVar3[1];
  v01.field0_0x0.d[2] = pfVar3[0x16] - pfVar3[2];
                    /* end of inlined section */
  cVar2 = *(char *)((int)&pe->align_data + 1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  v02.field0_0x0.d[0] = pfVar3[0x28] - *pfVar3;
  v02.field0_0x0.d[1] = pfVar3[0x29] - pfVar3[1];
  v02.field0_0x0.d[2] = pfVar3[0x2a] - pfVar3[2];
                    /* end of inlined section */
  if (*(char *)((int)&pe->align_data + 2) != '\0') {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar9 = v01.field0_0x0.d[2] * v02.field0_0x0.d[0] - v01.field0_0x0.d[0] * v02.field0_0x0.d[2];
    vNrm.field0_0x0.d[2] =
         v01.field0_0x0.d[0] * v02.field0_0x0.d[1] - v01.field0_0x0.d[1] * v02.field0_0x0.d[0];
    fVar7 = v01.field0_0x0.d[1] * v02.field0_0x0.d[2] - v01.field0_0x0.d[2] * v02.field0_0x0.d[1];
    vNrm.field0_0x0._0_8_ = CONCAT44(fVar9,fVar7);
    fVar6 = fVar7 * DAT_1100c024 + fVar9 * DAT_1100c034 + vNrm.field0_0x0.d[2] * DAT_1100c044;
    fVar8 = fVar7 * DAT_1100c020 + fVar9 * DAT_1100c030 + vNrm.field0_0x0.d[2] * DAT_1100c040;
    fVar9 = fVar7 * DAT_1100c028 + fVar9 * DAT_1100c038 + vNrm.field0_0x0.d[2] * DAT_1100c048;
    fVar7 = fVar8 * DAT_1100c260 + fVar6 * DAT_1100c270 + fVar9 * DAT_1100c280 + DAT_1100c290 * 1.0;
    fVar12 = fVar8 * DAT_1100c264 + fVar6 * DAT_1100c274 + fVar9 * DAT_1100c284 + DAT_1100c294 * 1.0
    ;
    vNrmScreen.field0_0x0.d[2] =
         fVar8 * DAT_1100c268 + fVar6 * DAT_1100c278 + fVar9 * DAT_1100c288 + DAT_1100c298 * 1.0;
    vNrmScreen.field0_0x0._0_8_ = CONCAT44(fVar12,fVar7);
    fVar6 = sqrtf(fVar7 * fVar7 + fVar12 * fVar12 +
                  vNrmScreen.field0_0x0.d[2] * vNrmScreen.field0_0x0.d[2]);
    if (fVar6 != 0.0) {
      fVar6 = 1.0 / fVar6;
      vNrmScreen.field0_0x0.d[2] = vNrmScreen.field0_0x0.d[2] * fVar6;
      vNrmScreen.field0_0x0._0_8_ =
           CONCAT44(vNrmScreen.field0_0x0.d[1] * fVar6,vNrmScreen.field0_0x0.d[0] * fVar6);
    }
                    /* end of inlined section */
    fVar6 = fabsf(vNrmScreen.field0_0x0.d[2]);
    if (0.0078125 <= fVar6) {
      DAT_1100cd38 = (float)((int)fVar6 * (uint)(fVar6 < 1.0) | (uint)(fVar6 >= 1.0) * 0x3f800000);
    }
    else {
      DAT_1100cd38 = 0.0078125;
    }
  }
  if (cVar2 != '\0') {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar8 = v01.field0_0x0.d[2] * DAT_1100c040;
    fVar6 = 1.0;
    fVar9 = v01.field0_0x0.d[2] * DAT_1100c044;
                    /* end of inlined section */
    fVar7 = 0.5;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v01.field0_0x0.d[2] =
         v01.field0_0x0.d[0] * DAT_1100c028 + v01.field0_0x0.d[1] * DAT_1100c038 +
         v01.field0_0x0.d[2] * DAT_1100c048;
    vNrm.field0_0x0.d[2] = v01.field0_0x0.d[2];
    vNrm.field0_0x0._0_8_ =
         CONCAT44(v01.field0_0x0.d[0] * DAT_1100c024 + v01.field0_0x0.d[1] * DAT_1100c034 + fVar9,
                  v01.field0_0x0.d[0] * DAT_1100c020 + v01.field0_0x0.d[1] * DAT_1100c030 + fVar8);
    puVar1 = (undefined *)((int)&v01.field0_0x0 + 7);
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)vNrm.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    v01.field0_0x0._0_8_ = vNrm.field0_0x0._0_8_;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar8 = v02.field0_0x0.d[0] * DAT_1100c020 + v02.field0_0x0.d[1] * DAT_1100c030 +
            v02.field0_0x0.d[2] * DAT_1100c040;
    fVar9 = v02.field0_0x0.d[0] * DAT_1100c024 + v02.field0_0x0.d[1] * DAT_1100c034 +
            v02.field0_0x0.d[2] * DAT_1100c044;
    v02.field0_0x0.d[2] =
         v02.field0_0x0.d[0] * DAT_1100c028 + v02.field0_0x0.d[1] * DAT_1100c038 +
         v02.field0_0x0.d[2] * DAT_1100c048;
    vNrm.field0_0x0._0_8_ = CONCAT44(fVar9,fVar8);
    v02.field0_0x0._0_8_ = vNrm.field0_0x0._0_8_;
    vNrm.field0_0x0.d[2] = v02.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&v02.field0_0x0 + 7);
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)vNrm.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = sqrtf(fVar8 * fVar8 + fVar9 * fVar9 + v02.field0_0x0.d[2] * v02.field0_0x0.d[2]);
    fVar12 = fVar6 / fVar8;
    fVar9 = v02.field0_0x0.d[0] * fVar12;
    fVar10 = v02.field0_0x0.d[1] * fVar12;
    vNrm.field0_0x0.d[2] = v02.field0_0x0.d[2] * fVar12;
    vNrm.field0_0x0._0_8_ = CONCAT44(fVar10,fVar9);
    fVar12 = v01.field0_0x0.d[0] * fVar9 + v01.field0_0x0.d[1] * fVar10 +
             v01.field0_0x0.d[2] * vNrm.field0_0x0.d[2];
    fVar9 = v01.field0_0x0.d[0] - fVar12 * fVar9;
    fVar10 = v01.field0_0x0.d[1] - fVar12 * fVar10;
    vNrmScreen.field0_0x0.d[2] = v01.field0_0x0.d[2] - fVar12 * vNrm.field0_0x0.d[2];
    vNrmScreen.field0_0x0._0_8_ = CONCAT44(fVar10,fVar9);
    fVar12 = sqrtf(fVar9 * fVar9 + fVar10 * fVar10 +
                   vNrmScreen.field0_0x0.d[2] * vNrmScreen.field0_0x0.d[2]);
                    /* end of inlined section */
    fVar12 = fVar12 * fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    v01.field0_0x0.d[2] = pfVar3[0x1e] - pfVar3[10];
                    /* end of inlined section */
    v01.field0_0x0._0_8_ = CONCAT44(pfVar3[0x1d] - pfVar3[9],pfVar3[0x1c] - pfVar3[8]);
    puVar1 = (undefined *)((int)&v01.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)v01.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar9 = pfVar3[0x30] - pfVar3[8];
    fVar10 = pfVar3[0x31] - pfVar3[9];
    v02.field0_0x0.d[2] = pfVar3[0x32] - pfVar3[10];
                    /* end of inlined section */
    v02.field0_0x0._0_8_ = CONCAT44(fVar10,fVar9);
    puVar1 = (undefined *)((int)&v02.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)v02.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar9 = sqrtf(fVar9 * fVar9 + fVar10 * fVar10 + v02.field0_0x0.d[2] * v02.field0_0x0.d[2]);
    fVar6 = fVar6 / fVar9;
    fVar11 = v02.field0_0x0.d[0] * fVar6;
    vNrm.field0_0x0.d[2] = v02.field0_0x0.d[2] * fVar6;
    fVar6 = v02.field0_0x0.d[1] * fVar6;
                    /* end of inlined section */
    vNrm.field0_0x0._0_8_ = CONCAT44(fVar6,fVar11);
    puVar1 = (undefined *)((int)&vNrm.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)vNrm.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar10 = v01.field0_0x0.d[0] * fVar11 + v01.field0_0x0.d[1] * fVar6 +
             v01.field0_0x0.d[2] * vNrm.field0_0x0.d[2];
    vNrmScreen.field0_0x0.d[2] = v01.field0_0x0.d[2] - fVar10 * vNrm.field0_0x0.d[2];
    fVar11 = v01.field0_0x0.d[0] - fVar10 * fVar11;
    fVar6 = v01.field0_0x0.d[1] - fVar10 * fVar6;
                    /* end of inlined section */
    vNrmScreen.field0_0x0._0_8_ = CONCAT44(fVar6,fVar11);
    puVar1 = (undefined *)((int)&vNrmScreen.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
              (ulong)vNrmScreen.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = sqrtf(fVar11 * fVar11 + fVar6 * fVar6 +
                  vNrmScreen.field0_0x0.d[2] * vNrmScreen.field0_0x0.d[2]);
                    /* end of inlined section */
    fVar6 = sqrtf((fVar9 * fVar6 * fVar7 * DAT_1100ff08 * DAT_1100ff0c) /
                  (DAT_1100cd30 * fVar8 * fVar12));
    DAT_1100cd34 = 256.0 / fVar6;
  }
  DAT_1100cd3c = DAT_1100cd34 * DAT_1100cd38;
  return;
}

void EPs2Renderer::SetMipMap(EPs2Renderer *pThis, EDLEntry *pe) {
  DAT_1100cd38 = (float)(uint)*(byte *)((int)&pe->align_data + 1) * 0.003921569;
  DAT_1100cd34 = *(float *)((int)&pe->align_data + 4);
  DAT_1100cd3c = DAT_1100cd34 * DAT_1100cd38;
  return;
}

void EPs2Renderer::SendGSDisplayList(EPs2Renderer *pThis, EDLEntry *pe) {
  SendGSDisplayList__12EPs2GraphicsPvii
            (&_ps2gfx,*(void **)((int)&pe->align_data + 4),
             (uint)*(ushort *)((int)&pe->align_data + 2),0);
  return;
}

void EPs2Renderer::CallbackParam(EPs2Renderer *pThis, EDLEntry *pe) {
  pThis->m_callbackParam32 = *(uint *)((int)&pe->align_data + 4);
  pThis->m_callbackParam16 = *(short *)((int)&pe->align_data + 2);
  pThis->m_callbackParam8 = *(uchar *)((int)&pe->align_data + 1);
  return;
}

void EPs2Renderer::Callback(EPs2Renderer *pThis, EDLEntry *pe) {
	PFNRCCallback pfnCallback;
	
  (**(code **)((int)&pe->align_data + 4))
            (pThis->m_callbackParam32,pThis->m_callbackParam16,pThis->m_callbackParam8);
  return;
}

void EPs2Renderer::Rect(EPs2Renderer *pThis, EDLEntry *pe) {
	EVec2 vUpperLeft;
	EVec2 vLowerRight;
	EVec2 vUpperLeftTC;
	EVec2 vLowerRightTC;
	EVec4 vColor;
	float depth;
	u32 z;
	int i;
	int value;
	int value;
	int row;
	int value;
	int value;
	int value;
	int value;
	int row;
	int value;
	int value;
	
  undefined8 *puVar1;
  EPs2GEGSEntry__208_2108 *pEVar2;
  EVec2__null___1__1 *pEVar3;
  EPs2GEOutputBuffer *pEVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  EVec4 *pEVar9;
  EVec2 *pEVar10;
  EVec4 *pEVar11;
  EVec2 *pEVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  EVec2 vUpperLeft;
  EVec2 vLowerRight;
  EVec2 vUpperLeftTC;
  EVec2 vLowerRightTC;
  EVec4 vColor;
  
  pEVar10 = &vUpperLeft;
  fVar17 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vUpperLeft.field0_0x0.d[0] = (float)*(undefined4 *)&pe[1].align_data;
  vUpperLeft.field0_0x0.d[1] = *(float *)((int)&pe[1].align_data + 4);
  vLowerRight.field0_0x0.d[0] = (float)*(undefined4 *)&pe[2].align_data;
  vLowerRight.field0_0x0.d[1] = *(float *)((int)&pe[2].align_data + 4);
  uVar14 = *(uint *)&pe[3].align_data;
  uVar13 = *(uint *)((int)&pe[3].align_data + 4);
  uVar19 = *(uint *)&pe[4].align_data;
  uVar18 = *(uint *)((int)&pe[4].align_data + 4);
  vColor.field0_0x0.d[0] = (float)*(undefined4 *)&pe[5].align_data;
  vColor.field0_0x0.d[1] = *(float *)((int)&pe[5].align_data + 4);
  vColor.field0_0x0.d[2] = (float)*(undefined4 *)&pe[6].align_data;
  vColor.field0_0x0.d[3] = *(float *)((int)&pe[6].align_data + 4);
                    /* end of inlined section */
  fVar20 = *(float *)&pe[7].align_data;
  fVar15 = GetNearZVal__12EPs2Graphics(&_ps2gfx);
  pThis->m_pc = pThis->m_pc + 7;
  uVar16 = (uint)((fVar17 - fVar20) * fVar15);
  DAT_1100c7a4 = DAT_1100c7a4 | 6;
  DAT_1100c7a8 = DAT_1100c7a8 | 6;
  pEVar4 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar4->verts;
  pEVar11 = &vColor;
  pEVar12 = &vLowerRight;
  pEVar4->verts[0].d_u32[0] = uVar14;
  DAT_1100c678->d_u32[1] = uVar13;
  DAT_1100c678->d_f32[2] = fVar17;
  DAT_1100c678->d_u32[3] = 0;
  pEVar2 = DAT_1100c678;
  puVar1 = (undefined8 *)((int)DAT_1100c678 + 0x18);
  DAT_1100c678 = DAT_1100c678 + 1;
  *puVar1 = 0;
  pEVar2[1].d_u64[0] = 0;
  DAT_1100c678 = DAT_1100c678 + 1;
  pEVar9 = pEVar11;
  iVar7 = 0;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    iVar8 = iVar7 + 1;
    DAT_1100c678->d_u32[iVar7] = (int)(pEVar9->field0_0x0).d[0];
    pEVar9 = (EVec4 *)((int)&pEVar9->field0_0x0 + 4);
    iVar7 = iVar8;
  } while (iVar8 < 4);
  DAT_1100c678 = DAT_1100c678 + 1;
  pfVar6 = (float *)&DAT_1100c7f0;
  puVar5 = &DAT_1100c7c0;
  iVar7 = 0;
  do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar17 = *(float *)pEVar10;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar15 = *pfVar6;
    iVar8 = iVar7 + 1;
    pfVar6 = pfVar6 + 1;
    pEVar10 = (EVec2 *)((int)pEVar10 + 4);
    DAT_1100c678->d_u32[iVar7] = (int)(fVar17 * (float)puVar5[iVar7] + fVar15);
    puVar5 = puVar5 + 4;
    iVar7 = iVar8;
  } while (iVar8 < 2);
  DAT_1100c678->d_u32[2] = uVar16;
  DAT_1100c678->d_u32[3] = 0x10;
  pEVar2 = DAT_1100c678 + 1;
  DAT_1100c678 = DAT_1100c678 + 1;
  pEVar2->d_u32[0] = uVar19;
  DAT_1100c678->d_u32[1] = uVar18;
  DAT_1100c678->d_u32[2] = 0x3f800000;
  DAT_1100c678->d_u32[3] = 0;
  pEVar2 = DAT_1100c678;
  puVar1 = (undefined8 *)((int)DAT_1100c678 + 0x18);
  DAT_1100c678 = DAT_1100c678 + 1;
  *puVar1 = 0;
  pEVar2[1].d_u64[0] = 0;
  DAT_1100c678 = DAT_1100c678 + 1;
  iVar7 = 0;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    iVar8 = iVar7 + 1;
    DAT_1100c678->d_u32[iVar7] = (int)(pEVar11->field0_0x0).d[0];
    pEVar11 = (EVec4 *)((int)&pEVar11->field0_0x0 + 4);
    iVar7 = iVar8;
  } while (iVar8 < 4);
  DAT_1100c678 = DAT_1100c678 + 1;
  pfVar6 = (float *)&DAT_1100c7f0;
  puVar5 = &DAT_1100c7c0;
  iVar7 = 0;
  do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    pEVar3 = &pEVar12->field0_0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar17 = *pfVar6;
    iVar8 = iVar7 + 1;
    pfVar6 = pfVar6 + 1;
    pEVar12 = (EVec2 *)((int)&pEVar12->field0_0x0 + 4);
    DAT_1100c678->d_u32[iVar7] = (int)(pEVar3->d[0] * (float)puVar5[iVar7] + fVar17);
    puVar5 = puVar5 + 4;
    iVar7 = iVar8;
  } while (iVar8 < 2);
  DAT_1100c678->d_u32[2] = uVar16;
  DAT_1100c678->d_u32[3] = 0x10;
  DAT_1100c678 = DAT_1100c678 + 1;
  geFlushPrims__Fv();
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::DirectRect(EPs2Renderer *pThis, EDLEntry *pe) {
	ETexture *pTexture;
	EVec2 vPos;
	EVec2 vScale;
	EVec4 vColor;
	float depth;
	u32 z;
	float ftexsize[2];
	int texSize[2];
	int ulpos[2];
	int lrpos[2];
	int i;
	unsigned int color[4];
	ETexture *this;
	ETexture *this;
	int value;
	int value;
	int row;
	int value;
	int value;
	int i;
	int value;
	
  undefined8 *puVar1;
  EPs2GEGSEntry__208_2108 *pEVar2;
  EVec2__null___1__1 *pEVar3;
  EVec4__null___1__1 *pEVar4;
  float *pfVar5;
  int iVar6;
  EVec4 *pEVar7;
  EPs2GEOutputBuffer *pEVar8;
  EVec4 *pEVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  EVec2 *pEVar16;
  uint *puVar17;
  float *pfVar18;
  EVec2 *pEVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  EVec2 vPos;
  EVec2 vScale;
  EVec4 vColor;
  float ftexsize [2];
  int texSize [2];
  int ulpos [2];
  int lrpos [2];
  uint color [4];
  
  pEVar19 = &vPos;
  pThis->m_pc = pThis->m_pc + 5;
  uVar22 = DAT_1100ff04 & 0xfffffffe;
  if (uVar22 != 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vScale.field0_0x0.d[1] = *(float *)((int)&pe[2].align_data + 4);
    vPos.field0_0x0.d[0] = (float)*(undefined4 *)&pe[1].align_data;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0.d[1] = *(float *)((int)&pe[1].align_data + 4);
    vScale.field0_0x0.d[0] = (float)*(undefined4 *)&pe[2].align_data;
    vColor.field0_0x0.d[0] = (float)*(undefined4 *)&pe[3].align_data;
    vColor.field0_0x0.d[1] = *(float *)((int)&pe[3].align_data + 4);
    vColor.field0_0x0.d[2] = (float)*(undefined4 *)&pe[4].align_data;
    vColor.field0_0x0.d[3] = *(float *)((int)&pe[4].align_data + 4);
                    /* end of inlined section */
    fVar25 = *(float *)&pe[5].align_data;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar23 = GetNearZVal__12EPs2Graphics(&_ps2gfx);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
    uVar24 = (uint)((1.0 - fVar25) * fVar23);
    ftexsize[0] = (float)(uint)*(ushort *)(uVar22 + 0x10);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
    ftexsize[1] = (float)(uint)*(ushort *)(uVar22 + 0x12);
    iVar14 = 0;
    pEVar9 = &vColor;
    puVar17 = color;
    piVar21 = lrpos;
    piVar20 = ulpos;
    pfVar13 = (float *)&DAT_1100c7f0;
    puVar12 = &DAT_1100c7c0;
    pfVar18 = ftexsize;
    pEVar16 = &vScale;
    piVar10 = texSize;
    do {
                    /* end of inlined section */
      fVar23 = *pfVar18;
      pEVar3 = &pEVar16->field0_0x0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      pfVar5 = (float *)(puVar12 + iVar14);
                    /* end of inlined section */
      iVar14 = iVar14 + 1;
      puVar12 = puVar12 + 4;
      pfVar18 = pfVar18 + 1;
      pEVar16 = (EVec2 *)((int)&pEVar16->field0_0x0 + 4);
      *piVar10 = (int)(pEVar3->d[0] * fVar23 * 16.0);
      fVar23 = *(float *)pEVar19;
      fVar25 = *pfVar13;
      pEVar19 = (EVec2 *)((int)pEVar19 + 4);
      pfVar13 = pfVar13 + 1;
      iVar6 = ((int)(fVar23 * *pfVar5 + fVar25) & 0xfffffff0U) + 8;
      *piVar20 = iVar6;
      piVar20 = piVar20 + 1;
      iVar15 = *piVar10;
      piVar10 = piVar10 + 1;
      *piVar21 = iVar6 + iVar15;
      piVar21 = piVar21 + 1;
    } while (iVar14 < 2);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    iVar14 = 3;
    vColor.field0_0x0.d[1] = vColor.field0_0x0.d[1] * 128.0;
    vColor.field0_0x0.d[0] = vColor.field0_0x0.d[0] * 128.0;
    vColor.field0_0x0.d[2] = vColor.field0_0x0.d[2] * 128.0;
    vColor.field0_0x0.d[3] = vColor.field0_0x0.d[3] * 128.0;
    pEVar7 = pEVar9;
    do {
      fVar25 = (pEVar7->field0_0x0).d[0];
      fVar23 = 0.0;
      if (0.0 <= fVar25) {
        fVar23 = (float)((int)fVar25 * (uint)(fVar25 < 255.0) | (uint)(fVar25 >= 255.0) * 0x437f0000
                        );
      }
      (pEVar7->field0_0x0).d[0] = fVar23;
      iVar14 = iVar14 + -1;
      pEVar7 = (EVec4 *)((int)&pEVar7->field0_0x0 + 4);
    } while (-1 < iVar14);
                    /* end of inlined section */
    iVar14 = 3;
    puVar11 = puVar17;
    do {
      pEVar4 = &pEVar9->field0_0x0;
                    /* end of inlined section */
      iVar14 = iVar14 + -1;
      pEVar9 = (EVec4 *)((int)&pEVar9->field0_0x0 + 4);
      *puVar11 = (int)pEVar4->d[0];
      puVar11 = puVar11 + 1;
    } while (-1 < iVar14);
    DAT_1100c7a4 = DAT_1100c7a4 | 6;
    DAT_1100c7a8 = DAT_1100c7a8 | 6;
    pEVar8 = geGetOutputBuffer__Fv();
    DAT_1100c678 = pEVar8->verts;
    pEVar8->verts[0].d_u32[0] = 0;
    DAT_1100c678->d_u32[1] = 0x3f800000;
    DAT_1100c678->d_u32[2] = 0x3f800000;
    DAT_1100c678->d_u32[3] = 0;
    pEVar2 = DAT_1100c678;
    puVar1 = (undefined8 *)((int)DAT_1100c678 + 0x18);
    DAT_1100c678 = DAT_1100c678 + 1;
    *puVar1 = 0;
    pEVar2[1].d_u64[0] = 0;
    DAT_1100c678 = DAT_1100c678 + 1;
    puVar11 = puVar17;
    iVar14 = 0;
    do {
      uVar22 = *puVar11;
      iVar15 = iVar14 + 1;
      puVar11 = puVar11 + 1;
      DAT_1100c678->d_u32[iVar14] = uVar22;
      iVar14 = iVar15;
    } while (iVar15 < 4);
    pEVar2 = DAT_1100c678 + 1;
    DAT_1100c678 = DAT_1100c678 + 1;
    pEVar2->d_s32[0] = ulpos[0];
    DAT_1100c678->d_s32[1] = ulpos[1];
    DAT_1100c678->d_u32[2] = uVar24;
    DAT_1100c678->d_u32[3] = 0x10;
    pEVar2 = DAT_1100c678 + 1;
    DAT_1100c678 = DAT_1100c678 + 1;
    pEVar2->d_u32[0] = 0x3f800000;
    DAT_1100c678->d_u32[1] = 0;
    DAT_1100c678->d_u32[2] = 0x3f800000;
    DAT_1100c678->d_u32[3] = 0;
    pEVar2 = DAT_1100c678;
    puVar1 = (undefined8 *)((int)DAT_1100c678 + 0x18);
    DAT_1100c678 = DAT_1100c678 + 1;
    *puVar1 = 0;
    pEVar2[1].d_u64[0] = 0;
    DAT_1100c678 = DAT_1100c678 + 1;
    iVar14 = 0;
    do {
      uVar22 = *puVar17;
      iVar15 = iVar14 + 1;
      puVar17 = puVar17 + 1;
      DAT_1100c678->d_u32[iVar14] = uVar22;
      iVar14 = iVar15;
    } while (iVar15 < 4);
    pEVar2 = DAT_1100c678 + 1;
    DAT_1100c678 = DAT_1100c678 + 1;
    pEVar2->d_s32[0] = lrpos[0];
    DAT_1100c678->d_s32[1] = lrpos[1];
    DAT_1100c678->d_u32[2] = uVar24;
    DAT_1100c678->d_u32[3] = 0x10;
    DAT_1100c678 = DAT_1100c678 + 1;
    geFlushPrims__Fv();
    ResetPrimModes__12EPs2Renderer();
  }
  return;
}

void EPs2Renderer::Memcpy(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 size;
	void *pDest;
	void *pSource;
	
  uint nBytes;
  void *pDest;
  void *pSource;
  
  nBytes = *(uint *)((int)&pe->align_data + 4);
  pDest = *(void **)&pe[1].align_data;
  pSource = *(void **)((int)&pe[1].align_data + 4);
  pThis->m_pc = pThis->m_pc + 1;
  memcpy(pDest,pSource,nBytes);
  SyncDCache(pDest,(int)pDest + (nBytes - 1));
  return;
}

void EPs2Renderer::GEList(EPs2Renderer *pThis, EDLEntry *pe) {
	u128 *pStart;
	EVif vif;
	
  void *pBuf;
  float fVar1;
  EVif vif;
  
  pBuf = *(void **)((int)&pe->align_data + 4);
  Start__6EClock(&pThis->m_geClock);
  __4EVif(&vif);
  Begin__4EVifPvi(&vif,pBuf,0);
  Send__4EVif(&vif);
  GetCurInputBuffer__4EVU1(&_vu1);
  fVar1 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar1;
  geResetInputBuffers__Fv();
  ___4EVif(&vif,2);
  return;
}

void EPs2Renderer::RecalcMatrices(EPs2Renderer *pThis, EDLEntry *pe) {
  geRecalcModelMatrixData__Fii(0,4);
  return;
}

void EPs2Renderer::Debug(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 val;
	u32 index;
	u32 *p32;
	
  (&DAT_1100cd20)[*(byte *)((int)&pe->align_data + 1)] = *(undefined4 *)((int)&pe->align_data + 4);
  return;
}

void EPs2Renderer::GeometrySetup(EPs2Renderer *pThis, EDLEntry *pe) {
	u32 curModes;
	u32 lastModes;
	
  if ((DAT_1100c7a0 & 9) != (DAT_1100ce50 & 9)) {
    geRecalcModelMatrixData__Fii(0,4);
  }
  return;
}

void EPs2Renderer::TriStripPacked(EPs2Renderer *pThis, EDLEntry *pe) {
	int nVerts;
	float *xyzs;
	float *texcoords;
	u8 *colors;
	s8 *normals;
	u8 *weights;
	unsigned int primModes[2];
	PFNCPUGECommand pfnCommand;
	int thisLoad;
	int thisAdvance;
	EPs2GEInputBuffer *pInputBuffer;
	EGEVert *pCurVert;
	EPs2Renderer *this;
	int i;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  code **ppcVar1;
  char *pcVar2;
  byte *pbVar3;
  code **ppcVar4;
  code **ppcVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  code **ppcVar14;
  code **ppcVar15;
  int iVar16;
  float fVar17;
  uint primModes [2];
  
  Start__6EClock(&pThis->m_geClock);
  iVar16 = *(int *)((int)&pe->align_data + 4);
  pThis->m_pc = pThis->m_pc + 3;
  pbVar13 = *(byte **)&pe[3].align_data;
  ppcVar14 = *(code ***)&pe[1].align_data;
  pcVar6 = (code *)(DAT_1100c7a4 | 4);
  pbVar12 = *(byte **)&pe[2].align_data;
  pcVar7 = (code *)(DAT_1100c7a8 | 4);
  pcVar11 = *(char **)((int)&pe[2].align_data + 4);
  ppcVar15 = *(code ***)((int)&pe[1].align_data + 4);
  while( true ) {
    ppcVar5 = DAT_1100c680;
    iVar8 = iVar16;
    iVar9 = iVar16;
    if (0x26 < iVar16) {
      iVar8 = 0x24;
      iVar9 = 0x26;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    iVar16 = iVar16 - iVar8;
    pcVar10 = (code *)(iVar9 + -2);
    ppcVar4 = DAT_1100c680;
    if (0 < iVar9) {
      do {
                    /* end of inlined section */
        ppcVar4[0x14] = *ppcVar14;
        ppcVar4[0x15] = ppcVar14[1];
        ppcVar4[0x16] = ppcVar14[2];
        ppcVar1 = ppcVar14 + 3;
        ppcVar14 = ppcVar14 + 4;
        ppcVar4[0x17] = *ppcVar1;
        if (pcVar11 != (char *)0x0) {
          ppcVar4[0x18] = (code *)(int)*pcVar11;
          ppcVar4[0x19] = (code *)(int)pcVar11[1];
          ppcVar4[0x1a] = (code *)(int)pcVar11[2];
          pcVar2 = pcVar11 + 3;
          pcVar11 = pcVar11 + 4;
          ppcVar4[0x1b] = (code *)(int)*pcVar2;
        }
        if (pbVar12 != (byte *)0x0) {
          ppcVar4[0x20] = (code *)(uint)*pbVar12;
          ppcVar4[0x21] = (code *)(uint)pbVar12[1];
          ppcVar4[0x22] = (code *)(uint)pbVar12[2];
          pbVar3 = pbVar12 + 3;
          pbVar12 = pbVar12 + 4;
          ppcVar4[0x23] = (code *)(uint)*pbVar3;
        }
        if (pbVar13 != (byte *)0x0) {
          ppcVar4[0x24] = (code *)(uint)*pbVar13;
          ppcVar4[0x25] = (code *)(uint)pbVar13[1];
          ppcVar4[0x26] = (code *)(uint)pbVar13[2];
          pbVar3 = pbVar13 + 3;
          pbVar13 = pbVar13 + 4;
          ppcVar4[0x27] = (code *)(uint)*pbVar3;
        }
        iVar9 = iVar9 + -1;
        if (ppcVar15 != (code **)0x0) {
                    /* end of inlined section */
          ppcVar4[0x1c] = *ppcVar15;
          ppcVar1 = ppcVar15 + 1;
          ppcVar15 = ppcVar15 + 2;
          ppcVar4[0x1d] = *ppcVar1;
        }
        ppcVar4 = ppcVar4 + 0x14;
      } while (iVar9 != 0);
    }
    ppcVar5[1] = pcVar10;
    *ppcVar5 = geTriStrip__Fv;
    ppcVar5[2] = pcVar6;
    ppcVar5[3] = pcVar7;
    geTriStrip__Fv();
    if (iVar16 == 0) break;
    if (ppcVar14 != (code **)0x0) {
      ppcVar14 = ppcVar14 + -8;
    }
    if (pcVar11 != (char *)0x0) {
      pcVar11 = pcVar11 + -8;
    }
    if (pbVar12 != (byte *)0x0) {
      pbVar12 = pbVar12 + -8;
    }
    if (pbVar13 != (byte *)0x0) {
      pbVar13 = pbVar13 + -8;
    }
    if (ppcVar15 != (code **)0x0) {
      ppcVar15 = ppcVar15 + -4;
    }
  }
  fVar17 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar17;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::TriStripPackedInt(EPs2Renderer *pThis, EDLEntry *pe) {
	int nVerts;
	s16 *xyzs;
	s16 *texcoords;
	u8 *colors;
	s8 *normals;
	u8 *weights;
	unsigned int primModes[2];
	PFNCPUGECommand pfnCommand;
	int thisLoad;
	int thisAdvance;
	EPs2GEInputBuffer *pInputBuffer;
	EGEVert *pCurVert;
	EPs2Renderer *this;
	int i;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  short *psVar1;
  char *pcVar2;
  byte *pbVar3;
  code **ppcVar4;
  code **ppcVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  short *psVar14;
  short *psVar15;
  int iVar16;
  float fVar17;
  uint primModes [2];
  
  Start__6EClock(&pThis->m_geClock);
  iVar16 = *(int *)((int)&pe->align_data + 4);
  pThis->m_pc = pThis->m_pc + 3;
  pbVar13 = *(byte **)&pe[3].align_data;
  psVar14 = *(short **)&pe[1].align_data;
  pcVar6 = (code *)(DAT_1100c7a4 | 4);
  pbVar12 = *(byte **)&pe[2].align_data;
  pcVar7 = (code *)(DAT_1100c7a8 | 4);
  pcVar11 = *(char **)((int)&pe[2].align_data + 4);
  psVar15 = *(short **)((int)&pe[1].align_data + 4);
  while( true ) {
    ppcVar5 = DAT_1100c680;
    iVar8 = iVar16;
    iVar9 = iVar16;
    if (0x26 < iVar16) {
      iVar8 = 0x24;
      iVar9 = 0x26;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    iVar16 = iVar16 - iVar8;
    pcVar10 = (code *)(iVar9 + -2);
    ppcVar4 = DAT_1100c680;
    if (0 < iVar9) {
      do {
                    /* end of inlined section */
        ppcVar4[0x14] = (code *)((float)(int)*psVar14 * 3.051758e-05);
        ppcVar4[0x15] = (code *)((float)(int)psVar14[1] * 3.051758e-05);
        ppcVar4[0x16] = (code *)((float)(int)psVar14[2] * 3.051758e-05);
        psVar1 = psVar14 + 3;
        psVar14 = psVar14 + 4;
        ppcVar4[0x17] = (code *)(int)*psVar1;
        if (pcVar11 != (char *)0x0) {
          ppcVar4[0x18] = (code *)(int)*pcVar11;
          ppcVar4[0x19] = (code *)(int)pcVar11[1];
          ppcVar4[0x1a] = (code *)(int)pcVar11[2];
          pcVar2 = pcVar11 + 3;
          pcVar11 = pcVar11 + 4;
          ppcVar4[0x1b] = (code *)(int)*pcVar2;
        }
        if (pbVar12 != (byte *)0x0) {
          ppcVar4[0x20] = (code *)(uint)*pbVar12;
          ppcVar4[0x21] = (code *)(uint)pbVar12[1];
          ppcVar4[0x22] = (code *)(uint)pbVar12[2];
          pbVar3 = pbVar12 + 3;
          pbVar12 = pbVar12 + 4;
          ppcVar4[0x23] = (code *)(uint)*pbVar3;
        }
        if (pbVar13 != (byte *)0x0) {
          ppcVar4[0x24] = (code *)(uint)*pbVar13;
          ppcVar4[0x25] = (code *)(uint)pbVar13[1];
          ppcVar4[0x26] = (code *)(uint)pbVar13[2];
          pbVar3 = pbVar13 + 3;
          pbVar13 = pbVar13 + 4;
          ppcVar4[0x27] = (code *)(uint)*pbVar3;
        }
        iVar9 = iVar9 + -1;
        if (psVar15 != (short *)0x0) {
                    /* end of inlined section */
          ppcVar4[0x1c] = (code *)((float)(int)*psVar15 * 3.051758e-05);
          psVar1 = psVar15 + 1;
          psVar15 = psVar15 + 2;
          ppcVar4[0x1d] = (code *)((float)(int)*psVar1 * 3.051758e-05);
        }
        ppcVar4 = ppcVar4 + 0x14;
      } while (iVar9 != 0);
    }
    ppcVar5[1] = pcVar10;
    *ppcVar5 = geTriStrip__Fv;
    ppcVar5[2] = pcVar6;
    ppcVar5[3] = pcVar7;
    geTriStrip__Fv();
    if (iVar16 == 0) break;
    if (psVar14 != (short *)0x0) {
      psVar14 = psVar14 + -8;
    }
    if (pcVar11 != (char *)0x0) {
      pcVar11 = pcVar11 + -8;
    }
    if (pbVar12 != (byte *)0x0) {
      pbVar12 = pbVar12 + -8;
    }
    if (pbVar13 != (byte *)0x0) {
      pbVar13 = pbVar13 + -8;
    }
    if (psVar15 != (short *)0x0) {
      psVar15 = psVar15 + -4;
    }
  }
  fVar17 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar17;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::PointListPacked(EPs2Renderer *pThis, EDLEntry *pe) {
	int nVerts;
	float *xyzs;
	float *texcoords;
	u8 *colors;
	s8 *normals;
	u8 *weights;
	unsigned int primModes[2];
	PFNCPUGECommand pfnCommand;
	int thisLoad;
	EPs2GEInputBuffer *pInputBuffer;
	EGEVert *pCurVert;
	EPs2Renderer *this;
	int i;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  code **ppcVar1;
  char *pcVar2;
  byte *pbVar3;
  code **ppcVar4;
  code **ppcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  code **ppcVar12;
  code **ppcVar13;
  code *pcVar14;
  code *pcVar15;
  float fVar16;
  uint primModes [2];
  
  Start__6EClock(&pThis->m_geClock);
  pcVar14 = *(code **)((int)&pe->align_data + 4);
  pThis->m_pc = pThis->m_pc + 3;
  pcVar7 = DAT_1100c7a8;
  pcVar6 = DAT_1100c7a4;
  pbVar11 = *(byte **)&pe[3].align_data;
  ppcVar12 = *(code ***)&pe[1].align_data;
  ppcVar13 = *(code ***)((int)&pe[1].align_data + 4);
  pbVar10 = *(byte **)&pe[2].align_data;
  pcVar9 = *(char **)((int)&pe[2].align_data + 4);
  do {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
    ppcVar5 = DAT_1100c680;
                    /* end of inlined section */
    pcVar15 = (code *)0x2a;
    if ((int)pcVar14 < 0x2b) {
      pcVar15 = pcVar14;
    }
    pcVar8 = pcVar15;
    ppcVar4 = DAT_1100c680;
    if (0 < (int)pcVar15) {
      do {
                    /* end of inlined section */
        ppcVar4[0x14] = *ppcVar12;
        ppcVar4[0x15] = ppcVar12[1];
        ppcVar4[0x16] = ppcVar12[2];
        ppcVar1 = ppcVar12 + 3;
        ppcVar12 = ppcVar12 + 4;
        ppcVar4[0x17] = *ppcVar1;
        if (pcVar9 != (char *)0x0) {
          ppcVar4[0x18] = (code *)(int)*pcVar9;
          ppcVar4[0x19] = (code *)(int)pcVar9[1];
          ppcVar4[0x1a] = (code *)(int)pcVar9[2];
          pcVar2 = pcVar9 + 3;
          pcVar9 = pcVar9 + 4;
          ppcVar4[0x1b] = (code *)(int)*pcVar2;
        }
        if (pbVar10 != (byte *)0x0) {
          ppcVar4[0x20] = (code *)(uint)*pbVar10;
          ppcVar4[0x21] = (code *)(uint)pbVar10[1];
          ppcVar4[0x22] = (code *)(uint)pbVar10[2];
          pbVar3 = pbVar10 + 3;
          pbVar10 = pbVar10 + 4;
          ppcVar4[0x23] = (code *)(uint)*pbVar3;
        }
        if (pbVar11 != (byte *)0x0) {
          ppcVar4[0x24] = (code *)(uint)*pbVar11;
          ppcVar4[0x25] = (code *)(uint)pbVar11[1];
          ppcVar4[0x26] = (code *)(uint)pbVar11[2];
          pbVar3 = pbVar11 + 3;
          pbVar11 = pbVar11 + 4;
          ppcVar4[0x27] = (code *)(uint)*pbVar3;
        }
        pcVar8 = pcVar8 + -1;
        if (ppcVar13 != (code **)0x0) {
                    /* end of inlined section */
          ppcVar4[0x1c] = *ppcVar13;
          ppcVar1 = ppcVar13 + 1;
          ppcVar13 = ppcVar13 + 2;
          ppcVar4[0x1d] = *ppcVar1;
        }
        ppcVar4 = ppcVar4 + 0x14;
      } while (pcVar8 != (code *)0x0);
    }
    *ppcVar5 = gePointList__Fv;
    pcVar14 = pcVar14 + -(int)pcVar15;
    ppcVar5[1] = pcVar15;
    ppcVar5[2] = pcVar6;
    ppcVar5[3] = pcVar7;
    gePointList__Fv();
  } while (pcVar14 != (code *)0x0);
  fVar16 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar16;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::SpriteListPacked(EPs2Renderer *pThis, EDLEntry *pe) {
	int nVerts;
	float *xyzs;
	float *texcoords;
	u8 *colors;
	s8 *normals;
	u8 *weights;
	unsigned int primModes[2];
	PFNCPUGECommand pfnCommand;
	int thisLoad;
	EPs2GEInputBuffer *pInputBuffer;
	EGEVert *pCurVert;
	EPs2Renderer *this;
	int i;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  code **ppcVar1;
  char *pcVar2;
  byte *pbVar3;
  code **ppcVar4;
  code **ppcVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  code **ppcVar12;
  code **ppcVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  uint primModes [2];
  
  Start__6EClock(&pThis->m_geClock);
  iVar15 = *(int *)((int)&pe->align_data + 4);
  pThis->m_pc = pThis->m_pc + 3;
  pbVar11 = *(byte **)&pe[3].align_data;
  ppcVar12 = *(code ***)&pe[1].align_data;
  pcVar6 = (code *)(DAT_1100c7a4 | 6);
  ppcVar13 = *(code ***)((int)&pe[1].align_data + 4);
  pbVar10 = *(byte **)&pe[2].align_data;
  pcVar7 = (code *)(DAT_1100c7a8 | 6);
  pcVar9 = *(char **)((int)&pe[2].align_data + 4);
  do {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
    ppcVar5 = DAT_1100c680;
                    /* end of inlined section */
    iVar14 = 0x2a;
    if (iVar15 < 0x2b) {
      iVar14 = iVar15;
    }
    iVar8 = iVar14;
    ppcVar4 = DAT_1100c680;
    if (0 < iVar14) {
      do {
                    /* end of inlined section */
        ppcVar4[0x14] = *ppcVar12;
        ppcVar4[0x15] = ppcVar12[1];
        ppcVar4[0x16] = ppcVar12[2];
        ppcVar1 = ppcVar12 + 3;
        ppcVar12 = ppcVar12 + 4;
        ppcVar4[0x17] = *ppcVar1;
        if (pcVar9 != (char *)0x0) {
          ppcVar4[0x18] = (code *)(int)*pcVar9;
          ppcVar4[0x19] = (code *)(int)pcVar9[1];
          ppcVar4[0x1a] = (code *)(int)pcVar9[2];
          pcVar2 = pcVar9 + 3;
          pcVar9 = pcVar9 + 4;
          ppcVar4[0x1b] = (code *)(int)*pcVar2;
        }
        if (pbVar10 != (byte *)0x0) {
          ppcVar4[0x20] = (code *)(uint)*pbVar10;
          ppcVar4[0x21] = (code *)(uint)pbVar10[1];
          ppcVar4[0x22] = (code *)(uint)pbVar10[2];
          pbVar3 = pbVar10 + 3;
          pbVar10 = pbVar10 + 4;
          ppcVar4[0x23] = (code *)(uint)*pbVar3;
        }
        if (pbVar11 != (byte *)0x0) {
          ppcVar4[0x24] = (code *)(uint)*pbVar11;
          ppcVar4[0x25] = (code *)(uint)pbVar11[1];
          ppcVar4[0x26] = (code *)(uint)pbVar11[2];
          pbVar3 = pbVar11 + 3;
          pbVar11 = pbVar11 + 4;
          ppcVar4[0x27] = (code *)(uint)*pbVar3;
        }
        iVar8 = iVar8 + -1;
        if (ppcVar13 != (code **)0x0) {
                    /* end of inlined section */
          ppcVar4[0x1c] = *ppcVar13;
          ppcVar1 = ppcVar13 + 1;
          ppcVar13 = ppcVar13 + 2;
          ppcVar4[0x1d] = *ppcVar1;
        }
        ppcVar4 = ppcVar4 + 0x14;
      } while (iVar8 != 0);
    }
    *ppcVar5 = geSpriteList__Fv;
    iVar15 = iVar15 - iVar14;
    ppcVar5[1] = (code *)(iVar14 / 2);
    ppcVar5[2] = pcVar6;
    ppcVar5[3] = pcVar7;
    geSpriteList__Fv();
  } while (iVar15 != 0);
  fVar16 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar16;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::ZTest(EPs2Renderer *pThis, EDLEntry *pe) {
	int pass;
	EPs2TestState *pTest;
	
  EPs2TestState *pEVar1;
  
  pEVar1 = pThis->m_test + *(int *)((int)&pe->align_data + 4);
  pEVar1->zbTest = *(uchar *)((int)&pe->align_data + 1);
  pEVar1->zbMethod = *(uchar *)((int)&pe->align_data + 2);
  pEVar1->zbWrite = *(uchar *)((int)&pe->align_data + 3);
  SetTestRegisters__12EPs2Renderer(pThis);
  return;
}

void EPs2Renderer::AlphaTest(EPs2Renderer *pThis, EDLEntry *pe) {
	int pass;
	EPs2TestState *pTest;
	
  int iVar1;
  
  iVar1 = *(int *)((int)&pe->align_data + 4);
  pThis->m_test[iVar1].alphaTest = *(uchar *)((int)&pe->align_data + 1);
  pThis->m_test[iVar1].alphaMethod = *(uchar *)((int)&pe->align_data + 2);
  pThis->m_test[iVar1].alphaThreshold = *(uchar *)((int)&pe->align_data + 3);
  SetTestRegisters__12EPs2Renderer(pThis);
  return;
}

void EPs2Renderer::RenderSurface(EPs2Renderer *pThis, EDLEntry *pe) {
	int nFrame;
	EPs2RenderSurface *pSurface;
	
  int iVar1;
  uint which;
  
  iVar1 = *(int *)((int)&pe->align_data + 4);
  which = (uint)*(byte *)((int)&pe->align_data + 1);
  if (iVar1 == 0) {
    if (which == 5) {
      which = pThis->m_currentFrameBuffer;
    }
    SelectFrameBuffer__12EPs2Graphicsi(&_ps2gfx,which);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x54))(iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x50));
  }
  *(undefined4 *)&pThis->m_testRegistersNeedSetting = 1;
  return;
}

void EPs2Renderer::SaveImageData(EPs2Renderer *pThis, EDLEntry *pe) {
	EPs2RenderSurface *pRS;
	int dummyX;
	int dummyY;
	
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int dummyX;
  int dummyY;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  iVar1 = *(int *)((int)&pe->align_data + 4);
  iVar2 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x4c))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x48));
  (**(code **)(*(int *)(iVar2 + 0x20) + 0x2c))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 0x28),2);
  uVar3 = (**(code **)(*(int *)(iVar2 + 0x20) + 0x34))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 0x30),0,&dummyX,(uint)&dummyX | 4);
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x3c))
            (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x38),uVar3);
  (**(code **)(*(int *)(iVar2 + 0x20) + 0x44))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 0x40));
  return;
}

void EPs2Renderer::SetTestRegisters() {
	u64 *p64;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  *(undefined4 *)&this->m_testRegistersNeedSetting = 0;
  uVar15 = *(ulong *)(this->m_testDL + 1);
  uVar16 = *(ulong *)(this->m_testDL + 2);
  uVar12 = ((ulong)this->m_test[0].zbWrite & 1) << 0x20;
  uVar11 = ((ulong)this->m_test[1].zbWrite & 1) << 0x20;
  *(ulong *)(this->m_testDL + 1) = uVar15 & 0xfffffffeffffffff | uVar12;
  *(ulong *)(this->m_testDL + 2) = uVar16 & 0xfffffffeffffffff | uVar11;
  bVar1 = this->m_test[0].zbTest;
  uVar13 = ZEXT48(_ps2gfx.m_pLastZbuffer);
  bVar2 = this->m_test[1].zbTest;
  *(ulong *)(this->m_testDL + 1) = uVar15 & 0xfffffffefffffe00 | uVar12 | uVar13 & 0x1ff;
  bVar3 = this->m_test[0].zbMethod;
  uVar14 = ZEXT48(_ps2gfx.m_pLastZbuffer);
  bVar4 = this->m_test[1].zbMethod;
  *(ulong *)(this->m_testDL + 2) = uVar16 & 0xfffffffefffffe00 | uVar11 | uVar14 & 0x1ff;
  bVar5 = this->m_test[0].alphaThreshold;
  bVar6 = this->m_test[1].alphaThreshold;
  bVar7 = this->m_test[0].alphaMethod;
  bVar8 = this->m_test[1].alphaMethod;
  *(ulong *)(this->m_testDL + 1) =
       uVar15 & 0xfffffffef0fffe00 | uVar12 | uVar13 & 0x1ff |
       ((long)_ps2gfx.m_lastZbufFormat & 0xfU) << 0x18;
  bVar9 = this->m_test[0].alphaTest;
  bVar10 = this->m_test[1].alphaTest;
  *(ulong *)(this->m_testDL + 2) =
       uVar16 & 0xfffffffef0fffe00 | uVar11 | uVar14 & 0x1ff |
       ((long)_ps2gfx.m_lastZbufFormat & 0xfU) << 0x18;
  *(ulong *)(this->m_testDL + 3) =
       *(ulong *)(this->m_testDL + 3) & 0xfffffffffff88000 | ((ulong)bVar1 & 1) << 0x10 |
       ((ulong)bVar3 & 3) << 0x11 | (ulong)bVar5 << 4 | ((ulong)bVar7 & 7) << 1 | (ulong)bVar9 & 1;
  *(ulong *)(this->m_testDL + 4) =
       *(ulong *)(this->m_testDL + 4) & 0xfffffffffff88000 | ((ulong)bVar2 & 1) << 0x10 |
       ((ulong)bVar4 & 3) << 0x11 | (ulong)bVar6 << 4 | ((ulong)bVar8 & 7) << 1 | (ulong)bVar10 & 1;
  SyncDCache(this->m_testDL,(undefined *)((int)this->m_testDL + 0x5f));
  SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,this->m_testDL,6,0);
  return;
}

void EPs2Renderer::Vertex(EPs2Renderer *pThis, EDLEntry *pe) {
	int nVerts;
	float *xyzs;
	float *texcoords;
	u8 *colors;
	s8 *normals;
	u8 *weights;
	PFNCPUGECommand pfnCommand;
	EPs2GEInputBuffer *pInputBuffer;
	EGEVert *pCurVert;
	EPs2Renderer *this;
	int i;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  code **ppcVar1;
  char *pcVar2;
  byte *pbVar3;
  code *pcVar4;
  code **ppcVar5;
  code **ppcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  code **ppcVar10;
  code **ppcVar11;
  code *pcVar12;
  float fVar13;
  
  Start__6EClock(&pThis->m_geClock);
  pcVar4 = *(code **)((int)&pe->align_data + 4);
  pThis->m_pc = pThis->m_pc + 3;
  ppcVar5 = DAT_1100c680;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
  ppcVar10 = *(code ***)&pe[1].align_data;
  ppcVar11 = *(code ***)((int)&pe[1].align_data + 4);
  pbVar9 = *(byte **)&pe[2].align_data;
  pcVar8 = *(char **)((int)&pe[2].align_data + 4);
  pbVar7 = *(byte **)&pe[3].align_data;
  ppcVar6 = DAT_1100c680 + (uint)*(byte *)((int)&pe[3].align_data + 4) * 0x14 + 0x14;
  pcVar12 = pcVar4;
  if (0 < (int)pcVar4) {
    do {
                    /* end of inlined section */
      *ppcVar6 = *ppcVar10;
      ppcVar6[1] = ppcVar10[1];
      ppcVar6[2] = ppcVar10[2];
      ppcVar1 = ppcVar10 + 3;
      ppcVar10 = ppcVar10 + 4;
      ppcVar6[3] = *ppcVar1;
      if (pcVar8 != (char *)0x0) {
        ppcVar6[4] = (code *)(int)*pcVar8;
        ppcVar6[5] = (code *)(int)pcVar8[1];
        ppcVar6[6] = (code *)(int)pcVar8[2];
        pcVar2 = pcVar8 + 3;
        pcVar8 = pcVar8 + 4;
        ppcVar6[7] = (code *)(int)*pcVar2;
      }
      if (pbVar9 != (byte *)0x0) {
        ppcVar6[0xc] = (code *)(uint)*pbVar9;
        ppcVar6[0xd] = (code *)(uint)pbVar9[1];
        ppcVar6[0xe] = (code *)(uint)pbVar9[2];
        pbVar3 = pbVar9 + 3;
        pbVar9 = pbVar9 + 4;
        ppcVar6[0xf] = (code *)(uint)*pbVar3;
      }
      if (pbVar7 != (byte *)0x0) {
        ppcVar6[0x10] = (code *)(uint)*pbVar7;
        ppcVar6[0x11] = (code *)(uint)pbVar7[1];
        ppcVar6[0x12] = (code *)(uint)pbVar7[2];
        pbVar3 = pbVar7 + 3;
        pbVar7 = pbVar7 + 4;
        ppcVar6[0x13] = (code *)(uint)*pbVar3;
      }
      pcVar12 = pcVar12 + -1;
      if (ppcVar11 != (code **)0x0) {
                    /* end of inlined section */
        ppcVar6[8] = *ppcVar11;
        ppcVar1 = ppcVar11 + 1;
        ppcVar11 = ppcVar11 + 2;
        ppcVar6[9] = *ppcVar1;
      }
      ppcVar6 = ppcVar6 + 0x14;
    } while (pcVar12 != (code *)0x0);
  }
  ppcVar5[1] = pcVar4;
  *ppcVar5 = geVertex__Fv;
  geVertex__Fv();
  fVar13 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar13;
  return;
}

void EPs2Renderer::TriIndexed(EPs2Renderer *pThis, EDLEntry *pe) {
	int nTris;
	u8 *ids;
	unsigned int primModes[2];
	PFNCPUGECommand pfnCommand;
	int thisLoad;
	EPs2GEInputBuffer *pInputBuffer;
	EGEVert *pCurVert;
	EPs2Renderer *this;
	int i;
	
  code **ppcVar1;
  code **ppcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code **ppcVar8;
  code *pcVar9;
  float fVar10;
  uint primModes [2];
  
  Start__6EClock(&pThis->m_geClock);
  ppcVar8 = *(code ***)((int)&pe->align_data + 4);
  pcVar7 = (code *)(uint)*(ushort *)((int)&pe->align_data + 2);
  pcVar5 = (code *)(DAT_1100c7a4 | 3);
  pcVar3 = (code *)(DAT_1100c7a8 | 3);
  do {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
    ppcVar2 = DAT_1100c680;
                    /* end of inlined section */
    pcVar6 = (code *)0x2a;
    if ((int)pcVar7 < 0x2b) {
      pcVar6 = pcVar7;
    }
    pcVar4 = pcVar6;
    ppcVar1 = DAT_1100c680;
    if (0 < (int)pcVar6) {
      do {
                    /* end of inlined section */
        pcVar9 = *ppcVar8;
        pcVar4 = pcVar4 + -1;
        ppcVar8 = ppcVar8 + 1;
        ppcVar1[0x1e] = pcVar9;
        ppcVar1 = ppcVar1 + 0x14;
      } while (pcVar4 != (code *)0x0);
    }
    *ppcVar2 = geTriIndexed__Fv;
    pcVar7 = pcVar7 + -(int)pcVar6;
    ppcVar2[1] = pcVar6;
    ppcVar2[2] = pcVar5;
    ppcVar2[3] = pcVar3;
    geTriIndexed__Fv();
  } while (pcVar7 != (code *)0x0);
  fVar10 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar10;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::SetCombineMode(EPs2Renderer *pThis, EDLEntry *pe) {
	int pass;
	u64 mode;
	EPs2Texture *pCurTexture;
	u64 *pDst64;
	
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  uVar2 = (ulong)*(uint *)((int)&pe->align_data + 4);
  if (((&DAT_1100ff04)[(uint)uVar1 * 4] & 0xfffffffe) == 0) {
    uVar2 = uVar2 << 0x23;
  }
  else {
    uVar2 = *(ulong *)(*(int *)(((&DAT_1100ff04)[(uint)uVar1 * 4] & 0xfffffffe) + (uint)uVar1 * 4 +
                               0x48) + 0x20) & 0xffffffe7ffffffff | uVar2 << 0x23;
  }
  *(ulong *)(pThis->m_combineDL + 1) = uVar2;
  *(long *)((int)pThis->m_combineDL + 0x18) = (long)(int)(uVar1 + 6);
  SyncDCache(pThis->m_combineDL + 1,pThis->m_combineDL + 2);
  SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,pThis->m_combineDL,3,0);
  return;
}

void EPs2Renderer::SetBlendMode(EPs2Renderer *pThis, EDLEntry *pe) {
	int pass;
	u64 mask;
	u64 modes;
	u64 fix;
	
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)((int)&pe->align_data + 4);
  *(long *)((int)pThis->m_blendDL + 0x18) =
       (long)(int)(*(ushort *)((int)&pe->align_data + 2) + 0x42);
  *(ulong *)(pThis->m_blendDL + 1) = (uVar1 & 0xff00) << 0x18 | uVar1 & 0xff;
  SyncDCache(pThis->m_blendDL + 1,pThis->m_blendDL + 2);
  SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,pThis->m_blendDL,3,0);
  return;
}

void EPs2Renderer::Wakeup(int wakeup) {
  DAT_1100c684 = wakeup;
  return;
}

void EPs2Renderer::Noop(EPs2Renderer *pThis, EDLEntry *pe) {
  return;
}

void EPs2Renderer::BeginFrame() {
  return;
}

void EPs2Renderer::EndFrame() {
  return;
}

void EPs2Renderer::TextureLoaded(ETexture *pTexture, int renderPass) {
	EPs2TextureLock *pl;
	
  ETexture *pEVar1;
  int iVar2;
  int iVar3;
  
  Acquire__10ESemaphoreUi(&_locks[renderPass].ringBufferSemaphore,0xffffffff);
  Acquire__6EMutexUi(&_loadMutex,0xffffffff);
  pEVar1 = _pWaitTexture;
  _locks[renderPass].pLockedTextures[_locks[renderPass].curLocked] = pTexture;
  iVar3 = _locks[renderPass].curLocked + 1;
  iVar2 = _locks[renderPass].curLocked + 0x800;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  _locks[renderPass].totalLocked = _locks[renderPass].totalLocked + 1;
  _locks[renderPass].curLocked = iVar3 + (iVar2 >> 0xb) * -0x800;
  if (pTexture == pEVar1) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
                    /* end of inlined section */
    _pWaitTexture = (ETexture *)0x0;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
    Acquire__6EMutexUi(&_11EPs2Texture_m_lockMutex,0xffffffff);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
                    /* end of inlined section */
    DAT_1100ffa0 = *DAT_1100ffa8;
    _DAT_1100ffa8 = DAT_1100ffa8[1];
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
    Release__6EMutex(&_11EPs2Texture_m_lockMutex);
                    /* end of inlined section */
    Release__6EMutex(&_loadMutex);
    Release__10ESemaphore(&this->m_textureSemaphore);
  }
  else {
    Release__6EMutex(&_loadMutex);
  }
  return;
}

void EPs2Renderer::UnlockDoneTextures() {
	int i;
	
  int renderPass;
  
  renderPass = 0;
  do {
    UnlockDoneTextures__12EPs2Rendereri(this,renderPass);
    renderPass = renderPass + 1;
  } while (renderPass < 2);
  return;
}

void EPs2Renderer::UnlockDoneTextures(int renderPass) {
	EPs2GETextureState *ps;
	int nDone;
	EPs2TextureLock *pl;
	int i;
	ETexture **ppTexture;
	
  int iVar1;
  ETexture *pEVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = &DAT_1100ff00 + renderPass * 4;
  iVar1 = *piVar6;
  if (iVar1 != 0) {
    iVar5 = 0;
    Acquire__6EMutexUi(&_loadMutex,0xffffffff);
    if (0 < iVar1) {
      do {
        iVar3 = _locks[renderPass].curUnlocked;
        pEVar2 = _locks[renderPass].pLockedTextures[iVar3];
        if (pEVar2 == (ETexture *)0x0) {
          Release__6EMutex(&_loadMutex);
          return;
        }
        iVar5 = iVar5 + 1;
        (*(code *)pEVar2->__vtable->UpdatePalette)
                  ((int)&(pEVar2->m_textureDef).pfnAllocAlign +
                   (int)*(short *)&pEVar2->__vtable->UpdateMipLevel);
        _locks[renderPass].pLockedTextures[iVar3] = (ETexture *)0x0;
        Release__10ESemaphore(&_locks[renderPass].ringBufferSemaphore);
        *piVar6 = *piVar6 + -1;
        iVar4 = _locks[renderPass].curUnlocked + 1;
        iVar3 = _locks[renderPass].curUnlocked + 0x800;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        _locks[renderPass].totalUnlocked = _locks[renderPass].totalUnlocked + 1;
        _locks[renderPass].curUnlocked = iVar4 + (iVar3 >> 0xb) * -0x800;
      } while (iVar5 < iVar1);
    }
    Release__6EMutex(&_loadMutex);
  }
  return;
}

ETexture* EPs2Renderer::GetCurrentTexture(int renderPass) {
  return (ETexture *)((&DAT_1100ff04)[renderPass * 4] & 0xfffffffe);
}

void EPs2Renderer::MovieFrame(EPs2Renderer *pThis, EDLEntry *pe) {
	EPs2Movie *pMovie;
	
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)&pe->align_data + 4);
  iVar2 = *(int *)(iVar1 + 8);
  (**(code **)(iVar2 + 0x44))(iVar1 + *(short *)(iVar2 + 0x40));
  return;
}

void EPs2Renderer::VerifyMpg(EPs2Renderer *pThis, EDLEntry *pe) {
	s32 mpg;
	
  int mpg;
  
  mpg = *(int *)((int)&pe->align_data + 4);
  if (DAT_1100cdc0 != mpg) {
    LoadMPG__4EVU1i(&_vu1,mpg);
    pThis->m_nMPGLoads = pThis->m_nMPGLoads + 1;
  }
  return;
}

void EPs2Renderer::RectList(EPs2Renderer *pThis, EDLEntry *pe) {
	float *pf;
	float depth;
	u32 z;
	int nRects;
	unsigned int primModes[2];
	float *args;
	int nRemaining;
	int thisLoad;
	EPs2Renderer *this;
	
  ushort uVar1;
  bool bVar2;
  void *pSource;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  uint primModes [2];
  
  Start__6EClock(&pThis->m_geClock);
  pThis->m_pc = pThis->m_pc + 3;
  fVar7 = *(float *)((int)&pe[3].align_data + 4);
  fVar6 = GetNearZVal__12EPs2Graphics(&_ps2gfx);
  uVar1 = *(ushort *)((int)&pe->align_data + 2);
  uVar4 = (uint)uVar1;
  bVar2 = uVar1 < 0x15;
  pSource = *(void **)((int)&pe->align_data + 4);
  do {
    iVar3 = DAT_1100c680;
    uVar5 = 0x14;
    if (bVar2) {
      uVar5 = uVar4;
    }
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
                    /* end of inlined section */
    uVar4 = uVar4 - uVar5;
    SyncDMA__12EPs2RendererPvT1Ui(pThis,(void *)(DAT_1100c680 + 0x50),pSource,uVar5 * 0x20);
    *(uint *)(iVar3 + 0x10) = uVar5;
    *(int *)(iVar3 + 0x18) = (int)((1.0 - fVar7) * fVar6);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)&pe[1].align_data;
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)((int)&pe[1].align_data + 4);
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)&pe[2].align_data;
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)((int)&pe[2].align_data + 4);
    geRectList__Fv();
    bVar2 = (int)uVar4 < 0x15;
    pSource = (void *)((int)pSource + 0x20);
  } while (uVar4 != 0);
  fVar6 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar6;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::ParticleList(EPs2Renderer *pThis, EDLEntry *pe) {
	int nParticles;
	EGEPackedParticle *pPcls;
	EVec3 vWinLeft;
	EVec3 vWinUp;
	EGEPackedParticle *pPcl;
	float x;
	float y;
	float z;
	float x;
	float y;
	float z;
	int thisLoad;
	int i;
	EVec3 vCenter;
	EVec3 vDiagnal;
	EGEVert v0;
	EGEVert v1;
	float x;
	float y;
	float z;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EPs2GEOutputBuffer *pEVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EVec3 vWinLeft;
  EVec3 vWinUp;
  EVec3 vCenter;
  EVec3 vDiagnal;
  EGEVert v0;
  EGEVert v1;
  
  Start__6EClock(&pThis->m_geClock);
  fVar5 = DAT_1100c284;
  fVar4 = DAT_1100c280;
  fVar3 = DAT_1100c274;
  fVar2 = DAT_1100c270;
  fVar1 = DAT_1100c264;
  fVar12 = DAT_1100c260;
  pfVar7 = *(float **)((int)&pe->align_data + 4);
  uVar9 = (uint)*(ushort *)((int)&pe->align_data + 2);
  DAT_1100c7a4 = DAT_1100c7a4 | 6;
  DAT_1100c7a8 = DAT_1100c7a8 | 6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  do {
                    /* end of inlined section */
    pEVar6 = geGetOutputBuffer__Fv();
    DAT_1100c678 = pEVar6->verts;
    uVar10 = 0x15;
    if ((int)uVar9 < 0x16) {
      uVar10 = uVar9;
    }
    if (0 < (int)uVar10) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar16 = *pfVar7;
      uVar8 = uVar10;
      while( true ) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        uVar8 = uVar8 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar14 = pfVar7[4];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar11 = pfVar7[5];
        v0.tc.field0_0x0.d[0] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar15 = fVar14 * fVar4 + fVar11 * fVar5;
        fVar13 = fVar14 * fVar12 + fVar11 * fVar1;
        fVar11 = fVar14 * fVar2 + fVar11 * fVar3;
        v1.vModel.field0_0x0.d[2] = pfVar7[2] - fVar15;
        v1.vModel.field0_0x0.d[0] = fVar16 - fVar13;
        v1.vModel.field0_0x0.d[1] = pfVar7[1] - fVar11;
        v0.vModel.field0_0x0.d[0] = fVar16 + fVar13;
        v0.vModel.field0_0x0.d[1] = pfVar7[1] + fVar11;
        v0.vModel.field0_0x0.d[2] = pfVar7[2] + fVar15;
                    /* end of inlined section */
        v0.tc.field0_0x0.d[1] = 1.0;
        v1.tc.field0_0x0.d[0] = 0.0;
        v1.tc.field0_0x0.d[1] = 0.0;
        v0.color[0] = (uint)pfVar7[8];
        v0.color[1] = (uint)pfVar7[9];
        v0.color[2] = (uint)pfVar7[10];
        v0.color[3] = (uint)pfVar7[0xb];
        v1.color[0] = (uint)pfVar7[8];
        v1.color[1] = (uint)pfVar7[9];
        v1.color[2] = (uint)pfVar7[10];
        v1.color[3] = (uint)pfVar7[0xb];
        pfVar7 = pfVar7 + 0xc;
        geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                  (&v0,(EPs2GETransformedVert *)&DAT_1100c420,true);
        geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                  (&v1,(EPs2GETransformedVert *)&DAT_1100c4b0,true);
        geDrawClippedSprite__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c660);
        if (uVar8 == 0) break;
        fVar16 = *pfVar7;
      }
    }
    uVar9 = uVar9 - uVar10;
    geFlushPrims__Fv();
  } while (uVar9 != 0);
  fVar12 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar12;
  ResetPrimModes__12EPs2Renderer();
  return;
}

void EPs2Renderer::ParticleListRot(EPs2Renderer *pThis, EDLEntry *pe) {
	int nParticles;
	EGEPackedParticle *pPcls;
	EVec3 vWinLeft;
	EVec3 vWinUp;
	EGEPackedParticle *pPcl;
	EPs2GETransformedVert *pTVs[4];
	float x;
	float y;
	float z;
	float x;
	float y;
	float z;
	int thisLoad;
	int i;
	EVec3 vCenter;
	float sinAng;
	float cosAng;
	EVec3 vDiagRot0;
	EVec3 vDiagRot1;
	EGEVert v0;
	EGEVert v1;
	EGEVert v2;
	EGEVert v3;
	float x;
	float y;
	float z;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EPs2GEOutputBuffer *pEVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  EVec3 vWinLeft;
  EVec3 vWinUp;
  EPs2GETransformedVert *pTVs [4];
  EVec3 vCenter;
  EVec3 vDiagRot0;
  EVec3 vDiagRot1;
  EGEVert v0;
  EGEVert v1;
  EGEVert v2;
  EGEVert v3;
  
  Start__6EClock(&pThis->m_geClock);
  fVar5 = DAT_1100c284;
  fVar4 = DAT_1100c280;
  fVar3 = DAT_1100c274;
  fVar2 = DAT_1100c270;
  fVar1 = DAT_1100c264;
  fVar17 = DAT_1100c260;
  pfVar7 = *(float **)((int)&pe->align_data + 4);
  uVar10 = (uint)*(ushort *)((int)&pe->align_data + 2);
  DAT_1100c7a4 = DAT_1100c7a4 | 4;
  DAT_1100c7a8 = DAT_1100c7a8 | 4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pTVs[0] = (EPs2GETransformedVert *)&DAT_1100c420;
  pTVs[1] = (EPs2GETransformedVert *)&DAT_1100c4b0;
  pTVs[2] = (EPs2GETransformedVert *)&DAT_1100c540;
  pTVs[3] = (EPs2GETransformedVert *)&DAT_1100c5d0;
  do {
    pEVar6 = geGetOutputBuffer__Fv();
    DAT_1100c678 = pEVar6->verts;
    uVar11 = 0x15;
    if ((int)uVar10 < 0x16) {
      uVar11 = uVar10;
    }
    if (0 < (int)uVar11) {
      fVar22 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar12 = pfVar7[1];
      pfVar8 = pfVar7;
      uVar9 = uVar11;
      while( true ) {
        fVar19 = pfVar8[2];
        fVar13 = *pfVar8;
                    /* end of inlined section */
        fVar14 = sinf(pfVar8[3]);
        fVar15 = sqrtf(fVar22 - fVar14 * fVar14);
        if (pfVar8[6] != 0.0) {
          fVar14 = -fVar14;
          fVar15 = -fVar15;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar18 = pfVar8[4] * fVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        uVar9 = uVar9 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar16 = pfVar8[5] * fVar14;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar21 = fVar18 * fVar4 + fVar16 * fVar5;
        fVar20 = fVar18 * fVar17 + fVar16 * fVar1;
        fVar16 = fVar18 * fVar2 + fVar16 * fVar3;
        v0.vModel.field0_0x0.d[2] = fVar19 + fVar21;
        v0.vModel.field0_0x0.d[0] = fVar13 + fVar20;
        v0.vModel.field0_0x0.d[1] = fVar12 + fVar16;
        v2.vModel.field0_0x0.d[0] = fVar13 - fVar20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        v2.vModel.field0_0x0.d[1] = fVar12 - fVar16;
        v2.vModel.field0_0x0.d[2] = fVar19 - fVar21;
                    /* end of inlined section */
        fVar14 = pfVar8[4] * fVar14;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        fVar15 = pfVar8[5] * fVar15;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        fVar16 = fVar14 * fVar17 - fVar15 * fVar1;
        fVar18 = fVar14 * fVar4 - fVar15 * fVar5;
        fVar14 = fVar14 * fVar2 - fVar15 * fVar3;
        v3.vModel.field0_0x0.d[0] = fVar13 - fVar16;
        v3.vModel.field0_0x0.d[2] = fVar19 - fVar18;
        v3.vModel.field0_0x0.d[1] = fVar12 - fVar14;
        v1.vModel.field0_0x0.d[0] = fVar13 + fVar16;
        v1.vModel.field0_0x0.d[1] = fVar12 + fVar14;
        v1.vModel.field0_0x0.d[2] = fVar19 + fVar18;
                    /* end of inlined section */
        v2.tc.field0_0x0.d[0] = 0.0;
        v3.tc.field0_0x0.d[0] = 0.0;
        v1.tc.field0_0x0.d[1] = 0.0;
        v2.tc.field0_0x0.d[1] = 0.0;
        v0.color[0] = (uint)pfVar8[8];
        v0.color[1] = (uint)pfVar8[9];
        v0.color[2] = (uint)pfVar8[10];
        v0.color[3] = (uint)pfVar8[0xb];
        v1.color[0] = (uint)pfVar8[8];
        v1.color[1] = (uint)pfVar8[9];
        v1.color[2] = (uint)pfVar8[10];
        v1.color[3] = (uint)pfVar8[0xb];
        v2.color[0] = (uint)pfVar8[8];
        v2.color[1] = (uint)pfVar8[9];
        v2.color[2] = (uint)pfVar8[10];
        v2.color[3] = (uint)pfVar8[0xb];
        v3.color[0] = (uint)pfVar8[8];
        v3.color[1] = (uint)pfVar8[9];
        v3.color[2] = (uint)pfVar8[10];
        v3.color[3] = (uint)pfVar8[0xb];
        pfVar7 = pfVar8 + 0xc;
        v0.tc.field0_0x0.d[0] = fVar22;
        v0.tc.field0_0x0.d[1] = fVar22;
        v1.tc.field0_0x0.d[0] = fVar22;
        v3.tc.field0_0x0.d[1] = fVar22;
        geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                  (&v0,(EPs2GETransformedVert *)&DAT_1100c420,true);
        geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                  (&v1,(EPs2GETransformedVert *)&DAT_1100c4b0,true);
        geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                  (&v2,(EPs2GETransformedVert *)&DAT_1100c540,true);
        geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                  (&v3,(EPs2GETransformedVert *)&DAT_1100c5d0,true);
        geAddTriFan__FPP21EPs2GETransformedVerti(pTVs,2);
        if (uVar9 == 0) break;
        fVar12 = pfVar8[0xd];
        pfVar8 = pfVar7;
      }
    }
    uVar10 = uVar10 - uVar11;
    geFlushPrims__Fv();
  } while (uVar10 != 0);
  fVar17 = GetSec__6EClock(&pThis->m_geClock);
  pThis->m_geTime = pThis->m_geTime + fVar17;
  ResetPrimModes__12EPs2Renderer();
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	EPs2TextureLock *this;
	void *pAddress;
	
  EPs2TextureLock *pEVar1;
  EPs2TextureLock *pEVar2;
  int iVar3;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      pEVar1 = (EPs2TextureLock *)&_threadList;
      do {
        pEVar2 = pEVar1 + -1;
        ___10ESemaphore(&pEVar1[-1].ringBufferSemaphore,2);
        pEVar1 = pEVar2;
      } while (pEVar2 != _locks);
                    /* end of inlined section */
      ___6EMutex(&_loadMutex,2);
      ___12EPs2Renderer(&_ps2rend,2);
    }
    else {
      iVar3 = 1;
      __12EPs2Renderer(&_ps2rend);
      __6EMutex(&_loadMutex);
      pEVar1 = _locks;
      do {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2renderer.h */
        iVar3 = iVar3 + -1;
        __10ESemaphore(&pEVar1->ringBufferSemaphore);
                    /* end of inlined section */
        pEVar1 = pEVar1 + 1;
      } while (iVar3 != -1);
    }
  }
  return;
}

void EPs2Renderer::FrameComplete() {
  Queue__12EPs2RendererP13ESchedCommand(this,(ESchedCommand *)0x0);
  return;
}

void EPs2Renderer::VerifyFlush() {
  return;
}

EPs2GEInputBuffer* EPs2Renderer::GetGEInputBuffer() {
  return DAT_1100c680;
}

u8 EPs2Renderer::GetCommand(EDLEntry *pe) {
  return *(uchar *)&pe->align_data;
}

void global constructors keyed to _pRend() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _pRend() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

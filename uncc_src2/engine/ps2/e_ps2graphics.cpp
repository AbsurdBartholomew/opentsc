// STATUS: NOT STARTED

#include "e_ps2graphics.h"

EPs2Graphics _ps2gfx = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .$vf1727 = */ NULL
		},
		/* .m_insideBeginEnd = */ false,
		/* .m_initialized = */ false,
		/* .m_frameBufferClear = */ false,
		/* .m_displayTiming = */ false,
		/* .m_xscreen = */ 0,
		/* .m_yscreen = */ 0,
		/* .m_xoffset = */ 0,
		/* .m_yoffset = */ 0,
		/* .m_frameBufferFormat = */ 0,
		/* .m_zBufferFormat = */ 0,
		/* .m_nRenderSurfaces = */ 0,
		/* .m_nTextures = */ 0,
		/* .m_nShaders = */ 0,
		/* .m_nRenderContexts = */ 0,
		/* .m_mNormalMap = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [1] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [2] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [3] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					}
				},
				/* . = */ {
					/* ._00 = */ 0.f,
					/* ._01 = */ 0.f,
					/* ._02 = */ 0.f,
					/* ._03 = */ 0.f,
					/* ._10 = */ 0.f,
					/* ._11 = */ 0.f,
					/* ._12 = */ 0.f,
					/* ._13 = */ 0.f,
					/* ._20 = */ 0.f,
					/* ._21 = */ 0.f,
					/* ._22 = */ 0.f,
					/* ._23 = */ 0.f,
					/* ._30 = */ 0.f,
					/* ._31 = */ 0.f,
					/* ._32 = */ 0.f,
					/* ._33 = */ 0.f
				}
			}
		},
		/* .m_backgroundColor = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f,
					/* .z = */ 0.f
				}
			}
		},
		/* .m_allocMutex = */ {
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
		/* .m_pDeselectTextureDL = */ NULL,
		/* .m_pFont = */ NULL,
		/* .m_coordSys = */ E_COORDSYS_XRIGHT_YFORWARD_ZUP,
		/* .m_pRCImmediate = */ NULL,
		/* .m_vLTInd = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	},
	/* .m_motionBlur = */ {
		/* .alpha = */ 0.f,
		/* .offsetX = */ 0.f,
		/* .offsetY = */ 0.f,
		/* .scaleX = */ 0.f,
		/* .scaleY = */ 0.f,
		/* .scaleCenterX = */ 0.f,
		/* .scaleCenterY = */ 0.f
	},
	/* .m_displayDL = */ {
		/* [0] = */ {
			/* .giftag = */ {
				/* .NLOOP = */ BITFIELD,
				/* .EOP = */ BITFIELD,
				/* .pad16 = */ BITFIELD,
				/* .id = */ BITFIELD,
				/* .PRE = */ BITFIELD,
				/* .PRIM = */ BITFIELD,
				/* .FLG = */ BITFIELD,
				/* .NREG = */ BITFIELD,
				/* .REGS0 = */ BITFIELD,
				/* .REGS1 = */ BITFIELD,
				/* .REGS2 = */ BITFIELD,
				/* .REGS3 = */ BITFIELD,
				/* .REGS4 = */ BITFIELD,
				/* .REGS5 = */ BITFIELD,
				/* .REGS6 = */ BITFIELD,
				/* .REGS7 = */ BITFIELD,
				/* .REGS8 = */ BITFIELD,
				/* .REGS9 = */ BITFIELD,
				/* .REGS10 = */ BITFIELD,
				/* .REGS11 = */ BITFIELD,
				/* .REGS12 = */ BITFIELD,
				/* .REGS13 = */ BITFIELD,
				/* .REGS14 = */ BITFIELD,
				/* .REGS15 = */ BITFIELD
			},
			/* .draw1 = */ {
				/* .frame1 = */ {
					/* .FBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .FBW = */ BITFIELD,
					/* .pad22 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad30 = */ BITFIELD,
					/* .FBMSK = */ BITFIELD
				},
				/* .frame1addr = */ 0,
				/* .zbuf1 = */ {
					/* .ZBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad28 = */ BITFIELD,
					/* .ZMSK = */ BITFIELD,
					/* .pad33 = */ BITFIELD
				},
				/* .zbuf1addr = */ 0,
				/* .xyoffset1 = */ {
					/* .OFX = */ BITFIELD,
					/* .pad16 = */ BITFIELD,
					/* .OFY = */ BITFIELD,
					/* .pad48 = */ BITFIELD
				},
				/* .xyoffset1addr = */ 0,
				/* .scissor1 = */ {
					/* .SCAX0 = */ BITFIELD,
					/* .pad11 = */ BITFIELD,
					/* .SCAX1 = */ BITFIELD,
					/* .pad27 = */ BITFIELD,
					/* .SCAY0 = */ BITFIELD,
					/* .pad43 = */ BITFIELD,
					/* .SCAY1 = */ BITFIELD,
					/* .pad59 = */ BITFIELD
				},
				/* .scissor1addr = */ 0,
				/* .prmodecont = */ {
					/* .AC = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .prmodecontaddr = */ 0,
				/* .colclamp = */ {
					/* .CLAMP = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .colclampaddr = */ 0,
				/* .dthe = */ {
					/* .DTHE = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .dtheaddr = */ 0,
				/* .test1 = */ {
					/* .ATE = */ BITFIELD,
					/* .ATST = */ BITFIELD,
					/* .AREF = */ BITFIELD,
					/* .AFAIL = */ BITFIELD,
					/* .DATE = */ BITFIELD,
					/* .DATM = */ BITFIELD,
					/* .ZTE = */ BITFIELD,
					/* .ZTST = */ BITFIELD,
					/* .pad19 = */ BITFIELD
				},
				/* .test1addr = */ 0
			},
			/* .draw2 = */ {
				/* .frame2 = */ {
					/* .FBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .FBW = */ BITFIELD,
					/* .pad22 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad30 = */ BITFIELD,
					/* .FBMSK = */ BITFIELD
				},
				/* .frame2addr = */ 0,
				/* .zbuf2 = */ {
					/* .ZBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad28 = */ BITFIELD,
					/* .ZMSK = */ BITFIELD,
					/* .pad33 = */ BITFIELD
				},
				/* .zbuf2addr = */ 0,
				/* .xyoffset2 = */ {
					/* .OFX = */ BITFIELD,
					/* .pad16 = */ BITFIELD,
					/* .OFY = */ BITFIELD,
					/* .pad48 = */ BITFIELD
				},
				/* .xyoffset2addr = */ 0,
				/* .scissor2 = */ {
					/* .SCAX0 = */ BITFIELD,
					/* .pad11 = */ BITFIELD,
					/* .SCAX1 = */ BITFIELD,
					/* .pad27 = */ BITFIELD,
					/* .SCAY0 = */ BITFIELD,
					/* .pad43 = */ BITFIELD,
					/* .SCAY1 = */ BITFIELD,
					/* .pad59 = */ BITFIELD
				},
				/* .scissor2addr = */ 0,
				/* .prmodecont = */ {
					/* .AC = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .prmodecontaddr = */ 0,
				/* .colclamp = */ {
					/* .CLAMP = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .colclampaddr = */ 0,
				/* .dthe = */ {
					/* .DTHE = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .dtheaddr = */ 0,
				/* .test2 = */ {
					/* .ATE = */ BITFIELD,
					/* .ATST = */ BITFIELD,
					/* .AREF = */ BITFIELD,
					/* .AFAIL = */ BITFIELD,
					/* .DATE = */ BITFIELD,
					/* .DATM = */ BITFIELD,
					/* .ZTE = */ BITFIELD,
					/* .ZTST = */ BITFIELD,
					/* .pad19 = */ BITFIELD
				},
				/* .test2addr = */ 0
			},
			/* .signal = */ 0,
			/* .sigAddr = */ 0
		},
		/* [1] = */ {
			/* .giftag = */ {
				/* .NLOOP = */ BITFIELD,
				/* .EOP = */ BITFIELD,
				/* .pad16 = */ BITFIELD,
				/* .id = */ BITFIELD,
				/* .PRE = */ BITFIELD,
				/* .PRIM = */ BITFIELD,
				/* .FLG = */ BITFIELD,
				/* .NREG = */ BITFIELD,
				/* .REGS0 = */ BITFIELD,
				/* .REGS1 = */ BITFIELD,
				/* .REGS2 = */ BITFIELD,
				/* .REGS3 = */ BITFIELD,
				/* .REGS4 = */ BITFIELD,
				/* .REGS5 = */ BITFIELD,
				/* .REGS6 = */ BITFIELD,
				/* .REGS7 = */ BITFIELD,
				/* .REGS8 = */ BITFIELD,
				/* .REGS9 = */ BITFIELD,
				/* .REGS10 = */ BITFIELD,
				/* .REGS11 = */ BITFIELD,
				/* .REGS12 = */ BITFIELD,
				/* .REGS13 = */ BITFIELD,
				/* .REGS14 = */ BITFIELD,
				/* .REGS15 = */ BITFIELD
			},
			/* .draw1 = */ {
				/* .frame1 = */ {
					/* .FBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .FBW = */ BITFIELD,
					/* .pad22 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad30 = */ BITFIELD,
					/* .FBMSK = */ BITFIELD
				},
				/* .frame1addr = */ 0,
				/* .zbuf1 = */ {
					/* .ZBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad28 = */ BITFIELD,
					/* .ZMSK = */ BITFIELD,
					/* .pad33 = */ BITFIELD
				},
				/* .zbuf1addr = */ 0,
				/* .xyoffset1 = */ {
					/* .OFX = */ BITFIELD,
					/* .pad16 = */ BITFIELD,
					/* .OFY = */ BITFIELD,
					/* .pad48 = */ BITFIELD
				},
				/* .xyoffset1addr = */ 0,
				/* .scissor1 = */ {
					/* .SCAX0 = */ BITFIELD,
					/* .pad11 = */ BITFIELD,
					/* .SCAX1 = */ BITFIELD,
					/* .pad27 = */ BITFIELD,
					/* .SCAY0 = */ BITFIELD,
					/* .pad43 = */ BITFIELD,
					/* .SCAY1 = */ BITFIELD,
					/* .pad59 = */ BITFIELD
				},
				/* .scissor1addr = */ 0,
				/* .prmodecont = */ {
					/* .AC = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .prmodecontaddr = */ 0,
				/* .colclamp = */ {
					/* .CLAMP = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .colclampaddr = */ 0,
				/* .dthe = */ {
					/* .DTHE = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .dtheaddr = */ 0,
				/* .test1 = */ {
					/* .ATE = */ BITFIELD,
					/* .ATST = */ BITFIELD,
					/* .AREF = */ BITFIELD,
					/* .AFAIL = */ BITFIELD,
					/* .DATE = */ BITFIELD,
					/* .DATM = */ BITFIELD,
					/* .ZTE = */ BITFIELD,
					/* .ZTST = */ BITFIELD,
					/* .pad19 = */ BITFIELD
				},
				/* .test1addr = */ 0
			},
			/* .draw2 = */ {
				/* .frame2 = */ {
					/* .FBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .FBW = */ BITFIELD,
					/* .pad22 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad30 = */ BITFIELD,
					/* .FBMSK = */ BITFIELD
				},
				/* .frame2addr = */ 0,
				/* .zbuf2 = */ {
					/* .ZBP = */ BITFIELD,
					/* .pad09 = */ BITFIELD,
					/* .PSM = */ BITFIELD,
					/* .pad28 = */ BITFIELD,
					/* .ZMSK = */ BITFIELD,
					/* .pad33 = */ BITFIELD
				},
				/* .zbuf2addr = */ 0,
				/* .xyoffset2 = */ {
					/* .OFX = */ BITFIELD,
					/* .pad16 = */ BITFIELD,
					/* .OFY = */ BITFIELD,
					/* .pad48 = */ BITFIELD
				},
				/* .xyoffset2addr = */ 0,
				/* .scissor2 = */ {
					/* .SCAX0 = */ BITFIELD,
					/* .pad11 = */ BITFIELD,
					/* .SCAX1 = */ BITFIELD,
					/* .pad27 = */ BITFIELD,
					/* .SCAY0 = */ BITFIELD,
					/* .pad43 = */ BITFIELD,
					/* .SCAY1 = */ BITFIELD,
					/* .pad59 = */ BITFIELD
				},
				/* .scissor2addr = */ 0,
				/* .prmodecont = */ {
					/* .AC = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .prmodecontaddr = */ 0,
				/* .colclamp = */ {
					/* .CLAMP = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .colclampaddr = */ 0,
				/* .dthe = */ {
					/* .DTHE = */ BITFIELD,
					/* .pad01 = */ BITFIELD
				},
				/* .dtheaddr = */ 0,
				/* .test2 = */ {
					/* .ATE = */ BITFIELD,
					/* .ATST = */ BITFIELD,
					/* .AREF = */ BITFIELD,
					/* .AFAIL = */ BITFIELD,
					/* .DATE = */ BITFIELD,
					/* .DATM = */ BITFIELD,
					/* .ZTE = */ BITFIELD,
					/* .ZTST = */ BITFIELD,
					/* .pad19 = */ BITFIELD
				},
				/* .test2addr = */ 0
			},
			/* .signal = */ 0,
			/* .sigAddr = */ 0
		}
	},
	/* .m_ZBasFBDL = */ {
		/* .giftag = */ {
			/* .NLOOP = */ BITFIELD,
			/* .EOP = */ BITFIELD,
			/* .pad16 = */ BITFIELD,
			/* .id = */ BITFIELD,
			/* .PRE = */ BITFIELD,
			/* .PRIM = */ BITFIELD,
			/* .FLG = */ BITFIELD,
			/* .NREG = */ BITFIELD,
			/* .REGS0 = */ BITFIELD,
			/* .REGS1 = */ BITFIELD,
			/* .REGS2 = */ BITFIELD,
			/* .REGS3 = */ BITFIELD,
			/* .REGS4 = */ BITFIELD,
			/* .REGS5 = */ BITFIELD,
			/* .REGS6 = */ BITFIELD,
			/* .REGS7 = */ BITFIELD,
			/* .REGS8 = */ BITFIELD,
			/* .REGS9 = */ BITFIELD,
			/* .REGS10 = */ BITFIELD,
			/* .REGS11 = */ BITFIELD,
			/* .REGS12 = */ BITFIELD,
			/* .REGS13 = */ BITFIELD,
			/* .REGS14 = */ BITFIELD,
			/* .REGS15 = */ BITFIELD
		},
		/* .draw1 = */ {
			/* .frame1 = */ {
				/* .FBP = */ BITFIELD,
				/* .pad09 = */ BITFIELD,
				/* .FBW = */ BITFIELD,
				/* .pad22 = */ BITFIELD,
				/* .PSM = */ BITFIELD,
				/* .pad30 = */ BITFIELD,
				/* .FBMSK = */ BITFIELD
			},
			/* .frame1addr = */ 0,
			/* .zbuf1 = */ {
				/* .ZBP = */ BITFIELD,
				/* .pad09 = */ BITFIELD,
				/* .PSM = */ BITFIELD,
				/* .pad28 = */ BITFIELD,
				/* .ZMSK = */ BITFIELD,
				/* .pad33 = */ BITFIELD
			},
			/* .zbuf1addr = */ 0,
			/* .xyoffset1 = */ {
				/* .OFX = */ BITFIELD,
				/* .pad16 = */ BITFIELD,
				/* .OFY = */ BITFIELD,
				/* .pad48 = */ BITFIELD
			},
			/* .xyoffset1addr = */ 0,
			/* .scissor1 = */ {
				/* .SCAX0 = */ BITFIELD,
				/* .pad11 = */ BITFIELD,
				/* .SCAX1 = */ BITFIELD,
				/* .pad27 = */ BITFIELD,
				/* .SCAY0 = */ BITFIELD,
				/* .pad43 = */ BITFIELD,
				/* .SCAY1 = */ BITFIELD,
				/* .pad59 = */ BITFIELD
			},
			/* .scissor1addr = */ 0,
			/* .prmodecont = */ {
				/* .AC = */ BITFIELD,
				/* .pad01 = */ BITFIELD
			},
			/* .prmodecontaddr = */ 0,
			/* .colclamp = */ {
				/* .CLAMP = */ BITFIELD,
				/* .pad01 = */ BITFIELD
			},
			/* .colclampaddr = */ 0,
			/* .dthe = */ {
				/* .DTHE = */ BITFIELD,
				/* .pad01 = */ BITFIELD
			},
			/* .dtheaddr = */ 0,
			/* .test1 = */ {
				/* .ATE = */ BITFIELD,
				/* .ATST = */ BITFIELD,
				/* .AREF = */ BITFIELD,
				/* .AFAIL = */ BITFIELD,
				/* .DATE = */ BITFIELD,
				/* .DATM = */ BITFIELD,
				/* .ZTE = */ BITFIELD,
				/* .ZTST = */ BITFIELD,
				/* .pad19 = */ BITFIELD
			},
			/* .test1addr = */ 0
		},
		/* .draw2 = */ {
			/* .frame2 = */ {
				/* .FBP = */ BITFIELD,
				/* .pad09 = */ BITFIELD,
				/* .FBW = */ BITFIELD,
				/* .pad22 = */ BITFIELD,
				/* .PSM = */ BITFIELD,
				/* .pad30 = */ BITFIELD,
				/* .FBMSK = */ BITFIELD
			},
			/* .frame2addr = */ 0,
			/* .zbuf2 = */ {
				/* .ZBP = */ BITFIELD,
				/* .pad09 = */ BITFIELD,
				/* .PSM = */ BITFIELD,
				/* .pad28 = */ BITFIELD,
				/* .ZMSK = */ BITFIELD,
				/* .pad33 = */ BITFIELD
			},
			/* .zbuf2addr = */ 0,
			/* .xyoffset2 = */ {
				/* .OFX = */ BITFIELD,
				/* .pad16 = */ BITFIELD,
				/* .OFY = */ BITFIELD,
				/* .pad48 = */ BITFIELD
			},
			/* .xyoffset2addr = */ 0,
			/* .scissor2 = */ {
				/* .SCAX0 = */ BITFIELD,
				/* .pad11 = */ BITFIELD,
				/* .SCAX1 = */ BITFIELD,
				/* .pad27 = */ BITFIELD,
				/* .SCAY0 = */ BITFIELD,
				/* .pad43 = */ BITFIELD,
				/* .SCAY1 = */ BITFIELD,
				/* .pad59 = */ BITFIELD
			},
			/* .scissor2addr = */ 0,
			/* .prmodecont = */ {
				/* .AC = */ BITFIELD,
				/* .pad01 = */ BITFIELD
			},
			/* .prmodecontaddr = */ 0,
			/* .colclamp = */ {
				/* .CLAMP = */ BITFIELD,
				/* .pad01 = */ BITFIELD
			},
			/* .colclampaddr = */ 0,
			/* .dthe = */ {
				/* .DTHE = */ BITFIELD,
				/* .pad01 = */ BITFIELD
			},
			/* .dtheaddr = */ 0,
			/* .test2 = */ {
				/* .ATE = */ BITFIELD,
				/* .ATST = */ BITFIELD,
				/* .AREF = */ BITFIELD,
				/* .AFAIL = */ BITFIELD,
				/* .DATE = */ BITFIELD,
				/* .DATM = */ BITFIELD,
				/* .ZTE = */ BITFIELD,
				/* .ZTST = */ BITFIELD,
				/* .pad19 = */ BITFIELD
			},
			/* .test2addr = */ 0
		},
		/* .signal = */ 0,
		/* .sigAddr = */ 0
	},
	/* .m_pLastDisplayDL = */ NULL,
	/* .m_clearDL = */ {
		/* .giftag = */ {
			/* .NLOOP = */ BITFIELD,
			/* .EOP = */ BITFIELD,
			/* .pad16 = */ BITFIELD,
			/* .id = */ BITFIELD,
			/* .PRE = */ BITFIELD,
			/* .PRIM = */ BITFIELD,
			/* .FLG = */ BITFIELD,
			/* .NREG = */ BITFIELD,
			/* .REGS0 = */ BITFIELD,
			/* .REGS1 = */ BITFIELD,
			/* .REGS2 = */ BITFIELD,
			/* .REGS3 = */ BITFIELD,
			/* .REGS4 = */ BITFIELD,
			/* .REGS5 = */ BITFIELD,
			/* .REGS6 = */ BITFIELD,
			/* .REGS7 = */ BITFIELD,
			/* .REGS8 = */ BITFIELD,
			/* .REGS9 = */ BITFIELD,
			/* .REGS10 = */ BITFIELD,
			/* .REGS11 = */ BITFIELD,
			/* .REGS12 = */ BITFIELD,
			/* .REGS13 = */ BITFIELD,
			/* .REGS14 = */ BITFIELD,
			/* .REGS15 = */ BITFIELD
		},
		/* .clear = */ {
			/* .testa = */ {
				/* .ATE = */ BITFIELD,
				/* .ATST = */ BITFIELD,
				/* .AREF = */ BITFIELD,
				/* .AFAIL = */ BITFIELD,
				/* .DATE = */ BITFIELD,
				/* .DATM = */ BITFIELD,
				/* .ZTE = */ BITFIELD,
				/* .ZTST = */ BITFIELD,
				/* .pad19 = */ BITFIELD
			},
			/* .testaaddr = */ 0,
			/* .prim = */ {
				/* .PRIM = */ BITFIELD,
				/* .IIP = */ BITFIELD,
				/* .TME = */ BITFIELD,
				/* .FGE = */ BITFIELD,
				/* .ABE = */ BITFIELD,
				/* .AA1 = */ BITFIELD,
				/* .FST = */ BITFIELD,
				/* .CTXT = */ BITFIELD,
				/* .FIX = */ BITFIELD,
				/* .pad11 = */ BITFIELD
			},
			/* .primaddr = */ 0,
			/* .rgbaq = */ {
				/* .R = */ BITFIELD,
				/* .G = */ BITFIELD,
				/* .B = */ BITFIELD,
				/* .A = */ BITFIELD,
				/* .Q = */ 0.f
			},
			/* .rgbaqaddr = */ 0,
			/* .xyz2a = */ {
				/* .X = */ BITFIELD,
				/* .Y = */ BITFIELD,
				/* .Z = */ BITFIELD
			},
			/* .xyz2aaddr = */ 0,
			/* .xyz2b = */ {
				/* .X = */ BITFIELD,
				/* .Y = */ BITFIELD,
				/* .Z = */ BITFIELD
			},
			/* .xyz2baddr = */ 0,
			/* .testb = */ {
				/* .ATE = */ BITFIELD,
				/* .ATST = */ BITFIELD,
				/* .AREF = */ BITFIELD,
				/* .AFAIL = */ BITFIELD,
				/* .DATE = */ BITFIELD,
				/* .DATM = */ BITFIELD,
				/* .ZTE = */ BITFIELD,
				/* .ZTST = */ BITFIELD,
				/* .pad19 = */ BITFIELD
			},
			/* .testbaddr = */ 0
		},
		/* .dither = */ 0,
		/* .ditherAddr = */ 0,
		/* .ditherMatrix = */ 0,
		/* .ditherMatrixAddr = */ 0,
		/* .signal = */ 0,
		/* .sigAddr = */ 0
	},
	/* .m_vram = */ {
		/* .m_mutex = */ {
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
		/* .m_unlockOrDeallocateEvent = */ {
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
		/* .m_unlockOrDeallocateEventsWanted = */ 0,
		/* .m_orderedList = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_unlockedList = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_freeList = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_lockedList = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_largestFreeBlock = */ 0,
		/* .m_protectBytes = */ 0,
		/* .m_errorThreshold = */ 0,
		/* .m_nFrame = */ 0
	},
	/* .m_pVramFrameBuffers = */ NULL,
	/* .m_pFFBuf = */ NULL,
	/* .m_pLastZbuffer = */ NULL,
	/* .m_lastZbufFormat = */ 0,
	/* .m_pCopySprite = */ NULL,
	/* .m_hires = */ false,
	/* .m_motionBlurEnabled = */ false,
	/* .m_viewingVramEnabled = */ false,
	/* .m_gsIntDl = */ {
		/* [0] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [1] = */ VECTOR(0.f, 0.f, 0.f, 0.f)
	},
	/* .m_horizontalBlur = */ 0.f,
	/* .m_gsInterruptHandler = */ {
		/* .m_id = */ 0,
		/* .m_cause = */ 0
	},
	/* .m_gsEvent = */ {
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
	/* .m_gsMutex = */ {
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
	/* .m_xOffsetBase = */ 0,
	/* .m_yOffsetBase = */ 0,
	/* .m_xOffsetMult = */ 0
};

EGraphics *_pGfx = NULL;
int _ps2FrameBuffer = 0;

__vtbl_ptr_type EPs2Graphics virtual table[48] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::~EPs2Graphics,
		/* .__delta2 = */ 26944
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::ManagedStartup,
		/* .__delta2 = */ 22488
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::ManagedShutdown,
		/* .__delta2 = */ 15968
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::Init,
		/* .__delta2 = */ 27544
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::BeginFrame,
		/* .__delta2 = */ 16320
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::EndFrame,
		/* .__delta2 = */ 16408
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Flush,
		/* .__delta2 = */ 16616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::SetBackgroundColor,
		/* .__delta2 = */ 30224
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::SetVideoMode,
		/* .__delta2 = */ 30000
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::GetOutputRect,
		/* .__delta2 = */ 30048
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::GetScissorRect,
		/* .__delta2 = */ 31760
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Open,
		/* .__delta2 = */ 17016
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Close,
		/* .__delta2 = */ 17208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 17608
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateTexture,
		/* .__delta2 = */ 17816
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 18040
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateRenderSurface,
		/* .__delta2 = */ 18704
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 18928
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateMovie,
		/* .__delta2 = */ 19096
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 19224
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::GetLargestAvailableTextureMemoryBlock,
		/* .__delta2 = */ -31616
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateShader,
		/* .__delta2 = */ 18312
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::Destroy,
		/* .__delta2 = */ 31192
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::GetFarZVal,
		/* .__delta2 = */ -31632
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::GetNearZVal,
		/* .__delta2 = */ 28064
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::GetScreenAspect,
		/* .__delta2 = */ 30168
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetMaxTextureXSize,
		/* .__delta2 = */ 22456
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetMaxTextureYSize,
		/* .__delta2 = */ 22464
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::GetScreenShot,
		/* .__delta2 = */ -32552
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::DiscardAllVram,
		/* .__delta2 = */ -31584
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::DoSwapBuffer,
		/* .__delta2 = */ 27896
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::DoSetupFrameBuffer,
		/* .__delta2 = */ 27800
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::SelectFrameBuffer,
		/* .__delta2 = */ 31480
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::AllocDL,
		/* .__delta2 = */ 16824
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::FreeDL,
		/* .__delta2 = */ 16864
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::AllocRC,
		/* .__delta2 = */ 30776
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::FreeRC,
		/* .__delta2 = */ 30848
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::AllocTexture,
		/* .__delta2 = */ 30904
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::FreeTexture,
		/* .__delta2 = */ 30944
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::AllocShader,
		/* .__delta2 = */ 31000
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::FreeShader,
		/* .__delta2 = */ 31040
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::AllocRenderSurface,
		/* .__delta2 = */ 31096
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::FreeRenderSurface,
		/* .__delta2 = */ 31136
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::AllocMovie,
		/* .__delta2 = */ 31264
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Graphics::FreeMovie,
		/* .__delta2 = */ 31424
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::SetUpNormalMapMatrix,
		/* .__delta2 = */ 19576
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPs2Graphics* EPs2Graphics::EPs2Graphics() {
	EEvent *this;
	sceGifTag *pGifTag;
	
  ulong uVar1;
  int iVar2;
  
  __9EGraphics(&this->field0_0x0);
                    /* inlined from /eor/src2/common/sync/e_event.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_12EPs2Graphics;
  __12EVramManager(&this->m_vram);
  __17EInterruptHandler(&this->m_gsInterruptHandler);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  __10ESemaphore(&(this->m_gsEvent).m_sema);
  Create__10ESemaphoreii(&(this->m_gsEvent).m_sema,1,0);
                    /* end of inlined section */
  __6EMutex(&this->m_gsMutex);
  _pGfx = &this->field0_0x0;
  *(undefined4 *)this->m_gsIntDl = 0;
  *(undefined4 *)((int)this->m_gsIntDl + 4) = 0;
  *(undefined4 *)((int)this->m_gsIntDl + 8) = 0;
  *(undefined4 *)((int)this->m_gsIntDl + 0xc) = 0;
  uVar1 = *(ulong *)this->m_gsIntDl;
  iVar2 = 0x1c0;
  if (_iVideoMode == 1) {
    iVar2 = 0x200;
  }
  (this->field0_0x0).m_xscreen = 0x280;
  (this->field0_0x0).m_yscreen = iVar2;
  (this->field0_0x0).m_zBufferFormat = 1;
  (this->m_motionBlur).alpha = 0.1;
  (this->m_motionBlur).scaleY = 1.02;
  (this->m_motionBlur).scaleCenterY = 0.5;
  *(ulong *)this->m_gsIntDl = uVar1 & 0xfffffffffff8000 | 0x1000000000008001;
  (this->field0_0x0).m_frameBufferFormat = 0;
  this->m_pVramFrameBuffers = (EVramEntry *)0x0;
  this->m_pFFBuf = (fsAABuff__92_2218 *)0x0;
  this->m_pCopySprite = (gsDrawDecalSprite__92_2225 *)0x0;
  this->m_horizontalBlur = 0.0;
  *(undefined4 *)&this->m_motionBlurEnabled = 0;
  *(undefined4 *)&this->m_viewingVramEnabled = 0;
  (this->m_motionBlur).offsetX = 0.0;
  (this->m_motionBlur).offsetY = 0.0;
  (this->m_motionBlur).scaleX = 1.02;
  (this->m_motionBlur).scaleCenterX = 0.5;
  *(ulong *)((int)this->m_gsIntDl + 8) =
       *(ulong *)((int)this->m_gsIntDl + 8) & 0xfffffffffffffff0 | 0xe;
  *(undefined8 *)((int)this->m_gsIntDl + 0x18) = 0x60;
  *(undefined8 *)(this->m_gsIntDl + 1) = 0;
  this->m_pLastDisplayDL = (EDisplayDL *)0x0;
  return this;
}

void EPs2Graphics::~EPs2Graphics(int __in_chrg) {
	EEvent *this;
	void *pAddress;
	
  (this->field0_0x0).field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_12EPs2Graphics;
  _pGfx = &this->field0_0x0;
                    /* end of inlined section */
  Deallocate__12EVramManagerP10EVramEntryb(&this->m_vram,this->m_pVramFrameBuffers,true);
  _memmanFree__FPv(this->m_pFFBuf);
  _memmanFree__FPv(this->m_pCopySprite);
  ___6EMutex(&this->m_gsMutex,2);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  Destroy__10ESemaphore(&(this->m_gsEvent).m_sema);
  ___10ESemaphore(&(this->m_gsEvent).m_sema,2);
                    /* end of inlined section */
  ___17EInterruptHandler(&this->m_gsInterruptHandler,2);
  ___12EVramManager(&this->m_vram,2);
  ___9EGraphics(&this->field0_0x0,__in_chrg);
  return;
}

void EPs2Graphics::ClearVRAM(u32 rgba) {
	u32 colorABGR;
	int nImgBytes;
	u32 *pFillImg;
	long long unsigned int fillDL[32];
	sceGifPacket gifPkt;
	sceGsBitbltbuf *pBBCached;
	u32 v;
	int i;
	int vramAddr;
	int hardwareAddr;
	
  bool bVar1;
  uint *pImg;
  uint *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint16 fillDL [32];
  sceGifPacket__223_1192 gifPkt;
  
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  pImg = (uint *)_memmanAlloc__FUiUi(0x10000,0x80);
  iVar3 = 0x4000;
  puVar2 = pImg;
  do {
    *puVar2 = rgba << 0x18 | (rgba & 0xff00) << 8 | rgba >> 8 & 0xff00 | rgba >> 0x18;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  FillLoadDL__FPUxR12sceGifPacketiiiiiiiPvbN210_
            (fillDL,&gifPkt,0,0x20,0x200,0x20,0x200,0x20,0x1000,pImg,true,true,true);
  SyncDCache(fillDL,(int)fillDL + 0x1ff);
  iVar3 = 0;
  bVar1 = true;
  do {
    iVar4 = iVar3 + 0xff;
    if (bVar1) {
      iVar4 = iVar3;
    }
    uVar5 = ((long)(iVar4 >> 8) & 0x3fffU) << 0x20;
    *(ulong *)((uint)(fillDL + 3) | 0x20000000) =
         *(ulong *)((uint)(fillDL + 3) | 0x20000000) & 0xffffc000ffffffff | uVar5;
    iVar3 = iVar3 + 0x10000;
    fillDL[3]._0_8_ = (ulong)fillDL[3] & 0xffffc000ffffffff | uVar5;
    SendGSDisplayList__12EPs2GraphicsPvii(this,fillDL,0xe,1);
    bVar1 = -1 < iVar3;
  } while (iVar3 < 0x400000);
  _memmanFree__FPv(pImg);
  return;
}

bool EPs2Graphics::Init() {
  uint uVar1;
  bool bVar2;
  fsAABuff__92_2218 *pfVar3;
  gsDrawDecalSprite__92_2225 *pgVar4;
  
  bVar2 = Init__9EGraphics(&this->field0_0x0);
  if (bVar2) {
    Create__17EInterruptHandlerR6EEventi(&this->m_gsInterruptHandler,&this->m_gsEvent,0x20000000);
    uVar1 = REG_GIF_MODE;
    REG_GIF_MODE = uVar1 | 1;
    pfVar3 = (fsAABuff__92_2218 *)_memmanAlloc__FUiUi(0x280,0x10);
    this->m_pFFBuf = pfVar3;
    pgVar4 = (gsDrawDecalSprite__92_2225 *)_memmanAlloc__FUiUi(0x110,0x10);
    this->m_pCopySprite = pgVar4;
    Init__12EVramManagerUiUi(&this->m_vram,0,0x400000);
    Ps2InitVideo__12EPs2Graphicsb(this,true);
    bVar2 = Init__12EPs2Renderer(&_ps2rend);
    if ((bVar2) && (bVar2 = Init__17EPs2TextureLoader(&_ps2texload), bVar2)) {
      Init__4EVU1(&_vu1);
      bVar2 = Init__11EPs2Texture();
      if (!bVar2) {
        return false;
      }
      Init__10EPs2Shader();
      SendInitialDisplayList__12EPs2Graphics(this);
      ClearVRAM__12EPs2GraphicsUi(this,0xff8000ff);
      return true;
    }
  }
  return false;
}

void EPs2Graphics::SendInitialDisplayList() {
  return;
}

void EPs2Graphics::DoSetupFrameBuffer(int nFrame) {
  EGlobalManagerClient__vtable *pEVar1;
  
  DoSetupFrameBuffer__9EGraphicsi(&this->field0_0x0,nFrame);
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[0x10].ManagedShutdown)
            ((int)&(this->field0_0x0).field0_0x0.__vtable +
             (int)*(short *)&pEVar1[0x10].ManagedStartup,nFrame);
  SendGSDisplayList__12EPs2GraphicsPvii(this,&this->m_clearDL,10,0);
  return;
}

void EPs2Graphics::DoSwapBuffer(int nFrame) {
	static int skip = 0;
	
  int iVar1;
  
  DoSwapBuffer__9EGraphicsi(&this->field0_0x0,nFrame);
  if (skip_1929 < 1) {
    skip_1929 = skip_1929 + 1;
  }
  else {
    if (*(int *)&this->m_motionBlurEnabled == 0) {
      iVar1 = *(int *)&this->m_hires;
    }
    else {
      WaitGS__12EPs2Graphics(this);
      SetCopyPreviousFrameSprite__FP8fsAABuffP17gsDrawDecalSpriteiRC11EMotionBlur
                ((fsAABuff__258_1145 *)this->m_pFFBuf,
                 (gsDrawDecalSprite__258_1152 *)this->m_pCopySprite,nFrame,&this->m_motionBlur);
      PutCopySprite__FP9sceGifTag((sceGifTag__258_699 *)this->m_pCopySprite);
      WaitGS__12EPs2Graphics(this);
      iVar1 = *(int *)&this->m_hires;
    }
    if (iVar1 != 0) {
      WriteScreenOffset__12EPs2Graphics(this);
      PutDispBuffer__FP8fsAABuffii((fsAABuff__258_1145 *)this->m_pFFBuf,nFrame,1);
    }
  }
  return;
}

float EPs2Graphics::GetNearZVal() {
  int iVar1;
  
  iVar1 = (this->field0_0x0).m_zBufferFormat;
  if (iVar1 == 0) {
    return 62258.25;
  }
  if (iVar1 < 1) {
    if (iVar1 == -1) {
      return 1.593835e+07;
    }
  }
  else {
    if (iVar1 == 1) {
      return 1.593835e+07;
    }
    if (iVar1 == 2) {
      return 1.593835e+07;
    }
  }
  return 1.0;
}

void EPs2Graphics::GetPs2ZBufferFormat(int zbFormat, int &ps2Format, int &bytesPerPixel) {
  int iVar1;
  int iVar2;
  
  iVar1 = 0x32;
  if (zbFormat == 0) {
    iVar2 = 2;
  }
  else {
    if (zbFormat < 1) {
      iVar1 = 0x31;
      if (zbFormat != -1) {
        return;
      }
    }
    else if (zbFormat == 1) {
      iVar1 = 0x31;
    }
    else {
      iVar1 = 0x30;
      if (zbFormat != 2) {
        return;
      }
    }
    iVar2 = 4;
  }
  *ps2Format = iVar1;
  *bytesPerPixel = iVar2;
  return;
}

void EPs2Graphics::GetPs2FBufferFormat(int rsFormat, int &ps2Format, int &bytesPerPixel) {
  int iVar1;
  int iVar2;
  
  if (rsFormat == -1) {
    rsFormat = (this->field0_0x0).m_frameBufferFormat;
  }
  switch(rsFormat) {
  case 0:
    iVar1 = 2;
    if ((this->field0_0x0).m_zBufferFormat == 1) {
      iVar1 = 10;
    }
    *ps2Format = iVar1;
    *bytesPerPixel = 2;
    return;
  case 2:
    iVar1 = 1;
    iVar2 = 3;
    break;
  case 3:
    iVar1 = 0x32;
    if ((this->field0_0x0).m_zBufferFormat == 1) {
      iVar1 = 0x31;
      iVar2 = 4;
    }
    else {
      iVar2 = 2;
    }
    break;
  default:
    goto switchD_002b6ea0_caseD_5;
  case -1:
  case 1:
    *ps2Format = 0;
    *bytesPerPixel = 4;
    return;
  }
  *ps2Format = iVar1;
  *bytesPerPixel = iVar2;
switchD_002b6ea0_caseD_5:
  return;
}

void EPs2Graphics::WriteScreenOffset() {
	u32 newx;
	u32 newy;
	
  fsAABuff__92_2218 *pfVar1;
  ulong uVar2;
  tGS_DISPLAY1__92_701 tVar3;
  tGS_DISPLAY2__92_715 tVar4;
  ulong uVar5;
  
  pfVar1 = this->m_pFFBuf;
  uVar5 = (ulong)(int)(this->m_yOffsetBase + (this->field0_0x0).m_yoffset);
  uVar2 = (ulong)(int)(this->m_xOffsetBase + this->m_xOffsetMult * (this->field0_0x0).m_xoffset);
  if (((long)*(int *)&(pfVar1->disp0).display & 0xfffU) == uVar2) {
    if ((((long)(pfVar1->disp0).display << 0x14) >> 0x20 & 0x7ffU) == uVar5) {
      return;
    }
    tVar3 = (pfVar1->disp1).display1;
  }
  else {
    tVar3 = (pfVar1->disp1).display1;
  }
  uVar2 = uVar2 & 0xfff;
  tVar4 = (pfVar1->disp1).display;
  (pfVar1->disp0).display =
       (tGS_DISPLAY2__92_715)((ulong)(pfVar1->disp0).display & 0xfffffffffffff000 | uVar2);
  (pfVar1->disp1).display1 = (tGS_DISPLAY1__92_701)((ulong)tVar3 & 0xfffffffffffff000 | uVar2);
  uVar5 = uVar5 & 0x7ff;
  (pfVar1->disp0).display1 =
       (tGS_DISPLAY1__92_701)((ulong)(pfVar1->disp0).display1 & 0xfffffffffffff000 | uVar2);
  (pfVar1->disp1).display = (tGS_DISPLAY2__92_715)((ulong)tVar4 & 0xfffffffffffff000 | uVar2);
  uVar2 = uVar5 << 0xc;
  pfVar1 = this->m_pFFBuf;
  tVar3 = (pfVar1->disp1).display1;
  tVar4 = (pfVar1->disp1).display;
  (pfVar1->disp0).display1 =
       (tGS_DISPLAY1__92_701)((ulong)(pfVar1->disp0).display1 & 0xffffffffff800fff | uVar2);
  (pfVar1->disp0).display =
       (tGS_DISPLAY2__92_715)((ulong)(pfVar1->disp0).display & 0xffffffffff800fff | uVar2);
  (pfVar1->disp1).display1 =
       (tGS_DISPLAY1__92_701)((ulong)tVar3 & 0xffffffffff800fff | uVar5 << 0xc);
  (pfVar1->disp1).display = (tGS_DISPLAY2__92_715)((ulong)tVar4 & 0xffffffffff800fff | uVar2);
  SyncDCache(this->m_pFFBuf,&this->m_pFFBuf->field_0x27f);
  return;
}

void EPs2Graphics::Ps2InitVideo(bool fullReset) {
	int fFormat;
	int fBytesPerPixel;
	int zFormat;
	int zBytesPerPixel;
	u32 vramSize;
	EVramAllocParams vap;
	sceGsDBuffDc sceDB;
	u32 fb1Addr;
	u32 zbAddr;
	int nBytes;
	int i;
	
  fsAABuff__92_2218 *pfVar1;
  EGlobalManagerClient__vtable *pEVar2;
  EVramEntry *pEVar3;
  int iVar4;
  ulong uVar5;
  sceGsFrame__92_913 sVar6;
  ulong uVar7;
  undefined8 uVar8;
  sceGsTest__92_1011 sVar9;
  sceGsZbuf__92_1109 sVar10;
  sceGsTest__92_1011 sVar11;
  sceGsZbuf__92_1109 sVar12;
  EVramManager *this_00;
  uint nBytes;
  int iVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EDisplayDL *pDL;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  ulong uVar14;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  undefined auStack_4d0 [256];
  EVramAllocParams vap;
  sceGsDBuffDc__92_1152 sceDB;
  int fFormat;
  int fBytesPerPixel;
  int zFormat;
  int zBytesPerPixel;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (!fullReset) {
    sceGsSyncV(4);
    REG_GS_PMODE = 0;
  }
  this_00 = &this->m_vram;
  *(uint *)&this->m_hires = (this->field0_0x0).m_yscreen < 0x101 ^ 1;
  if (this->m_pVramFrameBuffers != (EVramEntry *)0x0) {
    Deallocate__12EVramManagerP10EVramEntryb(this_00,this->m_pVramFrameBuffers,true);
  }
  DiscardAll__12EVramManager(this_00);
  ResetAvailableMemoryConstants__12EVramManager(this_00);
  GetPs2FBufferFormat__12EPs2GraphicsiRiT2
            (this,(this->field0_0x0).m_frameBufferFormat,&fFormat,&fBytesPerPixel);
  GetPs2ZBufferFormat__12EPs2GraphicsiRiT2
            (this,(this->field0_0x0).m_zBufferFormat,&zFormat,&zBytesPerPixel);
                    /* inlined from e_vramman.h */
  vap.callbackParam = 0;
                    /* end of inlined section */
  vap.pfnCallback = (undefined1 *)0x0;
  vap._12_4_ = 0;
  vap.size = (this->field0_0x0).m_xscreen * (this->field0_0x0).m_yscreen *
             (fBytesPerPixel * 2 + zBytesPerPixel);
  pEVar3 = AllocateAndLock__12EVramManagerRC16EVramAllocParams(this_00,&vap);
  this->m_pVramFrameBuffers = pEVar3;
  ResetAvailableMemoryConstants__12EVramManager(this_00);
  if (fullReset) {
    sceDevVif0Reset();
    sceDevVif1Reset();
    sceDevVu0Reset();
    sceDevVu1Reset();
    sceVpu0Reset();
    sceGsResetPath();
    sceDmaReset(1);
  }
  uVar8 = 3;
  if (_iVideoMode != 1) {
    uVar8 = 2;
  }
  pDL = this->m_displayDL;
  sceGsResetGraph(0,1,uVar8,*(int *)&this->m_hires == 0);
  ClearVRAM__12EPs2GraphicsUi(this,0);
  SetupFS_AA_buffer__FP8fsAABuffssssssf
            ((fsAABuff__258_1145 *)this->m_pFFBuf,*(ushort *)&(this->field0_0x0).m_xscreen,
             *(ushort *)&(this->field0_0x0).m_yscreen,(ushort)fFormat,2,(ushort)zFormat,1,
             this->m_horizontalBlur);
  REG_GS_PMODE = 0;
  pfVar1 = this->m_pFFBuf;
  this->m_xOffsetBase = *(uint *)&(pfVar1->disp0).display & 0xfff;
  this->m_yOffsetBase = (uint)((ulong)((long)(pfVar1->disp0).display << 0x14) >> 0x20) & 0x7ff;
  this->m_xOffsetMult = (uint)((ulong)((long)(pfVar1->disp0).display << 9) >> 0x20) & 0xf;
  WriteScreenOffset__12EPs2Graphics(this);
  sceGsSetDefDBuffDc(&sceDB,(ushort)fFormat,*(undefined2 *)&(this->field0_0x0).m_xscreen,
                     *(undefined2 *)&(this->field0_0x0).m_yscreen,2,(ushort)zFormat,1);
  nBytes = (int)&sceDB - (int)auStack_4d0;
  iVar13 = (this->field0_0x0).m_xscreen * (this->field0_0x0).m_yscreen * fBytesPerPixel;
  iVar4 = iVar13 + 0x1fff;
  if (-1 < iVar13) {
    iVar4 = iVar13;
  }
  sceDB.draw11.frame1 = (sceGsFrame__92_913)((ulong)sceDB.draw11.frame1 & 0xfffffffffffffe00);
  sceDB.draw12.frame2 = (sceGsFrame__92_913)((ulong)sceDB.draw12.frame2 & 0xfffffffffffffe00);
  uVar14 = (ulong)((iVar4 >> 0xd) << 1);
  uVar7 = uVar14 & 0x1fe;
  uVar5 = (long)(iVar4 >> 0xd) & 0x1ff;
  sceDB.draw12.zbuf2 = (sceGsZbuf__92_1109)((ulong)sceDB.draw12.zbuf2 & 0xfffffffffffffe00 | uVar7);
  sceDB.draw01.zbuf1 = (sceGsZbuf__92_1109)((ulong)sceDB.draw01.zbuf1 & 0xfffffffffffffe00 | uVar7);
  sceDB.draw02.zbuf2 = (sceGsZbuf__92_1109)((ulong)sceDB.draw02.zbuf2 & 0xfffffffffffffe00 | uVar7);
  sceDB.draw11.zbuf1 = (sceGsZbuf__92_1109)((ulong)sceDB.draw11.zbuf1 & 0xfffffffffffffe00 | uVar7);
  sceDB.draw02.frame2 =
       (sceGsFrame__92_913)((ulong)sceDB.draw02.frame2 & 0xfffffffffffffe00 | uVar5);
  sceDB.draw01.frame1 =
       (sceGsFrame__92_913)((ulong)sceDB.draw01.frame1 & 0xfffffffffffffe00 | uVar5);
  memcpy(pDL,&sceDB.giftag0,nBytes);
  memcpy(this->m_displayDL + 1,&sceDB.giftag1,nBytes);
  uVar5 = *(ulong *)&this->m_displayDL[0].giftag;
  *(ulong *)&this->m_displayDL[1].giftag =
       *(ulong *)&this->m_displayDL[1].giftag & 0xffffffffffff8000 | 0x11;
  *(ulong *)&this->m_displayDL[0].giftag = uVar5 & 0xffffffffffff8000 | 0x11;
  memcpy(&(this->m_clearDL).clear,&sceDB.clear0,0x60);
  uVar5 = *(ulong *)&this->m_displayDL[0].giftag;
  *(undefined8 *)&(this->m_clearDL).giftag.field_0x8 =
       *(undefined8 *)&this->m_displayDL[0].giftag.field_0x8;
  *(ulong *)&(this->m_clearDL).giftag = uVar5 & 0xffffffffffff8000 | 9;
  if (fBytesPerPixel == 2) {
    (this->m_clearDL).dither = 1;
    (this->m_clearDL).ditherMatrix = 0x6071243571603524;
  }
  else {
    (this->m_clearDL).dither = 0;
  }
  (this->m_clearDL).ditherAddr = 0x45;
  pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
  iVar13 = 0x13;
  (this->m_clearDL).ditherMatrixAddr = 0x44;
  (*(code *)pEVar2[4].EGlobalManagerClient)
            ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)(pEVar2 + 4),
             &(this->field0_0x0).m_backgroundColor,
             *(undefined4 *)&(this->field0_0x0).m_frameBufferClear);
  this->m_displayDL[1].signal = 0;
  this->m_displayDL[0].signal = 0;
  (this->m_clearDL).signal = 0;
  (this->m_clearDL).sigAddr = 0x60;
  this->m_displayDL[1].sigAddr = 0x60;
  this->m_displayDL[0].sigAddr = 0x60;
  memcpy(&this->m_ZBasFBDL,pDL,0x120);
  sVar6 = (this->m_ZBasFBDL).draw2.frame2;
  uVar14 = uVar14 & 0x1fe;
  sVar10 = (this->m_ZBasFBDL).draw1.zbuf1;
  sVar11 = (this->m_ZBasFBDL).draw1.test1;
  sVar12 = (this->m_ZBasFBDL).draw2.zbuf2;
  sVar9 = (this->m_ZBasFBDL).draw2.test2;
  (this->m_ZBasFBDL).draw1.frame1 =
       (sceGsFrame__92_913)
       ((ulong)(this->m_ZBasFBDL).draw1.frame1 & 0xffffffffc0fffe00 | uVar14 |
       ((long)zFormat & 0x3fU) << 0x18);
  (this->m_ZBasFBDL).draw1.zbuf1 = (sceGsZbuf__92_1109)((ulong)sVar10 | 0x100000000);
  (this->m_ZBasFBDL).draw1.test1 = (sceGsTest__92_1011)((ulong)sVar11 & 0xfffffffffffeffff);
  (this->m_ZBasFBDL).draw2.frame2 =
       (sceGsFrame__92_913)
       ((ulong)sVar6 & 0xffffffffc0fffe00 | uVar14 | ((long)zFormat & 0x3fU) << 0x18);
  (this->m_ZBasFBDL).draw2.zbuf2 = (sceGsZbuf__92_1109)((ulong)sVar12 | 0x100000000);
  (this->m_ZBasFBDL).draw2.test2 = (sceGsTest__92_1011)((ulong)sVar9 & 0xfffffffffffeffff);
  LastDisplayDL__12EPs2GraphicsP10EDisplayDL(this,pDL);
  FlushCache(0);
  do {
    iVar13 = iVar13 + -1;
    sceGsSyncV(0);
  } while (-1 < iVar13);
  return;
}

void EPs2Graphics::LastDisplayDL(EDisplayDL *pDL) {
  uint uVar1;
  void *pvVar2;
  
  this->m_pLastDisplayDL = pDL;
  pvVar2 = (void *)(SUB84((pDL->draw1).zbuf1,0) & 0x1ff);
  this->m_pLastZbuffer = pvVar2;
  uVar1 = (uint)((ulong)(pDL->draw1).zbuf1 >> 0x18) & 0xf;
  this->m_lastZbufFormat = uVar1;
  DAT_1100c68c = (uint)pvVar2 | uVar1 << 0x18;
  return;
}

void EPs2Graphics::SetVideoMode(int xsize, int ysize, int frameBufferFormat, int zBufferFormat) {
  SetVideoMode__9EGraphicsiiii(&this->field0_0x0,xsize,ysize,frameBufferFormat,zBufferFormat);
  Ps2InitVideo__12EPs2Graphicsb(this,false);
  return;
}

void EPs2Graphics::GetOutputRect(EFloatRect &rcOut) {
  rcOut->left = (float)((this->field0_0x0).m_xscreen * -8 + 0x8000);
  rcOut->top = (float)((this->field0_0x0).m_yscreen * -8 + 0x8000);
  rcOut->right = (float)((this->field0_0x0).m_xscreen * 8 + 0x8000);
  rcOut->bottom = (float)((this->field0_0x0).m_yscreen * 8 + 0x8000);
  return;
}

float EPs2Graphics::GetScreenAspect() {
  float fVar1;
  
  fVar1 = 1.31;
  if (_iVideoMode == 1) {
    fVar1 = 1.38;
  }
  return fVar1;
}

void EPs2Graphics::SetBackgroundColor(EVec3 &color, bool clear) {
	unsigned char vals[3];
	
  uchar vals [3];
  
  SetBackgroundColor__9EGraphicsRC5EVec3b(&this->field0_0x0,color,clear);
  ToU8s__C5EVec3PUc(color,vals);
  *(uchar *)&(this->m_clearDL).clear.rgbaq = vals[0];
  (this->m_clearDL).clear.rgbaq.field_0x2 = vals[2];
  (this->m_clearDL).clear.rgbaq.field_0x1 = vals[1];
  FlushCache(0);
  return;
}

void EPs2Graphics::FixGSDisplayListAddress(void *&pDList) {
  void *pSource;
  
  pSource = *pDList;
  if ((undefined8 *)((uint)pSource & 0x1100c000) == &DAT_1100c000) {
    memcpy(&DAT_70000000,pSource,0x11010000 - (int)pSource);
    *pDList = (void *)0x80000000;
  }
  else if (((uint)pSource & 0xf0000000) == 0x70000000) {
    *pDList = (void *)((uint)pSource & 0x3ff0 | 0x80000000);
  }
  return;
}

void EPs2Graphics::SendGSDisplayList(void *pDList, int size, int chain) {
	u64 newIMR;
	u64 oldCSR;
	u64 newCSR;
	EMutex *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  ulong uVar2;
  void **ppvVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  void *local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50[0] = pDList;
  FixGSDisplayListAddress__12EPs2GraphicsRPv(this,local_50);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_gsMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)this->m_gsIntDl + *(short *)&pEVar1->Release + 0x40,0xffffffffffffffff);
                    /* end of inlined section */
  uVar2 = sceGsGetIMR();
  REG_GS_IMR = uVar2 & 0xfffffffffffffeff;
  uVar2 = REG_GS_CSR;
  REG_GS_CSR = uVar2 & 0xfffffffffffffcf0 | 1;
  REG_GIF_MODE = 4;
  if (chain == 0) {
    ppvVar3 = (void **)0x1000a010;
    REG_DMAC_2_GIF_QWC = size;
  }
  else {
    ppvVar3 = (void **)0x1000a030;
    REG_DMAC_2_GIF_QWC = 0;
  }
  *ppvVar3 = local_50[0];
  REG_DMAC_STAT = 4;
                    /* inlined from /eor/src2/common/sync/e_event.h */
                    /* end of inlined section */
  _ps2rend.m_nGSInterrupts = _ps2rend.m_nGSInterrupts + 1;
                    /* inlined from /eor/src2/common/sync/e_event.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_event.h */
                    /* end of inlined section */
  REG_DMAC_2_GIF_CHCR = chain << 2 | 0x101;
                    /* inlined from /eor/src2/common/sync/e_event.h */
  Acquire__10ESemaphoreUi(&(this->m_gsEvent).m_sema,0xffffffff);
  pEVar1 = (this->m_gsMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)((int)this->m_gsIntDl + *(short *)&pEVar1[1].ESyncObject + 0x40);
  return;
}

ERC* EPs2Graphics::AllocRC() {
  ERC *this_00;
  
  this_00 = (ERC *)__nw__6EPs2RCUi();
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2rc.h */
  __3ERC(this_00);
  this_00->__vtable = (ERC__vtable *)_vt_6EPs2RC;
  __4EVif((EVif *)(this_00 + 1));
                    /* end of inlined section */
  return this_00;
}

void EPs2Graphics::FreeRC(ERC *pRC) {
  if (pRC != (ERC *)0x0) {
    (*(code *)pRC->__vtable->TriStrip)((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->TriStrip,3)
    ;
  }
  return;
}

ETexture* EPs2Graphics::AllocTexture() {
  EPs2Texture *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2texture.h */
  pEVar1 = (EPs2Texture *)_allocBucketAlloc__FUiUi(0x2c0,0xf);
                    /* end of inlined section */
  pEVar1 = __11EPs2Texture(pEVar1);
  return &pEVar1->field0_0x0;
}

void EPs2Graphics::FreeTexture(ETexture *pTexture) {
  if (pTexture != (ETexture *)0x0) {
    (*(code *)pTexture->__vtable->Unlock)
              ((int)&(pTexture->m_textureDef).pfnAllocAlign +
               (int)*(short *)&pTexture->__vtable->Lock,3);
  }
  return;
}

EShader* EPs2Graphics::AllocShader() {
  EPs2Shader *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2shader.h */
  pEVar1 = (EPs2Shader *)_memmanAlloc__FUiUi(0xb0,0x10);
                    /* end of inlined section */
  pEVar1 = __10EPs2Shader(pEVar1);
  return &pEVar1->field0_0x0;
}

void EPs2Graphics::FreeShader(EShader *pShader) {
  if (pShader != (EShader *)0x0) {
    (*(code *)pShader->__vtable->SelectForShadowMask)
              ((int)(pShader->m_sd).rp + *(short *)&pShader->__vtable->Select + -0x10,3);
  }
  return;
}

ERenderSurface* EPs2Graphics::AllocRenderSurface() {
  EPs2RenderSurface *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2rendersurface.h */
  pEVar1 = (EPs2RenderSurface *)_memmanAlloc__FUiUi(0x370,0x10);
                    /* end of inlined section */
  pEVar1 = __17EPs2RenderSurface(pEVar1);
  return &pEVar1->field0_0x0;
}

void EPs2Graphics::FreeRenderSurface(ERenderSurface *pSurf) {
  if (pSurf != (ERenderSurface *)0x0) {
    (*(code *)pSurf->__vtable->GetOutputRect)
              ((int)&pSurf->m_xsize + (int)*(short *)&pSurf->__vtable->Create,3);
  }
  return;
}

void EPs2Graphics::Destroy(EShader *pShader) {
  if (pShader != (EShader *)0x0) {
    AboutToDestroy__10EPs2Shader((EPs2Shader *)pShader);
    Destroy__9EGraphicsP7EShader(&this->field0_0x0,pShader);
  }
  return;
}

EMovie* EPs2Graphics::AllocMovie() {
	void *ptr;
	ERingBuffer *this;
	ERingBuffer *this;
	ERingBuffer *this;
	
  EMovie *__s;
  
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2movie.h */
  __s = (EMovie *)_memmanAlloc__FUiUi(0x140,0x10);
  memset(__s,0,0x140);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  __s[8].__vtable = (EMovie__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
  __s->__vtable = (EMovie__vtable *)_vt_9EPs2Movie;
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  __s[9].__vtable = (EMovie__vtable *)0x0;
  __s[9].m_MovieX = 0;
  __s[9].m_MovieY = 0;
  __6EMutex((EMutex *)(__s + 10));
  __s[0xc].__vtable = (EMovie__vtable *)0x0;
  __s[0xd].__vtable = (EMovie__vtable *)0x0;
  __s[0xd].m_MovieX = 0;
  __s[0xd].m_MovieY = 0;
  __6EMutex((EMutex *)(__s + 0xe));
  __s[0x13].__vtable = (EMovie__vtable *)0x0;
  __s[0x14].__vtable = (EMovie__vtable *)0x0;
  __s[0x14].m_MovieX = 0;
  __s[0x14].m_MovieY = 0;
  __6EMutex((EMutex *)(__s + 0x15));
                    /* end of inlined section */
  return __s;
}

void EPs2Graphics::FreeMovie(EMovie *pMovie) {
  if (pMovie != (EMovie *)0x0) {
    (*(code *)pMovie->__vtable[1].EMovie)
              ((int)&pMovie->m_MovieX + (int)*(short *)&pMovie->__vtable[1].Update,3);
  }
  return;
}

void EPs2Graphics::SelectFrameBuffer(int which) {
	EDisplayDL *pDL;
	
  EDisplayDL *pDL;
  
  pDL = (EDisplayDL *)0x0;
  switch(which) {
  case 0:
    pDL = this->m_displayDL + 1;
    break;
  case 1:
    pDL = this->m_displayDL;
    break;
  case 3:
    pDL = &this->m_ZBasFBDL;
    break;
  case 5:
    pDL = this->m_displayDL + 1;
    if (_evenodd != 0) {
      pDL = this->m_displayDL;
    }
  }
  SendGSDisplayList__12EPs2GraphicsPvii(this,pDL,0x12,0);
  LastDisplayDL__12EPs2GraphicsP10EDisplayDL(this,pDL);
  _ps2FrameBuffer = which;
  return;
}

void EPs2Graphics::DeviceToPixelCoordinates(EVec2 &vDeviceCoord, EFloatRect &rDeviceRect, EVec2 &vPixelOut) {
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = rDeviceRect->left;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar3 = rDeviceRect->top;
  fVar2 = rDeviceRect->bottom;
  (vPixelOut->field0_0x0).d[0] =
       (((vDeviceCoord->field0_0x0).d[0] - fVar1) * (4096.0 - fVar1 * 0.125)) /
       (rDeviceRect->right - fVar1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (vPixelOut->field0_0x0).d[1] =
       (((vDeviceCoord->field0_0x0).d[1] - rDeviceRect->top) * (4096.0 - fVar3 * 0.125)) /
       (fVar2 - fVar3);
  return;
}

void EPs2Graphics::GetScissorRect(EFloatRect *prScissor, EFloatRect &rClipOut, EFloatRect &rOut) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = rOut->left;
  fVar3 = 4096.0 - fVar1 * 0.125;
  fVar2 = rOut->right - fVar1;
  fVar4 = rOut->bottom - rOut->top;
  fVar5 = 4096.0 - rOut->top * 0.125;
  prScissor->left = ((rClipOut->left - fVar1) * fVar3) / fVar2;
  prScissor->right = ((rClipOut->right - rOut->left) * fVar3) / fVar2 - 1.0;
  prScissor->top = ((rClipOut->top - rOut->top) * fVar5) / fVar4;
  prScissor->bottom = ((rClipOut->bottom - rOut->top) * fVar5) / fVar4 - 1.0;
  return;
}

void EPs2Graphics::WaitVU1() {
  sceGsSyncPath(0,0);
  return;
}

void EPs2Graphics::WaitGS() {
	static int _fullSync = 0;
	
  _fullSync_2017 = _fullSync_2017 + 1;
  sceGsSyncPath(0,0);
  return;
}

void EPs2Graphics::StoreTextureVIF1(u_long128 *base_addr, short int start_addr, short int pixel_mode, short int x, short int y, short int width, short int height) {
	int texture_qwc;
	sceVif1Packet vif1_pkt;
	long long unsigned int settup_base[10];
	int buff_width;
	u_long prev_imr;
	static unsigned int enable_path3[4] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	};
	
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  sceVif1Packet__223_1218 vif1_pkt;
  uint16 settup_base [10];
  
  lVar8 = (long)(int)(short)pixel_mode;
  iVar6 = (int)((uint)width << 0x10) >> 0x10;
  iVar7 = (int)(short)height;
  if (lVar8 == 0) {
    iVar6 = iVar6 * iVar7 * 0x20;
  }
  else if (lVar8 == 1) {
    iVar6 = iVar6 * iVar7 * 0x18;
  }
  else if (lVar8 == 2) {
    iVar6 = iVar6 * iVar7 * 0x10;
  }
  else if (lVar8 == 10) {
    iVar6 = iVar6 * iVar7 * 0x10;
  }
  else if (lVar8 == 0x13) {
    iVar6 = iVar6 * iVar7 * 8;
  }
  else {
    iVar6 = iVar6 * iVar7 * 4;
  }
  lVar5 = (long)((int)((uint)width << 0x10) >> 0x16);
  if (lVar5 < 1) {
    lVar5 = 1;
  }
  sceVif1PkInit(&vif1_pkt,settup_base);
  sceVif1PkReset(&vif1_pkt);
  sceVif1PkAddCode(&vif1_pkt,0);
  sceVif1PkAddCode(&vif1_pkt,0x6008000);
  sceVif1PkAddCode(&vif1_pkt,0x13000000);
  sceVif1PkAddCode(&vif1_pkt,0x50000006);
  sceVif1PkAddGsData(&vif1_pkt,0x1000000000008005);
  sceVif1PkAddGsData(&vif1_pkt,0xe);
  sceVif1PkAddGsData(&vif1_pkt,(long)(short)start_addr | lVar5 << 0x10 | (lVar8 << 0x30) >> 0x18);
  sceVif1PkAddGsData(&vif1_pkt,0x50);
  sceVif1PkAddGsData(&vif1_pkt,(long)((int)(short)y << 0x10) | (long)(short)x);
  sceVif1PkAddGsData(&vif1_pkt,0x51);
  sceVif1PkAddGsData(&vif1_pkt,(long)(short)width | ((long)iVar7 << 0x30) >> 0x10);
  sceVif1PkAddGsData(&vif1_pkt,0x52);
  sceVif1PkAddGsData(&vif1_pkt,0);
  sceVif1PkAddGsData(&vif1_pkt,0x60);
  sceVif1PkAddGsData(&vif1_pkt,1);
  sceVif1PkAddGsData(&vif1_pkt,0x53);
  sceVif1PkTerminate(&vif1_pkt);
  uVar3 = sceGsGetIMR();
  uVar4 = sceGsPutIMR(uVar3 | 0x200);
  REG_GS_CSR = 1;
  FlushCache(0);
  REG_DMAC_1_VIF1_QWC = 7;
  REG_DMAC_1_VIF1_MADR = (uint)vif1_pkt.pBase & 0xfffffff;
  REG_DMAC_1_VIF1_CHCR = 0x101;
  uVar1 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar1 & 0x100) != 0) {
    uVar1 = REG_DMAC_1_VIF1_CHCR;
  }
  do {
    uVar2 = REG_GS_CSR;
  } while ((((uint)uVar2 ^ 1) & 1) != 0);
  REG_VIF1_STAT = 0x800000;
  REG_GS_BUSDIR = 1;
  FlushCache(0);
  REG_DMAC_1_VIF1_QWC = iVar6 >> 7;
  REG_DMAC_1_VIF1_MADR = (uint)base_addr & 0xfffffff;
  REG_DMAC_1_VIF1_CHCR = 0x100;
  uVar1 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar1 & 0x100) != 0) {
    uVar1 = REG_DMAC_1_VIF1_CHCR;
  }
  REG_VIF1_STAT = 0;
  REG_GS_BUSDIR = 0;
  sceGsPutIMR(uVar4);
  REG_GS_CSR = 1;
  REG_VIF1_FIFO = (int)enable_path3_2021._0_8_;
  DAT_10005004 = (int)((ulong)enable_path3_2021._0_8_ >> 0x20);
  DAT_10005008 = enable_path3_2021._8_4_;
  DAT_1000500c = enable_path3_2021._12_4_;
  return;
}

void EPs2Graphics::GetScreenShot(char *szHostFileName) {
	int ps2Format;
	int bytesPerPixel;
	int nReadBytes;
	int nWriteBytes;
	u8 *p24BitImage;
	u32 pVramFrameBuffer;
	u8 *pCur;
	char szFileName[256];
	EFile *pFile;
	u32 *pFrameBufferImage;
	int i;
	u32 old;
	u16 *pFrameBufferImage;
	int i;
	
  EGlobalManagerClient__vtable *pEVar1;
  undefined4 uVar2;
  uint size;
  bool bVar3;
  byte *pAddress;
  uint16 *puVar4;
  uint16 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  ushort uVar11;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  char szFileName [256];
  int ps2Format;
  int bytesPerPixel;
  EFile *pFile;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[3].ManagedStartup
            );
  GetPs2FBufferFormat__12EPs2GraphicsiRiT2
            (this,(this->field0_0x0).m_frameBufferFormat,&ps2Format,&bytesPerPixel);
  iVar9 = (this->field0_0x0).m_xscreen * (this->field0_0x0).m_yscreen;
  uVar6 = iVar9 * bytesPerPixel;
  size = iVar9 * 3;
  pAddress = (byte *)_memmanAlloc__FUiUi(size,0x80);
  if (_evenodd == 0) {
    uVar11 = 0;
  }
  else {
    uVar7 = uVar6 + 0xff;
    if (-1 < (int)uVar6) {
      uVar7 = uVar6;
    }
    uVar11 = (ushort)(uVar7 >> 8);
  }
  if (bytesPerPixel == 4) {
    puVar4 = (uint16 *)_memmanAlloc__FUiUi(uVar6,0x80);
    iVar9 = (this->field0_0x0).m_yscreen;
    StoreTextureVIF1__12EPs2GraphicsPUxssssss
              (this,puVar4,uVar11,(ushort)ps2Format,0,0,*(ushort *)&(this->field0_0x0).m_xscreen,
               (ushort)((uint)((iVar9 - (iVar9 >> 0x1f)) * 0x8000) >> 0x10));
    iVar9 = (this->field0_0x0).m_yscreen;
    uVar7 = uVar6 + 0x1ff;
    if (-1 < (int)uVar6) {
      uVar7 = uVar6;
    }
    uVar8 = uVar6 + 7;
    if (-1 < (int)uVar6) {
      uVar8 = uVar6;
    }
    StoreTextureVIF1__12EPs2GraphicsPUxssssss
              (this,(uint16 *)((int)puVar4 + ((int)uVar8 >> 3) * 4),
               uVar11 + (short)((int)uVar7 >> 9),(ushort)ps2Format,0,0,
               *(ushort *)&(this->field0_0x0).m_xscreen,
               (ushort)((uint)((iVar9 - (iVar9 >> 0x1f)) * 0x8000) >> 0x10));
    iVar9 = 0;
    puVar5 = puVar4;
    pbVar10 = pAddress;
    if (0 < (this->field0_0x0).m_xscreen * (this->field0_0x0).m_yscreen) {
      do {
        uVar2 = *(undefined4 *)puVar5;
        iVar9 = iVar9 + 1;
        *pbVar10 = (byte)uVar2;
        pbVar10[1] = (byte)((uint)uVar2 >> 8);
        pbVar10[2] = (byte)((uint)uVar2 >> 0x10);
        puVar5 = (uint16 *)((int)puVar5 + 4);
        pbVar10 = pbVar10 + 3;
      } while (iVar9 < (this->field0_0x0).m_xscreen * (this->field0_0x0).m_yscreen);
    }
    _memmanFree__FPv(puVar4);
  }
  else {
    puVar5 = (uint16 *)_memmanAlloc__FUiUi(uVar6,0x80);
    StoreTextureVIF1__12EPs2GraphicsPUxssssss
              (this,puVar5,uVar11,(ushort)ps2Format,0,0,*(ushort *)&(this->field0_0x0).m_xscreen,
               *(ushort *)&(this->field0_0x0).m_yscreen);
    iVar9 = 0;
    puVar4 = puVar5;
    pbVar10 = pAddress;
    if (0 < (this->field0_0x0).m_xscreen * (this->field0_0x0).m_yscreen) {
      do {
        uVar11 = *(ushort *)puVar4;
        iVar9 = iVar9 + 1;
        uVar7 = (uVar11 & 0x1f) << 3;
        uVar6 = uVar11 >> 2 & 0xf8;
        uVar8 = uVar11 >> 7 & 0xf8;
        *pbVar10 = (byte)uVar7 | (byte)(uVar7 >> 5);
        pbVar10[1] = (byte)uVar6 | (byte)(uVar6 >> 5);
        pbVar10[2] = (byte)uVar8 | (byte)(uVar8 >> 5);
        puVar4 = (uint16 *)((int)puVar4 + 2);
        pbVar10 = pbVar10 + 3;
      } while (iVar9 < (this->field0_0x0).m_xscreen * (this->field0_0x0).m_yscreen);
    }
    _memmanFree__FPv(puVar5);
  }
  FlushCache(0);
  if (szHostFileName == (char *)0x0) {
    strcpy(szFileName,"/usr/ss0000.raw");
  }
  else {
    strcpy(szFileName,szHostFileName);
  }
  bVar3 = Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
                    (&_eorFileSys.field0_0x0,&pFile,szFileName,"w",DT_HOST,AM_RANDOM_ACCESS);
  if (bVar3) {
    (*(code *)pFile->__vtable->GetLastError)
              ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Flush,pAddress,size);
    Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&pFile);
  }
  _memmanFree__FPv(pAddress);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___12EPs2Graphics(&_ps2gfx,2);
    }
    else {
      __12EPs2Graphics(&_ps2gfx);
    }
  }
  return;
}

float EPs2Graphics::GetFarZVal() {
  return 0.0;
}

int EPs2Graphics::GetLargestAvailableTextureMemoryBlock() {
  int iVar1;
  
  iVar1 = GetLargestAvailableBlock__12EVramManager(&this->m_vram);
  return iVar1;
}

void EPs2Graphics::DiscardAllVram() {
  DiscardAll__12EVramManager(&this->m_vram);
  return;
}

EVramEntry* EPs2Graphics::AllocateAndLockVram(EVramAllocParams &param) {
  EVramEntry *pEVar1;
  
  pEVar1 = AllocateAndLock__12EVramManagerRC16EVramAllocParams(&this->m_vram,param);
  return pEVar1;
}

void EPs2Graphics::DeallocateVram(EVramEntry *pEntry, bool useMutex) {
  Deallocate__12EVramManagerP10EVramEntryb(&this->m_vram,pEntry,useMutex);
  return;
}

void EPs2Graphics::LockVram(EVramEntry *pEntry, bool useMutex) {
  Lock__12EVramManagerP10EVramEntryb(&this->m_vram,pEntry,useMutex);
  return;
}

void EPs2Graphics::UnlockVram(EVramEntry *pEntry) {
  Unlock__12EVramManagerP10EVramEntry(&this->m_vram,pEntry);
  return;
}

void EPs2Graphics::AcquireVramMutex() {
	EVramManager *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_vram).m_mutex.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)this->m_gsIntDl + *(short *)&pEVar1->Release + -0x80,0xffffffffffffffff);
  return;
}

void EPs2Graphics::ReleaseVramMutex() {
	EVramManager *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_vram).m_mutex.field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)((int)this->m_gsIntDl + *(short *)&pEVar1[1].ESyncObject + -0x80);
  return;
}

void EPs2Graphics::EnableMotionBlur(bool enable) {
  *(int *)&this->m_motionBlurEnabled = (int)enable;
  return;
}

void EPs2Graphics::AcquireGSMutex() {
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_gsMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)this->m_gsIntDl + *(short *)&pEVar1->Release + 0x40,0xffffffffffffffff);
  return;
}

void EPs2Graphics::ReleaseGSMutex() {
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_gsMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)((int)this->m_gsIntDl + *(short *)&pEVar1[1].ESyncObject + 0x40);
  return;
}

void global constructors keyed to _ps2gfx() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2gfx() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

// STATUS: NOT STARTED

#include "ewallutil.h"

TileWallsSegment _EWallConfigIdxMap[6] = {
	/* [0] = */ kBottomLeft,
	/* [1] = */ kTopRight,
	/* [2] = */ kBottomRight,
	/* [3] = */ kTopLeft,
	/* [4] = */ kVertDiag,
	/* [5] = */ kHorizDiag
};

EWallSetup _EWallConfigs[6] = {
	/* [0] = */ {
		/* .xoff = */ 0.f,
		/* .yoff = */ 0.f,
		/* .rot = */ 0.f,
		/* .pad = */ 0.f
	},
	/* [1] = */ {
		/* .xoff = */ 0.f,
		/* .yoff = */ 0.f,
		/* .rot = */ 0.f,
		/* .pad = */ 0.f
	},
	/* [2] = */ {
		/* .xoff = */ 0.f,
		/* .yoff = */ 0.f,
		/* .rot = */ 0.f,
		/* .pad = */ 0.f
	},
	/* [3] = */ {
		/* .xoff = */ 0.f,
		/* .yoff = */ 0.f,
		/* .rot = */ 0.f,
		/* .pad = */ 0.f
	},
	/* [4] = */ {
		/* .xoff = */ 0.f,
		/* .yoff = */ 0.f,
		/* .rot = */ 0.f,
		/* .pad = */ 0.f
	},
	/* [5] = */ {
		/* .xoff = */ 0.f,
		/* .yoff = */ 0.f,
		/* .rot = */ 0.f,
		/* .pad = */ 0.f
	}
};

ERoomWallModelIdTableNode _ERoomWallModelIdTable[4] = {
	/* [0] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 32029,
			/* [1] = */ 46637,
			/* [2] = */ 63398,
			/* [3] = */ 36475
		},
		/* .doorEndCapidx = */ {
			/* [0] = */ 63772,
			/* [1] = */ 26999,
			/* [2] = */ 63336,
			/* [3] = */ 22167
		},
		/* .windowStanEndCapidx = */ {
			/* [0] = */ 27703,
			/* [1] = */ 6722,
			/* [2] = */ 25204,
			/* [3] = */ 31444
		},
		/* .windowPlatEndCapidx = */ {
			/* [0] = */ 18275,
			/* [1] = */ 43750,
			/* [2] = */ 41281,
			/* [3] = */ 22979
		},
		/* .windowPrivEndCapidx = */ {
			/* [0] = */ 61608,
			/* [1] = */ 289,
			/* [2] = */ 3344,
			/* [3] = */ 45034
		}
	},
	/* [1] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 54698,
			/* [1] = */ 8142,
			/* [2] = */ 60253,
			/* [3] = */ 7545
		},
		/* .doorEndCapidx = */ {
			/* [0] = */ 55551,
			/* [1] = */ 64505,
			/* [2] = */ 20424,
			/* [3] = */ 56219
		},
		/* .windowStanEndCapidx = */ {
			/* [0] = */ 59700,
			/* [1] = */ 251,
			/* [2] = */ 38386,
			/* [3] = */ 767
		},
		/* .windowPlatEndCapidx = */ {
			/* [0] = */ 22280,
			/* [1] = */ 39053,
			/* [2] = */ 6885,
			/* [3] = */ 15880
		},
		/* .windowPrivEndCapidx = */ {
			/* [0] = */ 8115,
			/* [1] = */ 16828,
			/* [2] = */ 16517,
			/* [3] = */ 54451
		}
	},
	/* [2] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 63401,
			/* [1] = */ 13817,
			/* [2] = */ 8075,
			/* [3] = */ 63462
		},
		/* .doorEndCapidx = */ {
			/* [0] = */ 36881,
			/* [1] = */ 16426,
			/* [2] = */ 65081,
			/* [3] = */ 6396
		},
		/* .windowStanEndCapidx = */ {
			/* [0] = */ 29367,
			/* [1] = */ 55341,
			/* [2] = */ 18007,
			/* [3] = */ 20354
		},
		/* .windowPlatEndCapidx = */ {
			/* [0] = */ 44333,
			/* [1] = */ 37435,
			/* [2] = */ 36319,
			/* [3] = */ 39852
		},
		/* .windowPrivEndCapidx = */ {
			/* [0] = */ 35125,
			/* [1] = */ 11711,
			/* [2] = */ 52873,
			/* [3] = */ 35785
		}
	},
	/* [3] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 26994,
			/* [1] = */ 17251,
			/* [2] = */ 10918,
			/* [3] = */ 5371
		},
		/* .doorEndCapidx = */ {
			/* [0] = */ 40287,
			/* [1] = */ 40460,
			/* [2] = */ 23765,
			/* [3] = */ 17421
		},
		/* .windowStanEndCapidx = */ {
			/* [0] = */ 10447,
			/* [1] = */ 38193,
			/* [2] = */ 50345,
			/* [3] = */ 14717
		},
		/* .windowPlatEndCapidx = */ {
			/* [0] = */ 28929,
			/* [1] = */ 1819,
			/* [2] = */ 48350,
			/* [3] = */ 51538
		},
		/* .windowPrivEndCapidx = */ {
			/* [0] = */ 9386,
			/* [1] = */ 21153,
			/* [2] = */ 57880,
			/* [3] = */ 29320
		}
	}
};

EDiagRoomWallModelIdTableNode _EDiagRoomWallModelIdTable[4] = {
	/* [0] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 31020,
			/* [1] = */ 64498,
			/* [2] = */ 15457,
			/* [3] = */ 163
		}
	},
	/* [1] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 2148,
			/* [1] = */ 819,
			/* [2] = */ 13787,
			/* [3] = */ 14136
		}
	},
	/* [2] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 25720,
			/* [1] = */ 61040,
			/* [2] = */ 42536,
			/* [3] = */ 39949
		}
	},
	/* [3] = */ {
		/* .standardEndCapidx = */ {
			/* [0] = */ 5424,
			/* [1] = */ 5809,
			/* [2] = */ 44946,
			/* [3] = */ 43926
		}
	}
};

void SwapXY(EMat4 &m) {
	EMat4 &m;
	float temp;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 &m;
	float temp;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 &m;
	float temp;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 &m;
	float temp;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = (m->field0_0x0).d[0];
  fVar1 = (m->field0_0x0).d[1];
  fVar7 = (m->field0_0x0).d[1][0];
  fVar3 = (m->field0_0x0).d[1][1];
  fVar6 = (m->field0_0x0).d[2][0];
  fVar2 = (m->field0_0x0).d[2][1];
  fVar5 = (m->field0_0x0).d[3][1];
  (m->field0_0x0).d[3][1] = (m->field0_0x0).d[3][0];
  (m->field0_0x0).d[0] = fVar1;
  (m->field0_0x0).d[1] = fVar4;
  (m->field0_0x0).d[1][0] = fVar3;
  (m->field0_0x0).d[1][1] = fVar7;
  (m->field0_0x0).d[2][0] = fVar2;
  (m->field0_0x0).d[2][1] = fVar6;
  (m->field0_0x0).d[3][0] = fVar5;
  return;
}

int RemapWallCfgIdx(TileWallsSegment seg) {
	int i;
	
  int iVar1;
  TileWallsSegment *pTVar2;
  
  iVar1 = 0;
  pTVar2 = _EWallConfigIdxMap;
  do {
    if (*pTVar2 == seg) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    pTVar2 = pTVar2 + 1;
  } while (iVar1 < 6);
  return -1;
}

u32 RemapWallpaperId(u32 patt) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  return ((_globals._pWallSet)->field0_0x0).pData[patt]->shaderID;
}

u32 RemapFloorId(u32 patt) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  return ((_globals._pFloorSet)->field0_0x0).pData[patt]->shaderID;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	EWallSetup *this;
	void *pAddress;
	
  ERoomWallModelIdTableNode *pEVar1;
  
  if (__priority == 0xffff) {
    if (__initialize_p != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
      _EWallConfigs[0].xoff = 0.5;
      _EWallConfigs[0].yoff = 0.0;
      _EWallConfigs[0].rot = 0.0;
      _EWallConfigs[0].pad = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
      _EWallConfigs[1].xoff = 0.0;
      _EWallConfigs[1].yoff = -0.5;
      _EWallConfigs[1].rot = 2.0;
      _EWallConfigs[1].pad = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
      _EWallConfigs[2].yoff = 0.5;
      _EWallConfigs[2].xoff = 0.0;
      _EWallConfigs[2].rot = 2.0;
      _EWallConfigs[2].pad = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
      _EWallConfigs[3].xoff = -0.5;
      _EWallConfigs[3].yoff = 0.0;
      _EWallConfigs[3].rot = 0.0;
      _EWallConfigs[3].pad = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
      _EWallConfigs[4].rot = 2.0;
      _EWallConfigs[4].xoff = 0.0;
      _EWallConfigs[4].yoff = 0.0;
      _EWallConfigs[4].pad = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
      _EWallConfigs[5].pad = 0.0;
      _EWallConfigs[5].xoff = 0.0;
      _EWallConfigs[5].yoff = 0.0;
                    /* end of inlined section */
      _EWallConfigs[5].rot = 0.0;
      return;
    }
    pEVar1 = _ERoomWallModelIdTable;
    do {
      pEVar1 = (ERoomWallModelIdTableNode *)pEVar1[-1].windowPrivEndCapidx;
    } while (pEVar1 != (ERoomWallModelIdTableNode *)_EWallConfigs);
  }
                    /* end of inlined section */
  return;
}

void global constructors keyed to SwapXY() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to SwapXY() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

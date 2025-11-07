// STATUS: NOT STARTED

#include "e_rc.h"

__vtbl_ptr_type ERC virtual table[74] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::~ERC,
		/* .__delta2 = */ -28752
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriStrip,
		/* .__delta2 = */ -28008
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriStrip,
		/* .__delta2 = */ -27848
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriStrip,
		/* .__delta2 = */ -27616
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriIndexed,
		/* .__delta2 = */ -17920
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Vertex,
		/* .__delta2 = */ -18168
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriFan,
		/* .__delta2 = */ -27384
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriList,
		/* .__delta2 = */ -27216
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::QuadList,
		/* .__delta2 = */ -27048
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::LineList,
		/* .__delta2 = */ -26880
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::LineStrip,
		/* .__delta2 = */ -26712
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::PointList,
		/* .__delta2 = */ -26544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::PointList,
		/* .__delta2 = */ -26376
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SpriteList,
		/* .__delta2 = */ -26144
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ParticleList,
		/* .__delta2 = */ -25744
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ParticleListRot,
		/* .__delta2 = */ -25576
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SpriteList,
		/* .__delta2 = */ -25976
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::DisplayList,
		/* .__delta2 = */ -25312
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Goto,
		/* .__delta2 = */ -25112
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Viewport,
		/* .__delta2 = */ -24616
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ClipRatio,
		/* .__delta2 = */ -24488
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ClipRect,
		/* .__delta2 = */ -24360
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Scissor,
		/* .__delta2 = */ -24200
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ModelMatrices,
		/* .__delta2 = */ -24072
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ModelMatrix,
		/* .__delta2 = */ -17144
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ModelMatrixId,
		/* .__delta2 = */ -23720
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ViewMatrix,
		/* .__delta2 = */ -23672
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ProjectionMatrix,
		/* .__delta2 = */ -23544
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::WindowMatrix,
		/* .__delta2 = */ -23416
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::EnvironmentMap,
		/* .__delta2 = */ -20240
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TextureMatrix,
		/* .__delta2 = */ -20024
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Texture,
		/* .__delta2 = */ -23288
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::EnableGeometryModes,
		/* .__delta2 = */ -23104
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::DisableGeometryModes,
		/* .__delta2 = */ -22976
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SetGeometryModes,
		/* .__delta2 = */ -22840
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::EnableRasterModes,
		/* .__delta2 = */ -22712
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::DisableRasterModes,
		/* .__delta2 = */ -22568
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SetRasterModes,
		/* .__delta2 = */ -22416
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SaveState,
		/* .__delta2 = */ -22272
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::RestoreState,
		/* .__delta2 = */ -22160
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Lights,
		/* .__delta2 = */ -22048
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::PointLight,
		/* .__delta2 = */ -21904
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Material,
		/* .__delta2 = */ -21776
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Callback,
		/* .__delta2 = */ -21176
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Rect,
		/* .__delta2 = */ -20760
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::RectList,
		/* .__delta2 = */ -20968
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::DirectRect,
		/* .__delta2 = */ -20472
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SendHardwareDisplayList,
		/* .__delta2 = */ -21320
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Memcpy,
		/* .__delta2 = */ -19768
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::MipMapSetup,
		/* .__delta2 = */ -21648
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SetMipMap,
		/* .__delta2 = */ -21488
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::RecalcMatrices,
		/* .__delta2 = */ -19600
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ZTest,
		/* .__delta2 = */ -19168
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::AlphaTest,
		/* .__delta2 = */ -18992
	},
	/* [55] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::RenderSurface,
		/* .__delta2 = */ -18440
	},
	/* [56] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Debug,
		/* .__delta2 = */ -19456
	},
	/* [57] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SaveImageData,
		/* .__delta2 = */ -18296
	},
	/* [58] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SetCombineMode,
		/* .__delta2 = */ -18584
	},
	/* [59] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SetBlendMode,
		/* .__delta2 = */ -18808
	},
	/* [60] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SleepUntil,
		/* .__delta2 = */ -17776
	},
	/* [61] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Noop,
		/* .__delta2 = */ -17768
	},
	/* [62] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ZClear,
		/* .__delta2 = */ -17656
	},
	/* [63] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::MovieFrame,
		/* .__delta2 = */ -17272
	},
	/* [64] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::LoadMPG,
		/* .__delta2 = */ -16936
	},
	/* [65] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Init,
		/* .__delta2 = */ -28704
	},
	/* [66] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Terminate,
		/* .__delta2 = */ -24760
	},
	/* [67] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::NewEntry,
		/* .__delta2 = */ -28208
	},
	/* [68] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::BeginCommand,
		/* .__delta2 = */ -28568
	},
	/* [69] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::EndCommand,
		/* .__delta2 = */ -28432
	},
	/* [70] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::GeometrySetup,
		/* .__delta2 = */ -19312
	},
	/* [71] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::FlushQueuedMatrices,
		/* .__delta2 = */ -19200
	},
	/* [72] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::QueueMatrices,
		/* .__delta2 = */ -23880
	},
	/* [73] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ERC* ERC::ERC() {
  this->m_nSegs = 0;
  this->__vtable = (ERC__vtable *)_vt_3ERC;
  return this;
}

void ERC::~ERC(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ERC__vtable *)_vt_3ERC;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ERC::Init(RCMode mode) {
	ERC *this;
	
  EGraphics *this_00;
  EDL *pEVar1;
  EDLEntry *pEVar2;
  
  this_00 = _pGfx;
  this->m_mode = mode;
  pEVar1 = AllocDisplayList__9EGraphics(this_00);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  this->m_pdl = pEVar1;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  pEVar2 = (EDLEntry *)Alloc__11EAllocGroupUii(&pEVar1->m_flushableAllocGroup,0x1000,0x10);
                    /* end of inlined section */
  this->m_nSegs = this->m_nSegs + 1;
  this->m_pdl->m_pStart = pEVar2;
  this->m_nEntriesLeftInSeg = 0x200;
  this->m_pEntry = pEVar2;
  this->m_lastMatrixPos = -1;
  this->m_firstMatrixPos = 100;
  this->m_dstBufferOffset = 0;
  *(undefined4 *)&this->m_anyCommands = 0;
  *(undefined4 *)&this->m_closed = 0;
  this->m_lastCommand = 0;
  return;
}

void ERC::BeginCommand(int command, int prim) {
	int lastCommand;
	
  int iVar1;
  
  iVar1 = this->m_lastCommand;
  this->m_lastCommand = command;
  if ((iVar1 == 1) && (command != 1)) {
    (*(code *)this->__vtable[1].GeometrySetup)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].EndCommand,command,prim);
  }
  if ((command == 2) && (iVar1 != 2)) {
    (*(code *)this->__vtable[1].BeginCommand)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].NewEntry);
  }
  return;
}

void ERC::EndCommand() {
  *(undefined4 *)&this->m_anyCommands = 1;
  return;
}

void ERC::Send() {
	EAllocGroup tag;
	ERC *this;
	EDL *this;
	
  EDLEntry *pEVar1;
  EAllocGroup tag;
  
  if ((*(int *)&this->m_anyCommands != 0) && (*(int *)&this->m_closed == 0)) {
    (*(code *)this->__vtable[1].SleepUntil)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].SetBlendMode);
    __11EAllocGroup(&tag);
    MoveContents__11EAllocGroupR11EAllocGroup(&tag,&this->m_pdl->m_allocGroup);
    Execute__9EGraphicsP3EDLb(_pGfx,this->m_pdl,true);
    this->m_pdl = (EDL *)0x0;
    (*(code *)this->__vtable[1].SetCombineMode)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].SaveImageData,0);
    MoveContents__11EAllocGroupR11EAllocGroup(&this->m_pdl->m_allocGroup,&tag);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
    pEVar1 = (EDLEntry *)Alloc__11EAllocGroupUii(&this->m_pdl->m_flushableAllocGroup,0x1000,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_allocgroup.h */
                    /* end of inlined section */
    this->m_pdl->m_pStart = pEVar1;
                    /* inlined from /eor/src2/common/datastruc/e_allocgroup.h */
    this->m_pEntry = pEVar1;
    DeallocateAll__11EAllocGroup(&tag);
    RemoveAll__9ENodeList((ENodeList *)&tag);
                    /* end of inlined section */
  }
  return;
}

EDLEntry* ERC::NewEntry(int count) {
	EDLEntry *pNewEntry;
	ERC *this;
	EDL *this;
	
  EDLEntry *pDLE;
  
  if (count < this->m_nEntriesLeftInSeg) {
    pDLE = this->m_pEntry;
    this->m_nEntriesLeftInSeg = this->m_nEntriesLeftInSeg - count;
    this->m_pEntry = pDLE + count;
  }
  else {
                    /* inlined from c:/eor/src2/engine/e_rc.h */
    pDLE = (EDLEntry *)Alloc__11EAllocGroupUii(&this->m_pdl->m_flushableAllocGroup,0x1000,0x10);
                    /* end of inlined section */
    if (pDLE == (EDLEntry *)0x0) {
      this->m_pEntry = (EDLEntry *)0x0;
      pDLE = (EDLEntry *)0x0;
    }
    else {
      this->m_nSegs = this->m_nSegs + 1;
      Connect__3ERCP8EDLEntryT1(this->m_pEntry,pDLE);
      this->m_nEntriesLeftInSeg = 0x200 - count;
      this->m_pEntry = pDLE + count;
    }
  }
  return pDLE;
}

void ERC::Connect(EDLEntry *pDLECommand, EDLEntry *pDLE) {
  *(EDLEntry **)((int)&pDLECommand->align_data + 4) = pDLE;
  *(undefined *)&pDLECommand->align_data = 7;
  return;
}

void ERC::TriStrip(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,1);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *(short *)(puVar1 + 2) = (short)nVerts;
    *puVar1 = 0;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::TriStrip(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,1);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,4);
    *(uchar **)(puVar1 + 0x18) = weights;
    *puVar1 = 0x2a;
    *(int *)(puVar1 + 4) = nVerts;
    *(float **)(puVar1 + 8) = xyzs;
    *(float **)(puVar1 + 0xc) = texcoords;
    *(uchar **)(puVar1 + 0x10) = colors;
    *(char **)(puVar1 + 0x14) = normals;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::TriStrip(int nVerts, s16 *xyzs, s16 *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,1);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,4);
    *(uchar **)(puVar1 + 0x18) = weights;
    *puVar1 = 0x39;
    *(int *)(puVar1 + 4) = nVerts;
    *(ushort **)(puVar1 + 8) = xyzs;
    *(ushort **)(puVar1 + 0xc) = texcoords;
    *(uchar **)(puVar1 + 0x10) = colors;
    *(char **)(puVar1 + 0x14) = normals;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::TriFan(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,2);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *puVar1 = 1;
    *(short *)(puVar1 + 2) = (short)nVerts;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::TriList(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,3);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *puVar1 = 2;
    *(short *)(puVar1 + 2) = (short)nVerts;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::QuadList(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,8);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *puVar1 = 3;
    *(short *)(puVar1 + 2) = (short)nVerts;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::LineList(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,5);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *puVar1 = 0x1a;
    *(short *)(puVar1 + 2) = (short)nVerts;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::LineStrip(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,4);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *puVar1 = 0x1b;
    *(short *)(puVar1 + 2) = (short)nVerts;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::PointList(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,7);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *puVar1 = 4;
    *(short *)(puVar1 + 2) = (short)nVerts;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::PointList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,7);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,4);
    *(uchar **)(puVar1 + 0x18) = weights;
    *puVar1 = 0x31;
    *(int *)(puVar1 + 4) = nVerts;
    *(float **)(puVar1 + 8) = xyzs;
    *(float **)(puVar1 + 0xc) = texcoords;
    *(uchar **)(puVar1 + 0x10) = colors;
    *(char **)(puVar1 + 0x14) = normals;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::SpriteList(EGEVert *verts, int nVerts) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,6);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEVert **)(puVar1 + 4) = verts;
    *puVar1 = 5;
    *(short *)(puVar1 + 2) = (short)nVerts;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::SpriteList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,6);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,4);
    *(uchar **)(puVar1 + 0x18) = weights;
    *puVar1 = 0x32;
    *(int *)(puVar1 + 4) = nVerts;
    *(float **)(puVar1 + 8) = xyzs;
    *(float **)(puVar1 + 0xc) = texcoords;
    *(uchar **)(puVar1 + 0x10) = colors;
    *(char **)(puVar1 + 0x14) = normals;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::ParticleList(int nParticles, EGEPackedParticle *pPcls) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  if (nParticles != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0xc);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nParticles * 2;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEPackedParticle **)(puVar1 + 4) = pPcls;
    *puVar1 = 0x3c;
    *(short *)(puVar1 + 2) = (short)nParticles;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::ParticleListRot(int nParticles, EGEPackedParticle *pPcls) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  if (nParticles != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0xc);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nParticles * 2;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *(EGEPackedParticle **)(puVar1 + 4) = pPcls;
    *puVar1 = 0x3d;
    *(short *)(puVar1 + 2) = (short)nParticles;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::AddDisplayListReference(EDL *pDL) {
	EDL *data;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if (((pDL->m_textureRefs).field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) ||
     ((pDL->m_dlRefs).field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_pdl->m_dlRefs).field0_0x0,(uint)pDL);
    AddTail__9ENodeListUi(&(this->m_pdl->m_textureRefs).field0_0x0,0);
    AddTail__9ENodeListUi(&(this->m_pdl->m_texturePasses).field0_0x0,0);
                    /* end of inlined section */
  }
  return;
}

void ERC::DisplayList(EDL *pDL) {
	EDLEntryCommandU32 *p;
	EDL *this;
	
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  if (pDL != (EDL *)0x0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + pDL->m_nVerts;
    puVar2 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *puVar2 = 6;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    *(EDLEntry **)(puVar2 + 4) = pDL->m_pStart;
    AddDisplayListReference__3ERCP3EDL(this,pDL);
    iVar1 = this->m_pdl->m_branchDepth;
    iVar3 = pDL->m_branchDepth + 1;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    this->m_pdl->m_branchDepth = iVar3;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::Goto(EDL *pDL) {
	EDLEntryCommandU32 *p;
	EDL *this;
	
  undefined *puVar1;
  
  if (pDL != (EDL *)0x0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + pDL->m_nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    *puVar1 = 7;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    *(EDLEntry **)(puVar1 + 4) = pDL->m_pStart;
    AddDisplayListReference__3ERCP3EDL(this,pDL);
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::ShrinkSmallDisplayList() {
	int size;
	void *pNewData;
	ERC *this;
	void *pData;
	int size;
	int size;
	void *pData;
	EDL *this;
	void *pData;
	void *data;
	
  EDLEntry *pDest;
  uint size;
  
  if ((this->m_nSegs == 1) && (this->m_nEntriesLeftInSeg != 0)) {
    size = (int)this->m_pEntry - (int)this->m_pdl->m_pStart;
    pDest = (EDLEntry *)_memmanAlloc__FUiUi(size,4);
    if (pDest != (EDLEntry *)0x0) {
      memcpy(pDest,this->m_pdl->m_pStart,size);
      RemoveAllocExternal__11EAllocGroupPv
                (&this->m_pdl->m_flushableAllocGroup,this->m_pdl->m_pStart);
      _memmanFree__FPv(this->m_pdl->m_pStart);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      this->m_pdl->m_pStart = pDest;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      AddHead__9ENodeListUi((ENodeList *)&this->m_pdl->m_flushableAllocGroup,(uint)pDest);
    }
  }
  return;
}

void ERC::Terminate() {
  undefined *puVar1;
  ERC__vtable *pEVar2;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *puVar1 = 8;
  *(undefined4 *)&this->m_closed = 1;
  if (this->m_mode == RC_RETAINED) {
    ShrinkSmallDisplayList__3ERC(this);
    pEVar2 = this->__vtable;
  }
  else {
    pEVar2 = this->__vtable;
  }
  (*(code *)pEVar2[1].Terminate)((int)&this->m_pdl + (int)*(short *)&pEVar2[1].Init);
  return;
}

void ERC::Viewport(EViewport *pVP) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EViewport **)(puVar1 + 4) = pVP;
  *puVar1 = 9;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::ClipRatio(float clipRatio) {
	EDLEntryCommandF32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(float *)(puVar1 + 4) = clipRatio;
  *puVar1 = 10;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::ClipRect(EFloatRect &rect) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,3);
  *puVar1 = 0x37;
  *(float *)(puVar1 + 8) = rect->left;
  *(float *)(puVar1 + 0xc) = rect->top;
  *(float *)(puVar1 + 0x10) = rect->right;
  *(float *)(puVar1 + 0x14) = rect->bottom;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Scissor(EFloatRect *pScis) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(TRect_float_ **)(puVar1 + 4) = pScis;
  *puVar1 = 0xb;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::ModelMatrices(EMat4 *mModels, int pos, int count) {
	u32 nBytes;
	
  ERC__vtable *pEVar1;
  
  if (-1 < this->m_lastMatrixPos) {
    if (this->m_lastMatrixPos == pos + -1) {
      pEVar1 = this->__vtable;
      goto LAB_002fa24c;
    }
    (*(code *)this->__vtable[1].GeometrySetup)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].EndCommand);
  }
  pEVar1 = this->__vtable;
LAB_002fa24c:
  (*(code *)pEVar1[1].QueueMatrices)
            ((int)&this->m_pdl + (int)*(short *)&pEVar1[1].FlushQueuedMatrices,mModels,pos,count);
  this->m_lastCommand = 1;
  if (pos < this->m_firstMatrixPos) {
    this->m_firstMatrixPos = pos;
  }
  this->m_lastMatrixPos = pos + count + -1;
  this->m_dstBufferOffset = this->m_dstBufferOffset + count * 0x40;
  return;
}

void ERC::QueueMatrices(EMat4 *mModels, int pos, int count) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,1,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EMat4 **)(puVar1 + 4) = mModels;
  puVar1[1] = (char)pos;
  puVar1[2] = (char)count;
  *puVar1 = 0xc;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::ModelMatrixId() {
  (*(code *)this->__vtable->SetMipMap)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable->MipMapSetup,0x392480);
  return;
}

void ERC::ViewMatrix(EMat4 *pmView) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EMat4 **)(puVar1 + 4) = pmView;
  *puVar1 = 0xd;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::ProjectionMatrix(EMat4 *pmProjection) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EMat4 **)(puVar1 + 4) = pmProjection;
  *puVar1 = 0xe;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::WindowMatrix(EMat4 *pmWindow) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EMat4 **)(puVar1 + 4) = pmWindow;
  *puVar1 = 0xf;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Texture(ETexture *pTexture, int renderPass) {
	EDLEntryCommandU32 *p;
	ETexture *data;
	int data;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(ETexture **)(puVar1 + 4) = pTexture;
  *puVar1 = 0x11;
  puVar1[1] = (char)renderPass;
  if (pTexture != (ETexture *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_pdl->m_textureRefs).field0_0x0,(uint)pTexture);
    AddTail__9ENodeListUi(&(this->m_pdl->m_texturePasses).field0_0x0,renderPass);
  }
                    /* end of inlined section */
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::EnableGeometryModes(u32 modeFlags) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(uint *)(puVar1 + 4) = modeFlags;
  *puVar1 = 0x12;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::DisableGeometryModes(u32 modeFlags) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(uint *)(puVar1 + 4) = ~modeFlags;
  *puVar1 = 0x13;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SetGeometryModes(u32 modeFlags) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(uint *)(puVar1 + 4) = modeFlags;
  *puVar1 = 0x14;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::EnableRasterModes(u32 modeFlags, int renderPass) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(uint *)(puVar1 + 4) = modeFlags;
  puVar1[1] = (char)renderPass;
  *puVar1 = 0x15;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::DisableRasterModes(u32 modeFlags, int renderPass) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(uint *)(puVar1 + 4) = ~modeFlags;
  puVar1[1] = (char)renderPass;
  *puVar1 = 0x16;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SetRasterModes(u32 modeFlags, int renderPass) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(uint *)(puVar1 + 4) = modeFlags;
  puVar1[1] = (char)renderPass;
  *puVar1 = 0x17;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SaveState() {
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *puVar1 = 0x1c;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::RestoreState() {
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *puVar1 = 0x1d;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Lights(ELights *pLights, int nDirectionalLights) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(ELights **)(puVar1 + 4) = pLights;
  puVar1[1] = (char)nDirectionalLights;
  *puVar1 = 0x18;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::PointLight(EPointLight *pPointLight) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EPointLight **)(puVar1 + 4) = pPointLight;
  *puVar1 = 0x35;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Material(EMaterial *pMaterial) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EMaterial **)(puVar1 + 4) = pMaterial;
  *puVar1 = 0x23;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::MipMapSetup(EGEVert *verts, bool useSize, bool useAngle) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EGEVert **)(puVar1 + 4) = verts;
  puVar1[1] = useSize;
  puVar1[2] = useAngle;
  *puVar1 = 0x24;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SetMipMap(float scaleMult, float angularMult) {
	EDLEntryCommandF32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *puVar1 = 0x27;
  *(float *)(puVar1 + 4) = scaleMult;
  puVar1[1] = (char)(int)(angularMult * 255.0);
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SendHardwareDisplayList(void *pDList, u16 size) {
	EDLEntryCommandU16andU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(short *)(puVar1 + 2) = size;
  *(void **)(puVar1 + 4) = pDList;
  *puVar1 = 0x19;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Callback(PFNRCCallback pfnCallback, u32 param32, u16 param16, u8 param8) {
	EDLEntryCommandU16andU32 *p1;
	EDLEntryCommandU32 *p2;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  puVar1[1] = param8;
  *(uint *)(puVar1 + 4) = param32;
  *(short *)(puVar1 + 2) = param16;
  *puVar1 = 0x1e;
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(undefined1 **)(puVar1 + 4) = pfnCallback;
  *puVar1 = 0x1f;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::RectList(int nRects, float *args, EVec4 &vColor, float depth) {
	EDLEntryCommandU16andU32 *pCommand;
	EVec4 *this;
	
  undefined *puVar1;
  float fVar2;
  
  if (nRects != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,4);
    *(short *)(puVar1 + 2) = (short)nRects;
    *puVar1 = 0x3b;
    *(float **)(puVar1 + 4) = args;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *(float *)(puVar1 + 8) = (vColor->field0_0x0).d[0];
    *(float *)(puVar1 + 0xc) = (vColor->field0_0x0).d[1];
    *(float *)(puVar1 + 0x10) = (vColor->field0_0x0).d[2];
    fVar2 = (vColor->field0_0x0).d[3];
                    /* end of inlined section */
    *(float *)(puVar1 + 0x18) = depth;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *(float *)(puVar1 + 0x14) = fVar2;
                    /* end of inlined section */
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::Rect(EVec2 &vUpperLeft, EVec2 &vLowerRight, EVec2 &vUpperLeftTC, EVec2 &vLowerRightTC, EVec4 &vColor, float depth) {
	EDLEntryCommandU16andU32 *pCommand;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec4 *this;
	
  undefined *puVar1;
  float fVar2;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,8);
  *puVar1 = 0x21;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(float *)(puVar1 + 8) = (vUpperLeft->field0_0x0).d[0];
  *(float *)(puVar1 + 0xc) = (vUpperLeft->field0_0x0).d[1];
  *(float *)(puVar1 + 0x10) = (vLowerRight->field0_0x0).d[0];
  *(float *)(puVar1 + 0x14) = (vLowerRight->field0_0x0).d[1];
  *(float *)(puVar1 + 0x18) = (vUpperLeftTC->field0_0x0).d[0];
  *(float *)(puVar1 + 0x1c) = (vUpperLeftTC->field0_0x0).d[1];
  *(float *)(puVar1 + 0x20) = (vLowerRightTC->field0_0x0).d[0];
  *(float *)(puVar1 + 0x24) = (vLowerRightTC->field0_0x0).d[1];
  *(float *)(puVar1 + 0x28) = (vColor->field0_0x0).d[0];
  *(float *)(puVar1 + 0x2c) = (vColor->field0_0x0).d[1];
  *(float *)(puVar1 + 0x30) = (vColor->field0_0x0).d[2];
  fVar2 = (vColor->field0_0x0).d[3];
                    /* end of inlined section */
  *(float *)(puVar1 + 0x38) = depth;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(float *)(puVar1 + 0x34) = fVar2;
                    /* end of inlined section */
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::DirectRect(EVec2 &vPos, EVec2 &vScale, EVec4 &vColor, float depth) {
	EDLEntryCommandU16andU32 *pCommand;
	EVec2 *this;
	EVec2 *this;
	EVec4 *this;
	
  undefined *puVar1;
  float fVar2;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,6);
  *puVar1 = 0x29;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(float *)(puVar1 + 8) = (vPos->field0_0x0).d[0];
  *(float *)(puVar1 + 0xc) = (vPos->field0_0x0).d[1];
  *(float *)(puVar1 + 0x10) = (vScale->field0_0x0).d[0];
  *(float *)(puVar1 + 0x14) = (vScale->field0_0x0).d[1];
  *(float *)(puVar1 + 0x18) = (vColor->field0_0x0).d[0];
  *(float *)(puVar1 + 0x1c) = (vColor->field0_0x0).d[1];
  *(float *)(puVar1 + 0x20) = (vColor->field0_0x0).d[2];
  fVar2 = (vColor->field0_0x0).d[3];
                    /* end of inlined section */
  *(float *)(puVar1 + 0x28) = depth;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(float *)(puVar1 + 0x24) = fVar2;
                    /* end of inlined section */
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::EnvironmentMap(bool enable, bool calculateReflectionVector, int renderPass) {
	EGraphics *this;
	
  ERC__vtable *pEVar1;
  undefined8 uVar2;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  if (enable) {
                    /* inlined from c:/eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    uVar2 = 4;
    if (!calculateReflectionVector) {
      uVar2 = 1;
    }
    (*(code *)this->__vtable->MovieFrame)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable->ZClear,&_pGfx->m_mNormalMap,uVar2
               ,1,0,renderPass);
    pEVar1 = this->__vtable;
  }
  else {
    uVar2 = 0x100;
    if (renderPass == 0) {
      uVar2 = 0x80;
    }
    (*(code *)this->__vtable->EndCommand)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable->BeginCommand,uVar2);
    pEVar1 = this->__vtable;
  }
  (*(code *)pEVar1[1].Terminate)((int)&this->m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void ERC::TextureMatrix(EMat4 *pmTexture, ETCTransformSource source, bool useLookAt, bool perspectiveDivide, int renderPass) {
	EDLEntryCommandU32 *p;
	u32 flags;
	
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  if (pmTexture == (EMat4 *)0x0) {
    uVar3 = 0x100;
    if (renderPass == 0) {
      uVar3 = 0x80;
    }
    (*(code *)this->__vtable->EndCommand)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable->BeginCommand,uVar3);
  }
  else {
    puVar2 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
    bVar1 = 1;
    if (renderPass != 0) {
      bVar1 = 2;
    }
    *puVar2 = 0x10;
    if (useLookAt) {
      bVar1 = bVar1 | 4;
    }
    *(EMat4 **)(puVar2 + 4) = pmTexture;
    puVar2[1] = (char)source;
    if (perspectiveDivide) {
      bVar1 = bVar1 | 8;
    }
    puVar2[2] = bVar1;
  }
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Memcpy(void *pDest, void *pSource, int size) {
	EDLEntryCommandU32 *pCommand1;
	
  undefined *puVar1;
  
  if (size != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,2);
    *(void **)(puVar1 + 0xc) = pSource;
    *puVar1 = 0x22;
    *(int *)(puVar1 + 4) = size;
    *(void **)(puVar1 + 8) = pDest;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::RecalcMatrices(int pos, int count) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  puVar1[2] = (char)count;
  puVar1[1] = (char)pos;
  *puVar1 = 0x25;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Debug(u32 val1, u32 val2) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  puVar1[1] = (char)val1;
  *(uint *)(puVar1 + 4) = val2;
  *puVar1 = 0x26;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::GeometrySetup() {
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *puVar1 = 0x28;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::FlushQueuedMatrices() {
  this->m_firstMatrixPos = 100;
  this->m_lastMatrixPos = -1;
  this->m_lastCommand = 0;
  this->m_dstBufferOffset = 0;
  return;
}

void ERC::ZTest(bool enable, int method, int write, int renderPass) {
	EDLEntryCommandU8andU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(int *)(puVar1 + 4) = renderPass;
  puVar1[1] = enable;
  puVar1[2] = (char)method;
  puVar1[3] = (char)write;
  *puVar1 = 0x2b;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::AlphaTest(bool enable, int method, float threshold, int renderPass) {
	EDLEntryCommandU8andU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(int *)(puVar1 + 4) = renderPass;
  puVar1[1] = enable;
  puVar1[2] = (char)method;
  *puVar1 = 0x2c;
  puVar1[3] = (char)(int)threshold;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SetBlendMode(int a, int b, int c, int d, int k, int pass) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(short *)(puVar1 + 2) = (short)pass;
  *(int *)(puVar1 + 4) = a | b << 2 | c << 4 | d << 6 | k << 8;
  *puVar1 = 0x34;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SetCombineMode(int mode, int pass) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(int *)(puVar1 + 4) = mode;
  *(short *)(puVar1 + 2) = (short)pass;
  *puVar1 = 0x33;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::RenderSurface(ERenderSurface *pSurface, int which) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(ERenderSurface **)(puVar1 + 4) = pSurface;
  puVar1[1] = (char)which;
  *puVar1 = 0x2d;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SaveImageData(ERenderSurface *pSurface) {
	EDLEntryCommandU32 *p;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(ERenderSurface **)(puVar1 + 4) = pSurface;
  *puVar1 = 0x30;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::Vertex(int nVerts, int pos, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  if (nVerts != 0) {
    (*(code *)this->__vtable[1].LoadMPG)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,2,0);
    this->m_pdl->m_nVerts = this->m_pdl->m_nVerts + nVerts;
    puVar1 = (undefined *)
             (*(code *)this->__vtable[1].ZClear)
                       ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,4);
    *(int *)(puVar1 + 0x1c) = pos;
    *puVar1 = 0x2e;
    *(int *)(puVar1 + 4) = nVerts;
    *(float **)(puVar1 + 8) = xyzs;
    *(float **)(puVar1 + 0xc) = texcoords;
    *(uchar **)(puVar1 + 0x10) = colors;
    *(char **)(puVar1 + 0x14) = normals;
    *(uchar **)(puVar1 + 0x18) = weights;
    (*(code *)this->__vtable[1].Terminate)
              ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init);
  }
  return;
}

void ERC::TriIndexed(int nTris, u8 *ids) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(uchar **)(puVar1 + 4) = ids;
  *(short *)(puVar1 + 2) = (short)nTris;
  *puVar1 = 0x2f;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::SleepUntil(int wakup) {
  return;
}

void ERC::Noop() {
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *puVar1 = 0x36;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::ZClear(float zval) {
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  (*(code *)this->__vtable[1].EnableRasterModes)
            (0x3f000000,(int)&this->m_pdl + (int)*(short *)&this->__vtable[1].SetGeometryModes,1,1,0
            );
  (*(code *)this->__vtable[1].DisableGeometryModes)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].EnableGeometryModes,1,1,0,0);
  (*(code *)this->__vtable[1].RectList)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Rect,0,1,2,1,0,0);
  (*(code *)this->__vtable->Init)((int)&this->m_pdl + (int)*(short *)&this->__vtable->LoadMPG,0,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_7c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_80 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_6c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_5c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_60 = 0;
  local_4c = 0x3f800000;
  local_50 = 0x3f800000;
  local_34 = 0x3f800000;
  local_38 = 0x3f800000;
  local_3c = 0x3f800000;
  local_40 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)this->__vtable[1].DisplayList)
            (zval,(int)&this->m_pdl + (int)*(short *)&this->__vtable[1].SpriteList,&local_80,
             &local_70,&local_60,&local_50,&local_40);
  (*(code *)this->__vtable[1].EnableRasterModes)
            (0x3f000000,(int)&this->m_pdl + (int)*(short *)&this->__vtable[1].SetGeometryModes,1,5,0
            );
  (*(code *)this->__vtable[1].DisableGeometryModes)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].EnableGeometryModes,1,2,0,0);
  return;
}

void ERC::MovieFrame(EMovie *pMovie) {
	EDLEntryCommandU16andU32 *pCommand;
	
  undefined *puVar1;
  
  (*(code *)this->__vtable[1].LoadMPG)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].MovieFrame,0,0);
  puVar1 = (undefined *)
           (*(code *)this->__vtable[1].ZClear)
                     ((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Noop,1);
  *(EMovie **)(puVar1 + 4) = pMovie;
  *puVar1 = 0x38;
  (*(code *)this->__vtable[1].Terminate)((int)&this->m_pdl + (int)*(short *)&this->__vtable[1].Init)
  ;
  return;
}

void ERC::ModelMatrix(EMat4 *pmModel) {
  (*(code *)this->__vtable->Memcpy)
            ((int)&this->m_pdl + (int)*(short *)&this->__vtable->SendHardwareDisplayList,pmModel,0,1
            );
  return;
}

void* ERC::Alloc(unsigned int size, int alignment) {
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  pvVar1 = Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,size,alignment);
                    /* end of inlined section */
  return pvVar1;
}

void ERC::AllocExternal(void *pData, int size) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddHead__9ENodeListUi((ENodeList *)this->m_pdl,(uint)pData);
  return;
}

void* ERC::AllocFlushable(unsigned int size, int alignment) {
	EDL *this;
	
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  pvVar1 = Alloc__11EAllocGroupUii(&this->m_pdl->m_flushableAllocGroup,size,alignment);
                    /* end of inlined section */
  return pvVar1;
}

void ERC::AllocFlushableExternal(void *pData, int size) {
	EDL *this;
	
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  AddHead__9ENodeListUi((ENodeList *)&this->m_pdl->m_flushableAllocGroup,(uint)pData);
  return;
}

void ERC::Validate() {
                    /* end of inlined section */
  Validate__3EDL(this->m_pdl);
  return;
}

void ERC::LoadMPG(int primtype) {
  return;
}

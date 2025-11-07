// STATUS: NOT STARTED

#include "e_rfont.h"

EVec2 ERFont::m_vScaler = {
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
};

ETypeInfo *gpTypeInfo_ERFont = NULL;

__vtbl_ptr_type ERFont virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERFont::SafeDelete,
		/* .__delta2 = */ 8904
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERFont::GetTypeInfo,
		/* .__delta2 = */ 8960
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERFont::GetTypeName,
		/* .__delta2 = */ 8976
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERFont::GetTypeKey,
		/* .__delta2 = */ 8992
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERFont::GetTypeVersion,
		/* .__delta2 = */ 9008
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERFont::~ERFont,
		/* .__delta2 = */ 5152
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Read,
		/* .__delta2 = */ 9848
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Write,
		/* .__delta2 = */ 9808
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERFont::Reload,
		/* .__delta2 = */ 5344
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERFont::m_typeInfo;

EStream& operator<<(EStream &s, ERFont *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERFont *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ERFont *)pStorable;
  return s;
}

ERFont* ERFont::ERFont() {
	EVec4 *this;
	
  __9EResource(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ERFont;
  __9EFontData(&this->m_fd);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  this->m_aspect = 1.0;
  this->m_ysize = -1.0;
  this->m_pCurrentSize = (EFontSize *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_vColor).field0_0x0.d[1] = 1.0;
  (this->m_vColor).field0_0x0.d[3] = 1.0;
  (this->m_vColor).field0_0x0.d[2] = 1.0;
  (this->m_vColor).field0_0x0.d[0] = 1.0;
  return this;
}

void ERFont::~ERFont(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ERFont;
  Deallocate__6ERFont(this);
  ___9EFontData(&this->m_fd,2);
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/font/e_rfont.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ERFont::Deallocate() {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  uint uVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_fd).m_sizeList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar2 = pEVar1->data;
    while( true ) {
                    /* end of inlined section */
      if (*(EResource **)(uVar2 + 0x1c) == (EResource *)0x0) {
        pEVar1 = pEVar1->pNext;
      }
      else {
        DelRef__9EResource(*(EResource **)(uVar2 + 0x1c));
        *(undefined4 *)(uVar2 + 0x1c) = 0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar1 = pEVar1->pNext;
      }
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      uVar2 = pEVar1->data;
    }
  }
  return;
}

void ERFont::Reload(EStream &s) {
  this->m_pCurrentSize = (EFontSize *)0x0;
  Load__6ERFontR7EStream(this,s);
  return;
}

void ERFont::Load(EStream &s) {
  ENodeListNode *pEVar1;
  EFontSize *pEVar2;
  EString *d;
  
  Deallocate__6ERFont(this);
  d = &(this->field0_0x0).m_name;
  __rs__FR7EStreamR7EString(s,d);
  Empty__7EString(d);
  __rs__FR7EStreamR9EStorable(s,&(this->m_fd).field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_fd).m_sizeList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar2 = (EFontSize *)pEVar1->data;
                    /* end of inlined section */
    this->m_pCurrentSize = pEVar2;
    this->m_ysize = (float)pEVar2->m_size;
  }
  return;
}

void ERFont::SetSize(float ySize, float aspect, bool findClosestSize) {
	float closestDist;
	EFontSize *pClosest;
	NLIterator i;
	EFontSize *pSize;
	float dist;
	NLIterator i;
	NLIterator i;
	
  bool bVar1;
  EFontSize *pEVar2;
  ENodeListNode *pEVar3;
  EFontSize *pEVar4;
  EFontSize *pEVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float x;
  float fVar9;
  float x_00;
  float fVar10;
  
  fVar10 = ySize * _6ERFont_m_vScaler.field0_0x0.d[1];
  if (_6ERFont_m_vScaler.field0_0x0.d[0] != 0.0) {
                    /* end of inlined section */
    aspect = aspect * (_6ERFont_m_vScaler.field0_0x0.d[1] / _6ERFont_m_vScaler.field0_0x0.d[0]);
  }
  x_00 = 0.0;
  if (findClosestSize) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar3 = (this->m_fd).m_sizeList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    pEVar4 = (EFontSize *)0x0;
    if (pEVar3 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      iVar6 = ((EFontSize *)pEVar3->data)->m_size;
      pEVar2 = (EFontSize *)pEVar3->data;
      pEVar5 = pEVar4;
      while (pEVar4 = pEVar2, x = (float)iVar6 - fVar10, x != 0.0) {
        if (pEVar5 == (EFontSize *)0x0) {
LAB_002b1698:
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          pEVar3 = pEVar3->pNext;
          x_00 = x;
          pEVar5 = pEVar4;
        }
        else {
          fVar9 = 0.0;
          if (x < 0.0) {
            bVar1 = x_00 < x;
code_r0x002b168c:
            if (bVar1) goto LAB_002b1698;
            pEVar3 = pEVar3->pNext;
          }
          else {
            fVar7 = fabsf(x);
            fVar8 = fabsf(x_00);
            if (fVar7 < fVar8) goto LAB_002b1698;
            if (x_00 < fVar9) {
              bVar1 = (float)pEVar4->m_size / fVar10 <= 2.0;
              goto code_r0x002b168c;
            }
            pEVar3 = pEVar3->pNext;
          }
        }
                    /* end of inlined section */
        if (pEVar3 == (ENodeListNode *)0x0) {
          this->m_pCurrentSize = pEVar5;
          goto LAB_002b16d4;
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar2 = (EFontSize *)pEVar3->data;
                    /* end of inlined section */
        iVar6 = ((EFontSize *)pEVar3->data)->m_size;
      }
    }
    this->m_pCurrentSize = pEVar4;
  }
LAB_002b16d4:
  this->m_aspect = aspect;
  this->m_ysize = fVar10;
  return;
}

void ERFont::DoDraw(void *szString, bool doubleByte, bool snapToPixelX, bool snapToPixelY, EVec2 &vPos, ERC *prc, EVec2 *pvBotRightPosOut, EWindow *pWin) {
	EWindow *pWin;
	EVec2 vCurrentPos;
	float xScale;
	float yScale;
	float invXScale;
	float invYScale;
	float sizeScaler;
	float fontScaler;
	float topLine;
	float baseLine;
	float topPos;
	float bottomPos;
	float invTextureWidth;
	float invTextureHeight;
	float spaceWidth;
	int strLen;
	int nRects;
	float *pCurArg;
	float *rectListArgs;
	int pos;
	u32 c;
	EVec2 &v;
	EMat4 *this;
	EGraphics *this;
	EMat4 *this;
	EGraphics *this;
	ERFont *this;
	void *szString;
	bool doubleByte;
	int index;
	ERFont *this;
	void *szString;
	bool doubleByte;
	int index;
	ERC *this;
	ERFont *this;
	void *szString;
	bool doubleByte;
	int index;
	EFontCharacter *pChar;
	ERFont *this;
	void *szString;
	bool doubleByte;
	int index;
	u32 key;
	float width;
	float leftPos;
	float rightPos;
	float topV;
	float bottomV;
	float leftU;
	float rightU;
	int offset;
	EFontKerningPair kp;
	float foffset;
	u32 first;
	EVec2 vNextPos;
	EVec2 *this;
	EVec2 *this;
	
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  EFontSize *pEVar4;
  int iVar5;
  ulong *puVar6;
  uint key;
  float fVar7;
  ushort uVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  int iVar11;
  float *pfVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint uVar13;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  EVec2 vCurrentPos;
  EFontKerningPair kp;
  EFontCharacter *pChar;
  int offset;
  int local_108;
  int local_104;
  EVec2 *local_100;
  int nRects;
  float *rectListArgs;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
  local_70 = (undefined4)unaff_s8;
  uStack_6c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_80 = (undefined4)unaff_s7;
  uStack_7c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_b0 = (undefined4)unaff_s4;
  uStack_ac = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_d0 = (undefined4)unaff_s2;
  uStack_cc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_e0 = (undefined4)unaff_s1;
  uStack_dc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_f0 = (undefined4)unaff_s0;
  uStack_ec = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_60 = (undefined4)unaff_retaddr;
  uStack_5c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_90 = (undefined4)unaff_s6;
  uStack_8c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (undefined4)unaff_s5;
  uStack_9c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_c0 = (undefined4)unaff_s3;
  uStack_bc = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_108 = (int)snapToPixelX;
  local_104 = (int)snapToPixelY;
                    /* end of inlined section */
                    /* end of inlined section */
  if (((szString == (void *)0x0) || (_6ERFont_m_vScaler.field0_0x0.d[0] == 0.0)) ||
     (_6ERFont_m_vScaler.field0_0x0.d[1] == 0.0)) {
    if (pvBotRightPosOut != (EVec2 *)0x0) {
      puVar1 = (undefined *)((int)&pvBotRightPosOut->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      uVar13 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar13);
      *puVar6 = *puVar6 & -1L << (uVar13 + 1) * 8 | 0UL >> (7 - uVar13) * 8;
      uVar13 = (uint)pvBotRightPosOut & 7;
      *(ulong *)((int)pvBotRightPosOut - uVar13) =
           0L << uVar13 * 8 |
           *(ulong *)((int)pvBotRightPosOut - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    }
  }
  else {
    local_100 = pvBotRightPosOut;
    LoadFont__6ERFont(this);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
    if ((pWin == (EWindow *)0x0) &&
       (pWin = _7EWindow_m_pCurrentWindow, _7EWindow_m_pCurrentWindow == (EWindow *)0x0)) {
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      fVar16 = (float)(_pGfx->m_xscreen << 4);
    }
    else {
                    /* end of inlined section */
      fVar16 = (pWin->m_mWindow).field0_0x0.d[0];
    }
    if (pWin == (EWindow *)0x0) {
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      fVar15 = (float)(_pGfx->m_yscreen << 4);
    }
    else {
                    /* end of inlined section */
      fVar15 = (pWin->m_mWindow).field0_0x0.d[1][1];
    }
    vCurrentPos.field0_0x0.d[1] = (vPos->field0_0x0).d[1] * fVar15 * 0.0625;
    vCurrentPos.field0_0x0.d[0] = (vPos->field0_0x0).d[0] * fVar16 * 0.0625;
    fVar15 = 1.0 / (fVar15 * 0.0625);
    fVar16 = 1.0 / (fVar16 * 0.0625);
    if (this->m_pCurrentSize->m_superSample == 1) {
      if (local_108 != 0) {
                    /* end of inlined section */
        vCurrentPos.field0_0x0.d[0] = (float)(int)(vCurrentPos.field0_0x0.d[0] + 0.5);
      }
      if (local_104 != 0) {
                    /* end of inlined section */
        vCurrentPos.field0_0x0.d[1] = (float)(int)(vCurrentPos.field0_0x0.d[1] + 0.5);
      }
    }
                    /* end of inlined section */
    fVar14 = vCurrentPos.field0_0x0.d[0] - 0.5;
    pEVar4 = this->m_pCurrentSize;
    iVar11 = 0;
    fVar21 = this->m_ysize / (float)(this->m_fd).m_sourceImageSize;
    iVar17 = (this->m_fd).m_spaceWidth;
    fVar19 = this->m_aspect;
    nRects = 0;
    rectListArgs = (float *)0x0;
    fVar25 = this->m_ysize / (float)pEVar4->m_size;
    fVar22 = (vCurrentPos.field0_0x0.d[1] - 0.5) - ((float)(this->m_fd).m_topline * fVar21 + 1.0);
    fVar23 = 1.0 / (float)pEVar4->m_ysize;
    fVar26 = (float)(this->m_fd).m_baseline * fVar21 + 1.0;
    fVar20 = 1.0 / (float)pEVar4->m_xsize;
    fVar24 = (fVar22 + (float)pEVar4->m_lineSize * fVar25) - 1.0;
    if (prc != (ERC *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* inlined from c:/eor/src2/engine/font/e_rfont.h */
      if (doubleByte) {
                    /* WARNING: Load size is inaccurate */
        uVar8 = *szString;
      }
      else {
        uVar8 = (ushort)*szString;
      }
      puVar10 = (ushort *)szString;
                    /* end of inlined section */
      while (uVar8 != 0) {
        puVar10 = puVar10 + 1;
        iVar11 = iVar11 + 1;
        if (doubleByte) {
          uVar8 = *puVar10;
        }
        else {
          uVar8 = (ushort)*(byte *)((int)szString + iVar11);
        }
      }
                    /* inlined from e_rc.h */
      rectListArgs = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,iVar11 << 5,0x10);
                    /* end of inlined section */
    }
    iVar11 = 0;
    puVar10 = (ushort *)szString;
    pfVar12 = rectListArgs;
                    /* inlined from c:/eor/src2/engine/font/e_rfont.h */
    if (doubleByte) {
                    /* WARNING: Load size is inaccurate */
      uVar13 = (uint)*szString;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      uVar13 = (uint)*szString;
    }
                    /* end of inlined section */
    while (key = uVar13, key != 0) {
      puVar10 = puVar10 + 1;
      iVar11 = iVar11 + 1;
      if (doubleByte) {
        uVar13 = (uint)*puVar10;
      }
      else {
        uVar13 = (uint)*(byte *)((int)szString + iVar11);
      }
                    /* inlined from /eor/src2/common/datastruc/e_hashtable.h */
      puVar9 = Find__C10EHashTableUiPUi
                         (&(this->m_pCurrentSize->m_characters).field0_0x0,key,(uint *)&pChar);
                    /* end of inlined section */
      if (puVar9 == (undefined1 *)0x0) {
                    /* end of inlined section */
        fVar14 = fVar14 + (float)iVar17 * fVar21 * fVar19;
      }
      else {
        uVar8 = pChar->m_right;
        uVar2 = pChar->m_left;
        fVar18 = (fVar14 - 1.0) +
                 (float)((int)(short)uVar8 - (int)(short)uVar2) * this->m_aspect * fVar25;
        if (prc != (ERC *)0x0) {
          uVar3 = pChar->m_line;
          iVar5 = this->m_pCurrentSize->m_lineSize;
          *pfVar12 = (fVar14 - 1.0) * fVar16;
          pfVar12[1] = fVar22 * fVar15;
          pfVar12[2] = fVar18 * fVar16;
          pfVar12[3] = fVar24 * fVar15;
          pfVar12[4] = (float)(int)(short)uVar2 * fVar20;
          nRects = nRects + 1;
          pfVar12[5] = (float)((short)uVar3 * iVar5 + iVar5 + -1) * fVar23;
          pfVar12[6] = (float)(int)(short)uVar8 * fVar20;
          pfVar12[7] = (float)((short)uVar3 * iVar5) * fVar23;
          pfVar12 = pfVar12 + 8;
        }
                    /* end of inlined section */
        fVar14 = fVar18 - 1.0;
      }
      if (uVar13 != 0) {
                    /* inlined from c:/eor/src2/engine/font/e_fontdata.h */
        puVar9 = Find__C10EHashTableUiPUi
                           (&(this->m_fd).m_kerningPairs.field0_0x0,key << 0x10 | uVar13,
                            (uint *)&offset);
                    /* end of inlined section */
        if (puVar9 == (undefined1 *)0x0) {
          offset = (this->m_fd).m_defaultSpacing;
        }
        fVar18 = (float)offset * this->m_aspect;
        if (this->m_pCurrentSize->m_superSample == 1) {
          fVar7 = 0.5;
          if (fVar18 < 0.0) {
            fVar7 = -0.5;
          }
          fVar18 = (float)(int)(fVar18 + fVar7);
        }
        fVar14 = fVar14 + fVar18 * fVar21;
      }
    }
    if (local_100 != (EVec2 *)0x0) {
                    /* end of inlined section */
      kp.m_first = (uint)(fVar14 + 0.5);
      kp.m_second = (uint)(fVar22 + fVar26 + 0.5);
      if (this->m_pCurrentSize->m_superSample == 1) {
        if (local_108 != 0) {
                    /* end of inlined section */
          kp.m_first = (uint)(float)(int)((float)kp.m_first + 0.5);
        }
        if (local_104 != 0) {
                    /* end of inlined section */
          kp.m_second = (uint)(float)(int)((float)kp.m_second + 0.5);
                    /* end of inlined section */
        }
      }
      (local_100->field0_0x0).d[0] = (float)kp.m_first * fVar16;
      (local_100->field0_0x0).d[1] = (float)kp.m_second * fVar15;
    }
    if ((prc != (ERC *)0x0) && (nRects != 0)) {
      (*(code *)prc->__vtable[1].Viewport)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Goto,nRects,rectListArgs,
                 &this->m_vColor);
    }
  }
  return;
}

EVec2 ERFont::DoGetStringSize(void *szString, bool doubleByte, EWindow *pWin) {
	EVec2 vSize;
	EVec2 *this;
	
  EWindow *in_t0_lo;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EVec2 vSize;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_2c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_30 = 0;
                    /* end of inlined section */
  DoDraw__6ERFontPvbN22RC5EVec2P3ERCP5EVec2P7EWindow
            ((ERFont *)szString,(void *)(int)doubleByte,SUB41(pWin,0),false,false,(EVec2 *)&local_30
             ,(ERC *)0x0,&vSize,in_t0_lo);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)vSize.field0_0x0.d[0];
  (this->field0_0x0).m_name.m_p = (char *)vSize.field0_0x0.d[1];
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

void ERFont::SnapPosToPixel(EVec2 &vPos, bool snapPosX, bool snapPosY, EWindow *pWin) {
	float xScale;
	float yScale;
	float invXScale;
	float invYScale;
	EMat4 *this;
	EGraphics *this;
	EMat4 *this;
	EGraphics *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((snapPosX) || (snapPosY)) {
    if (pWin == (EWindow *)0x0) {
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
      pWin = _7EWindow_m_pCurrentWindow;
      if (_7EWindow_m_pCurrentWindow == (EWindow *)0x0) {
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
        fVar3 = (float)(_pGfx->m_xscreen << 4);
      }
      else {
                    /* end of inlined section */
        fVar3 = (_7EWindow_m_pCurrentWindow->m_mWindow).field0_0x0.d[0];
      }
    }
    else {
      fVar3 = (pWin->m_mWindow).field0_0x0.d[0];
    }
    if (pWin == (EWindow *)0x0) {
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      fVar4 = (float)(_pGfx->m_yscreen << 4);
    }
    else {
                    /* end of inlined section */
      fVar4 = (pWin->m_mWindow).field0_0x0.d[1][1];
    }
    fVar2 = (vPos->field0_0x0).d[0] * fVar3 * 0.0625;
    (vPos->field0_0x0).d[1] = (vPos->field0_0x0).d[1] * fVar4 * 0.0625;
    (vPos->field0_0x0).d[0] = fVar2;
    if (snapPosX) {
                    /* end of inlined section */
      (vPos->field0_0x0).d[0] = (float)(int)(fVar2 + 0.5);
    }
    if (snapPosY) {
                    /* end of inlined section */
      (vPos->field0_0x0).d[1] = (float)(int)((vPos->field0_0x0).d[1] + 0.5);
                    /* end of inlined section */
      fVar2 = (vPos->field0_0x0).d[0];
    }
    else {
      fVar2 = (vPos->field0_0x0).d[0];
    }
    fVar1 = (vPos->field0_0x0).d[1];
    (vPos->field0_0x0).d[0] = fVar2 * (1.0 / (fVar3 * 0.0625));
    (vPos->field0_0x0).d[1] = fVar1 * (1.0 / (fVar4 * 0.0625));
  }
  return;
}

void ERFont::DoDrawAlign(ERC *prc, void *szString, bool doubleByte, EVec2 vPos, EFontAlignX xAlign, EFontAlignY yAlign, EVec2 *pvBotRightPosOut) {
	EVec2 vSize;
	bool snapPosX;
	bool snapPosY;
	EVec3 vUsePos;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	
  uint uVar1;
  ulong *puVar2;
  undefined *puVar3;
  EWindow *pWin;
  bool snapToPixelX;
  bool snapToPixelY;
  EVec2 vSize;
  EVec2__null___1__1 EStack_d0;
  EVec3 vUsePos;
  ERC *local_b0;
  
  pWin = (EWindow *)(int)doubleByte;
  vSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
  puVar3 = (undefined *)szString;
  local_b0 = prc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (1 < xAlign + ~E_FAX_LEFT) {
    if (1 < yAlign + ~E_FAY_TOP) goto LAB_002b1fac;
    pWin = (EWindow *)0x0;
    puVar3 = &DAT_003c4080;
  }
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&EStack_d0,this,SUB41(puVar3,0),pWin);
  puVar3 = (undefined *)((int)&vSize.field0_0x0 + 7);
  uVar1 = (uint)puVar3 & 7;
  puVar2 = (ulong *)(puVar3 + -uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)EStack_d0 >> (7 - uVar1) * 8;
  vSize.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)EStack_d0.field1;
LAB_002b1fac:
  if (this->m_pCurrentSize->m_superSample == 1) {
    snapToPixelX = xAlign != E_FAX_RIGHT;
    SnapPosToPixel__6ERFontR5EVec2bT2P7EWindow
              (this,vPos,xAlign == E_FAX_RIGHT,yAlign == E_FAY_BOTTOM,(EWindow *)0x0);
    snapToPixelY = yAlign != E_FAY_BOTTOM;
  }
  else {
    snapToPixelY = false;
    snapToPixelX = false;
  }
                    /* end of inlined section */
  if (xAlign == E_FAX_RIGHT) {
                    /* end of inlined section */
    vUsePos.field0_0x0.d[0] = (vPos->field0_0x0).d[0] - vSize.field0_0x0.d[0];
  }
  else if ((int)xAlign < 2) {
    if (xAlign == E_FAX_LEFT) {
                    /* end of inlined section */
      vUsePos.field0_0x0.d[0] = (vPos->field0_0x0).d[0];
    }
  }
  else if (xAlign == E_FAX_CENTER) {
                    /* end of inlined section */
    vUsePos.field0_0x0.d[0] = (vPos->field0_0x0).d[0] - vSize.field0_0x0.d[0] * 0.5;
  }
  if (yAlign == E_FAY_BOTTOM) {
                    /* end of inlined section */
    vUsePos.field0_0x0.d[1] = (vPos->field0_0x0).d[1] - vSize.field0_0x0.d[1];
  }
  else if ((int)yAlign < 2) {
    if (yAlign == E_FAY_TOP) {
                    /* end of inlined section */
      vUsePos.field0_0x0.d[1] = (vPos->field0_0x0).d[1];
    }
  }
  else if (yAlign == E_FAY_CENTER) {
                    /* end of inlined section */
    vUsePos.field0_0x0.d[1] = (vPos->field0_0x0).d[1] - vSize.field0_0x0.d[1] * 0.5;
  }
  DoDraw__6ERFontPvbN22RC5EVec2P3ERCP5EVec2P7EWindow
            (this,szString,doubleByte,snapToPixelX,snapToPixelY,(EVec2 *)&vUsePos,local_b0,
             pvBotRightPosOut,(EWindow *)0x0);
  return;
}

void ERFont::LoadFont() {
  ERShader *pEVar1;
  
  if (this->m_pCurrentSize->m_pRShader == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_shaderman.field0_0x0,this->m_pCurrentSize->m_shaderId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pCurrentSize->m_pRShader = pEVar1;
  }
  return;
}

void ERFont::Select(ERC *prc) {
  LoadFont__6ERFont(this);
  Select__8ERShaderP3ERCi(this->m_pCurrentSize->m_pRShader,prc,0);
  return;
}

float ERFont::GetLineSpacing(EWindow *pWin) {
	EVec2 vSize;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EVec2 vSize;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_2c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_30 = 0;
                    /* end of inlined section */
  DoDraw__6ERFontPvbN22RC5EVec2P3ERCP5EVec2P7EWindow
            (this,&DAT_003c4080,false,false,false,(EVec2 *)&local_30,(ERC *)0x0,&vSize,pWin);
  return (vSize.field0_0x0.d[1] * (float)(this->m_fd).m_verticalSpacing) /
         (float)((this->m_fd).m_baseline - (this->m_fd).m_topline);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    _6ERFont_m_vScaler.field0_0x0.d[1] = 1.0;
    _6ERFont_m_vScaler.field0_0x0.d[0] = 1.0;
    gpTypeInfo_ERFont =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_6ERFont_m_typeInfo,New__6ERFont,0,"ERFont",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERFont* ERFont::New() {
  ERFont *pEVar1;
  
  pEVar1 = (ERFont *)__nw__6ERFontUi(0x70);
  pEVar1 = __6ERFont(pEVar1);
  return pEVar1;
}

void ERFont::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERFont *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERFont::GetTypeInfo() {
  return &_6ERFont_m_typeInfo;
}

char* ERFont::GetTypeName() {
  return _6ERFont_m_typeInfo.m_name;
}

u32 ERFont::GetTypeKey() {
  return _6ERFont_m_typeInfo.m_key;
}

u16 ERFont::GetTypeVersion() {
  return _6ERFont_m_typeInfo.m_version;
}

u16 ERFont::GetReadVersion() {
  return _6ERFont_m_typeInfo.m_readVersion;
}

ETypeInfo* ERFont::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_6ERFont_m_typeInfo,New__6ERFont,version,"ERFont",&_9EResource_m_typeInfo);
  return pEVar1;
}

ERFont* ERFont::CreateCopy() {
  ERFont *pEVar1;
  
  pEVar1 = (ERFont *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ERFont::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

void* ERFont::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ERFont::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

float ERFont::GetYSize() {
  return this->m_ysize;
}

float ERFont::GetAspect() {
  return this->m_aspect;
}

EVec2 ERFont::GetStringSize(char *szString, EWindow *pWin) {
  DoGetStringSize__6ERFontPvbP7EWindow(this,szString,SUB41(pWin,0),(EWindow *)0x0);
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

EVec2 ERFont::GetStringSize(u16 *szString, EWindow *pWin) {
  DoGetStringSize__6ERFontPvbP7EWindow(this,szString,SUB41(pWin,0),(EWindow *)&pGifTag1);
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

void ERFont::SetColor(EVec4 &vColor) {
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (vColor->field0_0x0).d[1];
  fVar2 = (vColor->field0_0x0).d[2];
  fVar3 = (vColor->field0_0x0).d[3];
  (this->m_vColor).field0_0x0.d[0] = (vColor->field0_0x0).d[0];
  (this->m_vColor).field0_0x0.d[1] = fVar1;
  (this->m_vColor).field0_0x0.d[2] = fVar2;
  (this->m_vColor).field0_0x0.d[3] = fVar3;
  return;
}

void ERFont::Draw(ERC *prc, char *szString, EVec2 &vPos, EFontAlignX xAlign, EFontAlignY yAlign, EVec2 *pvBotRightPosOut) {
	EVec2 &v;
	
  undefined8 unaff_retaddr;
  float local_20;
  float local_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1c = (vPos->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_20 = (vPos->field0_0x0).d[0];
                    /* end of inlined section */
                    /* end of inlined section */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this,prc,szString,false,(EVec2 *)&local_20,xAlign,yAlign,pvBotRightPosOut);
  return;
}

void ERFont::Draw(ERC *prc, u16 *szString, EVec2 &vPos, EFontAlignX xAlign, EFontAlignY yAlign, EVec2 *pvBotRightPosOut) {
	EVec2 &v;
	
  undefined8 unaff_retaddr;
  float local_20;
  float local_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1c = (vPos->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_20 = (vPos->field0_0x0).d[0];
                    /* end of inlined section */
                    /* end of inlined section */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this,prc,szString,true,(EVec2 *)&local_20,xAlign,yAlign,pvBotRightPosOut);
  return;
}

u32 ERFont::GetChar(void *szString, bool doubleByte, int index) {
  if (!doubleByte) {
    return (uint)*(byte *)((int)szString + index);
  }
  return (uint)*(ushort *)(index * 2 + (int)szString);
}

void global constructors keyed to ERFont::m_vScaler() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

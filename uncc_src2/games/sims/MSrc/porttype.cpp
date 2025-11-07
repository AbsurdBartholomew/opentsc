// STATUS: NOT STARTED

#include "porttype.h"

SInt32 PinRect(Rect *rect, Point p) {
	Point pin;
	
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  Point pin;
  
  puVar1 = (undefined *)((int)&pin.h + 1);
  uVar2 = (uint)puVar1 & 3;
  puVar3 = (uint *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)p >> (3 - uVar2) * 8;
  pin.h = p.h;
  if ((short)pin.h < (short)rect->right) {
    pin = p;
    if ((short)pin.h < (short)rect->left) {
      pin = (Point)((uint)p & 0xffff | (uint)rect->left << 0x10);
    }
  }
  else {
    pin = (Point)((uint)p & 0xffff | (uint)(ushort)(rect->right - 1) << 0x10);
  }
  if ((short)pin.v < (short)rect->bottom) {
    if ((short)pin.v < (short)rect->top) {
      pin = (Point)((uint)pin & 0xffff0000 | (uint)rect->top);
    }
  }
  else {
    pin = (Point)((uint)pin & 0xffff0000 | (uint)(ushort)(rect->bottom - 1));
  }
  return (int)pin;
}

SInt32 TickCount() {
  int iVar1;
  
  iVar1 = timeGetTime__Fv();
  return (iVar1 * 0x3c) / 1000;
}

void OffsetRect(Rect *rect, SInt16 hoff, SInt16 voff) {
  rect->top = voff + rect->top;
  rect->right = hoff + rect->right;
  rect->bottom = voff + rect->bottom;
  rect->left = hoff + rect->left;
  return;
}

void OffsetRect(RECT *rect, SInt16 hoff, SInt16 voff) {
  rect->top = rect->top + (int)(short)voff;
  rect->right = rect->right + (int)(short)hoff;
  rect->bottom = rect->bottom + (int)(short)voff;
  rect->left = rect->left + (int)(short)hoff;
  return;
}

bool SectRect(Rect *rect1, Rect *rect2, Rect *result) {
	RECT lrect1;
	RECT lrect2;
	RECT lresult;
	Rect &inRect;
	RECT outRect;
	Rect &inRect;
	RECT outRect;
	Rect outRect;
	
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  tagRECT lrect1;
  tagRECT lrect2;
  tagRECT lresult;
  undefined auStack_40 [8];
  undefined auStack_38 [8];
  ushort local_30;
  ushort uStack_2e;
  ushort local_2c;
  ushort uStack_2a;
  int local_28;
  int local_24;
  Rect outRect;
  ulong uStack_9;
  
                    /* inlined from PortType.h */
  local_2c = rect1->top;
  local_30 = rect1->left;
  local_28 = (int)(short)rect1->right;
  uStack_2a = (short)local_2c >> 0xf;
  local_24 = (int)(short)rect1->bottom;
                    /* end of inlined section */
                    /* inlined from PortType.h */
  uStack_2e = (short)local_30 >> 0xf;
  uVar2 = rect2->right;
  uVar3 = rect2->top;
  uVar4 = rect2->bottom;
  uVar5 = rect2->left;
  auStack_40 = (undefined  [8])CONCAT26(uStack_2a,CONCAT24(local_2c,(int)(short)local_30));
  auStack_38 = (undefined  [8])CONCAT44((int)(short)rect1->bottom,(int)(short)rect1->right);
  puVar1 = auStack_40 + 7;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | (ulong)auStack_40 >> (7 - uVar6) * 8;
  puVar1 = auStack_38 + 7;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | (ulong)auStack_38 >> (7 - uVar6) * 8;
  puVar1 = (undefined *)((int)&lrect1.top + 3);
                    /* end of inlined section */
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)auStack_40 >> (7 - uVar6) * 8;
  puVar1 = (undefined *)((int)&lrect1.bottom + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)auStack_38 >> (7 - uVar6) * 8;
                    /* inlined from PortType.h */
  local_2c = uVar3;
  uStack_2a = (short)uVar3 >> 0xf;
  local_24 = (int)(short)uVar4;
  local_30 = uVar5;
  uStack_2e = (short)uVar5 >> 0xf;
  local_28 = (int)(short)uVar2;
  auStack_40 = (undefined  [8])CONCAT26(uStack_2a,CONCAT24(uVar3,(int)(short)uVar5));
  auStack_38 = (undefined  [8])CONCAT44((int)(short)uVar4,(int)(short)uVar2);
  puVar1 = auStack_40 + 7;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | (ulong)auStack_40 >> (7 - uVar6) * 8;
  puVar1 = auStack_38 + 7;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | (ulong)auStack_38 >> (7 - uVar6) * 8;
  puVar1 = (undefined *)((int)&lrect2.top + 3);
                    /* end of inlined section */
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)auStack_40 >> (7 - uVar6) * 8;
  puVar1 = (undefined *)((int)&lrect2.bottom + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)auStack_38 >> (7 - uVar6) * 8;
                    /* inlined from PortType.h */
  outRect.top = (ushort)lresult.top;
  outRect.bottom = (ushort)lresult.bottom;
  outRect.left = (ushort)lresult.left;
  outRect.right = (ushort)lresult.right;
  uVar6 = (uint)&uStack_9 & 7;
  puVar7 = (ulong *)((int)&uStack_9 - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT26((ushort)lresult.right,
                     CONCAT24((ushort)lresult.bottom,
                              CONCAT22((ushort)lresult.left,(ushort)lresult.top))) >>
            (7 - uVar6) * 8;
                    /* end of inlined section */
  local_30 = (ushort)lresult.top;
  uStack_2a = (ushort)lresult.right;
  uStack_2e = (ushort)lresult.left;
  local_2c = (ushort)lresult.bottom;
  uVar8 = CONCAT26((ushort)lresult.right,
                   CONCAT24((ushort)lresult.bottom,
                            CONCAT22((ushort)lresult.left,(ushort)lresult.top)));
  puVar1 = auStack_40 + 7;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | uVar8 >> (7 - uVar6) * 8;
  puVar1 = (undefined *)((int)&result->right + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar8 >> (7 - uVar6) * 8;
  uVar6 = (uint)result & 7;
  *(ulong *)((int)result - uVar6) =
       uVar8 << uVar6 * 8 | *(ulong *)((int)result - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8
  ;
  return false;
}

void SetRect(Rect *rect, SInt16 left, SInt16 top, SInt16 right, SInt16 bottom) {
  rect->bottom = bottom;
  rect->left = left;
  rect->top = top;
  rect->right = right;
  return;
}

void SetRect(RECT *rect, SInt32 left, SInt32 top, SInt32 right, SInt32 bottom) {
  rect->bottom = bottom;
  rect->left = left;
  rect->top = top;
  rect->right = right;
  return;
}

void SetRect(Rect *rect, LPRECT lpRect) {
  rect->top = *(ushort *)&lpRect->top;
  rect->left = *(ushort *)&lpRect->left;
  rect->bottom = *(ushort *)&lpRect->bottom;
  rect->right = *(ushort *)&lpRect->right;
  return;
}

int LocalUnionRect(LPRECT result, RECT *rect1, RECT *rect2) {
  if (rect1->top < rect2->top) {
    result->top = rect1->top;
  }
  else {
    result->top = rect2->top;
  }
  if (rect1->left < rect2->left) {
    result->left = rect1->left;
  }
  else {
    result->left = rect2->left;
  }
  if (rect2->right < rect1->right) {
    result->right = rect1->right;
  }
  else {
    result->right = rect2->right;
  }
  if (rect2->bottom < rect1->bottom) {
    result->bottom = rect1->bottom;
  }
  else {
    result->bottom = rect2->bottom;
  }
  return 1;
}

void UnionRect(Rect *rect1, Rect *rect2, Rect *result) {
  if ((short)rect1->top < (short)rect2->top) {
    result->top = rect1->top;
  }
  else {
    result->top = rect2->top;
  }
  if ((short)rect1->left < (short)rect2->left) {
    result->left = rect1->left;
  }
  else {
    result->left = rect2->left;
  }
  if ((short)rect2->right < (short)rect1->right) {
    result->right = rect1->right;
  }
  else {
    result->right = rect2->right;
  }
  if ((short)rect2->bottom < (short)rect1->bottom) {
    result->bottom = rect1->bottom;
    return;
  }
  result->bottom = rect2->bottom;
  return;
}

bool EqualRect(Rect *rect1, Rect *rect2) {
  bool bVar1;
  
  bVar1 = false;
  if ((((rect1->left == rect2->left) && (bVar1 = false, rect1->top == rect2->top)) &&
      (bVar1 = false, rect1->right == rect2->right)) &&
     (bVar1 = true, rect1->bottom != rect2->bottom)) {
    bVar1 = false;
  }
  return bVar1;
}

void InsetRect_Mac(Rect *r, SInt16 hdelta, SInt16 vdelta) {
  r->top = vdelta + r->top;
  r->right = r->right - hdelta;
  r->bottom = r->bottom - vdelta;
  r->left = hdelta + r->left;
  return;
}

bool PtInRect(Point p, Rect *r) {
  bool bVar1;
  ushort local_10;
  ushort uStack_e;
  
  uStack_e = p.h;
  bVar1 = false;
  if (((long)(short)r->left <= (long)(int)(short)uStack_e) &&
     ((local_10 = p.v, (long)(short)r->right <= (long)(int)(short)uStack_e ||
      ((bVar1 = false, (short)r->top <= (short)local_10 &&
       (bVar1 = true, (short)r->bottom <= (short)local_10)))))) {
    bVar1 = false;
  }
  return bVar1;
}

bool EmptyRect(Rect *r) {
  if (((short)r->top < (short)r->bottom) && ((short)r->left < (short)r->right)) {
    return false;
  }
  return true;
}

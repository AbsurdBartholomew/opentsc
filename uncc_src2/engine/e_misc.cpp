// STATUS: NOT STARTED

#include "e_misc.h"

static long int xlim[3][2];
static float xarg[3];

void* memcpy(void *pDest, void *pSource, unsigned int nBytes) {
	u32 or;
	s64 *pD;
	s64 *pS;
	u32 *pD;
	u32 *pS;
	u8 *pD;
	u8 *pS;
	
  undefined uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  
  if (nBytes == 0) {
    return (void *)0x0;
  }
  uVar7 = (uint)pDest | (uint)pSource | nBytes;
  if ((uVar7 & 7) == 0) {
    uVar7 = nBytes >> 3;
    puVar4 = (undefined8 *)pDest;
    do {
                    /* WARNING: Load size is inaccurate */
      uVar3 = *pSource;
      uVar7 = uVar7 - 1;
      pSource = (void *)((int)pSource + 8);
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
    } while (uVar7 != 0);
    return pDest;
  }
  puVar6 = (undefined *)pDest;
  if ((uVar7 & 3) == 0) {
    uVar7 = nBytes >> 2;
    puVar5 = (undefined4 *)pDest;
    do {
                    /* WARNING: Load size is inaccurate */
      uVar2 = *pSource;
      uVar7 = uVar7 - 1;
      pSource = (void *)((int)pSource + 4);
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (uVar7 != 0);
    return pDest;
  }
  do {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *pSource;
    nBytes = nBytes - 1;
    pSource = (void *)((int)pSource + 1);
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (nBytes != 0);
  return pDest;
}

int log2down(int n) {
	int result;
	
  int iVar1;
  
  iVar1 = -1;
  do {
    n = n >> 1;
    iVar1 = iVar1 + 1;
  } while (n != 0);
  return iVar1;
}

void Pause(float time) {
	EClock clk;
	
  float fVar1;
  EClock clk;
  
  __6EClock(&clk);
  Start__6EClock(&clk);
  do {
    fVar1 = GetSec__6EClock(&clk);
  } while (fVar1 < time);
  ___6EClock(&clk,2);
  return;
}

void DumpBinary64(void *pData, int nBytes) {
	int n64;
	
  uint uVar1;
  
  uVar1 = (uint)nBytes >> 3;
  do {
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0xffffffff);
  return;
}

void DumpBinary128(void *pData, int nBytes, int hex) {
	int n128;
	
  uint uVar1;
  
  uVar1 = (uint)nBytes >> 4;
  do {
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0xffffffff);
  return;
}

int ilog2(float f) {
	int mult;
	u32 i;
	u32 val;
	u32 result;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (f < 1.0) {
    f = 1.0 / f;
  }
  else {
    iVar3 = 1;
  }
  uVar1 = 1;
  iVar2 = 0;
  if (1 < (uint)(int)(f + 0.5)) {
    do {
      uVar1 = uVar1 << 1;
      iVar2 = iVar2 + 1;
    } while (uVar1 < (uint)(int)(f + 0.5));
  }
  return iVar3 * iVar2;
}

int ilog2(u32 i) {
	u32 val;
	u32 result;
	
  uint uVar1;
  int iVar2;
  
  uVar1 = 1;
  iVar2 = 0;
  if (1 < i) {
    do {
      uVar1 = uVar1 << 1;
      iVar2 = iVar2 + 1;
    } while (uVar1 < i);
  }
  return iVar2;
}

float pow2(int exp) {
	float result;
	int n;
	int i;
	
  int iVar1;
  float fVar2;
  
  fVar2 = 1.0;
  iVar1 = -exp;
  if (0 < exp) {
    iVar1 = exp;
  }
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
      fVar2 = fVar2 + fVar2;
    } while (iVar1 != 0);
  }
  if (exp < 0) {
    fVar2 = 1.0 / fVar2;
  }
  return fVar2;
}

void MemSet32(void *pDest, u32 value, int nBytes) {
	u32 *pDst;
	u32 *pEnd;
	
  uint *puVar1;
  
  puVar1 = (uint *)((int)pDest + (nBytes & 0xfffffffcU));
  if ((uint *)pDest != puVar1) {
    *(uint *)pDest = value;
    while (pDest = (void *)((int)pDest + 4), (uint *)pDest != puVar1) {
      *(uint *)pDest = value;
    }
  }
  return;
}

float blendDt(float tgt, float cur, float speed, float closeEnough) {
	float k;
	float newVal;
	float diff;
	
  float fVar1;
  
  fVar1 = tgt;
  if (cur != tgt) {
    fVar1 = speed * _dt;
    if (1.0 < speed * _dt) {
      fVar1 = 1.0;
    }
    fVar1 = cur + (tgt - cur) * fVar1;
    if (ABS(fVar1 - tgt) < closeEnough) {
      fVar1 = tgt;
    }
  }
  return fVar1;
}

float blendAngleDt(float tgt, float cur, float speed, float closeEnough) {
  float fVar1;
  
  if (3.141593 < ABS(tgt - cur)) {
    if (cur < tgt) {
      if (cur + 3.141593 < tgt) {
        for (cur = cur + 6.283185; cur + 3.141593 < tgt; cur = cur + 6.283185) {
        }
      }
    }
    else if (tgt + 3.141593 < cur) {
      for (cur = cur - 6.283185; tgt + 3.141593 < cur; cur = cur - 6.283185) {
      }
    }
  }
  fVar1 = blendDt__Fffff(tgt,cur,speed,closeEnough);
  return fVar1;
}

float GetAngleDelta(float a1, float a2) {
	float p2;
	float diff;
	
  float fVar1;
  
  if (6.283185 < a1) {
    for (a1 = a1 - 6.283185; 6.283185 < a1; a1 = a1 - 6.283185) {
    }
  }
  for (; a1 < 0.0; a1 = a1 + 6.283185) {
  }
  for (; 6.283185 < a2; a2 = a2 - 6.283185) {
  }
  for (; a2 < 0.0; a2 = a2 + 6.283185) {
  }
  fVar1 = a2 - a1;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (3.141593 < fVar1) {
    fVar1 = 6.283185 - fVar1;
  }
  return fVar1;
}

float GetAngleDiff(float a1, float a2) {
	float p2;
	float diff;
	
  float fVar1;
  
  if (6.283185 < a1) {
    for (a1 = a1 - 6.283185; 6.283185 < a1; a1 = a1 - 6.283185) {
    }
  }
  for (; a1 < 0.0; a1 = a1 + 6.283185) {
  }
  for (; 6.283185 < a2; a2 = a2 - 6.283185) {
  }
  for (; a2 < 0.0; a2 = a2 + 6.283185) {
  }
  fVar1 = a2 - a1;
  if (fVar1 < -3.141593) {
    fVar1 = fVar1 + 6.283185;
  }
  else if (3.141593 < fVar1) {
    fVar1 = fVar1 - 6.283185;
  }
  return fVar1;
}

float blendFloat(float a, float b, float k) {
  return b * k + (1.0 - k) * a;
}

float AngleRange90(float inAngle, bool *flip) {
  if (3.141593 < inAngle) {
    for (inAngle = inAngle - 6.283185; 3.141593 < inAngle; inAngle = inAngle - 6.283185) {
    }
  }
  for (; inAngle < -3.141593; inAngle = inAngle + 6.283185) {
  }
  if (inAngle < -1.570796) {
    *(uint *)flip = *(uint *)flip ^ 1;
    inAngle = inAngle + 3.141593;
  }
  else if (1.570796 < inAngle) {
    inAngle = inAngle - 3.141593;
    *(uint *)flip = *(uint *)flip ^ 1;
  }
  return inAngle;
}

float floor(float f) {
  float fVar1;
  
  fVar1 = floorf(f);
  return fVar1;
}

float frand(long int s) {
  long lVar1;
  ulong u;
  float fVar2;
  
  u = s << 0xd ^ s;
  lVar1 = __muldi3(u,u);
  lVar1 = __muldi3(u,lVar1 * 0x3d73 + 0xc0ae5);
  fVar2 = __floatdisf(lVar1 + 0x5208dd0dU & 0x7fffffff);
  return 1.0 - fVar2 * 9.313226e-10;
}

static void interpolate(float *f, int i, int n) {
	float f0[4];
	float f1[4];
	float hp1;
	float hp2;
	
  long *plVar1;
  long *plVar2;
  uint n_00;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float f0 [4];
  float f1 [4];
  
  if (n == 0) {
    plVar3 = xlim + (i & 1);
    plVar2 = (long *)((int)xlim[1] + (i & 2U) * 4);
    plVar1 = xlim[2] + (i >> 2);
    fVar4 = frand__Fl(*plVar3 * 0x43 + *plVar2 * 0x3b + *plVar1 * 0x47);
    *f = fVar4;
    fVar4 = frand__Fl(*plVar3 * 0x49 + *plVar2 * 0x4f + *plVar1 * 0x53);
    f[1] = fVar4;
    fVar4 = frand__Fl(*plVar3 * 0x59 + *plVar2 * 0x61 + *plVar1 * 0x65);
    f[2] = fVar4;
    fVar4 = frand__Fl(*plVar3 * 0x67 + *plVar2 * 0x6b + *plVar1 * 0x6d);
    f[3] = fVar4;
  }
  else {
    n_00 = n - 1;
    interpolate__FPfii(f0,i,n_00);
    interpolate__FPfii(f1,i | 1 << (n_00 & 0x1f),n_00);
    fVar4 = xarg[n_00];
    fVar8 = f0[n_00];
    fVar7 = f1[n_00];
    fVar6 = (fVar4 * -2.0 + 3.0) * fVar4 * fVar4;
    fVar4 = ((fVar4 + fVar4) - 3.0) * fVar4 * fVar4 + 1.0;
    *f = f0[0] * fVar4 + f1[0] * fVar6;
    f[1] = f0[1] * fVar4 + f1[1] * fVar6;
    f[2] = f0[2] * fVar4 + f1[2] * fVar6;
    fVar5 = xarg[n_00];
    f[3] = f0[3] * fVar4 + f1[3] * fVar6 + fVar8 * ((fVar5 - 2.0) * fVar5 + 1.0) * fVar5 +
           fVar7 * (fVar5 - 1.0) * fVar5 * fVar5;
  }
  return;
}

float* noise3(float *xnew) {
	static float x[3] = {
		/* [0] = */ -100000.f,
		/* [1] = */ -100000.f,
		/* [2] = */ -100000.f
	};
	static float f[4];
	
  long u;
  float fVar1;
  
  if (x_1077._0_4_ == *xnew) {
    if (x_1077._4_4_ == xnew[1]) {
      if (x_1077._8_4_ == xnew[2]) goto LAB_002c7fa8;
      goto LAB_002c7ed4;
    }
    x_1077._0_4_ = *xnew;
  }
  else {
LAB_002c7ed4:
    x_1077._0_4_ = *xnew;
  }
  x_1077._4_4_ = xnew[1];
  x_1077._8_4_ = xnew[2];
  fVar1 = floor__Ff(x_1077._0_4_);
  xlim[0][0] = __fixsfdi(fVar1);
  xlim[0][1] = xlim[0][0] + 1;
  fVar1 = floor__Ff(x_1077._4_4_);
  xlim[1][0] = __fixsfdi(fVar1);
  xlim[1][1] = xlim[1][0] + 1;
  fVar1 = floor__Ff(x_1077._8_4_);
  u = __fixsfdi(fVar1);
  xlim[2][1] = u + 1;
  xlim[2][0] = u;
  fVar1 = __floatdisf(xlim[0][0]);
  xarg[0] = x_1077._0_4_ - fVar1;
  fVar1 = __floatdisf(xlim[1][0]);
  xarg[1] = x_1077._4_4_ - fVar1;
  fVar1 = __floatdisf(u);
  xarg[2] = x_1077._8_4_ - fVar1;
  interpolate__FPfii((float *)&f_1078,0,3);
LAB_002c7fa8:
  return (float *)&f_1078;
}

float fnoise3(float *p) {
	long int t[3];
	long int v[3];
	long int beg[3];
	float fval[8];
	float fc;
	int branch;
	long int s;
	int i;
	int j;
	
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long t [3];
  long v [3];
  long beg [3];
  float fval [8];
  float *local_e0;
  long *local_dc;
  long *local_d8;
  float *local_d4;
  long local_d0;
  
  plVar6 = t;
  plVar5 = beg;
  local_d4 = fval;
  iVar9 = 2;
  fVar12 = __floatdisf(10000);
  local_d8 = plVar5;
  do {
    fVar15 = *p;
    iVar9 = iVar9 + -1;
    p = p + 1;
    lVar2 = __fixsfdi(fVar12 * fVar15);
    *plVar6 = lVar2;
    plVar4 = local_d8;
    fVar15 = floor__Ff(fVar15);
    plVar6 = plVar6 + 1;
    fVar13 = __floatdisf(10000);
    lVar2 = __fixsfdi(fVar13 * fVar15);
    *plVar5 = lVar2;
    plVar5 = plVar5 + 1;
  } while (-1 < iVar9);
  local_d0 = 5000;
  iVar9 = 0;
  pfVar8 = local_d4;
  do {
    uVar10 = 0;
    plVar5 = v;
    plVar6 = plVar4;
    do {
      lVar2 = *plVar6;
      *plVar5 = lVar2;
      if ((iVar9 >> (uVar10 & 0x1f) & 1U) != 0) {
        *plVar5 = lVar2 + 10000;
      }
      uVar10 = uVar10 + 1;
      plVar6 = plVar6 + 1;
      plVar5 = plVar5 + 1;
    } while ((int)uVar10 < 3);
    iVar9 = iVar9 + 1;
    fVar12 = frand__Fl(v[0] * 0x11 + v[1] * 0x17 + v[2] * 0x1d);
    *pfVar8 = fVar12;
    pfVar8 = pfVar8 + 1;
  } while (iVar9 < 8);
  fVar12 = 0.0001;
  local_e0 = local_d4;
  while( true ) {
    lVar2 = local_d0;
    fVar15 = 0.0;
    iVar9 = 7;
    pfVar8 = local_e0;
    do {
      fVar13 = *pfVar8;
      iVar9 = iVar9 + -1;
      pfVar8 = pfVar8 + 1;
      fVar15 = fVar15 + fVar13;
    } while (-1 < iVar9);
    if (local_d0 == 0) break;
    local_d0 = local_d0 >> 1;
    uVar11 = 0;
    uVar10 = 0;
    plVar5 = t;
    plVar6 = v;
    plVar4 = local_d8;
    do {
      lVar3 = *plVar4;
      *plVar6 = lVar3 + lVar2;
      if (lVar3 + lVar2 < *plVar5) {
        uVar11 = uVar11 | 1 << (uVar10 & 0x1f);
      }
      uVar10 = uVar10 + 1;
      plVar5 = plVar5 + 1;
      plVar6 = plVar6 + 1;
      plVar4 = plVar4 + 1;
    } while ((int)uVar10 < 3);
    uVar10 = 0;
    fVar13 = frand__Fl(v[0] * 0x11 + v[1] * 0x17 + v[2] * 0x1d);
    fVar14 = __floatdisf(lVar2);
    local_d4[~uVar11 & 7] = fVar15 * 0.125 + fVar14 * fVar13 * fVar12;
    plVar5 = v;
    plVar6 = local_d8;
    do {
      lVar3 = lVar2;
      if (((int)uVar11 >> (uVar10 & 0x1f) & 1U) == 0) {
        lVar3 = -lVar2;
      }
      *plVar5 = *plVar5 + lVar3;
      fVar15 = 0.0;
      uVar7 = 0;
      pfVar8 = local_d4;
      do {
        uVar1 = uVar7 ^ uVar11;
        uVar7 = uVar7 + 1;
        if (((int)~uVar1 >> (uVar10 & 0x1f) & 1U) != 0) {
          fVar15 = fVar15 + *pfVar8;
        }
        pfVar8 = pfVar8 + 1;
      } while ((int)uVar7 < 8);
      fVar13 = frand__Fl(v[0] * 0x11 + v[1] * 0x17 + v[2] * 0x1d);
      fVar15 = fVar15 * 0.25;
      fVar14 = __floatdisf(lVar2);
      uVar7 = uVar10 & 0x1f;
      uVar10 = uVar10 + 1;
      local_d4[~(uVar11 ^ 1 << uVar7) & 7] = fVar15 + fVar14 * fVar13 * fVar12;
      lVar3 = *plVar6;
      plVar6 = plVar6 + 1;
      *plVar5 = lVar3 + lVar2;
      pfVar8 = local_d4;
      plVar4 = local_d8;
      plVar5 = plVar5 + 1;
    } while ((int)uVar10 < 3);
    uVar10 = 0;
    local_dc = v;
    do {
      uVar7 = (int)(uVar10 + 1) % 3;
      if (((int)uVar11 >> (uVar7 & 0x1f) & 1U) == 0) {
        lVar3 = v[uVar7] - lVar2;
      }
      else {
        lVar3 = v[uVar7] + lVar2;
      }
      v[uVar7] = lVar3;
      uVar7 = (int)(uVar10 + 2) % 3;
      if (((int)uVar11 >> (uVar7 & 0x1f) & 1U) == 0) {
        lVar3 = v[uVar7] - lVar2;
      }
      else {
        lVar3 = v[uVar7] + lVar2;
      }
      v[uVar7] = lVar3;
      uVar7 = 1 << (uVar10 & 0x1f);
      fVar14 = pfVar8[uVar11 & ~uVar7];
      fVar15 = pfVar8[uVar11 | uVar7];
      fVar13 = frand__Fl(v[0] * 0x11 + v[1] * 0x17 + v[2] * 0x1d);
      fVar14 = (fVar14 + fVar15) * 0.5;
      fVar15 = __floatdisf(lVar2);
      iVar9 = (int)(uVar10 + 2) % 3;
      uVar10 = uVar10 + 1;
      pfVar8[uVar11 ^ uVar7] = fVar14 + fVar15 * fVar13 * fVar12;
      local_dc[(int)uVar10 % 3] = plVar4[(int)uVar10 % 3] + lVar2;
      local_dc[iVar9] = plVar4[iVar9] + lVar2;
    } while ((int)uVar10 < 3);
    uVar10 = 0;
    plVar5 = local_d8;
    do {
      uVar7 = uVar10 & 0x1f;
      uVar10 = uVar10 + 1;
      if (((int)uVar11 >> uVar7 & 1U) != 0) {
        *plVar5 = *plVar5 + lVar2;
      }
      plVar5 = plVar5 + 1;
    } while ((int)uVar10 < 3);
  }
  return fVar15 * 0.125;
}

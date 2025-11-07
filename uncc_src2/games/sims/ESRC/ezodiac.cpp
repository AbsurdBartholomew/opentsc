// STATUS: NOT STARTED

#include "ezodiac.h"

static int sLocalToPersonDataMap[5] = {
	/* [0] = */ 6,
	/* [1] = */ 2,
	/* [2] = */ 5,
	/* [3] = */ 7,
	/* [4] = */ 3
};

static float sCenters[12][5] = {
	/* [0] = */ {
		/* [0] = */ 8.f,
		/* [1] = */ 3.f,
		/* [2] = */ 3.f,
		/* [3] = */ 5.f,
		/* [4] = */ 6.f
	},
	/* [1] = */ {
		/* [0] = */ 5.f,
		/* [1] = */ 4.f,
		/* [2] = */ 8.f,
		/* [3] = */ 5.f,
		/* [4] = */ 3.f
	},
	/* [2] = */ {
		/* [0] = */ 7.f,
		/* [1] = */ 3.f,
		/* [2] = */ 3.f,
		/* [3] = */ 4.f,
		/* [4] = */ 8.f
	},
	/* [3] = */ {
		/* [0] = */ 3.f,
		/* [1] = */ 6.f,
		/* [2] = */ 4.f,
		/* [3] = */ 6.f,
		/* [4] = */ 6.f
	},
	/* [4] = */ {
		/* [0] = */ 10.f,
		/* [1] = */ 3.f,
		/* [2] = */ 4.f,
		/* [3] = */ 4.f,
		/* [4] = */ 4.f
	},
	/* [5] = */ {
		/* [0] = */ 2.f,
		/* [1] = */ 5.f,
		/* [2] = */ 3.f,
		/* [3] = */ 9.f,
		/* [4] = */ 6.f
	},
	/* [6] = */ {
		/* [0] = */ 8.f,
		/* [1] = */ 7.f,
		/* [2] = */ 6.f,
		/* [3] = */ 2.f,
		/* [4] = */ 2.f
	},
	/* [7] = */ {
		/* [0] = */ 5.f,
		/* [1] = */ 3.f,
		/* [2] = */ 3.f,
		/* [3] = */ 6.f,
		/* [4] = */ 8.f
	},
	/* [8] = */ {
		/* [0] = */ 3.f,
		/* [1] = */ 4.f,
		/* [2] = */ 7.f,
		/* [3] = */ 2.f,
		/* [4] = */ 9.f
	},
	/* [9] = */ {
		/* [0] = */ 4.f,
		/* [1] = */ 5.f,
		/* [2] = */ 8.f,
		/* [3] = */ 7.f,
		/* [4] = */ 1.f
	},
	/* [10] = */ {
		/* [0] = */ 4.f,
		/* [1] = */ 6.f,
		/* [2] = */ 7.f,
		/* [3] = */ 4.f,
		/* [4] = */ 4.f
	},
	/* [11] = */ {
		/* [0] = */ 3.f,
		/* [1] = */ 7.f,
		/* [2] = */ 3.f,
		/* [3] = */ 5.f,
		/* [4] = */ 7.f
	}
};

static bool sInited = false;
static u16 *sLocalized[12];
static u16 *sCompatibleWith;
static u16 *sIncompatibleWith;

bool InitZodiac() {
  if (_sInited == 0) {
    sLocalized[0] = GetUiString__7EGlobalPCc(&_globals,"aries");
    sLocalized[1] = GetUiString__7EGlobalPCc(&_globals,"taurus");
    sLocalized[2] = GetUiString__7EGlobalPCc(&_globals,"gemini");
    sLocalized[3] = GetUiString__7EGlobalPCc(&_globals,"cancer");
    sLocalized[4] = GetUiString__7EGlobalPCc(&_globals,"leo");
    sLocalized[5] = GetUiString__7EGlobalPCc(&_globals,"virgo");
    sLocalized[6] = GetUiString__7EGlobalPCc(&_globals,"libra");
    sLocalized[7] = GetUiString__7EGlobalPCc(&_globals,"scorpio");
    sLocalized[8] = GetUiString__7EGlobalPCc(&_globals,"sagitarius");
    sLocalized[9] = GetUiString__7EGlobalPCc(&_globals,"capricorn");
    sLocalized[10] = GetUiString__7EGlobalPCc(&_globals,"aquarius");
    sLocalized[11] = GetUiString__7EGlobalPCc(&_globals,"pisces");
    sCompatibleWith = GetUiString__7EGlobalPCc(&_globals,"compatiblewith");
    sIncompatibleWith = GetUiString__7EGlobalPCc(&_globals,"incompatiblewith");
    _sInited = 1;
  }
  return SUB41(_sInited,0);
}

StdPrm ComputeZodiacSign(StdPrm *inPersonData) {
	int i;
	int j;
	int best_sign;
	float best_distance;
	float location[5];
	float distance;
	float delta;
	
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float location [5];
  
  pfVar2 = location;
  piVar6 = sLocalToPersonDataMap;
  iVar4 = 4;
  do {
    iVar1 = *piVar6;
    iVar4 = iVar4 + -1;
    piVar6 = piVar6 + 1;
    *pfVar2 = (float)(int)(short)inPersonData[iVar1] * 0.01;
    pfVar2 = pfVar2 + 1;
  } while (-1 < iVar4);
  iVar7 = -1;
  fVar10 = 7736.0;
  iVar4 = 1;
  iVar1 = 0;
  do {
    iVar5 = iVar4;
    fVar11 = 0.0;
    pfVar3 = (float *)sCenters[iVar1];
    iVar4 = 4;
    pfVar2 = location;
    do {
      fVar9 = *pfVar2;
      iVar4 = iVar4 + -1;
      fVar8 = *pfVar3;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
      fVar11 = fVar11 + (fVar9 - fVar8) * (fVar9 - fVar8);
    } while (-1 < iVar4);
    iVar4 = iVar5;
    if (fVar10 <= fVar11) {
      fVar11 = fVar10;
      iVar4 = iVar7;
    }
    iVar7 = iVar4;
    fVar10 = fVar11;
    iVar4 = iVar5 + 1;
    iVar1 = iVar5;
  } while (iVar5 + 1 < 0xd);
  if (0xb < iVar7 - 1U) {
    iVar7 = 1;
  }
  return (ushort)iVar7;
}

StdPrm EORComputeZodiacSign(StdPrm *inPersonData) {
	int i;
	int j;
	int best_sign;
	float best_distance;
	short int attributes[5];
	float distance;
	float delta;
	
  short sVar1;
  int iVar2;
  ushort *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort attributes [5];
  
  iVar7 = -1;
  attributes[3] = *inPersonData;
  attributes[0] = inPersonData[1];
  attributes[4] = inPersonData[2];
  attributes[2] = inPersonData[3];
  attributes[1] = inPersonData[4];
  fVar9 = 7736.0;
  iVar5 = 1;
  iVar2 = 0;
  do {
    iVar6 = iVar5;
    fVar10 = 0.0;
    iVar5 = 4;
    pfVar4 = (float *)sCenters[iVar2];
    puVar3 = attributes;
    do {
      sVar1 = *puVar3;
      iVar5 = iVar5 + -1;
      fVar8 = *pfVar4;
      puVar3 = (ushort *)((short *)puVar3 + 1);
      pfVar4 = pfVar4 + 1;
      fVar10 = fVar10 + ((float)(int)sVar1 - fVar8) * ((float)(int)sVar1 - fVar8);
    } while (-1 < iVar5);
    iVar5 = iVar6;
    if (fVar9 <= fVar10) {
      fVar10 = fVar9;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    fVar9 = fVar10;
    iVar5 = iVar6 + 1;
    iVar2 = iVar6;
  } while (iVar6 + 1 < 0xd);
  if (0xb < iVar7 - 1U) {
    iVar7 = 1;
  }
  return (ushort)iVar7;
}

void SetZodiacSign(StdPrm *outPersonData, StdPrm inSign) {
	int i;
	
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  
  if (((int)(short)inSign & 0xffffU) < 0xd) {
    piVar4 = sLocalToPersonDataMap;
    iVar3 = 4;
    pfVar2 = (float *)sCenters[(int)(short)inSign - 1];
    do {
      fVar5 = *pfVar2;
      iVar3 = iVar3 + -1;
      iVar1 = *piVar4;
      pfVar2 = pfVar2 + 1;
      piVar4 = piVar4 + 1;
      outPersonData[iVar1] = (ushort)(int)(fVar5 * 100.0 + 0.5);
    } while (-1 < iVar3);
  }
  return;
}

void EORSetZodiacSign(StdPrm *outPersonData, StdPrm inSign) {
	int i;
	
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  if (((int)(short)inSign & 0xffffU) < 0xd) {
    iVar2 = 4;
    pfVar1 = (float *)sCenters[(int)(short)inSign - 1];
    do {
      fVar3 = *pfVar1;
      iVar2 = iVar2 + -1;
      pfVar1 = pfVar1 + 1;
      *outPersonData = (ushort)(int)(fVar3 * 100.0 + 0.5);
      outPersonData = outPersonData + 1;
    } while (-1 < iVar2);
  }
  return;
}

u16* GetZodiacName(StdPrm inZodiacSign) {
  int iVar1;
  
  iVar1 = (int)(short)inZodiacSign;
  if (_sInited == 0) {
    InitZodiac__Fv();
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (0xc < iVar1) {
    iVar1 = 0xc;
  }
  return sLocalized[iVar1 + -1];
}

StdPrm GetSignFromName(u16 *inName) {
	int i;
	
  int iVar1;
  int iVar2;
  short **ppsVar3;
  
  ppsVar3 = sLocalized;
  iVar2 = 1;
  do {
    iVar1 = wcscmp__FPCUsT0(*ppsVar3,inName);
    if (iVar1 == 0) {
      return (ushort)iVar2;
    }
    iVar2 = iVar2 + 1;
    ppsVar3 = ppsVar3 + 1;
  } while (iVar2 < 0xd);
  return 0;
}

u16* GetCompatibleSigns(StdPrm inZodiacSign) {
  InitZodiac__Fv();
  return (short *)0x0;
}

u16* GetIncompatibleSigns(StdPrm inZodiacSign) {
  InitZodiac__Fv();
  return (short *)0x0;
}

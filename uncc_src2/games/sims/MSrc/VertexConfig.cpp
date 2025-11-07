// STATUS: NOT STARTED

#include "VertexConfig.h"

bool VertexConfig::sLookupsGenerated = false;
unsigned char VertexConfig::kInvalidConfig = 255;
unsigned char VertexConfig::sRotationLookup[3][256];
bool VertexConfig::sBranchTable[256];
bool VertexConfig::sRootTable[256];

static int CountBits(unsigned char a) {
	int count;
	
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(char)a;
  uVar1 = (int)(char)a & 1U;
  if ((uVar2 & 2) != 0) {
    uVar1 = ((int)(char)a & 1U) + 1;
  }
  if ((uVar2 & 4) != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((uVar2 & 8) != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((uVar2 & 0x20) != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((uVar2 & 0x40) != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((uVar2 & 0x80) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

void VertexConfig::GenerateLookups() {
	int i;
	VertexConfig aCfg;
	
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 unaff_s0;
  uchar (*pauVar4) [256];
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  bool *pbVar5;
  undefined8 unaff_s3;
  int in;
  undefined8 unaff_s4;
  int iVar6;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  VertexConfig aCfg;
  Wall local_120;
  Wall local_11c;
  Wall local_118;
  Wall local_114;
  Wall local_110;
  Wall local_10c;
  Wall local_108;
  Wall local_104;
  Wall local_100;
  Wall local_fc;
  Wall local_f8;
  Wall local_f4;
  Wall local_f0;
  Wall local_ec;
  Wall local_e8;
  Wall local_e4;
  Wall local_e0;
  Wall local_dc;
  Wall local_d8;
  Wall local_d4;
  Wall local_d0;
  Wall local_cc;
  Wall local_c8;
  Wall local_c4;
  Wall *local_c0;
  Wall *local_bc;
  Wall *local_b8;
  Wall *local_b4;
  Wall *local_b0;
  Wall *local_ac;
  Wall *local_a8;
  Wall *local_a4;
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
  
  local_bc = &local_120;
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_b8 = &local_11c;
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_b4 = &local_118;
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_b0 = &local_114;
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  iVar6 = 0;
  local_ac = &local_110;
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  in = 0;
  local_a8 = &local_10c;
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  pbVar5 = _12VertexConfig_sBranchTable;
  local_a4 = &local_108;
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = &local_104;
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pauVar4 = _12VertexConfig_sRotationLookup;
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  do {
    __12VertexConfigi(&aCfg,in);
    *(byte *)pauVar4 = 0;
    puVar3 = _12VertexConfig_sRotationLookup[1] + in;
    *puVar3 = 0;
    *(undefined4 *)(_12VertexConfig_sRootTable + iVar6) = 0;
    (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] = 0;
    *(undefined4 *)pbVar5 = 0;
    local_120 = kNE;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_bc);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 2;
      *puVar3 = *puVar3 | 4;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 8;
    }
    local_11c = kNW;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_b8);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 4;
      *puVar3 = *puVar3 | 8;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 1;
    }
    local_118 = kSW;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_b4);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 8;
      *puVar3 = *puVar3 | 1;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 2;
    }
    local_114 = kSE;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_b0);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 1;
      *puVar3 = *puVar3 | 2;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 4;
    }
    local_110 = kN;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_ac);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 0x20;
      *puVar3 = *puVar3 | 0x40;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 0x80;
    }
    local_10c = kW;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_a8);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 0x40;
      *puVar3 = *puVar3 | 0x80;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 0x10;
    }
    local_108 = kS;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_a4);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 0x80;
      *puVar3 = *puVar3 | 0x10;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 0x20;
    }
    local_104 = kE;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,local_c0);
    if (bVar1) {
      (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] =
           (*(uchar (*) [256])((int)pauVar4 + 0x200))[0] | 0x10;
      *puVar3 = *puVar3 | 0x20;
      *(byte *)pauVar4 = *(byte *)pauVar4 | 0x40;
    }
    bVar1 = IsValid__C12VertexConfig(&aCfg);
    if (bVar1) {
      local_100 = kNE;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_100);
      if (bVar1) {
        local_fc = kNW|kSE|kN|kW|kS|kE;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_fc);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      local_f8 = kNW;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_f8);
      if (bVar1) {
        local_f4 = kNE|kSW|kN|kW|kS|kE;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_f4);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      local_f0 = kSE;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_f0);
      if (bVar1) {
        local_ec = kNE|kSW|kN|kW|kS|kE;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_ec);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      local_e8 = kSE;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_e8);
      if (bVar1) {
        local_e4 = kNE|kSW|kN|kW|kS|kE;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_e4);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      local_e0 = kN;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_e0);
      if (bVar1) {
        local_dc = kNE|kNW|kSW|kSE|kW|kE;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_dc);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      local_d8 = kS;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_d8);
      if (bVar1) {
        local_d4 = kNE|kNW|kSW|kSE|kW|kE;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_d4);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      local_d0 = kE;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_d0);
      if (bVar1) {
        local_cc = kNE|kNW|kSW|kSE|kN|kS;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_cc);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      local_c8 = kW;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_c8);
      if (bVar1) {
        local_c4 = kNE|kNW|kSW|kSE|kN|kS;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(&aCfg,&local_c4);
        if (bVar1) {
          *(undefined4 *)pbVar5 = 1;
        }
      }
      iVar2 = CountBits__FUc(aCfg.mWalls);
      if (iVar2 == 1) {
        *(undefined4 *)(_12VertexConfig_sRootTable + iVar6) = 1;
      }
    }
    ___12VertexConfig(&aCfg,2);
    in = in + 1;
    iVar6 = iVar6 + 4;
    pbVar5 = (bool *)((int)pbVar5 + 4);
    pauVar4 = (uchar (*) [256])((int)pauVar4 + 1);
  } while (in < 0x100);
  return;
}

VertexConfig* VertexConfig::VertexConfig() {
  this->mWalls = '\0';
  return this;
}

VertexConfig* VertexConfig::VertexConfig(VertexConfig &in) {
  this->mWalls = in->mWalls;
  return this;
}

void VertexConfig::~VertexConfig(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

VertexConfig& VertexConfig::operator=(VertexConfig &in) {
  this->mWalls = in->mWalls;
  return this;
}

VertexConfig* VertexConfig::VertexConfig(int in) {
  this->mWalls = (uchar)in;
  return this;
}

bool VertexConfig::operator==(VertexConfig &in) {
  return this->mWalls == in->mWalls;
}

bool VertexConfig::operator<(VertexConfig &in) {
  return (this->mWalls & 0xf0) < (in->mWalls & 0xf0);
}

bool VertexConfig::Has(Wall &in) {
  return ((uint)this->mWalls & *in) != 0;
}

VertexConfig& VertexConfig::Add(Wall &in) {
  this->mWalls = this->mWalls | *(byte *)in;
  return this;
}

VertexConfig& VertexConfig::Add(VertexConfig &in) {
  this->mWalls = this->mWalls | in->mWalls;
  return this;
}

VertexConfig& VertexConfig::Remove(Wall &in) {
  this->mWalls = this->mWalls & ~*(byte *)in;
  return this;
}

VertexConfig& VertexConfig::Remove(VertexConfig &in) {
  this->mWalls = this->mWalls & ~in->mWalls;
  return this;
}

bool VertexConfig::IsValid() {
  bool bVar1;
  bool bVar2;
  undefined8 unaff_s0;
  byte bVar3;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  Wall local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  Wall local_60;
  Wall local_5c;
  Wall local_58;
  Wall local_54;
  Wall local_50;
  Wall local_4c;
  Wall local_48;
  Wall local_44;
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
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  bVar2 = false;
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = kN;
  bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_70);
  if (bVar1) {
    local_6c = 1;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,(Wall *)((uint)&local_70 | 4));
    if (bVar1) {
      bVar2 = true;
    }
    else {
      local_68 = 2;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,(Wall *)((uint)&local_70 | 8));
      if (bVar1) {
        bVar2 = true;
      }
    }
  }
  bVar1 = false;
  if (!bVar2) {
    bVar2 = false;
    local_64 = 0x20;
    bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,(Wall *)((uint)&local_70 | 0xc));
    if (bVar1) {
      local_60 = kNW;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_60);
      if (bVar1) {
        bVar2 = true;
      }
      else {
        local_5c = kSW;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_5c);
        if (bVar1) {
          bVar2 = true;
        }
      }
    }
    bVar1 = false;
    if (!bVar2) {
      bVar2 = false;
      local_58 = kS;
      bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_58);
      if (bVar1) {
        local_54 = kSW;
        bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_54);
        if (bVar1) {
          bVar2 = true;
        }
        else {
          local_50 = kSW;
          bVar1 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_50);
          if (bVar1) {
            bVar2 = true;
          }
        }
      }
      bVar1 = false;
      if (!bVar2) {
        bVar3 = 0;
        local_4c = kE;
        bVar2 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_4c);
        if (bVar2) {
          local_48 = kSE;
          bVar2 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_48);
          if (bVar2) {
            bVar3 = 1;
          }
          else {
            local_44 = kNE;
            bVar2 = Has__C12VertexConfigRCQ212VertexConfig4Wall(this,&local_44);
            if (!bVar2) {
              return true;
            }
            bVar3 = 1;
          }
        }
        bVar1 = (bool)(bVar3 ^ 1);
      }
    }
  }
  return bVar1;
}

bool VertexConfig::IsEmpty() {
  return this->mWalls == '\0';
}

int VertexConfig::ToInt() {
  return (int)this->mWalls;
}

VertexConfig& VertexConfig::Rotate(int inRotation) {
  if (0 < inRotation) {
    this->mWalls = _12VertexConfig_sRotationLookup[inRotation + -1][this->mWalls];
  }
  return this;
}

VertexConfig& VertexConfig::Clear() {
  this->mWalls = '\0';
  return this;
}

bool VertexConfig::HasBranch() {
  return SUB41(*(undefined4 *)(_12VertexConfig_sBranchTable + (uint)this->mWalls * 4),0);
}

bool VertexConfig::IsRoot() {
  return SUB41(*(undefined4 *)(_12VertexConfig_sRootTable + (uint)this->mWalls * 4),0);
}

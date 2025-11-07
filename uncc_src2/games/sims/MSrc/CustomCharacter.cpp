// STATUS: NOT STARTED

#include "CustomCharacter.h"

CustomCharacter* CustomCharacter::CustomCharacter() {
  this->m_nEyeColor = '\x01';
  *(undefined4 *)this = 0;
  *(undefined4 *)&this->m_bAdult = 1;
  this->m_nBodyType = '\0';
  this->m_nGlassesIndex = '\0';
  this->m_nFaceIndex = '\0';
  this->m_nHairHatIndex = '\0';
  this->m_nUpperBodyIndex = '\0';
  this->m_nLowerBodyIndex = '\0';
  this->m_nShoesIndex = '\0';
  this->m_nFacialHairIndex = '\0';
  this->m_nSkinColor = '\0';
  this->m_nHairHatColor = '\0';
  this->m_nUpperBodyColor = '\x01';
  this->m_nLowerBodyColor = '\x01';
  this->m_nShoesColor = '\x01';
  this->m_nFacialHairColor = '\0';
  return this;
}

CustomCharacter* CustomCharacter::CustomCharacter(CustomCharacter &other) {
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  char *pcVar4;
  ulong in_v1;
  ulong uVar5;
  ulong in_a2;
  ulong uVar6;
  ulong in_a3;
  ulong uVar7;
  
  uVar1 = (uint)&other->field_0x7 & 7;
  uVar2 = (uint)other & 7;
  uVar5 = (*(long *)(&other->field_0x7 + -uVar1) << (7 - uVar1) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)other - uVar2) >> uVar2 * 8;
  uVar1 = (uint)&other->m_nFacialHairIndex & 7;
  uVar2 = (uint)&other->m_nBodyType & 7;
  uVar6 = (*(long *)(&other->m_nFacialHairIndex + -uVar1) << (7 - uVar1) * 8 |
          in_a2 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)(&other->m_nBodyType + -uVar2) >> uVar2 * 8;
  uVar1 = (uint)&other->field_0x17 & 7;
  uVar2 = (uint)&other->m_nSkinColor & 7;
  uVar7 = (*(long *)(&other->field_0x17 + -uVar1) << (7 - uVar1) * 8 |
          in_a3 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)(&other->m_nSkinColor + -uVar2) >> uVar2 * 8;
  uVar1 = (uint)&this->field_0x7 & 7;
  puVar3 = (ulong *)(&this->field_0x7 + -uVar1);
  *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar5 >> (7 - uVar1) * 8;
  uVar1 = (uint)this & 7;
  *(ulong *)((int)this - uVar1) =
       uVar5 << uVar1 * 8 | *(ulong *)((int)this - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  uVar1 = (uint)&this->m_nFacialHairIndex & 7;
  pcVar4 = &this->m_nFacialHairIndex + -uVar1;
  *(ulong *)pcVar4 = *(ulong *)pcVar4 & -1L << (uVar1 + 1) * 8 | uVar6 >> (7 - uVar1) * 8;
  uVar1 = (uint)&this->m_nBodyType & 7;
  pcVar4 = &this->m_nBodyType + -uVar1;
  *(ulong *)pcVar4 = uVar6 << uVar1 * 8 | *(ulong *)pcVar4 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  uVar1 = (uint)&this->field_0x17 & 7;
  puVar3 = (ulong *)(&this->field_0x17 + -uVar1);
  *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
  uVar1 = (uint)&this->m_nSkinColor & 7;
  pcVar4 = &this->m_nSkinColor + -uVar1;
  *(ulong *)pcVar4 = uVar7 << uVar1 * 8 | *(ulong *)pcVar4 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  return this;
}

void CustomCharacter::DoStream(ReconBuffer *r, SInt32 version) {
  ReconBool__11ReconBufferPb(r,&this->m_bMale);
  ReconBool__11ReconBufferPb(r,&this->m_bAdult);
  Recon8__11ReconBufferPSci(r,&this->m_nBodyType,1);
  Recon8__11ReconBufferPSci(r,&this->m_nGlassesIndex,1);
  Recon8__11ReconBufferPSci(r,&this->m_nFaceIndex,1);
  Recon8__11ReconBufferPSci(r,&this->m_nHairHatIndex,1);
  Recon8__11ReconBufferPSci(r,&this->m_nUpperBodyIndex,1);
  Recon8__11ReconBufferPSci(r,&this->m_nLowerBodyIndex,1);
  Recon8__11ReconBufferPSci(r,&this->m_nShoesIndex,1);
  Recon8__11ReconBufferPSci(r,&this->m_nFacialHairIndex,1);
  Recon8__11ReconBufferPSci(r,&this->m_nSkinColor,1);
  Recon8__11ReconBufferPSci(r,&this->m_nHairHatColor,1);
  Recon8__11ReconBufferPSci(r,&this->m_nUpperBodyColor,1);
  Recon8__11ReconBufferPSci(r,&this->m_nLowerBodyColor,1);
  Recon8__11ReconBufferPSci(r,&this->m_nShoesColor,1);
  Recon8__11ReconBufferPSci(r,&this->m_nFacialHairColor,1);
  Recon8__11ReconBufferPSci(r,&this->m_nEyeColor,1);
  return;
}

void CustomCharacter::Print() {
  CTGDump *pCVar1;
  
  __ls__7CTGDumpPCc(&ctgDump,"CustomCharacter:");
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_bMale ");
  __ls__7CTGDumpi(pCVar1,*(int *)this);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_bAdult ");
  __ls__7CTGDumpi(pCVar1,*(int *)&this->m_bAdult);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_bBodyType ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nBodyType);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nGlassesIndex ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nGlassesIndex);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nFaceIndex ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nFaceIndex);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nHairHatIndex ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nHairHatIndex);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nUpperBodyIndex ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nUpperBodyIndex);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nLowerBodyIndex ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nLowerBodyIndex);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nShoesIndex ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nShoesIndex);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nFacialHairIndex ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nFacialHairIndex);
  __ls__7CTGDumpPCc(&ctgDump,"\r\n");
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nSkinColor ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nSkinColor);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nHairHatColor ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nHairHatColor);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nUpperBodyColor ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nUpperBodyColor);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nShoesColor ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nShoesColor);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nFacialHairColor ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nFacialHairColor);
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"\r\n  m_nEyeColor ");
  __ls__7CTGDumpi(pCVar1,(int)this->m_nEyeColor);
  __ls__7CTGDumpPCc(&ctgDump,"\r\n");
  return;
}

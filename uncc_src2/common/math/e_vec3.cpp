// STATUS: NOT STARTED

#include "e_vec3.h"

void EVec2::Print() {
  return;
}

void EVec3::Print() {
  return;
}

void EVec3::ToU8s(unsigned char *v) {
	int i;
	
  int iVar1;
  float fVar2;
  
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
    fVar2 = (this->field0_0x0).d[0] * 255.0;
    this = (EVec3 *)((int)&this->field0_0x0 + 4);
    if (0.0 <= fVar2) {
      *v = (uchar)(int)(float)((int)fVar2 * (uint)(fVar2 < 255.0) |
                              (uint)(fVar2 >= 255.0) * 0x437f0000);
    }
    else {
      *v = '\0';
    }
    v = v + 1;
  } while (-1 < iVar1);
  return;
}

void EVec3::FromU8s(unsigned char *v) {
	int i;
	
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pbVar1 = v + iVar2;
    iVar2 = iVar2 + 1;
    (this->field0_0x0).d[0] = (float)(uint)*pbVar1 * 0.003921569;
    this = (EVec3 *)((int)&this->field0_0x0 + 4);
  } while (iVar2 < 3);
  return;
}

void EVec3::ToS8s(signed char *v) {
	int i;
	
  int iVar1;
  float fVar2;
  
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
    fVar2 = (this->field0_0x0).d[0] * 127.0;
    this = (EVec3 *)((int)&this->field0_0x0 + 4);
    if (-127.0 <= fVar2) {
      *v = (char)(int)(float)((int)fVar2 * (uint)(fVar2 < 127.0) |
                             (uint)(fVar2 >= 127.0) * 0x42fe0000);
    }
    else {
      *v = -0x7f;
    }
    v = v + 1;
  } while (-1 < iVar1);
  return;
}

void EVec3::FromS8s(signed char *v) {
	int i;
	
  char cVar1;
  int iVar2;
  
  iVar2 = 2;
  do {
    cVar1 = *v;
    iVar2 = iVar2 + -1;
    v = v + 1;
    (this->field0_0x0).d[0] = (float)(int)cVar1 * 0.007874016;
    this = (EVec3 *)((int)&this->field0_0x0 + 4);
  } while (-1 < iVar2);
  return;
}

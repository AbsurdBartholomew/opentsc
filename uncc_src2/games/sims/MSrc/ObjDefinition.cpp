// STATUS: NOT STARTED

#include "ObjDefinition.h"

void ObjDefinition::Swizzle(void *objdefvoid, SInt32 size) {
  return;
}

void ObjDefinition::GetMultiTileOffsets(Int *x, Int *y) {
  *x = (int)((uint)this->subIndex << 0x10) >> 0x18;
  *y = (uint)*(byte *)&this->subIndex;
  return;
}

SInt16 ObjDefinition::GetSubIndex(Int x, Int y) {
  return (ushort)(x << 8) | (ushort)y & 0xff;
}

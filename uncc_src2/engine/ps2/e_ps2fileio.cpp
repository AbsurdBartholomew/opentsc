// STATUS: NOT STARTED

#include "e_ps2fileio.h"

EPs2IOPInterface _ps2IOPInterface = {
};

static EMutex _mutex;
static unsigned char _sbuf[384];
static sceSifClientData _cd;

EPs2IOPInterface* EPs2IOPInterface::EPs2IOPInterface() {
  return this;
}

void EPs2IOPInterface::~EPs2IOPInterface(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool EPs2IOPInterface::Initialize() {
	bool bResult;
	
  long lVar1;
  
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  lVar1 = sceSifBindRpc(0x4d4340,0x12345,0);
  Release__6EMutex(&_mutex);
  return -1 < lVar1;
}

u32 EPs2IOPInterface::OpenStream(EFSOpen &desc) {
	u32 result;
	
  uint uVar1;
  
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  memcpy(_sbuf,desc,0x120);
  sceSifCallRpc(0x4d4340,1,0,0x4d41c0,0x120,0x4d41c0,4,0);
  uVar1 = _sbuf._0_4_;
  Release__6EMutex(&_mutex);
  return uVar1;
}

u32 EPs2IOPInterface::OpenStream(char *filename) {
	u32 nFD;
	EFSOpen odesc;
	EFSState state;
	ESleep sleeper;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint nFD;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  EFSOpen odesc;
  EFSState state;
  ESleep sleeper;
  undefined auStack_70 [16];
  ulong uStack_60;
  uint local_58;
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
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  odesc.field0_0x0.size = 0x120;
  odesc.field0_0x0._8_1_ = 0;
  odesc.flags = 0;
  strncpy(odesc.filename,filename,0xff);
  odesc.filename[255] = '\0';
  nFD = OpenStream__16EPs2IOPInterfaceRC7EFSOpen(this,&odesc);
  if (nFD != 0) {
    GetStreamState__16EPs2IOPInterfaceUi(&state,this,nFD);
    __6ESleep(&sleeper);
    do {
      Sleep__6ESleepUi(&sleeper,0x14);
      GetStreamState__16EPs2IOPInterfaceUi((EFSState *)auStack_70,this,nFD);
      state.loopEnd = local_58;
      state._16_8_ = uStack_60;
      state._8_8_ = auStack_70._8_8_;
      state._0_8_ = auStack_70._0_8_;
      puVar1 = (undefined *)((int)&state.id + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | auStack_70._0_8_ >> (7 - uVar2) * 8;
      puVar1 = (undefined *)((int)&state.pos + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | state._8_8_ >> (7 - uVar2) * 8;
      puVar1 = (undefined *)((int)&state.loopStart + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | state._16_8_ >> (7 - uVar2) * 8;
      state._9_1_ = (char)(state._8_8_ >> 8);
    } while (state._9_1_ == '\0');
    if (state._9_1_ == -2) {
      CloseStream__16EPs2IOPInterfaceUi(this,nFD);
      nFD = 0;
    }
    ___6ESleep(&sleeper,2);
  }
  return nFD;
}

bool EPs2IOPInterface::CloseStream(u32 nFD) {
	int result;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50[0] = nFD;
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  memcpy(_sbuf,local_50,4);
  sceSifCallRpc(0x4d4340,2,0,0x4d41c0,4,0x4d41c0,4,0);
  iVar1 = _sbuf._0_4_;
  Release__6EMutex(&_mutex);
  return iVar1 != 0;
}

EFSState EPs2IOPInterface::GetStreamState(u32 nFD) {
	EFSState result;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  EFSState result;
  uint local_60 [4];
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
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_60[0] = nFD;
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  memcpy(_sbuf,local_60,4);
  sceSifCallRpc(0x4d4340,3,0,0x4d41c0,4,0x4d41c0,0x1c,0);
  puVar1 = (undefined *)((int)&result.id + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _sbuf._0_8_ >> (7 - uVar2) * 8;
  result._0_8_ = _sbuf._0_8_;
  puVar1 = (undefined *)((int)&result.pos + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _sbuf._8_8_ >> (7 - uVar2) * 8;
  result._8_8_ = _sbuf._8_8_;
  puVar1 = (undefined *)((int)&result.loopStart + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _sbuf._16_8_ >> (7 - uVar2) * 8;
  result._16_8_ = _sbuf._16_8_;
  result.loopEnd = _sbuf._24_4_;
  Release__6EMutex(&_mutex);
  puVar1 = (undefined *)((int)&__return_storage_ptr__->id + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | result._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)__return_storage_ptr__ & 7;
  *(ulong *)((int)__return_storage_ptr__ - uVar2) =
       result._0_8_ << uVar2 * 8 |
       *(ulong *)((int)__return_storage_ptr__ - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&__return_storage_ptr__->pos + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | result._8_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&__return_storage_ptr__->field_0x8 & 7;
  puVar3 = (ulong *)(&__return_storage_ptr__->field_0x8 + -uVar2);
  *puVar3 = result._8_8_ << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&__return_storage_ptr__->loopStart + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | result._16_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&__return_storage_ptr__->length & 7;
  puVar3 = (ulong *)((int)&__return_storage_ptr__->length - uVar2);
  *puVar3 = result._16_8_ << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  __return_storage_ptr__->loopEnd = result.loopEnd;
  return __return_storage_ptr__;
}

bool EPs2IOPInterface::SetStreamState(EFSState &desc) {
	int result;
	
  int iVar1;
  
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  memcpy(_sbuf,desc,0x1c);
  sceSifCallRpc(0x4d4340,4,0,0x4d41c0,0x1c,0x4d41c0,4,0);
  iVar1 = _sbuf._0_4_;
  Release__6EMutex(&_mutex);
  return iVar1 != 0;
}

int EPs2IOPInterface::ReadStream(EFSRead &desc) {
	int result;
	
  int iVar1;
  
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  memcpy(_sbuf,desc,0x28);
  sceSifCallRpc(0x4d4340,5,0,0x4d41c0,0x28,0x4d41c0,4,0);
  iVar1 = _sbuf._0_4_;
  Release__6EMutex(&_mutex);
  return iVar1;
}

void EPs2IOPInterface::ClearIOPMemory(EFSClearMem &desc) {
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  memcpy(_sbuf,desc,0xc);
  sceSifCallRpc(0x4d4340,6,0,0x4d41c0,0xc,0x4d41c0,4,0);
  Release__6EMutex(&_mutex);
  return;
}

void EPs2IOPInterface::QueryIOPState(EFSIOQuery &desc) {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  Acquire__6EMutexUi(&_mutex,0xffffffff);
  memcpy(_sbuf,desc,0x10);
  sceSifCallRpc(0x4d4340,7,0,0x4d41c0,0x10,0x4d41c0,0x10,0);
  uVar5 = _sbuf._8_8_;
  uVar4 = _sbuf._0_8_;
  puVar1 = (undefined *)((int)&desc->mask + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _sbuf._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)desc & 7;
  *(ulong *)((int)desc - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)desc - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&desc->state + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&desc->flags & 7;
  puVar3 = (ulong *)((int)&desc->flags - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  Release__6EMutex(&_mutex);
  return;
}

int EPs2IOPInterface::ReadStream(u32 nFD, int size, void *pBuffer, long int nFilePos) {
	EFSRead desc;
	ESleep sleeper;
	int result;
	int retcode;
	
  int iVar1;
  int iVar2;
  EFSRead desc;
  ESleep sleeper;
  
  __6ESleep(&sleeper);
  desc.field0_0x0._8_8_ = CONCAT71(desc.field0_0x0._9_7_,2);
  desc.field0_0x0.size = 0x28;
  desc.field0_0x0._8_8_ = desc.field0_0x0._8_8_ & 0xffc0ffff | nFilePos << 0x20;
  desc.flags = 0;
  if (-1 < nFilePos) {
    desc.field0_0x0._8_8_ = desc.field0_0x0._8_8_ | 8;
  }
  iVar2 = 0;
  desc.field0_0x0.id = nFD;
  desc.addr = pBuffer;
  desc.numBytes = size;
  SyncDCache(pBuffer,(int)pBuffer + size + -1);
  do {
    iVar1 = ReadStream__16EPs2IOPInterfaceRC7EFSRead(this,&desc);
    if (iVar1 < 1) {
      if (-1 < iVar1) break;
      Sleep__6ESleepUi(&sleeper,10);
    }
    else {
      iVar2 = iVar2 + iVar1;
      desc.addr = (void *)((int)desc.addr + iVar1);
      desc.numBytes = desc.numBytes - iVar1;
      desc.field0_0x0._8_8_ =
           desc.field0_0x0._8_8_ & 0xffffffff | (ulong)(desc.field0_0x0.pos + iVar1) << 0x20;
    }
  } while (iVar2 < size);
  ___6ESleep(&sleeper,2);
  return iVar2;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EPs2IOPInterface(&_ps2IOPInterface,2);
      ___6EMutex(&_mutex,2);
    }
    else {
      __6EMutex(&_mutex);
      __16EPs2IOPInterface(&_ps2IOPInterface);
    }
  }
  return;
}

void global constructors keyed to _ps2IOPInterface() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2IOPInterface() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

// STATUS: NOT STARTED

#include "Bomb.h"

bool _assertionFailed = false;
bool _bombed = false;
u32 _assertLine = 0;
char *_assertFile = NULL;
char *_assertExpr = NULL;

void* DefaultAlloc(u32 size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void* DefaultAllocAlign(u32 size, u32 alignment) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,alignment);
  return pvVar1;
}

void DefaultFree(void *p) {
  _memmanFree__FPv(p);
  return;
}

void* __builtin_new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void* malloc(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void free(void *pAddress) {
  _memmanFree__FPv(pAddress);
  return;
}

void* calloc(unsigned int count, unsigned int size) {
	unsigned int useSize;
	void *pData;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(count * size,4);
  if (__s != (void *)0x0) {
    memset(__s,0,(long)(int)(count * size));
  }
  return __s;
}

void* realloc(void *pAddress, unsigned int size) {
  void *pvVar1;
  
  pvVar1 = Realloc__14EMemoryManagerPvUiUi(&_memman,pAddress,size,4);
  return pvVar1;
}

void* memalign(unsigned int alignment, unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,alignment);
  return pvVar1;
}

int dbAssert(char *szFile, u32 line, char *szExpr) {
  _assertLine = line;
  __assertionFailed = 1;
  _assertFile = szFile;
  _assertExpr = szExpr;
  return 1;
}

int dbBomb(char *szFmt) {
  return 0;
}

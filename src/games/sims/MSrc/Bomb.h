/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once
#include "common/types.h"

extern bool _assertionFailed;
extern bool _bombed;
extern u32 _assertLine;
extern char *_assertFile;
extern char *_assertExpr;

void *DefaultAlloc(u32 size);
void *DefaultAllocAlign(u32 size, u32 alignment);
void DefaultFree(void *p);
/*void *__builtin_new(unsigned int size);
void *malloc(unsigned int size);
void free(void *pAddress);
void *calloc(unsigned int count, unsigned int size);
void *realloc(void *pAddress, unsigned int size);
void *memalign(unsigned int alignment, unsigned int size);*/
int dbAssert(char *szFile, u32 line, char *szExpr);
int dbBomb(char *szFmt);
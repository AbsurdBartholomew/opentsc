/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "Bomb.h"
#include "engine/memory/e_memman.h"

bool _assertionFailed = false;
bool _bombed = false;
u32 _assertLine = 0;
char *_assertFile = NULL;
char *_assertExpr = NULL;

void *DefaultAlloc(u32 size)
{
    return _memmanAlloc(size, 4);
}

void *DefaultAllocAlign(u32 size, u32 alignment)
{
    return _memmanAlloc(size, alignment);
}

void DefaultFree(void *p)
{
    _memmanFree(p);
}

int dbAssert(char *szFile, u32 line, char *szExpr)
{
    _assertLine = line;
    _assertionFailed = 1;
    _assertFile = szFile;
    _assertExpr = szExpr;

    printf("ASSERTION FAILED: %s\n\nFile: %s\nLine: %d", szExpr, szFile, line);
    return 1;
}

int dbBomb(char *szFmt)
{
    return 0;
}

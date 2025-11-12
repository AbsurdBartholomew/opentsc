/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include <stdio.h>
#include <stdlib.h>
#include "e_memman.h"

void *_memmanAlloc(u32 size, u32 alignment, char *szFile, u32 line)
{
    void* t;
    //t = _aligned_malloc((size_t)size, (size_t)alignment);
    t = malloc(size);
    
    if(t != NULL)
    {
        printf("allocated %d bytes at %s: line %d with alignment %d\n", size, szFile, line, alignment);
        return t;
    }

    return NULL;
}

void *_memmanAllocTop(u32 size, u32 alignment, char *szFile, u32 line)
{

}

void *_memmanAllocAt(void *pAddress, u32 size, char *szFile, u32 line)
{
    
}

void _memmanFree(void *pAddress)
{
    free(pAddress);
}

void *_memmanAlloc(u32 size, u32 alignment)
{
    void* t;
    //t = _aligned_malloc((size_t)size, (size_t)alignment);
    t = malloc(size);

    if(t != NULL)
    {
        printf("allocated %d bytes with alignment %d\n", size, alignment);
        return t;
    }

    return NULL;
}

void *_memmanAllocTop(u32 size, u32 alignment)
{

}

void *_memmanAllocAt(void *pAddress, u32 size)
{
    
}
/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_file.h"

#include <stdio.h>
#include <string.h>

#include "common/types.h"

void SplitPath(char *path, char *drive, char *dir, char *fname, char *ext)
{
    char *p;
    char *last_slash;
    char *dot;
    unsigned int len;

    char cVar1;
    size_t sVar2;
    char *pcVar3;
    u64 uVar4;
    char *__src;
    char *__src_00;

    __src_00 = (char *)0x0;
    sVar2 = strlen(path);
    if ((sVar2 == 0) || (path[1] != ':'))
    {
        if (drive != (char *)0x0)
        {
            *drive = '\0';
        }
    }
    else
    {
        if (drive != (char *)0x0)
        {
            strncpy(drive, path, 2);
            drive[2] = '\0';
        }
        path = path + 2;
    }
    __src = (char *)0x0;
    cVar1 = *path;
    pcVar3 = path;
    while (cVar1 != '\0')
    {
        cVar1 = *pcVar3;
        if ((cVar1 == '/') || (cVar1 == '\\'))
        {
            __src = pcVar3 + 1;
        }
        else if (cVar1 == '.')
        {
            __src_00 = pcVar3;
        }
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
    }
    if (__src == (char *)0x0)
    {
        __src = path;
        if (dir != (char *)0x0)
        {
            *dir = '\0';
        }
    }
    else if (dir != (char *)0x0)
    {
        uVar4 = (long)((int)__src - (int)path);
        if (0xff < (u64)(long)((int)__src - (int)path))
        {
            uVar4 = 0xff;
        }
        strncpy(dir, path, uVar4);
        dir[(int)uVar4] = '\0';
    }
    if ((__src_00 == (char *)0x0) || (__src_00 < __src))
    {
        if (fname != (char *)0x0)
        {
            uVar4 = (long)((int)pcVar3 - (int)__src);
            if (0xff < (u64)(long)((int)pcVar3 - (int)__src))
            {
                uVar4 = 0xff;
            }
            strncpy(fname, __src, uVar4);
            fname[(int)uVar4] = '\0';
        }
        if (ext != (char *)0x0)
        {
            *ext = '\0';
        }
    }
    else
    {
        if (fname != (char *)0x0)
        {
            uVar4 = (long)((int)__src_00 - (int)__src);
            if (0xff < (u64)(long)((int)__src_00 - (int)__src))
            {
                uVar4 = 0xff;
            }
            strncpy(fname, __src, uVar4);
            fname[(int)uVar4] = '\0';
        }
        if (ext != (char *)0x0)
        {
            uVar4 = (long)((int)pcVar3 - (int)__src_00);
            if (0xff < (u64)(long)((int)pcVar3 - (int)__src_00))
            {
                uVar4 = 0xff;
            }
            strncpy(ext, __src_00, uVar4);
            ext[(int)uVar4] = '\0';
        }
    }
    return;
}
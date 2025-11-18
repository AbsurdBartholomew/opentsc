/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once
#include <stddef.h>

typedef unsigned char u8;
typedef unsigned char u_char;
typedef unsigned char Byte;
typedef signed char s8;

typedef short unsigned int u16;
typedef short unsigned int u_short;
typedef short unsigned int UInt16;
typedef short int s16;
typedef short int Sint16;
typedef short int BehaviorNodeParam[4];
typedef short unsigned int c16;
typedef short unsigned int Boolean;

typedef unsigned int u32;
typedef unsigned int u_int;
typedef unsigned int Uint32;
typedef unsigned int UInt32;
typedef unsigned int UInt;

typedef float f32;
typedef float sceVu0FVECTOR[4];
typedef float sceVu0FMATRIX[4][4];
typedef float VecNum;

typedef long unsigned int u64;
typedef long long unsigned int u_long128;
typedef long unsigned int u_long;
typedef long long unsigned int u128;
#ifdef Sint64
#undef Sint64
typedef long int Sint64;
#endif

#ifdef _LARGE_INTEGER
#undef _LARGE_INTEGER
typedef long int _LARGE_INTEGER;
#endif

typedef int Bool;
typedef int s32;
typedef int FamilyID;
typedef int Int;
typedef int SInt32;
typedef int Sint32;
typedef int GoalRef;
typedef int NodeRef;
typedef int RectRef;

typedef void* (*FnAllocAlign)(u32 size, u32 align);
typedef void (*FnFree)(void *p);
typedef void* (*FnAlloc)(u32 size);
/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/types.h"

struct EArray
{
    void *m_p;
	int m_size;
	int m_allocSize;
	int m_growBy;
	int m_elementSize;
	
	//EArray& operator=();
	EArray();
	void SetElementSize(int size) { m_size = size; }
	void SetGrowBy(int growBy) { m_growBy = growBy; }
	void SetSize(int size, int allocSize);
	void FreeUnusedBufferSpace();
	int GetSize() { return m_size; }
	void Insert(int pos, int count);
	void Remove(int pos, int count);
protected:
	void Deallocate();
};

template<typename T> struct TArray : private EArray 
{
	TArray() { ; }
	//TArray<unsigned int>& operator=();
	//u32* operator unsigned int *();
	//u32* operator unsigned int *();

	int Search() { return -1; }
	bool IsEmpty() { return true; }
	void Empty() { ; }
	void RemoveAll() { ; }
	void Add() { ; }
	void Delete() { ; }
	void SafeDelete() { ; }
	void DeleteAll() { ; }
	void SafeDeleteAll() { ; }
	void FreeAll() { ; }
};
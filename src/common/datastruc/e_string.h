/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include <stdio.h>
#include <string.h>
#include "common/datastruc/e_array.h"

class EString
{
public:
	EString(char *szSource1, char *szSource2);
	EString(char c);
	EString();

	operator char *()
	{
		return m_p;
	}

	EString &operator=(char *szSource)
	{
		char *pOld;

		char *p;

		p = this->m_p;
		MakeCopy(szSource);
		Deallocate(p);
	}

	EString operator+(char c)
	{
		char cb[2];
		
		cb[1] = '\0';
		EString(*(char **)(int)c,cb);
	}
	EString &operator+=(char *sz)
	{
		EString t;

		t = EString(t.m_p, sz);
		t.Deallocate(t.m_p);
	}

	int Compare(char *szOther);
	int CompareNoCase(char *szOther);
	int CompareSymbol(char *szOther);

	bool operator==(EString other)
	{
		return strcmp(m_p, other.m_p);
	}

	bool operator!=(EString other)
	{
		return !strcmp(m_p, other.m_p);
	}

	bool operator>(EString other);
	bool operator>=(EString other);
	bool operator<(EString other);
	bool operator<=(EString other);

	EString &Convert(double value);
	//EString &Convert();
	int GetLength();
	EString &MakeUpper();
	EString &MakeLower();
	bool Allocate(int size, bool SetToErrorStringIfFailed);
	void Empty();
	bool IsEmpty();

	EString Mid(int pos);
	EString Left(int count);
	EString Right(int count);
	int Find(char *szString);
	bool Replace(char oldChar, char newChar);
	int FindReverse(char c);
	void Remove(char c);
	void FixTrailingSlash();
	void RemoveTrailingSlash();
	EString ExtractRoot();
	EString ExtractFilename();
	EString ExtractExtension();
	EString ExtractDirectory();
	EString &MakeLegalFilename();
	bool GetEnv(char *szVarName);
	int GetLine(FILE *stream);
	int Tokenize(char sep, TArray<EString> &tokens);

	void MakeCopy(char *szSource);
	void Deallocate(char *p);
	void SetToNull();
	void SetToError();
	EString GetNextToken(int &sindex, int sizeT, char separator);

	friend class EStream;

protected:
	char *m_p;
};

extern char _estringNull[1];
extern char _estringError[8];
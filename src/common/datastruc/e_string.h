/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include <stdio.h>
#include "common/datastruc/e_array.h"

class EString
{
protected:
    char* m_p;
public:
    EString(char *szSource1, char *szSource2);
	EString(char c);
	EString();

    operator char *();
    EString& operator=(char *szSource);
    EString operator+(char c);
    EString& operator+=(char c);

    int Compare(char *szOther);
	int CompareNoCase(char *szOther);
	int CompareSymbol(char *szOther);

	bool operator==(EString other);
    bool operator!=(EString other);
    bool operator>(EString other);
	bool operator>=(EString other);
    bool operator<(EString other);
	bool operator<=(EString other);

    EString& Convert(double value);
	EString& Convert();
    int GetLength();
	EString& MakeUpper();
	EString& MakeLower();
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
	EString& MakeLegalFilename();
	bool GetEnv(char *szVarName);
	int GetLine(FILE *stream);
	int Tokenize(char sep, TArray<EString> &tokens);
protected:
	void MakeCopy(char *szSource);
	void Deallocate(char *p);
	void SetToNull();
	void SetToError();
	EString GetNextToken(int &sindex, int sizeT, char separator);
};

extern char _estringNull[1];
extern char _estringError[8];
// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_STRING_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_STRING_H

struct EString {
protected:
	char *m_p;
	
public:
	EString(char *szSource1, char *szSource2);
	EString();
	EString();
	EString();
	EString();
	EString();
	EString();
	EString();
	EString(EString*, int, void);
	char* operator char *();
	EString& operator=(char *szSource);
	EString& operator=();
	EString& operator=();
	EString& operator=();
	EString& operator=();
	EString operator+(char c);
	EString operator+();
	EString operator+();
	EString& operator+=(char c);
	EString& operator+=();
	int Compare(char *szOther);
	int CompareNoCase(char *szOther);
	int CompareSymbol(char *szOther);
	bool operator==();
	bool operator==();
	bool operator!=();
	bool operator!=();
	bool operator>();
	bool operator>();
	bool operator>=();
	bool operator>=();
	bool operator<();
	bool operator<();
	bool operator<=();
	bool operator<=();
	char operator[]();
	char& operator[]();
	char& operator[]();
	EString& Convert(double value);
	EString& Convert();
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
	int Find();
	bool Replace(char oldChar, char newChar);
	int FindReverse(char c);
	void Replace();
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

struct TArray<EString> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<EString>*, int, void);
	EString& operator[]();
	EString& operator[]();
	EString& operator[]();
	EString& operator[]();
	TArray<EString>& operator=();
	EString* operator EString *();
	EString* operator EString *();
	void SetGrowBy(TArray<EString>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

extern char _estringNull[1];
extern char _estringError[8];

EString operator+(char c, EString &s);
EStream& operator<<(EStream &s, EString &d);
EStream& operator>>(EStream &s, EString &d);

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_STRING_H

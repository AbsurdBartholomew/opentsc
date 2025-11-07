// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_STRING2_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_STRING2_H

typedef short unsigned int u16;

struct EString2 {
protected:
	u16 *m_p;
	
public:
	EString2(char c);
	EString2();
	EString2();
	EString2();
	EString2();
	EString2();
	EString2();
	EString2();
	EString2();
	EString2();
	EString2(EString2*, int, void);
	u16* operator unsigned short *();
	EString2& operator=(char c);
	EString2& operator=();
	EString2& operator=();
	EString2& operator=();
	EString2& operator=();
	EString2& operator=();
	EString2& operator=();
	EString2& operator=();
	EString2 operator+(char c);
	EString2 operator+();
	EString2 operator+();
	EString2 operator+();
	EString2 operator+();
	EString2 operator+();
	EString2 operator+();
	EString2& operator+=(char c);
	EString2& operator+=();
	EString2 operator+();
	EString2 operator+();
	EString2 operator+();
	EString2& operator+=();
	EString2& operator+=();
	EString2& operator+=();
	EString2& operator+=();
	EString2& operator+=();
	EString2& operator+=();
	int Compare(char *szOther);
	int Compare();
	int CompareNoCase(u16 *szOther);
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
	u16 operator[]();
	u16& operator[]();
	EString GetEString();
	EString2& Convert(int value);
	EString2& Convert();
	EString2& Convert();
	int GetLength();
	EString2& MakeUpper();
	EString2& MakeLower();
	bool Allocate(int size, bool SetToErrorStringIfFailed);
	void Empty();
	bool IsEmpty();
	EString2 Mid(int pos);
	EString2 Left(int count);
	EString2 Right(int count);
	int Find(u16 *szString);
	int Find();
	bool Replace(u16 oldChar, u16 newChar);
	int FindReverse(u16 c);
	void Replace();
	void Remove(u16 c);
	void FixTrailingSlash();
	void RemoveTrailingSlash();
	EString2 ExtractRoot();
	EString2 ExtractFilename();
	EString2 ExtractExtension();
	EString2 ExtractDirectory();
	EString2& MakeLegalFilename();
	bool GetEnv(char *szVarName);
	int GetLine(FILE *stream);
	int Tokenize(u16 sep, TArray<EString2> &tokens);
	static int StrLenU16(/* parameters unknown */);
protected:
	void MakeCopy(u16 *szSource);
	void MakeCopyFromChars(char *szSource);
	void Deallocate(u16 *p);
	void SetToNull();
	void SetToError();
	EString2 GetNextToken(int &sindex, int sizeT, u16 separator);
};

extern short unsigned int _estring2Null[1];
extern short unsigned int _estring2Error[8];

EString2 operator+(u16 c, EString2 &s);
EStream& operator<<(EStream &s, EString2 &d);
EStream& operator>>(EStream &s, EString2 &d);

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_STRING2_H

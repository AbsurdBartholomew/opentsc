// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_STRINGBUFFER2_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_STRINGBUFFER2_H

struct StringBuffer2 {
private:
	c16 *fMem;
	unsigned int fCapacity;
	
	StringBuffer2& operator=();
	StringBuffer2(c16 *mem, unsigned int capacity);
public:
	StringBuffer2();
	void erase();
	c16* buffer();
	int capacity();
	c16* c_str();
	int length();
	c16 charAt(int pos);
	c16* AddrAt(int pos);
	c16 operator[]();
	c16& operator[]();
	void append(__wchar_t *str, int len);
	void append();
	void append();
	void appendChar(c16 c);
	void appendNum(int num, int width);
	void appendNum();
	void copy(StringBuffer2 &other);
	void copy();
	void assignDebug(char *str);
	void assignDebug();
	int compare(StringBuffer2 &other);
	int compareNoCase(c16 *s2, int s2_len);
	int compareNoCase();
	int find(c16 *str, int startPos);
	int findNoCase(c16 *str, int startPos);
	void toLower();
};

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_STRINGBUFFER2_H

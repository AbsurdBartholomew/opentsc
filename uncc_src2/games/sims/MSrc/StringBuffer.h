// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_STRINGBUFFER_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_STRINGBUFFER_H

struct StringBuffer {
private:
	char *fMem;
	unsigned int fCapacity;
	
	StringBuffer& operator=();
	StringBuffer(char *mem, unsigned int capacity);
public:
	StringBuffer();
	void erase();
	char* buffer();
	int capacity();
	char* c_str();
	int length();
	char charAt(int pos);
	void append(StringBuffer &other, int len);
	void append();
	void appendChar(char c);
	void appendNum(int num, int width);
	void appendNum();
	void copy(StringBuffer &other);
	void copy();
	void assignDebug(c16 *str);
	int compare(StringBuffer &other);
	int compareNoCase(char *s2, int s2_len);
	int compareNoCase();
	int find(char *str, int startPos);
	int findNoCase(char *str, int startPos);
	void toLower();
};

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_STRINGBUFFER_H

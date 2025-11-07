// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_BSTRING_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_BSTRING_H

struct BString {
private:
	basic_string_ref *reference;
	static basic_string_ref defaultReference;
	
	char* point();
	unsigned int& len();
	unsigned int ref_count();
	static char eos(/* parameters unknown */);
	void assign_str(char *s, unsigned int slen);
	void append_str(char *s, unsigned int slen);
	void insert_str(unsigned int pos, char *s, unsigned int slen);
	void replace_str(unsigned int xlen, unsigned int pos, char *s, unsigned int slen);
	int compare_str(unsigned int pos, char *str, unsigned int slen, unsigned int strlen);
	unsigned int find_str(char *s, unsigned int pos, unsigned int len);
	unsigned int rfind_str(char *s, unsigned int pos, unsigned int len);
	unsigned int find_first_of_str(char *s, unsigned int pos, unsigned int len);
	unsigned int find_last_of_str(char *s, unsigned int pos, unsigned int len);
	unsigned int find_first_not_of_str(char *s, unsigned int pos, unsigned int len);
	unsigned int find_last_not_of_str(char *s, unsigned int pos, unsigned int len);
protected:
	BString(char c, unsigned int rep);
	void delete_ref();
public:
	BString();
	BString();
	BString();
	BString();
	BString();
	BString();
	BString(BString*, int, void);
	BString& operator=(char c);
	BString& operator=();
	BString& operator=();
	BString& operator+=(char c);
	BString& operator+=();
	BString& operator+=();
	bool operator==(BString &str);
	bool operator!=(BString &str);
	bool operator<(BString &str);
	BString& append(char c, unsigned int rep);
	BString& append();
	BString& append();
	BString& append();
	BString& assign(char c, unsigned int rep);
	BString& assign();
	BString& assign();
	BString& assign();
	BString& assignDebug(c16 *str);
	BString& insert(unsigned int pos, char c, unsigned int rep);
	BString& insert();
	BString& insert();
	BString& insert();
	BString& erase(unsigned int pos, unsigned int n);
	BString& remove();
	BString& replace(unsigned int pos, unsigned int n, char c, unsigned int rep);
	BString& replace();
	BString& replace();
	BString& replace();
	char get_at(unsigned int pos);
	void put_at(unsigned int pos, char c);
	char operator[](unsigned int pos);
	char& operator[]();
	char* c_str();
	char* data();
	unsigned int length();
	unsigned int size();
	bool empty();
	void resize(unsigned int n);
	void resize();
	unsigned int reserve();
	void reserve();
	unsigned int copy(char *s, unsigned int n, unsigned int pos);
	unsigned int find(char c, unsigned int pos);
	unsigned int find();
	unsigned int find();
	unsigned int find();
	unsigned int rfind(char c, unsigned int pos);
	unsigned int rfind();
	unsigned int rfind();
	unsigned int rfind();
	unsigned int find_first_of(char c, unsigned int pos);
	unsigned int find_first_of();
	unsigned int find_first_of();
	unsigned int find_first_of();
	unsigned int find_last_of(char c, unsigned int pos);
	unsigned int find_last_of();
	unsigned int find_last_of();
	unsigned int find_last_of();
	unsigned int find_first_not_of(char c, unsigned int pos);
	unsigned int find_first_not_of();
	unsigned int find_first_not_of();
	unsigned int find_first_not_of();
	unsigned int find_last_not_of(char c, unsigned int pos);
	unsigned int find_last_not_of();
	unsigned int find_last_not_of();
	unsigned int find_last_not_of();
	BString substr(unsigned int pos, unsigned int n);
	int compare(char c, unsigned int pos, unsigned int rep);
	int compare();
	int compare();
	int compare();
};

extern basic_string_ref BString::defaultReference;

bool operator==(BString &lhs, BString &rhs);
bool operator==(char *lhs, BString &rhs);
bool operator==(char lhs, BString &rhs);
bool operator==(BString &lhs, char *rhs);
bool operator==(BString &lhs, char rhs);
bool operator!=(char *lhs, BString &rhs);
bool operator!=(char lhs, BString &rhs);
bool operator!=(BString &lhs, char *rhs);
bool operator!=(BString &lhs, char rhs);
bool operator<(BString &lhs, BString &rhs);
bool operator<(char *lhs, BString &rhs);
bool operator<(char lhs, BString &rhs);
bool operator<(BString &lhs, char *rhs);
bool operator<(BString &lhs, char rhs);
bool operator>(char *lhs, BString &rhs);
bool operator>(char lhs, BString &rhs);
bool operator>(BString &lhs, char *rhs);
bool operator>(BString &lhs, char rhs);
bool operator>=(char *lhs, BString &rhs);
bool operator>=(char lhs, BString &rhs);
bool operator>=(BString &lhs, char *rhs);
bool operator>=(BString &lhs, char rhs);
bool operator<=(char *lhs, BString &rhs);
bool operator<=(char lhs, BString &rhs);
bool operator<=(BString &lhs, char *rhs);
bool operator<=(BString &lhs, char rhs);
void basic_string_ref::~basic_string_ref(int __in_chrg);
void BString::~BString(int __in_chrg);
BString operator+(BString &lhs, BString &rhs);
BString operator+(char *lhs, BString &rhs);
BString operator+(char lhs, BString &rhs);
BString operator+(BString &lhs, char *rhs);
BString operator+(BString &lhs, char rhs);
void global constructors keyed to BString::defaultReference();
void global destructors keyed to BString::defaultReference();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_BSTRING_H

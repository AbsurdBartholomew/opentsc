// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_BSTRING2_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_BSTRING2_H

typedef short unsigned int c16;

enum capacity {
	default_capacity = 0,
	reserve_capacity = 1
};

struct BString2 {
private:
	basic_string_ref2 *reference;
	static basic_string_ref2 defaultReference;
	
	c16* point();
	unsigned int& len();
	unsigned int ref_count();
	static c16 eos(/* parameters unknown */);
	void assign_str(c16 *s, unsigned int slen);
	void append_str(c16 *s, unsigned int slen);
	void insert_str(unsigned int pos, c16 *s, unsigned int slen);
	void replace_str(unsigned int xlen, unsigned int pos, c16 *s, unsigned int slen);
	int compare_str(unsigned int pos, c16 *str, unsigned int slen, unsigned int strlen);
	unsigned int find_str(c16 *s, unsigned int pos, unsigned int len);
	unsigned int rfind_str(c16 *s, unsigned int pos, unsigned int len);
	unsigned int find_first_of_str(c16 *s, unsigned int pos, unsigned int len);
	unsigned int find_last_of_str(c16 *s, unsigned int pos, unsigned int len);
	unsigned int find_first_not_of_str(c16 *s, unsigned int pos, unsigned int len);
	unsigned int find_last_not_of_str(c16 *s, unsigned int pos, unsigned int len);
protected:
	BString2(__wchar_t *str);
	void delete_ref();
public:
	BString2();
	BString2();
	BString2();
	BString2();
	BString2();
	BString2();
	BString2();
	BString2(BString2*, int, void);
	BString2& operator=(__wchar_t *str);
	BString2& operator=();
	BString2& operator=();
	BString2& operator=();
	BString2& operator+=(c16 c);
	BString2& operator+=();
	BString2& operator+=();
	bool operator==(BString2 &str);
	bool operator!=(BString2 &str);
	bool operator<(BString2 &str);
	BString2& append(c16 c, unsigned int rep);
	BString2& append();
	BString2& append();
	BString2& append();
	BString2& assign(c16 c, unsigned int rep);
	BString2& assign();
	BString2& assign();
	BString2& assign();
	BString2& assignDebug(char *str);
	BString2& insert(unsigned int pos, c16 c, unsigned int rep);
	BString2& insert();
	BString2& insert();
	BString2& insert();
	BString2& erase(unsigned int pos, unsigned int n);
	BString2& remove();
	BString2& replace(unsigned int pos, unsigned int n, c16 c, unsigned int rep);
	BString2& replace();
	BString2& replace();
	BString2& replace();
	c16 get_at(unsigned int pos);
	void put_at(unsigned int pos, c16 c);
	c16 operator[](unsigned int pos);
	c16& operator[]();
	c16* c_str();
	c16* data();
	unsigned int length();
	unsigned int size();
	bool empty();
	void resize(unsigned int n);
	void resize();
	unsigned int reserve();
	void reserve();
	unsigned int copy(c16 *s, unsigned int n, unsigned int pos);
	unsigned int find(c16 c, unsigned int pos);
	unsigned int find();
	unsigned int find();
	unsigned int find();
	unsigned int rfind(c16 c, unsigned int pos);
	unsigned int rfind();
	unsigned int rfind();
	unsigned int rfind();
	unsigned int find_first_of(c16 c, unsigned int pos);
	unsigned int find_first_of();
	unsigned int find_first_of();
	unsigned int find_first_of();
	unsigned int find_last_of(c16 c, unsigned int pos);
	unsigned int find_last_of();
	unsigned int find_last_of();
	unsigned int find_last_of();
	unsigned int find_first_not_of(c16 c, unsigned int pos);
	unsigned int find_first_not_of();
	unsigned int find_first_not_of();
	unsigned int find_first_not_of();
	unsigned int find_last_not_of(c16 c, unsigned int pos);
	unsigned int find_last_not_of();
	unsigned int find_last_not_of();
	unsigned int find_last_not_of();
	BString2 substr(unsigned int pos, unsigned int n);
	int compare(c16 c, unsigned int pos, unsigned int rep);
	int compare();
	int compare();
	int compare();
};

extern basic_string_ref2 BString2::defaultReference;

unsigned int wcslen(c16 *ptr);
unsigned int wcslen(__wchar_t *ptr);
int wcscmp(c16 *s1, c16 *s2);
c16* wcscpy(c16 *out, c16 *in);
c16* wcsncpy(c16 *out, c16 *in, unsigned int n);
bool operator==(BString2 &lhs, BString2 &rhs);
bool operator==(c16 *lhs, BString2 &rhs);
bool operator==(c16 lhs, BString2 &rhs);
bool operator==(BString2 &lhs, c16 *rhs);
bool operator==(BString2 &lhs, c16 rhs);
bool operator!=(c16 *lhs, BString2 &rhs);
bool operator!=(c16 lhs, BString2 &rhs);
bool operator!=(BString2 &lhs, c16 *rhs);
bool operator!=(BString2 &lhs, c16 rhs);
bool operator<(BString2 &lhs, BString2 &rhs);
bool operator<(c16 *lhs, BString2 &rhs);
bool operator<(c16 lhs, BString2 &rhs);
bool operator<(BString2 &lhs, c16 *rhs);
bool operator<(BString2 &lhs, c16 rhs);
bool operator>(c16 *lhs, BString2 &rhs);
bool operator>(c16 lhs, BString2 &rhs);
bool operator>(BString2 &lhs, c16 *rhs);
bool operator>(BString2 &lhs, c16 rhs);
bool operator>=(c16 *lhs, BString2 &rhs);
bool operator>=(c16 lhs, BString2 &rhs);
bool operator>=(BString2 &lhs, c16 *rhs);
bool operator>=(BString2 &lhs, c16 rhs);
bool operator<=(c16 *lhs, BString2 &rhs);
bool operator<=(c16 lhs, BString2 &rhs);
bool operator<=(BString2 &lhs, c16 *rhs);
bool operator<=(BString2 &lhs, c16 rhs);
void basic_string_ref2::~basic_string_ref2(int __in_chrg);
void BString2::~BString2(int __in_chrg);
BString2 operator+(BString2 &lhs, BString2 &rhs);
BString2 operator+(c16 *lhs, BString2 &rhs);
BString2 operator+(c16 lhs, BString2 &rhs);
BString2 operator+(BString2 &lhs, c16 *rhs);
BString2 operator+(BString2 &lhs, c16 rhs);
void global constructors keyed to wcslen();
void global destructors keyed to wcslen();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_BSTRING2_H

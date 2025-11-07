// STATUS: NOT STARTED

#include "bstring.h"

struct string_char_baggage {
	string_char_baggage& operator=();
	string_char_baggage();
	string_char_baggage();
	static char newline(/* parameters unknown */);
	static void assign(/* parameters unknown */);
	static bool eq(/* parameters unknown */);
	static bool ne(/* parameters unknown */);
	static bool lt(/* parameters unknown */);
	static char eos(/* parameters unknown */);
	static bool is_del(/* parameters unknown */);
	static int compare(/* parameters unknown */);
	static unsigned int length(/* parameters unknown */);
	static char* copy(/* parameters unknown */);
};

struct basic_string_ref {
private:
	char *ptr;
	unsigned int len;
	unsigned int res;
	unsigned int count;
	
public:
	basic_string_ref& operator=();
	basic_string_ref(char c, unsigned int rep);
	basic_string_ref();
	basic_string_ref();
	basic_string_ref();
	basic_string_ref();
	basic_string_ref();
	basic_string_ref();
	basic_string_ref();
	basic_string_ref(basic_string_ref*, int, void);
	void delete_ptr();
	static char eos(/* parameters unknown */);
	static void throwlength(/* parameters unknown */);
	static void throwrange(/* parameters unknown */);
};

// warning: multiple differing types with the same name (type name not equal)
typedef simple_allocator<basic_string_ref> basic_string_ref_allocator;
// warning: multiple differing types with the same name (type name not equal)
typedef simple_allocator<char> charT_allocator;
// warning: multiple differing types with the same name (type name not equal)
typedef char char_type;
// warning: multiple differing types with the same name (type name not equal)
typedef string_char_baggage baggage_type;

struct simple_allocator<char> {
	simple_allocator<char>& operator=();
	simple_allocator();
	simple_allocator();
	static char* allocate(/* parameters unknown */);
	static char* allocate(/* parameters unknown */);
	static char* allocate(/* parameters unknown */);
	static char* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_allocator<basic_string_ref> {
	simple_allocator<basic_string_ref>& operator=();
	simple_allocator();
	simple_allocator();
	static basic_string_ref* allocate(/* parameters unknown */);
	static basic_string_ref* allocate(/* parameters unknown */);
	static basic_string_ref* allocate(/* parameters unknown */);
	static basic_string_ref* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

basic_string_ref BString::defaultReference = {
	/* .ptr = */ NULL,
	/* .len = */ 0,
	/* .res = */ 0,
	/* .count = */ 0
};

static void localConvertFromWide(char *out, c16 *in) {
  char cVar1;
  short sVar2;
  
  sVar2 = *in;
  while (sVar2 != 0) {
    cVar1 = *(char *)in;
    in = in + 1;
    *out = cVar1;
    out = out + 1;
    sVar2 = *in;
  }
  *out = '\0';
  return;
}

void basic_string_ref::delete_ptr() {
  if (this->res != 0) {
    free(this->ptr);
    this->ptr = (char *)0x0;
    this->res = 0;
  }
  return;
}

void basic_string_ref::throwlength() {
  return;
}

void basic_string_ref::throwrange() {
  return;
}

void BString::delete_ref() {
  this->reference->count = this->reference->count - 1;
  if (this->reference->count == 0) {
    ___16basic_string_ref(this->reference,2);
    free(this->reference);
  }
  return;
}

unsigned int BString::ref_count() {
  return this->reference->count;
}

char* BString::data() {
  uint uVar1;
  char *pcVar2;
  
  uVar1 = length__C7BString(this);
  if (uVar1 == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = this->reference->ptr;
  }
  return pcVar2;
}

char* BString::point() {
  return this->reference->ptr;
}

unsigned int& BString::len() {
  return &this->reference->len;
}

char BString::get_at(unsigned int pos) {
  uint uVar1;
  char *pcVar2;
  
  uVar1 = length__C7BString(this);
  if (uVar1 <= pos) {
    throwrange__16basic_string_ref();
  }
  pcVar2 = data__C7BString(this);
  return pcVar2[pos];
}

char BString::operator[](unsigned int pos) {
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = length__C7BString(this);
  cVar1 = '\0';
  if (pos < uVar2) {
    pcVar3 = data__C7BString(this);
    cVar1 = pcVar3[pos];
  }
  return cVar1;
}

bool operator==(BString &lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringRC7BStringUiUi(lhs,rhs,0,0xffffffff);
  return iVar1 == 0;
}

bool operator==(char *lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringPCcUi(rhs,lhs,0);
  return iVar1 == 0;
}

bool operator==(char lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringcUiUi(rhs,lhs,0,1);
  return iVar1 == 0;
}

bool operator==(BString &lhs, char *rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringPCcUi(lhs,rhs,0);
  return iVar1 == 0;
}

bool operator==(BString &lhs, char rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringcUiUi(lhs,rhs,0,1);
  return iVar1 == 0;
}

bool operator!=(char *lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringPCcUi(rhs,lhs,0);
  return iVar1 != 0;
}

bool operator!=(char lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringcUiUi(rhs,lhs,0,1);
  return iVar1 != 0;
}

bool operator!=(BString &lhs, char *rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringPCcUi(lhs,rhs,0);
  return iVar1 != 0;
}

bool operator!=(BString &lhs, char rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringcUiUi(lhs,rhs,0,1);
  return iVar1 != 0;
}

bool operator<(BString &lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringRC7BStringUiUi(lhs,rhs,0,0xffffffff);
  return iVar1 < 0;
}

bool operator<(char *lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringPCcUi(rhs,lhs,0);
  return 0 < iVar1;
}

bool operator<(char lhs, BString &rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringcUiUi(rhs,lhs,0,1);
  return 0 < iVar1;
}

bool operator<(BString &lhs, char *rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringPCcUi(lhs,rhs,0);
  return iVar1 < 0;
}

bool operator<(BString &lhs, char rhs) {
  int iVar1;
  
  iVar1 = compare__C7BStringcUiUi(lhs,rhs,0,1);
  return iVar1 < 0;
}

bool operator>(char *lhs, BString &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC7BStringPCc(rhs,lhs);
  return bVar1;
}

bool operator>(char lhs, BString &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC7BStringc(rhs,lhs);
  return bVar1;
}

bool operator>(BString &lhs, char *rhs) {
  bool bVar1;
  
  bVar1 = __lt__FPCcRC7BString(rhs,lhs);
  return bVar1;
}

bool operator>(BString &lhs, char rhs) {
  bool bVar1;
  
  bVar1 = __lt__FcRC7BString(rhs,lhs);
  return bVar1;
}

bool operator>=(char *lhs, BString &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FPCcRC7BString(lhs,rhs);
  return !bVar1;
}

bool operator>=(char lhs, BString &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FcRC7BString(lhs,rhs);
  return !bVar1;
}

bool operator>=(BString &lhs, char *rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC7BStringPCc(lhs,rhs);
  return !bVar1;
}

bool operator>=(BString &lhs, char rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC7BStringc(lhs,rhs);
  return !bVar1;
}

bool operator<=(char *lhs, BString &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC7BStringPCc(rhs,lhs);
  return !bVar1;
}

bool operator<=(char lhs, BString &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC7BStringc(rhs,lhs);
  return !bVar1;
}

bool operator<=(BString &lhs, char *rhs) {
  bool bVar1;
  
  bVar1 = __lt__FPCcRC7BString(rhs,lhs);
  return !bVar1;
}

bool operator<=(BString &lhs, char rhs) {
  bool bVar1;
  
  bVar1 = __lt__FcRC7BString(rhs,lhs);
  return !bVar1;
}

char basic_string_ref::eos() {
  return '\0';
}

basic_string_ref* basic_string_ref::basic_string_ref() {
  this->count = this->count + 1;
  return this;
}

basic_string_ref* basic_string_ref::basic_string_ref(unsigned int size, capacity cap) {
	unsigned int position;
	char &c1;
	char &c1;
	
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  if (cap == reserve_capacity) {
    this->len = 0;
    this->res = size;
    if (size == 0) {
      this->ptr = (char *)0x0;
    }
    else {
      pcVar2 = (char *)malloc(size);
      this->ptr = pcVar2;
    }
  }
  else if ((cap == default_capacity) && (size != 0xffffffff)) {
    this->len = size;
    this->res = size;
    if (size == 0) {
      this->ptr = (char *)0x0;
    }
    else {
      uVar3 = 0;
      this->len = size - 1;
      pcVar2 = (char *)malloc(size);
      this->ptr = pcVar2;
      if (this->len != 0) {
        do {
          cVar1 = eos__16basic_string_ref();
          this->ptr[uVar3] = cVar1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < this->len);
      }
      cVar1 = eos__16basic_string_ref();
      this->ptr[uVar3] = cVar1;
    }
  }
  else {
    throwlength__16basic_string_ref();
  }
  this->count = 1;
  return this;
}

basic_string_ref* basic_string_ref::basic_string_ref(BString &str, unsigned int pos, unsigned int rlen) {
	char &c1;
	
  char cVar1;
  char *pcVar2;
  uint size;
  
  this->len = rlen;
  this->res = rlen;
  if (rlen == 0) {
    this->ptr = (char *)0x0;
  }
  else {
    size = rlen + 1;
    this->res = size;
    if (size == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)malloc(size);
    }
    this->ptr = pcVar2;
    pcVar2 = data__C7BString(str);
    memmove(this->ptr,pcVar2 + pos,(long)(int)this->len);
    cVar1 = eos__16basic_string_ref();
    this->ptr[this->len] = cVar1;
  }
  this->count = 1;
  return this;
}

basic_string_ref* basic_string_ref::basic_string_ref(char *s, unsigned int rlen, unsigned int rres) {
	char *s2;
	char &c1;
	
  char cVar1;
  char *__dest;
  uint uVar2;
  
  this->len = rlen;
  this->res = rres;
  if (rres == 0) {
    this->ptr = (char *)0x0;
  }
  else {
    uVar2 = rres + 1;
    this->res = uVar2;
    if (uVar2 == 0) {
      __dest = (char *)0x0;
      uVar2 = this->len;
    }
    else {
      __dest = (char *)malloc(uVar2);
      uVar2 = this->len;
    }
    this->ptr = __dest;
    if ((long)(int)uVar2 != 0) {
      memmove(__dest,s,(long)(int)uVar2);
      cVar1 = eos__16basic_string_ref();
      this->ptr[this->len] = cVar1;
    }
  }
  this->count = 1;
  return this;
}

basic_string_ref* basic_string_ref::basic_string_ref(char *s, unsigned int n) {
	char *s2;
	char &c1;
	
  char cVar1;
  char *__dest;
  uint uVar2;
  
  if (n == 0xffffffff) {
    throwlength__16basic_string_ref();
  }
  this->len = n;
  this->res = n;
  if (n == 0) {
    this->ptr = (char *)0x0;
  }
  else {
    uVar2 = n + 1;
    this->res = uVar2;
    if (uVar2 == 0) {
      __dest = (char *)0x0;
      uVar2 = this->len;
    }
    else {
      __dest = (char *)malloc(uVar2);
      uVar2 = this->len;
    }
    this->ptr = __dest;
    memmove(__dest,s,(long)(int)uVar2);
    cVar1 = eos__16basic_string_ref();
    this->ptr[this->len] = cVar1;
  }
  this->count = 1;
  return this;
}

basic_string_ref* basic_string_ref::basic_string_ref(char *s) {
	char *s;
	char *s2;
	char &c1;
	
  char cVar1;
  char *__dest;
  size_t sVar2;
  uint uVar3;
  
  if (s == (char *)0x0) {
    this->len = 0;
    this->res = 0;
  }
  else {
    sVar2 = strlen(s);
    this->res = (uint)sVar2;
    this->len = (uint)sVar2;
  }
  uVar3 = this->res + 1;
  if (this->res == 0) {
    this->ptr = (char *)0x0;
  }
  else {
    this->res = uVar3;
    if (uVar3 == 0) {
      __dest = (char *)0x0;
      uVar3 = this->len;
    }
    else {
      __dest = (char *)malloc(uVar3);
      uVar3 = this->len;
    }
    this->ptr = __dest;
    memmove(__dest,s,(long)(int)uVar3);
    cVar1 = eos__16basic_string_ref();
    this->ptr[this->len] = cVar1;
  }
  this->count = 1;
  return this;
}

basic_string_ref* basic_string_ref::basic_string_ref(char c, unsigned int rep) {
	unsigned int position;
	char &c1;
	char &c1;
	
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  if (rep == 0xffffffff) {
    throwlength__16basic_string_ref();
  }
  this->len = rep;
  this->res = rep;
  if (rep == 0) {
    this->ptr = (char *)0x0;
  }
  else {
    uVar3 = rep + 1;
    this->res = uVar3;
    if (uVar3 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)malloc(uVar3);
    }
    uVar3 = 0;
    this->ptr = pcVar2;
    if (this->len != 0) {
      pcVar2 = this->ptr;
      while( true ) {
        pcVar2[uVar3] = c;
        uVar3 = uVar3 + 1;
        if (this->len <= uVar3) break;
        pcVar2 = this->ptr;
      }
    }
    cVar1 = eos__16basic_string_ref();
    this->ptr[this->len] = cVar1;
  }
  this->count = 1;
  return this;
}

void basic_string_ref::~basic_string_ref(int __in_chrg) {
	void *pAddress;
	
  delete_ptr__16basic_string_ref(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

char BString::eos() {
  return '\0';
}

void BString::assign_str(char *s, unsigned int slen) {
	basic_string_ref *tmp;
	char *s2;
	unsigned int n;
	char &c1;
	
  char cVar1;
  uint uVar2;
  basic_string_ref *pbVar3;
  char *pcVar4;
  size_t __n;
  
  __n = (size_t)(int)slen;
  if (__n == 0xffffffffffffffff) {
    throwlength__16basic_string_ref();
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 < 2) {
    if (__n == 0) {
      pbVar3 = this->reference;
      goto LAB_0026fbe0;
    }
    uVar2 = reserve__C7BString(this);
    if (uVar2 < slen + 1) goto LAB_0026fb80;
    pcVar4 = point__7BString(this);
    memmove(pcVar4,s,__n);
    pcVar4 = point__7BString(this);
    cVar1 = eos__7BString();
    pcVar4[slen] = cVar1;
  }
  else {
LAB_0026fb80:
    pbVar3 = (basic_string_ref *)malloc(0x10);
    pbVar3 = __16basic_string_refPCcUi(pbVar3,s,slen);
    delete_ref__7BString(this);
    this->reference = pbVar3;
  }
  pbVar3 = this->reference;
LAB_0026fbe0:
  pbVar3->len = slen;
  return;
}

void BString::append_str(char *s, unsigned int slen) {
	basic_string_ref *tmp;
	char *s2;
	unsigned int n;
	char &c1;
	
  char cVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref *pbVar4;
  char *pcVar5;
  ulong __n;
  
  __n = (ulong)(int)slen;
  uVar2 = length__C7BString(this);
  if (~__n <= (ulong)(long)(int)uVar2) {
    throwlength__16basic_string_ref();
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C7BString(this);
    uVar3 = length__C7BString(this);
    if (slen + 1 <= uVar2 - uVar3) goto LAB_0026fcd4;
  }
  pbVar4 = (basic_string_ref *)malloc(0x10);
  pcVar5 = data__C7BString(this);
  uVar2 = length__C7BString(this);
  uVar3 = length__C7BString(this);
  pbVar4 = __16basic_string_refPCcUiUi(pbVar4,pcVar5,uVar2,uVar3 + slen);
  delete_ref__7BString(this);
  this->reference = pbVar4;
LAB_0026fcd4:
  if (__n == 0) {
    pbVar4 = this->reference;
  }
  else {
    pcVar5 = point__7BString(this);
    uVar2 = length__C7BString(this);
    memmove(pcVar5 + uVar2,s,__n);
    pcVar5 = point__7BString(this);
    uVar2 = length__C7BString(this);
    cVar1 = eos__7BString();
    pcVar5[slen + uVar2] = cVar1;
    pbVar4 = this->reference;
  }
  pbVar4->len = pbVar4->len + slen;
  return;
}

void BString::insert_str(unsigned int pos, char *s, unsigned int slen) {
	basic_string_ref *tmp;
	char *s1;
	char &c1;
	unsigned int count;
	char &c1;
	char &c2;
	char &c1;
	char *s2;
	unsigned int n;
	
  char cVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref *pbVar4;
  char *pcVar5;
  char *pcVar6;
  ulong __n;
  int iVar7;
  
  __n = (ulong)(int)slen;
  uVar2 = length__C7BString(this);
  if (uVar2 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar2 = length__C7BString(this);
  if (~__n <= (ulong)(long)(int)uVar2) {
    throwlength__16basic_string_ref();
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C7BString(this);
    uVar3 = length__C7BString(this);
    if (slen + 1 <= uVar2 - uVar3) {
      uVar2 = length__C7BString(this);
      for (iVar7 = uVar2 - pos; iVar7 != 0; iVar7 = iVar7 + -1) {
        pcVar5 = point__7BString(this);
        pcVar6 = data__C7BString(this);
        pcVar5[iVar7 + slen + pos + -1] = pcVar6[iVar7 + pos + -1];
      }
      pcVar5 = point__7BString(this);
      uVar2 = length__C7BString(this);
      cVar1 = eos__7BString();
      pcVar5[slen + uVar2] = cVar1;
      goto LAB_0026ff18;
    }
  }
  pbVar4 = (basic_string_ref *)malloc(0x10);
  pcVar5 = data__C7BString(this);
  uVar2 = length__C7BString(this);
  pbVar4 = __16basic_string_refPCcUiUi(pbVar4,pcVar5,pos,uVar2 + slen);
  pcVar5 = data__C7BString(this);
  uVar2 = length__C7BString(this);
  memmove(pbVar4->ptr + slen + pos,pcVar5 + pos,(long)(int)(uVar2 - pos));
  uVar2 = length__C7BString(this);
  cVar1 = eos__7BString();
  pbVar4->ptr[slen + uVar2] = cVar1;
  uVar2 = length__C7BString(this);
  pbVar4->len = uVar2;
  delete_ref__7BString(this);
  this->reference = pbVar4;
LAB_0026ff18:
  if (__n == 0) {
    pbVar4 = this->reference;
  }
  else {
    pcVar5 = point__7BString(this);
    memmove(pcVar5 + pos,s,__n);
    pbVar4 = this->reference;
  }
  pbVar4->len = pbVar4->len + slen;
  return;
}

void BString::replace_str(unsigned int xlen, unsigned int pos, char *s, unsigned int slen) {
	basic_string_ref *tmp;
	char *s1;
	char *s2;
	char *s1;
	char *s2;
	unsigned int count;
	char &c1;
	char &c2;
	char *s2;
	unsigned int n;
	
  char cVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref *pbVar4;
  char *pcVar5;
  char *pcVar6;
  ulong __n;
  int iVar7;
  
  __n = (ulong)(int)slen;
  uVar2 = length__C7BString(this);
  if (uVar2 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar2 = length__C7BString(this);
  if (~__n <= (ulong)(long)(int)(uVar2 - xlen)) {
    throwlength__16basic_string_ref();
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C7BString(this);
    uVar3 = length__C7BString(this);
    if ((uVar3 + slen) - (xlen - 1) <= uVar2) {
      if (__n < (ulong)(long)(int)xlen) {
        pcVar5 = point__7BString(this);
        pcVar6 = data__C7BString(this);
        uVar2 = length__C7BString(this);
        memmove(pcVar5 + slen + pos,pcVar6 + xlen + pos,(long)(int)((uVar2 - pos) - xlen));
      }
      else {
        uVar2 = length__C7BString(this);
        for (iVar7 = (uVar2 - pos) - xlen; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar5 = point__7BString(this);
          pcVar6 = data__C7BString(this);
          pcVar5[iVar7 + slen + pos + -1] = pcVar6[iVar7 + xlen + pos + -1];
        }
      }
      pcVar5 = point__7BString(this);
      uVar2 = length__C7BString(this);
      cVar1 = eos__7BString();
      pcVar5[(slen + uVar2) - xlen] = cVar1;
      goto LAB_002701a4;
    }
  }
  pbVar4 = (basic_string_ref *)malloc(0x10);
  pcVar5 = data__C7BString(this);
  uVar2 = length__C7BString(this);
  pbVar4 = __16basic_string_refPCcUiUi(pbVar4,pcVar5,pos,(uVar2 + slen) - xlen);
  pcVar5 = data__C7BString(this);
  uVar2 = length__C7BString(this);
  memmove(pbVar4->ptr + slen + pos,pcVar5 + xlen + pos,(long)(int)((uVar2 - pos) - xlen));
  uVar2 = length__C7BString(this);
  pcVar5 = pbVar4->ptr;
  cVar1 = eos__7BString();
  pcVar5[(slen + uVar2) - xlen] = cVar1;
  uVar2 = length__C7BString(this);
  pbVar4->len = uVar2;
  delete_ref__7BString(this);
  this->reference = pbVar4;
LAB_002701a4:
  if (__n == 0) {
    pbVar4 = this->reference;
  }
  else {
    pcVar5 = point__7BString(this);
    memmove(pcVar5 + pos,s,__n);
    pbVar4 = this->reference;
  }
  pbVar4->len = pbVar4->len + (slen - xlen);
  return;
}

int BString::compare_str(unsigned int pos, char *str, unsigned int slen, unsigned int strlen) {
	unsigned int rlen;
	char *s2;
	unsigned int n;
	
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ulong __n;
  
  uVar2 = length__C7BString(this);
  if (uVar2 < pos) {
    throwrange__16basic_string_ref();
  }
  __n = (long)(int)slen;
  if ((ulong)(long)(int)strlen < (ulong)(long)(int)slen) {
    __n = (long)(int)strlen;
  }
  uVar2 = length__C7BString(this);
  if (uVar2 == 0) {
    if (str == (char *)0x0) {
      cVar1 = eos__7BString();
      iVar3 = (int)cVar1;
    }
    else {
      cVar1 = eos__7BString();
      iVar3 = (int)cVar1 - (int)*str;
    }
  }
  else {
    pcVar4 = data__C7BString(this);
    iVar3 = memcmp(pcVar4 + pos,str,__n);
    if (iVar3 == 0) {
      uVar2 = length__C7BString(this);
      iVar3 = (uVar2 - pos) - strlen;
    }
  }
  return iVar3;
}

unsigned int BString::find_str(char *s, unsigned int pos, unsigned int len) {
	unsigned int count;
	unsigned int shift;
	unsigned int place;
	char &c2;
	
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar1 = length__C7BString(this);
  if ((uVar1 != 0) && (len != 0)) {
    while( true ) {
      uVar1 = length__C7BString(this);
      if (uVar1 - pos < len) break;
      uVar1 = 0;
      do {
        uVar3 = uVar1;
        if (len <= uVar3) break;
        pcVar2 = data__C7BString(this);
        uVar1 = uVar3 + 1;
      } while (s[len - (uVar3 + 1)] == pcVar2[((len - 1) - uVar3) + pos]);
      if (uVar3 == len) {
        return pos;
      }
      uVar1 = find__C7BStringcUi(this,s[len - (uVar3 + 1)],pos + (len - uVar3));
      if (uVar1 == 0xffffffff) {
        return 0xffffffff;
      }
      pos = (uVar1 + 1) - (len - uVar3);
    }
  }
  return 0xffffffff;
}

unsigned int BString::rfind_str(char *s, unsigned int pos, unsigned int len) {
	unsigned int count;
	unsigned int shift;
	unsigned int place;
	char &c2;
	
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = length__C7BString(this);
  iVar4 = pos + 1;
  if (uVar1 - len <= pos) {
    uVar1 = length__C7BString(this);
    iVar4 = uVar1 - len;
  }
  uVar1 = length__C7BString(this);
  if (((len <= uVar1) && (len != 0)) && (iVar4 != 0)) {
    uVar1 = 0;
LAB_002704a8:
    do {
      uVar3 = uVar1;
      if (uVar3 < len) {
        pcVar2 = data__C7BString(this);
        uVar1 = uVar3 + 1;
        if (s[len - (uVar3 + 1)] == pcVar2[(len - uVar3) + iVar4 + -2]) goto LAB_002704a8;
      }
      if (uVar3 == len) {
        return iVar4 - 1;
      }
      uVar1 = rfind__C7BStringcUi(this,s[len - (uVar3 + 1)],(iVar4 + (len - uVar3)) - 3);
      if (uVar1 == 0xffffffff) {
        return 0xffffffff;
      }
      iVar4 = ((uVar1 + uVar3) - len) + 2;
      uVar1 = 0;
    } while (iVar4 != 0);
  }
  return 0xffffffff;
}

unsigned int BString::find_first_of_str(char *s, unsigned int pos, unsigned int len) {
	unsigned int temp;
	unsigned int count;
	unsigned int result;
	char &c1;
	char &c2;
	
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  while( true ) {
    uVar2 = length__C7BString(this);
    uVar3 = 0;
    if (uVar2 <= pos) break;
    for (; (uVar3 < len && (pcVar1 = data__C7BString(this), pcVar1[pos] != s[uVar3]));
        uVar3 = uVar3 + 1) {
    }
    if (uVar3 != len) break;
    pos = pos + 1;
  }
  uVar3 = length__C7BString(this);
  uVar2 = 0xffffffff;
  if (pos < uVar3) {
    uVar2 = pos;
  }
  if (uVar2 == 0xffffffff) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

unsigned int BString::find_last_of_str(char *s, unsigned int pos, unsigned int len) {
	unsigned int temp;
	unsigned int count;
	char &c1;
	char &c2;
	
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar1 = length__C7BString(this);
  uVar5 = 0;
  if (pos < uVar1) {
    uVar1 = pos + 1;
  }
  else {
    uVar1 = length__C7BString(this);
  }
  uVar2 = length__C7BString(this);
  if (uVar2 != 0) {
    while (uVar1 != 0) {
      uVar5 = 0;
      uVar1 = uVar1 - 1;
      while (uVar5 != len) {
        pcVar3 = data__C7BString(this);
        pcVar4 = s + uVar5;
        uVar5 = uVar5 + 1;
        if (pcVar3[uVar1] == *pcVar4) goto LAB_002706d4;
      }
    }
  }
  if (uVar5 != len) {
LAB_002706d4:
    uVar5 = length__C7BString(this);
    if (uVar5 != 0) {
      return uVar1;
    }
  }
  return 0xffffffff;
}

unsigned int BString::find_first_not_of_str(char *s, unsigned int pos, unsigned int len) {
	unsigned int count;
	unsigned int temp;
	char &c1;
	char &c2;
	
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  while( true ) {
    uVar2 = length__C7BString(this);
    uVar3 = 0;
    if (uVar2 <= pos) break;
    for (; (uVar3 < len && (pcVar1 = data__C7BString(this), pcVar1[pos] != s[uVar3]));
        uVar3 = uVar3 + 1) {
    }
    if (uVar3 == len) break;
    pos = pos + 1;
  }
  uVar3 = length__C7BString(this);
  uVar2 = 0xffffffff;
  if (pos < uVar3) {
    uVar2 = pos;
  }
  return uVar2;
}

unsigned int BString::find_last_not_of_str(char *s, unsigned int pos, unsigned int len) {
	unsigned int temp;
	unsigned int count;
	char &c1;
	char &c2;
	
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = length__C7BString(this);
  uVar4 = pos + 1;
  if (uVar1 <= pos) {
    uVar4 = length__C7BString(this);
  }
  uVar2 = length__C7BString(this);
  uVar1 = uVar4;
  if (uVar2 != 0) {
    while (uVar4 = uVar1, uVar4 != 0) {
      uVar5 = 0;
      while( true ) {
        if (uVar5 == len) goto LAB_00270878;
        pcVar3 = data__C7BString(this);
        uVar1 = uVar4 - 1;
        if (pcVar3[uVar4 - 1] == s[uVar5]) break;
        uVar5 = uVar5 + 1;
      }
    }
  }
  if (uVar5 == len) {
LAB_00270878:
    uVar5 = length__C7BString(this);
    if (uVar5 != 0) {
      return uVar4 - 1;
    }
  }
  return 0xffffffff;
}

BString* BString::BString() {
  this->reference = &_7BString_defaultReference;
  _7BString_defaultReference.count = _7BString_defaultReference.count + 1;
  return this;
}

BString* BString::BString(unsigned int size, capacity cap) {
  basic_string_ref *pbVar1;
  
  pbVar1 = (basic_string_ref *)malloc(0x10);
  pbVar1 = __16basic_string_refUiQ27BString8capacity(pbVar1,size,cap);
  this->reference = pbVar1;
  return this;
}

BString* BString::BString(BString &str, unsigned int pos, unsigned int n) {
	unsigned int rlen;
	
  uint uVar1;
  basic_string_ref *pbVar2;
  
  uVar1 = length__C7BString(str);
  if (uVar1 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar1 = length__C7BString(str);
  if (uVar1 - pos < n) {
    uVar1 = length__C7BString(str);
    n = uVar1 - pos;
  }
  uVar1 = length__C7BString(str);
  if ((n == uVar1) && (uVar1 = ref_count__C7BString(str), uVar1 != 0xffffffff)) {
    pbVar2 = str->reference;
    this->reference = pbVar2;
    pbVar2->count = pbVar2->count + 1;
  }
  else {
    pbVar2 = (basic_string_ref *)malloc(0x10);
    pbVar2 = __16basic_string_refRC7BStringUiUi(pbVar2,str,pos,n);
    this->reference = pbVar2;
  }
  return this;
}

BString* BString::BString(char *s, unsigned int rlen, unsigned int xlen) {
  basic_string_ref *pbVar1;
  
  if (~xlen <= rlen) {
    throwlength__16basic_string_ref();
  }
  pbVar1 = (basic_string_ref *)malloc(0x10);
  pbVar1 = __16basic_string_refPCcUiUi(pbVar1,s,rlen,rlen + xlen);
  this->reference = pbVar1;
  return this;
}

BString* BString::BString(char *s, unsigned int n) {
  basic_string_ref *pbVar1;
  
  pbVar1 = (basic_string_ref *)malloc(0x10);
  pbVar1 = __16basic_string_refPCcUi(pbVar1,s,n);
  this->reference = pbVar1;
  return this;
}

BString* BString::BString(char *s) {
  basic_string_ref *pbVar1;
  
  pbVar1 = (basic_string_ref *)malloc(0x10);
  pbVar1 = __16basic_string_refPCc(pbVar1,s);
  this->reference = pbVar1;
  return this;
}

BString* BString::BString(char c, unsigned int rep) {
  basic_string_ref *pbVar1;
  
  pbVar1 = (basic_string_ref *)malloc(0x10);
  pbVar1 = __16basic_string_refcUi(pbVar1,c,rep);
  this->reference = pbVar1;
  return this;
}

void BString::~BString(int __in_chrg) {
	void *pAddress;
	
  delete_ref__7BString(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

BString& BString::operator=(BString &str) {
  uint uVar1;
  basic_string_ref *pbVar2;
  
  if (this != str) {
    delete_ref__7BString(this);
    uVar1 = ref_count__C7BString(str);
    if (uVar1 == 0xffffffff) {
      pbVar2 = (basic_string_ref *)malloc(0x10);
      uVar1 = length__C7BString(str);
      pbVar2 = __16basic_string_refRC7BStringUiUi(pbVar2,str,0,uVar1);
      this->reference = pbVar2;
    }
    else {
      pbVar2 = str->reference;
      this->reference = pbVar2;
      pbVar2->count = pbVar2->count + 1;
    }
  }
  return this;
}

BString& BString::operator=(char *s) {
	char *s;
	
  uint slen;
  size_t sVar1;
  
  if (s == (char *)0x0) {
    slen = 0;
  }
  else {
    sVar1 = strlen(s);
    slen = (uint)sVar1;
  }
  assign_str__7BStringPCcUi(this,s,slen);
  return this;
}

BString& BString::operator=(char c) {
  char cVar1;
  uint uVar2;
  char *pcVar3;
  basic_string_ref *pbVar4;
  
  uVar2 = ref_count__C7BString(this);
  if ((uVar2 == 1) && (uVar2 = reserve__C7BString(this), 1 < uVar2)) {
    pcVar3 = point__7BString(this);
    *pcVar3 = c;
    pcVar3 = point__7BString(this);
    cVar1 = eos__7BString();
    pcVar3[1] = cVar1;
    this->reference->len = 1;
  }
  else {
    delete_ref__7BString(this);
    pbVar4 = (basic_string_ref *)malloc(0x10);
    pbVar4 = __16basic_string_refcUi(pbVar4,c,1);
    this->reference = pbVar4;
  }
  return this;
}

BString& BString::operator+=(BString &rhs) {
  char *s;
  uint slen;
  
  s = data__C7BString(rhs);
  slen = length__C7BString(rhs);
  append_str__7BStringPCcUi(this,s,slen);
  return this;
}

BString& BString::operator+=(char *s) {
	char *s;
	
  uint slen;
  size_t sVar1;
  
  if (s == (char *)0x0) {
    slen = 0;
  }
  else {
    sVar1 = strlen(s);
    slen = (uint)sVar1;
  }
  append_str__7BStringPCcUi(this,s,slen);
  return this;
}

BString& BString::operator+=(char c) {
	basic_string_ref *tmp;
	char &c1;
	char &c1;
	
  char cVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref *pbVar4;
  char *pcVar5;
  
  uVar2 = length__C7BString(this);
  if (0xfffffffd < uVar2) {
    throwlength__16basic_string_ref();
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 == 1) {
    uVar2 = reserve__C7BString(this);
    uVar3 = length__C7BString(this);
    if (uVar3 + 1 < uVar2) goto LAB_00270f10;
  }
  pbVar4 = (basic_string_ref *)malloc(0x10);
  pcVar5 = data__C7BString(this);
  uVar2 = length__C7BString(this);
  uVar3 = length__C7BString(this);
  pbVar4 = __16basic_string_refPCcUiUi(pbVar4,pcVar5,uVar2,uVar3 + 1);
  delete_ref__7BString(this);
  this->reference = pbVar4;
LAB_00270f10:
  pcVar5 = point__7BString(this);
  uVar2 = length__C7BString(this);
  pcVar5[uVar2] = c;
  pcVar5 = point__7BString(this);
  uVar2 = length__C7BString(this);
  cVar1 = eos__7BString();
  pcVar5[uVar2 + 1] = cVar1;
  this->reference->len = this->reference->len + 1;
  return this;
}

BString& BString::append(BString &str, unsigned int pos, unsigned int n) {
  uint uVar1;
  char *pcVar2;
  
  uVar1 = length__C7BString(str);
  if (uVar1 < pos) {
    throwrange__16basic_string_ref();
  }
  pcVar2 = data__C7BString(str);
  uVar1 = length__C7BString(str);
  if (uVar1 - pos < n) {
    uVar1 = length__C7BString(str);
    n = uVar1 - pos;
  }
  append_str__7BStringPCcUi(this,pcVar2 + pos,n);
  return this;
}

BString& BString::append(char *s, unsigned int n) {
  append_str__7BStringPCcUi(this,s,n);
  return this;
}

BString& BString::append(char *s) {
	char *s;
	
  uint slen;
  size_t sVar1;
  
  if (s == (char *)0x0) {
    slen = 0;
  }
  else {
    sVar1 = strlen(s);
    slen = (uint)sVar1;
  }
  append_str__7BStringPCcUi(this,s,slen);
  return this;
}

BString& BString::append(char c, unsigned int rep) {
	basic_string_ref *tmp;
	unsigned int count;
	char &c1;
	char &c1;
	
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  basic_string_ref *pbVar5;
  char *pcVar6;
  
  uVar3 = length__C7BString(this);
  if (~rep <= uVar3) {
    throwlength__16basic_string_ref();
  }
  if (rep == 0) {
    return this;
  }
  uVar3 = ref_count__C7BString(this);
  if (uVar3 < 2) {
    uVar3 = reserve__C7BString(this);
    uVar4 = length__C7BString(this);
    if (uVar4 + rep + 1 <= uVar3) goto LAB_00271188;
  }
  pbVar5 = (basic_string_ref *)malloc(0x10);
  pcVar6 = data__C7BString(this);
  uVar3 = length__C7BString(this);
  uVar4 = length__C7BString(this);
  pbVar5 = __16basic_string_refPCcUiUi(pbVar5,pcVar6,uVar3,uVar4 + rep);
  delete_ref__7BString(this);
  this->reference = pbVar5;
LAB_00271188:
  uVar3 = 0;
  if (rep != 0) {
    do {
      pcVar6 = point__7BString(this);
      uVar4 = length__C7BString(this);
      iVar1 = uVar3 + uVar4;
      uVar3 = uVar3 + 1;
      pcVar6[iVar1] = c;
    } while (uVar3 < rep);
  }
  pcVar6 = point__7BString(this);
  uVar3 = length__C7BString(this);
  cVar2 = eos__7BString();
  pcVar6[rep + uVar3] = cVar2;
  this->reference->len = this->reference->len + rep;
  return this;
}

BString& BString::assign(BString &str, unsigned int pos, unsigned int n) {
	unsigned int rlen;
	
  basic_string_ref *pbVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = length__C7BString(str);
  if (uVar2 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar2 = length__C7BString(str);
  if (uVar2 - pos < n) {
    uVar2 = length__C7BString(str);
    n = uVar2 - pos;
  }
  uVar2 = length__C7BString(str);
  if ((n == uVar2) && (uVar2 = ref_count__C7BString(str), uVar2 != 0xffffffff)) {
    delete_ref__7BString(this);
    pbVar1 = str->reference;
    this->reference = pbVar1;
    pbVar1->count = pbVar1->count + 1;
  }
  else {
    pcVar3 = data__C7BString(str);
    assign_str__7BStringPCcUi(this,pcVar3 + pos,n);
  }
  return this;
}

BString& BString::assign(char *s, unsigned int n) {
  assign_str__7BStringPCcUi(this,s,n);
  return this;
}

BString& BString::assign(char *s) {
	char *s;
	
  uint slen;
  size_t sVar1;
  
  if (s == (char *)0x0) {
    slen = 0;
  }
  else {
    sVar1 = strlen(s);
    slen = (uint)sVar1;
  }
  assign_str__7BStringPCcUi(this,s,slen);
  return this;
}

BString& BString::assign(char c, unsigned int rep) {
	basic_string_ref *tmp;
	unsigned int count;
	char &c1;
	char &c1;
	
  char cVar1;
  uint uVar2;
  basic_string_ref *pbVar3;
  char *pcVar4;
  
  if (rep == 0xffffffff) {
    throwlength__16basic_string_ref();
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 < 2) {
    if (rep != 0) {
      uVar2 = reserve__C7BString(this);
      if (uVar2 < rep + 1) goto LAB_002713f0;
      uVar2 = 0;
      if (rep != 0) {
        do {
          pcVar4 = point__7BString(this);
          pcVar4 = pcVar4 + uVar2;
          uVar2 = uVar2 + 1;
          *pcVar4 = c;
        } while (uVar2 < rep);
      }
    }
    pcVar4 = point__7BString(this);
    cVar1 = eos__7BString();
    pcVar4[rep] = cVar1;
    this->reference->len = rep;
  }
  else {
LAB_002713f0:
    pbVar3 = (basic_string_ref *)malloc(0x10);
    pbVar3 = __16basic_string_refcUi(pbVar3,c,rep);
    delete_ref__7BString(this);
    this->reference = pbVar3;
  }
  return this;
}

BString& BString::insert(unsigned int pos1, BString &str, unsigned int pos2, unsigned int n) {
	unsigned int rlen;
	
  uint uVar1;
  char *pcVar2;
  
  uVar1 = length__C7BString(str);
  if (uVar1 < pos2) {
    throwrange__16basic_string_ref();
  }
  uVar1 = length__C7BString(str);
  if (uVar1 - pos2 < n) {
    uVar1 = length__C7BString(str);
    n = uVar1 - pos2;
  }
  pcVar2 = data__C7BString(str);
  insert_str__7BStringUiPCcUi(this,pos1,pcVar2 + pos2,n);
  return this;
}

BString& BString::insert(unsigned int pos, char *s, unsigned int n) {
  insert_str__7BStringUiPCcUi(this,pos,s,n);
  return this;
}

BString& BString::insert(unsigned int pos, char *s) {
	char *s;
	
  uint slen;
  size_t sVar1;
  
  if (s == (char *)0x0) {
    slen = 0;
  }
  else {
    sVar1 = strlen(s);
    slen = (uint)sVar1;
  }
  insert_str__7BStringUiPCcUi(this,pos,s,slen);
  return this;
}

BString& BString::insert(unsigned int pos, char c, unsigned int rep) {
	unsigned int count;
	basic_string_ref *tmp;
	char &c1;
	char &c2;
	char &c1;
	char &c1;
	char &c2;
	char &c1;
	char &c1;
	
  char cVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref *pbVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  uVar2 = length__C7BString(this);
  if (uVar2 < pos) {
    throwrange__16basic_string_ref();
  }
  if ((rep == 0xffffffff) || (uVar2 = length__C7BString(this), ~rep <= uVar2)) {
    throwlength__16basic_string_ref();
  }
  if (rep == 0) {
    return this;
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C7BString(this);
    uVar3 = length__C7BString(this);
    if (uVar3 + rep + 1 <= uVar2) {
      uVar2 = length__C7BString(this);
      for (iVar7 = uVar2 - pos; iVar7 != 0; iVar7 = iVar7 + -1) {
        pcVar5 = point__7BString(this);
        pcVar6 = data__C7BString(this);
        pcVar5[iVar7 + rep + pos + -1] = pcVar6[iVar7 + pos + -1];
      }
      pcVar5 = point__7BString(this);
      uVar2 = length__C7BString(this);
      cVar1 = eos__7BString();
      pcVar5[uVar2 + rep] = cVar1;
      goto LAB_002717c0;
    }
  }
  pbVar4 = (basic_string_ref *)malloc(0x10);
  pcVar5 = data__C7BString(this);
  uVar2 = length__C7BString(this);
  pbVar4 = __16basic_string_refPCcUiUi(pbVar4,pcVar5,pos,uVar2 + rep);
  uVar2 = length__C7BString(this);
  if (uVar2 != 0) {
    uVar2 = length__C7BString(this);
    for (iVar7 = uVar2 - pos; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar5 = data__C7BString(this);
      pbVar4->ptr[iVar7 + rep + pos + -1] = pcVar5[iVar7 + pos + -1];
    }
  }
  uVar2 = length__C7BString(this);
  cVar1 = eos__7BString();
  pbVar4->ptr[rep + uVar2] = cVar1;
  uVar2 = length__C7BString(this);
  pbVar4->len = uVar2;
  delete_ref__7BString(this);
  this->reference = pbVar4;
LAB_002717c0:
  uVar2 = 0;
  if (rep != 0) {
    do {
      pcVar5 = point__7BString(this);
      iVar7 = uVar2 + pos;
      uVar2 = uVar2 + 1;
      pcVar5[iVar7] = c;
    } while (uVar2 < rep);
  }
  this->reference->len = this->reference->len + rep;
  return this;
}

BString& BString::erase(unsigned int pos, unsigned int n) {
	unsigned int xlen;
	basic_string_ref *tmp;
	char *s2;
	char *s2;
	char &c1;
	
  char cVar1;
  uint uVar2;
  basic_string_ref *pbVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = length__C7BString(this);
  if (uVar2 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar2 = length__C7BString(this);
  if (uVar2 - pos < n) {
    uVar2 = length__C7BString(this);
    n = uVar2 - pos;
  }
  uVar2 = ref_count__C7BString(this);
  if (uVar2 < 2) {
    uVar2 = length__C7BString(this);
    if (n == uVar2) {
      this->reference->len = 0;
    }
    else if (n != 0) {
      pcVar4 = point__7BString(this);
      pcVar5 = data__C7BString(this);
      uVar2 = length__C7BString(this);
      memmove(pcVar4 + pos,pcVar5 + n + pos,(long)(int)((uVar2 - n) - pos));
      this->reference->len = this->reference->len - n;
    }
  }
  else {
    pbVar3 = (basic_string_ref *)malloc(0x10);
    pcVar4 = data__C7BString(this);
    uVar2 = length__C7BString(this);
    pbVar3 = __16basic_string_refPCcUiUi(pbVar3,pcVar4,pos,uVar2);
    pcVar4 = data__C7BString(this);
    uVar2 = length__C7BString(this);
    memmove(pbVar3->ptr + pos,pcVar4 + n + pos,(long)(int)((uVar2 - n) - pos));
    uVar2 = length__C7BString(this);
    pbVar3->len = uVar2 - n;
    delete_ref__7BString(this);
    this->reference = pbVar3;
  }
  pcVar4 = point__7BString(this);
  if (pcVar4 != (char *)0x0) {
    pcVar4 = point__7BString(this);
    uVar2 = length__C7BString(this);
    cVar1 = eos__7BString();
    pcVar4[uVar2] = cVar1;
  }
  return this;
}

BString& BString::replace(unsigned int pos1, unsigned int n1, BString &str, unsigned int pos2, unsigned int n2) {
	unsigned int xlen;
	unsigned int rlen;
	
  uint uVar1;
  char *pcVar2;
  
  uVar1 = length__C7BString(str);
  if (uVar1 < pos2) {
    throwrange__16basic_string_ref();
  }
  uVar1 = length__C7BString(this);
  if (uVar1 - pos1 < n1) {
    uVar1 = length__C7BString(this);
    n1 = uVar1 - pos1;
  }
  uVar1 = length__C7BString(str);
  if (uVar1 - pos2 < n2) {
    uVar1 = length__C7BString(str);
    n2 = uVar1 - pos2;
  }
  pcVar2 = data__C7BString(str);
  replace_str__7BStringUiUiPCcUi(this,n1,pos1,pcVar2 + pos2,n2);
  return this;
}

BString& BString::replace(unsigned int pos, unsigned int n1, char *s, unsigned int n2) {
	unsigned int xlen;
	
  uint uVar1;
  
  uVar1 = length__C7BString(this);
  if (uVar1 - pos < n1) {
    uVar1 = length__C7BString(this);
    n1 = uVar1 - pos;
  }
  replace_str__7BStringUiUiPCcUi(this,n1,pos,s,n2);
  return this;
}

BString& BString::replace(unsigned int pos, unsigned int n1, char *s) {
	unsigned int xlen;
	char *s;
	
  uint uVar1;
  size_t sVar2;
  
  uVar1 = length__C7BString(this);
  if (uVar1 - pos < n1) {
    uVar1 = length__C7BString(this);
    n1 = uVar1 - pos;
  }
  uVar1 = 0;
  if (s != (char *)0x0) {
    sVar2 = strlen(s);
    uVar1 = (uint)sVar2;
  }
  replace_str__7BStringUiUiPCcUi(this,n1,pos,s,uVar1);
  return this;
}

BString& BString::replace(unsigned int pos, unsigned int n, char c, unsigned int rep) {
	unsigned int xlen;
	unsigned int count;
	basic_string_ref *tmp;
	char *s1;
	char *s2;
	char &c1;
	char &c2;
	char *s1;
	char *s2;
	char &c1;
	char &c2;
	char &c1;
	
  char cVar1;
  uint uVar2;
  uint uVar3;
  BString *pBVar4;
  uint uVar5;
  basic_string_ref *pbVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  uVar2 = length__C7BString(this);
  if (uVar2 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar3 = length__C7BString(this);
  uVar2 = n;
  if (uVar3 - pos < n) {
    uVar2 = length__C7BString(this);
    uVar2 = uVar2 - pos;
  }
  uVar3 = length__C7BString(this);
  if (~rep <= uVar3 - uVar2) {
    throwlength__16basic_string_ref();
  }
  if (rep == 0) {
    pBVar4 = erase__7BStringUiUi(this,pos,n);
    return pBVar4;
  }
  uVar3 = ref_count__C7BString(this);
  if (uVar3 < 2) {
    uVar3 = reserve__C7BString(this);
    uVar5 = length__C7BString(this);
    if ((uVar5 - uVar2) + rep + 1 <= uVar3) {
      if (rep < uVar2) {
        pcVar7 = point__7BString(this);
        pcVar8 = data__C7BString(this);
        uVar3 = length__C7BString(this);
        memmove(pcVar7 + rep + pos,pcVar8 + uVar2 + pos,(long)(int)((uVar3 - pos) - uVar2));
      }
      else {
        uVar3 = length__C7BString(this);
        for (iVar9 = (uVar3 - uVar2) - pos; iVar9 != 0; iVar9 = iVar9 + -1) {
          pcVar7 = point__7BString(this);
          pcVar8 = data__C7BString(this);
          pcVar7[iVar9 + rep + pos + -1] = pcVar8[iVar9 + uVar2 + pos + -1];
        }
      }
      pcVar7 = point__7BString(this);
      uVar3 = length__C7BString(this);
      cVar1 = eos__7BString();
      pcVar7[(uVar3 + rep) - uVar2] = cVar1;
      goto LAB_00271edc;
    }
  }
  pbVar6 = (basic_string_ref *)malloc(0x10);
  pcVar7 = data__C7BString(this);
  uVar3 = length__C7BString(this);
  if (uVar2 > rep) {
    uVar3 = uVar3 + (uVar2 - rep);
  }
  pbVar6 = __16basic_string_refPCcUiUi(pbVar6,pcVar7,pos,uVar3);
  if (uVar2 <= rep) {
    uVar3 = length__C7BString(this);
    for (iVar9 = (uVar3 - uVar2) - pos; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar7 = data__C7BString(this);
      pbVar6->ptr[iVar9 + rep + pos + -1] = pcVar7[iVar9 + uVar2 + pos + -1];
    }
  }
  else {
    pcVar7 = data__C7BString(this);
    uVar3 = length__C7BString(this);
    memmove(pbVar6->ptr + rep + pos,pcVar7 + uVar2 + pos,(long)(int)((uVar3 - pos) - uVar2));
  }
  uVar3 = length__C7BString(this);
  pcVar7 = pbVar6->ptr;
  cVar1 = eos__7BString();
  pcVar7[(uVar3 + rep) - uVar2] = cVar1;
  uVar3 = length__C7BString(this);
  pbVar6->len = uVar3;
  delete_ref__7BString(this);
  this->reference = pbVar6;
LAB_00271edc:
  uVar3 = 0;
  if (rep != 0) {
    do {
      pcVar7 = point__7BString(this);
      iVar9 = uVar3 + pos;
      uVar3 = uVar3 + 1;
      pcVar7[iVar9] = c;
    } while (uVar3 < rep);
  }
  this->reference->len = this->reference->len + (rep - uVar2);
  return this;
}

void BString::put_at(unsigned int pos, char c) {
	basic_string_ref *tmp;
	char &c1;
	
  uint uVar1;
  basic_string_ref *pbVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = length__C7BString(this);
  if (uVar1 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar1 = ref_count__C7BString(this);
  if ((1 < uVar1) || (uVar1 = reserve__C7BString(this), pos + 1 == uVar1)) {
    pbVar2 = (basic_string_ref *)malloc(0x10);
    pcVar3 = data__C7BString(this);
    uVar1 = length__C7BString(this);
    uVar4 = length__C7BString(this);
    uVar5 = length__C7BString(this);
    pbVar2 = __16basic_string_refPCcUiUi(pbVar2,pcVar3,uVar1,uVar4 + (pos == uVar5));
    delete_ref__7BString(this);
    this->reference = pbVar2;
  }
  uVar1 = length__C7BString(this);
  if (pos == uVar1) {
    this->reference->len = this->reference->len + 1;
  }
  pcVar3 = point__7BString(this);
  pcVar3[pos] = c;
  return;
}

char& BString::operator[](unsigned int pos) {
	basic_string_ref *tmp;
	
  uint uVar1;
  basic_string_ref *pbVar2;
  char *pcVar3;
  uint rres;
  
  uVar1 = length__C7BString(this);
  if (uVar1 <= pos) {
    throwrange__16basic_string_ref();
  }
  uVar1 = ref_count__C7BString(this);
  if (1 < uVar1) {
    pbVar2 = (basic_string_ref *)malloc(0x10);
    pcVar3 = data__C7BString(this);
    uVar1 = length__C7BString(this);
    rres = length__C7BString(this);
    pbVar2 = __16basic_string_refPCcUiUi(pbVar2,pcVar3,uVar1,rres);
    delete_ref__7BString(this);
    this->reference = pbVar2;
  }
  pcVar3 = point__7BString(this);
  return pcVar3 + pos;
}

char* BString::c_str() {
	char *result;
	
  char *pcVar1;
  
  pcVar1 = data__C7BString(this);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  return pcVar1;
}

void BString::resize(unsigned int n, char c) {
	basic_string_ref *tmp;
	char &c1;
	char &c1;
	
  char cVar1;
  uint uVar2;
  basic_string_ref *pbVar3;
  char *s;
  uint uVar4;
  
  if (n == 0xffffffff) {
    throwlength__16basic_string_ref();
  }
  uVar2 = ref_count__C7BString(this);
  if ((uVar2 < 2) && (uVar2 = reserve__C7BString(this), n + 1 <= uVar2)) {
    pbVar3 = this->reference;
    goto LAB_00272268;
  }
  pbVar3 = (basic_string_ref *)malloc(0x10);
  s = data__C7BString(this);
  uVar4 = length__C7BString(this);
  uVar2 = n;
  if (uVar4 < n) {
    uVar2 = length__C7BString(this);
  }
  pbVar3 = __16basic_string_refPCcUiUi(pbVar3,s,uVar2,n);
  delete_ref__7BString(this);
  this->reference = pbVar3;
  while( true ) {
    pbVar3 = this->reference;
LAB_00272268:
    if (n <= pbVar3->len) break;
    uVar2 = length__C7BString(this);
    this->reference->ptr[uVar2] = c;
    this->reference->len = this->reference->len + 1;
  }
  this->reference->len = n;
  uVar2 = length__C7BString(this);
  pbVar3 = this->reference;
  cVar1 = eos__7BString();
  pbVar3->ptr[uVar2] = cVar1;
  return;
}

void BString::resize(unsigned int n) {
  char c;
  
  c = eos__7BString();
  resize__7BStringUic(this,n,c);
  return;
}

void BString::reserve(unsigned int res_arg) {
	basic_string_ref *tmp;
	
  uint uVar1;
  basic_string_ref *pbVar2;
  char *s;
  
  if (res_arg == 0xffffffff) {
    throwlength__16basic_string_ref();
  }
  uVar1 = reserve__C7BString(this);
  if (uVar1 < res_arg + 1) {
    pbVar2 = (basic_string_ref *)malloc(0x10);
    s = data__C7BString(this);
    uVar1 = length__C7BString(this);
    pbVar2 = __16basic_string_refPCcUiUi(pbVar2,s,uVar1,res_arg);
    delete_ref__7BString(this);
    this->reference = pbVar2;
  }
  return;
}

unsigned int BString::copy(char *s, unsigned int n, unsigned int pos) {
	unsigned int rlen;
	char *s1;
	unsigned int n;
	
  uint uVar1;
  char *pcVar2;
  ulong __n;
  
  __n = (ulong)(int)n;
  uVar1 = length__C7BString(this);
  if (uVar1 < pos) {
    throwrange__16basic_string_ref();
  }
  uVar1 = length__C7BString(this);
  if ((ulong)(long)(int)(uVar1 - pos) < __n) {
    uVar1 = length__C7BString(this);
    __n = (ulong)(int)(uVar1 - pos);
  }
  uVar1 = length__C7BString(this);
  if (uVar1 != 0) {
    pcVar2 = data__C7BString(this);
    memmove(s,pcVar2 + pos,__n);
  }
  return (uint)__n;
}

unsigned int BString::find(BString &str, unsigned int pos) {
  char *s;
  uint uVar1;
  
  s = data__C7BString(str);
  uVar1 = length__C7BString(str);
  uVar1 = find_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find(char *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_str__C7BStringPCcUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString::find(char *s, unsigned int pos) {
	char *s;
	
  uint uVar1;
  size_t sVar2;
  
  if (s == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    uVar1 = (uint)sVar2;
  }
  uVar1 = find_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find(char c, unsigned int pos) {
	char &c1;
	
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  for (; (uVar1 = length__C7BString(this), pos < uVar1 &&
         (pcVar2 = data__C7BString(this), pcVar2[pos] != c)); pos = pos + 1) {
  }
  uVar3 = length__C7BString(this);
  uVar1 = 0xffffffff;
  if (pos < uVar3) {
    uVar1 = pos;
  }
  return uVar1;
}

unsigned int BString::rfind(BString &str, unsigned int pos) {
  char *s;
  uint uVar1;
  
  s = data__C7BString(str);
  uVar1 = length__C7BString(str);
  uVar1 = rfind_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::rfind(char *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = rfind_str__C7BStringPCcUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString::rfind(char *s, unsigned int pos) {
	char *s;
	
  uint uVar1;
  size_t sVar2;
  
  if (s == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    uVar1 = (uint)sVar2;
  }
  uVar1 = rfind_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::rfind(char c, unsigned int pos) {
	unsigned int count;
	char &c1;
	
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar1 = length__C7BString(this);
  uVar3 = pos + 1;
  if (uVar1 <= pos) {
    uVar3 = length__C7BString(this);
  }
  uVar1 = length__C7BString(this);
  if (uVar1 != 0) {
    while( true ) {
      pcVar2 = data__C7BString(this);
      if ((pcVar2[uVar3 - 1] == c) || (uVar3 < 2)) break;
      uVar3 = uVar3 - 1;
    }
    if (uVar3 != 1) {
      return uVar3 - 1;
    }
    pcVar2 = data__C7BString(this);
    if (*pcVar2 == c) {
      return 0;
    }
  }
  return 0xffffffff;
}

unsigned int BString::find_first_of(BString &str, unsigned int pos) {
  char *s;
  uint uVar1;
  
  s = data__C7BString(str);
  uVar1 = length__C7BString(str);
  uVar1 = find_first_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_first_of(char *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_first_of_str__C7BStringPCcUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString::find_first_of(char *s, unsigned int pos) {
	char *s;
	
  uint uVar1;
  size_t sVar2;
  
  if (s == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    uVar1 = (uint)sVar2;
  }
  uVar1 = find_first_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_first_of(char c, unsigned int pos) {
  uint uVar1;
  
  uVar1 = find__C7BStringcUi(this,c,pos);
  return uVar1;
}

unsigned int BString::find_last_of(BString &str, unsigned int pos) {
  char *s;
  uint uVar1;
  
  s = data__C7BString(str);
  uVar1 = length__C7BString(str);
  uVar1 = find_last_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_last_of(char *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_last_of_str__C7BStringPCcUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString::find_last_of(char *s, unsigned int pos) {
	char *s;
	
  uint uVar1;
  size_t sVar2;
  
  if (s == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    uVar1 = (uint)sVar2;
  }
  uVar1 = find_last_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_last_of(char c, unsigned int pos) {
  uint uVar1;
  
  uVar1 = rfind__C7BStringcUi(this,c,pos);
  return uVar1;
}

unsigned int BString::find_first_not_of(BString &str, unsigned int pos) {
  char *s;
  uint uVar1;
  
  s = data__C7BString(str);
  uVar1 = length__C7BString(str);
  uVar1 = find_first_not_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_first_not_of(char *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_first_not_of_str__C7BStringPCcUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString::find_first_not_of(char *s, unsigned int pos) {
	char *s;
	
  uint uVar1;
  size_t sVar2;
  
  if (s == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    uVar1 = (uint)sVar2;
  }
  uVar1 = find_first_not_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_first_not_of(char c, unsigned int pos) {
	char &c1;
	
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  for (; (uVar1 = length__C7BString(this), pos < uVar1 &&
         (pcVar2 = data__C7BString(this), pcVar2[pos] == c)); pos = pos + 1) {
  }
  uVar3 = length__C7BString(this);
  uVar1 = 0xffffffff;
  if (pos < uVar3) {
    uVar1 = pos;
  }
  return uVar1;
}

unsigned int BString::find_last_not_of(BString &str, unsigned int pos) {
  char *s;
  uint uVar1;
  
  s = data__C7BString(str);
  uVar1 = length__C7BString(str);
  uVar1 = find_last_not_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_last_not_of(char *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_last_not_of_str__C7BStringPCcUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString::find_last_not_of(char *s, unsigned int pos) {
	char *s;
	
  uint uVar1;
  size_t sVar2;
  
  if (s == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    uVar1 = (uint)sVar2;
  }
  uVar1 = find_last_not_of_str__C7BStringPCcUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString::find_last_not_of(char c, unsigned int pos) {
	unsigned int count;
	char &c1;
	
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar1 = length__C7BString(this);
  uVar3 = pos + 1;
  if (uVar1 <= pos) {
    uVar3 = length__C7BString(this);
  }
  uVar1 = length__C7BString(this);
  if (uVar1 != 0) {
    while( true ) {
      pcVar2 = data__C7BString(this);
      if ((pcVar2[uVar3 - 1] != c) || (uVar3 < 2)) break;
      uVar3 = uVar3 - 1;
    }
    if (uVar3 != 1) {
      return uVar3 - 1;
    }
    pcVar2 = data__C7BString(this);
    if (*pcVar2 != c) {
      return 0;
    }
  }
  return 0xffffffff;
}

BString BString::substr(unsigned int pos, unsigned int n) {
  uint uVar1;
  char *pcVar2;
  uint in_a3_lo;
  
  uVar1 = length__C7BString((BString *)pos);
  if (uVar1 < n) {
    throwrange__16basic_string_ref();
  }
  uVar1 = length__C7BString((BString *)pos);
  if (uVar1 == 0) {
    __7BString(this);
  }
  else {
    pcVar2 = data__C7BString((BString *)pos);
    uVar1 = length__C7BString((BString *)pos);
    if (uVar1 - n < in_a3_lo) {
      uVar1 = length__C7BString((BString *)pos);
      in_a3_lo = uVar1 - n;
    }
    __7BStringPCcUi(this,pcVar2 + n,in_a3_lo);
  }
  return (BString)(basic_string_ref *)this;
}

int BString::compare(BString &str, unsigned int pos, unsigned int n) {
	unsigned int slen;
	
  uint uVar1;
  char *str_00;
  int iVar2;
  
  uVar1 = length__C7BString(this);
  if (uVar1 - pos < n) {
    uVar1 = length__C7BString(this);
    n = uVar1 - pos;
  }
  str_00 = data__C7BString(str);
  uVar1 = length__C7BString(str);
  iVar2 = compare_str__C7BStringUiPCcUiUi(this,pos,str_00,n,uVar1);
  return iVar2;
}

int BString::compare(char *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  int iVar2;
  
  if (n == 0xffffffff) {
    throwlength__16basic_string_ref();
  }
  uVar1 = length__C7BString(this);
  iVar2 = compare_str__C7BStringUiPCcUiUi(this,pos,s,uVar1 - pos,n);
  return iVar2;
}

int BString::compare(char *s, unsigned int pos) {
	char *s;
	
  uint uVar1;
  uint strlen;
  int iVar2;
  size_t sVar3;
  
  uVar1 = length__C7BString(this);
  if (s == (char *)0x0) {
    strlen = 0;
  }
  else {
    sVar3 = ::strlen(s);
    strlen = (uint)sVar3;
  }
  iVar2 = compare_str__C7BStringUiPCcUiUi(this,pos,s,uVar1 - pos,strlen);
  return iVar2;
}

int BString::compare(char c, unsigned int pos, unsigned int rep) {
	unsigned int count;
	char &c1;
	
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  uVar1 = length__C7BString(this);
  if (uVar1 < pos) {
    throwrange__16basic_string_ref();
  }
  if (rep == 0xffffffff) {
    throwlength__16basic_string_ref();
  }
  uVar1 = 0;
  if (rep == 0) {
    uVar1 = length__C7BString(this);
    iVar4 = uVar1 - pos;
  }
  else {
    for (; ((uVar1 < rep && (uVar2 = length__C7BString(this), uVar1 < uVar2 - pos)) &&
           (pcVar3 = data__C7BString(this), pcVar3[uVar1 + pos] == c)); uVar1 = uVar1 + 1) {
    }
    if ((uVar1 == rep) || (uVar2 = length__C7BString(this), uVar1 == uVar2 - pos)) {
      uVar2 = length__C7BString(this);
      iVar4 = (uVar2 - pos) - uVar1;
    }
    else {
      pcVar3 = data__C7BString(this);
      iVar4 = (int)pcVar3[uVar1 + pos] - (int)c;
    }
  }
  return iVar4;
}

BString operator+(BString &lhs, BString &rhs) {
	BString tmp;
	
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *__src;
  uint *puVar4;
  BString *in_a2_lo;
  BString tmp;
  
  pcVar1 = data__C7BString(rhs);
  uVar2 = length__C7BString(rhs);
  uVar3 = length__C7BString(in_a2_lo);
  __7BStringPCcUiUi(&tmp,pcVar1,uVar2,uVar3);
  uVar2 = length__C7BString(in_a2_lo);
  if (uVar2 != 0) {
    pcVar1 = point__7BString(&tmp);
    uVar2 = length__C7BString(rhs);
    __src = data__C7BString(in_a2_lo);
    uVar3 = length__C7BString(in_a2_lo);
    memmove(pcVar1 + uVar2,__src,(long)(int)(uVar3 + 1));
  }
  puVar4 = len__7BString(&tmp);
  uVar2 = length__C7BString(in_a2_lo);
  *puVar4 = *puVar4 + uVar2;
  __7BStringRC7BStringUiUi(lhs,&tmp,0,0xffffffff);
  ___7BString(&tmp,2);
  return (BString)(basic_string_ref *)lhs;
}

BString operator+(char *lhs, BString &rhs) {
	unsigned int slen;
	BString tmp;
	char *s;
	
  uint uVar1;
  char *pcVar2;
  char *__src;
  uint *puVar3;
  uint uVar4;
  size_t sVar5;
  BString *in_a2_lo;
  BString tmp;
  
  if (rhs == (BString *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar5 = strlen((char *)rhs);
    uVar4 = (uint)sVar5;
  }
  uVar1 = length__C7BString(in_a2_lo);
  __7BStringPCcUiUi(&tmp,(char *)rhs,uVar4,uVar1);
  uVar1 = length__C7BString(in_a2_lo);
  if (uVar1 != 0) {
    pcVar2 = point__7BString(&tmp);
    __src = data__C7BString(in_a2_lo);
    uVar1 = length__C7BString(in_a2_lo);
    memmove(pcVar2 + uVar4,__src,(long)(int)(uVar1 + 1));
  }
  puVar3 = len__7BString(&tmp);
  uVar4 = length__C7BString(in_a2_lo);
  *puVar3 = *puVar3 + uVar4;
  __7BStringRC7BStringUiUi((BString *)lhs,&tmp,0,0xffffffff);
  ___7BString(&tmp,2);
  return (BString)(basic_string_ref *)lhs;
}

BString operator+(char lhs, BString &rhs) {
	BString tmp;
	
  uint uVar1;
  char *pcVar2;
  char *__src;
  uint *puVar3;
  BString *in_a2_lo;
  char local_80 [16];
  BString tmp;
  
  local_80[0] = (char)rhs;
  uVar1 = length__C7BString(in_a2_lo);
  __7BStringPCcUiUi(&tmp,local_80,1,uVar1);
  uVar1 = length__C7BString(in_a2_lo);
  if (uVar1 != 0) {
    pcVar2 = point__7BString(&tmp);
    __src = data__C7BString(in_a2_lo);
    uVar1 = length__C7BString(in_a2_lo);
    memmove(pcVar2 + 1,__src,(long)(int)(uVar1 + 1));
  }
  puVar3 = len__7BString(&tmp);
  uVar1 = length__C7BString(in_a2_lo);
  *puVar3 = *puVar3 + uVar1;
  __7BStringRC7BStringUiUi((BString *)(int)lhs,&tmp,0,0xffffffff);
  ___7BString(&tmp,2);
  return (basic_string_ref *)(int)lhs;
}

BString operator+(BString &lhs, char *rhs) {
	unsigned int slen;
	BString tmp;
	char *s;
	char *s2;
	
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  size_t sVar4;
  long in_a2;
  uint xlen;
  BString tmp;
  
  if (in_a2 == 0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen((char *)in_a2);
  }
  pcVar1 = data__C7BString((BString *)rhs);
  uVar2 = length__C7BString((BString *)rhs);
  xlen = (uint)sVar4;
  __7BStringPCcUiUi(&tmp,pcVar1,uVar2,xlen);
  if (sVar4 != 0) {
    pcVar1 = point__7BString(&tmp);
    uVar2 = length__C7BString((BString *)rhs);
    memmove(pcVar1 + uVar2,(char *)in_a2,(long)(int)(xlen + 1));
  }
  puVar3 = len__7BString(&tmp);
  *puVar3 = *puVar3 + xlen;
  __7BStringRC7BStringUiUi(lhs,&tmp,0,0xffffffff);
  ___7BString(&tmp,2);
  return (BString)(basic_string_ref *)lhs;
}

BString operator+(BString &lhs, char rhs) {
	BString tmp;
	char &c1;
	char &c1;
	
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  char in_a2_lo;
  BString tmp;
  
  pcVar2 = data__C7BString((BString *)(int)rhs);
  uVar3 = length__C7BString((BString *)(int)rhs);
  __7BStringPCcUiUi(&tmp,pcVar2,uVar3,1);
  pcVar2 = point__7BString(&tmp);
  uVar3 = length__C7BString((BString *)(int)rhs);
  pcVar2[uVar3] = in_a2_lo;
  puVar4 = len__7BString(&tmp);
  *puVar4 = *puVar4 + 1;
  pcVar2 = point__7BString(&tmp);
  uVar3 = length__C7BString(&tmp);
  cVar1 = eos__7BString();
  pcVar2[uVar3] = cVar1;
  __7BStringRC7BStringUiUi(lhs,&tmp,0,0xffffffff);
  ___7BString(&tmp,2);
  return (BString)(basic_string_ref *)lhs;
}

bool BString::operator==(BString &str) {
  int iVar1;
  
  iVar1 = compare__C7BStringRC7BStringUiUi(this,str,0,0xffffffff);
  return iVar1 == 0;
}

bool BString::operator!=(BString &str) {
  int iVar1;
  
  iVar1 = compare__C7BStringRC7BStringUiUi(this,str,0,0xffffffff);
  return iVar1 != 0;
}

bool BString::operator<(BString &str) {
  int iVar1;
  
  iVar1 = compare__C7BStringRC7BStringUiUi(this,str,0,0xffffffff);
  return SUB41((uint)iVar1 >> 0x1f,0);
}

unsigned int BString::length() {
  return this->reference->len;
}

unsigned int BString::reserve() {
  return this->reference->res;
}

BString& BString::assignDebug(c16 *str) {
  uint uVar1;
  char *out;
  
  if (str == (short *)0x0) {
    str = (short *)&DAT_003bebe8;
  }
  uVar1 = wcslen__FPCUs(str);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (char *)_memmanAlloc__FUiUi(uVar1 + 1,4);
                    /* end of inlined section */
  localConvertFromWide__FPcPCUs(out,str);
  assign__7BStringPCc(this,out);
  if (out != (char *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
                    /* end of inlined section */
  }
  return this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16basic_string_ref(&_7BString_defaultReference,2);
    }
    else {
      __16basic_string_ref(&_7BString_defaultReference);
    }
  }
  return;
}

void global constructors keyed to BString::defaultReference() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to BString::defaultReference() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

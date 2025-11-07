// STATUS: NOT STARTED

#include "bstring2.h"

struct string_wchar_baggage {
	string_wchar_baggage& operator=();
	string_wchar_baggage();
	string_wchar_baggage();
	static c16 newline(/* parameters unknown */);
	static void assign(/* parameters unknown */);
	static bool eq(/* parameters unknown */);
	static bool ne(/* parameters unknown */);
	static bool lt(/* parameters unknown */);
	static c16 eos(/* parameters unknown */);
	static bool is_del(/* parameters unknown */);
	static int compare(/* parameters unknown */);
	static unsigned int length(/* parameters unknown */);
	static c16* copy(/* parameters unknown */);
};

struct basic_string_ref2 {
private:
	c16 *ptr;
	unsigned int len;
	unsigned int res;
	unsigned int count;
	
public:
	basic_string_ref2& operator=();
	basic_string_ref2(c16 c, unsigned int rep);
	basic_string_ref2();
	basic_string_ref2();
	basic_string_ref2();
	basic_string_ref2();
	basic_string_ref2();
	basic_string_ref2();
	basic_string_ref2();
	basic_string_ref2(basic_string_ref2*, int, void);
	void delete_ptr();
	static c16 eos(/* parameters unknown */);
	static void throwlength(/* parameters unknown */);
	static void throwrange(/* parameters unknown */);
};

// warning: multiple differing types with the same name (type name not equal)
typedef simple_allocator<basic_string_ref2> basic_string_ref_allocator;
// warning: multiple differing types with the same name (type name not equal)
typedef simple_allocator<short unsigned int> charT_allocator;
// warning: multiple differing types with the same name (type name not equal)
typedef c16 char_type;
// warning: multiple differing types with the same name (type name not equal)
typedef string_wchar_baggage baggage_type;

struct simple_allocator<short unsigned int> {
	simple_allocator<short unsigned int>& operator=();
	simple_allocator();
	simple_allocator();
	static c16* allocate(/* parameters unknown */);
	static c16* allocate(/* parameters unknown */);
	static c16* allocate(/* parameters unknown */);
	static c16* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_allocator<basic_string_ref2> {
	simple_allocator<basic_string_ref2>& operator=();
	simple_allocator();
	simple_allocator();
	static basic_string_ref2* allocate(/* parameters unknown */);
	static basic_string_ref2* allocate(/* parameters unknown */);
	static basic_string_ref2* allocate(/* parameters unknown */);
	static basic_string_ref2* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

basic_string_ref2 BString2::defaultReference = {
	/* .ptr = */ NULL,
	/* .len = */ 0,
	/* .res = */ 0,
	/* .count = */ 0
};

unsigned int wcslen(c16 *ptr) {
	unsigned int result;
	
  short sVar1;
  uint uVar2;
  
  uVar2 = 0;
  sVar1 = *ptr;
  while (sVar1 != 0) {
    ptr = ptr + 1;
    uVar2 = uVar2 + 1;
    sVar1 = *ptr;
  }
  return uVar2;
}

unsigned int wcslen(__wchar_t *ptr) {
	unsigned int result;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *ptr;
  while (iVar1 != 0) {
    ptr = ptr + 1;
    uVar2 = uVar2 + 1;
    iVar1 = *ptr;
  }
  return uVar2;
}

static void localConvertToWide(c16 *out, __wchar_t *in) {
  short sVar1;
  int iVar2;
  
  iVar2 = *in;
  while (iVar2 != 0) {
    sVar1 = *(short *)in;
    in = in + 1;
    *out = sVar1;
    out = out + 1;
    iVar2 = *in;
  }
  *out = 0;
  return;
}

int wcscmp(c16 *s1, c16 *s2) {
	int diff;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  while( true ) {
    uVar1 = *s1;
    uVar2 = *s2;
    iVar3 = (uint)uVar1 - (uint)uVar2;
    if (iVar3 != 0) {
      return iVar3;
    }
    s1 = (short *)((ushort *)s1 + 1);
    if (uVar1 == 0) break;
    s2 = (short *)((ushort *)s2 + 1);
    if (uVar2 == 0) {
      return 0;
    }
  }
  return 0;
}

c16* wcscpy(c16 *out, c16 *in) {
	c16 *result;
	
  short sVar1;
  short *psVar2;
  
  sVar1 = *in;
  psVar2 = out;
  while (sVar1 != 0) {
    *psVar2 = sVar1;
    in = in + 1;
    psVar2 = psVar2 + 1;
    sVar1 = *in;
  }
  *psVar2 = 0;
  return out;
}

c16* wcsncpy(c16 *out, c16 *in, unsigned int n) {
	c16 *result;
	
  short *psVar1;
  
  psVar1 = out;
  if (*in != 0) {
    if (n == 0) {
      return out;
    }
    *out = *in;
    while( true ) {
      in = in + 1;
      psVar1 = psVar1 + 1;
      n = n - 1;
      if ((*in == 0) || (n == 0)) break;
      *psVar1 = *in;
    }
  }
  for (; n != 0; n = n - 1) {
    *psVar1 = 0;
    psVar1 = psVar1 + 1;
  }
  return out;
}

static void localConvertToWide(c16 *out, char *in) {
  byte bVar1;
  
  bVar1 = *in;
  while (bVar1 != 0) {
    bVar1 = *in;
    in = (char *)((byte *)in + 1);
    *out = (ushort)bVar1;
    out = (short *)((ushort *)out + 1);
    bVar1 = *in;
  }
  *out = 0;
  return;
}

void basic_string_ref2::delete_ptr() {
  if (this->res != 0) {
    free(this->ptr);
    this->ptr = (short *)0x0;
    this->res = 0;
  }
  return;
}

void basic_string_ref2::throwlength() {
  return;
}

void basic_string_ref2::throwrange() {
  return;
}

void BString2::delete_ref() {
  this->reference->count = this->reference->count - 1;
  if (this->reference->count == 0) {
    ___17basic_string_ref2(this->reference,2);
    free(this->reference);
  }
  return;
}

unsigned int BString2::ref_count() {
  return this->reference->count;
}

c16* BString2::point() {
  return this->reference->ptr;
}

unsigned int& BString2::len() {
  return &this->reference->len;
}

c16 BString2::get_at(unsigned int pos) {
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 <= pos) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = length__C8BString2(this);
  if (uVar1 == 0) {
    psVar2 = (short *)0x0;
  }
  else {
    psVar2 = this->reference->ptr;
  }
  return psVar2[pos];
}

c16 BString2::operator[](unsigned int pos) {
	BString2 *this;
	
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  uVar2 = length__C8BString2(this);
  sVar1 = 0;
  if (pos < uVar2) {
    uVar2 = length__C8BString2(this);
    if (uVar2 == 0) {
      psVar3 = (short *)0x0;
    }
    else {
      psVar3 = this->reference->ptr;
    }
    sVar1 = psVar3[pos];
  }
  return sVar1;
}

bool operator==(BString2 &lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2RC8BString2UiUi(lhs,rhs,0,0xffffffff);
  return iVar1 == 0;
}

bool operator==(c16 *lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2PCUsUi(rhs,lhs,0);
  return iVar1 == 0;
}

bool operator==(c16 lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2UsUiUi(rhs,lhs,0,1);
  return iVar1 == 0;
}

bool operator==(BString2 &lhs, c16 *rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2PCUsUi(lhs,rhs,0);
  return iVar1 == 0;
}

bool operator==(BString2 &lhs, c16 rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2UsUiUi(lhs,rhs,0,1);
  return iVar1 == 0;
}

bool operator!=(c16 *lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2PCUsUi(rhs,lhs,0);
  return iVar1 != 0;
}

bool operator!=(c16 lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2UsUiUi(rhs,lhs,0,1);
  return iVar1 != 0;
}

bool operator!=(BString2 &lhs, c16 *rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2PCUsUi(lhs,rhs,0);
  return iVar1 != 0;
}

bool operator!=(BString2 &lhs, c16 rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2UsUiUi(lhs,rhs,0,1);
  return iVar1 != 0;
}

bool operator<(BString2 &lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2RC8BString2UiUi(lhs,rhs,0,0xffffffff);
  return iVar1 < 0;
}

bool operator<(c16 *lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2PCUsUi(rhs,lhs,0);
  return 0 < iVar1;
}

bool operator<(c16 lhs, BString2 &rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2UsUiUi(rhs,lhs,0,1);
  return 0 < iVar1;
}

bool operator<(BString2 &lhs, c16 *rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2PCUsUi(lhs,rhs,0);
  return iVar1 < 0;
}

bool operator<(BString2 &lhs, c16 rhs) {
  int iVar1;
  
  iVar1 = compare__C8BString2UsUiUi(lhs,rhs,0,1);
  return iVar1 < 0;
}

bool operator>(c16 *lhs, BString2 &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC8BString2PCUs(rhs,lhs);
  return bVar1;
}

bool operator>(c16 lhs, BString2 &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC8BString2Us(rhs,lhs);
  return bVar1;
}

bool operator>(BString2 &lhs, c16 *rhs) {
  bool bVar1;
  
  bVar1 = __lt__FPCUsRC8BString2(rhs,lhs);
  return bVar1;
}

bool operator>(BString2 &lhs, c16 rhs) {
  bool bVar1;
  
  bVar1 = __lt__FUsRC8BString2(rhs,lhs);
  return bVar1;
}

bool operator>=(c16 *lhs, BString2 &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FPCUsRC8BString2(lhs,rhs);
  return !bVar1;
}

bool operator>=(c16 lhs, BString2 &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FUsRC8BString2(lhs,rhs);
  return !bVar1;
}

bool operator>=(BString2 &lhs, c16 *rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC8BString2PCUs(lhs,rhs);
  return !bVar1;
}

bool operator>=(BString2 &lhs, c16 rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC8BString2Us(lhs,rhs);
  return !bVar1;
}

bool operator<=(c16 *lhs, BString2 &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC8BString2PCUs(rhs,lhs);
  return !bVar1;
}

bool operator<=(c16 lhs, BString2 &rhs) {
  bool bVar1;
  
  bVar1 = __lt__FRC8BString2Us(rhs,lhs);
  return !bVar1;
}

bool operator<=(BString2 &lhs, c16 *rhs) {
  bool bVar1;
  
  bVar1 = __lt__FPCUsRC8BString2(rhs,lhs);
  return !bVar1;
}

bool operator<=(BString2 &lhs, c16 rhs) {
  bool bVar1;
  
  bVar1 = __lt__FUsRC8BString2(rhs,lhs);
  return !bVar1;
}

c16 basic_string_ref2::eos() {
  return 0;
}

basic_string_ref2* basic_string_ref2::basic_string_ref2() {
  this->count = this->count + 1;
  return this;
}

basic_string_ref2* basic_string_ref2::basic_string_ref2(unsigned int size, capacity cap) {
	unsigned int position;
	c16 &c1;
	c16 &c1;
	
  short sVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  if (cap == reserve_capacity) {
    this->len = 0;
    this->res = size;
    if (size == 0) {
      this->ptr = (short *)0x0;
    }
    else {
      psVar2 = (short *)malloc(size << 1);
      this->ptr = psVar2;
    }
  }
  else if ((cap == default_capacity) && (size != 0xffffffff)) {
    this->len = size;
    this->res = size;
    if (size == 0) {
      this->ptr = (short *)0x0;
    }
    else {
      this->len = size - 1;
      uVar4 = 0;
      psVar2 = (short *)malloc(size << 1);
      this->ptr = psVar2;
      uVar3 = uVar4;
      if (this->len != 0) {
        do {
          sVar1 = eos__17basic_string_ref2();
          uVar4 = uVar3 + 1;
          this->ptr[uVar3] = sVar1;
          uVar3 = uVar4;
        } while (uVar4 < this->len);
      }
      sVar1 = eos__17basic_string_ref2();
      this->ptr[uVar4] = sVar1;
    }
  }
  else {
    throwlength__17basic_string_ref2();
  }
  this->count = 1;
  return this;
}

basic_string_ref2* basic_string_ref2::basic_string_ref2(BString2 &str, unsigned int pos, unsigned int rlen) {
	BString2 *this;
	unsigned int n;
	c16 &c1;
	
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  this->len = rlen;
  this->res = rlen;
  if (rlen == 0) {
    this->ptr = (short *)0x0;
  }
  else {
    uVar3 = rlen + 1;
    this->res = uVar3;
    if (uVar3 == 0) {
      this->ptr = (short *)0x0;
    }
    else {
      psVar2 = (short *)malloc(uVar3 * 2);
      this->ptr = psVar2;
    }
    uVar3 = length__C8BString2(str);
    if (uVar3 == 0) {
      psVar2 = (short *)0x0;
    }
    else {
      psVar2 = str->reference->ptr;
    }
    memmove(this->ptr,psVar2 + pos,(long)(int)(this->len << 1));
    uVar3 = this->len;
    sVar1 = eos__17basic_string_ref2();
    this->ptr[uVar3] = sVar1;
  }
  this->count = 1;
  return this;
}

basic_string_ref2* basic_string_ref2::basic_string_ref2(c16 *s, unsigned int rlen, unsigned int rres) {
	c16 *s2;
	c16 &c1;
	
  short sVar1;
  short *__dest;
  uint uVar2;
  
  this->len = rlen;
  this->res = rres;
  if (rres == 0) {
    this->ptr = (short *)0x0;
  }
  else {
    uVar2 = rres + 1;
    this->res = uVar2;
    if (uVar2 == 0) {
      __dest = (short *)0x0;
      uVar2 = this->len;
    }
    else {
      __dest = (short *)malloc(uVar2 * 2);
      uVar2 = this->len;
    }
    this->ptr = __dest;
    if (uVar2 != 0) {
      memmove(__dest,s,(long)(int)(uVar2 << 1));
      uVar2 = this->len;
      sVar1 = eos__17basic_string_ref2();
      this->ptr[uVar2] = sVar1;
    }
  }
  this->count = 1;
  return this;
}

basic_string_ref2* basic_string_ref2::basic_string_ref2(c16 *s, unsigned int n) {
	c16 *s2;
	unsigned int n;
	c16 &c1;
	
  short sVar1;
  short *__dest;
  uint uVar2;
  
  if (n == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  this->len = n;
  this->res = n;
  if (n == 0) {
    this->ptr = (short *)0x0;
  }
  else {
    uVar2 = n + 1;
    this->res = uVar2;
    if (uVar2 == 0) {
      __dest = (short *)0x0;
      uVar2 = this->len;
    }
    else {
      __dest = (short *)malloc(uVar2 * 2);
      uVar2 = this->len;
    }
    this->ptr = __dest;
    memmove(__dest,s,(long)(int)(uVar2 << 1));
    uVar2 = this->len;
    sVar1 = eos__17basic_string_ref2();
    this->ptr[uVar2] = sVar1;
  }
  this->count = 1;
  return this;
}

basic_string_ref2* basic_string_ref2::basic_string_ref2(c16 *s) {
	c16 *s;
	c16 *s2;
	unsigned int n;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  short *__dest;
  
  if (s == (short *)0x0) {
    this->len = 0;
    this->res = 0;
  }
  else {
    uVar2 = wcslen__FPCUs(s);
    this->res = uVar2;
    this->len = uVar2;
  }
  uVar2 = this->res + 1;
  if (this->res == 0) {
    this->ptr = (short *)0x0;
  }
  else {
    this->res = uVar2;
    if (uVar2 == 0) {
      __dest = (short *)0x0;
      uVar2 = this->len;
    }
    else {
      __dest = (short *)malloc(uVar2 * 2);
      uVar2 = this->len;
    }
    this->ptr = __dest;
    memmove(__dest,s,(long)(int)(uVar2 << 1));
    uVar2 = this->len;
    sVar1 = eos__17basic_string_ref2();
    this->ptr[uVar2] = sVar1;
  }
  this->count = 1;
  return this;
}

basic_string_ref2* basic_string_ref2::basic_string_ref2(c16 c, unsigned int rep) {
	unsigned int position;
	c16 &c1;
	c16 &c1;
	
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  if (rep == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  this->len = rep;
  this->res = rep;
  if (rep == 0) {
    this->ptr = (short *)0x0;
  }
  else {
    uVar3 = rep + 1;
    this->res = uVar3;
    if (uVar3 == 0) {
      psVar2 = (short *)0x0;
    }
    else {
      psVar2 = (short *)malloc(uVar3 * 2);
    }
    this->ptr = psVar2;
    if (this->len != 0) {
      psVar2 = this->ptr;
      uVar3 = 0;
      while( true ) {
        psVar2[uVar3] = c;
        if (this->len <= uVar3 + 1) break;
        psVar2 = this->ptr;
        uVar3 = uVar3 + 1;
      }
    }
    uVar3 = this->len;
    sVar1 = eos__17basic_string_ref2();
    this->ptr[uVar3] = sVar1;
  }
  this->count = 1;
  return this;
}

void basic_string_ref2::~basic_string_ref2(int __in_chrg) {
	void *pAddress;
	
  delete_ptr__17basic_string_ref2(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

c16 BString2::eos() {
  return 0;
}

void BString2::assign_str(c16 *s, unsigned int slen) {
	basic_string_ref2 *tmp;
	c16 *s2;
	unsigned int n;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  basic_string_ref2 *pbVar3;
  short *psVar4;
  
  if (slen == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  uVar2 = ref_count__C8BString2(this);
  if (uVar2 < 2) {
    if (slen == 0) {
      pbVar3 = this->reference;
      goto LAB_0026ae34;
    }
    uVar2 = reserve__C8BString2(this);
    if (uVar2 < slen + 1) goto LAB_0026add4;
    psVar4 = point__8BString2(this);
    memmove(psVar4,s,(long)(int)(slen * 2));
    psVar4 = point__8BString2(this);
    sVar1 = eos__8BString2();
    psVar4[slen] = sVar1;
  }
  else {
LAB_0026add4:
    pbVar3 = (basic_string_ref2 *)malloc(0x10);
    pbVar3 = __17basic_string_ref2PCUsUi(pbVar3,s,slen);
    delete_ref__8BString2(this);
    this->reference = pbVar3;
  }
  pbVar3 = this->reference;
LAB_0026ae34:
  pbVar3->len = slen;
  return;
}

void BString2::append_str(c16 *s, unsigned int slen) {
	basic_string_ref2 *tmp;
	BString2 *this;
	c16 *s2;
	unsigned int n;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref2 *pbVar4;
  short *psVar5;
  
  uVar2 = length__C8BString2(this);
  if (~slen <= uVar2) {
    throwlength__17basic_string_ref2();
  }
  uVar2 = ref_count__C8BString2(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C8BString2(this);
    uVar3 = length__C8BString2(this);
    if (slen + 1 <= uVar2 - uVar3) goto LAB_0026af34;
  }
  pbVar4 = (basic_string_ref2 *)malloc(0x10);
  uVar2 = length__C8BString2(this);
  psVar5 = (short *)0x0;
  if (uVar2 != 0) {
    psVar5 = this->reference->ptr;
  }
  uVar2 = length__C8BString2(this);
  uVar3 = length__C8BString2(this);
  pbVar4 = __17basic_string_ref2PCUsUiUi(pbVar4,psVar5,uVar2,uVar3 + slen);
  delete_ref__8BString2(this);
  this->reference = pbVar4;
LAB_0026af34:
  if (slen != 0) {
    psVar5 = point__8BString2(this);
    uVar2 = length__C8BString2(this);
    memmove(psVar5 + uVar2,s,(long)(int)(slen * 2));
    psVar5 = point__8BString2(this);
    uVar2 = length__C8BString2(this);
    sVar1 = eos__8BString2();
    psVar5[uVar2 + slen] = sVar1;
  }
  this->reference->len = this->reference->len + slen;
  return;
}

void BString2::insert_str(unsigned int pos, c16 *s, unsigned int slen) {
	basic_string_ref2 *tmp;
	BString2 *this;
	BString2 *this;
	c16 &c1;
	unsigned int count;
	BString2 *this;
	c16 &c1;
	c16 &c2;
	c16 &c1;
	c16 *s2;
	unsigned int n;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref2 *pbVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  uVar2 = length__C8BString2(this);
  if (uVar2 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar2 = length__C8BString2(this);
  if (~slen <= uVar2) {
    throwlength__17basic_string_ref2();
  }
  uVar2 = ref_count__C8BString2(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C8BString2(this);
    uVar3 = length__C8BString2(this);
    if (slen + 1 <= uVar2 - uVar3) {
      uVar2 = length__C8BString2(this);
      for (iVar7 = uVar2 - pos; iVar7 != 0; iVar7 = iVar7 + -1) {
        psVar6 = point__8BString2(this);
        uVar2 = length__C8BString2(this);
        if (uVar2 == 0) {
          psVar5 = (short *)0x0;
        }
        else {
          psVar5 = this->reference->ptr;
        }
        psVar6[pos + slen + iVar7 + -1] = psVar5[pos + iVar7 + -1];
      }
      psVar6 = point__8BString2(this);
      uVar2 = length__C8BString2(this);
      sVar1 = eos__8BString2();
      psVar6[uVar2 + slen] = sVar1;
      goto LAB_0026b1c8;
    }
  }
  pbVar4 = (basic_string_ref2 *)malloc(0x10);
  uVar2 = length__C8BString2(this);
  psVar6 = (short *)0x0;
  if (uVar2 != 0) {
    psVar6 = this->reference->ptr;
  }
  uVar2 = length__C8BString2(this);
  pbVar4 = __17basic_string_ref2PCUsUiUi(pbVar4,psVar6,pos,uVar2 + slen);
  uVar2 = length__C8BString2(this);
  if (uVar2 == 0) {
    psVar6 = (short *)0x0;
  }
  else {
    psVar6 = this->reference->ptr;
  }
  uVar2 = length__C8BString2(this);
  memmove(pbVar4->ptr + pos + slen,psVar6 + pos,(long)(int)((uVar2 - pos) * 2));
  uVar2 = length__C8BString2(this);
  sVar1 = eos__8BString2();
  pbVar4->ptr[uVar2 + slen] = sVar1;
  uVar2 = length__C8BString2(this);
  pbVar4->len = uVar2;
  delete_ref__8BString2(this);
  this->reference = pbVar4;
LAB_0026b1c8:
  if (slen == 0) {
    pbVar4 = this->reference;
  }
  else {
    psVar6 = point__8BString2(this);
    memmove(psVar6 + pos,s,(long)(int)(slen * 2));
    pbVar4 = this->reference;
  }
  pbVar4->len = pbVar4->len + slen;
  return;
}

void BString2::replace_str(unsigned int xlen, unsigned int pos, c16 *s, unsigned int slen) {
	basic_string_ref2 *tmp;
	BString2 *this;
	BString2 *this;
	BString2 *this;
	unsigned int count;
	BString2 *this;
	c16 &c1;
	c16 &c2;
	c16 *s2;
	unsigned int n;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref2 *pbVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  short *s2;
  int local_ac;
  
  uVar2 = length__C8BString2(this);
  if (uVar2 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar2 = length__C8BString2(this);
  if (~slen <= uVar2 - xlen) {
    throwlength__17basic_string_ref2();
  }
  uVar2 = ref_count__C8BString2(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C8BString2(this);
    uVar3 = length__C8BString2(this);
    if ((uVar3 + slen) - (xlen - 1) <= uVar2) {
      if (slen < xlen) {
        psVar5 = point__8BString2(this);
        uVar2 = length__C8BString2(this);
        psVar6 = (short *)0x0;
        if (uVar2 != 0) {
          psVar6 = this->reference->ptr;
        }
        uVar2 = length__C8BString2(this);
        memmove(psVar5 + pos + slen,psVar6 + pos + xlen,(long)(int)(((uVar2 - pos) - xlen) * 2));
      }
      else {
        uVar2 = length__C8BString2(this);
        for (iVar7 = (uVar2 - pos) - xlen; iVar7 != 0; iVar7 = iVar7 + -1) {
          psVar6 = point__8BString2(this);
          uVar2 = length__C8BString2(this);
          if (uVar2 == 0) {
            psVar5 = (short *)0x0;
          }
          else {
            psVar5 = this->reference->ptr;
          }
          psVar6[pos + slen + iVar7 + -1] = psVar5[pos + xlen + iVar7 + -1];
        }
      }
      psVar6 = point__8BString2(this);
      uVar2 = length__C8BString2(this);
      sVar1 = eos__8BString2();
      psVar6[uVar2 + (slen - xlen)] = sVar1;
      goto LAB_0026b4dc;
    }
  }
  pbVar4 = (basic_string_ref2 *)malloc(0x10);
  uVar2 = length__C8BString2(this);
  psVar6 = (short *)0x0;
  if (uVar2 != 0) {
    psVar6 = this->reference->ptr;
  }
  uVar2 = length__C8BString2(this);
  pbVar4 = __17basic_string_ref2PCUsUiUi(pbVar4,psVar6,pos,(uVar2 + slen) - xlen);
  uVar2 = length__C8BString2(this);
  if (uVar2 == 0) {
    psVar6 = (short *)0x0;
  }
  else {
    psVar6 = this->reference->ptr;
  }
  uVar2 = length__C8BString2(this);
  memmove(pbVar4->ptr + pos + slen,psVar6 + pos + xlen,(long)(int)(((uVar2 - pos) - xlen) * 2));
  uVar2 = length__C8BString2(this);
  psVar6 = pbVar4->ptr;
  sVar1 = eos__8BString2();
  psVar6[uVar2 + (slen - xlen)] = sVar1;
  uVar2 = length__C8BString2(this);
  pbVar4->len = uVar2;
  delete_ref__8BString2(this);
  this->reference = pbVar4;
LAB_0026b4dc:
  local_ac = slen - xlen;
  if (slen == 0) {
    pbVar4 = this->reference;
  }
  else {
    psVar6 = point__8BString2(this);
    memmove(psVar6 + pos,s,(long)(int)(slen * 2));
    pbVar4 = this->reference;
  }
  pbVar4->len = pbVar4->len + local_ac;
  return;
}

int BString2::compare_str(unsigned int pos, c16 *str, unsigned int slen, unsigned int strlen) {
	unsigned int rlen;
	BString2 *this;
	c16 *s2;
	unsigned int n;
	
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  
  uVar2 = length__C8BString2(this);
  if (uVar2 < pos) {
    throwrange__17basic_string_ref2();
  }
  if (strlen < slen) {
    slen = strlen;
  }
  uVar2 = length__C8BString2(this);
  if (uVar2 == 0) {
    if (str == (short *)0x0) {
      sVar1 = eos__8BString2();
      iVar3 = (int)sVar1;
    }
    else {
      sVar1 = eos__8BString2();
      iVar3 = (int)sVar1 - (uint)(ushort)*str;
    }
  }
  else {
    uVar2 = length__C8BString2(this);
    if (uVar2 == 0) {
      psVar4 = (short *)0x0;
    }
    else {
      psVar4 = this->reference->ptr;
    }
    iVar3 = memcmp(psVar4 + pos,str,(long)(int)(slen << 1));
    if (iVar3 == 0) {
      uVar2 = length__C8BString2(this);
      iVar3 = (uVar2 - pos) - strlen;
    }
  }
  return iVar3;
}

unsigned int BString2::find_str(c16 *s, unsigned int pos, unsigned int len) {
	unsigned int count;
	unsigned int shift;
	unsigned int place;
	BString2 *this;
	c16 &c2;
	
  uint uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  uVar1 = length__C8BString2(this);
  if ((uVar1 != 0) && (len != 0)) {
    while (uVar1 = length__C8BString2(this), len <= uVar1 - pos) {
      uVar1 = 0;
      if (len != 0) {
        iVar5 = (len - 1) * 2;
        psVar4 = s + (len - 1);
        do {
          uVar2 = length__C8BString2(this);
          if (uVar2 == 0) {
            psVar3 = (short *)0x0;
          }
          else {
            psVar3 = this->reference->ptr;
          }
          if (*psVar4 != *(short *)((int)psVar3 + iVar5 + pos * 2)) break;
          uVar1 = uVar1 + 1;
          psVar4 = psVar4 + -1;
          iVar5 = iVar5 + -2;
        } while (uVar1 < len);
      }
      if (uVar1 == len) {
        return pos;
      }
      uVar2 = find__C8BString2UsUi(this,s[len + (-1 - uVar1)],pos + (len - uVar1));
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      pos = (uVar2 + 1) - (len - uVar1);
    }
  }
  return 0xffffffff;
}

unsigned int BString2::rfind_str(c16 *s, unsigned int pos, unsigned int len) {
	unsigned int count;
	unsigned int shift;
	unsigned int place;
	BString2 *this;
	c16 &c2;
	
  uint uVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  uVar1 = length__C8BString2(this);
  iVar6 = pos + 1;
  if (uVar1 - len <= pos) {
    uVar1 = length__C8BString2(this);
    iVar6 = uVar1 - len;
  }
  uVar1 = length__C8BString2(this);
  if ((len <= uVar1) && (len != 0)) {
    while (iVar6 != 0) {
      uVar1 = 0;
      if (len != 0) {
        iVar4 = len << 1;
        psVar5 = s + (len - 1);
        do {
          uVar2 = length__C8BString2(this);
          if (uVar2 == 0) {
            psVar3 = (short *)0x0;
          }
          else {
            psVar3 = this->reference->ptr;
          }
          if (*psVar5 != *(short *)((int)psVar3 + iVar4 + iVar6 * 2 + -4)) break;
          uVar1 = uVar1 + 1;
          psVar5 = psVar5 + -1;
          iVar4 = iVar4 + -2;
        } while (uVar1 < len);
      }
      if (uVar1 == len) {
        return iVar6 - 1;
      }
      uVar2 = rfind__C8BString2UsUi(this,s[len + (-1 - uVar1)],(iVar6 + (len - uVar1)) - 3);
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      iVar6 = ((uVar2 + uVar1) - len) + 2;
    }
  }
  return 0xffffffff;
}

unsigned int BString2::find_first_of_str(c16 *s, unsigned int pos, unsigned int len) {
	unsigned int temp;
	unsigned int count;
	unsigned int result;
	BString2 *this;
	c16 &c1;
	
  short *psVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  while( true ) {
    uVar2 = length__C8BString2(this);
    uVar3 = 0;
    psVar4 = s;
    if (uVar2 <= pos) break;
    for (; uVar3 < len; uVar3 = uVar3 + 1) {
      uVar2 = length__C8BString2(this);
      if (uVar2 == 0) {
        psVar1 = (short *)0x0;
      }
      else {
        psVar1 = this->reference->ptr;
      }
      if (psVar1[pos] == *psVar4) break;
      psVar4 = psVar4 + 1;
    }
    if (uVar3 != len) break;
    pos = pos + 1;
  }
  uVar3 = length__C8BString2(this);
  uVar2 = 0xffffffff;
  if (pos < uVar3) {
    uVar2 = pos;
  }
  if (uVar2 == 0xffffffff) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

unsigned int BString2::find_last_of_str(c16 *s, unsigned int pos, unsigned int len) {
	unsigned int temp;
	unsigned int count;
	BString2 *this;
	c16 &c1;
	
  uint uVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = length__C8BString2(this);
  uVar4 = pos + 1;
  if (uVar1 <= pos) {
    uVar4 = length__C8BString2(this);
  }
  uVar1 = length__C8BString2(this);
  if (uVar1 == 0) {
LAB_0026bae8:
    if (uVar5 != len) {
LAB_0026baf0:
      uVar5 = length__C8BString2(this);
      if (uVar5 != 0) {
        return uVar4;
      }
    }
    return 0xffffffff;
  }
  do {
    if (uVar4 == 0) goto LAB_0026bae8;
    uVar4 = uVar4 - 1;
    psVar3 = s;
    for (uVar5 = 0; uVar5 != len; uVar5 = uVar5 + 1) {
      uVar1 = length__C8BString2(this);
      if (uVar1 == 0) {
        psVar2 = (short *)0x0;
      }
      else {
        psVar2 = this->reference->ptr;
      }
      if (psVar2[uVar4] == *psVar3) {
        if (uVar5 != len) goto LAB_0026baf0;
        break;
      }
      psVar3 = psVar3 + 1;
    }
  } while( true );
}

unsigned int BString2::find_first_not_of_str(c16 *s, unsigned int pos, unsigned int len) {
	unsigned int count;
	unsigned int temp;
	BString2 *this;
	c16 &c1;
	
  short *psVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  while( true ) {
    uVar2 = length__C8BString2(this);
    uVar3 = 0;
    psVar4 = s;
    if (uVar2 <= pos) break;
    for (; uVar3 < len; uVar3 = uVar3 + 1) {
      uVar2 = length__C8BString2(this);
      if (uVar2 == 0) {
        psVar1 = (short *)0x0;
      }
      else {
        psVar1 = this->reference->ptr;
      }
      if (psVar1[pos] == *psVar4) break;
      psVar4 = psVar4 + 1;
    }
    if (uVar3 == len) break;
    pos = pos + 1;
  }
  uVar3 = length__C8BString2(this);
  uVar2 = 0xffffffff;
  if (pos < uVar3) {
    uVar2 = pos;
  }
  return uVar2;
}

unsigned int BString2::find_last_not_of_str(c16 *s, unsigned int pos, unsigned int len) {
	unsigned int temp;
	unsigned int count;
	BString2 *this;
	c16 &c1;
	c16 &c2;
	
  uint uVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = length__C8BString2(this);
  uVar4 = pos + 1;
  if (uVar1 <= pos) {
    uVar4 = length__C8BString2(this);
  }
  uVar2 = length__C8BString2(this);
  uVar1 = uVar4;
  if (uVar2 == 0) {
LAB_0026bce8:
    if (uVar5 != len) {
      return 0xffffffff;
    }
  }
  else {
    do {
      uVar4 = uVar1;
      if (uVar4 == 0) goto LAB_0026bce8;
      uVar5 = 0;
      while( true ) {
        if (uVar5 == len) goto LAB_0026bcf0;
        uVar1 = length__C8BString2(this);
        if (uVar1 == 0) {
          psVar3 = (short *)0x0;
        }
        else {
          psVar3 = this->reference->ptr;
        }
        if (psVar3[uVar4 - 1] == s[uVar5]) break;
        uVar5 = uVar5 + 1;
      }
      uVar1 = uVar4 - 1;
    } while (uVar5 != len);
  }
LAB_0026bcf0:
  uVar5 = length__C8BString2(this);
  if (uVar5 == 0) {
    return 0xffffffff;
  }
  return uVar4 - 1;
}

BString2* BString2::BString2() {
  this->reference = &_8BString2_defaultReference;
  _8BString2_defaultReference.count = _8BString2_defaultReference.count + 1;
  return this;
}

BString2* BString2::BString2(unsigned int size, capacity cap) {
  basic_string_ref2 *pbVar1;
  
  pbVar1 = (basic_string_ref2 *)malloc(0x10);
  pbVar1 = __17basic_string_ref2UiQ28BString28capacity(pbVar1,size,cap);
  this->reference = pbVar1;
  return this;
}

BString2* BString2::BString2(BString2 &str, unsigned int pos, unsigned int n) {
	unsigned int rlen;
	
  uint uVar1;
  basic_string_ref2 *pbVar2;
  
  uVar1 = length__C8BString2(str);
  if (uVar1 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = length__C8BString2(str);
  if (uVar1 - pos < n) {
    uVar1 = length__C8BString2(str);
    n = uVar1 - pos;
  }
  uVar1 = length__C8BString2(str);
  if ((n == uVar1) && (uVar1 = ref_count__C8BString2(str), uVar1 != 0xffffffff)) {
    pbVar2 = str->reference;
    this->reference = pbVar2;
    pbVar2->count = pbVar2->count + 1;
  }
  else {
    pbVar2 = (basic_string_ref2 *)malloc(0x10);
    pbVar2 = __17basic_string_ref2RC8BString2UiUi(pbVar2,str,pos,n);
    this->reference = pbVar2;
  }
  return this;
}

BString2* BString2::BString2(c16 *s, unsigned int rlen, unsigned int xlen) {
  basic_string_ref2 *pbVar1;
  
  if (~xlen <= rlen) {
    throwlength__17basic_string_ref2();
  }
  pbVar1 = (basic_string_ref2 *)malloc(0x10);
  pbVar1 = __17basic_string_ref2PCUsUiUi(pbVar1,s,rlen,rlen + xlen);
  this->reference = pbVar1;
  return this;
}

BString2* BString2::BString2(c16 *s, unsigned int n) {
  basic_string_ref2 *pbVar1;
  
  pbVar1 = (basic_string_ref2 *)malloc(0x10);
  pbVar1 = __17basic_string_ref2PCUsUi(pbVar1,s,n);
  this->reference = pbVar1;
  return this;
}

BString2* BString2::BString2(c16 *s) {
  basic_string_ref2 *pbVar1;
  
  pbVar1 = (basic_string_ref2 *)malloc(0x10);
  pbVar1 = __17basic_string_ref2PCUs(pbVar1,s);
  this->reference = pbVar1;
  return this;
}

BString2* BString2::BString2(c16 c, unsigned int rep) {
  basic_string_ref2 *pbVar1;
  
  pbVar1 = (basic_string_ref2 *)malloc(0x10);
  pbVar1 = __17basic_string_ref2UsUi(pbVar1,c,rep);
  this->reference = pbVar1;
  return this;
}

void BString2::~BString2(int __in_chrg) {
	void *pAddress;
	
  delete_ref__8BString2(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

BString2& BString2::operator=(BString2 &str) {
  uint uVar1;
  basic_string_ref2 *pbVar2;
  
  if (this != str) {
    delete_ref__8BString2(this);
    uVar1 = ref_count__C8BString2(str);
    if (uVar1 == 0xffffffff) {
      pbVar2 = (basic_string_ref2 *)malloc(0x10);
      uVar1 = length__C8BString2(str);
      pbVar2 = __17basic_string_ref2RC8BString2UiUi(pbVar2,str,0,uVar1);
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

BString2& BString2::operator=(c16 *s) {
	c16 *s;
	
  uint slen;
  
  if (s == (short *)0x0) {
    slen = 0;
  }
  else {
    slen = wcslen__FPCUs(s);
  }
  assign_str__8BString2PCUsUi(this,s,slen);
  return this;
}

BString2& BString2::operator=(c16 c) {
  short sVar1;
  uint uVar2;
  short *psVar3;
  basic_string_ref2 *pbVar4;
  
  uVar2 = ref_count__C8BString2(this);
  if ((uVar2 == 1) && (uVar2 = reserve__C8BString2(this), 1 < uVar2)) {
    psVar3 = point__8BString2(this);
    *psVar3 = c;
    psVar3 = point__8BString2(this);
    sVar1 = eos__8BString2();
    psVar3[1] = sVar1;
    this->reference->len = 1;
  }
  else {
    delete_ref__8BString2(this);
    pbVar4 = (basic_string_ref2 *)malloc(0x10);
    pbVar4 = __17basic_string_ref2UsUi(pbVar4,c,1);
    this->reference = pbVar4;
  }
  return this;
}

BString2& BString2::operator+=(BString2 &rhs) {
	BString2 *this;
	
  uint uVar1;
  short *s;
  
  uVar1 = length__C8BString2(rhs);
  s = (short *)0x0;
  if (uVar1 != 0) {
    s = rhs->reference->ptr;
  }
  uVar1 = length__C8BString2(rhs);
  append_str__8BString2PCUsUi(this,s,uVar1);
  return this;
}

BString2& BString2::operator+=(c16 *s) {
	c16 *s;
	
  uint slen;
  
  if (s == (short *)0x0) {
    slen = 0;
  }
  else {
    slen = wcslen__FPCUs(s);
  }
  append_str__8BString2PCUsUi(this,s,slen);
  return this;
}

BString2& BString2::operator+=(c16 c) {
	basic_string_ref2 *tmp;
	BString2 *this;
	c16 &c1;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref2 *pbVar4;
  short *psVar5;
  
  uVar2 = length__C8BString2(this);
  if (0xfffffffd < uVar2) {
    throwlength__17basic_string_ref2();
  }
  uVar2 = ref_count__C8BString2(this);
  if (uVar2 == 1) {
    uVar2 = reserve__C8BString2(this);
    uVar3 = length__C8BString2(this);
    if (uVar3 + 1 < uVar2) goto LAB_0026c394;
  }
  pbVar4 = (basic_string_ref2 *)malloc(0x10);
  uVar2 = length__C8BString2(this);
  if (uVar2 == 0) {
    psVar5 = (short *)0x0;
  }
  else {
    psVar5 = this->reference->ptr;
  }
  uVar2 = length__C8BString2(this);
  uVar3 = length__C8BString2(this);
  pbVar4 = __17basic_string_ref2PCUsUiUi(pbVar4,psVar5,uVar2,uVar3 + 1);
  delete_ref__8BString2(this);
  this->reference = pbVar4;
LAB_0026c394:
  psVar5 = point__8BString2(this);
  uVar2 = length__C8BString2(this);
  psVar5[uVar2] = c;
  psVar5 = point__8BString2(this);
  uVar2 = length__C8BString2(this);
  sVar1 = eos__8BString2();
  psVar5[uVar2 + 1] = sVar1;
  this->reference->len = this->reference->len + 1;
  return this;
}

BString2& BString2::append(BString2 &str, unsigned int pos, unsigned int n) {
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  
  uVar1 = length__C8BString2(str);
  if (uVar1 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = length__C8BString2(str);
  psVar2 = (short *)0x0;
  if (uVar1 != 0) {
    psVar2 = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  if (uVar1 - pos < n) {
    uVar1 = length__C8BString2(str);
    n = uVar1 - pos;
  }
  append_str__8BString2PCUsUi(this,psVar2 + pos,n);
  return this;
}

BString2& BString2::append(c16 *s, unsigned int n) {
  append_str__8BString2PCUsUi(this,s,n);
  return this;
}

BString2& BString2::append(c16 *s) {
	c16 *s;
	
  uint slen;
  
  if (s == (short *)0x0) {
    slen = 0;
  }
  else {
    slen = wcslen__FPCUs(s);
  }
  append_str__8BString2PCUsUi(this,s,slen);
  return this;
}

BString2& BString2::append(c16 c, unsigned int rep) {
	basic_string_ref2 *tmp;
	BString2 *this;
	unsigned int count;
	c16 &c1;
	c16 &c1;
	
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  basic_string_ref2 *pbVar5;
  short *psVar6;
  
  uVar3 = length__C8BString2(this);
  if (~rep <= uVar3) {
    throwlength__17basic_string_ref2();
  }
  if (rep == 0) {
    return this;
  }
  uVar3 = ref_count__C8BString2(this);
  if (uVar3 < 2) {
    uVar3 = reserve__C8BString2(this);
    uVar4 = length__C8BString2(this);
    if (uVar4 + rep + 1 <= uVar3) goto LAB_0026c638;
  }
  pbVar5 = (basic_string_ref2 *)malloc(0x10);
  uVar3 = length__C8BString2(this);
  psVar6 = (short *)0x0;
  if (uVar3 != 0) {
    psVar6 = this->reference->ptr;
  }
  uVar3 = length__C8BString2(this);
  uVar4 = length__C8BString2(this);
  pbVar5 = __17basic_string_ref2PCUsUiUi(pbVar5,psVar6,uVar3,uVar4 + rep);
  delete_ref__8BString2(this);
  this->reference = pbVar5;
LAB_0026c638:
  uVar3 = 0;
  if (rep != 0) {
    do {
      psVar6 = point__8BString2(this);
      uVar4 = length__C8BString2(this);
      iVar1 = uVar4 + uVar3;
      uVar3 = uVar3 + 1;
      psVar6[iVar1] = c;
    } while (uVar3 < rep);
  }
  psVar6 = point__8BString2(this);
  uVar3 = length__C8BString2(this);
  sVar2 = eos__8BString2();
  psVar6[uVar3 + rep] = sVar2;
  this->reference->len = this->reference->len + rep;
  return this;
}

BString2& BString2::assign(BString2 &str, unsigned int pos, unsigned int n) {
	unsigned int rlen;
	BString2 *this;
	
  basic_string_ref2 *pbVar1;
  uint uVar2;
  short *psVar3;
  
  uVar2 = length__C8BString2(str);
  if (uVar2 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar2 = length__C8BString2(str);
  if (uVar2 - pos < n) {
    uVar2 = length__C8BString2(str);
    n = uVar2 - pos;
  }
  uVar2 = length__C8BString2(str);
  if ((n == uVar2) && (uVar2 = ref_count__C8BString2(str), uVar2 != 0xffffffff)) {
    delete_ref__8BString2(this);
    pbVar1 = str->reference;
    this->reference = pbVar1;
    pbVar1->count = pbVar1->count + 1;
  }
  else {
    uVar2 = length__C8BString2(str);
    if (uVar2 == 0) {
      psVar3 = (short *)0x0;
    }
    else {
      psVar3 = str->reference->ptr;
    }
    assign_str__8BString2PCUsUi(this,psVar3 + pos,n);
  }
  return this;
}

BString2& BString2::assign(c16 *s, unsigned int n) {
  assign_str__8BString2PCUsUi(this,s,n);
  return this;
}

BString2& BString2::assign(c16 *s) {
	c16 *s;
	
  uint slen;
  
  if (s == (short *)0x0) {
    slen = 0;
  }
  else {
    slen = wcslen__FPCUs(s);
  }
  assign_str__8BString2PCUsUi(this,s,slen);
  return this;
}

BString2& BString2::assign(c16 c, unsigned int rep) {
	basic_string_ref2 *tmp;
	unsigned int count;
	c16 &c1;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  basic_string_ref2 *pbVar3;
  short *psVar4;
  
  if (rep == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  uVar2 = ref_count__C8BString2(this);
  if ((uVar2 < 2) && ((rep == 0 || (uVar2 = reserve__C8BString2(this), rep + 1 <= uVar2)))) {
    uVar2 = 0;
    if (rep != 0) {
      do {
        psVar4 = point__8BString2(this);
        psVar4 = psVar4 + uVar2;
        uVar2 = uVar2 + 1;
        *psVar4 = c;
      } while (uVar2 < rep);
    }
    psVar4 = point__8BString2(this);
    sVar1 = eos__8BString2();
    psVar4[rep] = sVar1;
    this->reference->len = rep;
  }
  else {
    pbVar3 = (basic_string_ref2 *)malloc(0x10);
    pbVar3 = __17basic_string_ref2UsUi(pbVar3,c,rep);
    delete_ref__8BString2(this);
    this->reference = pbVar3;
  }
  return this;
}

BString2& BString2::insert(unsigned int pos1, BString2 &str, unsigned int pos2, unsigned int n) {
	unsigned int rlen;
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  
  uVar1 = length__C8BString2(str);
  if (uVar1 < pos2) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = length__C8BString2(str);
  if (uVar1 - pos2 < n) {
    uVar1 = length__C8BString2(str);
    n = uVar1 - pos2;
  }
  uVar1 = length__C8BString2(str);
  if (uVar1 == 0) {
    psVar2 = (short *)0x0;
  }
  else {
    psVar2 = str->reference->ptr;
  }
  insert_str__8BString2UiPCUsUi(this,pos1,psVar2 + pos2,n);
  return this;
}

BString2& BString2::insert(unsigned int pos, c16 *s, unsigned int n) {
  insert_str__8BString2UiPCUsUi(this,pos,s,n);
  return this;
}

BString2& BString2::insert(unsigned int pos, c16 *s) {
	c16 *s;
	
  uint slen;
  
  if (s == (short *)0x0) {
    slen = 0;
  }
  else {
    slen = wcslen__FPCUs(s);
  }
  insert_str__8BString2UiPCUsUi(this,pos,s,slen);
  return this;
}

BString2& BString2::insert(unsigned int pos, c16 c, unsigned int rep) {
	unsigned int count;
	basic_string_ref2 *tmp;
	BString2 *this;
	BString2 *this;
	c16 &c1;
	c16 &c2;
	c16 &c1;
	BString2 *this;
	c16 &c1;
	c16 &c2;
	c16 &c1;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  basic_string_ref2 *pbVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  uVar2 = length__C8BString2(this);
  if (uVar2 < pos) {
    throwrange__17basic_string_ref2();
  }
  if ((rep == 0xffffffff) || (uVar2 = length__C8BString2(this), ~rep <= uVar2)) {
    throwlength__17basic_string_ref2();
  }
  if (rep == 0) {
    return this;
  }
  uVar2 = ref_count__C8BString2(this);
  if (uVar2 < 2) {
    uVar2 = reserve__C8BString2(this);
    uVar3 = length__C8BString2(this);
    if (uVar3 + rep + 1 <= uVar2) {
      uVar2 = length__C8BString2(this);
      for (iVar7 = uVar2 - pos; iVar7 != 0; iVar7 = iVar7 + -1) {
        psVar6 = point__8BString2(this);
        uVar2 = length__C8BString2(this);
        if (uVar2 == 0) {
          psVar5 = (short *)0x0;
        }
        else {
          psVar5 = this->reference->ptr;
        }
        psVar6[pos + rep + iVar7 + -1] = psVar5[pos + iVar7 + -1];
      }
      psVar6 = point__8BString2(this);
      uVar2 = length__C8BString2(this);
      sVar1 = eos__8BString2();
      psVar6[rep + uVar2] = sVar1;
      goto LAB_0026cd00;
    }
  }
  pbVar4 = (basic_string_ref2 *)malloc(0x10);
  uVar2 = length__C8BString2(this);
  psVar6 = (short *)0x0;
  if (uVar2 != 0) {
    psVar6 = this->reference->ptr;
  }
  uVar2 = length__C8BString2(this);
  pbVar4 = __17basic_string_ref2PCUsUiUi(pbVar4,psVar6,pos,uVar2 + rep);
  uVar2 = length__C8BString2(this);
  if (uVar2 != 0) {
    uVar2 = length__C8BString2(this);
    for (iVar7 = uVar2 - pos; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar2 = length__C8BString2(this);
      psVar6 = (short *)0x0;
      if (uVar2 != 0) {
        psVar6 = this->reference->ptr;
      }
      pbVar4->ptr[pos + rep + iVar7 + -1] = psVar6[pos + iVar7 + -1];
    }
  }
  uVar2 = length__C8BString2(this);
  sVar1 = eos__8BString2();
  pbVar4->ptr[uVar2 + rep] = sVar1;
  uVar2 = length__C8BString2(this);
  pbVar4->len = uVar2;
  delete_ref__8BString2(this);
  this->reference = pbVar4;
LAB_0026cd00:
  uVar2 = 0;
  if (rep != 0) {
    do {
      psVar6 = point__8BString2(this);
      iVar7 = pos + uVar2;
      uVar2 = uVar2 + 1;
      psVar6[iVar7] = c;
    } while (uVar2 < rep);
  }
  this->reference->len = this->reference->len + rep;
  return this;
}

BString2& BString2::erase(unsigned int pos, unsigned int n) {
	unsigned int xlen;
	basic_string_ref2 *tmp;
	BString2 *this;
	BString2 *this;
	BString2 *this;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  basic_string_ref2 *pbVar3;
  short *psVar4;
  short *psVar5;
  
  uVar2 = length__C8BString2(this);
  if (uVar2 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar2 = length__C8BString2(this);
  if (uVar2 - pos < n) {
    uVar2 = length__C8BString2(this);
    n = uVar2 - pos;
  }
  uVar2 = ref_count__C8BString2(this);
  if (uVar2 < 2) {
    uVar2 = length__C8BString2(this);
    if (n == uVar2) {
      this->reference->len = 0;
    }
    else if (n != 0) {
      psVar4 = point__8BString2(this);
      uVar2 = length__C8BString2(this);
      psVar5 = (short *)0x0;
      if (uVar2 != 0) {
        psVar5 = this->reference->ptr;
      }
      uVar2 = length__C8BString2(this);
      memmove(psVar4 + pos,psVar5 + pos + n,(long)(int)(((uVar2 - n) - pos) * 2));
      this->reference->len = this->reference->len - n;
    }
  }
  else {
    pbVar3 = (basic_string_ref2 *)malloc(0x10);
    uVar2 = length__C8BString2(this);
    psVar5 = (short *)0x0;
    if (uVar2 != 0) {
      psVar5 = this->reference->ptr;
    }
    uVar2 = length__C8BString2(this);
    pbVar3 = __17basic_string_ref2PCUsUiUi(pbVar3,psVar5,pos,uVar2);
    uVar2 = length__C8BString2(this);
    psVar5 = (short *)0x0;
    if (uVar2 != 0) {
      psVar5 = this->reference->ptr;
    }
    uVar2 = length__C8BString2(this);
    memmove(pbVar3->ptr + pos,psVar5 + pos + n,(long)(int)(((uVar2 - n) - pos) * 2));
    uVar2 = length__C8BString2(this);
    pbVar3->len = uVar2 - n;
    delete_ref__8BString2(this);
    this->reference = pbVar3;
  }
  psVar5 = point__8BString2(this);
  if (psVar5 != (short *)0x0) {
    psVar5 = point__8BString2(this);
    uVar2 = length__C8BString2(this);
    sVar1 = eos__8BString2();
    psVar5[uVar2] = sVar1;
  }
  return this;
}

BString2& BString2::replace(unsigned int pos1, unsigned int n1, BString2 &str, unsigned int pos2, unsigned int n2) {
	unsigned int xlen;
	unsigned int rlen;
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  
  uVar1 = length__C8BString2(str);
  if (uVar1 < pos2) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = length__C8BString2(this);
  if (uVar1 - pos1 < n1) {
    uVar1 = length__C8BString2(this);
    n1 = uVar1 - pos1;
  }
  uVar1 = length__C8BString2(str);
  if (uVar1 - pos2 < n2) {
    uVar1 = length__C8BString2(str);
    n2 = uVar1 - pos2;
  }
  uVar1 = length__C8BString2(str);
  if (uVar1 == 0) {
    psVar2 = (short *)0x0;
  }
  else {
    psVar2 = str->reference->ptr;
  }
  replace_str__8BString2UiUiPCUsUi(this,n1,pos1,psVar2 + pos2,n2);
  return this;
}

BString2& BString2::replace(unsigned int pos, unsigned int n1, c16 *s, unsigned int n2) {
	unsigned int xlen;
	
  uint uVar1;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 - pos < n1) {
    uVar1 = length__C8BString2(this);
    n1 = uVar1 - pos;
  }
  replace_str__8BString2UiUiPCUsUi(this,n1,pos,s,n2);
  return this;
}

BString2& BString2::replace(unsigned int pos, unsigned int n1, c16 *s) {
	unsigned int xlen;
	c16 *s;
	
  uint uVar1;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 - pos < n1) {
    uVar1 = length__C8BString2(this);
    n1 = uVar1 - pos;
  }
  uVar1 = 0;
  if (s != (short *)0x0) {
    uVar1 = wcslen__FPCUs(s);
  }
  replace_str__8BString2UiUiPCUsUi(this,n1,pos,s,uVar1);
  return this;
}

BString2& BString2::replace(unsigned int pos, unsigned int n, c16 c, unsigned int rep) {
	unsigned int xlen;
	unsigned int count;
	basic_string_ref2 *tmp;
	BString2 *this;
	BString2 *this;
	BString2 *this;
	c16 &c1;
	c16 &c2;
	BString2 *this;
	BString2 *this;
	c16 &c1;
	c16 &c2;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  BString2 *pBVar4;
  uint uVar5;
  basic_string_ref2 *pbVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int local_ac;
  
  uVar2 = length__C8BString2(this);
  if (uVar2 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar3 = length__C8BString2(this);
  uVar2 = n;
  if (uVar3 - pos < n) {
    uVar2 = length__C8BString2(this);
    uVar2 = uVar2 - pos;
  }
  uVar3 = length__C8BString2(this);
  if (~rep <= uVar3 - uVar2) {
    throwlength__17basic_string_ref2();
  }
  if (rep == 0) {
    pBVar4 = erase__8BString2UiUi(this,pos,n);
    return pBVar4;
  }
  uVar3 = ref_count__C8BString2(this);
  if (uVar3 < 2) {
    uVar3 = reserve__C8BString2(this);
    uVar5 = length__C8BString2(this);
    if ((uVar5 - uVar2) + rep + 1 <= uVar3) {
      if (rep < uVar2) {
        psVar7 = point__8BString2(this);
        uVar3 = length__C8BString2(this);
        psVar8 = (short *)0x0;
        if (uVar3 != 0) {
          psVar8 = this->reference->ptr;
        }
        uVar3 = length__C8BString2(this);
        memmove(psVar7 + pos + rep,psVar8 + pos + uVar2,(long)(int)(((uVar3 - pos) - uVar2) * 2));
      }
      else {
        uVar3 = length__C8BString2(this);
        for (iVar9 = (uVar3 - uVar2) - pos; iVar9 != 0; iVar9 = iVar9 + -1) {
          psVar8 = point__8BString2(this);
          uVar3 = length__C8BString2(this);
          if (uVar3 == 0) {
            psVar7 = (short *)0x0;
          }
          else {
            psVar7 = this->reference->ptr;
          }
          psVar8[pos + rep + iVar9 + -1] = psVar7[pos + uVar2 + iVar9 + -1];
        }
      }
      psVar8 = point__8BString2(this);
      uVar3 = length__C8BString2(this);
      sVar1 = eos__8BString2();
      psVar8[rep + (uVar3 - uVar2)] = sVar1;
      goto LAB_0026d51c;
    }
  }
  pbVar6 = (basic_string_ref2 *)malloc(0x10);
  uVar3 = length__C8BString2(this);
  psVar8 = (short *)0x0;
  if (uVar3 != 0) {
    psVar8 = this->reference->ptr;
  }
  uVar3 = length__C8BString2(this);
  if (uVar2 > rep) {
    uVar3 = uVar3 + (uVar2 - rep);
  }
  pbVar6 = __17basic_string_ref2PCUsUiUi(pbVar6,psVar8,pos,uVar3);
  if (uVar2 <= rep) {
    uVar3 = length__C8BString2(this);
    for (iVar9 = (uVar3 - uVar2) - pos; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar3 = length__C8BString2(this);
      if (uVar3 == 0) {
        psVar8 = (short *)0x0;
      }
      else {
        psVar8 = this->reference->ptr;
      }
      pbVar6->ptr[pos + rep + iVar9 + -1] = psVar8[pos + uVar2 + iVar9 + -1];
    }
  }
  else {
    uVar3 = length__C8BString2(this);
    psVar8 = (short *)0x0;
    if (uVar3 != 0) {
      psVar8 = this->reference->ptr;
    }
    uVar3 = length__C8BString2(this);
    memmove(pbVar6->ptr + pos + rep,psVar8 + pos + uVar2,(long)(int)(((uVar3 - pos) - uVar2) * 2));
  }
  uVar3 = length__C8BString2(this);
  psVar8 = pbVar6->ptr;
  sVar1 = eos__8BString2();
  psVar8[rep + (uVar3 - uVar2)] = sVar1;
  uVar3 = length__C8BString2(this);
  pbVar6->len = uVar3;
  delete_ref__8BString2(this);
  this->reference = pbVar6;
LAB_0026d51c:
  local_ac = rep - uVar2;
  uVar2 = 0;
  if (rep != 0) {
    do {
      psVar8 = point__8BString2(this);
      iVar9 = pos + uVar2;
      uVar2 = uVar2 + 1;
      psVar8[iVar9] = c;
    } while (uVar2 < rep);
  }
  this->reference->len = this->reference->len + local_ac;
  return this;
}

void BString2::put_at(unsigned int pos, c16 c) {
	basic_string_ref2 *tmp;
	BString2 *this;
	c16 &c1;
	
  uint uVar1;
  basic_string_ref2 *pbVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = ref_count__C8BString2(this);
  if ((1 < uVar1) || (uVar1 = reserve__C8BString2(this), pos + 1 == uVar1)) {
    pbVar2 = (basic_string_ref2 *)malloc(0x10);
    uVar1 = length__C8BString2(this);
    psVar5 = (short *)0x0;
    if (uVar1 != 0) {
      psVar5 = this->reference->ptr;
    }
    uVar1 = length__C8BString2(this);
    uVar3 = length__C8BString2(this);
    uVar4 = length__C8BString2(this);
    pbVar2 = __17basic_string_ref2PCUsUiUi(pbVar2,psVar5,uVar1,uVar3 + (pos == uVar4));
    delete_ref__8BString2(this);
    this->reference = pbVar2;
  }
  uVar1 = length__C8BString2(this);
  if (pos == uVar1) {
    this->reference->len = this->reference->len + 1;
  }
  psVar5 = point__8BString2(this);
  psVar5[pos] = c;
  return;
}

c16& BString2::operator[](unsigned int pos) {
	basic_string_ref2 *tmp;
	BString2 *this;
	
  uint uVar1;
  basic_string_ref2 *pbVar2;
  uint rres;
  short *psVar3;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 <= pos) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = ref_count__C8BString2(this);
  if (1 < uVar1) {
    pbVar2 = (basic_string_ref2 *)malloc(0x10);
    uVar1 = length__C8BString2(this);
    psVar3 = (short *)0x0;
    if (uVar1 != 0) {
      psVar3 = this->reference->ptr;
    }
    uVar1 = length__C8BString2(this);
    rres = length__C8BString2(this);
    pbVar2 = __17basic_string_ref2PCUsUiUi(pbVar2,psVar3,uVar1,rres);
    delete_ref__8BString2(this);
    this->reference = pbVar2;
  }
  psVar3 = point__8BString2(this);
  return psVar3 + pos;
}

c16* BString2::c_str() {
	c16 *result;
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 == 0) {
    psVar2 = (short *)0x0;
  }
  else {
    psVar2 = this->reference->ptr;
  }
  if (psVar2 == (short *)0x0) {
    psVar2 = (short *)&DAT_003bebd0;
  }
  return psVar2;
}

void BString2::resize(unsigned int n, c16 c) {
	basic_string_ref2 *tmp;
	BString2 *this;
	c16 &c1;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  basic_string_ref2 *pbVar3;
  uint uVar4;
  short *s;
  
  if (n == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  uVar2 = ref_count__C8BString2(this);
  if ((uVar2 < 2) && (uVar2 = reserve__C8BString2(this), n + 1 <= uVar2)) {
    pbVar3 = this->reference;
    goto LAB_0026d8f4;
  }
  pbVar3 = (basic_string_ref2 *)malloc(0x10);
  uVar2 = length__C8BString2(this);
  s = (short *)0x0;
  if (uVar2 != 0) {
    s = this->reference->ptr;
  }
  uVar4 = length__C8BString2(this);
  uVar2 = n;
  if (uVar4 < n) {
    uVar2 = length__C8BString2(this);
  }
  pbVar3 = __17basic_string_ref2PCUsUiUi(pbVar3,s,uVar2,n);
  delete_ref__8BString2(this);
  this->reference = pbVar3;
  while( true ) {
    pbVar3 = this->reference;
LAB_0026d8f4:
    if (n <= pbVar3->len) break;
    uVar2 = length__C8BString2(this);
    this->reference->ptr[uVar2] = c;
    this->reference->len = this->reference->len + 1;
  }
  this->reference->len = n;
  uVar2 = length__C8BString2(this);
  pbVar3 = this->reference;
  sVar1 = eos__8BString2();
  pbVar3->ptr[uVar2] = sVar1;
  return;
}

void BString2::resize(unsigned int n) {
  short c;
  
  c = eos__8BString2();
  resize__8BString2UiUs(this,n,c);
  return;
}

void BString2::reserve(unsigned int res_arg) {
	basic_string_ref2 *tmp;
	BString2 *this;
	
  uint uVar1;
  basic_string_ref2 *pbVar2;
  short *s;
  
  if (res_arg == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  uVar1 = reserve__C8BString2(this);
  if (uVar1 < res_arg + 1) {
    pbVar2 = (basic_string_ref2 *)malloc(0x10);
    uVar1 = length__C8BString2(this);
    s = (short *)0x0;
    if (uVar1 != 0) {
      s = this->reference->ptr;
    }
    uVar1 = length__C8BString2(this);
    pbVar2 = __17basic_string_ref2PCUsUiUi(pbVar2,s,uVar1,res_arg);
    delete_ref__8BString2(this);
    this->reference = pbVar2;
  }
  return;
}

unsigned int BString2::copy(c16 *s, unsigned int n, unsigned int pos) {
	unsigned int rlen;
	BString2 *this;
	c16 *s1;
	unsigned int n;
	
  uint uVar1;
  short *psVar2;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 < pos) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = length__C8BString2(this);
  if (uVar1 - pos < n) {
    uVar1 = length__C8BString2(this);
    n = uVar1 - pos;
  }
  uVar1 = length__C8BString2(this);
  if (uVar1 != 0) {
    uVar1 = length__C8BString2(this);
    if (uVar1 == 0) {
      psVar2 = (short *)0x0;
    }
    else {
      psVar2 = this->reference->ptr;
    }
    memmove(s,psVar2 + pos,(long)(int)(n << 1));
  }
  return n;
}

unsigned int BString2::find(BString2 &str, unsigned int pos) {
	BString2 *this;
	
  uint uVar1;
  short *s;
  
  uVar1 = length__C8BString2(str);
  s = (short *)0x0;
  if (uVar1 != 0) {
    s = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  uVar1 = find_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find(c16 *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_str__C8BString2PCUsUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString2::find(c16 *s, unsigned int pos) {
	c16 *s;
	
  uint uVar1;
  
  if (s == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs(s);
  }
  uVar1 = find_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find(c16 c, unsigned int pos) {
	BString2 *this;
	c16 &c1;
	
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  for (; uVar1 = length__C8BString2(this), pos < uVar1; pos = pos + 1) {
    uVar1 = length__C8BString2(this);
    psVar3 = (short *)0x0;
    if (uVar1 != 0) {
      psVar3 = this->reference->ptr;
    }
    if (psVar3[pos] == c) break;
  }
  uVar2 = length__C8BString2(this);
  uVar1 = 0xffffffff;
  if (pos < uVar2) {
    uVar1 = pos;
  }
  return uVar1;
}

unsigned int BString2::rfind(BString2 &str, unsigned int pos) {
	BString2 *this;
	
  uint uVar1;
  short *s;
  
  uVar1 = length__C8BString2(str);
  s = (short *)0x0;
  if (uVar1 != 0) {
    s = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  uVar1 = rfind_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::rfind(c16 *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = rfind_str__C8BString2PCUsUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString2::rfind(c16 *s, unsigned int pos) {
	c16 *s;
	
  uint uVar1;
  
  if (s == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs(s);
  }
  uVar1 = rfind_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::rfind(c16 c, unsigned int pos) {
	unsigned int count;
	BString2 *this;
	c16 &c1;
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  uint uVar3;
  
  uVar1 = length__C8BString2(this);
  uVar3 = pos + 1;
  if (uVar1 <= pos) {
    uVar3 = length__C8BString2(this);
  }
  uVar1 = length__C8BString2(this);
  if (uVar1 != 0) {
    while( true ) {
      uVar1 = length__C8BString2(this);
      psVar2 = (short *)0x0;
      if (uVar1 != 0) {
        psVar2 = this->reference->ptr;
      }
      if ((psVar2[uVar3 - 1] == c) || (uVar3 < 2)) break;
      uVar3 = uVar3 - 1;
    }
    if (uVar3 != 1) {
      return uVar3 - 1;
    }
    uVar1 = length__C8BString2(this);
    if (uVar1 == 0) {
      psVar2 = (short *)0x0;
    }
    else {
      psVar2 = this->reference->ptr;
    }
    if (*psVar2 == c) {
      return 0;
    }
  }
  return 0xffffffff;
}

unsigned int BString2::find_first_of(BString2 &str, unsigned int pos) {
	BString2 *this;
	
  uint uVar1;
  short *s;
  
  uVar1 = length__C8BString2(str);
  s = (short *)0x0;
  if (uVar1 != 0) {
    s = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  uVar1 = find_first_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_first_of(c16 *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_first_of_str__C8BString2PCUsUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString2::find_first_of(c16 *s, unsigned int pos) {
	c16 *s;
	
  uint uVar1;
  
  if (s == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs(s);
  }
  uVar1 = find_first_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_first_of(c16 c, unsigned int pos) {
  uint uVar1;
  
  uVar1 = find__C8BString2UsUi(this,c,pos);
  return uVar1;
}

unsigned int BString2::find_last_of(BString2 &str, unsigned int pos) {
	BString2 *this;
	
  uint uVar1;
  short *s;
  
  uVar1 = length__C8BString2(str);
  s = (short *)0x0;
  if (uVar1 != 0) {
    s = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  uVar1 = find_last_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_last_of(c16 *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_last_of_str__C8BString2PCUsUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString2::find_last_of(c16 *s, unsigned int pos) {
	c16 *s;
	
  uint uVar1;
  
  if (s == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs(s);
  }
  uVar1 = find_last_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_last_of(c16 c, unsigned int pos) {
  uint uVar1;
  
  uVar1 = rfind__C8BString2UsUi(this,c,pos);
  return uVar1;
}

unsigned int BString2::find_first_not_of(BString2 &str, unsigned int pos) {
	BString2 *this;
	
  uint uVar1;
  short *s;
  
  uVar1 = length__C8BString2(str);
  s = (short *)0x0;
  if (uVar1 != 0) {
    s = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  uVar1 = find_first_not_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_first_not_of(c16 *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_first_not_of_str__C8BString2PCUsUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString2::find_first_not_of(c16 *s, unsigned int pos) {
	c16 *s;
	
  uint uVar1;
  
  if (s == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs(s);
  }
  uVar1 = find_first_not_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_first_not_of(c16 c, unsigned int pos) {
	BString2 *this;
	c16 &c1;
	
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  for (; uVar1 = length__C8BString2(this), pos < uVar1; pos = pos + 1) {
    uVar1 = length__C8BString2(this);
    psVar3 = (short *)0x0;
    if (uVar1 != 0) {
      psVar3 = this->reference->ptr;
    }
    if (psVar3[pos] != c) break;
  }
  uVar2 = length__C8BString2(this);
  uVar1 = 0xffffffff;
  if (pos < uVar2) {
    uVar1 = pos;
  }
  return uVar1;
}

unsigned int BString2::find_last_not_of(BString2 &str, unsigned int pos) {
	BString2 *this;
	
  uint uVar1;
  short *s;
  
  uVar1 = length__C8BString2(str);
  s = (short *)0x0;
  if (uVar1 != 0) {
    s = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  uVar1 = find_last_not_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_last_not_of(c16 *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  
  uVar1 = find_last_not_of_str__C8BString2PCUsUiUi(this,s,pos,n);
  return uVar1;
}

unsigned int BString2::find_last_not_of(c16 *s, unsigned int pos) {
	c16 *s;
	
  uint uVar1;
  
  if (s == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs(s);
  }
  uVar1 = find_last_not_of_str__C8BString2PCUsUiUi(this,s,pos,uVar1);
  return uVar1;
}

unsigned int BString2::find_last_not_of(c16 c, unsigned int pos) {
	unsigned int count;
	BString2 *this;
	c16 &c1;
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  uint uVar3;
  
  uVar1 = length__C8BString2(this);
  uVar3 = pos + 1;
  if (uVar1 <= pos) {
    uVar3 = length__C8BString2(this);
  }
  uVar1 = length__C8BString2(this);
  if (uVar1 != 0) {
    while( true ) {
      uVar1 = length__C8BString2(this);
      psVar2 = (short *)0x0;
      if (uVar1 != 0) {
        psVar2 = this->reference->ptr;
      }
      if ((psVar2[uVar3 - 1] != c) || (uVar3 < 2)) break;
      uVar3 = uVar3 - 1;
    }
    if (uVar3 != 1) {
      return uVar3 - 1;
    }
    uVar1 = length__C8BString2(this);
    if (uVar1 == 0) {
      psVar2 = (short *)0x0;
    }
    else {
      psVar2 = this->reference->ptr;
    }
    if (*psVar2 != c) {
      return 0;
    }
  }
  return 0xffffffff;
}

BString2 BString2::substr(unsigned int pos, unsigned int n) {
	BString2 *this;
	
  uint uVar1;
  int iVar2;
  uint in_a3_lo;
  
  uVar1 = length__C8BString2((BString2 *)pos);
  if (uVar1 < n) {
    throwrange__17basic_string_ref2();
  }
  uVar1 = length__C8BString2((BString2 *)pos);
  if (uVar1 == 0) {
    __8BString2(this);
  }
  else {
    uVar1 = length__C8BString2((BString2 *)pos);
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = **(int **)pos;
    }
    uVar1 = length__C8BString2((BString2 *)pos);
    if (uVar1 - n < in_a3_lo) {
      uVar1 = length__C8BString2((BString2 *)pos);
      in_a3_lo = uVar1 - n;
    }
    __8BString2PCUsUi(this,(short *)(iVar2 + n * 2),in_a3_lo);
  }
  return (BString2)(basic_string_ref2 *)this;
}

int BString2::compare(BString2 &str, unsigned int pos, unsigned int n) {
	unsigned int slen;
	BString2 *this;
	
  uint uVar1;
  int iVar2;
  short *str_00;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 - pos < n) {
    uVar1 = length__C8BString2(this);
    n = uVar1 - pos;
  }
  uVar1 = length__C8BString2(str);
  str_00 = (short *)0x0;
  if (uVar1 != 0) {
    str_00 = str->reference->ptr;
  }
  uVar1 = length__C8BString2(str);
  iVar2 = compare_str__C8BString2UiPCUsUiUi(this,pos,str_00,n,uVar1);
  return iVar2;
}

int BString2::compare(c16 *s, unsigned int pos, unsigned int n) {
  uint uVar1;
  int iVar2;
  
  if (n == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  uVar1 = length__C8BString2(this);
  iVar2 = compare_str__C8BString2UiPCUsUiUi(this,pos,s,uVar1 - pos,n);
  return iVar2;
}

int BString2::compare(c16 *s, unsigned int pos) {
	c16 *s;
	
  uint uVar1;
  uint strlen;
  int iVar2;
  
  uVar1 = length__C8BString2(this);
  if (s == (short *)0x0) {
    strlen = 0;
  }
  else {
    strlen = wcslen__FPCUs(s);
  }
  iVar2 = compare_str__C8BString2UiPCUsUiUi(this,pos,s,uVar1 - pos,strlen);
  return iVar2;
}

int BString2::compare(c16 c, unsigned int pos, unsigned int rep) {
	unsigned int count;
	BString2 *this;
	c16 &c1;
	BString2 *this;
	
  uint uVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = length__C8BString2(this);
  if (uVar1 < pos) {
    throwrange__17basic_string_ref2();
  }
  if (rep == 0xffffffff) {
    throwlength__17basic_string_ref2();
  }
  uVar1 = 0;
  if (rep == 0) {
    uVar1 = length__C8BString2(this);
    iVar4 = uVar1 - pos;
  }
  else {
    for (; (uVar1 < rep && (uVar3 = length__C8BString2(this), uVar1 < uVar3 - pos));
        uVar1 = uVar1 + 1) {
      uVar3 = length__C8BString2(this);
      if (uVar3 == 0) {
        psVar2 = (short *)0x0;
      }
      else {
        psVar2 = this->reference->ptr;
      }
      if (psVar2[pos + uVar1] != c) break;
    }
    if ((uVar1 == rep) || (uVar3 = length__C8BString2(this), uVar1 == uVar3 - pos)) {
      uVar3 = length__C8BString2(this);
      iVar4 = (uVar3 - pos) - uVar1;
    }
    else {
      uVar3 = length__C8BString2(this);
      psVar2 = (short *)0x0;
      if (uVar3 != 0) {
        psVar2 = this->reference->ptr;
      }
      iVar4 = (uint)(ushort)psVar2[pos + uVar1] - (uint)(ushort)c;
    }
  }
  return iVar4;
}

BString2 operator+(BString2 &lhs, BString2 &rhs) {
	BString2 tmp;
	BString2 *this;
	BString2 *this;
	unsigned int n;
	
  uint uVar1;
  uint uVar2;
  short *psVar3;
  uint *puVar4;
  BString2 *in_a2_lo;
  short *psVar5;
  BString2 tmp;
  
  uVar1 = length__C8BString2(rhs);
  psVar5 = (short *)0x0;
  if (uVar1 != 0) {
    psVar5 = rhs->reference->ptr;
  }
  uVar1 = length__C8BString2(rhs);
  uVar2 = length__C8BString2(in_a2_lo);
  __8BString2PCUsUiUi(&tmp,psVar5,uVar1,uVar2);
  uVar1 = length__C8BString2(in_a2_lo);
  if (uVar1 != 0) {
    psVar3 = point__8BString2(&tmp);
    uVar1 = length__C8BString2(rhs);
    uVar2 = length__C8BString2(in_a2_lo);
    psVar5 = (short *)0x0;
    if (uVar2 != 0) {
      psVar5 = in_a2_lo->reference->ptr;
    }
    uVar2 = length__C8BString2(in_a2_lo);
    memmove(psVar3 + uVar1,psVar5,(long)(int)((uVar2 + 1) * 2));
  }
  puVar4 = len__8BString2(&tmp);
  uVar1 = length__C8BString2(in_a2_lo);
  *puVar4 = *puVar4 + uVar1;
  __8BString2RC8BString2UiUi(lhs,&tmp,0,0xffffffff);
  ___8BString2(&tmp,2);
  return (BString2)(basic_string_ref2 *)lhs;
}

BString2 operator+(c16 *lhs, BString2 &rhs) {
	unsigned int slen;
	BString2 tmp;
	c16 *s;
	BString2 *this;
	unsigned int n;
	
  uint uVar1;
  uint uVar2;
  short *psVar3;
  uint *puVar4;
  BString2 *in_a2_lo;
  short *__src;
  BString2 tmp;
  
  if (rhs == (BString2 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs((short *)rhs);
  }
  uVar2 = length__C8BString2(in_a2_lo);
  __8BString2PCUsUiUi(&tmp,(short *)rhs,uVar1,uVar2);
  uVar2 = length__C8BString2(in_a2_lo);
  if (uVar2 != 0) {
    psVar3 = point__8BString2(&tmp);
    uVar2 = length__C8BString2(in_a2_lo);
    __src = (short *)0x0;
    if (uVar2 != 0) {
      __src = in_a2_lo->reference->ptr;
    }
    uVar2 = length__C8BString2(in_a2_lo);
    memmove(psVar3 + uVar1,__src,(long)(int)((uVar2 + 1) * 2));
  }
  puVar4 = len__8BString2(&tmp);
  uVar1 = length__C8BString2(in_a2_lo);
  *puVar4 = *puVar4 + uVar1;
  __8BString2RC8BString2UiUi((BString2 *)lhs,&tmp,0,0xffffffff);
  ___8BString2(&tmp,2);
  return (BString2)(basic_string_ref2 *)lhs;
}

BString2 operator+(c16 lhs, BString2 &rhs) {
	BString2 tmp;
	BString2 *this;
	unsigned int n;
	
  uint uVar1;
  short *psVar2;
  uint *puVar3;
  BString2 *in_a2_lo;
  short *__src;
  short local_80 [8];
  BString2 tmp;
  
  local_80[0] = (short)rhs;
  uVar1 = length__C8BString2(in_a2_lo);
  __8BString2PCUsUiUi(&tmp,local_80,1,uVar1);
  uVar1 = length__C8BString2(in_a2_lo);
  if (uVar1 != 0) {
    psVar2 = point__8BString2(&tmp);
    uVar1 = length__C8BString2(in_a2_lo);
    __src = (short *)0x0;
    if (uVar1 != 0) {
      __src = in_a2_lo->reference->ptr;
    }
    uVar1 = length__C8BString2(in_a2_lo);
    memmove(psVar2 + 1,__src,(long)(int)((uVar1 + 1) * 2));
  }
  puVar3 = len__8BString2(&tmp);
  uVar1 = length__C8BString2(in_a2_lo);
  *puVar3 = *puVar3 + uVar1;
  __8BString2RC8BString2UiUi((BString2 *)(int)lhs,&tmp,0,0xffffffff);
  ___8BString2(&tmp,2);
  return (basic_string_ref2 *)(int)lhs;
}

BString2 operator+(BString2 &lhs, c16 *rhs) {
	unsigned int slen;
	BString2 tmp;
	c16 *s;
	BString2 *this;
	c16 *s2;
	unsigned int n;
	
  uint xlen;
  uint uVar1;
  short *psVar2;
  uint *puVar3;
  long in_a2;
  BString2 tmp;
  
  if (in_a2 == 0) {
    xlen = 0;
  }
  else {
    xlen = wcslen__FPCUs((short *)in_a2);
  }
  uVar1 = length__C8BString2((BString2 *)rhs);
  psVar2 = (short *)0x0;
  if (uVar1 != 0) {
    psVar2 = **(short ***)rhs;
  }
  uVar1 = length__C8BString2((BString2 *)rhs);
  __8BString2PCUsUiUi(&tmp,psVar2,uVar1,xlen);
  if (xlen != 0) {
    psVar2 = point__8BString2(&tmp);
    uVar1 = length__C8BString2((BString2 *)rhs);
    memmove(psVar2 + uVar1,(short *)in_a2,(long)(int)((xlen + 1) * 2));
  }
  puVar3 = len__8BString2(&tmp);
  *puVar3 = *puVar3 + xlen;
  __8BString2RC8BString2UiUi(lhs,&tmp,0,0xffffffff);
  ___8BString2(&tmp,2);
  return (BString2)(basic_string_ref2 *)lhs;
}

BString2 operator+(BString2 &lhs, c16 rhs) {
	BString2 tmp;
	BString2 *this;
	c16 &c1;
	c16 &c1;
	
  short sVar1;
  uint uVar2;
  short *psVar3;
  uint *puVar4;
  short in_a2_lo;
  BString2 tmp;
  
  uVar2 = length__C8BString2((BString2 *)(int)rhs);
  if (uVar2 == 0) {
    psVar3 = (short *)0x0;
  }
  else {
    psVar3 = **(short ***)(int)rhs;
  }
  uVar2 = length__C8BString2((BString2 *)(int)rhs);
  __8BString2PCUsUiUi(&tmp,psVar3,uVar2,1);
  psVar3 = point__8BString2(&tmp);
  uVar2 = length__C8BString2((BString2 *)(int)rhs);
  psVar3[uVar2] = in_a2_lo;
  puVar4 = len__8BString2(&tmp);
  *puVar4 = *puVar4 + 1;
  psVar3 = point__8BString2(&tmp);
  uVar2 = length__C8BString2(&tmp);
  sVar1 = eos__8BString2();
  psVar3[uVar2] = sVar1;
  __8BString2RC8BString2UiUi(lhs,&tmp,0,0xffffffff);
  ___8BString2(&tmp,2);
  return (BString2)(basic_string_ref2 *)lhs;
}

bool BString2::operator==(BString2 &str) {
  int iVar1;
  
  iVar1 = compare__C8BString2RC8BString2UiUi(this,str,0,0xffffffff);
  return iVar1 == 0;
}

bool BString2::operator!=(BString2 &str) {
  int iVar1;
  
  iVar1 = compare__C8BString2RC8BString2UiUi(this,str,0,0xffffffff);
  return iVar1 != 0;
}

bool BString2::operator<(BString2 &str) {
  int iVar1;
  
  iVar1 = compare__C8BString2RC8BString2UiUi(this,str,0,0xffffffff);
  return SUB41((uint)iVar1 >> 0x1f,0);
}

unsigned int BString2::length() {
  return this->reference->len;
}

unsigned int BString2::reserve() {
  return this->reference->res;
}

BString2& BString2::assignDebug(char *str) {
  short *out;
  size_t sVar1;
  
  if (str == (char *)0x0) {
    str = "";
  }
  sVar1 = strlen(str);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (short *)_memmanAlloc__FUiUi(((int)sVar1 + 1) * 2,4);
                    /* end of inlined section */
  localConvertToWide__FPUsPCc(out,str);
  assign__8BString2PCUs(this,out);
  if (out != (short *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
                    /* end of inlined section */
  }
  return this;
}

BString2* BString2::BString2(__wchar_t *str) {
  uint uVar1;
  short *out;
  basic_string_ref2 *pbVar2;
  
  uVar1 = wcslen__FPCw(str);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (short *)_memmanAlloc__FUiUi((uVar1 + 1) * 2,4);
                    /* end of inlined section */
  localConvertToWide__FPUsPCw(out,str);
  pbVar2 = (basic_string_ref2 *)malloc(0x10);
  pbVar2 = __17basic_string_ref2PCUs(pbVar2,out);
  this->reference = pbVar2;
  if (out != (short *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
  }
                    /* end of inlined section */
  return this;
}

BString2& BString2::operator=(__wchar_t *str) {
	c16 *s;
	c16 *s;
	void *pAddress;
	
  uint uVar1;
  short *out;
  
  uVar1 = wcslen__FPCw(str);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (short *)_memmanAlloc__FUiUi((uVar1 + 1) * 2,4);
                    /* end of inlined section */
  localConvertToWide__FPUsPCw(out,str);
  if (out == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = wcslen__FPCUs(out);
  }
  assign_str__8BString2PCUsUi(this,out,uVar1);
  if (out != (short *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
                    /* end of inlined section */
  }
  return this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___17basic_string_ref2(&_8BString2_defaultReference,2);
    }
    else {
      __17basic_string_ref2(&_8BString2_defaultReference);
    }
  }
  return;
}

void global constructors keyed to wcslen() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to wcslen() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_BITARRAY_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_BITARRAY_H

struct BitArray64 {
private:
	Sint64 mBits;
	
public:
	BitArray64(Sint64 &in);
	BitArray64();
	BitArray64(BitArray64*, int, void);
	static void* operator new(/* parameters unknown */);
	BitArray64& operator=(BitArray64 &in);
	BitArray64();
	void Clear(int i);
	bool IsSet(int i);
	bool operator[](int i);
	void Set(int i);
	void Clear(BitArray64*, int, void);
	BitArray64& operator|=(BitArray64 &in);
	BitArray64& operator&=(BitArray64 &in);
	BitArray64& operator^=(BitArray64 &in);
	BitArray64& operator<<=(int i);
	BitArray64& operator>>=(int i);
	int CountBits();
};

struct BitMatrix64 {
private:
	BitArray64 mMatrix[64];
	
public:
	BitMatrix64(BitMatrix64 &in);
	BitMatrix64();
	BitMatrix64(BitMatrix64*, int, void);
	static void* operator new(/* parameters unknown */);
	BitMatrix64& operator=(BitMatrix64 &in);
	BitArray64& operator[](int i);
	BitArray64& operator[]();
	bool IsSet(CTilePt &in);
	void Set(CTilePt &in);
	void Clear();
	void Clear();
	BitMatrix64& operator&=(BitMatrix64 &in);
	BitMatrix64& operator|=(BitMatrix64 &in);
	BitMatrix64& operator^=(BitMatrix64 &in);
	BitMatrix64& operator<<=(int j);
	BitMatrix64& operator>>=(int j);
	int CountBits();
};

void BitArray64::~BitArray64(int __in_chrg);
void BitMatrix64::~BitMatrix64(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_BITARRAY_H

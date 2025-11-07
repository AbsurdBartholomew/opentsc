// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_STORAGE_E_MEMORYSTREAM_H
#define C__EOR_SRC2_COMMON_STORAGE_E_MEMORYSTREAM_H

struct EMemoryReadStream : EStream {
protected:
	u8 *m_pData;
	u32 m_pos;
	
public:
	EMemoryReadStream& operator=();
	EMemoryReadStream(void *pData);
	/* vtable[1] */ virtual EMemoryReadStream(EMemoryReadStream*, int, void);
	EMemoryReadStream();
	/* vtable[2] */ virtual int GetPos();
	/* vtable[3] */ virtual int Read(void *pData, int size);
	/* vtable[4] */ virtual int Write(void *pData, int Size);
};

struct TArray<unsigned char *> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<unsigned char *>*, int, void);
	u8*& operator[]();
	u8*& operator[]();
	u8*& operator[]();
	u8*& operator[]();
	TArray<unsigned char *>& operator=();
	u8** operator unsigned char **();
	u8** operator unsigned char **();
	void SetGrowBy(TArray<unsigned char *>*, int, void);
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

struct EMemoryWriteStream : EStream {
protected:
	u32 m_pos;
	TArray<unsigned char *> m_blocks;
	
public:
	EMemoryWriteStream& operator=();
	EMemoryWriteStream();
	EMemoryWriteStream();
	/* vtable[1] */ virtual EMemoryWriteStream(EMemoryWriteStream*, int, void);
	u8 operator[](int pos);
	u8& operator[]();
	void* AllocAndCopyToBuffer();
	static void FreeBuffer(/* parameters unknown */);
	void WriteToStream(EStream &stream, int pos, int count);
	/* vtable[2] */ virtual int GetPos();
	/* vtable[3] */ virtual int Read(void *pData, int size);
	/* vtable[4] */ virtual int Write(void *pData, int size);
};

extern __vtbl_ptr_type EMemoryWriteStream virtual table[6];
extern __vtbl_ptr_type EMemoryReadStream virtual table[6];
extern __vtbl_ptr_type EStream virtual table[6];

void EMemoryWriteStream::~EMemoryWriteStream(int __in_chrg);
void EStream::~EStream(int __in_chrg);
void EMemoryReadStream::~EMemoryReadStream(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_STORAGE_E_MEMORYSTREAM_H

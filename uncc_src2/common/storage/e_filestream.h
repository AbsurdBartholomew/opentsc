// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_STORAGE_E_FILESTREAM_H
#define C__EOR_SRC2_COMMON_STORAGE_E_FILESTREAM_H

struct EStream {
protected:
	bool m_streamingStructure;
	EIntList *m_pPointerOffsets;
	TNodeList<EStorable *> *m_pObjectsToStore;
	TRedBlackTree<EStorable *,int> *m_pStoredObjectsToIndices;
	EStorable **m_pObjectsToLoad;
public:
	__vtbl_ptr_type *$vf1506;
	
	EStream& operator=();
	EStream();
	EStream();
	/* vtable[1] */ virtual EStream(EStream*, int, void);
	bool IsStreamingStructure();
	int ReadString(char *szBuffer, int bufferSize);
	int WriteString(char *szBuffer);
	int ReadU16String(u16 *szBuffer, int bufferSize);
	int WriteU16String(u16 *szBuffer);
	/* vtable[2] */ virtual int GetPos();
	/* vtable[3] */ virtual int Read();
	/* vtable[4] */ virtual int Write();
protected:
	EStorable* ReadStructure(u32 FirstWord, int *pnBytesRead);
	int WriteStructure(EStorable &Root);
};

enum FSReadWriteMode {
	FS_READ = 0,
	FS_WRITE = 1
};

struct EFileStream : EStream {
protected:
	EFile *m_pFile;
	FSReadWriteMode m_mode;
	bool m_bOwn;
	
public:
	EFileStream& operator=();
	EFileStream();
	EFileStream();
	/* vtable[1] */ virtual EFileStream(EFileStream*, int, void);
	bool Open(char *filename, FSReadWriteMode mode);
	void Close();
	void Attach(EFile *pFile, FSReadWriteMode mode, int pos, bool bOwn);
	void Detach();
	/* vtable[2] */ virtual int GetPos();
	/* vtable[3] */ virtual int Read(void *pData, int size);
	/* vtable[4] */ virtual int Write(void *pData, int size);
};

extern __vtbl_ptr_type EFileStream virtual table[6];
extern __vtbl_ptr_type EStream virtual table[6];

void EFileStream::~EFileStream(int __in_chrg);
void EStream::~EStream(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_STORAGE_E_FILESTREAM_H

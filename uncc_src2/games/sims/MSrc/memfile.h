// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_MEMFILE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_MEMFILE_H

struct MemFile {
private:
	FileName fFilename;
	bool fWritable;
	bool fDirty;
	u8 *fBuffer;
	u32 fBufferSize;
	u32 fFilePos;
	u32 fEndOfFile;
public:
	__vtbl_ptr_type *$vf2630;
	
	MemFile& operator=();
	MemFile();
	MemFile();
	/* vtable[1] */ virtual MemFile(MemFile*, int, void);
	ErrType Create(StringBuffer &name);
	ErrType Delete(StringBuffer &name);
	ErrType Open(StringBuffer &name);
	ErrType Close();
	bool Writable();
	ErrType GetFileName(StringBuffer &name);
	bool ValidFile();
	ErrType ReadBlock(void *buffer, int *blockSize);
	ErrType WriteBlock(void *buffer, int *blockSize);
	ErrType Read1(SInt8 *val);
	ErrType SetPos(SInt32 fromStart);
	ErrType Advance();
	ErrType Flush();
	ErrType GetFileSize(SInt32 *filesize);
	ErrType SetFileSize(SInt32 filesize);
};

extern __vtbl_ptr_type MemFile virtual table[3];

void MemFile::~MemFile(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_MEMFILE_H

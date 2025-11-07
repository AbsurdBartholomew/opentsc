// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_CTGFILEPS2_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_CTGFILEPS2_H

typedef void *HANDLE;

struct CTGFile {
	__vtbl_ptr_type *$vf1729;
	
	CTGFile& operator=();
	CTGFile();
protected:
	CTGFile();
	/* vtable[1] */ virtual CTGFile(CTGFile*, int, void);
public:
	/* vtable[2] */ virtual Sint32 Read();
	/* vtable[3] */ virtual Sint32 Write();
	/* vtable[4] */ virtual bool Seek();
	/* vtable[5] */ virtual Sint32 Tell();
	/* vtable[6] */ virtual Sint32 GetSize();
	/* vtable[7] */ virtual bool SetSize();
	/* vtable[8] */ virtual bool IsWritable();
	/* vtable[9] */ virtual bool ReadBytes();
	/* vtable[10] */ virtual bool WriteBytes();
	/* vtable[11] */ virtual bool ReadByte();
	/* vtable[12] */ virtual bool WriteByte();
	/* vtable[13] */ virtual bool ReadInteger();
	/* vtable[14] */ virtual bool WriteInteger();
	/* vtable[15] */ virtual bool ReadFloat();
	/* vtable[16] */ virtual bool WriteFloat();
	/* vtable[17] */ virtual bool ReadString();
	/* vtable[18] */ virtual bool WriteString();
	/* vtable[19] */ virtual bool Flush();
	/* vtable[20] */ virtual bool FlushCache();
	/* vtable[21] */ virtual char* GetName();
};

struct CTGFileManager {
	static CTGFileManager sTheMgr;
	
	CTGFileManager& operator=();
	CTGFileManager();
	CTGFileManager();
	CTGFileManager(CTGFileManager*, int, void);
	bool Init();
	void Shutdown();
	bool FileExists(char *name);
	CTGFile* OpenFile(char *name, bool bWritable);
	void ReleaseFile(CTGFile *file);
	bool CreateFile(char *name);
	bool DeleteFile(char *name);
	bool MoveFile(char *fromName, char *toName);
	bool CopyFile(char *fromName, char *toName);
};

extern CTGFileManager CTGFileManager::sTheMgr;
extern __vtbl_ptr_type CTGFileImpl virtual table[23];
extern __vtbl_ptr_type CTGFile virtual table[23];

void CTGFile::~CTGFile(int __in_chrg);
void CTGFileImpl::~CTGFileImpl(int __in_chrg);
void CTGFileManager::~CTGFileManager(int __in_chrg);
void global constructors keyed to CTGFileManager::sTheMgr();
void global destructors keyed to CTGFileManager::sTheMgr();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_CTGFILEPS2_H

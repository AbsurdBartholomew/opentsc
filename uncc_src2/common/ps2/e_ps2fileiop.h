// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_PS2_E_PS2FILEIOP_H
#define C__EOR_SRC2_COMMON_PS2_E_PS2FILEIOP_H

struct EFile {
	__vtbl_ptr_type *$vf1179;
	
	EFile& operator=();
	EFile();
	EFile();
protected:
	/* vtable[1] */ virtual EFile(EFile*, int, void);
public:
	/* vtable[2] */ virtual unsigned int Read();
	/* vtable[3] */ virtual unsigned int Write();
	/* vtable[4] */ virtual unsigned int Seek();
	/* vtable[5] */ virtual unsigned int Tell();
	/* vtable[6] */ virtual bool Flush();
	/* vtable[7] */ virtual ErrorCode GetLastError();
	/* vtable[8] */ virtual IOMode GetIOMode();
	/* vtable[9] */ virtual AccessMode GetAccessMode();
	/* vtable[10] */ virtual DeviceType GetDeviceType();
	/* vtable[11] */ virtual char* GetDrive();
	/* vtable[12] */ virtual char* GetPath();
	/* vtable[13] */ virtual char* GetName();
	/* vtable[14] */ virtual char* GetExt();
	/* vtable[15] */ virtual void* GetSystemHandle();
protected:
	/* vtable[16] */ virtual void Destroy();
};

struct EPs2FileIOP : EFile {
private:
	EMutex m_theMutex;
	u32 m_uHandle;
	IOMode m_eMode;
	DeviceType m_eDevice;
	AccessMode m_eAccess;
	long int m_nFileSize;
	long int m_nBytesInBuffer;
	long int m_nPos;
	long int m_nBufferPos;
	void *m_pBuffer;
	char m_pszDrive[3];
	char m_pszDir[256];
	char m_pszName[256];
	char m_pszExt[256];
	
public:
	EPs2FileIOP& operator=();
	EPs2FileIOP();
protected:
	EPs2FileIOP();
	/* vtable[1] */ virtual EPs2FileIOP(EPs2FileIOP*, int, void);
	static EFile* Creator(/* parameters unknown */);
	/* vtable[17] */ virtual bool Open(char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess);
	/* vtable[18] */ virtual void Close();
	/* vtable[16] */ virtual void Destroy();
public:
	/* vtable[2] */ virtual unsigned int Read(void *pBuffer, unsigned int nSize);
	/* vtable[3] */ virtual unsigned int Write(void *pBuffer, unsigned int nSize);
	/* vtable[4] */ virtual unsigned int Seek(int nOffset, SeekType eMode);
	/* vtable[5] */ virtual unsigned int Tell();
	/* vtable[6] */ virtual bool Flush();
	/* vtable[7] */ virtual ErrorCode GetLastError();
	/* vtable[8] */ virtual IOMode GetIOMode();
	/* vtable[9] */ virtual AccessMode GetAccessMode();
	/* vtable[10] */ virtual DeviceType GetDeviceType();
	/* vtable[11] */ virtual char* GetDrive();
	/* vtable[12] */ virtual char* GetPath();
	/* vtable[13] */ virtual char* GetName();
	/* vtable[14] */ virtual char* GetExt();
	/* vtable[15] */ virtual void* GetSystemHandle();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
private:
	void SetName(char *pszFileName);
	bool AllocIOBuffer();
	void FreeIOBuffer();
	bool FillBuffer();
	unsigned int ReadFromBuffer(void *pBuffer, unsigned int nSize);
	/* vtable[19] */ virtual int GetFD();
	/* vtable[20] */ virtual void SetFD(int nFD);
	/* vtable[21] */ virtual void SetMode(IOMode eMode);
	/* vtable[22] */ virtual void SetDevice(DeviceType eDevice);
	/* vtable[23] */ virtual void SetAccess(AccessMode eAccess);
};

extern __vtbl_ptr_type EPs2FileIOP virtual table[25];
extern __vtbl_ptr_type EFile virtual table[18];

void EPs2FileIOP::~EPs2FileIOP(int __in_chrg);
void EFile::~EFile(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_PS2_E_PS2FILEIOP_H

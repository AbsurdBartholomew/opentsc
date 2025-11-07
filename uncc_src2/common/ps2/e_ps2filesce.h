// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_PS2_E_PS2FILESCE_H
#define C__EOR_SRC2_COMMON_PS2_E_PS2FILESCE_H

struct EPs2FileSCE : EFile {
private:
	int m_nFD;
	int m_nLastError;
	IOMode m_eMode;
	DeviceType m_eDevice;
	AccessMode m_eAccess;
	char m_pszDrive[3];
	char m_pszDir[256];
	char m_pszName[256];
	char m_pszExt[256];
	
public:
	EPs2FileSCE& operator=();
	EPs2FileSCE();
protected:
	EPs2FileSCE();
	/* vtable[1] */ virtual EPs2FileSCE(EPs2FileSCE*, int, void);
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
protected:
	/* vtable[19] */ virtual int GetFD();
	/* vtable[20] */ virtual void SetFD(int nFD);
	/* vtable[21] */ virtual void SetName(char *pszFileName);
	/* vtable[22] */ virtual void SetMode(IOMode eMode);
	/* vtable[23] */ virtual void SetDevice(DeviceType eDevice);
	/* vtable[24] */ virtual void SetAccess(AccessMode eAccess);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void SetLastError(int nError);
};

extern __vtbl_ptr_type EPs2FileSCE virtual table[26];
extern __vtbl_ptr_type EFile virtual table[18];

void EPs2FileSCE::~EPs2FileSCE(int __in_chrg);
void EFile::~EFile(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_PS2_E_PS2FILESCE_H

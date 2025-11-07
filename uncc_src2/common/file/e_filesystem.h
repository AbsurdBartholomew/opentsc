// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_FILE_E_FILESYSTEM_H
#define C__EOR_SRC2_COMMON_FILE_E_FILESYSTEM_H

enum IOMode {
	IOM_READ = 1,
	IOM_WRITE = 2,
	IOM_READ_WRITE = 3,
	IOM_APPEND = 4,
	IOM_WRITE_APPEND = 6,
	IOM_READ_WRITE_APPEND = 7,
	IOM_UNSPECIFIED = 8
};

enum AccessMode {
	AM_RANDOM_ACCESS = 0,
	AM_SEQUENTIAL_SCAN = 1,
	AM_UNSPECIFIED = 2,
	_AM_COUNT = 3
};

enum DeviceType {
	DT_DEFAULT = 0,
	DT_HD = 1,
	DT_HOST = 2,
	DT_DVD = 3,
	DT_USB_ETHERNET = 4,
	DT_USB_ETHERNET_BUFFERED = 5,
	DT_PIPE = 6,
	DT_UNSPECIFIED = 7,
	_DT_COUNT = 8
};

typedef EFile* (*IFileObjCreatorCB)(/* parameters unknown */);

struct IOMLevelCreater {
	IFileObjCreatorCB pfnCreatorCB;
	TStringRedBlackTree<EFile * (*)(EFile *, const char *, const char *, EFile::DeviceType, EFile::AccessMode)> *pFileTypeMap;
};

struct AMLevelCreator {
	IFileObjCreatorCB pfnCreatorCB;
	TRedBlackTree<EFile::IOMode,EFileSystem::IOMLevelCreater *> *pIOModeMap;
};

struct DTLevelCreator {
	IFileObjCreatorCB pfnCreatorCB;
	TRedBlackTree<EFile::AccessMode,EFileSystem::AMLevelCreator *> *pAccessModeMap;
};

struct TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *> : ERedBlackTree {
	TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *>*, int, void);
	DTLevelCreator* operator[]();
	DTLevelCreator*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static DeviceType GetKey(/* parameters unknown */);
	static DTLevelCreator* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EFileSystem : EGlobalManagerClient {
private:
	TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *> m_dbCreators;
	IFileObjCreatorCB m_pfnDefaultCreator;
	DeviceType m_eDefaultDeviceType;
	bool m_initialized;
	
public:
	EFileSystem& operator=();
	EFileSystem();
	EFileSystem();
	/* vtable[1] */ virtual EFileSystem(EFileSystem*, int, void);
protected:
	/* vtable[3] */ virtual void ManagedShutdown();
public:
	/* vtable[4] */ virtual bool Create(EFile *&pFile, char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess);
	/* vtable[5] */ virtual void Destroy(EFile *&pFile);
	/* vtable[6] */ virtual bool Init(DeviceType eDefaultType);
	DeviceType GetDefaultType();
	void SetDefaultObject(IFileObjCreatorCB pfnCreator);
	bool RegisterFileObject(DeviceType eDevice, AccessMode eAccess, IOMode eMode, char *pszExt, IFileObjCreatorCB pfnCreator);
	bool ParseMode(char *pszMode, IOMode &eMode);
protected:
	IFileObjCreatorCB FindCreator(DeviceType eDevice, AccessMode eAccess, IOMode eMode, char *pszExt);
private:
	void RegisterDTLevel(TRedBlackTree<EFile::DeviceType,EFileSystem::DTLevelCreator *> &mapDeviceType, IFileObjCreatorCB pfnCreator, DeviceType eDevice, AccessMode eAccess, IOMode eMode, char *pszExt);
	void RegisterAMLevel(TRedBlackTree<EFile::AccessMode,EFileSystem::AMLevelCreator *> &mapAccessMode, IFileObjCreatorCB pfnCreator, AccessMode eAccess, IOMode eMode, char *pszExt);
	void RegisterIOMLevel(TRedBlackTree<EFile::IOMode,EFileSystem::IOMLevelCreater *> &mapIOMode, IFileObjCreatorCB pfnCreator, IOMode eMode, char *pszExt);
	void RegisterFTLevel(TStringRedBlackTree<EFile * (*)(EFile *, const char *, const char *, EFile::DeviceType, EFile::AccessMode)> &mapFileType, IFileObjCreatorCB pfnCreator, char *pszExt);
};

extern EPs2FileSystem _eorFileSys;
extern __vtbl_ptr_type EFileSystem virtual table[8];
extern __vtbl_ptr_type EGlobalManagerClient virtual table[5];

void EFileSystem::~EFileSystem(int __in_chrg);
void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg);
void global constructors keyed to _eorFileSys();
void global destructors keyed to _eorFileSys();

#endif // C__EOR_SRC2_COMMON_FILE_E_FILESYSTEM_H

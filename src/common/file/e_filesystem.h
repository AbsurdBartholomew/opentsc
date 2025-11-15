/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/datastruc/e_redblacktree.h"
#include "common/datastruc/e_stringredblacktree.h"

#include "common/file/e_file.h"
#include "common/util/e_globalmanager.h"

typedef EFile* (*IFileObjCreatorCB)(/* parameters unknown */);

struct IOMLevelCreater {
	IFileObjCreatorCB pfnCreatorCB;
	TStringRedBlackTree<EFile *, const char *, const char *, DeviceType, AccessMode> *pFileTypeMap;
};

struct AMLevelCreator {
	IFileObjCreatorCB pfnCreatorCB;
	TRedBlackTree<IOMode,IOMLevelCreater *> *pIOModeMap;
};

struct DTLevelCreator {
	IFileObjCreatorCB pfnCreatorCB;
	TRedBlackTree<AccessMode,AMLevelCreator *> *pAccessModeMap;
};

struct EFileSystem : EGlobalManagerClient
{
private:
    TRedBlackTree<DeviceType, DTLevelCreator *> m_dbCreators;
    IFileObjCreatorCB m_pfnDefaultCreator;
    DeviceType m_eDefaultDeviceType;
    bool m_initialized;

public:
    EFileSystem();

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
    void RegisterDTLevel(TRedBlackTree<DeviceType, DTLevelCreator *> &mapDeviceType, IFileObjCreatorCB pfnCreator, DeviceType eDevice, AccessMode eAccess, IOMode eMode, char *pszExt);
    void RegisterAMLevel(TRedBlackTree<AccessMode, AMLevelCreator *> &mapAccessMode, IFileObjCreatorCB pfnCreator, AccessMode eAccess, IOMode eMode, char *pszExt);
    void RegisterIOMLevel(TRedBlackTree<IOMode, IOMLevelCreater *> &mapIOMode, IFileObjCreatorCB pfnCreator, IOMode eMode, char *pszExt);
    void RegisterFTLevel(TStringRedBlackTree<EFile *, const char *, const char *, DeviceType, AccessMode> &mapFileType, IFileObjCreatorCB pfnCreator, char *pszExt);
};
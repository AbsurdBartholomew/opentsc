// STATUS: NOT STARTED

#include "e_ps2filesystem.h"

struct EPs2FileBufferedSCE : EPs2FileSCE {
private:
	void *m_pBuffer;
	unsigned int m_nPos;
	unsigned int m_nBufferPos;
	int m_nBytesInBuffer;
	
public:
	EPs2FileBufferedSCE& operator=();
	EPs2FileBufferedSCE();
protected:
	EPs2FileBufferedSCE();
	/* vtable[1] */ virtual EPs2FileBufferedSCE(EPs2FileBufferedSCE*, int, void);
	static EFile* Creator(/* parameters unknown */);
	/* vtable[16] */ virtual void Destroy();
public:
	/* vtable[2] */ virtual unsigned int Read();
	/* vtable[3] */ virtual unsigned int Write();
	/* vtable[4] */ virtual unsigned int Seek();
	/* vtable[5] */ virtual unsigned int Tell();
	/* vtable[6] */ virtual bool Flush();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
protected:
	bool AllocIOBuffer();
	void FreeIOBuffer();
	bool FillBuffer();
	unsigned int ReadFromBuffer();
};

__vtbl_ptr_type EPs2FileSystem virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSystem::~EPs2FileSystem,
		/* .__delta2 = */ -8608
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedStartup,
		/* .__delta2 = */ 22312
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileSystem::ManagedShutdown,
		/* .__delta2 = */ -28496
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileSystem::Create,
		/* .__delta2 = */ -27968
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileSystem::Destroy,
		/* .__delta2 = */ -27616
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSystem::Init,
		/* .__delta2 = */ -8520
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPs2FileSystem* EPs2FileSystem::EPs2FileSystem() {
  __11EFileSystem(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_14EPs2FileSystem;
  return this;
}

void EPs2FileSystem::~EPs2FileSystem(int __in_chrg) {
	EGlobalManagerClient *this;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  bVar1 = __14EGlobalManager_m_shutdownComplete == 0;
  (this->field0_0x0).field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_14EPs2FileSystem;
  if (bVar1) {
    Shutdown__14EGlobalManager();
  }
                    /* end of inlined section */
  ___11EFileSystem(&this->field0_0x0,__in_chrg);
  return;
}

bool EPs2FileSystem::Init(DeviceType eDefaultType) {
	bool bResult;
	
  bool bVar1;
  bool bVar2;
  
  SetDefaultObject__11EFileSystemPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFile
            (&this->field0_0x0,
             Creator__11EPs2FileIOPP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode);
  RegisterFileObject__11EFileSystemQ25EFile10DeviceTypeQ25EFile10AccessModeQ25EFile6IOModePCcPFP5EFilePCcPCcQ25EFile10DeviceTypeQ25EFile10AccessMode_P5EFile
            (&this->field0_0x0,DT_PIPE,AM_UNSPECIFIED,IOM_UNSPECIFIED,(char *)0x0,
             Creator__11EPs2FileSCEP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode);
  bVar1 = Initialize__16EPs2IOPInterface(&_ps2IOPInterface);
  bVar2 = false;
  if (bVar1) {
    if (eDefaultType == DT_DEFAULT) {
      eDefaultType = DT_DVD;
    }
    bVar2 = Init__11EFileSystemQ25EFile10DeviceType(&this->field0_0x0,eDefaultType);
  }
  return bVar2;
}

void EPs2FileSystem::SetHostIPAddress(char *pszHostIPAddress) {
  strncpy(this->m_pszHostIPAddress,pszHostIPAddress,0xf);
  return;
}

FILE* fopen(char *path, char *mode) {
	EFile *pFile;
	
  undefined8 unaff_retaddr;
  EFile *pFile;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pFile = (EFile *)0x0;
  Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
            (&_eorFileSys.field0_0x0,&pFile,path,mode,DT_DEFAULT,AM_RANDOM_ACCESS);
  return (__sFILE__432_30 *)pFile;
}

int fclose(FILE *stream) {
	EFile *pFile;
	
  undefined8 unaff_retaddr;
  EFile *pFile;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pFile = (EFile *)stream;
  Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&pFile);
  return 0;
}

unsigned int fread(void *ptr, unsigned int size, unsigned int nmemb, FILE *stream) {
  uint uVar1;
  
  uVar1 = (**(code **)(stream->_p + 0x14))
                    (stream->_ubuf + *(short *)(stream->_p + 0x10) + -0x40,ptr,size * nmemb);
  return uVar1;
}

unsigned int fwrite(void *ptr, unsigned int size, unsigned int nmemb, FILE *stream) {
  uint uVar1;
  
  uVar1 = (**(code **)(stream->_p + 0x1c))
                    (stream->_ubuf + *(short *)(stream->_p + 0x18) + -0x40,ptr,size * nmemb);
  return uVar1;
}

int fseek(FILE *stream, long int offset, int origin) {
	static SeekType lutSeekType[3] = {
		/* [0] = */ ST_SET,
		/* [1] = */ ST_CURRENT,
		/* [2] = */ ST_END
	};
	
  int iVar1;
  
  (**(code **)(stream->_p + 0x24))
            (stream->_ubuf + *(short *)(stream->_p + 0x20) + -0x40,(int)offset,
             *(undefined4 *)(lutSeekType_612 + origin * 4));
  iVar1 = (**(code **)(stream->_p + 0x3c))(stream->_ubuf + *(short *)(stream->_p + 0x38) + -0x40);
  return iVar1;
}

long int ftell(FILE *stream) {
  ulong uVar1;
  
  uVar1 = (**(code **)(stream->_p + 0x2c))(stream->_ubuf + *(short *)(stream->_p + 0x28) + -0x40);
  return uVar1 & 0xffffffff;
}

char* fgets(char *string, int count, FILE *stream) {
	EFile *pFile;
	char *pointer;
	char *retval;
	char ch;
	
  long lVar1;
  char *pcVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  char ch;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  pcVar2 = string;
  if (count < 1) {
    string = (char *)0x0;
  }
  else {
    do {
      count = count + -1;
      if (count == 0) break;
      lVar1 = (**(code **)(stream->_p + 0x14))
                        (stream->_ubuf + *(short *)(stream->_p + 0x10) + -0x40,&ch,1);
      if (lVar1 == 0) {
        if (pcVar2 != string) {
          *pcVar2 = '\0';
          return string;
        }
        return (char *)0x0;
      }
      *pcVar2 = ch;
      pcVar2 = pcVar2 + 1;
    } while (ch != '\n');
    *pcVar2 = '\0';
  }
  return string;
}

bool EGlobalManagerClient::ManagedStartup() {
  return true;
}

char* EPs2FileSystem::GetHostIPAddress() {
  return this->m_pszHostIPAddress;
}

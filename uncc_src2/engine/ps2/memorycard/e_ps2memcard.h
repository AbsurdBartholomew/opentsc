// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_MEMORYCARD_E_PS2MEMCARD_H
#define C__EOR_SRC2_ENGINE_PS2_MEMORYCARD_E_PS2MEMCARD_H

typedef unsigned int u32;

enum EMC_Operation {
	EMC_NULL = 0,
	EMC_LOAD = 1,
	EMC_SAVE = 2,
	EMC_DELETE = 3,
	EMC_FORMAT = 4,
	EMC_UNFORMAT = 5,
	EMC_GETFILELIST = 6
};

enum EMC_OpStatus {
	EMC_FAILURE = 0,
	EMC_SUCCESS = 1,
	EMC_OPPENDING = 2,
	EMC_NOCARD = -1,
	EMC_NOTFORMATED = -2,
	EMC_NOSPACE = -3,
	EMC_DATACORRUPTED = -4,
	EMC_OPNOTRUNNING = -5,
	EMC_WRONGCARDTYPE = -6,
	EMC_NOFILE = -7
};

enum EMC_SaveType {
	EMC_TYPE_0 = 0,
	EMC_TYPE_1 = 1,
	EMC_TYPE_2 = 2,
	EMC_TYPE_3 = 3,
	EMC_TYPE_4 = 4,
	EMC_TYPE_5 = 5,
	EMC_TYPE_6 = 6,
	EMC_TYPE_7 = 7,
	EMC_TYPE_8 = 8,
	EMC_TYPE_9 = 9,
	EMC_TYPE_10 = 10
};

typedef char EMCFileName[32];

struct EMemoryCard {
	__vtbl_ptr_type *$vf4067;
	
	EMemoryCard& operator=();
	EMemoryCard();
protected:
	EMemoryCard();
	/* vtable[1] */ virtual EMemoryCard(EMemoryCard*, int, void);
public:
	/* vtable[2] */ virtual EMC_OpStatus InitMemoryCard();
	/* vtable[3] */ virtual EMC_OpStatus UnInitMemoryCard();
	/* vtable[4] */ virtual EMC_OpStatus LoadDataS();
	/* vtable[5] */ virtual EMC_OpStatus SaveDataS();
	/* vtable[6] */ virtual EMC_OpStatus DeleteDataS();
	/* vtable[7] */ virtual EMC_OpStatus FormatCardS();
	/* vtable[8] */ virtual EMC_OpStatus UnFormatCardS();
	/* vtable[9] */ virtual EMC_OpStatus LoadDataA();
	/* vtable[10] */ virtual EMC_OpStatus SaveDataA();
	/* vtable[11] */ virtual EMC_OpStatus DeleteDataA();
	/* vtable[12] */ virtual EMC_OpStatus FormatCardA();
	/* vtable[13] */ virtual EMC_OpStatus UnFormatCardA();
	/* vtable[14] */ virtual EMC_OpStatus UpdateOperation();
	/* vtable[15] */ virtual EMC_OpStatus GetFreeSpaceS();
	/* vtable[16] */ virtual EMC_OpStatus IsSpaceAvailable();
	/* vtable[17] */ virtual EMC_OpStatus IsSpaceAvailable();
	/* vtable[18] */ virtual EMC_OpStatus CheckForOverwriteSpace();
	/* vtable[19] */ virtual bool IsCardAvailable();
	/* vtable[20] */ virtual bool AnyCardsPresent();
	/* vtable[21] */ virtual EMC_OpStatus IsCardFormated();
	/* vtable[22] */ virtual EMC_OpStatus GetFileList();
	/* vtable[23] */ virtual void SetupSaveTypes();
	/* vtable[24] */ virtual void SetGameCode();
	/* vtable[25] */ virtual EMC_OpStatus DoesFileExist();
};

struct SaveTypeData {
	EMC_SaveType TypeID;
	u32 SizeInBytes;
	u32 SizeInClusters;
	IconData IconInfo;
	sceMcIconSys IconSys;
};

struct EPS2MemCard : EMemoryCard {
protected:
	bool m_Initialized;
	char m_GameCode[14];
	SaveTypeData m_SaveTypes[11];
	s32 m_ActiveFileHandle;
	u32 m_LoadFileSize;
	
public:
	EPS2MemCard& operator=();
	EPS2MemCard();
	EPS2MemCard();
	/* vtable[1] */ virtual EPS2MemCard(EPS2MemCard*, int, void);
	/* vtable[2] */ virtual EMC_OpStatus InitMemoryCard();
	/* vtable[3] */ virtual EMC_OpStatus UnInitMemoryCard();
	/* vtable[4] */ virtual EMC_OpStatus LoadDataS(char *pFileName, u32 Port, u32 Size, void *pOutData);
	/* vtable[5] */ virtual EMC_OpStatus SaveDataS(char *pFileName, u32 Port, u32 Size, void *pInData);
	/* vtable[6] */ virtual EMC_OpStatus DeleteDataS(char *pFileName, u32 Port, u32 Size);
	/* vtable[7] */ virtual EMC_OpStatus FormatCardS(u32 Port);
	/* vtable[8] */ virtual EMC_OpStatus UnFormatCardS(u32 Port);
	/* vtable[9] */ virtual EMC_OpStatus LoadDataA(char *pFileName, u32 Port, u32 Size, void *pOutData, EMC_Operation *pOpTypeOut);
	/* vtable[10] */ virtual EMC_OpStatus SaveDataA(char *pFileName, u32 Port, u32 Size, void *pInData, EMC_Operation *pOpTypeOut);
	/* vtable[11] */ virtual EMC_OpStatus DeleteDataA(char *pFileName, u32 Port, u32 Size, EMC_Operation *pOpTypeOut);
	/* vtable[12] */ virtual EMC_OpStatus FormatCardA(u32 Port, EMC_Operation *pOpTypeOut);
	/* vtable[13] */ virtual EMC_OpStatus UnFormatCardA(u32 Port, EMC_Operation *pOpTypeOut);
	/* vtable[14] */ virtual EMC_OpStatus UpdateOperation(EMC_Operation OpType, bool &IsOperationFinished);
	/* vtable[15] */ virtual EMC_OpStatus GetFreeSpaceS(u32 Port, u32 &FreeSpace);
	/* vtable[16] */ virtual EMC_OpStatus IsSpaceAvailable(u32 Port, EMC_SaveType Stype, bool &Available);
	/* vtable[17] */ virtual EMC_OpStatus IsSpaceAvailable();
	/* vtable[18] */ virtual EMC_OpStatus CheckForOverwriteSpace(u32 Port, u32 SpaceNeeded, EMC_SaveType SaveType, bool &Available);
	/* vtable[19] */ virtual bool IsCardAvailable(u32 Port);
	/* vtable[20] */ virtual bool AnyCardsPresent(s32 &WhichPort);
	/* vtable[21] */ virtual EMC_OpStatus IsCardFormated(u32 Port, bool &IsFormated);
	/* vtable[22] */ virtual EMC_OpStatus GetFileList(u32 Port, char *szPattern, u32 NumFiles, EMCFileName *pFileNameList);
	/* vtable[23] */ virtual void SetupSaveTypes(EMC_SaveType Stype, u32 SizeOfType);
	/* vtable[24] */ virtual void SetGameCode(char *pGameCode);
	/* vtable[25] */ virtual EMC_OpStatus DoesFileExist(char *pFileName, u32 Port, EMC_SaveType Stype, bool &bExists);
	void Setup3DIconData(EMC_SaveType Stype, u32 IconID, u32 CopyID, u32 DeleteID, u32 IconSize, u32 CopySize, u32 DeleteSize, char *pIconName, char *pCopyName, char *pDeleteName, int *BGColors[4], float *LightDirs[4], float *LightColors[4], float *AmbientColor);
	void SetBrowserText(EMC_SaveType Stype, c16 *pBrowserText, u32 LineBreak);
	EMC_OpStatus HasCardChanged(u32 Port, bool &Changed);
protected:
	EMC_OpStatus CreateTitleDirectory(EMC_SaveType Stype, u32 Port, char *pFileName);
	EMC_OpStatus CreateTitleFile(EMC_SaveType Stype, u32 Port, char *pFileName);
	EMC_OpStatus Create3DIconFile(EMC_SaveType Stype, u32 Port, char *pFileName);
	EMC_OpStatus CopyIconsToCard(EMC_SaveType Stype, u32 Port, char *pFileName);
	EMC_OpStatus CopySpecificIconToCard(EMC_SaveType Stype, u32 Port, u32 IconIndex, char *pFileName);
	EMC_OpStatus TouchMemoryCard(u32 Port);
	bool ValidatePort(u32 Port);
	u32 GetNumberOfClusters(u32 SizeInBytes);
	EMC_SaveType GetSaveTypeFromSize(u32 Size);
	u32 GetTotalSpaceForType(EMC_SaveType Stype, bool IncludeIcon);
	u32 GetClustersUsedByIcons(EMC_SaveType Stype, u32 &numberOfFiles);
	bool DoesTitleDirectoryExist(u32 Port, EMC_SaveType Stype, char *pFileName);
	void constructFilename(char *buffer, char *pFileName);
};

extern EPS2MemCard _ps2memcard;
extern EMemoryCard *_pMemoryCard;
extern __vtbl_ptr_type EPS2MemCard virtual table[27];
extern __vtbl_ptr_type EMemoryCard virtual table[27];

void EMemoryCard::~EMemoryCard(int __in_chrg);
void EPS2MemCard::~EPS2MemCard(int __in_chrg);
void global constructors keyed to _ps2memcard();
void global destructors keyed to _ps2memcard();

#endif // C__EOR_SRC2_ENGINE_PS2_MEMORYCARD_E_PS2MEMCARD_H

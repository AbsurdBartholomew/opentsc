// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2TEXTURE_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2TEXTURE_H

typedef long long unsigned int u128;
typedef NLIteratorPtrType *NLIterator;

struct ENodeListNode {
	NLData data;
	ENodeListNode *pLast;
	ENodeListNode *pNext;
	
	ENodeListNode& operator=();
	ENodeListNode();
	ENodeListNode();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

enum ETextureUpdateType {
	E_TEXUPDATE_READWRITE = 0,
	E_TEXUPDATE_READONLY = 1,
	E_TEXUPDATE_DISCARD = 2,
	E_TEXUPDATE_PALETTE = 3
};

typedef struct {
	long unsigned int TBP0 : 14;
	long unsigned int TBW : 6;
	long unsigned int PSM : 6;
	long unsigned int TW : 4;
	long unsigned int TH : 4;
	long unsigned int TCC : 1;
	long unsigned int TFX : 2;
	long unsigned int CBP : 14;
	long unsigned int CPSM : 4;
	long unsigned int CSM : 1;
	long unsigned int CSA : 5;
	long unsigned int CLD : 3;
} sceGsTex0;

typedef void (*FVramDiscardCallback)(/* parameters unknown */);

struct EVramAllocParams {
	u32 size;
	FVramDiscardCallback pfnCallback;
	u32 callbackParam;
	bool block;
};

typedef struct {
	u_int *pCurrent;
	u_long128 *pBase;
	u_long128 *pDmaTag;
	u_long *pGifTag;
} sceGifPacket;

struct EPs2TextureLoadData {
	u16 ramXSize;
	u16 ramYSize;
	int ramNBytes;
	int ramEnd;
	u16 vramXSize;
	u16 vramYSize;
	int vramNBytes;
	int vramEnd;
	u8 mipLevel;
	u128 *pDL;
};

struct EPs2Texture : ETexture {
protected:
	u64 pad1;
	EPs2TexturePatch m_txtPatch;
	void *m_pImg;
	void *m_pPal;
	void *m_pDlists[2];
	EVramEntry *m_pVramEntry;
	EVramEntry *m_pPaletteVramEntry;
	u16 m_nLoads;
	u16 m_nMaxRowsPerLoad;
	u16 m_needsLoading;
	u16 m_dlSize;
	u32 m_nImgBytes;
	u32 m_nVRAMBytes;
	u32 m_nRAMBytes;
	EPs2TextureLoadData m_loads[10];
	u128 *m_pLoadDLs;
	u128 *m_pLoadPalDL;
	long long unsigned int m_selectDMA[2][6];
	ETextureUpdateType m_updateType;
	bool m_LoadIndexedAs32Bit[10];
	TNodeList<EPs2Shader *> m_parentShaders[2];
	static EMutex m_lockMutex;
	static void *m_pGrayPal4bit;
	static void *m_pGrayPal8bit;
	static EVramEntry *m_pGrayPalEntry4bit;
	static EVramEntry *m_pGrayPalEntry8bit;
	
public:
	EPs2Texture& operator=();
	EPs2Texture();
protected:
	EPs2Texture();
	/* vtable[1] */ virtual EPs2Texture(EPs2Texture*, int, void);
public:
	/* vtable[2] */ virtual bool Lock();
	/* vtable[3] */ virtual void Unlock();
	/* vtable[4] */ virtual void Invalidate();
	/* vtable[5] */ virtual bool UpdateBegin(ETextureUpdateType updateType);
	/* vtable[6] */ virtual void* UpdateMipLevel(int mipLevel, int &pitchX, int &pitchY);
	/* vtable[7] */ virtual void* UpdatePalette();
	/* vtable[8] */ virtual void UpdateEnd();
	/* vtable[9] */ virtual bool Create(ETextureDef &td);
	/* vtable[10] */ virtual void Test1(int i0, int i1, int i2, int i3);
	/* vtable[12] */ virtual void Select(int renderPass);
protected:
	static bool Init(/* parameters unknown */);
public:
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
protected:
	void Deallocate();
	void BuildDlist(int blendA, int blendB, int blendC, int blendD, int blendFix, float mipShift);
	int GetPs2ImageFormat();
	int GetPs2ClutStorageFormat();
	void BuildLoadDlist(short int ps2ImageFormat);
	int GetClutLoadBufControl();
	void LoadToVRAM();
	static void DiscardCallback(/* parameters unknown */);
	void SetMipStartAddr(void *pDL, int level, u32 vramAddr);
	void PostProcessImageData();
	/* vtable[13] */ virtual bool GetPaddedSize(int *x, int *y, int bpp);
	bool GetPaddedSizeVRAM(int *x, int *y, int bpp);
	static void InterleavePalette(/* parameters unknown */);
	void PatchSetupDL(void *pDL, u32 vramAddr, u32 palVramAddr, sceGsTex0 *pTex0);
	void ChangeLocks(int nAdd);
	void SetLocks(int newLocks, bool useMutex);
	void UpdatePatch(sceGsTex0 *pTex0);
public:
	void OverrideVRAM(ERC *prc, u32 vramAddr, int format);
	void AddParentShader(EPs2Shader *pShader, int renderPass);
	void RemoveParentShader(EPs2Shader *pShader, int renderPass);
	void AcquireLockMutex();
	void ReleaseLockMutex();
};

extern EVramEntry *EPs2Texture::m_pGrayPalEntry4bit;
extern EVramEntry *EPs2Texture::m_pGrayPalEntry8bit;
extern void *EPs2Texture::m_pGrayPal4bit;
extern void *EPs2Texture::m_pGrayPal8bit;
extern EMutex EPs2Texture::m_lockMutex;
extern __vtbl_ptr_type EPs2Texture virtual table[15];

void EPs2Texture::~EPs2Texture(int __in_chrg);
void FillLoadDL__FPUxR12sceGifPacketiiiiiiiPvbN210_(u128 *pLoadDL, sceGifPacket &gifPkt, int format, int bitsPerTexel, int padXSize, int padYSize, int xSize, int ySize, int nqw, void *pImg, bool first, bool last, bool loadIndexedAs32Bit);
void __builtin_vec_delete(void *pAddress);
void TNodeList<EPs2Shader *>::~TNodeList(int __in_chrg);
EVramAllocParams* EVramAllocParams::EVramAllocParams();
void ENodeList::~ENodeList(int __in_chrg);
ENodeListNode*& TLinkedList<ENodeListNode, 4, 8>::Next(void *pNode);
ENodeListNode* TLinkedList<ENodeListNode, 4, 8>::Head();
void __builtin_delete(void *pAddress);
TLinkedList<ENodeListNode,4,8>* TLinkedList<ENodeListNode, 4, 8>::TLinkedList();
void TLinkedList<ENodeListNode, 4, 8>::Init();
void TLinkedList<ENodeListNode, 4, 8>::RemoveAll();
void global constructors keyed to EPs2Texture::m_pGrayPalEntry4bit();
void global destructors keyed to EPs2Texture::m_pGrayPalEntry4bit();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2TEXTURE_H

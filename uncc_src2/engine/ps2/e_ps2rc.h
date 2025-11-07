// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2RC_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2RC_H

struct TNodeList<ETexture *> : ENodeList {
	TNodeList(TNodeList<ETexture *>*, int, void);
	TNodeList();
	TNodeList();
	static ETexture* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail(ETexture *data);
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ETexture *>& operator=();
	void MoveContents();
};

struct TNodeList<int> : ENodeList {
	TNodeList(TNodeList<int>*, int, void);
	TNodeList();
	TNodeList();
	static int GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail(int data);
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<int>& operator=();
	void MoveContents();
};

struct EGEPackedParticle {
	float x;
	float y;
	float z;
	float rot;
	float width;
	float height;
	u32 rot180;
	u32 pad1;
	u32 r;
	u32 g;
	u32 b;
	u32 a;
};

enum ETCTransformSource {
	E_TCSRC_POSITION = 0,
	E_TCSRC_NORMAL = 1,
	E_TCSRC_TC0 = 2,
	E_TCSRC_TC1 = 3,
	E_TCSRC_REFLECT = 4
};

struct EPs2RC : ERC {
protected:
	EVif m_vif;
	bool m_inDmaChain;
	int m_endMutex;
	int m_dmaBranchCount;
	int m_nChains;
	int m_nChainBreaks;
	u32 *m_pDmaBuf;
	u32 *m_pLastBranch;
	int m_curMPG;
	int m_curInputBuffer;
	
public:
	EPs2RC& operator=();
	EPs2RC();
protected:
	EPs2RC();
	/* vtable[1] */ virtual EPs2RC(EPs2RC*, int, void);
public:
	/* vtable[2] */ virtual void TriStrip(int nVerts, s16 *xyzs, s16 *texcoords, u8 *colors, s8 *normals, u8 *weights);
	/* vtable[3] */ virtual void TriStrip();
	/* vtable[4] */ virtual void TriStrip();
	/* vtable[13] */ virtual void PointList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights);
	/* vtable[10] */ virtual void LineList(EGEVert *verts, int nVerts);
	/* vtable[50] */ virtual void MipMapSetup(EGEVert *verts, bool useSize, bool useAngle);
	/* vtable[51] */ virtual void SetMipMap(float scaleMult, float angularMult);
	/* vtable[24] */ virtual void ModelMatrices(EMat4 *mModels, int pos, int count);
	/* vtable[23] */ virtual void Scissor(EFloatRect *pScis);
	/* vtable[43] */ virtual void Material(EMaterial *pMaterial);
	/* vtable[41] */ virtual void Lights(ELights *pLights, int nDirectionalLights);
	bool VerifyDmaChainSize(int nNewBytes);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[48] */ virtual void SendHardwareDisplayList(void *pDList, u16 size);
	/* vtable[33] */ virtual void EnableGeometryModes(u32 modeFlags);
	/* vtable[34] */ virtual void DisableGeometryModes(u32 modeFlags);
	/* vtable[35] */ virtual void SetGeometryModes(u32 modeFlags);
	/* vtable[36] */ virtual void EnableRasterModes(u32 modeFlags, int renderPass);
	/* vtable[37] */ virtual void DisableRasterModes(u32 modeFlags, int renderPass);
	/* vtable[38] */ virtual void SetRasterModes(u32 modeFlags, int renderPass);
	/* vtable[29] */ virtual void WindowMatrix(EMat4 *pmWindow);
	/* vtable[18] */ virtual void DisplayList(EDL *pDL);
	/* vtable[56] */ virtual void Debug(u32 val1, u32 val2);
	/* vtable[45] */ virtual void Rect(EVec2 &vUpperLeft, EVec2 &vLowerRight, EVec2 &vUpperLeftTC, EVec2 &vLowerRightTC, EVec4 &vColor, float depth);
	/* vtable[54] */ virtual void AlphaTest(bool enable, int method, float threshold, int renderPass);
	/* vtable[53] */ virtual void ZTest(bool enable, int method, int write, int renderPass);
	/* vtable[66] */ virtual void Terminate();
	/* vtable[60] */ virtual void SleepUntil(int wakup);
	/* vtable[32] */ virtual void Texture(ETexture *pTexture, int renderPass);
	void TextureWait(ETexture *pTexture, EPs2TexturePatch *pPatch, int renderPass);
	void TextureDone(int renderPass);
	void SetCurTexture(ETexture *pTexture, int renderPass);
	void ShaderDL(void *pDList, u16 size);
	void FlushDmaFifo();
	void SetGSRegister(int regAddr, u64 value);
	/* vtable[64] */ virtual void LoadMPG(int primtype);
	/* vtable[46] */ virtual void RectList(int nRects, float *args, EVec4 &vColor, float depth);
	/* vtable[47] */ virtual void DirectRect(EVec2 &vPos, EVec2 &vScale, EVec4 &vColor, float depth);
	/* vtable[31] */ virtual void TextureMatrix(EMat4 *pmTexture, ETCTransformSource source, bool useLookAt, bool perspectiveDivide, int renderPass);
	/* vtable[15] */ virtual void ParticleList(int nParticles, EGEPackedParticle *pPcls);
	/* vtable[16] */ virtual void ParticleListRot(int nParticles, EGEPackedParticle *pPcls);
	/* vtable[20] */ virtual void Viewport(EViewport *pVP);
	/* vtable[21] */ virtual void ClipRatio(float clipRatio);
	/* vtable[27] */ virtual void ViewMatrix(EMat4 *pmView);
	/* vtable[28] */ virtual void ProjectionMatrix(EMat4 *pmProjection);
protected:
	/* vtable[65] */ virtual void Init(RCMode mode);
	/* vtable[68] */ virtual void BeginCommand(int command, int prim);
	/* vtable[70] */ virtual void GeometrySetup();
	void CallVU1(u32 pFunction, bool swapInputBuffers);
	void AddDataImmediate(void *pDst, void *pSrc, int nBytes);
	void AddDataRef(void *pDst, void *pSrc, int nBytes);
	/* vtable[71] */ virtual void FlushQueuedMatrices();
	/* vtable[72] */ virtual void QueueMatrices(EMat4 *mModels, int pos, int count);
	u32* BeginDma(bool branch);
	u32* EndDma(bool branch);
	void VerifyMPG(int primtype);
	void DoLoadMPG(int mpg);
	void DoVerifyMPG(int mpg);
	void DoParticleList(int nParticles, EGEPackedParticle *pPcls, bool useRot);
};

extern TFixedPool<EPs2RC,4> _ps2rendercontext_pool;
extern int _cpuline;
extern __vtbl_ptr_type EPs2RC virtual table[74];
extern long long unsigned int _zeroBuf[16];

void EPs2RC::~EPs2RC(int __in_chrg);
TFixedPool<EPs2RC,4>* TFixedPool<EPs2RC, 4>::TFixedPool();
void TFixedPool<EPs2RC, 4>::~TFixedPool(int __in_chrg);
EVec4 operator*(float scaler, EVec4 &vVec);
EPs2RC* TFixedPool<EPs2RC, 4>::Alloc();
void TFixedPool<EPs2RC, 4>::Free(EPs2RC *p);
void global constructors keyed to _ps2rendercontext_pool();
void global destructors keyed to _ps2rendercontext_pool();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2RC_H

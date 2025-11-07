// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2RENDERER_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2RENDERER_H

struct EDLEntry {
	u64 align_data;
};

struct EPs2GECommandData {
	PFNCPUGECommand pfnCommand;
	unsigned int params[3];
};

struct EPs2GEInputBuffer {
	EPs2GECommandData command;
	unsigned int params[16];
	EGEVert verts[42];
	u32 overflow;
	unsigned int pad[3];
};

struct EPs2TestState {
	u8 zbTest;
	u8 zbMethod;
	u8 zbWrite;
	u8 alphaTest;
	u8 alphaMethod;
	u8 alphaThreshold;
};

struct EPs2RenderState {
	u32 geomModes;
	EPs2RenderPassState p[2];
};

struct EPs2Renderer : ERenderer {
protected:
	EDLEntry *m_pc;
	static void (*m_jumpTable[62])(/* parameters unknown */);
	EDLEntry *m_callStack[10];
	int m_callStackPos;
	int m_stateStackPos;
	int m_nInputBuffer;
	int m_nTotalVerts;
	int m_currentFrameBuffer;
	bool m_done;
	bool m_testRegistersNeedSetting;
	EPs2RenderState m_stateStack[10];
	u32 m_callbackParam32;
	u16 m_callbackParam16;
	u8 m_callbackParam8;
	EMsgQueue m_commandQueue;
	ESemaphore m_textureSemaphore;
	long long unsigned int m_testDL[6];
	long long unsigned int m_blendDL[3];
	long long unsigned int m_combineDL[3];
	EPs2TestState m_test[2];
	EClock m_rendClock;
	float m_totalTime;
	EClock m_geClock;
	float m_geTime;
	int m_nVUInterrupts;
	int m_nGSInterrupts;
	int m_nVramLoadBytes;
	int m_nTextureFaults;
	int m_nMPGLoads;
	
public:
	EPs2Renderer& operator=();
	EPs2Renderer();
	EPs2Renderer();
	/* vtable[1] */ virtual EPs2Renderer(EPs2Renderer*, int, void);
	bool Init();
	void Queue(ESchedCommand *pCmd);
	void FrameComplete();
	void TextureLoaded(ETexture *pTexture, int renderPass);
	void VerifyFlush();
	void Wakeup(int wakeup);
	void UnlockDoneTextures(int renderPass);
	/* vtable[3] */ virtual ETexture* GetCurrentTexture(int renderPass);
protected:
	/* vtable[2] */ virtual void Main();
	void Execute(EDLEntry *pDLE);
	void BeginFrame();
	void EndFrame();
	void InitGE();
	EPs2GEInputBuffer* GetGEInputBuffer();
	void SyncDMA(void *pDest, void *pSource, u32 size);
	static void ResetPrimModes(/* parameters unknown */);
	void WaitForNewTexture(ETexture *pWaitTexture);
	void DoTextureWait(ETexture *pTexture);
	void DoTextureSetup(ETexture *pNewTexture, int renderPass);
	void DoSetCurTexture(ETexture *pNewTexture, int renderPass);
	void DoTextureDone(int renderPass);
	void UnlockDoneTextures(EPs2Renderer*, int, void);
	void VerifyMicrocodeConstants();
	void ComputeLightColorMatrix();
	void UpdateGELightData();
	void SetGEGeometryModes();
	void SetGEPrimModes(EPs2Renderer*, int, void);
	void SetTestRegisters();
	static u8 GetCommand(/* parameters unknown */);
	static void TriStrip(/* parameters unknown */);
	static void TriStripPacked(/* parameters unknown */);
	static void TriFan(/* parameters unknown */);
	static void TriList(/* parameters unknown */);
	static void QuadList(/* parameters unknown */);
	static void LineList(/* parameters unknown */);
	static void LineStrip(/* parameters unknown */);
	static void PointList(/* parameters unknown */);
	static void SpriteList(/* parameters unknown */);
	static void DisplayList(/* parameters unknown */);
	static void Goto(/* parameters unknown */);
	static void End(/* parameters unknown */);
	static void SaveState(/* parameters unknown */);
	static void RestoreState(/* parameters unknown */);
	static void Viewport(/* parameters unknown */);
	static void ClipRatio(/* parameters unknown */);
	static void Scissor(/* parameters unknown */);
	static void ModelMatrices(/* parameters unknown */);
	static void ViewMatrix(/* parameters unknown */);
	static void ProjectionMatrix(/* parameters unknown */);
	static void WindowMatrix(/* parameters unknown */);
	static void TextureMatrix(/* parameters unknown */);
	static void Texture(/* parameters unknown */);
	static void EnableGeometryModes(/* parameters unknown */);
	static void DisableGeometryModes(/* parameters unknown */);
	static void SetGeometryModes(/* parameters unknown */);
	static void EnableRasterModes(/* parameters unknown */);
	static void DisableRasterModes(/* parameters unknown */);
	static void SetRasterModes(/* parameters unknown */);
	static void Lights(/* parameters unknown */);
	static void Material(/* parameters unknown */);
	static void SendGSDisplayList(/* parameters unknown */);
	static void CallbackParam(/* parameters unknown */);
	static void Callback(/* parameters unknown */);
	static void GEList(/* parameters unknown */);
	static void Rect(/* parameters unknown */);
	static void DirectRect(/* parameters unknown */);
	static void Memcpy(/* parameters unknown */);
	static void Material(/* parameters unknown */);
	static void MipMapSetup(/* parameters unknown */);
	static void RecalcMatrices(/* parameters unknown */);
	static void Debug(/* parameters unknown */);
	static void SetMipMap(/* parameters unknown */);
	static void GeometrySetup(/* parameters unknown */);
	static void ZTest(/* parameters unknown */);
	static void AlphaTest(/* parameters unknown */);
	static void RenderSurface(/* parameters unknown */);
	static void Vertex(/* parameters unknown */);
	static void TriIndexed(/* parameters unknown */);
	static void SaveImageData(/* parameters unknown */);
	static void PointListPacked(/* parameters unknown */);
	static void SpriteListPacked(/* parameters unknown */);
	static void SetCombineMode(/* parameters unknown */);
	static void SetBlendMode(/* parameters unknown */);
	static void PointLight(/* parameters unknown */);
	static void Noop(/* parameters unknown */);
	static void ClipRect(/* parameters unknown */);
	static void MovieFrame(/* parameters unknown */);
	static void TriStripPackedInt(/* parameters unknown */);
	static void VerifyMpg(/* parameters unknown */);
	static void RectList(/* parameters unknown */);
	static void ParticleList(/* parameters unknown */);
	static void ParticleListRot(/* parameters unknown */);
};

extern ERenderer *_pRend;
extern EPs2Renderer _ps2rend;
extern float _getime;
extern int _vertsperframe;
extern int _nVUInterrupts;
extern int _nMPGLoads;
extern int _nGSInterrupts;
extern int _nVramLoadBytes;
extern int _nTextureFaults;
extern ETexture *_pWaitTexture;
extern void (*EPs2Renderer::m_jumpTable[62])(/* parameters unknown */);
extern __vtbl_ptr_type EPs2Renderer virtual table[5];

void EPs2Renderer::~EPs2Renderer(int __in_chrg);
void RecalcMetersPerPixel();
void global constructors keyed to _pRend();
void global destructors keyed to _pRend();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2RENDERER_H

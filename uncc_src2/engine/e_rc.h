// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_RC_H
#define C__EOR_SRC2_ENGINE_E_RC_H

typedef signed char s8;

struct EGEVert {
	EVec4 vModel;
	int normal[4];
	EVec4 tc;
	unsigned int color[4];
	unsigned int weights[4];
};

typedef void (*PFNRCCallback)(/* parameters unknown */);

struct ERC {
protected:
	EDL *m_pdl;
	int m_nEntriesLeftInSeg;
	EDLEntry *m_pEntry;
	RCMode m_mode;
	bool m_closed;
	bool m_anyCommands;
	int m_lastCommand;
	int m_lastMatrixPos;
	int m_firstMatrixPos;
	int m_dstBufferOffset;
	int m_nSegs;
public:
	__vtbl_ptr_type *$vf943;
	
	ERC& operator=();
	ERC();
protected:
	ERC();
	/* vtable[1] */ virtual ERC(ERC*, int, void);
public:
	void Send();
	/* vtable[2] */ virtual void TriStrip(int nVerts, s16 *xyzs, s16 *texcoords, u8 *colors, s8 *normals, u8 *weights);
	/* vtable[3] */ virtual void TriStrip();
	/* vtable[4] */ virtual void TriStrip();
	/* vtable[5] */ virtual void TriIndexed(int nTris, u8 *ids);
	/* vtable[6] */ virtual void Vertex(int nVerts, int pos, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights);
	/* vtable[7] */ virtual void TriFan(EGEVert *verts, int nVerts);
	/* vtable[8] */ virtual void TriList(EGEVert *verts, int nVerts);
	/* vtable[9] */ virtual void QuadList(EGEVert *verts, int nVerts);
	/* vtable[10] */ virtual void LineList(EGEVert *verts, int nVerts);
	/* vtable[11] */ virtual void LineStrip(EGEVert *verts, int nVerts);
	/* vtable[12] */ virtual void PointList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights);
	/* vtable[13] */ virtual void PointList();
	/* vtable[14] */ virtual void SpriteList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights);
	/* vtable[15] */ virtual void ParticleList(int nParticles, EGEPackedParticle *pPcls);
	/* vtable[16] */ virtual void ParticleListRot(int nParticles, EGEPackedParticle *pPcls);
	/* vtable[17] */ virtual void SpriteList();
	/* vtable[18] */ virtual void DisplayList(EDL *pDL);
	/* vtable[19] */ virtual void Goto(EDL *pDL);
	/* vtable[20] */ virtual void Viewport(EViewport *pVP);
	/* vtable[21] */ virtual void ClipRatio(float clipRatio);
	/* vtable[22] */ virtual void ClipRect(EFloatRect &rect);
	/* vtable[23] */ virtual void Scissor(EFloatRect *pScis);
	/* vtable[24] */ virtual void ModelMatrices(EMat4 *mModels, int pos, int count);
	/* vtable[25] */ virtual void ModelMatrix(EMat4 *pmModel);
	/* vtable[26] */ virtual void ModelMatrixId();
	/* vtable[27] */ virtual void ViewMatrix(EMat4 *pmView);
	/* vtable[28] */ virtual void ProjectionMatrix(EMat4 *pmProjection);
	/* vtable[29] */ virtual void WindowMatrix(EMat4 *pmWindow);
	/* vtable[30] */ virtual void EnvironmentMap(bool enable, bool calculateReflectionVector, int renderPass);
	/* vtable[31] */ virtual void TextureMatrix(EMat4 *pmTexture, ETCTransformSource source, bool useLookAt, bool perspectiveDivide, int renderPass);
	/* vtable[32] */ virtual void Texture(ETexture *pTexture, int renderPass);
	/* vtable[33] */ virtual void EnableGeometryModes(u32 modeFlags);
	/* vtable[34] */ virtual void DisableGeometryModes(u32 modeFlags);
	/* vtable[35] */ virtual void SetGeometryModes(u32 modeFlags);
	/* vtable[36] */ virtual void EnableRasterModes(u32 modeFlags, int renderPass);
	/* vtable[37] */ virtual void DisableRasterModes(u32 modeFlags, int renderPass);
	/* vtable[38] */ virtual void SetRasterModes(u32 modeFlags, int renderPass);
	/* vtable[39] */ virtual void SaveState();
	/* vtable[40] */ virtual void RestoreState();
	/* vtable[41] */ virtual void Lights(ELights *pLights, int nDirectionalLights);
	/* vtable[42] */ virtual void PointLight(EPointLight *pPointLight);
	/* vtable[43] */ virtual void Material(EMaterial *pMaterial);
	/* vtable[44] */ virtual void Callback(PFNRCCallback pfnCallback, u32 param32, u16 param16, u8 param8);
	/* vtable[45] */ virtual void Rect(EVec2 &vUpperLeft, EVec2 &vLowerRight, EVec2 &vUpperLeftTC, EVec2 &vLowerRightTC, EVec4 &vColor, float depth);
	/* vtable[46] */ virtual void RectList(int nRects, float *args, EVec4 &vColor, float depth);
	/* vtable[47] */ virtual void DirectRect(EVec2 &vPos, EVec2 &vScale, EVec4 &vColor, float depth);
	/* vtable[48] */ virtual void SendHardwareDisplayList(void *pDList, u16 size);
	void* Alloc(unsigned int size, int alignment);
	void AllocExternal(void *pData, int size);
	void* AllocFlushable(unsigned int size, int alignment);
	void AllocFlushableExternal(void *pData, int size);
	/* vtable[49] */ virtual void Memcpy(void *pDest, void *pSource, int size);
	/* vtable[50] */ virtual void MipMapSetup(EGEVert *verts, bool useSize, bool useAngle);
	/* vtable[51] */ virtual void SetMipMap(float scaleMult, float angularMult);
	/* vtable[52] */ virtual void RecalcMatrices(int pos, int count);
	/* vtable[53] */ virtual void ZTest(bool enable, int method, int write, int renderPass);
	/* vtable[54] */ virtual void AlphaTest(bool enable, int method, float threshold, int renderPass);
	/* vtable[55] */ virtual void RenderSurface(ERenderSurface *pSurface, int which);
	/* vtable[56] */ virtual void Debug(u32 val1, u32 val2);
	/* vtable[57] */ virtual void SaveImageData(ERenderSurface *pSurface);
	void Validate();
	/* vtable[58] */ virtual void SetCombineMode(int mode, int pass);
	/* vtable[59] */ virtual void SetBlendMode(int a, int b, int c, int d, int k, int pass);
	/* vtable[60] */ virtual void SleepUntil(int wakup);
	/* vtable[61] */ virtual void Noop();
	/* vtable[62] */ virtual void ZClear(float zval);
	/* vtable[63] */ virtual void MovieFrame(EMovie *pMovie);
	/* vtable[64] */ virtual void LoadMPG(int primtype);
protected:
	/* vtable[65] */ virtual void Init(RCMode mode);
	/* vtable[66] */ virtual void Terminate();
	/* vtable[67] */ virtual EDLEntry* NewEntry(int count);
	static void Connect(/* parameters unknown */);
	void AddDisplayListReference(EDL *pDL);
	void ShrinkSmallDisplayList();
	/* vtable[68] */ virtual void BeginCommand(int command, int prim);
	/* vtable[69] */ virtual void EndCommand();
	/* vtable[70] */ virtual void GeometrySetup();
	/* vtable[71] */ virtual void FlushQueuedMatrices();
	/* vtable[72] */ virtual void QueueMatrices(EMat4 *mModels, int pos, int count);
};

struct EPointLight {
	EVec3 vColor;
	EVec3 vPos;
	float radSq;
};

extern __vtbl_ptr_type ERC virtual table[74];

void ERC::~ERC(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_RC_H

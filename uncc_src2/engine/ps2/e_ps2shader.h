// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2SHADER_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2SHADER_H

struct EShaderRenderPassDef {
	ETexture *pTexture;
	u32 rasterModes;
	u32 flags;
	float alphaTestThreshold;
	u8 blendA;
	u8 blendB;
	u8 blendC;
	u8 blendD;
	u8 blendFix;
	u8 combine;
	u8 textureGen;
};

struct EPs2Shader : EShader {
protected:
	EPs2TexturePatch *m_txtPatches;
	EDL *m_pSelectDL;
	EGEVert *m_mipMapVerts;
	void *m_pTextureSelectDLs[2];
	int m_textureSelectDLSize[2];
	
public:
	EPs2Shader& operator=();
	EPs2Shader();
protected:
	EPs2Shader();
	/* vtable[1] */ virtual EPs2Shader(EPs2Shader*, int, void);
public:
	static void* operator new(/* parameters unknown */);
	/* vtable[2] */ virtual void Select(ERC *prc, int geometryPass);
	/* vtable[3] */ virtual void SelectForShadowMask(ERC *prc);
	/* vtable[4] */ virtual bool Create(EShaderDef &sd);
	/* vtable[5] */ virtual void ChangeMaterial(EMaterial &mat);
	void SetMipMapVerts(EGEVert *verts);
protected:
	static void Init(/* parameters unknown */);
	static void DisplayListCallback(/* parameters unknown */);
	static void DisplayListCallbackShadowMask(/* parameters unknown */);
	void AboutToDestroy();
	void PatchCombineAndBlendModes(void *pDL, int curPass);
	void PatchAlphaAndZModes(void *pDL, int curPass);
	void SelectTexture(ERC *pRC, ETexture *pTexture, int renderPass);
	void SetupRenderPass(ERC *pRC, EShaderRenderPassDef *pPass, int renderPass);
	void TextureChanged();
	void UpdateLocks(int newLocks, int renderPass);
	void Deallocate();
	void BuildSelectDL(ERC *prc, int geometryPass);
	void DestroySelectDL();
	void UpdatePatch(sceGsTex0 *pTex0, int renderPass);
	void FlushPatch(EPs2TexturePatch *pPatch);
};

extern __vtbl_ptr_type EPs2Shader virtual table[9];

void EPs2Shader::~EPs2Shader(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2SHADER_H

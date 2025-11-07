// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SHADER_E_SHADER_H
#define C__EOR_SRC2_ENGINE_SHADER_E_SHADER_H

struct EMaterial {
	EVec4 vDiffuseColor;
	EVec4 vAmbientColor;
};

enum ESurfaceType {
	E_ST_UNDEFINED = 0,
	E_ST_DEFAULT = 1,
	E_ST_GRASS = 2,
	E_ST_DIRT = 3,
	E_ST_STONE = 4,
	E_ST_WOOD = 5,
	E_ST_STEEL = 6,
	E_ST_SAND = 7,
	E_ST_QUICKSAND = 8,
	E_ST_WATER = 9,
	E_ST_SNOW = 10,
	E_ST_ICE = 11,
	E_ST_MUD = 12,
	E_ST_LAVA = 13,
	E_ST_NUMBER_OF_SURFACE_TYPES = 14
};

struct EShaderDef {
	u32 geometryModes;
	u32 flags;
	u8 nRenderPasses;
	u8 sortMode;
	s32 sortValue;
	EShaderRenderPassDef rp[2];
	EMaterial mat;
	ESurfaceType surfaceType;
};

struct EShader {
protected:
	EShaderDef m_sd;
	u32 m_validsig;
	u32 m_ORedRenderPassFlags;
	EOrderTableData *m_pUnclippedOTDataHead;
	EOrderTableData *m_pClippedOTDataHead;
	bool m_inOTList;
	EShader *m_pOrderTableNext;
	EShader *m_pAlternate;
public:
	__vtbl_ptr_type *$vf1630;
	
	EShader& operator=();
	EShader();
protected:
	EShader();
	/* vtable[1] */ virtual EShader(EShader*, int, void);
public:
	int GetGeometryPassCount();
	/* vtable[2] */ virtual void Select(ERC *prc, int geometryPass);
	/* vtable[3] */ virtual void SelectForShadowMask(ERC *prc);
	/* vtable[4] */ virtual bool Create(EShaderDef &sd);
	/* vtable[5] */ virtual void ChangeMaterial(EMaterial &mat);
	EMaterial* GetMaterial();
	void SetSurfaceProperty(u32 property);
	void ClearSurfaceProperty(u32 property);
	bool IsSurface(u32 property);
	u32 GetSurfaceProperties();
	ESurfaceType GetSurfaceType();
	void SetSurfaceType(ESurfaceType surfaceType);
	ETexture* GetTexture(u8 nRenderPassIndex);
	/* vtable[6] */ virtual void Validate();
	/* vtable[7] */ virtual void SetAlternateShader(EShader *pAlternate);
	EShaderDef* GetShaderDef();
protected:
	bool UsesMipMapping();
};

extern __vtbl_ptr_type EShader virtual table[9];

void EShader::~EShader(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_SHADER_E_SHADER_H

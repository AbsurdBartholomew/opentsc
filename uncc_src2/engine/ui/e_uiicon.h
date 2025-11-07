// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UIICON_H
#define C__EOR_SRC2_ENGINE_UI_E_UIICON_H

struct EUIIcon : EUIObjectNode {
protected:
	EUIIconDef m_def;
	int m_ActivatedPad;
	bool m_pressed;
	unsigned int m_maxBackShdrSize[2][2];
	ERShader *m_pShaders[2];
	static EVec4 m_vColors[10];
	
public:
	EUIIcon& operator=();
	EUIIcon(EUIIconDef _def, int activeShdr, int inactiveShdr, int trigger);
	EUIIcon();
	/* vtable[1] */ virtual EUIIcon(EUIIcon*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void InitShaders(int active, int inactive);
	void InitActiveShader(int id);
	void InitInActiveShader(int id);
	void DrawShader(ERC *prc);
	/* vtable[14] */ virtual void ShaderRect(ERC *prc, int i, EVec4 &color);
	void SetDef(EUIIconDef &_def);
	EUIIconDef& GetDef();
	static void SetIconColor(/* parameters unknown */);
	static EVec4& GetIconColor(/* parameters unknown */);
protected:
	int GetButton();
};

extern EVec4 EUIIcon::m_vColors[10];
extern __vtbl_ptr_type EUIIcon virtual table[16];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EUIIcon::~EUIIcon(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to EUIIcon::m_vColors();

#endif // C__EOR_SRC2_ENGINE_UI_E_UIICON_H

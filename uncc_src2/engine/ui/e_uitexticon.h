// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UITEXTICON_H
#define C__EOR_SRC2_ENGINE_UI_E_UITEXTICON_H

struct EUITextIconDef {
	u32 m_maxChars;
	EFontAlignX m_xAlign;
	EFontAlignY m_yAlign;
	f32 m_pointsize;
	u32 m_selColorIdx;
	u32 m_colorIdx;
	u16 m_retChar;
};

struct EUITextIcon : EUIIcon {
protected:
	ERFont *m_pFont;
	EUITextIconDef m_textdef;
	
public:
	EUITextIcon& operator=();
	EUITextIcon();
	EUITextIcon();
	/* vtable[1] */ virtual EUITextIcon(EUITextIcon*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[15] */ virtual void SetText();
	/* vtable[16] */ virtual void InitString();
	/* vtable[17] */ virtual void SetText();
	/* vtable[18] */ virtual void InitString();
	/* vtable[19] */ virtual void SetTextDef();
	/* vtable[20] */ virtual u16* GetText();
	EUITextIconDef& GetTextDef();
	void SetFont(int fontId);
	void SetPointSize(float size);
protected:
	/* vtable[21] */ virtual void DrawText();
};

struct EUIDynTextIcon : EUITextIcon {
protected:
	u16 *m_p;
	
public:
	EUIDynTextIcon& operator=();
	EUIDynTextIcon(EUITextIconDef &textDef, EUIIconDef &iconDef, int fontId, EVec3 vPos);
	EUIDynTextIcon();
	/* vtable[1] */ virtual EUIDynTextIcon(EUIDynTextIcon*, int, void);
	/* vtable[15] */ virtual void SetText(u16 *str);
	/* vtable[16] */ virtual void InitString(u16 *str, int newbuffSize);
	/* vtable[17] */ virtual void SetText();
	/* vtable[18] */ virtual void InitString();
	/* vtable[19] */ virtual void SetTextDef(EUITextIconDef &def);
	/* vtable[20] */ virtual u16* GetText();
protected:
	/* vtable[21] */ virtual void DrawText(ERC *prc);
};

struct EUIStaticTextIcon : EUITextIcon {
protected:
	u16 *m_pLong;
	char *m_pShort;
	
public:
	EUIStaticTextIcon& operator=();
	EUIStaticTextIcon(EUITextIconDef &textDef, EUIIconDef &iconDef, int fontId, EVec3 vPos);
	EUIStaticTextIcon();
	/* vtable[1] */ virtual EUIStaticTextIcon(EUIStaticTextIcon*, int, void);
	/* vtable[15] */ virtual void SetText(u16 *str);
	/* vtable[16] */ virtual void InitString(u16 *str, int newbuffSize);
	/* vtable[17] */ virtual void SetText();
	/* vtable[18] */ virtual void InitString();
	/* vtable[19] */ virtual void SetTextDef(EUITextIconDef &def);
	/* vtable[20] */ virtual u16* GetText();
protected:
	/* vtable[21] */ virtual void DrawText(ERC *prc);
};

extern __vtbl_ptr_type EUIStaticTextIcon virtual table[23];
extern __vtbl_ptr_type EUIDynTextIcon virtual table[23];
extern __vtbl_ptr_type EUITextIcon virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EUITextIcon::~EUITextIcon(int __in_chrg);
void EUIDynTextIcon::~EUIDynTextIcon(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void EUIStaticTextIcon::~EUIStaticTextIcon(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_UI_E_UITEXTICON_H

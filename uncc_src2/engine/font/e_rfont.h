// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_FONT_E_RFONT_H
#define C__EOR_SRC2_ENGINE_FONT_E_RFONT_H

enum EFontAlignX {
	E_FAX_LEFT = 0,
	E_FAX_RIGHT = 1,
	E_FAX_CENTER = 2
};

enum EFontAlignY {
	E_FAY_TOP = 0,
	E_FAY_BOTTOM = 1,
	E_FAY_CENTER = 2
};

struct ERFont : EResource {
	static ETypeInfo m_typeInfo;
protected:
	static EVec2 m_vScaler;
	EFontData m_fd;
	float m_ysize;
	float m_aspect;
	EFontSize *m_pCurrentSize;
	EVec4 m_vColor;
	
public:
	ERFont& operator=();
	ERFont();
	static ERFont* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERFont* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ERFont();
	/* vtable[6] */ virtual ERFont(ERFont*, int, void);
	void SetSize(float ySize, float aspect, bool findClosestSize);
	float GetYSize();
	float GetAspect();
	EVec2 GetStringSize(u16 *szString, EWindow *pWin);
	EVec2 GetStringSize();
	float GetLineSpacing(EWindow *pWin);
	void SetColor(EVec4 &vColor);
	void Select(ERC *prc);
	void Draw(ERC *prc, u16 *szString, EVec2 &vPos, EFontAlignX xAlign, EFontAlignY yAlign, EVec2 *pvBotRightPosOut);
	void Draw();
	void Deallocate();
	void Load(EStream &s);
	static void SetScaler(/* parameters unknown */);
	static void GetScaler(/* parameters unknown */);
	/* vtable[10] */ virtual void Reload(EStream &s);
	void LoadFont();
protected:
	void DoDraw(void *szString, bool doubleByte, bool snapToPixelX, bool snapToPixelY, EVec2 &vPos, ERC *prc, EVec2 *pvBotRightPosOut, EWindow *pWin);
	void DoDrawAlign(ERC *prc, void *szString, bool doubleByte, EVec2 vPos, EFontAlignX xAlign, EFontAlignY yAlign, EVec2 *pvBotRightPosOut);
	EVec2 DoGetStringSize(void *szString, bool doubleByte, EWindow *pWin);
	u32 GetChar(void *szString, bool doubleByte, int index);
	void SnapPosToPixel(EVec2 &vPos, bool snapPosX, bool snapPosY, EWindow *pWin);
};

extern EVec2 ERFont::m_vScaler;
extern ETypeInfo *gpTypeInfo_ERFont;
extern __vtbl_ptr_type ERFont virtual table[13];
extern ETypeInfo ERFont::m_typeInfo;

EStream& operator<<(EStream &s, ERFont *pD);
EStream& operator>>(EStream &s, ERFont *&pD);
void ERFont::~ERFont(int __in_chrg);
void global constructors keyed to ERFont::m_vScaler();

#endif // C__EOR_SRC2_ENGINE_FONT_E_RFONT_H

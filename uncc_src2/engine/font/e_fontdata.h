// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_FONT_E_FONTDATA_H
#define C__EOR_SRC2_ENGINE_FONT_E_FONTDATA_H

struct EFontCharacter : EStorable {
	static ETypeInfo m_typeInfo;
	s16 m_left;
	s16 m_right;
	s16 m_line;
	
	EFontCharacter& operator=();
	EFontCharacter();
	EFontCharacter();
	/* vtable[6] */ virtual EFontCharacter(EFontCharacter*, int, void);
	static EFontCharacter* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EFontCharacter* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

typedef THashTable<unsigned int,EFontCharacter *> EFontCharacterSet;

struct EFontSize : EStorable {
	static ETypeInfo m_typeInfo;
	int m_size;
	int m_xsize;
	int m_ysize;
	int m_lineSize;
	int m_superSample;
	u32 m_shaderId;
	ERShader *m_pRShader;
	EFontCharacterSet m_characters;
	
	EFontSize& operator=();
	EFontSize();
	static EFontSize* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EFontSize* CreateCopy();
	EFontSize();
	/* vtable[6] */ virtual EFontSize(EFontSize*, int, void);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void Deallocate();
};

typedef TNodeList<EFontSize *> ESizeList;
typedef THashTable<unsigned int,int> EFontKerningPairSet;

struct EFontData : EStorable {
	static ETypeInfo m_typeInfo;
	ESizeList m_sizeList;
	int m_baseline;
	int m_topline;
	int m_defaultSpacing;
	int m_verticalSpacing;
	int m_sourceImageSize;
	int m_spaceWidth;
	EFontKerningPairSet m_kerningPairs;
	
	EFontData& operator=();
	EFontData();
	static EFontData* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EFontData* CreateCopy();
	EFontData();
	/* vtable[6] */ virtual EFontData(EFontData*, int, void);
	void Deallocate();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_EFontCharacter;
extern ETypeInfo *gpTypeInfo_EFontSize;
extern ETypeInfo *gpTypeInfo_EFontData;
extern __vtbl_ptr_type EFontData virtual table[10];
extern __vtbl_ptr_type EFontSize virtual table[10];
extern __vtbl_ptr_type EFontCharacter virtual table[10];
extern __vtbl_ptr_type EStorable virtual table[10];
extern ETypeInfo EFontCharacter::m_typeInfo;
extern ETypeInfo EFontSize::m_typeInfo;
extern ETypeInfo EFontData::m_typeInfo;

EStream& operator<<(EStream &s, EFontCharacter *pD);
EStream& operator>>(EStream &s, EFontCharacter *&pD);
EStream& operator<<(EStream &s, EFontSize *pD);
EStream& operator>>(EStream &s, EFontSize *&pD);
void EFontSize::~EFontSize(int __in_chrg);
EStream& operator<<(EStream &s, EFontData *pD);
EStream& operator>>(EStream &s, EFontData *&pD);
void EFontData::~EFontData(int __in_chrg);
EStream& EStream & operator<<<unsigned int, EFontCharacter *>(EStream &s, THashTable<unsigned int,EFontCharacter *> &d);
EStream& EStream & operator>><unsigned int, EFontCharacter *>(EStream &s, THashTable<unsigned int,EFontCharacter *> &d);
EStream& EStream & operator<<<EFontSize *>(EStream &s, TNodeList<EFontSize *> &d);
EStream& EStream & operator<<<unsigned int, int>(EStream &s, THashTable<unsigned int,int> &d);
EStream& EStream & operator>><EFontSize *>(EStream &s, TNodeList<EFontSize *> &d);
EStream& EStream & operator>><unsigned int, int>(EStream &s, THashTable<unsigned int,int> &d);
void EStorable::~EStorable(int __in_chrg);
void EFontCharacter::~EFontCharacter(int __in_chrg);
void global constructors keyed to gpTypeInfo_EFontCharacter();

#endif // C__EOR_SRC2_ENGINE_FONT_E_FONTDATA_H

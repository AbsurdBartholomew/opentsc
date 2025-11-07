// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_ANIMATION_E_RANIM_H
#define C__EOR_SRC2_ENGINE_ANIMATION_E_RANIM_H

struct TArray<EAnimNodeDataPos> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<EAnimNodeDataPos>*, int, void);
	EAnimNodeDataPos& operator[]();
	EAnimNodeDataPos& operator[]();
	EAnimNodeDataPos& operator[]();
	EAnimNodeDataPos& operator[]();
	TArray<EAnimNodeDataPos>& operator=();
	EAnimNodeDataPos* operator EAnimNodeDataPos *();
	EAnimNodeDataPos* operator EAnimNodeDataPos *();
	void SetGrowBy(TArray<EAnimNodeDataPos>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct TArray<float> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<float>*, int, void);
	float& operator[]();
	float& operator[]();
	float& operator[]();
	float& operator[]();
	TArray<float>& operator=();
	float* operator float *();
	float* operator float *();
	void SetGrowBy(TArray<float>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct ERAnim : EResource {
	static ETypeInfo m_typeInfo;
	int m_nFrames;
	EVec3 m_vTransAccum;
	EVec3 m_vRotAccum;
	TArray<EAnimNodeDataPos> m_nodes;
	float m_radius;
	TArray<float> m_constantData;
	EBitArray m_streamData;
	EAnimDef m_def;
	
	ERAnim& operator=();
	ERAnim();
	static ERAnim* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERAnim* CreateCopy();
	ERAnim();
	/* vtable[6] */ virtual ERAnim(ERAnim*, int, void);
	void Load(EStream &s);
	/* vtable[10] */ virtual void Reload(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ERAnim;
extern __vtbl_ptr_type ERAnim virtual table[13];
extern ETypeInfo ERAnim::m_typeInfo;

EStream& operator<<(EStream &s, ERAnim *pD);
EStream& operator>>(EStream &s, ERAnim *&pD);
void ERAnim::~ERAnim(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERAnim();

#endif // C__EOR_SRC2_ENGINE_ANIMATION_E_RANIM_H

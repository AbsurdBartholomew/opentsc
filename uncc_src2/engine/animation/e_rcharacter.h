// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_ANIMATION_E_RCHARACTER_H
#define C__EOR_SRC2_ENGINE_ANIMATION_E_RCHARACTER_H

struct TArray<ECharacterNode> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<ECharacterNode>*, int, void);
	ECharacterNode& operator[]();
	ECharacterNode& operator[]();
	ECharacterNode& operator[]();
	ECharacterNode& operator[]();
	TArray<ECharacterNode>& operator=();
	ECharacterNode* operator ECharacterNode *();
	ECharacterNode* operator ECharacterNode *();
	void SetGrowBy(TArray<ECharacterNode>*, int, void);
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

struct ERCharacter : EResource {
	static ETypeInfo m_typeInfo;
	TArray<ECharacterNode> m_nodes;
	EBoundSphere m_boundSphere;
	float m_radius;
	
	ERCharacter& operator=();
	ERCharacter();
	static ERCharacter* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERCharacter* CreateCopy();
	ERCharacter();
	/* vtable[6] */ virtual ERCharacter(ERCharacter*, int, void);
	void Load(EStream &s);
	int FindNode(char *szName);
	void PrintNodes();
};

extern ETypeInfo *gpTypeInfo_ERCharacter;
extern __vtbl_ptr_type ERCharacter virtual table[13];
extern ETypeInfo ERCharacter::m_typeInfo;

EStream& operator<<(EStream &s, ERCharacter *pD);
EStream& operator>>(EStream &s, ERCharacter *&pD);
void ERCharacter::~ERCharacter(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERCharacter();

#endif // C__EOR_SRC2_ENGINE_ANIMATION_E_RCHARACTER_H

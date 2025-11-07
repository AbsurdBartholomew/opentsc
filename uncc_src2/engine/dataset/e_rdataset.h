// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_DATASET_E_RDATASET_H
#define C__EOR_SRC2_ENGINE_DATASET_E_RDATASET_H

struct TNodeList<EResource *> : ENodeList {
	TNodeList(TNodeList<EResource *>*, int, void);
	TNodeList();
	TNodeList();
	static EResource* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EResource *>& operator=();
	void MoveContents();
};

struct ERDataset : EResource {
	static ETypeInfo m_typeInfo;
protected:
	TNodeList<EResource *> m_resourceList;
	
public:
	ERDataset& operator=();
	ERDataset();
	static ERDataset* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERDataset* CreateCopy();
	ERDataset();
	/* vtable[6] */ virtual ERDataset(ERDataset*, int, void);
	void Load(EFile *pFile, u32 uLength);
protected:
	void Deallocate();
};

extern ETypeInfo *gpTypeInfo_ERDataset;
extern __vtbl_ptr_type ERDataset virtual table[13];
extern ETypeInfo ERDataset::m_typeInfo;

EStream& operator<<(EStream &s, ERDataset *pD);
EStream& operator>>(EStream &s, ERDataset *&pD);
void ERDataset::~ERDataset(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERDataset();

#endif // C__EOR_SRC2_ENGINE_DATASET_E_RDATASET_H

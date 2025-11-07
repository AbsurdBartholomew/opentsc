// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_LEVEL_E_RLEVEL_H
#define C__EOR_SRC2_ENGINE_LEVEL_E_RLEVEL_H

struct TNodeList<EInstance *> : ENodeList {
	TNodeList(TNodeList<EInstance *>*, int, void);
	TNodeList();
	TNodeList();
	static EInstance* GetData(/* parameters unknown */);
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
	TNodeList<EInstance *>& operator=();
	void MoveContents();
};

typedef TFloatTree<EOrderTableData *> EOTSortedSet;

struct EOrderTableEntry {
	bool inUse;
	EOrderTableData *pUnsortedHead;
	EOTSortedSet sortedSet;
};

struct TRedBlackTree<unsigned int,EInstance *> : ERedBlackTree {
	TRedBlackTree<unsigned int,EInstance *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,EInstance *>*, int, void);
	EInstance* operator[]();
	EInstance*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EInstance* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

extern ETypeInfo *gpTypeInfo_ERLevel;
extern bool ERLevel::m_drawingOrderTable;
extern __vtbl_ptr_type ERLevel virtual table[13];
extern ETypeInfo ERLevel::m_typeInfo;

EOrderTableEntry* EOrderTableEntry::EOrderTableEntry();
EStream& operator<<(EStream &s, ERLevel *pD);
EStream& operator>>(EStream &s, ERLevel *&pD);
void ERLevel::~ERLevel(int __in_chrg);
EBrightLight* ERLevel::CalcGlobalLights__7ERLevelP3ERC.0::EBrightLight::EBrightLight();
EStream& EStream & operator<<<EInstance *>(EStream &s, TNodeList<EInstance *> &d);
EStream& EStream & operator<<<unsigned int, EInstance *>(EStream &s, TRedBlackTree<unsigned int,EInstance *> &d);
EStream& EStream & operator<<<ETrigger *>(EStream &s, TNodeList<ETrigger *> &d);
EStream& EStream & operator>><EInstance *>(EStream &s, TNodeList<EInstance *> &d);
EStream& EStream & operator>><unsigned int, EInstance *>(EStream &s, TRedBlackTree<unsigned int,EInstance *> &d);
EStream& EStream & operator>><ETrigger *>(EStream &s, TNodeList<ETrigger *> &d);
void global constructors keyed to EOrderTableEntry::EOrderTableEntry();

#endif // C__EOR_SRC2_ENGINE_LEVEL_E_RLEVEL_H

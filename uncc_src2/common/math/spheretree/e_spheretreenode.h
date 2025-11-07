// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_SPHERETREE_E_SPHERETREENODE_H
#define C__EOR_SRC2_COMMON_MATH_SPHERETREE_E_SPHERETREENODE_H

struct ESphereTreeNode : EStorable {
	static ETypeInfo m_typeInfo;
	EBoundSphere m_boundSphere;
	ESphereTreeNode *m_pParent;
	EStorable *m_pChildren[2];
	
	ESphereTreeNode& operator=();
	ESphereTreeNode();
	/* vtable[6] */ virtual ESphereTreeNode(ESphereTreeNode*, int, void);
	static ESphereTreeNode* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ESphereTreeNode* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESphereTreeNode();
	static bool IsSphereTreeNode(/* parameters unknown */);
	void Deallocate();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
};

extern ETypeInfo *gpTypeInfo_ESphereTreeNode;
extern __vtbl_ptr_type ESphereTreeNode virtual table[10];
extern ETypeInfo ESphereTreeNode::m_typeInfo;
extern __vtbl_ptr_type EStorable virtual table[10];

EStream& operator<<(EStream &s, ESphereTreeNode *pD);
EStream& operator>>(EStream &s, ESphereTreeNode *&pD);
void ESphereTreeNode::~ESphereTreeNode(int __in_chrg);
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to gpTypeInfo_ESphereTreeNode();

#endif // C__EOR_SRC2_COMMON_MATH_SPHERETREE_E_SPHERETREENODE_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_SPHERETREE_E_SPHERETREEGEN_H
#define C__EOR_SRC2_COMMON_MATH_SPHERETREE_E_SPHERETREEGEN_H

struct TNodeList<ESTGNode *> : ENodeList {
	TNodeList(TNodeList<ESTGNode *>*, int, void);
	TNodeList();
	TNodeList();
	static ESTGNode* GetData(/* parameters unknown */);
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
	TNodeList<ESTGNode *>& operator=();
	void MoveContents();
};

struct ESphereTreeGen {
protected:
	TNodeList<ESTGNode *> m_nodeList;
	bool m_built;
	
public:
	ESphereTreeGen& operator=();
	ESphereTreeGen();
	ESphereTreeGen();
	ESphereTreeGen(ESphereTreeGen*, int, void);
	void AddObject(void *pObject, EBoundSphere &boundSphere);
	void Build();
	void Reset();
	ESTGNode* GetHead();
protected:
	void FindBestCombine(ESTGNode *pNode, TFloatTree<ESTGNode *> &extents, TFloatTree<ESTGNode *> &radii);
	void Combine(ESTGNode *pNode1, ESTGNode *pNode2, TFloatTree<ESTGNode *> &extents, TFloatTree<ESTGNode *> &radii, int axis);
};

void ESphereTreeGen::~ESphereTreeGen(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_MATH_SPHERETREE_E_SPHERETREEGEN_H

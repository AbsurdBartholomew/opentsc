// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_ROUTING_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_ROUTING_H

typedef tagRECT RECT;

struct tagPOINT {
	LONG x;
	LONG y;
};

typedef tagPOINT POINT;

struct PenaltyRect {
	RECT bounds;
	Int penalty;
};

typedef vector<PenaltyRect,__malloc_alloc_template<0> > GoalList;
typedef int GoalRef;
typedef int NodeRef;
typedef int RectRef;

struct ASTNode {
	GoalRef goalNumber;
	RectRef rectNumber;
	Int succCount;
	Int succTableIndex;
	Int penalty;
	POINT entry;
	NodeRef parent;
	float f;
	float g;
	float h;
	
	ASTNode& operator=();
	ASTNode();
	ASTNode();
	ASTNode();
	int operator==();
};

typedef vector<ASTNode,__malloc_alloc_template<0> > ASTNodeList;

// warning: multiple differing types with the same name (type name not equal)
struct vector<int,__malloc_alloc_template<0> > {
protected:
	NodeRef *start;
	NodeRef *finish;
	NodeRef *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	NodeRef* begin();
	NodeRef* begin();
	NodeRef* end();
	NodeRef* end();
	reverse_iterator<int *,int,int &,int> rbegin();
	reverse_iterator<const int *,int,const int &,int> rbegin();
	reverse_iterator<int *,int,int &,int> rend();
	reverse_iterator<const int *,int,const int &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	NodeRef& operator[]();
	NodeRef& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<int,__malloc_alloc_template<0> >*, int, void);
	vector<int,__malloc_alloc_template<0> >& operator=();
	void reserve();
	NodeRef& front();
	NodeRef& front();
	NodeRef& back();
	NodeRef& back();
	void push_back();
	void swap();
	NodeRef* insert();
	NodeRef* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct ASTNodeRefList : vector<int,__malloc_alloc_template<0> > {
	ASTNodeRefList& operator=();
	ASTNodeRefList();
	ASTNodeRefList();
	ASTNodeRefList(ASTNodeRefList*, int, void);
	void RemoveValue(ASTNodeRefList*, int, void);
	bool ContainsValue();
};

struct RoutingParams {
	GoalList *goalList;
	Partition *partition1;
	Partition *partition2;
	POINT begin;
	bool routeNearDest;
	Int nearDestDistance;
	bool useRealDistance;
	bool limitFreeRectRatio;
	Int maxFreeRectRatio;
	bool limitFreeRectSize;
	Int maxFreeRectSize;
	Int defaultPenalty;
	bool smooth;
};

struct SpacePartition {
private:
	RoutingParams *fParams;
	Partition *fPartition1;
	Partition *fPartition2;
	Partition fFree;
	ASTNodeRefList fPreGoalNodes;
	ASTNodeRefList fPostStartNodes;
	ASTNodeRefList fSuccessorTable;
	ASTNodeList fNodeList;
	
public:
	SpacePartition& operator=();
	SpacePartition();
	SpacePartition(SpacePartition*, int, void);
private:
	void BuildSpatialSuccessorList(NodeRef parent);
	bool ExpandRect(PenaltyRect *exp);
	void FindInterfaceRect(ASTNode *n1, ASTNode *n2, RECT *outRect);
	POINT FindInterfacePoint(ASTNode *n1, ASTNode *n2);
	RectRef GetIntersectingFreeRect(RECT *r);
	PenaltyRect* GetIntersectingPartitionRect(RECT *r);
public:
	SpacePartition();
	void Clear();
	void Init(RoutingParams *spp);
	Int CountSuccessors(NodeRef n);
	NodeRef GetNthSuccessor(NodeRef n, Int succIndex);
	void GetTerminals(NodeRef *start, NodeRef *goal);
	ASTNode* GetNode(NodeRef n);
	bool IsSpatialNode(NodeRef n);
	float EstimateDistanceToGoal(NodeRef n);
	float MeasureDistance(NodeRef parent, NodeRef child, POINT *foundEntryPoint);
	void FindInterfaceRect();
	bool GetNodeRectangle(NodeRef nr, RECT *r);
};

typedef vector<tagPOINT,__malloc_alloc_template<0> > PointList;

struct Path {
private:
	static SpacePartition fSpacePartition;
	RoutingParams *fParams;
	ASTNodeRefList fReverseNodePath;
	ASTNodeRefList fSpatialNodePath;
	PointList fFinalPath;
	Int fPathStage;
	Int fIterations;
	ASTNodeRefList fOpenNodes;
	ASTNodeRefList fClosedNodes;
	NodeRef fStartNode;
	NodeRef fGoalNode;
	NodeRef fCurNode;
	GoalRef fChosenGoal;
	Int fSmoothCount;
	
public:
	Path& operator=();
	Path();
	Path(Path*, int, void);
	Path();
	void ClearPath();
	void InitPath(RoutingParams *prs);
	bool TestInitialized();
	void AdvancePath();
	bool PathComplete();
	ASTNodeRefList& GetSpatialNodePath();
	PointList& GetFinalPath();
	bool IsNodeOpen();
	bool IsNodeClosed();
	SpacePartition* GetSpacePartition();
	Int GetIterations();
	GoalRef GetChosenGoal();
private:
	bool InitAST();
	bool OpenANode();
	NodeRef FindSmallestOpenNode();
	bool DoOneSmooth();
};

extern SpacePartition Path::fSpacePartition;

PenaltyRect* PenaltyRect::PenaltyRect(RECT *r, Int penalty);
PenaltyRect* PenaltyRect::PenaltyRect(Int l, Int t, Int r, Int b, Int penalty);
Int FindIntersectingRect(RECT *r, Partition *partition);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
NodeRef* int * copy_backward<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result);
NodeRef* int * uninitialized_copy<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result);
void vector<int, __malloc_alloc_template<0> >::insert_aux(NodeRef *position, NodeRef &x);
void void StressVector<int>(vector<int,__malloc_alloc_template<0> > *v);
PenaltyRect* PenaltyRect * copy_backward<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result);
PenaltyRect* PenaltyRect * uninitialized_copy<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result);
void vector<PenaltyRect, __malloc_alloc_template<0> >::insert_aux(PenaltyRect *position, PenaltyRect &x);
void void StressVector<PenaltyRect>(vector<PenaltyRect,__malloc_alloc_template<0> > *v);
ASTNode* ASTNode * copy_backward<ASTNode *, ASTNode *>(ASTNode *first, ASTNode *last, ASTNode *result);
ASTNode* ASTNode * uninitialized_copy<ASTNode *, ASTNode *>(ASTNode *first, ASTNode *last, ASTNode *result);
void vector<ASTNode, __malloc_alloc_template<0> >::insert_aux(ASTNode *position, ASTNode &x);
void void StressVector<ASTNode>(vector<ASTNode,__malloc_alloc_template<0> > *v);
POINT* tagPOINT * copy_backward<tagPOINT *, tagPOINT *>(POINT *first, POINT *last, POINT *result);
POINT* tagPOINT * uninitialized_copy<tagPOINT *, tagPOINT *>(POINT *first, POINT *last, POINT *result);
void vector<tagPOINT, __malloc_alloc_template<0> >::insert_aux(POINT *position, POINT &x);
void void StressVector<tagPOINT>(vector<tagPOINT,__malloc_alloc_template<0> > *v);
void SpacePartition::~SpacePartition(int __in_chrg);
void global constructors keyed to Path::fSpacePartition();
void global destructors keyed to Path::fSpacePartition();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_ROUTING_H

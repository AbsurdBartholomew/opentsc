// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_ROOMS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_ROOMS_H

enum Sides {
	kNone = 0,
	kLeft = 1,
	kBelow = 2,
	kRight = 3,
	kAbove = 4
};

struct Room {
	__vtbl_ptr_type *$vf3194;
	
	Room& operator=();
	Room();
protected:
	Room();
	/* vtable[1] */ virtual Room(Room*, int, void);
public:
	/* vtable[2] */ virtual void Clear();
	/* vtable[3] */ virtual void ComputeRoom();
	/* vtable[4] */ virtual void CollectObjectStats();
	/* vtable[5] */ virtual void CollectTileStats();
	/* vtable[6] */ virtual void PrintStats();
	/* vtable[7] */ virtual RoomImpl* GetImpl();
	/* vtable[8] */ virtual short unsigned int GetRoomID();
	/* vtable[9] */ virtual int Used();
	/* vtable[10] */ virtual float GetAmbientLight();
	/* vtable[11] */ virtual void SetAmbientLight();
	/* vtable[12] */ virtual bool IsOutside();
	/* vtable[13] */ virtual bool IsPool();
	/* vtable[14] */ virtual bool IsBedroom();
	/* vtable[15] */ virtual bool IsBathroom();
	/* vtable[16] */ virtual void InvalidateRoom();
	/* vtable[17] */ virtual float GetObjectDensity();
	/* vtable[18] */ virtual int GetArea();
	/* vtable[19] */ virtual void ComputeCutawayMatrix();
	/* vtable[20] */ virtual BitMatrix64& GetCutawayMatrix();
	/* vtable[21] */ virtual int GetLevel();
	/* vtable[22] */ virtual void SetOverheadLights();
	/* vtable[23] */ virtual int GetPeopleCount();
	/* vtable[24] */ virtual bool WantsRoof();
	static Sides Rotate(/* parameters unknown */);
};

struct vector<EVec3,__malloc_alloc_template<0> > {
protected:
	EVec3 *start;
	EVec3 *finish;
	EVec3 *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	EVec3* begin();
	EVec3* begin();
	EVec3* end();
	EVec3* end();
	reverse_iterator<EVec3 *,EVec3,EVec3 &,int> rbegin();
	reverse_iterator<const EVec3 *,EVec3,const EVec3 &,int> rbegin();
	reverse_iterator<EVec3 *,EVec3,EVec3 &,int> rend();
	reverse_iterator<const EVec3 *,EVec3,const EVec3 &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	EVec3& operator[]();
	EVec3& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<EVec3,__malloc_alloc_template<0> >*, int, void);
	vector<EVec3,__malloc_alloc_template<0> >& operator=();
	void reserve();
	EVec3& front();
	EVec3& front();
	EVec3& back();
	EVec3& back();
	void push_back();
	void swap();
	EVec3* insert();
	EVec3* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct DiagonalNode {
	short unsigned int mID;
	Sides mSide;
};

struct less<short unsigned int> : binary_function<short unsigned int,short unsigned int,bool> {
	less<short unsigned int>& operator=();
	less();
	less();
	bool operator()();
};

struct rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > {
protected:
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *header;
	less<short unsigned int> key_compare;
	unsigned int node_count;
	
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> >* get_node();
	void put_node();
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& root();
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& leftmost();
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& rightmost();
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& parent(/* parameters unknown */);
	static pair<const short unsigned int,RoomImpl *>& value(/* parameters unknown */);
	static short unsigned int& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >*& parent(/* parameters unknown */);
	static pair<const short unsigned int,RoomImpl *>& value(/* parameters unknown */);
	static short unsigned int& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >* minimum(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >* maximum(/* parameters unknown */);
private:
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > __insert();
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> >* __copy();
	void __erase();
	void init();
public:
	rb_tree();
	rb_tree();
	rb_tree(rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> >*, int, void);
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> >& operator=();
	less<short unsigned int> key_comp();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > begin();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > begin();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > end();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,pair<const short unsigned int,RoomImpl *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,const pair<const short unsigned int,RoomImpl *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,pair<const short unsigned int,RoomImpl *> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,const pair<const short unsigned int,RoomImpl *> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> insert_unique();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > insert_equal();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > insert_unique();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > insert_equal();
	void insert_unique();
	void insert_unique();
	void insert_equal();
	void insert_equal();
	void erase();
	unsigned int erase();
	void erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > find();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > lower_bound();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > lower_bound();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > upper_bound();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > upper_bound();
	pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > > equal_range();
	bool __rb_verify();
};

struct map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> > {
private:
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > t;
	
public:
	map(map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> >*, int, void);
	map();
	map();
	map();
	map();
	map();
	map();
	map();
	map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> >& operator=();
	less<short unsigned int> key_comp();
	value_compare value_comp();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > begin();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > begin();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > end();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,pair<const short unsigned int,RoomImpl *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,pair<const short unsigned int,RoomImpl *> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,const pair<const short unsigned int,RoomImpl *> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,const pair<const short unsigned int,RoomImpl *> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	RoomImpl*& operator[]();
	void swap();
	pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> insert();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > insert();
	void insert();
	void insert();
	void erase();
	unsigned int erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > find();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > lower_bound();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > lower_bound();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > upper_bound();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > upper_bound();
	pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > > equal_range();
};

struct less<CTilePt> : binary_function<CTilePt,CTilePt,bool> {
	less<CTilePt>& operator=();
	less();
	less();
	bool operator()();
};

struct rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > {
protected:
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *header;
	less<CTilePt> key_compare;
	unsigned int node_count;
	
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* get_node();
	void put_node();
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& root();
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& leftmost();
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& rightmost();
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& parent(/* parameters unknown */);
	static pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >& value(/* parameters unknown */);
	static CTilePt& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >*& parent(/* parameters unknown */);
	static pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >& value(/* parameters unknown */);
	static CTilePt& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* minimum(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* maximum(/* parameters unknown */);
private:
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > __insert();
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* __copy();
	void __erase();
	void init();
public:
	rb_tree();
	rb_tree();
	rb_tree(rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> >*, int, void);
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> >& operator=();
	less<CTilePt> key_comp();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > begin();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > begin();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > end();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,const pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,const pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> insert_unique();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > insert_equal();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > insert_unique();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > insert_equal();
	void insert_unique();
	void insert_unique();
	void insert_equal();
	void insert_equal();
	void erase();
	unsigned int erase();
	void erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > find();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > find();
	unsigned int count();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > lower_bound();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > lower_bound();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > upper_bound();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > upper_bound();
	pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > > equal_range();
	pair<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > > equal_range();
	bool __rb_verify();
};

struct ConstantsClient {
	__vtbl_ptr_type *$vf1596;
	
	ConstantsClient& operator=();
	ConstantsClient();
	ConstantsClient();
	/* vtable[1] */ virtual iResFile* GetFile();
	/* vtable[2] */ virtual SInt16 GetID();
	/* vtable[3] */ virtual void UpdateConstants();
};

extern RoomManagerImpl *RoomManagerImpl::sRoomMgr;
extern u32 _roomUpdateCounter;
extern __vtbl_ptr_type RoomScoreConstants virtual table[5];
extern __vtbl_ptr_type RoomManagerImpl virtual table[28];
extern __vtbl_ptr_type RoomImpl virtual table[26];
extern __vtbl_ptr_type RoomManager virtual table[28];
extern __vtbl_ptr_type Room virtual table[26];

ConstantsClient* GetRoomScoreConstantsClient();
void RoomManagerImpl::~RoomManagerImpl(int __in_chrg);
void RoomImpl::~RoomImpl(int __in_chrg);
bool IsScoredStyle(WallStyle s);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x);
void rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x);
__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::find(short unsigned int &k);
__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const short unsigned int,RoomImpl *> &v);
pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::insert_unique(pair<const short unsigned int,RoomImpl *> &v);
__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &v);
pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::insert_unique(pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &v);
__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::find(CTilePt &k);
EVec3* EVec3 * copy_backward<EVec3 *, EVec3 *>(EVec3 *first, EVec3 *last, EVec3 *result);
EVec3* EVec3 * uninitialized_copy<EVec3 *, EVec3 *>(EVec3 *first, EVec3 *last, EVec3 *result);
void vector<EVec3, __malloc_alloc_template<0> >::insert_aux(EVec3 *position, EVec3 &x);
CTilePt* CTilePt * uninitialized_copy<CTilePt *, CTilePt *>(CTilePt *first, CTilePt *last, CTilePt *result);
vector<CTilePt,__malloc_alloc_template<0> >& vector<CTilePt, __malloc_alloc_template<0> >::operator=(vector<CTilePt,__malloc_alloc_template<0> > &x);
void Room::~Room(int __in_chrg);
void RoomManager::~RoomManager(int __in_chrg);
void global constructors keyed to RoomManager::CreateInstance();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_ROOMS_H

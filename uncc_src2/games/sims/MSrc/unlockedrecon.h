// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_UNLOCKEDRECON_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_UNLOCKEDRECON_H

struct UnlockedId {
	u8 id;
	
	UnlockedId& operator=();
	UnlockedId();
	UnlockedId();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct vector<UnlockedId,__malloc_alloc_template<0> > {
protected:
	UnlockedId *start;
	UnlockedId *finish;
	UnlockedId *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	UnlockedId* begin();
	UnlockedId* begin();
	UnlockedId* end();
	UnlockedId* end();
	reverse_iterator<UnlockedId *,UnlockedId,UnlockedId &,int> rbegin();
	reverse_iterator<const UnlockedId *,UnlockedId,const UnlockedId &,int> rbegin();
	reverse_iterator<UnlockedId *,UnlockedId,UnlockedId &,int> rend();
	reverse_iterator<const UnlockedId *,UnlockedId,const UnlockedId &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	UnlockedId& operator[]();
	UnlockedId& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<UnlockedId,__malloc_alloc_template<0> >*, int, void);
	vector<UnlockedId,__malloc_alloc_template<0> >& operator=();
	void reserve();
	UnlockedId& front();
	UnlockedId& front();
	UnlockedId& back();
	UnlockedId& back();
	void push_back();
	void swap();
	UnlockedId* insert();
	UnlockedId* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct UnlockedRecon {
	vector<UnlockedId,__malloc_alloc_template<0> > objects;
	vector<UnlockedId,__malloc_alloc_template<0> > gameModes;
	vector<UnlockedId,__malloc_alloc_template<0> > challengeLevels;
	vector<UnlockedId,__malloc_alloc_template<0> > careers;
	vector<UnlockedId,__malloc_alloc_template<0> > ma_hair;
	vector<UnlockedId,__malloc_alloc_template<0> > ma_makeup;
	vector<UnlockedId,__malloc_alloc_template<0> > ma_accessories;
	vector<UnlockedId,__malloc_alloc_template<0> > ma_face;
	vector<UnlockedId,__malloc_alloc_template<0> > ma_upperBody;
	vector<UnlockedId,__malloc_alloc_template<0> > ma_lowerBody;
	vector<UnlockedId,__malloc_alloc_template<0> > ma_shoes;
	vector<UnlockedId,__malloc_alloc_template<0> > mc_hair;
	vector<UnlockedId,__malloc_alloc_template<0> > mc_makeup;
	vector<UnlockedId,__malloc_alloc_template<0> > mc_accessories;
	vector<UnlockedId,__malloc_alloc_template<0> > mc_face;
	vector<UnlockedId,__malloc_alloc_template<0> > mc_upperBody;
	vector<UnlockedId,__malloc_alloc_template<0> > mc_lowerBody;
	vector<UnlockedId,__malloc_alloc_template<0> > mc_shoes;
	vector<UnlockedId,__malloc_alloc_template<0> > fa_hair;
	vector<UnlockedId,__malloc_alloc_template<0> > fa_makeup;
	vector<UnlockedId,__malloc_alloc_template<0> > fa_accessories;
	vector<UnlockedId,__malloc_alloc_template<0> > fa_face;
	vector<UnlockedId,__malloc_alloc_template<0> > fa_upperBody;
	vector<UnlockedId,__malloc_alloc_template<0> > fa_lowerBody;
	vector<UnlockedId,__malloc_alloc_template<0> > fa_shoes;
	vector<UnlockedId,__malloc_alloc_template<0> > fc_hair;
	vector<UnlockedId,__malloc_alloc_template<0> > fc_makeup;
	vector<UnlockedId,__malloc_alloc_template<0> > fc_accessories;
	vector<UnlockedId,__malloc_alloc_template<0> > fc_face;
	vector<UnlockedId,__malloc_alloc_template<0> > fc_upperBody;
	vector<UnlockedId,__malloc_alloc_template<0> > fc_lowerBody;
	vector<UnlockedId,__malloc_alloc_template<0> > fc_shoes;
	
	UnlockedRecon& operator=(UnlockedRecon &_ctor_arg);
	UnlockedRecon(UnlockedRecon &other);
	UnlockedRecon();
	UnlockedRecon(UnlockedRecon*, int, void);
	void DoStream(ReconBuffer *r, SInt32 version);
	void Clear();
};

void UnlockedRecon::~UnlockedRecon(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
vector<UnlockedId,__malloc_alloc_template<0> >& vector<UnlockedId, __malloc_alloc_template<0> >::operator=(vector<UnlockedId,__malloc_alloc_template<0> > &x);
UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
UnlockedId* UnlockedId * copy_backward<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
void void fill<UnlockedId *, UnlockedId>(UnlockedId *first, UnlockedId *last, UnlockedId &value);
UnlockedId* UnlockedId * uninitialized_fill_n<UnlockedId *, unsigned int, UnlockedId>(UnlockedId *first, unsigned int n, UnlockedId &x);
void vector<UnlockedId, __malloc_alloc_template<0> >::insert(UnlockedId *position, unsigned int n, UnlockedId &x);
void void DoContainerStream<vector<UnlockedId, __malloc_alloc_template<0> >, UnlockedId>(vector<UnlockedId,__malloc_alloc_template<0> > &cont, UnlockedId *dummy, ReconBuffer *r, SInt32 version);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_UNLOCKEDRECON_H

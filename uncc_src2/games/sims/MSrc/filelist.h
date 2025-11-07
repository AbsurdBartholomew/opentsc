// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_FILELIST_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_FILELIST_H

struct less<const ResFile *> : binary_function<const ResFile *,const ResFile *,bool> {
	less<const ResFile *>& operator=();
	less();
	less();
	bool operator()();
};

struct rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > {
protected:
	__rb_tree_node<pair<const ResFile *const,FileRec> > *header;
	less<const ResFile *> key_compare;
	unsigned int node_count;
	
	__rb_tree_node<pair<const ResFile *const,FileRec> >* get_node();
	void put_node();
	__rb_tree_node<pair<const ResFile *const,FileRec> >*& root();
	__rb_tree_node<pair<const ResFile *const,FileRec> >*& leftmost();
	__rb_tree_node<pair<const ResFile *const,FileRec> >*& rightmost();
	static __rb_tree_node<pair<const ResFile *const,FileRec> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >*& parent(/* parameters unknown */);
	static pair<const ResFile *const,FileRec>& value(/* parameters unknown */);
	static ResFile*& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >*& left(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >*& right(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >*& parent(/* parameters unknown */);
	static pair<const ResFile *const,FileRec>& value(/* parameters unknown */);
	static ResFile*& key(/* parameters unknown */);
	static __rb_tree_color_type& color(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >* minimum(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >* maximum(/* parameters unknown */);
private:
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > __insert();
	__rb_tree_node<pair<const ResFile *const,FileRec> >* __copy();
	void __erase();
	void init();
public:
	rb_tree();
	rb_tree();
	rb_tree(rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> >*, int, void);
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> >& operator=();
	less<const ResFile *> key_comp();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > begin();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > begin();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > end();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,pair<const ResFile *const,FileRec> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,const pair<const ResFile *const,FileRec> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,pair<const ResFile *const,FileRec> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,const pair<const ResFile *const,FileRec> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> insert_unique();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > insert_equal();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > insert_unique();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > insert_equal();
	void insert_unique();
	void insert_unique();
	void insert_equal();
	void insert_equal();
	void erase();
	unsigned int erase();
	void erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > find();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > lower_bound();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > lower_bound();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > upper_bound();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > upper_bound();
	pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,__rb_tree_iterator<pair<const ResFile *const,FileRec> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > > equal_range();
	bool __rb_verify();
};

struct map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > {
private:
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > t;
	
public:
	map(map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> >*, int, void);
	map();
	map();
	map();
	map();
	map();
	map();
	map();
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> >& operator=();
	less<const ResFile *> key_comp();
	value_compare value_comp();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > begin();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > begin();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > end();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,pair<const ResFile *const,FileRec> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,pair<const ResFile *const,FileRec> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,const pair<const ResFile *const,FileRec> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,const pair<const ResFile *const,FileRec> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	FileRec& operator[]();
	void swap();
	pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> insert();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > insert();
	void insert();
	void insert();
	void erase();
	unsigned int erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > find();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > lower_bound();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > lower_bound();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > upper_bound();
	__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > upper_bound();
	pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,__rb_tree_iterator<pair<const ResFile *const,FileRec> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > > equal_range();
};

struct FileList {
protected:
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > fFiles;
	
public:
	FileList& operator=();
	FileList();
	FileList();
	FileList(FileList*, int, void);
	iResFile* Find(ResFile *pResFile);
	void AddRef(iResFile *file);
	bool ReleaseRef(iResFile *file);
	u32 GetRefCount(ResFile *pResFile);
};

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
__rb_tree_iterator<pair<const ResFile *const,FileRec> > rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::find(ResFile *&k);
__rb_tree_iterator<pair<const ResFile *const,FileRec> > rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const ResFile *const,FileRec> &v);
pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::insert_unique(pair<const ResFile *const,FileRec> &v);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_FILELIST_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_PORTAL_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_PORTAL_H

struct vector<float,__malloc_alloc_template<0> > {
protected:
	float *start;
	float *finish;
	float *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	float* begin();
	float* begin();
	float* end();
	float* end();
	reverse_iterator<float *,float,float &,int> rbegin();
	reverse_iterator<const float *,float,const float &,int> rbegin();
	reverse_iterator<float *,float,float &,int> rend();
	reverse_iterator<const float *,float,const float &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	float& operator[]();
	float& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<float,__malloc_alloc_template<0> >*, int, void);
	vector<float,__malloc_alloc_template<0> >& operator=();
	void reserve();
	float& front();
	float& front();
	float& back();
	float& back();
	void push_back();
	void swap();
	float* insert();
	float* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

extern SInt16 gDrawPortalIDs;
extern SInt16 gDrawRouteID;
extern __vtbl_ptr_type cXPortalImpl::cXPortal virtual table[6];
extern __vtbl_ptr_type cXPortalImpl::cXObjectImpl virtual table[8];
extern __vtbl_ptr_type cXPortalImpl::cXMTObject virtual table[14];
extern __vtbl_ptr_type cXPortalImpl::cXObject virtual table[140];
extern __vtbl_ptr_type cXPortalImpl::TreeSim virtual table[18];
extern __vtbl_ptr_type cXPortal virtual table[6];
extern __vtbl_ptr_type cXPortal::cXMTObject virtual table[14];
extern __vtbl_ptr_type cXPortal::cXObject virtual table[140];
extern __vtbl_ptr_type cXPortal::TreeSim virtual table[18];

void cXPortal::~cXPortal(int __in_chrg);
void cXPortalImpl::~cXPortalImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
float* float * copy_backward<float *, float *>(float *first, float *last, float *result);
float* float * uninitialized_copy<float *, float *>(float *first, float *last, float *result);
void vector<float, __malloc_alloc_template<0> >::insert_aux(float *position, float &x);
cXPortalImpl** cXPortalImpl ** copy_backward<cXPortalImpl **, cXPortalImpl **>(cXPortalImpl **first, cXPortalImpl **last, cXPortalImpl **result);
cXPortalImpl** cXPortalImpl ** uninitialized_copy<cXPortalImpl **, cXPortalImpl **>(cXPortalImpl **first, cXPortalImpl **last, cXPortalImpl **result);
void vector<cXPortalImpl *, __malloc_alloc_template<0> >::insert_aux(cXPortalImpl **position, cXPortalImpl *&x);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_PORTAL_H

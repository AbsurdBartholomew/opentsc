// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_RELMATRIX_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_RELMATRIX_H

typedef SInt32 RelKeyType;

struct RelMatrix {
	__vtbl_ptr_type *$vf3683;
	
	RelMatrix& operator=();
	RelMatrix();
protected:
	RelMatrix();
	/* vtable[1] */ virtual RelMatrix(RelMatrix*, int, void);
public:
	/* vtable[2] */ virtual Int GetArraySize();
	/* vtable[3] */ virtual void SetArraySize();
	/* vtable[4] */ virtual void RemoveArray(RelMatrix*, int, void);
	/* vtable[5] */ virtual SInt32 GetValue();
	/* vtable[6] */ virtual void SetValue();
	/* vtable[7] */ virtual void DoStream();
	/* vtable[8] */ virtual Int CountKeys();
	/* vtable[9] */ virtual RelKeyType GetNthKey();
	static RelMatrix* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type RelMatrixImpl virtual table[11];
extern __vtbl_ptr_type RelMatrix virtual table[11];

void RelMatrixImpl::~RelMatrixImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
RelInt* RelInt * uninitialized_copy<RelInt *, RelInt *>(RelInt *first, RelInt *last, RelInt *result);
RelInt* RelInt * copy_backward<RelInt *, RelInt *>(RelInt *first, RelInt *last, RelInt *result);
void void fill<RelInt *, RelInt>(RelInt *first, RelInt *last, RelInt &value);
RelInt* RelInt * uninitialized_fill_n<RelInt *, unsigned int, RelInt>(RelInt *first, unsigned int n, RelInt &x);
void vector<RelInt, __malloc_alloc_template<0> >::insert(RelInt *position, unsigned int n, RelInt &x);
RelArray** RelArray ** copy_backward<RelArray **, RelArray **>(RelArray **first, RelArray **last, RelArray **result);
RelArray** RelArray ** uninitialized_copy<RelArray **, RelArray **>(RelArray **first, RelArray **last, RelArray **result);
void vector<RelArray *, __malloc_alloc_template<0> >::insert_aux(RelArray **position, RelArray *&x);
void void fill<RelArray **, RelArray *>(RelArray **first, RelArray **last, RelArray *&value);
RelArray** RelArray ** uninitialized_fill_n<RelArray **, unsigned int, RelArray *>(RelArray **first, unsigned int n, RelArray *&x);
void vector<RelArray *, __malloc_alloc_template<0> >::insert(RelArray **position, unsigned int n, RelArray *&x);
void void DoPtrVectorStream<RelArray>(vector<RelArray *,__malloc_alloc_template<0> > &cont, ReconBuffer *r, SInt32 version);
void void DoContainerStream<RelArray, RelInt>(RelArray &cont, RelInt *dummy, ReconBuffer *r, SInt32 version);
void RelMatrix::~RelMatrix(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_RELMATRIX_H

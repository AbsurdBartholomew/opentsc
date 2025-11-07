// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_MTOBJECT_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_MTOBJECT_H

// warning: multiple differing types with the same name (name not equal)
struct cXMTObject : virtual cXObject {
	cXObject *$vb966;
	__vtbl_ptr_type *$vf3296;
	
	cXMTObject& operator=();
	cXMTObject();
protected:
	cXMTObject();
	/* vtable[1] */ virtual cXMTObject(cXMTObject*, int, void);
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[6] */ virtual void PostLoad(cXMTObject*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	cXMTObjectImpl* CAST_IMPL();
};

extern __vtbl_ptr_type cXMTObjectImpl::TreeSimImpl virtual table[6];
extern __vtbl_ptr_type cXMTObjectImpl::cXObjectImpl virtual table[8];
extern __vtbl_ptr_type cXMTObjectImpl::cXMTObject virtual table[14];
extern __vtbl_ptr_type cXMTObjectImpl::cXObject virtual table[140];
extern __vtbl_ptr_type cXMTObjectImpl::TreeSim virtual table[18];
extern __vtbl_ptr_type cXMTObject virtual table[14];
extern __vtbl_ptr_type cXMTObject::cXObject virtual table[140];
extern __vtbl_ptr_type cXMTObject::TreeSim virtual table[18];

void cXMTObject::~cXMTObject(int __in_chrg);
void cXMTObjectImpl::~cXMTObjectImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_MTOBJECT_H

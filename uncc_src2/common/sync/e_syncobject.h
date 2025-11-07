// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_SYNC_E_SYNCOBJECT_H
#define C__EOR_SRC2_COMMON_SYNC_E_SYNCOBJECT_H

struct ESyncObject {
	__vtbl_ptr_type *$vf1686;
	
	ESyncObject& operator=();
	ESyncObject();
	ESyncObject();
	/* vtable[1] */ virtual ESyncObject(ESyncObject*, int, void);
	/* vtable[2] */ virtual bool Acquire();
	/* vtable[3] */ virtual bool Release(u32 nCount, u32 *pPrevCount);
	/* vtable[4] */ virtual bool Release();
};

extern __vtbl_ptr_type ESyncObject virtual table[6];

void ESyncObject::~ESyncObject(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_SYNC_E_SYNCOBJECT_H

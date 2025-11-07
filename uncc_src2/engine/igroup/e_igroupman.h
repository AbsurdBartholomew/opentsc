// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_IGROUP_E_IGROUPMAN_H
#define C__EOR_SRC2_ENGINE_IGROUP_E_IGROUPMAN_H

struct EInstanceGroupManager : EResourceManager {
	EInstanceGroupManager& operator=();
	EInstanceGroupManager();
	EInstanceGroupManager();
	/* vtable[1] */ virtual EInstanceGroupManager(EInstanceGroupManager*, int, void);
	ERIGroup* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERIGroup* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern EInstanceGroupManager _igroupman;
extern __vtbl_ptr_type EInstanceGroupManager virtual table[7];

void EInstanceGroupManager::~EInstanceGroupManager(int __in_chrg);
void global constructors keyed to _igroupman();
void global destructors keyed to _igroupman();

#endif // C__EOR_SRC2_ENGINE_IGROUP_E_IGROUPMAN_H

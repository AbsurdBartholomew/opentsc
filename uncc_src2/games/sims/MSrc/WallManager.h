// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_WALLMANAGER_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_WALLMANAGER_H

struct WallManager {
	__vtbl_ptr_type *$vf925;
	
	WallManager& operator=();
	WallManager();
protected:
	WallManager();
	/* vtable[1] */ virtual WallManager(WallManager*, int, void);
public:
	/* vtable[2] */ virtual void DrawWalls();
	/* vtable[3] */ virtual void SetRotation(WallManager*, int, void);
	/* vtable[4] */ virtual void SetCutaway();
	/* vtable[5] */ virtual void ComputeCutaway();
	/* vtable[6] */ virtual void BuildGraphFromMap(WallManager*, int, void);
	/* vtable[7] */ virtual void RefreshFromMap(WallManager*, int, void);
	/* vtable[8] */ virtual Vertex* GetVertex();
	/* vtable[9] */ virtual void AddWall();
	/* vtable[10] */ virtual void AddVertex();
	/* vtable[11] */ virtual void CleanupConstruction();
	/* vtable[12] */ virtual bool CheckWallConsistency();
	/* vtable[13] */ virtual void AsynchronousRebuild(WallManager*, int, void);
	/* vtable[14] */ virtual void AsynchronousRefresh(WallManager*, int, void);
	/* vtable[15] */ virtual void HandleDirty();
	static WallManager* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type WallManagerImpl virtual table[17];
extern __vtbl_ptr_type WallManager virtual table[17];

void WallManager::~WallManager(int __in_chrg);
void WallManagerImpl::~WallManagerImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_WALLMANAGER_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJFNTABLE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJFNTABLE_H

enum ObjEntryPoint {
	kOEP_init = 0,
	kOEP_main = 1,
	kOEP_load = 2,
	kOEP_cleanup = 3,
	kOEP_queueSkipped = 4,
	kOEP_allowIntersection = 5,
	kOEP_wallAdjacencyChanged = 6,
	kOEP_roomChanged = 7,
	kOEP_mtAdjUpdate = 8,
	kOEP_placement = 9,
	kOEP_pickup = 10,
	kOEP_userPlacement = 11,
	kOEP_userPickup = 12,
	kOEP_levelInfoRequest = 13,
	kOEP_servingSurface = 14,
	kOEP_portal = 15,
	kOEP_gardening = 16,
	kOEP_washHands = 17,
	kOEP_prep = 18,
	kOEP_cook = 19,
	kOEP_surface = 20,
	kOEP_dispose = 21,
	kOEP_food = 22,
	kOEP_pickupFromSlot = 23,
	kOEP_washDish = 24,
	kOEP_eatingSurface = 25,
	kOEP_sit = 26,
	kOEP_stand = 27,
	kOEP_clean = 28,
	kOEP_repair = 29,
	kOEP_numEntryPoints = 30
};

struct ObjFnData {
	Int resID;
	short int fTreeID[30];
	short int fCheckTreeID[30];
};

struct ObjFnTable {
	__vtbl_ptr_type *$vf2725;
	
	ObjFnTable& operator=();
	ObjFnTable();
protected:
	ObjFnTable();
	/* vtable[1] */ virtual ObjFnTable(ObjFnTable*, int, void);
public:
	/* vtable[2] */ virtual void BuildFromOldEntries();
	/* vtable[3] */ virtual SInt16 GetTreeID();
	/* vtable[4] */ virtual SInt16 GetCheckTreeID();
	/* vtable[5] */ virtual ErrType Load();
	static ObjFnTable* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type ObjFnTableImpl virtual table[7];
extern __vtbl_ptr_type ObjFnTable virtual table[7];

void ObjFnTableImpl::~ObjFnTableImpl(int __in_chrg);
ObjFnData* ObjFnData * FindRes<ObjFnData>(ObjFnData *begin, ObjFnData *end, int resID);
void ObjFnTable::~ObjFnTable(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJFNTABLE_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_UNLOCKITEMS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_UNLOCKITEMS_H

struct LockTable {
	VECTOR<LockableItem> not_used;
	VECTOR<LockableItem> gameModes;
	VECTOR<LockableItem> not_used2;
	VECTOR<LockableItem> careers;
	VECTOR<LockableItem> ma_hair;
	VECTOR<LockableItem> ma_makeup;
	VECTOR<LockableItem> ma_accessories;
	VECTOR<LockableItem> ma_face;
	VECTOR<LockableItem> ma_upperBody;
	VECTOR<LockableItem> ma_lowerBody;
	VECTOR<LockableItem> ma_shoes;
	VECTOR<LockableItem> mc_hair;
	VECTOR<LockableItem> mc_makeup;
	VECTOR<LockableItem> mc_accessories;
	VECTOR<LockableItem> mc_face;
	VECTOR<LockableItem> mc_upperBody;
	VECTOR<LockableItem> mc_lowerBody;
	VECTOR<LockableItem> mc_shoes;
	VECTOR<LockableItem> fa_hair;
	VECTOR<LockableItem> fa_makeup;
	VECTOR<LockableItem> fa_accessories;
	VECTOR<LockableItem> fa_face;
	VECTOR<LockableItem> fa_upperBody;
	VECTOR<LockableItem> fa_lowerBody;
	VECTOR<LockableItem> fa_shoes;
	VECTOR<LockableItem> fc_hair;
	VECTOR<LockableItem> fc_makeup;
	VECTOR<LockableItem> fc_accessories;
	VECTOR<LockableItem> fc_face;
	VECTOR<LockableItem> fc_upperBody;
	VECTOR<LockableItem> fc_lowerBody;
	VECTOR<LockableItem> fc_shoes;
};

bool CheckLockableById(u32 type, u32 targetId, s32 *data);
bool CheckLockableByData(u32 type, s32 targetData, u32 *id);
bool CheckNeighborhoodUnlocked(u32 type, u32 targetId);
bool CheckGlobalUnlocked(u32 type, u32 targetId);
void AddToNeighborhoodUnlocked(u32 type, u32 targetId);
void AddToGlobalUnlocked(u32 type, u32 targetId);
s32 UnlockItems(u32 code, u32 nPersonId, u16 *nBitCode);
void TestUnlocked(u32 code, u16 *nBitCode);
s32 NewScore(s16 nPlayerNum, s16 nScore, s16 nComponent1, s16 nComponent2, s16 nComponent3, s16 nComponent4);
void MergeNghUnlockedToGlobal();
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
UnlockedId* UnlockedId * copy_backward<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
void vector<UnlockedId, __malloc_alloc_template<0> >::insert_aux(UnlockedId *position, UnlockedId &x);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_UNLOCKITEMS_H

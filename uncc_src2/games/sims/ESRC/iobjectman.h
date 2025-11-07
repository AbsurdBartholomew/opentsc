// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJECTMAN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJECTMAN_H

struct TRedBlackTree<unsigned int,ISimInstance *> : ERedBlackTree {
	TRedBlackTree<unsigned int,ISimInstance *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,ISimInstance *>*, int, void);
	ISimInstance* operator[]();
	ISimInstance*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static ISimInstance* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EIObjectMan {
protected:
	ISimInstanceHandleGenerator m_handleGen;
	TRedBlackTree<unsigned int,ISimInstance *> m_objects;
	EHouse *m_pHouse;
	
public:
	EIObjectMan& operator=();
	EIObjectMan();
	EIObjectMan();
	EIObjectMan(EIObjectMan*, int, void);
	void Init();
	void RemoveObjectsFromHouse(ERLevel *pLevel);
	void AttachObject(ISimInstance *pModel);
	ISimInstance* AddObject(cXObject *pXObject, ERLevel *pLevel);
	void GetObjectsInRect(int player, TNodeList<ISimInstance *> &vList);
	static bool IsValidID(/* parameters unknown */);
	ISimInstance* GetObjectInstace(ESimsCursor *pcurs, cXObject *pObj);
	void UpdateObjectHighlight();
	void TurnOffAllHighlights(u32 playerid);
	bool Find(ISimInstance *pin);
	bool IsEmpty();
	void PostLoad();
	void DrawTileBoundRects(ERC *prc);
	void ReOrientHouse(bool countersOnly);
	void ReComputeLights();
	void HotSyncLighting();
	u32 GetHandle();
	ISimInstance* GetInstance();
	void FreeSimsObjectInstance(ISimInstance *pInst);
protected:
	ISimInstance* AllocSimsObjectInstance(cXObject *pXOb);
};

extern EDL *_pBoundRectDL;
extern bool _bDispCurorRect;

void EIObjectMan::~EIObjectMan(int __in_chrg);
u32 GetHandleFromISimInstance(ISimInstance *p);
ISimInstance* GetObjectInstance(u32 handle);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJECTMAN_H

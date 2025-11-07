// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_HOUSERECON_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_HOUSERECON_H

typedef short int Sint16;

struct HRSelector {
	SInt32 guid;
	SInt32 initTreeVersion;
	SInt32 mainTreeVersion;
	SInt16 type;
	SInt16 objectType;
	BString tempStr;
	ObjSelector *pObjSel;
	bool bDiscard;
};

struct HRObject {
	SInt16 id;
	HRSelector *pHRSel;
};

struct HouseRecon {
	HRObject m_objects[4096];
	int m_iNumObjects;
	HRSelector m_selectors[2048];
	int m_iNumSelectors;
	
	HouseRecon& operator=();
	HouseRecon();
	HouseRecon();
	HouseRecon(HouseRecon*, int, void);
	void LoadHouseData(iResFile *pFile);
	void SaveHouseData(iResFile *pFile, SInt32 version);
private:
	int findHRSelector(SInt32 guid);
};

extern __vtbl_ptr_type SimpleReconObject<ObjectSaveIDTable> virtual table[5];
extern __vtbl_ptr_type SimpleReconObject<ObjectSaveTypeTable3> virtual table[5];

void HouseRecon::~HouseRecon(int __in_chrg);
ErrType int ReconLoadObject<ObjectSaveTypeTable3>(ObjectSaveTypeTable3 *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
ErrType int ReconLoadObject<ObjectSaveIDTable>(ObjectSaveIDTable *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
void SimpleReconObject<ObjectSaveTypeTable3>::~SimpleReconObject(int __in_chrg);
void SimpleReconObject<ObjectSaveIDTable>::~SimpleReconObject(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_HOUSERECON_H

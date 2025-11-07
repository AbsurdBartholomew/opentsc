// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_HOUSE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_HOUSE_H

struct SimpleReconObject<cSimulator> : ReconObject {
private:
	cSimulator *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<cSimulator>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<cSimulator>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

struct RouteStats {
	SInt32 fTotalTime;
	SInt32 fRouteTime;
	
	RouteStats& operator=();
	RouteStats();
	RouteStats();
	void Clear();
};

struct HouseImpl : House, Commander {
	Family *fFamily;
	BString fHouseDesc;
	RouteStats fRouteHistory[5];
	RouteStats fDayRoute;
	PiecewiseFn *fSizeScoreCurve;
	PiecewiseFn *fFurnishingsScoreCurve;
	
	HouseImpl& operator=();
	HouseImpl();
	ErrType LoadFile(iResFile *file, SInt32 *pVersion);
	ErrType SaveFile(iResFile *pFile);
	void ComputeAndStoreLotData();
	void ClearRouteHistory();
	HouseImpl();
	/* vtable[1] */ virtual HouseImpl(HouseImpl*, int, void);
	/* vtable[2] */ virtual void Initialize();
	/* vtable[3] */ virtual void Destroy();
	/* vtable[4] */ virtual void SetLotSize(Int size);
	/* vtable[5] */ virtual cXObject* GetFirstObject();
	/* vtable[6] */ virtual Family* GetFamily();
	/* vtable[7] */ virtual BString& GetDescription();
	/* vtable[8] */ virtual void SetDescription(BString &name);
	/* vtable[9] */ virtual void GetHouseStats(HouseStats &hs);
	/* vtable[10] */ virtual void AddLayoutTick(bool routing);
	/* vtable[11] */ virtual Boolean DoCommand(SInt16 command, SInt32 info);
	/* vtable[12] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[13] */ virtual void EnterLiveMode();
	/* vtable[14] */ virtual void PrepareForBudgetWindow();
	/* vtable[15] */ virtual PiecewiseFn* GetSizeScoreCurve();
	/* vtable[16] */ virtual PiecewiseFn* GetFurnishingsScoreCurve();
	/* vtable[17] */ virtual void SetFamilyToNull();
};

enum LotSize {
	kSmall = 0,
	kMedium = 1,
	kLarge = 2
};

struct HouseStats {
private:
	Int fSquareFeet;
	Int fPersonCount;
	Int fBedrooms;
	Int fBathrooms;
	Int fLevels;
	Int fLotSize;
	Int fLayoutScore;
	Int fIndoorObjValue;
	Int fOutdoorObjValue;
	Int fObjectStateScore;
	Int fObjectCount;
	
public:
	HouseStats& operator=();
	HouseStats();
	HouseStats();
	Int GetOverallScore();
	Int GetSizeScore();
	Int GetFurnishingsScore();
	Int GetYardScore();
	Int GetUpkeepScore();
	Int GetLayoutScore();
	Int GetSquareFeet();
	Int GetNumBedrooms();
	Int GetNumBathrooms();
	Int GetNumLevels();
	LotSize GetLotSize();
	Int GetObjectCount();
};

extern SInt16 kSimulatorResourceID;
extern SInt16 kHouseResourceID;
extern SInt32 kSimulatorResType;
extern SInt32 kHouseResType;
extern __vtbl_ptr_type SimpleReconObject<HouseImpl> virtual table[5];
extern __vtbl_ptr_type SimpleReconObject<cSimulator> virtual table[5];
extern __vtbl_ptr_type HouseImpl::Commander virtual table[4];
extern __vtbl_ptr_type HouseImpl virtual table[19];
extern __vtbl_ptr_type House virtual table[19];

void HouseImpl::~HouseImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
ErrType int ReconLoadObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
ErrType int ReconLoadObject<HouseImpl>(HouseImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
ErrType int ReconSaveObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ErrType int ReconSaveObject<HouseImpl>(HouseImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
void House::~House(int __in_chrg);
void SimpleReconObject<cSimulator>::~SimpleReconObject(int __in_chrg);
void SimpleReconObject<HouseImpl>::~SimpleReconObject(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_HOUSE_H

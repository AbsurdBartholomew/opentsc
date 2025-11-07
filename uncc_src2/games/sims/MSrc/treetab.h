// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_TREETAB_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_TREETAB_H

enum Attenuation {
	kCustom = 0,
	kNone = 1,
	kLow = 2,
	kModerate = 3,
	kHigh = 4
};

struct VECTOR<TreeTableAd> {
private:
	TreeTableAd *pData;
	
public:
	VECTOR<TreeTableAd>& operator=();
	VECTOR();
	VECTOR();
	int size();
	TreeTableAd& operator[]();
	TreeTableAd& operator[]();
	TreeTableAd* begin();
	TreeTableAd* end();
	TreeTableAd* begin();
	TreeTableAd* end();
};

struct TreeTableEntry {
	SInt16 fCheckTreeID;
	SInt16 fActionTreeID;
	VECTOR<TreeTableAd> fAds;
	float fAttenuationVal;
	Attenuation fAttenuation;
	Int fFlags : 16;
	SInt16 resID;
	SInt16 fMinAutonomy;
	SInt16 fJoinIndex;
	SInt16 fOrderIndex;
	ELocString fName;
	
	TreeTableEntry& operator=();
	TreeTableEntry();
	TreeTableEntry();
	Int GetIndex();
	bool GetAvailableToVisitors();
	bool GetCanJoin();
	bool GetImmediate();
	bool GetAllowConsecutive();
	bool GetAvailableToChildren();
	bool GetAvailableToAdults();
	bool GetAvailableToChildrenDemo();
	Int GetJoinIndex();
	bool GetDebugOnly();
	bool GetAutoFirstSelect();
	bool GetManualOnly();
	Int CountAds();
	TreeTableAd* GetAds();
	StdPrm* GetRangeRef();
	StdPrm* GetMinRef();
	StdPrm* GetPersonalityVarRef();
	TreeTableAd GetAd();
	SInt16 GetActionTreeID();
	SInt16 GetCheckTreeID();
	Attenuation GetAttenuation();
	float GetAttenuationValue(bool visitor);
	StdPrm GetAutonomyThreshold();
	ELocString& GetName();
};

struct VECTOR<TreeTableEntry> {
private:
	TreeTableEntry *pData;
	
public:
	VECTOR<TreeTableEntry>& operator=();
	VECTOR();
	VECTOR();
	int size();
	TreeTableEntry& operator[]();
	TreeTableEntry& operator[]();
	TreeTableEntry* begin();
	TreeTableEntry* end();
	TreeTableEntry* begin();
	TreeTableEntry* end();
};

struct TreeTable {
	VECTOR<TreeTableEntry> fEntries;
	SInt16 fNumAds;
	SInt16 resID;
	
	TreeTable& operator=();
	TreeTable();
	TreeTable();
	SInt16 GetID();
	Int CountMotiveAds();
	Int CountEntries();
	TreeTableEntry* GetNthEntry();
	TreeTableEntry* GetEntryByIndex(Int index);
	TreeTableEntry* GetEntryByTreeID();
	TreeTableEntry* GetNthOrderedEntry();
};

struct TTabScratchEntry {
private:
	SInt16 fCheckTreeID;
	SInt16 fActionTreeID;
	TreeTableAd fAds[16];
	Attenuation fAttenuation;
	float fAttenuationVal;
	Int fFlags;
	Int fIndex;
	Int fMinAutonomy;
	Int fJoinIndex;
	
public:
	TTabScratchEntry& operator=();
	TTabScratchEntry();
	TTabScratchEntry();
	TTabScratchEntry(TTabScratchEntry*, int, void);
	void CopyFrom(TreeTableEntry *other);
	Int GetIndex();
	bool GetAvailableToVisitors();
	void SetAvailableToVisitors();
	bool GetCanJoin();
	void SetCanJoin();
	bool GetImmediate();
	void SetImmediate();
	bool GetAllowConsecutive();
	void SetAllowConsecutive();
	bool GetAvailableToChildren();
	void SetAvailableToChildren();
	bool GetAvailableToAdults();
	void SetAvailableToAdults();
	bool GetAvailableToChildrenDemo();
	void SetAvailableToChildrenDemo();
	Int GetJoinIndex();
	void SetJoinIndex(TTabScratchEntry*, int, void);
	bool GetDebugOnly();
	void SetDebugOnly();
	bool GetAutoFirstSelect();
	void SetAutoFirstSelect();
	bool GetManualOnly();
	Int CountAds();
	TreeTableAd* GetAds();
	TreeTableAd* GetAds();
	StdPrm* GetRangeRef();
	StdPrm* GetMinRef();
	StdPrm* GetPersonalityVarRef();
	StdPrm* GetRangeRef();
	StdPrm* GetMinRef();
	StdPrm* GetPersonalityVarRef();
	TreeTableAd GetAd();
	void SetAd();
	SInt16 GetActionTreeID();
	void SetActionTreeID();
	SInt16 GetCheckTreeID();
	void SetCheckTreeID();
	Attenuation GetAttenuation();
	void SetAttenuation();
	float GetAttenuationValue();
	void SetCustomAttenuation();
	StdPrm GetAutonomyThreshold();
	void SetAutonomyThreshold();
};

extern float gLowAttenuation;
extern float gModerateAttenuation;
extern float gHighAttenuation;
extern float gVisLowAttenuation;
extern float gVisModerateAttenuation;
extern float gVisHighAttenuation;

void TTabScratchEntry::~TTabScratchEntry(int __in_chrg);
TreeTableEntry* TreeTableEntry * FindRes<TreeTableEntry>(TreeTableEntry *begin, TreeTableEntry *end, int resID);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_TREETAB_H

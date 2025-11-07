// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_GLOBS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_GLOBS_H

struct Globs {
	static cSimulator *pSimulator;
	static ObjectFolder *pObjectFolder;
	static ObjectModule *pObjectModule;
	static cFixedWorld *pFixedWorld;
	static House *pHouse;
	static cSoundPlayer *pSound;
	static VBAnimMgr *pAnimMgr;
	static Neighborhood *pNeighborhood;
	static RoomManager *pRoomManager;
	static Careers *pCareers;
	static NghResFile *pNghResFile;
	static LightingParameters *pLightingParameters;
	static int iSaveFileVersion;
	static EGlobal *pEORGlobals;
	static EDialog *pEORDialog;
	static ECheatVariables *pEORCheats;
	static short int challengeModeData[2];
	
	Globs& operator=();
	Globs();
	Globs();
	Globs(Globs*, int, void);
	void Startup();
	void Shutdown();
	static void* AllocateScratchMemory(/* parameters unknown */);
	static void FreeScratchMemory(/* parameters unknown */);
};

extern Globs *globs;
extern int Globs::iSaveFileVersion;
extern cSimulator *Globs::pSimulator;
extern ObjectFolder *Globs::pObjectFolder;
extern ObjectModule *Globs::pObjectModule;
extern cFixedWorld *Globs::pFixedWorld;
extern House *Globs::pHouse;
extern cSoundPlayer *Globs::pSound;
extern VBAnimMgr *Globs::pAnimMgr;
extern Neighborhood *Globs::pNeighborhood;
extern RoomManager *Globs::pRoomManager;
extern Careers *Globs::pCareers;
extern NghResFile *Globs::pNghResFile;
extern LightingParameters *Globs::pLightingParameters;
extern EGlobal *Globs::pEORGlobals;
extern EDialog *Globs::pEORDialog;
extern ECheatVariables *Globs::pEORCheats;
extern short int Globs::challengeModeData[2];

void LightingParameters::~LightingParameters(int __in_chrg);
void Globs::~Globs(int __in_chrg);
StdPrm& GetChallengeModeData(int iIndex);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to globs();
void global destructors keyed to globs();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_GLOBS_H

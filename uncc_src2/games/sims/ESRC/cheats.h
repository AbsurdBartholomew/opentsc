// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHEATS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHEATS_H

enum EDebugMenuButton {
	E_DMB_LEFT = 0,
	E_DMB_RIGHT = 1
};

struct ECheatLookup {
	ECheatLookup *pNextHash;
	char m_Name[64];
	int m_Type;
	void *m_pVar;
	ECheatDMI *m_pDMI;
	bool bAddToMenu;
	
	ECheatLookup& operator=();
	ECheatLookup();
	ECheatLookup();
	void destroy();
	u32 hash(char *name);
	static u32 hash(/* parameters unknown */);
	bool compare(char *name);
};

typedef HashList<ECheatLookup,char *,64> CheatLookupType;

struct ECheats {
protected:
	CheatLookupType m_CheatLookup;
	bool m_AlreadyReadCheatsFromFile;
	bool m_bCheatsOn;
	
public:
	ECheats& operator=();
	ECheats();
	ECheats();
	ECheats(ECheats*, int, void);
	void Init(EGlobal &Globals);
	void Reset();
	void Update();
	bool GetActive();
protected:
	void EmptyLookupList();
	void ReadCheatsFile();
	void WriteCheatsFile();
	void EnableCheats();
	void DisableCheats();
};

extern ELightDebugDMI _lightInintDMI;
extern char *_szSunColorR;
extern char *_szSunColorG;
extern char *_szSunColorB;
extern char *_szSunColorI;
extern ESunDebugDMI _sunDMIR;
extern ESunDebugDMI _sunDMIG;
extern ESunDebugDMI _sunDMIB;
extern ESunDebugDMI _sunDMII;
extern __vtbl_ptr_type ECheatDMI virtual table[6];
extern __vtbl_ptr_type ESunDebugDMI virtual table[7];
extern __vtbl_ptr_type ELightDebugDMI virtual table[7];

void ECheats::~ECheats(int __in_chrg);
void ELightDebugDMI::~ELightDebugDMI(int __in_chrg);
void ESunDebugDMI::~ESunDebugDMI(int __in_chrg);
void global constructors keyed to _lightInintDMI();
void global destructors keyed to _lightInintDMI();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHEATS_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EORHOUSE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EORHOUSE_H

struct ISimInstanceHandleGenerator {
protected:
	u32 m_lastHandle;
	
public:
	ISimInstanceHandleGenerator& operator=();
	ISimInstanceHandleGenerator();
	ISimInstanceHandleGenerator();
	ISimInstanceHandleGenerator(ISimInstanceHandleGenerator*, int, void);
	u32 GetNewHandle();
	void ClearAllHandles();
};

extern float _sunIntensity;
extern EVec3 _vSunPos;
extern EVec3 _vSunColor;
extern EVec3 _vSunColorTimeOfDay[4];
extern float _sunIntensityTimeOfDay[4];
extern float _roomambient;
extern float _roomfalloff;
extern float _outsideambient;
extern bool _bshowAmbientLightrad;
extern bool _lmcompute;
extern bool _computefloor;
extern bool _computewalls;
extern bool _bDebugSun;
extern bool _bDidInitialCompute;
extern int _LevelResTable[8];
extern bool _hackTimeOfDay;
extern Int _hackhour;
extern bool _EHOUSE_NO_AMBIENT;

TimeOfDay EorGetTimeOfDay(int lot);
void EHouse::~EHouse(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to EorGetTimeOfDay();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EORHOUSE_H

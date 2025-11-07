// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_AUDIOINFO_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_AUDIOINFO_H

struct TVDefinition {
	ObjDefinition *def;
};

struct StereoDefinition {
	ObjDefinition *def;
};

struct cAudioWorldCoord {
	int mX;
	int mY;
	int mLevel;
};

enum DataIdx {
	kAI_Gender = 0,
	kAI_Age = 1,
	kAI_CookingSkill = 2,
	kAI_CleaningSkill = 3,
	kAI_Hour = 4,
	kAI_CreativitySkill = 5,
	kAI_SocialSkill = 6,
	kAI_RepairSkill = 7,
	kAI_GardeningSkill = 8,
	kAI_MusicSkill = 9,
	kAI_LiteracySkill = 10,
	kAI_PhysicalSkill = 11,
	kAI_LogicSkill = 12,
	kAI_RoomSize = 13,
	kAI_Mood = 14,
	kAI_Nice = 15,
	kAI_Active = 16,
	kAI_Generous = 17,
	kAI_Playful = 18,
	kAI_Outgoing = 19,
	kAI_Neat = 20,
	kAI_DataCount = 21
};

struct cAudioInfo {
private:
	static cAudioInfo sTheInfo;
	
public:
	cAudioInfo& operator=();
	cAudioInfo();
private:
	cAudioInfo();
public:
	int CurrentZoomLevel();
	int CurrentOrienention();
	int CurrentSimSpeed();
	int OutdoorTileRatio();
	bool GetObjectPosition(Sint32 lInstId, cAudioWorldCoord &outCoord);
	int ViewerLevel();
	bool TestForTvAndStereoUse(bool &bStereoInUse, bool &bTVInUse);
	int GetObjectData(Sint32 lInstId, DataIdx idx);
};

extern cAudioInfo cAudioInfo::sTheInfo;

cAudioInfo* GetAudioInfo();
void global constructors keyed to cAudioInfo::sTheInfo();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_AUDIOINFO_H

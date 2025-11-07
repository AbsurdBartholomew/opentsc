// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_SOUNDINFO_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_SOUNDINFO_H

struct SndInfo {
	SInt32 resID;
	EventMapping *fName;
};

struct SoundInfo {
private:
	int fID;
	EventMapping *fEventMapping;
	
public:
	SoundInfo& operator=();
	SoundInfo();
	SoundInfo();
	bool LoadInfo(iResFile *file, int id);
	int GetID();
	EventMapping* GetEventMapping();
	char* GetName();
};

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
SndInfo* SndInfo * FindRes<SndInfo>(SndInfo *begin, SndInfo *end, int resID);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_SOUNDINFO_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_GAMESOUND_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_GAMESOUND_H

enum eMode {
	kLive = 0,
	kBuy = 1,
	kBuild = 2,
	kHood = 3,
	kFrontEnd = 4,
	kLoad = 5,
	kCredits = 6,
	kOptions = 7,
	kFamily = 8,
	kFade = 9
};

extern cIGZSndSys *g_pSndSys;
extern cBoxX *g_pBoxX;

void cSoundPlayer::~cSoundPlayer(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_GAMESOUND_H

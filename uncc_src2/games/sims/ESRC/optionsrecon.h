// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_OPTIONSRECON_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_OPTIONSRECON_H

typedef StackString2<4> StringBufW4;
typedef StackString2<16> StringBufW16;

struct ScoreRecon {
	StringBufW16 m_sbSimName;
	StringBufW4 m_sbPlayerInitials;
	s32 m_nScore;
	s32 m_nComponent1;
	s32 m_nComponent2;
	s32 m_nComponent3;
	s32 m_nComponent4;
	
	ScoreRecon& operator=();
	ScoreRecon(ScoreRecon &other);
	ScoreRecon();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct OptionsRecon {
	bool m_bFreeWill;
	bool m_bRumble;
	bool m_bAutoCenter;
	s8 m_nSFXVolume;
	s8 m_nMusicVolume;
	s8 m_nScreenAdjustX;
	s8 m_nScreenAdjustY;
	s8 m_nLanguageIndex;
	UnlockedRecon m_Unlocked;
	ScoreRecon m_HighScores[8][5];
	
	OptionsRecon& operator=();
	OptionsRecon(OptionsRecon &other);
	OptionsRecon();
	OptionsRecon();
	void DoStream(ReconBuffer *r, SInt32 version);
};

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result);
vector<UnlockedId,__malloc_alloc_template<0> >& vector<UnlockedId, __malloc_alloc_template<0> >::operator=(vector<UnlockedId,__malloc_alloc_template<0> > &x);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_OPTIONSRECON_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVE_H

struct Motives {
	float Motive[16];
	float oldMotive[16];
	cXPerson *person;
	
	Motives& operator=();
	Motives();
	Motives();
	void Init();
	void Sim();
};

extern __vtbl_ptr_type MotiveConstantsClient virtual table[5];

ConstantsClient* GetMotiveConstantsClient();
void global constructors keyed to GetMotiveConstantsClient();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_MOTIVE_H

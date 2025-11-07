// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_SRAND_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_SRAND_H


void SetRRandSeed(unsigned int n);
unsigned int GetSRandSeed();
void SetSRandSeed(unsigned int theSeed);
short unsigned int RRand(short unsigned int lim);
int GetNextRandomNumber();
int SGIRand(unsigned int limit);
int SGRand(unsigned int limit);
int SGSRand(unsigned int limit);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_SRAND_H

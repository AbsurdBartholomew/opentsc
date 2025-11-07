// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_CTGDUMP_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_CTGDUMP_H

struct CTGDump {
	CTGDump& operator=();
	CTGDump();
	CTGDump();
	CTGDump(CTGDump*, int, void);
	CTGDump& operator<<(long unsigned int inLong);
	CTGDump& operator<<();
	CTGDump& operator<<();
	CTGDump& operator<<();
	CTGDump& operator<<();
	CTGDump& operator<<();
	CTGDump& operator<<();
};

extern CTGDump ctgDump;

void CTGDump::~CTGDump(int __in_chrg);
void global constructors keyed to ctgDump();
void global destructors keyed to ctgDump();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_CTGDUMP_H

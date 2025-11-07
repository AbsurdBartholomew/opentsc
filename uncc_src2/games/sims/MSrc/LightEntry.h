// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_LIGHTENTRY_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_LIGHTENTRY_H

struct LightEntry {
private:
	signed char mDeltas[4];
	
public:
	LightEntry(LightEntry &in);
	LightEntry();
	LightEntry();
	LightEntry(LightEntry*, int, void);
	LightEntry& operator=(LightEntry &in);
	bool IsEmpty();
	int Count();
	bool Has(int inIndex);
	CTilePt Get(int inIndex, int *outX, int *outY);
	void Get();
	void Clear();
	void Set(int inIndex, int x, int y);
	void Absorb(int x, int y);
	void Unabsorb(int x, int y);
	LightEntry& Rotate(int inRotation);
	int FindSources(CTilePt *out1, CTilePt *out2, CTilePt &inThisTile);
	void Remove(int index);
};

void LightEntry::~LightEntry(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_LIGHTENTRY_H

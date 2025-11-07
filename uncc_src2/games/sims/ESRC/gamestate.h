// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_GAMESTATE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_GAMESTATE_H

struct EGameStateId {
protected:
	u32 m_id;
	
public:
	EGameStateId& operator=();
	EGameStateId();
	EGameStateId();
	EGameStateId(EGameStateId*, int, void);
	EGameStateId();
	u32 operator unsigned int();
};

extern short unsigned int _sNoCtrlMessageBuff[64];

bool IsSecondCtrlRequired();
void EGameStateMan::~EGameStateMan(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_GAMESTATE_H

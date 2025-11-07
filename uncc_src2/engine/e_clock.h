// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_CLOCK_H
#define C__EOR_SRC2_ENGINE_E_CLOCK_H

struct EClock {
protected:
	void *m_pData;
	
public:
	EClock& operator=();
	EClock();
	EClock();
	EClock(EClock*, int, void);
	float GetSec();
	double GetSecDouble();
	void Start();
};

void EClock::~EClock(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_CLOCK_H

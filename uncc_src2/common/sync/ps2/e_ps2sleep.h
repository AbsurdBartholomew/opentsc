// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_SYNC_PS2_E_PS2SLEEP_H
#define C__EOR_SRC2_COMMON_SYNC_PS2_E_PS2SLEEP_H

struct ESleep {
protected:
	ESemaphore m_semaphore;
	
public:
	ESleep& operator=();
	ESleep();
	ESleep();
	ESleep(ESleep*, int, void);
	void Sleep(u32 uMilliseconds);
protected:
	static void _tCallback(/* parameters unknown */);
};

void ESleep::~ESleep(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_SYNC_PS2_E_PS2SLEEP_H

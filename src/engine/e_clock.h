/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

class EClock
{
protected:
	void *m_pData;
	
public:
	//EClock& operator=();
	//EClock();
	//EClock(int __in_chrg);
    EClock();
    ~EClock();

	float GetSec();
	double GetSecDouble();
	void Start();
};
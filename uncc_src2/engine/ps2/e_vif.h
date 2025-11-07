// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_VIF_H
#define C__EOR_SRC2_ENGINE_PS2_E_VIF_H

struct EVif {
	u32 *m_pStart;
	u32 *m_pEnd;
	u32 *m_pLastDmaTag;
	int m_maxNumBytes;
	bool m_begin;
protected:
	static EEvent m_ev;
	static EInterruptHandler m_ih;
	static bool m_init;
	static int m_vu1ResumePCs[4];
	
public:
	EVif& operator=();
	EVif();
	EVif();
	EVif(EVif*, int, void);
	u32* AddVifTag(u32 vifTag);
	u32* AddDmaTag(u32 command, void *pData, int nqw);
	u32* AddData(void *pData, int nBytes);
	void VerifyDmaTag(u32 command);
	void Begin(void *pBuf, int maxNumBytes);
	void End();
	void FlushCache();
	void Send();
	void Dump();
	void UnpackImmediate(void *pDst, void *pSrc, int nBytes);
	void UnpackReference(void *pDst, void *pSrc, int nBytes);
	void ExecuteFunction(u32 pFn);
protected:
	void PatchDmaTag();
};

extern EEvent EVif::m_ev;
extern EInterruptHandler EVif::m_ih;
extern bool EVif::m_init;
extern int EVif::m_vu1ResumePCs[4];

void EVif::~EVif(int __in_chrg);
void global constructors keyed to EVif::m_ev();
void global destructors keyed to EVif::m_ev();

#endif // C__EOR_SRC2_ENGINE_PS2_E_VIF_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_VU1_H
#define C__EOR_SRC2_ENGINE_PS2_E_VU1_H

struct EVU1 {
	long long unsigned int m_dmaCmdBuf[256];
	bool m_init;
	
	EVU1& operator=();
	EVU1();
	EVU1();
	EVU1(EVU1*, int, void);
	void Init();
	void UploadData(void *pDst, void *pSrc, int nBytes);
	void UploadMemMap(void *pDst, void *pSrc, int nBytes);
	void ResetInputBuffer(EVif *pVif);
	void GetCurInputBuffer();
	void InitOverlayTable();
	void LoadMPG(EVif *pVif, int mpg);
	void LoadMPG();
	void LoadMPGRef(EVif *pVif, int mpg);
	int GetMPGLoadSize(int mpg);
	u32 GetMPGStart(int mpg);
	char* GetMPGName(int mpg);
	int GetNeededMPG(int primtype);
};

extern EMicrocodeOverlay _overlayTable[3];
extern int _mpgPrims[13];
extern EVU1 _vu1;

void EVU1::~EVU1(int __in_chrg);
void __builtin_delete(void *pAddress);
void global constructors keyed to _overlayTable();
void global destructors keyed to _overlayTable();

#endif // C__EOR_SRC2_ENGINE_PS2_E_VU1_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2CTRL_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2CTRL_H

struct EPs2Controller : EController {
private:
	u128 *m_pDmaBuffer;
	int m_port;
	int m_slot;
	int m_stickCenter[2][2];
	int m_lastStickRaw[2][2];
	int m_cUnmoved[2];
	bool m_bProcessData;
	bool m_bHasUpdated;
	
public:
	EPs2Controller& operator=();
	EPs2Controller();
	EPs2Controller();
	/* vtable[1] */ virtual EPs2Controller(EPs2Controller*, int, void);
	/* vtable[3] */ virtual bool InitHardware(void *pInitInfo);
	/* vtable[2] */ virtual void RefreshContext();
	/* vtable[4] */ virtual void ReadStatusData();
	/* vtable[5] */ virtual void ReadGameData(void *pData);
	/* vtable[6] */ virtual void ProcessGameData(void *pData);
	/* vtable[7] */ virtual void ShutDownHardware();
private:
	void UpdateCenter(int stickIndex, int rawPosX, int rawPosY);
	float RemapStick(int val, int stickCenter);
};

extern __vtbl_ptr_type EPs2Controller virtual table[9];

void EPs2Controller::~EPs2Controller(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2CTRL_H

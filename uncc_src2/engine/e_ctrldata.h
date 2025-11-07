// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_CTRLDATA_H
#define C__EOR_SRC2_ENGINE_E_CTRLDATA_H

struct EControllerData {
	u32 buttons;
	u32 lastButtons;
	u32 wasDown;
	u32 lastWasDown;
	u32 wasUp;
	u32 lastWasUp;
	u32 pressed;
	u32 released;
	u32 lastPressed;
	u32 lastReleased;
	int nPressed[16];
	int nReleased[16];
	bool bPressedFirst[16];
	bool bGotEvent[16];
	float stick[2][2];
	float lastStick[2][2];
	
	EControllerData();
	EControllerData();
	EControllerData(EControllerData*, int, void);
	void Clear(bool bConnected);
	void Reset(bool bConnected);
	void operator=(EControllerData &dataIn);
	void UpdateButtons(int buttonsIn);
	void AddPressedEvent(u32 button);
	void AddReleasedEvent(u32 button);
	void UpdateStick(int sticknum, int axis, float value);
};

#endif // C__EOR_SRC2_ENGINE_E_CTRLDATA_H

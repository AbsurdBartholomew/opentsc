// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_CTRLMANAGER_H
#define C__EOR_SRC2_ENGINE_E_CTRLMANAGER_H

struct _E_CtrlToPlayerAssoc {
	u32 playerIndex;
	u32 controllerIndex;
};

enum ECtrlState {
	E_CTRL_STATE_PRESSED = 0,
	E_CTRL_STATE_RELEASED = 1,
	E_CTRL_STATE_DOWN = 2,
	E_CTRL_STATE_COUNT = 3
};

struct EControllerManager {
protected:
	_E_CtrlToPlayerAssoc m_controllerToPlayer[8];
public:
	__vtbl_ptr_type *$vf2585;
	
	EControllerManager& operator=();
	EControllerManager();
protected:
	EControllerManager();
	/* vtable[1] */ virtual EControllerManager(EControllerManager*, int, void);
public:
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual bool Init();
	/* vtable[4] */ virtual void Shutdown();
	EController* GetController(u32 controllerIndex);
	EController* GetPlayerController(u32 playerIndex);
	void MapPlayerToController(u32 playerIndex, u32 controllerIndex);
	void SwapAxes(int ctrlIndex, int stickIndex);
	void InvertAxis(int ctrlIndex, int stickIndex, int axisIndex);
	EControllerContext* LockControllerFocus(int ctrlIndex, bool bCopyContext);
	void ReleaseControllerFocus(int ctrlIndex, bool bCopyContext);
	EControllerContext* LockPlayerFocus(int playerIndex);
	void ReleasePlayerFocus(int playerIndex);
	int FindActiveController();
	float GetControllerStick(int ctrlIndex, int stickIndex, int axisIndex);
	float GetPlayerStick(int playerIndex, int stickIndex, int axisIndex);
	u32 GetControllerButtons(int ctrlIndex, u32 buttonMask, ECtrlState buttonState);
	u32 GetPlayerButtons(int playerIndex, u32 buttonMask, ECtrlState buttonState);
	u32 GetControllerCommands(int ctrlIndex, u32 commandMask, ECtrlState buttonState);
	u32 GetPlayerCommands(int playerIndex, u32 commandMask, ECtrlState buttonState);
	u32 GetControllersUsingButton(u32 button, ECtrlState buttonState);
	u32 GetControllersUsingStick(int stickIndex);
	u32 GetPlayersUsingButton(u32 button, ECtrlState buttonState);
	u32 GetPlayersUsingStick(int stickIndex);
	u32 GetControllersIssuingCommand(u32 command, ECtrlState buttonState);
	u32 GetPlayersIssuingCommand(u32 command, ECtrlState buttonState);
};

extern int _nCtrlPads;
extern int _lastCtrlUpdate;
extern __vtbl_ptr_type EControllerManager virtual table[6];
extern EController *_ctrlPads[8];

void EControllerManager::~EControllerManager(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_CTRLMANAGER_H

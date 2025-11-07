// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_VIBRATE_H
#define C__EOR_SRC2_ENGINE_E_VIBRATE_H

typedef unsigned char u8;
typedef float f32;

struct VibrateControl {
	ActState Actuators[2];
	bool VibrationOn;
	u8 Port;
	u8 Slot;
	u8 NumActuators;
	unsigned char Direct[6];
	unsigned char LastDirect[6];
};

struct EVibrate {
protected:
	bool m_Initialized;
	bool m_Pause;
	VibrateControl m_VControls[2];
	unsigned char m_SysAlign[6];
	
public:
	EVibrate& operator=();
	EVibrate();
	EVibrate();
	EVibrate(EVibrate*, int, void);
	void Enable();
	void Disable();
	bool IsOn();
	bool TurnOn(u8 Port);
	bool IsControllerReady(u8 Port);
	void TurnOff();
	bool IsControllerOn();
	void Pause();
	void Resume();
	bool VibrateMotorOne(u8 Port, f32 Intensity, f32 Duration);
	bool VibrateMotorOne();
	bool VibrateMotorTwo(u8 Port, f32 Intensity, f32 Duration);
	bool VibrateMotorTwo();
	bool VibrateAll(u8 Port, f32 I1, f32 I2, f32 D1, f32 D2);
	bool VibrateAll();
	bool StopMotorOne(u8 Port, f32 Duration);
	bool StopMotorOne();
	bool StopMotorTwo(u8 Port, f32 Duration);
	bool StopMotorTwo();
	bool StopVibration(u8 Port);
	void StopAllVibration();
	bool UpdateVibration();
protected:
	bool IsPortInvalid(u8 Port);
};

extern EVibrate _forceFeedback;

void EVibrate::~EVibrate(int __in_chrg);
void global constructors keyed to _forceFeedback();
void global destructors keyed to _forceFeedback();

#endif // C__EOR_SRC2_ENGINE_E_VIBRATE_H

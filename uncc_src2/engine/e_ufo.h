// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_UFO_H
#define C__EOR_SRC2_ENGINE_E_UFO_H

struct EUfo {
protected:
	EVec3 m_vEye;
	EVec3 m_vTarget;
	EVec3 m_vUp;
	float m_transSpeed;
	float m_rotSpeed;
	bool m_transMode;
	bool m_enableDPad;
	
public:
	EUfo& operator=();
	EUfo();
	EUfo();
	void GetPos(E3DWindow &win);
	void SetPos(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp);
	void GetPos();
	void SetTarget();
	float GetTransSpeed();
	void SetTransSpeed();
	float GetRotSpeed();
	void SetRotSpeed();
	void EnableDPad();
	void Update();
};

#endif // C__EOR_SRC2_ENGINE_E_UFO_H

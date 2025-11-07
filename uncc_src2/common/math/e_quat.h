// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_E_QUAT_H
#define C__EOR_SRC2_COMMON_MATH_E_QUAT_H

struct EQuat {
	union {
		float d[4];
		struct {
			float x;
			float y;
			float z;
			float w;
		};
	};
	
	EQuat& operator=();
	EQuat();
	EQuat();
	EQuat();
	EQuat();
	EQuat();
	float operator[]();
	float& operator[]();
	bool operator==();
	bool operator!=();
	EQuat operator+();
	EQuat operator-();
	EQuat& operator+=();
	EQuat operator*();
	EQuat& operator*=();
	EQuat operator/();
	EQuat& operator/=();
	void ToMat4(EMat4 &m);
	void FromMat4(EMat4 &m);
	void ToAxisAngle(EVec3 &vAxisOut, float &angleOut);
	float ExtractAxisRotation(EVec3 &vAxis);
	EQuat operator*();
	EQuat& operator*=();
	float MagSq();
	float Mag();
	EQuat& Normalize();
	EQuat& Set(EVec3 &vAxis, float angle);
	EQuat& Set();
	EQuat& Set();
	EQuat& Id();
	bool IsId();
	EQuat& Invert();
	EQuat GetInvert();
	EQuat& Negate();
	float Dot();
	EQuat& Slerp(float u, EQuat &qA, EQuat qB);
	EQuat& SlerpNoInvert(float u, EQuat &qA, EQuat &qB);
	EQuat& Blend();
	EQuat& LinearBlend();
	EQuat& LinearBlendNoNormalize();
	EQuat& Scale(float u, EQuat &q);
	void Print();
	int GetStateSize();
	void SaveState();
	void LoadState();
};

EStream& operator<<(EStream &s, EQuat &q);
EStream& operator>>(EStream &s, EQuat &q);
EQuat operator*(float scaler, EQuat &q);

#endif // C__EOR_SRC2_COMMON_MATH_E_QUAT_H

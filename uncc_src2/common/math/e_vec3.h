// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_E_VEC3_H
#define C__EOR_SRC2_COMMON_MATH_E_VEC3_H

struct EVec2 {
	union {
		float d[2];
		struct {
			float x;
			float y;
		};
	};
	
	EVec2& operator=();
	EVec2(float x, float y);
	EVec2();
	EVec2();
	EVec2();
	float& operator[](int value);
	float operator[]();
	float* operator float *();
	float* operator float *();
	EVec2 operator+(EVec2 &v);
	EVec2& operator+=();
	EVec2 operator-(EVec2 &v);
	EVec2 operator-();
	EVec2& operator-=();
	EVec2 operator*(float scaler);
	EVec2& operator*=();
	float operator*();
	EVec2 Mult();
	EVec2 operator/();
	EVec2& operator/=();
	bool operator==();
	bool operator!=();
	float MagSq();
	float Mag();
	EVec2& Normalize();
	EVec2& Blend(float u, EVec2 &vA, EVec2 &vB);
	void Clamp();
	float Min();
	float Max();
	float Avg();
	void Set();
	void Set();
	int GetStateSize();
	void SaveState(float *&pData);
	void LoadState();
	void Print();
};

struct EVec3 {
	union {
		float d[3];
		struct {
			float x;
			float y;
			float z;
		};
	};
	
	EVec3& operator=();
	EVec3(EVec3 &v);
	EVec3();
	EVec3();
	EVec3();
	EVec3();
	float& operator[](int value);
	float operator[]();
	float* operator float *();
	float* operator float *();
	EVec2& operator EVec2 &();
	EVec3 operator+();
	EVec3& operator+=();
	EVec3 operator-(EVec3 &v);
	EVec3 operator-();
	EVec3& operator-=();
	EVec3 operator*(EVec3 &v);
	EVec3& operator*=(float scaler);
	float operator*();
	EVec3 Mult();
	EVec3 operator/();
	EVec3& operator/=(float scaler);
	EVec3 operator/();
	bool operator==();
	bool operator!=();
	float MagSq();
	float Mag();
	EVec3& Normalize();
	EVec3& Blend();
	void IntersectLine();
	float IntersectLineSeg();
	bool IntersectLineSegTest();
	void ToU8s(unsigned char *v);
	void FromU8s(unsigned char *v);
	void ToS8s(signed char *v);
	void FromS8s(signed char *v);
	void Clamp();
	float Min();
	float Max();
	float Avg();
	void Set();
	void Set();
	void Print();
	int GetStateSize();
	void SaveState();
	void LoadState();
};

#endif // C__EOR_SRC2_COMMON_MATH_E_VEC3_H

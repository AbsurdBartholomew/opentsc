// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_E_MAT4_H
#define C__EOR_SRC2_COMMON_MATH_E_MAT4_H

struct EMat4 {
	union {
		float d[4][4];
		struct {
			float _00;
			float _01;
			float _02;
			float _03;
			float _10;
			float _11;
			float _12;
			float _13;
			float _20;
			float _21;
			float _22;
			float _23;
			float _30;
			float _31;
			float _32;
			float _33;
		};
	};
	
	EMat4(EMat4 &m);
	EMat4();
	EMat4();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EMat4& operator=(float v);
	EMat4& operator=();
	float* operator float *();
	EVec4& operator[](int row);
	EVec4& operator[]();
	EVec3 GetColumn3();
	void GetColumn(int column, EVec4 &vCol);
	void GetColumn();
	void SetColumn(int column, EVec4 &vCol);
	void SetColumn();
	EMat4 operator*();
	EMat4 operator*=();
	EVec3 operator*();
	EVec3 Mult4x4();
	void Mult(EVec4 &vIn, EVec4 &vOut);
	EVec3 VectorRotate();
	void Mult4x4();
	void Mult4x4();
	void Mult4x4();
	void Mult4x4();
	EMat4& Normalize();
	EMat4& Transpose();
	EMat4& Transpose();
	EMat4& Id();
	EMat4& Translate(EVec3 &v);
	EMat4& Translate();
	EMat4& Scale(EVec3 &v);
	EMat4& Scale();
	EMat4& Scale();
	EMat4& Rotate(EVec3 &vAxis, float angle);
	EMat4& Rotate();
	EMat4& RotateX(float angle);
	EMat4& RotateY(float angle);
	EMat4& RotateZ(float angle);
	EMat4& PreRotateX(float angle);
	EMat4& PostRotateX(float angle);
	EMat4& PreRotateY(float angle);
	EMat4& PostRotateY(float angle);
	EMat4& PreRotateZ(float angle);
	EMat4& PostRotateZ(float angle);
	EMat4& PreTranslate(EVec3 &vTrans);
	EMat4& PreTranslate();
	EMat4& PostTranslate(EVec3 &vTrans);
	EMat4& PostTranslate();
	EMat4& PreScale(float scale);
	EMat4& PreScale();
	EMat4& PreScale();
	EMat4& PostScale(float scale);
	EMat4& PostScale();
	EMat4& PostScale();
	void Conform(EVec3 &vNormal);
	EMat4& LookAt(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp);
	EMat4& LookAtPos(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp);
	EMat4& LookAtDirect(EVec3 &vOldUnitDir, EVec3 &vNewUnitDir, float multiplier);
	EMat4& LookTo(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp);
	EMat4& Projection(float fovYDegrees, float aspect, float nearPlane, float farPlane);
	EMat4& Ortho(float left, float right, float bottom, float top, float nearPlane, float farPlane);
	EMat4& BlendEuler(float u, EMat4 &mA, EMat4 &mB);
	EMat4& BlendQuat(float u, EMat4 &mA, EMat4 &mB);
	EMat4& TexturePerspectiveProjection(EVec3 &vSource, EVec3 &vTarget, EVec3 &vUp, float fovYDegrees, float aspect, float tileU, float tileV);
	EMat4& TexturePlanarProjection(EVec3 &vSource, EVec3 &vTarget, EVec3 &vUp, float width, float height, float tileU, float tileV);
	bool Invert(EMat4 &mSource);
	bool Invert();
	bool InvertComplex();
	bool InvertComplex();
	void SimpleInvert(EMat4 &mSource);
	void GetHPR(float &heading, float &pitch, float &roll);
	void Clamp();
	void Print();
	float GetMaxScale();
	float ExtractAxisRotation(EVec3 &vAxis);
	sceVu0FMATRIX& operator float (&)[3][3]();
	void SoftwareMult(EMat4 &l, EMat4 &r);
	EVec4 SoftwareMult();
	void SoftwareMult();
};

EStream& operator<<(EStream &s, EMat4 &m);
EStream& operator>>(EStream &s, EMat4 &m);

#endif // C__EOR_SRC2_COMMON_MATH_E_MAT4_H

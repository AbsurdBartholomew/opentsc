// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_E_BOUND3_H
#define C__EOR_SRC2_COMMON_MATH_E_BOUND3_H

struct EBound3 {
	EVec3 vMin;
	EVec3 vMax;
	
	EBound3();
	EBound3();
	EBound3();
	EBound3();
	EBound3();
	EBound3();
	EBound3& operator=();
	bool operator==();
	bool operator!=();
	EBound3& operator=();
	EBound3& operator+=();
	EBound3& operator+=();
	EBound3 operator+();
	EBound3 operator+();
	bool Overlap();
	bool Overlap();
	EVec3 Center();
	float Width();
	float Height();
	float Depth();
	void GetCorners(EVec3 *vCornersOut);
	void Transform(EMat4 &mOrient, EBound3 &boundOut);
	void Transform();
	void Add(EBound3 &b, EMat4 &mOrient);
	void Add();
	void Add();
	void Add();
	void Compute(EBoundSphere &bs);
	void Compute();
	void Compute();
	void Compute();
	void Compute();
	void CalcBoundSphere(EBoundSphere &bsOut);
};

#endif // C__EOR_SRC2_COMMON_MATH_E_BOUND3_H

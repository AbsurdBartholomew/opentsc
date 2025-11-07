// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_E_BOUNDSPHERE_H
#define C__EOR_SRC2_COMMON_MATH_E_BOUNDSPHERE_H

struct EBoundSphere {
	EVec3 vCenter;
	float radius;
	
	EBoundSphere();
	EBoundSphere();
	EBoundSphere();
	EBoundSphere();
	EBoundSphere();
	EBoundSphere();
	EBoundSphere& operator=();
	EBoundSphere& operator=();
	bool operator==();
	bool operator!=();
	EBoundSphere& operator=();
	EBoundSphere& operator+=();
	EBoundSphere& Combine(EBoundSphere &bs1, EBoundSphere &bs2);
	EBoundSphere& ComputeFast(EVec3 *vPoints, int count);
};

#endif // C__EOR_SRC2_COMMON_MATH_E_BOUNDSPHERE_H

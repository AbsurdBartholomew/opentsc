// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_ANIMCOMP_E_ROTDECOMP_H
#define C__EOR_SRC2_COMMON_MATH_ANIMCOMP_E_ROTDECOMP_H

struct ERotKeyframe {
	EQuat q;
	int time;
	float bias;
};

struct ERotDecomp {
protected:
	EBitArray *m_pData;
	int m_startDataPos;
	int m_currentSplineStartFrame;
	int m_currentSplineEndFrame;
	int m_nFrames;
	int m_currentKeyframe;
	int m_nKeyframes;
	s16 m_nBitsKeyframe;
	s8 m_nBitsDeltaTime;
	s8 m_nBitsQuat;
	s8 m_nBitsBias;
	s8 m_fast;
	float m_quatScale;
	float m_biasScale;
	float m_lastFrame;
	EQuat m_qn;
	EQuat m_bn;
	EQuat m_anp1;
	EQuat m_qnp1;
	
public:
	ERotDecomp& operator=();
	ERotDecomp();
	ERotDecomp();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Init(EBitArray *pData, int startPos);
	EQuat GetFrame(float frame);
	int GetFrameCount();
	int GetBitCount();
protected:
	void Reset();
	void GetKeyframe(int keyframe, ERotKeyframe &out);
	void GetQuatVal(int dataPos, EQuat &qOut);
	void GetQ(int sel, int keyframe, EQuat &qOut);
	void NextSegment(float frame);
};

EQuat operator*(float scaler, EQuat &q);

#endif // C__EOR_SRC2_COMMON_MATH_ANIMCOMP_E_ROTDECOMP_H

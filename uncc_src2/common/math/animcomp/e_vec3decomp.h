// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_MATH_ANIMCOMP_E_VEC3DECOMP_H
#define C__EOR_SRC2_COMMON_MATH_ANIMCOMP_E_VEC3DECOMP_H

struct EVec3Keyframe {
	EVec3 v;
	int time;
	float bias;
};

struct EVec3Decomp {
protected:
	EBitArray *m_pData;
	int m_startDataPos;
	int m_currentKeyframe;
	int m_currentSplineStartFrame;
	int m_currentSplineEndFrame;
	int m_nFrames;
	int m_nKeyframes;
	s16 m_nBitsKeyframe;
	s8 m_nBitsDeltaTime;
	s8 m_nBitsVec;
	s8 m_nBitsBias;
	s8 m_fast;
	float m_biasScale;
	float m_lastFrame;
	EVec3 m_vn;
	EVec3 m_bn;
	EVec3 m_anp1;
	EVec3 m_vnp1;
	EVec3 m_vScale;
	EVec3 m_vOffset;
	
public:
	EVec3Decomp& operator=();
	EVec3Decomp();
	EVec3Decomp();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Init(EBitArray *pData, int startPos);
	EVec3 GetFrame(float frame);
	int GetFrameCount();
	int GetBitCount();
protected:
	void Reset();
	void GetKeyframe(int keyframe, EVec3Keyframe &out);
	void GetVecVal(int dataPos, EVec3 &vOut);
	void GetV(int sel, int keyframe, EVec3 &vOut);
	void NextSegment(float frame);
};

#endif // C__EOR_SRC2_COMMON_MATH_ANIMCOMP_E_VEC3DECOMP_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_MISC_H
#define C__EOR_SRC2_ENGINE_E_MISC_H


void* memcpy(void *pDest, void *pSource, unsigned int nBytes);
int log2down(int n);
void Pause(float time);
void DumpBinary64(void *pData, int nBytes);
void DumpBinary128(void *pData, int nBytes, int hex);
int ilog2(float f);
int ilog2(u32 i);
float pow2(int exp);
void MemSet32(void *pDest, u32 value, int nBytes);
float blendDt(float tgt, float cur, float speed, float closeEnough);
float blendAngleDt(float tgt, float cur, float speed, float closeEnough);
float GetAngleDelta(float a1, float a2);
float GetAngleDiff(float a1, float a2);
float blendFloat(float a, float b, float k);
float AngleRange90(float inAngle, bool *flip);
float floor(float f);
float frand(long int s);
float* noise3(float *xnew);
float fnoise3(float *p);

#endif // C__EOR_SRC2_ENGINE_E_MISC_H

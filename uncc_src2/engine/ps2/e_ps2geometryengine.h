// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2GEOMETRYENGINE_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2GEOMETRYENGINE_H

struct EVec4 {
	union {
		float d[4];
		struct {
			float x;
			float y;
			float z;
			float w;
		};
	};
	
	EVec4& operator=(float v);
	EVec4(EVec3 &v);
	EVec4();
	EVec4();
	EVec4();
	EVec4();
	EVec4();
	EVec4();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EVec4& operator=();
	EVec4& operator=();
	EVec4& operator=();
	float& operator[](int value);
	float operator[]();
	float* operator float *();
	float* operator float *();
	EVec2& operator EVec2 &();
	EVec3& operator EVec3 &();
	EVec4 operator+();
	EVec4 operator+();
	EVec4& operator+=(EVec4 &v);
	EVec4& operator+=();
	EVec4 operator-();
	EVec4 operator-();
	EVec4 operator-();
	EVec4& operator-=();
	EVec4& operator-=();
	EVec4 operator*();
	EVec4& operator*=(float scaler);
	float operator*();
	float operator*();
	float PlaneEq();
	EVec4 Mult(EVec4 &v);
	EVec4 Mult();
	EVec4& Mult();
	EVec4 operator/();
	EVec4& operator/=();
	EVec4 operator/();
	EVec4 operator/();
	bool operator==();
	bool operator==();
	bool operator!=();
	bool operator!=();
	float MagSq();
	float Mag();
	EVec4& Normalize();
	EVec4& Normalize3();
	EVec4& Project();
	EVec4& Blend(float u, EVec4 &vA, EVec4 &vB);
	void IntersectLine();
	float IntersectLineSeg();
	bool IntersectLineSegTest();
	void SetToPlane();
	void SetToPlane();
	void SetToPlaneWithUnitNormal();
	void Set();
	void Set();
	void ToU8s();
	void FromU8s();
	void ToS32s(int *v);
	float Min();
	float Max();
	float Avg();
	void Clamp(float low, float high);
	void Print();
	int GetStateSize();
	void SaveState();
	void LoadState();
};

typedef union {
	long long unsigned int d_u128[1];
	long unsigned int d_u64[2];
	unsigned int d_u32[4];
	int d_s32[4];
	float d_f32[4];
} EPs2GEGSEntry;

struct EPs2GEOutputBuffer {
	EPs2GEGSEntry dmaHeader;
	EPs2GEGSEntry gsHeaderPrim;
	EPs2GEGSEntry primReg;
	EPs2GEGSEntry gsHeader;
	EPs2GEGSEntry verts[168];
	u32 overflow;
	EPs2GEGSEntry *pFlushPos;
	unsigned int pad[2];
};

struct EPs2GETransformedVertData {
	EPs2GETextureCoord tc[2];
	unsigned int color[4];
	unsigned int screen[4];
};

struct EPs2GETransformedVert {
	EPs2GETransformedVertData d;
	EVec4 vEye;
	EVec4 vScreen;
	EVec4 vColor;
	EVec2 vTC[2];
	u32 clipFlags;
	unsigned int pad[2];
	u32 adc;
};


void geSetOutputBuffer(int which);
EPs2GEOutputBuffer* geGetOutputBuffer();
void geSwapOutputBuffers();
void geSwapInputBuffers();
void geResetInputBuffers();
void geRecalcCombinedView();
void geUploadModelMatrices(EMat4 *mModelMats, int pos, int count);
void geRecalcModelMatricesUnweighted();
void geVU1RecalcModelMatrixData(int pos, int count);
void geRecalcModelMatrixData(int pos, int count);
void geRecalcLookatTextureXForm();
void geRecalcLightData();
void geTriStripTesselated();
void geTriStrip();
void geTriStrips();
void geTriFan();
void geTriList();
void geQuadList();
void geLineList();
void geLineStrip();
void geSpriteList();
void geRectList();
void gePointList();
void geFlushPrims();
void geProcessVert(EGEVert *v, EPs2GETransformedVert *tv, bool clipped);
void geDrawClippedTri(EPs2GETransformedVert **pVerts);
void geAddTriFan(EPs2GETransformedVert **pVerts, int nTris);
void geDrawClippedSprite(EPs2GETransformedVert **pVerts);
void geVertex();
void geTriIndexed();
EVec3 operator*(float scaler, EVec3 &vVec);
EVec4 operator*(float scaler, EVec4 &vVec);
EVec3 operator*(EVec3 &vLeft, EMat4 &mRight);
EPs2GETransformedVert* EPs2GETransformedVert::EPs2GETransformedVert();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2GEOMETRYENGINE_H

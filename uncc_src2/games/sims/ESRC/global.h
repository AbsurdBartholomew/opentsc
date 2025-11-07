// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_GLOBAL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_GLOBAL_H

typedef short int s16;
typedef int s32;

struct Shift_JISMapping {
	u16 unicode;
	u16 shift_jis;
};

struct ObjLightDef {
	EObjLightType m_lightType;
	u8 m_red;
	u8 m_green;
	u8 m_blue;
	float m_intensity;
	float m_vOffx;
	float m_vOffy;
	float m_vOffz;
	float m_vDirSpotx;
	float m_vDirSpoty;
	float m_vDirSpotz;
	float m_falloffStartAngle;
	float m_falloffEndAngle;
	float m_falloffStartDistance;
	float m_falloffEndDistance;
};

struct VECTOR<ObjAnimDef> {
private:
	ObjAnimDef *pData;
	
public:
	VECTOR<ObjAnimDef>& operator=();
	VECTOR();
	VECTOR();
	int size();
	ObjAnimDef& operator[]();
	ObjAnimDef& operator[]();
	ObjAnimDef* begin();
	ObjAnimDef* end();
	ObjAnimDef* begin();
	ObjAnimDef* end();
};

struct ResData {
	VECTOR<ObjAnimDef> objectStates;
	u32 bLoadOnStartup : 1;
	u32 bIsWallObj : 1;
	u32 bIsCounter : 1;
	u32 bIsSink : 1;
	u32 bIsSwimPool : 1;
	u32 bIsMtModelMtObj : 1;
	u32 bShadowCaster : 1;
	u32 bConstantUpdate : 1;
	u32 bLightSource : 1;
	u32 bDynamicLight : 1;
	u32 uMemoryCost;
	u32 uPerformanceCost;
	u32 datasetID;
	u32 eorQueueShaderID;
	u32 eorcharacterID;
	u32 eShadowId;
	float fVertTrans;
	float fXScale;
	float fYScale;
	ObjLightDef *pLightDef;
};

enum FenceType {
	kEFenceStyle1 = 2,
	kEFenceStyle2 = 12,
	kEFenceStyle3 = 13,
	kEFenceStyle4 = 14
};

struct FenceData {
	u32 shaderID;
	u32 cost;
	ELocString name;
	FenceType type;
};

extern EGlobal _globals;
extern EVec2 _defULTextureCoord;
extern EVec2 _defLRTextureCoord;
extern EVec4 _vBlueBack;
extern EVec4 _WHITE;
extern EVec4 _BLACK;
extern EVec4 _YELLOW;
extern EVec4 _BLUE;
extern EVec4 _RED;
extern EVec4 _GREEN;
extern EVec4 _CYAN;
extern EVec4 _MAJENTA;
extern EVec4 _GREAY;
extern EVec4 _LT_GREAY;
extern EVec4 _DK_GREAY;
extern __vtbl_ptr_type EGlobal virtual table[44];
extern EDialog *_pDialog;

void EGlobal::~EGlobal(int __in_chrg);
void OrientObjectInstance(cXObject *pObj);
ISimInstance* GetObjectInstance(cXObject *pObj);
ResData* GetResData(cXObject *pObj);
void CollectInteractionsForObject(cXObject *pXObj, InteractionList &mInteractions, int player);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
SpriteIdToResIdNode* SpriteIdToResIdNode * FindRes<SpriteIdToResIdNode>(SpriteIdToResIdNode *begin, SpriteIdToResIdNode *end, int resID);
void global constructors keyed to _globals();
void global destructors keyed to _globals();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_GLOBAL_H

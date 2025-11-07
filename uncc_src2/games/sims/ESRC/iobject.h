// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJECT_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJECT_H

struct EParticleInfo {
	VECTOR<EParticleInfoNode> vParticles;
};

enum EObjeLightOnOff {
	OFF = 0,
	ON = 1
};

struct ObjAnimDef {
	u32 modelID;
	EParticleInfo *pParticleInfo;
	u32 animationID;
	u32 searchShdID;
	u32 shaderID;
	EObjeLightOnOff light;
	SInt32 graphic;
};

typedef TRedBlackTree<ISimsObjectModel *,ISimsObjectModel *> ISimsObjectModelPtrRBTree;
typedef TNodeList<EParticleEffect *> EParticleEffectPtrList;
typedef TFloatTree<EILightmap *> EILightmapFloatTree;

struct EParticleEffect {
protected:
	EIParticleEmit *m_pEmit;
	ERParticleType *m_pType;
	
public:
	EParticleEffect& operator=();
	EParticleEffect(u32 typeId);
	EParticleEffect();
	EParticleEffect();
	EParticleEffect(EParticleEffect*, int, void);
	ERParticleType* GetType();
	EIParticleEmit* GetEmit();
	void SetPos(EMat4 &m, EVec3 &vPos);
	void SetDir(float rot, EVec3 &vPos);
};

struct EParticleObj {
	EParticleEffectPtrList m_effectList;
	
	EParticleObj& operator=();
	EParticleObj();
	EParticleObj();
	EParticleObj(EParticleObj*, int, void);
	void CreateEffects(EMat4 &mObj, float theata, ObjAnimDef *pAnimDef);
	void UpdateEffectPos(float rot, EMat4 &mObj, ObjAnimDef *pAnimDef);
};

struct ISimsWallObjectModel : ISimsObjectModel {
	static ETypeInfo m_typeInfo;
	
	ISimsWallObjectModel& operator=();
	ISimsWallObjectModel();
	static ISimsWallObjectModel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ISimsWallObjectModel* CreateCopy();
	ISimsWallObjectModel();
	/* vtable[6] */ virtual ISimsWallObjectModel(ISimsWallObjectModel*, int, void);
	/* vtable[25] */ virtual void Create(cXObject *pXOb, EHouse *pEHouse);
	/* vtable[2] */ virtual void SetObjOrient();
	/* vtable[28] */ virtual void CreateShadow();
};

struct MtuliTileTweakLookupEntry {
	u32 wbid;
	unsigned int indxMap[4];
};

struct ISimsMultiTileObjectModel : ISimsObjectModel {
	static ETypeInfo m_typeInfo;
protected:
	static MtuliTileTweakLookupEntry _MtuliTileTweekLookupArr[0];
	static EVec2 vOffSets[4];
	
public:
	ISimsMultiTileObjectModel& operator=();
	ISimsMultiTileObjectModel();
	static ISimsMultiTileObjectModel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ISimsMultiTileObjectModel* CreateCopy();
	ISimsMultiTileObjectModel();
	/* vtable[6] */ virtual ISimsMultiTileObjectModel(ISimsMultiTileObjectModel*, int, void);
	/* vtable[25] */ virtual void Create(cXObject *pXOb, EHouse *pEHouse);
	/* vtable[2] */ virtual void SetObjOrient();
protected:
	static int GetOffsetIndx(/* parameters unknown */);
};

struct ISimsCounterTopObject : ISimsObjectModel {
	static ETypeInfo m_typeInfo;
	
	ISimsCounterTopObject& operator=();
	ISimsCounterTopObject();
	static ISimsCounterTopObject* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ISimsCounterTopObject* CreateCopy();
	ISimsCounterTopObject();
	/* vtable[6] */ virtual ISimsCounterTopObject(ISimsCounterTopObject*, int, void);
	/* vtable[25] */ virtual void Create(cXObject *pXOb, EHouse *pEHouse);
	/* vtable[10] */ virtual void Update();
	/* vtable[2] */ virtual void SetObjOrient();
	static bool IsSinkId(/* parameters unknown */);
};

struct IShrubObject : ISimsObjectModel {
	static ETypeInfo m_typeInfo;
	
	IShrubObject& operator=();
	IShrubObject();
	static IShrubObject* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	IShrubObject* CreateCopy();
	IShrubObject();
	/* vtable[6] */ virtual IShrubObject(IShrubObject*, int, void);
	/* vtable[25] */ virtual void Create(cXObject *pXOb, EHouse *pEHouse);
	/* vtable[2] */ virtual void SetObjOrient();
};

// warning: multiple differing types with the same name (name not equal)
struct cXMTObject : virtual cXObject {
	cXObject *$vb2557;
	__vtbl_ptr_type *$vf3636;
	
	cXMTObject& operator=();
	cXMTObject();
protected:
	cXMTObject();
	/* vtable[1] */ virtual cXMTObject(cXMTObject*, int, void);
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[6] */ virtual void PostLoad(cXMTObject*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	cXMTObjectImpl* CAST_IMPL();
};

extern float _newlightint;
extern float _newlightfallstart;
extern float _newlightfallend;
extern float _wallobjscale;
extern float _hlphase[2];
extern u32 _hllastframe;
extern float _hlfreq;
extern float _hlstartamp;
extern float _hlstartlen;
extern float _hlpulseamp;
extern float _hlpulselen;
extern float _hlminscalestart;
extern float _hlminscalepulse;
extern EVec3 _hlcolor;
extern EVec3 _hlcolor2;
extern ERShader *ISimsObjectModel::m_pWhiteShader;
extern bool _ISOM_bUpdateWarn;
extern bool _ISOM_bInitWarn;
extern TRedBlackTree<EILightmap *,EILightmap *> ISimsObjectModel::m_lightmapComputeList;
extern ISimsObjectModelPtrRBTree ISimsObjectModel::m_updateCalc3List;
extern EILightmapFloatTree ISimsObjectModel::m_lmcomputefloattree;
extern ETypeInfo *gpTypeInfo_ISimsObjectModel;
extern bool _drawbulbpos;
extern float _isom_minburpscale;
extern float _isom_maxburpscale;
extern bool _adjSunIntensity;
extern ETypeInfo *gpTypeInfo_ISimsWallObjectModel;
extern ETypeInfo *gpTypeInfo_ISimsMultiTileObjectModel;
extern ETypeInfo *gpTypeInfo_ISimsCounterTopObject;
extern ETypeInfo *gpTypeInfo_IShrubObject;
extern __vtbl_ptr_type IShrubObject::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type IShrubObject virtual table[41];
extern __vtbl_ptr_type ISimsCounterTopObject::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type ISimsCounterTopObject virtual table[41];
extern __vtbl_ptr_type ISimsMultiTileObjectModel::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type ISimsMultiTileObjectModel virtual table[41];
extern __vtbl_ptr_type ISimsWallObjectModel::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type ISimsWallObjectModel virtual table[41];
extern __vtbl_ptr_type ISimsObjectModel::IBaseSimInstance virtual table[7];
extern __vtbl_ptr_type ISimsObjectModel virtual table[41];
extern ETypeInfo ISimsObjectModel::m_typeInfo;
extern ETypeInfo ISimsWallObjectModel::m_typeInfo;
extern ETypeInfo ISimsMultiTileObjectModel::m_typeInfo;
extern ETypeInfo ISimsCounterTopObject::m_typeInfo;
extern ETypeInfo IShrubObject::m_typeInfo;

void EParticleEffect::~EParticleEffect(int __in_chrg);
float CalcRotAngleOff(float rot);
void EParticleObj::~EParticleObj(int __in_chrg);
EStream& operator<<(EStream &s, ISimsObjectModel *pD);
EStream& operator>>(EStream &s, ISimsObjectModel *&pD);
void ISimsObjectModel::~ISimsObjectModel(int __in_chrg);
EBrightLight* EInstance::CalcLights3__16ISimsObjectModelRC5EVec3R8ELights3.0::EBrightLight::EBrightLight();
EStream& operator<<(EStream &s, ISimsWallObjectModel *pD);
EStream& operator>>(EStream &s, ISimsWallObjectModel *&pD);
void ISimsWallObjectModel::~ISimsWallObjectModel(int __in_chrg);
EStream& operator<<(EStream &s, ISimsMultiTileObjectModel *pD);
EStream& operator>>(EStream &s, ISimsMultiTileObjectModel *&pD);
void ISimsMultiTileObjectModel::~ISimsMultiTileObjectModel(int __in_chrg);
EStream& operator<<(EStream &s, ISimsCounterTopObject *pD);
EStream& operator>>(EStream &s, ISimsCounterTopObject *&pD);
void ISimsCounterTopObject::~ISimsCounterTopObject(int __in_chrg);
EStream& operator<<(EStream &s, IShrubObject *pD);
EStream& operator>>(EStream &s, IShrubObject *&pD);
void IShrubObject::~IShrubObject(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to _newlightint();
void global destructors keyed to _newlightint();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_IOBJECT_H

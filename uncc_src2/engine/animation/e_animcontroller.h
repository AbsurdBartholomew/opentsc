// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_ANIMATION_E_ANIMCONTROLLER_H
#define C__EOR_SRC2_ENGINE_ANIMATION_E_ANIMCONTROLLER_H

struct EAnimDef {
	float fps;
	float intensity;
	u32 flags;
	u8 rotAccum;
	u8 endAction;
	u8 blendType;
	float blendM1;
	float blendM2;
	float blendDuration;
	float blendSpeed;
	float blendThreshold;
};

struct EACNodeState {
	u32 flags;
	EQuat qRot;
	EVec3 vTrans;
	EVec3 vScale;
};

typedef void (*FACTrackCallback)(/* parameters unknown */);
typedef void (*FACPostComputeCallback)(/* parameters unknown */);
typedef TRedBlackTree<int,EACTrack *> EACTrackSet;

struct TRPtr<ERCharacter> {
protected:
	ERCharacter *m_p;
	
public:
	TRPtr();
	TRPtr();
	TRPtr();
	TRPtr(TRPtr<ERCharacter>*, int, void);
	TRPtr<ERCharacter>& operator=();
	TRPtr<ERCharacter>& operator=();
	ERCharacter& operator*();
	ERCharacter* operator->();
	ERCharacter* Ptr();
	bool IsValid();
	bool operator bool();
	bool operator==();
	bool operator==();
	bool operator!=();
	bool operator!=();
protected:
	void Release();
};

struct EAnimController {
protected:
	static EACNodeState m_nodes[256];
	EMat4 *m_mNodes;
	EMat4 *m_mDisabledNodes;
	TRPtr<ERCharacter> m_pRCharacter;
	int m_lastComputeFrame;
	EACTrackSet m_tracks;
	EACTrackSet m_activeTracks;
	float m_globalSpeed;
	float m_modelScaler;
	bool m_blended;
	bool m_enabled;
	FACPostComputeCallback m_pfnPostComputeCallback;
	u32 m_postComputeUserParam;
public:
	__vtbl_ptr_type *$vf3177;
	
	EAnimController& operator=();
	EAnimController();
	EAnimController();
	/* vtable[1] */ virtual EAnimController(EAnimController*, int, void);
	void Init(char *szCharacterName);
	void Init();
	void Shutdown();
	void Draw(ERC *prc, ERModel *pRModel, EMat4 &mOrient, u32 renderFlags);
	void SetModelScaler(float scaler);
	void SetTrackAnim(int nTrack, char *szAnimName);
	void SetTrackAnim();
	void SetTrackIntensity(EACTrack *pTrack, float intensity, bool resetBlend);
	void SetTrackBlend(int nTrack, float intensity);
	float GetTrackBlendTarget(int nTrack);
	float GetTrackIntensity(int nTrack);
	float GetTrackSpeed(int nTrack);
	void SetTrackBlendHermite(int nTrack, float intensity, float duration, float m1, float m2);
	void SetTrackBlendSmooth(int nTrack, float intensity, float speed, float threshold);
	void SetProceduralTrack(int nTrack, FACTrackCallback pfnCallback, u32 userParam);
	void StopTrack(int nTrack);
	void SetTrackSpeed(int nTrack, float speed);
	void SetTrackPhase(int nTrack, float phase);
	float GetTrackFrame(int nTrack);
	void SetTrackFrame(int nTrack, float frame);
	float GetTrackPos(int nTrack);
	void SetTrackPos(int nTrack, float pos);
	int GetTrackFrameCount(int nTrack);
	void RestartTrack(int nTrack);
	void SetTrackPhaseLock(int nTrack, int nMaster, float offset);
	EAnimDef* GetTrackAnimDef(int nTrack);
	bool IsTrackAnimComplete(int nTrack);
	void ClearTrackAnimComplete(int nTrack);
	bool IsTrackValid(int nTrack);
	void TransferTrack(int nSourceTrack, int nDestTrack);
	void SetTrackBlendFactors(int nTrack, float *blendFactors);
	float GetAnimTime(int nTrack);
	float GetAnimDistance(int nTrack, EVec3 &vScale);
	EVec3 GetAnimTrans(int nTrack, EVec3 &vScale);
	float GetAnimVelocity(int nTrack, EVec3 &vScale);
	void GetAnimTranslate(int nTrack, EVec3 &vTransOut, EVec3 &vScale);
	void SetTrackSpeedByVelocity(int nTrack, float desiredVelocity, float animVelocity);
	void SetGlobalSpeed(float speed);
	void StopAllTracks();
	static void Blend(/* parameters unknown */);
	static void Layer(/* parameters unknown */);
	void Update(EVec3 *pvPosInOut, EVec3 *pvRotInOut, EVec3 vScaleIn);
	static void CalcOrientMatrix(/* parameters unknown */);
	void Compute(EMat4 &mOrient);
	void ClearLastComputeFrame();
	int FindNode(char *szName);
	EMat4& GetNodeMatrix(int nIndex);
	int GetNodeCount();
	EMat4* GetNodeMatrices();
	void CalcNodeOrient(int nIndex, EMat4 &mOrientOut);
	EVec3 CalcNodePos(int nIndex);
	void CalcVisibilitySphere(EMat4 &mOrient, EBoundSphere &sphereOut);
	void CalcTightBoundBox(EMat4 &mOrient, EBound3 &bOut, bool *includeNodes);
	u32 VisibilityTest(EMat4 &mOrient, u32 parentVis);
	void PrintNodes();
	bool IsInitialized();
	float GetCharacterRadius();
	void Enable(bool enable, EMat4 &mOrient);
	void PrintTracks();
	void SetPostComputeCallback(FACPostComputeCallback pfnPostComputeCallback, u32 userParam);
protected:
	/* vtable[2] */ virtual void ComputeMatrices(EMat4 &mOrient);
	void DeallocateDisabledNodes();
	void BlendTrackIntensity(EACTrack *pTrack);
	RBIterator GetFirstRelevantTrack();
	void DestroyTrack(EACTrack *pTrack);
	void CreateStreams(EACTrack *pTrack);
	void DestroyStreams(EACTrack *pTrack);
	void UpdateTrack(EACTrack *pTrack, EVec3 &vAccumPos, EVec3 &vAccumRot);
	void Animate(EACTrack *pTrack);
	EVec3 GetAnimRootNodeTrans(EACTrack *pTrack);
	void SetTrackIntensity();
	void SetTrackActive(EACTrack *pTrack, bool active);
	float GetSlavePos(EACTrack *pTrack, EACTrack *pMaster);
	static void FixAccumulationForRootNode(/* parameters unknown */);
};

extern EACNodeState EAnimController::m_nodes[256];
extern __vtbl_ptr_type EAnimController virtual table[4];

void EAnimController::~EAnimController(int __in_chrg);
void global constructors keyed to EAnimController::m_nodes();

#endif // C__EOR_SRC2_ENGINE_ANIMATION_E_ANIMCONTROLLER_H

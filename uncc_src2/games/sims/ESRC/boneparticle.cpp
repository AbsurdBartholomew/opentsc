// STATUS: NOT STARTED

#include "boneparticle.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2674;
	__vtbl_ptr_type *$vf2738;
	
	cXObject& operator=();
	cXObject(int __in_chrg);
protected:
	cXObject();
	/* vtable[1] */ virtual cXObject(cXObject*, int, void);
	void setObjectImpl(cXObjectImpl *obj);
	void setPersonImpl(cXPersonImpl *obj);
	void setMTObjectImpl(cXMTObjectImpl *obj);
	void setCursorObjectImpl(cXCursorObjectImpl *obj);
	void setPortalImpl(cXPortalImpl *obj);
public:
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[7] */ virtual void SetHilite(cXObject*, int, void);
	/* vtable[8] */ virtual Int GetHilite();
	/* vtable[9] */ virtual void SetMiscFlag();
	/* vtable[10] */ virtual bool GetMiscFlag();
	/* vtable[11] */ virtual void UpdateSimFlags();
	/* vtable[12] */ virtual void Dirty();
	/* vtable[13] */ virtual void SetRenderLayer();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[15] */ virtual RenderLayer GetRenderLayer();
	/* vtable[16] */ virtual bool IsRenderingRoot();
	/* vtable[17] */ virtual RECT& GetLastDamage();
	/* vtable[18] */ virtual void SetLastDamage();
	/* vtable[19] */ virtual void ResetDamage();
	/* vtable[20] */ virtual bool IsEmissive();
	/* vtable[21] */ virtual bool IsBeingDraggedAround();
	/* vtable[22] */ virtual void CenterHouseViewOnMe();
	/* vtable[23] */ virtual void SetDrawLabel();
	/* vtable[24] */ virtual bool IsSpriteVisible();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static void SetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[29] */ virtual void Error();
	/* vtable[30] */ virtual void HandleError();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[41] */ virtual bool FindGoodLocation();
	/* vtable[42] */ virtual void GetPlacementInfo();
	/* vtable[43] */ virtual bool IsInWorld();
	/* vtable[44] */ virtual bool TestIntersection();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[46] */ virtual ObjFnTable* GetFnTable();
	/* vtable[47] */ virtual SInt16 GetTreeID();
	/* vtable[48] */ virtual void SetLevel(cXObject*, int, void);
	/* vtable[49] */ virtual bool IsOccupied();
	/* vtable[50] */ virtual void SetData();
	/* vtable[51] */ virtual void SetTemp();
	/* vtable[52] */ virtual void SetAttr();
	/* vtable[53] */ virtual ObjectProbe* GetObjectProbe();
	/* vtable[54] */ virtual void SetObjectProbe();
	/* vtable[55] */ virtual cXObject* GetInteractionLeader();
	/* vtable[56] */ virtual Int GetFrontFaceDirection();
	/* vtable[57] */ virtual ObjectFolder* GetFolder();
	/* vtable[58] */ virtual bool SimIndependent();
	/* vtable[59] */ virtual bool SimEnabled();
	/* vtable[60] */ virtual void EnableSim();
	/* vtable[61] */ virtual int GetIdleStatus();
	/* vtable[62] */ virtual void SetIdleStatus(cXObject*, int, void);
	/* vtable[63] */ virtual void ClearIdleStatus();
	/* vtable[64] */ virtual FTileRect& GetRect();
	/* vtable[65] */ virtual SInt16 GetData();
	/* vtable[66] */ virtual SInt16 GetTemp();
	/* vtable[67] */ virtual SInt16 GetAttr();
	/* vtable[68] */ virtual ObjectModule* GetModule();
	/* vtable[69] */ virtual AnimTable* GetAdultAnimTable();
	/* vtable[70] */ virtual AnimTable* GetChildAnimTable();
	/* vtable[71] */ virtual bool HideForCutaway();
	/* vtable[72] */ virtual TileWallsSegment GetRequiredSegment();
	/* vtable[73] */ virtual Int CountObjectSlots();
	/* vtable[74] */ virtual ObjectSlot* GetObjectSlot();
	/* vtable[75] */ virtual cXObject* GetContainedObject();
	/* vtable[76] */ virtual float GetSlotHeight();
	/* vtable[77] */ virtual cXObject* GetContainer();
	/* vtable[78] */ virtual bool IsContained();
	/* vtable[79] */ virtual SInt16 GetContainerID();
	/* vtable[80] */ virtual SInt16 GetContainedSlotNum();
	/* vtable[81] */ virtual cXObject* GetNextObjectSibling();
	/* vtable[82] */ virtual cXObject* GetPrevObjectSibling();
	/* vtable[83] */ virtual RoomID GetRoom();
	/* vtable[84] */ virtual ObjDefinition* GetDef();
	/* vtable[85] */ virtual SInt16 GetType();
	/* vtable[86] */ virtual void GetTypeName();
	/* vtable[87] */ virtual SInt16 GetID();
	/* vtable[88] */ virtual void GetLocation();
	/* vtable[89] */ virtual FTilePt& GetLocation();
	/* vtable[90] */ virtual int GetLevel();
	/* vtable[91] */ virtual CTilePt GetCTilePt();
	/* vtable[92] */ virtual TreeTable* GetTreeTab();
	/* vtable[93] */ virtual ObjSelector* GetSelector();
	/* vtable[94] */ virtual Behavior* GetBehavior();
	/* vtable[95] */ virtual iResFile* GetSelFile();
	static Int GetPersonWidth(/* parameters unknown */);
	/* vtable[96] */ virtual Int GetTileWidth();
	/* vtable[97] */ virtual bool IsMultiTile();
	/* vtable[98] */ virtual StdPrm GetFlags();
	/* vtable[99] */ virtual SInt16 GetWallPlacementFlags();
	/* vtable[100] */ virtual RelMatrix& GetRelMatrix();
	/* vtable[101] */ virtual cXObject* GetObstacleAtLocation();
	/* vtable[102] */ virtual int GetNumRoutingSlots();
	/* vtable[103] */ virtual RoutingSlot& GetRoutingSlot();
	/* vtable[104] */ virtual SInt16 GetCurrentValue();
	/* vtable[105] */ virtual SInt16 GetSize();
	/* vtable[106] */ virtual cSimulator* GetSim();
	/* vtable[107] */ virtual void GetErrorString();
	/* vtable[108] */ virtual Int GetAgeInMinutes();
	/* vtable[109] */ virtual bool CanChooseAutonomously();
	/* vtable[110] */ virtual int GetBuildModeType();
	/* vtable[111] */ virtual bool IsSupport();
	/* vtable[112] */ virtual bool ShouldAutoRotate();
	/* vtable[113] */ virtual bool CanContributeLight();
	/* vtable[114] */ virtual Int GetLightingContribution();
	/* vtable[115] */ virtual ObjectLightSource GetObjectLightSource();
	/* vtable[116] */ virtual bool IsDeletedByEvict();
	/* vtable[117] */ virtual bool IsFromCatalog();
	/* vtable[118] */ virtual bool IsBroken();
	/* vtable[119] */ virtual bool IsDirty();
	/* vtable[120] */ virtual bool IsBurning();
	/* vtable[121] */ virtual bool CanBurn();
	/* vtable[122] */ virtual bool IsFireproof();
	/* vtable[123] */ virtual bool HasZeroExtent();
	/* vtable[124] */ virtual bool CanIntersectPeople();
	/* vtable[125] */ virtual bool IsChair();
	/* vtable[126] */ virtual cXObject* GetObjectFromID();
	/* vtable[127] */ virtual cXObject* GetNext();
	/* vtable[128] */ virtual cXObject* GetFirst();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	static Int GetWallBlockFlagsAtTile(/* parameters unknown */);
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
	cXObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPerson : virtual cXObject {
	cXObject *$vb2738;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf985;
	
	cXPerson& operator=();
	cXPerson(int __in_chrg);
protected:
	cXPerson();
	/* vtable[1] */ virtual cXPerson(cXPerson*, int, void);
	void setPersonImpl(cXPersonImpl *obj);
public:
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPerson*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPerson*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[12] */ virtual float GetMotive();
	/* vtable[13] */ virtual float* GetMotiveRef();
	/* vtable[14] */ virtual float* GetOldMotiveRef();
	/* vtable[15] */ virtual void SetMotive();
	/* vtable[16] */ virtual void SimMotives();
	/* vtable[17] */ virtual void CalcHappy();
	/* vtable[18] */ virtual bool AddAction();
	/* vtable[19] */ virtual bool RemoveAction();
	/* vtable[20] */ virtual Int CountActions();
	/* vtable[21] */ virtual Interaction* GetIndAction();
	/* vtable[22] */ virtual Interaction& GetCurrentAction();
	/* vtable[23] */ virtual Interaction& GetLastAction();
	/* vtable[24] */ virtual void DeleteTopAction();
	/* vtable[25] */ virtual void DebugDumpHappyScape();
	/* vtable[26] */ virtual void Skipping3D();
	/* vtable[27] */ virtual bool IsSelected();
	/* vtable[28] */ virtual StdPrm GetPersonData();
	/* vtable[29] */ virtual void SetPersonData();
	/* vtable[30] */ virtual StdPrm* GetPersonDataArray();
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[33] */ virtual StdPrm GetIdleState();
	/* vtable[34] */ virtual bool IsCarrying();
	/* vtable[35] */ virtual TileList* GetDestList();
	/* vtable[36] */ virtual SAnimator* GetSAnimator();
	/* vtable[37] */ virtual void GetJobSuitTex();
	/* vtable[38] */ virtual RoomID GetCurrentRoom();
	/* vtable[39] */ virtual void UpdateCurrentRoom();
	/* vtable[40] */ virtual SInt16 GetNeighborID();
	/* vtable[41] */ virtual void SetNeighborID();
	/* vtable[42] */ virtual bool IsSleeping();
	/* vtable[43] */ virtual bool IsRouting();
	/* vtable[44] */ virtual bool IsVisitor();
	/* vtable[45] */ virtual bool IsChild();
	/* vtable[46] */ virtual bool IsMale();
	/* vtable[47] */ virtual bool IsFemale();
	/* vtable[48] */ virtual bool IsAdult();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(cXPerson*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPerson*, int, void);
	/* vtable[61] */ virtual int GetRecordStartTicks();
	/* vtable[62] */ virtual int GetRecordCurTicks();
	/* vtable[63] */ virtual int GetRecordTicksElapsed();
	/* vtable[64] */ virtual Skill* GetRecordSkill();
	/* vtable[65] */ virtual void StartRecording();
	/* vtable[66] */ virtual void StopRecording();
	/* vtable[67] */ virtual void ClearRecording();
	/* vtable[68] */ virtual int TickRecording();
	/* vtable[69] */ virtual void LogEvent();
	/* vtable[70] */ virtual void Track();
	/* vtable[71] */ virtual bool ShouldInterrupt();
	/* vtable[72] */ virtual cXObject* GetControllingObject();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
	cXPersonImpl* CAST_IMPL();
};

EBoneParticle* EBoneParticle::EBoneParticle(u32 typeId, cXPerson *pPerson, EAnimParticleData *pParticleData) {
	EVec3 *this;
	float x;
	float y;
	float z;
	EHouse *this;
	EResource *this;
	
  ERParticleType *pEVar1;
  EIParticleEmit *pEVar2;
  float fVar3;
  float fVar4;
  
                    /* inlined from /eor/src2/engine/particle/e_particletypeman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  this->m_boneId = pParticleData->m_boneId;
                    /* inlined from /eor/src2/engine/particle/e_particletypeman.h */
  fVar3 = pParticleData->z;
  fVar4 = pParticleData->y;
  (this->m_v).field0_0x0.d[0] = pParticleData->x;
  (this->m_v).field0_0x0.d[2] = fVar3;
  (this->m_v).field0_0x0.d[1] = fVar4;
                    /* end of inlined section */
  this->m_pPerson = pPerson;
                    /* inlined from /eor/src2/engine/particle/e_particletypeman.h */
  pEVar1 = (ERParticleType *)
           AddRef__16EResourceManagerUiP5EFilei(&_particletypeman.field0_0x0,typeId,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pType = pEVar1;
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  pEVar2 = (EIParticleEmit *)_allocBucketAlloc__FUiUi(0x124,0x1b);
                    /* end of inlined section */
  pEVar2 = __14EIParticleEmit(pEVar2);
  this->m_pEmit = pEVar2;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  InsertInstance__7ERLevelP9EInstanceT1
            ((_globals._pCurHouse)->m_pLevel,(EInstance *)pEVar2,(EInstance *)0x0);
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
  Type__14EIParticleEmiti(this->m_pEmit,(this->m_pType->field0_0x0).m_resId);
  return this;
}

void EBoneParticle::~EBoneParticle(int __in_chrg) {
	void *pAddress;
	
  AddParticleEffectToOrphanMan__7EGlobalP14ERParticleTypeP14EIParticleEmit
            (&_globals,this->m_pType,this->m_pEmit);
  this->m_pType = (ERParticleType *)0x0;
  this->m_pEmit = (EIParticleEmit *)0x0;
  this->m_pPerson = (cXPerson__2_985 *)0x0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EBoneParticle::Update() {
	EMat4 mMat;
	EVec3 v;
	EVec3 vOrigDir;
	EVec3 &v;
	EIParticleEmit *this;
	EVec3 &v;
	EIParticleEmit *this;
	
  undefined *puVar1;
  cXPerson__2_985__vtable *pcVar2;
  EIParticleEmit *pEVar3;
  ERParticleType *pEVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  EMat4 mMat;
  EVec3 v;
  EVec3 vOrigDir;
  
  pcVar2 = this->m_pPerson->__vtable;
  piVar8 = (int *)(*(code *)pcVar2->GetPersonImplementation)
                            ((int)&this->m_pPerson->_vb2738 +
                             (int)*(short *)&pcVar2->GetControllingObject);
  (**(code **)(*piVar8 + 0x10c))
            ((int)piVar8 + (int)*(short *)(*piVar8 + 0x108),this->m_boneId,&mMat);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = (this->m_v).field0_0x0.d[0];
  fVar10 = (this->m_v).field0_0x0.d[1];
  v.field0_0x0.d[2] = (this->m_v).field0_0x0.d[2];
  pEVar3 = this->m_pEmit;
  vOrigDir.field0_0x0.d[2] =
       fVar9 * mMat.field0_0x0.d[0][2] + fVar10 * mMat.field0_0x0.d[1][2] +
       v.field0_0x0.d[2] * mMat.field0_0x0.d[2][2] + mMat.field0_0x0.d[3][2];
  vOrigDir.field0_0x0._0_8_ =
       CONCAT44(fVar9 * mMat.field0_0x0.d[0][1] + fVar10 * mMat.field0_0x0.d[1][1] +
                v.field0_0x0.d[2] * mMat.field0_0x0.d[2][1] + mMat.field0_0x0.d[3][1],
                fVar9 * mMat.field0_0x0.d[0][0] + fVar10 * mMat.field0_0x0.d[1][0] +
                v.field0_0x0.d[2] * mMat.field0_0x0.d[2][0] + mMat.field0_0x0.d[3][0]);
  puVar1 = (undefined *)((int)&v.field0_0x0 + 7);
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vOrigDir.field0_0x0._0_8_ >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(pEVar3->m_vPos).field0_0x0 + 7);
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vOrigDir.field0_0x0._0_8_ >> (7 - uVar5) * 8;
  uVar5 = (uint)&pEVar3->m_vPos & 7;
  puVar6 = (ulong *)((int)&pEVar3->m_vPos - uVar5);
  *puVar6 = vOrigDir.field0_0x0._0_8_ << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (pEVar3->m_vPos).field0_0x0.d[2] = vOrigDir.field0_0x0.d[2];
  pEVar4 = this->m_pType;
  fVar9 = (pEVar4->m_vDir).field0_0x0.d[0];
  fVar10 = (pEVar4->m_vDir).field0_0x0.d[1];
  vOrigDir.field0_0x0.d[2] = (pEVar4->m_vDir).field0_0x0.d[2];
  pEVar3 = this->m_pEmit;
                    /* end of inlined section */
  uVar7 = CONCAT44(fVar9 * mMat.field0_0x0.d[0][1] + fVar10 * mMat.field0_0x0.d[1][1] +
                   vOrigDir.field0_0x0.d[2] * mMat.field0_0x0.d[2][1] + 0.0,
                   fVar9 * mMat.field0_0x0.d[0][0] + fVar10 * mMat.field0_0x0.d[1][0] +
                   vOrigDir.field0_0x0.d[2] * mMat.field0_0x0.d[2][0] + 0.0);
  puVar1 = (undefined *)((int)&vOrigDir.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(pEVar3->m_vDir).field0_0x0 + 7);
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
  uVar5 = (uint)&pEVar3->m_vDir & 7;
  puVar6 = (ulong *)((int)&pEVar3->m_vDir - uVar5);
  *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (pEVar3->m_vDir).field0_0x0.d[2] =
       fVar9 * mMat.field0_0x0.d[0][2] + fVar10 * mMat.field0_0x0.d[1][2] +
       vOrigDir.field0_0x0.d[2] * mMat.field0_0x0.d[2][2] + 0.0;
  return;
}

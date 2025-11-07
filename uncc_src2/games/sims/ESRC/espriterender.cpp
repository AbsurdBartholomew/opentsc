// STATUS: NOT STARTED

#include "espriterender.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2214;
	__vtbl_ptr_type *$vf1024;
	
	cXObject& operator=();
	cXObject();
protected:
	cXObject();
	/* vtable[1] */ virtual cXObject(cXObject*, int, void);
	void setObjectImpl();
	void setPersonImpl();
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
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
	cXObject *$vb1024;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1959;
	
	cXPerson& operator=();
	cXPerson();
protected:
	cXPerson();
	/* vtable[1] */ virtual cXPerson(cXPerson*, int, void);
	void setPersonImpl();
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

EVec2 _v2PSpriteClipLine = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

__vtbl_ptr_type ESpriteRender virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESpriteRender::~ESpriteRender,
		/* .__delta2 = */ 22288
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ESpriteRender* ESpriteRender::ESpriteRender() {
  *(undefined4 *)this = 0;
  this->__vtable = (ESpriteRender__vtable *)_vt_13ESpriteRender;
  *(undefined4 *)&this->bMarkedAsNew = 0;
  this->m_pObj = (cXObject__36_1024 *)0x0;
  this->m_pShader = (ERShader *)0x0;
  this->m_pRect = (EDL *)0x0;
  this->m_pShaderBack = (ERShader *)0x0;
  return this;
}

void ESpriteRender::~ESpriteRender(int __in_chrg) {
	void *p;
	
  this->__vtable = (ESpriteRender__vtable *)_vt_13ESpriteRender;
  while (this->m_pShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShader->field0_0x0);
    this->m_pShader = (ERShader *)0x0;
  }
  while (this->m_pShaderBack != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShaderBack->field0_0x0);
    this->m_pShaderBack = (ERShader *)0x0;
  }
  this->m_pObj = (cXObject__36_1024 *)0x0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/espriterender.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ESpriteRender::Update() {
  return;
}

void ESpriteRender::Draw(ERC *prc) {
	ISimInstance *pInstance;
	EVec3 vPos;
	float scale;
	bool drawFore;
	EVec3 *this;
	EVec3 *this;
	
  cXObject__36_1024__vtable *pcVar1;
  TreeSim *pTVar2;
  TreeSim__vtable *pTVar3;
  bool bVar4;
  int iVar5;
  cXObject__56_2557 *pcVar6;
  void *pvVar7;
  int *piVar8;
  long lVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar10;
  EVec3 vPos;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if ((((*(int *)this == 0) &&
       (pcVar1 = this->m_pObj->__vtable,
       iVar5 = (*(code *)pcVar1->SetRenderLayer)
                         ((int)&this->m_pObj->_vb2214 + (int)*(short *)&pcVar1->Dirty),
       *(int *)(iVar5 + 0x14) != 0)) && (this->m_pShader != (ERShader *)0x0)) &&
     (pTVar2 = this->m_pObj->_vb2214, pTVar3 = pTVar2->__vtable,
     lVar9 = (*(code *)pTVar3[1].GetISimInstance)
                       ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar3[1].GetLastResult),
     lVar9 != 0)) {
    (*(code *)prc->__vtable->NewEntry)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,1);
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
    pcVar6 = GetXOb__12ISimInstance((ISimInstance *)lVar9);
                    /* inlined from ../MSrc/SCID.h */
    pvVar7 = (void *)0x0;
    if (pcVar6 != (cXObject__56_2557 *)0x0) {
      pvVar7 = _dyncastimpl__7TreeSim4SCID(pcVar6->_vb2602,cXPersonID);
    }
                    /* end of inlined section */
    piVar8 = (int *)(**(code **)(*(int *)((int)pvVar7 + 4) + 0x124))
                              ((int)pvVar7 + (int)*(short *)(*(int *)((int)pvVar7 + 4) + 0x120));
    (**(code **)(*piVar8 + 0x104))((int)piVar8 + (int)*(short *)(*piVar8 + 0x100),0x11,&vPos);
    fVar10 = GetCurZoomRatio__8ESimsCam(_globals._pCurCam);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    bVar4 = true;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* end of inlined section */
    fVar10 = fVar10 * 1.5 + 1.0;
    if (this->m_pShaderBack != (ERShader *)0x0) {
      Select__8ERShaderP3ERCi(this->m_pShaderBack,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_60 = (this->m_backData).m_vPos.field0_0x0.d[0] + vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_5c = (this->m_backData).m_vPos.field0_0x0.d[1] + vPos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_58 = (this->m_backData).m_vPos.field0_0x0.d[2] + vPos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      bVar4 = SetUpRect__13ESpriteRenderP3ERCRC5EVec3ffRQ213ESpriteRender10SpriteData
                        (this,prc,(EVec3 *)&local_60,
                         (this->m_backData).m_vWH.field0_0x0.d[0] * fVar10,
                         (this->m_backData).m_vWH.field0_0x0.d[1] * fVar10,&this->m_backData);
    }
    if (bVar4 != false) {
      Select__8ERShaderP3ERCi(this->m_pShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_60 = (this->m_foreData).m_vPos.field0_0x0.d[0] + vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_5c = (this->m_foreData).m_vPos.field0_0x0.d[1] + vPos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_58 = (this->m_foreData).m_vPos.field0_0x0.d[2] + vPos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      SetUpRect__13ESpriteRenderP3ERCRC5EVec3ffRQ213ESpriteRender10SpriteData
                (this,prc,(EVec3 *)&local_60,(this->m_foreData).m_vWH.field0_0x0.d[0] * fVar10,
                 (this->m_foreData).m_vWH.field0_0x0.d[1] * fVar10,&this->m_foreData);
    }
  }
  return;
}

void ESpriteRender::SetSprite() {
	SpriteSlot &sslot;
	SpriteIdToResIdNode *pforeNode;
	u32 shaderId;
	SpriteIdToResIdNode *pbackNode;
	u32 shaderBackId;
	ObjSelector *pSel;
	SpriteSlot *this;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *pOrigSelMaster;
	ObjSelector *pSearchSel;
	ObjSelector *this;
	EVec3 *this;
	float x;
	float y;
	float z;
	float x;
	float y;
	u32 id;
	EVec3 *this;
	float x;
	float y;
	float z;
	float x;
	float y;
	u32 id;
	
  cXObject__36_1024__vtable *pcVar1;
  ObjSelector *this_00;
  ResData *pRVar2;
  ObjDefinition *pOVar3;
  SpriteProperties *pSVar4;
  bool bVar5;
  int iVar6;
  SpriteIdToResIdNode *pSVar7;
  ObjSelector *pOVar8;
  ObjSelector *pOVar9;
  ObjSelector *this_01;
  ERShader *pEVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  SpriteSlot *sslot;
  
  while (this->m_pShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShader->field0_0x0);
    this->m_pShader = (ERShader *)0x0;
  }
  while (this->m_pShaderBack != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShaderBack->field0_0x0);
    this->m_pShaderBack = (ERShader *)0x0;
  }
  pcVar1 = this->m_pObj->__vtable;
  iVar6 = (*(code *)pcVar1->SetRenderLayer)
                    ((int)&this->m_pObj->_vb2214 + (int)*(short *)&pcVar1->Dirty);
  pSVar7 = ConvertSpriteIdToResId__7EGlobalUi(&_globals,*(uint *)(iVar6 + 0x18));
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_foreData).m_vColor.field0_0x0.d[0] = 1.0;
  (this->m_foreData).m_vColor.field0_0x0.d[1] = 1.0;
  (this->m_foreData).m_vColor.field0_0x0.d[2] = 1.0;
  (this->m_foreData).m_vColor.field0_0x0.d[3] = 1.0;
  (this->m_backData).m_vColor.field0_0x0.d[0] = 1.0;
  (this->m_backData).m_vColor.field0_0x0.d[3] = 1.0;
  (this->m_backData).m_vColor.field0_0x0.d[1] = 1.0;
  (this->m_backData).m_vColor.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
  if (*(int *)(iVar6 + 0x18) != -1) {
    if (pSVar7 != (SpriteIdToResIdNode *)0x0) {
      pSVar4 = pSVar7->m_pProps;
                    /* end of inlined section */
      uVar11 = pSVar7->shaderID;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar12 = pSVar4->zpos;
      fVar13 = pSVar4->ypos;
      (this->m_foreData).m_vPos.field0_0x0.d[0] = pSVar4->xpos;
      (this->m_foreData).m_vPos.field0_0x0.d[2] = fVar12;
      (this->m_foreData).m_vPos.field0_0x0.d[1] = fVar13;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar12 = pSVar7->m_pProps->width;
      (this->m_foreData).m_vWH.field0_0x0.d[1] = pSVar7->m_pProps->height;
                    /* end of inlined section */
      (this->m_foreData).m_vWH.field0_0x0.d[0] = fVar12;
      if (uVar11 == 0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
        uVar11 = 0xd59c7bb5;
      }
      pEVar10 = (ERShader *)
                AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,uVar11,(EFile *)0x0,0);
                    /* end of inlined section */
      this->m_pShader = pEVar10;
    }
    goto LAB_00155ccc;
  }
                    /* inlined from ../MSrc/slots.h */
  this_00 = *(ObjSelector **)(iVar6 + 0x1c);
                    /* end of inlined section */
  bVar5 = GetIsPerson__11ObjSelector(this_00);
  if (bVar5) {
    GetThumbnail__11ObjSelectorPP8ERShader(this_00,&this->m_pShader);
    pEVar10 = this->m_pShader;
                    /* end of inlined section */
LAB_00155bbc:
    if (pEVar10 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      pEVar10 = (ERShader *)
                AddRef__16EResourceManagerUiP5EFilei
                          (&_shaderman.field0_0x0,0xd59c7bb5,(EFile *)0x0,0);
LAB_00155bdc:
                    /* end of inlined section */
      this->m_pShader = pEVar10;
    }
  }
  else {
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
    pRVar2 = this_00->fHeader->pResData;
    if (pRVar2 == (ResData *)0x0) {
      pOVar8 = GetMasterSelector__11ObjSelector(this_00);
      this_01 = (ObjSelector *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      do {
        do {
          this_01 = (ObjSelector *)
                    (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                              ((int)&_5Globs_pObjectFolder->__vtable +
                               (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,
                               this_01);
          if (this_01 == (ObjSelector *)0x0) goto LAB_00155bb8;
        } while (this_01 == this_00);
                    /* inlined from ../MSrc/objselector.h */
        pOVar3 = this_01->fHeader;
                    /* end of inlined section */
        pOVar9 = GetMasterSelector__11ObjSelector(this_01);
      } while (((pOVar9 != pOVar8) || (pRVar2 = pOVar3->pResData, pRVar2 == (ResData *)0x0)) ||
              (uVar11 = pRVar2->eorQueueShaderID, uVar11 == 0));
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      pEVar10 = (ERShader *)
                AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,uVar11,(EFile *)0x0,0);
                    /* end of inlined section */
      this->m_pShader = pEVar10;
LAB_00155bb8:
      pEVar10 = this->m_pShader;
      goto LAB_00155bbc;
    }
                    /* end of inlined section */
    uVar11 = pRVar2->eorQueueShaderID;
    if (uVar11 != 0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      pEVar10 = (ERShader *)
                AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,uVar11,(EFile *)0x0,0);
                    /* end of inlined section */
      goto LAB_00155bdc;
    }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar10 = (ERShader *)
              AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xd59c7bb5,(EFile *)0x0,0)
    ;
                    /* end of inlined section */
    this->m_pShader = pEVar10;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_foreData).m_vPos.field0_0x0.d[0] = 0.0;
  (this->m_foreData).m_vPos.field0_0x0.d[2] = 0.9;
  (this->m_foreData).m_vPos.field0_0x0.d[1] = 0.0;
  (this->m_foreData).m_vWH.field0_0x0.d[0] = 0.26;
  (this->m_foreData).m_vWH.field0_0x0.d[1] = 0.26;
  (this->m_foreData).m_vColor.field0_0x0.d[0] = 1.0;
  (this->m_foreData).m_vColor.field0_0x0.d[3] = 1.0;
  (this->m_foreData).m_vColor.field0_0x0.d[1] = 1.0;
  (this->m_foreData).m_vColor.field0_0x0.d[2] = 1.0;
  (this->m_backData).m_vColor.field0_0x0.d[0] = 0.5294118;
  (this->m_backData).m_vColor.field0_0x0.d[3] = 1.0;
  (this->m_backData).m_vColor.field0_0x0.d[1] = 0.5764706;
                    /* end of inlined section */
  (this->m_backData).m_vColor.field0_0x0.d[2] = 0.7764707;
LAB_00155ccc:
  pSVar7 = ConvertSpriteIdToResId__7EGlobalUi(&_globals,*(uint *)(iVar6 + 0x30));
  uVar11 = 0;
  if (pSVar7 != (SpriteIdToResIdNode *)0x0) {
    pSVar4 = pSVar7->m_pProps;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar11 = pSVar7->shaderID;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar12 = pSVar4->zpos;
    fVar13 = pSVar4->ypos;
    (this->m_backData).m_vPos.field0_0x0.d[0] = pSVar4->xpos;
    (this->m_backData).m_vPos.field0_0x0.d[2] = fVar12;
    (this->m_backData).m_vPos.field0_0x0.d[1] = fVar13;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar12 = pSVar7->m_pProps->width;
    (this->m_backData).m_vWH.field0_0x0.d[1] = pSVar7->m_pProps->height;
    (this->m_backData).m_vWH.field0_0x0.d[0] = fVar12;
  }
                    /* end of inlined section */
  if (*(int *)(iVar6 + 0x30) == -1) {
    *(undefined4 *)&this->bMarkedAsNew = 0;
  }
  else {
    if (uVar11 == 0) {
      this->m_pShaderBack = (ERShader *)0x0;
    }
    else {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      pEVar10 = (ERShader *)
                AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,uVar11,(EFile *)0x0,0);
                    /* end of inlined section */
      this->m_pShaderBack = pEVar10;
    }
    *(undefined4 *)&this->bMarkedAsNew = 0;
  }
  return;
}

bool ESpriteRender::SetUpRect(ERC *prc, EVec3 &vPos, float xSize, float ySize, SpriteData &data) {
	E3DWindow *pWin;
	EVec3 vDiagnal;
	EMat4 *this;
	float scaler;
	float scaler;
	ERC *this;
	ERC *this;
	ERC *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 v0;
	EVec3 v1;
	EBound3 bound;
	EVec3 vCorners[8];
	float x;
	float y;
	float z;
	float x;
	float y;
	float z;
	int i;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	EVec2 vSCreenPos;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  E3DWindow *this_00;
  bool bVar6;
  undefined uVar7;
  ulong *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  EVec3 *pEVar11;
  EVec3 *pEVar12;
  EBound3 *pEVar13;
  int iVar14;
  EVec3 *vCornersOut;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  EVec3 vDiagnal;
  EVec3 v0;
  EVec3 v1;
  EVec2 vSCreenPos;
  EBound3 bound;
  EVec3 vCorners [8];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  this_00 = _7EWindow_m_pCurrent3DWindow;
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (_7EWindow_m_pCurrent3DWindow == (E3DWindow *)0x0) {
LAB_00155dd8:
    bVar6 = false;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v1.field0_0x0.d[0] = (_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[0] * xSize;
    v1.field0_0x0.d[1] = (_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[1] * xSize;
    v1.field0_0x0.d[2] = (_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2] * xSize;
    vSCreenPos.field0_0x0.d[1] =
         (_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[1][1] * ySize;
    vSCreenPos.field0_0x0.d[0] =
         (_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[1][0] * ySize;
    fVar18 = v1.field0_0x0.d[1] + vSCreenPos.field0_0x0.d[1];
    fVar16 = v1.field0_0x0.d[2] +
             (_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[1][2] * ySize;
    fVar17 = v1.field0_0x0.d[0] + vSCreenPos.field0_0x0.d[0];
    puVar8 = (ulong *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x20,0x10);
    puVar9 = (undefined4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x10,0x10);
    puVar10 = (undefined *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,8,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    *(float *)puVar8 = (vPos->field0_0x0).d[0] + fVar17;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    *(float *)((int)puVar8 + 4) = (vPos->field0_0x0).d[1] + fVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar15 = (vPos->field0_0x0).d[2];
                    /* end of inlined section */
    *(undefined4 *)((int)puVar8 + 0xc) = 0;
    *(float *)(puVar8 + 1) = fVar15 + fVar16;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    *(float *)(puVar8 + 2) = (vPos->field0_0x0).d[0] - fVar17;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    *(float *)((int)puVar8 + 0x14) = (vPos->field0_0x0).d[1] - fVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar15 = (vPos->field0_0x0).d[2];
                    /* end of inlined section */
    *(undefined4 *)((int)puVar8 + 0x1c) = 0;
    *(float *)(puVar8 + 3) = fVar15 - fVar16;
    bVar6 = IsTwoPlayer__7EGlobal(&_globals);
    if ((bVar6) && (vCornersOut = vCorners, _globals.m_renderPass == 1)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      uVar5 = *puVar8;
      bound.vMin.field0_0x0.d[2] = (float)*(undefined4 *)(puVar8 + 1);
      pEVar12 = &v1;
      pEVar11 = &bound.vMax;
      iVar14 = 2;
      v1.field0_0x0.d[0] = *(float *)(puVar8 + 2);
      v1.field0_0x0.d[1] = *(float *)((int)puVar8 + 0x14);
      v1.field0_0x0.d[2] = *(float *)(puVar8 + 3);
      puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar3);
      *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
      uVar3 = (uint)&bound.vMax & 7;
      puVar4 = (ulong *)((int)&bound.vMax - uVar3);
      *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      bound.vMax.field0_0x0.d[2] = bound.vMin.field0_0x0.d[2];
      puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar2 = (uint)&bound.vMax & 7;
      bound.vMin.field0_0x0._0_8_ =
           (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           uVar5 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&bound.vMax - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar3);
      *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
      pEVar13 = &bound;
      do {
        fVar15 = (pEVar13->vMin).field0_0x0.d[0];
        if ((pEVar12->field0_0x0).d[0] <= fVar15) {
          fVar15 = (pEVar12->field0_0x0).d[0];
        }
        (pEVar13->vMin).field0_0x0.d[0] = fVar15;
        fVar15 = (pEVar12->field0_0x0).d[0];
        if ((pEVar12->field0_0x0).d[0] < (pEVar11->field0_0x0).d[0]) {
          fVar15 = (pEVar11->field0_0x0).d[0];
        }
        (pEVar11->field0_0x0).d[0] = fVar15;
        pEVar12 = (EVec3 *)((int)&pEVar12->field0_0x0 + 4);
        pEVar11 = (EVec3 *)((int)&pEVar11->field0_0x0 + 4);
        iVar14 = iVar14 + -1;
        pEVar13 = (EBound3 *)((int)&(pEVar13->vMin).field0_0x0 + 4);
      } while (-1 < iVar14);
                    /* end of inlined section */
                    /* end of inlined section */
      iVar14 = 6;
      do {
        bVar6 = iVar14 != -1;
        iVar14 = iVar14 + -1;
      } while (bVar6);
      GetCorners__C7EBound3P5EVec3(&bound,vCornersOut);
                    /* end of inlined section */
      do {
        TransformToScreen__9E3DWindowRC5EVec3R5EVec2(this_00,vCornersOut,&vSCreenPos);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        vCornersOut = vCornersOut + 1;
        if (vSCreenPos.field0_0x0.d[0] * _v2PSpriteClipLine.field0_0x0.d[0] +
            vSCreenPos.field0_0x0.d[1] * _v2PSpriteClipLine.field0_0x0.d[1] < 0.0)
        goto LAB_00155dd8;
      } while ((int)vCornersOut < (int)&local_b0);
    }
    puVar9[1] = 0x3f800000;
    puVar9[2] = 0xbf800000;
    *puVar9 = 0;
    puVar9[3] = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    uVar7 = (undefined)(int)((data->m_vColor).field0_0x0.d[0] * 127.0);
    *puVar10 = uVar7;
    puVar10[4] = uVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    uVar7 = (undefined)(int)((data->m_vColor).field0_0x0.d[1] * 127.0);
    puVar10[1] = uVar7;
    puVar10[5] = uVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    uVar7 = (undefined)(int)((data->m_vColor).field0_0x0.d[2] * 127.0);
    puVar10[2] = uVar7;
    puVar10[6] = uVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    uVar7 = (undefined)(int)((data->m_vColor).field0_0x0.d[3] * 127.0);
    puVar10[3] = uVar7;
    puVar10[7] = uVar7;
    (*(code *)prc->__vtable->SetGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->DisableGeometryModes,2,puVar8,
               puVar9,puVar10,0,0);
    bVar6 = true;
  }
  return bVar6;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    _v2PSpriteClipLine.field0_0x0.d[0] = -1.0;
    _v2PSpriteClipLine.field0_0x0.d[1] = 1.0;
  }
  return;
}

void* ESpriteRender::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(0x90,0x10);
  return pvVar1;
}

void ESpriteRender::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

cXObject* ESpriteRender::GetObject() {
  return this->m_pObj;
}

bool ESpriteRender::GetMarked() {
  return SUB41(*(undefined4 *)this,0);
}

bool ESpriteRender::GetMarkedAsNew() {
  return SUB41(*(undefined4 *)&this->bMarkedAsNew,0);
}

void ESpriteRender::Mark() {
  *(undefined4 *)this = 1;
  return;
}

void ESpriteRender::MarkAsNew() {
  *(undefined4 *)&this->bMarkedAsNew = 1;
  return;
}

void global constructors keyed to ESpriteRender::ESpriteRender() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

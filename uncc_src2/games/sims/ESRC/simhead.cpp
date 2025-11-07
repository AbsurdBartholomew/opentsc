// STATUS: NOT STARTED

#include "simhead.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2514;
	__vtbl_ptr_type *$vf2576;
	
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
	cXObject *$vb2576;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf985;
	
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

float ESims3DHead_yfov = 14.f;
float ESims3DHead_near = 0.5f;
float ESims3DHead_far = 500.f;
ERShader *ESims3DHead::m_pShd = NULL;
ERShader *ESims3DHead::m_pHeadBorder = NULL;
ERShader *ESims3DHead::m_pLbutton = NULL;
ERShader *ESims3DHead::m_pRbutton = NULL;
ERShader *ESims3DHead::m_pStatsBackTop = NULL;
ERShader *ESims3DHead::m_pStatsBackBot = NULL;
float _p2head_xoff = 0.105f;
float _p1head_yoff = 0.0365f;
float _button_yoff = 0.8f;
float _lbutton_xoff = 0.025f;
float _rbutton_xoff = 0.165f;
float _head_win_l = 0.064f;
float _head_win_r = 0.158f;
float _head_win_t = 0.768f;
float _head_win_b = 0.906f;
float _quick_stat_w = 0.00625f;
float _quick_stat_h = 0.0200892854f;
float _quick_stat_xoff = 0.0046875f;
float _quick_stat_yoff = 0.f;

EVec2 _v3DHeadOff = {
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

EVec2 _v3DHeadOffp1 = {
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

EVec2 _v3DHeadOffp2 = {
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

__vtbl_ptr_type ESims3DHead virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESims3DHead::~ESims3DHead,
		/* .__delta2 = */ -32600
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESims3DHead::Update,
		/* .__delta2 = */ -32496
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESims3DHead::Draw,
		/* .__delta2 = */ -32488
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

float moodfactor = 0.f;

ESims3DHead* ESims3DHead::ESims3DHead(ESim *pESim) {
	ESim *this;
	
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_11ESims3DHead;
  __9E3DWindow(&this->m_win);
  this->m_pESim = pESim;
  this->m_pPerson = (cXPerson__3_1554 *)0x0;
  InitHead__11ESims3DHeadP8cXPerson(this,(cXPerson__77_985 *)pESim->m_pPerson);
  Id__5EMat4(&this->m_mLastOrientMatrix);
  return this;
}

void ESims3DHead::InitShaders() {
  if (_11ESims3DHead_m_pShd == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESims3DHead_m_pShd =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1a18ca65,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESims3DHead_m_pHeadBorder =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1239c594,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESims3DHead_m_pLbutton =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x15f935a3,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESims3DHead_m_pRbutton =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x71fbac40,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESims3DHead_m_pStatsBackTop =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9d03d07c,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESims3DHead_m_pStatsBackBot =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf44f4244,(EFile *)0x0,0);
                    /* end of inlined section */
  }
  return;
}

void ESims3DHead::ResetShaders() {
  while (_11ESims3DHead_m_pShd != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESims3DHead_m_pShd->field0_0x0);
    _11ESims3DHead_m_pShd = (ERShader *)0x0;
  }
  while (_11ESims3DHead_m_pHeadBorder != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESims3DHead_m_pHeadBorder->field0_0x0);
    _11ESims3DHead_m_pHeadBorder = (ERShader *)0x0;
  }
  while (_11ESims3DHead_m_pLbutton != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESims3DHead_m_pLbutton->field0_0x0);
    _11ESims3DHead_m_pLbutton = (ERShader *)0x0;
  }
  while (_11ESims3DHead_m_pRbutton != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESims3DHead_m_pRbutton->field0_0x0);
    _11ESims3DHead_m_pRbutton = (ERShader *)0x0;
  }
  while (_11ESims3DHead_m_pStatsBackBot != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESims3DHead_m_pStatsBackBot->field0_0x0);
    _11ESims3DHead_m_pStatsBackBot = (ERShader *)0x0;
  }
  while (_11ESims3DHead_m_pStatsBackTop != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESims3DHead_m_pStatsBackTop->field0_0x0);
    _11ESims3DHead_m_pStatsBackTop = (ERShader *)0x0;
  }
  return;
}

void ESims3DHead::InitHead(cXPerson *pPerson) {
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  this->m_pPerson = (cXPerson__3_1554 *)pPerson;
  SetProjection__9E3DWindowffff(&this->m_win,ESims3DHead_yfov,1.0,ESims3DHead_near,ESims3DHead_far);
  (this->field0_0x0).m_WDH.field0_0x0.d[0] = 0.0845;
  (this->field0_0x0).m_WDH.field0_0x0.d[2] = 0.118;
  (this->field0_0x0).m_WDH.field0_0x0.d[1] = 0.0;
  return;
}

void ESims3DHead::~ESims3DHead(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_11ESims3DHead;
  ___7EWindow(&(this->m_win).field0_0x0,0);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/simhead.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESims3DHead::Update() {
  return;
}

void ESims3DHead::Draw(ERC *prc) {
	static float _Head_Time = 0.f;
	EAnimController *AC;
	EMat4 mOrient;
	EMat4 TempMat;
	EVec3 vTarget;
	EVec3 TempVec;
	EMat4 TempMat1;
	EMat4 M2;
	EVec3 V1;
	EVec3 V2;
	float angle;
	EMat4 M1;
	EVec3 vEye;
	EVec3 vUp;
	EVec3 vRight;
	EVec3 vOut;
	ELights2 *pLights;
	ESim *this;
	EUIObjectNode *this;
	EVec2 vTLborderCorner;
	float y;
	ESim *this;
	EHouse *this;
	ESim *this;
	int ctrl;
	float y;
	float y;
	EAnimController *this;
	EAnimController *this;
	ESimsCam *this;
	EMat4 &mRight;
	EMat4 &mRight;
	float rate;
	float delta;
	float blendfactor;
	SimSpeed speed;
	ERC *this;
	ESim *this;
	float y;
	float y;
	
  ELMComputeStage EVar1;
  EShader *pEVar2;
  EShader__vtable *pEVar3;
  cXPerson__3_1554__vtable *pcVar4;
  ERModel *this_00;
  cXPerson__150_1300__vtable *pcVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  ESim *pEVar11;
  void *pvVar12;
  int *piVar13;
  long lVar14;
  ERC__vtable *pEVar15;
  EVec4 *pEVar16;
  undefined *puVar17;
  undefined8 unaff_s0;
  EAnimController *this_01;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined *puVar18;
  undefined8 unaff_s4;
  undefined *puVar19;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  EMat4 mOrient;
  undefined4 local_300;
  float local_2fc;
  float local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  float local_2d4;
  EMat4 TempMat;
  EVec3 vTarget;
  EVec3 TempVec;
  EMat4 TempMat1;
  EMat4 M2;
  EVec3 V1;
  EVec3 V2;
  EVec3 vEye;
  EMat4 M1;
  EVec3 vUp;
  EVec3 vRight;
  EVec3 vOut;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_110;
  float local_10c;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
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
  
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
  if ((_globals._pSelectedSims[1] == this->m_pESim->m_pPerson) &&
     (bVar9 = IsTwoPlayer__7EGlobal(&_globals), !bVar9)) {
    return;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) == 0) {
    return;
  }
  bVar9 = IsTwoPlayer__7EGlobal(&_globals);
  if (bVar9) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[0][1] = (this->m_win).field0_0x0.m_rClipIn.top;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
    mOrient.field0_0x0.d[0][0] = (this->m_win).field0_0x0.m_rClipIn.left - 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    bVar9 = DrawLMCoputePrompt__6EHouseP3ERCRC5EVec2i
                      ((EHouse__2_990 *)_globals._pCurHouse,prc,(EVec2 *)&mOrient,
                       (uint)(_globals._pSelectedSims[1] == this->m_pESim->m_pPerson));
    if (bVar9) {
      return;
    }
    pEVar11 = this->m_pESim;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[0][0] = 0.88;
                    /* end of inlined section */
    mOrient.field0_0x0.d[0][1] = 0.19;
    DrawLMCoputePrompt__6EHouseP3ERCRC5EVec2i
              ((EHouse__2_990 *)_globals._pCurHouse,prc,(EVec2 *)&mOrient,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
    EVar1 = (_globals._pCurHouse)->m_lmStage;
                    /* end of inlined section */
    if (EVar1 == LM_FULL_PREP_COMPUTE) {
      return;
    }
    if (EVar1 == LM_EXECUTE_FULL_COMPUTE) {
      return;
    }
    if (EVar1 == LM_EXIT_FULL_COMPUTE) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
    pEVar11 = this->m_pESim;
  }
                    /* end of inlined section */
  if (0 < pEVar11->m_iQueueCount) {
    Select__9E3DWindowP3ERC(&this->m_win,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar21 = 1.0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(_11ESims3DHead_m_pShd,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    puVar17 = (undefined *)((int)&mOrient.field0_0x0 + 0x10);
    puVar18 = (undefined *)((int)&mOrient.field0_0x0 + 0x20);
    puVar19 = (undefined *)((int)&mOrient.field0_0x0 + 0x30);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[0][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[2][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[3][1] = 0.0;
                    /* end of inlined section */
    bVar9 = false;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    mOrient.field0_0x0.d[1][0] = fVar21;
    mOrient.field0_0x0.d[1][1] = fVar21;
    mOrient.field0_0x0.d[2][1] = fVar21;
    mOrient.field0_0x0.d[3][0] = fVar21;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mOrient,puVar17,
               puVar18,puVar19,0x35f4d0);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
    (*(code *)prc->__vtable[1].EnableRasterModes)
              (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,1,0
              );
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[0][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_300 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_2e0 = 0x3f078788;
    local_2ec = 0;
    local_2dc = 0x3f139394;
    local_2d8 = 0x3f46c6c8;
                    /* end of inlined section */
    mOrient.field0_0x0.d[1][0] = fVar21;
    mOrient.field0_0x0.d[1][1] = fVar21;
    local_2fc = fVar21;
    local_2f0 = fVar21;
    local_2d4 = fVar21;
    (*(code *)prc->__vtable[1].DisplayList)
              (fVar21,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mOrient,
               puVar17,&local_300,&local_2f0,&local_2e0);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
    (*(code *)prc->__vtable[1].EnableRasterModes)
              (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,5,0
              );
    (*(code *)prc->__vtable->EndCommand)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
    SelectWin__7EGlobalP3ERC(&_globals,prc);
    bVar10 = IsTwoPlayer__7EGlobal(&_globals);
    if (bVar10) {
      bVar9 = _globals._pSelectedSims[1] == (cXPerson__150_1300 *)this->m_pPerson;
    }
    Select__8ERShaderP3ERCi(_11ESims3DHead_m_pHeadBorder,prc,0);
    mOrient.field0_0x0.d[0][0] = (this->m_win).field0_0x0.m_rClipIn.left - 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[1][1] = (this->m_win).field0_0x0.m_rClipIn.bottom;
                    /* end of inlined section */
    mOrient.field0_0x0.d[1][0] = (this->m_win).field0_0x0.m_rClipIn.right + 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[0][1] = (this->m_win).field0_0x0.m_rClipIn.top;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mOrient.field0_0x0.d[2][0] = 0.0;
                    /* end of inlined section */
    mOrient.field0_0x0.d[3][1] = 0.0;
    if (bVar9) {
      pEVar16 = &_RED;
    }
    else {
      pEVar16 = &_YELLOW;
    }
    mOrient.field0_0x0.d[2][1] = fVar21;
    mOrient.field0_0x0.d[3][0] = fVar21;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mOrient,puVar17,
               puVar18,puVar19,pEVar16);
    return;
  }
  if (_globals._16_4_ == 0) {
    _Head_Time_3111 = _Head_Time_3111 + _dt;
  }
  sinf(_Head_Time_3111 * 0.34);
  pEVar11 = this->m_pESim;
  this_01 = &(pEVar11->field0_0x0).m_AC;
  GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)pEVar11,&mOrient);
  Compute__15EAnimControllerRC5EMat4(this_01,&mOrient);
                    /* inlined from /eor/src2/engine/e_rptr.h */
                    /* end of inlined section */
  CopyMatrices__7ERModelP3ERCP5EMat4i
            (prc,(pEVar11->field0_0x0).m_AC.m_mNodes,
             (((pEVar11->field0_0x0).m_AC.m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size);
  CalcNodeOrient__15EAnimControlleriR5EMat4(this_01,0x12,&TempMat);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
  __as__5EMat4RC5EMat4(&(_globals._pCurCam)->m_mFirstPerson,&TempMat);
                    /* end of inlined section */
  CalcNodeOrient__15EAnimControlleriR5EMat4(this_01,0x11,&TempMat);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTarget.field0_0x0.d[0] = TempMat.field0_0x0.d[3][0];
  vTarget.field0_0x0.d[1] = TempMat.field0_0x0.d[3][1];
  vTarget.field0_0x0.d[2] = TempMat.field0_0x0.d[3][2];
  TempMat.field0_0x0.d[3][0] = 0.0;
  TempMat.field0_0x0.d[3][1] = 0.0;
  TempMat.field0_0x0.d[3][2] = 0.0;
                    /* end of inlined section */
                    /* end of inlined section */
  TempMat.field0_0x0.d[3][3] = 1.0;
  TempMat.field0_0x0.d[0][3] = 0.0;
  TempMat.field0_0x0.d[1][3] = 0.0;
  TempMat.field0_0x0.d[2][3] = 0.0;
  CalcNodeOrient__15EAnimControlleriR5EMat4(this_01,0x10,&TempMat1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  TempMat1.field0_0x0.d[3][0] = 0.0;
  TempMat1.field0_0x0.d[3][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  TempMat1.field0_0x0.d[3][2] = 0.0;
                    /* end of inlined section */
                    /* end of inlined section */
  fVar21 = 1.0;
  TempMat1.field0_0x0.d[0][3] = 0.0;
  TempMat1.field0_0x0.d[1][3] = 0.0;
  TempMat1.field0_0x0.d[2][3] = 0.0;
  TempMat1.field0_0x0.d[3][3] = 1.0;
  BlendQuat__5EMat4fRC5EMat4T2(&M2,0.5,&TempMat,&TempMat1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  V1.field0_0x0.d[2] = 0.0;
  V2.field0_0x0.d[0] = 0.0;
  V2.field0_0x0.d[1] = fVar21;
  V2.field0_0x0.d[2] = 0.0;
  fVar20 = TempMat.field0_0x0.d[0][0] * 0.0 + fVar21 * TempMat.field0_0x0.d[1][0] +
           TempMat.field0_0x0.d[2][0] * 0.0 + TempMat.field0_0x0.d[3][0];
  fVar24 = TempMat.field0_0x0.d[0][1] * 0.0 + fVar21 * TempMat.field0_0x0.d[1][1] +
           TempMat.field0_0x0.d[2][1] * 0.0 + TempMat.field0_0x0.d[3][1];
  fVar22 = (this->m_mLastOrientMatrix).field0_0x0.d[0];
  V1.field0_0x0.d[2] =
       TempMat.field0_0x0.d[0][2] * 0.0 + fVar21 * TempMat.field0_0x0.d[1][2] +
       TempMat.field0_0x0.d[2][2] * 0.0 + TempMat.field0_0x0.d[3][2];
  vEye.field0_0x0._0_8_ = CONCAT44(fVar24,fVar20);
  vEye.field0_0x0.d[2] = V1.field0_0x0.d[2];
  puVar17 = (undefined *)((int)&V1.field0_0x0 + 7);
  uVar6 = (uint)puVar17 & 7;
  puVar7 = (ulong *)(puVar17 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)vEye.field0_0x0._0_8_ >> (7 - uVar6) * 8;
  V1.field0_0x0._0_8_ = vEye.field0_0x0._0_8_;
  fVar25 = V2.field0_0x0.d[2] * (this->m_mLastOrientMatrix).field0_0x0.d[2][1];
  fVar23 = V2.field0_0x0.d[0] * fVar22 +
           V2.field0_0x0.d[1] * (this->m_mLastOrientMatrix).field0_0x0.d[1][0] +
           V2.field0_0x0.d[2] * (this->m_mLastOrientMatrix).field0_0x0.d[2][0] +
           (this->m_mLastOrientMatrix).field0_0x0.d[3][0];
  V2.field0_0x0.d[2] =
       V2.field0_0x0.d[0] * (this->m_mLastOrientMatrix).field0_0x0.d[2] +
       V2.field0_0x0.d[1] * (this->m_mLastOrientMatrix).field0_0x0.d[1][2] +
       V2.field0_0x0.d[2] * (this->m_mLastOrientMatrix).field0_0x0.d[2][2] +
       (this->m_mLastOrientMatrix).field0_0x0.d[3][2];
  fVar22 = V2.field0_0x0.d[0] * (this->m_mLastOrientMatrix).field0_0x0.d[1] +
           V2.field0_0x0.d[1] * (this->m_mLastOrientMatrix).field0_0x0.d[1][1] + fVar25 +
           (this->m_mLastOrientMatrix).field0_0x0.d[3][1];
  vEye.field0_0x0.d[2] = V2.field0_0x0.d[2];
  vEye.field0_0x0._0_8_ = CONCAT44(fVar22,fVar23);
  V2.field0_0x0._0_8_ = vEye.field0_0x0._0_8_;
  puVar17 = (undefined *)((int)&V2.field0_0x0 + 7);
  uVar6 = (uint)puVar17 & 7;
  puVar7 = (ulong *)(puVar17 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)vEye.field0_0x0._0_8_ >> (7 - uVar6) * 8;
                    /* end of inlined section */
  fVar20 = acosf(fVar20 * fVar23 + fVar24 * fVar22 + V1.field0_0x0.d[2] * V2.field0_0x0.d[2]);
  if (fVar20 < 0.0) {
    fVar20 = -fVar20;
  }
                    /* end of inlined section */
  if (fVar20 <= 0.0001) {
    __as__5EMat4RC5EMat4(&M1,&TempMat);
    goto LAB_001c8958;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar14 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
                    /* inlined from ../MSrc/simulator.h */
  if (lVar14 == -2) {
    fVar22 = 4.0;
  }
  else if (lVar14 < -1) {
    if (lVar14 == -3) {
      fVar22 = 10.0;
    }
    else {
LAB_001c88d8:
      fVar22 = 0.0;
    }
  }
  else {
    fVar22 = 0.5;
    if ((lVar14 != -1) && (fVar22 = fVar21, lVar14 != 0)) goto LAB_001c88d8;
  }
                    /* end of inlined section */
  fVar21 = (_dt * 0.1570796 * fVar22) / fVar20;
  if (1.0 < fVar21) {
    fVar21 = 1.0;
  }
  if (0.4712389 < fVar20) {
    fVar21 = 1.0;
  }
  BlendQuat__5EMat4fRC5EMat4T2(&M1,fVar21,&this->m_mLastOrientMatrix,&TempMat);
LAB_001c8958:
  __as__5EMat4RC5EMat4(&this->m_mLastOrientMatrix,&TempMat);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_10c = 1.0;
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(&TempMat,&M2);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vEye.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_d0 = TempMat.field0_0x0.d[0][0] * 0.0 + local_10c * TempMat.field0_0x0.d[1][0] +
             TempMat.field0_0x0.d[3][0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_cc = TempMat.field0_0x0.d[0][1] * 0.0 + local_10c * TempMat.field0_0x0.d[1][1] +
             TempMat.field0_0x0.d[3][1];
  local_c8 = TempMat.field0_0x0.d[0][2] * 0.0 + local_10c * TempMat.field0_0x0.d[1][2] +
             TempMat.field0_0x0.d[3][2];
  vUp.field0_0x0._0_8_ = CONCAT44(local_cc,local_d0);
  vUp.field0_0x0.d[2] = local_c8;
  puVar17 = (undefined *)((int)&vEye.field0_0x0 + 7);
  uVar6 = (uint)puVar17 & 7;
  puVar7 = (ulong *)(puVar17 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)vUp.field0_0x0._0_8_ >> (7 - uVar6) * 8;
  fVar20 = TempMat.field0_0x0.d[0][0] + TempMat.field0_0x0.d[3][0];
  fVar22 = TempMat.field0_0x0.d[0][1] + TempMat.field0_0x0.d[3][1];
  fVar21 = TempMat.field0_0x0.d[0][2] + TempMat.field0_0x0.d[3][2];
  vRight.field0_0x0._0_8_ = CONCAT44(fVar22,fVar20);
  vUp.field0_0x0.d[2] = 0.0;
  vRight.field0_0x0.d[2] = fVar21;
  puVar17 = (undefined *)((int)&vUp.field0_0x0 + 7);
  uVar6 = (uint)puVar17 & 7;
  puVar7 = (ulong *)(puVar17 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)vRight.field0_0x0._0_8_ >> (7 - uVar6) * 8;
  vUp.field0_0x0._0_8_ = vRight.field0_0x0._0_8_;
  vRight.field0_0x0.d[2] = fVar21 * 0.11;
  vTarget.field0_0x0.d[0] = vTarget.field0_0x0.d[0] + fVar20 * 0.11;
  vTarget.field0_0x0.d[1] = vTarget.field0_0x0.d[1] + fVar22 * 0.11;
  vTarget.field0_0x0.d[2] = vTarget.field0_0x0.d[2] + fVar21 * 0.11;
  vRight.field0_0x0.d[2] = fVar20 * local_cc - fVar22 * local_d0;
                    /* end of inlined section */
  vRight.field0_0x0._0_8_ =
       CONCAT44(fVar21 * local_d0 - fVar20 * local_c8,fVar22 * local_c8 - fVar21 * local_cc);
  puVar17 = (undefined *)((int)&vRight.field0_0x0 + 7);
  uVar6 = (uint)puVar17 & 7;
  puVar7 = (ulong *)(puVar17 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)vRight.field0_0x0._0_8_ >> (7 - uVar6) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vEye.field0_0x0.d[2] = local_c8 + vTarget.field0_0x0.d[2];
  vEye.field0_0x0._0_8_ =
       CONCAT44(local_cc + vTarget.field0_0x0.d[1],local_d0 + vTarget.field0_0x0.d[0]);
  vUp.field0_0x0.d[2] = fVar21;
                    /* end of inlined section */
  SetLookAt__9E3DWindowRC5EVec3N21(&this->m_win,&vEye,&vTarget,&vUp);
  Select__9E3DWindowP3ERC(&this->m_win,prc);
  Select__8ERShaderP3ERCi(_11ESims3DHead_m_pShd,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_14c = 0.0;
  local_150 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 0.0;
                    /* end of inlined section */
  local_140 = local_10c;
  local_13c = local_10c;
  local_12c = local_10c;
  local_120 = local_10c;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_150,&local_140,
             &local_130,&local_120,0x35f4d0);
  (*(code *)prc->__vtable[1].DisableGeometryModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
  (*(code *)prc->__vtable[1].EnableRasterModes)
            (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,1,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_14c = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_150 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_110 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = 0;
  local_f0 = 0x3f078788;
  local_ec = 0x3f139394;
  local_e8 = 0x3f46c6c8;
                    /* end of inlined section */
  local_140 = local_10c;
  local_13c = local_10c;
  local_100 = local_10c;
  local_e4 = local_10c;
  (*(code *)prc->__vtable[1].DisplayList)
            (local_10c,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_150,
             &local_140,&local_110,&local_100);
  (*(code *)prc->__vtable[1].DisableGeometryModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
  (*(code *)prc->__vtable[1].EnableRasterModes)
            (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,5,0);
  (*(code *)prc->__vtable->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
  if (*(int *)&this->m_pESim->m_bOverrideDefaultSkin != 1) {
    pEVar2 = this->m_pESim->m_SimShader;
    pEVar3 = pEVar2->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(pEVar2->m_sd).rp + *(short *)&pEVar3->Create + -0x10,prc,0);
  }
                    /* inlined from /eor/src2/engine/e_rc.h */
  pvVar12 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x50,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  lVar14 = (**(code **)&this->m_pPerson->__vtable->field_0x18c)();
  if (lVar14 == 0) {
    pcVar4 = this->m_pPerson->__vtable;
    lVar14 = (**(code **)&pcVar4->field_0x19c)
                       ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar4->field_0x198);
    if (lVar14 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar6 = (int)pvVar12 + 7U & 7;
      puVar7 = (ulong *)(((int)pvVar12 + 7U) - uVar6);
      *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3ecccccd3ecccccdU >> (7 - uVar6) * 8;
      uVar6 = (uint)pvVar12 & 7;
      *(ulong *)((int)pvVar12 - uVar6) =
           0x3ecccccd3ecccccd << uVar6 * 8 |
           *(ulong *)((int)pvVar12 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
      *(undefined4 *)((int)pvVar12 + 8) = 0x3ecccccd;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar6 = (int)pvVar12 + 7U & 7;
      puVar7 = (ulong *)(((int)pvVar12 + 7U) - uVar6);
      *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3fe666663f4ccccdU >> (7 - uVar6) * 8;
      uVar6 = (uint)pvVar12 & 7;
      *(ulong *)((int)pvVar12 - uVar6) =
           0x3fe666663f4ccccd << uVar6 * 8 |
           *(ulong *)((int)pvVar12 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
      *(undefined4 *)((int)pvVar12 + 8) = 0x3f266666;
    }
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar6 = (int)pvVar12 + 7U & 7;
    puVar7 = (ulong *)(((int)pvVar12 + 7U) - uVar6);
    *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3f2666663f266666U >> (7 - uVar6) * 8;
    uVar6 = (uint)pvVar12 & 7;
    *(ulong *)((int)pvVar12 - uVar6) =
         0x3f2666663f266666 << uVar6 * 8 |
         *(ulong *)((int)pvVar12 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    *(undefined4 *)((int)pvVar12 + 8) = 0x40000000;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar6 = (int)pvVar12 + 0x17U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x17U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3eb333333eb33333U >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar12 + 0x10U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x10U) - uVar6);
  *puVar7 = 0x3eb333333eb33333 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)((int)pvVar12 + 0x18) = 0x3f000000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar6 = (int)pvVar12 + 0x37U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x37U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3f0000003f000000U >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar12 + 0x30U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x30U) - uVar6);
  *puVar7 = 0x3f0000003f000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)((int)pvVar12 + 0x38) = 0x3ee66666;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_e0 = local_d0 * -10.0;
  local_dc = local_cc * -10.0;
  local_d8 = local_c8 * -10.0;
                    /* end of inlined section */
  uVar8 = CONCAT44(vRight.field0_0x0.d[1] * 10.0 + vUp.field0_0x0.d[1] * -3.0 + local_dc,
                   vRight.field0_0x0.d[0] * 10.0 + vUp.field0_0x0.d[0] * -3.0 + local_e0);
  uVar6 = (int)pvVar12 + 0x27U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x27U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar8 >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar12 + 0x20U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x20U) - uVar6);
  *puVar7 = uVar8 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(float *)((int)pvVar12 + 0x28) =
       vRight.field0_0x0.d[2] * 10.0 + vUp.field0_0x0.d[2] * -3.0 + local_d8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_130 = vRight.field0_0x0.d[0] * -10.0;
  local_12c = vRight.field0_0x0.d[1] * -10.0;
  local_128 = vRight.field0_0x0.d[2] * -10.0;
  local_120 = vUp.field0_0x0.d[0] * -3.0;
  local_11c = vUp.field0_0x0.d[1] * -3.0;
  local_118 = vUp.field0_0x0.d[2] * -3.0;
  local_140 = local_130 + local_120;
  local_13c = local_12c + local_11c;
  local_138 = local_128 + local_118;
  local_d0 = local_d0 * -10.0;
  local_cc = local_cc * -10.0;
  local_c8 = local_c8 * -10.0;
  local_150 = local_140 + local_d0;
  local_14c = local_13c + local_cc;
  local_148 = local_138 + local_c8;
                    /* end of inlined section */
  uVar6 = (int)pvVar12 + 0x47U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x47U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | CONCAT44(local_14c,local_150) >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar12 + 0x40U & 7;
  puVar7 = (ulong *)(((int)pvVar12 + 0x40U) - uVar6);
  *puVar7 = CONCAT44(local_14c,local_150) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(float *)((int)pvVar12 + 0x48) = local_148;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar21 = sqrtf(*(float *)((int)pvVar12 + 0x20) * *(float *)((int)pvVar12 + 0x20) +
                 *(float *)((int)pvVar12 + 0x24) * *(float *)((int)pvVar12 + 0x24) +
                 *(float *)((int)pvVar12 + 0x28) * *(float *)((int)pvVar12 + 0x28));
  if (fVar21 == 0.0) {
    fVar21 = *(float *)((int)pvVar12 + 0x40);
  }
  else {
    fVar21 = 1.0 / fVar21;
    *(float *)((int)pvVar12 + 0x20) = *(float *)((int)pvVar12 + 0x20) * fVar21;
    *(float *)((int)pvVar12 + 0x24) = *(float *)((int)pvVar12 + 0x24) * fVar21;
    *(float *)((int)pvVar12 + 0x28) = *(float *)((int)pvVar12 + 0x28) * fVar21;
    fVar21 = *(float *)((int)pvVar12 + 0x40);
  }
  fVar21 = sqrtf(fVar21 * fVar21 + *(float *)((int)pvVar12 + 0x44) * *(float *)((int)pvVar12 + 0x44)
                 + *(float *)((int)pvVar12 + 0x48) * *(float *)((int)pvVar12 + 0x48));
  if (fVar21 == 0.0) {
    pEVar15 = prc->__vtable;
  }
  else {
    fVar21 = 1.0 / fVar21;
    *(float *)((int)pvVar12 + 0x40) = *(float *)((int)pvVar12 + 0x40) * fVar21;
    *(float *)((int)pvVar12 + 0x44) = *(float *)((int)pvVar12 + 0x44) * fVar21;
    *(float *)((int)pvVar12 + 0x48) = *(float *)((int)pvVar12 + 0x48) * fVar21;
                    /* end of inlined section */
    pEVar15 = prc->__vtable;
  }
  (*(code *)pEVar15[1].LineList)((int)&prc->m_pdl + (int)*(short *)&pEVar15[1].QuadList,pvVar12,2);
  pEVar11 = this->m_pESim;
  if (*(int *)&pEVar11->m_bDontDrawHead == 0) {
    if (*(int *)&pEVar11->m_bSimIsHidden == 0) {
      if (pEVar11->m_Models[1] != (ERModel *)0x0) {
        Draw__7ERModelP3ERCUi(pEVar11->m_Models[1],prc,2);
      }
      pEVar11 = this->m_pESim;
      if (pEVar11->m_Models[2] != (ERModel *)0x0) {
        Draw__7ERModelP3ERCUi(pEVar11->m_Models[2],prc,2);
        pEVar11 = this->m_pESim;
      }
    }
    else {
      pEVar11 = this->m_pESim;
    }
  }
  else {
    pEVar11 = this->m_pESim;
  }
  this_00 = pEVar11->m_Models[3];
  if (this_00 == (ERModel *)0x0) {
    pEVar11 = this->m_pESim;
  }
  else if (*(int *)&pEVar11->m_bOverrideDefaultSkin == 1) {
    Draw__7ERModelP3ERCUi(this_00,prc,6);
    pEVar11 = this->m_pESim;
  }
  else {
    Draw__7ERModelP3ERCUi(this_00,prc,2);
    pEVar11 = this->m_pESim;
  }
  if (*(int *)&pEVar11->m_bDontDrawHead == 0) {
    if (pEVar11->m_Models[0] == (ERModel *)0x0) {
      pEVar11 = this->m_pESim;
    }
    else {
      Draw__7ERModelP3ERCUi(pEVar11->m_Models[0],prc,6);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
      pEVar11 = this->m_pESim;
    }
  }
  else {
    pEVar11 = this->m_pESim;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
  pcVar5 = pEVar11->m_pPerson->__vtable;
  piVar13 = (int *)(*(code *)pcVar5->GetPersonImplementation)
                             ((int)&pEVar11->m_pPerson->_vb1187 +
                              (int)*(short *)&pcVar5->GetControllingObject);
  (**(code **)(*piVar13 + 0xf4))((int)piVar13 + (int)*(short *)(*piVar13 + 0xf0),prc,1);
  SelectWin__7EGlobalP3ERC(&_globals,prc);
  bVar9 = _globals._pSelectedSims[1] == (cXPerson__150_1300 *)this->m_pPerson;
  Select__8ERShaderP3ERCi(_11ESims3DHead_m_pHeadBorder,prc,0);
  local_150 = (this->m_win).field0_0x0.m_rClipIn.left - 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_13c = (this->m_win).field0_0x0.m_rClipIn.bottom;
                    /* end of inlined section */
  local_140 = (this->m_win).field0_0x0.m_rClipIn.right + 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_14c = (this->m_win).field0_0x0.m_rClipIn.top;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_120 = 1.0;
  local_130 = 0.0;
  local_12c = 1.0;
                    /* end of inlined section */
  local_11c = 0.0;
  if (bVar9) {
    pEVar16 = &_RED;
  }
  else {
    pEVar16 = &_YELLOW;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_150,&local_140,
             &local_130,&local_120,pEVar16);
  return;
}

EVec4& GetColor(float precent, EVec4 &blinkColor) {
  if (0.25 < precent) {
    if ((0.25 < precent) && (precent <= 0.5)) {
      return &_RED;
    }
    if (0.5 < precent) {
      if (precent <= 0.75) {
        return &_YELLOW;
      }
      blinkColor = &_GREEN;
    }
    else {
      blinkColor = &_GREEN;
    }
  }
  return blinkColor;
}

void ESims3DHead::Draw2D(ERC *prc, cXPerson *pSim) {
	EVec4 vRed;
	static float quickStatBlinkTime = 0.f;
	float baryoff;
	EVec2 vStart;
	EVec2 vStatWH;
	EVec2 vBotStart;
	EVec4 vDimRed;
	EVec4 vDimGreen;
	ESim *this;
	float x;
	float x;
	float y;
	float y;
	
  float fVar1;
  bool bVar2;
  EVec4 *pEVar3;
  EVec4 *pEVar4;
  EVec4 *pEVar5;
  EVec4 *pEVar6;
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
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec4 vRed;
  EVec2 vStart;
  EVec2 vStatWH;
  EVec2 vBotStart;
  EVec4 vDimRed;
  EVec4 vDimGreen;
  float local_100;
  float local_fc;
  float local_f0;
  float local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
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
  
  pEVar6 = &vRed;
  pEVar3 = &vRed;
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  bVar2 = IsTwoPlayer__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
  if ((bVar2) && (_globals._pSelectedSims[1] == this->m_pESim->m_pPerson)) {
                    /* end of inlined section */
    fVar9 = (this->field0_0x0).m_WDH.field0_0x0.d[0];
    fVar8 = _13EUIObjectNode_SAFE_RIGHT - 0.01;
    (this->field0_0x0).m_pos.field0_0x0.d[1] = 0.0;
    (this->field0_0x0).m_pos.field0_0x0.d[2] = 0.82;
    fVar8 = fVar8 - fVar9;
  }
  else {
    bVar2 = IsTwoPlayer__7EGlobal(&_globals);
    fVar8 = _13EUIObjectNode_SAFE_LEFT;
    if (bVar2) {
      fVar9 = _13EUIObjectNode_SAFE_TOP + _p1head_yoff;
      (this->field0_0x0).m_pos.field0_0x0.d[1] = 0.0;
      (this->field0_0x0).m_pos.field0_0x0.d[2] = fVar9;
      (this->field0_0x0).m_pos.field0_0x0.d[0] = fVar8 + 0.01;
      goto LAB_001c94c8;
    }
    fVar8 = _13EUIObjectNode_SAFE_LEFT + 0.01;
    (this->field0_0x0).m_pos.field0_0x0.d[1] = 0.0;
    (this->field0_0x0).m_pos.field0_0x0.d[2] = 0.818;
  }
  (this->field0_0x0).m_pos.field0_0x0.d[0] = fVar8;
LAB_001c94c8:
                    /* end of inlined section */
  vRed.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2];
  vRed.field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0];
  vRed.field0_0x0.d[2] = vRed.field0_0x0.d[0] + (this->field0_0x0).m_WDH.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  vRed.field0_0x0.d[3] = vRed.field0_0x0.d[1] + (this->field0_0x0).m_WDH.field0_0x0.d[2] + 0.006;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetViewport__9E3DWindowRCt5TRect1Zf(&this->m_win,(TRect_float_ *)&vRed);
  if (_globals._16_4_ == 0) {
    quickStatBlinkTime_3121 = quickStatBlinkTime_3121 + _dt;
  }
  fVar8 = 0.0;
  vRed.field0_0x0.d[0] = quickStatBlinkTime_3121 * 2.857143;
  if (0.0 <= quickStatBlinkTime_3121) {
    if (quickStatBlinkTime_3121 <= 0.35) {
      fVar8 = quickStatBlinkTime_3121;
    }
  }
  else {
    fVar8 = 0.35;
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vRed.field0_0x0.d[3] = 1.0;
  vRed.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  vRed.field0_0x0.d[2] = 0.0;
  quickStatBlinkTime_3121 = fVar8;
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  if (pSim == (cXPerson__77_985 *)0x0) {
    fVar8 = 100.0;
  }
  else {
    fVar8 = (float)(*(code *)pSim->__vtable->DebugDumpHappyScape)
                             ((int)&pSim->_vb2576 + (int)*(short *)&pSim->__vtable->DeleteTopAction,
                              3);
    fVar8 = fVar8 * 1.2;
  }
  fVar1 = _quick_stat_h;
  fVar9 = _quick_stat_w;
  fVar7 = -100.0;
  if (-100.0 <= fVar8) {
    fVar7 = (float)((int)fVar8 * (uint)(fVar8 < 100.0) | (uint)(fVar8 >= 100.0) * 0x42c80000);
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar11 = (this->m_win).field0_0x0.m_rClipIn.left;
                    /* end of inlined section */
  fVar10 = (this->m_win).field0_0x0.m_rClipIn.top - 0.0175;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  moodfactor = (fVar7 * 0.01 + 1.0) * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar4 = &_RED;
  fVar8 = fVar11;
  vBotStart.field0_0x0.d[0] = fVar11;
  vBotStart.field0_0x0.d[1] = fVar10;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vDimGreen.field0_0x0.d[1] = _GREEN.field0_0x0.d[1] * 0.45;
  vDimGreen.field0_0x0.d[0] = _GREEN.field0_0x0.d[0] * 0.45;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vDimRed.field0_0x0.d[0] = _RED.field0_0x0.d[0] * 0.45;
                    /* end of inlined section */
  vDimGreen.field0_0x0.d[3] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vDimGreen.field0_0x0.d[2] = _GREEN.field0_0x0.d[2] * 0.45;
  vDimRed.field0_0x0.d[1] = _RED.field0_0x0.d[1] * 0.45;
  vDimRed.field0_0x0.d[2] = _RED.field0_0x0.d[2] * 0.45;
                    /* end of inlined section */
  local_f0 = (fVar9 + _quick_stat_xoff) * 8.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  vDimRed.field0_0x0.d[3] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + local_f0;
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ec = fVar1;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,0x35f4d0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar5 = &vDimRed;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (0.125 < moodfactor) {
    pEVar6 = pEVar5;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar6);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vBotStart.field0_0x0.d[0] = fVar8 + fVar9 + _quick_stat_xoff;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (0.25 < moodfactor) {
    pEVar3 = pEVar5;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar3);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
  vBotStart.field0_0x0.d[0] = fVar8 + fVar9 + _quick_stat_xoff + fVar9 + _quick_stat_xoff;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (0.375 < moodfactor) {
    pEVar4 = pEVar5;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
  vBotStart.field0_0x0.d[0] = fVar8 + (fVar9 + _quick_stat_xoff) * 3.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (moodfactor <= 0.5) {
    pEVar5 = &_RED;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
  vBotStart.field0_0x0.d[0] = fVar8 + (fVar9 + _quick_stat_xoff) * 4.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar6 = &vDimGreen;
  if (0.5 < moodfactor) {
    pEVar6 = &_GREEN;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar6);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
  vBotStart.field0_0x0.d[0] = fVar8 + (fVar9 + _quick_stat_xoff) * 5.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar6 = &vDimGreen;
  if (0.625 < moodfactor) {
    pEVar6 = &_GREEN;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar6);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
  vBotStart.field0_0x0.d[0] = fVar8 + (fVar9 + _quick_stat_xoff) * 6.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar6 = &vDimGreen;
  if (0.75 < moodfactor) {
    pEVar6 = &_GREEN;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar6);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = vBotStart.field0_0x0.d[1] + fVar1;
                    /* end of inlined section */
  vBotStart.field0_0x0.d[0] = fVar8 + (fVar9 + _quick_stat_xoff) * 7.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = vBotStart.field0_0x0.d[0] + fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar6 = &vDimGreen;
  if (0.875 < moodfactor) {
    pEVar6 = &_GREEN;
  }
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBotStart,&local_100,
             0x3cfc68,0x3cfc70,pEVar6);
  Select__8ERShaderP3ERCi(_11ESims3DHead_m_pStatsBackBot,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  local_100 = fVar11 - 0.005;
  local_fc = fVar10 - 0.007;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_dc = 0x3f800000;
  local_e0 = 0x3f800000;
  local_c4 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_d0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_100,&local_e0,
             &local_d0);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    _v3DHeadOffp1.field0_0x0.d[1] = -0.705;
    _v3DHeadOffp2.field0_0x0.d[0] = 0.79;
    _v3DHeadOff.field0_0x0.d[1] = 0.0;
    _v3DHeadOff.field0_0x0.d[0] = 0.0;
    _v3DHeadOffp1.field0_0x0.d[0] = 0.0;
    _v3DHeadOffp2.field0_0x0.d[1] = 0.0;
  }
                    /* end of inlined section */
  return;
}

void* ESims3DHead::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void ESims3DHead::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

void global constructors keyed to ESims3DHead_yfov() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

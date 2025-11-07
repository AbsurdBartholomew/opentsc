// STATUS: NOT STARTED

#include "dpadwin.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb3087;
	__vtbl_ptr_type *$vf2795;
	
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
	cXObject *$vb2795;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1697;
	
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

ERShader *DPadWin::m_pBack = NULL;
ERShader *DPadWin::m_pBack1 = NULL;
ERShader *DPadWin::m_pBack2 = NULL;
ERShader *DPadWin::m_pUpShdr = NULL;
ERShader *DPadWin::m_pDownShdr = NULL;
ERShader *DPadWin::m_pLeftShdr = NULL;
ERShader *DPadWin::m_pRightShdr = NULL;
ERShader *DPadWin::m_pDelqueueShdr = NULL;
ERShader *DPadWin::m_pJobShdr = NULL;
ERShader *DPadWin::m_pMoodShdr = NULL;
ERShader *DPadWin::m_pMovequeueShdr = NULL;
ERShader *DPadWin::m_pPersonalityShdr = NULL;
ERShader *DPadWin::m_pRelationshipsShdr = NULL;
ERShader *DPadWin::m_pBlankUp = NULL;
ERShader *DPadWin::m_pBlankDown = NULL;
ERShader *DPadWin::m_pBlankLeft = NULL;
ERShader *DPadWin::m_pBlankRight = NULL;
ERShader *DPadWin::m_pQuestion = NULL;
ERShader *DPadWin::m_pCancle = NULL;
bool DPadWin::m_bInit = false;

EVec2 _p2DpadOff = {
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

EVec2 DPadWin_liveoff[3] = {
	/* [0] = */ {
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
	},
	/* [1] = */ {
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
	},
	/* [2] = */ {
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
	}
};

EVec2 DPadWin_pauseoff[3] = {
	/* [0] = */ {
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
	},
	/* [1] = */ {
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
	},
	/* [2] = */ {
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
	}
};

__vtbl_ptr_type DPadWin::Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ -152,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -152,
		/* .__index = */ 0,
		/* .__pfn = */ &DPadWin::~DPadWin,
		/* .__delta2 = */ -7848
	},
	/* [2] = */ {
		/* .__delta = */ -152,
		/* .__index = */ 0,
		/* .__pfn = */ &DPadWin::SetState,
		/* .__delta2 = */ -6400
	},
	/* [3] = */ {
		/* .__delta = */ -152,
		/* .__index = */ 0,
		/* .__pfn = */ &DPadWin::SetEvent,
		/* .__delta2 = */ 768
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type DPadWin virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &DPadWin::~DPadWin,
		/* .__delta2 = */ -7848
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &DPadWin::Update,
		/* .__delta2 = */ -6384
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &DPadWin::Draw,
		/* .__delta2 = */ -4616
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

__vtbl_ptr_type Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Panelstateman::~Panelstateman,
		/* .__delta2 = */ 12000
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static float _xtemp_BUTTONPAD_POS[3] = {
	/* [0] = */ 0.245f,
	/* [1] = */ 0.21f,
	/* [2] = */ 0.27f
};

static float _ytemp_BUTTONPAD_POS[3] = {
	/* [0] = */ 0.81f,
	/* [1] = */ 0.76f,
	/* [2] = */ 0.85f
};

DPadWin* DPadWin::DPadWin(int __in_chrg, u32 playerid) {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  short sVar4;
  ulong uVar5;
  undefined6 uVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  __vtbl_ptr_type local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    this->_vb1647 = (Panelstateman *)&this->field_0x98;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    *(__vtbl_ptr_type **)&this->field_0x9c = _vt_13Panelstateman;
    *(undefined4 *)&this->field_0x98 = 0;
  }
                    /* end of inlined section */
  __13EUIObjectNode((EUIObjectNode *)this);
  this->_vb1647->__vtable = (Panelstateman__vtable *)_vt_7DPadWin_13Panelstateman;
  uVar8 = _vt_7DPadWin_13Panelstateman[3]._2_6_;
  uVar7 = _vt_7DPadWin_13Panelstateman[2]._2_6_;
  uVar6 = _vt_7DPadWin_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_60 = _vt_7DPadWin_13Panelstateman[4];
    local_80 = _vt_7DPadWin_13Panelstateman[0];
    this->_vb1647->__vtable = (Panelstateman__vtable *)&local_80;
    sVar4 = (short)this - ((short)this->_vb1647 + -0x98);
    local_78 = CONCAT62(uVar6,_vt_7DPadWin_13Panelstateman[1].__delta + sVar4);
    local_70 = CONCAT62(uVar7,_vt_7DPadWin_13Panelstateman[2].__delta + sVar4);
    local_68 = CONCAT62(uVar8,_vt_7DPadWin_13Panelstateman[3].__delta + sVar4);
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_4c = 0;
  local_50 = 0;
                    /* end of inlined section */
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_7DPadWin;
  puVar1 = (undefined *)((int)&(this->m_vPosOff).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPosOff & 7;
  puVar3 = (ulong *)((int)&this->m_vPosOff - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  *(uint *)&this->field_0x30 = playerid;
  memset(this->m_fnTab,0,0x50);
  uVar5 = DAT_003aabe8;
  puVar1 = (undefined *)((int)&this->m_fnTab[0].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aabe8 >> (7 - uVar2) * 8;
  uVar2 = (uint)this->m_fnTab & 7;
  puVar3 = (ulong *)((int)this->m_fnTab - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aabf0;
  puVar1 = (undefined *)((int)&this->m_fnTab[1].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aabf0 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 1) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 1) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aabf8;
  puVar1 = (undefined *)((int)&this->m_fnTab[2].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aabf8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 2) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 2) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aac00;
  puVar1 = (undefined *)((int)&this->m_fnTab[3].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aac00 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 3) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 3) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aac00;
  puVar1 = (undefined *)((int)&this->m_fnTab[4].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aac00 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 4) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 4) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aac08;
  puVar1 = (undefined *)((int)&this->m_fnTab[5].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aac08 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 5) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 5) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aabe8;
  puVar1 = (undefined *)((int)&this->m_fnTab[6].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aabe8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 6) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 6) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aabe8;
  puVar1 = (undefined *)((int)&this->m_fnTab[9].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aabe8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 9) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 9) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar5 = DAT_003aabe8;
  puVar1 = (undefined *)((int)&this->m_fnTab[8].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aabe8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_fnTab + 8) & 7;
  puVar3 = (ulong *)((int)(this->m_fnTab + 8) - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return this;
}

void DPadWin::~DPadWin(int __in_chrg) {
	Panelstateman *this;
	void *pAddress;
	void *pAddress;
	
  short sVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  __vtbl_ptr_type local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_7DPadWin;
  this->_vb1647->__vtable = (Panelstateman__vtable *)_vt_7DPadWin_13Panelstateman;
  uVar4 = _vt_7DPadWin_13Panelstateman[3]._2_6_;
  uVar3 = _vt_7DPadWin_13Panelstateman[2]._2_6_;
  uVar2 = _vt_7DPadWin_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_40 = _vt_7DPadWin_13Panelstateman[4];
    local_60 = _vt_7DPadWin_13Panelstateman[0];
    this->_vb1647->__vtable = (Panelstateman__vtable *)&local_60;
    sVar1 = (short)this - ((short)this->_vb1647 + -0x98);
    local_58 = CONCAT62(uVar2,_vt_7DPadWin_13Panelstateman[1].__delta + sVar1);
    local_50 = CONCAT62(uVar3,_vt_7DPadWin_13Panelstateman[2].__delta + sVar1);
    local_48 = CONCAT62(uVar4,_vt_7DPadWin_13Panelstateman[3].__delta + sVar1);
  }
  ___13EUIObjectNode((EUIObjectNode *)this,0);
  if ((__in_chrg & 2U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    this->_vb1647->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void DPadWin::Init() {
  if (__7DPadWin_m_bInit == 0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pBack =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pBack1 =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xfc89d08a,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pBack2 =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xee3c7f64,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pUpShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x32272593,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pDownShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xcbf05ef5,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pLeftShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xad6829a6,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pRightShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf3afb5a5,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pDelqueueShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x8b200925,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pJobShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6d7fa272,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pMoodShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x35ac4342,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pMovequeueShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbfcc78c3,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pPersonalityShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6ccc0246,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pRelationshipsShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xebb46a42,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pBlankUp =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x29a47441,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pBlankDown =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x64928389,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pBlankLeft =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x20af4da,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pBlankRight =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaab3ea6f,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pQuestion =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa62ef022,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _7DPadWin_m_pCancle =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x8b200925,(EFile *)0x0,0);
                    /* end of inlined section */
    __7DPadWin_m_bInit = 1;
  }
  return;
}

void DPadWin::CleanUp() {
  while (_7DPadWin_m_pBack != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pBack->field0_0x0);
    _7DPadWin_m_pBack = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pUpShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pUpShdr->field0_0x0);
    _7DPadWin_m_pUpShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pDownShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pDownShdr->field0_0x0);
    _7DPadWin_m_pDownShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pLeftShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pLeftShdr->field0_0x0);
    _7DPadWin_m_pLeftShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pRightShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pRightShdr->field0_0x0);
    _7DPadWin_m_pRightShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pDelqueueShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pDelqueueShdr->field0_0x0);
    _7DPadWin_m_pDelqueueShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pJobShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pJobShdr->field0_0x0);
    _7DPadWin_m_pJobShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pMoodShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pMoodShdr->field0_0x0);
    _7DPadWin_m_pMoodShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pMovequeueShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pMovequeueShdr->field0_0x0);
    _7DPadWin_m_pMovequeueShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pPersonalityShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pPersonalityShdr->field0_0x0);
    _7DPadWin_m_pPersonalityShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pRelationshipsShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pRelationshipsShdr->field0_0x0);
    _7DPadWin_m_pRelationshipsShdr = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pBlankUp != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pBlankUp->field0_0x0);
    _7DPadWin_m_pBlankUp = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pBlankDown != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pBlankDown->field0_0x0);
    _7DPadWin_m_pBlankDown = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pBlankLeft != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pBlankLeft->field0_0x0);
    _7DPadWin_m_pBlankLeft = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pBlankRight != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pBlankRight->field0_0x0);
    _7DPadWin_m_pBlankRight = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pQuestion != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pQuestion->field0_0x0);
    _7DPadWin_m_pQuestion = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pCancle != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pCancle->field0_0x0);
    _7DPadWin_m_pCancle = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pBack1 != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pBack1->field0_0x0);
    _7DPadWin_m_pBack1 = (ERShader *)0x0;
  }
  while (_7DPadWin_m_pBack2 != (ERShader *)0x0) {
    DelRef__9EResource(&_7DPadWin_m_pBack2->field0_0x0);
    _7DPadWin_m_pBack2 = (ERShader *)0x0;
  }
  __7DPadWin_m_bInit = 0;
  return;
}

void DPadWin::SetState(Panelstate state) {
  this->_vb1647->m_state = state;
  return;
}

void DPadWin::Update() {
	cXPerson *pPerson;
	u32 _message;
	SimInfoWin *pInfo;
	bool infoup;
	Panelstate state;
	Int numActions;
	cXObject *pIconObj;
	Panelstateman *this;
	Panelstateman *this;
	Panelstate state;
	EUIObjectNode *this;
	EUIMenu *this;
	
  Panelstate PVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  cXPerson__150_1300 *pcVar3;
  SimInfoWin__3_4679 *pSVar4;
  bool bVar5;
  Interaction *this_00;
  cXObject__142_982 *pcVar6;
  long lVar7;
  long lVar8;
  Panelstateman *pPVar9;
  undefined8 uVar10;
  int iVar11;
  float fVar12;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  PVar1 = this->_vb1647->m_state;
                    /* end of inlined section */
  if (PVar1 + ~LIVE_SIM_EDIT < 2) {
    if (PVar1 != PAUSED_CURSOR_STATE) {
      return;
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x20);
    if (lVar7 == 0) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xd9552ae4);
                    /* end of inlined section */
    iVar11 = *(int *)&this->field_0x8;
    uVar10 = 0xd;
    goto LAB_0012ec48;
  }
  pcVar3 = _globals._pSelectedSims[*(int *)&this->field_0x30];
  if ((PVar1 == LIVE_ACTIONQ_STATE) && (pcVar3 != (cXPerson__150_1300 *)0x0)) {
    lVar7 = (*(code *)pcVar3->__vtable->SetNeighborID)
                      ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetNeighborID);
    this_00 = (Interaction *)
              (*(code *)pcVar3->__vtable->IsChild)
                        ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->IsVisitor);
    pcVar6 = GetIconObject__C11Interaction(this_00);
    if ((lVar7 != 0) || (pcVar6 != (cXObject__142_982 *)0x0)) goto LAB_0012e840;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x383df7e6);
                    /* end of inlined section */
    iVar11 = *(int *)&this->field_0x8;
    uVar10 = 10;
  }
  else {
LAB_0012e840:
    iVar11 = *(int *)&this->field_0x30;
    lVar7 = 0;
    bVar5 = false;
    pSVar4 = (_globals._pPanel)->m_pInfoWindows[iVar11];
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    if ((iVar11 == 0) && (pSVar4->_vb1676->m_state == LIVE_INFOUP_1_STATE)) {
LAB_0012e898:
      bVar5 = true;
      pPVar9 = this->_vb1647;
    }
    else if (iVar11 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
      if (pSVar4->_vb1676->m_state == LIVE_INFOUP_2_STATE) goto LAB_0012e898;
      pPVar9 = this->_vb1647;
    }
    else {
      pPVar9 = this->_vb1647;
    }
    if (pPVar9->m_state == LIVE_DIALOG_STATE) {
LAB_0012e938:
      pPVar9 = this->_vb1647;
    }
    else {
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (*(code *)pEVar2[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                         *(undefined4 *)&this->field_0x30,0x800);
      if (lVar8 != 0) {
        iVar11 = *(int *)&this->field_0x8;
        uVar10 = 0x22;
        goto LAB_0012ec48;
      }
      if (this->_vb1647->m_state == LIVE_DIALOG_STATE) goto LAB_0012e938;
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (*(code *)pEVar2[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                         *(undefined4 *)&this->field_0x30,0x20);
      if (lVar8 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xd9552ae4);
                    /* end of inlined section */
        iVar11 = *(int *)&this->field_0x8;
        uVar10 = 0xd;
        goto LAB_0012ec48;
      }
      pPVar9 = this->_vb1647;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    PVar1 = pPVar9->m_state;
                    /* end of inlined section */
    if (PVar1 + ~LIVE_SIM_EDIT < 2) {
      return;
    }
    if (PVar1 == LIVE_DIALOG_STATE) {
      return;
    }
    if (PVar1 == LIVE_PIMENU_STATE) {
      return;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((*(int *)&pSVar4->field_0x10 >> 1 & 1U) == 0) && (bVar5)) {
      iVar11 = *(int *)&this->field_0x8;
      uVar10 = 0x10;
      goto LAB_0012ec48;
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x100);
    if (lVar8 == 0) {
      if (this->_vb1647->m_state == LIVE_ACTIONQ_STATE) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar7 = (*(code *)pEVar2[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar2[1].ClearBut + -4,*(undefined4 *)&this->field_0x30,0x10)
        ;
        if (((lVar7 == 0) &&
            (fVar12 = GetStick__11EControllerii(_ctrlPads[*(int *)&this->field_0x30],0,0),
            fVar12 == 0.0)) &&
           (fVar12 = GetStick__11EControllerii(_ctrlPads[*(int *)&this->field_0x30],0,1),
           fVar12 == 0.0)) {
          return;
        }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x383df7e6);
                    /* end of inlined section */
        iVar11 = *(int *)&this->field_0x8;
        uVar10 = 10;
      }
      else if (*(int *)&(_globals.m_pOptionsRecon)->m_bAutoCenter == 1) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar8 = (*(code *)pEVar2[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar2[1].ClearBut + -4,*(undefined4 *)&this->field_0x30,1);
        if (lVar8 == 0) {
          if ((*(int *)&(_globals.m_pOptionsRecon)->m_bAutoCenter != 1) ||
             (pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
             lVar8 = (*(code *)pEVar2[1].GetBut)
                               ((int)(_globals.m_pCtrlPad)->m_pressed +
                                *(short *)&pEVar2[1].ClearBut + -4,*(undefined4 *)&this->field_0x30,
                                2), lVar8 == 0)) goto LAB_0012eba8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xc21c2a9);
                    /* end of inlined section */
          iVar11 = *(int *)&this->field_0x8;
          uVar10 = 9;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xc21c2a9);
                    /* end of inlined section */
          iVar11 = *(int *)&this->field_0x8;
          uVar10 = 8;
        }
      }
      else {
LAB_0012eba8:
        iVar11 = *(int *)&this->field_0x30;
        if (*(int *)&(_globals.m_pOptionsRecon)->m_bAutoCenter != 0) goto LAB_0012ec68;
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar8 = (*(code *)pEVar2[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar2[1].ClearBut + -4,iVar11,1);
        if (lVar8 == 0) {
          iVar11 = *(int *)&this->field_0x30;
          if (*(int *)&(_globals.m_pOptionsRecon)->m_bAutoCenter != 0) {
LAB_0012ec68:
            if ((iVar11 == 0) && (this->_vb1647->m_state == LIVE_INFOUP_1_STATE)) {
              return;
            }
            if ((iVar11 == 1) && (this->_vb1647->m_state == LIVE_INFOUP_2_STATE)) {
              return;
            }
            pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
            lVar8 = (*(code *)pEVar2[1].GetBut)
                              ((int)(_globals.m_pCtrlPad)->m_pressed +
                               *(short *)&pEVar2[1].ClearBut + -4,iVar11,0x1000);
            if (lVar8 == 0) {
              pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
              lVar8 = (*(code *)pEVar2[1].GetBut)
                                ((int)(_globals.m_pCtrlPad)->m_pressed +
                                 *(short *)&pEVar2[1].ClearBut + -4,*(undefined4 *)&this->field_0x30
                                 ,0x4000);
              if (lVar8 == 0) {
                pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                lVar8 = (*(code *)pEVar2[1].GetBut)
                                  ((int)(_globals.m_pCtrlPad)->m_pressed +
                                   *(short *)&pEVar2[1].ClearBut + -4,
                                   *(undefined4 *)&this->field_0x30,0x8000);
                if (lVar8 == 0) {
                  pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                  lVar8 = (*(code *)pEVar2[1].GetBut)
                                    ((int)(_globals.m_pCtrlPad)->m_pressed +
                                     *(short *)&pEVar2[1].ClearBut + -4,
                                     *(undefined4 *)&this->field_0x30,0x2000);
                  if (lVar8 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    lVar7 = 7;
                    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x61c374d4);
                  }
                }
                else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                  lVar7 = 5;
                  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x61c374d4);
                    /* end of inlined section */
                }
              }
              else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                lVar7 = 6;
                PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x61c374d4);
                    /* end of inlined section */
              }
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
              lVar7 = 4;
              PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x61c374d4);
                    /* end of inlined section */
            }
                    /* end of inlined section */
            if (lVar7 == 0) {
              return;
            }
            iVar11 = *(int *)(*(int *)&this->field_0x8 + 0x38);
            (**(code **)(iVar11 + 0x3c))
                      (*(int *)&this->field_0x8 + (int)*(short *)(iVar11 + 0x38),this,lVar7);
            return;
          }
          pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
          lVar8 = (*(code *)pEVar2[1].GetBut)
                            ((int)(_globals.m_pCtrlPad)->m_pressed +
                             *(short *)&pEVar2[1].ClearBut + -4,iVar11,2);
          if (lVar8 == 0) {
            iVar11 = *(int *)&this->field_0x30;
            goto LAB_0012ec68;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xc21c2a9);
                    /* end of inlined section */
          iVar11 = *(int *)&this->field_0x8;
          uVar10 = 0x2d;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xc21c2a9);
                    /* end of inlined section */
          iVar11 = *(int *)&this->field_0x8;
          uVar10 = 0x2c;
        }
      }
    }
    else if (this->_vb1647->m_state == LIVE_ACTIONQ_STATE) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x383df7e6);
                    /* end of inlined section */
      iVar11 = *(int *)&this->field_0x8;
      uVar10 = 10;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
      if ((_globals._pSelectedSims[*(int *)&this->field_0x30] == (cXPerson__150_1300 *)0x0) ||
         (*(int *)&(_globals._pPanel)->m_pActionQueues[*(int *)&this->field_0x30]->field_0x3c == 0))
      {
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
        return;
                    /* end of inlined section */
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x383df7e6);
                    /* end of inlined section */
      iVar11 = *(int *)&this->field_0x8;
      uVar10 = 10;
    }
  }
  this = *(DPadWin__20_1663 **)&this->field_0x30;
LAB_0012ec48:
  (**(code **)(*(int *)(iVar11 + 0x38) + 0x3c))
            (iVar11 + *(short *)(*(int *)(iVar11 + 0x38) + 0x38),this,uVar10);
  return;
}

void DPadWin::Draw(ERC *prc) {
	EVec2 *pOff;
	EVec2 v;
	EVec2 v;
	EVec2 *this;
	
  ushort uVar1;
  ushort uVar2;
  Panelstateman *pPVar3;
  bool bVar4;
  Panelstate PVar5;
  int iVar6;
  null____pfn_or_delta2 nVar7;
  EVec2 *pEVar8;
  undefined8 uVar9;
  undefined8 unaff_s3;
  EVec2 v;
  
  pEVar8 = &v;
  iVar6 = *(int *)&this->field_0x30;
  if (iVar6 == 1) {
    bVar4 = IsTwoPlayer__7EGlobal(&_globals);
    if (!bVar4) {
      return;
    }
    iVar6 = *(int *)&this->field_0x30;
  }
  if (iVar6 == 1) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    v.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
    v.field0_0x0.d[0] = 0.62;
    pEVar8 = &v;
  }
  else {
    bVar4 = IsTwoPlayer__7EGlobal(&_globals);
    if (bVar4) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      v.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
      v.field0_0x0.d[1] = -0.74;
    }
    else {
      pEVar8 = &_v3DHeadOff;
    }
  }
  pPVar3 = this->_vb1647;
  PVar5 = pPVar3->m_state;
  uVar1 = this->m_fnTab[PVar5].__index;
  if (uVar1 == 0) {
    uVar1 = this->m_fnTab[0].__index;
    if ((short)uVar1 < 0) {
      nVar7 = this->m_fnTab[0].__pfn_or_delta2;
      iVar6 = (int)(short)this->m_fnTab[0].__delta;
    }
    else {
      uVar9 = *(undefined8 *)
               ((short)uVar1 * 8 +
                *(int *)((int)&(((DPadWin__20_1663 *)(this->m_fnTab + -9))->field0_0x0).m_state +
                        (int)(short)this->m_fnTab[0].__pfn_or_delta2.__delta2) + -8);
      nVar7 = SUB84((ulong)uVar9 >> 0x20,0);
      iVar6 = (int)(short)uVar9 + (int)(short)this->m_fnTab[0].__delta;
    }
    (*(code *)nVar7)((int)&(((DPadWin__20_1663 *)(this->m_fnTab + -9))->field0_0x0).m_state + iVar6,
                     prc,pEVar8);
  }
  else {
    if ((short)uVar1 < 0) {
      nVar7 = this->m_fnTab[PVar5].__pfn_or_delta2;
      PVar5 = pPVar3->m_state;
    }
    else {
      unaff_s3 = *(undefined8 *)
                  ((short)uVar1 * 8 +
                   *(int *)((int)&(((DPadWin__20_1663 *)(this->m_fnTab + -9))->field0_0x0).m_state +
                           (int)(short)this->m_fnTab[PVar5].__pfn_or_delta2.__delta2) + -8);
      nVar7 = SUB84((ulong)unaff_s3 >> 0x20,0);
      PVar5 = pPVar3->m_state;
    }
    uVar2 = this->m_fnTab[PVar5].__delta;
    iVar6 = (int)(short)uVar2;
    if (-1 < (short)uVar1) {
      iVar6 = (int)(short)unaff_s3 + (int)(short)uVar2;
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    v.field0_0x0.d[0] = (pEVar8->field0_0x0).d[0] + -0.075;
    v.field0_0x0.d[1] = (pEVar8->field0_0x0).d[1] + 0.03;
                    /* end of inlined section */
    (*(code *)nVar7)((int)&(((DPadWin__20_1663 *)(this->m_fnTab + -9))->field0_0x0).m_state + iVar6,
                     prc,&v);
  }
  return;
}

void DrawDPadBack(ERC *prc, int player, Panelstate state, float alpha) {
	float w;
	EVec2 v1;
	EVec2 v2;
	
  short sVar1;
  bool bVar2;
  EVec2 *pEVar3;
  ERC__vtable *pEVar4;
  EVec2 *pEVar5;
  EVec2 *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EVec2 v1;
  EVec2 v2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  pEVar6 = &v1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (state + ~LIVE_SIM_EDIT < 2) {
    Select__8ERShaderP3ERCi(_7DPadWin_m_pBack,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    v1.field0_0x0.d[0] = -0.22;
    v1.field0_0x0.d[1] = 0.747891;
    v2.field0_0x0.d[1] = 1.0;
    v2.field0_0x0.d[0] = 1.0;
    local_80 = 0x3f800000;
    local_78 = 0x3f800000;
    local_7c = 0x3f800000;
                    /* end of inlined section */
    local_74 = alpha;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&v1,&v2,&local_80);
  }
  else {
    bVar2 = IsTwoPlayer__7EGlobal(&_globals);
    if (bVar2) {
      if (player == 0) {
        Select__8ERShaderP3ERCi(_7DPadWin_m_pBack1,prc,0);
      }
      else {
        Select__8ERShaderP3ERCi(_7DPadWin_m_pBack2,prc,0);
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      v1.field0_0x0.d[1] = -0.05;
                    /* end of inlined section */
      v1.field0_0x0.d[0] = -0.15;
      if (_iVideoMode == 1) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        v1.field0_0x0.d[1] = -0.0225;
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      pEVar5 = &v2;
      v2.field0_0x0.d[0] = 0.75;
                    /* end of inlined section */
      v2.field0_0x0.d[1] = 0.75;
      if (player == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_6c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_44 = 0x3f800000;
        local_48 = 0x3f800000;
        local_4c = 0x3f800000;
        local_50 = 0x3f800000;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&v1,&local_70,
                   &local_50);
        return;
      }
      pEVar4 = prc->__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      pEVar6 = (EVec2 *)&local_70;
      pEVar3 = (EVec2 *)&local_60;
                    /* end of inlined section */
      sVar1 = *(short *)&pEVar4[1].ClipRatio;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_6c = 0x3f800000;
      local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_54 = 0x3f800000;
      local_58 = 0x3f800000;
      local_5c = 0x3f800000;
      local_60 = 0x3f800000;
    }
    else {
      Select__8ERShaderP3ERCi(_7DPadWin_m_pBack,prc,0);
      pEVar4 = prc->__vtable;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      pEVar3 = &v2;
                    /* end of inlined section */
      sVar1 = *(short *)&pEVar4[1].ClipRatio;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      v1.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
      pEVar5 = DPadWin_liveoff;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      v1.field0_0x0.d[0] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      v2.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
      v2.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
    }
                    /* end of inlined section */
    (*(code *)pEVar4[1].ClipRect)(0,(int)&prc->m_pdl + (int)sVar1,pEVar5,pEVar6,pEVar3);
  }
  return;
}

void DPadWin::DrawHead(ERC *prc) {
	cXPerson *pPerson;
	ESim *pESim;
	ESims3DHead *pHead;
	TreeSim *this;
	ESim *this;
	
  ESim *pEVar1;
  ESims3DHead *this_00;
  
  if (_globals._pSelectedSims[*(int *)&this->field_0x30] == (cXPerson__150_1300 *)0x0) {
    pEVar1 = (ESim *)0x0;
  }
  else {
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
    pEVar1 = _globals._pSelectedSims[*(int *)&this->field_0x30]->_vb1187->_vb1121->m_pEoRPerson;
  }
  this_00 = (ESims3DHead *)0x0;
  if (pEVar1 != (ESim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
    this_00 = pEVar1->m_pSimHead;
  }
                    /* end of inlined section */
  if (this_00 != (ESims3DHead *)0x0) {
    Draw2D__11ESims3DHeadP3ERCP8cXPerson
              (this_00,prc,(cXPerson__77_985 *)_globals._pSelectedSims[*(int *)&this->field_0x30]);
  }
  return;
}

void DPadWin::DrawLIVE_DEFAULT(ERC *prc, EVec2 &vOff) {
	Panelstate state;
	EVec2 *this;
	cXPerson *pPerson;
	ESim *pESim;
	ESims3DHead *pHead;
	bool flashMood;
	bool flashRela;
	static float infoWarnTime = 0.f;
	EVec4 vRedBlink;
	TreeSim *this;
	ESim *this;
	float *pMotives;
	float movitves[8];
	int i;
	vector<Neighbor *,__malloc_alloc_template<0> > relList;
	Neighbor *pSelf;
	PersonRelation relation;
	unsigned int n;
	Neighbor **last;
	Neighbor **first;
	Neighbor **pointer;
	
  short sVar1;
  cXPerson__150_1300 *pSelf;
  cXObject__78_2757__vtable *pcVar2;
  Neighborhood__vtable *pNVar3;
  bool bVar4;
  bool bVar5;
  Neighborhood__vtable **ppNVar6;
  Neighbor **ppNVar7;
  ERShader *pT;
  ERShader *pB;
  ERShader *pL;
  ERShader *pR;
  ESim *pEVar8;
  int iVar9;
  Neighbor *n1;
  EVec4 *vRColor;
  EVec4 *vTColor;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar10;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined4 uVar11;
  EVec4 vRedBlink;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  vector_Neighbor_____malloc_alloc_template_0___ relList;
  PersonRelation relation;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ESims3DHead *pHead;
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
  
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  DrawDPadBack__FP3ERCiQ213Panelstateman10Panelstatef
            (prc,*(int *)&this->field_0x30,this->_vb1647->m_state,1.0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (this->_vb1647->m_state + ~LIVE_SIM_EDIT < 2) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRedBlink.field0_0x0.d[0] = -0.17;
    vRedBlink.field0_0x0.d[1] = 0.04;
                    /* end of inlined section */
    pT = GetBuyBuildDPadUp__7EGlobal(&_globals);
    pB = GetBuyBuildDPadDown__7EGlobal(&_globals);
    pL = GetBuyBuildDPadLeft__7EGlobal(&_globals);
    pR = GetBuyBuildDPadRight__7EGlobal(&_globals);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_f4 = 1.0;
    local_f8 = 1.0;
    local_fc = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_100 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    relList.end_of_storage = (Neighbor **)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    relList.finish = (Neighbor **)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    relList.start = (Neighbor **)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    relation._8_4_ = 0x3f800000;
    relation._4_4_ = 0x3f800000;
    relation.mValue = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_c4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_d0 = 0x3f800000;
                    /* end of inlined section */
    DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
              (prc,(EVec2 *)&vRedBlink,*(int *)&this->field_0x30,pT,pB,pL,pR,true,
               (EVec4 *)&local_100,(EVec4 *)&relList,(EVec4 *)&relation,(EVec4 *)&local_d0);
  }
  else {
    pSelf = _globals._pSelectedSims[*(int *)&this->field_0x30];
    if (pSelf == (cXPerson__150_1300 *)0x0) {
      pEVar8 = (ESim *)0x0;
    }
    else {
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
      pEVar8 = pSelf->_vb1187->_vb1121->m_pEoRPerson;
    }
    pHead = (ESims3DHead *)0x0;
    if (pEVar8 != (ESim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
      pHead = pEVar8->m_pSimHead;
    }
                    /* end of inlined section */
    bVar4 = false;
    bVar5 = false;
    if (pSelf != (cXPerson__150_1300 *)0x0) {
      iVar9 = (*(code *)((cXPerson__78_985__vtable *)pSelf->__vtable)->IsSelected)
                        ((int)&pSelf->_vb1187 +
                         (int)*(short *)&((cXPerson__78_985__vtable *)pSelf->__vtable)->Skipping3D,0
                        );
      vRedBlink.field0_0x0.d[0] = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x1c));
      vRedBlink.field0_0x0.d[1] = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x20));
      vRedBlink.field0_0x0.d[2] = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x14));
      vRedBlink.field0_0x0.d[3] = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x38));
      local_100 = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x18));
      local_fc = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x24));
      local_f8 = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x3c));
      local_f4 = GetMovtiveMag__Ff(*(float *)(iVar9 + 0x34));
      iVar9 = 0;
      uVar11 = vRedBlink.field0_0x0.d[0];
      while (0.05 < uVar11) {
        if (7 < iVar9 + 1) goto LAB_0012f524;
        uVar11 = *(float *)((int)&vRedBlink.field0_0x0 + iVar9 * 4 + 4);
        iVar9 = iVar9 + 1;
      }
      bVar4 = true;
LAB_0012f524:
      if (pSelf != (cXPerson__150_1300 *)0x0) {
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
        relList.start = (Neighbor **)0x0;
        relList.finish = (Neighbor **)0x0;
                    /* end of inlined section */
        uVar10 = 0;
                    /* end of inlined section */
        relList.end_of_storage = (Neighbor **)0x0;
        GetRelatedPeople__13ERelationsWiniP8cXPersonPv
                  (*(int *)&this->field_0x30,(cXPerson__78_985 *)pSelf,&relList);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pcVar2 = (cXObject__78_2757__vtable *)pSelf->_vb1187->__vtable;
        pNVar3 = _5Globs_pNeighborhood->__vtable;
        sVar1 = *(short *)&pNVar3->AddFamilyHistoryStat;
        ppNVar6 = &_5Globs_pNeighborhood->__vtable;
        iVar9 = (*(code *)pcVar2[1].HandleError)
                          ((int)&pSelf->_vb1187->_vb1121 + (int)*(short *)&pcVar2[1].Error);
        n1 = (Neighbor *)
             (*(code *)pNVar3->GetImpl)((int)ppNVar6 + (int)sVar1,*(undefined4 *)(iVar9 + 0x1c));
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
        ppNVar7 = relList.start;
        if ((int)relList.finish - (int)relList.start >> 2 != 0) {
          do {
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
            GetRelation__13ERelationsWinP8NeighborT1P14PersonRelation
                      (n1,relList.start[uVar10],&relation);
            ppNVar7 = relList.start;
            if (relation.mValue < -0x32) {
              bVar5 = true;
              break;
            }
                    /* end of inlined section */
            uVar10 = uVar10 + 1;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
          } while (uVar10 < (uint)((int)relList.finish - (int)relList.start >> 2));
        }
        for (; ppNVar7 != relList.finish; ppNVar7 = ppNVar7 + 1) {
        }
        if ((relList.start != (Neighbor **)0x0) &&
           ((int)relList.end_of_storage - (int)relList.start >> 2 != 0)) {
          free(relList.start);
        }
      }
    }
                    /* end of inlined section */
    infoWarnTime_4098 = infoWarnTime_4098 + _dt;
    vRedBlink.field0_0x0.d[0] = infoWarnTime_4098 * 2.857143;
    if (0.0 <= infoWarnTime_4098) {
      if (0.35 < infoWarnTime_4098) {
        infoWarnTime_4098 = 0.0;
      }
    }
    else {
      infoWarnTime_4098 = 0.35;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vRedBlink.field0_0x0.d[3] = 1.0;
    vRedBlink.field0_0x0.d[1] = 0.0;
    vRedBlink.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    if (pHead != (ESims3DHead *)0x0) {
      vTColor = &vRedBlink;
      if (!bVar4) {
        vTColor = &_WHITE;
      }
      vRColor = &_WHITE;
      if (bVar5) {
        vRColor = &vRedBlink;
      }
      DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
                (prc,vOff,*(int *)&this->field_0x30,_7DPadWin_m_pMoodShdr,
                 _7DPadWin_m_pPersonalityShdr,_7DPadWin_m_pJobShdr,_7DPadWin_m_pRelationshipsShdr,
                 true,vTColor,&_WHITE,&_WHITE,vRColor);
      DrawHead__7DPadWinP3ERC(this,prc);
    }
  }
  return;
}

void DPadWin::DrawLIVE_DIALOG(ERC *prc, EVec2 &vOff) {
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  EDialogWin *pEVar1;
  bool bVar2;
  ERShader *pL;
  ERShader *pR;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  DrawDPadBack__FP3ERCiQ213Panelstateman10Panelstatef
            (prc,*(int *)&this->field_0x30,this->_vb1647->m_state,1.0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  pEVar1 = _5Globs_pEORDialog->m_pCurDialog;
  bVar2 = false;
  if (pEVar1 != (EDialogWin *)0x0) {
    bVar2 = pEVar1->m_keyboard != (ETextEntryDialog *)0x0;
  }
  pL = _7DPadWin_m_pLeftShdr;
  pR = _7DPadWin_m_pRightShdr;
                    /* end of inlined section */
  if (!bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
    bVar2 = false;
    if (pEVar1 != (EDialogWin *)0x0) {
      bVar2 = *(int *)&pEVar1->m_bAllstringsVis == 0;
    }
    pL = _7DPadWin_m_pBlankLeft;
    pR = _7DPadWin_m_pBlankRight;
                    /* end of inlined section */
    if (!bVar2) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_84 = 0x3f800000;
      local_88 = 0x3f800000;
      local_8c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_90 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_74 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_78 = 0x3f800000;
      local_7c = 0x3f800000;
      local_80 = 0x3f800000;
      local_64 = 0x3f800000;
      local_68 = 0x3f800000;
      local_6c = 0x3f800000;
      local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_54 = 0x3f800000;
      local_58 = 0x3f800000;
      local_5c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_60 = 0x3f800000;
                    /* end of inlined section */
      DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
                (prc,vOff,*(int *)&this->field_0x30,_7DPadWin_m_pBlankUp,_7DPadWin_m_pBlankDown,
                 _7DPadWin_m_pBlankLeft,_7DPadWin_m_pBlankRight,true,(EVec4 *)&local_90,
                 (EVec4 *)&local_80,(EVec4 *)&local_70,(EVec4 *)&local_60);
      goto LAB_0012f950;
    }
  }
  local_64 = 0x3f800000;
  local_68 = 0x3f800000;
  local_6c = 0x3f800000;
  local_70 = 0x3f800000;
  local_74 = 0x3f800000;
  local_78 = 0x3f800000;
  local_7c = 0x3f800000;
  local_80 = 0x3f800000;
  local_84 = 0x3f800000;
  local_88 = 0x3f800000;
  local_8c = 0x3f800000;
  local_90 = 0x3f800000;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_54 = 0x3f800000;
  local_58 = 0x3f800000;
  local_5c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_60 = 0x3f800000;
                    /* end of inlined section */
  DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
            (prc,vOff,*(int *)&this->field_0x30,_7DPadWin_m_pUpShdr,_7DPadWin_m_pDownShdr,pL,pR,true
             ,(EVec4 *)&local_90,(EVec4 *)&local_80,(EVec4 *)&local_70,(EVec4 *)&local_60);
LAB_0012f950:
  DrawHead__7DPadWinP3ERC(this,prc);
  return;
}

void DPadWin::DrawLIVE_ACTIONQ(ERC *prc, EVec2 &vOff) {
	EVec4 *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  DrawDPadBack__FP3ERCiQ213Panelstateman10Panelstatef
            (prc,*(int *)&this->field_0x30,this->_vb1647->m_state,1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_84 = 0x3f800000;
  local_88 = 0x3f800000;
  local_8c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_90 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_74 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_78 = 0x3f800000;
  local_7c = 0x3f800000;
  local_80 = 0x3f800000;
  local_64 = 0x3f800000;
  local_68 = 0x3f800000;
  local_6c = 0x3f800000;
  local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_54 = 0x3f800000;
  local_58 = 0x3f800000;
  local_5c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_60 = 0x3f800000;
                    /* end of inlined section */
  DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
            (prc,vOff,*(int *)&this->field_0x30,_7DPadWin_m_pBlankUp,_7DPadWin_m_pBlankDown,
             _7DPadWin_m_pLeftShdr,_7DPadWin_m_pRightShdr,true,(EVec4 *)&local_90,(EVec4 *)&local_80
             ,(EVec4 *)&local_70,(EVec4 *)&local_60);
  DrawHead__7DPadWinP3ERC(this,prc);
  return;
}

void DPadWin::DrawLIVE_INFOUP(ERC *prc, EVec2 &vOff) {
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	SimInfoWin *this;
	
  int player;
  int iVar1;
  ERShader *pT;
  ERShader *pB;
  ERShader *pL;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  DrawDPadBack__FP3ERCiQ213Panelstateman10Panelstatef
            (prc,*(int *)&this->field_0x30,this->_vb1647->m_state,1.0);
  player = *(int *)&this->field_0x30;
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  iVar1 = (_globals._pPanel)->m_pInfoWindows[player]->m_curwindow;
                    /* end of inlined section */
  if (iVar1 == 1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pT = (ERShader *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pL = (ERShader *)0x0;
    pB = _7DPadWin_m_pPersonalityShdr;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
  }
  else if (iVar1 < 2) {
    if (iVar1 != 0) goto LAB_0012fcd0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pT = _7DPadWin_m_pMoodShdr;
    pB = (ERShader *)0x0;
    pL = (ERShader *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_84 = 0x3f800000;
        local_88 = 0x3f800000;
        local_8c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_90 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_74 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_78 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_7c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_80 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_64 = 0x3f800000;
        local_68 = 0x3f800000;
        local_6c = 0x3f800000;
        local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_54 = 0x3f800000;
        local_58 = 0x3f800000;
        local_5c = 0x3f800000;
        local_60 = 0x3f800000;
                    /* end of inlined section */
        DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
                  (prc,vOff,player,(ERShader *)0x0,(ERShader *)0x0,(ERShader *)0x0,
                   _7DPadWin_m_pRelationshipsShdr,true,(EVec4 *)&local_90,(EVec4 *)&local_80,
                   (EVec4 *)&local_70,(EVec4 *)&local_60);
      }
      goto LAB_0012fcd0;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pT = (ERShader *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pB = (ERShader *)0x0;
    pL = _7DPadWin_m_pJobShdr;
  }
  local_64 = 0x3f800000;
  local_68 = 0x3f800000;
  local_6c = 0x3f800000;
  local_70 = 0x3f800000;
  local_74 = 0x3f800000;
  local_78 = 0x3f800000;
  local_7c = 0x3f800000;
  local_80 = 0x3f800000;
  local_84 = 0x3f800000;
  local_88 = 0x3f800000;
  local_8c = 0x3f800000;
  local_90 = 0x3f800000;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_54 = 0x3f800000;
  local_58 = 0x3f800000;
  local_5c = 0x3f800000;
  local_60 = 0x3f800000;
                    /* end of inlined section */
  DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
            (prc,vOff,player,pT,pB,pL,(ERShader *)0x0,true,(EVec4 *)&local_90,(EVec4 *)&local_80,
             (EVec4 *)&local_70,(EVec4 *)&local_60);
LAB_0012fcd0:
  DrawHead__7DPadWinP3ERC(this,prc);
  return;
}

void DPadWin::DrawLIVE_PIMENU(ERC *prc, EVec2 &vOff) {
	EVec4 *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  DrawDPadBack__FP3ERCiQ213Panelstateman10Panelstatef
            (prc,*(int *)&this->field_0x30,this->_vb1647->m_state,1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_84 = 0x3f800000;
  local_88 = 0x3f800000;
  local_8c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_90 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_74 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_78 = 0x3f800000;
  local_7c = 0x3f800000;
  local_80 = 0x3f800000;
  local_64 = 0x3f800000;
  local_68 = 0x3f800000;
  local_6c = 0x3f800000;
  local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_54 = 0x3f800000;
  local_58 = 0x3f800000;
  local_5c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_60 = 0x3f800000;
                    /* end of inlined section */
  DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
            (prc,vOff,*(int *)&this->field_0x30,_7DPadWin_m_pUpShdr,_7DPadWin_m_pDownShdr,
             _7DPadWin_m_pBlankLeft,_7DPadWin_m_pBlankRight,true,(EVec4 *)&local_90,
             (EVec4 *)&local_80,(EVec4 *)&local_70,(EVec4 *)&local_60);
  DrawHead__7DPadWinP3ERC(this,prc);
  return;
}

void DPadWin::DrawButtonPrompts(ERC *prc, EVec2 &vOff, int player, ERShader *pT, ERShader *pB, ERShader *pL, ERShader *pR, bool bButtonsOn, EVec4 &vTColor, EVec4 &vBColor, EVec4 &vLColor, EVec4 &vRColor) {
  uint uVar1;
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
  float local_e0;
  float local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  if (pT == (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_7DPadWin_m_pBlankUp,prc,0);
  }
  else {
    Select__8ERShaderP3ERCi(pT,prc,0);
    if (((pT != _7DPadWin_m_pBlankUp) && (bButtonsOn)) &&
       (uVar1 = GetDownButtons__11EControlleri(_ctrlPads[player],0x1000), uVar1 != 0)) {
      vTColor = &_CYAN;
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_e0 = _xtemp_BUTTONPAD_POS[0] + (vOff->field0_0x0).d[0];
  local_dc = _ytemp_BUTTONPAD_POS[1] + (vOff->field0_0x0).d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_cc = 0x3f800000;
  local_d0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,&local_d0,
             vTColor);
  if (pB == (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_7DPadWin_m_pBlankDown,prc,0);
  }
  else {
    Select__8ERShaderP3ERCi(pB,prc,0);
    if (((pB != _7DPadWin_m_pBlankDown) && (bButtonsOn)) &&
       (uVar1 = GetDownButtons__11EControlleri(_ctrlPads[player],0x4000), uVar1 != 0)) {
      vBColor = &_CYAN;
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_dc = _ytemp_BUTTONPAD_POS[2] + (vOff->field0_0x0).d[1];
  local_e0 = _xtemp_BUTTONPAD_POS[0] + (vOff->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = 0x3f800000;
  local_c0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,&local_c0,
             vBColor);
  if (pL == (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_7DPadWin_m_pBlankLeft,prc,0);
  }
  else {
    Select__8ERShaderP3ERCi(pL,prc,0);
    if (((pL != _7DPadWin_m_pBlankLeft) && (bButtonsOn)) &&
       (uVar1 = GetDownButtons__11EControlleri(_ctrlPads[player],0x8000), uVar1 != 0)) {
      vLColor = &_CYAN;
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_e0 = _xtemp_BUTTONPAD_POS[1] + (vOff->field0_0x0).d[0];
  local_dc = _ytemp_BUTTONPAD_POS[0] + (vOff->field0_0x0).d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,&local_b0,
             vLColor);
  if (pR == (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_7DPadWin_m_pBlankRight,prc,0);
  }
  else {
    Select__8ERShaderP3ERCi(pR,prc,0);
    if (((pR != _7DPadWin_m_pBlankRight) && (bButtonsOn)) &&
       (uVar1 = GetDownButtons__11EControlleri(_ctrlPads[player],0x2000), uVar1 != 0)) {
      vRColor = &_CYAN;
    }
  }
  local_dc = _ytemp_BUTTONPAD_POS[0] + (vOff->field0_0x0).d[1];
  local_e0 = _xtemp_BUTTONPAD_POS[2] + (vOff->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = 0x3f800000;
  local_cc = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,&local_d0,
             vRColor);
  return;
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
    DPadWin_liveoff[0].field0_0x0._0_4_ = 0xbe0f5c29;
    DPadWin_pauseoff[0].field0_0x0._0_4_ = 0;
    DPadWin_liveoff[0].field0_0x0._4_4_ = 0x3f3d70a4;
    DPadWin_pauseoff[0].field0_0x0._4_4_ = 0;
    DPadWin_liveoff[1].field0_0x0._0_4_ = 0xbd71a9fc;
    DPadWin_liveoff[1].field0_0x0._4_4_ = 0xbe800000;
    DPadWin_pauseoff[1].field0_0x0._4_4_ = 0xbe4ccccd;
    DPadWin_pauseoff[1].field0_0x0._0_4_ = 0;
    _p2DpadOff.field0_0x0.d[0] = 0.49;
    DPadWin_liveoff[2].field0_0x0._4_4_ = 0x3f266666;
    DPadWin_liveoff[2].field0_0x0._0_4_ = 0x3f28f5c3;
    DPadWin_pauseoff[2].field0_0x0._4_4_ = 0;
    _p2DpadOff.field0_0x0.d[1] = 0.0;
    DPadWin_pauseoff[2].field0_0x0._0_4_ = 0;
  }
  return;
}

void Panelstateman::~Panelstateman(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void DPadWin::SetEvent(PanelEvent event, u32 data) {
  return;
}

void DPadWin::SetDefaultFlags() {
  *(undefined4 *)&this->field_0x10 = 0x16;
  return;
}

void global constructors keyed to DPadWin::m_pBack() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

// STATUS: NOT STARTED

#include "MotiveEffects.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb965;
	__vtbl_ptr_type *$vf1032;
	
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
	cXObject *$vb1032;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf927;
	
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

struct PersonalityAdMap {
	Int persAd;
	Int persVar;
	Int inverted;
};

static int sMotives[9] = {
	/* [0] = */ 5,
	/* [1] = */ 6,
	/* [2] = */ 7,
	/* [3] = */ 8,
	/* [4] = */ 9,
	/* [5] = */ 3,
	/* [6] = */ 13,
	/* [7] = */ 14,
	/* [8] = */ 15
};

static PersonalityAdMap sAdMap[23] = {
	/* [0] = */ {
		/* .persAd = */ 0,
		/* .persVar = */ -1,
		/* .inverted = */ 0
	},
	/* [1] = */ {
		/* .persAd = */ 1,
		/* .persVar = */ 2,
		/* .inverted = */ 0
	},
	/* [2] = */ {
		/* .persAd = */ 2,
		/* .persVar = */ 2,
		/* .inverted = */ 1
	},
	/* [3] = */ {
		/* .persAd = */ 3,
		/* .persVar = */ 3,
		/* .inverted = */ 0
	},
	/* [4] = */ {
		/* .persAd = */ 4,
		/* .persVar = */ 3,
		/* .inverted = */ 1
	},
	/* [5] = */ {
		/* .persAd = */ 5,
		/* .persVar = */ 4,
		/* .inverted = */ 0
	},
	/* [6] = */ {
		/* .persAd = */ 6,
		/* .persVar = */ 4,
		/* .inverted = */ 1
	},
	/* [7] = */ {
		/* .persAd = */ 7,
		/* .persVar = */ 5,
		/* .inverted = */ 0
	},
	/* [8] = */ {
		/* .persAd = */ 8,
		/* .persVar = */ 5,
		/* .inverted = */ 1
	},
	/* [9] = */ {
		/* .persAd = */ 9,
		/* .persVar = */ 6,
		/* .inverted = */ 0
	},
	/* [10] = */ {
		/* .persAd = */ 10,
		/* .persVar = */ 6,
		/* .inverted = */ 1
	},
	/* [11] = */ {
		/* .persAd = */ 11,
		/* .persVar = */ 7,
		/* .inverted = */ 0
	},
	/* [12] = */ {
		/* .persAd = */ 12,
		/* .persVar = */ 7,
		/* .inverted = */ 1
	},
	/* [13] = */ {
		/* .persAd = */ 13,
		/* .persVar = */ 9,
		/* .inverted = */ 0
	},
	/* [14] = */ {
		/* .persAd = */ 14,
		/* .persVar = */ 10,
		/* .inverted = */ 0
	},
	/* [15] = */ {
		/* .persAd = */ 15,
		/* .persVar = */ 11,
		/* .inverted = */ 0
	},
	/* [16] = */ {
		/* .persAd = */ 16,
		/* .persVar = */ 12,
		/* .inverted = */ 0
	},
	/* [17] = */ {
		/* .persAd = */ 17,
		/* .persVar = */ 13,
		/* .inverted = */ 0
	},
	/* [18] = */ {
		/* .persAd = */ 18,
		/* .persVar = */ 14,
		/* .inverted = */ 0
	},
	/* [19] = */ {
		/* .persAd = */ 19,
		/* .persVar = */ 15,
		/* .inverted = */ 0
	},
	/* [20] = */ {
		/* .persAd = */ 20,
		/* .persVar = */ 16,
		/* .inverted = */ 0
	},
	/* [21] = */ {
		/* .persAd = */ 21,
		/* .persVar = */ 17,
		/* .inverted = */ 0
	},
	/* [22] = */ {
		/* .persAd = */ 22,
		/* .persVar = */ 18,
		/* .inverted = */ 0
	}
};

MotiveEffects* MotiveEffects::MotiveEffects(cXPerson *person) {
	MotiveCurveArray<9> *this;
	MotiveCurve *array;
	MotiveCurveSet *this;
	PiecewisePt low;
	PiecewisePt high;
	int c;
	MotiveCurveSet *this;
	MotiveCurveSet *this;
	int n;
	Int motive;
	MotiveCurveSet *this;
	int n;
	MotiveCurveSet *this;
	int n;
	MotiveCurveSet *this;
	int n;
	
  int iVar1;
  Motives *pMVar2;
  PiecewiseFn *this_00;
  int iVar3;
  int iVar4;
  int *piVar5;
  PiecewisePt low;
  PiecewisePt high;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
  this_00 = (PiecewiseFn *)(this->field0_0x0).fCurveArray;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
  iVar3 = 8;
  (this->field0_0x0).field0_0x0.fNumCurves = 9;
  (this->field0_0x0).field0_0x0.fCurves = (MotiveCurve *)this_00;
  do {
    iVar3 = iVar3 + -1;
    __11PiecewiseFn(this_00);
    this_00[1].fPoints = (PiecewisePt *)0xffffffff;
    this_00 = (PiecewiseFn *)&this_00[1].fReciprocals;
  } while (iVar3 != -1);
                    /* end of inlined section */
  this->fPerson = (cXPerson__123_1079 *)person;
  iVar4 = 0;
  pMVar2 = (Motives *)
           (**(code **)&person->__vtable->field_0x1ac)
                     ((int)&person->_vb1032 + (int)*(short *)&person->__vtable->field_0x1a8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
  iVar3 = (this->field0_0x0).field0_0x0.fNumCurves;
                    /* end of inlined section */
  this->fMotives = pMVar2;
  low.fY = -100.0;
  high.fY = 100.0;
  low.fX = -100.0;
  high.fX = 100.0;
  if (0 < iVar3) {
    iVar3 = 0;
    piVar5 = sMotives;
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
      iVar1 = *piVar5;
                    /* end of inlined section */
      iVar4 = iVar4 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      piVar5 = piVar5 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
      *(int *)((int)&((this->field0_0x0).field0_0x0.fCurves)->fMotive + iVar3) = iVar1;
                    /* end of inlined section */
      SetMaxPoints__11PiecewiseFni
                ((PiecewiseFn *)
                 ((int)&(((this->field0_0x0).field0_0x0.fCurves)->field0_0x0).fPoints + iVar3),4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      AddPoint__11PiecewiseFnRC11PiecewisePt
                ((PiecewiseFn *)
                 ((int)&(((this->field0_0x0).field0_0x0.fCurves)->field0_0x0).fPoints + iVar3),&low)
      ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      AddPoint__11PiecewiseFnRC11PiecewisePt
                ((PiecewiseFn *)
                 ((int)&(((this->field0_0x0).field0_0x0.fCurves)->field0_0x0).fPoints + iVar3),&high
                );
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      iVar3 = iVar3 + 0x14;
    } while (iVar4 < (this->field0_0x0).field0_0x0.fNumCurves);
  }
  return this;
}

float MotiveEffects::GetCurrentScore() {
	float result;
	MotiveCurve *c;
	MotiveCurveSet *this;
	MotiveCurveSet *this;
	MotiveCurve *this;
	PiecewiseFn *this;
	float x;
	float diff;
	int i;
	MotiveCurveSet *this;
	
  int iVar1;
  int iVar2;
  PiecewisePt *pPVar3;
  PiecewisePt *pPVar4;
  MotiveCurve *pMVar5;
  int iVar6;
  MotiveCurve *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
  iVar1 = (this->field0_0x0).field0_0x0.fNumCurves;
  pMVar5 = (this->field0_0x0).field0_0x0.fCurves;
                    /* end of inlined section */
  fVar10 = 0.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
  if (pMVar5 != pMVar5 + iVar1) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
      iVar2 = (pMVar5->field0_0x0).fNumPoints;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Piecewise.h */
      fVar8 = this->fMotives->Motive[pMVar5->fMotive];
      if (iVar2 == 0) {
        fVar8 = 0.0;
        pMVar7 = (this->field0_0x0).field0_0x0.fCurves;
      }
      else {
        fVar9 = 0.0;
        iVar6 = iVar2 + -1;
        pMVar7 = (this->field0_0x0).field0_0x0.fCurves;
        pPVar3 = (pMVar5->field0_0x0).fPoints;
        if (-1 < iVar6) {
          pPVar4 = pPVar3 + iVar6;
          fVar9 = fVar8 - pPVar4->fX;
          if (fVar9 <= 0.0) {
            iVar6 = iVar2 + -2;
            while ((pPVar4 = pPVar4 + -1, -1 < iVar6 && (fVar9 = fVar8 - pPVar4->fX, fVar9 <= 0.0)))
            {
              iVar6 = iVar6 + -1;
            }
          }
        }
        if (iVar6 == iVar2 + -1) {
          fVar8 = pPVar3[iVar6].fY;
        }
        else if (iVar6 == -1) {
          fVar8 = pPVar3->fY;
        }
        else {
          fVar8 = fVar9 * (pMVar5->field0_0x0).fReciprocals[iVar6] *
                  (pPVar3[iVar6 + 1].fY - pPVar3[iVar6].fY) + pPVar3[iVar6].fY;
        }
      }
                    /* end of inlined section */
      pMVar5 = pMVar5 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      fVar10 = fVar10 + fVar8;
    } while (pMVar5 != pMVar7 + iVar1);
  }
                    /* end of inlined section */
  return fVar10 / (float)(this->field0_0x0).field0_0x0.fNumCurves;
}

float MotiveEffects::GetInteractionScore(TreeTableAd *ads) {
	float result;
	MotiveCurve *c;
	MotiveCurveSet *this;
	MotiveCurveSet *this;
	TreeTableAd *ad;
	float baseValue;
	float score;
	MotiveCurve *this;
	MotiveCurve *this;
	TreeTableAd *this;
	PersonalityAdMap *map;
	Int persValue;
	TreeTableAd *this;
	TreeTableAd *this;
	TreeTableAd *this;
	TreeTableAd *this;
	PiecewiseFn *this;
	float x;
	float diff;
	int i;
	MotiveCurveSet *this;
	
  ushort uVar1;
  cXPerson__123_1079__vtable *pcVar2;
  PiecewisePt *pPVar3;
  int iVar4;
  PiecewisePt *pPVar5;
  int iVar6;
  MotiveCurve *pMVar7;
  TreeTableAd *pTVar8;
  MotiveCurve *pMVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
  fVar11 = 0.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
  pMVar9 = (this->field0_0x0).field0_0x0.fCurves;
                    /* end of inlined section */
  if (pMVar9 != pMVar9 + (this->field0_0x0).field0_0x0.fNumCurves) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      pTVar8 = ads + pMVar9->fMotive;
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
      uVar1 = pTVar8->fPersonalityAd;
                    /* end of inlined section */
      fVar12 = this->fMotives->Motive[pMVar9->fMotive];
      if (uVar1 == 0) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
        fVar10 = (float)((int)(short)pTVar8->fMin + (int)(short)pTVar8->fRange);
      }
      else {
                    /* end of inlined section */
        pcVar2 = this->fPerson->__vtable;
        iVar4 = (*(code *)pcVar2->GetRecordDuration)
                          ((int)&this->fPerson->_vb966 + (int)*(short *)&pcVar2->GetRecording,
                           sAdMap[(short)uVar1].persVar);
        if (sAdMap[(short)uVar1].inverted != 0) {
          iVar4 = 1000 - iVar4;
        }
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
        fVar10 = (float)(int)(short)pTVar8->fMin +
                 (float)(int)(short)pTVar8->fRange * (float)iVar4 * 0.001;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Piecewise.h */
      iVar4 = (pMVar9->field0_0x0).fNumPoints;
      fVar12 = fVar12 + fVar10 * 0.001;
      if (iVar4 == 0) {
        fVar12 = 0.0;
        pMVar7 = (this->field0_0x0).field0_0x0.fCurves;
      }
      else {
        fVar10 = 0.0;
        iVar6 = iVar4 + -1;
        pMVar7 = (this->field0_0x0).field0_0x0.fCurves;
        pPVar3 = (pMVar9->field0_0x0).fPoints;
        if (-1 < iVar6) {
          pPVar5 = pPVar3 + iVar6;
          fVar10 = fVar12 - pPVar5->fX;
          if (fVar10 <= 0.0) {
            iVar6 = iVar4 + -2;
            while ((pPVar5 = pPVar5 + -1, -1 < iVar6 &&
                   (fVar10 = fVar12 - pPVar5->fX, fVar10 <= 0.0))) {
              iVar6 = iVar6 + -1;
            }
          }
        }
        if (iVar6 == iVar4 + -1) {
          fVar12 = pPVar3[iVar6].fY;
        }
        else if (iVar6 == -1) {
          fVar12 = pPVar3->fY;
        }
        else {
          fVar12 = fVar10 * (pMVar9->field0_0x0).fReciprocals[iVar6] *
                   (pPVar3[iVar6 + 1].fY - pPVar3[iVar6].fY) + pPVar3[iVar6].fY;
        }
      }
      pMVar9 = pMVar9 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      fVar11 = fVar11 + fVar12;
    } while (pMVar9 != pMVar7 + (this->field0_0x0).field0_0x0.fNumCurves);
  }
                    /* end of inlined section */
  return fVar11 / (float)(this->field0_0x0).field0_0x0.fNumCurves;
}

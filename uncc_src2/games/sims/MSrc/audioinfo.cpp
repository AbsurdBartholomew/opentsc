// STATUS: NOT STARTED

#include "audioinfo.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb983;
	__vtbl_ptr_type *$vf921;
	
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
	cXObject *$vb921;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf930;
	
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

struct ERQTable<TVDefinition> {
	char *pName;
	TVDefinition *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<StereoDefinition> {
	char *pName;
	StereoDefinition *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

cAudioInfo cAudioInfo::sTheInfo = {
};

cAudioInfo* GetAudioInfo() {
  return &_10cAudioInfo_sTheInfo;
}

cAudioInfo* cAudioInfo::cAudioInfo() {
  return this;
}

int cAudioInfo::CurrentZoomLevel() {
  return 1;
}

int cAudioInfo::CurrentOrienention() {
  return 0;
}

int cAudioInfo::CurrentSimSpeed() {
  int iVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
  return iVar1;
}

int cAudioInfo::ViewerLevel() {
  return 1;
}

bool cAudioInfo::GetObjectPosition(Sint32 lInstId, cAudioWorldCoord &outCoord) {
	cXObject *obj;
	CTilePt pt;
	
  int iVar1;
  long lVar2;
  CTilePt pt;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar2 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,lInstId);
  if (lVar2 != 0) {
    iVar1 = *(int *)((int)lVar2 + 4);
    (**(code **)(iVar1 + 0x2dc))(&pt,(int)lVar2 + (int)*(short *)(iVar1 + 0x2d8));
    iVar1 = GetY__C7CTilePt(&pt);
    outCoord->mX = iVar1;
    iVar1 = GetX__C7CTilePt(&pt);
    outCoord->mY = iVar1;
    outCoord->mLevel = 1;
    ___7CTilePt(&pt,2);
  }
  return lVar2 != 0;
}

int cAudioInfo::GetObjectData(Sint32 lInstId, DataIdx idx) {
	cXObject *obj;
	cXPerson *person;
	cXObject *ptr;
	Room *r;
	
  short sVar1;
  RoomManager__vtable *pRVar2;
  RoomManager__vtable **ppRVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  TreeSim **ppTVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar6 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,lInstId);
                    /* inlined from SCID.h */
  pvVar4 = (void *)0x0;
  ppTVar8 = (TreeSim **)lVar6;
  if (lVar6 != 0) {
    pvVar4 = _dyncastimpl__7TreeSim4SCID(*ppTVar8,cXPersonID);
  }
                    /* end of inlined section */
  switch(idx) {
  case kAI_Gender:
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    lVar6 = (**(code **)(*(int *)((int)pvVar4 + 4) + 0x16c))
                      ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x168));
    if (lVar6 != 0) {
      return 2;
    }
    iVar5 = (**(code **)(*(int *)((int)pvVar4 + 4) + 0x17c))
                      ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x178));
    return iVar5;
  case kAI_Age:
    if (pvVar4 != (void *)0x0) {
      iVar5 = (**(code **)(*(int *)((int)pvVar4 + 4) + 0xe4))
                        ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0xe0),0x3a);
      return iVar5;
    }
    break;
  case kAI_CookingSkill:
    uVar7 = 10;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
LAB_001fb9b8:
      iVar5 = (**(code **)(iVar5 + 0xe4))((int)pvVar4 + (int)*(short *)(iVar5 + 0xe0),uVar7);
      return (int)(short)(iVar5 / 10);
    }
    break;
  case kAI_CleaningSkill:
    uVar7 = 9;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_Hour:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar5 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0);
    return iVar5;
  case kAI_CreativitySkill:
    uVar7 = 0xf;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_SocialSkill:
    uVar7 = 0xb;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_RepairSkill:
    uVar7 = 0xc;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_GardeningSkill:
    uVar7 = 0xd;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_MusicSkill:
    uVar7 = 0xe;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_LiteracySkill:
    uVar7 = 0x10;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_PhysicalSkill:
    uVar7 = 0x11;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_LogicSkill:
    uVar7 = 0x12;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_RoomSize:
    if (lVar6 == 0) {
      return 100;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pRVar2 = _5Globs_pRoomManager->__vtable;
    sVar1 = *(short *)&pRVar2->GetHouse;
    ppRVar3 = &_5Globs_pRoomManager->__vtable;
    uVar7 = (*(code *)ppTVar8[1][0x14].__vtable)
                      ((int)ppTVar8 + (int)*(short *)&ppTVar8[1][0x14].m_pEoRPerson);
    lVar6 = (*(code *)pRVar2->ClearRoomPartitions)((int)ppRVar3 + (int)sVar1,uVar7);
    if (lVar6 == 0) {
      return 100;
    }
    iVar5 = *(int *)lVar6;
    iVar5 = (**(code **)(iVar5 + 0x94))((int)(int *)lVar6 + (int)*(short *)(iVar5 + 0x90));
    return iVar5;
  case kAI_Mood:
    if (pvVar4 != (void *)0x0) {
      fVar9 = (float)(**(code **)(*(int *)((int)pvVar4 + 4) + 100))
                               ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x60),3);
      return (int)(fVar9 * 0.1);
    }
    break;
  case kAI_Nice:
    uVar7 = 2;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_Active:
    uVar7 = 3;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_Generous:
    uVar7 = 4;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_Playful:
    uVar7 = 5;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_Outgoing:
    uVar7 = 6;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
    break;
  case kAI_Neat:
    uVar7 = 7;
    if (pvVar4 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 4);
      goto LAB_001fb9b8;
    }
  }
  return 0;
}

int cAudioInfo::OutdoorTileRatio() {
	int outsideCount;
	int insideCount;
	CTilePt rowStart;
	float percentage;
	int row;
	CTilePt checkPt;
	int x;
	
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  CTilePt rowStart;
  CTilePt checkPt;
  
  iVar7 = 0;
  iVar8 = 0;
  __7CTilePtiii(&rowStart,0,0,1);
  uVar4 = 0;
  do {
    uVar6 = uVar4 + 1;
    __7CTilePtRC7CTilePt(&checkPt,&rowStart);
    iVar5 = 0x1f;
    do {
      lVar2 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                        ((int)&_5Globs_pFixedWorld->__vtable +
                         (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&checkPt);
      if (lVar2 != 0) {
        uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&checkPt);
        if ((uVar3 & 4) == 0) {
          iVar8 = iVar8 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
      }
      iVar5 = iVar5 + -1;
      iVar1 = GetX__C7CTilePt(&checkPt);
      SetX__7CTilePti(&checkPt,iVar1 + 1);
      iVar1 = GetY__C7CTilePt(&checkPt);
      SetY__7CTilePti(&checkPt,iVar1 + 1);
    } while (-1 < iVar5);
    iVar5 = GetX__C7CTilePt(&rowStart);
    SetX__7CTilePti(&rowStart,iVar5 + (uVar4 & 1));
    iVar5 = GetY__C7CTilePt(&rowStart);
    SetY__7CTilePti(&rowStart,iVar5 + (uVar6 & 1));
    ___7CTilePt(&checkPt,2);
    uVar4 = uVar6;
  } while ((int)uVar6 < 0x20);
  ___7CTilePt(&rowStart,2);
  return (int)(((float)iVar7 / (float)(iVar8 + iVar7)) * 100.0);
}

bool cAudioInfo::TestForTvAndStereoUse(bool &bStereoInUse, bool &bTVInUse) {
	int orig;
	int iNumPeople;
	static ERQTable<TVDefinition> *pTVTable = NULL;
	static ERQTable<StereoDefinition> *pStereoTable = NULL;
	int iNumTVs;
	int iNumStereos;
	int i;
	ERQuickdata &database;
	ERQuickdata *this;
	ERQTable<TVDefinition> *pTable;
	ERQuickdata *this;
	ERQTable<StereoDefinition> *pTable;
	cXPerson *person;
	cXObject *object;
	ObjDefinition *objDef;
	int j;
	int j;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ObjDefinition *pOVar5;
  ObjectModule *pOVar6;
  int iVar7;
  ERQuickdata *this_00;
  int iVar8;
  Interaction *this_01;
  cXObject__142_982 *pcVar9;
  ObjSelector *pOVar10;
  ObjectModule__vtable *pOVar11;
  ObjDefinition **ppOVar12;
  int iVar13;
  
  uVar1 = *(uint *)bTVInUse;
  iVar2 = *(int *)bStereoInUse;
  *(undefined4 *)bTVInUse = 0;
  *(undefined4 *)bStereoInUse = 0;
  pOVar6 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar7 = (*(code *)_5Globs_pObjectModule->__vtable->DisableBuyAndBuild)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->FillInObjectStats);
  if (pTVTable_1230 == (void *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    this_00 = (ERQuickdata *)
              (*(code *)_5Globs_pObjectFolder->__vtable[1].CalcPerformanceCost)
                        ((int)&_5Globs_pObjectFolder->__vtable +
                         (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetBaseMemoryCost);
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pTVTable_1230 = getTable__11ERQuickdataPCc(this_00,"TVDefinition");
    if (pTVTable_1230 == (void *)0x0) {
      pTVTable_1230 = (void *)0x0;
    }
    pStereoTable_1231 = getTable__11ERQuickdataPCc(this_00,"StereoDefinition");
    if (pStereoTable_1231 == (void *)0x0) {
      pStereoTable_1231 = (void *)0x0;
    }
  }
                    /* end of inlined section */
  iVar3 = *(int *)((int)pTVTable_1230 + 0xc);
  iVar4 = *(int *)((int)pStereoTable_1231 + 0xc);
  if (0 < iVar7) {
    pOVar11 = pOVar6->__vtable;
    iVar13 = 0;
    do {
      iVar8 = (*(code *)pOVar11->ComputeStats)
                        ((int)&pOVar6->__vtable + (int)*(short *)&pOVar11->ShowTutorialInfo,iVar13);
      this_01 = (Interaction *)
                (**(code **)(*(int *)(iVar8 + 4) + 0xb4))
                          (iVar8 + *(short *)(*(int *)(iVar8 + 4) + 0xb0));
      pcVar9 = GetIconObject__C11Interaction(this_01);
      if (pcVar9 != (cXObject__142_982 *)0x0) {
        pOVar10 = (ObjSelector *)
                  (*(code *)pcVar9->__vtable[1].SetLevel)
                            ((int)&pcVar9->_vb1019 + (int)*(short *)&pcVar9->__vtable[1].GetTreeID);
        pOVar10 = GetMasterSelector__11ObjSelector(pOVar10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
        pOVar5 = pOVar10->fHeader;
                    /* end of inlined section */
        if (*(int *)bTVInUse == 0) {
          iVar8 = 0;
          if (0 < iVar3) {
            ppOVar12 = *(ObjDefinition ***)((int)pTVTable_1230 + 4);
            while (*ppOVar12 != pOVar5) {
              iVar8 = iVar8 + 1;
              if (iVar3 <= iVar8) goto LAB_001fbd8c;
              ppOVar12 = (ObjDefinition **)(iVar8 * 4 + *(int *)((int)pTVTable_1230 + 4));
            }
            *(undefined4 *)bTVInUse = 1;
          }
LAB_001fbd8c:
          iVar8 = *(int *)bStereoInUse;
        }
        else {
          iVar8 = *(int *)bStereoInUse;
        }
        if ((iVar8 == 0) && (iVar8 = 0, 0 < iVar4)) {
          ppOVar12 = *(ObjDefinition ***)((int)pStereoTable_1231 + 4);
          while (*ppOVar12 != pOVar5) {
            iVar8 = iVar8 + 1;
            if (iVar4 <= iVar8) goto LAB_001fbdd8;
            ppOVar12 = (ObjDefinition **)(iVar8 * 4 + *(int *)((int)pStereoTable_1231 + 4));
          }
          *(undefined4 *)bStereoInUse = 1;
        }
      }
LAB_001fbdd8:
      if (iVar7 <= iVar13 + 1) break;
      pOVar11 = pOVar6->__vtable;
      iVar13 = iVar13 + 1;
    } while( true );
  }
  return (iVar2 << 1 | uVar1) == (*(int *)bStereoInUse << 1 | *(uint *)bTVInUse);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
    __10cAudioInfo(&_10cAudioInfo_sTheInfo);
  }
  return;
}

void global constructors keyed to cAudioInfo::sTheInfo() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

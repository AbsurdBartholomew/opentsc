// STATUS: NOT STARTED

#include "XRouting.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1946;
	__vtbl_ptr_type *$vf1077;
	
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
	/* vtable[83] */ virtual short unsigned int GetRoom();
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
struct cXMTObject : virtual cXObject {
	cXObject *$vb1077;
	__vtbl_ptr_type *$vf2109;
	
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

// warning: multiple differing types with the same name (name not equal)
struct cXPortal : virtual cXMTObject {
	cXMTObject *$vb2109;
	__vtbl_ptr_type *$vf1169;
	
	cXPortal& operator=();
	cXPortal();
protected:
	cXPortal();
	/* vtable[1] */ virtual cXPortal(cXPortal*, int, void);
	void setPortalImpl();
public:
	static bool InitPortalRoute(/* parameters unknown */);
	static cXPortal* FindBestPortal(/* parameters unknown */);
	static float EstimateDistance(/* parameters unknown */);
	static void BeginningPortalTree(/* parameters unknown */);
	static void FailedPortalTree(/* parameters unknown */);
	static void DirtyAllRoutes(/* parameters unknown */);
	static void DumpRouteScores(/* parameters unknown */);
	/* vtable[34] */ virtual void Place();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[1] */ virtual void Initialize();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[6] */ virtual void PostLoad(cXPortal*, int, void);
	/* vtable[1] */ virtual cXPortal* GetOtherSide();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[2] */ virtual WallStyle GetWallStyle();
	/* vtable[3] */ virtual int GetCustomWallStyleID();
	/* vtable[4] */ virtual cXPortalImpl* GetPortalImplementation();
	cXPortalImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPerson : virtual cXObject {
	cXObject *$vb1077;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1171;
	
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
	/* vtable[38] */ virtual short unsigned int GetCurrentRoom();
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

struct RouteBlockers {
	bool fChairOnly;
	bool fChairOccupied;
	bool fTileGoalOffWorld;
	bool fTileOccupied;
	bool fTileOccupiedByPerson;
	bool fWallInTheWay;
	bool fDifferentAlts;
	
	RouteBlockers& operator=();
	RouteBlockers();
	RouteBlockers();
	void ProcessTile();
	int ComputeRouteResult();
};

int localInflateRect(LPRECT lprc, int dx, int dy) {
  lprc->left = lprc->left - dx;
  lprc->right = lprc->right + dx;
  lprc->bottom = lprc->bottom + dy;
  lprc->top = lprc->top - dy;
  return 1;
}

int localIntersectRect(LPRECT lprc, RECT *lprcSrc1, RECT *lprcSrc2) {
	RECT *top;
	RECT *bottom;
	RECT *left;
	RECT *right;
	int result;
	LONG &a;
	LONG &b;
	LONG &a;
	LONG &b;
	
  tagRECT *ptVar1;
  tagRECT *ptVar2;
  tagRECT *ptVar3;
  
  ptVar2 = lprcSrc1;
  ptVar3 = lprcSrc2;
  if (lprcSrc1->top < lprcSrc2->top) {
    ptVar2 = lprcSrc2;
    ptVar3 = lprcSrc1;
  }
  ptVar1 = lprcSrc1;
  if (lprcSrc1->left < lprcSrc2->left) {
    ptVar1 = lprcSrc2;
    lprcSrc2 = lprcSrc1;
  }
  if (ptVar2->top < ptVar3->bottom) {
    if (ptVar1->left < lprcSrc2->right) {
      lprc->left = ptVar1->left;
                    /* end of inlined section */
                    /* end of inlined section */
      lprc->top = ptVar2->top;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (lprcSrc2->right <= ptVar1->right) {
        ptVar1 = lprcSrc2;
      }
                    /* end of inlined section */
      lprc->right = ptVar1->right;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (ptVar3->bottom <= ptVar2->bottom) {
        ptVar2 = ptVar3;
      }
                    /* end of inlined section */
      lprc->bottom = ptVar2->bottom;
      return 1;
    }
    lprc->left = 0;
  }
  else {
    lprc->left = 0;
  }
  lprc->bottom = 0;
  lprc->top = 0;
  lprc->right = 0;
  return 0;
}

int localIsRectEmpty(RECT *lprc) {
  if ((lprc->left < lprc->right) && (lprc->top < lprc->bottom)) {
    return 0;
  }
  return 1;
}

EvalTile XRoute::EvalTileForGoal(FTilePt &loc, Int facingDirection) {
	CTilePt pt;
	Int blockFlags;
	
  short sVar1;
  cXObject__109_1077__vtable *pcVar2;
  ushort uVar3;
  RoutingSlot *pRVar4;
  int inLevel;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  cXObject__21_1030__vtable *pcVar9;
  cXObject__109_1077 *pcVar10;
  CTilePt pt;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar6 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage);
  if (lVar6 != 0) {
    return kEvalTileOutOfBounds;
  }
  pRVar4 = GetRoutingSlot__6XRoute(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  if ((pRVar4->rsFlags & 0x800U) == 0) {
    pcVar2 = this->fStart->__vtable;
    inLevel = (*(code *)pcVar2[1].GetPlacementInfo)
                        ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar2[1].FindGoodLocation);
    __7CTilePtRC7FTilePti(&pt,loc,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar6 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&pt);
    pcVar2 = this->fStart->__vtable;
    lVar7 = (*(code *)pcVar2[1].ParseUIString)
                      ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar2[1].RunTree);
    if (lVar6 != lVar7) {
      ___7CTilePt(&pt,2);
      return kEvalTileRoom;
    }
    if ((facingDirection != -1) &&
       ((uVar5 = GetWallBlockFlagsAtTile__8cXObjectRC7CTilePti(&pt,facingDirection + 4U & 7),
        (uVar5 & 1) != 0 || (((facingDirection & 1U) != 0 && ((uVar5 & 0x82) != 0)))))) {
      ___7CTilePt(&pt,2);
      return kEvalTileWallInFront;
    }
    ___7CTilePt(&pt,2);
    pcVar10 = this->fStart;
  }
  else {
    pcVar10 = this->fStart;
  }
  gPlacementConflict = (cXObject__21_1030 *)0x0;
  pcVar2 = pcVar10->__vtable;
  sVar1 = *(short *)&pcVar2->GetTemp;
  uVar8 = (*(code *)pcVar2[1].GetPlacementInfo)
                    ((int)&pcVar10->_vb1946 + (int)*(short *)&pcVar2[1].FindGoodLocation);
  lVar6 = (*(code *)pcVar2->GetAttr)((int)&pcVar10->_vb1946 + (int)sVar1,loc,uVar8,0,0);
  if (lVar6 != 0) {
    return kEvalTileAllClear;
  }
  if (gPlacementError == 7) {
    return kEvalTileWallInFront;
  }
  if (gPlacementError != 0xb) {
    return kEvalTileOutOfBounds;
  }
  if (gPlacementConflict == (cXObject__21_1030 *)0x0) {
    return kEvalTileAllClear;
  }
  if (this->fIgnore == (cXPerson__109_1171 *)0x0) {
    pcVar9 = gPlacementConflict->__vtable;
  }
  else {
    if ((cXObject__109_1077 *)gPlacementConflict == this->fIgnore->_vb1077) {
      return kEvalTileAllClear;
    }
    pcVar9 = gPlacementConflict->__vtable;
  }
  uVar3 = (*(code *)pcVar9[1].UserCanPlace)
                    ((int)&gPlacementConflict->_vb899 + (int)*(short *)&pcVar9[1].IsPartOfMe);
  this->fBlockingObjectID = uVar3;
  lVar6 = (*(code *)gPlacementConflict->__vtable[1].Pickup)
                    ((int)&gPlacementConflict->_vb899 +
                     (int)*(short *)&gPlacementConflict->__vtable[1].Turn);
  if (lVar6 == 2) {
    return kEvalTilePersonObstacle;
  }
  return kEvalTileObstacle;
}

static void TransformToWorldCoords(FTilePt *baseLocation, float tileX, float tileY, Int direction, FTilePt *worldPoint) {
	Int tem;
	EMat4 tr;
	EVec3 point;
	FTilePt isoCoord;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int iVar4;
  float fVar5;
  EMat4 tr;
  EVec3 point;
  FTilePt isoCoord;
  float local_60;
  float local_5c;
  float local_58 [2];
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
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (direction == 2) {
    iVar4 = (int)tileX;
    tileX = -tileY;
    fVar5 = (float)iVar4;
    goto LAB_001fc398;
  }
  if (direction < 3) {
    fVar5 = tileY;
    if (direction == 0) goto LAB_001fc398;
  }
  else {
    if (direction == 4) {
      tileX = -tileX;
      fVar5 = -tileY;
      goto LAB_001fc398;
    }
    if (direction == 6) {
      fVar5 = (float)-(int)tileX;
      tileX = tileY;
      goto LAB_001fc398;
    }
  }
  ObjectRotationTf__Fi(&tr,direction);
  local_58[0] = 0.0;
  local_60 = tileX;
  local_5c = tileY;
  IsoFracsToWorld__FRCfN20(&point,&local_60,&local_5c,local_58);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar5 = point.field0_0x0.d[2] * tr.field0_0x0.d[2][1];
  isoCoord.y.whole =
       (int)(point.field0_0x0.d[0] * tr.field0_0x0.d[0][0] +
             point.field0_0x0.d[1] * tr.field0_0x0.d[1][0] +
             point.field0_0x0.d[2] * tr.field0_0x0.d[2][0] + tr.field0_0x0.d[3][0]);
  point.field0_0x0.d[2] =
       point.field0_0x0.d[0] * tr.field0_0x0.d[0][2] + point.field0_0x0.d[1] * tr.field0_0x0.d[1][2]
       + point.field0_0x0.d[2] * tr.field0_0x0.d[2][2] + tr.field0_0x0.d[3][2];
  isoCoord.x.whole =
       (int)(point.field0_0x0.d[0] * tr.field0_0x0.d[0][1] +
             point.field0_0x0.d[1] * tr.field0_0x0.d[1][1] + fVar5 + tr.field0_0x0.d[3][1]);
                    /* end of inlined section */
  point.field0_0x0._0_8_ = CONCAT44(isoCoord.x.whole,isoCoord.y.whole);
  puVar1 = (undefined *)((int)&point.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)point.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  WorldToIso__FRC5EVec3((EVec3 *)&isoCoord);
  tileX = (float)isoCoord.x.whole;
  fVar5 = (float)isoCoord.y.whole;
LAB_001fc398:
  iVar4 = (baseLocation->x).whole;
  (worldPoint->y).whole = (int)(fVar5 + (float)(baseLocation->y).whole);
  (worldPoint->x).whole = (int)(tileX + (float)iVar4);
  return;
}

XRoute* XRoute::XRoute() {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->field0_0x0).start = (RouteGoal *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->field0_0x0).finish = (RouteGoal *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).end_of_storage = (RouteGoal *)0x0;
  __11RoutingSlot(&this->fSlot);
  Construct__6XRouteP8cXObjectT1PC11RoutingSlot
            (this,(cXObject__109_1077 *)0x0,(cXObject__109_1077 *)0x0,(RoutingSlot *)0x0);
  return this;
}

XRoute* XRoute::XRoute(cXObject *start, cXObject *dest, RoutingSlot *slot) {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->field0_0x0).start = (RouteGoal *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->field0_0x0).finish = (RouteGoal *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).end_of_storage = (RouteGoal *)0x0;
  __11RoutingSlot(&this->fSlot);
  Construct__6XRouteP8cXObjectT1PC11RoutingSlot(this,start,dest,slot);
  return this;
}

void XRoute::Construct(cXObject *start, cXObject *dest, RoutingSlot *slot) {
	cXPerson *person;
	cXObject *ptr;
	
  float *pfVar1;
  undefined *puVar2;
  Slot__vtable **ppSVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  Slot__vtable *pSVar7;
  cXObject__109_1077 *pcVar8;
  ulong *puVar9;
  ushort uVar10;
  void *pvVar11;
  ulong in_v1;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  this->fStart = start;
  this->fDest = dest;
  this->fIgnore = (cXPerson__109_1171 *)0x0;
  this->fMoving = (cXPerson__109_1171 *)0x0;
  if (slot != (RoutingSlot *)0x0) {
    pSVar7 = (this->fSlot).field0_0x0.__vtable;
    puVar2 = (undefined *)((int)&(slot->field0_0x0).yoffset + 3);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)slot & 7;
    uVar12 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)slot - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&(slot->field0_0x0).nameIndex + 3);
    uVar5 = (uint)puVar2 & 7;
    pfVar1 = &(slot->field0_0x0).altOffset;
    uVar6 = (uint)pfVar1 & 7;
    uVar13 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             (long)(int)this & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)pfVar1 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)slot->multipliers + 3);
    uVar5 = (uint)puVar2 & 7;
    ppSVar3 = &(slot->field0_0x0).__vtable;
    uVar6 = (uint)ppSVar3 & 7;
    uVar14 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             (long)(int)start & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)ppSVar3 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)slot->multipliers + 0xb);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)(slot->multipliers + 1) & 7;
    uVar15 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             (long)(int)dest & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)(slot->multipliers + 1) - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&(this->fSlot).field0_0x0.yoffset + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this->fSlot & 7;
    puVar9 = (ulong *)((int)&this->fSlot - uVar5);
    *puVar9 = uVar12 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(this->fSlot).field0_0x0.nameIndex + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
    pfVar1 = &(this->fSlot).field0_0x0.altOffset;
    uVar5 = (uint)pfVar1 & 7;
    puVar9 = (ulong *)((int)pfVar1 - uVar5);
    *puVar9 = uVar13 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)(this->fSlot).multipliers + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar14 >> (7 - uVar5) * 8;
    ppSVar3 = &(this->fSlot).field0_0x0.__vtable;
    uVar5 = (uint)ppSVar3 & 7;
    puVar9 = (ulong *)((int)ppSVar3 - uVar5);
    *puVar9 = uVar14 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)(this->fSlot).multipliers + 0xb);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar15 >> (7 - uVar5) * 8;
    piVar4 = (this->fSlot).multipliers + 1;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar15 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&slot->snapTargetSlot + 3);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)&slot->rsFlags & 7;
    uVar12 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar12 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&slot->rsFlags - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&slot->maxProximity + 3);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)&slot->minProximity & 7;
    uVar13 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&slot->minProximity - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&slot->gradient + 3);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)&slot->optimalProximity & 7;
    uVar14 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&slot->optimalProximity - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&slot->resolution + 3);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)&slot->facing & 7;
    uVar15 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar15 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&slot->facing - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&(this->fSlot).snapTargetSlot + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
    piVar4 = &(this->fSlot).rsFlags;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar12 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(this->fSlot).maxProximity + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
    piVar4 = &(this->fSlot).minProximity;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar13 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(this->fSlot).gradient + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar14 >> (7 - uVar5) * 8;
    piVar4 = &(this->fSlot).optimalProximity;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar14 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(this->fSlot).resolution + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar15 >> (7 - uVar5) * 8;
    piVar4 = &(this->fSlot).facing;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar15 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    (this->fSlot).field0_0x0.__vtable = pSVar7;
  }
  pcVar8 = this->fStart;
  this->fMaxScore = -1;
  this->fCurGoal = -1;
  this->fTrapCount = 0;
  this->fWaitStartTicks = 0;
  if (pcVar8 != (cXObject__109_1077 *)0x0) {
    (*(code *)pcVar8->__vtable[1].UserCanPickup)
              ((int)&pcVar8->_vb1946 + (int)*(short *)&pcVar8->__vtable[1].UserPlace,
               &this->fLastLocation);
  }
                    /* inlined from SCID.h */
                    /* end of inlined section */
  *(undefined4 *)&this->fValid = 1;
  this->fCurPortal = (cXPortal__109_1169 *)0x0;
  *(undefined4 *)&this->fMoveSuccess = 0;
  this->fResult = 0;
  this->fBlockingObjectID = 0;
  *(undefined4 *)&this->fIgnoreAllPeople = 0;
                    /* inlined from SCID.h */
  this->fFootprintMask = 0;
  if (this->fStart == (cXObject__109_1077 *)0x0) {
    pvVar11 = (void *)0x0;
  }
  else {
    pvVar11 = _dyncastimpl__7TreeSim4SCID(this->fStart->_vb1946,cXPersonID);
  }
                    /* end of inlined section */
  if (pvVar11 != (void *)0x0) {
    uVar10 = (**(code **)(*(int *)((int)pvVar11 + 4) + 0xe4))
                       ((int)pvVar11 + (int)*(short *)(*(int *)((int)pvVar11 + 4) + 0xe0),0x48);
    this->fFootprintMask = uVar10;
  }
  this->fMaxGoalCount = 0x30;
  return;
}

bool XRoute::HasCurrentGoal() {
  return this->fCurGoal != -1;
}

int XRoute::CountGoals() {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  return (int)(this->field0_0x0).finish - (int)(this->field0_0x0).start >> 4;
}

RouteGoal& XRoute::GetNthGoal(int n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  return (this->field0_0x0).start + n;
}

Int XRoute::GetMaxScore() {
	RouteGoal *i;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
  RouteGoal *pRVar1;
  RouteGoal *pRVar2;
  int iVar3;
  
  if (this->fMaxScore == -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pRVar2 = (this->field0_0x0).start;
    pRVar1 = (this->field0_0x0).finish;
                    /* end of inlined section */
    this->fMaxScore = 0;
    if (pRVar2 != pRVar1) {
      iVar3 = pRVar2->score;
      while( true ) {
        if (this->fMaxScore < iVar3) {
          this->fMaxScore = iVar3;
        }
        if (pRVar2 + 1 == pRVar1) break;
        iVar3 = pRVar2[1].score;
        pRVar2 = pRVar2 + 1;
      }
    }
  }
  return this->fMaxScore;
}

void XRoute::SetCurrentGoal(Int goal) {
  this->fCurGoal = goal;
  return;
}

void XRoute::ClearCurrentGoal() {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
  uint uVar1;
  RouteGoal *pRVar2;
  
  uVar1 = this->fCurGoal;
  if (uVar1 != 0xffffffff) {
    if ((int)uVar1 < 0) {
      this->fMaxScore = -1;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      pRVar2 = (this->field0_0x0).start;
                    /* end of inlined section */
      if (uVar1 < (uint)((int)(this->field0_0x0).finish - (int)pRVar2 >> 4)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
        pRVar2[uVar1].score = 0;
      }
      this->fMaxScore = -1;
    }
    this->fCurGoal = -1;
  }
  return;
}

RoutingSlot* XRoute::GetRoutingSlot() {
  return &this->fSlot;
}

void XRoute::AddGoal(RouteGoal &goal) {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal &x;
	RouteGoal &value;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  RouteGoal *position;
  ulong *puVar4;
  ulong uVar5;
  ulong in_v1;
  ulong uVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  position = (this->field0_0x0).finish;
  uVar5 = (ulong)(int)(this->field0_0x0).end_of_storage;
  if ((long)(int)position == uVar5) {
    insert_aux__t6vector2Z9RouteGoalZt23__malloc_alloc_template1i0P9RouteGoalRC9RouteGoal
              (&this->field0_0x0,position,goal);
  }
  else {
    puVar1 = (undefined *)((int)&(goal->loc).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)goal & 7;
    uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)goal - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&goal->entryDirFlag + 1);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&goal->score & 7;
    uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&goal->score - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(position->loc).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
    uVar2 = (uint)position & 7;
    *(ulong *)((int)position - uVar2) =
         uVar5 << uVar2 * 8 |
         *(ulong *)((int)position - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    puVar1 = (undefined *)((int)&position->entryDirFlag + 1);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)&position->score & 7;
    puVar4 = (ulong *)((int)&position->score - uVar2);
    *puVar4 = uVar6 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->field0_0x0).finish = (this->field0_0x0).finish + 1;
  }
                    /* end of inlined section */
  if (this->fMaxScore < goal->score) {
    this->fMaxScore = goal->score;
  }
  return;
}

RouteGoal& XRoute::GetCurrentGoal() {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  return (this->field0_0x0).start + this->fCurGoal;
}

bool XRoute::IsPersonSittingOnChairGoal(cXPerson *person) {
	RouteGoal *i;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	cXObject *obj;
	
  ushort uVar1;
  cXObject__109_1077__vtable *pcVar2;
  int iVar3;
  RouteGoal *pRVar4;
  long lVar5;
  long lVar6;
  RouteGoal *pRVar7;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pRVar7 = (this->field0_0x0).start;
                    /* end of inlined section */
  if (pRVar7 != (this->field0_0x0).finish) {
    uVar1 = pRVar7->chairID;
    while( true ) {
      if (uVar1 == 0) {
        pRVar4 = (this->field0_0x0).finish;
      }
      else {
        pcVar2 = this->fDest->__vtable;
        lVar5 = (*(code *)pcVar2[1].GetLightingContribution)
                          ((int)&this->fDest->_vb1946 + (int)*(short *)&pcVar2[1].CanContributeLight
                          );
        if (lVar5 == 0) {
          pRVar4 = (this->field0_0x0).finish;
        }
        else {
          iVar3 = *(int *)((int)lVar5 + 4);
          lVar6 = (**(code **)(iVar3 + 0x3ec))((int)lVar5 + (int)*(short *)(iVar3 + 1000));
          if (lVar6 == 0) {
            pRVar4 = (this->field0_0x0).finish;
          }
          else {
            pcVar2 = person->_vb1077->__vtable;
            lVar6 = (*(code *)pcVar2[1].IsRenderingRoot)
                              ((int)&person->_vb1077->_vb1946 +
                               (int)*(short *)&pcVar2[1].GetRenderLayer);
            if (lVar6 == lVar5) {
              return true;
            }
            pRVar4 = (this->field0_0x0).finish;
          }
        }
      }
                    /* end of inlined section */
      if (pRVar7 + 1 == pRVar4) break;
      uVar1 = pRVar7[1].chairID;
      pRVar7 = pRVar7 + 1;
    }
  }
  return false;
}

bool XRoute::ShouldIgnore(cXObject *obj) {
	cXPerson *pers;
	cXObject *ptr;
	
  short sVar1;
  cXObject__109_1077__vtable *pcVar2;
  cXObject__109_1077 *pcVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  cXObject__109_1077__vtable *pcVar9;
  float fVar10;
  
  lVar6 = (*(code *)obj->__vtable[1].IsRenderingRoot)
                    ((int)&obj->_vb1946 + (int)*(short *)&obj->__vtable[1].GetRenderLayer);
  bVar4 = true;
  if (lVar6 == 0) {
    lVar6 = (*(code *)obj->__vtable->ReconType)
                      ((int)&obj->_vb1946 + (int)*(short *)&obj->__vtable->ReconStream,10);
    lVar7 = (*(code *)obj->__vtable[1].GetBuildModeType)
                      ((int)&obj->_vb1946 + (int)*(short *)&obj->__vtable[1].CanChooseAutonomously);
    if (lVar7 == 0) {
      pcVar9 = obj->__vtable;
    }
    else {
      if (lVar6 == 0) {
        return true;
      }
      pcVar9 = obj->__vtable;
    }
    lVar6 = (*(code *)pcVar9[1].Pickup)((int)&obj->_vb1946 + (int)*(short *)&pcVar9[1].Turn);
    if (lVar6 == 2) {
      bVar4 = true;
      if (*(int *)&this->fIgnoreAllPeople == 0) {
                    /* inlined from SCID.h */
        pvVar5 = (void *)0x0;
        if (obj != (cXObject__109_1077 *)0x0) {
          pvVar5 = _dyncastimpl__7TreeSim4SCID(obj->_vb1946,cXPersonID);
        }
                    /* end of inlined section */
        bVar4 = false;
        if (pvVar5 != (void *)0x0) {
          if (this->fIgnore == (cXPerson__109_1171 *)0x0) {
            if (obj == (cXObject__109_1077 *)0x0) {
              return true;
            }
            pcVar3 = this->fStart;
          }
          else {
            if (obj == this->fIgnore->_vb1077) {
              return true;
            }
            pcVar3 = this->fStart;
          }
          fVar10 = (float)(*(code *)pcVar3->__vtable->SetMiscFlag)
                                    ((int)&pcVar3->_vb1946 +
                                     (int)*(short *)&pcVar3->__vtable->GetHilite,obj);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
                    /* end of inlined section */
          bVar4 = true;
          if (fVar10 <= 3.0) {
            bVar4 = false;
          }
        }
      }
    }
    else {
      pcVar9 = obj->__vtable;
      pcVar2 = this->fStart->__vtable;
      sVar1 = *(short *)&pcVar9->SetObjectProbe;
      uVar8 = (*(code *)pcVar2[1].UserCanPlace)
                        ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar2[1].IsPartOfMe);
      lVar6 = (*(code *)pcVar9->GetInteractionLeader)((int)&obj->_vb1946 + (int)sVar1,5,uVar8,0);
      bVar4 = lVar6 != 0;
    }
  }
  return bVar4;
}

void XRoute::DoStream(ReconBuffer *r, SInt32 version) {
  return;
}

void XRoute::ResetGoals() {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	
  RouteGoal *pRVar1;
  RouteGoal *pRVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  pRVar1 = (this->field0_0x0).start;
  for (pRVar2 = pRVar1; pRVar2 != (this->field0_0x0).finish; pRVar2 = pRVar2 + 1) {
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  this->fMaxScore = -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (this->field0_0x0).finish = pRVar1;
                    /* end of inlined section */
  this->fCurGoal = -1;
  return;
}

void BuildRoomPartition(short unsigned int inRoom, Partition *outPartition, bool enableTerrainPenalty) {
	Room *rm;
	int level;
	bool doFloors;
	Int x;
	Int y;
	Int l;
	Int r;
	Int t;
	Int b;
	bool done;
	cFixedWorld *world;
	Int gridMin;
	Int gridLim;
	Int roomStop;
	PenaltyRect *i;
	Int cnt;
	CTilePt pt;
	CTilePt pt;
	PenaltyRect left;
	PenaltyRect top;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	int x;
	int y;
	int level;
	short unsigned int room;
	bool roomOK;
	short unsigned int tileRoom;
	CTilePt pt;
	ObjectIterator i;
	CTilePt tmpTile;
	cXPortal *portal;
	PenaltyRect rect;
	Int sectNum;
	Int right;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	Int x2;
	Int right;
	Int y2;
	bool rowclear;
	int x;
	int y;
	int level;
	short unsigned int room;
	bool roomOK;
	short unsigned int tileRoom;
	CTilePt pt;
	ObjectIterator i;
	CTilePt tmpTile;
	cXPortal *portal;
	int x;
	int y;
	int level;
	short unsigned int room;
	bool roomOK;
	short unsigned int tileRoom;
	CTilePt pt;
	ObjectIterator i;
	CTilePt tmpTile;
	cXPortal *portal;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	CTilePt pt;
	TileWalls tw;
	bool canWalkThrough;
	int x;
	int level;
	short unsigned int room;
	bool roomOK;
	short unsigned int tileRoom;
	CTilePt pt;
	ObjectIterator i;
	CTilePt tmpTile;
	cXPortal *portal;
	PenaltyRect rect;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	bool canWalkThrough;
	int y;
	int level;
	short unsigned int room;
	bool roomOK;
	short unsigned int tileRoom;
	CTilePt pt;
	ObjectIterator i;
	CTilePt tmpTile;
	cXPortal *portal;
	PenaltyRect rect;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect rect1;
	PenaltyRect rect2;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	CTilePt pt;
	PenaltyRect testRect;
	Int sectNum;
	PenaltyRect rect;
	Int right;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	Int x2;
	Int y2;
	bool rowclear;
	int x;
	int y;
	int level;
	short unsigned int room;
	bool roomOK;
	short unsigned int tileRoom;
	CTilePt pt;
	ObjectIterator i;
	CTilePt tmpTile;
	cXPortal *portal;
	int x;
	int y;
	int level;
	short unsigned int room;
	bool roomOK;
	short unsigned int tileRoom;
	CTilePt pt;
	ObjectIterator i;
	CTilePt tmpTile;
	cXPortal *portal;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  short sVar2;
  cFixedWorld__vtable *pcVar3;
  int iVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  cFixedWorld *pcVar8;
  TileWalls *this;
  bool bVar9;
  RoomManager *pRVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  WallStyle WVar15;
  void *pvVar16;
  int **ppiVar17;
  long lVar18;
  int iVar19;
  int inLevel;
  int iVar20;
  int iVar21;
  PenaltyRect *pPVar22;
  int iVar23;
  undefined local_1c0 [16];
  PenaltyRect left;
  PenaltyRect top;
  TreeSim **local_17c;
  CTilePt aCStack_170 [5];
  CTilePt pt;
  CTilePt tmpTile;
  cXObject__15_2008 *local_14c;
  PenaltyRect rect1;
  ObjectIterator OStack_120;
  PenaltyRect rect2;
  short room;
  bool doFloors;
  int y;
  int l;
  int r;
  int t;
  int b;
  cFixedWorld *world;
  int roomStop;
  bool rowclear;
  TileWalls *local_b8;
  PenaltyRect *local_b4;
  int local_ac;
  int local_a8;
  
  _room = (int)inRoom & 0xffff;
  _doFloors = 0;
  pRVar10 = GetRoomManager__11RoomManager();
  piVar11 = (int *)(*(code *)pRVar10->__vtable->ClearRoomPartitions)
                             ((int)&pRVar10->__vtable + (int)*(short *)&pRVar10->__vtable->GetHouse,
                              _room);
  lVar18 = (**(code **)(*piVar11 + 0xac))((int)piVar11 + (int)*(short *)(*piVar11 + 0xa8));
  inLevel = (int)lVar18;
  if ((enableTerrainPenalty) && (lVar18 == 1)) {
    lVar18 = (**(code **)(*piVar11 + 100))((int)piVar11 + (int)*(short *)(*piVar11 + 0x60));
    _doFloors = 0;
    if (lVar18 != 0) {
      _doFloors = inLevel;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  pcVar8 = _5Globs_pFixedWorld;
                    /* end of inlined section */
  iVar23 = 1;
  l = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  world = _5Globs_pFixedWorld;
                    /* end of inlined section */
  bVar9 = false;
  r = 0;
  t = 0;
  b = 0;
  y = 1;
  iVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  local_b8 = (TileWalls *)&left;
  local_b4 = &top;
  iVar20 = iVar12 + -1;
  do {
    __7CTilePtiii((CTilePt *)local_1c0,iVar23,y,inLevel);
    uVar13 = (*(code *)pcVar8->__vtable[1].OutOfBounds)
                       ((int)&pcVar8->__vtable + (int)*(short *)&pcVar8->__vtable[1].GetMaxSize,
                        local_1c0);
    if (uVar13 == _room) {
      bVar9 = true;
      b = y;
      t = y;
      l = iVar23;
      r = iVar23;
    }
    iVar23 = iVar23 + 1;
    if (iVar20 <= iVar23) {
      iVar23 = 1;
      y = y + 1;
      if (iVar20 <= y) {
        bVar9 = true;
      }
    }
    ___7CTilePt((CTilePt *)local_1c0,2);
  } while (!bVar9);
  bVar9 = false;
  do {
    __7CTilePtiii((CTilePt *)local_1c0,iVar23,y,inLevel);
    uVar13 = (*(code *)pcVar8->__vtable[1].OutOfBounds)
                       ((int)&pcVar8->__vtable + (int)*(short *)&pcVar8->__vtable[1].GetMaxSize,
                        local_1c0);
    iVar14 = b;
    if (uVar13 == _room) {
      if (iVar23 < l) {
        l = iVar23;
      }
      if (r < iVar23) {
        r = iVar23;
      }
      iVar14 = y;
      if (t <= y) {
        iVar14 = t;
      }
      t = iVar14;
      iVar14 = y;
      if (y <= b) {
        iVar14 = b;
      }
    }
    b = iVar14;
    iVar23 = iVar23 + 1;
    if (iVar20 <= iVar23) {
      iVar23 = 1;
      y = y + 1;
      if (iVar20 <= y) {
        bVar9 = true;
      }
    }
    ___7CTilePt((CTilePt *)local_1c0,2);
  } while (!bVar9);
  y = t - (uint)(1 < t);
  b = b + (uint)(b < iVar12 + -2);
  iVar20 = l - (uint)(1 < l);
  r = r + (uint)(r < iVar12 + -2);
  __11PenaltyRectiiiii((PenaltyRect *)local_b8,iVar20 + -1,y + -1,iVar20,b + 2,0x7fffffff);
  left.bounds.left = left.bounds.left << 4;
  left.bounds.top = left.bounds.top << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pPVar22 = outPartition->finish;
                    /* end of inlined section */
  left.bounds.right = left.bounds.right << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  left.bounds.bottom = left.bounds.bottom << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  if (pPVar22 == outPartition->end_of_storage) {
    insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
              (outPartition,pPVar22,(PenaltyRect *)local_b8);
  }
  else {
    puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(left.bounds.top,left.bounds.left) >> (7 - uVar13) * 8;
    uVar13 = (uint)pPVar22 & 7;
    *(ulong *)((int)pPVar22 - uVar13) =
         CONCAT44(left.bounds.top,left.bounds.left) << uVar13 * 8 |
         *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(left.bounds.bottom,left.bounds.right) >> (7 - uVar13) * 8;
    piVar11 = &(pPVar22->bounds).right;
    uVar13 = (uint)piVar11 & 7;
    puVar5 = (ulong *)((int)piVar11 - uVar13);
    *puVar5 = CONCAT44(left.bounds.bottom,left.bounds.right) << uVar13 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    pPVar22->penalty = left.penalty;
    outPartition->finish = outPartition->finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
  OffsetRect__FP7tagRECTss
            ((tagRECT *)local_b8,(ushort)((uint)(((r - iVar20) + 2) * 0x100000) >> 0x10),0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pPVar22 = outPartition->finish;
  if (pPVar22 == outPartition->end_of_storage) {
    insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
              (outPartition,pPVar22,(PenaltyRect *)local_b8);
  }
  else {
    puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(left.bounds.top,left.bounds.left) >> (7 - uVar13) * 8;
    uVar13 = (uint)pPVar22 & 7;
    *(ulong *)((int)pPVar22 - uVar13) =
         CONCAT44(left.bounds.top,left.bounds.left) << uVar13 * 8 |
         *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(left.bounds.bottom,left.bounds.right) >> (7 - uVar13) * 8;
    piVar11 = &(pPVar22->bounds).right;
    uVar13 = (uint)piVar11 & 7;
    puVar5 = (ulong *)((int)piVar11 - uVar13);
    *puVar5 = CONCAT44(left.bounds.bottom,left.bounds.right) << uVar13 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    pPVar22->penalty = left.penalty;
    outPartition->finish = outPartition->finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
  __11PenaltyRectiiiii(local_b4,iVar20 + -1,y + -1,r + 2,y,0x7fffffff);
  top.bounds.left = top.bounds.left << 4;
  top.bounds.top = top.bounds.top << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pPVar22 = outPartition->finish;
                    /* end of inlined section */
  top.bounds.right = top.bounds.right << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  top.bounds.bottom = top.bounds.bottom << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  if (pPVar22 == outPartition->end_of_storage) {
    insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
              (outPartition,pPVar22,local_b4);
  }
  else {
    puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(top.bounds.top,top.bounds.left) >> (7 - uVar13) * 8;
    uVar13 = (uint)pPVar22 & 7;
    *(ulong *)((int)pPVar22 - uVar13) =
         CONCAT44(top.bounds.top,top.bounds.left) << uVar13 * 8 |
         *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(top.bounds.bottom,top.bounds.right) >> (7 - uVar13) * 8;
    piVar11 = &(pPVar22->bounds).right;
    uVar13 = (uint)piVar11 & 7;
    puVar5 = (ulong *)((int)piVar11 - uVar13);
    *puVar5 = CONCAT44(top.bounds.bottom,top.bounds.right) << uVar13 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    pPVar22->penalty = top.penalty;
    outPartition->finish = outPartition->finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
  OffsetRect__FP7tagRECTss(&local_b4->bounds,0,(ushort)((uint)(((b - y) + 2) * 0x100000) >> 0x10));
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pPVar22 = outPartition->finish;
  if (pPVar22 == outPartition->end_of_storage) {
    insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
              (outPartition,pPVar22,local_b4);
  }
  else {
    puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(top.bounds.top,top.bounds.left) >> (7 - uVar13) * 8;
    uVar13 = (uint)pPVar22 & 7;
    *(ulong *)((int)pPVar22 - uVar13) =
         CONCAT44(top.bounds.top,top.bounds.left) << uVar13 * 8 |
         *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(top.bounds.bottom,top.bounds.right) >> (7 - uVar13) * 8;
    piVar11 = &(pPVar22->bounds).right;
    uVar13 = (uint)piVar11 & 7;
    puVar5 = (ulong *)((int)piVar11 - uVar13);
    *puVar5 = CONCAT44(top.bounds.bottom,top.bounds.right) << uVar13 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    pPVar22->penalty = top.penalty;
    outPartition->finish = outPartition->finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
  local_a8 = y + 1;
                    /* end of inlined section */
  l = iVar20;
  t = y;
LAB_001fcf68:
  this = local_b8;
  pcVar8 = _5Globs_pFixedWorld;
  bVar9 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  __7CTilePtiii(aCStack_170,iVar20,y,inLevel);
  pcVar3 = pcVar8->__vtable;
  uVar13 = (*(code *)pcVar3[1].OutOfBounds)
                     ((int)&pcVar8->__vtable + (int)*(short *)&pcVar3[1].GetMaxSize,aCStack_170);
  if ((uVar13 == _room) || (uVar13 == 0xfffb)) {
    bVar9 = true;
  }
  else {
    __7CTilePtiii(&pt,iVar20,y,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
              ((ObjectIterator *)&tmpTile,&pt,kAll);
                    /* end of inlined section */
    while (local_14c != (cXObject__15_2008 *)0x0) {
      lVar18 = (*(code *)local_14c->__vtable[1].Pickup)
                         ((int)&local_14c->_vb3534 + (int)*(short *)&local_14c->__vtable[1].Turn);
                    /* end of inlined section */
      if ((lVar18 == 8) &&
         (lVar18 = (*(code *)local_14c->__vtable->GetSelFile)
                             ((int)&local_14c->_vb3534 +
                              (int)*(short *)&local_14c->__vtable->GetBehavior,0xf), lVar18 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
        pvVar16 = (void *)0x0;
        if (local_14c != (cXObject__15_2008 *)0x0) {
          pvVar16 = _dyncastimpl__7TreeSim4SCID(local_14c->_vb3534,cXPortalID);
        }
                    /* end of inlined section */
        if (pvVar16 != (void *)0x0) {
          ppiVar17 = (int **)(**(code **)(*(int *)((int)pvVar16 + 4) + 0xc))
                                       ((int)pvVar16 +
                                        (int)*(short *)(*(int *)((int)pvVar16 + 4) + 8));
          iVar12 = *(int *)(**ppiVar17 + 4);
          uVar13 = (**(code **)(iVar12 + 0x29c))(**ppiVar17 + (int)*(short *)(iVar12 + 0x298));
          if (uVar13 == _room) {
            bVar9 = true;
          }
        }
      }
      __pp__14ObjectIterator((ObjectIterator *)&tmpTile);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    }
    ___7CTilePt(&pt,2);
  }
  iVar12 = iVar20 + 1;
  ___7CTilePt(aCStack_170,2);
  iVar23 = iVar20;
  if (bVar9) {
    __7CTilePtiii((CTilePt *)local_1c0,iVar20,y,inLevel);
    (*(code *)world->__vtable->ComputeArchValue)
              (local_b8,(int)&world->__vtable + (int)*(short *)&world->__vtable->ComputeRooms,
               local_1c0);
    bVar9 = HasWall__C9TileWalls16TileWallsSegment(local_b8,kBottomLeft);
    if (bVar9) {
      WVar15 = GetStyle__C9TileWalls16TileWallsSegment(local_b8,kBottomLeft);
      pcVar8 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
      if ((((WVar15 == kDoorStyle) || (WVar15 == kDoorLeftStyle)) || (WVar15 == kDoorRightStyle)) ||
         ((WVar15 == kFrenchDoorStyle || (bVar9 = false, WVar15 == kCustomDoorStyle)))) {
        bVar9 = true;
      }
      bVar6 = true;
                    /* end of inlined section */
      if (!bVar9) {
                    /* end of inlined section */
        bVar6 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        __7CTilePtiii((CTilePt *)&rect1,iVar20,local_a8,inLevel);
        pcVar3 = pcVar8->__vtable;
        uVar13 = (*(code *)pcVar3[1].OutOfBounds)
                           ((int)&pcVar8->__vtable + (int)*(short *)&pcVar3[1].GetMaxSize,&rect1);
        if ((uVar13 == _room) || (uVar13 == 0xfffb)) {
          bVar6 = true;
        }
        else {
          __7CTilePtiii((CTilePt *)&rect1.penalty,iVar20,local_a8,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
                    (&OStack_120,(CTilePt *)&rect1.penalty,kAll);
                    /* end of inlined section */
          while (OStack_120.fCurrent != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
            lVar18 = (*(code *)(OStack_120.fCurrent)->__vtable[1].Pickup)
                               ((int)&(OStack_120.fCurrent)->_vb3534 +
                                (int)*(short *)&(OStack_120.fCurrent)->__vtable[1].Turn);
                    /* end of inlined section */
            if ((lVar18 == 8) &&
               (lVar18 = (*(code *)(OStack_120.fCurrent)->__vtable->GetSelFile)
                                   ((int)&(OStack_120.fCurrent)->_vb3534 +
                                    (int)*(short *)&(OStack_120.fCurrent)->__vtable->GetBehavior,0xf
                                   ), lVar18 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
              pvVar16 = (void *)0x0;
              if (OStack_120.fCurrent != (cXObject__15_2008 *)0x0) {
                pvVar16 = _dyncastimpl__7TreeSim4SCID((OStack_120.fCurrent)->_vb3534,cXPortalID);
              }
                    /* end of inlined section */
              if (pvVar16 != (void *)0x0) {
                ppiVar17 = (int **)(**(code **)(*(int *)((int)pvVar16 + 4) + 0xc))
                                             ((int)pvVar16 +
                                              (int)*(short *)(*(int *)((int)pvVar16 + 4) + 8));
                iVar14 = *(int *)(**ppiVar17 + 4);
                uVar13 = (**(code **)(iVar14 + 0x29c))(**ppiVar17 + (int)*(short *)(iVar14 + 0x298))
                ;
                if (uVar13 == _room) {
                  bVar6 = true;
                }
              }
            }
            __pp__14ObjectIterator(&OStack_120);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
          }
          ___7CTilePt((CTilePt *)&rect1.penalty,2);
        }
        ___7CTilePt((CTilePt *)&rect1,2);
        bVar6 = !bVar6;
      }
      if (!bVar6) {
        __11PenaltyRectiiiii(&rect1,iVar20,local_a8,iVar12,local_a8,0x7fffffff);
        rect1.bounds.left = rect1.bounds.left << 4;
        rect1.bounds.top = rect1.bounds.top << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        pPVar22 = outPartition->finish;
                    /* end of inlined section */
        rect1.bounds.right = rect1.bounds.right << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
        rect1.bounds.bottom = rect1.bounds.bottom << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        if (pPVar22 == outPartition->end_of_storage) {
          insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                    (outPartition,pPVar22,&rect1);
        }
        else {
          puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
          uVar13 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar13);
          *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
                    CONCAT44(rect1.bounds.top,rect1.bounds.left) >> (7 - uVar13) * 8;
          uVar13 = (uint)pPVar22 & 7;
          *(ulong *)((int)pPVar22 - uVar13) =
               CONCAT44(rect1.bounds.top,rect1.bounds.left) << uVar13 * 8 |
               *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
          puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
          uVar13 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar13);
          *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
                    CONCAT44(rect1.bounds.bottom,rect1.bounds.right) >> (7 - uVar13) * 8;
          piVar11 = &(pPVar22->bounds).right;
          uVar13 = (uint)piVar11 & 7;
          puVar5 = (ulong *)((int)piVar11 - uVar13);
          *puVar5 = CONCAT44(rect1.bounds.bottom,rect1.bounds.right) << uVar13 * 8 |
                    *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
          pPVar22->penalty = rect1.penalty;
          outPartition->finish = outPartition->finish + 1;
        }
                    /* end of inlined section */
        StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
      }
    }
    bVar9 = HasWall__C9TileWalls16TileWallsSegment(local_b8,kBottomRight);
    if (bVar9) {
      WVar15 = GetStyle__C9TileWalls16TileWallsSegment(local_b8,kBottomRight);
      pcVar8 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
      if ((((WVar15 == kDoorStyle) || (WVar15 == kDoorLeftStyle)) || (WVar15 == kDoorRightStyle)) ||
         ((WVar15 == kFrenchDoorStyle || (bVar9 = false, WVar15 == kCustomDoorStyle)))) {
        bVar9 = true;
      }
      bVar6 = true;
                    /* end of inlined section */
      if (!bVar9) {
                    /* end of inlined section */
        bVar6 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        __7CTilePtiii((CTilePt *)&rect1,iVar12,y,inLevel);
        pcVar3 = pcVar8->__vtable;
        uVar13 = (*(code *)pcVar3[1].OutOfBounds)
                           ((int)&pcVar8->__vtable + (int)*(short *)&pcVar3[1].GetMaxSize,&rect1);
        if ((uVar13 == _room) || (uVar13 == 0xfffb)) {
          bVar6 = true;
        }
        else {
          __7CTilePtiii((CTilePt *)&rect1.penalty,iVar12,y,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
                    (&OStack_120,(CTilePt *)&rect1.penalty,kAll);
                    /* end of inlined section */
          while (OStack_120.fCurrent != (cXObject__15_2008 *)0x0) {
            lVar18 = (*(code *)(OStack_120.fCurrent)->__vtable[1].Pickup)
                               ((int)&(OStack_120.fCurrent)->_vb3534 +
                                (int)*(short *)&(OStack_120.fCurrent)->__vtable[1].Turn);
                    /* end of inlined section */
            if ((lVar18 == 8) &&
               (lVar18 = (*(code *)(OStack_120.fCurrent)->__vtable->GetSelFile)
                                   ((int)&(OStack_120.fCurrent)->_vb3534 +
                                    (int)*(short *)&(OStack_120.fCurrent)->__vtable->GetBehavior,0xf
                                   ), lVar18 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
              pvVar16 = (void *)0x0;
              if (OStack_120.fCurrent != (cXObject__15_2008 *)0x0) {
                pvVar16 = _dyncastimpl__7TreeSim4SCID((OStack_120.fCurrent)->_vb3534,cXPortalID);
              }
                    /* end of inlined section */
              if (pvVar16 != (void *)0x0) {
                ppiVar17 = (int **)(**(code **)(*(int *)((int)pvVar16 + 4) + 0xc))
                                             ((int)pvVar16 +
                                              (int)*(short *)(*(int *)((int)pvVar16 + 4) + 8));
                iVar14 = *(int *)(**ppiVar17 + 4);
                uVar13 = (**(code **)(iVar14 + 0x29c))(**ppiVar17 + (int)*(short *)(iVar14 + 0x298))
                ;
                if (uVar13 == _room) {
                  bVar6 = true;
                }
              }
            }
            __pp__14ObjectIterator(&OStack_120);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
          }
          ___7CTilePt((CTilePt *)&rect1.penalty,2);
        }
        ___7CTilePt((CTilePt *)&rect1,2);
        bVar6 = !bVar6;
      }
      if (!bVar6) {
        __11PenaltyRectiiiii(&rect1,iVar12,y,iVar12,local_a8,0x7fffffff);
        rect1.bounds.left = rect1.bounds.left << 4;
        rect1.bounds.top = rect1.bounds.top << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        pPVar22 = outPartition->finish;
                    /* end of inlined section */
        rect1.bounds.right = rect1.bounds.right << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
        rect1.bounds.bottom = rect1.bounds.bottom << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        if (pPVar22 == outPartition->end_of_storage) {
          insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                    (outPartition,pPVar22,&rect1);
        }
        else {
          puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
          uVar13 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar13);
          *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
                    CONCAT44(rect1.bounds.top,rect1.bounds.left) >> (7 - uVar13) * 8;
          uVar13 = (uint)pPVar22 & 7;
          *(ulong *)((int)pPVar22 - uVar13) =
               CONCAT44(rect1.bounds.top,rect1.bounds.left) << uVar13 * 8 |
               *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
          puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
          uVar13 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar13);
          *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
                    CONCAT44(rect1.bounds.bottom,rect1.bounds.right) >> (7 - uVar13) * 8;
          piVar11 = &(pPVar22->bounds).right;
          uVar13 = (uint)piVar11 & 7;
          puVar5 = (ulong *)((int)piVar11 - uVar13);
          *puVar5 = CONCAT44(rect1.bounds.bottom,rect1.bounds.right) << uVar13 * 8 |
                    *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
          pPVar22->penalty = rect1.penalty;
          outPartition->finish = outPartition->finish + 1;
        }
                    /* end of inlined section */
        StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
      }
    }
    bVar9 = HasDiagonal__C9TileWalls(local_b8);
    if (bVar9) {
      __11PenaltyRectiiiii(&rect1,iVar20,y,iVar20 + 1,local_a8,0x7fffffff);
      rect1.bounds.left = rect1.bounds.left << 4;
      rect1.bounds.top = rect1.bounds.top << 4;
      rect1.bounds.right = rect1.bounds.right << 4;
      rect1.bounds.bottom = rect1.bounds.bottom << 4;
      rect2.bounds._0_8_ = CONCAT44(rect1.bounds.top,rect1.bounds.left);
      rect2.bounds._8_8_ = CONCAT44(rect1.bounds.bottom,rect1.bounds.right);
      puVar1 = (undefined *)((int)&rect2.bounds.top + 3);
      uVar13 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar13);
      *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 | rect2.bounds._0_8_ >> (7 - uVar13) * 8;
      puVar1 = (undefined *)((int)&rect2.bounds.bottom + 3);
      uVar13 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar13);
      *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 | rect2.bounds._8_8_ >> (7 - uVar13) * 8;
      rect2.penalty = rect1.penalty;
      bVar9 = HasWall__C9TileWalls16TileWallsSegment(this,kHorizDiag);
      if (bVar9) {
        rect1.bounds.top = rect1.bounds.top + 8;
        rect2.bounds._0_8_ =
             rect2.bounds._0_8_ & 0xffffffff00000000 | (ulong)(rect2.bounds.left + 8);
        rect2.bounds._8_8_ =
             rect2.bounds._8_8_ & 0xffffffff | (ulong)(rect2.bounds.bottom - 8) << 0x20;
      }
      else {
        rect1.bounds.bottom = rect1.bounds.bottom + -8;
        rect2.bounds._0_8_ = CONCAT44(rect2.bounds.top + 8,rect2.bounds.left + 8);
      }
      rect1.bounds.right = rect1.bounds.right + -8;
      localInflateRect__FP7tagRECTii(&rect1.bounds,-4,-4);
      localInflateRect__FP7tagRECTii(&rect2.bounds,-4,-4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      pPVar22 = outPartition->finish;
      if (pPVar22 == outPartition->end_of_storage) {
        insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                  (outPartition,pPVar22,&rect1);
      }
      else {
        puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
        uVar13 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar13);
        *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
                  CONCAT44(rect1.bounds.top,rect1.bounds.left) >> (7 - uVar13) * 8;
        uVar13 = (uint)pPVar22 & 7;
        *(ulong *)((int)pPVar22 - uVar13) =
             CONCAT44(rect1.bounds.top,rect1.bounds.left) << uVar13 * 8 |
             *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
        puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
        uVar13 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar13);
        *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
                  CONCAT44(rect1.bounds.bottom,rect1.bounds.right) >> (7 - uVar13) * 8;
        piVar11 = &(pPVar22->bounds).right;
        uVar13 = (uint)piVar11 & 7;
        puVar5 = (ulong *)((int)piVar11 - uVar13);
        *puVar5 = CONCAT44(rect1.bounds.bottom,rect1.bounds.right) << uVar13 * 8 |
                  *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
        pPVar22->penalty = rect1.penalty;
        outPartition->finish = outPartition->finish + 1;
      }
      pPVar22 = outPartition->finish;
      if (pPVar22 == outPartition->end_of_storage) {
        insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                  (outPartition,pPVar22,&rect2);
      }
      else {
        puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
        uVar13 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar13);
        *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 | rect2.bounds._0_8_ >> (7 - uVar13) * 8;
        uVar13 = (uint)pPVar22 & 7;
        *(ulong *)((int)pPVar22 - uVar13) =
             rect2.bounds._0_8_ << uVar13 * 8 |
             *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
        puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
        uVar13 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar13);
        *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 | rect2.bounds._8_8_ >> (7 - uVar13) * 8;
        piVar11 = &(pPVar22->bounds).right;
        uVar13 = (uint)piVar11 & 7;
        puVar5 = (ulong *)((int)piVar11 - uVar13);
        *puVar5 = rect2.bounds._8_8_ << uVar13 * 8 |
                  *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
        pPVar22->penalty = rect2.penalty;
        outPartition->finish = outPartition->finish + 1;
      }
                    /* end of inlined section */
      StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
    }
    ___9TileWalls(local_b8,2);
    ___7CTilePt((CTilePt *)local_1c0,2);
  }
  else {
    __11PenaltyRectiiiii((PenaltyRect *)local_1c0,iVar20,y,iVar12,local_a8,0x7fffffff);
    local_1c0._0_4_ = local_1c0._0_4_ << 4;
    local_1c0._4_4_ = local_1c0._4_4_ << 4;
    local_1c0._8_4_ = local_1c0._8_4_ << 4;
    local_1c0._12_4_ = local_1c0._12_4_ << 4;
    iVar14 = FindIntersectingRect__FPC7tagRECTPCt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0
                       ((tagRECT *)local_1c0,outPartition);
    pcVar8 = _5Globs_pFixedWorld;
    if (iVar14 == -1) {
      for (; _5Globs_pFixedWorld = pcVar8, iVar12 <= r; iVar12 = iVar12 + 1) {
        bVar9 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        __7CTilePtiii((CTilePt *)&left.penalty,iVar12,y,inLevel);
        uVar13 = (*(code *)pcVar8->__vtable[1].OutOfBounds)
                           ((int)&pcVar8->__vtable + (int)*(short *)&pcVar8->__vtable[1].GetMaxSize,
                            &left.penalty);
        if ((uVar13 == _room) || (uVar13 == 0xfffb)) {
          bVar9 = true;
        }
        else {
          __7CTilePtiii((CTilePt *)&top,iVar12,y,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
                    ((ObjectIterator *)&top.penalty,(CTilePt *)&top,kAll);
                    /* end of inlined section */
          while (local_17c != (TreeSim **)0x0) {
            lVar18 = (*(code *)local_17c[1][0x15].m_pCursorObject)
                               ((int)local_17c + (int)*(short *)&local_17c[1][0x15].m_pMTObject);
                    /* end of inlined section */
            if ((lVar18 == 8) &&
               (lVar18 = (*(code *)local_17c[1][0xb].__vtable)
                                   ((int)local_17c + (int)*(short *)&local_17c[1][0xb].m_pEoRPerson,
                                    0xf), lVar18 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
              pvVar16 = (void *)0x0;
              if (local_17c != (TreeSim **)0x0) {
                pvVar16 = _dyncastimpl__7TreeSim4SCID(*local_17c,cXPortalID);
              }
                    /* end of inlined section */
              if (pvVar16 != (void *)0x0) {
                ppiVar17 = (int **)(**(code **)(*(int *)((int)pvVar16 + 4) + 0xc))
                                             ((int)pvVar16 +
                                              (int)*(short *)(*(int *)((int)pvVar16 + 4) + 8));
                iVar14 = *(int *)(**ppiVar17 + 4);
                uVar13 = (**(code **)(iVar14 + 0x29c))(**ppiVar17 + (int)*(short *)(iVar14 + 0x298))
                ;
                if (uVar13 == _room) {
                  bVar9 = true;
                }
              }
            }
            __pp__14ObjectIterator((ObjectIterator *)&top.penalty);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
          }
          ___7CTilePt((CTilePt *)&top,2);
        }
        ___7CTilePt((CTilePt *)&left.penalty,2);
        if (bVar9) break;
        pcVar8 = _5Globs_pFixedWorld;
      }
      iVar19 = iVar12 << 4;
      bVar9 = true;
      iVar21 = iVar20;
      pcVar8 = _5Globs_pFixedWorld;
      iVar14 = local_a8;
joined_r0x001fd30c:
      _5Globs_pFixedWorld = pcVar8;
      if (iVar21 < iVar12) goto LAB_001fd318;
      goto LAB_001fd47c;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    iVar12 = outPartition->start[iVar14].bounds.right;
    iVar14 = iVar12 + 0xf;
    if (-1 < iVar12) {
      iVar14 = iVar12;
    }
    if (iVar20 != iVar14 >> 4) {
      iVar23 = (iVar14 >> 4) + -1;
    }
  }
  goto LAB_001fdbe8;
LAB_001fd318:
                    /* end of inlined section */
  bVar6 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  __7CTilePtiii((CTilePt *)&left.penalty,iVar21,iVar14,inLevel);
  uVar13 = (*(code *)pcVar8->__vtable[1].OutOfBounds)
                     ((int)&pcVar8->__vtable + (int)*(short *)&pcVar8->__vtable[1].GetMaxSize,
                      &left.penalty);
  if ((uVar13 == _room) || (uVar13 == 0xfffb)) {
    bVar6 = true;
  }
  else {
    __7CTilePtiii((CTilePt *)&top,iVar21,iVar14,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
              ((ObjectIterator *)&top.penalty,(CTilePt *)&top,kAll);
                    /* end of inlined section */
    while (local_17c != (TreeSim **)0x0) {
      lVar18 = (*(code *)local_17c[1][0x15].m_pCursorObject)
                         ((int)local_17c + (int)*(short *)&local_17c[1][0x15].m_pMTObject);
                    /* end of inlined section */
      if ((lVar18 == 8) &&
         (lVar18 = (*(code *)local_17c[1][0xb].__vtable)
                             ((int)local_17c + (int)*(short *)&local_17c[1][0xb].m_pEoRPerson,0xf),
         lVar18 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
        pvVar16 = (void *)0x0;
        if (local_17c != (TreeSim **)0x0) {
          pvVar16 = _dyncastimpl__7TreeSim4SCID(*local_17c,cXPortalID);
        }
                    /* end of inlined section */
        if (pvVar16 != (void *)0x0) {
          ppiVar17 = (int **)(**(code **)(*(int *)((int)pvVar16 + 4) + 0xc))
                                       ((int)pvVar16 +
                                        (int)*(short *)(*(int *)((int)pvVar16 + 4) + 8));
          iVar4 = *(int *)(**ppiVar17 + 4);
          uVar13 = (**(code **)(iVar4 + 0x29c))(**ppiVar17 + (int)*(short *)(iVar4 + 0x298));
          if (uVar13 == _room) {
            bVar6 = true;
          }
        }
      }
      __pp__14ObjectIterator((ObjectIterator *)&top.penalty);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    }
    ___7CTilePt((CTilePt *)&top,2);
  }
  ___7CTilePt((CTilePt *)&left.penalty,2);
  iVar21 = iVar21 + 1;
  pcVar8 = _5Globs_pFixedWorld;
  if (bVar6) {
    bVar9 = false;
LAB_001fd47c:
    if ((!bVar9) || (b < iVar14)) goto LAB_001fd4a4;
    iVar14 = iVar14 + 1;
    iVar21 = iVar20;
    pcVar8 = _5Globs_pFixedWorld;
  }
  goto joined_r0x001fd30c;
LAB_001fd4a4:
  local_1c0._12_4_ = iVar14 << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pPVar22 = outPartition->finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  local_1c0._8_4_ = iVar19;
  if (pPVar22 == outPartition->end_of_storage) {
    insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
              (outPartition,pPVar22,(PenaltyRect *)local_1c0);
  }
  else {
    puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(local_1c0._4_4_,local_1c0._0_4_) >> (7 - uVar13) * 8;
    uVar13 = (uint)pPVar22 & 7;
    *(ulong *)((int)pPVar22 - uVar13) =
         CONCAT44(local_1c0._4_4_,local_1c0._0_4_) << uVar13 * 8 |
         *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(local_1c0._12_4_,iVar19) >> (7 - uVar13) * 8;
    piVar11 = &(pPVar22->bounds).right;
    uVar13 = (uint)piVar11 & 7;
    puVar5 = (ulong *)((int)piVar11 - uVar13);
    *puVar5 = CONCAT44(local_1c0._12_4_,iVar19) << uVar13 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    pPVar22->penalty = left.bounds.left;
    outPartition->finish = outPartition->finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
LAB_001fdbe8:
  bVar9 = false;
  iVar20 = iVar23 + 1;
  if (r < iVar23 + 1) {
    y = y + 1;
    local_a8 = local_a8 + 1;
    bVar9 = b < y;
    iVar20 = l;
  }
  if (bVar9) goto code_r0x001fdc24;
  goto LAB_001fcf68;
code_r0x001fdc24:
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  iVar12 = ((int)outPartition->finish - (int)outPartition->start) * -0x33333333 >> 2;
                    /* end of inlined section */
  if (_doFloors == 0) {
LAB_001fe220:
                    /* end of inlined section */
                    /* end of inlined section */
    pPVar22 = outPartition->start;
    if (0 < iVar12) {
      do {
        localInflateRect__FP7tagRECTii(&pPVar22->bounds,7,7);
        iVar12 = iVar12 + -1;
        pPVar22 = pPVar22 + 1;
      } while (iVar12 != 0);
    }
    return;
  }
  y = t;
  local_ac = t + 1;
  iVar20 = l;
LAB_001fdc70:
  __7CTilePtiii((CTilePt *)local_1c0,iVar20,y,inLevel);
  lVar18 = (*(code *)world->__vtable->GetVertexConfig)
                     ((int)&world->__vtable + (int)*(short *)&world->__vtable->IsOutside,local_1c0);
  iVar23 = iVar20;
  if (lVar18 != 0) {
    iVar21 = iVar20 + 1;
    __11PenaltyRectiiiii((PenaltyRect *)local_b8,iVar20,y,iVar21,local_ac,0);
    left.bounds.left = left.bounds.left << 4;
    left.bounds.top = left.bounds.top << 4;
    left.bounds.right = left.bounds.right << 4;
    left.bounds.bottom = left.bounds.bottom << 4;
    iVar14 = FindIntersectingRect__FPC7tagRECTPCt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0
                       ((tagRECT *)local_b8,outPartition);
    __11PenaltyRectiiiii(local_b4,iVar20,y,iVar21,local_ac,0);
    if (iVar14 == -1) {
      while( true ) {
        bVar6 = false;
        bVar9 = false;
        if (iVar21 <= r) {
          pcVar3 = world->__vtable;
          bVar6 = true;
          sVar2 = *(short *)&pcVar3->IsOutside;
          __7CTilePtiii(aCStack_170,iVar21,y,inLevel);
          lVar18 = (*(code *)pcVar3->GetVertexConfig)
                             ((int)&world->__vtable + (int)sVar2,aCStack_170);
          pcVar8 = _5Globs_pFixedWorld;
          if (lVar18 != 0) {
                    /* end of inlined section */
            bVar9 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            __7CTilePtiii(&pt,iVar21,y,inLevel);
            pcVar3 = pcVar8->__vtable;
            uVar13 = (*(code *)pcVar3[1].OutOfBounds)
                               ((int)&pcVar8->__vtable + (int)*(short *)&pcVar3[1].GetMaxSize,&pt);
            if ((uVar13 == _room) || (uVar13 == 0xfffb)) {
              bVar9 = true;
            }
            else {
              __7CTilePtiii(&tmpTile,iVar21,y,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
              init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
                        ((ObjectIterator *)&rect1,&tmpTile,kAll);
                    /* end of inlined section */
              while (rect1.bounds.top != 0) {
                    /* end of inlined section */
                lVar18 = (**(code **)(*(int *)(rect1.bounds.top + 4) + 0x2ac))
                                   (rect1.bounds.top +
                                    *(short *)(*(int *)(rect1.bounds.top + 4) + 0x2a8));
                    /* end of inlined section */
                if ((lVar18 == 8) &&
                   (lVar18 = (**(code **)(*(int *)(rect1.bounds.top + 4) + 0x17c))
                                       (rect1.bounds.top +
                                        *(short *)(*(int *)(rect1.bounds.top + 4) + 0x178),0xf),
                   lVar18 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                  pvVar16 = (void *)0x0;
                  if (rect1.bounds.top != 0) {
                    pvVar16 = _dyncastimpl__7TreeSim4SCID(*(TreeSim **)rect1.bounds.top,cXPortalID);
                  }
                    /* end of inlined section */
                  if (pvVar16 != (void *)0x0) {
                    ppiVar17 = (int **)(**(code **)(*(int *)((int)pvVar16 + 4) + 0xc))
                                                 ((int)pvVar16 +
                                                  (int)*(short *)(*(int *)((int)pvVar16 + 4) + 8));
                    iVar14 = *(int *)(**ppiVar17 + 4);
                    uVar13 = (**(code **)(iVar14 + 0x29c))
                                       (**ppiVar17 + (int)*(short *)(iVar14 + 0x298));
                    if (uVar13 == _room) {
                      bVar9 = true;
                    }
                  }
                }
                __pp__14ObjectIterator((ObjectIterator *)&rect1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
              }
              ___7CTilePt(&tmpTile,2);
            }
            ___7CTilePt(&pt,2);
          }
        }
        if (bVar6) {
          ___7CTilePt(aCStack_170,2);
        }
        if (!bVar9) break;
        iVar21 = iVar21 + 1;
      }
      bVar9 = true;
      iVar14 = local_ac;
      top.bounds.right = iVar21;
      do {
        if (iVar20 < top.bounds.right) {
          iVar21 = iVar20;
          do {
            pcVar3 = world->__vtable;
            sVar2 = *(short *)&pcVar3->IsOutside;
            bVar6 = false;
            __7CTilePtiii(aCStack_170,iVar21,iVar14,inLevel);
            lVar18 = (*(code *)pcVar3->GetVertexConfig)
                               ((int)&world->__vtable + (int)sVar2,aCStack_170);
            pcVar8 = _5Globs_pFixedWorld;
            if (lVar18 == 0) {
LAB_001fe0f4:
              bVar6 = true;
            }
            else {
              bVar7 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
              __7CTilePtiii(&pt,iVar21,iVar14,inLevel);
              pcVar3 = pcVar8->__vtable;
              uVar13 = (*(code *)pcVar3[1].OutOfBounds)
                                 ((int)&pcVar8->__vtable + (int)*(short *)&pcVar3[1].GetMaxSize,&pt)
              ;
              if ((uVar13 == _room) || (uVar13 == 0xfffb)) {
                bVar7 = true;
              }
              else {
                __7CTilePtiii(&tmpTile,iVar21,iVar14,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
                          ((ObjectIterator *)&rect1,&tmpTile,kAll);
                    /* end of inlined section */
                while (rect1.bounds.top != 0) {
                    /* end of inlined section */
                  lVar18 = (**(code **)(*(int *)(rect1.bounds.top + 4) + 0x2ac))
                                     (rect1.bounds.top +
                                      *(short *)(*(int *)(rect1.bounds.top + 4) + 0x2a8));
                    /* end of inlined section */
                  if ((lVar18 == 8) &&
                     (lVar18 = (**(code **)(*(int *)(rect1.bounds.top + 4) + 0x17c))
                                         (rect1.bounds.top +
                                          *(short *)(*(int *)(rect1.bounds.top + 4) + 0x178),0xf),
                     lVar18 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    pvVar16 = (void *)0x0;
                    if (rect1.bounds.top != 0) {
                      pvVar16 = _dyncastimpl__7TreeSim4SCID
                                          (*(TreeSim **)rect1.bounds.top,cXPortalID);
                    }
                    /* end of inlined section */
                    if (pvVar16 != (void *)0x0) {
                      ppiVar17 = (int **)(**(code **)(*(int *)((int)pvVar16 + 4) + 0xc))
                                                   ((int)pvVar16 +
                                                    (int)*(short *)(*(int *)((int)pvVar16 + 4) + 8))
                      ;
                      iVar19 = *(int *)(**ppiVar17 + 4);
                      uVar13 = (**(code **)(iVar19 + 0x29c))
                                         (**ppiVar17 + (int)*(short *)(iVar19 + 0x298));
                      if (uVar13 == _room) {
                        bVar7 = true;
                      }
                    }
                  }
                  __pp__14ObjectIterator((ObjectIterator *)&rect1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
                }
                ___7CTilePt(&tmpTile,2);
              }
              ___7CTilePt(&pt,2);
              if (!bVar7) goto LAB_001fe0f4;
            }
            ___7CTilePt(aCStack_170,2);
            if (bVar6) {
              bVar9 = false;
              break;
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < top.bounds.right);
        }
        if ((!bVar9) || (b < iVar14)) goto LAB_001fe150;
        iVar14 = iVar14 + 1;
      } while( true );
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    iVar14 = outPartition->start[iVar14].bounds.right;
    iVar21 = iVar14 + 0xf;
    if (-1 < iVar14) {
      iVar21 = iVar14;
    }
    if (iVar21 >> 4 != iVar20) {
      iVar23 = (iVar21 >> 4) + -1;
    }
  }
  goto LAB_001fe1d4;
LAB_001fe150:
  top.bounds.bottom = iVar14 << 4;
  top.bounds.left = top.bounds.left << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pPVar22 = outPartition->finish;
                    /* end of inlined section */
  top.bounds.top = top.bounds.top << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  top.bounds.right = top.bounds.right << 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  if (pPVar22 == outPartition->end_of_storage) {
    insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
              (outPartition,pPVar22,&top);
  }
  else {
    puVar1 = (undefined *)((int)&(pPVar22->bounds).top + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(top.bounds.top,top.bounds.left) >> (7 - uVar13) * 8;
    uVar13 = (uint)pPVar22 & 7;
    *(ulong *)((int)pPVar22 - uVar13) =
         CONCAT44(top.bounds.top,top.bounds.left) << uVar13 * 8 |
         *(ulong *)((int)pPVar22 - uVar13) & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    puVar1 = (undefined *)((int)&(pPVar22->bounds).bottom + 3);
    uVar13 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar13);
    *puVar5 = *puVar5 & -1L << (uVar13 + 1) * 8 |
              CONCAT44(top.bounds.bottom,top.bounds.right) >> (7 - uVar13) * 8;
    piVar11 = &(pPVar22->bounds).right;
    uVar13 = (uint)piVar11 & 7;
    puVar5 = (ulong *)((int)piVar11 - uVar13);
    *puVar5 = CONCAT44(top.bounds.bottom,top.bounds.right) << uVar13 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
    pPVar22->penalty = top.penalty;
    outPartition->finish = outPartition->finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(outPartition);
LAB_001fe1d4:
  ___7CTilePt((CTilePt *)local_1c0,2);
  bVar9 = false;
  iVar20 = iVar23 + 1;
  if (r < iVar23 + 1) {
    y = y + 1;
    local_ac = local_ac + 1;
    bVar9 = b < y;
    iVar20 = l;
  }
  if (bVar9) goto LAB_001fe220;
  goto LAB_001fdc70;
}

void BuildRoomPartition(short unsigned int inRoom, Partition *outPartition) {
  BuildRoomPartition__FUsPt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0b
            (inRoom,outPartition,true);
  return;
}

static bool Stuck(Partition *p, POINT *startPt) {
	RECT startRect;
	int sectNum;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  bool bVar1;
  int iVar2;
  tagRECT startRect;
  
  startRect.top = startPt->y;
  startRect.left = startPt->x;
  startRect.bottom = startRect.top + 1;
  startRect.right = startRect.left + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (((p == (vector_PenaltyRect___malloc_alloc_template_0___ *)0x0) ||
      (iVar2 = FindIntersectingRect__FPC7tagRECTPCt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0
                         (&startRect,p), iVar2 == -1)) ||
     (bVar1 = true, p->start[iVar2].penalty != 0x7fffffff)) {
    bVar1 = false;
  }
  return bVar1;
}

void XRoute::BuildGoalList() {
	cXPerson *person;
	SInt16 dir;
	cXObject *ptr;
	Room *rm;
	
  short sVar1;
  RoomManager__vtable *pRVar2;
  int iVar3;
  cXObject__109_1077__vtable *pcVar4;
  int *piVar5;
  RoomManager *pRVar6;
  long lVar7;
  undefined8 uVar8;
  cXObject__109_1077 *pcVar9;
  
  ChooseStartingPoint__6XRoute(this);
                    /* inlined from SCID.h */
  piVar5 = (int *)0x0;
  if (this->fStart != (cXObject__109_1077 *)0x0) {
    piVar5 = (int *)_dyncastimpl__7TreeSim4SCID(this->fStart->_vb1946,cXPersonID);
  }
                    /* end of inlined section */
  if (piVar5 == (int *)0x0) {
    pcVar9 = this->fStart;
  }
  else {
    pRVar6 = GetRoomManager__11RoomManager();
    pRVar2 = pRVar6->__vtable;
    iVar3 = *(int *)(*piVar5 + 4);
    sVar1 = *(short *)&pRVar2->GetHouse;
    uVar8 = (**(code **)(iVar3 + 0x29c))(*piVar5 + (int)*(short *)(iVar3 + 0x298));
    lVar7 = (*(code *)pRVar2->ClearRoomPartitions)((int)&pRVar6->__vtable + (int)sVar1,uVar8);
    if (lVar7 == 0) {
      pcVar9 = this->fStart;
    }
    else {
      iVar3 = *(int *)lVar7;
      lVar7 = (**(code **)(iVar3 + 0x94))((int)(int *)lVar7 + (int)*(short *)(iVar3 + 0x90));
      if (lVar7 < 0xfb) {
        pcVar9 = this->fStart;
      }
      else {
        this->fMaxGoalCount = 8;
        pcVar9 = this->fStart;
      }
    }
  }
  uVar8 = (*(code *)pcVar9->__vtable->ReconType)
                    ((int)&pcVar9->_vb1946 + (int)*(short *)&pcVar9->__vtable->ReconStream,1);
  if (piVar5 != (int *)0x0) {
    (**(code **)(piVar5[1] + 0xec))
              ((int)piVar5 + (int)*(short *)(piVar5[1] + 0xe8),0x49,this->fFootprintMask);
  }
  ConstructGoals__6XRoute(this);
  if (piVar5 != (int *)0x0) {
    (**(code **)(piVar5[1] + 0xec))((int)piVar5 + (int)*(short *)(piVar5[1] + 0xe8),0x49,0);
  }
  pcVar4 = this->fStart->__vtable;
  (*(code *)pcVar4->GetObstacleAtLocation)
            ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar4->GetRelMatrix,1,uVar8);
  return;
}

static void __tcf_0() {
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pvVar1 = objPartition_2032;
  if (objPartition_2032 != DAT_003d3c44) {
    do {
      pvVar1 = (void *)((int)pvVar1 + 0x14);
    } while (pvVar1 != DAT_003d3c44);
  }
  if ((objPartition_2032 != (void *)0x0) &&
     ((DAT_003d3c48 - (int)objPartition_2032) * -0x33333333 >> 2 != 0)) {
    free(objPartition_2032);
  }
  return;
}

static void __tcf_1() {
	NodeRef *last;
	NodeRef *first;
	NodeRef *pointer;
	
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pvVar1 = goalMap_2076;
  if (goalMap_2076 != DAT_003d3c54) {
    do {
      pvVar1 = (void *)((int)pvVar1 + 4);
    } while (pvVar1 != DAT_003d3c54);
  }
  if ((goalMap_2076 != (void *)0x0) && (DAT_003d3c58 - (int)goalMap_2076 >> 2 != 0)) {
    free(goalMap_2076);
  }
  return;
}

bool XRoute::FindPath(TileList &outTileList) {
	static int verifyRoute = 0;
	bool ignoreAllObstacles;
	bool enableTerrainPenalty;
	cXPerson *person;
	ObjectModule *module;
	short unsigned int roomID;
	RoomImpl *room;
	bool outside;
	POINT ptbegin;
	RECT startRect;
	Int defaultPenalty;
	Int inflateSize;
	Int personInflateSize;
	static Partition objPartition;
	RoutingParams prs;
	Partition overridePartition;
	GoalList goalList;
	static vector<int,__malloc_alloc_template<0> > goalMap;
	Path thePath;
	Int iterationLimit;
	bool unreachable;
	Int numPoints;
	cXObject *ptr;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	XRoute *this;
	XRoute *this;
	PenaltyRect *first;
	PenaltyRect *last;
	PenaltyRect *pointer;
	cXObject *srch;
	FTileRect &srchRect;
	Int penalty;
	PenaltyRect rect;
	RECT tmp;
	Int flags;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	int i;
	Int score;
	Int x;
	Int y;
	PenaltyRect pr;
	NodeRef &x;
	int &value;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	POINT *first;
	POINT *last;
	POINT *pointer;
	XRoute *this;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	int ct;
	FTilePt fpt;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	int i;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt a;
	FTilePt b;
	float xdel;
	float ydel;
	float tdel;
	FTilePt last;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	Int xdel;
	Int ydel;
	float t;
	FTilePt test;
	float t;
	POINT testPt;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	XRoute *this;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  Room__vtable *pRVar4;
  FTilePt *pFVar5;
  ulong *puVar6;
  bool bVar7;
  void *pvVar8;
  int iVar9;
  RoomManager *pRVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  cXObject__109_1077 *pcVar14;
  RouteGoal *pRVar16;
  FTilePt *pFVar17;
  long lVar18;
  ulong uVar19;
  PenaltyRect *pPVar20;
  cXObject__109_1077__vtable *pcVar21;
  uint uVar22;
  tagPOINT *ptVar23;
  uint uVar24;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  tagPOINT ptbegin;
  tagRECT startRect;
  vector_PenaltyRect___malloc_alloc_template_0___ overridePartition;
  vector_PenaltyRect___malloc_alloc_template_0___ goalList;
  tagRECT tmp;
  PenaltyRect *local_210;
  RoutingParams prs;
  FTilePt fpt;
  ulong uStack_1b8;
  int local_1b0;
  Path thePath;
  FTilePt b;
  FTilePt last;
  FTilePt test;
  tagPOINT testPt;
  int i;
  vector_FTilePt___malloc_alloc_template_0___ *local_fc;
  bool ignoreAllObstacles;
  bool enableTerrainPenalty;
  short roomID;
  RoomImpl *room;
  bool outside;
  int defaultPenalty;
  int inflateSize;
  vector_PenaltyRect___malloc_alloc_template_0___ *local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
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
  code *pcVar15;
  
                    /* end of inlined section */
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from SCID.h */
                    /* end of inlined section */
  _ignoreAllObstacles = 0;
                    /* inlined from SCID.h */
  _enableTerrainPenalty = 1;
  local_fc = &outTileList->field0_0x0;
  if (this->fStart == (cXObject__109_1077 *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = _dyncastimpl__7TreeSim4SCID(this->fStart->_vb1946,cXPersonID);
  }
                    /* end of inlined section */
  if (pvVar8 == (void *)0x0) {
    pcVar14 = this->fStart;
  }
  else {
    lVar18 = (**(code **)(*(int *)((int)pvVar8 + 4) + 0x18c))
                       ((int)pvVar8 + (int)*(short *)(*(int *)((int)pvVar8 + 4) + 0x188));
    _ignoreAllObstacles = (uint)(lVar18 != 0);
    pcVar14 = this->fStart;
  }
  lVar18 = (*(code *)pcVar14->__vtable->ReconType)
                     ((int)&pcVar14->_vb1946 + (int)*(short *)&pcVar14->__vtable->ReconStream,0x11);
  pcVar14 = (cXObject__109_1077 *)_5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (lVar18 != 0) {
    _enableTerrainPenalty = 0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if ((int)(this->field0_0x0).finish - (int)(this->field0_0x0).start >> 4 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
                    /* end of inlined section */
    if (this->fResult == 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
                    /* end of inlined section */
      this->fResult = 7;
      return (bool)0;
    }
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pcVar21 = this->fStart->__vtable;
  _roomID = (*(code *)pcVar21[1].ParseUIString)
                      ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar21[1].RunTree);
  if ((_ignoreAllObstacles == 0) &&
     (pcVar21 = this->fDest->__vtable,
     iVar9 = (*(code *)pcVar21[1].ParseUIString)
                       ((int)&this->fDest->_vb1946 + (int)*(short *)&pcVar21[1].RunTree),
     _roomID != iVar9)) {
LAB_001fe6d0:
    ClearCurrentGoal__6XRoute(this);
    return false;
  }
  pRVar10 = GetRoomManager__11RoomManager();
  lVar18 = (*(code *)pRVar10->__vtable->ClearRoomPartitions)
                     ((int)&pRVar10->__vtable + (int)*(short *)&pRVar10->__vtable->GetHouse,_roomID)
  ;
  room = (RoomImpl *)lVar18;
  if (lVar18 == 0) goto LAB_001fe6d0;
  pRVar4 = (room->field0_0x0).__vtable;
  _outside = 0;
  lVar18 = (*(code *)pRVar4[1].GetArea)
                     ((int)&(room->field0_0x0).__vtable + (int)*(short *)&pRVar4[1].GetObjectDensity
                     );
  if (lVar18 == 1) {
    pRVar4 = (room->field0_0x0).__vtable;
    lVar18 = (**(code **)(pRVar4 + 1))
                       ((int)&(room->field0_0x0).__vtable + (int)*(short *)&pRVar4->WantsRoof);
    _outside = (uint)(lVar18 != 0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    ptbegin.x = (this->fStartPt).x.whole;
  }
  else {
    ptbegin.x = (this->fStartPt).x.whole;
  }
                    /* end of inlined section */
  defaultPenalty = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  ptbegin.y = (this->fStartPt).y.whole;
                    /* end of inlined section */
  pcVar21 = this->fStart->__vtable;
  piVar11 = (int *)(*(code *)pcVar21->GetWallBlockFlags)
                             ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar21->GetFirst);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  startRect.top = piVar11[2];
  startRect.left = piVar11[3];
  startRect.bottom = *piVar11;
  startRect.right = piVar11[1];
                    /* end of inlined section */
  if ((_enableTerrainPenalty != 0) && (defaultPenalty = 3, _outside == 0)) {
    defaultPenalty = 0;
  }
  iVar9 = GetPersonWidth__8cXObject();
  inflateSize = iVar9 / 2;
  iVar9 = GetPersonWidth__8cXObject();
  iVar9 = iVar9 / 2;
  if (__tmp_0_2033 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    DAT_003d3c48 = (PenaltyRect *)0x0;
                    /* end of inlined section */
    __tmp_0_2033 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    objPartition_2032 = (PenaltyRect *)0x0;
                    /* end of inlined section */
    DAT_003d3c44 = (PenaltyRect *)0x0;
    atexit(__tcf_0);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  local_dc = &goalList;
  for (pPVar20 = objPartition_2032; pPVar20 != DAT_003d3c44; pPVar20 = pPVar20 + 1) {
  }
  DAT_003d3c44 = objPartition_2032;
                    /* end of inlined section */
  if (_ignoreAllObstacles == 0) {
    sVar3 = *(short *)&((ObjectModule *)pcVar14)->__vtable->CleanupPeople;
    pcVar15 = (code *)((ObjectModule *)pcVar14)->__vtable->LevelInfoRequested;
    while (pPVar20 = local_210,
          pcVar14 = (cXObject__109_1077 *)(*pcVar15)((int)&pcVar14->_vb1946 + (int)sVar3),
          pcVar14 != (cXObject__109_1077 *)0x0) {
      pcVar21 = pcVar14->__vtable;
      if (pcVar14 != this->fStart) {
        iVar12 = (*(code *)pcVar21[1].ParseUIString)
                           ((int)&pcVar14->_vb1946 + (int)*(short *)&pcVar21[1].RunTree);
        if (iVar12 == _roomID) {
          bVar7 = ShouldIgnore__6XRouteP8cXObject(this,pcVar14);
          pcVar21 = pcVar14->__vtable;
          if (!bVar7) {
            iVar12 = 0x7fffffff;
            piVar11 = (int *)(*(code *)pcVar21->GetWallBlockFlags)
                                       ((int)&pcVar14->_vb1946 + (int)*(short *)&pcVar21->GetFirst);
            lVar18 = (*(code *)pcVar14->__vtable->ReconType)
                               ((int)&pcVar14->_vb1946 +
                                (int)*(short *)&pcVar14->__vtable->ReconStream,10);
            if (lVar18 != 0) {
              iVar12 = 10;
            }
            __11PenaltyRectiiiii
                      ((PenaltyRect *)&overridePartition,piVar11[3],piVar11[2],piVar11[1],*piVar11,
                       iVar12);
            lVar18 = (*(code *)pcVar14->__vtable[1].Pickup)
                               ((int)&pcVar14->_vb1946 + (int)*(short *)&pcVar14->__vtable[1].Turn);
            if (lVar18 == 8) {
              uVar19 = (*(code *)pcVar14->__vtable[1].IsBurning)
                                 ((int)&pcVar14->_vb1946 +
                                  (int)*(short *)&pcVar14->__vtable[1].IsDirty);
              if ((uVar19 & 1) != 0) {
                iVar12 = 10000;
                __11PenaltyRectiiiii
                          ((PenaltyRect *)&tmp,piVar11[3],piVar11[2],piVar11[1],piVar11[2] + 1,10000
                          );
                unique0x1000109b = tmp._8_8_;
                overridePartition._0_8_ = tmp._0_8_;
                puVar1 = (undefined *)((int)&overridePartition.finish + 3);
                uVar24 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | tmp._0_8_ >> (7 - uVar24) * 8;
                uVar24 = (uint)&stack0xfffffdcf & 7;
                puVar6 = (ulong *)(&stack0xfffffdcf + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | unique0x1000109b >> (7 - uVar24) * 8;
                goalList.start = pPVar20;
                localInflateRect__FP7tagRECTii
                          ((tagRECT *)(PenaltyRect *)&overridePartition,iVar9,iVar9);
              }
              pPVar20 = local_210;
              if ((uVar19 & 4) != 0) {
                iVar12 = 10000;
                __11PenaltyRectiiiii
                          ((PenaltyRect *)&tmp,piVar11[1] + -1,piVar11[2],piVar11[1],*piVar11,10000)
                ;
                unique0x100010a3 = tmp._8_8_;
                overridePartition._0_8_ = tmp._0_8_;
                puVar1 = (undefined *)((int)&overridePartition.finish + 3);
                uVar24 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | tmp._0_8_ >> (7 - uVar24) * 8;
                uVar24 = (uint)&stack0xfffffdcf & 7;
                puVar6 = (ulong *)(&stack0xfffffdcf + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | unique0x100010a3 >> (7 - uVar24) * 8;
                goalList.start = pPVar20;
                localInflateRect__FP7tagRECTii
                          ((tagRECT *)(PenaltyRect *)&overridePartition,iVar9,iVar9);
              }
              pPVar20 = local_210;
              if ((uVar19 & 0x10) != 0) {
                iVar12 = 10000;
                __11PenaltyRectiiiii
                          ((PenaltyRect *)&tmp,piVar11[3],*piVar11 + -1,piVar11[1],*piVar11,10000);
                unique0x100010ab = tmp._8_8_;
                overridePartition._0_8_ = tmp._0_8_;
                puVar1 = (undefined *)((int)&overridePartition.finish + 3);
                uVar24 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | tmp._0_8_ >> (7 - uVar24) * 8;
                uVar24 = (uint)&stack0xfffffdcf & 7;
                puVar6 = (ulong *)(&stack0xfffffdcf + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | unique0x100010ab >> (7 - uVar24) * 8;
                goalList.start = pPVar20;
                localInflateRect__FP7tagRECTii
                          ((tagRECT *)(PenaltyRect *)&overridePartition,iVar9,iVar9);
              }
              pPVar20 = local_210;
              if ((uVar19 & 0x40) != 0) {
                iVar12 = 10000;
                __11PenaltyRectiiiii
                          ((PenaltyRect *)&tmp,piVar11[3],piVar11[2],piVar11[3] + 1,*piVar11,10000);
                unique0x100010b3 = tmp._8_8_;
                overridePartition._0_8_ = tmp._0_8_;
                puVar1 = (undefined *)((int)&overridePartition.finish + 3);
                uVar24 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | tmp._0_8_ >> (7 - uVar24) * 8;
                uVar24 = (uint)&stack0xfffffdcf & 7;
                puVar6 = (ulong *)(&stack0xfffffdcf + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | unique0x100010b3 >> (7 - uVar24) * 8;
                goalList.start = pPVar20;
                localInflateRect__FP7tagRECTii
                          ((tagRECT *)(PenaltyRect *)&overridePartition,iVar9,iVar9);
              }
            }
            iVar13 = localIntersectRect__FP7tagRECTPC7tagRECTT1
                               ((tagRECT *)(PenaltyRect *)&tmp,
                                (tagRECT *)(PenaltyRect *)&overridePartition,&startRect);
            pcVar21 = pcVar14->__vtable;
            if (iVar13 == 0) {
              lVar18 = (*(code *)pcVar21[1].Pickup)
                                 ((int)&pcVar14->_vb1946 + (int)*(short *)&pcVar21[1].Turn);
              if (lVar18 == 2) {
                localInflateRect__FP7tagRECTii
                          ((tagRECT *)(PenaltyRect *)&overridePartition,iVar9,iVar9);
              }
              else if (iVar12 == 0x7fffffff) {
                localInflateRect__FP7tagRECTii
                          ((tagRECT *)(PenaltyRect *)&overridePartition,inflateSize,inflateSize);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
              }
              pPVar20 = DAT_003d3c44;
              if (DAT_003d3c44 == DAT_003d3c48) {
                insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                          ((vector_PenaltyRect___malloc_alloc_template_0___ *)&objPartition_2032,
                           DAT_003d3c44,(PenaltyRect *)&overridePartition);
              }
              else {
                puVar1 = (undefined *)((int)&(DAT_003d3c44->bounds).top + 3);
                uVar24 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 |
                          overridePartition._0_8_ >> (7 - uVar24) * 8;
                uVar24 = (uint)pPVar20 & 7;
                *(ulong *)((int)pPVar20 - uVar24) =
                     overridePartition._0_8_ << uVar24 * 8 |
                     *(ulong *)((int)pPVar20 - uVar24) & 0xffffffffffffffffU >> (8 - uVar24) * 8;
                puVar1 = (undefined *)((int)&(pPVar20->bounds).bottom + 3);
                uVar24 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | stack0xfffffdc8 >> (7 - uVar24) * 8;
                piVar11 = &(pPVar20->bounds).right;
                uVar24 = (uint)piVar11 & 7;
                puVar6 = (ulong *)((int)piVar11 - uVar24);
                *puVar6 = stack0xfffffdc8 << uVar24 * 8 |
                          *puVar6 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
                pPVar20->penalty = (int)goalList.start;
                DAT_003d3c44 = DAT_003d3c44 + 1;
              }
                    /* end of inlined section */
              StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                        ((vector_PenaltyRect___malloc_alloc_template_0___ *)&objPartition_2032);
              pcVar21 = pcVar14->__vtable;
            }
          }
        }
        else {
          pcVar21 = pcVar14->__vtable;
        }
      }
      sVar3 = *(short *)&pcVar21[1].GetObjectLightSource;
      pcVar15 = (code *)pcVar21[1].IsDeletedByEvict;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
  prs.goalList = (vector_PenaltyRect___malloc_alloc_template_0___ *)0x0;
                    /* end of inlined section */
  prs.partition1 = (vector_PenaltyRect___malloc_alloc_template_0___ *)&objPartition_2032;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
  prs.partition2 = (vector_PenaltyRect___malloc_alloc_template_0___ *)0x0;
  overridePartition._0_8_ = 0;
                    /* end of inlined section */
  stack0xfffffdc8 = stack0xfffffdc8 & 0xffffffff00000000;
  if (_ignoreAllObstacles == 0) {
    if ((_enableTerrainPenalty == 0) && (_outside != 0)) {
      BuildRoomPartition__FUsPt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0b
                ((short)_roomID,&overridePartition,false);
      prs.partition2 = &overridePartition;
    }
    else {
      prs.partition2 = GetPartition__8RoomImpl(room);
    }
  }
  prs.defaultPenalty = defaultPenalty;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  goalList.start = (PenaltyRect *)0x0;
  goalList.finish = (PenaltyRect *)0x0;
  goalList.end_of_storage = (PenaltyRect *)0x0;
                    /* end of inlined section */
  prs.goalList = local_dc;
  if (__tmp_1_2077 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    DAT_003d3c58 = (int *)0x0;
                    /* end of inlined section */
    __tmp_1_2077 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    goalMap_2076 = (int *)0x0;
                    /* end of inlined section */
    DAT_003d3c54 = (int *)0x0;
    atexit(__tcf_1);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  uVar19 = 0x3d3c50;
  for (piVar11 = goalMap_2076; piVar11 != DAT_003d3c54; piVar11 = piVar11 + 1) {
  }
                    /* end of inlined section */
  i = 0;
                    /* end of inlined section */
  DAT_003d3c54 = goalMap_2076;
  while (iVar9 = CountGoals__6XRoute(this), i < iVar9) {
    pRVar16 = GetNthGoal__6XRoutei(this,i);
    if (0 < pRVar16->score) {
      iVar9 = (pRVar16->loc).x.whole;
      iVar12 = (pRVar16->loc).y.whole;
      __11PenaltyRectiiiii
                ((PenaltyRect *)&fpt,iVar9,iVar12,iVar9 + 1,iVar12 + 1,
                 (this->fMaxScore - pRVar16->score) * 0x10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      if (goalList.finish == goalList.end_of_storage) {
        insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                  (&goalList,goalList.finish,(PenaltyRect *)&fpt);
      }
      else {
        puVar1 = (undefined *)((int)&((goalList.finish)->bounds).top + 3);
        uVar24 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar24);
        *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | (ulong)fpt >> (7 - uVar24) * 8;
        uVar24 = (uint)goalList.finish & 7;
        *(ulong *)((int)goalList.finish - uVar24) =
             (long)fpt << uVar24 * 8 |
             *(ulong *)((int)goalList.finish - uVar24) & 0xffffffffffffffffU >> (8 - uVar24) * 8;
        puVar1 = (undefined *)((int)&((goalList.finish)->bounds).bottom + 3);
        uVar24 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar24);
        *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | uStack_1b8 >> (7 - uVar24) * 8;
        piVar11 = &((goalList.finish)->bounds).right;
        uVar24 = (uint)piVar11 & 7;
        puVar6 = (ulong *)((int)piVar11 - uVar24);
        *puVar6 = uStack_1b8 << uVar24 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
        (goalList.finish)->penalty = local_1b0;
        goalList.finish = goalList.finish + 1;
      }
                    /* end of inlined section */
      StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(local_dc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      if (DAT_003d3c54 == DAT_003d3c58) {
        insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                  ((vector_int___malloc_alloc_template_0_____3_5561 *)&goalMap_2076,DAT_003d3c54,&i)
        ;
      }
      else {
        *DAT_003d3c54 = i;
        DAT_003d3c54 = DAT_003d3c54 + 1;
      }
                    /* end of inlined section */
      uVar19 = 0x3d0000;
      StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                ((vector_int___malloc_alloc_template_0_____109_2225 *)&goalMap_2076);
    }
    i = i + 1;
  }
  if (_ignoreAllObstacles == 0) {
    fVar25 = (float)(*(code *)(room->field0_0x0).__vtable[1].GetAmbientLight)();
    if (fVar25 <= 0.2) {
      lVar18 = (*(code *)(room->field0_0x0).__vtable[1].IsOutside)();
      if (99 < lVar18) goto LAB_001fee20;
      prs._40_4_ = 0;
    }
    else {
      prs._40_4_ = 0;
    }
  }
  else {
LAB_001fee20:
    prs._40_4_ = 1;
    prs.maxFreeRectSize = 0x80;
  }
  puVar1 = (undefined *)((int)&prs.begin.y + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar24);
  *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | CONCAT44(ptbegin.y,ptbegin.x) >> (7 - uVar24) * 8;
  uVar24 = (uint)&prs.begin & 7;
  puVar6 = (ulong *)((int)&prs.begin - uVar24);
  *puVar6 = CONCAT44(ptbegin.y,ptbegin.x) << uVar24 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  prs._52_4_ = 1;
  prs._32_4_ = 0;
  prs._28_4_ = 1;
  prs._20_4_ = 0;
  if ((verifyRoute_2031 != 0) &&
     (bVar7 = Stuck__FPt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P8tagPOINT
                        (prs.partition1,&ptbegin), !bVar7)) {
    Stuck__FPt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P8tagPOINT
              (prs.partition2,&ptbegin);
  }
  thePath.fParams = (RoutingParams *)0x0;
  thePath.fReverseNodePath.field0_0x0.start = (int *)0x0;
  thePath.fReverseNodePath.field0_0x0.finish = (int *)0x0;
  thePath.fReverseNodePath.field0_0x0.end_of_storage = (int *)0x0;
                    /* end of inlined section */
  bVar7 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  thePath.fSpatialNodePath.field0_0x0.start = (int *)0x0;
  thePath.fSpatialNodePath.field0_0x0.finish = (int *)0x0;
  thePath.fSpatialNodePath.field0_0x0.end_of_storage = (int *)0x0;
  thePath.fFinalPath.start = (tagPOINT *)0x0;
  thePath.fFinalPath.finish = (tagPOINT *)0x0;
  thePath.fFinalPath.end_of_storage = (tagPOINT *)0x0;
  thePath.fPathStage = -1;
  thePath.fOpenNodes.field0_0x0.start = (int *)0x0;
  thePath.fOpenNodes.field0_0x0.finish = (int *)0x0;
  thePath.fOpenNodes.field0_0x0.end_of_storage = (int *)0x0;
  iVar12 = (int)goalList.finish - (int)goalList.start;
  thePath.fClosedNodes.field0_0x0.start = (int *)0x0;
  thePath.fClosedNodes.field0_0x0.finish = (int *)0x0;
  thePath.fClosedNodes.field0_0x0.end_of_storage = (int *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  pRVar4 = (room->field0_0x0).__vtable;
  iVar9 = (*(code *)pRVar4[1].IsOutside)
                    ((int)&(room->field0_0x0).__vtable + (int)*(short *)&pRVar4[1].SetAmbientLight);
  pRVar4 = (room->field0_0x0).__vtable;
  iVar9 = (iVar12 * -0x33333333 >> 2) * iVar9 + 0x32;
  if (1000 < iVar9) {
    iVar9 = 1000;
  }
  lVar18 = (*(code *)pRVar4[1].IsOutside)
                     ((int)&(room->field0_0x0).__vtable + (int)*(short *)&pRVar4[1].SetAmbientLight)
  ;
  if ((0x100 < lVar18) && (prs._40_4_ != 0)) {
    prs._40_4_ = 0;
    InitPath__4PathPC13RoutingParams(&thePath,&prs);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
                    /* end of inlined section */
    while ((thePath.fPathStage != 0 && (thePath.fIterations <= iVar9))) {
      if (thePath.fPathStage == 1) {
        thePath.fIterations = thePath.fIterations + 1;
        bVar7 = OpenANode__4Path(&thePath);
        if (bVar7) {
          if (*(int *)&(thePath.fParams)->smooth == 0) {
            thePath.fPathStage = 0;
          }
          else {
            thePath.fPathStage = 2;
          }
        }
      }
      else if (thePath.fPathStage == 2) {
        thePath.fIterations = thePath.fIterations + 1;
        bVar7 = DoOneSmooth__4Path(&thePath);
        if (bVar7) {
          thePath.fPathStage = 0;
        }
      }
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    prs._40_4_ = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
    bVar7 = (int)thePath.fFinalPath.finish - (int)thePath.fFinalPath.start >> 3 == 0;
    Clear__14SpacePartition(&_4Path_fSpacePartition);
    for (piVar11 = thePath.fReverseNodePath.field0_0x0.start;
        piVar11 != thePath.fReverseNodePath.field0_0x0.finish; piVar11 = piVar11 + 1) {
    }
    thePath.fReverseNodePath.field0_0x0.finish = thePath.fReverseNodePath.field0_0x0.start;
    for (piVar11 = thePath.fSpatialNodePath.field0_0x0.start;
        piVar11 != thePath.fSpatialNodePath.field0_0x0.finish; piVar11 = piVar11 + 1) {
    }
    thePath.fSpatialNodePath.field0_0x0.finish = thePath.fSpatialNodePath.field0_0x0.start;
    for (ptVar23 = thePath.fFinalPath.start; ptVar23 != thePath.fFinalPath.finish;
        ptVar23 = ptVar23 + 1) {
    }
    thePath.fFinalPath.finish = thePath.fFinalPath.start;
    thePath.fPathStage = -1;
  }
                    /* end of inlined section */
  if (!bVar7) {
    InitPath__4PathPC13RoutingParams(&thePath,&prs);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
                    /* end of inlined section */
    while ((thePath.fPathStage != 0 && (thePath.fIterations <= iVar9))) {
      if (thePath.fPathStage == 1) {
        thePath.fIterations = thePath.fIterations + 1;
        bVar7 = OpenANode__4Path(&thePath);
        if (bVar7) {
          if (*(int *)&(thePath.fParams)->smooth == 0) {
            thePath.fPathStage = 0;
          }
          else {
            thePath.fPathStage = 2;
          }
        }
      }
      else if (thePath.fPathStage == 2) {
        thePath.fIterations = thePath.fIterations + 1;
        bVar7 = DoOneSmooth__4Path(&thePath);
        if (bVar7) {
          thePath.fPathStage = 0;
        }
      }
    }
                    /* end of inlined section */
    if (thePath.fChosenGoal == -1) {
      ClearCurrentGoal__6XRoute(this);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      SetCurrentGoal__6XRoutei(this,goalMap_2076[thePath.fChosenGoal]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
    }
    iVar12 = (int)thePath.fFinalPath.finish - (int)thePath.fFinalPath.start >> 3;
                    /* end of inlined section */
    iVar9 = 0;
    if (0 < iVar12) {
      do {
        pFVar5 = local_fc->finish;
        uVar19 = (ulong)(int)pFVar5;
        fpt = (FTilePt)CONCAT44(thePath.fFinalPath.start[iVar9].x,thePath.fFinalPath.start[iVar9].y)
        ;
        if (uVar19 == (long)(int)local_fc->end_of_storage) {
          uVar19 = (ulong)(int)&fpt;
          insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                    (local_fc,pFVar5,&fpt);
        }
        else {
          puVar1 = (undefined *)((int)&(pFVar5->x).whole + 3);
          uVar24 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar24);
          *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | (ulong)fpt >> (7 - uVar24) * 8;
          uVar24 = (uint)pFVar5 & 7;
          *(ulong *)((int)pFVar5 - uVar24) =
               (long)fpt << uVar24 * 8 |
               *(ulong *)((int)pFVar5 - uVar24) & 0xffffffffffffffffU >> (8 - uVar24) * 8;
          local_fc->finish = local_fc->finish + 1;
        }
                    /* end of inlined section */
        iVar9 = iVar9 + 1;
        StressVector__H1Z7FTilePt_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(local_fc);
      } while (iVar9 < iVar12);
    }
    if (iVar12 != 0) {
      if (verifyRoute_2031 != 0) {
                    /* end of inlined section */
        uVar24 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        pFVar5 = ((vector_FTilePt___malloc_alloc_template_0___ *)&local_fc->start)->start;
                    /* end of inlined section */
        if ((int)local_fc->finish - (int)pFVar5 >> 3 != 1) {
          do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            uVar22 = uVar24 + 1;
            pFVar17 = pFVar5 + uVar24;
            puVar1 = (undefined *)((int)&(pFVar17->x).whole + 3);
                    /* end of inlined section */
            uVar24 = (uint)puVar1 & 7;
            uVar2 = (uint)pFVar17 & 7;
            fpt = (FTilePt)((*(long *)(puVar1 + -uVar24) << (7 - uVar24) * 8 |
                            uVar19 & 0xffffffffffffffffU >> (uVar24 + 1) * 8) &
                            -1L << (8 - uVar2) * 8 | *(ulong *)((int)pFVar17 - uVar2) >> uVar2 * 8);
            puVar1 = (undefined *)((int)&fpt.x.whole + 3);
            uVar24 = (uint)puVar1 & 7;
            puVar6 = (ulong *)(puVar1 + -uVar24);
            *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | (ulong)fpt >> (7 - uVar24) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pFVar17 = pFVar5 + uVar22;
            puVar1 = (undefined *)((int)&(pFVar17->x).whole + 3);
                    /* end of inlined section */
            uVar24 = (uint)puVar1 & 7;
            uVar2 = (uint)pFVar17 & 7;
            b = (FTilePt)((*(long *)(puVar1 + -uVar24) << (7 - uVar24) * 8 |
                          (long)(int)pFVar5 & 0xffffffffffffffffU >> (uVar24 + 1) * 8) &
                          -1L << (8 - uVar2) * 8 | *(ulong *)((int)pFVar17 - uVar2) >> uVar2 * 8);
            puVar1 = (undefined *)((int)&b.x.whole + 3);
            uVar24 = (uint)puVar1 & 7;
            puVar6 = (ulong *)(puVar1 + -uVar24);
            *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | (ulong)b >> (7 - uVar24) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
            iVar12 = fpt.x.whole - b.x.whole;
            iVar13 = fpt.y.whole - b.y.whole;
            iVar9 = -iVar12;
            if (-1 < iVar12) {
              iVar9 = iVar12;
            }
            iVar12 = -iVar13;
            if (-1 < iVar13) {
              iVar12 = iVar13;
            }
                    /* end of inlined section */
            fVar25 = (float)(iVar9 + 1);
            if (fVar25 <= (float)(iVar12 + 1)) {
              fVar25 = (float)(iVar12 + 1);
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
            fVar27 = 0.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
            last = (FTilePt)0xfffffff0fffffff0;
                    /* end of inlined section */
            fVar26 = 0.5;
            fVar28 = 1.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
            do {
              test.x.whole = (int)((float)fpt.x.whole + fVar27 * (float)(b.x.whole - fpt.x.whole) +
                                  fVar26);
              test.y.whole = (int)((float)fpt.y.whole + fVar27 * (float)(b.y.whole - fpt.y.whole) +
                                  fVar26);
              bVar7 = __eq__C7FTilePtRC7FTilePt(&test,&last);
                    /* end of inlined section */
              if (!bVar7) {
                last = (FTilePt)CONCAT44(test.x.whole,test.y.whole);
                puVar1 = (undefined *)((int)&last.x.whole + 3);
                uVar24 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar24);
                *puVar6 = *puVar6 & -1L << (uVar24 + 1) * 8 | (ulong)last >> (7 - uVar24) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                testPt.x = test.x.whole;
                    /* end of inlined section */
                testPt.y = test.y.whole;
                bVar7 = Stuck__FPt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P8tagPOINT
                                  (prs.partition1,&testPt);
                if (!bVar7) {
                  Stuck__FPt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P8tagPOINT
                            (prs.partition2,&testPt);
                }
              }
              fVar27 = fVar27 + 1.0 / fVar25;
            } while (fVar27 < fVar28);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            uVar19 = (ulong)(int)local_fc;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pFVar5 = ((vector_FTilePt___malloc_alloc_template_0___ *)&local_fc->start)->start;
                    /* end of inlined section */
            uVar24 = uVar22;
          } while (uVar22 < ((int)local_fc->finish - (int)pFVar5 >> 3) - 1U);
        }
      }
      ___4Path(&thePath,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      for (pPVar20 = goalList.start; pPVar20 != goalList.finish; pPVar20 = pPVar20 + 1) {
      }
      if (goalList.start != (PenaltyRect *)0x0) {
        if (((int)goalList.end_of_storage - (int)goalList.start) * -0x33333333 >> 2 == 0)
        goto LAB_001ff5b0;
        free(goalList.start);
      }
LAB_001ff5b0:
      for (pPVar20 = overridePartition.start; pPVar20 != overridePartition.finish;
          pPVar20 = pPVar20 + 1) {
      }
      if (overridePartition.start != (PenaltyRect *)0x0) {
        if (((int)overridePartition.end_of_storage - (int)overridePartition.start) * -0x33333333 >>
            2 == 0) {
          return true;
        }
        free(overridePartition.start);
      }
                    /* end of inlined section */
      return true;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
    this->fResult = 3;
                    /* end of inlined section */
    ___4Path(&thePath,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    for (pPVar20 = goalList.start; pPVar20 != goalList.finish; pPVar20 = pPVar20 + 1) {
    }
    if (goalList.start == (PenaltyRect *)0x0) {
LAB_001ff684:
    }
    else if (((int)goalList.end_of_storage - (int)goalList.start) * -0x33333333 >> 2 != 0) {
      free(goalList.start);
      goto LAB_001ff684;
    }
    for (pPVar20 = overridePartition.start; pPVar20 != overridePartition.finish;
        pPVar20 = pPVar20 + 1) {
    }
    goto LAB_001ff6b4;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
  this->fResult = 3;
                    /* end of inlined section */
  ___4Path(&thePath,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  for (pPVar20 = goalList.start; pPVar20 != goalList.finish; pPVar20 = pPVar20 + 1) {
  }
  if (goalList.start == (PenaltyRect *)0x0) {
LAB_001ff15c:
  }
  else if (((int)goalList.end_of_storage - (int)goalList.start) * -0x33333333 >> 2 != 0) {
    free(goalList.start);
    goto LAB_001ff15c;
  }
  for (pPVar20 = overridePartition.start; pPVar20 != overridePartition.finish; pPVar20 = pPVar20 + 1
      ) {
  }
LAB_001ff6b4:
  if (overridePartition.start == (PenaltyRect *)0x0) {
    return (bool)0;
  }
  if (((int)overridePartition.end_of_storage - (int)overridePartition.start) * -0x33333333 >> 2 != 0
     ) {
    free(overridePartition.start);
    return (bool)0;
  }
  return false;
}

void TileList::FindNearestPoint(FTilePt *inOutPt, Int curDest) {
	int minCnt;
	int maxCnt;
	FTilePt p;
	FTilePt best;
	float bestDist;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	Int ys;
	Int xs;
	int cnt;
	FTilePt a;
	FTilePt b;
	float xdelAB;
	float ydelAB;
	float xdelPB;
	float ydelPB;
	float sqDistAB;
	float t;
	FTilePt closest;
	float dist;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	float t;
	Int ys;
	Int xs;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  FTilePt *pFVar5;
  int iVar6;
  ulong uVar7;
  FTilePt *pFVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  FTilePt p;
  FTilePt best;
  FTilePt a;
  FTilePt b;
  FTilePt closest;
  
                    /* end of inlined section */
  uVar11 = 0;
  if (curDest < 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    uVar13 = (long)(((int)(this->field0_0x0).finish - (int)(this->field0_0x0).start >> 3) + -3);
  }
  else {
    uVar13 = 0;
    if (curDest == 0) {
      uVar11 = 0;
    }
    else if (0 < curDest) {
      uVar11 = (ulong)(curDest + -1);
      uVar13 = uVar11;
    }
  }
  if (-1 < (long)uVar11) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pFVar5 = (this->field0_0x0).start;
                    /* end of inlined section */
    uVar7 = (ulong)(((int)(this->field0_0x0).finish - (int)pFVar5 >> 3) + -3);
    if ((uVar11 <= uVar7) && (-1 < (long)uVar13)) {
      iVar6 = (int)uVar11;
                    /* end of inlined section */
      if (uVar13 <= uVar7) {
        puVar1 = (undefined *)((int)&(inOutPt->x).whole + 3);
                    /* end of inlined section */
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)inOutPt & 7;
        uVar7 = *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
                *(ulong *)((int)inOutPt - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)&p.x.whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        pFVar5 = pFVar5 + iVar6;
        puVar1 = (undefined *)((int)&(pFVar5->x).whole + 3);
                    /* end of inlined section */
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)pFVar5 & 7;
        best = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                         uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                        *(ulong *)((int)pFVar5 - uVar3) >> uVar3 * 8);
        puVar1 = (undefined *)((int)&best.x.whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)best >> (7 - uVar2) * 8;
        uVar12 = (ulong)((long)uVar13 < (long)uVar11);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        p.x.whole = (int)(uVar7 >> 0x20);
        p.y.whole = (int)uVar7;
                    /* end of inlined section */
        fVar18 = (float)((best.x.whole - p.x.whole) * (best.x.whole - p.x.whole) +
                        (best.y.whole - p.y.whole) * (best.y.whole - p.y.whole));
        if (uVar12 == 0) {
          do {
            iVar6 = iVar6 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pFVar5 = (this->field0_0x0).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pFVar8 = pFVar5 + (int)uVar11;
            pFVar5 = pFVar5 + iVar6;
            puVar1 = (undefined *)((int)&(pFVar8->x).whole + 3);
                    /* end of inlined section */
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)pFVar8 & 7;
            a = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                          uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8
                         | *(ulong *)((int)pFVar8 - uVar3) >> uVar3 * 8);
            puVar1 = (undefined *)((int)&a.x.whole + 3);
            uVar2 = (uint)puVar1 & 7;
            puVar4 = (ulong *)(puVar1 + -uVar2);
            *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)a >> (7 - uVar2) * 8;
            puVar1 = (undefined *)((int)&(pFVar5->x).whole + 3);
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)pFVar5 & 7;
            b = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                          uVar12 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8
                         | *(ulong *)((int)pFVar5 - uVar3) >> uVar3 * 8);
            puVar1 = (undefined *)((int)&b.x.whole + 3);
            uVar2 = (uint)puVar1 & 7;
            puVar4 = (ulong *)(puVar1 + -uVar2);
            *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)b >> (7 - uVar2) * 8;
            fVar14 = (float)(a.y.whole - b.y.whole);
            fVar17 = (float)(a.x.whole - b.x.whole);
            fVar14 = ((float)(p.x.whole - b.x.whole) * fVar17 +
                     (float)(p.y.whole - b.y.whole) * fVar14) / (fVar17 * fVar17 + fVar14 * fVar14);
            if (fVar14 < 0.0) {
              fVar14 = 0.0;
            }
            else if (1.0 < fVar14) {
              fVar14 = 1.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
            }
            uVar12 = (ulong)b.y.whole;
            iVar15 = (int)((float)b.x.whole + fVar14 * (float)(a.x.whole - b.x.whole) + 0.5);
            iVar16 = (int)((float)b.y.whole + fVar14 * (float)(a.y.whole - b.y.whole) + 0.5);
            iVar9 = iVar15 - p.x.whole;
            iVar10 = iVar16 - p.y.whole;
                    /* end of inlined section */
            fVar14 = (float)(iVar9 * iVar9 + iVar10 * iVar10);
            if (fVar14 < fVar18) {
              best = (FTilePt)CONCAT44(iVar15,iVar16);
              puVar1 = (undefined *)((int)&best.x.whole + 3);
              uVar2 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar2);
              *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)best >> (7 - uVar2) * 8;
              fVar18 = fVar14;
            }
            uVar11 = (long)iVar6;
          } while ((long)iVar6 <= (long)uVar13);
        }
        puVar1 = (undefined *)((int)&(inOutPt->x).whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)best >> (7 - uVar2) * 8;
        uVar2 = (uint)inOutPt & 7;
        *(ulong *)((int)inOutPt - uVar2) =
             (long)best << uVar2 * 8 |
             *(ulong *)((int)inOutPt - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      }
    }
  }
  return;
}

static void SetDirectionForGoalSearch(cXObject *router, SInt16 objDir, SInt16 scanDir, RoutingSlot *slot) {
	SInt16 dir;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(short)scanDir;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  if (*(char *)&slot->rsFlags == '\0') {
    sVar1 = objDir + 4;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    iVar3 = slot->facing;
                    /* end of inlined section */
    if (iVar3 == -1) goto LAB_001ffa54;
                    /* end of inlined section */
    if (iVar3 == -2) {
      sVar1 = scanDir + 4;
    }
    else {
                    /* end of inlined section */
      sVar1 = objDir + (short)iVar3;
      if (iVar3 == -3) {
        return;
      }
    }
  }
                    /* end of inlined section */
  iVar2 = (int)sVar1;
LAB_001ffa54:
  iVar3 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  (*(code *)router->__vtable->GetObstacleAtLocation)
            ((int)&router->_vb1946 + (int)*(short *)&router->__vtable->GetRelMatrix,1,
             (iVar2 + (iVar3 >> 3) * -8) * 0x10000 >> 0x10);
  return;
}

void XRoute::ChooseStartingPoint() {
	FTilePt startLoc;
	cXObject *container;
	XRoute *this;
	XRoute *this;
	StdPrm entryFlags;
	Int bestDist;
	bool distFound;
	FTilePt destLoc;
	int dir;
	Int checkDir;
	FTilePt checkLoc;
	Int direction;
	Int &x;
	Int dir;
	Int dist;
	Int ys;
	Int xs;
	XRoute *this;
	XRoute *this;
	
  undefined *puVar1;
  short sVar2;
  cXObject__109_1077__vtable *pcVar3;
  ulong *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  EvalTile EVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FTilePt startLoc;
  FTilePt destLoc;
  FTilePt checkLoc;
  int local_80;
  int local_7c;
  
  pcVar3 = this->fStart->__vtable;
  (*(code *)pcVar3[1].UserCanPickup)
            ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar3[1].UserPlace,&startLoc);
  puVar1 = (undefined *)((int)&(this->fStartPt).x.whole + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
  uVar10 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar10);
  *puVar4 = *puVar4 & -1L << (uVar10 + 1) * 8 | (ulong)startLoc >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->fStartPt & 7;
  puVar4 = (ulong *)((int)&this->fStartPt - uVar10);
  *puVar4 = (long)startLoc << uVar10 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  this->fExitDirFlag = 0;
                    /* end of inlined section */
  pcVar3 = this->fStart->__vtable;
  lVar9 = (*(code *)pcVar3[1].IsRenderingRoot)
                    ((int)&this->fStart->_vb1946 + (int)*(short *)&pcVar3[1].GetRenderLayer);
  if (lVar9 != 0) {
    iVar11 = (int)lVar9;
    lVar9 = (**(code **)(*(int *)(iVar11 + 4) + 0x3ec))
                      (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 1000));
    iVar13 = 0;
    if (lVar9 != 0) {
      bVar5 = false;
      uVar12 = 0;
      iVar6 = (**(code **)(*(int *)(iVar11 + 4) + 0x2a4))
                        (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x2a0));
      sVar2 = *(short *)(iVar6 + 0x84);
      pcVar3 = this->fDest->__vtable;
      (*(code *)pcVar3[1].UserCanPickup)
                ((int)&this->fDest->_vb1946 + (int)*(short *)&pcVar3[1].UserPlace,&destLoc);
      uVar10 = (int)sVar2;
      do {
        if ((uVar10 & 1) != 0) {
          iVar7 = (**(code **)(*(int *)(iVar11 + 4) + 0x20c))
                            (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x208),1);
          iVar7 = uVar12 + iVar7;
          puVar1 = (undefined *)((int)&checkLoc.x.whole + 3);
          uVar10 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar10);
          *puVar4 = *puVar4 & -1L << (uVar10 + 1) * 8 | (ulong)startLoc >> (7 - uVar10) * 8;
          iVar6 = iVar7 + 7;
          if (-1 < iVar7) {
            iVar6 = iVar7;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
          local_7c = 0;
                    /* end of inlined section */
          uVar10 = iVar7 + (iVar6 >> 3) * -8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
          local_80 = 0;
          switch(uVar10 & 7) {
          case 1:
            local_7c = 1;
          case 0:
            local_80 = -1;
            break;
          case 3:
            local_80 = 1;
          case 2:
            local_7c = 1;
            break;
          case 5:
            local_7c = -1;
          case 4:
            local_80 = 1;
            break;
          case 7:
            local_80 = -1;
          case 6:
            local_7c = -1;
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
          checkLoc.x = startLoc.x;
          checkLoc.y = startLoc.y;
          checkLoc = (FTilePt)CONCAT44(checkLoc.x.whole + local_7c * 0x10,
                                       checkLoc.y.whole + local_80 * 0x10);
                    /* end of inlined section */
                    /* end of inlined section */
          EVar8 = EvalTileForGoal__6XRouteR7FTilePti(this,&checkLoc,uVar10);
          if (EVar8 + ~kEvalTileAltsDontMatch < 2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
            iVar6 = (destLoc.x.whole - checkLoc.x.whole) * (destLoc.x.whole - checkLoc.x.whole) +
                    (destLoc.y.whole - checkLoc.y.whole) * (destLoc.y.whole - checkLoc.y.whole);
            if ((!bVar5) || (iVar6 < iVar13)) {
              puVar1 = (undefined *)((int)&(this->fStartPt).x.whole + 3);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
              uVar10 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar10);
              *puVar4 = *puVar4 & -1L << (uVar10 + 1) * 8 | (ulong)checkLoc >> (7 - uVar10) * 8;
              uVar10 = (uint)&this->fStartPt & 7;
              puVar4 = (ulong *)((int)&this->fStartPt - uVar10);
              *puVar4 = (long)checkLoc << uVar10 * 8 |
                        *puVar4 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
              this->fExitDirFlag = 1 << (uVar12 & 0x1f);
                    /* end of inlined section */
              bVar5 = true;
              iVar13 = iVar6;
            }
          }
        }
        uVar12 = uVar12 + 1;
        uVar10 = (int)sVar2 >> (uVar12 & 0x1f);
      } while ((int)uVar12 < 8);
    }
  }
  return;
}

void XRoute::ConstructGoals() {
	RoutingSlot *routingSlot;
	cXObject *dest;
	Int objDir;
	FTilePt objLoc;
	Int minTileDist;
	Int maxTileDist;
	Int optimalDist;
	Int chairBonus;
	Int standBonus;
	Int maxSqDist;
	Int minSqDist;
	RouteGoal rg;
	FTilePt &objectLocation;
	Int wallBlockFlags;
	Int wallDiminishFlags;
	int resolution;
	float coneMult;
	RouteBlockers block;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RouteGoal rg;
	Int wallDir;
	RouteBlockers block;
	EvalTile tileResult;
	Int y;
	Int x;
	Int dir;
	Int yinc;
	Int xinc;
	int tileResult;
	XRoute *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	int i;
	RoutingSlot *this;
	Int dirCount;
	Int curDirection;
	Int chairDir;
	Int endY;
	Int startY;
	bool wallFound;
	RoutingSlot *this;
	Int dir;
	Int y;
	Int maxX;
	RoutingSlot *this;
	Int x;
	FTilePt test;
	cXObject *obstacle;
	int entryDir;
	Int bonus;
	SInt16 chairID;
	SInt16 entryDirFlag;
	Int finalX;
	Int finalY;
	float sqDist;
	int dist;
	EvalTile tileResult;
	bool award;
	Int testX;
	Int testY;
	bool inCone;
	Int dir;
	Int &x;
	Int &y;
	cXObject *sitter;
	RoutingSlot *this;
	RoutingSlot *this;
	XRoute *this;
	int tileResult;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > tempGoals;
	RouteGoal *it;
	vector<RouteGoal,__malloc_alloc_template<0> > &x;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *result;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal &x;
	RouteGoal &value;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	int i;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *choice;
	unsigned int lim;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal &x;
	RouteGoal &value;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *last;
	RouteGoal *first;
	RouteGoal *pointer;
	XRoute *this;
	
  undefined *puVar1;
  short sVar2;
  cXObject__109_1077__vtable *pcVar3;
  RouteGoal *position;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  cXObject__109_1077 *pcVar13;
  EvalTile EVar14;
  uint uVar15;
  RouteGoal *result;
  RouteGoal *pRVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  RouteGoal *pRVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  RouteGoal *pRVar35;
  int iVar36;
  RoutingSlot *slot;
  int iVar37;
  float fVar38;
  FTilePt objLoc;
  undefined auStack_180 [12];
  ushort local_174;
  ushort local_172;
  RouteGoal rg;
  RouteBlockers block;
  FTilePt test;
  vector_RouteGoal___malloc_alloc_template_0___ tempGoals;
  int finalX;
  int finalY;
  cXObject__109_1077 *dest;
  int objDir;
  int minTileDist;
  int maxTileDist;
  int optimalDist;
  int chairBonus;
  int standBonus;
  int maxSqDist;
  int minSqDist;
  FTilePt *objectLocation;
  int wallBlockFlags;
  int wallDiminishFlags;
  int resolution;
  int dirCount;
  int chairDir;
  int endY;
  bool wallFound;
  int maxX;
  int x;
  ushort chairID;
  ushort entryDirFlag;
  
  slot = &this->fSlot;
  ResetGoals__6XRoute(this);
  dest = this->fDest;
  objDir = (*(code *)dest->__vtable->ReconType)
                     ((int)&dest->_vb1946 + (int)*(short *)&dest->__vtable->ReconStream,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  pcVar3 = this->fDest->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  if (((this->fSlot).rsFlags >> 9 & 1U) != 0) {
    objDir = 0;
  }
  (*(code *)pcVar3[1].UserCanPickup)
            ((int)&this->fDest->_vb1946 + (int)*(short *)&pcVar3[1].UserPlace,&objLoc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  if ((*(ushort *)((int)&(this->fSlot).rsFlags + 2) & 1) != 0) {
    GetAverageLocation__FP8cXObject((cXObject__21_1030 *)auStack_180);
    puVar1 = (undefined *)((int)&objLoc.x.whole + 3);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | (ulong)auStack_180._0_8_ >> (7 - uVar15) * 8;
    objLoc = auStack_180._0_8_;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  uVar15 = (this->fSlot).rsFlags;
                    /* end of inlined section */
  if ((uVar15 & 0xff) == 0) {
                    /* end of inlined section */
    TransformToWorldCoords__FPC7FTilePtffiP7FTilePt
              (&objLoc,(this->fSlot).field0_0x0.xoffset,(this->fSlot).field0_0x0.yoffset,objDir,
               &rg.loc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    bVar9 = __eq__C7FTilePtRC7FTilePt(&objLoc,&rg.loc);
    uVar15 = 0xffffffff;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    if ((!bVar9) &&
       ((objLoc.x.whole >> 4 != rg.loc.x.whole >> 4 || (objLoc.y.whole >> 4 != rg.loc.y.whole >> 4))
       )) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      iVar33 = rg.loc.y.whole - objLoc.y.whole;
      iVar17 = rg.loc.x.whole - objLoc.x.whole;
      iVar24 = -iVar17;
      if (-1 < iVar17) {
        iVar24 = iVar17;
      }
      iVar21 = -iVar33;
      if (-1 < iVar33) {
        iVar21 = iVar33;
      }
      uVar26 = 4;
      if ((iVar21 <= iVar24 << 1) && (uVar26 = 3, iVar21 << 1 < iVar24)) {
        uVar26 = 2;
      }
      if (iVar17 < 0) {
        if (uVar26 == 2) {
          uVar26 = 6;
        }
        else if (uVar26 == 3) {
          uVar26 = 5;
        }
      }
      uVar15 = uVar26;
      if (iVar33 < 0) {
        if (uVar26 == 4) {
          uVar15 = 0;
        }
        else if (uVar26 < 5) {
          uVar15 = 1;
          if (uVar26 != 3) {
            uVar15 = uVar26;
          }
        }
        else if (uVar26 == 5) {
          uVar15 = 7;
        }
      }
    }
    SetDirectionForGoalSearch__FP8cXObjectssP11RoutingSlot(this->fStart,(ushort)objDir,0,slot);
    bVar6 = false;
    bVar9 = false;
    bVar7 = false;
    bVar8 = false;
    EVar14 = EvalTileForGoal__6XRouteR7FTilePti(this,&rg.loc,uVar15);
    switch(EVar14) {
    case kEvalTileOutOfBounds:
      break;
    case kEvalTileObstacle:
      bVar6 = true;
      break;
    case kEvalTileRoom:
    case kEvalTileWallInFront:
      bVar7 = true;
      break;
    case kEvalTileAltsDontMatch:
      bVar8 = true;
      break;
    case kEvalTilePersonObstacle:
      bVar9 = true;
    }
    if (EVar14 == kEvalTileAllClear) {
      rg.score = 100;
      rg._12_4_ = (uint)rg.entryDirFlag << 0x10;
      AddGoal__6XRouteRC9RouteGoal(this,&rg);
      return;
    }
    iVar24 = 0xd;
    if ((((bVar9) || (iVar24 = 8, bVar6)) || (iVar24 = 0xb, bVar7)) || (iVar24 = 0xc, bVar8))
    goto LAB_00200be4;
                    /* end of inlined section */
    rg.loc.y.whole = 0;
  }
  else {
    iVar24 = (this->fSlot).minProximity;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    iVar17 = (this->fSlot).maxProximity;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    iVar33 = (this->fSlot).optimalProximity;
                    /* end of inlined section */
    if (0x1ff < iVar24 - 1U) {
      return;
    }
    if (iVar17 < 1) {
      return;
    }
    if (0x200 < iVar17) {
      return;
    }
    if (iVar17 < iVar24) {
      return;
    }
    if (iVar33 < iVar24) {
      return;
    }
    if (iVar17 < iVar33) {
      return;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    iVar21 = (this->fSlot).multipliers[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    iVar30 = (this->fSlot).multipliers[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
    if (iVar30 < iVar21) {
      iVar30 = iVar21;
    }
    auStack_180._8_4_ = 0;
    iVar21 = (this->fSlot).multipliers[1] * 10;
    iVar30 = iVar30 * 10;
    wallBlockFlags = 0;
    if ((uVar15 & 0x800) == 0) {
      (*(code *)dest->__vtable[1].TestIntersection)
                (&rg,(int)&dest->_vb1946 + (int)*(short *)&dest->__vtable[1].IsInWorld);
      wallBlockFlags = GetWallBlockFlagsAtTile__8cXObjectRC7CTilePti((CTilePt *)&rg,objDir);
      ___7CTilePt((CTilePt *)&rg,2);
    }
    wallDiminishFlags = 0;
    uVar32 = (ulong)wallBlockFlags;
    iVar27 = (this->fSlot).resolution;
    uVar31 = (ulong)iVar27;
    if (uVar32 != 0) {
      uVar15 = 0;
      do {
        uVar26 = uVar15 + 1;
        if ((wallBlockFlags >> (uVar15 & 0x1f) & 1U) != 0) {
          wallDiminishFlags =
               wallDiminishFlags | 1 << (uVar15 & 0x1f) | 1 << (uVar26 & 7) | 1 << (uVar15 - 1 & 7);
          uVar32 = (ulong)wallDiminishFlags;
        }
        uVar15 = uVar26;
      } while ((int)uVar26 < 8);
    }
                    /* end of inlined section */
    iVar11 = 0x10;
    if (iVar21 == 0) {
      iVar11 = iVar27;
    }
    rg.loc.y.whole = 0;
    if (0 < iVar21) {
      rg.loc.y.whole = (int)(iVar30 == 0);
    }
    dirCount = 0;
    rg.loc.x.whole = 0;
    rg.score = 0;
    rg._12_4_ = 0;
    bVar9 = false;
    bVar6 = false;
    bVar7 = false;
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
      iVar27 = dirCount + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
      if (((this->fSlot).rsFlags >> (dirCount & 0x1fU) & 1U) != 0) {
        uVar31 = (ulong)wallBlockFlags;
        uVar32 = (ulong)objDir;
        if ((wallBlockFlags >> (dirCount & 0x1fU) & 1U) == 0) {
          iVar29 = objDir + dirCount;
          uVar32 = (ulong)iVar24;
          iVar19 = iVar29 + 7;
          if (-1 < iVar29) {
            iVar19 = iVar29;
          }
          iVar29 = iVar29 + (iVar19 >> 3) * -8;
          iVar22 = iVar29 + 4;
          iVar19 = iVar29 + 0xb;
          if (-1 < iVar22) {
            iVar19 = iVar22;
          }
          endY = (int)((16.0 / (float)iVar11) * (float)-iVar17 * 0.0625);
          iVar37 = (int)((16.0 / (float)iVar11) * (float)-iVar24 * 0.0625);
          lVar34 = (long)iVar37;
          if (0 < iVar21) {
            lVar34 = (long)(iVar37 + 1);
            endY = endY + -1;
            if (-1 < lVar34) {
              lVar34 = -1;
            }
          }
          uVar31 = (long)(int)slot;
          SetDirectionForGoalSearch__FP8cXObjectssP11RoutingSlot
                    (this->fStart,(ushort)objDir,(ushort)iVar29,slot);
          bVar8 = false;
          if (endY <= lVar34) {
            do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
              iVar36 = (int)lVar34;
              iVar28 = dirCount + 2;
              uVar32 = (ulong)(iVar36 + -1);
              iVar37 = dirCount + 9;
              if (-1 < iVar28) {
                iVar37 = iVar28;
              }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
              iVar37 = -((this->fSlot).rsFlags >> (iVar28 + (iVar37 >> 3) * -8 & 0x1fU) & 1U) -
                       iVar36;
              uVar31 = (ulong)iVar37;
              x = iVar36;
              if (lVar34 <= (long)uVar31) {
                do {
                    /* end of inlined section */
                  uVar15 = 0xffffffff;
                  TransformToWorldCoords__FPC7FTilePtffiP7FTilePt
                            (&objLoc,(float)(x * iVar11) + (slot->field0_0x0).xoffset,
                             (float)(iVar36 * iVar11) + (this->fSlot).field0_0x0.yoffset,iVar29,
                             (FTilePt *)auStack_180);
                  do {
                    chairID = 0;
                    _entryDirFlag = 0;
                    finalX = (int)((float)(x * iVar11) + (slot->field0_0x0).xoffset);
                    finalY = (int)((float)(iVar36 * iVar11) + (this->fSlot).field0_0x0.yoffset);
                    iVar28 = 0;
                    if ((uVar15 == 0xffffffff) || (uVar15 == 8)) {
                      uVar26 = uVar15 ^ 8;
                      if (iVar21 <= iVar30) {
                        uVar26 = ~uVar15;
                      }
                      _entryDirFlag = (0x10000 << (dirCount & 0x1fU)) >> 0x10;
                      iVar28 = iVar30;
                      if (uVar26 != 0) {
                        iVar28 = 0;
                      }
                    }
                    else if (iVar21 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                      switch(uVar15 & 7) {
                      case 1:
                        finalX = finalX + 0x10;
                      case 0:
                        finalY = finalY + -0x10;
                        break;
                      case 3:
                        finalY = finalY + 0x10;
                      case 2:
                        finalX = finalX + 0x10;
                        break;
                      case 5:
                        finalX = finalX + -0x10;
                      case 4:
                        finalY = finalY + 0x10;
                        break;
                      case 7:
                        finalY = finalY + -0x10;
                      case 6:
                        finalX = finalX + -0x10;
                      }
                    /* end of inlined section */
                      uVar31 = (ulong)finalY;
                      bVar5 = true;
                      lVar25 = (long)(finalX >> 4);
                      if (finalY >> 4 == lVar34) {
                        bVar5 = false;
                        if (lVar34 <= lVar25) {
                          bVar5 = lVar25 <= iVar37;
                        }
                      }
                      else if ((lVar34 < finalY >> 4) && (bVar5 = false, lVar34 < lVar25)) {
                        bVar5 = lVar25 < iVar37;
                      }
                      if (bVar5) {
                        TransformToWorldCoords__FPC7FTilePtffiP7FTilePt
                                  (&objLoc,(float)finalX,(float)finalY,iVar29,&test);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                        lVar25 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                                           ((int)&_5Globs_pFixedWorld->__vtable +
                                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->
                                                            GetWallStorage,&test);
                        if (lVar25 == 0) {
                          pcVar3 = dest->__vtable;
                          sVar2 = *(short *)&pcVar3[1].ClearIdleStatus;
                          uVar18 = (*(code *)pcVar3[1].GetPlacementInfo)
                                             ((int)&dest->_vb1946 +
                                              (int)*(short *)&pcVar3[1].FindGoodLocation);
                          lVar25 = (*(code *)pcVar3[1].GetRect)
                                             ((int)&dest->_vb1946 + (int)sVar2,&test,uVar18);
                          if (lVar25 != 0) {
                            iVar20 = (int)lVar25;
                            lVar25 = (**(code **)(*(int *)(iVar20 + 4) + 0x3ec))
                                               (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 1000));
                            if ((lVar25 != 0) &&
                               (iVar12 = (**(code **)(*(int *)(iVar20 + 4) + 0x20c))
                                                   (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 0x208
                                                                       ),1),
                               iVar12 == iVar22 + (iVar19 >> 3) * -8)) {
                              iVar12 = (**(code **)(*(int *)(iVar20 + 4) + 0x2a4))
                                                 (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 0x2a0))
                              ;
                              _entryDirFlag = (int)(short)(1 << (uVar15 & 0x1f));
                              if ((((long)*(short *)(iVar12 + 0x84) & (long)_entryDirFlag) != 0) &&
                                 (iVar12 = abs(0), iVar12 < 2)) {
                                pcVar13 = (cXObject__109_1077 *)
                                          (**(code **)(*(int *)(iVar20 + 4) + 0x25c))
                                                    (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 600)
                                                     ,0);
                                if (pcVar13 == (cXObject__109_1077 *)0x0) {
                                  iVar28 = *(int *)(iVar20 + 4);
                                }
                                else {
                                  if (pcVar13 != this->fStart) {
                                    rg.loc.x.whole = 1;
                                    uVar10 = (*(code *)pcVar13->__vtable[1].UserCanPlace)
                                                       ((int)&pcVar13->_vb1946 +
                                                        (int)*(short *)&pcVar13->__vtable[1].
                                                                        IsPartOfMe);
                                    this->fBlockingObjectID = uVar10;
                                    goto LAB_002006d8;
                                  }
                                  iVar28 = *(int *)(iVar20 + 4);
                                }
                                chairID = (**(code **)(iVar28 + 700))
                                                    (iVar20 + *(short *)(iVar28 + 0x2b8));
                                iVar28 = iVar21;
                              }
                            }
                          }
                        }
                      }
                    }
LAB_002006d8:
                    if (((iVar28 == 0) ||
                        (fVar38 = (float)(finalX * finalX + finalY * finalY),
                        (float)(iVar17 * iVar17) < fVar38)) || (fVar38 < (float)(iVar24 * iVar24)))
                    goto LAB_002008fc;
                    fVar38 = sqrtf(fVar38);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    iVar20 = (int)fVar38 - iVar33;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    if (iVar20 < 0) {
                      iVar20 = -iVar20;
                    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    auStack_180._8_4_ =
                         (100 - (int)((float)iVar20 * (this->fSlot).gradient)) + iVar28;
                    if (((this->fSlot).rsFlags >> 0xd & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                      iVar28 = GetNextRandomNumber__Fv();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
                      auStack_180._8_4_ = auStack_180._8_4_ + iVar28 % 0x14 + -10;
                    }
                    if (((wallDiminishFlags >> (dirCount & 0x1fU) ^ 1U) & 1) != 0) {
                      auStack_180._8_4_ = auStack_180._8_4_ + 0x19;
                    }
                    TransformToWorldCoords__FPC7FTilePtffiP7FTilePt
                              (&objLoc,(float)finalX,(float)finalY,iVar29,&test);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    bVar5 = false;
                    if (test.x.whole == (this->fStartPt).x.whole) {
                      bVar5 = test.y.whole == (this->fStartPt).y.whole;
                    }
                    /* end of inlined section */
                    if (bVar5) {
                      auStack_180._8_4_ = auStack_180._8_4_ + 0x14;
                    }
                    EVar14 = EvalTileForGoal__6XRouteR7FTilePti(this,(FTilePt *)auStack_180,iVar29);
                    if (kEvalTileAllClear < EVar14) {
switchD_002008c0_caseD_6:
                      uVar31 = (ulong)_entryDirFlag;
                      local_174 = chairID;
                      local_172 = (ushort)_entryDirFlag;
                      AddGoal__6XRouteRC9RouteGoal(this,(RouteGoal *)auStack_180);
                      break;
                    }
                    uVar31 = (ulong)(int)(EVar14 * 4);
                    switch(EVar14) {
                    case kEvalTileOutOfBounds:
                      rg.score = 1;
                      break;
                    case kEvalTileObstacle:
                      rg._12_4_ = 1;
                      break;
                    default:
                      bVar6 = true;
                      break;
                    case kEvalTileAltsDontMatch:
                      bVar7 = true;
                      break;
                    case kEvalTilePersonObstacle:
                      bVar9 = true;
                      break;
                    case kEvalTileAllClear:
                      break;
                    }
                    switch(EVar14) {
                    case kEvalTileOutOfBounds:
                    case kEvalTileObstacle:
                    case kEvalTileRoom:
                    case kEvalTileAltsDontMatch:
                    case kEvalTilePersonObstacle:
                      break;
                    case kEvalTileWallInFront:
                      bVar8 = true;
                      break;
                    default:
                      goto switchD_002008c0_caseD_6;
                    }
LAB_002008fc:
                    uVar15 = uVar15 + 1;
                  } while ((int)uVar15 < 9);
                  uVar32 = (ulong)(x + 1);
                  x = x + 1;
                } while ((long)uVar32 <= (long)iVar37);
              }
              lVar34 = (long)(iVar36 + -1);
            } while ((endY <= lVar34) && (!bVar8));
          }
        }
        else {
          bVar6 = true;
        }
      }
      dirCount = iVar27;
    } while (iVar27 < 8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    uVar15 = (int)(this->field0_0x0).finish - (int)(this->field0_0x0).start >> 4;
                    /* end of inlined section */
    if ((uint)this->fMaxGoalCount < uVar15) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      if (uVar15 == 0) {
        result = (RouteGoal *)0x0;
        pRVar23 = (this->field0_0x0).start;
      }
      else {
        result = (RouteGoal *)malloc(uVar15 << 4);
        if (result == (RouteGoal *)0x0) {
          result = (RouteGoal *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar15 << 4);
          pRVar23 = (this->field0_0x0).start;
        }
        else {
          pRVar23 = (this->field0_0x0).start;
        }
      }
      pRVar16 = uninitialized_copy__H2ZPC9RouteGoalZP9RouteGoal_X01X01X11_X11
                          (pRVar23,(this->field0_0x0).finish,result);
      pRVar23 = (this->field0_0x0).start;
      pRVar35 = (this->field0_0x0).finish;
      iVar24 = (int)pRVar35 - (int)pRVar23;
      for (; pRVar23 != pRVar35; pRVar23 = pRVar23 + 1) {
      }
                    /* end of inlined section */
      (this->field0_0x0).finish = (RouteGoal *)((int)(this->field0_0x0).finish - iVar24);
      if (result != pRVar16) {
        uVar10 = result->chairID;
        pRVar23 = result;
        while( true ) {
          if (uVar10 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pRVar35 = (this->field0_0x0).finish;
            if (pRVar35 == (this->field0_0x0).end_of_storage) {
              insert_aux__t6vector2Z9RouteGoalZt23__malloc_alloc_template1i0P9RouteGoalRC9RouteGoal
                        (&this->field0_0x0,pRVar35,pRVar23);
            }
            else {
              puVar1 = (undefined *)((int)&(pRVar23->loc).x.whole + 3);
              uVar15 = (uint)puVar1 & 7;
              uVar26 = (uint)pRVar23 & 7;
              uVar31 = (*(long *)(puVar1 + -uVar15) << (7 - uVar15) * 8 |
                       uVar31 & 0xffffffffffffffffU >> (uVar15 + 1) * 8) & -1L << (8 - uVar26) * 8 |
                       *(ulong *)((int)pRVar23 - uVar26) >> uVar26 * 8;
              puVar1 = (undefined *)((int)&pRVar23->entryDirFlag + 1);
              uVar15 = (uint)puVar1 & 7;
              uVar26 = (uint)&pRVar23->score & 7;
              uVar32 = (*(long *)(puVar1 + -uVar15) << (7 - uVar15) * 8 |
                       uVar32 & 0xffffffffffffffffU >> (uVar15 + 1) * 8) & -1L << (8 - uVar26) * 8 |
                       *(ulong *)((int)&pRVar23->score - uVar26) >> uVar26 * 8;
              puVar1 = (undefined *)((int)&(pRVar35->loc).x.whole + 3);
              uVar15 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar15);
              *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar31 >> (7 - uVar15) * 8;
              uVar15 = (uint)pRVar35 & 7;
              *(ulong *)((int)pRVar35 - uVar15) =
                   uVar31 << uVar15 * 8 |
                   *(ulong *)((int)pRVar35 - uVar15) & 0xffffffffffffffffU >> (8 - uVar15) * 8;
              puVar1 = (undefined *)((int)&pRVar35->entryDirFlag + 1);
              uVar15 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar15);
              *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar32 >> (7 - uVar15) * 8;
              uVar15 = (uint)&pRVar35->score & 7;
              puVar4 = (ulong *)((int)&pRVar35->score - uVar15);
              *puVar4 = uVar32 << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
              (this->field0_0x0).finish = (this->field0_0x0).finish + 1;
            }
                    /* end of inlined section */
            pRVar23->score = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
          }
                    /* end of inlined section */
          if (pRVar23 + 1 == pRVar16) break;
          uVar10 = pRVar23[1].chairID;
          pRVar23 = pRVar23 + 1;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      iVar24 = (int)(this->field0_0x0).finish - (int)(this->field0_0x0).start >> 4;
                    /* end of inlined section */
      pRVar23 = result;
      if (iVar24 < this->fMaxGoalCount) {
        do {
          iVar33 = (int)pRVar16 - (int)result >> 4;
          iVar17 = GetNextRandomNumber__Fv();
          iVar17 = iVar17 % iVar33;
          if (iVar33 == 0) {
            trap(7);
          }
                    /* end of inlined section */
          iVar24 = iVar24 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
          for (pRVar35 = result + iVar17; pRVar35 != pRVar16; pRVar35 = pRVar35 + 1) {
            if (pRVar35->score != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
              position = (this->field0_0x0).finish;
              uVar31 = (ulong)(int)(this->field0_0x0).end_of_storage;
              if ((long)(int)position == uVar31) {
                insert_aux__t6vector2Z9RouteGoalZt23__malloc_alloc_template1i0P9RouteGoalRC9RouteGoal
                          (&this->field0_0x0,position,pRVar35);
              }
              else {
                puVar1 = (undefined *)((int)&(pRVar35->loc).x.whole + 3);
                uVar15 = (uint)puVar1 & 7;
                uVar26 = (uint)pRVar35 & 7;
                uVar31 = (*(long *)(puVar1 + -uVar15) << (7 - uVar15) * 8 |
                         uVar31 & 0xffffffffffffffffU >> (uVar15 + 1) * 8) & -1L << (8 - uVar26) * 8
                         | *(ulong *)((int)pRVar35 - uVar26) >> uVar26 * 8;
                puVar1 = (undefined *)((int)&pRVar35->entryDirFlag + 1);
                uVar15 = (uint)puVar1 & 7;
                uVar26 = (uint)&pRVar35->score & 7;
                uVar32 = (*(long *)(puVar1 + -uVar15) << (7 - uVar15) * 8 |
                         (long)(iVar17 * 0x10) & 0xffffffffffffffffU >> (uVar15 + 1) * 8) &
                         -1L << (8 - uVar26) * 8 |
                         *(ulong *)((int)&pRVar35->score - uVar26) >> uVar26 * 8;
                puVar1 = (undefined *)((int)&(position->loc).x.whole + 3);
                uVar15 = (uint)puVar1 & 7;
                puVar4 = (ulong *)(puVar1 + -uVar15);
                *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar31 >> (7 - uVar15) * 8;
                uVar15 = (uint)position & 7;
                *(ulong *)((int)position - uVar15) =
                     uVar31 << uVar15 * 8 |
                     *(ulong *)((int)position - uVar15) & 0xffffffffffffffffU >> (8 - uVar15) * 8;
                puVar1 = (undefined *)((int)&position->entryDirFlag + 1);
                uVar15 = (uint)puVar1 & 7;
                puVar4 = (ulong *)(puVar1 + -uVar15);
                *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar32 >> (7 - uVar15) * 8;
                uVar15 = (uint)&position->score & 7;
                puVar4 = (ulong *)((int)&position->score - uVar15);
                *puVar4 = uVar32 << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
                (this->field0_0x0).finish = (this->field0_0x0).finish + 1;
              }
                    /* end of inlined section */
              pRVar35->score = 0;
              iVar17 = this->fMaxGoalCount;
              goto LAB_00200b24;
            }
          }
          iVar17 = this->fMaxGoalCount;
LAB_00200b24:
        } while (iVar24 < iVar17);
      }
      for (; pRVar23 != pRVar16; pRVar23 = pRVar23 + 1) {
      }
      if ((result != (RouteGoal *)0x0) && ((int)pRVar16 - (int)result >> 4 != 0)) {
        free(result);
      }
    }
                    /* end of inlined section */
    iVar24 = CountGoals__6XRoute(this);
    if (iVar24 != 0) {
      return;
    }
    iVar24 = 9;
    if ((((rg.loc.x.whole != 0) || (iVar24 = 0xd, bVar9)) || (iVar24 = 8, rg._12_4_ != 0)) ||
       ((iVar24 = 0xb, bVar6 || (iVar24 = 0xc, bVar7)))) goto LAB_00200be4;
  }
  iVar24 = 10;
  if (rg.loc.y.whole == 0) {
    iVar24 = 0;
  }
LAB_00200be4:
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
  this->fResult = iVar24;
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

RouteGoal* RouteGoal * copy_backward<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  ulong in_v1;
  RouteGoal *pRVar7;
  ulong uVar8;
  ulong uVar6;
  
  uVar6 = (ulong)(int)result;
  uVar8 = uVar6;
  if (first != last) {
    do {
      iVar5 = (int)uVar6;
      result = (RouteGoal *)(iVar5 - 0x10);
      uVar6 = (ulong)(int)result;
      pRVar7 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].loc.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pRVar7 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pRVar7 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&last[-1].entryDirFlag + 1);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&last[-1].score & 7;
      uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&last[-1].score - uVar3) >> uVar3 * 8;
      uVar2 = iVar5 - 9U & 7;
      puVar4 = (ulong *)((iVar5 - 9U) - uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      uVar2 = iVar5 - 1U & 7;
      puVar4 = (ulong *)((iVar5 - 1U) - uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
      uVar2 = iVar5 - 8U & 7;
      puVar4 = (ulong *)((iVar5 - 8U) - uVar2);
      *puVar4 = uVar8 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      last = pRVar7;
    } while (first != pRVar7);
  }
  return result;
}

RouteGoal* RouteGoal * uninitialized_copy<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result) {
	RouteGoal *p;
	RouteGoal &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  RouteGoal *pRVar5;
  ulong in_a3;
  ulong in_t0;
  
  pRVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&(first->loc).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&first->entryDirFlag + 1);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&first->score & 7;
      in_t0 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&first->score - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(pRVar5->loc).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pRVar5 & 7;
      *(ulong *)((int)pRVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pRVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&pRVar5->entryDirFlag + 1);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
      first = first + 1;
      result = pRVar5 + 1;
      uVar2 = (uint)&pRVar5->score & 7;
      puVar4 = (ulong *)((int)&pRVar5->score - uVar2);
      *puVar4 = in_t0 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pRVar5 = result;
    } while (first != last);
  }
  return result;
}

void vector<RouteGoal, __malloc_alloc_template<0> >::insert_aux(RouteGoal *position, RouteGoal &x) {
	RouteGoal x_copy;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *result;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *p;
	RouteGoal &value;
	void *pAddress;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  RouteGoal *pRVar10;
  ulong uVar11;
  RouteGoal *result;
  ulong in_a3;
  int iVar12;
  RouteGoal x_copy;
  
  uVar7 = (ulong)(int)position;
  pRVar10 = this->finish;
  if ((long)(int)pRVar10 == (long)(int)this->end_of_storage) {
    iVar12 = (int)pRVar10 - (int)this->start >> 4;
    iVar9 = 1;
    if (iVar12 != 0) {
      iVar9 = iVar12 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar5 = iVar9 << 4;
    if (iVar9 == 0) {
      uVar11 = 0;
      uVar5 = 0;
    }
    else {
      pvVar6 = malloc(uVar5);
      uVar11 = (ulong)(int)pvVar6;
      if (uVar11 == 0) {
        pvVar6 = oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
        uVar11 = (ulong)(int)pvVar6;
      }
    }
                    /* end of inlined section */
    result = (RouteGoal *)uVar11;
                    /* end of inlined section */
    uninitialized_copy__H2ZP9RouteGoalZP9RouteGoal_X01X01X11_X11(this->start,position,result);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)result + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&(x->loc).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&x->entryDirFlag + 1);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&x->score & 7;
    uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&x->score - uVar3) >> uVar3 * 8;
    uVar2 = uVar8 + 7 & 7;
    puVar4 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    uVar2 = uVar8 + 0xf & 7;
    puVar4 = (ulong *)((uVar8 + 0xf) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    uVar2 = uVar8 + 8 & 7;
    puVar4 = (ulong *)((uVar8 + 8) - uVar2);
    *puVar4 = uVar11 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
    uninitialized_copy__H2ZP9RouteGoalZP9RouteGoal_X01X01X11_X11
              (position,this->finish,
               (RouteGoal *)((int)result + (int)position + (0x10 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pRVar10 = this->start;
    if (pRVar10 == this->finish) {
      pRVar10 = this->start;
    }
    else {
      do {
        pRVar10 = pRVar10 + 1;
      } while (pRVar10 != this->finish);
                    /* end of inlined section */
      pRVar10 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pRVar10 != (RouteGoal *)0x0) && ((int)this->end_of_storage - (int)pRVar10 >> 4 != 0)) {
      free(pRVar10);
                    /* end of inlined section */
    }
    pRVar10 = result + iVar12;
    this->start = result;
    this->end_of_storage = (RouteGoal *)((int)&(result->loc).y.whole + uVar5);
  }
  else {
    puVar1 = (undefined *)((int)&pRVar10[-1].loc.x.whole + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)(pRVar10 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)(pRVar10 + -1) - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&pRVar10[-1].entryDirFlag + 1);
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)&pRVar10[-1].score & 7;
    uVar11 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
             (long)(int)this & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)&pRVar10[-1].score - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&(pRVar10->loc).x.whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)pRVar10 & 7;
    *(ulong *)((int)pRVar10 - uVar5) =
         uVar7 << uVar5 * 8 |
         *(ulong *)((int)pRVar10 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&pRVar10->entryDirFlag + 1);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar11 >> (7 - uVar5) * 8;
    uVar5 = (uint)&pRVar10->score & 7;
    puVar4 = (ulong *)((int)&pRVar10->score - uVar5);
    *puVar4 = uVar11 << uVar5 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&(x->loc).x.whole + 3);
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)x & 7;
    x_copy.loc = (FTilePt)((*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                           in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8
                          | *(ulong *)((int)x - uVar2) >> uVar2 * 8);
    puVar1 = (undefined *)((int)&x->entryDirFlag + 1);
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)&x->score & 7;
    x_copy._8_8_ = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                   uVar7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)&x->score - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&x_copy.loc.x.whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy.loc >> (7 - uVar5) * 8;
    puVar1 = (undefined *)((int)&x_copy.entryDirFlag + 1);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | x_copy._8_8_ >> (7 - uVar5) * 8;
    copy_backward__H2ZP9RouteGoalZP9RouteGoal_X01X01X11_X11(position,this->finish + -1,this->finish)
    ;
    puVar1 = (undefined *)((int)&(position->loc).x.whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy.loc >> (7 - uVar5) * 8;
    uVar5 = (uint)position & 7;
    *(ulong *)((int)position - uVar5) =
         (long)x_copy.loc << uVar5 * 8 |
         *(ulong *)((int)position - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&position->entryDirFlag + 1);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | x_copy._8_8_ >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->score & 7;
    puVar4 = (ulong *)((int)&position->score - uVar5);
    *puVar4 = x_copy._8_8_ << uVar5 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    pRVar10 = this->finish;
  }
  this->finish = pRVar10 + 1;
  return;
}

PenaltyRect* PenaltyRect * copy_backward<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result) {
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  int iVar7;
  ulong in_v1;
  PenaltyRect *pPVar9;
  ulong uVar10;
  ulong uVar8;
  
  uVar8 = (ulong)(int)result;
  uVar10 = uVar8;
  if (first != last) {
    do {
      iVar7 = (int)uVar8;
      result = (PenaltyRect *)(iVar7 - 0x14);
      uVar8 = (ulong)(int)result;
      pPVar9 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].bounds.top + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)pPVar9 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)pPVar9 - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&last[-1].bounds.bottom + 3);
      uVar3 = (uint)puVar1 & 7;
      piVar2 = &last[-1].bounds.right;
      uVar4 = (uint)piVar2 & 7;
      uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
      iVar5 = last[-1].penalty;
      uVar3 = iVar7 - 0xdU & 7;
      puVar6 = (ulong *)((iVar7 - 0xdU) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_v1 >> (7 - uVar3) * 8;
      uVar3 = (uint)result & 7;
      *(ulong *)((int)result - uVar3) =
           in_v1 << uVar3 * 8 |
           *(ulong *)((int)result - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      uVar3 = iVar7 - 5U & 7;
      puVar6 = (ulong *)((iVar7 - 5U) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
      uVar3 = iVar7 - 0xcU & 7;
      puVar6 = (ulong *)((iVar7 - 0xcU) - uVar3);
      *puVar6 = uVar10 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      *(int *)(iVar7 + -4) = iVar5;
      last = pPVar9;
    } while (first != pPVar9);
  }
  return result;
}

PenaltyRect* PenaltyRect * uninitialized_copy<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result) {
	PenaltyRect *p;
	PenaltyRect &value;
	void *pAddress;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  PenaltyRect *pPVar7;
  ulong in_a3;
  ulong in_t0;
  
  pPVar7 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&(first->bounds).top + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)first - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(first->bounds).bottom + 3);
      uVar3 = (uint)puVar1 & 7;
      piVar2 = &(first->bounds).right;
      uVar4 = (uint)piVar2 & 7;
      in_t0 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
      iVar5 = first->penalty;
      puVar1 = (undefined *)((int)&(pPVar7->bounds).top + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
      uVar3 = (uint)pPVar7 & 7;
      *(ulong *)((int)pPVar7 - uVar3) =
           in_a3 << uVar3 * 8 |
           *(ulong *)((int)pPVar7 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(pPVar7->bounds).bottom + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t0 >> (7 - uVar3) * 8;
      piVar2 = &(pPVar7->bounds).right;
      uVar3 = (uint)piVar2 & 7;
      puVar6 = (ulong *)((int)piVar2 - uVar3);
      *puVar6 = in_t0 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      first = first + 1;
      result = pPVar7 + 1;
      pPVar7->penalty = iVar5;
      pPVar7 = result;
    } while (first != last);
  }
  return result;
}

void vector<PenaltyRect, __malloc_alloc_template<0> >::insert_aux(PenaltyRect *position, PenaltyRect &x) {
	PenaltyRect x_copy;
	unsigned int old_size;
	unsigned int len;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *p;
	PenaltyRect &value;
	void *pAddress;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *first;
	PenaltyRect *pointer;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  ulong in_v1;
  ulong uVar10;
  PenaltyRect *pPVar11;
  PenaltyRect *result;
  ulong in_a3;
  int iVar12;
  int iVar13;
  PenaltyRect x_copy;
  
  uVar8 = (ulong)(int)position;
  pPVar11 = this->finish;
  if ((long)(int)pPVar11 == (long)(int)this->end_of_storage) {
    iVar12 = ((int)pPVar11 - (int)this->start) * -0x33333333 >> 2;
    iVar13 = 1;
    if (iVar12 != 0) {
      iVar13 = iVar12 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar13 == 0) {
      uVar10 = 0;
    }
    else {
      pvVar7 = malloc(iVar13 * 0x14);
      uVar10 = (ulong)(int)pvVar7;
      if (uVar10 == 0) {
        pvVar7 = oom_malloc__t23__malloc_alloc_template1i0Ui(iVar13 * 0x14);
        uVar10 = (ulong)(int)pvVar7;
      }
    }
                    /* end of inlined section */
    result = (PenaltyRect *)uVar10;
    uninitialized_copy__H2ZP11PenaltyRectZP11PenaltyRect_X01X01X11_X11(this->start,position,result);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar9 = (int)result + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&(x->bounds).top + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)x & 7;
    uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)x - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(x->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &(x->bounds).right;
    uVar4 = (uint)piVar2 & 7;
    uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    iVar5 = x->penalty;
    uVar3 = uVar9 + 7 & 7;
    puVar6 = (ulong *)((uVar9 + 7) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = uVar9 & 7;
    *(ulong *)(uVar9 - uVar3) =
         uVar8 << uVar3 * 8 | *(ulong *)(uVar9 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = uVar9 + 0xf & 7;
    puVar6 = (ulong *)((uVar9 + 0xf) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    uVar3 = uVar9 + 8 & 7;
    puVar6 = (ulong *)((uVar9 + 8) - uVar3);
    *puVar6 = uVar10 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    *(int *)(uVar9 + 0x10) = iVar5;
                    /* end of inlined section */
    uninitialized_copy__H2ZP11PenaltyRectZP11PenaltyRect_X01X01X11_X11
              (position,this->finish,
               (PenaltyRect *)((int)result + (int)position + (0x14 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pPVar11 = this->start;
    if (pPVar11 == this->finish) {
      pPVar11 = this->start;
    }
    else {
      do {
        pPVar11 = pPVar11 + 1;
      } while (pPVar11 != this->finish);
                    /* end of inlined section */
      pPVar11 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pPVar11 != (PenaltyRect *)0x0) &&
       (((int)this->end_of_storage - (int)pPVar11) * -0x33333333 >> 2 != 0)) {
      free(pPVar11);
                    /* end of inlined section */
    }
    this->start = result;
    this->finish = result + iVar12 + 1;
    this->end_of_storage = result + iVar13;
  }
  else {
    puVar1 = (undefined *)((int)&pPVar11[-1].bounds.top + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)(pPVar11 + -1) & 7;
    uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
            -1L << (8 - uVar4) * 8 | *(ulong *)((int)(pPVar11 + -1) - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&pPVar11[-1].bounds.bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &pPVar11[-1].bounds.right;
    uVar4 = (uint)piVar2 & 7;
    uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    iVar13 = pPVar11[-1].penalty;
    puVar1 = (undefined *)((int)&(pPVar11->bounds).top + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = (uint)pPVar11 & 7;
    *(ulong *)((int)pPVar11 - uVar3) =
         uVar8 << uVar3 * 8 |
         *(ulong *)((int)pPVar11 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(pPVar11->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    piVar2 = &(pPVar11->bounds).right;
    uVar3 = (uint)piVar2 & 7;
    puVar6 = (ulong *)((int)piVar2 - uVar3);
    *puVar6 = uVar10 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    pPVar11->penalty = iVar13;
    puVar1 = (undefined *)((int)&(x->bounds).top + 3);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)x & 7;
    x_copy.bounds._0_8_ =
         (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
         in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)x - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(x->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &(x->bounds).right;
    uVar4 = (uint)piVar2 & 7;
    x_copy.bounds._8_8_ =
         (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
         uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    x_copy.penalty = x->penalty;
    puVar1 = (undefined *)((int)&x_copy.bounds.top + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._0_8_ >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&x_copy.bounds.bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._8_8_ >> (7 - uVar3) * 8;
    copy_backward__H2ZP11PenaltyRectZP11PenaltyRect_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&(position->bounds).top + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._0_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)position & 7;
    *(ulong *)((int)position - uVar3) =
         x_copy.bounds._0_8_ << uVar3 * 8 |
         *(ulong *)((int)position - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(position->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._8_8_ >> (7 - uVar3) * 8;
    piVar2 = &(position->bounds).right;
    uVar3 = (uint)piVar2 & 7;
    puVar6 = (ulong *)((int)piVar2 - uVar3);
    *puVar6 = x_copy.bounds._8_8_ << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    position->penalty = x_copy.penalty;
    this->finish = this->finish + 1;
  }
  return;
}

void void StressVector<PenaltyRect>(vector<PenaltyRect,__malloc_alloc_template<0> > *v) {
  return;
}

NodeRef* int * copy_backward<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

NodeRef* int * uninitialized_copy<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result) {
	NodeRef *p;
	int &value;
	void *pAddress;
	
  int iVar1;
  int *piVar2;
  
  piVar2 = result;
  if (first != last) {
    do {
      iVar1 = *first;
      first = first + 1;
      result = piVar2 + 1;
      *piVar2 = iVar1;
      piVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<int, __malloc_alloc_template<0> >::insert_aux(NodeRef *position, NodeRef &x) {
	NodeRef x_copy;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *p;
	int &value;
	void *pAddress;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *first;
	NodeRef *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	
  uint size;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = this->finish;
  if (piVar1 == this->end_of_storage) {
    iVar4 = (int)piVar1 - (int)this->start >> 2;
    iVar2 = 1;
    if (iVar4 != 0) {
      iVar2 = iVar4 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar2 << 2;
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
      size = 0;
    }
    else {
      piVar1 = (int *)malloc(size);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11(this->start,position,piVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(int *)((int)piVar1 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11
              (position,this->finish,(int *)((int)piVar1 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    piVar3 = this->start;
    if (piVar3 == this->finish) {
      piVar3 = this->start;
    }
    else {
      do {
        piVar3 = piVar3 + 1;
      } while (piVar3 != this->finish);
                    /* end of inlined section */
      piVar3 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((piVar3 != (int *)0x0) && ((int)this->end_of_storage - (int)piVar3 >> 2 != 0)) {
      free(piVar3);
                    /* end of inlined section */
    }
    piVar3 = piVar1 + iVar4;
    this->start = piVar1;
    this->end_of_storage = (int *)((int)piVar1 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *piVar1 = piVar1[-1];
                    /* end of inlined section */
    iVar2 = *x;
    copy_backward__H2ZPiZPi_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = iVar2;
    piVar3 = this->finish;
  }
  this->finish = piVar3 + 1;
  return;
}

void void StressVector<int>(vector<int,__malloc_alloc_template<0> > *v) {
  return;
}

FTilePt* FTilePt * copy_backward<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  FTilePt *pFVar5;
  ulong in_v1;
  FTilePt *pFVar6;
  
  pFVar5 = result;
  if (first != last) {
    do {
      result = pFVar5 + -1;
      pFVar6 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pFVar6 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pFVar6 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pFVar5[-1].x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      last = pFVar6;
      pFVar5 = result;
    } while (first != pFVar6);
  }
  return result;
}

FTilePt* FTilePt * uninitialized_copy<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result) {
	FTilePt *p;
	FTilePt &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  FTilePt *pFVar5;
  ulong in_a3;
  
  pFVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&(first->x).whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(pFVar5->x).whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      first = first + 1;
      result = pFVar5 + 1;
      uVar2 = (uint)pFVar5 & 7;
      *(ulong *)((int)pFVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pFVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pFVar5 = result;
    } while (first != last);
  }
  return result;
}

void vector<FTilePt, __malloc_alloc_template<0> >::insert_aux(FTilePt *position, FTilePt &x) {
	FTilePt x_copy;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	void *result;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt *p;
	FTilePt &value;
	void *pAddress;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt *first;
	FTilePt *pointer;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  FTilePt *pFVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  FTilePt *pFVar10;
  ulong in_a3;
  int iVar11;
  FTilePt x_copy;
  
  uVar7 = (ulong)(int)position;
  pFVar6 = this->finish;
  if ((long)(int)pFVar6 == (long)(int)this->end_of_storage) {
    iVar11 = (int)pFVar6 - (int)this->start >> 3;
    iVar9 = 1;
    if (iVar11 != 0) {
      iVar9 = iVar11 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar5 = iVar9 << 3;
    if (iVar9 == 0) {
      pFVar6 = (FTilePt *)0x0;
      uVar5 = 0;
    }
    else {
      pFVar6 = (FTilePt *)malloc(uVar5);
      if (pFVar6 == (FTilePt *)0x0) {
        pFVar6 = (FTilePt *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP7FTilePtZP7FTilePt_X01X01X11_X11(this->start,position,pFVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)pFVar6 + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&(x->x).whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    uVar2 = uVar8 + 7 & 7;
    puVar4 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
    uninitialized_copy__H2ZP7FTilePtZP7FTilePt_X01X01X11_X11
              (position,this->finish,
               (FTilePt *)((int)pFVar6 + (int)position + (8 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pFVar10 = this->start;
    if (pFVar10 == this->finish) {
      pFVar10 = this->start;
    }
    else {
      do {
        pFVar10 = pFVar10 + 1;
      } while (pFVar10 != this->finish);
                    /* end of inlined section */
      pFVar10 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pFVar10 != (FTilePt *)0x0) && ((int)this->end_of_storage - (int)pFVar10 >> 3 != 0)) {
      free(pFVar10);
                    /* end of inlined section */
    }
    pFVar10 = pFVar6 + iVar11;
    this->start = pFVar6;
    this->end_of_storage = (FTilePt *)((int)&(pFVar6->y).whole + uVar5);
  }
  else {
    puVar1 = (undefined *)((int)&pFVar6[-1].x.whole + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)(pFVar6 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)(pFVar6 + -1) - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&(pFVar6->x).whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)pFVar6 & 7;
    *(ulong *)((int)pFVar6 - uVar5) =
         uVar7 << uVar5 * 8 |
         *(ulong *)((int)pFVar6 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&(x->x).whole + 3);
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)x & 7;
    x_copy = (FTilePt)((*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                       in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                      *(ulong *)((int)x - uVar2) >> uVar2 * 8);
    puVar1 = (undefined *)((int)&x_copy.x.whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    copy_backward__H2ZP7FTilePtZP7FTilePt_X01X01X11_X11(position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&(position->x).whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    uVar5 = (uint)position & 7;
    *(ulong *)((int)position - uVar5) =
         (long)x_copy << uVar5 * 8 |
         *(ulong *)((int)position - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    pFVar10 = this->finish;
  }
  this->finish = pFVar10 + 1;
  return;
}

void void StressVector<FTilePt>(vector<FTilePt,__malloc_alloc_template<0> > *v) {
  return;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

RouteGoal* RouteGoal * uninitialized_copy<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result) {
	RouteGoal *p;
	RouteGoal &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  RouteGoal *pRVar5;
  ulong in_a3;
  ulong in_t0;
  
  pRVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&(first->loc).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&first->entryDirFlag + 1);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&first->score & 7;
      in_t0 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&first->score - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(pRVar5->loc).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pRVar5 & 7;
      *(ulong *)((int)pRVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pRVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&pRVar5->entryDirFlag + 1);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
      first = first + 1;
      result = pRVar5 + 1;
      uVar2 = (uint)&pRVar5->score & 7;
      puVar4 = (ulong *)((int)&pRVar5->score - uVar2);
      *puVar4 = in_t0 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pRVar5 = result;
    } while (first != last);
  }
  return result;
}

bool FTilePt::operator==(FTilePt &inPt) {
	FInt *this;
	FInt &in;
	
  bool bVar1;
  
  bVar1 = false;
  if ((this->x).whole == (inPt->x).whole) {
    bVar1 = (this->y).whole == (inPt->y).whole;
  }
  return bVar1;
}

void Path::~Path(int __in_chrg) {
	ASTNodeRefList *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	void *pAddress;
	ASTNodeRefList *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	void *pAddress;
	POINT *last;
	POINT *first;
	POINT *pointer;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	void *pAddress;
	
  int *piVar1;
  tagPOINT *ptVar2;
  tagPOINT *ptVar3;
  int *piVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.cpp */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  piVar4 = (this->fClosedNodes).field0_0x0.start;
  piVar1 = (this->fClosedNodes).field0_0x0.finish;
  if (piVar4 == piVar1) {
    piVar4 = (this->fClosedNodes).field0_0x0.start;
  }
  else {
    do {
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
    piVar4 = (this->fClosedNodes).field0_0x0.start;
  }
  if ((piVar4 != (int *)0x0) &&
     ((int)(this->fClosedNodes).field0_0x0.end_of_storage - (int)piVar4 >> 2 != 0)) {
    free(piVar4);
                    /* end of inlined section */
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  for (piVar4 = (this->fOpenNodes).field0_0x0.start; piVar4 != (this->fOpenNodes).field0_0x0.finish;
      piVar4 = piVar4 + 1) {
  }
  piVar4 = (this->fOpenNodes).field0_0x0.start;
  if (piVar4 == (int *)0x0) {
    ptVar3 = (this->fFinalPath).start;
  }
  else if ((int)(this->fOpenNodes).field0_0x0.end_of_storage - (int)piVar4 >> 2 == 0) {
    ptVar3 = (this->fFinalPath).start;
  }
  else {
    free(piVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    ptVar3 = (this->fFinalPath).start;
  }
  ptVar2 = (this->fFinalPath).finish;
  if (ptVar3 == ptVar2) {
    ptVar3 = (this->fFinalPath).start;
  }
  else {
    do {
      ptVar3 = ptVar3 + 1;
    } while (ptVar3 != ptVar2);
    ptVar3 = (this->fFinalPath).start;
  }
  if (ptVar3 == (tagPOINT *)0x0) {
    piVar4 = (this->fSpatialNodePath).field0_0x0.start;
  }
  else if ((int)(this->fFinalPath).end_of_storage - (int)ptVar3 >> 3 == 0) {
    piVar4 = (this->fSpatialNodePath).field0_0x0.start;
  }
  else {
    free(ptVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    piVar4 = (this->fSpatialNodePath).field0_0x0.start;
  }
  piVar1 = (this->fSpatialNodePath).field0_0x0.finish;
  if (piVar4 == piVar1) {
    piVar4 = (this->fSpatialNodePath).field0_0x0.start;
  }
  else {
    do {
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
    piVar4 = (this->fSpatialNodePath).field0_0x0.start;
  }
  if (piVar4 == (int *)0x0) {
    piVar4 = (this->fReverseNodePath).field0_0x0.start;
  }
  else if ((int)(this->fSpatialNodePath).field0_0x0.end_of_storage - (int)piVar4 >> 2 == 0) {
    piVar4 = (this->fReverseNodePath).field0_0x0.start;
  }
  else {
    free(piVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    piVar4 = (this->fReverseNodePath).field0_0x0.start;
  }
  piVar1 = (this->fReverseNodePath).field0_0x0.finish;
  if (piVar4 == piVar1) {
    piVar4 = (this->fReverseNodePath).field0_0x0.start;
  }
  else {
    do {
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
    piVar4 = (this->fReverseNodePath).field0_0x0.start;
  }
  if ((piVar4 != (int *)0x0) &&
     ((int)(this->fReverseNodePath).field0_0x0.end_of_storage - (int)piVar4 >> 2 != 0)) {
    free(piVar4);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.cpp */
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

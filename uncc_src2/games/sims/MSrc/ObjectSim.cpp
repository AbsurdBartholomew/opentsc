// STATUS: NOT STARTED

#include "ObjectSim.h"

// warning: multiple differing types with the same name (name not equal)
struct cXMTObjectImpl : virtual cXMTObject, virtual cXObjectImpl {
	cXObjectImpl *$vb901;
	cXMTObject *$vb2476;
	cXMTObjectImpl *fMultiNext;
	cXMTObjectImpl *fLeadObject;
	Int fNormXOff;
	Int fNormYOff;
	Int fNormLevelOff;
	Int fXOff;
	Int fYOff;
	Int fLevelOff;
	
	cXMTObjectImpl& operator=();
	cXMTObjectImpl();
	void SetLeader();
	void RemoveFromChain();
	void UpdateDynAdjacency();
	void UpdateAllAdjacecy();
	void MergeDynamic();
	cXMTObjectImpl();
	/* vtable[1] */ virtual cXMTObjectImpl(cXMTObjectImpl*, int, void);
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[6] */ virtual void PostLoad(cXMTObjectImpl*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
	ISimInstance* GetISimInstanceBaseVer();
	cXMTObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPersonImpl : virtual cXPerson, virtual cXObjectImpl {
	cXObjectImpl *$vb901;
	cXPerson *$vb1307;
	short int fPersonData[80];
	Motives fMotives;
	SInt32 fLastMotiveTick;
	ScoredInteractionVector fInteractions;
	ActionQueue fTreeQueue;
	Interaction fCurrentAction;
	Interaction fLastAction;
	vector<MotiveInc,__malloc_alloc_template<0> > fMotiveIncs;
	SAnimator *fAnimator;
	TileList fDestList;
	MotiveEffects *fMotiveEffects;
	vector<XRoute,__malloc_alloc_template<0> > fRouteStack;
	RoomID fCurrentRoom;
	vector<ObjectRecord,__malloc_alloc_template<0> > fObjectRecords;
	bool mRecording;
	int mRecordDuration;
	int mRecordMaxDuration;
	int mRecordCurTicks;
	int mRecordStartTicks;
	int mRecordTicksElapsed;
	Skill *mRecordSkill;
	int mRecordID;
	StdPrm fLastJobType;
	StdPrm fLastJobLevel;
	StackString<64> fLastJobSuit;
	StackString<64> fLastJobTexture;
	StackString<64> fLastJobAccessory;
	
	cXPersonImpl& operator=();
	cXPersonImpl();
	cXPersonImpl();
	/* vtable[1] */ virtual cXPersonImpl(cXPersonImpl*, int, void);
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPersonImpl*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPersonImpl*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
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
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(cXPersonImpl*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPersonImpl*, int, void);
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
	bool AskOthersToMove();
	bool MoveOutOfWay();
	bool MoveOutOfWay();
	void ActionSkipped();
	TreeReturnCode TryGosubFoundAction();
	TreeReturnCode TryChangeSuit();
	TreeReturnCode TrySetMotiveDelta();
	TreeReturnCode TryTestInteractingWith();
	TreeReturnCode TryGotoRoutingSlot();
	TreeReturnCode TryGotoRoutingSlot();
	TreeReturnCode TryGotoRelative();
	TreeReturnCode TryReach();
	XRoute* GetCurrentRoute();
	TreeReturnCode InitRoute();
	bool TryRoomRouting();
	TreeReturnCode TryGetReachInfo();
	TreeReturnCode TryIdleForInput();
	TreeReturnCode TryFindBestAction();
	TreeReturnCode TryLookTowards();
	Int FindReachAnimation();
	void DumpDestList();
	void SetCurrentAction();
	void LoadMotiveEffects();
};

struct StackString<32> : StringBuffer {
private:
	char fChars[32];
};

struct StackString<16> : StringBuffer {
private:
	char fChars[16];
};

bool gLogSounds = false;
static float *sCurMotiveTabToSort = NULL;
static BString2 sNeighborSub;
static BString2 sFamilyAssetsSub;
static BString2 sFamilySub;
static BString2 sMeSub;
static BString2 sObjectSub;
static BString2 sJobSub;
static BString2 sLocalSub;
static BString2 sTimeSub;
static BString2 sJobOfferSub;
static BString2 sGradeSub;
static BString2 sJobDescSub;
static BString2 sNameLocal;

bool TryFindSafeLocForSim(cXObject *newObj, FTilePt &loc, int level, cXObject *pTop, Int slotNum) {
	cFixedWorld *pWorld;
	CTilePt dirs[8];
	int i;
	CTilePt testDir;
	FTilePt newLoc;
	
  undefined *puVar1;
  cFixedWorld__vtable *pcVar2;
  uint uVar3;
  ulong *puVar4;
  cFixedWorld *pcVar5;
  long lVar6;
  CTilePt *this;
  CTilePt *this_00;
  CTilePt *in;
  int iVar7;
  int iVar8;
  CTilePt dirs [8];
  CTilePt aCStack_198 [2];
  CTilePt testDir;
  CTilePt aCStack_180 [5];
  CTilePt aCStack_170 [5];
  CTilePt aCStack_160 [5];
  CTilePt aCStack_150 [5];
  CTilePt aCStack_140 [5];
  CTilePt aCStack_130 [5];
  CTilePt aCStack_120 [5];
  CTilePt aCStack_110 [5];
  FTilePt newLoc;
  cFixedWorld *pWorld;
  
  pcVar5 = _5Globs_pFixedWorld;
  this_00 = dirs;
  in = dirs;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  this = aCStack_198;
  iVar7 = 7;
  do {
    iVar7 = iVar7 + -1;
    __7CTilePt(this_00);
    this_00 = this_00 + 1;
  } while (iVar7 != -1);
  iVar8 = 0;
  __7CTilePtRC7FTilePti(aCStack_180,loc,1);
  iVar7 = 0;
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_180);
  __as__7CTilePtRC7CTilePt(dirs,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_180,2);
  __7CTilePtRC7FTilePti(aCStack_170,loc,1);
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_170);
  __as__7CTilePtRC7CTilePt(dirs + 1,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_170,2);
  __7CTilePtRC7FTilePti(aCStack_160,loc,1);
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_160);
  __as__7CTilePtRC7CTilePt(dirs + 2,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_160,2);
  __7CTilePtRC7FTilePti(aCStack_150,loc,1);
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_150);
  __as__7CTilePtRC7CTilePt(dirs + 3,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_150,2);
  __7CTilePtRC7FTilePti(aCStack_140,loc,1);
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_140);
  __as__7CTilePtRC7CTilePt(dirs + 4,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_140,2);
  __7CTilePtRC7FTilePti(aCStack_130,loc,1);
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_130);
  __as__7CTilePtRC7CTilePt(dirs + 5,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_130,2);
  __7CTilePtRC7FTilePti(aCStack_120,loc,1);
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_120);
  __as__7CTilePtRC7CTilePt(dirs + 6,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_120,2);
  __7CTilePtRC7FTilePti(aCStack_110,loc,1);
  __pl__C7CTilePtRC7CTilePt(&testDir,aCStack_110);
  __as__7CTilePtRC7CTilePt(dirs + 7,&testDir);
  ___7CTilePt(&testDir,2);
  ___7CTilePt(aCStack_110,2);
  do {
    __pl__C7CTilePtRC7CTilePt(&testDir,in);
    pcVar2 = pcVar5->__vtable;
    lVar6 = (*(code *)pcVar2->SetWall)
                      ((int)&pcVar5->__vtable + (int)*(short *)&pcVar2->GetWall,&testDir);
    if (lVar6 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      newLoc.x.whole = (int)in->mX << 4;
      newLoc.y.whole = (int)(&dirs[0].mY)[iVar7] << 4;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
      lVar6 = (*(code *)newObj->__vtable->GetAttr)
                        ((int)&newObj->_vb899 + (int)*(short *)&newObj->__vtable->GetTemp,&newLoc,
                         level,pTop,slotNum);
      if (lVar6 != 0) {
        puVar1 = (undefined *)((int)&(loc->x).whole + 3);
        uVar3 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar3);
        *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                  CONCAT44(newLoc.x.whole,newLoc.y.whole) >> (7 - uVar3) * 8;
        uVar3 = (uint)loc & 7;
        *(ulong *)((int)loc - uVar3) =
             CONCAT44(newLoc.x.whole,newLoc.y.whole) << uVar3 * 8 |
             *(ulong *)((int)loc - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        ___7CTilePt(&testDir,2);
        if (dirs != this) {
          do {
            this = this + -1;
            ___7CTilePt(this,0);
          } while (dirs != this);
          return true;
        }
        return true;
      }
    }
    ___7CTilePt(&testDir,2);
    iVar8 = iVar8 + 1;
    in = in + 1;
    iVar7 = iVar7 + 3;
  } while (iVar8 < 8);
  if (dirs != this) {
    do {
      this = this + -1;
      ___7CTilePt(this,0);
    } while (dirs != this);
  }
  return false;
}

void LogSoundEvent(char *s) {
  CTGDump *pCVar1;
  
  pCVar1 = __ls__7CTGDumpPCc(&ctgDump,"c:/eor/src2/games/sims/MSrc/ObjectSim.cpp");
  pCVar1 = __ls__7CTGDumpPCc(pCVar1,"(");
  pCVar1 = __ls__7CTGDumpi(pCVar1,0x87);
  pCVar1 = __ls__7CTGDumpPCc(pCVar1,"): ");
  pCVar1 = __ls__7CTGDumpPCc(pCVar1,s);
  __ls__7CTGDumpPCc(pCVar1,"\r\n");
  return;
}

static void LogSoundHeader(StackElem *elem) {
	static int sLastEvt = 0;
	StringBuf255 evtStr;
	StringBuf255 nodeLocation;
	FileName fileName;
	FileName shortName;
	ResourceName treeName;
	iResFile *file;
	
  Behavior__vtable *pBVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  StackString_256_ evtStr;
  StackString_256_ nodeLocation;
  StackString_260_ fileName;
  StackString_260_ shortName;
  StackString_64_ treeName;
  StringBuffer SStack_180;
  char acStack_178 [264];
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
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&evtStr.field0_0x0,(char *)((uint)&evtStr | 8),0x100);
  __12StringBufferPcUi(&nodeLocation.field0_0x0,nodeLocation.fChars,0x100);
  append__12StringBufferPCci(&nodeLocation.field0_0x0,"Event #",-1);
  copy__12StringBufferRC12StringBuffer(&evtStr.field0_0x0,&nodeLocation.field0_0x0);
  iVar2 = sLastEvt_3804;
                    /* end of inlined section */
  sLastEvt_3804 = sLastEvt_3804 + 1;
  appendNum__12StringBufferi(&evtStr.field0_0x0,iVar2);
  pcVar3 = c_str__C12StringBuffer(&evtStr.field0_0x0);
  LogSoundEvent__FPCc(pcVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&nodeLocation.field0_0x0,nodeLocation.fChars,0x100);
  __12StringBufferPcUi(&fileName.field0_0x0,fileName.fChars,0x104);
  __12StringBufferPcUi(&shortName.field0_0x0,shortName.fChars,0x104);
  __12StringBufferPcUi(&treeName.field0_0x0,treeName.fChars,0x40);
                    /* end of inlined section */
  pBVar1 = elem->fBehavior->__vtable;
  lVar4 = (*(code *)pBVar1[1].GetResFile)
                    ((int)&elem->fBehavior->fGlobFile + (int)*(short *)&pBVar1[1].Behavior,
                     elem->fTreeID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&SStack_180,acStack_178,0x100);
  append__12StringBufferPCci(&SStack_180," Tree: ",-1);
  copy__12StringBufferRC12StringBuffer(&nodeLocation.field0_0x0,&SStack_180);
                    /* end of inlined section */
  if (lVar4 != 0) {
    iVar2 = *(int *)((int)lVar4 + 0xc);
    (**(code **)(iVar2 + 0x5c))((int)lVar4 + (int)*(short *)(iVar2 + 0x58),&fileName);
    ExtractFileName__FRC12StringBufferR12StringBuffer(&fileName.field0_0x0,&shortName.field0_0x0);
    append__12StringBufferRC12StringBufferi(&nodeLocation.field0_0x0,&shortName.field0_0x0,-1);
    append__12StringBufferPCci(&nodeLocation.field0_0x0,":",-1);
  }
  GetTreeName__9StackElemR12StringBuffer(elem,&treeName.field0_0x0);
  append__12StringBufferRC12StringBufferi(&nodeLocation.field0_0x0,&treeName.field0_0x0,-1);
  append__12StringBufferPCci(&nodeLocation.field0_0x0,":",-1);
  appendNum__12StringBufferi(&nodeLocation.field0_0x0,(int)(short)elem->fNodeNum);
  pcVar3 = c_str__C12StringBuffer(&nodeLocation.field0_0x0);
  LogSoundEvent__FPCc(pcVar3);
  return;
}

bool cXObjectImpl::AllowIdleOptimization() {
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  long lVar3;
  
  pcVar1 = this->_vb966->__vtable;
  lVar3 = (*(code *)pcVar1[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Turn);
  bVar2 = false;
  if ((lVar3 != 2) && (bVar2 = false, this->fData[0x19] == 0)) {
    bVar2 = true;
  }
  return bVar2;
}

NodeAction cXObjectImpl::HandleBreakpoint(StackElem *elem, BehaviorNode *node) {
  NodeAction NVar1;
  
  NVar1 = HandleBreakpoint__11TreeSimImplP9StackElemP12BehaviorNode(this->_vb1168,elem,node);
  return NVar1;
}

TreeReturnCode cXObjectImpl::TryUserEvent(StackElem *elem, XPrimParam *param) {
	cXObject *obj;
	StdPrm timeout;
	BString2 message;
	AUTOPTR<StringSet> messageStrs;
	iResFile *file;
	
  byte bVar1;
  short sVar2;
  cXObject__21_1030__vtable *pcVar3;
  Behavior *pBVar4;
  Behavior__vtable *pBVar5;
  EPictureInPicture *pEVar6;
  EPictureInPicture__vtable *pEVar7;
  ushort uVar8;
  TreeReturnCode TVar9;
  StringSet *pInstance;
  short **ppsVar10;
  uint uVar11;
  CTGDump *pCVar12;
  long lVar13;
  long lVar14;
  ushort timeout;
  BString2 message;
  AUTOPTR_StringSet_ messageStrs;
  
  if (elem->fPrimState == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,0xb,1);
    TVar9 = kEngaged;
    elem->fPrimState = 1;
  }
  else {
    TVar9 = kTrueComplete;
    if (elem->fPrimState == 1) {
      elem->fPrimState = 2;
      pcVar3 = this->_vb966->__vtable;
      lVar13 = (*(code *)pcVar3[1].GetLightingContribution)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].CanContributeLight,
                          elem->fObjectID);
      if (lVar13 == 0) {
        this->_vb1168->fError = 0x17;
        pcVar3 = this->_vb966->__vtable;
        (*(code *)pcVar3->SimEnabled)
                  ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->SimIndependent,0x17);
        TVar9 = kError;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        uVar8 = 0x19;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        if (((param->field0_0x0).directionTo.flags >> 5 & 1) == 0) {
          uVar8 = 7;
        }
        TVar9 = InterpValue__12cXObjectImplssPPsPPfPs
                          (this,uVar8,(param->field0_0x0).bparam[0],(ushort **)0x0,(float **)0x0,
                           &timeout);
        if (TVar9 == kError) {
          TVar9 = kError;
        }
        else {
          __8BString2(&message);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
          if ((((param->field0_0x0).directionTo.flags >> 6 ^ 1) & 1) != 0) {
            GlobalDispatch__Fsi(0x10b,0);
          }
          if ((param->field0_0x0).expression.opType != '\0') {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
            DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
            pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
            pBVar4 = elem->fBehavior;
            pBVar5 = pBVar4->__vtable;
            sVar2 = *(short *)&pBVar5[1].Behavior;
            uVar8 = GetTreeID__C9StackElem(elem);
            lVar14 = (*(code *)pBVar5[1].GetResFile)((int)&pBVar4->fGlobFile + (int)sVar2,uVar8);
            if (lVar14 != 0) {
                    /* end of inlined section */
              (*(code *)pInstance->__vtable[1].GetDescription)
                        ((int)&pInstance->__vtable +
                         (int)*(short *)&pInstance->__vtable[1].RemoveString,lVar14,0x131,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
              ppsVar10 = (short **)
                         (*(code *)pInstance->__vtable->SetDescription)
                                   ((int)&pInstance->__vtable +
                                    (int)*(short *)&pInstance->__vtable->GetDescription,
                                    (param->field0_0x0).expression.opType);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              if (*ppsVar10 != (short *)0x0) {
                    /* end of inlined section */
                assign__8BString2PCUs(&message,*ppsVar10);
              }
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
            DestroyInstance__9StringSetP9StringSet(pInstance);
          }
                    /* end of inlined section */
          uVar11 = length__C8BString2(&message);
          if (uVar11 != 0) {
            pcVar3 = this->_vb966->__vtable;
            (*(code *)pcVar3->GetFolder)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->GetFrontFaceDirection,
                       &message,elem,0,0);
          }
          pCVar12 = __ls__7CTGDumpPCc(&ctgDump,"c:/eor/src2/games/sims/MSrc/ObjectSim.cpp");
          pCVar12 = __ls__7CTGDumpPCc(pCVar12,"(");
          pCVar12 = __ls__7CTGDumpi(pCVar12,0x10f);
          __ls__7CTGDumpPCc(pCVar12,"): PictureInPicture called.\r\n");
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pEORGlobals->__vtable->AllocPersonInstance)
                    ((int)_5Globs_pEORGlobals->_pSelectedSims +
                     *(short *)&_5Globs_pEORGlobals->__vtable->AllocInstance + -0x24,0,0x2e);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
          bVar1 = (param->field0_0x0).directionTo.flags;
                    /* end of inlined section */
          pEVar6 = _5Globs_pEORGlobals->m_pPiP;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
          pEVar7 = pEVar6->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
          sVar2 = *(short *)&pEVar7[1].EPictureInPicture;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
          c_str__C8BString2(&message);
          (*(code *)pEVar7[1].DoPictureInPicture)
                    ((int)pEVar6->m_DisplayText + sVar2 + -0x10,bVar1 & 1,lVar13,bVar1 >> 1 & 1,
                     (short)timeout * 1000,(param->field0_0x0).distanceTo.fromOwner,
                     (param->field0_0x0).distanceTo.flags,bVar1 >> 2 & 1 ^ 1);
          ___8BString2(&message,2);
          TVar9 = kEngaged;
        }
      }
    }
  }
  return TVar9;
}

TreeReturnCode cXObjectImpl::TryUIEffect(StackElem *elem, XPrimParam *param) {
  return kTrueComplete;
}

TreeReturnCode cXObjectImpl::TryTestObjectType(StackElem *elem, XPrimParam *param) {
	SInt32 guid;
	SInt16 id;
	cXObject *obj;
	ObjSelector *sel;
	
  int iVar1;
  cXObject__21_1030__vtable *pcVar2;
  TreeReturnCode TVar3;
  int iVar4;
  ObjSelector *this_00;
  long lVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ushort id;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  iVar1 = (param->field0_0x0).createObject.guid;
  TVar3 = InterpValue__12cXObjectImplssPPsPPfPs
                    (this,(ushort)(param->field0_0x0).gotoRelative.flags,
                     (param->field0_0x0).bparam[2],(ushort **)0x0,(float **)0x0,&id);
  if (TVar3 == kError) {
    TVar3 = kError;
  }
  else {
    pcVar2 = this->_vb966->__vtable;
    lVar5 = (*(code *)pcVar2[1].GetLightingContribution)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight,id)
    ;
    if (lVar5 == 0) {
      this->_vb1168->fError = 0x17;
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->SimEnabled)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,0x17);
      TVar3 = kError;
    }
    else {
      iVar4 = *(int *)((int)lVar5 + 4);
      lVar5 = (**(code **)(iVar4 + 0x2ec))((int)lVar5 + (int)*(short *)(iVar4 + 0x2e8));
      TVar3 = kFalseComplete;
      if (lVar5 != 0) {
        iVar4 = GetGUID__11ObjSelector((ObjSelector *)lVar5);
        if (iVar4 == iVar1) {
          TVar3 = kTrueComplete;
        }
        else {
          this_00 = GetMasterSelector__11ObjSelector((ObjSelector *)lVar5);
          iVar4 = GetGUID__11ObjSelector(this_00);
          TVar3 = kTrueComplete;
          if (iVar4 != iVar1) {
            TVar3 = kFalseComplete;
          }
        }
      }
    }
  }
  return TVar3;
}

TreeReturnCode cXObjectImpl::TryMakeNewCharacter(StackElem *elem, XPrimParam *param) {
	TreeReturnCode result;
	Int local;
	Int skinColor;
	Int gender;
	Int age;
	Neighbor *newN;
	ObjSelector *newSel;
	CustomCharacter *c;
	Table *BodyData;
	ERQuickdata *CreateSimData;
	ERQTable<Sim::Table> *pTable;
	ObjSelector *this;
	ObjSelector *this;
	ERQuickdata *this;
	ERQTable<Sim::Table> *pTable;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	unsigned int lim;
	unsigned int lim;
	unsigned int lim;
	unsigned int lim;
	unsigned int lim;
	unsigned int lim;
	unsigned int lim;
	BString2 newName;
	char str[32];
	Neighbor *this;
	
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ObjSelector *this_00;
  CustomCharacter *pCVar6;
  ushort *puVar7;
  ERQuickdata *this_01;
  void *_pTable;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TreeReturnCode TVar12;
  long lVar13;
  char *pcVar14;
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
  BString2 newName;
  char str [32];
  Neighbor *newN;
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
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  bVar1 = (param->field0_0x0).pushAction.interactionIndex;
  puVar7 = GetLocals__9StackElem(elem);
  bVar2 = (param->field0_0x0).distanceTo.flags;
  uVar3 = puVar7[bVar1];
  puVar7 = GetLocals__9StackElem(elem);
  bVar1 = (param->field0_0x0).pushAction.dataForInteractingObject;
  uVar4 = puVar7[bVar2];
  puVar7 = GetLocals__9StackElem(elem);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  uVar5 = puVar7[bVar1];
  lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable[1].LoadPersistentData)
                     ((int)&_5Globs_pNeighborhood->__vtable +
                      (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNextNeighborID,&newN);
  TVar12 = kFalseComplete;
  if (lVar13 == 0) {
    if (newN != (Neighbor *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
      this_00 = newN->fSelector;
                    /* end of inlined section */
      GetMiddleFile__8Behavior(this_00->fBehavior);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
      pCVar6 = this_00->fCustomCharacter;
      this_01 = (ERQuickdata *)
                AddRef__16EResourceManagerUiP5EFilei
                          (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
      _pTable = getTable__11ERQuickdataPCc(this_01,"Sim::Table");
                    /* end of inlined section */
      if ((short)uVar5 < 0x12) {
        if (uVar4 == 0) {
          pcVar14 = "ChildMale";
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
        }
        else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
          pcVar14 = "ChildFemale";
        }
      }
      else if (uVar4 == 0) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
        pcVar14 = "AdultMale";
      }
      else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
        pcVar14 = "AdultFemale";
      }
      piVar8 = (int *)getRow__11ERQuickdataPCvPCc(this_01,_pTable,pcVar14);
                    /* end of inlined section */
      if ((short)uVar5 < 0x12) {
        *(undefined4 *)&pCVar6->m_bAdult = 0;
      }
      else {
        *(undefined4 *)&pCVar6->m_bAdult = 1;
      }
      if (uVar4 == 0) {
        *(undefined4 *)pCVar6 = 1;
      }
      else {
        *(undefined4 *)pCVar6 = 0;
      }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      if (piVar8[5] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(piVar8[5] + -4);
      }
      iVar9 = GetNextRandomNumber__Fv();
      if (iVar10 == 0) {
        trap(7);
      }
                    /* end of inlined section */
      pCVar6->m_nGlassesIndex = (char)(iVar9 % iVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      if (piVar8[3] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(piVar8[3] + -4);
      }
      iVar9 = GetNextRandomNumber__Fv();
      if (iVar10 == 0) {
        trap(7);
      }
                    /* end of inlined section */
      pCVar6->m_nFaceIndex = (char)(iVar9 % iVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      if (piVar8[4] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(piVar8[4] + -4);
      }
      iVar9 = GetNextRandomNumber__Fv();
      if (iVar10 == 0) {
        trap(7);
      }
                    /* end of inlined section */
      pCVar6->m_nHairHatIndex = (char)(iVar9 % iVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      if (*piVar8 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*piVar8 + -4);
      }
      iVar9 = GetNextRandomNumber__Fv();
      if (iVar10 == 0) {
        trap(7);
      }
                    /* end of inlined section */
      pCVar6->m_nUpperBodyIndex = (char)(iVar9 % iVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      if (piVar8[1] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(piVar8[1] + -4);
      }
      iVar9 = GetNextRandomNumber__Fv();
      if (iVar10 == 0) {
        trap(7);
      }
                    /* end of inlined section */
      pCVar6->m_nLowerBodyIndex = (char)(iVar9 % iVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      if (piVar8[2] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(piVar8[2] + -4);
      }
      iVar9 = GetNextRandomNumber__Fv();
      if (iVar10 == 0) {
        trap(7);
      }
                    /* end of inlined section */
      pCVar6->m_nShoesIndex = (char)(iVar9 % iVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (piVar8[6] != 0) {
        iVar10 = *(int *)(piVar8[6] + -4);
      }
      iVar9 = GetNextRandomNumber__Fv();
      if (iVar10 == 0) {
        trap(7);
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
                    /* end of inlined section */
      pCVar6->m_nFacialHairIndex = (char)(iVar9 % iVar10);
      if ((short)uVar3 < 8) {
        pCVar6->m_nSkinColor = (char)uVar3;
      }
      else {
        pCVar6->m_nSkinColor = '\0';
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
      iVar10 = GetNextRandomNumber__Fv();
      pCVar6->m_nHairHatColor = (char)(iVar10 % 10);
      iVar10 = GetNextRandomNumber__Fv();
      pCVar6->m_nUpperBodyColor = (char)(iVar10 % 0x21);
      iVar10 = GetNextRandomNumber__Fv();
      pCVar6->m_nLowerBodyColor = (char)(iVar10 % 0x21);
      iVar10 = GetNextRandomNumber__Fv();
      pCVar6->m_nShoesColor = (char)(iVar10 % 0x21);
      iVar10 = GetNextRandomNumber__Fv();
      pCVar6->m_nFacialHairColor = (char)(iVar10 % 0xb);
      iVar10 = GetNextRandomNumber__Fv();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
                    /* end of inlined section */
      pCVar6->m_nEyeColor = (char)(iVar10 % 0x21);
      __8BString2RC8BString2UiUi(&newName,&_12cXObjectImpl_sLastUserTypedName,0,0xffffffff);
      uVar11 = length__C8BString2(&newName);
      if (uVar11 == 0) {
        pcVar14 = str + 7;
        uVar11 = (uint)pcVar14 & 7;
        *(ulong *)(pcVar14 + -uVar11) =
             *(ulong *)(pcVar14 + -uVar11) & -1L << (uVar11 + 1) * 8 |
             s_No_childname_003b9f78._0_8_ >> (7 - uVar11) * 8;
        str._0_8_ = s_No_childname_003b9f78._0_8_;
        pcVar14 = str + 0xb;
        uVar11 = (uint)pcVar14 & 3;
        *(uint *)(pcVar14 + -uVar11) =
             *(uint *)(pcVar14 + -uVar11) & -1 << (uVar11 + 1) * 8 |
             s_No_childname_003b9f78._8_4_ >> (3 - uVar11) * 8;
        str._8_4_ = s_No_childname_003b9f78._8_4_;
        str[12] = s_No_childname_003b9f78[12];
        memset(str + 0xd,0,0x13);
        assignDebug__8BString2PCc(&newName,"No childname");
      }
      SetUserName__11ObjSelectorRC8BString2(this_00,&newName);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
      elem->fObjectID = newN->fID;
      ___8BString2(&newName,2);
      DelRef__9EResource((EResource *)this_01);
      TVar12 = kTrueComplete;
    }
  }
  return TVar12;
}

TreeReturnCode cXObjectImpl::TryFindGoodLocation(StackElem *elem, XPrimParam *param) {
	cXObject *obj;
	FTilePt start;
	int level;
	cXObject *relObj;
	int sc;
	FindGoodLocationParam *this;
	Int local;
	Int smokeDir;
	Int dirDelta;
	cXMTObject *mtObj;
	cXObject *ptr;
	int directionToSelect;
	FindGoodLocationParams fglp;
	int level;
	FindGoodLocationParam *this;
	FindGoodLocationParam *this;
	int dir;
	FindGoodLocationParams fglp;
	int level;
	FindGoodLocationParam *this;
	FindGoodLocationParam *this;
	cXObject *ptr;
	
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  cXObject__21_1030__vtable *pcVar7;
  ObjectModule__vtable *pOVar8;
  ulong *puVar9;
  ObjectModule__vtable **ppOVar10;
  ushort uVar11;
  cXObject__21_1030 *pcVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  void *pvVar16;
  TreeSim *pTVar17;
  long lVar18;
  long lVar19;
  TreeSimImpl__21_3338 *pTVar20;
  ulong uVar21;
  undefined8 uVar22;
  int iVar23;
  ulong uVar24;
  TreeSim **ppTVar25;
  FTilePt start;
  FindGoodLocationParams fglp;
  
  pcVar12 = this->_vb966;
  uVar24 = (ulong)(int)pcVar12;
  lVar18 = (*(code *)pcVar12->__vtable[1].GetLightingContribution)
                     ((int)&pcVar12->_vb899 +
                      (int)*(short *)&pcVar12->__vtable[1].CanContributeLight);
  uVar11 = 0x15;
  if (lVar18 == 0) {
    pTVar20 = this->_vb1168;
    uVar22 = 0x15;
    goto LAB_002292e8;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  start = (FTilePt)0x1000000010;
                    /* end of inlined section */
  uVar22 = 1;
  pcVar12 = (cXObject__21_1030 *)0x0;
  if (((param->field0_0x0).distanceTo.flags & 1) != 0) {
    if (elem->fNumLocalVars <= (param->field0_0x0).pushAction.dataForInteractingObject) {
      pTVar20 = this->_vb1168;
      uVar11 = 0x33;
      uVar22 = 0x33;
      goto LAB_002292e8;
    }
    pcVar12 = this->_vb966;
    pcVar7 = pcVar12->__vtable;
    sVar6 = *(short *)&pcVar7[1].CanContributeLight;
    GetLocals__9StackElem(elem);
    pcVar12 = (cXObject__21_1030 *)
              (*(code *)pcVar7[1].GetLightingContribution)((int)&pcVar12->_vb899 + (int)sVar6);
    uVar11 = 0x17;
    if (pcVar12 == (cXObject__21_1030 *)0x0) {
      pTVar20 = this->_vb1168;
      uVar22 = 0x17;
      goto LAB_002292e8;
    }
    pcVar7 = pcVar12->__vtable;
    uVar21 = (ulong)(int)pcVar7;
    uVar13 = (*(code *)pcVar7[1].UserCanDelete)
                       ((int)&pcVar12->_vb899 + (int)*(short *)&pcVar7[1].UserPickup);
    uVar4 = uVar13 + 7 & 7;
    uVar5 = uVar13 & 7;
    start = (FTilePt)((*(long *)((uVar13 + 7) - uVar4) << (7 - uVar4) * 8 |
                      uVar21 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                     *(ulong *)(uVar13 - uVar5) >> uVar5 * 8);
    puVar1 = (undefined *)((int)&start.x.whole + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar4);
    *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | (ulong)start >> (7 - uVar4) * 8;
    uVar22 = (*(code *)pcVar12->__vtable[1].GetPlacementInfo)
                       ((int)&pcVar12->_vb899 +
                        (int)*(short *)&pcVar12->__vtable[1].FindGoodLocation);
  }
  bVar2 = (param->field0_0x0).pushAction.interactionIndex;
  ppTVar25 = (TreeSim **)lVar18;
  if (bVar2 == 2) {
    if (pcVar12 == (cXObject__21_1030 *)0x0) {
      pcVar12 = this->_vb966;
    }
    uVar13 = (*(code *)pcVar12->__vtable[1].UserCanDelete)
                       ((int)&pcVar12->_vb899 + (int)*(short *)&pcVar12->__vtable[1].UserPickup);
    uVar4 = uVar13 + 7 & 7;
    uVar5 = uVar13 & 7;
    start = (FTilePt)((*(long *)((uVar13 + 7) - uVar4) << (7 - uVar4) * 8 |
                      uVar24 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                     *(ulong *)(uVar13 - uVar5) >> uVar5 * 8);
    puVar1 = (undefined *)((int)&start.x.whole + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar4);
    *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | (ulong)start >> (7 - uVar4) * 8;
    iVar14 = (*(code *)pcVar12->__vtable->ReconType)
                       ((int)&pcVar12->_vb899 + (int)*(short *)&pcVar12->__vtable->ReconStream,1);
    iVar23 = iVar14 + 5;
    iVar14 = iVar14 + 0xc;
    if (-1 < iVar23) {
      iVar14 = iVar23;
    }
    iVar15 = (*(code *)ppTVar25[1][0x10].m_pCursorObject)
                       ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][0x10].m_pMTObject,1);
    iVar15 = (iVar23 + (iVar14 >> 3) * -8) - iVar15;
    iVar23 = iVar15 + 8;
    iVar14 = iVar15 + 0xf;
    if (-1 < iVar23) {
      iVar14 = iVar23;
    }
    (*(code *)ppTVar25[1][7].__vtable)
              ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][7].m_pEoRPerson,
               (iVar23 + (iVar14 >> 3) * -8) / 2);
    pTVar17 = ppTVar25[1];
    sVar6 = *(short *)&pTVar17[8].m_pMTObject;
    uVar22 = (*(code *)pcVar12->__vtable[1].GetPlacementInfo)
                       ((int)&pcVar12->_vb899 +
                        (int)*(short *)&pcVar12->__vtable[1].FindGoodLocation);
    lVar18 = (*(code *)pTVar17[8].m_pCursorObject)((int)ppTVar25 + (int)sVar6,&start,uVar22,0,0);
    if (lVar18 == 0) {
      return kFalseComplete;
    }
    pTVar17 = ppTVar25[1];
    sVar6 = *(short *)&pTVar17[8].m_pPortal;
    uVar22 = (*(code *)pcVar12->__vtable[1].GetPlacementInfo)
                       ((int)&pcVar12->_vb899 +
                        (int)*(short *)&pcVar12->__vtable[1].FindGoodLocation);
    (*(code *)pTVar17[8].m_pEoRInstance)((int)ppTVar25 + (int)sVar6,&start,uVar22,0,0);
    return kTrueComplete;
  }
  if (bVar2 == 1) {
    lVar19 = (*(code *)ppTVar25[1][0x18].m_pCursorObject)
                       ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][0x18].m_pMTObject);
    if (lVar19 == 0) {
      pTVar17 = ppTVar25[1];
    }
    else {
                    /* inlined from SCID.h */
      pvVar16 = (void *)0x0;
      if (lVar18 != 0) {
        pvVar16 = _dyncastimpl__7TreeSim4SCID(*ppTVar25,cXMTObjectID);
      }
                    /* end of inlined section */
      if (pvVar16 == (void *)0x0) {
        pTVar17 = ppTVar25[1];
      }
      else {
        lVar18 = (**(code **)(*(int *)((int)pvVar16 + 4) + 0x4c))
                           ((int)pvVar16 + (int)*(short *)(*(int *)((int)pvVar16 + 4) + 0x48));
        if (lVar18 == 0) {
          pTVar17 = ppTVar25[1];
        }
        else {
          (**(code **)(*(int *)((int)pvVar16 + 4) + 0x5c))
                    ((int)pvVar16 + (int)*(short *)(*(int *)((int)pvVar16 + 4) + 0x58));
          pTVar17 = ppTVar25[1];
        }
      }
    }
    (*(code *)pTVar17[8].m_pPerson)((int)ppTVar25 + (int)*(short *)&pTVar17[8].m_pObject);
    return kTrueComplete;
  }
  fglp.fLevel = (int)uVar22;
  if (bVar2 - 3 < 2) {
    uVar11 = 0x3d;
    if (pcVar12 == (cXObject__21_1030 *)0x0) {
      pTVar20 = this->_vb1168;
      uVar22 = 0x3d;
LAB_002292e8:
      pTVar20->fError = uVar11;
      pcVar7 = this->_vb966->__vtable;
      (*(code *)pcVar7->SimEnabled)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar7->SimIndependent,uVar22);
      return kError;
    }
    iVar14 = (*(code *)pcVar12->__vtable->ReconType)
                       ((int)&pcVar12->_vb899 + (int)*(short *)&pcVar12->__vtable->ReconStream);
    bVar3 = (param->field0_0x0).distanceTo.flags;
    if (bVar2 == 4) {
      iVar23 = iVar14 + 2;
      iVar14 = iVar14 + 9;
      if (-1 < iVar23) {
        iVar14 = iVar23;
      }
      iVar14 = iVar23 + (iVar14 >> 3) * -8;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
    fglp._20_4_ = 1;
    fglp.fDirectionVector = -1;
    fglp._24_4_ = 1;
    fglp._28_4_ = 0;
    fglp._24_4_ = (bVar3 >> 1 ^ 1) & 1;
    fglp._0_4_ = 1;
    fglp._28_4_ = bVar3 >> 2 & 1;
    puVar1 = (undefined *)((int)&fglp.fLocation.x.whole + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar4);
    *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | (ulong)start >> (7 - uVar4) * 8;
    uVar4 = (uint)&fglp.fLocation & 7;
    puVar9 = (ulong *)((int)&fglp.fLocation - uVar4);
    *puVar9 = (long)start << uVar4 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
    fglp._20_4_ = 1;
                    /* end of inlined section */
    fglp.fDirectionVector = iVar14;
    lVar18 = (*(code *)ppTVar25[1][10].m_pCursorObject)
                       ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][10].m_pMTObject,&fglp,&start);
    if ((lVar18 != 0) &&
       (lVar18 = (*(code *)ppTVar25[1][8].m_pCursorObject)
                           ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][8].m_pMTObject,&start,uVar22
                            ,0,0), lVar18 != 0)) {
      (*(code *)ppTVar25[1][8].m_pEoRInstance)
                ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][8].m_pPortal,&start,uVar22,0,0);
      return kTrueComplete;
    }
  }
  else {
    bVar2 = (param->field0_0x0).distanceTo.flags;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
    fglp._20_4_ = 1;
    fglp.fDirectionVector = -1;
    fglp._24_4_ = 1;
    fglp._28_4_ = 0;
    fglp._24_4_ = (bVar2 >> 1 ^ 1) & 1;
    fglp._0_4_ = 1;
    fglp._28_4_ = bVar2 >> 2 & 1;
    puVar1 = (undefined *)((int)&fglp.fLocation.x.whole + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar4);
    *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | (ulong)start >> (7 - uVar4) * 8;
    uVar4 = (uint)&fglp.fLocation & 7;
    puVar9 = (ulong *)((int)&fglp.fLocation - uVar4);
    *puVar9 = (long)start << uVar4 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
    fglp._20_4_ = 1;
                    /* end of inlined section */
    lVar19 = (*(code *)ppTVar25[1][10].m_pCursorObject)
                       ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][10].m_pMTObject,&fglp,&start);
    if (lVar19 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
      fglp._20_4_ = 0;
                    /* end of inlined section */
      lVar19 = (*(code *)ppTVar25[1][10].m_pCursorObject)
                         ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][10].m_pMTObject,&fglp,&start);
      if (lVar19 == 0) {
        return kFalseComplete;
      }
      pTVar17 = ppTVar25[1];
    }
    else {
      pTVar17 = ppTVar25[1];
    }
    lVar19 = (*(code *)pTVar17[8].m_pCursorObject)
                       ((int)ppTVar25 + (int)*(short *)&pTVar17[8].m_pMTObject,&start,uVar22,0,0);
    if (lVar19 != 0) {
      (*(code *)ppTVar25[1][8].m_pEoRInstance)
                ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][8].m_pPortal,&start,uVar22,0,0);
      (*(code *)ppTVar25[1][0xb].m_pCursorObject)
                ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][0xb].m_pMTObject);
      lVar19 = (*(code *)ppTVar25[1][0x15].m_pCursorObject)
                         ((int)ppTVar25 + (int)*(short *)&ppTVar25[1][0x15].m_pMTObject);
      if (lVar19 != 2) {
        return kTrueComplete;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar19 = (*(code *)_5Globs_pObjectModule->__vtable->SetSimFlag)
                         ((int)&_5Globs_pObjectModule->__vtable +
                          (int)*(short *)&_5Globs_pObjectModule->__vtable->GetIdleStatus);
      if (lVar19 != 0) {
        return kTrueComplete;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pOVar8 = _5Globs_pObjectModule->__vtable;
      sVar6 = *(short *)&pOVar8->GetSimFlag;
                    /* inlined from SCID.h */
      ppOVar10 = &_5Globs_pObjectModule->__vtable;
      if (lVar18 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        pvVar16 = _dyncastimpl__7TreeSim4SCID(*ppTVar25,cXPersonID);
      }
                    /* end of inlined section */
      (*(code *)pOVar8->GetTileObjectID)((int)ppOVar10 + (int)sVar6,pvVar16);
      return kTrueComplete;
    }
  }
  return kFalseComplete;
}

TreeReturnCode cXObjectImpl::TrySetBalloon(StackElem *elem, XPrimParam *param) {
	cXObject *targ;
	int slotNumber;
	cXObjectImpl *pImpl;
	SpriteSlot *slot;
	int priority;
	int index;
	cXObject *this;
	unsigned int n;
	SpriteSlot *this;
	SpriteSlot *this;
	SpriteSlot *this;
	Int pri;
	SpriteSlot *this;
	cXObject *obj;
	Neighbor *n;
	Neighbor *this;
	Neighbor *this;
	StdPrm localNum;
	cXObject *obj;
	IconGroupImpl ig;
	Int id;
	SpriteSlot *this;
	IconGroupImpl balloonIcons;
	SpriteSlot *this;
	SpriteSlot *this;
	SpriteSlot *this;
	SpriteSlot *this;
	
  short sVar1;
  SpriteSlot *this_00;
  cXObject__21_1030 *pcVar2;
  ushort uVar3;
  cXObject__21_1030 *pcVar4;
  ushort *puVar5;
  ObjSelector *pOVar6;
  cXObject__21_1030__vtable *pcVar7;
  TreeReturnCode TVar8;
  long lVar9;
  uint uVar10;
  TreeSimImpl__21_3338 *pTVar11;
  undefined4 uVar12;
  int iVar13;
  uint index;
  IconGroupImpl ig;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if (((param->field0_0x0).bparam[0] & 1) == 0) {
    pcVar4 = this->_vb966;
LAB_0022964c:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar9 = 0;
    if (pcVar4 != (cXObject__21_1030 *)0x0) {
      lVar9 = (*(code *)pcVar4->__vtable[1].GetObjectImplementation)
                        ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((lVar9 != 0) &&
       (this_00 = *(SpriteSlot **)((int)lVar9 + 0x108),
       (*(int *)((int)lVar9 + 0x10c) - (int)this_00) * 0x38e38e39 >> 3 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
      iVar13 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
      if ((int)((int)(param->field0_0x0).find5WorstMotives.unused1 & 0xff00U) >> 8 == 4) {
        iVar13 = 2;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
      if ((this_00->ticksLeft != 0) && (iVar13 < this_00->priority)) {
        return kTrueComplete;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      this_00->priority = iVar13;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
      uVar3 = (param->field0_0x0).bparam[1];
      uVar10 = uVar3 & 0xff;
                    /* end of inlined section */
      if ((uVar10 == 0xffffffff) || ((param->field0_0x0).bparam[2] == 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
        ActivateForTicks__10SpriteSloti(this_00,0);
        return kTrueComplete;
                    /* end of inlined section */
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
      index = uVar10;
      if (((param->field0_0x0).bparam[3] >> 0xc & 1) != 0) {
        index = uVar10 + (int)(short)this->fTemp[0];
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
      if ((int)(uVar3 & 0xff00) >> 8 == 7) {
        if (uVar10 == 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          lVar9 = (*(code *)_5Globs_pNeighborhood->__vtable->SetShowTutorialArrow)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetShowTutorialArrow,
                             elem->fObjectID);
          if (lVar9 == 0) {
            return kTrueComplete;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
          pOVar6 = *(ObjSelector **)((int)lVar9 + 8);
                    /* end of inlined section */
          if (pOVar6 == (ObjSelector *)0x0) {
            return kTrueComplete;
          }
        }
        else {
          if (uVar10 < 2) {
            if ((uVar3 & 0xff) != 0) {
              return kTrueComplete;
            }
            pcVar7 = this->_vb966->__vtable;
            lVar9 = (*(code *)pcVar7[1].GetLightingContribution)
                              ((int)&this->_vb966->_vb899 +
                               (int)*(short *)&pcVar7[1].CanContributeLight,elem->fObjectID);
          }
          else {
            if (uVar10 != 2) {
              return kTrueComplete;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
            uVar10 = (param->field0_0x0).bparam[0] & 0x7e0;
                    /* end of inlined section */
            uVar3 = 0x33;
            if ((uint)elem->fNumLocalVars <= uVar10 >> 1) {
              pTVar11 = this->_vb1168;
              uVar12 = 0x33;
              goto LAB_002297e8;
            }
            pcVar2 = this->_vb966;
            pcVar7 = pcVar2->__vtable;
            sVar1 = *(short *)&pcVar7[1].CanContributeLight;
            puVar5 = GetLocals__9StackElem(elem);
            lVar9 = (*(code *)pcVar7[1].GetLightingContribution)
                              ((int)&pcVar2->_vb899 + (int)sVar1,
                               *(undefined2 *)(uVar10 + (int)puVar5));
          }
          if (lVar9 == 0) {
            return kTrueComplete;
          }
          iVar13 = *(int *)((int)lVar9 + 4);
          pOVar6 = (ObjSelector *)
                   (**(code **)(iVar13 + 0x2ec))((int)lVar9 + (int)*(short *)(iVar13 + 0x2e8));
          pOVar6 = GetMasterSelector__11ObjSelector(pOVar6);
        }
        SetSprite__10SpriteSlotP11ObjSelector(this_00,pOVar6);
      }
      else {
        __13IconGroupImpl(&ig);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        Init__13IconGroupImpli
                  (&ig,((int)(param->field0_0x0).find5WorstMotives.unused1 & 0xff00U) >> 8);
        uVar3 = GetSpriteID__13IconGroupImpli(&ig,index);
        if (uVar3 == 0) {
          ___13IconGroupImpl(&ig,2);
          return kTrueComplete;
        }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        SetSprite__10SpriteSlotUiiib
                  (this_00,1,(int)(short)uVar3,1,
                   (bool)((byte)((param->field0_0x0).bparam[3] >> 10) & 1));
        ___13IconGroupImpl(&ig,2);
      }
                    /* end of inlined section */
      uVar3 = GetBalloonSpriteID__9IconGroupQ29IconGroup11BalloonType
                        ((uint)(param->field0_0x0).gotoRelative.flags);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      this_00->balloonSpriteID = (int)(short)uVar3;
                    /* end of inlined section */
      if (((param->field0_0x0).bparam[3] >> 9 & 1) == 0) {
        this_00->notSignSpriteID = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
        uVar3 = (param->field0_0x0).bparam[3];
      }
      else {
        __13IconGroupImpl(&ig);
        Init__13IconGroupImpli(&ig,1);
        uVar3 = GetSpriteID__13IconGroupImpli(&ig,3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
        this_00->notSignSpriteID = (int)(short)uVar3;
                    /* end of inlined section */
        ___13IconGroupImpl(&ig,2);
        uVar3 = (param->field0_0x0).bparam[3];
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
      *(uint *)&this_00->showWhenInactive = uVar3 >> 8 & 1;
                    /* end of inlined section */
      sVar1 = (param->field0_0x0).find5WorstMotives.whoToSearch;
      if (sVar1 == -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
        ActivateForTicks__10SpriteSloti(this_00,-1);
                    /* end of inlined section */
        pcVar7 = pcVar4->__vtable;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        if (((param->field0_0x0).bparam[3] >> 0xb & 1) == 0) {
          ActivateForTicks__10SpriteSloti(this_00,(int)sVar1);
          pcVar7 = pcVar4->__vtable;
        }
        else {
          ActivateForLoops__10SpriteSloti(this_00,(int)sVar1);
          pcVar7 = pcVar4->__vtable;
        }
      }
      (*(code *)pcVar7->RunTree)((int)&pcVar4->_vb899 + (int)*(short *)&pcVar7->IsSpriteVisible,0);
      (*(code *)pcVar4->__vtable->GetNext)
                ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable->GetObjectFromID);
    }
    TVar8 = kTrueComplete;
  }
  else {
    pcVar7 = this->_vb966->__vtable;
    pcVar4 = (cXObject__21_1030 *)
             (*(code *)pcVar7[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar7[1].CanContributeLight,
                        elem->fObjectID);
    uVar3 = 0x15;
    if (pcVar4 != (cXObject__21_1030 *)0x0) goto LAB_0022964c;
    pTVar11 = this->_vb1168;
    uVar12 = 0x15;
LAB_002297e8:
    pTVar11->fError = uVar3;
    pcVar7 = this->_vb966->__vtable;
    (*(code *)pcVar7->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar7->SimIndependent,uVar12);
    TVar8 = kError;
  }
  return TVar8;
}

TreeReturnCode cXObjectImpl::TryCallNamedTree(StackElem *elem, XPrimParam *param) {
	iResFile *file;
	AUTOPTR<StringSet> treeNames;
	char *name;
	cXObjectImpl *target;
	cXObjectImpl *treeOwner;
	bool run;
	Behavior *b;
	SInt16 treeID;
	
  byte bVar1;
  TreeSim *pTVar2;
  TreeSim__vtable *pTVar3;
  int iVar4;
  cXObject__21_1030__vtable *pcVar5;
  bool bVar6;
  ushort uVar7;
  ushort stackObjectID;
  iResFile__6_5027 *piVar8;
  StringSet *pInstance;
  cXObjectImpl__127_901 *pcVar9;
  cXObjectImpl__127_901 *pcVar10;
  Behavior *this_00;
  long lVar11;
  long lVar12;
  TreeSimImpl__21_3338 *pTVar13;
  undefined4 uVar14;
  cXObject__21_1030 *pcVar15;
  AUTOPTR_StringSet_ treeNames;
  
  if (elem->fPrimState == 1) {
    pTVar2 = this->_vb1168->_vb899;
    pTVar3 = pTVar2->__vtable;
    lVar11 = (*(code *)pTVar3[1].GetLastTransition)
                       ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar3[1].GetIterations);
    return (uint)(lVar11 != 0);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if (((param->field0_0x0).bparam[1] & 1) == 0) {
    piVar8 = GetPrivFile__8Behavior(elem->fBehavior);
  }
  else {
    piVar8 = GetGlobFile__8Behavior(elem->fBehavior);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
  pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  (*(code *)pInstance->__vtable[1].InsertString)
            ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].SetString,piVar8,
             (param->field0_0x0).bparam[0],0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  lVar11 = (*(code *)pInstance->__vtable->RemoveString)
                     ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->InsertString,
                      (param->field0_0x0).expression.isSigned,0xffffffffffffffff);
  if (lVar11 == 0) goto LAB_00229d40;
  pcVar10 = (cXObjectImpl__127_901 *)0x0;
  if (*(char *)lVar11 == '\0') goto LAB_00229d40;
                    /* end of inlined section */
  bVar1 = (param->field0_0x0).directionTo.fromOwner;
  bVar6 = false;
  if (bVar1 == 1) {
    pcVar5 = this->_vb966->__vtable;
    lVar12 = (*(code *)pcVar5[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].CanContributeLight,
                        elem->fObjectID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar9 = (cXObjectImpl__127_901 *)0x0;
    if (lVar12 != 0) {
      iVar4 = *(int *)((int)lVar12 + 4);
      pcVar9 = (cXObjectImpl__127_901 *)
               (**(code **)(iVar4 + 0x454))((int)lVar12 + (int)*(short *)(iVar4 + 0x450));
                    /* end of inlined section */
      pcVar10 = pcVar9;
    }
LAB_00229bc4:
    bVar6 = true;
LAB_00229c1c:
    if (pcVar9 == (cXObjectImpl__127_901 *)0x0) {
      pTVar13 = this->_vb1168;
    }
    else {
      if (pcVar10 != (cXObjectImpl__127_901 *)0x0) {
        pcVar5 = pcVar10->_vb966->__vtable;
        this_00 = (Behavior *)
                  (*(code *)pcVar5[1].SetData)
                            ((int)&pcVar10->_vb966->_vb899 + (int)*(short *)&pcVar5[1].IsOccupied);
        uVar7 = GetTreeIDByNameFast__8BehaviorPCc(this_00,(char *)lVar11);
        if (uVar7 != 0) {
                    /* end of inlined section */
          if (bVar6) {
            pcVar5 = pcVar10->_vb966->__vtable;
            stackObjectID =
                 (*(code *)pcVar5[1].UserCanPlace)
                           ((int)&pcVar10->_vb966->_vb899 + (int)*(short *)&pcVar5[1].IsPartOfMe);
            bVar6 = RunCheckTree__11TreeSimImplP8BehaviorssPs
                              (pcVar9->_vb1168,this_00,stackObjectID,uVar7,(ushort *)0x0);
            if (bVar6) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
              DestroyInstance__9StringSetP9StringSet(pInstance);
              return kTrueComplete;
                    /* end of inlined section */
            }
          }
          else {
                    /* end of inlined section */
            pcVar15 = (cXObject__21_1030 *)0x0;
            if (pcVar9 == this) {
              if (pcVar10 != (cXObjectImpl__127_901 *)0x0) {
                pcVar15 = pcVar10->_vb966;
              }
              lVar11 = (*(code *)(&pcVar9->__vtable->Cleanup)[1])
                                 ((int)pcVar9->fTemp + *(short *)&pcVar9->__vtable->Cleanup + -0x16,
                                  pcVar15,0,uVar7,0);
              if (lVar11 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                elem->fPrimState = 1;
                DestroyInstance__9StringSetP9StringSet(pInstance);
                return kStackLoaded;
                    /* end of inlined section */
              }
            }
          }
        }
LAB_00229d40:
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
        DestroyInstance__9StringSetP9StringSet(pInstance);
                    /* end of inlined section */
        return kFalseComplete;
      }
      pTVar13 = this->_vb1168;
    }
    uVar7 = 0x15;
    uVar14 = 0x15;
  }
  else {
    pcVar9 = this;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pcVar5 = this->_vb966->__vtable;
        lVar12 = (*(code *)pcVar5[1].GetLightingContribution)
                           ((int)&this->_vb966->_vb899 +
                            (int)*(short *)&pcVar5[1].CanContributeLight,elem->fObjectID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
        bVar6 = true;
        if (lVar12 != 0) {
          iVar4 = *(int *)((int)lVar12 + 4);
          pcVar10 = (cXObjectImpl__127_901 *)
                    (**(code **)(iVar4 + 0x454))((int)lVar12 + (int)*(short *)(iVar4 + 0x450));
                    /* end of inlined section */
          goto LAB_00229bc4;
        }
        goto LAB_00229c1c;
      }
      pTVar13 = this->_vb1168;
    }
    else {
      if (bVar1 == 2) {
        pcVar5 = this->_vb966->__vtable;
        lVar12 = (*(code *)pcVar5[1].GetLightingContribution)
                           ((int)&this->_vb966->_vb899 +
                            (int)*(short *)&pcVar5[1].CanContributeLight,elem->fObjectID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
        if (lVar12 != 0) {
          iVar4 = *(int *)((int)lVar12 + 4);
          pcVar10 = (cXObjectImpl__127_901 *)
                    (**(code **)(iVar4 + 0x454))((int)lVar12 + (int)*(short *)(iVar4 + 0x450));
                    /* end of inlined section */
        }
        goto LAB_00229c1c;
      }
      pTVar13 = this->_vb1168;
    }
    uVar7 = 0x2c;
    uVar14 = 0x2c;
                    /* end of inlined section */
  }
  pTVar13->fError = uVar7;
  pcVar5 = this->_vb966->__vtable;
  (*(code *)pcVar5->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->SimIndependent,uVar14);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet(pInstance);
  return kError;
                    /* end of inlined section */
}

static void MakeTimeString(BString2 *outString, int hour) {
	StackString<32> buf;
	char *szAMPM;
	
  char *pcVar1;
  StackString_32_ buf;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&buf.field0_0x0,(char *)((uint)&buf | 8),0x20);
                    /* end of inlined section */
  if (hour < 0xc) {
    pcVar1 = "AM";
  }
  else {
    pcVar1 = "PM";
  }
  if (hour == 0) {
    hour = 0xc;
  }
  else if (0xc < hour) {
    hour = hour + -0xc;
  }
  appendChar__12StringBufferc(&buf.field0_0x0,' ');
  appendNum__12StringBufferi(&buf.field0_0x0,hour);
  appendChar__12StringBufferc(&buf.field0_0x0,':');
  appendNum__12StringBufferii(&buf.field0_0x0,0,2);
  append__12StringBufferPCci(&buf.field0_0x0,pcVar1,-1);
  appendChar__12StringBufferc(&buf.field0_0x0,' ');
  pcVar1 = c_str__C12StringBuffer(&buf.field0_0x0);
  assignDebug__8BString2PCc(outString,pcVar1);
  return;
}

static int ParseOneString(BString2 &rawText, BString2 &subString, int startPos, int *outLen, int *outLocal1, int *outLocal2) {
	unsigned int pos;
	int i;
	int rawLen;
	StackString<16> numStr;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint pos;
  StackString_16_ numStr;
  
  uVar2 = find__C8BString2RC8BString2Ui(rawText,subString,startPos);
  if (uVar2 == 0xffffffff) {
    return -1;
  }
  uVar3 = length__C8BString2(subString);
  uVar3 = uVar2 + uVar3;
  uVar4 = length__C8BString2(rawText);
  *outLocal1 = -1;
  *outLocal2 = -1;
  if ((int)uVar3 < (int)uVar4) {
    sVar1 = __vc__C8BString2Ui(rawText,uVar3);
    iVar7 = uVar3 - uVar2;
    if (sVar1 != 0x3a) goto LAB_0022a034;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    __12StringBufferPcUi(&numStr.field0_0x0,(char *)((uint)&numStr | 8),0x10);
                    /* end of inlined section */
    while( true ) {
      pos = uVar3 + 1;
      if (((int)uVar4 <= (int)pos) ||
         (sVar1 = __vc__C8BString2Ui(rawText,pos), (""[sVar1 + 1] & 4U) == 0)) break;
      sVar1 = __vc__C8BString2Ui(rawText,pos);
      appendChar__12StringBufferc(&numStr.field0_0x0,(char)sVar1);
      uVar3 = pos;
    }
    iVar7 = length__C12StringBuffer(&numStr.field0_0x0);
    if (iVar7 != 0) {
      pcVar5 = c_str__C12StringBuffer(&numStr.field0_0x0);
      iVar7 = atoi(pcVar5);
      *outLocal1 = iVar7;
    }
    iVar7 = pos - uVar2;
    if ((int)uVar4 <= (int)pos) goto LAB_0022a034;
    sVar1 = __vc__C8BString2Ui(rawText,pos);
    iVar7 = pos - uVar2;
    if (sVar1 != 0x3a) goto LAB_0022a034;
    uVar3 = uVar3 + 2;
    erase__12StringBuffer(&numStr.field0_0x0);
    while (((int)uVar3 < (int)uVar4 &&
           (sVar1 = __vc__C8BString2Ui(rawText,uVar3), (""[sVar1 + 1] & 4U) != 0))) {
      sVar1 = __vc__C8BString2Ui(rawText,uVar3);
      uVar3 = uVar3 + 1;
      appendChar__12StringBufferc(&numStr.field0_0x0,(char)sVar1);
    }
    iVar6 = length__C12StringBuffer(&numStr.field0_0x0);
    iVar7 = uVar3 - uVar2;
    if (iVar6 == 0) goto LAB_0022a034;
    pcVar5 = c_str__C12StringBuffer(&numStr.field0_0x0);
    iVar7 = atoi(pcVar5);
    *outLocal2 = iVar7;
  }
  iVar7 = uVar3 - uVar2;
LAB_0022a034:
  *outLen = iVar7;
  return uVar2;
}

void cXObjectImpl::ParseUIString(BString2 &rawText, StackElem *elem, StdPrm *stackVars, ObjSelector **stackObjType) {
	int pos;
	int local1;
	int local2;
	int length;
	StackString2<32> numStr;
	BString2 *jobSubs[3];
	Family *f;
	StringBufW255 numStr255;
	Neighbor *n;
	Family *f;
	Neighbor *this;
	StringBufW255 name;
	ObjSelector *sel;
	ObjSelector *sel;
	cXObject *obj;
	ObjSelector *sel;
	cXObject *obj;
	ObjSelector *sel;
	int hour;
	BString2 timeStr;
	int i;
	cXPerson *person;
	StdPrm careerID;
	StdPrm jobLevel;
	bool female;
	Career *career;
	cXObjectImpl *ptr;
	unsigned int n;
	
  short sVar1;
  Neighborhood__vtable *pNVar2;
  cXObject__21_1030 *pcVar3;
  cXObject__21_1030__vtable *pcVar4;
  ulong *puVar5;
  Neighborhood__vtable **ppNVar6;
  StringBuffer2 *pSVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  ObjSelector *pOVar14;
  BString2 *pBVar15;
  ELocString EVar16;
  void *pvVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  undefined8 unaff_s0;
  int *piVar24;
  undefined8 unaff_s1;
  int iVar25;
  int iVar26;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  int iVar27;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  StackString2_32_ numStr;
  BString2 timeStr;
  undefined8 uStack_2c9;
  int length;
  int local1;
  int local2;
  cXObjectImpl__127_901 *ptr;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  StringBuffer2 *local_a4;
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
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  ptr = this;
  __13StringBuffer2PUsUi(&numStr.field0_0x0,(short *)((uint)&numStr | 8),0x20);
                    /* end of inlined section */
  uVar10 = 0;
  if (elem != (StackElem *)0x0) {
    uVar10 = elem->fObjectID;
  }
  iVar25 = 0;
  local_a4 = (StringBuffer2 *)&timeStr;
  local_b0 = &length;
  local_ac = &local1;
  local_a8 = &local2;
LAB_0022a1b0:
  do {
    uVar11 = ParseOneString__FRC8BString2T0iPiN23
                       (rawText,&sFamilyAssetsSub,iVar25,local_b0,local_ac,local_a8);
    pSVar7 = local_a4;
    if (uVar11 == 0xffffffff) break;
    if (elem != (StackElem *)0x0) {
      if (local1 < 0) {
        iVar25 = uVar11 + 1;
        goto LAB_0022a1b0;
      }
      if (local1 < (int)(uint)elem->fNumLocalVars) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        pNVar2 = _5Globs_pNeighborhood->__vtable;
        sVar1 = *(short *)&pNVar2[1].Save;
        ppNVar6 = &_5Globs_pNeighborhood->__vtable;
        puVar18 = GetLocals__9StackElem(elem);
        lVar20 = (*(code *)pNVar2[1].GetHouseNumberForLevel)
                           ((int)ppNVar6 + (int)sVar1,puVar18[local1]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
                    /* end of inlined section */
        if (lVar20 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
          __13StringBuffer2PUsUi((StringBuffer2 *)&timeStr,(short *)((int)&uStack_2c9 + 1),0x100);
                    /* end of inlined section */
          iVar25 = *(int *)lVar20;
          iVar25 = (**(code **)(iVar25 + 0xbc))((int)(int *)lVar20 + (int)*(short *)(iVar25 + 0xb8))
          ;
          appendNum__13StringBuffer2i(local_a4,iVar25);
          iVar25 = length;
          psVar13 = c_str__C13StringBuffer2(local_a4);
          replace__8BString2UiUiPCUs(rawText,uVar11,iVar25,psVar13);
        }
      }
    }
    iVar25 = uVar11 + 1;
  } while( true );
  uVar11 = 0;
LAB_0022a2b0:
  do {
    uVar11 = find__C8BString2RC8BString2Ui(rawText,&sFamilySub,uVar11);
    if (uVar11 == 0xffffffff) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar20 = (*(code *)_5Globs_pNeighborhood->__vtable->SetShowTutorialArrow)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetShowTutorialArrow,uVar10
                       );
    if (lVar20 == 0) {
      uVar11 = uVar11 + 1;
      goto LAB_0022a2b0;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar20 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetHouseNumberForLevel)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].Save,
                        *(undefined2 *)((int)lVar20 + 0xde));
    if (lVar20 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
      __13StringBuffer2PUsUi((StringBuffer2 *)&timeStr,(short *)((int)&uStack_2c9 + 1),0x100);
      piVar24 = (int *)lVar20;
                    /* end of inlined section */
      (**(code **)(*piVar24 + 0x5c))((int)piVar24 + (int)*(short *)(*piVar24 + 0x58),pSVar7);
      uVar12 = length__C8BString2(&sFamilySub);
      psVar13 = c_str__C13StringBuffer2(pSVar7);
      replace__8BString2UiUiPCUs(rawText,uVar11,uVar12,psVar13);
      if (stackVars == (ushort *)0x0) {
        uVar11 = uVar11 + 1;
        goto LAB_0022a2b0;
      }
      uVar9 = (**(code **)(*piVar24 + 0x74))((int)piVar24 + (int)*(short *)(*piVar24 + 0x70));
      stackVars[1] = uVar9;
    }
    uVar11 = uVar11 + 1;
  } while( true );
  uVar11 = 0;
  while (uVar11 = find__C8BString2RC8BString2Ui(rawText,&sNeighborSub,uVar11), uVar11 != 0xffffffff)
  {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar20 = (*(code *)_5Globs_pNeighborhood->__vtable[1].Neighborhood)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)(_5Globs_pNeighborhood->__vtable + 1),uVar10);
    if (lVar20 != 0) {
      pOVar14 = (ObjSelector *)lVar20;
      if (stackObjType != (ObjSelector **)0x0) {
        *stackObjType = pOVar14;
      }
      bVar8 = GetIsPerson__11ObjSelector(pOVar14);
      if (bVar8) {
        uVar12 = length__C8BString2(&sNeighborSub);
        pBVar15 = GetUserName__11ObjSelector(pOVar14);
        replace__8BString2UiUiRC8BString2UiUi(rawText,uVar11,uVar12,pBVar15,0,0xffffffff);
      }
      else {
        uVar12 = length__C8BString2(&sNeighborSub);
        EVar16 = GetCatalogName__11ObjSelector(pOVar14);
        replace__8BString2UiUiPCUs(rawText,uVar11,uVar12,*EVar16.ptr);
      }
      if (stackVars != (ushort *)0x0) {
        *stackVars = uVar10;
      }
    }
    uVar11 = uVar11 + 1;
  }
  uVar11 = 0;
  while( true ) {
    uVar11 = find__C8BString2RC8BString2Ui(rawText,&sMeSub,uVar11);
    if (uVar11 == 0xffffffff) break;
    pcVar4 = ptr->_vb966->__vtable;
    pOVar14 = (ObjSelector *)
              (*(code *)pcVar4[1].SetLevel)
                        ((int)&ptr->_vb966->_vb899 + (int)*(short *)&pcVar4[1].GetTreeID);
    bVar8 = GetIsPerson__11ObjSelector(pOVar14);
    if (bVar8) {
      uVar12 = length__C8BString2(&sMeSub);
      pBVar15 = GetUserName__11ObjSelector(pOVar14);
      replace__8BString2UiUiRC8BString2UiUi(rawText,uVar11,uVar12,pBVar15,0,0xffffffff);
      uVar11 = uVar11 + 1;
    }
    else {
      uVar12 = length__C8BString2(&sMeSub);
      EVar16 = GetCatalogName__11ObjSelector(pOVar14);
      replace__8BString2UiUiPCUs(rawText,uVar11,uVar12,*EVar16.ptr);
      uVar11 = uVar11 + 1;
    }
  }
  uVar11 = 0;
LAB_0022a570:
  do {
    uVar11 = find__C8BString2RC8BString2Ui(rawText,&sObjectSub,uVar11);
    if (uVar11 == 0xffffffff) break;
    pcVar4 = ptr->_vb966->__vtable;
    lVar20 = (*(code *)pcVar4[1].GetLightingContribution)
                       ((int)&ptr->_vb966->_vb899 + (int)*(short *)&pcVar4[1].CanContributeLight,
                        uVar10);
    if (lVar20 == 0) {
      uVar11 = uVar11 + 1;
      goto LAB_0022a570;
    }
    iVar25 = *(int *)((int)lVar20 + 4);
    lVar20 = (**(code **)(iVar25 + 0x2ec))((int)lVar20 + (int)*(short *)(iVar25 + 0x2e8));
    if (lVar20 != 0) {
      pOVar14 = (ObjSelector *)lVar20;
      if (stackObjType != (ObjSelector **)0x0) {
        *stackObjType = pOVar14;
      }
      bVar8 = GetIsPerson__11ObjSelector(pOVar14);
      if (bVar8) {
        uVar12 = length__C8BString2(&sObjectSub);
        pBVar15 = GetUserName__11ObjSelector(pOVar14);
        replace__8BString2UiUiRC8BString2UiUi(rawText,uVar11,uVar12,pBVar15,0,0xffffffff);
        uVar11 = uVar11 + 1;
        goto LAB_0022a570;
      }
      uVar12 = length__C8BString2(&sObjectSub);
      EVar16 = GetCatalogName__11ObjSelector(pOVar14);
      replace__8BString2UiUiPCUs(rawText,uVar11,uVar12,*EVar16.ptr);
    }
    uVar11 = uVar11 + 1;
  } while( true );
  iVar25 = 0;
LAB_0022a68c:
  do {
    uVar11 = ParseOneString__FRC8BString2T0iPiN23
                       (rawText,&sNameLocal,iVar25,local_b0,local_ac,local_a8);
    if (uVar11 == 0xffffffff) break;
    if (elem != (StackElem *)0x0) {
      if (local1 < 0) {
        iVar25 = uVar11 + 1;
        goto LAB_0022a68c;
      }
      if (local1 < (int)(uint)elem->fNumLocalVars) {
        pcVar3 = ptr->_vb966;
        pcVar4 = pcVar3->__vtable;
        sVar1 = *(short *)&pcVar4[1].CanContributeLight;
        puVar18 = GetLocals__9StackElem(elem);
        lVar20 = (*(code *)pcVar4[1].GetLightingContribution)
                           ((int)&pcVar3->_vb899 + (int)sVar1,puVar18[local1]);
        if (lVar20 == 0) {
          iVar25 = uVar11 + 1;
          goto LAB_0022a68c;
        }
        iVar25 = *(int *)((int)lVar20 + 4);
        lVar20 = (**(code **)(iVar25 + 0x2ec))((int)lVar20 + (int)*(short *)(iVar25 + 0x2e8));
        if (lVar20 == 0) {
          iVar25 = uVar11 + 1;
          goto LAB_0022a68c;
        }
        pOVar14 = (ObjSelector *)lVar20;
        if (stackObjType != (ObjSelector **)0x0) {
          *stackObjType = pOVar14;
        }
        bVar8 = GetIsPerson__11ObjSelector(pOVar14);
        iVar25 = length;
        if (bVar8) {
          pBVar15 = GetUserName__11ObjSelector(pOVar14);
          replace__8BString2UiUiRC8BString2UiUi(rawText,uVar11,iVar25,pBVar15,0,0xffffffff);
          iVar25 = uVar11 + 1;
          goto LAB_0022a68c;
        }
        EVar16 = GetCatalogName__11ObjSelector(pOVar14);
        replace__8BString2UiUiPCUs(rawText,uVar11,iVar25,*EVar16.ptr);
      }
    }
    iVar25 = uVar11 + 1;
  } while( true );
  iVar25 = 0;
LAB_0022a734:
  do {
    uVar11 = ParseOneString__FRC8BString2T0iPiN23
                       (rawText,&sLocalSub,iVar25,local_b0,local_ac,local_a8);
    if (uVar11 == 0xffffffff) break;
    if (elem != (StackElem *)0x0) {
      if (local1 < 0) {
        iVar25 = uVar11 + 1;
        goto LAB_0022a734;
      }
      if (local1 < (int)(uint)elem->fNumLocalVars) {
        erase__13StringBuffer2(&numStr.field0_0x0);
        puVar18 = GetLocals__9StackElem(elem);
        appendNum__13StringBuffer2i(&numStr.field0_0x0,(int)(short)puVar18[local1]);
        iVar25 = length;
        psVar13 = c_str__C13StringBuffer2(&numStr.field0_0x0);
        replace__8BString2UiUiPCUs(rawText,uVar11,iVar25,psVar13);
      }
    }
    iVar25 = uVar11 + 1;
  } while( true );
  iVar25 = 0;
LAB_0022a7cc:
  do {
    uVar11 = ParseOneString__FRC8BString2T0iPiN23
                       (rawText,&sGradeSub,iVar25,local_b0,local_ac,local_a8);
    pSVar7 = local_a4;
    iVar25 = length;
    if (uVar11 == 0xffffffff) break;
    if (elem != (StackElem *)0x0) {
      if (local1 < 0) {
        iVar25 = uVar11 + 1;
        goto LAB_0022a7cc;
      }
      if (local1 < (int)(uint)elem->fNumLocalVars) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        puVar19 = (undefined4 *)
                  (*(code *)_5Globs_pCareers->__vtable[1].TearDown)
                            ((int)&_5Globs_pCareers->__vtable +
                             (int)*(short *)&_5Globs_pCareers->__vtable[1].Load,local1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        replace__8BString2UiUiPCUs(rawText,uVar11,iVar25,*(short **)*puVar19);
      }
    }
    iVar25 = uVar11 + 1;
  } while( true );
  iVar25 = 0;
LAB_0022a890:
  do {
    uVar11 = ParseOneString__FRC8BString2T0iPiN23
                       (rawText,&sTimeSub,iVar25,local_b0,local_ac,local_a8);
    if (uVar11 == 0xffffffff) {
      uVar11 = (uint)&uStack_2c9 & 7;
      puVar5 = (ulong *)((int)&uStack_2c9 - uVar11);
      *puVar5 = *puVar5 & -1L << (uVar11 + 1) * 8 |
                (ulong)_PTR_sJobOfferSub_003b9fa8 >> (7 - uVar11) * 8;
      _timeStr = _PTR_sJobOfferSub_003b9fa8;
      uStack_2c9._1_4_ = PTR_sJobSub_003b9fb0;
      iVar25 = 0;
      do {
        iVar26 = 0;
        iVar27 = iVar25 + 1;
        while( true ) {
          uVar11 = ParseOneString__FRC8BString2T0iPiN23
                             (rawText,(BString2 *)(&local_a4->fMem)[iVar25],iVar26,local_b0,local_ac
                              ,local_a8);
          if (uVar11 == 0xffffffff) break;
                    /* inlined from SCID.h */
          if (ptr == (cXObjectImpl__127_901 *)0x0) {
            pvVar17 = (void *)0x0;
          }
          else {
            pvVar17 = _dyncastimpl__7TreeSim4SCID(ptr->_vb966->_vb899,cXPersonID);
          }
                    /* end of inlined section */
          uVar10 = 0;
          lVar20 = 0;
          if ((local1 == -1) || (local2 == -1)) {
            if (pvVar17 != (void *)0x0) {
              uVar10 = (**(code **)(*(int *)((int)pvVar17 + 4) + 0xe4))
                                 ((int)pvVar17 + (int)*(short *)(*(int *)((int)pvVar17 + 4) + 0xe0),
                                  0x38);
              lVar20 = (**(code **)(*(int *)((int)pvVar17 + 4) + 0xe4))
                                 ((int)pvVar17 + (int)*(short *)(*(int *)((int)pvVar17 + 4) + 0xe0),
                                  0x39);
              goto LAB_0022a9cc;
            }
LAB_0022a9f0:
            bVar8 = false;
          }
          else {
            if (((elem != (StackElem *)0x0) &&
                (((-1 < local1 && (local1 < (int)(uint)elem->fNumLocalVars)) && (-1 < local2)))) &&
               (local2 < (int)(uint)elem->fNumLocalVars)) {
              puVar18 = GetLocals__9StackElem(elem);
              uVar10 = puVar18[local1];
              puVar18 = GetLocals__9StackElem(elem);
              lVar20 = (long)(short)puVar18[local2];
            }
LAB_0022a9cc:
            if (pvVar17 == (void *)0x0) goto LAB_0022a9f0;
            lVar21 = (**(code **)(*(int *)((int)pvVar17 + 4) + 0xe4))
                               ((int)pvVar17 + (int)*(short *)(*(int *)((int)pvVar17 + 4) + 0xe0),
                                0x41);
            bVar8 = lVar21 != 0;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          lVar21 = (*(code *)_5Globs_pCareers->__vtable->GetJobGrade)
                             ((int)&_5Globs_pCareers->__vtable +
                              (int)*(short *)&_5Globs_pCareers->__vtable->GetJobPerformance,uVar10);
          iVar26 = length;
          if (lVar21 == 0) {
            iVar26 = uVar11 + 1;
          }
          else if (lVar20 < 0) {
            iVar26 = uVar11 + 1;
          }
          else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            iVar23 = *(int *)((int)lVar21 + 4);
            lVar22 = 0;
            if (iVar23 != 0) {
              lVar22 = (long)*(int *)(iVar23 + -4);
            }
                    /* end of inlined section */
            if (lVar20 < lVar22) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              iVar23 = (int)lVar20 * 0x6c + iVar23;
              if (iVar25 == 1) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                replace__8BString2UiUiPCUs(rawText,uVar11,length,**(short ***)(iVar23 + 0x68));
                iVar26 = uVar11 + 1;
              }
              else if (iVar25 < 2) {
                if (iVar25 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                  puVar19 = (undefined4 *)
                            (*(code *)_5Globs_pCareers->__vtable[1].GetNumCareers)
                                      ((int)&_5Globs_pCareers->__vtable +
                                       (int)*(short *)&_5Globs_pCareers->__vtable[1].GetCareerByID,
                                       lVar21,bVar8);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                  replace__8BString2UiUiPCUs(rawText,uVar11,iVar26,*(short **)*puVar19);
                  iVar26 = uVar11 + 1;
                }
                else {
                  iVar26 = uVar11 + 1;
                }
              }
              else {
                if (iVar25 == 2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                  puVar19 = (undefined4 *)
                            (*(code *)_5Globs_pCareers->__vtable[1].GetJobGrade)
                                      ((int)&_5Globs_pCareers->__vtable +
                                       (int)*(short *)&_5Globs_pCareers->__vtable[1].
                                                       GetJobPerformance,iVar23,bVar8);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                  replace__8BString2UiUiPCUs(rawText,uVar11,iVar26,*(short **)*puVar19);
                  goto LAB_0022ab1c;
                }
                iVar26 = uVar11 + 1;
              }
            }
            else {
LAB_0022ab1c:
              iVar26 = uVar11 + 1;
            }
          }
        }
        iVar25 = iVar27;
        if (2 < iVar27) {
          return;
        }
      } while( true );
    }
    if (elem != (StackElem *)0x0) {
      if (local1 < 0) {
        iVar25 = uVar11 + 1;
        goto LAB_0022a890;
      }
      if (local1 < (int)(uint)elem->fNumLocalVars) {
        puVar18 = GetLocals__9StackElem(elem);
        uVar10 = puVar18[local1];
        if (uVar10 < 0x18) {
          __8BString2((BString2 *)pSVar7);
          MakeTimeString__FP8BString2i((BString2 *)pSVar7,(int)(short)uVar10);
          replace__8BString2UiUiRC8BString2UiUi
                    (rawText,uVar11,length,(BString2 *)pSVar7,0,0xffffffff);
          ___8BString2((BString2 *)pSVar7,2);
        }
      }
    }
    iVar25 = uVar11 + 1;
  } while( true );
}

TreeReturnCode cXObjectImpl::TryMakeActionString(StackElem *elem, XPrimParam *param) {
	AUTOPTR<StringSet> strings;
	BString2 rawText;
	short int stackVars[4];
	ObjSelector *unused;
	cXPersonImpl *p;
	cXObjectImpl *ptr;
	
  short sVar1;
  StringSet__vtable *pSVar2;
  cXObject__21_1030__vtable *pcVar3;
  bool bVar4;
  StringSet *pInstance;
  iResFile__6_5027 *piVar5;
  short **ppsVar6;
  short *name;
  void *pvVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  AUTOPTR_StringSet_ strings;
  BString2 rawText;
  ushort stackVars [4];
  ObjSelector *unused;
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
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
  pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  pSVar2 = pInstance->__vtable;
  sVar1 = *(short *)&pSVar2[1].RemoveString;
  piVar5 = GetPrivFile__8Behavior(elem->fBehavior);
  (*(code *)pSVar2[1].GetDescription)
            ((int)&pInstance->__vtable + (int)sVar1,piVar5,(param->field0_0x0).bparam[0],0);
  __8BString2(&rawText);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  ppsVar6 = (short **)
            (*(code *)pInstance->__vtable->SetDescription)
                      ((int)&pInstance->__vtable +
                       (int)*(short *)&pInstance->__vtable->GetDescription,
                       (param->field0_0x0).expression.isSigned);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  if (*ppsVar6 != (short *)0x0) {
                    /* end of inlined section */
    assign__8BString2PCUs(&rawText,*ppsVar6);
  }
  memset(stackVars,0,8);
  pcVar3 = this->_vb966->__vtable;
  (*(code *)pcVar3->GetFolder)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->GetFrontFaceDirection,&rawText,
             elem,stackVars,&unused);
  bVar4 = IsMenuInProgress__10ObjTestSim();
  if (bVar4) {
    if (stackVars[0] == 0) {
      if (elem == (StackElem *)0x0) {
        stackVars[0] = 0;
      }
      else {
        stackVars[0] = elem->fObjectID;
      }
    }
    name = c_str__C8BString2(&rawText);
    MakeNewMenuItem__10ObjTestSimPCUsPCs(name,stackVars);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
                    /* end of inlined section */
    if (__7TreeSim_sInMainSim != 0) {
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonImplID);
      }
                    /* end of inlined section */
      if (pvVar7 != (void *)0x0) {
        SetName__11InteractionRC8BString2((Interaction *)((int)pvVar7 + 0x344),&rawText);
      }
    }
  }
  ___8BString2(&rawText,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet(pInstance);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  return kTrueComplete;
}

TreeReturnCode cXObjectImpl::TryPushAction(StackElem *elem, XPrimParam *param) {
	Int paramNum;
	SInt16 objectID;
	cXObject *object;
	TreeTable *treeTab;
	cXObject *targetObject;
	cXPerson *person;
	Int priority;
	Interaction interaction;
	cXObject *ptr;
	cXPerson *me;
	cXObjectImpl *ptr;
	int localNum;
	
  byte bVar1;
  cXObject__21_1030__vtable *pcVar2;
  ushort uVar3;
  ushort *puVar4;
  TreeTableEntry *pTVar5;
  cXPerson__142_985 *person;
  void *pvVar6;
  int priority;
  cXObject__142_982 *pcVar7;
  long lVar8;
  TreeSimImpl__21_3338 *pTVar9;
  undefined8 uVar10;
  TreeSim **ppTVar11;
  Interaction interaction;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  bVar1 = (param->field0_0x0).pushAction.dataForInteractingObject;
  if (((param->field0_0x0).distanceTo.fromOwner >> 1 & 1) == 0) {
    if (elem->fNumParams < bVar1) {
      pTVar9 = this->_vb1168;
      uVar3 = 8;
      uVar10 = 8;
      goto LAB_0022b110;
    }
    puVar4 = GetParams__9StackElem(elem);
  }
  else {
    if (elem->fNumLocalVars < bVar1) {
      pTVar9 = this->_vb1168;
      uVar3 = 0x33;
      uVar10 = 0x33;
      goto LAB_0022b110;
    }
    puVar4 = GetLocals__9StackElem(elem);
  }
  pcVar2 = this->_vb966->__vtable;
  lVar8 = (*(code *)pcVar2[1].GetLightingContribution)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight,
                     puVar4[bVar1]);
  if (lVar8 == 0) {
    pTVar9 = this->_vb1168;
    uVar3 = 0x17;
    uVar10 = 0x17;
    goto LAB_0022b110;
  }
  pcVar7 = (cXObject__142_982 *)lVar8;
  lVar8 = (*(code *)pcVar7->__vtable[1].GetFnTable)
                    ((int)&pcVar7->_vb1019 + (int)*(short *)&pcVar7->__vtable[1].ForceLocation);
  if (lVar8 == 0) {
    pTVar9 = this->_vb1168;
    uVar3 = 0x1f;
    uVar10 = 0x1f;
    goto LAB_0022b110;
  }
  pTVar5 = GetEntryByIndex__C9TreeTablei
                     ((TreeTable *)lVar8,(uint)(param->field0_0x0).pushAction.interactionIndex);
  if (pTVar5 == (TreeTableEntry *)0x0) {
    pTVar9 = this->_vb1168;
    uVar3 = 0x16;
    uVar10 = 0x16;
    goto LAB_0022b110;
  }
  pcVar2 = this->_vb966->__vtable;
  lVar8 = (*(code *)pcVar2[1].GetLightingContribution)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight,
                     elem->fObjectID);
  if (lVar8 == 0) {
    pTVar9 = this->_vb1168;
                    /* end of inlined section */
    uVar3 = 0x15;
    uVar10 = 0x15;
    goto LAB_0022b110;
  }
  ppTVar11 = (TreeSim **)lVar8;
                    /* inlined from SCID.h */
  person = (cXPerson__142_985 *)_dyncastimpl__7TreeSim4SCID(*ppTVar11,cXPersonID);
                    /* end of inlined section */
                    /* inlined from SCID.h */
                    /* end of inlined section */
  lVar8 = (*(code *)ppTVar11[1][0x15].m_pCursorObject)
                    ((int)ppTVar11 + (int)*(short *)&ppTVar11[1][0x15].m_pMTObject);
  if (lVar8 == 2) {
    if (person != (cXPerson__142_985 *)0x0) {
      bVar1 = (param->field0_0x0).distanceTo.flags;
      priority = 1;
      if (bVar1 == 1) {
        priority = 100;
      }
      else if (bVar1 < 2) {
        if (bVar1 != 0) {
          pTVar9 = this->_vb1168;
LAB_0022afb0:
          uVar3 = 0x2d;
          uVar10 = 0x2d;
          goto LAB_0022b110;
        }
        pcVar2 = this->_vb966->__vtable;
        lVar8 = (*(code *)pcVar2[1].Pickup)
                          ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].Turn);
        if (lVar8 != 2) {
          bVar1 = (param->field0_0x0).pushAction.interactionIndex;
          goto LAB_0022afc0;
        }
                    /* inlined from SCID.h */
        if (this == (cXObjectImpl__127_901 *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
        }
                    /* end of inlined section */
        priority = 1;
        if (pvVar6 != (void *)0x0) {
          priority = (**(code **)(*(int *)((int)pvVar6 + 4) + 0xe4))
                               ((int)pvVar6 + (int)*(short *)(*(int *)((int)pvVar6 + 4) + 0xe0),0x21
                               );
        }
      }
      else if (bVar1 == 2) {
        priority = 2;
      }
      else {
        priority = 0x32;
        if (bVar1 != 3) {
          pTVar9 = this->_vb1168;
          goto LAB_0022afb0;
        }
      }
      bVar1 = (param->field0_0x0).pushAction.interactionIndex;
LAB_0022afc0:
      __11InteractionP8cXPersonP8cXObjectii(&interaction,person,pcVar7,(uint)bVar1,priority);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
      interaction.fFlags = interaction.fFlags & 0xffffffbf;
      if (((param->field0_0x0).distanceTo.fromOwner >> 3 & 1) != 0) {
        interaction.fFlags = interaction.fFlags | 0x40;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
      if (((param->field0_0x0).distanceTo.fromOwner & 1) == 0) {
        bVar1 = (param->field0_0x0).distanceTo.fromOwner;
      }
      else {
        bVar1 = (param->field0_0x0).directionTo.flags;
        if (elem->fNumLocalVars <= bVar1) {
          this->_vb1168->fError = 0x33;
          pcVar2 = this->_vb966->__vtable;
          (*(code *)pcVar2->SimEnabled)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,0x33);
          ___8BString2(&interaction.fName,2);
          return kError;
        }
        puVar4 = GetLocals__9StackElem(elem);
        pcVar2 = this->_vb966->__vtable;
        pcVar7 = (cXObject__142_982 *)
                 (*(code *)pcVar2[1].GetLightingContribution)
                           ((int)&this->_vb966->_vb899 +
                            (int)*(short *)&pcVar2[1].CanContributeLight,puVar4[bVar1]);
        SetIconObject__11InteractionP8cXObject(&interaction,pcVar7);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
        bVar1 = (param->field0_0x0).distanceTo.fromOwner;
      }
      interaction.fFlags = interaction.fFlags & 0xfffffffd;
      if ((bVar1 >> 2 & 1) != 0) {
        interaction.fFlags = interaction.fFlags | 2;
      }
                    /* end of inlined section */
      lVar8 = (*(code *)person->__vtable->GetJobSuitTex)
                        ((int)&person->_vb982 + (int)*(short *)&person->__vtable->GetSAnimator,
                         &interaction);
      if (lVar8 != 0) {
        ___8BString2(&interaction.fName,2);
        return kTrueComplete;
      }
      ___8BString2(&interaction.fName,2);
      return kFalseComplete;
    }
    pTVar9 = this->_vb1168;
  }
  else {
    pTVar9 = this->_vb1168;
  }
  uVar3 = 0x1c;
  uVar10 = 0x1c;
LAB_0022b110:
  pTVar9->fError = uVar3;
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,uVar10);
  return kError;
}

int _MotiveSort(void *m1, void *m2) {
	Int mot1;
	Int mot2;
	float val1;
	float val2;
	float diff;
	
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = -1;
  if ((-0.01 <= sCurMotiveTabToSort[*m1] - sCurMotiveTabToSort[*m2]) &&
     (iVar1 = 1, sCurMotiveTabToSort[*m1] - sCurMotiveTabToSort[*m2] <= 0.01)) {
    return 0;
  }
  return iVar1;
}

TreeReturnCode cXObjectImpl::TryFind5WorstMotives(StackElem *elem, XPrimParam *param) {
	Int srchType;
	Int srchTarget;
	cXPerson *person;
	int motivesToTest[9];
	Int *firstToSort;
	Int cnt;
	cXObjectImpl *ptr;
	
  short sVar1;
  ushort uVar2;
  cXObject__21_1030 *pcVar3;
  TreeSim__vtable *pTVar4;
  cXObject__21_1030__vtable *pcVar5;
  uint uVar6;
  ulong *puVar7;
  ushort uVar8;
  int *piVar9;
  long lVar10;
  TreeSimImpl__21_3338 *pTVar11;
  ushort *puVar12;
  TreeSim *pTVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  int motivesToTest [9];
  
  piVar14 = motivesToTest;
  uVar8 = (param->field0_0x0).bparam[2];
  uVar2 = (param->field0_0x0).bparam[3];
  uVar6 = (int)motivesToTest + 7U & 7;
  puVar7 = (ulong *)(((int)motivesToTest + 7U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | DAT_003b9fb8 >> (7 - uVar6) * 8;
  motivesToTest._0_8_ = DAT_003b9fb8;
  uVar6 = (int)motivesToTest + 0xfU & 7;
  puVar7 = (ulong *)(((int)motivesToTest + 0xfU) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | DAT_003b9fc0 >> (7 - uVar6) * 8;
  motivesToTest._8_8_ = DAT_003b9fc0;
  uVar6 = (int)motivesToTest + 0x17U & 7;
  puVar7 = (ulong *)(((int)motivesToTest + 0x17U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | DAT_003b9fc8 >> (7 - uVar6) * 8;
  motivesToTest._16_8_ = DAT_003b9fc8;
  uVar6 = (int)motivesToTest + 0x1fU & 7;
  puVar7 = (ulong *)(((int)motivesToTest + 0x1fU) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | DAT_003b9fd0 >> (7 - uVar6) * 8;
  motivesToTest._24_8_ = DAT_003b9fd0;
  motivesToTest[8] = DAT_003b9fd8;
  if (uVar8 == 1) {
                    /* end of inlined section */
    pcVar3 = this->_vb966;
    pTVar13 = this->_vb1168->_vb899;
    pcVar5 = pcVar3->__vtable;
    pTVar4 = pTVar13->__vtable;
    sVar1 = *(short *)&pcVar5[1].CanContributeLight;
    iVar16 = (**(code **)(pTVar4 + 1))
                       ((int)&pTVar13->m_pObject + (int)*(short *)&pTVar4->GetISimInstance);
    lVar10 = (*(code *)pcVar5[1].GetLightingContribution)
                       ((int)&pcVar3->_vb899 + (int)sVar1,*(undefined2 *)(iVar16 + 4));
                    /* inlined from SCID.h */
    if (lVar10 != 0) {
      pTVar13 = *(TreeSim **)lVar10;
      goto LAB_0022b2c0;
    }
LAB_0022b2d0:
                    /* end of inlined section */
    piVar9 = (int *)0x0;
  }
  else if ((uVar8 < 2) || (piVar9 = (int *)0x0, uVar8 != 2)) {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) goto LAB_0022b2d0;
    pTVar13 = this->_vb966->_vb899;
LAB_0022b2c0:
    piVar9 = (int *)_dyncastimpl__7TreeSim4SCID(pTVar13,cXPersonID);
  }
  if (piVar9 == (int *)0x0) {
    pTVar11 = this->_vb1168;
  }
  else {
    iVar16 = *(int *)(*piVar9 + 4);
    lVar10 = (**(code **)(iVar16 + 0x2ac))(*piVar9 + (int)*(short *)(iVar16 + 0x2a8));
    if (lVar10 == 2) {
      if ((ulong)uVar2 < 3) {
        if (-1 < (long)(ulong)uVar2) {
          sCurMotiveTabToSort =
               (float *)(**(code **)(piVar9[1] + 0x6c))
                                  ((int)piVar9 + (int)*(short *)(piVar9[1] + 0x68),0);
          qsort(motivesToTest,8,4,_MotiveSort__FPCvT0);
          puVar12 = this->fTemp;
          iVar16 = 4;
          do {
            uVar8 = *(ushort *)piVar14;
            iVar16 = iVar16 + -1;
            piVar14 = (int *)((int)piVar14 + 4);
            *puVar12 = uVar8;
            puVar12 = puVar12 + 1;
          } while (-1 < iVar16);
          return kTrueComplete;
        }
        pTVar11 = this->_vb1168;
      }
      else {
        pTVar11 = this->_vb1168;
      }
      uVar8 = 0x1e;
      uVar15 = 0x1e;
      goto LAB_0022b330;
    }
    pTVar11 = this->_vb1168;
  }
  uVar8 = 10;
  uVar15 = 10;
LAB_0022b330:
  pTVar11->fError = uVar8;
  pcVar5 = this->_vb966->__vtable;
  (*(code *)pcVar5->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->SimIndependent,uVar15);
  return kError;
}

TreeReturnCode cXObjectImpl::TryRelationship2(StackElem *elem, XPrimParam *_param) {
	RelKeyType key;
	RelMatrix *matrix;
	Neighborhood *ngh;
	StdPrm *stackVar;
	StdPrm val;
	cXPerson *aPerson;
	Neighbor *neighbor;
	Neighbor *relNeighbor;
	cXObjectImpl *ptr;
	cXObjectImpl *ptr;
	Neighbor *this;
	Neighbor *this;
	cXObject *person;
	cXObject *relObj;
	cXPerson *aPerson;
	Neighbor *aNeighbor;
	cXObject *ptr;
	Neighbor *this;
	cXObject *ptr;
	
  byte bVar1;
  short sVar2;
  Neighborhood__vtable *pNVar3;
  ObjectModule__vtable *pOVar4;
  ObjectModule *pOVar5;
  cXObject__21_1030__vtable *pcVar6;
  Neighborhood *pNVar7;
  undefined2 uVar8;
  ushort uVar9;
  void *pvVar10;
  ushort *puVar11;
  cXObject__21_1030 *pcVar12;
  cXObject__21_1030 *pcVar13;
  int *piVar15;
  TreeReturnCode TVar16;
  undefined8 uVar17;
  int iVar18;
  TreeSimImpl__21_3338 *pTVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  long lVar22;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ushort val;
  ushort *stackVar;
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
  code *pcVar14;
  
  pNVar7 = _5Globs_pNeighborhood;
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if (((_param->field0_0x0).distanceTo.flags >> 1 & 1) == 0) {
    bVar1 = (_param->field0_0x0).pushAction.dataForInteractingObject;
    pcVar12 = (cXObject__21_1030 *)0x0;
    pcVar13 = (cXObject__21_1030 *)0x0;
    if (bVar1 == 1) {
      pcVar13 = this->_vb966;
      uVar9 = elem->fObjectID;
      pcVar14 = (code *)pcVar13->__vtable[1].GetLightingContribution;
      iVar18 = (int)&pcVar13->_vb899 + (int)*(short *)&pcVar13->__vtable[1].CanContributeLight;
LAB_0022b7ac:
      pcVar12 = (cXObject__21_1030 *)(*pcVar14)(iVar18,uVar9);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        pcVar12 = this->_vb966;
        uVar9 = elem->fObjectID;
        pcVar14 = (code *)pcVar12->__vtable[1].GetLightingContribution;
        iVar18 = (int)&pcVar12->_vb899 + (int)*(short *)&pcVar12->__vtable[1].CanContributeLight;
LAB_0022b82c:
        pcVar13 = (cXObject__21_1030 *)(*pcVar14)(iVar18,uVar9);
      }
    }
    else {
      if (bVar1 == 2) {
        uVar9 = 0x33;
        if (elem->fNumLocalVars <= (_param->field0_0x0).distanceTo.fromOwner) {
          pTVar19 = this->_vb1168;
          uVar20 = 0x33;
          goto LAB_0022bad0;
        }
        pcVar12 = this->_vb966;
        pcVar6 = pcVar12->__vtable;
        sVar2 = *(short *)&pcVar6[1].CanContributeLight;
        puVar11 = GetLocals__9StackElem(elem);
        pcVar13 = (cXObject__21_1030 *)
                  (*(code *)pcVar6[1].GetLightingContribution)
                            ((int)&pcVar12->_vb899 + (int)sVar2,
                             puVar11[(_param->field0_0x0).distanceTo.fromOwner]);
        uVar9 = elem->fObjectID;
        pcVar6 = this->_vb966->__vtable;
        pcVar14 = (code *)pcVar6[1].GetLightingContribution;
        iVar18 = (int)&this->_vb966->_vb899 + (int)*(short *)&pcVar6[1].CanContributeLight;
        goto LAB_0022b7ac;
      }
      if (bVar1 == 3) {
        uVar9 = 0x33;
        if (elem->fNumLocalVars <= (_param->field0_0x0).distanceTo.fromOwner) {
          pTVar19 = this->_vb1168;
          uVar20 = 0x33;
          goto LAB_0022bad0;
        }
        pcVar12 = this->_vb966;
        pcVar6 = pcVar12->__vtable;
        sVar2 = *(short *)&pcVar6[1].CanContributeLight;
        puVar11 = GetLocals__9StackElem(elem);
        pcVar12 = (cXObject__21_1030 *)
                  (*(code *)pcVar6[1].GetLightingContribution)
                            ((int)&pcVar12->_vb899 + (int)sVar2,
                             puVar11[(_param->field0_0x0).distanceTo.fromOwner]);
        uVar9 = elem->fObjectID;
        pcVar6 = this->_vb966->__vtable;
        pcVar14 = (code *)pcVar6[1].GetLightingContribution;
        iVar18 = (int)&this->_vb966->_vb899 + (int)*(short *)&pcVar6[1].CanContributeLight;
        goto LAB_0022b82c;
      }
    }
    if (pcVar12 == (cXObject__21_1030 *)0x0) {
      pTVar19 = this->_vb1168;
    }
    else {
      if (pcVar13 != (cXObject__21_1030 *)0x0) {
        piVar15 = (int *)(*(code *)(&pcVar12->__vtable[1].GetIdleStatus)[1])
                                   ((int)&pcVar12->_vb899 +
                                    (int)*(short *)&pcVar12->__vtable[1].GetIdleStatus);
        uVar8 = (*(code *)(&pcVar13->__vtable[1].Error)[7])
                          ((int)&pcVar13->_vb899 + (int)*(short *)(&pcVar13->__vtable[1].Error + 6))
        ;
        lVar22 = (*(code *)(&pcVar12->__vtable[1].Error)[3])
                           ((int)&pcVar12->_vb899 + (int)*(short *)(&pcVar12->__vtable[1].Error + 2)
                           );
        if (lVar22 == 2) {
          lVar22 = (*(code *)(&pcVar13->__vtable[1].Error)[3])
                             ((int)&pcVar13->_vb899 +
                              (int)*(short *)(&pcVar13->__vtable[1].Error + 2));
          if (lVar22 == 2) {
                    /* inlined from SCID.h */
            if (pcVar12 == (cXObject__21_1030 *)0x0) {
              pvVar10 = (void *)0x0;
            }
            else {
              pvVar10 = _dyncastimpl__7TreeSim4SCID(pcVar12->_vb899,cXPersonID);
            }
                    /* end of inlined section */
            pNVar3 = pNVar7->__vtable;
            sVar2 = *(short *)&pNVar3->GetShowTutorialArrow;
            uVar20 = (**(code **)(*(int *)((int)pvVar10 + 4) + 0x144))
                               ((int)pvVar10 + (int)*(short *)(*(int *)((int)pvVar10 + 4) + 0x140));
            uVar20 = (*(code *)pNVar3->SetShowTutorialArrow)
                               ((int)&pNVar7->__vtable + (int)sVar2,uVar20);
                    /* inlined from SCID.h */
            piVar15 = *(int **)((int)uVar20 + 0xc);
            if (pcVar13 == (cXObject__21_1030 *)0x0) {
              pvVar10 = (void *)0x0;
            }
            else {
              pvVar10 = _dyncastimpl__7TreeSim4SCID(pcVar13->_vb899,cXPersonID);
            }
                    /* end of inlined section */
            uVar8 = (**(code **)(*(int *)((int)pvVar10 + 4) + 0x144))
                              ((int)pvVar10 + (int)*(short *)(*(int *)((int)pvVar10 + 4) + 0x140));
            pOVar5 = this->fModule;
            pOVar4 = pOVar5->__vtable;
            sVar2 = *(short *)&pOVar4[1].GetPortal;
            uVar17 = (*(code *)pNVar7->__vtable->SetShowTutorialArrow)
                               ((int)&pNVar7->__vtable +
                                (int)*(short *)&pNVar7->__vtable->GetShowTutorialArrow,uVar8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
            (*(code *)pOVar4[1].GetNumPortals)
                      ((int)&pOVar5->__vtable + (int)sVar2,uVar20,uVar17,
                       (_param->field0_0x0).pushAction.interactionIndex,
                       (_param->field0_0x0).distanceTo.flags >> 2 & 1);
            iVar18 = *piVar15;
            goto LAB_0022b9d8;
          }
          pOVar5 = this->fModule;
        }
        else {
          pOVar5 = this->fModule;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        (*(code *)pOVar5->__vtable[1].GetNumPeople)
                  ((int)&pOVar5->__vtable + (int)*(short *)&pOVar5->__vtable[1].GetPeople,pcVar12,
                   pcVar13,(_param->field0_0x0).pushAction.interactionIndex,
                   (_param->field0_0x0).distanceTo.flags >> 2 & 1);
        iVar18 = *piVar15;
        goto LAB_0022b9d8;
      }
      pTVar19 = this->_vb1168;
    }
    uVar9 = 0x15;
    uVar20 = 0x15;
  }
  else {
    bVar1 = (_param->field0_0x0).pushAction.dataForInteractingObject;
    lVar22 = 0;
    lVar21 = 0;
    if (bVar1 == 1) {
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
      }
                    /* end of inlined section */
      uVar9 = 0x1c;
      if (pvVar10 == (void *)0x0) {
        pTVar19 = this->_vb1168;
        uVar20 = 0x1c;
        goto LAB_0022bad0;
      }
      lVar22 = (*(code *)pNVar7->__vtable->SetShowTutorialArrow)
                         ((int)&pNVar7->__vtable +
                          (int)*(short *)&pNVar7->__vtable->GetShowTutorialArrow,elem->fObjectID);
      pNVar3 = pNVar7->__vtable;
      sVar2 = *(short *)&pNVar3->GetShowTutorialArrow;
      uVar20 = (**(code **)(*(int *)((int)pvVar10 + 4) + 0x144))
                         ((int)pvVar10 + (int)*(short *)(*(int *)((int)pvVar10 + 4) + 0x140));
      lVar21 = (*(code *)pNVar3->SetShowTutorialArrow)((int)&pNVar7->__vtable + (int)sVar2,uVar20);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
                    /* inlined from SCID.h */
        if (this == (cXObjectImpl__127_901 *)0x0) {
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
        }
                    /* end of inlined section */
        uVar9 = 0x1c;
        if (pvVar10 == (void *)0x0) {
          pTVar19 = this->_vb1168;
          uVar20 = 0x1c;
          goto LAB_0022bad0;
        }
        pNVar3 = pNVar7->__vtable;
        sVar2 = *(short *)&pNVar3->GetShowTutorialArrow;
        uVar9 = (**(code **)(*(int *)((int)pvVar10 + 4) + 0x144))
                          ((int)pvVar10 + (int)*(short *)(*(int *)((int)pvVar10 + 4) + 0x140));
        pcVar14 = (code *)pNVar3->SetShowTutorialArrow;
LAB_0022b630:
        lVar22 = (*pcVar14)((int)&pNVar7->__vtable + (int)sVar2,uVar9);
        lVar21 = (*(code *)pNVar7->__vtable->SetShowTutorialArrow)
                           ((int)&pNVar7->__vtable +
                            (int)*(short *)&pNVar7->__vtable->GetShowTutorialArrow,elem->fObjectID);
      }
    }
    else if (bVar1 == 2) {
      uVar9 = 0x33;
      if (elem->fNumLocalVars <= (_param->field0_0x0).distanceTo.fromOwner) {
        pTVar19 = this->_vb1168;
        uVar20 = 0x33;
        goto LAB_0022bad0;
      }
      lVar22 = (*(code *)_5Globs_pNeighborhood->__vtable->SetShowTutorialArrow)
                         ((int)&_5Globs_pNeighborhood->__vtable +
                          (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetShowTutorialArrow,
                          elem->fObjectID);
      pNVar3 = pNVar7->__vtable;
      sVar2 = *(short *)&pNVar3->GetShowTutorialArrow;
      puVar11 = GetLocals__9StackElem(elem);
      lVar21 = (*(code *)pNVar3->SetShowTutorialArrow)
                         ((int)&pNVar7->__vtable + (int)sVar2,
                          puVar11[(_param->field0_0x0).distanceTo.fromOwner]);
    }
    else if (bVar1 == 3) {
      uVar9 = 0x33;
      if (elem->fNumLocalVars <= (_param->field0_0x0).distanceTo.fromOwner) {
        pTVar19 = this->_vb1168;
        uVar20 = 0x33;
        goto LAB_0022bad0;
      }
      pNVar3 = _5Globs_pNeighborhood->__vtable;
      sVar2 = *(short *)&pNVar3->GetShowTutorialArrow;
      puVar11 = GetLocals__9StackElem(elem);
      pcVar14 = (code *)pNVar3->SetShowTutorialArrow;
      uVar9 = puVar11[(_param->field0_0x0).distanceTo.fromOwner];
      goto LAB_0022b630;
    }
    if (lVar22 == 0) {
      pTVar19 = this->_vb1168;
    }
    else {
      if (lVar21 != 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        pOVar4 = this->fModule->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
        piVar15 = *(int **)((int)lVar22 + 0xc);
                    /* end of inlined section */
        uVar8 = *(undefined2 *)lVar21;
        (*(code *)pOVar4[1].GetNumPortals)
                  ((int)&this->fModule->__vtable + (int)*(short *)&pOVar4[1].GetPortal,lVar22,lVar21
                   ,(_param->field0_0x0).pushAction.interactionIndex,
                   (_param->field0_0x0).distanceTo.flags >> 2 & 1);
        iVar18 = *piVar15;
LAB_0022b9d8:
        lVar22 = (**(code **)(iVar18 + 0x14))((int)piVar15 + (int)*(short *)(iVar18 + 0x10),uVar8);
        bVar1 = (_param->field0_0x0).pushAction.interactionIndex;
        if ((long)(ulong)bVar1 < lVar22) {
          bVar1 = (_param->field0_0x0).directionTo.flags;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
          if ((((_param->field0_0x0).distanceTo.flags ^ 1) & 1) == 0) {
            return kFalseComplete;
          }
          (**(code **)(*piVar15 + 0x1c))
                    ((int)piVar15 + (int)*(short *)(*piVar15 + 0x18),uVar8,bVar1 + 1);
          lVar22 = (**(code **)(*piVar15 + 0x14))
                             ((int)piVar15 + (int)*(short *)(*piVar15 + 0x10),uVar8);
          if (lVar22 <= (long)(ulong)(_param->field0_0x0).pushAction.interactionIndex) {
            return kTrueComplete;
          }
          bVar1 = (_param->field0_0x0).directionTo.flags;
        }
        TVar16 = InterpValue__12cXObjectImplssPPsPPfPs
                           (this,(ushort)bVar1,(_param->field0_0x0).bparam[3],
                            (ushort **)((uint)&val | 4),(float **)0x0,&val);
        if (TVar16 == kError) {
          return kError;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        if (((_param->field0_0x0).distanceTo.flags >> 2 & 1) != 0) {
          (**(code **)(*piVar15 + 0x34))
                    ((int)piVar15 + (int)*(short *)(*piVar15 + 0x30),uVar8,
                     (_param->field0_0x0).pushAction.interactionIndex,val);
          return kTrueComplete;
        }
        uVar9 = 0x13;
        if (stackVar != (ushort *)0x0) {
          uVar9 = (**(code **)(*piVar15 + 0x2c))
                            ((int)piVar15 + (int)*(short *)(*piVar15 + 0x28),uVar8,
                             (_param->field0_0x0).pushAction.interactionIndex);
          *stackVar = uVar9;
          return kTrueComplete;
        }
        pTVar19 = this->_vb1168;
        uVar20 = 0x13;
        goto LAB_0022bad0;
      }
      pTVar19 = this->_vb1168;
    }
    uVar9 = 0x15;
    uVar20 = 0x15;
  }
LAB_0022bad0:
  pTVar19->fError = uVar9;
  pcVar6 = this->_vb966->__vtable;
  (*(code *)pcVar6->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar6->SimIndependent,uVar20);
  return kError;
}

TreeReturnCode cXObjectImpl::TryRelationship(StackElem *elem, XPrimParam *param) {
	RelKeyType key;
	RelMatrix *matrix;
	Int index;
	Neighborhood *ngh;
	bool setting;
	Int stackParam;
	StdPrm *stackVar;
	RelationshipParam *this;
	cXPerson *aPerson;
	Neighbor *neighbor;
	Neighbor *relNeighbor;
	cXObjectImpl *ptr;
	cXObjectImpl *ptr;
	Neighbor *this;
	Neighbor *this;
	cXObject *person;
	cXObject *relObj;
	cXPerson *aPerson;
	Neighbor *aNeighbor;
	cXObject *ptr;
	Neighbor *this;
	cXObject *ptr;
	RelationshipParam *this;
	
  char cVar1;
  short sVar2;
  ObjectModule__vtable *pOVar3;
  ObjectModule *pOVar4;
  cXObject__21_1030__vtable *pcVar5;
  bool bVar6;
  Neighborhood__vtable **ppNVar7;
  Neighborhood *pNVar8;
  undefined2 uVar9;
  ushort uVar10;
  int iVar11;
  void *pvVar12;
  ushort *puVar13;
  cXObject__21_1030 *pcVar14;
  cXObject__21_1030 *pcVar15;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  Neighborhood__vtable *pNVar20;
  TreeSimImpl__21_3338 *pTVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  int index;
  bool setting;
  code *pcVar16;
  
  pNVar8 = _5Globs_pNeighborhood;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar11 = (int)(param->field0_0x0).relationship.index;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  bVar6 = (param->field0_0x0).pushAction.interactionIndex != '\0';
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if (((param->field0_0x0).directionTo.flags >> 1 & 1) == 0) {
    pcVar14 = (cXObject__21_1030 *)0x0;
    cVar1 = (param->field0_0x0).gotoRelative.relDirection;
    pcVar15 = (cXObject__21_1030 *)0x0;
    if (cVar1 == '\x01') {
      pcVar15 = this->_vb966;
      uVar10 = elem->fObjectID;
      pcVar16 = (code *)pcVar15->__vtable[1].GetLightingContribution;
      iVar18 = (int)&pcVar15->_vb899 + (int)*(short *)&pcVar15->__vtable[1].CanContributeLight;
LAB_0022bea8:
      pcVar14 = (cXObject__21_1030 *)(*pcVar16)(iVar18,uVar10);
    }
    else if (cVar1 < '\x02') {
      if (cVar1 == '\0') {
        pcVar14 = this->_vb966;
        uVar10 = elem->fObjectID;
        pcVar16 = (code *)pcVar14->__vtable[1].GetLightingContribution;
        iVar18 = (int)&pcVar14->_vb899 + (int)*(short *)&pcVar14->__vtable[1].CanContributeLight;
LAB_0022befc:
        pcVar15 = (cXObject__21_1030 *)(*pcVar16)(iVar18,uVar10);
      }
    }
    else {
      if (cVar1 == '\x02') {
        pcVar14 = this->_vb966;
        pcVar5 = pcVar14->__vtable;
        sVar2 = *(short *)&pcVar5[1].CanContributeLight;
        puVar13 = GetParams__9StackElem(elem);
        pcVar15 = (cXObject__21_1030 *)
                  (*(code *)pcVar5[1].GetLightingContribution)
                            ((int)&pcVar14->_vb899 + (int)sVar2,*puVar13);
        uVar10 = elem->fObjectID;
        pcVar5 = this->_vb966->__vtable;
        pcVar16 = (code *)pcVar5[1].GetLightingContribution;
        iVar18 = (int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].CanContributeLight;
        goto LAB_0022bea8;
      }
      if (cVar1 == '\x03') {
        pcVar14 = this->_vb966;
        pcVar5 = pcVar14->__vtable;
        sVar2 = *(short *)&pcVar5[1].CanContributeLight;
        puVar13 = GetParams__9StackElem(elem);
        pcVar14 = (cXObject__21_1030 *)
                  (*(code *)pcVar5[1].GetLightingContribution)
                            ((int)&pcVar14->_vb899 + (int)sVar2,*puVar13);
        uVar10 = elem->fObjectID;
        pcVar5 = this->_vb966->__vtable;
        pcVar16 = (code *)pcVar5[1].GetLightingContribution;
        iVar18 = (int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].CanContributeLight;
        goto LAB_0022befc;
      }
    }
    if (pcVar14 == (cXObject__21_1030 *)0x0) {
      pTVar21 = this->_vb1168;
    }
    else {
      if (pcVar15 != (cXObject__21_1030 *)0x0) {
        piVar17 = (int *)(*(code *)(&pcVar14->__vtable[1].GetIdleStatus)[1])
                                   ((int)&pcVar14->_vb899 +
                                    (int)*(short *)&pcVar14->__vtable[1].GetIdleStatus);
        uVar9 = (*(code *)(&pcVar15->__vtable[1].Error)[7])
                          ((int)&pcVar15->_vb899 + (int)*(short *)(&pcVar15->__vtable[1].Error + 6))
        ;
        lVar24 = (*(code *)(&pcVar14->__vtable[1].Error)[3])
                           ((int)&pcVar14->_vb899 + (int)*(short *)(&pcVar14->__vtable[1].Error + 2)
                           );
        if (lVar24 == 2) {
          lVar24 = (*(code *)(&pcVar15->__vtable[1].Error)[3])
                             ((int)&pcVar15->_vb899 +
                              (int)*(short *)(&pcVar15->__vtable[1].Error + 2));
          if (lVar24 == 2) {
                    /* inlined from SCID.h */
            if (pcVar14 == (cXObject__21_1030 *)0x0) {
              pvVar12 = (void *)0x0;
            }
            else {
              pvVar12 = _dyncastimpl__7TreeSim4SCID(pcVar14->_vb899,cXPersonID);
            }
                    /* end of inlined section */
            pNVar20 = pNVar8->__vtable;
            sVar2 = *(short *)&pNVar20->GetShowTutorialArrow;
            uVar22 = (**(code **)(*(int *)((int)pvVar12 + 4) + 0x144))
                               ((int)pvVar12 + (int)*(short *)(*(int *)((int)pvVar12 + 4) + 0x140));
            uVar22 = (*(code *)pNVar20->SetShowTutorialArrow)
                               ((int)&pNVar8->__vtable + (int)sVar2,uVar22);
                    /* inlined from SCID.h */
            piVar17 = *(int **)((int)uVar22 + 0xc);
            if (pcVar15 == (cXObject__21_1030 *)0x0) {
              pvVar12 = (void *)0x0;
            }
            else {
              pvVar12 = _dyncastimpl__7TreeSim4SCID(pcVar15->_vb899,cXPersonID);
            }
                    /* end of inlined section */
            uVar9 = (**(code **)(*(int *)((int)pvVar12 + 4) + 0x144))
                              ((int)pvVar12 + (int)*(short *)(*(int *)((int)pvVar12 + 4) + 0x140));
            pOVar4 = this->fModule;
            pOVar3 = pOVar4->__vtable;
            sVar2 = *(short *)&pOVar3[1].GetPortal;
            uVar19 = (*(code *)pNVar8->__vtable->SetShowTutorialArrow)
                               ((int)&pNVar8->__vtable +
                                (int)*(short *)&pNVar8->__vtable->GetShowTutorialArrow,uVar9);
            (*(code *)pOVar3[1].GetNumPortals)
                      ((int)&pOVar4->__vtable + (int)sVar2,uVar22,uVar19,iVar11,bVar6);
            iVar18 = *piVar17;
            goto LAB_0022c098;
          }
          pOVar4 = this->fModule;
        }
        else {
          pOVar4 = this->fModule;
        }
        (*(code *)pOVar4->__vtable[1].GetNumPeople)
                  ((int)&pOVar4->__vtable + (int)*(short *)&pOVar4->__vtable[1].GetPeople,pcVar14,
                   pcVar15,iVar11,bVar6);
        iVar18 = *piVar17;
        goto LAB_0022c098;
      }
      pTVar21 = this->_vb1168;
    }
    uVar10 = 0x15;
    uVar22 = 0x15;
  }
  else {
    cVar1 = (param->field0_0x0).gotoRelative.relDirection;
    lVar24 = 0;
    lVar23 = 0;
    if (cVar1 == '\x01') {
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar12 = (void *)0x0;
      }
      else {
        pvVar12 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
      }
                    /* end of inlined section */
      uVar10 = 0x1c;
      if (pvVar12 == (void *)0x0) {
        pTVar21 = this->_vb1168;
        uVar22 = 0x1c;
        goto LAB_0022c148;
      }
      lVar24 = (*(code *)pNVar8->__vtable->SetShowTutorialArrow)
                         ((int)&pNVar8->__vtable +
                          (int)*(short *)&pNVar8->__vtable->GetShowTutorialArrow,elem->fObjectID);
      pNVar20 = pNVar8->__vtable;
      sVar2 = *(short *)&pNVar20->GetShowTutorialArrow;
      uVar22 = (**(code **)(*(int *)((int)pvVar12 + 4) + 0x144))
                         ((int)pvVar12 + (int)*(short *)(*(int *)((int)pvVar12 + 4) + 0x140));
      lVar23 = (*(code *)pNVar20->SetShowTutorialArrow)((int)&pNVar8->__vtable + (int)sVar2,uVar22);
    }
    else if (cVar1 < '\x02') {
      if (cVar1 == '\0') {
                    /* inlined from SCID.h */
        if (this == (cXObjectImpl__127_901 *)0x0) {
          pvVar12 = (void *)0x0;
        }
        else {
          pvVar12 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
        }
                    /* end of inlined section */
        uVar10 = 0x1c;
        if (pvVar12 == (void *)0x0) {
          pTVar21 = this->_vb1168;
          uVar22 = 0x1c;
          goto LAB_0022c148;
        }
        pNVar20 = pNVar8->__vtable;
        sVar2 = *(short *)&pNVar20->GetShowTutorialArrow;
        uVar22 = (**(code **)(*(int *)((int)pvVar12 + 4) + 0x144))
                           ((int)pvVar12 + (int)*(short *)(*(int *)((int)pvVar12 + 4) + 0x140));
        lVar24 = (*(code *)pNVar20->SetShowTutorialArrow)
                           ((int)&pNVar8->__vtable + (int)sVar2,uVar22);
        pNVar20 = pNVar8->__vtable;
LAB_0022bd6c:
        lVar23 = (*(code *)pNVar20->SetShowTutorialArrow)
                           ((int)&pNVar8->__vtable + (int)*(short *)&pNVar20->GetShowTutorialArrow,
                            elem->fObjectID);
      }
    }
    else if (cVar1 == '\x02') {
      lVar24 = (*(code *)_5Globs_pNeighborhood->__vtable->SetShowTutorialArrow)
                         ((int)&_5Globs_pNeighborhood->__vtable +
                          (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetShowTutorialArrow,
                          elem->fObjectID);
      pNVar20 = pNVar8->__vtable;
      sVar2 = *(short *)&pNVar20->GetShowTutorialArrow;
      puVar13 = GetParams__9StackElem(elem);
      lVar23 = (*(code *)pNVar20->SetShowTutorialArrow)
                         ((int)&pNVar8->__vtable + (int)sVar2,*puVar13);
    }
    else if (cVar1 == '\x03') {
      pNVar20 = _5Globs_pNeighborhood->__vtable;
      sVar2 = *(short *)&pNVar20->GetShowTutorialArrow;
      ppNVar7 = &_5Globs_pNeighborhood->__vtable;
      puVar13 = GetParams__9StackElem(elem);
      lVar24 = (*(code *)pNVar20->SetShowTutorialArrow)((int)ppNVar7 + (int)sVar2,*puVar13);
      pNVar20 = pNVar8->__vtable;
      goto LAB_0022bd6c;
    }
    if (lVar24 == 0) {
      pTVar21 = this->_vb1168;
    }
    else {
      if (lVar23 != 0) {
                    /* end of inlined section */
        pOVar3 = this->fModule->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
        piVar17 = *(int **)((int)lVar24 + 0xc);
                    /* end of inlined section */
        uVar9 = *(undefined2 *)lVar23;
        (*(code *)pOVar3[1].GetNumPortals)
                  ((int)&this->fModule->__vtable + (int)*(short *)&pOVar3[1].GetPortal,lVar24,lVar23
                   ,iVar11,bVar6);
        iVar18 = *piVar17;
LAB_0022c098:
        iVar18 = (**(code **)(iVar18 + 0x14))((int)piVar17 + (int)*(short *)(iVar18 + 0x10),uVar9);
        if (iVar18 <= iVar11) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
          if ((((param->field0_0x0).directionTo.flags ^ 1) & 1) == 0) {
            return kFalseComplete;
          }
          (**(code **)(*piVar17 + 0x1c))
                    ((int)piVar17 + (int)*(short *)(*piVar17 + 0x18),uVar9,iVar11 + 1);
          iVar18 = (**(code **)(*piVar17 + 0x14))
                             ((int)piVar17 + (int)*(short *)(*piVar17 + 0x10),uVar9);
          if (iVar18 <= iVar11) {
            return kTrueComplete;
          }
        }
        cVar1 = (param->field0_0x0).gotoRelative.relLocation;
        if (cVar1 < '\0') {
          pTVar21 = this->_vb1168;
        }
        else {
          if (elem->fNumParams != '\0') {
            puVar13 = GetParams__9StackElem(elem);
            if ((param->field0_0x0).pushAction.interactionIndex == '\0') {
              uVar10 = (**(code **)(*piVar17 + 0x2c))
                                 ((int)piVar17 + (int)*(short *)(*piVar17 + 0x28),uVar9,iVar11);
              puVar13[cVar1] = uVar10;
              return kTrueComplete;
            }
            (**(code **)(*piVar17 + 0x34))
                      ((int)piVar17 + (int)*(short *)(*piVar17 + 0x30),uVar9,iVar11,puVar13[cVar1]);
            return kTrueComplete;
          }
          pTVar21 = this->_vb1168;
        }
        uVar10 = 8;
        uVar22 = 8;
        goto LAB_0022c148;
      }
      pTVar21 = this->_vb1168;
    }
    uVar10 = 0x15;
    uVar22 = 0x15;
  }
LAB_0022c148:
  pTVar21->fError = uVar10;
  pcVar5 = this->_vb966->__vtable;
  (*(code *)pcVar5->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->SimIndependent,uVar22);
  return kError;
}

TreeReturnCode cXObjectImpl::TryTutorial(StackElem *elem, XPrimParam *param) {
	TreeReturnCode result;
	
  uchar uVar1;
  ObjectModule__vtable *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  cXObject__21_1030 *pcVar4;
  long lVar5;
  TreeReturnCode TVar6;
  
  uVar1 = (param->field0_0x0).pushAction.interactionIndex;
  if (uVar1 == '\0') {
    pOVar2 = this->fModule->__vtable;
    lVar5 = (*(code *)pOVar2[1].BroadcastMessage)
                      ((int)&this->fModule->__vtable + (int)*(short *)&pOVar2[1].SendMessage,
                       this->_vb966);
    TVar6 = (TreeReturnCode)(lVar5 != 0);
  }
  else if (uVar1 == '\x01') {
    pOVar2 = this->fModule->__vtable;
    pcVar4 = (cXObject__21_1030 *)
             (*(code *)pOVar2[1].GetNumGlobalRoutineSlots)
                       ((int)&this->fModule->__vtable +
                        (int)*(short *)&pOVar2[1].GetGlobalRoutingSlot);
    if (this->_vb966 == pcVar4) {
      pOVar2 = this->fModule->__vtable;
      lVar5 = (*(code *)pOVar2[1].BroadcastMessage)
                        ((int)&this->fModule->__vtable + (int)*(short *)&pOVar2[1].SendMessage,0);
      TVar6 = kTrueComplete;
      if (lVar5 == 0) {
        TVar6 = kFalseComplete;
      }
    }
    else {
      TVar6 = kFalseComplete;
    }
  }
  else {
    this->_vb1168->fError = 0x35;
    pcVar3 = this->_vb966->__vtable;
    (*(code *)pcVar3->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->SimIndependent,0x35);
    TVar6 = kError;
  }
  return TVar6;
}

TreeReturnCode StartFireAtObjectLoc(cXObject *obj, ObjSelector *fireSel) {
	ObjectIterator oi;
	SInt16 newFireID;
	cXObject *fireObj;
	FTilePt loc;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  cXObject__21_1030__vtable *pcVar5;
  int iVar6;
  ulong *puVar7;
  ObjSelector *pOVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ObjectIterator oi;
  CTilePt aCStack_90 [5];
  FTilePt loc;
  
  if ((obj != (cXObject__21_1030 *)0x0) && (fireSel != (ObjSelector *)0x0)) {
    (*(code *)obj->__vtable[1].TestIntersection)
              (aCStack_90,(int)&obj->_vb899 + (int)*(short *)&obj->__vtable[1].IsInWorld);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&oi,aCStack_90,kAll);
                    /* end of inlined section */
    ___7CTilePt(aCStack_90,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    while (oi.fCurrent != (cXObject__15_2008 *)0x0) {
      pOVar8 = (ObjSelector *)
               (*(code *)(oi.fCurrent)->__vtable[1].SetLevel)
                         ((int)&(oi.fCurrent)->_vb3534 +
                          (int)*(short *)&(oi.fCurrent)->__vtable[1].GetTreeID);
      if (pOVar8 == fireSel) {
        return kFalseComplete;
      }
      __pp__14ObjectIterator(&oi);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar11 = (*(code *)_5Globs_pObjectModule->__vtable->GetObject)
                       ((int)&_5Globs_pObjectModule->__vtable +
                        (int)*(short *)&_5Globs_pObjectModule->__vtable->GetFirst,fireSel);
    if (lVar11 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      iVar9 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                        ((int)&_5Globs_pObjectModule->__vtable +
                         (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,lVar11);
      pcVar5 = obj->__vtable;
      uVar14 = (ulong)(int)pcVar5;
      uVar10 = (*(code *)pcVar5[1].UserCanDelete)
                         ((int)&obj->_vb899 + (int)*(short *)&pcVar5[1].UserPickup);
      uVar2 = uVar10 + 7 & 7;
      uVar3 = uVar10 & 7;
      uVar14 = (*(long *)((uVar10 + 7) - uVar2) << (7 - uVar2) * 8 |
               uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)(uVar10 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&loc.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar2);
      *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar14 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      loc.x.whole = (int)(uVar14 >> 0x20);
      loc = (FTilePt)(uVar14 & 0xfffffff0 | (ulong)(loc.x.whole & 0xfffffff0U | 8) << 0x20 | 8);
                    /* end of inlined section */
      iVar6 = *(int *)(iVar9 + 4);
      sVar4 = *(short *)(iVar6 + 0x108);
      uVar12 = (*(code *)obj->__vtable[1].GetPlacementInfo)
                         ((int)&obj->_vb899 + (int)*(short *)&obj->__vtable[1].FindGoodLocation);
      lVar13 = (**(code **)(iVar6 + 0x10c))(iVar9 + sVar4,&loc,uVar12,0,0);
      if (lVar13 != 0) {
        iVar6 = *(int *)(iVar9 + 4);
        sVar4 = *(short *)(iVar6 + 0x110);
        uVar12 = (*(code *)obj->__vtable[1].GetPlacementInfo)
                           ((int)&obj->_vb899 + (int)*(short *)&obj->__vtable[1].FindGoodLocation);
        (**(code **)(iVar6 + 0x114))(iVar9 + sVar4,&loc,uVar12,0,0);
        return kTrueComplete;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pObjectModule->__vtable->CheckIntegrity)
                ((int)&_5Globs_pObjectModule->__vtable +
                 (int)*(short *)&_5Globs_pObjectModule->__vtable->GetNumObjects,lVar11);
      return kFalseComplete;
    }
  }
  return kFalseComplete;
}

TreeReturnCode cXObjectImpl::TryBurn(StackElem *elem, XPrimParam *param) {
	cXObjectImpl *obj;
	ObjSelector *fireSel;
	FTilePt location;
	Int level;
	CTilePt cloc;
	ObjectIterator oi;
	int nFires;
	cXObject *srch;
	FTilePt loc;
	Int &x;
	TileWalls tw;
	TileWallsSegment seg;
	WallStyle style;
	WallStyle in;
	SInt16 newFireID;
	cXObject *fireObj;
	BurnParam *this;
	cXMTObject *mt;
	int nFiresNeeded;
	cXObjectImpl *ptr;
	cXMTObject *mt;
	cXObjectImpl *ptr;
	bool madeAFire;
	FTilePt location;
	int level;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  cXObject__21_1030__vtable *pcVar5;
  ObjectModule__vtable *pOVar6;
  ulong *puVar7;
  bool bVar8;
  bool bVar9;
  int *piVar10;
  TileWallsSegment inSeg;
  WallStyle WVar11;
  int iVar12;
  void *pvVar13;
  code *pcVar14;
  uint uVar15;
  TreeReturnCode TVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  ObjSelector *this_00;
  cXObject__21_1030 *pcVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  cXObject__21_1030 **ppcVar24;
  int iVar25;
  long lVar26;
  undefined auStack_110 [16];
  CTilePt cloc;
  undefined local_fc [12];
  int local_f0;
  int local_ec;
  ObjectIterator oi;
  FTilePt location;
  
  pcVar5 = this->_vb966->__vtable;
  lVar17 = (*(code *)pcVar5[1].GetLightingContribution)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].CanContributeLight,
                      elem->fObjectID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar26 = 0;
  if (lVar17 != 0) {
    iVar25 = *(int *)((int)lVar17 + 4);
    lVar26 = (**(code **)(iVar25 + 0x454))((int)lVar17 + (int)*(short *)(iVar25 + 0x450));
  }
                    /* end of inlined section */
  if (lVar26 == 0) {
    this->_vb1168->fError = 0x15;
    pcVar5 = this->_vb966->__vtable;
    (*(code *)pcVar5->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->SimIndependent,0x15);
    return kError;
  }
  iVar21 = (int)lVar26;
  iVar25 = *(int *)(*(int *)(iVar21 + 4) + 4);
  lVar17 = (**(code **)(iVar25 + 0x15c))(*(int *)(iVar21 + 4) + (int)*(short *)(iVar25 + 0x158));
  if (lVar17 == 0) {
    return kFalseComplete;
  }
  pcVar5 = this->_vb966->__vtable;
  piVar10 = (int *)(*(code *)pcVar5->GetObjectLightSource)
                             ((int)&this->_vb966->_vb899 +
                              (int)*(short *)&pcVar5->GetLightingContribution);
  pcVar14 = *(code **)(*piVar10 + 0x74);
  uVar22 = (ulong)(int)pcVar14;
  uVar18 = (*pcVar14)((int)piVar10 + (int)*(short *)(*piVar10 + 0x70),0x24c95f99);
  uVar2 = iVar21 + 0xcfU & 7;
  uVar3 = iVar21 + 200U & 7;
  auStack_110._0_8_ =
       (FTilePt)((*(long *)((iVar21 + 0xcfU) - uVar2) << (7 - uVar2) * 8 |
                 uVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((iVar21 + 200U) - uVar3) >> uVar3 * 8);
  puVar1 = auStack_110 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       (ulong)auStack_110._0_8_ >> (7 - uVar2) * 8;
  iVar25 = *(int *)(iVar21 + 0xe0);
  if ((param->field0_0x0).pushAction.interactionIndex == '\x01') {
    uVar2 = iVar21 + 0xcfU & 7;
    uVar3 = iVar21 + 200U & 7;
    uVar22 = (*(long *)((iVar21 + 0xcfU) - uVar2) << (7 - uVar2) * 8 |
             uVar22 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((iVar21 + 200U) - uVar3) >> uVar3 * 8;
    puVar1 = local_fc + 3;
    uVar2 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar2) =
         *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar22 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    local_ec = 0;
    local_f0 = 0;
    switch(*(ushort *)(iVar21 + 0x28) & 7) {
    case 1:
      local_ec = 1;
    case 0:
      local_f0 = -1;
      break;
    case 3:
      local_f0 = 1;
    case 2:
      local_ec = 1;
      break;
    case 5:
      local_ec = -1;
    case 4:
      local_f0 = 1;
      break;
    case 7:
      local_f0 = -1;
    case 6:
      local_ec = -1;
    }
    local_fc._0_4_ = (int)(uVar22 >> 0x20);
    local_ec = local_ec * 0x10;
    _cloc = (int)uVar22;
    _cloc = (FTilePt)CONCAT44(local_fc._0_4_ + local_ec,_cloc + local_f0 * 0x10);
    auStack_110._0_8_ = _cloc;
    local_f0 = local_f0 * 0x10;
    puVar1 = auStack_110 + 7;
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar2) =
         *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)_cloc >> (7 - uVar2) * 8;
    iVar25 = *(int *)(iVar21 + 0xe0);
  }
  __7CTilePtRC7FTilePti(&cloc,(FTilePt *)auStack_110,iVar25);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar17 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&cloc);
  if (lVar17 != 0) goto LAB_0022cd60;
  if ((param->field0_0x0).pushAction.interactionIndex == '\x01') {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
              ((TileWalls *)&oi,
               (int)&_5Globs_pFixedWorld->__vtable +
               (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&cloc);
    iVar21 = (uint)*(ushort *)(iVar21 + 0x28) << 0x10;
    inSeg = RotateSegment__9TileWalls16TileWallsSegmenti
                      (kBottomLeft,(iVar21 >> 0x10) - (iVar21 >> 0x1f) >> 1);
    bVar9 = HasWall__C9TileWalls16TileWallsSegment((TileWalls *)&oi,inSeg);
    if (bVar9) {
      WVar11 = GetStyle__C9TileWalls16TileWallsSegment((TileWalls *)&oi,inSeg);
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
      if ((((WVar11 == kDoorStyle) || (WVar11 == kDoorLeftStyle)) || (WVar11 == kDoorRightStyle)) ||
         ((WVar11 == kFrenchDoorStyle || (bVar9 = false, WVar11 == kCustomDoorStyle)))) {
        bVar9 = true;
      }
                    /* end of inlined section */
      if (bVar9) goto LAB_0022c82c;
    }
    else {
LAB_0022c82c:
      bVar9 = HasDiagonal__C9TileWalls((TileWalls *)&oi);
      if (!bVar9) {
        ___9TileWalls((TileWalls *)&oi,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
        goto LAB_0022c848;
      }
    }
    ___9TileWalls((TileWalls *)&oi,2);
  }
  else {
LAB_0022c848:
    lVar17 = 0;
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&oi,&cloc,kAll);
                    /* end of inlined section */
    while (oi.fCurrent != (cXObject__15_2008 *)0x0) {
      lVar26 = (*(code *)(oi.fCurrent)->__vtable[1].GetCurrentValue)
                         ((int)&(oi.fCurrent)->_vb3534 +
                          (int)*(short *)&(oi.fCurrent)->__vtable[1].GetRoutingSlot);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
      if ((lVar26 != 0) && (lVar17 = 0, oi.fCurrent != (cXObject__15_2008 *)0x0)) {
        lVar17 = (*(code *)(oi.fCurrent)->__vtable[1].GetObjectImplementation)
                           ((int)&(oi.fCurrent)->_vb3534 +
                            (int)*(short *)&(oi.fCurrent)->__vtable[1].AdvanceGraphic);
      }
                    /* end of inlined section */
      lVar26 = (*(code *)(oi.fCurrent)->__vtable[1].GetSim)
                         ((int)&(oi.fCurrent)->_vb3534 +
                          (int)*(short *)&(oi.fCurrent)->__vtable[1].GetSize);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
      if ((lVar26 != 0) ||
         (uVar22 = (*(code *)(oi.fCurrent)->__vtable[1].SetLevel)
                             ((int)&(oi.fCurrent)->_vb3534 +
                              (int)*(short *)&(oi.fCurrent)->__vtable[1].GetTreeID),
         uVar22 == uVar18)) goto LAB_0022cd60;
      __pp__14ObjectIterator(&oi);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar21 = 0;
    lVar26 = (*(code *)_5Globs_pObjectModule->__vtable->LevelInfoRequested)
                       ((int)&_5Globs_pObjectModule->__vtable +
                        (int)*(short *)&_5Globs_pObjectModule->__vtable->CleanupPeople);
    iVar12 = 1;
    if (lVar26 != 0) {
      iVar12 = *(int *)((int)lVar26 + 4);
      iVar21 = 0;
      while( true ) {
        iVar23 = (int)lVar26;
        iVar12 = (**(code **)(iVar12 + 0x2a4))(iVar23 + *(short *)(iVar12 + 0x2a0));
        if (*(int *)(iVar12 + 0x1c) == 0x24c95f99) {
          iVar21 = iVar21 + 1;
        }
        lVar26 = (**(code **)(*(int *)(iVar23 + 4) + 0x3fc))
                           (iVar23 + *(short *)(*(int *)(iVar23 + 4) + 0x3f8));
        if (lVar26 == 0) break;
        iVar12 = *(int *)((int)lVar26 + 4);
      }
      iVar12 = iVar21 + 1;
    }
    if (iVar12 < 0x1f) {
      this_00 = (ObjSelector *)uVar18;
      if (lVar17 == 0) {
        bVar9 = IsPreloaded__C11ObjSelector(this_00);
        if (!bVar9) {
          this->_vb1168->fError = 0x43;
          pcVar5 = this->_vb966->__vtable;
          (*(code *)pcVar5->SimEnabled)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->SimIndependent,0x43);
          ___7CTilePt(&cloc,2);
          return kError;
        }
        pOVar6 = this->fModule->__vtable;
        lVar17 = (*(code *)pOVar6->GetObject)
                           ((int)&this->fModule->__vtable + (int)*(short *)&pOVar6->GetFirst,uVar18)
        ;
        if (lVar17 != 0) {
          pcVar5 = this->_vb966->__vtable;
          iVar21 = (*(code *)pcVar5[1].GetLightingContribution)
                             ((int)&this->_vb966->_vb899 +
                              (int)*(short *)&pcVar5[1].CanContributeLight,lVar17);
          lVar26 = (**(code **)(*(int *)(iVar21 + 4) + 0x10c))
                             (iVar21 + *(short *)(*(int *)(iVar21 + 4) + 0x108),auStack_110,iVar25,0
                              ,0);
          if (lVar26 != 0) {
            (**(code **)(*(int *)(iVar21 + 4) + 0x114))
                      (iVar21 + *(short *)(*(int *)(iVar21 + 4) + 0x110),auStack_110,iVar25,0,0);
            ___7CTilePt(&cloc,2);
            return kTrueComplete;
          }
          pOVar6 = this->fModule->__vtable;
          (*(code *)pOVar6->CheckIntegrity)
                    ((int)&this->fModule->__vtable + (int)*(short *)&pOVar6->GetNumObjects,lVar17);
        }
      }
      else {
        iVar12 = (int)lVar17;
        iVar25 = *(int *)(*(int *)(iVar12 + 4) + 4);
        lVar26 = (**(code **)(iVar25 + 0x3cc))
                           (*(int *)(iVar12 + 4) + (int)*(short *)(iVar25 + 0x3c8));
        if (lVar26 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
          iVar25 = *(int *)(iVar12 + 4);
          if (((param->field0_0x0).pushAction.dataForInteractingObject & 1) == 0) {
            lVar26 = (**(code **)(*(int *)(iVar25 + 4) + 0x18c))
                               (iVar25 + *(short *)(*(int *)(iVar25 + 4) + 0x188));
            if ((lVar26 != 0) || (0 < *(short *)(iVar12 + 0xa2))) goto LAB_0022cd60;
            iVar25 = *(int *)(iVar12 + 4);
          }
          lVar26 = (**(code **)(*(int *)(iVar25 + 4) + 0x30c))
                             (iVar25 + *(short *)(*(int *)(iVar25 + 4) + 0x308));
          if (lVar26 == 0) {
            iVar25 = *(int *)(*(int *)(iVar12 + 4) + 4);
            lVar26 = (**(code **)(iVar25 + 0x2ac))
                               (*(int *)(iVar12 + 4) + (int)*(short *)(iVar25 + 0x2a8));
            if (lVar26 == 2) {
              iVar25 = *(int *)(*(int *)(iVar12 + 4) + 4);
              uVar18 = (ulong)(*(int *)(iVar12 + 4) + (int)*(short *)(iVar25 + 0x2c8));
              uVar15 = (**(code **)(iVar25 + 0x2cc))();
              uVar2 = uVar15 + 7 & 7;
              uVar3 = uVar15 & 7;
              location = (FTilePt)((*(long *)((uVar15 + 7) - uVar2) << (7 - uVar2) * 8 |
                                   uVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                                   -1L << (8 - uVar3) * 8 | *(ulong *)(uVar15 - uVar3) >> uVar3 * 8)
              ;
              puVar1 = (undefined *)((int)&location.x.whole + 3);
              uVar2 = (uint)puVar1 & 7;
              puVar7 = (ulong *)(puVar1 + -uVar2);
              *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | (ulong)location >> (7 - uVar2) * 8;
              iVar25 = *(int *)(*(int *)(iVar12 + 4) + 4);
              uVar19 = (**(code **)(iVar25 + 0x2d4))
                                 (*(int *)(iVar12 + 4) + (int)*(short *)(iVar25 + 0x2d0));
              (**(code **)(*(int *)(iVar12 + 0x130) + 0x14))
                        (iVar12 + *(short *)(*(int *)(iVar12 + 0x130) + 0x10),0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
              location = (FTilePt)((ulong)location & 0xfffffff0 |
                                   (ulong)(location.x.whole & 0xfffffff0U | 8) << 0x20 | 8);
                    /* end of inlined section */
              iVar25 = *(int *)(*(int *)(iVar12 + 4) + 4);
              (**(code **)(iVar25 + 0x114))
                        (*(int *)(iVar12 + 4) + (int)*(short *)(iVar25 + 0x110),&location,uVar19,0,0
                        );
              iVar25 = *(int *)(*(int *)(iVar12 + 4) + 4);
              (**(code **)(iVar25 + 0x16c))(*(int *)(iVar12 + 4) + (int)*(short *)(iVar25 + 0x168));
            }
            pcVar20 = (cXObject__21_1030 *)0x0;
            if (lVar17 != 0) {
              pcVar20 = *(cXObject__21_1030 **)(iVar12 + 4);
            }
            TVar16 = StartFireAtObjectLoc__FP8cXObjectP11ObjSelector(pcVar20,this_00);
LAB_0022cd4c:
            ___7CTilePt(&cloc,2);
            return TVar16;
          }
                    /* inlined from SCID.h */
          if (lVar17 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = _dyncastimpl__7TreeSim4SCID(**(TreeSim ***)(iVar12 + 4),cXMTObjectID);
          }
                    /* end of inlined section */
          iVar25 = 0;
          lVar26 = (**(code **)(*(int *)((int)pvVar13 + 4) + 0x4c))
                             ((int)pvVar13 + (int)*(short *)(*(int *)((int)pvVar13 + 4) + 0x48));
          if (lVar26 == 0) {
            sVar4 = *(short *)(*(int *)((int)pvVar13 + 4) + 0x10);
            pcVar14 = *(code **)(*(int *)((int)pvVar13 + 4) + 0x14);
            while (pvVar13 = (void *)(*pcVar14)((int)pvVar13 + (int)sVar4), pvVar13 != (void *)0x0)
            {
              iVar25 = iVar25 + 1;
              sVar4 = *(short *)(*(int *)((int)pvVar13 + 4) + 0x18);
              pcVar14 = *(code **)(*(int *)((int)pvVar13 + 4) + 0x1c);
            }
            if (iVar25 + iVar21 < 0x1f) {
                    /* inlined from SCID.h */
              if (lVar17 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                pvVar13 = _dyncastimpl__7TreeSim4SCID(**(TreeSim ***)(iVar12 + 4),cXMTObjectID);
              }
                    /* end of inlined section */
              lVar17 = (**(code **)(*(int *)((int)pvVar13 + 4) + 0x4c))
                                 ((int)pvVar13 + (int)*(short *)(*(int *)((int)pvVar13 + 4) + 0x48))
              ;
              if (lVar17 == 0) {
                bVar9 = false;
                lVar17 = (**(code **)(*(int *)((int)pvVar13 + 4) + 0x14))
                                   ((int)pvVar13 +
                                    (int)*(short *)(*(int *)((int)pvVar13 + 4) + 0x10));
                while (lVar17 != 0) {
                  pcVar20 = (cXObject__21_1030 *)0x0;
                  ppcVar24 = (cXObject__21_1030 **)lVar17;
                  if (lVar17 != 0) {
                    pcVar20 = *ppcVar24;
                  }
                  TVar16 = StartFireAtObjectLoc__FP8cXObjectP11ObjSelector(pcVar20,this_00);
                  bVar8 = true;
                  if (bVar9) {
                    bVar8 = bVar9;
                  }
                  if (TVar16 == kTrueComplete) {
                    bVar9 = bVar8;
                  }
                  lVar17 = (**(code **)&ppcVar24[1]->field_0x1c)
                                     ((int)ppcVar24 + (int)*(short *)&ppcVar24[1]->field_0x18);
                }
                TVar16 = (TreeReturnCode)bVar9;
                goto LAB_0022cd4c;
              }
            }
          }
        }
      }
    }
  }
LAB_0022cd60:
  ___7CTilePt(&cloc,2);
  return kFalseComplete;
}

TreeReturnCode cXObjectImpl::TryCreateObject(StackElem *elem, XPrimParam *param) {
	ObjSelector *selector;
	int level;
	FTilePt loc;
	cXObject *top;
	bool place;
	short unsigned int requiredRoom;
	int wallCheck;
	CTilePt cloc;
	SInt16 newObjectID;
	cXObject *newObj;
	StdPrm dir;
	int xoff;
	int yoff;
	Int &x;
	cXObjectImpl *stackObj;
	Int &x;
	cXObject *stackObj;
	cXObject *obj;
	cXObject *obj;
	ObjectIterator oi;
	ObjectIterator oi;
	cXObject *stackObj;
	Int dir;
	int cnt;
	cXMTObject *mtObj;
	cXObject *ptr;
	bool bCanPlace;
	cXPersonImpl *person;
	cXObject *ptr;
	Behavior *b;
	StackElem *newElem;
	StackElem *newElem;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  Neighborhood *pNVar5;
  ObjectModule__vtable *pOVar6;
  TreeSimImpl__21_3338 **ppTVar7;
  TreeSim__vtable *pTVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  ushort uVar12;
  ushort uVar13;
  code *pcVar14;
  TreeReturnCode TVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  void *pvVar19;
  ObjSelector *this_00;
  int *piVar20;
  Behavior *this_01;
  ushort *puVar21;
  long lVar23;
  long lVar24;
  int iVar25;
  TreeSimImpl__21_3338 *pTVar26;
  cXObject__21_1030__vtable *pcVar27;
  int iVar28;
  undefined4 uVar29;
  ulong uVar30;
  int iVar31;
  cXObject__21_1030 *pcVar32;
  long lVar33;
  FTilePt loc;
  ushort dir;
  CTilePt cloc;
  int local_cc;
  ObjectIterator oi;
  cXObject__21_1030 *top;
  bool place;
  int wallCheck;
  long lVar22;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if (((param->field0_0x0).directionTo.fromOwner >> 2 & 1) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar30 = (ulong)(param->field0_0x0).createObject.guid;
    sVar4 = *(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance;
    pcVar14 = (code *)_5Globs_pObjectFolder->__vtable->DeletingInstance;
    pNVar5 = (Neighborhood *)_5Globs_pObjectFolder;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar30 = (ulong)(short)elem->fObjectID;
    sVar4 = *(short *)(_5Globs_pNeighborhood->__vtable + 1);
    pcVar14 = (code *)_5Globs_pNeighborhood->__vtable[1].Neighborhood;
    pNVar5 = _5Globs_pNeighborhood;
  }
  lVar22 = (*pcVar14)((int)&pNVar5->__vtable + (int)sVar4);
  if (lVar22 == 0) {
    return 0;
  }
  bVar2 = (param->field0_0x0).directionTo.flags;
  top = (cXObject__21_1030 *)0x0;
  lVar33 = 0xfffb;
  iVar17 = this->fLevel;
  _place = 1;
  wallCheck = -1;
  if (9 < bVar2) goto LAB_0022d3cc;
  switch(bVar2) {
  case 0:
    uVar13 = this->fData[1];
    puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    uVar18 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLocation & 7;
    uVar30 = (*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
             (long)(int)(&switchD_0022ce68::switchdataD_003ba010)[(char)bVar2] &
             0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&loc.x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar18);
    *puVar9 = *puVar9 & -1L << (uVar18 + 1) * 8 | uVar30 >> (7 - uVar18) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    local_cc = 0;
    _cloc = 0;
    switch(uVar13 & 7) {
    case 1:
      local_cc = 1;
    case 0:
      _cloc = -1;
      break;
    case 3:
      _cloc = 1;
    case 2:
      local_cc = 1;
      break;
    case 5:
      local_cc = -1;
    case 4:
      _cloc = 1;
      break;
    case 7:
      _cloc = -1;
    case 6:
      local_cc = -1;
    }
    loc.x.whole = (int)(uVar30 >> 0x20);
    loc.y.whole = (int)uVar30;
    _cloc = _cloc * 0x10;
    loc = (FTilePt)CONCAT44(loc.x.whole + local_cc * 0x10,loc.y.whole + _cloc);
                    /* end of inlined section */
    break;
  case 1:
    top = this->_vb966;
    puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLocation & 7;
    loc = (FTilePt)((*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
                    uVar30 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&loc.x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar18);
    *puVar9 = *puVar9 & -1L << (uVar18 + 1) * 8 | (ulong)loc >> (7 - uVar18) * 8;
    break;
  case 2:
    top = this->_vb966;
    puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLocation & 7;
    loc = (FTilePt)((*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
                    (long)(int)(&switchD_0022ce68::switchdataD_003ba010)[(char)bVar2] &
                    0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&loc.x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar18);
    *puVar9 = *puVar9 & -1L << (uVar18 + 1) * 8 | (ulong)loc >> (7 - uVar18) * 8;
    break;
  case 3:
    pcVar27 = this->_vb966->__vtable;
    lVar33 = (*(code *)pcVar27[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar27[1].CanContributeLight,
                        elem->fObjectID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar23 = 0;
    if (lVar33 != 0) {
      iVar17 = *(int *)((int)lVar33 + 4);
      lVar23 = (**(code **)(iVar17 + 0x454))((int)lVar33 + (int)*(short *)(iVar17 + 0x450));
    }
                    /* end of inlined section */
    if (lVar23 == 0) {
      return kFalseComplete;
    }
    iVar31 = (int)lVar23;
    iVar17 = *(int *)(*(int *)(iVar31 + 4) + 4);
    iVar17 = (**(code **)(iVar17 + 0x2d4))(*(int *)(iVar31 + 4) + (int)*(short *)(iVar17 + 0x2d0));
    iVar28 = *(int *)(*(int *)(iVar31 + 4) + 4);
    uVar30 = (ulong)iVar28;
    uVar16 = (**(code **)(iVar28 + 0x2cc))(*(int *)(iVar31 + 4) + (int)*(short *)(iVar28 + 0x2c8));
    uVar18 = uVar16 + 7 & 7;
    uVar3 = uVar16 & 7;
    uVar30 = (*(long *)((uVar16 + 7) - uVar18) << (7 - uVar18) * 8 |
             uVar30 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)(uVar16 - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&loc.x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar18);
    *puVar9 = *puVar9 & -1L << (uVar18 + 1) * 8 | uVar30 >> (7 - uVar18) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    local_cc = 0;
    _cloc = 0;
    switch(*(ushort *)(iVar31 + 0x28) & 7) {
    case 1:
      local_cc = 1;
    case 0:
      _cloc = -1;
      break;
    case 3:
      _cloc = 1;
    case 2:
      local_cc = 1;
      break;
    case 5:
      local_cc = -1;
    case 4:
      _cloc = 1;
      break;
    case 7:
      _cloc = -1;
    case 6:
      local_cc = -1;
    }
    loc.x.whole = (int)(uVar30 >> 0x20);
    loc.y.whole = (int)uVar30;
    _cloc = _cloc * 0x10;
    loc = (FTilePt)CONCAT44(loc.x.whole + local_cc * 0x10,loc.y.whole + _cloc);
                    /* end of inlined section */
    iVar28 = *(int *)(*(int *)(iVar31 + 4) + 4);
    pcVar14 = *(code **)(iVar28 + 0x29c);
    iVar28 = *(int *)(iVar31 + 4) + (int)*(short *)(iVar28 + 0x298);
    goto LAB_0022d280;
  case 4:
    pcVar27 = this->_vb966->__vtable;
    lVar33 = (*(code *)pcVar27[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar27[1].CanContributeLight,
                        elem->fObjectID);
    if (lVar33 == 0) {
      return kFalseComplete;
    }
    top = (cXObject__21_1030 *)lVar33;
    iVar17 = (*(code *)top->__vtable[1].GetPlacementInfo)
                       ((int)&top->_vb899 + (int)*(short *)&top->__vtable[1].FindGoodLocation);
    (*(code *)top->__vtable[1].UserCanPickup)
              ((int)&top->_vb899 + (int)*(short *)&top->__vtable[1].UserPlace,&loc);
    pcVar14 = (code *)top->__vtable[1].ParseUIString;
    iVar28 = (int)&top->_vb899 + (int)*(short *)&top->__vtable[1].RunTree;
LAB_0022d280:
    lVar33 = (*pcVar14)(iVar28);
    break;
  case 5:
    puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLocation & 7;
    loc = (FTilePt)((*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
                    0xffffffffffffffffU >> (uVar18 + 1) * 8 & 0x3ba010) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&loc.x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar18);
    *puVar9 = *puVar9 & -1L << (uVar18 + 1) * 8 | (ulong)loc >> (7 - uVar18) * 8;
    break;
  case 6:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    _place = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    iVar17 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    loc = (FTilePt)0xfffffff0fffffff0;
    break;
  case 7:
    if (elem->fNumParams == '\0') {
LAB_0022d308:
      pTVar26 = this->_vb1168;
LAB_0022d30c:
      pTVar26->fError = 8;
      pcVar27 = this->_vb966->__vtable;
      (*(code *)pcVar27->SimEnabled)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar27->SimIndependent,8);
      return kError;
    }
    pcVar32 = this->_vb966;
    pcVar27 = pcVar32->__vtable;
    sVar4 = *(short *)&pcVar27[1].CanContributeLight;
    puVar21 = GetParams__9StackElem(elem);
    lVar23 = (*(code *)pcVar27[1].GetLightingContribution)
                       ((int)&pcVar32->_vb899 + (int)sVar4,*puVar21);
    goto LAB_0022d370;
  case 8:
    lVar23 = (long)(param->field0_0x0).expression.lhsOwner;
    if (lVar23 < 0) {
      pTVar26 = this->_vb1168;
      goto LAB_0022d30c;
    }
    if ((long)(ulong)elem->fNumLocalVars <= lVar23) goto LAB_0022d308;
    pcVar32 = this->_vb966;
    pcVar27 = pcVar32->__vtable;
    sVar4 = *(short *)&pcVar27[1].CanContributeLight;
    puVar21 = GetLocals__9StackElem(elem);
    lVar23 = (*(code *)pcVar27[1].GetLightingContribution)
                       ((int)&pcVar32->_vb899 + (int)sVar4,
                        puVar21[(param->field0_0x0).expression.lhsOwner]);
LAB_0022d370:
    if (lVar23 == 0) {
      return kFalseComplete;
    }
    iVar28 = (int)lVar23;
    iVar17 = (**(code **)(*(int *)(iVar28 + 4) + 0x2d4))
                       (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x2d0));
    (**(code **)(*(int *)(iVar28 + 4) + 0x2c4))
              (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x2c0),&loc);
    break;
  case 9:
    uVar30 = 0x19;
    TVar15 = InterpValue__12cXObjectImplssPPsPPfPs
                       (this,0x19,(short)(param->field0_0x0).expression.lhsOwner,(ushort **)0x0,
                        (float **)0x0,&dir);
    if (TVar15 == kError) {
      return kError;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    _cloc = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    uVar18 = (int)(short)dir + (int)(short)this->fData[1] & 7;
    iVar28 = 0;
    if (uVar18 == 2) {
      iVar28 = 1;
    }
    else if (uVar18 < 3) {
      if (uVar18 == 0) {
        iVar28 = 0;
        _cloc = -1;
      }
    }
    else if (uVar18 == 4) {
      iVar28 = 0;
      _cloc = 1;
    }
    else if (uVar18 == 6) {
      iVar28 = -1;
    }
    puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
                    /* end of inlined section */
    uVar18 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLocation & 7;
    uVar30 = (*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
             uVar30 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&loc.x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar18);
    *puVar9 = *puVar9 & -1L << (uVar18 + 1) * 8 | uVar30 >> (7 - uVar18) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    _cloc = _cloc * 0x10;
    loc.x.whole = (int)(uVar30 >> 0x20);
                    /* end of inlined section */
    iVar31 = (int)(short)dir + (int)(short)this->fData[1];
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    loc.y.whole = (int)uVar30;
                    /* end of inlined section */
    iVar25 = iVar31 + 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    iVar31 = iVar31 + 0xb;
    if (-1 < iVar25) {
      iVar31 = iVar25;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    loc = (FTilePt)CONCAT44(loc.x.whole + iVar28 * 0x10,loc.y.whole + _cloc);
                    /* end of inlined section */
    wallCheck = iVar25 + (iVar31 >> 3) * -8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  }
LAB_0022d3cc:
  __7CTilePtRC7FTilePti(&cloc,&loc,iVar17);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if (((param->field0_0x0).directionTo.fromOwner & 1) == 0) {
LAB_0022d438:
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
    bVar2 = (param->field0_0x0).directionTo.fromOwner;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&oi,&cloc,kAll);
                    /* end of inlined section */
    if (oi.fCurrent != (cXObject__15_2008 *)0x0) {
      do {
                    /* end of inlined section */
        lVar23 = (*(code *)(oi.fCurrent)->__vtable[1].SetLevel)
                           ((int)&(oi.fCurrent)->_vb3534 +
                            (int)*(short *)&(oi.fCurrent)->__vtable[1].GetTreeID);
        if (lVar23 == lVar22) goto LAB_0022d8f4;
        __pp__14ObjectIterator(&oi);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
      } while (oi.fCurrent != (cXObject__15_2008 *)0x0);
      goto LAB_0022d438;
    }
    bVar2 = (param->field0_0x0).directionTo.fromOwner;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if (((((bVar2 >> 3 & 1) != 0) &&
       (init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&oi,&cloc,kAll),
       oi.fCurrent != (cXObject__15_2008 *)0x0)) ||
      ((_place != 0 &&
       ((lVar23 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&loc),
        lVar23 != 0 ||
        ((lVar33 != 0xfffb &&
         (lVar23 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                             ((int)&_5Globs_pFixedWorld->__vtable +
                              (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&cloc),
         lVar23 != lVar33)))))))) ||
     ((wallCheck != -1 &&
      (uVar18 = GetWallBlockFlagsAtTile__8cXObjectRC7CTilePti(&cloc,wallCheck), (uVar18 & 1) != 0)))
     ) {
LAB_0022d8f4:
    ___7CTilePt(&cloc,2);
    return kFalseComplete;
  }
  bVar10 = IsPreloaded__C11ObjSelector((ObjSelector *)lVar22);
  uVar13 = 0x43;
  if (!bVar10) {
    pTVar26 = this->_vb1168;
    uVar29 = 0x43;
LAB_0022d848:
    pTVar26->fError = uVar13;
    pcVar27 = this->_vb966->__vtable;
    (*(code *)pcVar27->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar27->SimIndependent,uVar29);
    ___7CTilePt(&cloc,2);
    return kError;
  }
  pOVar6 = this->fModule->__vtable;
  lVar22 = (*(code *)pOVar6->GetObject)
                     ((int)&this->fModule->__vtable + (int)*(short *)&pOVar6->GetFirst,lVar22);
  if (lVar22 == 0) goto LAB_0022d8f4;
  pcVar27 = this->_vb966->__vtable;
  lVar33 = (*(code *)pcVar27[1].GetLightingContribution)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar27[1].CanContributeLight,
                      lVar22);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  pcVar32 = (cXObject__21_1030 *)lVar33;
  if ((((param->field0_0x0).directionTo.fromOwner >> 5 & 1) != 0) &&
     (pcVar27 = this->_vb966->__vtable,
     lVar23 = (*(code *)pcVar27[1].GetLightingContribution)
                        ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar27[1].CanContributeLight,
                         elem->fObjectID), lVar23 != 0)) {
    iVar28 = *(int *)((int)lVar23 + 4);
    iVar31 = 0;
    lVar23 = (**(code **)(iVar28 + 0x20c))((int)lVar23 + (int)*(short *)(iVar28 + 0x208),1);
    while ((iVar31 < 4 &&
           (lVar24 = (*(code *)pcVar32->__vtable->ReconType)
                               ((int)&pcVar32->_vb899 +
                                (int)*(short *)&pcVar32->__vtable->ReconStream,1), lVar24 != lVar23)
           )) {
      iVar31 = iVar31 + 1;
      (*(code *)pcVar32->__vtable->ClearIdleStatus)
                ((int)&pcVar32->_vb899 + (int)*(short *)&pcVar32->__vtable->SetIdleStatus,1);
    }
  }
  if (_place == 0) {
    uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
  }
  else {
    pvVar19 = (void *)0x0;
    lVar23 = (*(code *)pcVar32->__vtable[1].GetFrontFaceDirection)
                       ((int)&pcVar32->_vb899 +
                        (int)*(short *)&pcVar32->__vtable[1].GetInteractionLeader);
                    /* inlined from SCID.h */
    if ((lVar23 != 0) && (pvVar19 = (void *)0x0, lVar33 != 0)) {
      pvVar19 = _dyncastimpl__7TreeSim4SCID(pcVar32->_vb899,cXMTObjectID);
    }
                    /* end of inlined section */
    if (pvVar19 == (void *)0x0) {
      pcVar27 = pcVar32->__vtable;
    }
    else {
      lVar23 = (**(code **)(*(int *)((int)pvVar19 + 4) + 0x4c))
                         ((int)pvVar19 + (int)*(short *)(*(int *)((int)pvVar19 + 4) + 0x48));
      if (lVar23 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        loc = (FTilePt)((ulong)loc & 0xfffffff0 | (ulong)(loc.x.whole & 0xfffffff0U | 8) << 0x20 | 8
                       );
      }
                    /* end of inlined section */
      pcVar27 = pcVar32->__vtable;
    }
    lVar23 = (*(code *)pcVar27->GetAttr)
                       ((int)&pcVar32->_vb899 + (int)*(short *)&pcVar27->GetTemp,&loc,iVar17,top,0);
    pcVar27 = pcVar32->__vtable;
    if (lVar23 == 0) {
      bVar11 = false;
      this_00 = (ObjSelector *)
                (*(code *)pcVar27[1].SetLevel)
                          ((int)&pcVar32->_vb899 + (int)*(short *)&pcVar27[1].GetTreeID);
      bVar10 = GetIsPerson__11ObjSelector(this_00);
      if (bVar10) {
        bVar11 = TryFindSafeLocForSim__FP8cXObjectR7FTilePtiT0i(pcVar32,&loc,iVar17,top,0);
      }
      if (bVar11 == false) {
        pOVar6 = this->fModule->__vtable;
        (*(code *)pOVar6->CheckIntegrity)
                  ((int)&this->fModule->__vtable + (int)*(short *)&pOVar6->GetNumObjects,lVar22);
        goto LAB_0022d8f4;
      }
      pcVar27 = pcVar32->__vtable;
    }
    (*(code *)pcVar27->GetAdultAnimTable)
              ((int)&pcVar32->_vb899 + (int)*(short *)&pcVar27->GetModule,&loc,iVar17,top,0);
    if (pvVar19 == (void *)0x0) {
      uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
    }
    else {
      lVar23 = (**(code **)(*(int *)((int)pvVar19 + 4) + 0x4c))
                         ((int)pvVar19 + (int)*(short *)(*(int *)((int)pvVar19 + 4) + 0x48));
      if (lVar23 == 0) {
        uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
      }
      else {
        (**(code **)(*(int *)((int)pvVar19 + 4) + 0x54))
                  ((int)pvVar19 + (int)*(short *)(*(int *)((int)pvVar19 + 4) + 0x50));
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
        uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
      }
    }
  }
                    /* end of inlined section */
  if ((uVar18 >> 2 & 1) == 0) {
    uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
  }
  else {
                    /* inlined from SCID.h */
    piVar20 = (int *)0x0;
    if (lVar33 != 0) {
      piVar20 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar32->_vb899,cXPersonImplID);
    }
                    /* end of inlined section */
    if (piVar20 == (int *)0x0) {
      uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
    }
    else {
      iVar17 = *(int *)(piVar20[1] + 4);
      lVar33 = (**(code **)(iVar17 + 0x164))(piVar20[1] + (int)*(short *)(iVar17 + 0x160));
      if (lVar33 == 0) {
        uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
      }
      else {
        iVar17 = *(int *)(*(int *)(*piVar20 + 4) + 4);
        this_01 = (Behavior *)
                  (**(code **)(iVar17 + 0x2f4))
                            (*(int *)(*piVar20 + 4) + (int)*(short *)(iVar17 + 0x2f0));
        uVar13 = GetTreeIDByName__8BehaviorPCc(this_01,"init visitor");
        if (uVar13 == 0) {
          uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
        }
        else {
          ppTVar7 = (TreeSimImpl__21_3338 **)*piVar20;
          pTVar26 = ppTVar7[1];
          iVar17 = pTVar26->fIterations;
          uVar12 = (**(code **)(iVar17 + 700))
                             ((int)&pTVar26->_vb899 + (int)*(short *)(iVar17 + 0x2b8));
          RunOneTickTree__11TreeSimImplP8BehaviorssPs(*ppTVar7,this_01,uVar12,uVar13,(ushort *)0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
          uVar18 = (uint)(param->field0_0x0).directionTo.fromOwner;
        }
      }
    }
  }
                    /* end of inlined section */
  uVar12 = (ushort)lVar22;
  if ((uVar18 >> 1 & 1) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    if ((uVar18 >> 4 & 1) == 0) {
      elem->fObjectID = uVar12;
      goto LAB_0022d964;
    }
    pTVar8 = pcVar32->_vb899->__vtable;
    lVar22 = (*(code *)pTVar8[1].ClearError)
                       ((int)&pcVar32->_vb899->m_pObject + (int)*(short *)&pTVar8[1].GetError);
    if (0 < lVar22) {
      pTVar8 = pcVar32->_vb899->__vtable;
      lVar22 = (*(code *)pTVar8[1].SetError)
                         ((int)&pcVar32->_vb899->m_pObject + (int)*(short *)&pTVar8[1].Simulate,0);
      if (lVar22 == 0) {
        elem->fObjectID = uVar12;
        goto LAB_0022d964;
      }
      puVar21 = GetParams__9StackElem((StackElem *)lVar22);
      *puVar21 = this->fTemp[0];
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    uVar13 = 0x36;
    if ((uVar18 >> 4 & 1) != 0) {
      pTVar26 = this->_vb1168;
      uVar29 = 0x36;
      goto LAB_0022d848;
    }
    pTVar8 = pcVar32->_vb899->__vtable;
    lVar22 = (*(code *)pTVar8[1].ClearError)
                       ((int)&pcVar32->_vb899->m_pObject + (int)*(short *)&pTVar8[1].GetError);
    if (0 < lVar22) {
      pTVar8 = pcVar32->_vb899->__vtable;
      lVar22 = (*(code *)pTVar8[1].SetError)
                         ((int)&pcVar32->_vb899->m_pObject + (int)*(short *)&pTVar8[1].Simulate,0);
      if (lVar22 == 0) {
        elem->fObjectID = uVar12;
        goto LAB_0022d964;
      }
      puVar21 = GetParams__9StackElem((StackElem *)lVar22);
      pcVar27 = this->_vb966->__vtable;
      uVar13 = (*(code *)pcVar27[1].UserCanPlace)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar27[1].IsPartOfMe);
      *puVar21 = uVar13;
      ((StackElem *)lVar22)->fObjectID = elem->fObjectID;
    }
  }
  elem->fObjectID = uVar12;
LAB_0022d964:
  ___7CTilePt(&cloc,2);
  return kTrueComplete;
}

TreeReturnCode cXObjectImpl::TryPreloadObject(StackElem *elem, XPrimParam *param) {
	ObjSelector *selector;
	
  cXObject__21_1030__vtable *pcVar1;
  ObjectFolder *pOVar2;
  TreeReturnCode TVar3;
  long lVar4;
  
  pOVar2 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar4 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
  if (lVar4 == 0) {
    this->_vb1168->fError = 0x44;
    pcVar1 = this->_vb966->__vtable;
    (*(code *)pcVar1->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->SimIndependent,0x44);
    TVar3 = kError;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    if (((param->field0_0x0).bparam[2] & 1) == 0) {
      TVar3 = kFalseComplete;
      if ((param->field0_0x0).createObject.guid != 0) {
        lVar4 = (*(code *)pOVar2->__vtable->DeletingInstance)
                          ((int)&pOVar2->__vtable +
                           (int)*(short *)&pOVar2->__vtable->CreatingInstance);
        if (lVar4 == 0) {
          TVar3 = kFalseComplete;
        }
        else {
          lVar4 = (*(code *)pOVar2->__vtable[1].ResumeObjectFiles)
                            ((int)&pOVar2->__vtable +
                             (int)*(short *)&pOVar2->__vtable[1].SuspendObjectFiles,lVar4,0);
          TVar3 = kEngaged;
          if (lVar4 != 0) {
            TVar3 = kTrueComplete;
          }
        }
      }
    }
    else {
      (*(code *)pOVar2->__vtable->GetLeadSelector)
                ((int)&pOVar2->__vtable + (int)*(short *)&pOVar2->__vtable->GetSubTileSelector);
      TVar3 = kTrueComplete;
    }
  }
  return TVar3;
}

TreeReturnCode cXObjectImpl::TryDropOnto(StackElem *elem, XPrimParam *param) {
	Int sourceSlotNum;
	Int destSlotNum;
	ObjectSlot *sourceSlot;
	cXObject *destObj;
	cXObject *moveObj;
	FTilePt bogus;
	
  short sVar1;
  ushort uVar2;
  cXObject__21_1030__vtable *pcVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  TreeSimImpl__21_3338 *pTVar9;
  undefined8 uVar10;
  FTilePt bogus;
  
  if ((param->field0_0x0).bparam[0] != 0) {
    sVar1 = (param->field0_0x0).find5WorstMotives.unused1;
    if (sVar1 < 0) {
      pTVar9 = this->_vb1168;
    }
    else {
      if (sVar1 < (short)(ushort)elem->fNumParams) {
        puVar5 = GetParams__9StackElem(elem);
        uVar4 = puVar5[(param->field0_0x0).find5WorstMotives.unused1];
        goto LAB_0022db34;
      }
      pTVar9 = this->_vb1168;
    }
    uVar4 = 8;
    uVar10 = 8;
    goto LAB_0022dbf0;
  }
  uVar4 = (param->field0_0x0).bparam[1];
LAB_0022db34:
  if ((param->field0_0x0).bparam[2] == 0) {
    uVar2 = (param->field0_0x0).bparam[3];
LAB_0022db8c:
    pcVar3 = this->_vb966->__vtable;
    lVar7 = (*(code *)pcVar3[1].GetMiscFlag)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].SetMiscFlag,uVar4);
    uVar4 = 0x1b;
    if (lVar7 == 0) {
      pTVar9 = this->_vb1168;
      uVar10 = 0x1b;
    }
    else {
      pcVar3 = this->_vb966->__vtable;
      lVar8 = (*(code *)pcVar3[1].GetLightingContribution)
                        ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].CanContributeLight,
                         elem->fObjectID);
      uVar4 = 0x15;
      if (lVar8 != 0) {
        if (*(short *)((int)lVar7 + 0x14) == 0) {
          return kFalseComplete;
        }
        pcVar3 = this->_vb966->__vtable;
        iVar6 = (*(code *)pcVar3[1].GetLightingContribution)
                          ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].CanContributeLight
                          );
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        bogus.y.whole = -0x10;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        bogus.x.whole = -0x10;
                    /* end of inlined section */
        lVar7 = (**(code **)(*(int *)(iVar6 + 4) + 0x10c))
                          (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x108),&bogus,1,lVar8,uVar2);
        if (lVar7 != 0) {
          (**(code **)(*(int *)(iVar6 + 4) + 0x114))
                    (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x110),&bogus,1,lVar8,uVar2);
          return kTrueComplete;
        }
        return kFalseComplete;
      }
      pTVar9 = this->_vb1168;
      uVar10 = 0x15;
    }
  }
  else {
    sVar1 = (param->field0_0x0).find5WorstMotives.typeOfSearch;
    if (sVar1 < 0) {
      pTVar9 = this->_vb1168;
    }
    else {
      if (sVar1 < (short)(ushort)elem->fNumParams) {
        puVar5 = GetParams__9StackElem(elem);
        uVar2 = puVar5[(param->field0_0x0).find5WorstMotives.typeOfSearch];
        goto LAB_0022db8c;
      }
      pTVar9 = this->_vb1168;
    }
    uVar4 = 8;
    uVar10 = 8;
  }
LAB_0022dbf0:
  pTVar9->fError = uVar4;
  pcVar3 = this->_vb966->__vtable;
  (*(code *)pcVar3->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->SimIndependent,uVar10);
  return kError;
}

TreeReturnCode cXObjectImpl::TryBudget(StackElem *elem, XPrimParam *param) {
	SInt16 owner;
	SInt16 data;
	ExpenseType expType;
	StdPrm amount;
	SInt32 curAmount;
	BudgetParam *this;
	BudgetParam *this;
	BudgetParam *this;
	
  byte bVar1;
  cXObject__21_1030__vtable *pcVar2;
  short sVar3;
  TreeReturnCode TVar4;
  TreeReturnCode TVar5;
  ushort ownerField;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ushort amount;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  bVar1 = (param->field0_0x0).pushAction.interactionIndex;
  if (bVar1 == 1) {
    ownerField = 9;
  }
  else if (bVar1 < 2) {
    ownerField = 7;
    if (bVar1 != 0) {
      ownerField = (ushort)(param->field0_0x0).pushAction.dataForInteractingObject;
    }
  }
  else {
    ownerField = 0x19;
    if (bVar1 != 2) {
      ownerField = (ushort)(param->field0_0x0).pushAction.dataForInteractingObject;
    }
  }
                    /* end of inlined section */
  bVar1 = (param->field0_0x0).gotoRelative.flags;
  if (bVar1 < 9) {
    TVar5 = InterpValue__12cXObjectImplssPPsPPfPs
                      (this,ownerField,(param->field0_0x0).bparam[1],(ushort **)0x0,(float **)0x0,
                       &amount);
    TVar4 = kError;
    if (TVar5 != kError) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      sVar3 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                        ((int)&_5Globs_pSimulator->__vtable +
                         (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
      if ((((param->field0_0x0).bparam[2] >> 1 ^ 1) & 1) == 0) {
        amount = -amount;
      }
      if (((short)amount < 0) || (TVar4 = kFalseComplete, (short)amount <= sVar3)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
        if (((param->field0_0x0).bparam[2] & 1) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,bVar1);
          TVar4 = kTrueComplete;
        }
        else {
          TVar4 = kTrueComplete;
        }
      }
    }
  }
  else {
    this->_vb1168->fError = 0x38;
    pcVar2 = this->_vb966->__vtable;
    (*(code *)pcVar2->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,0x38);
    TVar4 = kError;
  }
  return TVar4;
}

TreeReturnCode cXObjectImpl::TrySetToNext(StackElem *elem, XPrimParam *param) {
	StdPrm *dest;
	StdPrm srchType;
	cXObject *obj;
	int iNumCareers;
	Career *career;
	int index;
	cXMTObjectImpl *mtobj;
	cXObject *ptr;
	Neighborhood *n;
	Neighbor *nb;
	Neighbor *this;
	CTilePt pt;
	ObjectIterator begin;
	ObjectIterator i;
	bool found;
	cXObject *this;
	cXObject *this;
	Int local;
	cXObject *center;
	CTilePt centerLoc;
	CTilePt relLoc;
	bool first;
	CTilePt adjLoc;
	int iNumPeople;
	int i;
	ObjSelector *sel;
	int iNumObjects;
	int i;
	cXObject *o;
	int iNumHouses;
	int i;
	int iHouse;
	StdPrm category;
	
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  cXObject__21_1030 *pcVar4;
  ObjectModule *pOVar5;
  int iVar6;
  ObjectModule__vtable *pOVar7;
  cXObject__21_1030__vtable *pcVar8;
  uint uVar9;
  ulong *puVar10;
  bool bVar11;
  Neighborhood *pNVar12;
  Careers *pCVar13;
  ushort uVar14;
  ushort uVar15;
  TreeReturnCode TVar16;
  void *pvVar17;
  int *piVar18;
  ushort *puVar19;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  Careers__vtable *pCVar25;
  Neighborhood__vtable *pNVar26;
  TreeSimImpl__21_3338 *pTVar27;
  CTilePt *in;
  int iVar28;
  undefined8 uVar29;
  byte bVar30;
  FTilePt *in_00;
  int iVar31;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  TreeSim **ppTVar32;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt centerLoc;
  ObjectIterator begin;
  ObjectIterator i;
  CTilePt relLoc;
  CTilePt adjLoc;
  CTilePt aCStack_c0 [5];
  ushort *dest;
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
  code *pcVar20;
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  bVar2 = (param->field0_0x0).directionTo.flags;
  uVar15 = 10;
  if ((bVar2 & 0x80) != 0) {
    uVar15 = (ushort)(param->field0_0x0).directionTo.fromOwner;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  uVar14 = 0;
  if ((bVar2 & 0x80) != 0) {
    uVar14 = (ushort)(param->field0_0x0).dialog.flags;
  }
                    /* end of inlined section */
  TVar16 = InterpValue__12cXObjectImplssPPsPPfPs
                     (this,uVar15,uVar14,&dest,(float **)0x0,(ushort *)0x0);
  pCVar13 = _5Globs_pCareers;
  pNVar12 = _5Globs_pNeighborhood;
  if (TVar16 == kError) {
    return kError;
  }
  uVar15 = 0x13;
  if (dest == (ushort *)0x0) {
    pTVar27 = this->_vb1168;
    uVar29 = 0x13;
    goto LAB_0022e8a0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  bVar2 = (param->field0_0x0).directionTo.flags;
                    /* end of inlined section */
  bVar30 = bVar2 & 0x7f;
  switch(bVar30) {
  case 1:
    iVar31 = 0;
    pOVar7 = this->fModule->__vtable;
    iVar28 = (*(code *)pOVar7->DisableBuyAndBuild)
                       ((int)&this->fModule->__vtable + (int)*(short *)&pOVar7->FillInObjectStats);
    if ((*dest != 0) && (0 < iVar28)) {
      pOVar5 = this->fModule;
      while( true ) {
        piVar18 = (int *)(*(code *)pOVar5->__vtable->ComputeStats)
                                   ((int)&pOVar5->__vtable +
                                    (int)*(short *)&pOVar5->__vtable->ShowTutorialInfo,iVar31);
        iVar6 = *(int *)(*piVar18 + 4);
        uVar15 = (**(code **)(iVar6 + 700))(*piVar18 + (int)*(short *)(iVar6 + 0x2b8));
        iVar31 = iVar31 + 1;
        if ((uVar15 == *dest) || (iVar28 <= iVar31)) break;
        pOVar5 = this->fModule;
      }
    }
    if (iVar31 == iVar28) goto LAB_0022e664;
    pOVar7 = this->fModule->__vtable;
    piVar18 = (int *)(*(code *)pOVar7->ComputeStats)
                               ((int)&this->fModule->__vtable +
                                (int)*(short *)&pOVar7->ShowTutorialInfo,iVar31);
    iVar28 = *(int *)(*piVar18 + 4);
    uVar15 = (**(code **)(iVar28 + 700))(*piVar18 + (int)*(short *)(iVar28 + 0x2b8));
LAB_0022e674:
    *dest = uVar15;
    goto LAB_0022e678;
  default:
    if (*dest == 0) {
      pcVar8 = this->_vb966->__vtable;
      pcVar20 = (code *)pcVar8[1].IsBroken;
      iVar28 = (int)&this->_vb966->_vb899 + (int)*(short *)&pcVar8[1].IsFromCatalog;
    }
    else {
      pcVar8 = this->_vb966->__vtable;
      lVar23 = (*(code *)pcVar8[1].GetLightingContribution)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar8[1].CanContributeLight)
      ;
      if (lVar23 == 0) {
        return kFalseComplete;
      }
      iVar28 = *(int *)((int)lVar23 + 4);
      pcVar20 = *(code **)(iVar28 + 0x3fc);
      iVar28 = (int)lVar23 + (int)*(short *)(iVar28 + 0x3f8);
    }
    lVar23 = (*pcVar20)(iVar28);
    if (lVar23 == 0) goto LAB_0022e0bc;
    if (bVar30 == 2) {
      while( true ) {
        if (lVar23 == 0) {
          return kFalseComplete;
        }
        iVar28 = (int)lVar23;
        lVar24 = (**(code **)(*(int *)(iVar28 + 4) + 0x2ac))
                           (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x2a8));
        if (lVar24 != 2) break;
        lVar23 = (**(code **)(*(int *)(iVar28 + 4) + 0x3fc))
                           (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x3f8));
      }
LAB_0022e8c4:
      if (lVar23 == 0) {
        return kFalseComplete;
      }
      iVar28 = *(int *)((int)lVar23 + 4);
      pcVar20 = *(code **)(iVar28 + 700);
      iVar28 = (int)lVar23 + (int)*(short *)(iVar28 + 0x2b8);
LAB_0022e928:
      uVar15 = (*pcVar20)(iVar28);
      *dest = uVar15;
      return kTrueComplete;
    }
    if (bVar30 < 3) {
      if ((bVar2 & 0x7f) == 0) goto LAB_0022e8c4;
      pTVar27 = this->_vb1168;
    }
    else {
      if (bVar30 == 6) {
        puVar19 = GetParams__9StackElem(elem);
        uVar15 = *puVar19;
        while (lVar23 != 0) {
          iVar28 = (int)lVar23;
          uVar14 = (**(code **)(*(int *)(iVar28 + 4) + 0x20c))
                             (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x208),0x3b);
          if (uVar14 == uVar15) goto LAB_0022e8c4;
          lVar23 = (**(code **)(*(int *)(iVar28 + 4) + 0x3fc))
                             (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x3f8));
        }
        goto LAB_0022e0bc;
      }
      pTVar27 = this->_vb1168;
    }
    uVar15 = 0x1e;
    uVar29 = 0x1e;
    goto LAB_0022e8a0;
  case 3:
    pcVar8 = this->_vb966->__vtable;
    lVar23 = (*(code *)pcVar8[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar8[1].CanContributeLight,
                        *dest);
    if (lVar23 != 0) {
      ppTVar32 = (TreeSim **)lVar23;
      lVar23 = (*(code *)ppTVar32[1][0x18].m_pCursorObject)
                         ((int)ppTVar32 + (int)*(short *)&ppTVar32[1][0x18].m_pMTObject);
      if (lVar23 != 0) {
                    /* inlined from SCID.h */
        pvVar17 = _dyncastimpl__7TreeSim4SCID(*ppTVar32,cXMTObjectImplID);
                    /* end of inlined section */
        piVar18 = *(int **)((int)pvVar17 + 8);
        if (piVar18 == (int *)0x0) {
          piVar18 = *(int **)((int)pvVar17 + 0xc);
        }
        iVar28 = *(int *)(*(int *)(*piVar18 + 4) + 4);
        pcVar20 = *(code **)(iVar28 + 700);
        iVar28 = *(int *)(*piVar18 + 4) + (int)*(short *)(iVar28 + 0x2b8);
        goto LAB_0022e928;
      }
    }
    TVar16 = kFalseComplete;
    *dest = 0;
    break;
  case 4:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar24 = (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                       ((int)&_5Globs_pObjectFolder->__vtable +
                        (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,
                        (param->field0_0x0).createObject.guid);
    pOVar7 = this->fModule->__vtable;
    uVar21 = (*(code *)pOVar7->GetGlobalRoutingSlot)
                       ((int)&this->fModule->__vtable + (int)*(short *)&pOVar7->EnqueueObjectDialog)
    ;
    lVar23 = 0;
    if ((ulong)(long)((short)*dest + -1) < uVar21) {
      lVar23 = (long)(short)*dest;
    }
    while (lVar23 < (long)uVar21) {
      pOVar7 = this->fModule->__vtable;
      lVar22 = (*(code *)pOVar7->EnqueueObjectDialog)
                         ((int)&this->fModule->__vtable + (int)*(short *)&pOVar7->GetCurrentDialog,
                          lVar23);
      if (lVar22 == 0) {
        lVar23 = (long)((int)lVar23 + 1);
      }
      else {
        iVar28 = *(int *)((int)lVar22 + 4);
        lVar22 = (**(code **)(iVar28 + 0x2ec))((int)lVar22 + (int)*(short *)(iVar28 + 0x2e8));
        if (lVar22 == lVar24) {
          uVar15 = (short)lVar23 + 1;
          goto LAB_0022e674;
        }
        lVar23 = (long)((int)lVar23 + 1);
      }
    }
LAB_0022e664:
    *dest = 0;
LAB_0022e678:
    TVar16 = (TreeReturnCode)(*dest != 0);
    break;
  case 5:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar15 = (*(code *)_5Globs_pNeighborhood->__vtable[1].SetFilename)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].LevelComplete,*dest);
    *dest = uVar15;
    TVar16 = (TreeReturnCode)(*dest != 0);
    break;
  case 7:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar15 = *dest;
    sVar3 = *(short *)&_5Globs_pNeighborhood->__vtable[1].LevelComplete;
    pcVar20 = (code *)_5Globs_pNeighborhood->__vtable[1].SetFilename;
    while( true ) {
      uVar15 = (*pcVar20)((int)&pNVar12->__vtable + (int)sVar3,uVar15);
      *dest = uVar15;
      if (*dest == 0) break;
      lVar23 = (*(code *)pNVar12->__vtable->SetShowTutorialArrow)
                         ((int)&pNVar12->__vtable +
                          (int)*(short *)&pNVar12->__vtable->GetShowTutorialArrow,*dest);
      if (lVar23 == 0) {
        pNVar26 = pNVar12->__vtable;
      }
      else {
                    /* end of inlined section */
        iVar28 = GetGUID__11ObjSelector(*(ObjSelector **)((int)lVar23 + 8));
        if (iVar28 == (param->field0_0x0).createObject.guid) {
          return kTrueComplete;
        }
        pNVar26 = pNVar12->__vtable;
      }
      sVar3 = *(short *)&pNVar26[1].LevelComplete;
      pcVar20 = (code *)pNVar26[1].SetFilename;
      uVar15 = *dest;
    }
LAB_0022e0bc:
    TVar16 = kFalseComplete;
    break;
  case 8:
    TVar16 = kFalseComplete;
    if (*dest != 0) {
      pcVar8 = this->_vb966->__vtable;
      lVar23 = (*(code *)pcVar8[1].GetLightingContribution)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar8[1].CanContributeLight)
      ;
      iVar28 = (int)lVar23;
      lVar24 = (**(code **)(*(int *)(iVar28 + 4) + 0x15c))
                         (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x158));
      TVar16 = kFalseComplete;
      if (lVar24 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
        if (lVar23 == 0) {
                    /* end of inlined section */
          in_00 = (FTilePt *)0xc8;
                    /* end of inlined section */
          iVar28 = _gifTag1Pass;
        }
        else {
          iVar31 = (**(code **)(*(int *)(iVar28 + 4) + 0x454))
                             (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x450));
          in_00 = (FTilePt *)(iVar31 + 200);
          iVar28 = (**(code **)(*(int *)(iVar28 + 4) + 0x454))
                             (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x450));
          iVar28 = *(int *)(iVar28 + 0xe0);
        }
        bVar11 = false;
        __7CTilePtRC7FTilePti(&centerLoc,in_00,iVar28);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
        init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&begin,&centerLoc,kAll);
        puVar1 = (undefined *)((int)&i.fCurrent + 3);
                    /* end of inlined section */
        uVar9 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | begin._0_8_ >> (7 - uVar9) * 8;
        i._0_8_ = begin._0_8_;
        i.fType = begin.fType;
        i.fCurrent = (cXObject__15_2008 *)(begin._0_8_ >> 0x20);
                    /* end of inlined section */
        while (i.fCurrent != (cXObject__15_2008 *)0x0) {
          uVar15 = (*(code *)(i.fCurrent)->__vtable[1].UserCanPlace)
                             ((int)&(i.fCurrent)->_vb3534 +
                              (int)*(short *)&(i.fCurrent)->__vtable[1].IsPartOfMe);
          if (uVar15 == *dest) {
            bVar11 = true;
            break;
          }
          __pp__14ObjectIterator(&i);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
        }
        if (bVar11) {
          __pp__14ObjectIterator(&i);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
          if (i.fCurrent == (cXObject__15_2008 *)0x0) {
            puVar1 = (undefined *)((int)&i.fCurrent + 3);
            uVar9 = (uint)puVar1 & 7;
            puVar10 = (ulong *)(puVar1 + -uVar9);
            *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | begin._0_8_ >> (7 - uVar9) * 8;
            i._0_8_ = begin._0_8_;
            i.fType = begin.fType;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
            i.fCurrent = (cXObject__15_2008 *)(begin._0_8_ >> 0x20);
          }
                    /* end of inlined section */
          uVar15 = (*(code *)(i.fCurrent)->__vtable[1].UserCanPlace)
                             ((int)&(i.fCurrent)->_vb3534 +
                              (int)*(short *)&(i.fCurrent)->__vtable[1].IsPartOfMe);
          *dest = uVar15;
          ___7CTilePt(&centerLoc,2);
          TVar16 = kTrueComplete;
        }
        else {
LAB_0022e4d8:
          ___7CTilePt(&centerLoc,2);
          TVar16 = kFalseComplete;
        }
      }
    }
    break;
  case 9:
    pcVar8 = this->_vb966->__vtable;
    lVar23 = (*(code *)pcVar8[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar8[1].CanContributeLight,
                        *dest);
    bVar2 = (param->field0_0x0).gotoRelative.flags;
    if (bVar2 < elem->fNumLocalVars) {
      pcVar4 = this->_vb966;
      pcVar8 = pcVar4->__vtable;
      sVar3 = *(short *)&pcVar8[1].CanContributeLight;
      puVar19 = GetLocals__9StackElem(elem);
      lVar24 = (*(code *)pcVar8[1].GetLightingContribution)
                         ((int)&pcVar4->_vb899 + (int)sVar3,puVar19[bVar2]);
      uVar15 = 10;
      if (lVar24 != 0) {
        iVar28 = (int)lVar24;
        (**(code **)(*(int *)(iVar28 + 4) + 0x2dc))
                  (&centerLoc,iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x2d8));
        __7CTilePt(&relLoc);
        in = aCStack_c0;
        if (lVar23 == 0) {
          bVar11 = true;
          iVar31 = GetLevel__C7CTilePt(&centerLoc);
          Set__7CTilePtiii(&relLoc,1,0,iVar31);
          goto LAB_0022e380;
        }
        iVar31 = *(int *)((int)lVar23 + 4);
        (**(code **)(iVar31 + 0x2dc))(in,(int)lVar23 + (int)*(short *)(iVar31 + 0x2d8));
        __mi__C7CTilePtRC7CTilePt(&adjLoc,in);
        __as__7CTilePtRC7CTilePt(&relLoc,&adjLoc);
        ___7CTilePt(&adjLoc,2);
        do {
          bVar11 = false;
          ___7CTilePt(in,2);
LAB_0022e380:
          if (!bVar11) {
            iVar31 = GetX__C7CTilePt(&relLoc);
            if (iVar31 < 1) {
              iVar31 = GetX__C7CTilePt(&relLoc);
              if (iVar31 < 0) {
                Set__7CTilePtii(&relLoc,0,-1);
              }
              else {
                iVar31 = GetY__C7CTilePt(&relLoc);
                if (iVar31 < 1) {
                  GetY__C7CTilePt(&relLoc);
                  ___7CTilePt(&relLoc,2);
                  goto LAB_0022e4d8;
                }
                Set__7CTilePtii(&relLoc,-1,0);
              }
            }
            else {
              Set__7CTilePtii(&relLoc,0,1);
            }
          }
          in = &adjLoc;
          __7CTilePtRC7CTilePt(in,&centerLoc);
          __apl__7CTilePtRC7CTilePt(in,&relLoc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          lVar23 = (*(code *)_5Globs_pFixedWorld->__vtable->HasWalls)
                             ((int)&_5Globs_pFixedWorld->__vtable +
                              (int)*(short *)&_5Globs_pFixedWorld->__vtable->HasWalls,in);
          if (lVar23 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            pcVar4 = this->_vb966;
            pcVar8 = pcVar4->__vtable;
            sVar3 = *(short *)&pcVar8[1].CanContributeLight;
            uVar29 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetSimFlag)
                               ((int)&_5Globs_pObjectModule->__vtable +
                                (int)*(short *)&_5Globs_pObjectModule->__vtable[1].SetSimFlag,in);
            lVar23 = (*(code *)pcVar8[1].GetLightingContribution)
                               ((int)&pcVar4->_vb899 + (int)sVar3,uVar29);
            if (lVar23 != 0) {
              iVar31 = (int)lVar23;
              lVar23 = (**(code **)(*(int *)(iVar31 + 4) + 0x29c))
                                 (iVar31 + *(short *)(*(int *)(iVar31 + 4) + 0x298));
              lVar24 = (**(code **)(*(int *)(iVar28 + 4) + 0x29c))
                                 (iVar28 + *(short *)(*(int *)(iVar28 + 4) + 0x298));
              if (lVar23 == lVar24) {
                uVar15 = (**(code **)(*(int *)(iVar31 + 4) + 700))
                                   (iVar31 + *(short *)(*(int *)(iVar31 + 4) + 0x2b8));
                *dest = uVar15;
                ___7CTilePt(in,2);
                ___7CTilePt(&relLoc,2);
                ___7CTilePt(&centerLoc,2);
                return kTrueComplete;
              }
            }
          }
        } while( true );
      }
      pTVar27 = this->_vb1168;
      uVar29 = 10;
    }
    else {
      pTVar27 = this->_vb1168;
      uVar15 = 8;
      uVar29 = 8;
    }
LAB_0022e8a0:
    pTVar27->fError = uVar15;
    pcVar8 = this->_vb966->__vtable;
    (*(code *)pcVar8->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar8->SimIndependent,uVar29);
    TVar16 = kError;
    break;
  case 10:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar28 = (*(code *)_5Globs_pCareers->__vtable->GetBehCareerData)
                       ((int)&_5Globs_pCareers->__vtable +
                        (int)*(short *)&_5Globs_pCareers->__vtable->GetOfferDialogText);
    lVar23 = (*(code *)pCVar13->__vtable->GetJobGrade)
                       ((int)&pCVar13->__vtable +
                        (int)*(short *)&pCVar13->__vtable->GetJobPerformance,*dest);
    if (lVar23 == 0) {
      iVar31 = 0;
      if (iVar28 == 0) goto LAB_0022e0bc;
      pCVar25 = pCVar13->__vtable;
    }
    else {
      iVar31 = (*(code *)pCVar13->__vtable->GetSuit)
                         ((int)&pCVar13->__vtable +
                          (int)*(short *)&pCVar13->__vtable->GetCarpoolHour,lVar23);
      iVar31 = iVar31 + 1;
      if (iVar28 <= iVar31) {
        return kFalseComplete;
      }
      pCVar25 = pCVar13->__vtable;
    }
    puVar19 = (ushort *)
              (*(code *)pCVar25->GetShortName)
                        ((int)&pCVar13->__vtable + (int)*(short *)&pCVar25->GetJobName,iVar31);
    uVar15 = *puVar19;
    goto LAB_0022e758;
  case 0xb:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar31 = 0;
    iVar28 = (*(code *)_5Globs_pNeighborhood->__vtable->PrepareAndTestLot)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable->MoveOut);
    uVar15 = 0;
    if (*dest == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pNVar26 = _5Globs_pNeighborhood->__vtable;
LAB_0022e73c:
      uVar15 = (*(code *)pNVar26->GetCurrentTutorialStage)
                         ((int)&_5Globs_pNeighborhood->__vtable +
                          (int)*(short *)&pNVar26->GetLotPosition,iVar31);
    }
    else if (0 < iVar28) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        uVar15 = (*(code *)_5Globs_pNeighborhood->__vtable->GetCurrentTutorialStage)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetLotPosition,iVar31);
        iVar31 = iVar31 + 1;
        if (uVar15 == *dest) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          pNVar26 = _5Globs_pNeighborhood->__vtable;
          if (iVar28 <= iVar31) {
            iVar31 = 0;
          }
          goto LAB_0022e73c;
        }
      } while (iVar31 < iVar28);
    }
    if (iVar31 == iVar28) {
      return kFalseComplete;
    }
LAB_0022e758:
    TVar16 = kTrueComplete;
    *dest = uVar15;
  }
  return TVar16;
}

TreeReturnCode cXObjectImpl::TryFindFunctionalObject(StackElem *elem, XPrimParam *param) {
	Int scoreField;
	ObjEntryPoint ep;
	cXObjectImpl *srch;
	cXObjectImpl *best;
	float bestScore;
	float score;
	
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  int *piVar5;
  Behavior *beh;
  TreeReturnCode TVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  cXObject__21_1030 *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  
  switch((param->field0_0x0).bparam[0]) {
  case 0:
    iVar16 = 0x1f;
    uVar15 = 0x12;
    break;
  case 1:
    iVar16 = 0x20;
    uVar15 = 0x13;
    break;
  case 2:
    iVar16 = 0x21;
    uVar15 = 0x14;
    break;
  case 3:
    iVar16 = 0x24;
    uVar15 = 0x15;
    break;
  default:
    goto switchD_0022e9c8_caseD_4;
  case 6:
    iVar16 = 0x25;
    uVar15 = 0x18;
    break;
  case 7:
    iVar16 = 0x26;
    uVar15 = 0x19;
    break;
  case 8:
    iVar16 = -1;
    uVar15 = 0x1a;
    break;
  case 10:
    iVar16 = 0x3d;
    uVar15 = 0xe;
    break;
  case 0xb:
    iVar16 = 0x27;
    uVar15 = 0x1c;
    break;
  case 0xc:
    iVar16 = 0x40;
    uVar15 = 0x10;
    break;
  case 0xd:
    iVar16 = 0x41;
    uVar15 = 0x11;
    break;
  case 0xe:
    iVar16 = 0xf;
    uVar15 = 0x1d;
  }
  lVar17 = 0;
  fVar18 = 0.0;
  pcVar1 = this->_vb966->__vtable;
  lVar7 = (*(code *)pcVar1[1].IsBroken)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].IsFromCatalog);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar14 = 0;
  if (lVar7 != 0) {
    iVar12 = *(int *)((int)lVar7 + 4);
    lVar14 = (**(code **)(iVar12 + 0x454))((int)lVar7 + (int)*(short *)(iVar12 + 0x450));
  }
                    /* end of inlined section */
  if (lVar14 != 0) {
    sVar3 = *(short *)((int)lVar14 + 0x58);
    do {
      iVar13 = (int)lVar14;
      iVar12 = *(int *)(iVar13 + 4);
      if (sVar3 < 1) {
        lVar7 = (**(code **)(*(int *)(iVar12 + 4) + 0x3c4))
                          (iVar12 + *(short *)(*(int *)(iVar12 + 4) + 0x3c0));
        iVar12 = *(int *)(iVar13 + 4);
        if (lVar7 == 0) {
          piVar5 = (int *)(**(code **)(*(int *)(iVar12 + 4) + 0x174))
                                    (iVar12 + *(short *)(*(int *)(iVar12 + 4) + 0x170));
          lVar8 = (**(code **)(*piVar5 + 0x24))
                            ((int)piVar5 + (int)*(short *)(*piVar5 + 0x20),uVar15);
          iVar12 = *(int *)(*(int *)(iVar13 + 4) + 4);
          piVar5 = (int *)(**(code **)(iVar12 + 0x174))
                                    (*(int *)(iVar13 + 4) + (int)*(short *)(iVar12 + 0x170));
          lVar9 = (**(code **)(*piVar5 + 0x1c))
                            ((int)piVar5 + (int)*(short *)(*piVar5 + 0x18),uVar15);
          lVar7 = lVar17;
          if (lVar9 == 0) {
LAB_0022ec48:
            iVar12 = *(int *)(iVar13 + 4);
            lVar17 = lVar7;
          }
          else {
            if (iVar16 == -1) {
              this->fData[0x42] = 0x32;
            }
            else {
              uVar4 = *(ushort *)(iVar13 + iVar16 * 2 + 0x26);
              this->fData[0x42] = uVar4;
              if (uVar4 == 0) goto LAB_0022ec48;
            }
            if (lVar8 == 0) {
              pcVar10 = this->_vb966;
              fVar19 = fVar18;
LAB_0022ebd0:
              uVar11 = 0;
              uVar4 = this->fData[0x42];
              if (lVar14 != 0) {
                uVar11 = *(undefined4 *)(iVar13 + 4);
              }
              fVar18 = (float)(*(code *)pcVar10->__vtable->SetMiscFlag)
                                        ((int)&pcVar10->_vb899 +
                                         (int)*(short *)&pcVar10->__vtable->GetHilite,uVar11);
              fVar18 = (float)(int)(short)uVar4 - fVar18 * gFunctionalScoreDistanceAttenuation;
              if (fVar18 < 1.0) {
                fVar18 = 1.0;
              }
              lVar7 = lVar14;
              if (fVar19 < fVar18) goto LAB_0022ec48;
              iVar12 = *(int *)(iVar13 + 4);
              fVar18 = fVar19;
            }
            else {
              iVar12 = *(int *)(*(int *)(iVar13 + 4) + 4);
              beh = (Behavior *)
                    (**(code **)(iVar12 + 0x2f4))
                              (*(int *)(iVar13 + 4) + (int)*(short *)(iVar12 + 0x2f0));
              iVar12 = *(int *)(*(int *)(iVar13 + 4) + 4);
              uVar4 = (**(code **)(iVar12 + 700))
                                (*(int *)(iVar13 + 4) + (int)*(short *)(iVar12 + 0x2b8));
              bVar2 = RunCheckTree__11TreeSimImplP8BehaviorssPs
                                (this->_vb1168,beh,uVar4,(ushort)lVar8,(ushort *)0x0);
              if (bVar2) {
                if (this->fData[0x42] != 0) {
                  pcVar10 = this->_vb966;
                  fVar19 = fVar18;
                  goto LAB_0022ebd0;
                }
                iVar12 = *(int *)(iVar13 + 4);
              }
              else {
                iVar12 = *(int *)(iVar13 + 4);
              }
            }
          }
        }
      }
      lVar7 = (**(code **)(*(int *)(iVar12 + 4) + 0x3fc))
                        (iVar12 + *(short *)(*(int *)(iVar12 + 4) + 0x3f8));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar14 = 0;
      if (lVar7 != 0) {
        iVar12 = *(int *)((int)lVar7 + 4);
        lVar14 = (**(code **)(iVar12 + 0x454))((int)lVar7 + (int)*(short *)(iVar12 + 0x450));
      }
                    /* end of inlined section */
      if (lVar14 == 0) break;
      sVar3 = *(short *)((int)lVar14 + 0x58);
    } while( true );
  }
  if (lVar17 == 0) {
switchD_0022e9c8_caseD_4:
    TVar6 = kFalseComplete;
  }
  else {
    iVar16 = *(int *)((int)lVar17 + 4);
    iVar12 = *(int *)(iVar16 + 4);
    uVar4 = (**(code **)(iVar12 + 700))(iVar16 + *(short *)(iVar12 + 0x2b8));
    elem->fObjectID = uVar4;
    TVar6 = kTrueComplete;
  }
  return TVar6;
}

TreeReturnCode cXObjectImpl::TryCallFunctionalTree(StackElem *elem, XPrimParam *param) {
	cXObject *obj;
	ObjEntryPoint ep;
	CallFunctionalTreeParam *this;
	
  cXObject__21_1030__vtable *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  pcVar1 = this->_vb966->__vtable;
  lVar3 = (*(code *)pcVar1[1].GetLightingContribution)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CanContributeLight,
                     elem->fObjectID);
  if (lVar3 == 0) {
    this->_vb1168->fError = 0x15;
    pcVar1 = this->_vb966->__vtable;
    (*(code *)pcVar1->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->SimIndependent,0x15);
    return kError;
  }
  switch((param->field0_0x0).bparam[0]) {
  case 0:
    uVar5 = 0x12;
    break;
  case 1:
    uVar5 = 0x13;
    break;
  case 2:
    uVar5 = 0x14;
    break;
  case 3:
    uVar5 = 0x15;
    break;
  case 4:
    uVar5 = 0x16;
    break;
  case 5:
    uVar5 = 0x17;
    break;
  case 6:
    uVar5 = 0x18;
    break;
  case 7:
    uVar5 = 0x19;
    break;
  case 8:
    uVar5 = 0x1a;
    break;
  case 9:
    uVar5 = 0x1b;
    break;
  case 10:
    uVar5 = 0xe;
    break;
  case 0xb:
    uVar5 = 0x1c;
    break;
  case 0xc:
    uVar5 = 0x10;
    break;
  case 0xd:
    uVar5 = 0x11;
    break;
  case 0xe:
    uVar5 = 0x1d;
    break;
  default:
    goto LAB_0022ee4c;
  }
  iVar2 = *(int *)((int)lVar3 + 4);
  lVar4 = (**(code **)(iVar2 + 0x17c))((int)lVar3 + (int)*(short *)(iVar2 + 0x178),uVar5);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if ((lVar4 != 0) &&
     (lVar3 = (*(code *)this->__vtable->Initialize)
                        ((int)this->fTemp + *(short *)&this->__vtable->Cleanup + -0x16,lVar3,0,lVar4
                         ,(param->field0_0x0).bparam[1] & 1), lVar3 != 0)) {
    return kStackLoaded;
  }
LAB_0022ee4c:
  return kFalseComplete;
}

TreeReturnCode cXObjectImpl::TryGenericSimCall(StackElem *elem, XPrimParam *param) {
	TreeReturnCode result;
	cXPerson *PersonA;
	cXObject *PersonBObj;
	cXPerson *PersonB;
	cXObject *objA;
	cXObject *objB;
	Sint16 d1;
	Sint16 d2;
	FTilePt bogus;
	float xdisp;
	float ydisp;
	float dirDisp;
	ObjectSlot *slot;
	cXObjectImpl *ptr;
	cXObject *ptr;
	float slotx;
	float sloty;
	float slotx;
	float sloty;
	cXObject *obj;
	cXPerson *person;
	cXObjectImpl *ptr;
	Neighborhood *ng;
	Neighbor *n;
	Family *f;
	Neighbor *this;
	Neighborhood *ng;
	Neighbor *n;
	Family *f;
	cXObject *obj;
	cXPersonImpl *person;
	cXObjectImpl *ptr;
	cXObjectImpl *ptr;
	cXObjectImpl *ptr;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *pObj;
	cXPerson *pPerson;
	cXObject *this;
	cXObject *ptr;
	cXObject *pObj;
	cXPerson *pPerson;
	cXObject *this;
	cXObject *ptr;
	SInt16 TargetHouse;
	SInt16 TransMode;
	SInt16 FamilyToMoveIn;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	UInt16 nBitCodeReturn;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	cXObject *this;
	EGlobal *pGlobals;
	
  short sVar1;
  short sVar2;
  short sVar3;
  cSimulator__vtable *pcVar4;
  ObjectModule__vtable *pOVar5;
  cXObjectImpl__127_901 *this_00;
  EGlobal__vtable *pEVar6;
  cXPerson__150_1300 *pcVar7;
  Neighborhood__vtable *pNVar8;
  cXObject__21_1030__vtable *pcVar9;
  cSimulator__vtable **ppcVar10;
  cXPerson__150_1300 **ppcVar11;
  Neighborhood *pNVar12;
  uchar uVar13;
  int *piVar14;
  int *piVar15;
  Interaction *this_01;
  cXObject__21_1030 *pcVar16;
  int *piVar17;
  cXObjectImpl__127_901 **ppcVar18;
  void *pvVar19;
  int iVar20;
  cXPerson__150_1300 *pcVar21;
  TreeReturnCode TVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uchar uVar29;
  code *pcVar30;
  TreeSimImpl__21_3338 *pTVar31;
  undefined8 uVar32;
  ushort uVar33;
  ObjectModule *pOVar34;
  EGlobal *pEVar35;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  TreeSim **ppTVar36;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  TreeReturnCode TVar37;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  FTilePt bogus;
  short nBitCodeReturn;
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
  
  pNVar12 = _5Globs_pNeighborhood;
  pEVar35 = _5Globs_pEORGlobals;
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  TVar37 = kTrueComplete;
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  TVar22 = TVar37;
  pOVar34 = (ObjectModule *)_5Globs_pNeighborhood;
  switch((param->field0_0x0).bparam[0]) {
  case 0:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pcVar16 = (cXObject__21_1030 *)0x0;
    iVar20 = (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].DeleteCharacter;
    pcVar30 = (code *)_5Globs_pNeighborhood->__vtable[1].CountHouses;
    goto LAB_0022f724;
  case 1:
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      piVar17 = (int *)_dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
    }
                    /* end of inlined section */
    uVar33 = 0x1c;
    if (piVar17 == (int *)0x0) {
      pTVar31 = this->_vb1168;
      uVar32 = 0x1c;
    }
    else {
      pcVar9 = this->_vb966->__vtable;
      lVar28 = (*(code *)pcVar9[1].GetLightingContribution)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9[1].CanContributeLight,
                          elem->fObjectID);
      uVar33 = 0x15;
      if (lVar28 == 0) {
        pTVar31 = this->_vb1168;
        uVar32 = 0x15;
      }
      else {
        ppTVar36 = (TreeSim **)lVar28;
        piVar14 = (int *)_dyncastimpl__7TreeSim4SCID(*ppTVar36,cXPersonID);
                    /* end of inlined section */
        uVar33 = 0x1c;
        if (piVar14 == (int *)0x0) {
          pTVar31 = this->_vb1168;
          uVar32 = 0x1c;
        }
        else {
          pcVar16 = this->_vb966;
          pcVar9 = pcVar16->__vtable;
          sVar1 = *(short *)&pcVar9[1].CanContributeLight;
          uVar32 = (*(code *)pcVar9->ReconType)
                             ((int)&pcVar16->_vb899 + (int)*(short *)&pcVar9->ReconStream,2);
          lVar28 = (*(code *)pcVar9[1].GetLightingContribution)
                             ((int)&pcVar16->_vb899 + (int)sVar1,uVar32);
          uVar33 = 0x15;
          if (lVar28 == 0) {
            pTVar31 = this->_vb1168;
            uVar32 = 0x15;
          }
          else {
            pcVar16 = this->_vb966;
            pcVar9 = pcVar16->__vtable;
            sVar1 = *(short *)&pcVar9[1].CanContributeLight;
            uVar32 = (*(code *)ppTVar36[1][0x10].m_pCursorObject)
                               ((int)ppTVar36 + (int)*(short *)&ppTVar36[1][0x10].m_pMTObject,2);
            uVar32 = (*(code *)pcVar9[1].GetLightingContribution)
                               ((int)&pcVar16->_vb899 + (int)sVar1,uVar32);
            if (lVar28 != 0) {
              iVar20 = *(int *)(*piVar17 + 4);
              uVar23 = (**(code **)(iVar20 + 0x20c))(*piVar17 + (int)*(short *)(iVar20 + 0x208),1);
              iVar20 = *(int *)(*piVar14 + 4);
              uVar24 = (**(code **)(iVar20 + 0x20c))(*piVar14 + (int)*(short *)(iVar20 + 0x208),1);
              iVar20 = *(int *)(*piVar17 + 4);
              (**(code **)(iVar20 + 0x104))(*piVar17 + (int)*(short *)(iVar20 + 0x100));
              iVar20 = *(int *)(*piVar14 + 4);
              (**(code **)(iVar20 + 0x104))(*piVar14 + (int)*(short *)(iVar20 + 0x100));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
              bogus.y.whole = -0x10;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
              bogus.x.whole = -0x10;
                    /* end of inlined section */
              iVar20 = *(int *)(*piVar17 + 4);
              lVar26 = (**(code **)(iVar20 + 0x10c))
                                 (*piVar17 + (int)*(short *)(iVar20 + 0x108),&bogus,1,uVar32,0);
              if (lVar26 != 0) {
                iVar20 = *(int *)(*piVar17 + 4);
                (**(code **)(iVar20 + 0x114))
                          (*piVar17 + (int)*(short *)(iVar20 + 0x110),&bogus,1,uVar32,0);
              }
              iVar20 = *(int *)(*piVar14 + 4);
              lVar26 = (**(code **)(iVar20 + 0x10c))
                                 (*piVar14 + (int)*(short *)(iVar20 + 0x108),&bogus,1,lVar28,0);
              if (lVar26 != 0) {
                iVar20 = *(int *)(*piVar14 + 4);
                (**(code **)(iVar20 + 0x114))
                          (*piVar14 + (int)*(short *)(iVar20 + 0x110),&bogus,1,lVar28,0);
              }
              fVar44 = 0.0;
              iVar20 = *(int *)(*piVar17 + 4);
              fVar43 = 0.0;
              (**(code **)(iVar20 + 0x194))(*piVar17 + (int)*(short *)(iVar20 + 400),1,uVar24);
              iVar20 = *(int *)(*piVar14 + 4);
              (**(code **)(iVar20 + 0x194))(*piVar14 + (int)*(short *)(iVar20 + 400),1,uVar23);
              piVar15 = (int *)(**(code **)(piVar17[1] + 0x124))
                                         ((int)piVar17 + (int)*(short *)(piVar17[1] + 0x120));
              (**(code **)(*piVar15 + 0x3c))((int)piVar15 + (int)*(short *)(*piVar15 + 0x38));
              piVar15 = (int *)(**(code **)(piVar14[1] + 0x124))
                                         ((int)piVar14 + (int)*(short *)(piVar14[1] + 0x120));
              (**(code **)(*piVar15 + 0x3c))((int)piVar15 + (int)*(short *)(*piVar15 + 0x38));
              iVar20 = (int)uVar32;
              lVar26 = (**(code **)(*(int *)(iVar20 + 4) + 0x254))
                                 (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 0x250),0);
              if (lVar26 != 0) {
                fVar41 = ((float *)lVar26)[1];
                fVar43 = *(float *)lVar26;
                uVar25 = (**(code **)(*(int *)(iVar20 + 4) + 0x20c))
                                   (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 0x208),1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                uVar25 = uVar25 & 7;
                fVar44 = 0.0;
                fVar40 = 0.0;
                if (uVar25 == 2) {
                  fVar39 = fVar43;
                  fVar43 = -fVar41;
LAB_0022f2d8:
                    /* end of inlined section */
                  iVar20 = piVar17[1];
                  fVar44 = fVar39;
                  fVar40 = fVar43;
                }
                else {
                  if (2 < uVar25) {
                    if (uVar25 == 4) {
                      fVar39 = -fVar41;
                      fVar43 = -fVar43;
                    }
                    else {
                      if (uVar25 != 6) {
                        iVar20 = piVar17[1];
                        goto LAB_0022f2dc;
                      }
                      fVar39 = -fVar43;
                      fVar43 = fVar41;
                    }
                    goto LAB_0022f2d8;
                  }
                  fVar39 = fVar41;
                  if (uVar25 == 0) goto LAB_0022f2d8;
                  iVar20 = piVar17[1];
                }
LAB_0022f2dc:
                fVar43 = fVar40 + 0.0;
                fVar44 = fVar44 + 0.0;
                piVar17 = (int *)(**(code **)(iVar20 + 0x124))
                                           (fVar40,(int)piVar17 + (int)*(short *)(iVar20 + 0x120));
                (**(code **)(*piVar17 + 0x5c))
                          (fVar43,fVar44,0,(int)piVar17 + (int)*(short *)(*piVar17 + 0x58));
              }
              iVar20 = (int)lVar28;
              lVar28 = (**(code **)(*(int *)(iVar20 + 4) + 0x254))
                                 (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 0x250),0);
              if (lVar28 == 0) {
                return kTrueComplete;
              }
              fVar41 = ((float *)lVar28)[1];
              fVar42 = *(float *)lVar28;
              uVar25 = (**(code **)(*(int *)(iVar20 + 4) + 0x20c))
                                 (iVar20 + *(short *)(*(int *)(iVar20 + 4) + 0x208),1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
              fVar39 = 0.0;
              uVar25 = uVar25 & 7;
              fVar40 = 0.0;
              if (uVar25 == 2) {
                fVar38 = -fVar41;
                fVar41 = fVar42;
              }
              else if (uVar25 < 3) {
                fVar38 = fVar42;
                if (uVar25 != 0) {
                  iVar20 = piVar14[1];
                  goto LAB_0022f3c4;
                }
              }
              else if (uVar25 == 4) {
                fVar38 = -fVar42;
                fVar41 = -fVar41;
              }
              else {
                if (uVar25 != 6) {
                  iVar20 = piVar14[1];
                  goto LAB_0022f3c4;
                }
                fVar38 = fVar41;
                fVar41 = -fVar42;
              }
                    /* end of inlined section */
              iVar20 = piVar14[1];
              fVar40 = fVar38;
              fVar39 = fVar41;
LAB_0022f3c4:
              fVar43 = fVar43 + fVar40;
              piVar17 = (int *)(**(code **)(iVar20 + 0x124))
                                         ((int)piVar14 + (int)*(short *)(iVar20 + 0x120));
              (**(code **)(*piVar17 + 0x5c))
                        (fVar43,fVar44 + fVar39,0,(int)piVar17 + (int)*(short *)(*piVar17 + 0x58));
              return kTrueComplete;
            }
            pTVar31 = this->_vb1168;
            uVar33 = 0x15;
            uVar32 = 0x15;
          }
        }
      }
    }
    goto LAB_00230068;
  case 2:
    pcVar9 = this->_vb966->__vtable;
    lVar28 = (*(code *)pcVar9[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9[1].CanContributeLight,
                        elem->fObjectID);
    uVar33 = 10;
    if (lVar28 == 0) {
      pTVar31 = this->_vb1168;
      uVar32 = 10;
    }
    else {
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar19 = (void *)0x0;
      }
      else {
        pvVar19 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
      }
                    /* end of inlined section */
      uVar33 = 0x1c;
      if (pvVar19 != (void *)0x0) {
        this_01 = (Interaction *)
                  (**(code **)(*(int *)((int)pvVar19 + 4) + 0xb4))
                            ((int)pvVar19 + (int)*(short *)(*(int *)((int)pvVar19 + 4) + 0xb0));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
        if (this_01->fID == 0) {
          return kTrueComplete;
        }
        SetIconObject__11InteractionP8cXObject(this_01,(cXObject__142_982 *)lVar28);
        return kTrueComplete;
      }
      pTVar31 = this->_vb1168;
      uVar32 = 0x1c;
    }
    goto LAB_00230068;
  case 3:
    __ls__7CTGDumpPCc(&ctgDump,"behavior using old center primitive\n");
    pcVar9 = this->_vb966->__vtable;
    (*(code *)pcVar9[1].ReconStream)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9[1].GetWallBlockFlags);
    TVar22 = kTrueComplete;
    break;
  case 4:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar28 = (*(code *)_5Globs_pNeighborhood->__vtable->SetShowTutorialArrow)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetShowTutorialArrow,
                        elem->fObjectID);
    uVar33 = 0x37;
    if (lVar28 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar26 = (*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                         ((int)&_5Globs_pHouse->__vtable +
                          (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
      if (lVar26 == 0) {
        return kFalseComplete;
      }
                    /* end of inlined section */
      if ((*(short *)((int)lVar28 + 0xde) != 0) &&
         (lVar27 = (*(code *)pNVar12->__vtable[1].GetNeighborData)
                             ((int)&pNVar12->__vtable +
                              (int)*(short *)&pNVar12->__vtable[1].GetNeighborSelector,lVar28),
         lVar27 != 0)) {
        return kFalseComplete;
      }
      lVar28 = (*(code *)pNVar12->__vtable[1].FindNeighborByGUID)
                         ((int)&pNVar12->__vtable +
                          (int)*(short *)&pNVar12->__vtable[1].FindNeighborByID,lVar28,lVar26);
LAB_0022f5e8:
      return (uint)(lVar28 == 0);
    }
    pTVar31 = this->_vb1168;
    uVar32 = 0x37;
    goto LAB_00230068;
  case 5:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar28 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetHouseNumberForLevel)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].Save,this->fTemp[0]);
    TVar22 = kFalseComplete;
    if (lVar28 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      iVar20 = *(int *)lVar28;
      pcVar4 = _5Globs_pSimulator->__vtable;
      sVar1 = *(short *)&pcVar4->SetObjectsValue;
      ppcVar10 = &_5Globs_pSimulator->__vtable;
      iVar20 = (**(code **)(iVar20 + 0xbc))((int)(int *)lVar28 + (int)*(short *)(iVar20 + 0xb8));
      (*(code *)pcVar4->GetProbe)((int)ppcVar10 + (int)sVar1,2,-iVar20);
      TVar22 = kTrueComplete;
    }
    break;
  case 6:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar28 = (*(code *)_5Globs_pNeighborhood->__vtable->SetShowTutorialArrow)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetShowTutorialArrow,
                        elem->fObjectID);
    uVar32 = 0x37;
    if (lVar28 != 0) {
      lVar28 = (*(code *)pNVar12->__vtable[1].GetNeighborData)
                         ((int)&pNVar12->__vtable +
                          (int)*(short *)&pNVar12->__vtable[1].GetNeighborSelector,lVar28);
      goto LAB_0022f5e8;
    }
    pTVar31 = this->_vb1168;
    uVar33 = 0x37;
    goto LAB_00230068;
  default:
    pTVar31 = this->_vb1168;
    uVar33 = 0x2a;
    uVar32 = 0x2a;
    goto LAB_00230068;
  case 8:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pcVar16 = (cXObject__21_1030 *)0x1;
    iVar20 = (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].DeleteCharacter;
    pcVar30 = (code *)_5Globs_pNeighborhood->__vtable[1].CountHouses;
    goto LAB_0022f724;
  case 9:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pcVar16 = (cXObject__21_1030 *)0x2;
    iVar20 = (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].DeleteCharacter;
    pcVar30 = (code *)_5Globs_pNeighborhood->__vtable[1].CountHouses;
    goto LAB_0022f724;
  case 10:
    pcVar16 = this->_vb966;
    pOVar5 = this->fModule->__vtable;
    iVar20 = (int)*(short *)&pOVar5[1].RelationshipAccessed;
    pcVar30 = (code *)pOVar5[1].OffsetWorld;
    pOVar34 = this->fModule;
    goto LAB_0022f724;
  case 0xb:
    pcVar16 = this->_vb966;
    pOVar5 = this->fModule->__vtable;
    iVar20 = (int)*(short *)&pOVar5[1].DoStream;
    pcVar30 = (code *)pOVar5[1].DoReconObject;
    pOVar34 = this->fModule;
    goto LAB_0022f724;
  case 0xc:
    pcVar9 = this->_vb966->__vtable;
    lVar28 = (*(code *)pcVar9[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9[1].CanContributeLight,
                        elem->fObjectID);
    uVar33 = 10;
    if (lVar28 != 0) {
      this->fTemp[0] = 1;
      return kTrueComplete;
    }
    pTVar31 = this->_vb1168;
    uVar32 = 10;
    goto LAB_00230068;
  case 0xd:
    pcVar9 = this->_vb966->__vtable;
    pcVar16 = (cXObject__21_1030 *)
              (*(code *)pcVar9[1].GetLightingContribution)
                        ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9[1].CanContributeLight,
                         elem->fObjectID);
    uVar32 = 10;
    if (pcVar16 == (cXObject__21_1030 *)0x0) {
      pTVar31 = this->_vb1168;
      uVar33 = 10;
      goto LAB_00230068;
    }
    pOVar5 = this->fModule->__vtable;
    iVar20 = (int)*(short *)&pOVar5[1].ObjectModule;
    pcVar30 = (code *)pOVar5[1].Init;
    pOVar34 = this->fModule;
LAB_0022f724:
    (*pcVar30)((int)&pOVar34->__vtable + iVar20,pcVar16);
    TVar22 = kTrueComplete;
    break;
  case 0xe:
    pcVar9 = this->_vb966->__vtable;
    piVar17 = (int *)(*(code *)pcVar9[1].GetObjectSlot)
                               ((int)&this->_vb966->_vb899 +
                                (int)*(short *)&pcVar9[1].CountObjectSlots);
    (**(code **)(*piVar17 + 0x2c))
              ((int)piVar17 + (int)*(short *)(*piVar17 + 0x28),0x1f,this->fTemp[0]);
    TVar22 = kTrueComplete;
    break;
  case 0xf:
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      ppcVar18 = (cXObjectImpl__127_901 **)0x0;
    }
    else {
      ppcVar18 = (cXObjectImpl__127_901 **)
                 _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonImplID);
    }
                    /* end of inlined section */
    uVar33 = 0x1c;
    if (ppcVar18 != (cXObjectImpl__127_901 **)0x0) {
      pcVar16 = ppcVar18[1]->_vb966;
      (**(code **)&pcVar16[5].field_0x24)
                ((int)ppcVar18[1]->fTemp + *(short *)&pcVar16[5].field_0x20 + -0x16,0x48,
                 this->fTemp[0]);
      pcVar16 = ppcVar18[1]->_vb966;
      (**(code **)&pcVar16[5].field_0x24)
                ((int)ppcVar18[1]->fTemp + *(short *)&pcVar16[5].field_0x20 + -0x16,0x49,0);
      if (this->fTemp[0] != 0) {
        return kTrueComplete;
      }
      this_00 = *ppcVar18;
      ComputeRect__12cXObjectImplRC7FTilePtP9FTileRect(this_00,&this_00->fLocation,&this_00->fRect);
      return kTrueComplete;
    }
    pTVar31 = this->_vb1168;
    uVar32 = 0x1c;
LAB_00230068:
    pTVar31->fError = uVar33;
    pcVar9 = this->_vb966->__vtable;
    (*(code *)pcVar9->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9->SimIndependent,uVar32);
    TVar22 = kError;
    break;
  case 0x10:
    break;
  case 0x11:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar29 = _5Globs_pEORGlobals->_VanityMirrorState;
    if (uVar29 == '\0') {
      pEVar6 = _5Globs_pEORGlobals->__vtable;
      pcVar9 = this->_vb966->__vtable;
      sVar1 = *(short *)&pEVar6[1].CreateThumbnail;
      ppcVar11 = _5Globs_pEORGlobals->_pSelectedSims;
      uVar32 = (*(code *)pcVar9[1].GetLightingContribution)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9[1].CanContributeLight,
                          elem->fObjectID);
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar19 = (void *)0x0;
      }
      else {
        pvVar19 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
      }
                    /* end of inlined section */
      lVar28 = (*(code *)pEVar6[1].IsTwoPlayer)((int)ppcVar11 + sVar1 + -0x24,uVar32,pvVar19);
      if (lVar28 != 0) {
        pEVar35->_VanityMirrorState = '\x01';
        return kGlobalEngaged;
      }
    }
    else {
      uVar13 = '\x03';
LAB_0022f920:
      if (uVar29 != uVar13) {
        return kGlobalEngaged;
      }
      _5Globs_pEORGlobals->_VanityMirrorState = '\0';
    }
    goto LAB_0022f92c;
  case 0x12:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar29 = _5Globs_pEORGlobals->_VanityMirrorState;
    if (uVar29 != '\0') {
      uVar13 = '\x06';
      goto LAB_0022f920;
    }
    pEVar6 = _5Globs_pEORGlobals->__vtable;
    pcVar9 = this->_vb966->__vtable;
    sVar1 = *(short *)&pEVar6[1].LoadSelectorData;
    ppcVar11 = _5Globs_pEORGlobals->_pSelectedSims;
    uVar32 = (*(code *)pcVar9[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar9[1].CanContributeLight,
                        elem->fObjectID);
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar19 = (void *)0x0;
    }
    else {
      pvVar19 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
    }
                    /* end of inlined section */
    lVar28 = (*(code *)pEVar6[1].UnloadSelectorData)((int)ppcVar11 + sVar1 + -0x24,uVar32,pvVar19);
    if (lVar28 != 0) {
      pEVar35->_VanityMirrorState = '\x04';
      return kGlobalEngaged;
    }
LAB_0022f92c:
    TVar22 = kTrueComplete;
    break;
  case 0x13:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    uVar32 = 0x25;
    uVar33 = *(ushort *)(iVar20 + 0x16);
    iVar20 = (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused;
    pcVar30 = (code *)_5Globs_pSimulator->__vtable->IsStopped;
    pEVar35 = (EGlobal *)_5Globs_pSimulator;
    goto LAB_0022faa4;
  case 0x14:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    uVar32 = 0x26;
    uVar33 = *(ushort *)(iVar20 + 0x16);
    iVar20 = (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused;
    pcVar30 = (code *)_5Globs_pSimulator->__vtable->IsStopped;
    pEVar35 = (EGlobal *)_5Globs_pSimulator;
    goto LAB_0022faa4;
  case 0x15:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    uVar32 = 0x27;
    uVar33 = *(ushort *)(iVar20 + 0x16);
    iVar20 = (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused;
    pcVar30 = (code *)_5Globs_pSimulator->__vtable->IsStopped;
    pEVar35 = (EGlobal *)_5Globs_pSimulator;
    goto LAB_0022faa4;
  case 0x16:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
      pcVar16 = this->_vb966;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    sVar1 = *(short *)(iVar20 + 0x16);
    if (pcVar16 == (cXObject__21_1030 *)0x0) {
      iVar20 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar16 = this->_vb966;
    }
    else {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
      pcVar16 = this->_vb966;
    }
    sVar2 = *(short *)(iVar20 + 0x18);
    sVar3 = sRam0000001a;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
      sVar3 = *(short *)(iVar20 + 0x1a);
    }
    pNVar12 = _5Globs_pNeighborhood;
    pEVar35 = _5Globs_pEORGlobals;
    if (sVar2 == 2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      *(undefined4 *)&_5Globs_pEORGlobals->m_bGotoStartMode = 1;
    }
    else if (sVar2 == 3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      *(undefined4 *)&_5Globs_pEORGlobals->m_bGotoNeighborhoodMode = 1;
      pNVar8 = pNVar12->__vtable;
      iVar20 = (*(code *)pNVar8[1].GetImpl)
                         ((int)&pNVar12->__vtable + (int)*(short *)&pNVar8[1].AddFamilyHistoryStat);
      TVar22 = kTrueComplete;
      if (*(short *)(iVar20 + 0x2e6) == 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        iVar20 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat)
        ;
        *(undefined2 *)(iVar20 + 0x2e6) = 0;
        TVar22 = TVar37;
      }
    }
    else if (sVar2 == 4) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      *(undefined4 *)&_5Globs_pEORGlobals->m_bStoryModeWonGame = 1;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      *(undefined4 *)&_5Globs_pEORGlobals->m_bStoryModeTransferHouses = 1;
      if (sVar2 == 1) {
                    /* end of inlined section */
        *(undefined4 *)&pEVar35->m_bStoryModeDoSubstitutionOnTransfer = 1;
      }
      else {
                    /* end of inlined section */
        *(undefined4 *)&pEVar35->m_bStoryModeDoSubstitutionOnTransfer = 0;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
      pEVar35 = _5Globs_pEORGlobals;
                    /* end of inlined section */
      *(undefined4 *)&_5Globs_pEORGlobals->m_bGotoNeighborhoodMode = 1;
      pEVar35->m_StoryModeFamilyToMoveInBehind = (int)sVar3;
      pEVar35->m_StoryModeMoveIntoHouseNum = (int)sVar1;
    }
    break;
  case 0x17:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
    pcVar16 = this->_vb966;
    sVar1 = sRam00000016;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
      sVar1 = *(short *)(iVar20 + 0x16);
    }
    pEVar35->m_nUnlockCode = (int)sVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    sVar1 = _o_right;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
      sVar1 = *(short *)(iVar20 + 0x18);
    }
    pEVar35->m_nUnlockPersonId = (int)sVar1;
    TVar22 = kTrueComplete;
    break;
  case 0x18:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar32 = 0x29;
    uVar33 = (ushort)(*(short *)(iVar20 + 0x16) == 0);
    iVar20 = (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused;
    pcVar30 = (code *)_5Globs_pSimulator->__vtable->IsStopped;
    pEVar35 = (EGlobal *)_5Globs_pSimulator;
    goto LAB_0022faa4;
  case 0x19:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    uVar32 = 0x28;
    uVar33 = *(ushort *)(iVar20 + 0x16);
    iVar20 = (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused;
    pcVar30 = (code *)_5Globs_pSimulator->__vtable->IsStopped;
    pEVar35 = (EGlobal *)_5Globs_pSimulator;
    goto LAB_0022faa4;
  case 0x1a:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar32 = 0;
    goto LAB_0022fa94;
  case 0x1b:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar32 = 1;
LAB_0022fa94:
    uVar33 = 8;
    iVar20 = (int)*(short *)&_5Globs_pEORGlobals->__vtable->AllocInstance;
    pcVar30 = (code *)_5Globs_pEORGlobals->__vtable->AllocPersonInstance;
LAB_0022faa4:
    (*pcVar30)((int)pEVar35->_pSelectedSims + iVar20 + -0x24,uVar32,uVar33);
    TVar22 = kTrueComplete;
    break;
  case 0x1c:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
    pcVar16 = this->_vb966;
    if (pcVar16 == (cXObject__21_1030 *)0x0) {
      iVar20 = 0;
    }
    else {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    nBitCodeReturn = 0;
    (*(code *)pEVar35->__vtable[1].CallUnlockItems)
              ((int)pEVar35->_pSelectedSims +
               *(short *)&pEVar35->__vtable[1].CheckForZeroExtentOverride + -0x24,
               *(undefined2 *)(iVar20 + 0x16),&nBitCodeReturn);
    pEVar35->m_nUnlockBitField = nBitCodeReturn;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    if (pcVar16 == (cXObject__21_1030 *)0x0) {
      iVar20 = 0;
    }
    else {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    *(short *)(iVar20 + 0x1a) = pEVar35->m_nUnlockBitField;
    TVar22 = kTrueComplete;
    break;
  case 0x1d:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    TVar22 = kTrueComplete;
    if (_5Globs_pEORGlobals->_HighScoreDialogState == '\0') {
      _5Globs_pEORGlobals->_HighScoreDialogState = '\x01';
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar16 = this->_vb966;
      sVar1 = sRam00000016;
      if (pcVar16 != (cXObject__21_1030 *)0x0) {
        iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                           ((int)&pcVar16->_vb899 +
                            (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
        sVar1 = *(short *)(iVar20 + 0x16);
      }
      pEVar35->m_nChallengePlayerNum = (int)sVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar16 = this->_vb966;
      sVar1 = _o_right;
      if (pcVar16 != (cXObject__21_1030 *)0x0) {
        iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                           ((int)&pcVar16->_vb899 +
                            (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
        sVar1 = *(short *)(iVar20 + 0x18);
      }
      pEVar35->m_nChallengeScore = (int)sVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar16 = this->_vb966;
      sVar1 = sRam0000001a;
      if (pcVar16 != (cXObject__21_1030 *)0x0) {
        iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                           ((int)&pcVar16->_vb899 +
                            (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
        sVar1 = *(short *)(iVar20 + 0x1a);
      }
      pEVar35->m_nChallengeComponent1 = (int)sVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar16 = this->_vb966;
      sVar1 = _prof_offset;
      if (pcVar16 != (cXObject__21_1030 *)0x0) {
        iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                           ((int)&pcVar16->_vb899 +
                            (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
        sVar1 = *(short *)(iVar20 + 0x1c);
      }
      pEVar35->m_nChallengeComponent2 = (int)sVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar16 = this->_vb966;
      sVar1 = sRam0000001e;
      if (pcVar16 != (cXObject__21_1030 *)0x0) {
        iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                           ((int)&pcVar16->_vb899 +
                            (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
        sVar1 = *(short *)(iVar20 + 0x1e);
      }
      pEVar35->m_nChallengeComponent3 = (int)sVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar16 = this->_vb966;
      sVar1 = _GM_2PASS;
      if (pcVar16 != (cXObject__21_1030 *)0x0) {
        iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                           ((int)&pcVar16->_vb899 +
                            (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
        sVar1 = *(short *)(iVar20 + 0x20);
      }
      pEVar35->m_nChallengeComponent4 = (int)sVar1;
      if (pEVar35->m_nChallengePlayerNum < 1) {
        pEVar35->m_nChallengePlayerNum = 1;
      }
      if (pEVar35->m_nChallengePlayerNum < 3) {
        iVar20 = pEVar35->m_nChallengePlayerNum;
      }
      else {
        pEVar35->m_nChallengePlayerNum = 2;
        iVar20 = pEVar35->m_nChallengePlayerNum;
      }
      pEVar35->m_nChallengePlayerNum = iVar20 + -1;
      if (pEVar35->m_nChallengeScore < 0) {
        pEVar35->m_nChallengeScore = 0;
      }
      if (pEVar35->m_nChallengeScore < 0x3e9) {
        iVar20 = pEVar35->m_nChallengeComponent1;
      }
      else {
        pEVar35->m_nChallengeScore = 1000;
        iVar20 = pEVar35->m_nChallengeComponent1;
      }
      if (iVar20 < 0) {
        pEVar35->m_nChallengeComponent1 = 0;
      }
      if (pEVar35->m_nChallengeComponent1 < 0x3e9) {
        iVar20 = pEVar35->m_nChallengeComponent2;
      }
      else {
        pEVar35->m_nChallengeComponent1 = 1000;
        iVar20 = pEVar35->m_nChallengeComponent2;
      }
      if (iVar20 < 0) {
        pEVar35->m_nChallengeComponent2 = 0;
      }
      if (pEVar35->m_nChallengeComponent2 < 0x3e9) {
        iVar20 = pEVar35->m_nChallengeComponent3;
      }
      else {
        pEVar35->m_nChallengeComponent2 = 1000;
        iVar20 = pEVar35->m_nChallengeComponent3;
      }
      if (iVar20 < 0) {
        pEVar35->m_nChallengeComponent3 = 0;
      }
      if (pEVar35->m_nChallengeComponent3 < 0x3e9) {
        iVar20 = pEVar35->m_nChallengeComponent4;
      }
      else {
        pEVar35->m_nChallengeComponent3 = 1000;
        iVar20 = pEVar35->m_nChallengeComponent4;
      }
      if (iVar20 < 0) {
        pEVar35->m_nChallengeComponent4 = 0;
      }
      TVar22 = kTrueComplete;
      if (1000 < pEVar35->m_nChallengeComponent4) {
        pEVar35->m_nChallengeComponent4 = 1000;
      }
    }
    break;
  case 0x1e:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    if (_5Globs_pEORGlobals != (EGlobal *)0x0) {
      (*(code *)_5Globs_pEORGlobals->__vtable[1].GetCam)
                ((int)_5Globs_pEORGlobals->_pSelectedSims +
                 *(short *)&_5Globs_pEORGlobals->__vtable[1].SelectWin + -0x24);
      return kTrueComplete;
    }
    goto LAB_0023009c;
  case 0x1f:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    lVar28 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                       ((int)&_5Globs_pObjectModule->__vtable +
                        (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,
                        *(undefined2 *)(iVar20 + 0x16));
    if (lVar28 == 0) {
      return kFalseComplete;
    }
                    /* inlined from SCID.h */
    pcVar21 = (cXPerson__150_1300 *)_dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar28,cXPersonID);
                    /* end of inlined section */
    if (pcVar21 != (cXPerson__150_1300 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pEORGlobals->__vtable->SetCam)
                ((int)_5Globs_pEORGlobals->_pSelectedSims +
                 *(short *)&_5Globs_pEORGlobals->__vtable->GetCam + -0x24,0,pcVar21,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pcVar7 = _5Globs_pEORGlobals->_pSelectedSims[0];
LAB_0022fbe0:
      return (uint)(pcVar21 == pcVar7);
    }
    goto LAB_0023009c;
  case 0x20:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar16 = this->_vb966;
    iVar20 = 0;
    if (pcVar16 != (cXObject__21_1030 *)0x0) {
      iVar20 = (*(code *)pcVar16->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar16->_vb899 +
                          (int)*(short *)&pcVar16->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    lVar28 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                       ((int)&_5Globs_pObjectModule->__vtable +
                        (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,
                        *(undefined2 *)(iVar20 + 0x16));
    if (lVar28 == 0) {
      return kFalseComplete;
    }
                    /* inlined from SCID.h */
    pcVar21 = (cXPerson__150_1300 *)_dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar28,cXPersonID);
                    /* end of inlined section */
    if (pcVar21 != (cXPerson__150_1300 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pEORGlobals->__vtable->SetCam)
                ((int)_5Globs_pEORGlobals->_pSelectedSims +
                 *(short *)&_5Globs_pEORGlobals->__vtable->GetCam + -0x24,1,pcVar21,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pcVar7 = _5Globs_pEORGlobals->_pSelectedSims[1];
      goto LAB_0022fbe0;
    }
LAB_0023009c:
    TVar22 = kFalseComplete;
  }
  return TVar22;
}

TreeReturnCode cXObjectImpl::TryDialog(StackElem *elem, XPrimParam *param) {
	TreeSim *this;
	TreeSim *this;
	TreeSim *this;
	TreeSim *this;
	TreeReturnCode retcode;
	UInt16 nBitCodeReturn;
	s32 guid;
	cXObject *this;
	
  uint uVar1;
  EGlobal__vtable *pEVar2;
  cXObject__21_1030 *pcVar3;
  ESim *pEVar4;
  E2PDialog *pEVar5;
  cXObject__21_1030__vtable *pcVar6;
  EGlobal *pEVar7;
  EDialog *pEVar8;
  ushort uVar9;
  cXPerson__150_1300 *pcVar10;
  TreeReturnCode TVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  EDialog__vtable *pEVar15;
  uint uVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  short nBitCodeReturn;
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
  
  pEVar8 = _5Globs_pEORDialog;
  pEVar7 = _5Globs_pEORGlobals;
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  uVar1 = *(uint *)((int)&param->field0_0x0 + 4);
  uVar16 = uVar1 & 0xf00;
  if (uVar16 == 0x600) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    if (param != (XPrimParam *)0x0) {
      if ((uVar1 & 0xf000) == 0x1000) {
        (*(code *)_5Globs_pEORGlobals->__vtable[1].GetWin)
                  ((int)_5Globs_pEORGlobals->_pSelectedSims +
                   *(short *)&_5Globs_pEORGlobals->__vtable[1].RecalcHouse + -0x24,0,elem,param,
                   this->_vb966,0);
        uVar1 = *(uint *)((int)&param->field0_0x0 + 4);
      }
      else {
        uVar1 = *(uint *)((int)&param->field0_0x0 + 4);
      }
      pEVar2 = pEVar7->__vtable;
      if ((uVar1 & 0xf000) == 0x2000) {
        (*(code *)pEVar2[1].GetWin)
                  ((int)pEVar7->_pSelectedSims + *(short *)&pEVar2[1].RecalcHouse + -0x24,1,elem,
                   param,this->_vb966,0);
        lVar14 = 1;
      }
      else {
        (*(code *)pEVar2[1].GetWin)
                  ((int)pEVar7->_pSelectedSims + *(short *)&pEVar2[1].RecalcHouse + -0x24,0,elem,
                   param,this->_vb966,0);
        lVar14 = 1;
      }
      goto LAB_00230438;
    }
  }
  else {
    if (uVar16 != 0x500) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar14 = 1;
      if (_5Globs_pEORDialog != (EDialog *)0x0) {
                    /* end of inlined section */
        lVar14 = (*(code *)_5Globs_pEORDialog->__vtable[1].SetParams)
                           ((int)&_5Globs_pEORDialog->m_retcode +
                            (int)*(short *)&_5Globs_pEORDialog->__vtable[1].EDialog);
        pEVar7 = _5Globs_pEORGlobals;
        if (lVar14 == 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          if ((*(uint *)((int)&param->field0_0x0 + 4) & 0xf00) == 0x700) {
            nBitCodeReturn = 0;
            lVar14 = (*(code *)_5Globs_pEORGlobals->__vtable[1].CheckForZeroExtentOverride)
                               ((int)_5Globs_pEORGlobals->_pSelectedSims +
                                *(short *)&_5Globs_pEORGlobals->__vtable[1].EndSaveGame + -0x24,
                                _5Globs_pEORGlobals->m_nUnlockCode,
                                _5Globs_pEORGlobals->m_nUnlockPersonId,&nBitCodeReturn);
            pEVar7->m_nUnlockGuid = (int)lVar14;
            pEVar7->m_nUnlockBitField = nBitCodeReturn;
            if (lVar14 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
              pcVar3 = this->_vb966;
              if (pcVar3 == (cXObject__21_1030 *)0x0) {
                iVar12 = 0;
              }
              else {
                iVar12 = (*(code *)pcVar3->__vtable[1].GetObjectImplementation)
                                   ((int)&pcVar3->_vb899 +
                                    (int)*(short *)&pcVar3->__vtable[1].AdvanceGraphic);
              }
                    /* end of inlined section */
              lVar14 = 1;
              *(short *)(iVar12 + 0x1a) = pEVar7->m_nUnlockBitField;
              goto LAB_00230438;
            }
            pEVar15 = pEVar8->__vtable;
          }
          else {
            pEVar15 = pEVar8->__vtable;
          }
          (*(code *)pEVar15->GetRetCode)
                    ((int)&pEVar8->m_retcode + (int)*(short *)&pEVar15->GetCurDialog,elem,param,
                     this->_vb966,0);
          lVar14 = 4;
        }
        else {
          uVar9 = GetTreeID__C9StackElem(elem);
          uVar9 = GetTreeClass__8Behaviors(uVar9);
          if (uVar9 == 2) {
            lVar14 = (*(code *)pEVar8->__vtable[1].GetCurDialog)
                               ((int)&pEVar8->m_retcode +
                                (int)*(short *)&pEVar8->__vtable[1].PutPanelToSleep);
            if (lVar14 == 2) {
              lVar14 = 4;
            }
            else {
              (*(code *)pEVar8->__vtable[1].ExitCurDialog)
                        ((int)&pEVar8->m_retcode + (int)*(short *)&pEVar8->__vtable[1].GetRetCode);
            }
          }
          else {
            this->_vb1168->fError = 5;
            pcVar6 = this->_vb966->__vtable;
            (*(code *)pcVar6->SimEnabled)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar6->SimIndependent,5);
            lVar14 = -1;
          }
        }
      }
      goto LAB_00230438;
    }
                    /* end of inlined section */
    pcVar3 = this->_vb966;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
    pEVar4 = pcVar3->_vb899->m_pEoRPerson;
                    /* end of inlined section */
    if (pEVar4 != (ESim *)0x0) {
      if (_5Globs_pEORGlobals->_pSelectedSims[0] == (cXPerson__150_1300 *)0x0) {
        pcVar10 = _5Globs_pEORGlobals->_pSelectedSims[1];
      }
      else {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
                    /* end of inlined section */
        if (pEVar4 == _5Globs_pEORGlobals->_pSelectedSims[0]->_vb1187->_vb1121->m_pEoRPerson) {
          pEVar5 = _5Globs_pEORGlobals->m_p2PDialog[0];
          goto LAB_00230260;
        }
        pcVar10 = _5Globs_pEORGlobals->_pSelectedSims[1];
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
                    /* end of inlined section */
      if ((pcVar10 != (cXPerson__150_1300 *)0x0) &&
         (pcVar3->_vb899->m_pEoRPerson == pcVar10->_vb1187->_vb1121->m_pEoRPerson)) {
        pEVar5 = _5Globs_pEORGlobals->m_p2PDialog[1];
LAB_00230260:
        TVar11 = (*(code *)pEVar5->__vtable[1].SetParams)
                           ((int)&pEVar5->m_ControllerNum +
                            (int)*(short *)&pEVar5->__vtable[1].E2PDialog,elem,param);
        return TVar11;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      iVar12 = 0;
      if (pcVar3 != (cXObject__21_1030 *)0x0) {
        iVar12 = (*(code *)pcVar3->__vtable[1].GetObjectImplementation)
                           ((int)&pcVar3->_vb899 +
                            (int)*(short *)&pcVar3->__vtable[1].AdvanceGraphic);
      }
                    /* end of inlined section */
      iVar13 = rand();
      lVar14 = 1;
      *(short *)(iVar12 + 0x16) = (short)(iVar13 % 3) + 1;
      goto LAB_00230438;
    }
  }
  lVar14 = 1;
LAB_00230438:
  return (TreeReturnCode)lVar14;
}

TreeReturnCode cXObjectImpl::TryShowString(StackElem *elem, XPrimParam *param) {
	AUTOPTR<StringSet> messageStrings;
	char *showStr;
	char messageStr[256];
	
  short sVar1;
  StringSet__vtable *pSVar2;
  cXObject__21_1030__vtable *pcVar3;
  StringSet *pInstance;
  iResFile__6_5027 *piVar4;
  long lVar5;
  size_t sVar6;
  AUTOPTR_StringSet_ messageStrings;
  char messageStr [256];
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
  pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  pSVar2 = pInstance->__vtable;
  sVar1 = *(short *)&pSVar2[1].SetString;
  piVar4 = GetPrivFile__8Behavior(elem->fBehavior);
  (*(code *)pSVar2[1].InsertString)
            ((int)&pInstance->__vtable + (int)sVar1,piVar4,(param->field0_0x0).bparam[0],0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  lVar5 = (*(code *)pInstance->__vtable->RemoveString)
                    ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->InsertString,
                     (param->field0_0x0).bparam[1],0xffffffffffffffff);
  if ((lVar5 != 0) && (sVar6 = strlen((char *)lVar5), sVar6 != 0)) {
    pcVar3 = this->_vb966->__vtable;
    (*(code *)pcVar3[1].ReconSlots)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].ReconType);
    sprintf(messageStr,"%s : %s");
    GlobalDispatch__Fsi(0xea,(int)messageStr);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet(pInstance);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  return kTrueComplete;
}

TreeReturnCode cXObjectImpl::TryKillObject(StackElem *elem, XPrimParam *param) {
	SInt16 killID;
	cXObject *obj;
	cXPerson *person;
	bool engage;
	KillObjectParam *this;
	cXObject *ptr;
	KillObjectParam *this;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  void *pvVar4;
  TreeReturnCode TVar5;
  long lVar6;
  cXObject__21_1030 *pcVar7;
  ushort uVar8;
  
  if (2 < (param->field0_0x0).bparam[0]) {
    this->_vb1168->fError = 9;
    pcVar2 = this->_vb966->__vtable;
    (*(code *)pcVar2->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,9);
    return kError;
  }
  sVar1 = (param->field0_0x0).find5WorstMotives.unused0;
  uVar8 = 0;
  if (sVar1 == 1) {
    uVar8 = elem->fObjectID;
  }
  else {
    if (1 < sVar1) {
      pcVar7 = this->_vb966;
      goto LAB_00230604;
    }
    if (sVar1 != 0) {
      pcVar7 = this->_vb966;
      goto LAB_00230604;
    }
    uVar8 = this->fID;
  }
  pcVar7 = this->_vb966;
LAB_00230604:
  lVar6 = (*(code *)pcVar7->__vtable[1].GetLightingContribution)
                    ((int)&pcVar7->_vb899 + (int)*(short *)&pcVar7->__vtable[1].CanContributeLight,
                     uVar8);
  if (lVar6 == 0) {
    TVar5 = kFalseComplete;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    pOVar3 = this->fModule->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    (*(code *)pOVar3->DoCommand)
              ((int)&this->fModule->__vtable + (int)*(short *)&pOVar3->IsFamilyMemberAwakeAndVisible
               ,uVar8,((param->field0_0x0).distanceTo.flags >> 1 ^ 1) & 1);
                    /* inlined from SCID.h */
    pvVar4 = _dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar6,cXPersonID);
                    /* end of inlined section */
    if (pvVar4 != (void *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pNeighborhood->__vtable[1].GetNumCharacters)
                ((int)&_5Globs_pNeighborhood->__vtable +
                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetHousePath,pvVar4);
    }
                    /* end of inlined section */
    TVar5 = kTrueComplete;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    if ((uVar8 == this->fID && __7TreeSim_sInMainSim != 0) &&
       (TVar5 = kEngaged, ((param->field0_0x0).distanceTo.flags & 1) != 0)) {
      TVar5 = kTrueComplete;
    }
  }
  return TVar5;
}

TreeReturnCode cXObjectImpl::TryIdle(StackElem *elem, XPrimParam *param) {
	StdPrm *var;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  bool bVar3;
  ushort uVar4;
  TreeReturnCode TVar5;
  ushort *puVar6;
  long lVar7;
  
  sVar1 = (param->field0_0x0).find5WorstMotives.unused0;
  if ((sVar1 < 0) || ((short)(ushort)elem->fNumParams <= sVar1)) {
    this->_vb1168->fError = 8;
    pcVar2 = this->_vb966->__vtable;
    (*(code *)pcVar2->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,8);
    TVar5 = kError;
  }
  else {
    puVar6 = GetParams__9StackElem(elem);
    pcVar2 = this->_vb966->__vtable;
    puVar6 = puVar6 + (param->field0_0x0).find5WorstMotives.unused0;
    lVar7 = (*(code *)pcVar2->HasZeroExtent)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->IsFireproof);
    if (lVar7 == 0) {
      *puVar6 = 0;
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->IsChair)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->CanIntersectPeople,
                 0xffffffffffffffff);
      uVar4 = *puVar6;
    }
    else {
      uVar4 = *puVar6;
    }
    if ((short)uVar4 < 0) {
      *puVar6 = 0;
    }
    TVar5 = kTrueComplete;
    if (*puVar6 != 0) {
      bVar3 = AllowIdleOptimization__12cXObjectImpl(this);
      if (bVar3) {
        pcVar2 = this->_vb966->__vtable;
        (*(code *)pcVar2->IsChair)
                  ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->CanIntersectPeople,
                   (short)*puVar6 + -1);
        TVar5 = kEngaged;
      }
      else {
        TVar5 = kEngaged;
        *puVar6 = *puVar6 - 1;
      }
    }
  }
  return TVar5;
}

TreeReturnCode cXObjectImpl::TryUpdate(StackElem *elem, XPrimParam *param) {
	cXObject *obj;
	cXObject *this;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  RoomManager__vtable *pRVar3;
  ushort uVar4;
  cXObject__21_1030 *pcVar5;
  int iVar6;
  RoomManager *pRVar7;
  long lVar8;
  undefined8 uVar9;
  TreeSimImpl__21_3338 *pTVar10;
  undefined4 uVar11;
  
  if ((param->field0_0x0).bparam[0] == 0) {
    pcVar5 = this->_vb966;
    if (pcVar5 != (cXObject__21_1030 *)0x0) goto LAB_00230880;
    pTVar10 = this->_vb1168;
  }
  else if ((param->field0_0x0).bparam[0] == 1) {
    pcVar2 = this->_vb966->__vtable;
    pcVar5 = (cXObject__21_1030 *)
             (*(code *)pcVar2[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight,
                        elem->fObjectID);
    uVar4 = 0x15;
    if (pcVar5 == (cXObject__21_1030 *)0x0) {
      pTVar10 = this->_vb1168;
      uVar11 = 0x15;
      goto LAB_00230978;
    }
LAB_00230880:
    sVar1 = (param->field0_0x0).find5WorstMotives.unused1;
    if (sVar1 == 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      sVar1 = sRam000000c4;
      if (pcVar5 != (cXObject__21_1030 *)0x0) {
        iVar6 = (*(code *)pcVar5->__vtable[1].GetObjectImplementation)
                          ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable[1].AdvanceGraphic
                          );
        sVar1 = *(short *)(iVar6 + 0xc4);
      }
      GlobalDispatch__Fsi(0xf1,(int)sVar1);
      return kTrueComplete;
    }
    if (sVar1 < 2) {
      if (sVar1 == 0) {
        (*(code *)pcVar5->__vtable->RunTree)
                  ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable->IsSpriteVisible,0);
        return kTrueComplete;
      }
      pTVar10 = this->_vb1168;
    }
    else {
      if (sVar1 == 2) {
        lVar8 = (*(code *)pcVar5->__vtable[1].ParseUIString)
                          ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable[1].RunTree);
        if (lVar8 == 0xfffb) {
          return kTrueComplete;
        }
        pRVar7 = GetRoomManager__11RoomManager();
        pRVar3 = pRVar7->__vtable;
        sVar1 = *(short *)&pRVar3->ResolveDiagonal;
        uVar9 = (*(code *)pcVar5->__vtable[1].ParseUIString)
                          ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable[1].RunTree);
        (*(code *)pRVar3->ResolveDiagonal)((int)&pRVar7->__vtable + (int)sVar1,uVar9);
        return kTrueComplete;
      }
      pTVar10 = this->_vb1168;
    }
  }
  else {
    pTVar10 = this->_vb1168;
  }
  uVar4 = 3;
  uVar11 = 3;
LAB_00230978:
  pTVar10->fError = uVar4;
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,uVar11);
  return kError;
}

TreeReturnCode cXObjectImpl::TryGrab(StackElem *elem, XPrimParam *param) {
	cXObject *grab;
	TreeSim *this;
	IBaseSimInstance *pISim;
	TreeSim *this;
	cXObject *pContained;
	TreeSim *this;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  int *piVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  pcVar2 = this->_vb966->__vtable;
  lVar5 = (*(code *)pcVar2[1].GetLightingContribution)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight,
                     elem->fObjectID);
  if (lVar5 != 0) {
    piVar8 = (int *)lVar5;
    lVar5 = (**(code **)(piVar8[1] + 0x10c))
                      ((int)piVar8 + (int)*(short *)(piVar8[1] + 0x108),&this->fLocation,
                       this->fLevel,this->_vb966,0);
    if (lVar5 != 0) {
      (**(code **)(piVar8[1] + 0x114))
                ((int)piVar8 + (int)*(short *)(piVar8[1] + 0x110),&this->fLocation,this->fLevel,
                 this->_vb966,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
                    /* end of inlined section */
      if (this->_vb966->_vb899->m_pEoRPerson == (ESim *)0x0) {
        return kTrueComplete;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
      piVar3 = *(int **)(*piVar8 + 0x14);
                    /* end of inlined section */
      if (piVar3 == (int *)0x0) {
        return kTrueComplete;
      }
      iVar7 = *piVar3;
      sVar1 = *(short *)(iVar7 + 0x18);
      uVar6 = (**(code **)(iVar7 + 0x24))((int)piVar3 + (int)*(short *)(iVar7 + 0x20));
      (**(code **)(iVar7 + 0x1c))((int)piVar3 + (int)sVar1,uVar6 | 0xc0);
      (**(code **)(*piVar3 + 0x14))((int)piVar3 + (int)*(short *)(*piVar3 + 0x10));
      pcVar4 = *(code **)(piVar8[1] + 0x25c);
      iVar7 = (int)piVar8 + (int)*(short *)(piVar8[1] + 600);
      while (lVar5 = (*pcVar4)(iVar7,0), lVar5 != 0) {
        piVar9 = (int *)lVar5;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
        piVar8 = *(int **)(*piVar9 + 0x14);
                    /* end of inlined section */
        if (piVar8 == (int *)0x0) {
          iVar7 = piVar9[1];
        }
        else {
          iVar7 = *piVar8;
          sVar1 = *(short *)(iVar7 + 0x18);
          uVar6 = (**(code **)(*piVar3 + 0x24))((int)piVar3 + (int)*(short *)(*piVar3 + 0x20));
          (**(code **)(iVar7 + 0x1c))((int)piVar8 + (int)sVar1,uVar6 | 0xc0);
          (**(code **)(*piVar8 + 0x14))((int)piVar8 + (int)*(short *)(*piVar8 + 0x10));
          iVar7 = piVar9[1];
        }
        pcVar4 = *(code **)(iVar7 + 0x25c);
        iVar7 = (int)piVar9 + (int)*(short *)(iVar7 + 600);
      }
      return kTrueComplete;
    }
  }
  return kFalseComplete;
}

TreeReturnCode cXObjectImpl::TryTreeBreak(StackElem *elem, XPrimParam *param) {
	StdPrm check;
	
  TreeReturnCode TVar1;
  TreeReturnCode TVar2;
  undefined8 unaff_retaddr;
  ushort check;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  TVar1 = InterpValue__12cXObjectImplssPPsPPfPs
                    (this,(param->field0_0x0).bparam[1],(param->field0_0x0).bparam[0],(ushort **)0x0
                     ,(float **)0x0,&check);
  TVar2 = kTrueComplete;
  if (TVar1 == kError) {
    TVar2 = kError;
  }
  return TVar2;
}

TreeReturnCode cXObjectImpl::TryRandom(StackElem *elem, XPrimParam *param) {
	RandomParam rand;
	StdPrm *plhs;
	StdPrm range;
	float *pflhs;
	unsigned int lim;
	unsigned int lim;
	
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  cXObject__21_1030__vtable *pcVar5;
  ulong *puVar6;
  ushort uVar7;
  TreeReturnCode TVar8;
  int iVar9;
  ulong in_v0;
  TreeSimImpl__21_3338 *pTVar10;
  undefined4 uVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  RandomParam rand;
  ushort range;
  ushort *plhs;
  float *pflhs;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (int)unaff_s1;
  uStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  local_30 = (int)unaff_s0;
  uStack_2c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  pcVar1 = &(param->field0_0x0).expression.rhsOwner;
  uVar3 = (uint)pcVar1 & 7;
  uVar4 = (uint)param & 7;
  rand = (RandomParam)
         ((*(long *)(pcVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)param - uVar4) >> uVar4 * 8);
  puVar2 = (undefined *)((int)&rand.rangeOwner + 1);
  uVar3 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar3);
  *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)rand >> (7 - uVar3) * 8;
  TVar8 = InterpValue__12cXObjectImplssPPsPPfPs
                    (this,rand.destOwner,rand.destData,&plhs,&pflhs,(ushort *)0x0);
  if (TVar8 != kError) {
    TVar8 = InterpValue__12cXObjectImplssPPsPPfPs
                      (this,rand.rangeOwner,rand.rangeData,(ushort **)0x0,(float **)0x0,&range);
    if (TVar8 != kError) {
      if (range == 0) {
        pTVar10 = this->_vb1168;
        uVar7 = 4;
        uVar11 = 4;
      }
      else {
        if (plhs != (ushort *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
          iVar9 = GetNextRandomNumber__Fv();
          if ((short)range == 0) {
            trap(7);
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
                    /* end of inlined section */
          *plhs = (ushort)(iVar9 % (int)(short)range);
          return kTrueComplete;
        }
        uVar7 = 0x13;
        if (pflhs != (float *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
          iVar9 = GetNextRandomNumber__Fv();
          if (range == 0) {
            trap(7);
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
                    /* end of inlined section */
          *pflhs = (float)(iVar9 % (int)(short)range);
          return kTrueComplete;
        }
        pTVar10 = this->_vb1168;
        uVar11 = 0x13;
      }
      pTVar10->fError = uVar7;
      pcVar5 = this->_vb966->__vtable;
      (*(code *)pcVar5->SimEnabled)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->SimIndependent,uVar11);
    }
  }
  return kError;
}

TreeReturnCode cXObjectImpl::TryDistanceTo(StackElem *elem, XPrimParam *param) {
	DistanceToParam distanceTo;
	StdPrm fromID;
	cXObject *from;
	cXObject *to;
	
  int iVar1;
  cXObject__21_1030__vtable *pcVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  ushort uVar6;
  ushort dataField;
  uint in_v0_lo;
  TreeReturnCode TVar7;
  long lVar8;
  long lVar9;
  TreeSimImpl__21_3338 *pTVar10;
  undefined4 uVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar12;
  DistanceToParam distanceTo;
  ushort fromID;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (int)unaff_s2;
  uStack_1c = (int)((ulong)unaff_s2 >> 0x20);
  local_30 = (int)unaff_s1;
  uStack_2c = (int)((ulong)unaff_s1 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_40 = (int)unaff_s0;
  uStack_3c = (int)((ulong)unaff_s0 >> 0x20);
  puVar5 = &(param->field0_0x0).distanceTo.fromOwner;
  uVar3 = (uint)puVar5 & 3;
  uVar4 = (uint)param & 3;
  distanceTo._0_4_ =
       (*(int *)(puVar5 + -uVar3) << (3 - uVar3) * 8 | in_v0_lo & 0xffffffffU >> (uVar3 + 1) * 8) &
       -1 << (4 - uVar4) * 8 | *(uint *)((int)param - uVar4) >> uVar4 * 8;
  distanceTo.fromData = (param->field0_0x0).bparam[2];
  uVar3 = (uint)&distanceTo.fromOwner & 3;
  puVar5 = &distanceTo.fromOwner + -uVar3;
  *(uint *)puVar5 = *(uint *)puVar5 & -1 << (uVar3 + 1) * 8 | distanceTo._0_4_ >> (3 - uVar3) * 8;
  if (distanceTo.destTemp < 8) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
    distanceTo.fromOwner = (uchar)(distanceTo._0_4_ >> 0x18);
    uVar6 = (ushort)distanceTo.fromOwner;
    if ((distanceTo._0_4_ & 0x10000) == 0) {
      uVar6 = 3;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
    dataField = distanceTo.fromData;
    if ((distanceTo._0_4_ & 0x10000) == 0) {
      dataField = 0xb;
    }
                    /* end of inlined section */
    TVar7 = InterpValue__12cXObjectImplssPPsPPfPs
                      (this,uVar6,dataField,(ushort **)0x0,(float **)0x0,&fromID);
    if (TVar7 == kError) {
      return kError;
    }
    pcVar2 = this->_vb966->__vtable;
    lVar8 = (*(code *)pcVar2[1].GetLightingContribution)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight,
                       fromID);
    if (lVar8 == 0) {
      pTVar10 = this->_vb1168;
    }
    else {
      pcVar2 = this->_vb966->__vtable;
      lVar9 = (*(code *)pcVar2[1].GetLightingContribution)
                        ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight,
                         elem->fObjectID);
      if (lVar9 != 0) {
        iVar1 = *(int *)((int)lVar8 + 4);
        fVar12 = (float)(**(code **)(iVar1 + 0x24))((int)lVar8 + (int)*(short *)(iVar1 + 0x20));
        this->fTemp[(short)distanceTo.destTemp] = (ushort)(int)fVar12;
        return kTrueComplete;
      }
      pTVar10 = this->_vb1168;
    }
    uVar6 = 0x17;
    uVar11 = 0x17;
  }
  else {
    pTVar10 = this->_vb1168;
    uVar6 = 2;
    uVar11 = 2;
  }
  pTVar10->fError = uVar6;
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,uVar11);
  return kError;
}

TreeReturnCode cXObjectImpl::TryDirectionTo(StackElem *elem, XPrimParam *param) {
	DirectionToParam directionTo;
	StdPrm *plhs;
	StdPrm fromID;
	cXObject *from;
	cXObject *to;
	cXObject *this;
	cXObject *this;
	Int y;
	Int x;
	Int dir;
	Int yinc;
	Int xinc;
	
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  cXObject__21_1030__vtable *pcVar6;
  IBaseSimInstance *pIVar7;
  EGlobal__vtable *pEVar8;
  IBaseSimInstance__vtable *pIVar9;
  ulong *puVar10;
  cXPerson__150_1300 **ppcVar11;
  ushort uVar12;
  TreeReturnCode TVar13;
  int iVar14;
  ulong in_v0;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  TreeSimImpl__21_3338 *pTVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  DirectionToParam directionTo;
  ushort fromID;
  ushort *plhs;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (int)unaff_s2;
  uStack_1c = (int)((ulong)unaff_s2 >> 0x20);
  local_30 = (int)unaff_s1;
  uStack_2c = (int)((ulong)unaff_s1 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_40 = (int)unaff_s0;
  uStack_3c = (int)((ulong)unaff_s0 >> 0x20);
  pcVar1 = &(param->field0_0x0).expression.rhsOwner;
  uVar3 = (uint)pcVar1 & 7;
  uVar4 = (uint)param & 7;
  directionTo = (DirectionToParam)
                ((*(long *)(pcVar1 + -uVar3) << (7 - uVar3) * 8 |
                 in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                *(ulong *)((int)param - uVar4) >> uVar4 * 8);
  puVar2 = (undefined *)((int)&directionTo.fromData + 1);
  uVar3 = (uint)puVar2 & 7;
  puVar10 = (ulong *)(puVar2 + -uVar3);
  *puVar10 = *puVar10 & -1L << (uVar3 + 1) * 8 | (ulong)directionTo >> (7 - uVar3) * 8;
  TVar13 = InterpValue__12cXObjectImplssPPsPPfPs
                     (this,directionTo.destOwner,directionTo.destData,&plhs,(float **)0x0,
                      (ushort *)0x0);
  if (TVar13 != kError) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
    uVar12 = (ushort)directionTo.fromOwner;
    if (((ulong)directionTo & 0x100000000) == 0) {
      uVar12 = 3;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
    if (((ulong)directionTo & 0x100000000) == 0) {
      directionTo.fromData = 0xb;
    }
                    /* end of inlined section */
    TVar13 = InterpValue__12cXObjectImplssPPsPPfPs
                       (this,uVar12,directionTo.fromData,(ushort **)0x0,(float **)0x0,&fromID);
    if (TVar13 != kError) {
      pcVar6 = this->_vb966->__vtable;
      lVar15 = (*(code *)pcVar6[1].GetLightingContribution)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar6[1].CanContributeLight,
                          fromID);
      uVar12 = 0x17;
      if (lVar15 == 0) {
        pTVar18 = this->_vb1168;
        uVar20 = 0x17;
      }
      else {
        pcVar6 = this->_vb966->__vtable;
        lVar16 = (*(code *)pcVar6[1].GetLightingContribution)
                           ((int)&this->_vb966->_vb899 +
                            (int)*(short *)&pcVar6[1].CanContributeLight,elem->fObjectID);
        uVar12 = 0x15;
        if (lVar16 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
          if (lVar15 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)((int)lVar15 + 4);
            iVar14 = (**(code **)(iVar14 + 0x454))((int)lVar15 + (int)*(short *)(iVar14 + 0x450));
          }
          if (lVar16 == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = *(int *)((int)lVar16 + 4);
            iVar22 = (**(code **)(iVar22 + 0x454))((int)lVar16 + (int)*(short *)(iVar22 + 0x450));
          }
          iVar21 = *(int *)(iVar22 + 0xcc) - *(int *)(iVar14 + 0xcc);
          iVar22 = *(int *)(iVar22 + 200) - *(int *)(iVar14 + 200);
          iVar14 = -iVar21;
          if (-1 < iVar21) {
            iVar14 = iVar21;
          }
          iVar19 = -iVar22;
          if (-1 < iVar22) {
            iVar19 = iVar22;
          }
          uVar12 = 4;
          if (iVar19 <= iVar14 << 1) {
            uVar12 = 3;
            if (iVar19 << 1 < iVar14) {
              uVar12 = 2;
            }
          }
          if (iVar21 < 0) {
            if (uVar12 == 2) {
              uVar12 = 6;
            }
            else if (uVar12 == 3) {
              uVar12 = 5;
            }
          }
          if (iVar22 < 0) {
            if (uVar12 == 4) {
              uVar12 = 0;
            }
            else if (uVar12 < 5) {
              if (uVar12 == 3) {
                uVar12 = 1;
              }
            }
            else if (uVar12 == 5) {
              uVar12 = 7;
            }
          }
          *plhs = uVar12;
          *plhs = *plhs + 8;
          uVar12 = *plhs;
          iVar14 = (short)uVar12 + 7;
          if (-1 < (short)uVar12) {
            iVar14 = (int)(short)uVar12;
          }
          *plhs = uVar12 + (short)(iVar14 >> 3) * -8;
          pIVar7 = this->_vb966->_vb899->m_pEoRInstance;
          if (pIVar7 == (IBaseSimInstance *)0x0) {
            return kTrueComplete;
          }
          lVar15 = (*(code *)pIVar7->__vtable[1].GetSimInstance)
                             ((int)&pIVar7->__vtable +
                              (int)*(short *)&pIVar7->__vtable[1].GetCursFlags);
          if (lVar15 == 0) {
            return kTrueComplete;
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          pEVar8 = _5Globs_pEORGlobals->__vtable;
          pIVar7 = this->_vb966->_vb899->m_pEoRInstance;
          sVar5 = *(short *)&pEVar8->AllocInstance;
          pIVar9 = pIVar7->__vtable;
          ppcVar11 = _5Globs_pEORGlobals->_pSelectedSims;
          uVar17 = (*(code *)pIVar9[1].GetSimInstance)
                             ((int)&pIVar7->__vtable + (int)*(short *)&pIVar9[1].GetCursFlags);
          (*(code *)pEVar8->AllocPersonInstance)((int)ppcVar11 + sVar5 + -0x24,uVar17,0x20);
          return kTrueComplete;
        }
        pTVar18 = this->_vb1168;
        uVar20 = 0x15;
      }
      pTVar18->fError = uVar12;
      pcVar6 = this->_vb966->__vtable;
      (*(code *)pcVar6->SimEnabled)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar6->SimIndependent,uVar20);
    }
  }
  return kError;
}

TreeReturnCode cXObjectImpl::TryNotifyStackObject(StackElem *elem, XPrimParam *param) {
	cXObject *stackObj;
	StackElem *objElem;
	BehaviorNode *node;
	BehaviorNode *this;
	BehaviorNode *this;
	
  cXObject__21_1030__vtable *pcVar1;
  int iVar2;
  ushort treeID;
  TreeReturnCode TVar3;
  BehaviorNode *pBVar4;
  ushort *puVar5;
  long lVar6;
  StackElem *this_00;
  int *piVar7;
  
  pcVar1 = this->_vb966->__vtable;
  lVar6 = (*(code *)pcVar1[1].GetLightingContribution)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CanContributeLight,
                     elem->fObjectID);
  if (lVar6 == 0) {
    this->_vb1168->fError = 0x15;
    pcVar1 = this->_vb966->__vtable;
    (*(code *)pcVar1->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->SimIndependent,0x15);
    TVar3 = kError;
  }
  else {
    piVar7 = (int *)lVar6;
    iVar2 = *(int *)(*piVar7 + 0x1c);
    lVar6 = (**(code **)(iVar2 + 0x4c))(*piVar7 + (int)*(short *)(iVar2 + 0x48));
    TVar3 = kTrueComplete;
    if (lVar6 != 0) {
      this_00 = (StackElem *)lVar6;
      treeID = GetTreeID__C9StackElem(this_00);
      pBVar4 = GetNodeRef__8Behaviorss(this_00->fBehavior,treeID,this_00->fNodeNum);
      if (pBVar4 == (BehaviorNode *)0x0) {
        TVar3 = kTrueComplete;
      }
      else {
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
        if ((pBVar4->_treePrimID & 0x7fff) == 0) {
          puVar5 = GetParams__9StackElem(this_00);
          *puVar5 = 0;
          (**(code **)(piVar7[1] + 500))((int)piVar7 + (int)*(short *)(piVar7[1] + 0x1f0),0);
          TVar3 = kTrueComplete;
        }
        else {
                    /* end of inlined section */
          TVar3 = kTrueComplete;
          if ((pBVar4->_treePrimID & 0x7fff) == 0x11) {
            puVar5 = GetParams__9StackElem(this_00);
            *puVar5 = 0;
            TVar3 = kTrueComplete;
          }
        }
      }
    }
  }
  return TVar3;
}

bool cXObjectImpl::Simulate(SInt32 ticks) {
	bool engaged;
	SpriteSlot *i;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  bool bVar3;
  SpriteSlot *this_00;
  
  bVar2 = Simulate__11TreeSimImpli(this->_vb1168,ticks);
  if (bVar2) {
    if (this->fData[0x19] != 0) {
      this->fData[0x19] = this->fData[0x19] - 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    this_00 = (this->fSpriteSlots).start;
                    /* end of inlined section */
    if (this_00 != (this->fSpriteSlots).finish) {
      do {
        bVar3 = Tick__10SpriteSlot(this_00);
        if (bVar3) {
          pcVar1 = this->_vb966->__vtable;
          (*(code *)pcVar1->RunTree)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->IsSpriteVisible,0);
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        this_00 = this_00 + 1;
      } while (this_00 != (this->fSpriteSlots).finish);
    }
  }
  return bVar2;
}

TreeReturnCode cXObjectImpl::TryElement(StackElem *elem, BehaviorNode *node) {
	TreeReturnCode result;
	XPrimParam *param;
	BehaviorNode *this;
	
  cXObject__21_1030__vtable *pcVar1;
  TreeReturnCode TVar2;
  ushort *expression;
  
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
  expression = node->param;
  switch(node->_treePrimID & 0x7fff) {
  case 0:
    TVar2 = TryIdle__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 1:
    TVar2 = TryGenericSimCall__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 2:
    TVar2 = TryExpression__12cXObjectImplP15ExpressionParam(this,(ExpressionParam *)expression);
    break;
  default:
    this->_vb1168->fError = 5;
    pcVar1 = this->_vb966->__vtable;
    (*(code *)pcVar1->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->SimIndependent,5);
    TVar2 = kError;
    break;
  case 4:
    TVar2 = TryGrab__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 5:
    TVar2 = TryDrop__12cXObjectImpl(this);
    break;
  case 7:
    TVar2 = TryUpdate__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 8:
    TVar2 = TryRandom__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 9:
    TVar2 = TryBurn__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 10:
    TVar2 = TryTutorial__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 0xb:
    TVar2 = TryDistanceTo__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0xc:
    TVar2 = TryDirectionTo__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0xd:
    TVar2 = TryPushAction__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0xe:
    TVar2 = TryFindFunctionalObject__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0xf:
    TVar2 = TryTreeBreak__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression)
    ;
    break;
  case 0x10:
    TVar2 = TryFindGoodLocation__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x12:
    TVar2 = TryKillObject__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x13:
    TVar2 = TryMakeNewCharacter__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x14:
    TVar2 = TryCallFunctionalTree__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x15:
    TVar2 = TryShowString__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x17:
    TVar2 = TryPlaySound__12cXObjectImplP9StackElemP14PlaySoundParam
                      (this,elem,(PlaySoundParam *)expression);
    break;
  case 0x18:
    TVar2 = TryRelationship__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x19:
    TVar2 = TryBudget__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 0x1a:
    TVar2 = TryRelationship2__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x1c:
    TVar2 = TryCallNamedTree__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x1f:
    TVar2 = TrySetToNext__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression)
    ;
    break;
  case 0x20:
    TVar2 = TryTestObjectType__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x21:
    TVar2 = TryFind5WorstMotives__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x22:
    TVar2 = TryUIEffect__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 0x23:
    TVar2 = TryUserEvent__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression)
    ;
    break;
  case 0x24:
    TVar2 = TryDialog__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 0x29:
    TVar2 = TrySetBalloon__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x2a:
    TVar2 = TryCreateObject__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x2b:
    TVar2 = TryDropOnto__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 0x2e:
    TVar2 = TrySnap__12cXObjectImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)expression);
    break;
  case 0x30:
    TVar2 = TryKillSounds__12cXObjectImplP9StackElemP15KillSoundsParam
                      (this,elem,(KillSoundsParam *)expression);
    break;
  case 0x31:
    TVar2 = TryNotifyStackObject__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x32:
    TVar2 = TryMakeActionString__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
    break;
  case 0x33:
    TVar2 = TryPreloadObject__12cXObjectImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)expression);
  }
  return TVar2;
}

TreeReturnCode cXObjectImpl::TryKillSounds(StackElem *elem, KillSoundsParam *param) {
	SInt16 sourceID;
	StringBuf255 message;
	cXObject *source;
	
  ushort uVar1;
  ObjectModule__vtable *pOVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  StackString_256_ message;
  StringBuffer SStack_150;
  char acStack_148 [264];
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
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (param->useStackObject == 0) {
    uVar1 = this->fID;
  }
  else {
    uVar1 = elem->fObjectID;
  }
                    /* end of inlined section */
  QuietBySourceID__12cSoundPlayeri(_5Globs_pSound,(int)(short)uVar1);
  if (_gLogSounds != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    __12StringBufferPcUi(&message.field0_0x0,(char *)((uint)&message | 8),0x100);
                    /* end of inlined section */
    LogSoundHeader__FP9StackElem(elem);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    __12StringBufferPcUi(&SStack_150,acStack_148,0x100);
    append__12StringBufferPCci(&SStack_150," Killing Source: ",-1);
    copy__12StringBufferRC12StringBuffer(&message.field0_0x0,&SStack_150);
                    /* end of inlined section */
    pOVar2 = this->fModule->__vtable;
    lVar5 = (*(code *)pOVar2->AdvanceSelectedPerson)
                      ((int)&this->fModule->__vtable + (int)*(short *)&pOVar2->SetSelectedPerson,
                       uVar1);
    if (lVar5 == 0) {
      append__12StringBufferPCci(&message.field0_0x0," none ",-1);
    }
    else {
      iVar3 = *(int *)((int)lVar5 + 4);
      pcVar4 = (char *)(**(code **)(iVar3 + 0x43c))((int)lVar5 + (int)*(short *)(iVar3 + 0x438));
      append__12StringBufferPCci(&message.field0_0x0,pcVar4,-1);
    }
    pcVar4 = c_str__C12StringBuffer(&message.field0_0x0);
    LogSoundEvent__FPCc(pcVar4);
  }
  return kTrueComplete;
}

TreeReturnCode cXObjectImpl::TryPlaySound(StackElem *elem, PlaySoundParam *param) {
	SInt16 sourceID;
	SInt16 soundID;
	iResFile *file1;
	iResFile *file2;
	cSoundPlayer *sndPlayer;
	bool logSounds;
	StringBuf255 logMsg;
	SoundInfo info;
	PlaySoundParam *this;
	PlaySoundParam *this;
	
  ushort uVar1;
  int iVar2;
  cSoundPlayer *this_00;
  bool bVar3;
  iResFile__6_5027 *file;
  iResFile__6_5027 *file_00;
  char *s;
  TreeReturnCode TVar4;
  undefined8 unaff_s0;
  ushort sourceID;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  StackString_256_ logMsg;
  SoundInfo info;
  char acStack_188 [264];
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
  
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  uVar1 = param->soundID;
  if (param->flags == 0xff) {
    sourceID = this->fID;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    if ((param->flags >> 1 & 1) == 0) {
      sourceID = this->fID;
    }
    else {
      sourceID = elem->fObjectID;
    }
  }
                    /* end of inlined section */
  file = GetPrivFile__8Behavior(elem->fBehavior);
  file_00 = GetGlobFile__8Behavior(elem->fBehavior);
  this_00 = _5Globs_pSound;
  iVar2 = _gLogSounds;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  __12StringBufferPcUi(&logMsg.field0_0x0,(char *)((uint)&logMsg | 8),0x100);
                    /* end of inlined section */
  if (iVar2 != 0) {
    LogSoundHeader__FP9StackElem(elem);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    __12StringBufferPcUi((StringBuffer *)&info,acStack_188,0x100);
    append__12StringBufferPCci((StringBuffer *)&info," Sound: id ",-1);
    copy__12StringBufferRC12StringBuffer(&logMsg.field0_0x0,(StringBuffer *)&info);
                    /* end of inlined section */
    appendNum__12StringBufferi(&logMsg.field0_0x0,(int)(short)uVar1);
    append__12StringBufferPCci(&logMsg.field0_0x0,", ",-1);
                    /* end of inlined section */
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/SoundInfo.h */
  info.fID = 0;
  info.fEventMapping = (EventMapping *)0x0;
                    /* end of inlined section */
  bVar3 = LoadInfo__9SoundInfoP8iResFilei(&info,file,(int)(short)uVar1);
  if ((bVar3) || (bVar3 = LoadInfo__9SoundInfoP8iResFilei(&info,file_00,(int)(short)uVar1), bVar3))
  {
    TVar4 = PlayObjectSnd__12cSoundPlayerPC9SoundInfos(this_00,&info,sourceID);
  }
  else {
    if (iVar2 != 0) {
      append__12StringBufferPCci(&logMsg.field0_0x0,"***name not found***",-1);
      s = c_str__C12StringBuffer(&logMsg.field0_0x0);
      LogSoundEvent__FPCc(s);
    }
    TVar4 = kTrueComplete;
  }
  return TVar4;
}

bool cXObjectImpl::GosubObjectTree(cXObject *other, StdPrm *stck, SInt16 treeID, bool hasIcon) {
  cXObject__21_1030__vtable *pcVar1;
  TreeSim *pTVar2;
  TreeSim__vtable *pTVar3;
  bool bVar4;
  undefined2 uVar5;
  Behavior *pTransfer;
  int iVar6;
  
  pcVar1 = this->_vb966->__vtable;
  (*(code *)pcVar1->GetNext)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetObjectFromID);
  pTransfer = (Behavior *)
              (*(code *)other->__vtable[1].SetData)
                        ((int)&other->_vb899 + (int)*(short *)&other->__vtable[1].IsOccupied);
  bVar4 = Gosub__11TreeSimImplP8BehaviorPCss(this->_vb1168,pTransfer,stck,treeID);
  if (bVar4) {
    pTVar2 = this->_vb1168->_vb899;
    pTVar3 = pTVar2->__vtable;
    iVar6 = (**(code **)(pTVar3 + 1))
                      ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar3->GetISimInstance);
    uVar5 = (*(code *)other->__vtable[1].UserCanPlace)
                      ((int)&other->_vb899 + (int)*(short *)&other->__vtable[1].IsPartOfMe);
    *(undefined2 *)(iVar6 + 4) = uVar5;
  }
  return bVar4;
}

bool cXObjectImpl::RunTree(Behavior *beh, SInt16 stackObjectID, char *treeName, StdPrm *locals) {
	SInt16 treeID;
	
  bool bVar1;
  ushort treeID;
  
  treeID = GetTreeIDByName__8BehaviorPCc(beh,treeName);
  if (treeID == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = RunCheckTree__11TreeSimImplP8BehaviorssPs(this->_vb1168,beh,stackObjectID,treeID,locals)
    ;
  }
  return bVar1;
}

TreeReturnCode cXObjectImpl::TryExpression(ExpressionParam *expression) {
	TreeReturnCode result;
	StdPrm *plhs;
	float *pflhs;
	StdPrm lhs;
	StdPrm rhs;
	bool writingToLHS;
	
  char cVar1;
  cXObject__21_1030__vtable *pcVar2;
  bool bVar3;
  ushort uVar4;
  TreeReturnCode TVar5;
  TreeSimImpl__21_3338 *pTVar6;
  undefined8 uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar8;
  ushort rhs;
  ushort lhs;
  ushort *plhs;
  float *pflhs;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  bVar3 = false;
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  TVar5 = InterpValue__12cXObjectImplssPPsPPfPs
                    (this,(short)expression->rhsOwner,expression->rhsData,(ushort **)0x0,
                     (float **)0x0,&rhs);
  if (TVar5 == kError) {
    return kError;
  }
  TVar5 = InterpValue__12cXObjectImplssPPsPPfPs
                    (this,(short)expression->lhsOwner,expression->lhsData,
                     (ushort **)((uint)&rhs | 4),(float **)((uint)&rhs | 8),
                     (ushort *)((uint)&rhs | 2));
  if (TVar5 == kError) {
    return kError;
  }
  switch(expression->opType) {
  case '\0':
    goto LAB_00231d50;
  case '\x01':
    goto LAB_00231d38;
  case '\x02':
    TVar5 = (TreeReturnCode)((long)(int)(short)lhs == (long)(short)rhs);
    break;
  case '\x03':
    if (plhs == (ushort *)0x0) {
      if (pflhs == (float *)0x0) {
        pTVar6 = this->_vb1168;
        uVar4 = 0x13;
        uVar7 = 0x13;
        goto LAB_00232068;
      }
      fVar8 = *pflhs + (float)(int)(short)rhs;
LAB_00231f38:
      *pflhs = fVar8;
    }
    else {
      *plhs = *plhs + rhs;
    }
    goto LAB_00231f3c;
  case '\x04':
    if (plhs == (ushort *)0x0) {
      if (pflhs == (float *)0x0) {
        pTVar6 = this->_vb1168;
        uVar4 = 0x13;
        uVar7 = 0x13;
        goto LAB_00232068;
      }
      fVar8 = *pflhs - (float)(int)(short)rhs;
      goto LAB_00231f38;
    }
    *plhs = *plhs - rhs;
    goto LAB_00231f3c;
  case '\x05':
    if (plhs == (ushort *)0x0) {
      if (pflhs == (float *)0x0) {
        pTVar6 = this->_vb1168;
        uVar4 = 0x13;
        uVar7 = 0x13;
        goto LAB_00232068;
      }
      *pflhs = (float)(int)(short)rhs;
    }
    else {
      *plhs = rhs;
    }
    goto LAB_00231f3c;
  case '\x06':
    if (plhs == (ushort *)0x0) {
      if (pflhs == (float *)0x0) {
        pTVar6 = this->_vb1168;
        uVar4 = 0x13;
        uVar7 = 0x13;
        goto LAB_00232068;
      }
      fVar8 = *pflhs * (float)(int)(short)rhs;
      goto LAB_00231f38;
    }
    *plhs = *plhs * rhs;
    goto LAB_00231f3c;
  case '\a':
    if (rhs == 0) {
      pTVar6 = this->_vb1168;
      uVar4 = 0x26;
      uVar7 = 0x26;
      goto LAB_00232068;
    }
    if (plhs == (ushort *)0x0) {
      if (pflhs == (float *)0x0) {
        pTVar6 = this->_vb1168;
        uVar4 = 0x13;
        uVar7 = 0x13;
        goto LAB_00232068;
      }
      fVar8 = *pflhs / (float)(int)(short)rhs;
      goto LAB_00231f38;
    }
    if (rhs == 0) {
      trap(7);
    }
    *plhs = (short)*plhs / (short)rhs;
LAB_00231f3c:
    TVar5 = kTrueComplete;
    bVar3 = true;
    break;
  case '\b':
    if (0x10 < (short)rhs) {
      pTVar6 = this->_vb1168;
      uVar4 = 0xd;
      uVar7 = 0xd;
      goto LAB_00232068;
    }
    TVar5 = (int)(short)lhs >> ((int)(short)rhs - 1U & 0x1f) & 1;
    break;
  case '\t':
    if ((short)rhs < 0x11) {
      if (plhs != (ushort *)0x0) {
        TVar5 = kTrueComplete;
        bVar3 = true;
        *plhs = *plhs | (ushort)(1 << ((int)(short)rhs - 1U & 0x1f));
        break;
      }
      pTVar6 = this->_vb1168;
      uVar4 = 0x13;
      uVar7 = 0x13;
    }
    else {
      pTVar6 = this->_vb1168;
      uVar4 = 0xd;
      uVar7 = 0xd;
    }
    goto LAB_00232068;
  case '\n':
    if ((short)rhs < 0x11) {
      if (plhs != (ushort *)0x0) {
        TVar5 = kTrueComplete;
        *plhs = *plhs & ~(ushort)(1 << ((int)(short)rhs - 1U & 0x1f));
        break;
      }
      pTVar6 = this->_vb1168;
      uVar4 = 0x13;
      uVar7 = 0x13;
    }
    else {
      pTVar6 = this->_vb1168;
      uVar4 = 0xd;
      uVar7 = 0xd;
    }
    goto LAB_00232068;
  case '\v':
    if (plhs == (ushort *)0x0) {
      if (pflhs == (float *)0x0) {
        pTVar6 = this->_vb1168;
        uVar4 = 0x13;
        uVar7 = 0x13;
        goto LAB_00232068;
      }
      *pflhs = *pflhs + 1.0;
      lhs = _pGifTag0;
    }
    else {
      *plhs = *plhs + 1;
      lhs = *plhs;
    }
    bVar3 = true;
LAB_00231d38:
    TVar5 = (TreeReturnCode)((long)(int)(short)lhs < (long)(short)rhs);
    break;
  case '\f':
    uVar4 = 0x13;
    if (plhs == (ushort *)0x0) {
      pTVar6 = this->_vb1168;
      uVar7 = 0x13;
    }
    else {
      uVar4 = 0x26;
      if (rhs != 0) {
        if ((short)*plhs < 0) {
          *plhs = -*plhs;
        }
        if ((short)rhs < 0) {
          rhs = -rhs;
        }
        TVar5 = kTrueComplete;
        bVar3 = true;
        if (rhs == 0) {
          trap(7);
        }
        *plhs = (short)*plhs % (short)rhs;
        break;
      }
      pTVar6 = this->_vb1168;
      uVar7 = 0x26;
    }
    goto LAB_00232068;
  case '\r':
    uVar4 = 0x13;
    if (plhs == (ushort *)0x0) {
      pTVar6 = this->_vb1168;
      uVar7 = 0x13;
      goto LAB_00232068;
    }
    TVar5 = kTrueComplete;
    bVar3 = true;
    *plhs = *plhs & rhs;
    break;
  case '\x0e':
    TVar5 = (long)(int)(short)lhs < (long)(short)rhs ^ 1;
    break;
  case '\x0f':
    TVar5 = (long)(short)rhs < (long)(int)(short)lhs ^ 1;
    break;
  case '\x10':
    TVar5 = (TreeReturnCode)((long)(int)(short)lhs != (long)(short)rhs);
    break;
  case '\x11':
    if (plhs == (ushort *)0x0) {
      if (pflhs == (float *)0x0) {
        pTVar6 = this->_vb1168;
        uVar4 = 0x13;
        uVar7 = 0x13;
        goto LAB_00232068;
      }
      *pflhs = *pflhs - 1.0;
      lhs = _pGifTag0;
    }
    else {
      *plhs = *plhs - 1;
      lhs = *plhs;
    }
    bVar3 = true;
LAB_00231d50:
    TVar5 = (TreeReturnCode)((long)(short)rhs < (long)(int)(short)lhs);
    break;
  default:
    pTVar6 = this->_vb1168;
    uVar4 = 1;
    uVar7 = 1;
LAB_00232068:
    pTVar6->fError = uVar4;
    pcVar2 = this->_vb966->__vtable;
    (*(code *)pcVar2->SimEnabled)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SimIndependent,uVar7);
    return kError;
  }
  if ((((bVar3) && (cVar1 = expression->lhsOwner, '\r' < cVar1)) &&
      ((cVar1 < '\x10' || (cVar1 == '\x11')))) && (pflhs != (float *)0x0)) {
    if (-100.0 <= *pflhs) {
      if (100.0 < *pflhs) {
        *pflhs = 100.0;
      }
    }
    else {
      *pflhs = -100.0;
    }
  }
  return TVar5;
}

static int fround(float f) {
  if (f < 0.0) {
    return (int)(f - 0.5);
  }
  return (int)(f + 0.5);
}

TreeReturnCode cXObjectImpl::InterpValue(StdPrm ownerField, StdPrm dataField, StdPrm **dataRef, float **floatRef, StdPrm *pResultValue) {
	StdPrm data;
	StdPrm temp;
	StdPrm *ptemp;
	cXObjectImpl *obj;
	cXPersonImpl *person;
	StdPrm dataField2;
	bool writing;
	StdPrm careerId;
	StdPrm jobLevel;
	Career *career;
	StdPrm index;
	SInt16 id;
	Int index;
	BehaviorConstants *bc;
	BehaviorConstants *this;
	short unsigned int roomID;
	Room *r;
	cXObjectImpl *ptr;
	Int personDataIndex;
	Int personDataIndex;
	cXObjectImpl *ptr;
	Int personDataIndex;
	Int personDataIndex;
	cXObject *obj;
	cXObject *ptr;
	Int personDataIndex;
	Int personDataIndex;
	Neighbor *n;
	Neighbor *this;
	cXObject *obj;
	cXPersonImpl *person;
	cXObject *ptr;
	Int personDataIndex;
	Int personDataIndex;
	TTabScratchEntry *entry;
	TTabScratchEntry *this;
	TTabScratchEntry *this;
	Int motiveNum;
	TTabScratchEntry *entry;
	TTabScratchEntry *this;
	TTabScratchEntry *this;
	Int motiveNum;
	TTabScratchEntry *entry;
	TTabScratchEntry *this;
	TTabScratchEntry *this;
	Int motiveNum;
	ObjectSlot *slot;
	ObjectSlot *slot;
	cXObject *obj;
	cXPerson *person;
	cXObject *ptr;
	cXObject *obj;
	cXPerson *person;
	cXObject *ptr;
	cXPerson *person;
	cXObjectImpl *ptr;
	Neighbor *n;
	Neighbor *this;
	Neighbor *this;
	
  ushort uVar1;
  ushort uVar2;
  Careers__vtable *pCVar3;
  ObjectModule__vtable *pOVar4;
  cXObject__21_1030 *pcVar5;
  int iVar6;
  Neighborhood *pNVar7;
  Neighborhood__vtable *pNVar8;
  TreeSim__vtable *pTVar9;
  cXObject__21_1030__vtable *pcVar10;
  Neighborhood__vtable **ppNVar11;
  TTabScratchEntry *pTVar12;
  Careers *pCVar13;
  bool bVar14;
  short sVar15;
  int *piVar16;
  BehaviorConstants *pBVar17;
  RoomManager *pRVar18;
  void *pvVar19;
  float *pfVar20;
  ObjSelector *pOVar21;
  ushort *puVar22;
  code *pcVar23;
  StackElem *pSVar24;
  int iVar25;
  TreeTableAd *pTVar26;
  long lVar27;
  TreeSimImpl__21_3338 *pTVar28;
  ObjectModule *pOVar29;
  TreeSim *pTVar30;
  undefined4 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  ushort uVar34;
  undefined **ppuVar35;
  TreeSim **ppTVar36;
  undefined8 unaff_s0;
  long lVar37;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar38;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar40;
  ushort temp;
  ushort data;
  ushort id;
  ushort *ptemp;
  int index;
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
  ulong uVar39;
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  bVar14 = dataRef != (ushort **)0x0;
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  iVar38 = (int)(short)dataField;
  uVar39 = (ulong)iVar38;
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (dataRef == (ushort **)0x0) {
    dataRef = &ptemp;
    ptemp = &temp;
  }
  *dataRef = (ushort *)0x0;
  data = 0;
  if (floatRef != (float **)0x0) {
    *floatRef = (float *)0x0;
  }
  pCVar13 = _5Globs_pCareers;
  pTVar12 = _10ObjTestSim_sCheckTreeModEntry;
  switch(ownerField) {
  case 0:
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
      pcVar10 = this->_vb966->__vtable;
      lVar27 = (*(code *)pcVar10->CalcShortDistance)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10->CalcShortDistance);
      if ((long)uVar39 < lVar27) {
        pTVar26 = (TreeTableAd *)(this->fAttrs + iVar38);
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 6;
    uVar33 = 6;
    break;
  case 1:
    pcVar5 = this->_vb966;
    pTVar30 = this->_vb1168->_vb899;
    pcVar10 = pcVar5->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pcVar10[1].CanContributeLight;
    iVar25 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                       ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar37 = 0;
    if (lVar27 != 0) {
      iVar25 = *(int *)((int)lVar27 + 4);
      lVar37 = (**(code **)(iVar25 + 0x454))((int)lVar27 + (int)*(short *)(iVar25 + 0x450));
    }
                    /* end of inlined section */
    if (lVar37 == 0) {
      pTVar28 = this->_vb1168;
      uVar34 = 10;
      uVar33 = 10;
    }
    else {
      if ((long)uVar39 < 0) {
        pTVar28 = this->_vb1168;
      }
      else {
        iVar25 = *(int *)((int)lVar37 + 4);
        iVar6 = *(int *)(iVar25 + 4);
        lVar27 = (**(code **)(iVar6 + 0x14))(iVar25 + *(short *)(iVar6 + 0x10));
        if ((long)uVar39 < lVar27) {
          pTVar26 = (TreeTableAd *)(*(int *)((int)lVar37 + 8) + iVar38 * 2);
          goto LAB_002339e0;
        }
        pTVar28 = this->_vb1168;
      }
      uVar34 = 6;
      uVar33 = 6;
    }
    break;
  default:
    pTVar28 = this->_vb1168;
    uVar34 = 9;
    uVar33 = 9;
    break;
  case 3:
    uVar34 = 7;
    if ((uVar39 & 0xffff) < 0x48) {
      *dataRef = (ushort *)(TreeTableAd *)(this->fData + iVar38);
      data = ((TreeTableAd *)(this->fData + iVar38))->fPersonalityAd;
      if (uVar39 != 0x19) goto LAB_00233a24;
      pcVar5 = this->_vb966;
LAB_00233660:
      (*(code *)pcVar5->__vtable->GetNext)
                ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable->GetObjectFromID);
      goto LAB_00233a24;
    }
    pTVar28 = this->_vb1168;
    uVar33 = 7;
    break;
  case 4:
    uVar34 = 7;
    if ((uVar39 & 0xffff) < 0x48) {
      pcVar5 = this->_vb966;
      pTVar30 = this->_vb1168->_vb899;
      pcVar10 = pcVar5->__vtable;
      pTVar9 = pTVar30->__vtable;
      sVar15 = *(short *)&pcVar10[1].CanContributeLight;
      iVar25 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                         ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar37 = 0;
      if (lVar27 != 0) {
        iVar25 = *(int *)((int)lVar27 + 4);
        lVar37 = (**(code **)(iVar25 + 0x454))((int)lVar27 + (int)*(short *)(iVar25 + 0x450));
      }
                    /* end of inlined section */
      if (lVar37 != 0) {
        pTVar26 = (TreeTableAd *)((int)lVar37 + iVar38 * 2 + 0x26);
        *dataRef = (ushort *)pTVar26;
        data = pTVar26->fPersonalityAd;
        if (uVar39 != 0x19) goto LAB_00233a24;
        pcVar5 = *(cXObject__21_1030 **)((int)lVar37 + 4);
        goto LAB_00233660;
      }
      pTVar28 = this->_vb1168;
      uVar34 = 10;
      uVar33 = 10;
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 7;
    }
    break;
  case 6:
    uVar34 = 0x3f;
    if ((uVar39 & 0xffff) < 0x2a) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      uVar39 = uVar39 & 0xff;
      sVar15 = *(short *)&_5Globs_pSimulator->__vtable->Pause;
      pcVar23 = (code *)_5Globs_pSimulator->__vtable->Resume;
      pNVar7 = (Neighborhood *)_5Globs_pSimulator;
LAB_002336b0:
      data = (*pcVar23)((int)&pNVar7->__vtable + (int)sVar15,uVar39);
      goto LAB_00233a24;
    }
    pTVar28 = this->_vb1168;
    uVar33 = 0x3f;
    break;
  case 7:
    data = dataField;
    goto LAB_00233a24;
  case 8:
    uVar33 = 2;
    if ((uVar39 & 0xffff) < 8) {
      pTVar26 = (TreeTableAd *)(this->fTemp + iVar38);
LAB_002339e0:
      *dataRef = &pTVar26->fPersonalityAd;
LAB_002339e4:
      data = pTVar26->fPersonalityAd;
      goto LAB_00233a24;
    }
    pTVar28 = this->_vb1168;
    uVar34 = 2;
    break;
  case 9:
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
      pTVar30 = this->_vb1168->_vb899;
      pTVar9 = pTVar30->__vtable;
      iVar25 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      if ((long)uVar39 < (long)(ulong)*(byte *)(iVar25 + 7)) {
        pTVar30 = this->_vb1168->_vb899;
        pTVar9 = pTVar30->__vtable;
        pSVar24 = (StackElem *)
                  (**(code **)(pTVar9 + 1))
                            ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
        puVar22 = GetParams__9StackElem(pSVar24);
        pTVar26 = (TreeTableAd *)(puVar22 + iVar38);
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 8;
    uVar33 = 8;
    break;
  case 10:
    uVar34 = 0xf;
    if (uVar39 == 0) {
      pTVar30 = this->_vb1168->_vb899;
      pTVar9 = pTVar30->__vtable;
      sVar15 = *(short *)&pTVar9[1].Simulate;
      iVar25 = (*(code *)pTVar9[1].ClearError)
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9[1].GetError);
      pTVar26 = (TreeTableAd *)
                (*(code *)pTVar9[1].SetError)
                          ((int)&pTVar30->m_pObject + (int)sVar15,
                           (iVar25 - (iVar38 + 1)) * 0x10000 >> 0x10);
LAB_00233394:
      *dataRef = &pTVar26->fRange;
      data = pTVar26->fRange;
      goto LAB_00233a24;
    }
    pTVar28 = this->_vb1168;
    uVar33 = 0xf;
    break;
  case 0xb:
    uVar34 = 2;
    if ((uVar39 & 0xffff) < 8) {
      uVar33 = 2;
      if (this->fTemp[iVar38] < 8) {
        pTVar26 = (TreeTableAd *)(this->fTemp + (short)this->fTemp[iVar38]);
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
      uVar34 = 2;
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 2;
    }
    break;
  case 0xc:
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
                    /* end of inlined section */
      if ((long)uVar39 < 0x10) {
        pTVar26 = _10ObjTestSim_sCheckTreeModEntry->fAds + iVar38;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
                    /* end of inlined section */
        goto LAB_00233394;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 0x1a;
    uVar33 = 0x1a;
    break;
  case 0xd:
    pcVar5 = this->_vb966;
    pTVar30 = this->_vb1168->_vb899;
    pcVar10 = pcVar5->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pcVar10[1].CanContributeLight;
    iVar25 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                       ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar37 = 0;
    if (lVar27 != 0) {
      iVar25 = *(int *)((int)lVar27 + 4);
      lVar37 = (**(code **)(iVar25 + 0x454))((int)lVar27 + (int)*(short *)(iVar25 + 0x450));
    }
                    /* end of inlined section */
    if (lVar37 == 0) {
      pTVar28 = this->_vb1168;
      uVar34 = 10;
      uVar33 = 10;
    }
    else {
      uVar33 = 2;
      if ((uVar39 & 0xffff) < 8) {
        pTVar26 = (TreeTableAd *)((int)lVar37 + iVar38 * 2 + 0x16);
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
      uVar34 = 2;
    }
    break;
  case 0xe:
    uVar34 = 0x1a;
    if ((uVar39 & 0xffff) < 0x10) {
      pcVar10 = this->_vb966->__vtable;
      lVar27 = (*(code *)pcVar10[1].Pickup)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10[1].Turn);
      uVar34 = 0x1c;
      if (lVar27 == 2) {
                    /* inlined from SCID.h */
        if (this == (cXObjectImpl__127_901 *)0x0) {
LAB_00233210:
          pvVar19 = (void *)0x0;
        }
        else {
          pTVar30 = this->_vb966->_vb899;
LAB_00233200:
          pvVar19 = _dyncastimpl__7TreeSim4SCID(pTVar30,cXPersonID);
        }
                    /* end of inlined section */
        fVar40 = (float)(**(code **)(*(int *)((int)pvVar19 + 4) + 100))
                                  ((int)pvVar19 + (int)*(short *)(*(int *)((int)pvVar19 + 4) + 0x60)
                                   ,uVar39);
        iVar38 = fround__Ff(fVar40);
        data = (ushort)iVar38;
        if (floatRef != (float **)0x0) {
          iVar25 = *(int *)((int)pvVar19 + 4);
          uVar32 = uVar39;
LAB_00233244:
          pfVar20 = (float *)(**(code **)(iVar25 + 0x6c))
                                       ((int)pvVar19 + (int)*(short *)(iVar25 + 0x68),uVar32);
          *floatRef = pfVar20;
        }
LAB_00233258:
        pOVar4 = this->fModule->__vtable;
        (*(code *)pOVar4[1].GetObjectByGUID)
                  ((int)&this->fModule->__vtable + (int)*(short *)&pOVar4[1].GetSim,pvVar19,uVar39,
                   bVar14);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x1c;
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 0x1a;
    }
    break;
  case 0xf:
    uVar34 = 0x1a;
    if ((uVar39 & 0xffff) < 0x10) {
      pcVar5 = this->_vb966;
      pTVar30 = this->_vb1168->_vb899;
      pcVar10 = pcVar5->__vtable;
      pTVar9 = pTVar30->__vtable;
      sVar15 = *(short *)&pcVar10[1].CanContributeLight;
      iVar38 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                         ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar38 + 4));
      uVar34 = 0x15;
      if (lVar27 == 0) {
        pTVar28 = this->_vb1168;
        uVar33 = 0x15;
      }
      else {
        ppTVar36 = (TreeSim **)lVar27;
        lVar37 = (*(code *)ppTVar36[1][0x15].m_pCursorObject)
                           ((int)ppTVar36 + (int)*(short *)&ppTVar36[1][0x15].m_pMTObject);
        uVar34 = 0x1c;
        if (lVar37 == 2) {
                    /* inlined from SCID.h */
          if (lVar27 == 0) goto LAB_00233210;
          pTVar30 = *ppTVar36;
          goto LAB_00233200;
        }
        pTVar28 = this->_vb1168;
        uVar33 = 0x1c;
      }
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 0x1a;
    }
    break;
  case 0x10:
    pcVar5 = this->_vb966;
    pTVar30 = this->_vb1168->_vb899;
    pcVar10 = pcVar5->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pcVar10[1].CanContributeLight;
    iVar38 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                       ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar38 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar37 = 0;
    if (lVar27 != 0) {
      iVar38 = *(int *)((int)lVar27 + 4);
      lVar37 = (**(code **)(iVar38 + 0x454))((int)lVar27 + (int)*(short *)(iVar38 + 0x450));
    }
                    /* end of inlined section */
    if (lVar37 == 0) {
      pTVar28 = this->_vb1168;
      uVar34 = 0x15;
      uVar33 = 0x15;
    }
    else {
      iVar38 = *(int *)((int)lVar37 + 4);
      iVar25 = *(int *)(iVar38 + 4);
      lVar27 = (**(code **)(iVar25 + 0x254))(iVar38 + *(short *)(iVar25 + 0x250),uVar39);
      if (lVar27 != 0) {
        data = *(ushort *)((int)lVar27 + 0x14);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar34 = 0x1b;
      uVar33 = 0x1b;
    }
    break;
  case 0x11:
                    /* end of inlined section */
    uVar34 = 2;
    if ((uVar39 & 0xffff) < 8) {
      if (this->fTemp[iVar38] < 0x10) {
        pcVar5 = this->_vb966;
        pTVar30 = this->_vb1168->_vb899;
        pcVar10 = pcVar5->__vtable;
        pTVar9 = pTVar30->__vtable;
        sVar15 = *(short *)&pcVar10[1].CanContributeLight;
        iVar25 = (**(code **)(pTVar9 + 1))
                           ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
        lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                           ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
        uVar34 = 0x15;
        if (lVar27 == 0) {
          pTVar28 = this->_vb1168;
          uVar33 = 0x15;
        }
        else {
          ppTVar36 = (TreeSim **)lVar27;
          lVar37 = (*(code *)ppTVar36[1][0x15].m_pCursorObject)
                             ((int)ppTVar36 + (int)*(short *)&ppTVar36[1][0x15].m_pMTObject);
          uVar34 = 0x1c;
          if (lVar37 == 2) {
                    /* inlined from SCID.h */
            if (lVar27 == 0) {
              pvVar19 = (void *)0x0;
            }
            else {
              pvVar19 = _dyncastimpl__7TreeSim4SCID(*ppTVar36,cXPersonID);
            }
                    /* end of inlined section */
            fVar40 = (float)(**(code **)(*(int *)((int)pvVar19 + 4) + 100))
                                      ((int)pvVar19 +
                                       (int)*(short *)(*(int *)((int)pvVar19 + 4) + 0x60),
                                       this->fTemp[iVar38]);
            iVar25 = fround__Ff(fVar40);
            data = (ushort)iVar25;
            if (floatRef != (float **)0x0) {
              iVar25 = *(int *)((int)pvVar19 + 4);
              uVar32 = (long)(short)this->fTemp[iVar38];
              goto LAB_00233244;
            }
            goto LAB_00233258;
          }
          pTVar28 = this->_vb1168;
          uVar33 = 0x1c;
        }
      }
      else {
        pTVar28 = this->_vb1168;
        uVar34 = 0x1a;
        uVar33 = 0x1a;
      }
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 2;
    }
    break;
  case 0x12:
    pcVar10 = this->_vb966->__vtable;
    lVar27 = (*(code *)pcVar10[1].Pickup)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10[1].Turn);
    uVar34 = 0x1c;
    if (lVar27 == 2) {
      uVar34 = 0x21;
      if ((uVar39 & 0xffff) < 0x50) {
                    /* inlined from SCID.h */
        if (this == (cXObjectImpl__127_901 *)0x0) {
          pvVar19 = (void *)0x0;
        }
        else {
          pvVar19 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonImplID);
        }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
        pTVar26 = (TreeTableAd *)((int)pvVar19 + iVar38 * 2 + 8);
        *dataRef = (ushort *)pTVar26;
        data = pTVar26->fPersonalityAd;
        if (iVar38 - 2U < 6) {
          pOVar29 = this->fModule;
          iVar38 = (int)*(short *)&pOVar29->__vtable[1].GetPersonByGUID;
          ppuVar35 = &pOVar29->__vtable[1].GetPersonByGUID;
        }
        else {
LAB_00232dc4:
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
          if (9 < (int)uVar39 - 9U) goto LAB_00233a24;
          pOVar29 = this->fModule;
          iVar38 = (int)*(short *)&pOVar29->__vtable[1].DoCommand;
          ppuVar35 = &pOVar29->__vtable[1].DoCommand;
        }
LAB_00232de4:
        uVar31 = 0;
        if (pvVar19 != (void *)0x0) {
          uVar31 = *(undefined4 *)((int)pvVar19 + 4);
        }
        (*(code *)ppuVar35[1])((int)&pOVar29->__vtable + iVar38,uVar31,uVar39,bVar14);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x21;
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 0x1c;
    }
    break;
  case 0x13:
    uVar34 = 0x21;
    if ((uVar39 & 0xffff) < 0x50) {
      pcVar5 = this->_vb966;
      pTVar30 = this->_vb1168->_vb899;
      pcVar10 = pcVar5->__vtable;
      pTVar9 = pTVar30->__vtable;
      sVar15 = *(short *)&pcVar10[1].CanContributeLight;
      iVar25 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                         ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
      uVar34 = 0x15;
      if (lVar27 == 0) {
        pTVar28 = this->_vb1168;
        uVar33 = 0x15;
      }
      else {
        ppTVar36 = (TreeSim **)lVar27;
        lVar37 = (*(code *)ppTVar36[1][0x15].m_pCursorObject)
                           ((int)ppTVar36 + (int)*(short *)&ppTVar36[1][0x15].m_pMTObject);
        uVar34 = 0x1c;
        if (lVar37 == 2) {
                    /* inlined from SCID.h */
          pvVar19 = (void *)0x0;
          if (lVar27 != 0) {
            pvVar19 = _dyncastimpl__7TreeSim4SCID(*ppTVar36,cXPersonImplID);
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
          pTVar26 = (TreeTableAd *)((int)pvVar19 + iVar38 * 2 + 8);
          *dataRef = (ushort *)pTVar26;
          data = pTVar26->fPersonalityAd;
          if (5 < iVar38 - 2U) goto LAB_00232dc4;
          pOVar29 = this->fModule;
          iVar38 = (int)*(short *)&pOVar29->__vtable[1].GetPersonByGUID;
          ppuVar35 = &pOVar29->__vtable[1].GetPersonByGUID;
          goto LAB_00232de4;
        }
        pTVar28 = this->_vb1168;
        uVar33 = 0x1c;
      }
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 0x21;
    }
    break;
  case 0x14:
    pcVar10 = this->_vb966->__vtable;
    lVar27 = (*(code *)pcVar10[1].GetMiscFlag)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10[1].SetMiscFlag,uVar39);
    if (lVar27 != 0) {
      data = *(ushort *)((int)lVar27 + 0x14);
      goto LAB_00233a24;
    }
    pTVar28 = this->_vb1168;
    uVar34 = 0x1b;
    uVar33 = 0x1b;
    break;
  case 0x15:
    uVar34 = 0x23;
    if ((long)uVar39 < 0x62) {
      pcVar5 = this->_vb966;
      pTVar30 = this->_vb1168->_vb899;
      pcVar10 = pcVar5->__vtable;
      pTVar9 = pTVar30->__vtable;
      sVar15 = *(short *)&pcVar10[1].CanContributeLight;
      iVar25 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                         ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar37 = 0;
      if (lVar27 != 0) {
        iVar25 = *(int *)((int)lVar27 + 4);
        lVar37 = (**(code **)(iVar25 + 0x454))((int)lVar27 + (int)*(short *)(iVar25 + 0x450));
      }
                    /* end of inlined section */
      if (lVar37 != 0) {
        iVar25 = *(int *)((int)lVar37 + 4);
        iVar6 = *(int *)(iVar25 + 4);
        iVar25 = (**(code **)(iVar6 + 0x2a4))(iVar25 + *(short *)(iVar6 + 0x2a0));
        data = *(ushort *)(iVar38 * 2 + iVar25);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar34 = 10;
      uVar33 = 10;
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 0x23;
    }
    break;
  case 0x16:
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
      pTVar30 = this->_vb1168->_vb899;
      pTVar9 = pTVar30->__vtable;
      iVar25 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      if ((long)uVar39 < (long)(ulong)*(byte *)(iVar25 + 7)) {
        pTVar30 = this->_vb1168->_vb899;
        pTVar9 = pTVar30->__vtable;
        pSVar24 = (StackElem *)
                  (**(code **)(pTVar9 + 1))
                            ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
        puVar22 = GetParams__9StackElem(pSVar24);
        pcVar5 = this->_vb966;
        pTVar30 = this->_vb1168->_vb899;
        pcVar10 = pcVar5->__vtable;
        pTVar9 = pTVar30->__vtable;
        sVar15 = *(short *)&pcVar10[1].CanContributeLight;
        uVar1 = puVar22[iVar38];
        iVar38 = (**(code **)(pTVar9 + 1))
                           ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
        lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                           ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar38 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
        lVar37 = 0;
        if (lVar27 != 0) {
          iVar38 = *(int *)((int)lVar27 + 4);
          lVar37 = (**(code **)(iVar38 + 0x454))((int)lVar27 + (int)*(short *)(iVar38 + 0x450));
        }
                    /* end of inlined section */
        iVar38 = *(int *)((int)lVar37 + 4);
        iVar25 = *(int *)(iVar38 + 4);
        sVar15 = (**(code **)(iVar25 + 0x14))(iVar38 + *(short *)(iVar25 + 0x10));
        uVar34 = 6;
        if ((short)uVar1 < sVar15) {
          uVar33 = 10;
          if (lVar37 != 0) {
            pTVar26 = (TreeTableAd *)(*(int *)((int)lVar37 + 8) + (short)uVar1 * 2);
            goto LAB_002339e0;
          }
          pTVar28 = this->_vb1168;
          uVar34 = 10;
        }
        else {
          pTVar28 = this->_vb1168;
          uVar33 = 6;
        }
        break;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 8;
    uVar33 = 8;
    break;
  case 0x17:
    uVar1 = this->fTemp[0];
    switch(iVar38) {
    case 0:
      if (uVar1 == 0xfffb) {
        data = 0;
        goto LAB_00233a24;
      }
      pRVar18 = GetRoomManager__11RoomManager();
      lVar27 = (*(code *)pRVar18->__vtable->ClearRoomPartitions)
                         ((int)&pRVar18->__vtable + (int)*(short *)&pRVar18->__vtable->GetHouse,
                          uVar1);
      uVar34 = 0x28;
      if (lVar27 != 0) {
        iVar38 = *(int *)lVar27;
        fVar40 = (float)(**(code **)(iVar38 + 0x54))
                                  ((int)(int *)lVar27 + (int)*(short *)(iVar38 + 0x50));
        fVar40 = fVar40 * 100.0;
        goto LAB_00232780;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x28;
      break;
    case 1:
      if (uVar1 == 0xfffb) {
        data = 1;
        goto LAB_00233a24;
      }
      pRVar18 = GetRoomManager__11RoomManager();
      lVar27 = (*(code *)pRVar18->__vtable->ClearRoomPartitions)
                         ((int)&pRVar18->__vtable + (int)*(short *)&pRVar18->__vtable->GetHouse,
                          uVar1);
      uVar34 = 0x28;
      if (lVar27 != 0) {
        iVar38 = *(int *)lVar27;
        lVar27 = (**(code **)(iVar38 + 100))((int)(int *)lVar27 + (int)*(short *)(iVar38 + 0x60));
        data = (ushort)(lVar27 != 0);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x28;
      break;
    case 2:
      if (uVar1 == 0xfffb) {
        data = 0;
        goto LAB_00233a24;
      }
      pRVar18 = GetRoomManager__11RoomManager();
      lVar27 = (*(code *)pRVar18->__vtable->ClearRoomPartitions)
                         ((int)&pRVar18->__vtable + (int)*(short *)&pRVar18->__vtable->GetHouse,
                          uVar1);
      uVar34 = 0x28;
      if (lVar27 != 0) {
        sVar15 = *(short *)(*(int *)lVar27 + 0xa8);
        pcVar23 = *(code **)(*(int *)lVar27 + 0xac);
LAB_0023271c:
        data = (*pcVar23)((int)lVar27 + (int)sVar15);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x28;
      break;
    case 3:
      if (uVar1 == 0xfffb) goto LAB_002326cc;
      pRVar18 = GetRoomManager__11RoomManager();
      lVar27 = (*(code *)pRVar18->__vtable->ClearRoomPartitions)
                         ((int)&pRVar18->__vtable + (int)*(short *)&pRVar18->__vtable->GetHouse,
                          uVar1);
      uVar34 = 0x28;
      if (lVar27 != 0) {
        sVar15 = *(short *)(*(int *)lVar27 + 0x90);
        pcVar23 = *(code **)(*(int *)lVar27 + 0x94);
        goto LAB_0023271c;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x28;
      break;
    case 4:
      pRVar18 = GetRoomManager__11RoomManager();
      lVar27 = (*(code *)pRVar18->__vtable->ClearRoomPartitions)
                         ((int)&pRVar18->__vtable + (int)*(short *)&pRVar18->__vtable->GetHouse,
                          uVar1);
      uVar34 = 0x28;
      if (lVar27 != 0) {
        pRVar18 = GetRoomManager__11RoomManager();
        fVar40 = (float)(**(code **)(pRVar18->__vtable + 1))
                                  ((int)&pRVar18->__vtable +
                                   (int)*(short *)&pRVar18->__vtable->GetRoomAmbientLight,uVar1);
LAB_00232780:
        data = (ushort)(int)fVar40;
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x28;
      break;
    default:
      pTVar28 = this->_vb1168;
      uVar34 = 0x29;
      uVar33 = 0x29;
    }
    break;
  case 0x18:
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pTVar30 = this->_vb1168->_vb899;
    pNVar8 = _5Globs_pNeighborhood->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pNVar8[1].GetNeighborhoodName;
    ppNVar11 = &_5Globs_pNeighborhood->__vtable;
    iVar38 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    data = (*(code *)pNVar8[1].GetHighestLevelCompleted)
                     ((int)ppNVar11 + (int)sVar15,*(undefined2 *)(iVar38 + 4),uVar39,dataRef);
LAB_00233a24:
    if (pResultValue != (ushort *)0x0) {
      *pResultValue = data;
    }
    return kTrueComplete;
  case 0x19:
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
      pTVar30 = this->_vb1168->_vb899;
      pTVar9 = pTVar30->__vtable;
      iVar25 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      if ((long)uVar39 < (long)(ulong)*(byte *)(iVar25 + 6)) {
        pTVar30 = this->_vb1168->_vb899;
        pTVar9 = pTVar30->__vtable;
        pSVar24 = (StackElem *)
                  (**(code **)(pTVar9 + 1))
                            ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
        puVar22 = GetLocals__9StackElem(pSVar24);
        pTVar26 = (TreeTableAd *)(puVar22 + iVar38);
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 8;
    uVar33 = 8;
    break;
  case 0x1a:
    bVar14 = GetConstantsID__8XObjLangsPsPi
                       (dataField,(ushort *)((uint)&temp | 4),(int *)((uint)&temp | 0xc));
    if (bVar14) {
      pTVar30 = this->_vb1168->_vb899;
      pTVar9 = pTVar30->__vtable;
      iVar38 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      pBVar17 = GetConstants__8Behaviorsb(*(Behavior **)(iVar38 + 0xc),id,true);
      uVar33 = 0x2e;
      if (pBVar17 == (BehaviorConstants *)0x0) {
        pTVar28 = this->_vb1168;
        uVar34 = 0x2e;
      }
      else {
        if (index < 0) {
          pTVar28 = this->_vb1168;
        }
        else {
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
          puVar22 = (pBVar17->values).pData;
          iVar38 = 0;
          if (puVar22 != (ushort *)0x0) {
            iVar38 = *(int *)(puVar22 + -2);
          }
                    /* end of inlined section */
          if (index < iVar38) {
            pTVar26 = (TreeTableAd *)(puVar22 + index);
                    /* end of inlined section */
            goto LAB_002339e4;
          }
          pTVar28 = this->_vb1168;
        }
        uVar34 = 0x2e;
        uVar33 = 0x2e;
      }
    }
    else {
      pTVar28 = this->_vb1168;
      uVar34 = 0x2e;
      uVar33 = 0x2e;
    }
    break;
  case 0x1b:
    uVar34 = 2;
    if ((uVar39 & 0xffff) < 8) {
      pcVar5 = this->_vb966;
      pTVar30 = this->_vb1168->_vb899;
      pcVar10 = pcVar5->__vtable;
      pTVar9 = pTVar30->__vtable;
      sVar15 = *(short *)&pcVar10[1].CanContributeLight;
      iVar25 = (**(code **)(pTVar9 + 1))
                         ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
      lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                         ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar37 = 0;
      if (lVar27 != 0) {
        iVar25 = *(int *)((int)lVar27 + 4);
        lVar37 = (**(code **)(iVar25 + 0x454))((int)lVar27 + (int)*(short *)(iVar25 + 0x450));
      }
                    /* end of inlined section */
      if (lVar37 == 0) {
        pTVar28 = this->_vb1168;
        uVar34 = 10;
        uVar33 = 10;
      }
      else {
        uVar34 = this->fTemp[iVar38];
        if ((short)uVar34 < 0) {
          pTVar28 = this->_vb1168;
        }
        else {
          if ((short)uVar34 < *(short *)((int)lVar37 + 0x14)) {
            pTVar26 = (TreeTableAd *)(*(int *)((int)lVar37 + 0x10) + (short)uVar34 * 2);
            goto LAB_002339e0;
          }
          pTVar28 = this->_vb1168;
        }
        uVar34 = 0x31;
        uVar33 = 0x31;
      }
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 2;
    }
    break;
  case 0x1c:
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
                    /* end of inlined section */
      if ((long)uVar39 < 0x10) {
        pTVar26 = _10ObjTestSim_sCheckTreeModEntry->fAds + iVar38;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
                    /* end of inlined section */
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 0x1a;
    uVar33 = 0x1a;
    break;
  case 0x1d:
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
                    /* end of inlined section */
      if ((long)uVar39 < 0x10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
                    /* end of inlined section */
        *dataRef = &_10ObjTestSim_sCheckTreeModEntry->fAds[iVar38].fMin;
        data = pTVar12->fAds[iVar38].fMin;
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 0x1a;
    uVar33 = 0x1a;
    break;
  case 0x1e:
                    /* end of inlined section */
    pcVar10 = this->_vb966->__vtable;
    lVar27 = (*(code *)pcVar10[1].Pickup)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10[1].Turn);
    uVar34 = 0x1c;
    if (lVar27 == 2) {
      uVar33 = 2;
      if (7 < (uVar39 & 0xffff)) {
        this->_vb1168->fError = 2;
        goto LAB_00233a04;
      }
      uVar1 = this->fTemp[iVar38];
      uVar39 = (ulong)(short)uVar1;
      uVar34 = 0x21;
      if ((uVar39 & 0xffff) < 0x50) {
                    /* inlined from SCID.h */
        if (this == (cXObjectImpl__127_901 *)0x0) {
          pvVar19 = (void *)0x0;
        }
        else {
          pvVar19 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonImplID);
        }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
        pTVar26 = (TreeTableAd *)((int)pvVar19 + (short)uVar1 * 2 + 8);
        *dataRef = (ushort *)pTVar26;
        data = pTVar26->fPersonalityAd;
        if (5 < (int)(short)uVar1 - 2U) goto LAB_00232dc4;
        pOVar29 = this->fModule;
        iVar38 = (int)*(short *)&pOVar29->__vtable[1].GetPersonByGUID;
        ppuVar35 = &pOVar29->__vtable[1].GetPersonByGUID;
        goto LAB_00232de4;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x21;
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 0x1c;
    }
    break;
  case 0x1f:
                    /* end of inlined section */
    pcVar5 = this->_vb966;
    pTVar30 = this->_vb1168->_vb899;
    pcVar10 = pcVar5->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pcVar10[1].CanContributeLight;
    iVar25 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                       ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
    uVar34 = 0x15;
    if (lVar27 == 0) {
      pTVar28 = this->_vb1168;
      uVar33 = 0x15;
    }
    else {
      ppTVar36 = (TreeSim **)lVar27;
      lVar37 = (*(code *)ppTVar36[1][0x15].m_pCursorObject)
                         ((int)ppTVar36 + (int)*(short *)&ppTVar36[1][0x15].m_pMTObject);
      uVar34 = 0x1c;
      if (lVar37 == 2) {
        uVar33 = 2;
        if (7 < (uVar39 & 0xffff)) {
          this->_vb1168->fError = 2;
          goto LAB_00233a04;
        }
        uVar1 = this->fTemp[iVar38];
        uVar39 = (ulong)(short)uVar1;
        uVar34 = 0x21;
        if ((uVar39 & 0xffff) < 0x50) {
                    /* inlined from SCID.h */
          pvVar19 = (void *)0x0;
          if (lVar27 != 0) {
            pvVar19 = _dyncastimpl__7TreeSim4SCID(*ppTVar36,cXPersonImplID);
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/PersonData.h */
                    /* end of inlined section */
          pTVar26 = (TreeTableAd *)((int)pvVar19 + (short)uVar1 * 2 + 8);
          *dataRef = (ushort *)pTVar26;
          data = pTVar26->fPersonalityAd;
          if (5 < (int)(short)uVar1 - 2U) goto LAB_00232dc4;
          pOVar29 = this->fModule;
          iVar38 = (int)*(short *)&pOVar29->__vtable[1].GetPersonByGUID;
          ppuVar35 = &pOVar29->__vtable[1].GetPersonByGUID;
          goto LAB_00232de4;
        }
        pTVar28 = this->_vb1168;
        uVar33 = 0x21;
      }
      else {
        pTVar28 = this->_vb1168;
        uVar33 = 0x1c;
      }
    }
    break;
  case 0x20:
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pTVar30 = this->_vb1168->_vb899;
    pNVar8 = _5Globs_pNeighborhood->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pNVar8->GetShowTutorialArrow;
    ppNVar11 = &_5Globs_pNeighborhood->__vtable;
    iVar25 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pNVar8->SetShowTutorialArrow)
                       ((int)ppNVar11 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
    uVar34 = 0x37;
    if (lVar27 == 0) {
      pTVar28 = this->_vb1168;
      uVar33 = 0x37;
    }
    else {
      uVar34 = 0x21;
      if ((uVar39 & 0xffff) < 0x50) {
                    /* end of inlined section */
        data = *(ushort *)((int)lVar27 + iVar38 * 2 + 100);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x21;
    }
    break;
  case 0x21:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar1 = this->fTemp[0];
    uVar2 = this->fTemp[1];
    lVar27 = (*(code *)_5Globs_pCareers->__vtable->GetJobGrade)
                       ((int)&_5Globs_pCareers->__vtable +
                        (int)*(short *)&_5Globs_pCareers->__vtable->GetJobPerformance,uVar1);
    uVar34 = 0x39;
    if (lVar27 == 0) {
      pTVar28 = this->_vb1168;
      uVar33 = 0x39;
    }
    else {
      pCVar3 = pCVar13->__vtable;
      uVar34 = 0;
      if (uVar1 != 0xffff) {
        uVar34 = uVar2;
      }
      lVar27 = (*(code *)pCVar3[1].GetIndexByCareer)
                         ((int)&pCVar13->__vtable + (int)*(short *)&pCVar3[1].GetCareerByIndex,
                          lVar27,uVar34,uVar39,(uint)&temp | 2);
      uVar34 = 0x3a;
      if (lVar27 != 0) goto LAB_00233a24;
      pTVar28 = this->_vb1168;
      uVar33 = 0x3a;
    }
    break;
  case 0x22:
    uVar34 = 0x3c;
    if (iVar38 - 1U < 0xf) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      sVar15 = *(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily;
      pcVar23 = (code *)_5Globs_pNeighborhood->__vtable->AddToFamily;
      pNVar7 = _5Globs_pNeighborhood;
      goto LAB_002336b0;
    }
    pTVar28 = this->_vb1168;
    uVar33 = 0x3c;
    break;
  case 0x23:
    pcVar5 = this->_vb966;
    pTVar30 = this->_vb1168->_vb899;
    pcVar10 = pcVar5->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pcVar10[1].CanContributeLight;
    iVar38 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                       ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar38 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar37 = 0;
    if (lVar27 != 0) {
      iVar38 = *(int *)((int)lVar27 + 4);
      lVar37 = (**(code **)(iVar38 + 0x454))((int)lVar27 + (int)*(short *)(iVar38 + 0x450));
    }
                    /* end of inlined section */
    uVar34 = 10;
    if (lVar37 != 0) {
      iVar38 = *(int *)((int)lVar37 + 4);
      iVar25 = *(int *)(iVar38 + 4);
      piVar16 = (int *)(**(code **)(iVar25 + 0x174))(iVar38 + *(short *)(iVar25 + 0x170));
      lVar27 = (**(code **)(*piVar16 + 0x1c))
                         ((int)piVar16 + (int)*(short *)(*piVar16 + 0x18),uVar39);
      if (lVar27 != 0) {
        data = 1;
        goto LAB_00233a24;
      }
LAB_002326cc:
      data = 0;
      goto LAB_00233a24;
    }
    pTVar28 = this->_vb1168;
    uVar33 = 10;
    break;
  case 0x24:
    if ((long)uVar39 < 0) {
      pTVar28 = this->_vb1168;
    }
    else {
      pcVar10 = this->_vb966->__vtable;
      pOVar21 = (ObjSelector *)
                (*(code *)pcVar10[1].SetLevel)
                          ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10[1].GetTreeID);
      iVar25 = CountTypeAttributes__11ObjSelector(pOVar21);
      if ((long)uVar39 < (long)iVar25) {
        pcVar10 = this->_vb966->__vtable;
        pOVar21 = (ObjSelector *)
                  (*(code *)pcVar10[1].SetLevel)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10[1].GetTreeID);
        puVar22 = GetTypeAttributes__11ObjSelector(pOVar21);
        pTVar26 = (TreeTableAd *)(puVar22 + iVar38);
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
    }
    uVar34 = 0x40;
    uVar33 = 0x40;
    break;
  case 0x25:
    pcVar5 = this->_vb966;
    pTVar30 = this->_vb1168->_vb899;
    pcVar10 = pcVar5->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pcVar10[1].CanContributeLight;
    iVar25 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pcVar10[1].GetLightingContribution)
                       ((int)&pcVar5->_vb899 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar37 = 0;
    if (lVar27 != 0) {
      iVar25 = *(int *)((int)lVar27 + 4);
      lVar37 = (**(code **)(iVar25 + 0x454))((int)lVar27 + (int)*(short *)(iVar25 + 0x450));
    }
                    /* end of inlined section */
    if (lVar37 == 0) {
      pTVar28 = this->_vb1168;
      uVar34 = 10;
      uVar33 = 10;
    }
    else {
      if ((long)uVar39 < 0) {
        pTVar28 = this->_vb1168;
      }
      else {
        iVar25 = *(int *)((int)lVar37 + 4);
        iVar6 = *(int *)(iVar25 + 4);
        pOVar21 = (ObjSelector *)(**(code **)(iVar6 + 0x2ec))(iVar25 + *(short *)(iVar6 + 0x2e8));
        iVar25 = CountTypeAttributes__11ObjSelector(pOVar21);
        if ((long)uVar39 < (long)iVar25) {
          iVar25 = *(int *)((int)lVar37 + 4);
          iVar6 = *(int *)(iVar25 + 4);
          pOVar21 = (ObjSelector *)(**(code **)(iVar6 + 0x2ec))(iVar25 + *(short *)(iVar6 + 0x2e8));
          puVar22 = GetTypeAttributes__11ObjSelector(pOVar21);
          pTVar26 = (TreeTableAd *)(puVar22 + iVar38);
          goto LAB_002339e0;
        }
        pTVar28 = this->_vb1168;
      }
      uVar34 = 0x40;
      uVar33 = 0x40;
    }
    break;
  case 0x26:
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pTVar30 = this->_vb1168->_vb899;
    pNVar8 = _5Globs_pNeighborhood->__vtable;
    pTVar9 = pTVar30->__vtable;
    sVar15 = *(short *)&pNVar8->GetShowTutorialArrow;
    ppNVar11 = &_5Globs_pNeighborhood->__vtable;
    iVar25 = (**(code **)(pTVar9 + 1))
                       ((int)&pTVar30->m_pObject + (int)*(short *)&pTVar9->GetISimInstance);
    lVar27 = (*(code *)pNVar8->SetShowTutorialArrow)
                       ((int)ppNVar11 + (int)sVar15,*(undefined2 *)(iVar25 + 4));
    uVar34 = 0x37;
    if (lVar27 == 0) {
      pTVar28 = this->_vb1168;
      uVar33 = 0x37;
    }
    else {
      uVar34 = 0x23;
      if ((uVar39 & 0xffff) < 0x62) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
        iVar25 = *(int *)((int)lVar27 + 8);
                    /* end of inlined section */
        if (iVar25 == 0) {
          uVar33 = 0x37;
          iVar25 = _o_right;
          if (lVar27 == 0) {
            pTVar28 = this->_vb1168;
            uVar34 = 0x37;
            break;
          }
        }
        else {
          iVar25 = *(int *)(iVar25 + 0x18);
        }
                    /* end of inlined section */
        data = *(ushort *)(iVar38 * 2 + iVar25);
        goto LAB_00233a24;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x23;
    }
    break;
  case 0x27:
    uVar34 = 2;
    if ((uVar39 & 0xffff) < 8) {
      uVar34 = 0x41;
      if (this->fTemp[iVar38] < 2) {
        pTVar26 = (TreeTableAd *)GetChallengeModeData__Fi((int)(short)this->fTemp[iVar38]);
        goto LAB_002339e0;
      }
      pTVar28 = this->_vb1168;
      uVar33 = 0x41;
    }
    else {
      pTVar28 = this->_vb1168;
      uVar33 = 2;
    }
  }
  pTVar28->fError = uVar34;
LAB_00233a04:
  pcVar10 = this->_vb966->__vtable;
  (*(code *)pcVar10->SimEnabled)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar10->SimIndependent,uVar33);
  return kError;
}

TreeReturnCode cXObjectImpl::TryFindTreeNew(StackElem *elem, FindTreeNewParam *param) {
  return kFalseComplete;
}

TreeReturnCode cXObjectImpl::TryDrop() {
	cXObject *obj;
	int level;
	FTilePt dropLoc;
	Int &x;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  cXObject__21_1030__vtable *pcVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  FTilePt dropLoc;
  int local_40;
  int local_3c;
  
  pcVar5 = this->_vb966->__vtable;
  uVar9 = (ulong)(int)pcVar5;
  lVar8 = (*(code *)pcVar5[1].Dirty)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].UpdateSimFlags,0);
  if (lVar8 != 0) {
                    /* end of inlined section */
    uVar4 = this->fData[1];
    puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLocation & 7;
    uVar9 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&dropLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar2);
    *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
    iVar6 = this->fLevel;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    local_3c = 0;
    local_40 = 0;
    switch(uVar4 & 7) {
    case 1:
      local_3c = 1;
    case 0:
      local_40 = -1;
      break;
    case 3:
      local_40 = 1;
    case 2:
      local_3c = 1;
      break;
    case 5:
      local_3c = -1;
    case 4:
      local_40 = 1;
      break;
    case 7:
      local_40 = -1;
    case 6:
      local_3c = -1;
    }
    dropLoc.x.whole = (int)(uVar9 >> 0x20);
    dropLoc.y.whole = (int)uVar9;
    dropLoc = (FTilePt)CONCAT44(dropLoc.x.whole + local_3c * 0x10,dropLoc.y.whole + local_40 * 0x10)
    ;
                    /* end of inlined section */
    if (lVar8 != 0) {
      iVar10 = (int)lVar8;
      lVar8 = (**(code **)(*(int *)(iVar10 + 4) + 0x10c))
                        (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x108),&dropLoc,iVar6,0,0);
      if (lVar8 != 0) {
        (**(code **)(*(int *)(iVar10 + 4) + 0x114))
                  (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x110),&dropLoc,iVar6,0,0);
        return kTrueComplete;
      }
    }
  }
  return kFalseComplete;
}

void cXObjectImpl::Backtrace() {
  return;
}

TreeReturnCode cXObjectImpl::TrySnap(StackElem *elem, XPrimParam *param) {
	SnapParam *sp;
	cXObjectImpl *obj;
	FTilePt dest;
	int level;
	cXObject *container;
	bool ignoreRooms;
	int slotNum;
	int direction;
	TreeReturnCode result;
	int xdisp;
	int ydisp;
	int dirDisp;
	cXPersonImpl *person;
	Int &x;
	RoutingSlot *routingSlot;
	unsigned int n;
	unsigned int n;
	RoutingSlot *this;
	RoutingSlot *this;
	int i;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	EMat4 rotate;
	EVec3 worldDest;
	EVec3 slotOffset;
	RoutingSlot *this;
	ObjectSlot *slot;
	float slotx;
	float sloty;
	cXObjectImpl *ptr;
	SnapParam *this;
	cXObject *obstacle;
	cXPersonImpl *move;
	cXObject *ptr;
	
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  cXObject__21_1030 *pcVar4;
  cXObject__21_1030__vtable *pcVar5;
  ulong *puVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  TreeReturnCode TVar15;
  void *pvVar16;
  cXPersonImpl__123_903 *this_00;
  long lVar17;
  uint uVar18;
  TreeSimImpl__21_3338 *pTVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 unaff_s0;
  long lVar22;
  undefined8 unaff_s1;
  float *x;
  undefined8 unaff_s2;
  float slotNum;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar23;
  undefined8 unaff_s5;
  int iVar24;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FTilePt dest;
  undefined local_140 [7];
  ulong uStack_139;
  EMat4 rotate;
  EVec3 worldDest;
  EVec3 slotOffset;
  float local_c0;
  float local_bc;
  cXObject__21_1030 *container;
  int dirDisp;
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
  
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar4 = this->_vb966;
  uVar21 = (ulong)(int)pcVar4;
  lVar17 = (*(code *)pcVar4->__vtable[1].GetLightingContribution)
                     ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable[1].CanContributeLight,
                      elem->fObjectID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar22 = 0;
  if (lVar17 != 0) {
    iVar23 = *(int *)((int)lVar17 + 4);
    lVar22 = (**(code **)(iVar23 + 0x454))((int)lVar17 + (int)*(short *)(iVar23 + 0x450));
  }
                    /* end of inlined section */
  uVar9 = 0x15;
  if (lVar22 == 0) {
    pTVar19 = this->_vb1168;
    uVar20 = 0x15;
    goto LAB_00234080;
  }
                    /* end of inlined section */
  uVar8 = (param->field0_0x0).bparam[1];
  iVar23 = (int)lVar22;
  if (uVar8 != 2) {
    if (uVar8 != 1) {
      if (uVar8 == 0) {
        sVar3 = (param->field0_0x0).find5WorstMotives.unused0;
        if (sVar3 < 0) {
          pTVar19 = this->_vb1168;
        }
        else {
          if (sVar3 < (short)(ushort)elem->fNumParams) {
            puVar13 = GetParams__9StackElem(elem);
            uVar21 = (ulong)(short)puVar13[(param->field0_0x0).find5WorstMotives.unused0];
            if ((long)uVar21 < 0) {
              pTVar19 = this->_vb1168;
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
              iVar12 = *(int *)(iVar23 + 0xfc);
                    /* end of inlined section */
              if (uVar21 < (ulong)(long)(*(int *)(iVar23 + 0x100) - iVar12 >> 6)) goto LAB_00233f34;
              pTVar19 = this->_vb1168;
            }
            uVar9 = 0x1b;
            uVar20 = 0x1b;
            goto LAB_00234080;
          }
          pTVar19 = this->_vb1168;
        }
        uVar9 = 8;
        uVar20 = 8;
        goto LAB_00234080;
      }
                    /* end of inlined section */
      if (uVar8 != 3) {
                    /* end of inlined section */
        uVar9 = 0x24;
        if (uVar8 != 4) {
          pTVar19 = this->_vb1168;
          uVar20 = 0x24;
          goto LAB_00234080;
        }
        uVar9 = (param->field0_0x0).bparam[0];
        if ((short)uVar9 < 0) {
          pTVar19 = this->_vb1168;
        }
        else {
          iVar12 = **(int **)(iVar23 + 0xb8);
          uVar8 = (**(code **)(iVar12 + 0x154))
                            ((int)*(int **)(iVar23 + 0xb8) + (int)*(short *)(iVar12 + 0x150));
          if (uVar9 < uVar8) {
            iVar12 = **(int **)(iVar23 + 0xb8);
            x = (float *)(**(code **)(iVar12 + 0x14c))
                                   ((int)*(int **)(iVar23 + 0xb8) + (int)*(short *)(iVar12 + 0x148),
                                    uVar9);
            goto LAB_00233fb8;
          }
          pTVar19 = this->_vb1168;
        }
        uVar9 = 0x1b;
        uVar20 = 0x1b;
        goto LAB_00234080;
      }
      uVar21 = (ulong)(param->field0_0x0).find5WorstMotives.unused0;
      if ((long)uVar21 < 0) {
        pTVar19 = this->_vb1168;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        iVar12 = *(int *)(iVar23 + 0xfc);
                    /* end of inlined section */
        if (uVar21 < (ulong)(long)(*(int *)(iVar23 + 0x100) - iVar12 >> 6)) {
LAB_00233f34:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
          x = (float *)(iVar12 + (int)uVar21 * 0x40);
LAB_00233fb8:
          uVar9 = 0x1b;
          if (x == (float *)0x0) {
            pTVar19 = this->_vb1168;
            uVar20 = 0x1b;
            goto LAB_00234080;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
          if (((uint)x[8] & 0x1000) == 0) {
            pcVar5 = this->_vb966->__vtable;
            iVar12 = (*(code *)pcVar5->ReconType)
                               ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->ReconStream,1);
          }
          else {
            iVar12 = *(int *)(*(int *)(iVar23 + 4) + 4);
            iVar12 = (**(code **)(iVar12 + 0x20c))
                               (*(int *)(iVar23 + 4) + (int)*(short *)(iVar12 + 0x208));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
            uVar18 = 0;
            fVar25 = x[8];
            do {
              if (((uint)fVar25 & 1) != 0) goto LAB_00234028;
              uVar18 = uVar18 + 1;
              fVar25 = (float)((int)x[8] >> (uVar18 & 0x1f));
            } while ((int)uVar18 < 7);
            uVar18 = 0;
LAB_00234028:
                    /* end of inlined section */
            iVar12 = iVar12 + uVar18;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
          iVar11 = *(int *)(iVar23 + 4);
          if ((int)x[9] < 0) {
            container = (cXObject__21_1030 *)0x0;
            slotNum = 0.0;
            (**(code **)(*(int *)(iVar11 + 4) + 0x2c4))
                      (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x2c0),&dest);
            iVar11 = *(int *)(*(int *)(iVar23 + 4) + 4);
            iVar11 = (**(code **)(iVar11 + 0x2d4))
                               (*(int *)(iVar23 + 4) + (int)*(short *)(iVar11 + 0x2d0));
            ObjectRotationTf__Fi(&rotate,(int)*(short *)(iVar23 + 0x28));
            local_c0 = 0.0;
            IsoToWorld__FRC7FTilePtRCf(&worldDest,&dest,&local_c0);
            local_bc = 0.0;
            IsoFracsToWorld__FRCfN20(&slotOffset,x,x + 1,&local_bc);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
            fVar25 = slotOffset.field0_0x0.d[2] * rotate.field0_0x0.d[2][1];
            fVar26 = slotOffset.field0_0x0.d[0] * rotate.field0_0x0.d[0][0] +
                     slotOffset.field0_0x0.d[1] * rotate.field0_0x0.d[1][0] +
                     slotOffset.field0_0x0.d[2] * rotate.field0_0x0.d[2][0] +
                     rotate.field0_0x0.d[3][0];
            slotOffset.field0_0x0.d[2] =
                 slotOffset.field0_0x0.d[0] * rotate.field0_0x0.d[0][2] +
                 slotOffset.field0_0x0.d[1] * rotate.field0_0x0.d[1][2] +
                 slotOffset.field0_0x0.d[2] * rotate.field0_0x0.d[2][2] + rotate.field0_0x0.d[3][2];
            fVar25 = slotOffset.field0_0x0.d[0] * rotate.field0_0x0.d[0][1] +
                     slotOffset.field0_0x0.d[1] * rotate.field0_0x0.d[1][1] + fVar25 +
                     rotate.field0_0x0.d[3][1];
                    /* end of inlined section */
            slotOffset.field0_0x0._0_8_ = CONCAT44(fVar25,fVar26);
            puVar1 = (undefined *)((int)&slotOffset.field0_0x0 + 7);
            uVar18 = (uint)puVar1 & 7;
            puVar6 = (ulong *)(puVar1 + -uVar18);
            *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 |
                      (ulong)slotOffset.field0_0x0._0_8_ >> (7 - uVar18) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            worldDest.field0_0x0.d[0] = worldDest.field0_0x0.d[0] + fVar26;
            worldDest.field0_0x0.d[1] = worldDest.field0_0x0.d[1] + fVar25;
            worldDest.field0_0x0.d[2] = worldDest.field0_0x0.d[2] + slotOffset.field0_0x0.d[2];
                    /* end of inlined section */
            WorldToIso__FRC5EVec3((EVec3 *)local_140);
            dest = _local_140;
            puVar1 = (undefined *)((int)&dest.x.whole + 3);
            uVar18 = (uint)puVar1 & 7;
            puVar6 = (ulong *)(puVar1 + -uVar18);
            *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | (ulong)_local_140 >> (7 - uVar18) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
            fVar25 = x[8];
          }
          else {
            iVar24 = *(int *)(iVar11 + 4);
            uVar21 = (ulong)iVar24;
            lVar17 = (**(code **)(iVar24 + 0x254))(iVar11 + *(short *)(iVar24 + 0x250));
            uVar9 = 0x20;
            if (lVar17 == 0) {
              pTVar19 = this->_vb1168;
              uVar20 = 0x20;
              goto LAB_00234080;
            }
            uVar18 = iVar23 + 0xcfU & 7;
            uVar2 = iVar23 + 200U & 7;
            dest = (FTilePt)((*(long *)((iVar23 + 0xcfU) - uVar18) << (7 - uVar18) * 8 |
                             uVar21 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) &
                             -1L << (8 - uVar2) * 8 |
                            *(ulong *)((iVar23 + 200U) - uVar2) >> uVar2 * 8);
            puVar1 = (undefined *)((int)&dest.x.whole + 3);
            uVar18 = (uint)puVar1 & 7;
            puVar6 = (ulong *)(puVar1 + -uVar18);
            *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | (ulong)dest >> (7 - uVar18) * 8;
            container = (cXObject__21_1030 *)0x0;
            iVar11 = *(int *)(iVar23 + 0xe0);
            if (lVar22 != 0) {
              container = *(cXObject__21_1030 **)(iVar23 + 4);
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
            fVar25 = x[8];
                    /* end of inlined section */
                    /* end of inlined section */
            slotNum = x[9];
          }
          bVar7 = ((uint)fVar25 & 0x800) != 0;
          goto LAB_0023425c;
        }
        pTVar19 = this->_vb1168;
      }
      uVar9 = 0x1b;
      uVar20 = 0x1b;
LAB_00234080:
      pTVar19->fError = uVar9;
      pcVar5 = this->_vb966->__vtable;
      (*(code *)pcVar5->SimEnabled)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->SimIndependent,uVar20);
      return kError;
    }
    uVar18 = iVar23 + 0xcfU & 7;
    uVar2 = iVar23 + 200U & 7;
    dest = (FTilePt)((*(long *)((iVar23 + 0xcfU) - uVar18) << (7 - uVar18) * 8 |
                     uVar21 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((iVar23 + 200U) - uVar2) >> uVar2 * 8);
    puVar1 = (undefined *)((int)&dest.x.whole + 3);
    uVar18 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar18);
    *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | (ulong)dest >> (7 - uVar18) * 8;
    container = (cXObject__21_1030 *)0x0;
    iVar12 = *(int *)(*(int *)(iVar23 + 4) + 4);
    iVar11 = (**(code **)(iVar12 + 0x2d4))(*(int *)(iVar23 + 4) + (int)*(short *)(iVar12 + 0x2d0));
    if (lVar22 != 0) {
      container = *(cXObject__21_1030 **)(iVar23 + 4);
    }
    slotNum = 0.0;
    bVar7 = false;
    pcVar5 = this->_vb966->__vtable;
    iVar12 = (*(code *)pcVar5->ReconType)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->ReconStream,1);
    goto LAB_0023425c;
  }
  slotNum = 0.0;
  container = (cXObject__21_1030 *)0x0;
  bVar7 = false;
  iVar12 = *(int *)(*(int *)(iVar23 + 4) + 4);
  uVar21 = (ulong)iVar12;
  uVar10 = (**(code **)(iVar12 + 0x2cc))(*(int *)(iVar23 + 4) + (int)*(short *)(iVar12 + 0x2c8));
  uVar18 = uVar10 + 7 & 7;
  uVar2 = uVar10 & 7;
  dest = (FTilePt)((*(long *)((uVar10 + 7) - uVar18) << (7 - uVar18) * 8 |
                   uVar21 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                  *(ulong *)(uVar10 - uVar2) >> uVar2 * 8);
  puVar1 = (undefined *)((int)&dest.x.whole + 3);
  uVar18 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar18);
  *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | (ulong)dest >> (7 - uVar18) * 8;
  iVar12 = *(int *)(*(int *)(iVar23 + 4) + 4);
  iVar11 = (**(code **)(iVar12 + 0x2d4))(*(int *)(iVar23 + 4) + (int)*(short *)(iVar12 + 0x2d0));
  pcVar5 = this->_vb966->__vtable;
  iVar12 = (*(code *)pcVar5->ReconType)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->ReconStream,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  _local_140 = (FTilePt)0x0;
  switch(*(ushort *)(iVar23 + 0x28) & 7) {
  case 1:
    _local_140 = (FTilePt)0x100000000;
  case 0:
    _local_140 = (FTilePt)((ulong)_local_140 | 0xffffffff);
    break;
  case 3:
    _local_140 = (FTilePt)0x1;
  case 2:
    uVar18 = 1;
    goto LAB_00233dbc;
  case 5:
    _local_140 = (FTilePt)0xffffffff00000000;
  case 4:
    _local_140 = (FTilePt)((ulong)_local_140 | 1);
    break;
  case 7:
    _local_140 = (FTilePt)0xffffffff;
  case 6:
    uVar18 = 0xffffffff;
LAB_00233dbc:
    _local_140 = (FTilePt)((ulong)_local_140 | (ulong)uVar18 << 0x20);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  dest = (FTilePt)CONCAT44(dest.x.whole + stack0xfffffec4 * 0x10,
                           dest.y.whole + local_140._0_4_ * 0x10);
  _local_140 = (FTilePt)CONCAT44(stack0xfffffec4 * 0x10,local_140._0_4_ * 0x10);
                    /* end of inlined section */
LAB_0023425c:
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  iVar24 = 0;
  iVar23 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  dirDisp = 0;
  if (((param->field0_0x0).bparam[2] & 1) != 0) {
    pcVar5 = this->_vb966->__vtable;
    iVar24 = (this->fLocation).x.whole - dest.x.whole;
    iVar23 = (this->fLocation).y.whole - dest.y.whole;
    iVar14 = (*(code *)pcVar5->ReconType)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->ReconStream,1);
    dirDisp = iVar14 - iVar12;
  }
  if ((container != (cXObject__21_1030 *)0x0) &&
     (lVar17 = (*(code *)container->__vtable[1].GetMiscFlag)
                         ((int)&container->_vb899 +
                          (int)*(short *)&container->__vtable[1].SetMiscFlag,slotNum), lVar17 != 0))
  {
    fVar27 = ((float *)lVar17)[1];
    fVar28 = *(float *)lVar17;
    uVar21 = (*(code *)container->__vtable->ReconType)
                       ((int)&container->_vb899 + (int)*(short *)&container->__vtable->ReconStream,1
                       );
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    fVar26 = 0.0;
    uVar21 = uVar21 & 7;
    fVar25 = 0.0;
    if (uVar21 == 2) {
      fVar25 = -fVar27;
      fVar26 = fVar28;
    }
    else if (uVar21 < 3) {
      if (uVar21 == 0) {
        fVar25 = fVar28;
        fVar26 = fVar27;
      }
    }
    else if (uVar21 == 4) {
      fVar25 = -fVar28;
      fVar26 = -fVar27;
    }
    else if (uVar21 == 6) {
      fVar25 = fVar27;
      fVar26 = -fVar28;
    }
                    /* end of inlined section */
    iVar24 = iVar24 + (int)fVar25;
    iVar23 = iVar23 + (int)fVar26;
  }
  pcVar4 = container;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  uVar9 = (param->field0_0x0).bparam[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  gPlacementError = 0;
  gPlacementConflict = (cXObject__21_1030 *)0x0;
  puVar1 = local_140 + 7;
  uVar18 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar18) =
       *(ulong *)(puVar1 + -uVar18) & -1L << (uVar18 + 1) * 8 | (ulong)dest >> (7 - uVar18) * 8;
  _local_140 = dest;
  TVar15 = TrySnap__12cXObjectImplG7FTilePtiP8cXObjectibiT5
                     (this,(FTilePt *)local_140,iVar11,pcVar4,(int)slotNum,bVar7,iVar12,
                      (bool)((byte)(uVar9 >> 2) & 1));
                    /* inlined from SCID.h */
  if (this == (cXObjectImpl__127_901 *)0x0) {
    pvVar16 = (void *)0x0;
  }
  else {
    pvVar16 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonImplID);
  }
                    /* end of inlined section */
  this->fData[0x34] = 0;
  pcVar4 = gPlacementConflict;
  if (TVar15 == kTrueComplete) {
    if (pvVar16 == (void *)0x0) {
      return kTrueComplete;
    }
    iVar12 = **(int **)((int)pvVar16 + 0x3d0);
    (**(code **)(iVar12 + 0x5c))
              ((float)iVar24,(float)iVar23,(float)dirDisp,
               (int)*(int **)((int)pvVar16 + 0x3d0) + (int)*(short *)(iVar12 + 0x58));
    return kTrueComplete;
  }
  if (pvVar16 == (void *)0x0) {
    uVar9 = this->fData[0x34];
    goto LAB_002344ec;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if (((param->field0_0x0).bparam[2] >> 1 & 1) != 0) {
    if (gPlacementError != 0xb) {
      uVar9 = this->fData[0x34];
      goto LAB_002344ec;
    }
    if (gPlacementConflict == (cXObject__21_1030 *)0x0) {
      uVar9 = this->fData[0x34];
      goto LAB_002344ec;
    }
    lVar17 = (*(code *)gPlacementConflict->__vtable[1].Pickup)
                       ((int)&gPlacementConflict->_vb899 +
                        (int)*(short *)&gPlacementConflict->__vtable[1].Turn);
    if (lVar17 != 2) {
      uVar9 = this->fData[0x34];
      goto LAB_002344ec;
    }
                    /* inlined from SCID.h */
    this_00 = (cXPersonImpl__123_903 *)_dyncastimpl__7TreeSim4SCID(pcVar4->_vb899,cXPersonImplID);
                    /* end of inlined section */
    if (this_00 == (cXPersonImpl__123_903 *)0x0) {
      uVar9 = this->fData[0x34];
      goto LAB_002344ec;
    }
    iVar23 = *(int *)(*(int *)((int)pvVar16 + 4) + 4);
    iVar23 = (**(code **)(iVar23 + 0xb4))
                       (*(int *)((int)pvVar16 + 4) + (int)*(short *)(iVar23 + 0xb0));
    bVar7 = MoveOutOfWay__12cXPersonImpli(this_00,*(int *)(iVar23 + 0x20));
    if (bVar7) {
      this->fData[0x34] = 1;
    }
  }
  uVar9 = this->fData[0x34];
LAB_002344ec:
  if ((uVar9 == 0) && (gPlacementError == 1)) {
    this->fData[0x34] = 2;
  }
  if (gPlacementConflict == (cXObject__21_1030 *)0x0) {
    this->fData[0x36] = 0;
  }
  else {
    uVar9 = (*(code *)gPlacementConflict->__vtable[1].UserCanPlace)
                      ((int)&gPlacementConflict->_vb899 +
                       (int)*(short *)&gPlacementConflict->__vtable[1].IsPartOfMe);
    this->fData[0x36] = uVar9;
  }
  return TVar15;
}

TreeReturnCode cXObjectImpl::TrySnap(FTilePt loc, int level, cXObject *container, Int slotNum, bool ignoreRooms, Int snapDirection, bool useFootprint) {
	CTilePt pt;
	FTilePt delta;
	Int wallBlockFlags;
	FTilePt origin;
	Int dir;
	Int x;
	Int y;
	SInt16 stashDir;
	FTileRect wallTest;
	cXObject *this;
	cXObject *this;
	cXPersonImpl *person;
	cXObjectImpl *ptr;
	
  undefined *puVar1;
  cXObject__21_1030__vtable *pcVar2;
  ulong *puVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  FInt FVar14;
  FInt FVar15;
  cXObject__21_1030 *pcVar16;
  CTilePt pt;
  FTilePt delta;
  FTilePt local_d0 [2];
  FTilePt origin;
  int local_b0;
  
  local_b0 = (int)useFootprint;
  __7CTilePtRC7FTilePti(&pt,loc,level);
  if (ignoreRooms) {
    pcVar16 = this->_vb966;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&pt);
    if (lVar12 != 0) {
      gPlacementError = 1;
      goto LAB_00234924;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar12 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&pt);
    pcVar2 = this->_vb966->__vtable;
    lVar10 = (*(code *)pcVar2[1].ParseUIString)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].RunTree);
    if (lVar12 != lVar10) goto LAB_00234924;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,
                        &this->fLocation);
    if (lVar12 != 0) {
      pcVar16 = this->_vb966;
      goto LAB_00234818;
    }
    puVar1 = (undefined *)((int)&(loc->x).whole + 3);
    uVar7 = (uint)puVar1 & 7;
    uVar6 = (uint)loc & 7;
    uVar11 = *(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)loc - uVar6) >> uVar6 * 8;
    puVar1 = (undefined *)((int)&delta.x.whole + 3);
    uVar7 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar7);
    *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | uVar11 >> (7 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    delta.x.whole = (int)(uVar11 >> 0x20);
    delta.y.whole = (int)uVar11;
    local_d0[0].x.whole = 0;
    delta = (FTilePt)CONCAT44(delta.x.whole - (this->fLocation).x.whole,
                              delta.y.whole - (this->fLocation).y.whole);
    local_d0[0].y.whole = 0;
    bVar4 = __eq__C7FTilePtRC7FTilePt(&delta,local_d0);
                    /* end of inlined section */
    if (!bVar4) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      FVar15.whole = -delta.x.whole;
      if (-1 < (long)delta) {
        FVar15.whole = delta.x.whole;
      }
      FVar14.whole = -delta.y.whole;
      if (-1 < delta.y.whole) {
        FVar14.whole = delta.y.whole;
      }
      origin.x.whole = 0;
      origin.y.whole = 0;
      if (FVar15.whole << 1 < FVar14.whole) {
        uVar7 = 4;
      }
      else {
        uVar7 = 3;
        if (FVar14.whole << 1 < FVar15.whole) {
          uVar7 = 2;
        }
      }
      if ((long)delta < 0) {
        if (uVar7 == 2) {
          uVar7 = 6;
        }
        else if (uVar7 == 3) {
          uVar7 = 5;
        }
      }
      if (-1 < delta.y.whole) {
        pcVar16 = this->_vb966;
        goto LAB_00234780;
      }
      if (uVar7 == 4) {
        uVar7 = 0;
LAB_0023477c:
                    /* end of inlined section */
        pcVar16 = this->_vb966;
      }
      else if (uVar7 < 5) {
        if (uVar7 == 3) {
          uVar7 = 1;
          goto LAB_0023477c;
        }
        pcVar16 = this->_vb966;
      }
      else {
        if (uVar7 == 5) {
          uVar7 = 7;
          goto LAB_0023477c;
        }
        pcVar16 = this->_vb966;
      }
LAB_00234780:
      (*(code *)pcVar16->__vtable[1].TestIntersection)
                (&origin,(int)&pcVar16->_vb899 + (int)*(short *)&pcVar16->__vtable[1].IsInWorld);
      uVar6 = GetWallBlockFlagsAtTile__8cXObjectRC7CTilePti((CTilePt *)&origin,uVar7);
      ___7CTilePt((CTilePt *)&origin,2);
      if ((uVar6 & 1) != 0) goto LAB_00234924;
      __7CTilePtRC7FTilePti((CTilePt *)&origin,loc,this->fLevel);
      uVar7 = GetWallBlockFlagsAtTile__8cXObjectRC7CTilePti
                        ((CTilePt *)&origin,(uVar7 + 4) - (uVar7 + 4 & 0x18));
      ___7CTilePt((CTilePt *)&origin,2);
      if ((uVar7 & 1) != 0) goto LAB_00234924;
    }
    pcVar16 = this->_vb966;
  }
LAB_00234818:
  lVar12 = (*(code *)pcVar16->__vtable->GetAttr)
                     ((int)&pcVar16->_vb899 + (int)*(short *)&pcVar16->__vtable->GetTemp,loc,level,
                      container,slotNum);
  if (lVar12 == 0) {
LAB_00234924:
    ___7CTilePt(&pt,2);
    return kFalseComplete;
  }
  if ((container != (cXObject__21_1030 *)0x0) && (local_b0 != 0)) {
    pcVar2 = this->_vb966->__vtable;
    uVar13 = (*(code *)pcVar2->ReconType)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->ReconStream,1);
    pcVar2 = this->_vb966->__vtable;
    (*(code *)pcVar2->GetObstacleAtLocation)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetRelMatrix,1,
               (short)snapDirection);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    iVar8 = (*(code *)container->__vtable[1].GetObjectImplementation)
                      ((int)&container->_vb899 +
                       (int)*(short *)&container->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
    ComputeRect__12cXObjectImplRC7FTilePtP9FTileRect
              (this,(FTilePt *)(iVar8 + 200),(FTileRect *)&delta);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    iVar8 = (*(code *)container->__vtable[1].GetObjectImplementation)
                      ((int)&container->_vb899 +
                       (int)*(short *)&container->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
    sVar5 = SectWall__FP9FTileRecti((FTileRect *)&delta,*(int *)(iVar8 + 0xe0));
    if (sVar5 != 0) {
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->GetObstacleAtLocation)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetRelMatrix,1);
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->GetObstacleAtLocation)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetRelMatrix,0x36,0);
      goto LAB_00234924;
    }
    pcVar2 = this->_vb966->__vtable;
    (*(code *)pcVar2->GetObstacleAtLocation)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetRelMatrix,1,uVar13);
  }
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->GetAdultAnimTable)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetModule,loc,level,container,
             slotNum);
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->GetObstacleAtLocation)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetRelMatrix,1,
             (short)snapDirection);
  pcVar2 = this->_vb966->__vtable;
  lVar12 = (*(code *)pcVar2[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].Turn);
  if (lVar12 == 2) {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonImplID);
    }
                    /* end of inlined section */
    if (pvVar9 != (void *)0x0) {
      iVar8 = **(int **)((int)pvVar9 + 0x3d0);
      (**(code **)(iVar8 + 0x3c))
                ((int)*(int **)((int)pvVar9 + 0x3d0) + (int)*(short *)(iVar8 + 0x38));
    }
  }
  ___7CTilePt(&pt,2);
  return kTrueComplete;
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
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___8BString2(&sNameLocal,2);
      ___8BString2(&sJobDescSub,2);
      ___8BString2(&sGradeSub,2);
      ___8BString2(&sJobOfferSub,2);
      ___8BString2(&sTimeSub,2);
      ___8BString2(&sLocalSub,2);
      ___8BString2(&sJobSub,2);
      ___8BString2(&sObjectSub,2);
      ___8BString2(&sMeSub,2);
      ___8BString2(&sFamilySub,2);
      ___8BString2(&sFamilyAssetsSub,2);
      ___8BString2(&sNeighborSub,2);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectSim.cpp */
      __8BString2PCw(&sNeighborSub,(int *)&DAT_003ba460);
      __8BString2PCw(&sFamilyAssetsSub,(int *)&DAT_003ba488);
      __8BString2PCw(&sFamilySub,(int *)&DAT_003ba4c0);
      __8BString2PCw(&sMeSub,(int *)&DAT_003ba4e0);
      __8BString2PCw(&sObjectSub,(int *)&DAT_003ba4f0);
      __8BString2PCw(&sJobSub,(int *)&DAT_003ba510);
      __8BString2PCw(&sLocalSub,(int *)&DAT_003ba528);
      __8BString2PCw(&sTimeSub,(int *)&DAT_003ba548);
      __8BString2PCw(&sJobOfferSub,(int *)&DAT_003ba578);
      __8BString2PCw(&sGradeSub,(int *)&DAT_003ba5a0);
      __8BString2PCw(&sJobDescSub,(int *)&DAT_003ba5c0);
      __8BString2PCw(&sNameLocal,(int *)&DAT_003ba5e8);
    }
  }
  return;
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

void global constructors keyed to gLogSounds() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to gLogSounds() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

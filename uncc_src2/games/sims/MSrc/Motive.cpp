// STATUS: NOT STARTED

#include "Motive.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb941;
	__vtbl_ptr_type *$vf1007;
	
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
	cXObject *$vb1007;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf882;
	
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

struct MotiveConstantsClient : GlobalConstantsClient {
	MotiveConstantsClient& operator=();
	MotiveConstantsClient();
	MotiveConstantsClient();
	/* vtable[3] */ virtual void UpdateConstants();
};

static int sConstantsUpdated = 0;

__vtbl_ptr_type MotiveConstantsClient virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &GlobalConstantsClient::GetFile,
		/* .__delta2 = */ -20920
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &GlobalConstantsClient::GetID,
		/* .__delta2 = */ -20872
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &MotiveConstantsClient::UpdateConstants,
		/* .__delta2 = */ -31312
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static MotiveConstantsClient sTheClient;
static float totalEnergyShift;
static int wakeHours;
static float sleepHours;
static float wakeEnergyDelta;
static float sleepEnergyDelta;
static int wakeTime;
static int bedTime;
static float clockDrift;
static float hungerToBladderRatio;
static float comfortDecBase;
static float comfortDecMultiplier;
static float hungerDecRatio;
static float socialDecBase;
static float socialDecMultiplier;
static float entWakeDec;
static float entSleepMultiplier;
static float hygWakeDec;
static float hygSleepDec;
static float bladderWakeDec;
static float bladderSleepDec;

ConstantsClient* GetMotiveConstantsClient() {
  return (ConstantsClient *)&sTheClient;
}

void MotiveConstantsClient::UpdateConstants() {
	iResFile *file;
	bool save;
	AUTOPTR<FloatConstants> mc;
	float comfortDecLazy;
	float comfortDecActive;
	
  ConstantsClient__vtable *pCVar1;
  FloatConstants *pInstance;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  AUTOPTR_FloatConstants_ mc;
  
  pCVar1 = (this->field0_0x0).field0_0x0.__vtable;
  lVar2 = (*(code *)pCVar1->UpdateConstants)
                    ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pCVar1->GetID);
  pCVar1 = (this->field0_0x0).field0_0x0.__vtable;
  uVar3 = (*(code *)pCVar1[1].GetFile)
                    ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)(pCVar1 + 1));
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__14FloatConstantsP14FloatConstants((FloatConstants *)0x0);
  pInstance = CreateInstance__14FloatConstants();
                    /* end of inlined section */
  if (lVar2 != 0) {
                    /* end of inlined section */
    (*(code *)pInstance->__vtable[1].Load)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].Has,lVar2,uVar3);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  uVar6 = 0x3e800000;
  uVar7 = 0x3dcccccd;
  totalEnergyShift =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x43340000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bd2b8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x41800000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bd2c8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  wakeHours = (int)fVar4;
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x40e00000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bd2d8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  wakeTime = (int)fVar4;
  clockDrift = (float)(**(code **)(pInstance->__vtable + 1))
                                (0x3c23d70a,
                                 (int)&pInstance->__vtable +
                                 (int)*(short *)&pInstance->__vtable->Load,0x3bd2e8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  hungerToBladderRatio =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar6,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3bd2f8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x3ecccccd,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bd318,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar5 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x3f19999a,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bd338,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  hungerDecRatio =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3abb3ee7,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bd350,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  socialDecBase =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar7,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3bd368,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  socialDecMultiplier =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x39d1b717,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bd380,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  entWakeDec = (float)(**(code **)(pInstance->__vtable + 1))
                                (uVar6,(int)&pInstance->__vtable +
                                       (int)*(short *)&pInstance->__vtable->Load,0x3bd3a0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  entSleepMultiplier =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3f000000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bd3b8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  hygWakeDec = (float)(**(code **)(pInstance->__vtable + 1))
                                (0x3e19999a,
                                 (int)&pInstance->__vtable +
                                 (int)*(short *)&pInstance->__vtable->Load,0x3bd3d0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  hygSleepDec = (float)(**(code **)(pInstance->__vtable + 1))
                                 (uVar7,(int)&pInstance->__vtable +
                                        (int)*(short *)&pInstance->__vtable->Load,0x3bd3e8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  bladderWakeDec =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3e99999a,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bd400,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  bladderSleepDec =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3e4ccccd,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bd420,1);
  sleepHours = (float)(0x18 - wakeHours);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  comfortDecMultiplier = (fVar4 - fVar5) * 0.001;
  bedTime = wakeTime + wakeHours;
  sConstantsUpdated = 1;
  sleepEnergyDelta = (totalEnergyShift / sleepHours) * 0.03333334;
  wakeEnergyDelta = -(totalEnergyShift / (float)wakeHours) * 0.03333334;
  comfortDecBase = fVar5;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__14FloatConstantsP14FloatConstants(pInstance);
  return;
}

void Motives::Init() {
	int count;
	ConstantsClient *cc;
	
  ConstantsClient *pCVar1;
  float *pfVar2;
  int iVar3;
  
                    /* end of inlined section */
  if (sConstantsUpdated == 0) {
    pCVar1 = GetMotiveConstantsClient__Fv();
    (*(code *)pCVar1->__vtable[1].UpdateConstants)
              ((int)&pCVar1->__vtable + (int)*(short *)&pCVar1->__vtable[1].GetID);
  }
  iVar3 = 0xf;
  pfVar2 = this->Motive + 0xf;
  do {
    *pfVar2 = 0.0;
    iVar3 = iVar3 + -1;
    pfVar2 = pfVar2 + -1;
  } while (-1 < iVar3);
  pfVar2 = this->oldMotive + 0xf;
  iVar3 = 0xf;
  do {
    *pfVar2 = 0.0;
    iVar3 = iVar3 + -1;
    pfVar2 = pfVar2 + -1;
  } while (-1 < iVar3);
  this->Motive[5] = 70.0;
  this->Motive[7] = -40.0;
  this->person = (cXPerson__20_1697 *)0x0;
  this->oldMotive[5] = 70.0;
  this->Motive[0xb] = 0.0;
  return;
}

void Motives::Sim() {
	float tem;
	int z;
	
  cSimulator__vtable *pcVar1;
  cXPerson__20_1697 *pcVar2;
  cXPerson__20_1697__vtable *pcVar3;
  float *pfVar4;
  cSimulator *pcVar5;
  int iVar6;
  Motives *pMVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pcVar5 = _5Globs_pSimulator;
  if (0.0 <= this->Motive[0xb]) {
    fVar9 = this->Motive[5] + wakeEnergyDelta;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    this->Motive[5] = this->Motive[5] + sleepEnergyDelta;
    pcVar1 = pcVar5->__vtable;
    iVar6 = (*(code *)pcVar1->Resume)((int)&pcVar5->__vtable + (int)*(short *)&pcVar1->Pause,0);
    if (iVar6 <= wakeTime) {
      fVar9 = this->Motive[7];
      goto LAB_00258be8;
    }
    if (bedTime <= iVar6) {
      fVar9 = this->Motive[7];
      goto LAB_00258be8;
    }
    fVar9 = this->Motive[5] - clockDrift;
  }
  this->Motive[5] = fVar9;
  fVar9 = this->Motive[7];
LAB_00258be8:
  fVar9 = fVar9 - this->oldMotive[7];
  if (0.0 < fVar9) {
    this->Motive[9] = this->Motive[9] - fVar9 * hungerToBladderRatio;
    pcVar2 = this->person;
  }
  else {
    pcVar2 = this->person;
  }
  iVar6 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                    ((int)&pcVar2->_vb2795 + (int)*(short *)&pcVar2->__vtable->GetRecording,3);
  pcVar2 = this->person;
  fVar9 = (this->Motive[7] + 100.0) * hungerDecRatio;
  this->Motive[6] = this->Motive[6] - (comfortDecBase + comfortDecMultiplier * (float)iVar6);
  this->Motive[7] = this->Motive[7] - fVar9;
  pcVar3 = pcVar2->__vtable;
  iVar6 = (*(code *)pcVar3->GetRecordDuration)
                    ((int)&pcVar2->_vb2795 + (int)*(short *)&pcVar3->GetRecording,6);
  if (0.0 <= this->Motive[0xb]) {
    this->Motive[0xe] = this->Motive[0xe] - (socialDecBase + socialDecMultiplier * (float)iVar6);
  }
  if (0.0 <= this->Motive[0xb]) {
    fVar10 = this->Motive[8];
    fVar12 = this->Motive[9];
    fVar11 = this->Motive[0xf] - entWakeDec;
    fVar9 = bladderWakeDec;
    fVar13 = hygWakeDec;
  }
  else {
    fVar10 = this->Motive[8];
    fVar12 = this->Motive[9];
    fVar11 = this->Motive[0xf] * entSleepMultiplier;
    fVar9 = bladderSleepDec;
    fVar13 = hygSleepDec;
  }
  this->Motive[0xf] = fVar11;
  this->Motive[8] = fVar10 - fVar13;
  this->Motive[9] = fVar12 - fVar9;
  pfVar8 = this->oldMotive;
  iVar6 = 0xf;
  pMVar7 = this;
  do {
    if (100.0 < pMVar7->Motive[0]) {
      pMVar7->Motive[0] = 100.0;
    }
    if (pMVar7->Motive[0] < -100.0) {
      pMVar7->Motive[0] = -100.0;
    }
    pfVar4 = pMVar7->Motive;
    iVar6 = iVar6 + -1;
    pMVar7 = (Motives *)(pMVar7->Motive + 1);
    *pfVar8 = *pfVar4;
    pfVar8 = pfVar8 + 1;
  } while (-1 < iVar6);
  pcVar3 = this->person->__vtable;
  (*(code *)pcVar3->GetDestList)((int)&this->person->_vb2795 + (int)*(short *)&pcVar3->IsCarrying);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
    __21GlobalConstantsClients(&sTheClient.field0_0x0,1);
    sTheClient.field0_0x0.field0_0x0.__vtable =
         (ConstantsClient__vtable *)_vt_21MotiveConstantsClient;
  }
  return;
}

MotiveConstantsClient* MotiveConstantsClient::MotiveConstantsClient() {
  __21GlobalConstantsClients(&this->field0_0x0,1);
  (this->field0_0x0).field0_0x0.__vtable = (ConstantsClient__vtable *)_vt_21MotiveConstantsClient;
  return this;
}

void global constructors keyed to GetMotiveConstantsClient() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

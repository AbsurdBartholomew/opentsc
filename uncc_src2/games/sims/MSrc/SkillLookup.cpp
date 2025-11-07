// STATUS: NOT STARTED

#include "SkillLookup.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb919;
	__vtbl_ptr_type *$vf985;
	
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
	cXObject *$vb985;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1094;
	
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

struct AUTOPTR<AnimTable> {
private:
	AnimTable *m_ptr;
	
public:
	AUTOPTR();
	AUTOPTR();
	AUTOPTR(AUTOPTR<AnimTable>*, int, void);
	AnimTable* CreateInstance();
	void Reset();
	AnimTable* operator AnimTable *();
	AnimTable* operator->();
private:
	AUTOPTR<AnimTable>& operator=();
};

struct StdMoodOverride {
	AUTOPTR<AnimTable> fTables[3];
	
	StdMoodOverride& operator=();
	StdMoodOverride();
	StdMoodOverride(StdMoodOverride*, int, void);
	StdMoodOverride();
	AnimTable* GetTable();
	void LoadAll();
};

struct GlobalSkillTables {
	AUTOPTR<AnimTable> stdBaseline[2];
	AUTOPTR<AnimTable> stdGender[2];
	AUTOPTR<AnimTable> reach[2];
	AUTOPTR<AnimTable> legacyPerson;
	AUTOPTR<AnimTable> legacyGlobal;
	AUTOPTR<AnimTable> misc[2];
	StdMoodOverride stdSwimming;
};

static GlobalSkillTables *sTables = NULL;

static void ReportMissingAnimation(cXPerson *p, char *table, int idx) {
  TreeSim *pTVar1;
  TreeSim__vtable *pTVar2;
  cXObject__118_985__vtable *pcVar3;
  
  pTVar1 = p->_vb985->_vb919;
  pTVar2 = pTVar1->__vtable;
  (*(code *)pTVar2->GetMainSimElem)
            ((int)&pTVar1->m_pObject + (int)*(short *)&pTVar2->GetCurElem,0x42);
  pcVar3 = p->_vb985->__vtable;
  (*(code *)pcVar3->SimEnabled)
            ((int)&p->_vb985->_vb919 + (int)*(short *)&pcVar3->SimIndependent,0x42);
  return;
}

static void ReportMissingAnimation(cXObject *obj, cXPerson *p, AnimTable *table, int idx) {
  TreeSim *pTVar1;
  cXObject__118_985__vtable *pcVar2;
  
  pTVar1 = p->_vb985->_vb919;
  (*(code *)pTVar1->__vtable->GetMainSimElem)
            ((int)&pTVar1->m_pObject + (int)*(short *)&pTVar1->__vtable->GetCurElem,0x42,pTVar1,idx)
  ;
  pcVar2 = p->_vb985->__vtable;
  (*(code *)pcVar2->SimEnabled)
            ((int)&p->_vb985->_vb919 + (int)*(short *)&pcVar2->SimIndependent,0x42);
  return;
}

void InitSkillLookup() {
	iResFile *file;
	int i;
	iResFile *file;
	
  bool bVar1;
  AnimTable__vtable *pAVar2;
  GlobalSkillTables *pGVar3;
  GlobalSkillTables *pGVar4;
  AUTOPTR_AnimTable_ *pAVar5;
  AUTOPTR_AnimTable_ *pAVar6;
  AUTOPTR_AnimTable_ *pAVar7;
  StdMoodOverride *pSVar8;
  AnimTable *pAVar9;
  AnimTable *pAVar10;
  undefined8 uVar11;
  int iVar12;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  uVar11 = (*(code *)_5Globs_pObjectFolder->__vtable->GetNextSelector)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->CountSelectors);
  pGVar3 = (GlobalSkillTables *)__builtin_new(0x34);
  iVar12 = 1;
  pGVar4 = pGVar3;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    pGVar4->stdBaseline[0].m_ptr = (AnimTable *)0x0;
                    /* end of inlined section */
    iVar12 = iVar12 + -1;
    pGVar4 = (GlobalSkillTables *)(pGVar4->stdBaseline + 1);
  } while (iVar12 != -1);
  pAVar5 = pGVar3->stdGender;
  iVar12 = 1;
  pAVar6 = pGVar3->reach;
  pAVar7 = pGVar3->misc;
  pSVar8 = &pGVar3->stdSwimming;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    pAVar5->m_ptr = (AnimTable *)0x0;
                    /* end of inlined section */
    iVar12 = iVar12 + -1;
    pAVar5 = pAVar5 + 1;
  } while (iVar12 != -1);
  iVar12 = 1;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    pAVar6->m_ptr = (AnimTable *)0x0;
                    /* end of inlined section */
    iVar12 = iVar12 + -1;
    pAVar6 = pAVar6 + 1;
  } while (iVar12 != -1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  (pGVar3->legacyPerson).m_ptr = (AnimTable *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  (pGVar3->legacyGlobal).m_ptr = (AnimTable *)0x0;
                    /* end of inlined section */
  iVar12 = 1;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    pAVar7->m_ptr = (AnimTable *)0x0;
                    /* end of inlined section */
    iVar12 = iVar12 + -1;
    pAVar7 = pAVar7 + 1;
  } while (iVar12 != -1);
  iVar12 = 2;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    pSVar8->fTables[0].m_ptr = (AnimTable *)0x0;
                    /* end of inlined section */
    iVar12 = iVar12 + -1;
    pSVar8 = (StdMoodOverride *)(pSVar8->fTables + 1);
  } while (iVar12 != -1);
  pAVar5 = (pGVar3->stdSwimming).fTables + 2;
  iVar12 = 2;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    DestroyInstance__9AnimTableP9AnimTable(pAVar5->m_ptr);
    pAVar5->m_ptr = (AnimTable *)0x0;
    pAVar9 = CreateInstance__9AnimTable();
    pAVar5->m_ptr = pAVar9;
                    /* end of inlined section */
    bVar1 = 0 < iVar12;
    pAVar5 = pAVar5 + -1;
    iVar12 = iVar12 + -1;
  } while (bVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9AnimTableP9AnimTable(pGVar3->stdBaseline[0].m_ptr);
  pGVar3->stdBaseline[0].m_ptr = (AnimTable *)0x0;
  pAVar10 = CreateInstance__9AnimTable();
  pAVar9 = pGVar3->stdBaseline[1].m_ptr;
  pGVar3->stdBaseline[0].m_ptr = pAVar10;
  DestroyInstance__9AnimTableP9AnimTable(pAVar9);
  pGVar3->stdBaseline[1].m_ptr = (AnimTable *)0x0;
  pAVar10 = CreateInstance__9AnimTable();
  pAVar9 = pGVar3->stdGender[0].m_ptr;
  pGVar3->stdBaseline[1].m_ptr = pAVar10;
  DestroyInstance__9AnimTableP9AnimTable(pAVar9);
  pGVar3->stdGender[0].m_ptr = (AnimTable *)0x0;
  pAVar10 = CreateInstance__9AnimTable();
  pAVar9 = pGVar3->stdGender[1].m_ptr;
  pGVar3->stdGender[0].m_ptr = pAVar10;
  DestroyInstance__9AnimTableP9AnimTable(pAVar9);
  pGVar3->stdGender[1].m_ptr = (AnimTable *)0x0;
  pAVar10 = CreateInstance__9AnimTable();
  pAVar9 = pGVar3->reach[0].m_ptr;
  pGVar3->stdGender[1].m_ptr = pAVar10;
  DestroyInstance__9AnimTableP9AnimTable(pAVar9);
  pGVar3->reach[0].m_ptr = (AnimTable *)0x0;
  pAVar10 = CreateInstance__9AnimTable();
  pAVar9 = pGVar3->reach[1].m_ptr;
  pGVar3->reach[0].m_ptr = pAVar10;
  DestroyInstance__9AnimTableP9AnimTable(pAVar9);
  pGVar3->reach[1].m_ptr = (AnimTable *)0x0;
  pAVar10 = CreateInstance__9AnimTable();
  pAVar9 = (pGVar3->legacyPerson).m_ptr;
  pGVar3->reach[1].m_ptr = pAVar10;
  DestroyInstance__9AnimTableP9AnimTable(pAVar9);
  (pGVar3->legacyPerson).m_ptr = (AnimTable *)0x0;
  pAVar9 = CreateInstance__9AnimTable();
  (pGVar3->legacyPerson).m_ptr = pAVar9;
  DestroyInstance__9AnimTableP9AnimTable((pGVar3->legacyGlobal).m_ptr);
  (pGVar3->legacyGlobal).m_ptr = (AnimTable *)0x0;
  pAVar9 = CreateInstance__9AnimTable();
  (pGVar3->legacyGlobal).m_ptr = pAVar9;
  DestroyInstance__9AnimTableP9AnimTable(pGVar3->misc[0].m_ptr);
  pGVar3->misc[0].m_ptr = (AnimTable *)0x0;
  pAVar10 = CreateInstance__9AnimTable();
  pAVar9 = pGVar3->misc[1].m_ptr;
  pGVar3->misc[0].m_ptr = pAVar10;
  DestroyInstance__9AnimTableP9AnimTable(pAVar9);
  pGVar3->misc[1].m_ptr = (AnimTable *)0x0;
  pAVar9 = CreateInstance__9AnimTable();
  pGVar3->misc[1].m_ptr = pAVar9;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = pGVar3->stdBaseline[0].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  sTables = pGVar3;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x96);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = sTables->stdBaseline[1].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x97);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = sTables->stdGender[0].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x98);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = sTables->stdGender[1].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x99);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = sTables->reach[0].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x9a);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = sTables->reach[1].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x9b);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = (sTables->legacyPerson).m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x82);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = (sTables->legacyGlobal).m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x80);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = sTables->misc[0].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x9c);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = sTables->misc[1].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x9d);
  pGVar4 = sTables;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = (sTables->stdSwimming).fTables[0].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x9e);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = (pGVar4->stdSwimming).fTables[1].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0x9f);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar9 = (pGVar4->stdSwimming).fTables[2].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar9->__vtable;
  (*(code *)pAVar2->GetEntry)((int)&pAVar9->__vtable + (int)*(short *)&pAVar2->GetFile,uVar11,0xa0);
  return;
}

void DestroySkillLookup() {
  if (sTables != (GlobalSkillTables *)0x0) {
    ___17GlobalSkillTables(sTables,3);
  }
  sTables = (GlobalSkillTables *)0x0;
  return;
}

TreeReturnCode GetStdAnimRef(cXPerson *p, StdAnimIdx idx, SkillNameID &name) {
	StdMoodOverride *moodOverride;
	AnimTable *table;
	StdMoodOverride *this;
	AUTOPTR<AnimTable> *this;
	AUTOPTR<AnimTable> *this;
	AUTOPTR<AnimTable> *this;
	
  AnimTable *pAVar1;
  AnimTable__vtable *pAVar2;
  int iVar3;
  AnimRef *pAVar4;
  long lVar5;
  undefined2 uVar6;
  StdMoodOverride *pSVar7;
  
  pSVar7 = (StdMoodOverride *)0x0;
  lVar5 = (*(code *)p->__vtable->GetRecordDuration)
                    ((int)&p->_vb985 + (int)*(short *)&p->__vtable->GetRecording,0x40);
  if (lVar5 != 0) {
    pSVar7 = &sTables->stdSwimming;
  }
  *name = (AnimRef *)0x0;
  uVar6 = (undefined2)idx;
  if (pSVar7 != (StdMoodOverride *)0x0) {
    iVar3 = (**(code **)&p->__vtable->field_0x17c)
                      ((int)&p->_vb985 + (int)*(short *)&p->__vtable->field_0x178);
    lVar5 = (**(code **)&p->__vtable->field_0x16c)
                      ((int)&p->_vb985 + (int)*(short *)&p->__vtable->field_0x168);
    if (lVar5 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
      pAVar1 = pSVar7->fTables[iVar3].m_ptr;
    }
    else {
      pAVar1 = pSVar7->fTables[2].m_ptr;
    }
                    /* end of inlined section */
    if (pAVar1 != (AnimTable *)0x0) {
      pAVar4 = (AnimRef *)
               (*(code *)pAVar1->__vtable[1].GetID)
                         ((int)&pAVar1->__vtable + (int)*(short *)&pAVar1->__vtable[1].Load,uVar6);
      *name = pAVar4;
    }
  }
  if (*name == (AnimRef *)0x0) {
    lVar5 = (**(code **)&p->__vtable->field_0x16c)
                      ((int)&p->_vb985 + (int)*(short *)&p->__vtable->field_0x168);
    if (lVar5 == 0) {
      iVar3 = (**(code **)&p->__vtable->field_0x17c)
                        ((int)&p->_vb985 + (int)*(short *)&p->__vtable->field_0x178);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
      pAVar1 = sTables->stdGender[iVar3].m_ptr;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* end of inlined section */
      pAVar1 = sTables->stdBaseline[1].m_ptr;
    }
                    /* end of inlined section */
    pAVar4 = (AnimRef *)
             (*(code *)pAVar1->__vtable[1].GetID)
                       ((int)&pAVar1->__vtable + (int)*(short *)&pAVar1->__vtable[1].Load,uVar6);
    *name = pAVar4;
    if (*name == (AnimRef *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
      pAVar1 = sTables->stdBaseline[0].m_ptr;
                    /* end of inlined section */
      pAVar2 = pAVar1->__vtable;
      pAVar4 = (AnimRef *)
               (*(code *)pAVar2[1].GetID)
                         ((int)&pAVar1->__vtable + (int)*(short *)&pAVar2[1].Load,uVar6);
      *name = pAVar4;
    }
  }
  return kTrueComplete;
}

TreeReturnCode GetReachAnimRef(cXPerson *p, ReachAnimIdx idx, SkillNameID &name) {
	AUTOPTR<AnimTable> *this;
	
  AnimTable *pAVar1;
  AnimTable__vtable *pAVar2;
  int iVar3;
  AnimRef *pAVar4;
  
  iVar3 = (**(code **)&p->__vtable->field_0x16c)
                    ((int)&p->_vb985 + (int)*(short *)&p->__vtable->field_0x168);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar1 = sTables->reach[iVar3].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar1->__vtable;
  pAVar4 = (AnimRef *)
           (*(code *)pAVar2[1].GetID)
                     ((int)&pAVar1->__vtable + (int)*(short *)&pAVar2[1].Load,(short)idx);
  *name = pAVar4;
  return kTrueComplete;
}

TreeReturnCode GetMiscAnimRef(cXPerson *p, int idx, SkillNameID &name) {
	AUTOPTR<AnimTable> *this;
	
  AnimTable *pAVar1;
  AnimTable__vtable *pAVar2;
  int iVar3;
  TreeReturnCode TVar4;
  long lVar5;
  
  iVar3 = (**(code **)&p->__vtable->field_0x16c)
                    ((int)&p->_vb985 + (int)*(short *)&p->__vtable->field_0x168);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar1 = sTables->misc[iVar3].m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar1->__vtable;
  lVar5 = (*(code *)pAVar2[1].GetID)
                    ((int)&pAVar1->__vtable + (int)*(short *)&pAVar2[1].Load,(short)idx);
  *name = (AnimRef *)lVar5;
  if (lVar5 == 0) {
    ReportMissingAnimation__FP8cXPersonPCci(p,"misc",idx);
    TVar4 = kError;
  }
  else {
    TVar4 = kTrueComplete;
  }
  return TVar4;
}

TreeReturnCode GetObjectAnimRef(cXObject *obj, cXPerson *p, int idx, bool c2a, SkillNameID &name) {
	bool isChild;
	bool isTargetChild;
	AnimTable *tableToUse;
	cXObject *animTarget;
	cXPerson *target;
	cXObject *ptr;
	
  cXObject__118_985__vtable *pcVar1;
  bool bVar2;
  bool bVar3;
  Interaction *pIVar4;
  cXObject__142_982 *pcVar5;
  void *pvVar6;
  ObjSelector *pOVar7;
  AnimTable *table;
  AnimRef *pAVar8;
  TreeReturnCode TVar9;
  long lVar10;
  
  lVar10 = (**(code **)&p->__vtable->field_0x16c)
                     ((int)&p->_vb985 + (int)*(short *)&p->__vtable->field_0x168);
  bVar2 = lVar10 != 0;
  bVar3 = bVar2;
  if (c2a) {
    pIVar4 = (Interaction *)
             (*(code *)p->__vtable->IsChild)
                       ((int)&p->_vb985 + (int)*(short *)&p->__vtable->IsVisitor);
    pcVar5 = GetStackObject__C11Interaction(pIVar4);
    if (pcVar5 == (cXObject__142_982 *)obj) {
      pIVar4 = (Interaction *)
               (*(code *)p->__vtable->IsChild)
                         ((int)&p->_vb985 + (int)*(short *)&p->__vtable->IsVisitor);
      pcVar5 = GetIconObject__C11Interaction(pIVar4);
                    /* inlined from SCID.h */
                    /* end of inlined section */
      if (((pcVar5 != (cXObject__142_982 *)0x0) &&
          (lVar10 = (*(code *)pcVar5->__vtable[1].Pickup)
                              ((int)&pcVar5->_vb1019 + (int)*(short *)&pcVar5->__vtable[1].Turn),
          lVar10 == 2)) &&
         (pvVar6 = _dyncastimpl__7TreeSim4SCID(pcVar5->_vb1019,cXPersonID), pvVar6 != (void *)0x0))
      {
        bVar3 = false;
        lVar10 = (**(code **)(*(int *)((int)pvVar6 + 4) + 0x16c))
                           ((int)pvVar6 + (int)*(short *)(*(int *)((int)pvVar6 + 4) + 0x168));
        if (lVar10 != 0) {
          bVar3 = true;
        }
      }
    }
  }
  if (bVar2) {
    pcVar1 = obj->__vtable;
    if (bVar3) {
      pOVar7 = (ObjSelector *)
               (*(code *)pcVar1[1].SetLevel)
                         ((int)&obj->_vb919 + (int)*(short *)&pcVar1[1].GetTreeID);
      table = GetChildAnimTable__11ObjSelector(pOVar7);
    }
    else {
      pOVar7 = (ObjSelector *)
               (*(code *)pcVar1[1].SetLevel)
                         ((int)&obj->_vb919 + (int)*(short *)&pcVar1[1].GetTreeID);
      table = GetChildToAdultAnimTable__11ObjSelector(pOVar7);
    }
  }
  else {
    pcVar1 = obj->__vtable;
    if (bVar3) {
      pOVar7 = (ObjSelector *)
               (*(code *)pcVar1[1].SetLevel)
                         ((int)&obj->_vb919 + (int)*(short *)&pcVar1[1].GetTreeID);
      table = GetAdultToChildAnimTable__11ObjSelector(pOVar7);
    }
    else {
      pOVar7 = (ObjSelector *)
               (*(code *)pcVar1[1].SetLevel)
                         ((int)&obj->_vb919 + (int)*(short *)&pcVar1[1].GetTreeID);
      table = GetAdultAnimTable__11ObjSelector(pOVar7);
    }
  }
  *name = (AnimRef *)0x0;
  if (table != (AnimTable *)0x0) {
    pAVar8 = (AnimRef *)
             (*(code *)table->__vtable[1].GetID)
                       ((int)&table->__vtable + (int)*(short *)&table->__vtable[1].Load,(short)idx);
    *name = pAVar8;
  }
  TVar9 = kTrueComplete;
  if (*name == (AnimRef *)0x0) {
    ReportMissingAnimation__FP8cXObjectP8cXPersonP9AnimTablei(obj,p,table,idx);
    TVar9 = kError;
  }
  return TVar9;
}

TreeReturnCode GetPersonStockAnimRef(cXPerson *p, int idx, SkillNameID &name) {
  AnimTable *pAVar1;
  AnimTable__vtable *pAVar2;
  TreeReturnCode TVar3;
  long lVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar1 = (sTables->legacyPerson).m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar1->__vtable;
  lVar4 = (*(code *)pAVar2[1].GetID)
                    ((int)&pAVar1->__vtable + (int)*(short *)&pAVar2[1].Load,(short)idx);
  *name = (AnimRef *)lVar4;
  if (lVar4 == 0) {
    ReportMissingAnimation__FP8cXPersonPCci(p,"pers",idx);
    TVar3 = kError;
  }
  else {
    TVar3 = kTrueComplete;
  }
  return TVar3;
}

TreeReturnCode GetGlobalAnimRef(cXPerson *p, int idx, SkillNameID &name) {
  AnimTable *pAVar1;
  AnimTable__vtable *pAVar2;
  TreeReturnCode TVar3;
  long lVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pAVar1 = (sTables->legacyGlobal).m_ptr;
                    /* end of inlined section */
  pAVar2 = pAVar1->__vtable;
  lVar4 = (*(code *)pAVar2[1].GetID)
                    ((int)&pAVar1->__vtable + (int)*(short *)&pAVar2[1].Load,(short)idx);
  *name = (AnimRef *)lVar4;
  if (lVar4 == 0) {
    ReportMissingAnimation__FP8cXPersonPCci(p,"glob",idx);
    TVar3 = kError;
  }
  else {
    TVar3 = kTrueComplete;
  }
  return TVar3;
}

AnimTable* GetLegacyPersonSkillTable() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  return (sTables->legacyPerson).m_ptr;
}

AnimTable* GetLegacyGlobalSkillTable() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  return (sTables->legacyGlobal).m_ptr;
}

AnimTable* GetMiscSkillTable() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  return sTables->misc[0].m_ptr;
}

void GlobalSkillTables::~GlobalSkillTables(int __in_chrg) {
	StdMoodOverride *this;
	AUTOPTR<AnimTable> *this;
	AUTOPTR<AnimTable> *this;
	void *pAddress;
	void *pAddress;
	AUTOPTR<AnimTable> *this;
	AUTOPTR<AnimTable> *this;
	void *pAddress;
	AUTOPTR<AnimTable> *this;
	AUTOPTR<AnimTable> *this;
	void *pAddress;
	void *pAddress;
	AUTOPTR<AnimTable> *this;
	AUTOPTR<AnimTable> *this;
	void *pAddress;
	AUTOPTR<AnimTable> *this;
	AUTOPTR<AnimTable> *this;
	void *pAddress;
	void *pAddress;
	
  GlobalSkillTables *pGVar1;
  StdMoodOverride *pSVar2;
  AUTOPTR_AnimTable_ *pAVar3;
  AUTOPTR_AnimTable_ *pAVar4;
  
  if (this != (GlobalSkillTables *)0xffffffd8) {
    pGVar1 = this + 1;
    while ((GlobalSkillTables *)&this->stdSwimming != pGVar1) {
      pGVar1 = (GlobalSkillTables *)(pGVar1[-1].stdSwimming.fTables + 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
      DestroyInstance__9AnimTableP9AnimTable(pGVar1->stdBaseline[0].m_ptr);
                    /* end of inlined section */
      pGVar1->stdBaseline[0].m_ptr = (AnimTable *)0x0;
    }
  }
  pAVar4 = &this->legacyPerson;
  pAVar3 = this->reach;
  pGVar1 = (GlobalSkillTables *)this->stdGender;
  if (this != (GlobalSkillTables *)0xffffffe0) {
    pSVar2 = &this->stdSwimming;
    while ((StdMoodOverride *)this->misc != pSVar2) {
      pSVar2 = (StdMoodOverride *)(&((AUTOPTR_AnimTable_ *)(pSVar2 + -1))->m_ptr + 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
      DestroyInstance__9AnimTableP9AnimTable(pSVar2->fTables[0].m_ptr);
                    /* end of inlined section */
      pSVar2->fTables[0].m_ptr = (AnimTable *)0x0;
    }
  }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  DestroyInstance__9AnimTableP9AnimTable((this->legacyGlobal).m_ptr);
  (this->legacyGlobal).m_ptr = (AnimTable *)0x0;
  DestroyInstance__9AnimTableP9AnimTable((this->legacyPerson).m_ptr);
                    /* end of inlined section */
  (this->legacyPerson).m_ptr = (AnimTable *)0x0;
  if (pAVar3 != (AUTOPTR_AnimTable_ *)0x0) {
    while (pAVar3 != pAVar4) {
      pAVar4 = pAVar4 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
      DestroyInstance__9AnimTableP9AnimTable(pAVar4->m_ptr);
                    /* end of inlined section */
      pAVar4->m_ptr = (AnimTable *)0x0;
    }
  }
                    /* end of inlined section */
  if (pGVar1 != (GlobalSkillTables *)0x0) {
    while (pGVar1 != (GlobalSkillTables *)pAVar3) {
      pAVar3 = pAVar3 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
      DestroyInstance__9AnimTableP9AnimTable(pAVar3->m_ptr);
                    /* end of inlined section */
      pAVar3->m_ptr = (AnimTable *)0x0;
    }
  }
                    /* end of inlined section */
  if (this != (GlobalSkillTables *)0x0) {
    while (this != pGVar1) {
      pGVar1 = (GlobalSkillTables *)(pGVar1[-1].stdSwimming.fTables + 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
      DestroyInstance__9AnimTableP9AnimTable(pGVar1->stdBaseline[0].m_ptr);
                    /* end of inlined section */
      pGVar1->stdBaseline[0].m_ptr = (AnimTable *)0x0;
    }
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

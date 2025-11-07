// STATUS: NOT STARTED

#include "GameSound.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1637;
	__vtbl_ptr_type *$vf1577;
	
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
	cXObject *$vb1577;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1441;
	
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

cIGZSndSys *g_pSndSys = NULL;
cBoxX *g_pBoxX = NULL;

cSoundPlayer* cSoundPlayer::cSoundPlayer() {
  *(undefined4 *)this = 0;
  this->fTheSystem = (cIGZSndSys *)0x0;
  this->mpBoxX = (cBoxX *)0x0;
  *(undefined4 *)&this->m_SoundOn = 0;
  return this;
}

void cSoundPlayer::~cSoundPlayer(int __in_chrg) {
	void *pAddress;
	
  cIGZSndSys *pcVar1;
  
  if (*(int *)&this->m_SoundOn != 0) {
    pcVar1 = this->fTheSystem;
    if (pcVar1 != (cIGZSndSys *)0x0) {
      (*(code *)pcVar1->__vtable->Update)
                ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->Initialize,3);
    }
    g_pSndSys = (cIGZSndSys *)0x0;
    this->fTheSystem = (cIGZSndSys *)0x0;
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void cSoundPlayer::Initialize() {
  cIGZSndSys *pcVar1;
  cBoxX *this_00;
  
  if (*(int *)this == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    if (*(int *)_5Globs_pEORCheats == 0) {
      (*(code *)_pAudio->__vtable->BindVoice)
                ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->FreeVoice);
    }
    else {
      pcVar1 = CreateInstance__10cIGZSndSys();
      g_pSndSys = pcVar1;
      this->fTheSystem = pcVar1;
      (*(code *)pcVar1->__vtable->CreateAudioStream)
                ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->CreateSoundEffect);
      if ((*(int *)this == 0) && (this->fTheSystem != (cIGZSndSys *)0x0)) {
        *(undefined4 *)&this->m_SoundOn = 1;
        *(undefined4 *)this = 1;
        this_00 = (cBoxX *)__builtin_new(0x7c);
        g_pBoxX = __5cBoxX(this_00);
        this->mpBoxX = g_pBoxX;
        Init__5cBoxX(g_pBoxX);
      }
    }
  }
  return;
}

void cSoundPlayer::Shutdown() {
  cBoxX *pcVar1;
  
  if (((*(int *)&this->m_SoundOn != 0) && (*(int *)this != 0)) && (this->mpBoxX != (cBoxX *)0x0)) {
    Shutdown__5cBoxX(this->mpBoxX);
    pcVar1 = this->mpBoxX;
    if (pcVar1 != (cBoxX *)0x0) {
      (**(code **)(pcVar1->__vtable + 1))
                ((int)&pcVar1->m_lKludgeTimerAge + (int)*(short *)&pcVar1->__vtable->Update,3);
    }
    this->mpBoxX = (cBoxX *)0x0;
    g_pBoxX = (cBoxX *)0x0;
  }
  return;
}

void cSoundPlayer::Update() {
	bool bUpdateNeeded;
	
  cBoxX *pcVar1;
  cBoxX__vtable *pcVar2;
  cIGZSndSys__vtable *pcVar3;
  bool bVar4;
  cAudioInfo *this_00;
  bool bVar5;
  
  if (*(int *)&this->m_SoundOn != 0) {
    this_00 = GetAudioInfo__Fv();
    bVar4 = TestForTvAndStereoUse__10cAudioInfoRbT1
                      (this_00,&this->mpBoxX->m_bStereoInUse,&this->mpBoxX->m_bTVInUse);
    pcVar1 = this->mpBoxX;
    if (*(int *)&pcVar1->m_bStereoInUse == 0) {
      bVar5 = bVar4;
      if (0 < pcVar1->m_iMusicVolPercent) {
        bVar5 = true;
      }
    }
    else {
      bVar5 = true;
      if (0x1fff < pcVar1->m_iMusicVolPercent) {
        bVar5 = bVar4;
      }
    }
    pcVar1 = this->mpBoxX;
    if (*(int *)&pcVar1->m_bTVInUse == 0) {
      if (0 < pcVar1->m_iTeleVolPercent) {
        bVar5 = true;
      }
    }
    else if (pcVar1->m_iTeleVolPercent < 0x2000) {
      bVar5 = true;
    }
    if (bVar5 != false) {
      Event__5cBoxXiiiii(this->mpBoxX,0x21,0,0,0,0);
    }
    pcVar2 = this->mpBoxX->__vtable;
    (*(code *)pcVar2[1].Update)
              ((int)&this->mpBoxX->m_lKludgeTimerAge + (int)*(short *)&pcVar2[1].cBoxX,0);
    pcVar3 = this->fTheSystem->__vtable;
    (**(code **)(pcVar3 + 1))
              ((int)&this->fTheSystem->__vtable + (int)*(short *)&pcVar3->StopLoadLoop);
  }
  return;
}

void cSoundPlayer::SetGameMode(eMode mode) {
  cIGZSndSys__vtable *pcVar1;
  
  if ((*(int *)&this->m_SoundOn != 0) && (*(int *)this != 0)) {
    pcVar1 = this->fTheSystem->__vtable;
    (*(code *)pcVar1[1].StopLoadLoop)
              ((int)&this->fTheSystem->__vtable + (int)*(short *)&pcVar1[1].CreateAudioStream);
    if (this->mpBoxX != (cBoxX *)0x0) {
      Event__5cBoxXiiiii(this->mpBoxX,0x24,mode,0,0,0);
    }
  }
  return;
}

void cSoundPlayer::EnableSound(bool bOn) {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x22,(int)bOn,0,0,0);
  }
  return;
}

void cSoundPlayer::EnableMusic(bool bOn) {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x23,(int)bOn,0,0,0);
  }
  return;
}

void cSoundPlayer::QuietAll() {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x14,0,0,0,0);
  }
  return;
}

bool cSoundPlayer::PlayBySource(EventMapping *sound, SInt16 sourceID) {
  bool bVar1;
  
  if (*(int *)&this->m_SoundOn == 0) {
    bVar1 = true;
  }
  else if ((short)sourceID == -2) {
    bVar1 = false;
  }
  else {
    bVar1 = MappedEvent__5cBoxXPCQ23snd12EventMappingiii
                      (this->mpBoxX,sound,(int)(short)sourceID,0,0);
  }
  return bVar1;
}

bool cSoundPlayer::PlayObjectSnd(char *sound, SInt16 sourceID) {
	EventMapping *pEvent;
	
  bool bVar1;
  long lVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar2 = (*(code *)_5Globs_pObjectFolder->__vtable[1].ApplyBCONTuningForFile)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetCurrentPerformanceCost,
                     sound);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = PlayBySource__12cSoundPlayerPCQ23snd12EventMappings(this,(EventMapping *)lVar2,sourceID)
    ;
  }
  return bVar1;
}

TreeReturnCode cSoundPlayer::PlayObjectSnd(SoundInfo *sound, SInt16 sourceID) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SoundInfo.h */
                    /* end of inlined section */
  if (((sound->fEventMapping != (EventMapping *)0x0) && (*(int *)&this->m_SoundOn != 0)) &&
     ((short)sourceID != -2)) {
    MappedEvent__5cBoxXPCQ23snd12EventMappingiii
              (this->mpBoxX,sound->fEventMapping,(int)(short)sourceID,0,0);
  }
  return kTrueComplete;
}

void cSoundPlayer::QuietBySourceID(Int sourceID) {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x17,sourceID,0,0,0);
  }
  return;
}

void cSoundPlayer::PauseSounds() {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x15,0,0,0,0);
  }
  return;
}

void cSoundPlayer::ResumeSounds() {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x16,0,0,0,0);
  }
  return;
}

void cSoundPlayer::NotifyViewChange() {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x21,0,0,0,0);
  }
  return;
}

void cSoundPlayer::NotifyHourChange() {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x21,0,0,0,0);
  }
  return;
}

int cSoundPlayer::GetFXVolume() {
	int lVolume;
	
  undefined8 unaff_retaddr;
  int lVolume;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_SoundOn == 0) {
    lVolume = 8;
  }
  else {
    Event__5cBoxXiiiii(this->mpBoxX,0x28,(int)&lVolume,0,0,0);
  }
  return lVolume;
}

int cSoundPlayer::GetMusicVolume() {
  if (*(int *)&this->m_SoundOn != 0) {
    return this->mpBoxX->m_lRawMusicVolume;
  }
  return 8;
}

int cSoundPlayer::GetVoxVolume() {
	int lVolume;
	
  undefined8 unaff_retaddr;
  int lVolume;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_SoundOn == 0) {
    lVolume = 8;
  }
  else {
    Event__5cBoxXiiiii(this->mpBoxX,0x2a,(int)&lVolume,0,0,0);
  }
  return lVolume;
}

void cSoundPlayer::SetFXVolume(int lVolume) {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x25,lVolume,0,0,0);
  }
  return;
}

void cSoundPlayer::SetMusicVolume(int lVolume) {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x26,lVolume,0,0,0);
  }
  return;
}

void cSoundPlayer::SetVoxVolume(int lVolume) {
  if (*(int *)&this->m_SoundOn != 0) {
    Event__5cBoxXiiiii(this->mpBoxX,0x27,lVolume,0,0,0);
  }
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

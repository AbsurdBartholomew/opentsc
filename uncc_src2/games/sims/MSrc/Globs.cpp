// STATUS: NOT STARTED

#include "Globs.h"

Globs *globs = NULL;
int Globs::iSaveFileVersion = 64;
static LightingParameters sLightingParameters;
static Globs _globs;
static unsigned char _pScratchMemory[1048580];
cSimulator *Globs::pSimulator;
ObjectFolder *Globs::pObjectFolder;
ObjectModule *Globs::pObjectModule;
cFixedWorld *Globs::pFixedWorld;
House *Globs::pHouse;
cSoundPlayer *Globs::pSound;
VBAnimMgr *Globs::pAnimMgr;
Neighborhood *Globs::pNeighborhood;
RoomManager *Globs::pRoomManager;
Careers *Globs::pCareers;
NghResFile *Globs::pNghResFile;
LightingParameters *Globs::pLightingParameters;
EGlobal *Globs::pEORGlobals;
EDialog *Globs::pEORDialog;
ECheatVariables *Globs::pEORCheats;
short int Globs::challengeModeData[2];

LightingParameters* LightingParameters::LightingParameters() {
  memset(this,0,0x44);
  return this;
}

void LightingParameters::~LightingParameters(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

Globs* Globs::Globs() {
  globs = this;
  return this;
}

void Globs::~Globs(int __in_chrg) {
	void *pAddress;
	
  globs = (Globs *)0x0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void Globs::Startup() {
	FileName fname;
	
  NghResFile__0_845 *this_00;
  cSoundPlayer *this_01;
  uint theSeed;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  StackString_260_ fname;
  StringBuffer SStack_130;
  char acStack_128 [264];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  __12StringBufferPcUi(&fname.field0_0x0,(char *)((uint)&fname | 8),0x104);
                    /* end of inlined section */
  _5Globs_pLightingParameters = &sLightingParameters;
  _5Globs_pCareers = CreateInstance__7Careers();
  _5Globs_pObjectFolder = CreateInstance__12ObjectFolder();
  (*(code *)_5Globs_pObjectFolder->__vtable->GetPath)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable->DoCommand,0x3bd850,1);
  this_00 = (NghResFile__0_845 *)__builtin_new(0x40);
  _5Globs_pNghResFile = __10NghResFile(this_00);
  _5Globs_pNeighborhood = CreateInstance__12Neighborhood();
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&SStack_130,acStack_128,0x104);
  append__12StringBufferPCci(&SStack_130,"UserData/Neighborhood.iff",-1);
  copy__12StringBufferRC12StringBuffer(&fname.field0_0x0,&SStack_130);
                    /* end of inlined section */
  (*(code *)_5Globs_pNeighborhood->__vtable->GetFriendCount)
            ((int)&_5Globs_pNeighborhood->__vtable +
             (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetFamilyFriendsCount,&fname);
  _5Globs_pHouse = CreateInstance__5House();
  (*(code *)_5Globs_pHouse->__vtable->GetFirstObject)
            ((int)&_5Globs_pHouse->__vtable + (int)*(short *)&_5Globs_pHouse->__vtable->SetLotSize);
  this_01 = (cSoundPlayer *)__builtin_new(0x10);
  _5Globs_pSound = __12cSoundPlayer(this_01);
  Initialize__12cSoundPlayer(_5Globs_pSound);
  GlobalDispatch__Fsi(0x8c,0);
  theSeed = TickCount__Fv();
  SetSRandSeed__FUi(theSeed);
  GlobalDispatch__Fsi(0x83,0);
  return;
}

void Globs::Shutdown() {
  iResFile__0_3211__vtable *piVar1;
  
  if (_5Globs_pSound != (cSoundPlayer *)0x0) {
    Shutdown__12cSoundPlayer(_5Globs_pSound);
    if (_5Globs_pSound != (cSoundPlayer *)0x0) {
      ___12cSoundPlayer(_5Globs_pSound,3);
    }
    _5Globs_pSound = (cSoundPlayer *)0x0;
  }
  DestroyInstance__5HouseP5House(_5Globs_pHouse);
  _5Globs_pHouse = (House *)0x0;
  DestroyInstance__12NeighborhoodP12Neighborhood(_5Globs_pNeighborhood);
  _5Globs_pNeighborhood = (Neighborhood *)0x0;
  if (_5Globs_pNghResFile != (NghResFile__0_845 *)0x0) {
    piVar1 = (_5Globs_pNghResFile->field0_0x0).__vtable;
    (*(code *)piVar1->Create)
              ((int)_5Globs_pNghResFile->m_ppHouseWriteInfo +
               *(short *)&piVar1->_dyncastimpl + -0x18,3);
  }
  _5Globs_pNghResFile = (NghResFile__0_845 *)0x0;
  DestroyInstance__12ObjectFolderP12ObjectFolder(_5Globs_pObjectFolder);
  _5Globs_pObjectFolder = (ObjectFolder *)0x0;
  DestroyInstance__7CareersP7Careers(_5Globs_pCareers);
  _5Globs_pCareers = (Careers *)0x0;
  return;
}

void* Globs::AllocateScratchMemory(void *pOwner, char *pFile, int iLine) {
  return _pScratchMemory;
}

void Globs::FreeScratchMemory(void *pOwner) {
  return;
}

StdPrm& GetChallengeModeData(int iIndex) {
  return _5Globs_challengeModeData + iIndex;
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
      ___5Globs(&_globs,2);
      ___18LightingParameters(&sLightingParameters,2);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.cpp */
      __18LightingParameters(&sLightingParameters);
      __5Globs(&_globs);
    }
  }
  return;
}

void global constructors keyed to globs() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to globs() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

// STATUS: NOT STARTED

#include "cheats.h"

struct ELightDebugDMI : EDebugMenuItem {
	ELightDebugDMI& operator=();
	ELightDebugDMI();
	ELightDebugDMI();
	/* vtable[5] */ virtual ELightDebugDMI(ELightDebugDMI*, int, void);
	/* vtable[1] */ virtual void GetDescription(char *szBuffer);
	/* vtable[3] */ virtual void ButtonPress(EDebugMenuButton button);
};

struct ESunDebugDMI : EDebugMenuItem {
	bool bClamp;
	float *m_pcolor;
	char *m_name;
	
	ESunDebugDMI& operator=();
	ESunDebugDMI();
	ESunDebugDMI();
	void Set();
	/* vtable[5] */ virtual ESunDebugDMI(ESunDebugDMI*, int, void);
	/* vtable[1] */ virtual void GetDescription(char *szBuffer);
	/* vtable[2] */ virtual void GetValue(char *szBuffer);
	/* vtable[3] */ virtual void ButtonPress(EDebugMenuButton button, float stickval);
	/* vtable[4] */ virtual void ButtonPress();
};

struct HashIterator<ECheatLookup,char *,64> {
	HashList<ECheatLookup,char *,64> *pList;
	int i;
	ECheatLookup *node;
	
	HashIterator<ECheatLookup,char *,64>& operator=();
	HashIterator();
	HashIterator();
	ECheatLookup** operator++();
	bool operator==();
	bool operator!=();
	ECheatLookup** operator ECheatLookup **();
};

ELightDebugDMI _lightInintDMI = {
	/* base class 0 = */ {
		/* .m_pLast = */ NULL,
		/* .m_pNext = */ NULL,
		/* .$vf5413 = */ NULL
	}
};

char *_szSunColorR = 0x3a9df8;
char *_szSunColorG = 0x3a9e08;
char *_szSunColorB = 0x3a9e18;
char *_szSunColorI = 0x3a9e28;

ESunDebugDMI _sunDMIR = {
	/* base class 0 = */ {
		/* .m_pLast = */ NULL,
		/* .m_pNext = */ NULL,
		/* .$vf5413 = */ NULL
	},
	/* .bClamp = */ false,
	/* .m_pcolor = */ NULL,
	/* .m_name = */ NULL
};

ESunDebugDMI _sunDMIG = {
	/* base class 0 = */ {
		/* .m_pLast = */ NULL,
		/* .m_pNext = */ NULL,
		/* .$vf5413 = */ NULL
	},
	/* .bClamp = */ false,
	/* .m_pcolor = */ NULL,
	/* .m_name = */ NULL
};

ESunDebugDMI _sunDMIB = {
	/* base class 0 = */ {
		/* .m_pLast = */ NULL,
		/* .m_pNext = */ NULL,
		/* .$vf5413 = */ NULL
	},
	/* .bClamp = */ false,
	/* .m_pcolor = */ NULL,
	/* .m_name = */ NULL
};

ESunDebugDMI _sunDMII = {
	/* base class 0 = */ {
		/* .m_pLast = */ NULL,
		/* .m_pNext = */ NULL,
		/* .$vf5413 = */ NULL
	},
	/* .bClamp = */ false,
	/* .m_pcolor = */ NULL,
	/* .m_name = */ NULL
};

__vtbl_ptr_type ECheatDMI virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECheatDMI::GetDescription,
		/* .__delta2 = */ -9640
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECheatDMI::GetValue,
		/* .__delta2 = */ -9600
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECheatDMI::ButtonPress,
		/* .__delta2 = */ -9248
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECheatDMI::ButtonPress,
		/* .__delta2 = */ -8744
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ESunDebugDMI virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESunDebugDMI::GetDescription,
		/* .__delta2 = */ -7872
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESunDebugDMI::GetValue,
		/* .__delta2 = */ -7832
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESunDebugDMI::ButtonPress,
		/* .__delta2 = */ -7712
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESunDebugDMI::ButtonPress,
		/* .__delta2 = */ -7592
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESunDebugDMI::~ESunDebugDMI,
		/* .__delta2 = */ -7920
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ELightDebugDMI virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELightDebugDMI::GetDescription,
		/* .__delta2 = */ -8024
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDebugMenuItem::GetValue,
		/* .__delta2 = */ -8088
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELightDebugDMI::ButtonPress,
		/* .__delta2 = */ -7984
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDebugMenuItem::ButtonPress,
		/* .__delta2 = */ -8080
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELightDebugDMI::~ELightDebugDMI,
		/* .__delta2 = */ -8072
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ECheats* ECheats::ECheats() {
	HashList<ECheatLookup,char *,64> *this;
	
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  memset(this,0,0x100);
                    /* end of inlined section */
  EmptyLookupList__7ECheats(this);
  *(undefined4 *)&this->m_AlreadyReadCheatsFromFile = 0;
  return this;
}

void ECheats::~ECheats(int __in_chrg) {
	HashList<ECheatLookup,char *,64> *this;
	HashList<ECheatLookup,char *,64> *this;
	int i;
	HashList<ECheatLookup,char *,64> *this;
	int index;
	ECheatLookup *tmp;
	ECheatLookup *node;
	ECheatLookup *this;
	void *pAddress;
	void *pAddress;
	void *pAddress;
	
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *pAddress;
  int iVar4;
  
  EmptyLookupList__7ECheats(this);
                    /* inlined from ../MSrc/thashlist.h */
  iVar4 = 0;
  iVar2 = 0;
  do {
    iVar4 = iVar4 + 1;
    ppiVar3 = (int **)((int)(this->m_CheatLookup).table + iVar2);
    pAddress = *ppiVar3;
    if (pAddress != (int *)0x0) {
      *ppiVar3 = (int *)0x0;
      do {
        piVar1 = (int *)*pAddress;
        _memmanFree__FPv(pAddress);
        pAddress = piVar1;
      } while (piVar1 != (int *)0x0);
    }
    iVar2 = iVar4 * 4;
  } while (iVar4 < 0x40);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ECheats::Init(EGlobal &Globals) {
	ECheatLookup *pLookup;
	bool bOldSoundValue;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	
  int iVar1;
  ECheatLookup *pEVar2;
  uint uVar3;
  ECheatLookup **ppEVar4;
  
  EmptyLookupList__7ECheats(this);
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"soundon");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &Globals->Cheats;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"freeitems");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).FreeItems;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"memory_display");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).MemoryDisplay;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"unlock_all_items");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).UnlockAllItems;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"unlock_party_motel");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).UnlockPartyMotel;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"unlock_freeplay_mode");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).UnlockFreeplayMode;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"debug_interactions");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).DebugInteractions;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"animation_name_display");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).AnimationNameDisplay;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"display_fps");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).DispFPS;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"localization_test");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).LocTestEnabled;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"resource_test");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).ResourceTestEnabled;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"cheatmenu");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).bMenuEnabled;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"tutorial_stage");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).TutorialStage;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"tutorial_house");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).TutorialHouseNum;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"eor_artsend_debug");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).ArtsendDebug;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"Cam_Tilt");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).CameraTiltUnlocked;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"Cam_First_Per");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).CameraFirstPersonUnlocked;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"grab_any_object");
  pEVar2->m_Type = 1;
  pEVar2->m_pVar = &(Globals->Cheats).gAllowMovingAllObjects;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"cam_zoom_min");
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  pEVar2->m_Type = 5;
  pEVar2->m_pVar = &(Globals->Cheats).cam_zoom_min;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"cam_zoom_max");
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  pEVar2->m_Type = 5;
  pEVar2->m_pVar = &(Globals->Cheats).cam_zoom_max;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"cam_fov");
  pEVar2->m_Type = 5;
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  pEVar2->m_pVar = &(Globals->Cheats).cam_fov;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  strcpy(pEVar2->m_Name,"ambientIntensity");
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).ambientIntensity;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  strcpy(pEVar2->m_Name,"directionIntensity");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).directionIntensity;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  strcpy(pEVar2->m_Name,"cameraIntensity");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).cameraIntensity;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  strcpy(pEVar2->m_Name,"directionX");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).directionX;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  strcpy(pEVar2->m_Name,"directionY");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).directionY;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  strcpy(pEVar2->m_Name,"directionZ");
  pEVar2->m_Type = 2;
  pEVar2->m_pVar = &(Globals->Cheats).directionZ;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
  pEVar2->pNextHash = *ppEVar4;
                    /* end of inlined section */
  *ppEVar4 = pEVar2;
  pEVar2 = (ECheatLookup *)__builtin_new(0x54);
  pEVar2 = __12ECheatLookup(pEVar2);
  *(undefined4 *)&pEVar2->bAddToMenu = 0;
  strcpy(pEVar2->m_Name,"boot2");
  pEVar2->m_pVar = (Globals->Cheats).EXEName;
  pEVar2->m_Type = 7;
  uVar3 = Compute__9EChecksumPCc(pEVar2->m_Name);
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  ppEVar4 = (this->m_CheatLookup).table + (uVar3 & 0x3f);
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  pEVar2->pNextHash = *ppEVar4;
  *ppEVar4 = pEVar2;
  iVar1 = _globals.Cheats._0_4_;
                    /* end of inlined section */
  _globals.Cheats.ResourceTestEnabled = '\0';
  ReadCheatsFile__7ECheats(this);
  WriteCheatsFile__7ECheats(this);
  if (iVar1 == 0) {
    _globals.Cheats._0_4_ = 0;
  }
  *(undefined4 *)&this->m_bCheatsOn = 0;
  return;
}

void ECheats::Reset() {
  WriteCheatsFile__7ECheats(this);
  EmptyLookupList__7ECheats(this);
  return;
}

void ECheats::EmptyLookupList() {
	HashList<ECheatLookup,char *,64> *this;
	int i;
	int index;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	ECheatLookup *tmp;
	ECheatLookup *this;
	void *pAddress;
	
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *pAddress;
  int iVar4;
  
                    /* inlined from ../MSrc/thashlist.h */
  iVar4 = 0;
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  iVar2 = 0;
  while( true ) {
    ppiVar3 = (int **)((int)(this->m_CheatLookup).table + iVar2);
    pAddress = *ppiVar3;
    iVar4 = iVar4 + 1;
    if (pAddress != (int *)0x0) {
      *ppiVar3 = (int *)0x0;
      do {
        piVar1 = (int *)*pAddress;
        _memmanFree__FPv(pAddress);
        pAddress = piVar1;
      } while (piVar1 != (int *)0x0);
    }
    if (0x3f < iVar4) break;
    iVar2 = iVar4 * 4;
  }
  return;
}

void ECheats::ReadCheatsFile() {
	FileName cheatName;
	FILE *pfile;
	HashIterator<ECheatLookup,char *,64> pCheat;
	char s[256];
	char name[64];
	char varcontents[64];
	int i;
	int j;
	HashList<ECheatLookup,char *,64> *this;
	HashList<ECheatLookup,char *,64> *this;
	ECheatLookup *node;
	HashIterator<ECheatLookup,char *,64> result;
	HashList<ECheatLookup,char *,64> *this;
	HashIterator<ECheatLookup,char *,64> result;
	ECheatLookup &cheat;
	
  undefined *puVar1;
  ECheatLookup *pEVar2;
  ulong *puVar3;
  HashList_ECheatLookup_char___64_ *pHVar4;
  bool bVar5;
  char *pcVar6;
  __sFILE__432_30 *stream;
  char cVar7;
  uint uVar8;
  int iVar9;
  StackString_260_ cheatName;
  HashIterator_ECheatLookup_char___64_ pCheat;
  char name [64];
  char varcontents [64];
  undefined local_230 [8];
  ECheatLookup *local_228;
  HashIterator_ECheatLookup_char___64_ result;
  char s [256];
  
                    /* inlined from ../MSrc/stringbuffer.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer.h */
  *(undefined4 *)&this->m_AlreadyReadCheatsFromFile = 1;
  __12StringBufferPcUi(&cheatName.field0_0x0,(char *)((uint)&cheatName | 8),0x104);
  __12StringBufferPcUi((StringBuffer *)&pCheat,(char *)&pCheat.node,0x104);
  append__12StringBufferPCci((StringBuffer *)&pCheat,"system.cnf",-1);
  copy__12StringBufferRC12StringBuffer(&cheatName.field0_0x0,(StringBuffer *)&pCheat);
                    /* end of inlined section */
  pcVar6 = c_str__C12StringBuffer(&cheatName.field0_0x0);
  stream = fopen(pcVar6,"r");
  if (stream != (__sFILE__432_30 *)0x0) {
                    /* inlined from ../MSrc/thashlist.h */
    pCheat._0_8_ = ZEXT48(pCheat.pList);
                    /* end of inlined section */
    pCheat.node = (ECheatLookup *)0x0;
    while (pcVar6 = fgets(s,0x100,stream), pcVar6 != (char *)0x0) {
      iVar9 = 0;
      if (s[0] != '#') {
        name[0] = '\0';
        varcontents[0] = '\0';
        uVar8 = 0;
        while( true ) {
          pcVar6 = s + iVar9;
          cVar7 = *pcVar6;
          if ((((""[cVar7 + 1] & 0x17U) == 0) || (cVar7 == '=')) || (0x3f < uVar8)) break;
          iVar9 = iVar9 + 1;
          name[uVar8] = *pcVar6;
          uVar8 = uVar8 + 1;
        }
        name[uVar8] = '\0';
        strlwr(name);
        cVar7 = s[iVar9];
        while( true ) {
          if ((cVar7 == '\0') || (((""[cVar7 + 1] & 0x17U) != 0 && (cVar7 != '=')))) break;
          iVar9 = iVar9 + 1;
          cVar7 = s[iVar9];
        }
        uVar8 = 0;
        if ((""[cVar7 + 1] & 0x17U) != 0) {
          pcVar6 = s + iVar9;
          cVar7 = *pcVar6;
          while( true ) {
            pcVar6 = pcVar6 + 1;
            varcontents[uVar8] = cVar7;
            uVar8 = uVar8 + 1;
            if (((""[*pcVar6 + 1] & 0x17U) == 0) || (0x3f < uVar8)) break;
            cVar7 = *pcVar6;
          }
        }
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
        varcontents[uVar8] = '\0';
                    /* inlined from ../MSrc/thashlist.h */
        uVar8 = hash__12ECheatLookupPCc(name);
        result.i = uVar8 & 0x3f;
        result.node = (ECheatLookup *)0x0;
        result.pList = &this->m_CheatLookup;
        for (pEVar2 = (this->m_CheatLookup).table[result.i]; pEVar2 != (ECheatLookup *)0x0;
            pEVar2 = pEVar2->pNextHash) {
          bVar5 = compare__C12ECheatLookupPCc(pEVar2,name);
          if (bVar5) {
            result.node = pEVar2;
            goto LAB_0011d0d0;
          }
        }
        result.i = 0x40;
LAB_0011d0d0:
        pEVar2 = result.node;
        iVar9 = result.i;
        pHVar4 = result.pList;
        pCheat._0_8_ = CONCAT44(result.i,result.pList);
        puVar1 = local_230 + 7;
        uVar8 = (uint)puVar1 & 7;
        *(ulong *)(puVar1 + -uVar8) =
             *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 | pCheat._0_8_ >> (7 - uVar8) * 8;
        local_230 = (undefined  [8])pCheat._0_8_;
        local_228 = result.node;
        puVar1 = (undefined *)((int)&pCheat.i + 3);
                    /* end of inlined section */
        uVar8 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar8);
        *puVar3 = *puVar3 & -1L << (uVar8 + 1) * 8 | pCheat._0_8_ >> (7 - uVar8) * 8;
        pCheat.node = result.node;
                    /* inlined from ../MSrc/thashlist.h */
        result.node = (ECheatLookup *)0x0;
        result.pList = &this->m_CheatLookup;
        result.i = 0x40;
        local_230 = (undefined  [8])CONCAT44(0x40,this);
        puVar1 = local_230 + 7;
        uVar8 = (uint)puVar1 & 7;
        *(ulong *)(puVar1 + -uVar8) =
             *(ulong *)(puVar1 + -uVar8) & -1L << (uVar8 + 1) * 8 |
             (ulong)local_230 >> (7 - uVar8) * 8;
        local_228 = (ECheatLookup *)0x0;
        bVar5 = false;
        if (iVar9 == 0x40) {
          bVar5 = true;
          if (pEVar2 == (ECheatLookup *)0x0) {
            bVar5 = (ECheats *)pHVar4 == this;
            goto LAB_0011d15c;
          }
        }
        else {
LAB_0011d15c:
          bVar5 = (bool)(bVar5 ^ 1);
        }
                    /* end of inlined section */
        if (bVar5) {
                    /* end of inlined section */
          switch(pEVar2->m_Type) {
          case 1:
            iVar9 = atoi(varcontents);
            *(uint *)pEVar2->m_pVar = (uint)(iVar9 != 0);
            break;
          case 2:
          case 3:
          case 5:
          case 6:
            iVar9 = atoi(varcontents);
            *(char *)pEVar2->m_pVar = (char)iVar9;
            break;
          case 4:
            iVar9 = atoi(varcontents);
            *(short *)pEVar2->m_pVar = (short)iVar9;
            break;
          case 7:
            strcpy((char *)pEVar2->m_pVar,varcontents);
          }
        }
      }
    }
    fclose(stream);
  }
  return;
}

void ECheats::WriteCheatsFile() {
  return;
}

void ECheats::Update() {
	static u8 nOrigLocTest = 0;
	
  EUIVirtualCtrl__vtable *pEVar1;
  long lVar2;
  
  if (*(int *)&this->m_bCheatsOn == 0) {
    if ((((_globals.Cheats._64_4_ != 0) &&
         (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
         lVar2 = (**(code **)(pEVar1 + 1))
                           ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0
                            ,0x80), lVar2 != 0)) &&
        (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
        lVar2 = (**(code **)(pEVar1 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                           0x10), lVar2 != 0)) &&
       (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
       lVar2 = (**(code **)(pEVar1 + 1))
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                          0x20), lVar2 != 0)) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      (*(code *)pEVar1[1].GetBut)
                ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,0x1000
                );
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      (*(code *)pEVar1[1].GetBut)
                ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,0x8000
                );
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      (*(code *)pEVar1[1].GetBut)
                ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,0x2000
                );
      *(undefined4 *)&this->m_bCheatsOn = 1;
      nOrigLocTest_2244 = _globals.Cheats.LocTestEnabled;
      EnableCheats__7ECheats(this);
      ReadCheatsFile__7ECheats(this);
    }
  }
  else {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetBut)
              ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,0x1000);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetBut)
              ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,0x8000);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetBut)
              ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,0x4000);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetBut)
              ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,0x2000);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar2 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                       0x40);
    if (lVar2 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar2 = (*(code *)pEVar1[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                         0,0x10);
      if (lVar2 == 0) {
        return;
      }
      *(undefined4 *)&this->m_bCheatsOn = 0;
    }
    else {
      *(undefined4 *)&this->m_bCheatsOn = 0;
    }
    if (nOrigLocTest_2244 != _globals.Cheats.LocTestEnabled) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
      _quickdataman.m_iLanguage = (int)_globals.Cheats.LocTestEnabled;
                    /* end of inlined section */
      Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0x2a2af469);
      Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0x4f40c4ec);
      Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0xc33db41);
      Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0x19a16f2d);
      Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
      Message__7EGlobalPvUi(&_globals,(void *)0x0,0x26);
    }
    DisableCheats__7ECheats(this);
    WriteCheatsFile__7ECheats(this);
  }
  return;
}

void ECheats::EnableCheats() {
	HashIterator<ECheatLookup,char *,64> pCheat;
	HashList<ECheatLookup,char *,64> *this;
	HashIterator<ECheatLookup,char *,64> result;
	HashList<ECheatLookup,char *,64> *this;
	HashIterator<ECheatLookup,char *,64> result;
	ECheatLookup *pVariable;
	HashIterator<ECheatLookup,char *,64> *this;
	char *name;
	char *name;
	char *name;
	char *name;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  byte bVar5;
  ECheatLookup *pEVar6;
  int iVar7;
  ECheatLookup *pEVar8;
  ECheatDMI *this_00;
  HashIterator_ECheatLookup_char___64_ pCheat;
  undefined local_d0 [8];
  ECheatLookup *local_c8;
  ECheats *local_c0;
  int local_bc;
  ECheatLookup *local_b8;
  HashIterator_ECheatLookup_char___64_ result;
  
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  pEVar8 = (this->m_CheatLookup).table[0];
  pCheat.node = (ECheatLookup *)0x0;
  local_b8 = (ECheatLookup *)0x0;
  local_c0 = this;
  local_bc = 0;
  while (iVar7 = local_bc, pEVar8 == (ECheatLookup *)0x0) {
    local_bc = local_bc + 1;
    if (0x3f < local_bc) goto LAB_0011d55c;
    pEVar8 = (this->m_CheatLookup).table[iVar7 + 1];
  }
  local_b8 = pEVar8;
LAB_0011d55c:
                    /* end of inlined section */
  local_c8 = local_b8;
                    /* inlined from ../MSrc/thashlist.h */
  pCheat._0_8_ = CONCAT44(local_bc,this);
  puVar1 = local_d0 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | pCheat._0_8_ >> (7 - uVar2) * 8;
  local_d0 = (undefined  [8])pCheat._0_8_;
  puVar1 = (undefined *)((int)&pCheat.i + 3);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | pCheat._0_8_ >> (7 - uVar2) * 8;
  pCheat.node = local_c8;
  pEVar8 = pCheat.node;
LAB_0011d648:
  pCheat.node = pEVar8;
  pEVar8 = pCheat.node;
  result.node = (ECheatLookup *)0x0;
  result.pList = &this->m_CheatLookup;
  result.i = 0x40;
  local_d0 = (undefined  [8])CONCAT44(0x40,this);
  puVar1 = local_d0 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)local_d0 >> (7 - uVar2) * 8;
  local_c8 = (ECheatLookup *)0x0;
  bVar5 = 0;
  if (pCheat.i == 0x40) {
    bVar4 = true;
    if (pCheat.node == (ECheatLookup *)0x0) {
      bVar5 = 1;
      if ((ECheats *)pCheat.pList != this) {
        bVar5 = 0;
      }
      goto LAB_0011d6a4;
    }
  }
  else {
LAB_0011d6a4:
    bVar4 = (bool)(bVar5 ^ 1);
  }
                    /* end of inlined section */
  if (!bVar4) {
    _sunDMIR.m_name = _szSunColorR;
    _sunDMIG.m_name = _szSunColorG;
    _sunDMIG.m_pcolor = _vSunColor.field0_0x0.d + 1;
    _sunDMIB.m_name = _szSunColorB;
    _sunDMIB.m_pcolor = _vSunColor.field0_0x0.d + 2;
    _sunDMIB._12_4_ = 1;
    _sunDMII.m_pcolor = &_sunIntensity;
    _sunDMII.m_name = _szSunColorI;
    _sunDMIR.m_pcolor = (float *)&_vSunColor;
    _sunDMIR._12_4_ = 1;
    _sunDMIG._12_4_ = 1;
    _sunDMII._12_4_ = 0;
    Add__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_lightInintDMI.field0_0x0);
    Add__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMIR.field0_0x0);
    Add__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMIG.field0_0x0);
    Add__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMIB.field0_0x0);
    Add__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMII.field0_0x0);
    return;
  }
                    /* end of inlined section */
  if (*(int *)&(pCheat.node)->bAddToMenu != 0) {
    this_00 = (ECheatDMI *)__builtin_new(0x10);
    pEVar6 = pCheat.node;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
    __14EDebugMenuItem((EDebugMenuItem *)this_00);
    this_00->m_pVariable = pEVar6;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
    (this_00->field0_0x0).__vtable = (EDebugMenuItem__vtable *)_vt_9ECheatDMI;
                    /* end of inlined section */
    pEVar8->m_pDMI = this_00;
    Add__10EDebugMenuR14EDebugMenuItem(&_debugmenu,(EDebugMenuItem *)this_00);
                    /* inlined from ../MSrc/thashlist.h */
  }
  if (pCheat.node != (ECheatLookup *)0x0) goto code_r0x0011d5e8;
  goto LAB_0011d60c;
code_r0x0011d5e8:
  pCheat.node = (pCheat.node)->pNextHash;
  pEVar8 = pCheat.node;
  if (pCheat.node == (ECheatLookup *)0x0) {
    pCheat._0_8_ = pCheat._0_8_ & 0xffffffff | (ulong)(pCheat.i + 1) << 0x20;
LAB_0011d60c:
    while (pEVar8 = pCheat.node, pCheat.i < 0x40) {
      pEVar8 = (pCheat.pList)->table[pCheat.i];
      if ((pCheat.pList)->table[pCheat.i] != (ECheatLookup *)0x0) break;
      pCheat.i = pCheat.i + 1;
      pCheat._0_8_ = pCheat._0_8_ & 0xffffffff | (ulong)(uint)pCheat.i << 0x20;
    }
  }
  goto LAB_0011d648;
}

void ECheats::DisableCheats() {
	HashIterator<ECheatLookup,char *,64> pCheat;
	HashList<ECheatLookup,char *,64> *this;
	HashIterator<ECheatLookup,char *,64> result;
	HashList<ECheatLookup,char *,64> *this;
	HashIterator<ECheatLookup,char *,64> result;
	HashIterator<ECheatLookup,char *,64> *this;
	
  undefined *puVar1;
  ECheatLookup *pEVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  HashIterator_ECheatLookup_char___64_ pCheat;
  undefined local_d0 [8];
  ECheatLookup *local_c8;
  ECheats *local_c0;
  int local_bc;
  ECheatLookup *local_b8;
  HashIterator_ECheatLookup_char___64_ result;
  
                    /* inlined from ../MSrc/thashlist.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/thashlist.h */
  pEVar2 = (this->m_CheatLookup).table[0];
  pCheat.node = (ECheatLookup *)0x0;
  local_b8 = (ECheatLookup *)0x0;
  local_c0 = this;
  local_bc = 0;
  while (iVar7 = local_bc, pEVar2 == (ECheatLookup *)0x0) {
    local_bc = local_bc + 1;
    if (0x3f < local_bc) goto LAB_0011d82c;
    pEVar2 = (this->m_CheatLookup).table[iVar7 + 1];
  }
  local_b8 = pEVar2;
LAB_0011d82c:
  local_c8 = local_b8;
  pCheat._0_8_ = CONCAT44(local_bc,this);
  puVar1 = local_d0 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | pCheat._0_8_ >> (7 - uVar3) * 8;
  local_d0 = (undefined  [8])pCheat._0_8_;
  puVar1 = (undefined *)((int)&pCheat.i + 3);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | pCheat._0_8_ >> (7 - uVar3) * 8;
  pCheat.node = local_c8;
  pEVar2 = pCheat.node;
LAB_0011d8f8:
  pCheat.node = pEVar2;
  pEVar2 = pCheat.node;
  result.node = (ECheatLookup *)0x0;
  result.pList = &this->m_CheatLookup;
  result.i = 0x40;
  local_d0 = (undefined  [8])CONCAT44(0x40,this);
  puVar1 = local_d0 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | (ulong)local_d0 >> (7 - uVar3) * 8;
  local_c8 = (ECheatLookup *)0x0;
  bVar6 = 0;
  if (pCheat.i == 0x40) {
    bVar5 = true;
    if (pCheat.node == (ECheatLookup *)0x0) {
      bVar6 = 1;
      if ((ECheats *)pCheat.pList != this) {
        bVar6 = 0;
      }
      goto LAB_0011d950;
    }
  }
  else {
LAB_0011d950:
    bVar5 = (bool)(bVar6 ^ 1);
  }
                    /* end of inlined section */
  if (!bVar5) {
    Remove__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_lightInintDMI.field0_0x0);
    Remove__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMIR.field0_0x0);
    Remove__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMIG.field0_0x0);
    Remove__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMIB.field0_0x0);
    Remove__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&_sunDMII.field0_0x0);
    return;
  }
                    /* end of inlined section */
  if (*(int *)&(pCheat.node)->bAddToMenu != 0) {
    Remove__10EDebugMenuR14EDebugMenuItem(&_debugmenu,&(pCheat.node)->m_pDMI->field0_0x0);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(pEVar2->m_pDMI);
                    /* end of inlined section */
    pEVar2->m_pDMI = (ECheatDMI *)0x0;
                    /* inlined from ../MSrc/thashlist.h */
  }
  if (pCheat.node != (ECheatLookup *)0x0) goto code_r0x0011d898;
  goto LAB_0011d8bc;
code_r0x0011d898:
  pCheat.node = (pCheat.node)->pNextHash;
  pEVar2 = pCheat.node;
  if (pCheat.node == (ECheatLookup *)0x0) {
    pCheat._0_8_ = pCheat._0_8_ & 0xffffffff | (ulong)(pCheat.i + 1) << 0x20;
LAB_0011d8bc:
    while (pEVar2 = pCheat.node, pCheat.i < 0x40) {
      pEVar2 = (pCheat.pList)->table[pCheat.i];
      if ((pCheat.pList)->table[pCheat.i] != (ECheatLookup *)0x0) break;
      pCheat.i = pCheat.i + 1;
      pCheat._0_8_ = pCheat._0_8_ & 0xffffffff | (ulong)(uint)pCheat.i << 0x20;
    }
  }
  goto LAB_0011d8f8;
}

ECheatLookup* ECheatLookup::ECheatLookup() {
  this->m_pDMI = (ECheatDMI *)0x0;
  *(undefined4 *)&this->bAddToMenu = 1;
  return this;
}

u32 ECheatLookup::hash() {
  uint uVar1;
  
  uVar1 = Compute__9EChecksumPCc(this->m_Name);
  return uVar1;
}

u32 ECheatLookup::hash(char *name) {
  uint uVar1;
  
  uVar1 = Compute__9EChecksumPCc(name);
  return uVar1;
}

bool ECheatLookup::compare(char *name) {
  int iVar1;
  
  iVar1 = strcmp(name,this->m_Name);
  return iVar1 == 0;
}

void ECheatDMI::GetDescription(char *szBuffer) {
  strcpy(szBuffer,this->m_pVariable->m_Name);
  return;
}

void ECheatDMI::GetValue(char *szBuffer) {
	CamFloat val;
	
  CamFloat val;
  
  switch(this->m_pVariable->m_Type) {
  case 1:
                    /* WARNING: Load size is inaccurate */
    if (*this->m_pVariable->m_pVar == 0) {
      strcpy(szBuffer,"false");
    }
    else {
      strcpy(szBuffer,"true");
    }
    break;
  case 2:
  case 6:
    sprintf(szBuffer,"%d");
    break;
  case 3:
    sprintf(szBuffer,"%d");
    break;
  case 4:
    sprintf(szBuffer,"%d");
    break;
  case 5:
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
    sprintf(szBuffer,"%f");
    break;
  default:
    *szBuffer = '\0';
  }
  return;
}

void ECheatDMI::ButtonPress(EDebugMenuButton button) {
  uint *puVar1;
  char *pcVar2;
  short sVar3;
  byte bVar4;
  short *psVar5;
  byte *pbVar6;
  
  switch(this->m_pVariable->m_Type) {
  case 1:
    if (button < 2) {
      puVar1 = (uint *)this->m_pVariable->m_pVar;
      *puVar1 = *puVar1 ^ 1;
      return;
    }
    break;
  case 2:
  case 5:
    if (button == E_DMB_LEFT) {
      pcVar2 = (char *)this->m_pVariable->m_pVar;
      if (*pcVar2 == '\0') {
        *pcVar2 = -1;
        return;
      }
      *pcVar2 = *pcVar2 + -1;
      return;
    }
    if (button == E_DMB_RIGHT) {
      pbVar6 = (byte *)this->m_pVariable->m_pVar;
      bVar4 = *pbVar6;
      if (0xfe < bVar4) {
        *pbVar6 = 0;
        return;
      }
LAB_0011dc88:
      *pbVar6 = bVar4 + 1;
      return;
    }
    break;
  case 3:
    if (button == E_DMB_LEFT) {
      pcVar2 = (char *)this->m_pVariable->m_pVar;
      if (-0x80 < *pcVar2) {
        *pcVar2 = *pcVar2 + -1;
        return;
      }
      *pcVar2 = '\x7f';
      return;
    }
    if (button == E_DMB_RIGHT) {
      pbVar6 = (byte *)this->m_pVariable->m_pVar;
      bVar4 = *pbVar6;
      if ('~' < (char)*pbVar6) {
        *pbVar6 = 0x80;
        return;
      }
      goto LAB_0011dc88;
    }
    break;
  case 4:
    if (button == E_DMB_LEFT) {
      psVar5 = (short *)this->m_pVariable->m_pVar;
      if (*psVar5 < -0x7fff) {
        sVar3 = 0x7fff;
      }
      else {
        sVar3 = *psVar5 + -1;
      }
    }
    else {
      if (button != E_DMB_RIGHT) goto switchD_0011dc0c_caseD_6;
      psVar5 = (short *)this->m_pVariable->m_pVar;
      if (*psVar5 < 0x7fff) {
        sVar3 = *psVar5 + 1;
      }
      else {
        sVar3 = -0x8000;
      }
    }
    *psVar5 = sVar3;
  case 6:
switchD_0011dc0c_caseD_6:
    if (button == E_DMB_LEFT) {
      psVar5 = (short *)this->m_pVariable->m_pVar;
      if (1 < *psVar5) {
        *psVar5 = *psVar5 + -1;
        return;
      }
      *psVar5 = 1;
      return;
    }
    if (button == E_DMB_RIGHT) {
      psVar5 = (short *)this->m_pVariable->m_pVar;
      if (*psVar5 < 8) {
        *psVar5 = *psVar5 + 1;
        return;
      }
      *psVar5 = 8;
    }
    break;
  default:
    return;
  }
  return;
}

void ECheatDMI::ButtonPress(EDebugMenuButton button, float val) {
	int inc;
	u8 &val;
	int sval;
	s8 &val;
	int sval;
	s16 &val;
	int sval;
	
  ECheatLookup *pEVar1;
  byte bVar2;
  byte *pbVar4;
  int iVar5;
  int iVar3;
  
  iVar5 = (int)(val * 10.0);
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  else if (10 < iVar5) {
    iVar5 = 10;
  }
  pEVar1 = this->m_pVariable;
  switch(pEVar1->m_Type) {
  default:
    return;
  case 2:
  case 5:
    pbVar4 = (byte *)pEVar1->m_pVar;
    if (button == E_DMB_LEFT) {
      iVar5 = -iVar5;
    }
    iVar5 = (uint)*pbVar4 + iVar5;
    if (iVar5 < 0) {
      bVar2 = 0;
    }
    else {
      iVar3 = 0xff;
      if (iVar5 < 0x100) {
        iVar3 = iVar5;
      }
      bVar2 = (byte)iVar3;
    }
    break;
  case 3:
    pbVar4 = (byte *)pEVar1->m_pVar;
    if (button == E_DMB_LEFT) {
      iVar5 = -iVar5;
    }
    iVar5 = (char)*pbVar4 + iVar5;
    if (iVar5 < -0x80) {
      bVar2 = 0x80;
    }
    else {
      iVar3 = 0x7f;
      if (iVar5 < 0x80) {
        iVar3 = iVar5;
      }
      bVar2 = (byte)iVar3;
    }
    break;
  case 4:
                    /* WARNING: Load size is inaccurate */
    if (button == E_DMB_LEFT) {
      iVar5 = -iVar5;
    }
    iVar5 = *pEVar1->m_pVar + iVar5;
    if (iVar5 < -0x8000) {
      iVar3 = -0x8000;
    }
    else {
      iVar3 = 0x7fff;
      if (iVar5 < 0x8000) {
        iVar3 = iVar5;
      }
    }
    *(short *)pEVar1->m_pVar = (short)iVar3;
    return;
  }
  *pbVar4 = bVar2;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      _sunDMIR.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
      _lightInintDMI.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_14ELightDebugDMI;
      _sunDMII.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
      _sunDMIB.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
      _sunDMIG.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
    }
    else {
      __14EDebugMenuItem(&_lightInintDMI.field0_0x0);
      _lightInintDMI.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_14ELightDebugDMI;
      __14EDebugMenuItem(&_sunDMIR.field0_0x0);
      _sunDMIR._12_4_ = 1;
      _sunDMIR.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
      _sunDMIR.m_pcolor = (float *)0x0;
      _sunDMIR.m_name = (char *)0x0;
      __14EDebugMenuItem(&_sunDMIG.field0_0x0);
      _sunDMIG._12_4_ = 1;
      _sunDMIG.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
      _sunDMIG.m_pcolor = (float *)0x0;
      _sunDMIG.m_name = (char *)0x0;
      __14EDebugMenuItem(&_sunDMIB.field0_0x0);
      _sunDMIB._12_4_ = 1;
      _sunDMIB.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
      _sunDMIB.m_pcolor = (float *)0x0;
      _sunDMIB.m_name = (char *)0x0;
      __14EDebugMenuItem(&_sunDMII.field0_0x0);
      _sunDMII._12_4_ = 1;
      _sunDMII.field0_0x0.__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
      _sunDMII.m_pcolor = (float *)0x0;
      _sunDMII.m_name = (char *)0x0;
    }
  }
                    /* end of inlined section */
  return;
}

ECheatDMI* ECheatDMI::ECheatDMI(ECheatLookup *pVariable) {
  __14EDebugMenuItem(&this->field0_0x0);
  this->m_pVariable = pVariable;
  (this->field0_0x0).__vtable = (EDebugMenuItem__vtable *)_vt_9ECheatDMI;
  return this;
}

void EDebugMenuItem::GetValue(char *szBuffer) {
  *szBuffer = '\0';
  return;
}

void EDebugMenuItem::ButtonPress(EDebugMenuButton button, float stickval) {
  return;
}

void ELightDebugDMI::~ELightDebugDMI(int __in_chrg) {
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EDebugMenuItem__vtable *)_vt_14ELightDebugDMI;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ELightDebugDMI::GetDescription(char *szBuffer) {
  strcpy(szBuffer,"InitLights: L = Hot Sync -- R = ReCompute");
  return;
}

void ELightDebugDMI::ButtonPress(EDebugMenuButton button) {
  if (button == E_DMB_LEFT) {
    HotSyncLighting__7EGlobal(&_globals);
  }
  else if (button == E_DMB_RIGHT) {
    __lmcompute = button;
  }
  return;
}

void ESunDebugDMI::~ESunDebugDMI(int __in_chrg) {
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EDebugMenuItem__vtable *)_vt_12ESunDebugDMI;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ESunDebugDMI::GetDescription(char *szBuffer) {
  if (this->m_name != (char *)0x0) {
    strcpy(szBuffer,this->m_name);
  }
  return;
}

void ESunDebugDMI::GetValue(char *szBuffer) {
  if (this->m_pcolor == (float *)0x0) {
    sprintf(szBuffer,"%f");
  }
  else {
    sprintf(szBuffer,"%f");
  }
  return;
}

void ESunDebugDMI::ButtonPress(EDebugMenuButton button) {
	float stickval;
	
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  pfVar1 = this->m_pcolor;
  if (pfVar1 == (float *)0x0) {
    iVar2 = *(int *)&this->bClamp;
  }
  else {
    if (button == E_DMB_LEFT) {
      fVar3 = *pfVar1 - 0.01;
    }
    else {
      fVar3 = *pfVar1 + 0.01;
    }
    *pfVar1 = fVar3;
    iVar2 = *(int *)&this->bClamp;
  }
  if (iVar2 != 0) {
    pfVar1 = this->m_pcolor;
    fVar3 = *pfVar1;
    if (0.0 <= fVar3) {
      *pfVar1 = (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
    }
    else {
      *pfVar1 = 0.0;
    }
  }
  return;
}

void ESunDebugDMI::ButtonPress(EDebugMenuButton button, float stickval) {
  float *pfVar1;
  float fVar2;
  
  pfVar1 = this->m_pcolor;
  if (pfVar1 != (float *)0x0) {
    if (button == E_DMB_LEFT) {
      fVar2 = *pfVar1 - stickval * 0.94;
    }
    else {
      fVar2 = *pfVar1 + stickval * 0.94;
    }
    *pfVar1 = fVar2;
  }
  if (*(int *)&this->bClamp != 0) {
    pfVar1 = this->m_pcolor;
    fVar2 = *pfVar1;
    if (0.0 <= fVar2) {
      *pfVar1 = (float)((int)fVar2 * (uint)(fVar2 < 1.0) | (uint)(fVar2 >= 1.0) * 0x3f800000);
    }
    else {
      *pfVar1 = 0.0;
    }
  }
  return;
}

void global constructors keyed to _lightInintDMI() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _lightInintDMI() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

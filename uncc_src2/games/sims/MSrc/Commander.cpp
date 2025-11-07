// STATUS: NOT STARTED

#include "Commander.h"

Commander *Commander::sList = NULL;
SInt32 Commander::sId = 0;

__vtbl_ptr_type Commander virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Commander::~Commander,
		/* .__delta2 = */ -28704
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Commander::DoCommand,
		/* .__delta2 = */ -28592
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

Commander* Commander::Commander() {
  this->fId = _9Commander_sId;
  this->__vtable = (Commander__vtable *)_vt_9Commander;
  this->fNext = _9Commander_sList;
  this->fWhat = 0;
  _9Commander_sId = _9Commander_sId + 1;
  _9Commander_sList = this;
  return this;
}

void Commander::~Commander(int __in_chrg) {
	Commander **remove;
	void *pAddress;
	
  Commander *pCVar1;
  Commander *pCVar2;
  Commander *pCVar3;
  
  this->__vtable = (Commander__vtable *)_vt_9Commander;
  pCVar3 = (Commander *)&_9Commander_sList;
  pCVar2 = _9Commander_sList;
  do {
    if (pCVar2 == (Commander *)0x0) {
LAB_00269030:
      if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
        _memmanFree__FPv(this);
                    /* end of inlined section */
      }
      return;
    }
    pCVar1 = pCVar3->fNext;
    if (pCVar1 == this) {
      pCVar3->fNext = this->fNext;
      goto LAB_00269030;
    }
    pCVar2 = pCVar1->fNext;
    pCVar3 = pCVar1;
  } while( true );
}

Boolean Commander::DoCommand(SInt16 command, SInt32 info) {
  return 0;
}

Boolean GlobalDispatch(SInt16 command, SInt32 info) {
	Boolean respondedTo;
	Commander *cmd;
	Commander *next;
	
  Commander *pCVar1;
  short sVar2;
  long lVar3;
  Commander *pCVar4;
  short sVar5;
  
  sVar5 = 0;
  pCVar4 = _9Commander_sList;
  sVar2 = 0;
  if (_9Commander_sList != (Commander *)0x0) {
    do {
      sVar5 = sVar2;
      pCVar1 = pCVar4->fNext;
      lVar3 = (*(code *)pCVar4->__vtable[1].DoCommand)
                        ((int)&pCVar4->fNext + (int)*(short *)&pCVar4->__vtable[1].Commander,command
                         ,info);
      if (lVar3 != 0) {
        sVar5 = 1;
      }
      pCVar4 = pCVar1;
      sVar2 = sVar5;
    } while (pCVar1 != (Commander *)0x0);
  }
  if (command == 0xdc) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable->AllocPersonInstance)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable->AllocInstance + -0x24,0,0x27);
  }
  return sVar5;
}

Boolean TypedDispatch(SInt32 type, SInt16 command, SInt32 info, Boolean oneOnly) {
	Boolean respondedTo;
	Commander *cmd;
	Commander *next;
	
  Commander *pCVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  Commander *pCVar5;
  
  sVar2 = 0;
  if (_9Commander_sList != (Commander *)0x0) {
    iVar3 = _9Commander_sList->fWhat;
    pCVar5 = _9Commander_sList;
    while (((pCVar1 = pCVar5->fNext, iVar3 != type ||
            (lVar4 = (*(code *)pCVar5->__vtable[1].DoCommand)
                               ((int)&pCVar5->fNext + (int)*(short *)&pCVar5->__vtable[1].Commander,
                                command,info), lVar4 == 0)) || (sVar2 = 1, oneOnly == 0))) {
      if (pCVar1 == (Commander *)0x0) {
        return sVar2;
      }
      iVar3 = pCVar1->fWhat;
      pCVar5 = pCVar1;
    }
    sVar2 = 1;
  }
  return sVar2;
}

SInt32 Commander::GetType() {
  return this->fWhat;
}

Commander* Commander::GetNext() {
  return this->fNext;
}

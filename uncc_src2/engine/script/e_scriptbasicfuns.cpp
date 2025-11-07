// STATUS: NOT STARTED

#include "e_scriptbasicfuns.h"

u32 _resourceIdFromScript = 0;

void sfnScriptName(EScriptContext *pContext) {
  return;
}

void sfnSetResourceGlobal(EScriptContext *pContext) {
  uint *puVar1;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  _resourceIdFromScript = *puVar1;
  return;
}

void sfnClearResourceGlobal(EScriptContext *pContext) {
  _resourceIdFromScript = 0;
  return;
}

void sfnPrintString(EScriptContext *pContext) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  GetParam__9ESDStringP14EScriptContext(pContext);
  return;
}

void sfnAddString(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EString *pEVar1;
  EString *pEVar2;
  EString *this;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EString local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDStringP14EScriptContext(pContext);
  pEVar2 = GetParam__9ESDStringP14EScriptContext(pContext);
  this = GetReturn__9ESDStringP14EScriptContext(pContext);
  __7EStringPCcT1(local_50,pEVar1->m_p,pEVar2->m_p);
  __as__7EStringPCc(this,local_50[0].m_p);
  Deallocate__7EStringPc(local_50,local_50[0].m_p);
  return;
}

void sfnStringAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EString *this;
  EString *pEVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDStringP14EScriptContext(pContext);
  pEVar1 = GetParam__9ESDStringP14EScriptContext(pContext);
  __as__7EStringPCc(this,pEVar1->m_p);
  return;
}

void sfnIsEqualString(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EString *this;
  EString *pEVar1;
  uint *puVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDStringP14EScriptContext(pContext);
  pEVar1 = GetParam__9ESDStringP14EScriptContext(pContext);
  puVar2 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
  iVar3 = Compare__C7EStringPCc(this,pEVar1->m_p);
                    /* end of inlined section */
  *puVar2 = (uint)(iVar3 == 0);
  return;
}

void sfnAddEqualString(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EString *this;
  EString *pEVar1;
  EString *this_00;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDStringP14EScriptContext(pContext);
  pEVar1 = GetParam__9ESDStringP14EScriptContext(pContext);
  this_00 = GetReturn__9ESDStringP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  __apl__7EStringPCc(this,pEVar1->m_p);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  __as__7EStringPCc(this_00,this->m_p);
  return;
}

void sfnSleep(EScriptContext *pContext) {
	EScriptContext *this;
	
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  if (*(int *)&pContext->m_suspended == 0) {
    Suspend__14EScriptContextUiUi(pContext,0,0);
  }
  return;
}

void sfnSleepTime(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	u32 frame;
	u32 iremain;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float suspendParam2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  if (*(int *)&pContext->m_suspended == 0) {
    if (0.0 < *pfVar1) {
      Suspend__14EScriptContextUiUi(pContext,_framecount,(uint)*pfVar1);
    }
  }
  else {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
    if (_framecount == pContext->m_suspendParam1) {
      Suspend__14EScriptContextUiUi(pContext,pContext->m_suspendParam1,pContext->m_suspendParam2);
    }
    else {
      suspendParam2 = (float)pContext->m_suspendParam2 - _dt;
      if (0.0 < suspendParam2) {
        Suspend__14EScriptContextUiUi(pContext,_framecount,(uint)suspendParam2);
      }
    }
  }
  return;
}

void sfnRandomNumber(EScriptContext *pContext) {
  int *piVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar2 = rand();
  *piVar1 = iVar2;
  return;
}

void sfnRandomRange(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar3 = rand();
  if (*piVar1 == 0) {
    trap(7);
  }
  *piVar2 = iVar3 % *piVar1;
  return;
}

void sfnPrintInt(EScriptContext *pContext) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  GetParam__6ESDIntP14EScriptContext(pContext);
  return;
}

void sfnAddInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar3 = *piVar1 + *piVar2;
  return;
}

void sfnSubtractInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar3 = *piVar1 - *piVar2;
  return;
}

void sfnDivideInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar4 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar3;
                    /* end of inlined section */
  if (iVar1 == 0) {
    *piVar4 = 0;
  }
  else {
    if (iVar1 == 0) {
      trap(7);
    }
    *piVar4 = *piVar2 / iVar1;
  }
  return;
}

void sfnMultiplyInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar3 = *piVar1 * *piVar2;
  return;
}

void sfnModInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar4 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar3;
                    /* end of inlined section */
  if (iVar1 == 0) {
    *piVar4 = 0;
  }
  else {
    if (iVar1 == 0) {
      trap(7);
    }
    *piVar4 = *piVar2 % iVar1;
  }
  return;
}

void sfnIntAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar1 = *piVar2;
  return;
}

void sfnIntAddAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar3 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar4 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar5 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar4;
  iVar2 = *piVar3;
  *piVar3 = iVar2 + iVar1;
  *piVar5 = iVar2 + iVar1;
  return;
}

void sfnIntMultAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar3 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar4 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar5 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar4;
  iVar2 = *piVar3;
  *piVar3 = iVar2 * iVar1;
  *piVar5 = iVar2 * iVar1;
  return;
}

void sfnIntSubAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar3 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar4 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar5 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar4;
  iVar2 = *piVar3;
  *piVar3 = iVar2 - iVar1;
  *piVar5 = iVar2 - iVar1;
  return;
}

void sfnIntDivideAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar4 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar3;
                    /* end of inlined section */
  if (iVar1 == 0) {
    *piVar2 = 0;
  }
  else {
    if (iVar1 == 0) {
      trap(7);
    }
    *piVar2 = *piVar2 / iVar1;
  }
  *piVar4 = *piVar2;
  return;
}

void sfnIntModAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar4 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar3;
                    /* end of inlined section */
  if (iVar1 == 0) {
    *piVar2 = 0;
  }
  else {
    if (iVar1 == 0) {
      trap(7);
    }
    *piVar2 = *piVar2 % iVar1;
  }
  *piVar4 = *piVar2;
  return;
}

void sfnIsEqualInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*piVar1 == *piVar2);
  return;
}

void sfnGreaterThanInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*piVar2 < *piVar1);
  return;
}

void sfnLessThanInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*piVar1 < *piVar2);
  return;
}

void sfnGreaterThanEqualInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = *piVar1 < *piVar2 ^ 1;
  return;
}

void sfnLessThanEqualInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = *piVar2 < *piVar1 ^ 1;
  return;
}

void sfnNotEqualInt(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*piVar1 != *piVar2);
  return;
}

void sfnPostIncrementi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar2;
  *piVar3 = iVar1;
  *piVar2 = iVar1 + 1;
  return;
}

void sfnPreIncrementi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 1;
  *piVar3 = iVar1 + 1;
  return;
}

void sfnPostDecrementi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar2;
  *piVar3 = iVar1;
  *piVar2 = iVar1 + -1;
  return;
}

void sfnPreDecrementi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -1;
  *piVar3 = iVar1 + -1;
  return;
}

void sfnUnaryMinusi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar2 = -*piVar1;
  return;
}

void sfnLogicalNoti(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  uint *puVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar2 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar2 = (uint)(*piVar1 == 0);
  return;
}

void sfnPrintFloat(EScriptContext *pContext) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  GetParam__8ESDFloatP14EScriptContext(pContext);
  return;
}

void sfnAddFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar3 = *pfVar1 + *pfVar2;
  return;
}

void sfnSubtractFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar3 = *pfVar1 - *pfVar2;
  return;
}

void sfnDivideFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  if (*pfVar2 == 0.0) {
    *pfVar3 = 0.0;
  }
  else {
    *pfVar3 = *pfVar1 / *pfVar2;
  }
  return;
}

void sfnMultiplyFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar3 = *pfVar1 * *pfVar2;
  return;
}

void sfnFloatAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar1 = *pfVar2;
  return;
}

void sfnFloatAddAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar4 = *pfVar2;
  fVar5 = *pfVar1;
  *pfVar1 = fVar5 + fVar4;
  *pfVar3 = fVar5 + fVar4;
  return;
}

void sfnFloatMultAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar4 = *pfVar2;
  fVar5 = *pfVar1;
  *pfVar1 = fVar5 * fVar4;
  *pfVar3 = fVar5 * fVar4;
  return;
}

void sfnFloatSubAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar4 = *pfVar2;
  fVar5 = *pfVar1;
  *pfVar1 = fVar5 - fVar4;
  *pfVar3 = fVar5 - fVar4;
  return;
}

void sfnFloatDivideAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar4 = 0.0;
  if (*pfVar2 == 0.0) {
    *pfVar1 = 0.0;
  }
  else {
    fVar4 = *pfVar1 + *pfVar2;
    *pfVar1 = fVar4;
  }
  *pfVar3 = fVar4;
  return;
}

void sfnIsEqualFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 == *pfVar2);
  return;
}

void sfnGreaterThanFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar2 < *pfVar1);
  return;
}

void sfnLessThanFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 < *pfVar2);
  return;
}

void sfnGreaterThanEqualFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar2 <= *pfVar1);
  return;
}

void sfnLessThanEqualFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 <= *pfVar2);
  return;
}

void sfnNotEqualFloat(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 != *pfVar2);
  return;
}

void sfnPostIncrementf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar3 = *pfVar1;
  *pfVar2 = fVar3;
  *pfVar1 = fVar3 + 1.0;
  return;
}

void sfnPreIncrementf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar3 = *pfVar1;
  *pfVar1 = fVar3 + 1.0;
  *pfVar2 = fVar3 + 1.0;
  return;
}

void sfnPostDecrementf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar3 = *pfVar1;
  *pfVar2 = fVar3;
  *pfVar1 = fVar3 - 1.0;
  return;
}

void sfnPreDecrementf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar3 = *pfVar1;
  *pfVar1 = fVar3 - 1.0;
  *pfVar2 = fVar3 - 1.0;
  return;
}

void sfnUnaryMinusf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar2 = -*pfVar1;
  return;
}

void sfnLogicalNotf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar3 = 0.0;
  if (*pfVar1 == 0.0) {
    fVar3 = 1.0;
  }
  *pfVar2 = fVar3;
  return;
}

void sfnVectorAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  EVec3 *pEVar6;
  EVec3 *pEVar7;
  ulong in_v1;
  ulong uVar8;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar7 = GetParam__9ESDVectorP14EScriptContext(pContext);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar7 & 7;
  uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pEVar7 - uVar3) >> uVar3 * 8;
  fVar4 = (pEVar7->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&pEVar6->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar6 & 7;
  *(ulong *)((int)pEVar6 - uVar2) =
       uVar8 << uVar2 * 8 | *(ulong *)((int)pEVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar6->field0_0x0).d[2] = fVar4;
  return;
}

void sfnIsEqualvv(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  EVec3 *pEVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* end of inlined section */
  if ((pEVar1->field0_0x0).d[0] == (pEVar2->field0_0x0).d[0]) {
                    /* end of inlined section */
    if ((pEVar1->field0_0x0).d[1] != (pEVar2->field0_0x0).d[1]) {
      *piVar3 = 0;
      return;
    }
                    /* end of inlined section */
    if ((pEVar1->field0_0x0).d[2] == (pEVar2->field0_0x0).d[2]) {
      *piVar3 = 1;
      return;
    }
  }
  *piVar3 = 0;
  return;
}

void sfnSetVector(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  EVec3 *pEVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar4 = GetReturn__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
  (pEVar4->field0_0x0).d[0] = *pfVar1;
  (pEVar4->field0_0x0).d[1] = *pfVar2;
  (pEVar4->field0_0x0).d[2] = *pfVar3;
  return;
}

void sfnPrintVector(EScriptContext *pContext) {
  EVec3 *this;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
  Print__5EVec3(this);
  return;
}

void sfnSetVectorX(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (pEVar1->field0_0x0).d[0] = *pfVar2;
  return;
}

void sfnSetVectorY(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (pEVar1->field0_0x0).d[1] = *pfVar2;
  return;
}

void sfnSetVectorZ(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (pEVar1->field0_0x0).d[2] = *pfVar2;
  return;
}

void sfnGetVectorX(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar2 = (pEVar1->field0_0x0).d[0];
  return;
}

void sfnGetVectorY(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar2 = (pEVar1->field0_0x0).d[1];
  return;
}

void sfnGetVectorZ(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  float *pfVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *pfVar2 = (pEVar1->field0_0x0).d[2];
  return;
}

void sfnScalarMultvf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  float *pfVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar6 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar9 = *pfVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEVar5->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar5->field0_0x0).d[1] * fVar9,(pEVar5->field0_0x0).d[0] * fVar9);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar8 * fVar9;
  return;
}

void sfnScalarMultfv(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float *pfVar5;
  EVec3 *pEVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar5 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar9 = *pfVar5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEVar6->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44(fVar9 * (pEVar6->field0_0x0).d[1],fVar9 * (pEVar6->field0_0x0).d[0]);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar9 * fVar8;
  return;
}

void sfnScalarDividevf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  EVec3 *pEVar4;
  float *pfVar5;
  EVec3 *pEVar6;
  float local_50;
  float local_4c;
  float local_48;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar4 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar5 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar6 = GetReturn__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
  if (*pfVar5 == 0.0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_48 = 0.0;
    local_50 = 0.0;
                    /* end of inlined section */
    local_4c = 0.0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_4c = 1.0 / *pfVar5;
    local_48 = (pEVar4->field0_0x0).d[2] * local_4c;
    local_50 = (pEVar4->field0_0x0).d[0] * local_4c;
    local_4c = (pEVar4->field0_0x0).d[1] * local_4c;
  }
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&pEVar6->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(local_4c,local_50) >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar6 & 7;
  *(ulong *)((int)pEVar6 - uVar2) =
       CONCAT44(local_4c,local_50) << uVar2 * 8 |
       *(ulong *)((int)pEVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar6->field0_0x0).d[2] = local_48;
  return;
}

void sfnDotVector(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  EVec3 *pEVar2;
  float *pfVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar3 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  *pfVar3 = (pEVar1->field0_0x0).d[0] * (pEVar2->field0_0x0).d[0] +
            (pEVar1->field0_0x0).d[1] * (pEVar2->field0_0x0).d[1] +
            (pEVar1->field0_0x0).d[2] * (pEVar2->field0_0x0).d[2];
  return;
}

void sfnCrossVector(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  EVec3 *pEVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar8 = (pEVar6->field0_0x0).d[0];
  fVar9 = (pEVar5->field0_0x0).d[1];
  fVar10 = (pEVar5->field0_0x0).d[0];
  fVar11 = (pEVar6->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar5->field0_0x0).d[2] * fVar8 - fVar10 * (pEVar6->field0_0x0).d[2],
                   fVar9 * (pEVar6->field0_0x0).d[2] - (pEVar5->field0_0x0).d[2] * fVar11);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar10 * fVar11 - fVar9 * fVar8;
  return;
}

void sfnVectorAdd(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  EVec3 *pEVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar9 = (pEVar6->field0_0x0).d[2];
  fVar8 = (pEVar5->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar5->field0_0x0).d[1] + (pEVar6->field0_0x0).d[1],
                   (pEVar5->field0_0x0).d[0] + (pEVar6->field0_0x0).d[0]);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar8 + fVar9;
  return;
}

void sfnVectorSub(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  EVec3 *pEVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar9 = (pEVar6->field0_0x0).d[2];
  fVar8 = (pEVar5->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar5->field0_0x0).d[1] - (pEVar6->field0_0x0).d[1],
                   (pEVar5->field0_0x0).d[0] - (pEVar6->field0_0x0).d[0]);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar8 - fVar9;
  return;
}

void sfnComponentAddfv(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	float v;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float *pfVar5;
  EVec3 *pEVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar5 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar9 = *pfVar5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEVar6->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar6->field0_0x0).d[1] + fVar9,(pEVar6->field0_0x0).d[0] + fVar9);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar8 + fVar9;
  return;
}

void sfnComponentAddvf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	float v;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  float *pfVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar6 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar9 = *pfVar6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEVar5->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar5->field0_0x0).d[1] + fVar9,(pEVar5->field0_0x0).d[0] + fVar9);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar8 + fVar9;
  return;
}

void sfnComponentSubfv(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	float v;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float *pfVar5;
  EVec3 *pEVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar5 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar9 = *pfVar5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEVar6->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar6->field0_0x0).d[1] - fVar9,(pEVar6->field0_0x0).d[0] - fVar9);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar8 - fVar9;
  return;
}

void sfnComponentSubvf(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	float v;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  float *pfVar6;
  EVec3 *pEVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar6 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar7 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar9 = *pfVar6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEVar5->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((pEVar5->field0_0x0).d[1] - fVar9,(pEVar5->field0_0x0).d[0] - fVar9);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar7->field0_0x0).d[2] = fVar8 - fVar9;
  return;
}

void sfnVectorMagnitude(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EVec3 *pEVar1;
  float *pfVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar2 = GetReturn__8ESDFloatP14EScriptContext(pContext);
  fVar3 = sqrtf((pEVar1->field0_0x0).d[0] * (pEVar1->field0_0x0).d[0] +
                (pEVar1->field0_0x0).d[1] * (pEVar1->field0_0x0).d[1] +
                (pEVar1->field0_0x0).d[2] * (pEVar1->field0_0x0).d[2]);
                    /* end of inlined section */
  *pfVar2 = fVar3;
  return;
}

void sfnVectorNormalize(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  EVec3 *pEVar5;
  EVec3 *pEVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar6 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  uVar7 = (ulong)(int)pEVar6;
  fVar8 = sqrtf((pEVar5->field0_0x0).d[0] * (pEVar5->field0_0x0).d[0] +
                (pEVar5->field0_0x0).d[1] * (pEVar5->field0_0x0).d[1] +
                (pEVar5->field0_0x0).d[2] * (pEVar5->field0_0x0).d[2]);
  if (fVar8 != 0.0) {
    fVar9 = (pEVar5->field0_0x0).d[0];
    fVar8 = 1.0 / fVar8;
    fVar10 = (pEVar5->field0_0x0).d[1];
    (pEVar5->field0_0x0).d[2] = (pEVar5->field0_0x0).d[2] * fVar8;
    (pEVar5->field0_0x0).d[0] = fVar9 * fVar8;
    (pEVar5->field0_0x0).d[1] = fVar10 * fVar8;
  }
  puVar1 = (undefined *)((int)&pEVar5->field0_0x0 + 7);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar5 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pEVar5 - uVar3) >> uVar3 * 8;
  fVar8 = (pEVar5->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&pEVar6->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar6 & 7;
  *(ulong *)((int)pEVar6 - uVar2) =
       uVar7 << uVar2 * 8 | *(ulong *)((int)pEVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar6->field0_0x0).d[2] = fVar8;
  return;
}

void sfnVectorBlend(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	float u;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  EVec3 *pEVar6;
  float *pfVar7;
  EVec3 *pEVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar6 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar7 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pEVar8 = GetReturn__9ESDVectorP14EScriptContext(pContext);
  fVar9 = (pEVar6->field0_0x0).d[2];
  fVar12 = (pEVar5->field0_0x0).d[2];
  fVar11 = *pfVar7;
  fVar10 = (pEVar5->field0_0x0).d[2];
  uVar4 = CONCAT44((pEVar5->field0_0x0).d[1] +
                   ((pEVar6->field0_0x0).d[1] - (pEVar5->field0_0x0).d[1]) * fVar11,
                   (pEVar5->field0_0x0).d[0] +
                   ((pEVar6->field0_0x0).d[0] - (pEVar5->field0_0x0).d[0]) * fVar11);
  puVar1 = (undefined *)((int)&pEVar8->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar8 & 7;
  *(ulong *)((int)pEVar8 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)pEVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (pEVar8->field0_0x0).d[2] = fVar10 + (fVar9 - fVar12) * fVar11;
  return;
}

void sfnPrintMatrix(EScriptContext *pContext) {
	EVec4 rowVector;
	
  EVec4 rowVector;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  GetParam__9ESDMatrixP14EScriptContext(pContext);
                    /* end of inlined section */
  return;
}

void sfnMatrixAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EMat4 *this;
  EMat4 *m;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  m = GetParam__9ESDMatrixP14EScriptContext(pContext);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(this,m);
  return;
}

void sfnZeroMatrix(EScriptContext *pContext) {
  EMat4 *this;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
                    /* end of inlined section */
  __as__5EMat4f(this,0.0);
  return;
}

void sfnIdentityMatrix(EScriptContext *pContext) {
  EMat4 *this;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
                    /* end of inlined section */
  Id__5EMat4(this);
  return;
}

void sfnMult4x4(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EMat4 *pEVar1;
  EMat4 *pEVar2;
  EMat4 *this;
  float (*paafVar3) [4] [4];
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EMat4 EStack_80;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pEVar2 = GetParam__9ESDMatrixP14EScriptContext(pContext);
  this = GetReturn__9ESDMatrixP14EScriptContext(pContext);
  paafVar3 = __opRA3_A3_f__5EMat4(&EStack_80);
  sceVu0MulMatrix(paafVar3,pEVar2,pEVar1);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(this,&EStack_80);
  return;
}

void sfnMatrixNormalize(EScriptContext *pContext) {
  EMat4 *this;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
                    /* end of inlined section */
  Normalize__5EMat4(this);
  return;
}

void sfnMatrixTranspose(EScriptContext *pContext) {
  EMat4 *this;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
                    /* end of inlined section */
  Transpose__5EMat4(this);
  return;
}

void sfnMatrixScale(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float v;
	float v;
	
  EMat4 *this;
  float *pfVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
  float local_38;
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
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_40 = *pfVar1;
  local_3c = local_40;
  local_38 = local_40;
  Scale__5EMat4RC5EVec3(this,(EVec3 *)&local_40);
  return;
}

void sfnMatrixScaleX(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float x;
	float x;
	
  EMat4 *this;
  float *pfVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_40 = *pfVar1;
  local_3c = 0;
  local_38 = 0;
  Scale__5EMat4RC5EVec3(this,(EVec3 *)&local_40);
  return;
}

void sfnMatrixScaleY(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float y;
	float y;
	
  EMat4 *this;
  float *pfVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
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
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_3c = *pfVar1;
  local_40 = 0;
  local_38 = 0;
  Scale__5EMat4RC5EVec3(this,(EVec3 *)&local_40);
  return;
}

void sfnMatrixScaleZ(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float z;
	float z;
	
  EMat4 *this;
  float *pfVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
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
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_38 = *pfVar1;
  local_40 = 0;
  local_3c = 0;
  Scale__5EMat4RC5EVec3(this,(EVec3 *)&local_40);
  return;
}

void sfnMatrixTranslateX(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float x;
	float x;
	
  EMat4 *this;
  float *pfVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_40 = *pfVar1;
  local_3c = 0;
  local_38 = 0;
  Translate__5EMat4RC5EVec3(this,(EVec3 *)&local_40);
  return;
}

void sfnMatrixTranslateY(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float y;
	float y;
	
  EMat4 *this;
  float *pfVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
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
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_3c = *pfVar1;
  local_40 = 0;
  local_38 = 0;
  Translate__5EMat4RC5EVec3(this,(EVec3 *)&local_40);
  return;
}

void sfnMatrixTranslateZ(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float z;
	float z;
	
  EMat4 *this;
  float *pfVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
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
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  this = GetParam__9ESDMatrixP14EScriptContext(pContext);
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_38 = *pfVar1;
  local_40 = 0;
  local_3c = 0;
  Translate__5EMat4RC5EVec3(this,(EVec3 *)&local_40);
  return;
}

void sfnInvertMatrix(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EMat4 mTemp;
	
  bool bVar1;
  EMat4 *m;
  int *piVar2;
  EMat4 mTemp;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  m = GetParam__9ESDMatrixP14EScriptContext(pContext);
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
  __as__5EMat4RC5EMat4(&mTemp,m);
  bVar1 = Invert__5EMat4RC5EMat4(m,&mTemp);
                    /* end of inlined section */
  *piVar2 = (int)bVar1;
  return;
}

void sfnPrintResource(EScriptContext *pContext) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  GetParam__11ESDResourceP14EScriptContext(pContext);
  return;
}

void sfnResourceAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  uint *puVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar1 = *puVar2;
  return;
}

void sfnResourceIsEqual(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar3 = 0;
  if (*puVar1 == *puVar2) {
    *piVar3 = 1;
  }
  return;
}

void sfnIsShader(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsModel(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_modelman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsParticle(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_particletypeman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsScript(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_scriptman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsSample(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_pAudiosampleman->field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsAnimation(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_animman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsAudioStream(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_audiostreamman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsCharacter(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_characterman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsTexture(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_textureman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsFont(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_fontman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnIsLevel(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  bVar1 = IsValid__16EResourceManagerUi(&_levelman.field0_0x0,*puVar2);
  *piVar3 = (int)bVar1;
  return;
}

void sfnPrintPointer(EScriptContext *pContext) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  GetParam__10ESDPointerP14EScriptContext(pContext);
  return;
}

void sfnPointerAssign(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EInstance **ppEVar1;
  EInstance **ppEVar2;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  ppEVar1 = GetParam__10ESDPointerP14EScriptContext(pContext);
  ppEVar2 = GetParam__10ESDPointerP14EScriptContext(pContext);
                    /* end of inlined section */
  *ppEVar1 = *ppEVar2;
  return;
}

void sfnIsEqualif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)((float)*piVar1 == *pfVar2);
  return;
}

void sfnIsEqualfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 == (float)*piVar2);
  return;
}

void sfnGreaterif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar2 < (float)*piVar1);
  return;
}

void sfnGreaterfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)((float)*piVar2 < *pfVar1);
  return;
}

void sfnLessif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)((float)*piVar1 < *pfVar2);
  return;
}

void sfnLessfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 < (float)*piVar2);
  return;
}

void sfnLEif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)((float)*piVar1 <= *pfVar2);
  return;
}

void sfnLEfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 <= (float)*piVar2);
  return;
}

void sfnGEif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar2 <= (float)*piVar1);
  return;
}

void sfnGEfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)((float)*piVar2 <= *pfVar1);
  return;
}

void sfnNotEqualif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)((float)*piVar1 != *pfVar2);
  return;
}

void sfnNotEqualfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *puVar3 = (uint)(*pfVar1 != (float)*piVar2);
  return;
}

void sfnAndff(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar4 = 0;
  if ((*pfVar1 != 0.0) && (*pfVar2 != 0.0)) {
    iVar4 = 1;
  }
  *piVar3 = iVar4;
  return;
}

void sfnAndii(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  uVar4 = 0;
  if (*piVar1 != 0) {
    uVar4 = (uint)(*piVar2 != 0);
  }
  *puVar3 = uVar4;
  return;
}

void sfnAndif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar4 = 0;
  if ((*piVar1 != 0) && (*pfVar2 != 0.0)) {
    iVar4 = 1;
  }
  *piVar3 = iVar4;
  return;
}

void sfnAndfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  puVar3 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  uVar4 = 0;
  if (*pfVar1 != 0.0) {
    uVar4 = (uint)(*piVar2 != 0);
  }
  *puVar3 = uVar4;
  return;
}

void sfnOrff(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar4 = 0;
  if ((*pfVar1 != 0.0) || (*pfVar2 != 0.0)) {
    iVar4 = 1;
  }
  *piVar3 = iVar4;
  return;
}

void sfnOrii(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar4 = 0;
  if ((*piVar1 != 0) || (*piVar2 != 0)) {
    iVar4 = 1;
  }
  *piVar3 = iVar4;
  return;
}

void sfnOrif(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  piVar1 = GetParam__6ESDIntP14EScriptContext(pContext);
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  iVar4 = 0;
  if ((*piVar1 != 0) || (*pfVar2 != 0.0)) {
    iVar4 = 1;
  }
  *piVar3 = iVar4;
  return;
}

void sfnOrfi(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  iVar4 = 0;
  if ((*pfVar1 != 0.0) || (*piVar2 != 0)) {
    iVar4 = 1;
  }
  *piVar3 = iVar4;
  return;
}

sceVu0FMATRIX& EMat4::operator float (&)[3][3]() {
  return (float (*) [4] [4])this;
}

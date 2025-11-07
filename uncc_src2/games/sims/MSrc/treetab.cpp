// STATUS: NOT STARTED

#include "treetab.h"

float gLowAttenuation = 0.002f;
float gModerateAttenuation = 0.02f;
float gHighAttenuation = 0.1f;
float gVisLowAttenuation = 0.002f;
float gVisModerateAttenuation = 0.02f;
float gVisHighAttenuation = 0.1f;

TreeTableEntry* TreeTable::GetEntryByIndex(Int index) {
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	
  TreeTableEntry *pTVar1;
  short **ppsVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pTVar1 = (this->fEntries).pData;
  ppsVar2 = (short **)0x0;
  if (pTVar1 != (TreeTableEntry *)0x0) {
    ppsVar2 = pTVar1[-1].fName.ptr;
  }
                    /* end of inlined section */
  pTVar1 = FindRes__H1ZC14TreeTableEntry_PX01T0i_PX01
                     (pTVar1,(this->fEntries).pData + (int)ppsVar2,index);
  return pTVar1;
}

float TreeTableEntry::GetAttenuationValue(bool visitor) {
  if (visitor) {
    switch(*(undefined2 *)&this->field_0xc) {
    case 0:
      goto switchD_0028ad04_caseD_0;
    case 1:
switchD_0028ad04_caseD_1:
      return 0.0;
    case 2:
      return gVisLowAttenuation;
    case 3:
      return gVisModerateAttenuation;
    case 4:
      return gVisHighAttenuation;
    default:
      return 0.02;
    }
  }
  switch(*(undefined2 *)&this->field_0xc) {
  case 0:
switchD_0028ad04_caseD_0:
    return this->fAttenuationVal;
  case 1:
    goto switchD_0028ad04_caseD_1;
  case 2:
    return gLowAttenuation;
  case 3:
    return gModerateAttenuation;
  case 4:
    return gHighAttenuation;
  default:
    return 0.02;
  }
}

TTabScratchEntry* TTabScratchEntry::TTabScratchEntry() {
  this->fMinAutonomy = 0x32;
  this->fJoinIndex = -1;
  this->fAttenuation = kModerate;
  this->fFlags = 0;
  this->fCheckTreeID = 0;
  this->fActionTreeID = 0;
  return this;
}

void TTabScratchEntry::~TTabScratchEntry(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void TTabScratchEntry::CopyFrom(TreeTableEntry *other) {
	void *dest;
	Int adsToCopy;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	
  TreeTableAd *__src;
  TreeTableAd *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  this->fCheckTreeID = other->fCheckTreeID;
  this->fActionTreeID = other->fActionTreeID;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  __src = (other->fAds).pData;
  iVar2 = 0;
  if (__src != (TreeTableAd *)0x0) {
    iVar2 = *(int *)&__src[-1].fMin;
  }
                    /* end of inlined section */
  if (iVar2 < 0x10) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    pTVar1 = (other->fAds).pData;
    iVar3 = 0;
    if (pTVar1 != (TreeTableAd *)0x0) {
      iVar3 = *(int *)&pTVar1[-1].fMin;
    }
  }
  memmove(this->fAds,__src,(long)(iVar3 * 6));
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
  this->fIndex = (int)(short)other->resID;
  this->fAttenuation = (uint)*(ushort *)&other->field_0xc;
  this->fAttenuationVal = other->fAttenuationVal;
  this->fFlags = (int)*(short *)&other->field_0xe;
  this->fJoinIndex = (int)(short)other->fJoinIndex;
  return;
}

TreeTableEntry* TreeTableEntry * FindRes<TreeTableEntry>(TreeTableEntry *begin, TreeTableEntry *end, int resID) {
	int iCmp;
	TreeTableEntry *middle;
	
  int iVar1;
  TreeTableEntry *pTVar2;
  int iVar3;
  
  while( true ) {
    pTVar2 = end;
    iVar1 = ((int)pTVar2 - (int)begin) * -0x49249249;
    iVar3 = iVar1 >> 2;
    if (iVar3 < 1) {
      return (TreeTableEntry *)0x0;
    }
    if (iVar3 == 1) break;
    end = begin + (iVar3 - (iVar1 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pTVar2;
    }
  }
  pTVar2 = (TreeTableEntry *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pTVar2 = begin;
  }
  return pTVar2;
}

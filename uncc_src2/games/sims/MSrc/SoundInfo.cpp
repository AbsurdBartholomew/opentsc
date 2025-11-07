// STATUS: NOT STARTED

#include "SoundInfo.h"

bool SoundInfo::LoadInfo(iResFile *file, int id) {
	SndInfo *sndInfo;
	VECTOR<SndInfo> *this;
	
  SndInfo *pSVar1;
  EventMapping *pEVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
  pSVar1 = (file->fResData->FWAV).pData;
  pEVar2 = (EventMapping *)0x0;
  if (pSVar1 != (SndInfo *)0x0) {
    pEVar2 = pSVar1[-1].fName;
  }
                    /* end of inlined section */
  pSVar1 = FindRes__H1ZC7SndInfo_PX01T0i_PX01(pSVar1,(file->fResData->FWAV).pData + (int)pEVar2,id);
  if (pSVar1 == (SndInfo *)0x0) {
    this->fEventMapping = (EventMapping *)0x0;
  }
  else {
    this->fEventMapping = pSVar1->fName;
  }
  return pSVar1 != (SndInfo *)0x0;
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

SndInfo* SndInfo * FindRes<SndInfo>(SndInfo *begin, SndInfo *end, int resID) {
	int iCmp;
	SndInfo *middle;
	
  SndInfo *pSVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pSVar1 = end;
    iVar3 = (int)pSVar1 - (int)begin;
    iVar2 = iVar3 >> 3;
    if (iVar2 < 1) {
      return (SndInfo *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == end->resID) {
      return end;
    }
    if (0 < resID - end->resID) {
      begin = end + 1;
      end = pSVar1;
    }
  }
  pSVar1 = (SndInfo *)0x0;
  if (begin->resID == resID) {
    pSVar1 = begin;
  }
  return pSVar1;
}

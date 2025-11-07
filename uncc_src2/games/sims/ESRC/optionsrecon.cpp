// STATUS: NOT STARTED

#include "optionsrecon.h"

ScoreRecon* ScoreRecon::ScoreRecon() {
	StackString2<16> *this;
	StackString2<4> *this;
	
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi((StringBuffer2 *)this,(this->m_sbSimName).fChars,0x10);
  __13StringBuffer2PUsUi(&(this->m_sbPlayerInitials).field0_0x0,(this->m_sbPlayerInitials).fChars,4)
  ;
                    /* end of inlined section */
  erase__13StringBuffer2((StringBuffer2 *)this);
  erase__13StringBuffer2(&(this->m_sbPlayerInitials).field0_0x0);
  this->m_nScore = 0;
  this->m_nComponent1 = 0;
  this->m_nComponent2 = 0;
  this->m_nComponent3 = 0;
  this->m_nComponent4 = 0;
  return this;
}

ScoreRecon* ScoreRecon::ScoreRecon(ScoreRecon &other) {
	StackString2<16> *this;
	StackString2<4> *this;
	ScoreRecon *this;
	ScoreRecon &_ctor_arg;
	StackString2<16> &other;
	StackString2<16> *this;
	
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi((StringBuffer2 *)this,(this->m_sbSimName).fChars,0x10);
  __13StringBuffer2PUsUi(&(this->m_sbPlayerInitials).field0_0x0,(this->m_sbPlayerInitials).fChars,4)
  ;
  copy__13StringBuffer2RC13StringBuffer2((StringBuffer2 *)this,(StringBuffer2 *)other);
  copy__13StringBuffer2RC13StringBuffer2
            (&(this->m_sbPlayerInitials).field0_0x0,&(other->m_sbPlayerInitials).field0_0x0);
                    /* end of inlined section */
  this->m_nScore = other->m_nScore;
  this->m_nComponent1 = other->m_nComponent1;
  this->m_nComponent2 = other->m_nComponent2;
  this->m_nComponent3 = other->m_nComponent3;
  this->m_nComponent4 = other->m_nComponent4;
  return this;
}

void ScoreRecon::DoStream(ReconBuffer *r, SInt32 version) {
  ReconString__11ReconBufferR13StringBuffer2(r,(StringBuffer2 *)this);
  ReconString__11ReconBufferR13StringBuffer2(r,&(this->m_sbPlayerInitials).field0_0x0);
  Recon32__11ReconBufferPii(r,&this->m_nScore,1);
  Recon32__11ReconBufferPii(r,&this->m_nComponent1,1);
  Recon32__11ReconBufferPii(r,&this->m_nComponent2,1);
  Recon32__11ReconBufferPii(r,&this->m_nComponent3,1);
  Recon32__11ReconBufferPii(r,&this->m_nComponent4,1);
  return;
}

OptionsRecon* OptionsRecon::OptionsRecon() {
	short unsigned int sTemp[16];
	int nHouse;
	int nScore;
	
  ScoreRecon *this_00;
  int *piVar1;
  int iVar2;
  StringBuffer2 *pSVar3;
  ScoreRecon *pSVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short sTemp [16];
  int local_a8;
  
  this->m_nScreenAdjustX = '\0';
  this->m_nScreenAdjustY = '\0';
  *(undefined4 *)&this->m_bAutoCenter = 1;
  this->m_nMusicVolume = '\n';
  this->m_nLanguageIndex = -1;
  *(undefined4 *)this = 1;
  *(undefined4 *)&this->m_bRumble = 1;
  this->m_nSFXVolume = '\n';
  __13UnlockedRecon(&this->m_Unlocked);
  iVar6 = 7;
  this_00 = (ScoreRecon *)this->m_HighScores;
  do {
    iVar6 = iVar6 + -1;
    pSVar4 = this_00 + 5;
    iVar2 = 4;
    do {
      iVar2 = iVar2 + -1;
      __10ScoreRecon(this_00);
      this_00 = this_00 + 1;
    } while (iVar2 != -1);
    this_00 = pSVar4;
  } while (iVar6 != -1);
  iVar6 = 0;
  do {
    iVar2 = iVar6 + 1;
    sTemp[2] = 0x53;
    iVar10 = 0x19;
    sTemp[1] = 0x41;
    sTemp[0] = 0x4a;
    pSVar3 = (StringBuffer2 *)this->m_HighScores[iVar6];
    local_a8 = 100;
    sTemp[3] = 0x4f;
    sTemp[4] = 0x4e;
    sTemp[5] = 0;
    erase__13StringBuffer2(pSVar3);
    append__13StringBuffer2PCUsi(pSVar3,sTemp,-1);
    sTemp[2] = 0x43;
    sTemp[0] = 0x4a;
    sTemp[1] = 0x41;
    sTemp[3] = 0x4f;
    sTemp[4] = 0x42;
    iVar11 = 4;
    sTemp[5] = 0;
    erase__13StringBuffer2((StringBuffer2 *)&pSVar3[9].fCapacity);
    append__13StringBuffer2PCUsi((StringBuffer2 *)&pSVar3[9].fCapacity,sTemp,-1);
    sTemp[2] = 0x56;
    sTemp[3] = 0x49;
    sTemp[1] = 0x41;
    sTemp[0] = 0x44;
    sTemp[4] = 0x44;
    sTemp[5] = 0;
    erase__13StringBuffer2(pSVar3 + 0x13);
    append__13StringBuffer2PCUsi(pSVar3 + 0x13,sTemp,-1);
    sTemp[3] = 0x46;
    sTemp[0] = 0x48;
    sTemp[1] = 0x4f;
    sTemp[2] = 0x4f;
    sTemp[4] = 0;
    erase__13StringBuffer2((StringBuffer2 *)&pSVar3[0x1c].fCapacity);
    append__13StringBuffer2PCUsi((StringBuffer2 *)&pSVar3[0x1c].fCapacity,sTemp,-1);
    sTemp[0] = 0x42;
    sTemp[1] = 0x45;
    sTemp[2] = 0x4e;
    sTemp[3] = 0;
    erase__13StringBuffer2(pSVar3 + 0x26);
    append__13StringBuffer2PCUsi(pSVar3 + 0x26,sTemp,-1);
    sTemp[3] = 0;
    sTemp[2] = 0x52;
    sTemp[0] = 0x45;
    sTemp[1] = 0x4f;
    piVar9 = &this->m_HighScores[iVar6][0].m_nComponent4;
    piVar8 = &this->m_HighScores[iVar6][0].m_nComponent3;
    piVar7 = &this->m_HighScores[iVar6][0].m_nComponent2;
    piVar5 = &this->m_HighScores[iVar6][0].m_nComponent1;
    piVar1 = &this->m_HighScores[iVar6][0].m_nScore;
    pSVar3 = &this->m_HighScores[iVar6][0].m_sbPlayerInitials.field0_0x0;
    do {
      iVar11 = iVar11 + -1;
      erase__13StringBuffer2(pSVar3);
      append__13StringBuffer2PCUsi(pSVar3,sTemp,4);
      *piVar1 = local_a8;
      *piVar5 = iVar10;
      local_a8 = local_a8 + -0x14;
      *piVar7 = iVar10;
      piVar1 = piVar1 + 0x13;
      *piVar8 = iVar10;
      piVar5 = piVar5 + 0x13;
      *piVar9 = iVar10;
      piVar7 = piVar7 + 0x13;
      piVar8 = piVar8 + 0x13;
      piVar9 = piVar9 + 0x13;
      iVar10 = iVar10 + -5;
      pSVar3 = (StringBuffer2 *)&pSVar3[9].fCapacity;
    } while (-1 < iVar11);
    iVar6 = iVar2;
  } while (iVar2 < 8);
  return this;
}

OptionsRecon* OptionsRecon::OptionsRecon(OptionsRecon &other) {
	OptionsRecon *this;
	OptionsRecon &_ctor_arg;
	
  StringBuffer2 *pSVar1;
  StringBuffer2 *pSVar2;
  StringBuffer2 *pSVar3;
  ScoreRecon *this_00;
  StringBuffer2 *this_01;
  StringBuffer2 *other_00;
  int iVar4;
  ScoreRecon *pSVar5;
  int iVar6;
  
  __13UnlockedRecon(&this->m_Unlocked);
  iVar6 = 7;
  this_00 = (ScoreRecon *)this->m_HighScores;
  do {
    iVar6 = iVar6 + -1;
    pSVar5 = this_00 + 5;
    iVar4 = 4;
    do {
      iVar4 = iVar4 + -1;
      __10ScoreRecon(this_00);
      this_00 = this_00 + 1;
    } while (iVar4 != -1);
    this_00 = pSVar5;
  } while (iVar6 != -1);
  *(undefined4 *)this = *(undefined4 *)other;
  *(undefined4 *)&this->m_bRumble = *(undefined4 *)&other->m_bRumble;
  *(undefined4 *)&this->m_bAutoCenter = *(undefined4 *)&other->m_bAutoCenter;
  this->m_nSFXVolume = other->m_nSFXVolume;
  this->m_nMusicVolume = other->m_nMusicVolume;
  this->m_nScreenAdjustX = other->m_nScreenAdjustX;
  this->m_nScreenAdjustY = other->m_nScreenAdjustY;
  this->m_nLanguageIndex = other->m_nLanguageIndex;
  __as__13UnlockedReconRC13UnlockedRecon(&this->m_Unlocked,&other->m_Unlocked);
  iVar6 = 7;
  this_01 = (StringBuffer2 *)this->m_HighScores;
  other_00 = (StringBuffer2 *)other->m_HighScores;
  do {
    pSVar3 = this_01 + 0x2f;
    pSVar2 = other_00 + 0x2f;
    iVar6 = iVar6 + -1;
    iVar4 = 4;
    do {
                    /* inlined from ../MSrc/stringbuffer2.h */
      copy__13StringBuffer2RC13StringBuffer2(this_01,other_00);
                    /* end of inlined section */
      iVar4 = iVar4 + -1;
                    /* inlined from ../MSrc/stringbuffer2.h */
      copy__13StringBuffer2RC13StringBuffer2(this_01 + 5,other_00 + 5);
                    /* end of inlined section */
      this_01[7].fMem = other_00[7].fMem;
      this_01[7].fCapacity = other_00[7].fCapacity;
      this_01[8].fMem = other_00[8].fMem;
      this_01[8].fCapacity = other_00[8].fCapacity;
      pSVar1 = other_00 + 9;
      other_00 = (StringBuffer2 *)&other_00[9].fCapacity;
      this_01[9].fMem = pSVar1->fMem;
      this_01 = (StringBuffer2 *)&this_01[9].fCapacity;
    } while (iVar4 != -1);
    this_01 = (StringBuffer2 *)&pSVar3->fCapacity;
    other_00 = (StringBuffer2 *)&pSVar2->fCapacity;
  } while (iVar6 != -1);
  return this;
}

void OptionsRecon::DoStream(ReconBuffer *r, SInt32 version) {
	ReconBuffer *this;
	ReconBuffer *this;
	int nHouse;
	int nScore;
	
  int iVar1;
  ScoreRecon *this_00;
  int iVar2;
  int iVar3;
  
  ReconBool__11ReconBufferPb(r,&this->m_bFreeWill);
  ReconBool__11ReconBufferPb(r,&this->m_bRumble);
  ReconBool__11ReconBufferPb(r,&this->m_bAutoCenter);
  Recon8__11ReconBufferPSci(r,&this->m_nSFXVolume,1);
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
    if (this->m_nSFXVolume < '\0') {
      this->m_nSFXVolume = '\0';
    }
    if ('\n' < this->m_nSFXVolume) {
      this->m_nSFXVolume = '\n';
    }
  }
  Recon8__11ReconBufferPSci(r,&this->m_nMusicVolume,1);
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
    if (this->m_nMusicVolume < '\0') {
      this->m_nMusicVolume = '\0';
    }
    if ('\n' < this->m_nMusicVolume) {
      this->m_nMusicVolume = '\n';
    }
  }
  Recon8__11ReconBufferPSci(r,&this->m_nScreenAdjustX,1);
  Recon8__11ReconBufferPSci(r,&this->m_nScreenAdjustY,1);
  Recon8__11ReconBufferPSci(r,&this->m_nLanguageIndex,1);
  DoStream__13UnlockedReconP11ReconBufferi(&this->m_Unlocked,r,version);
  iVar3 = 0;
  iVar1 = 0;
  while( true ) {
    iVar3 = iVar3 + 1;
    iVar2 = 4;
    this_00 = (ScoreRecon *)((int)this->m_HighScores[0].m_sbSimName.fChars + iVar1 + -8);
    do {
      DoStream__10ScoreReconP11ReconBufferi(this_00,r,version);
      iVar2 = iVar2 + -1;
      this_00 = this_00 + 1;
    } while (-1 < iVar2);
    if (7 < iVar3) break;
    iVar1 = iVar3 * 0x17c;
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

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result) {
	UnlockedId *p;
	UnlockedId &value;
	void *pAddress;
	
  uchar *puVar1;
  UnlockedId *pUVar2;
  
  pUVar2 = result;
  if (first != last) {
    do {
      puVar1 = &first->id;
      first = first + 1;
      result = pUVar2 + 1;
      pUVar2->id = *puVar1;
      pUVar2 = result;
    } while (first != last);
  }
  return result;
}

vector<UnlockedId,__malloc_alloc_template<0> >& vector<UnlockedId, __malloc_alloc_template<0> >::operator=(vector<UnlockedId,__malloc_alloc_template<0> > &x) {
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	UnlockedId *first;
	UnlockedId *last;
	UnlockedId *pointer;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	void *result;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	UnlockedId *first;
	UnlockedId *result;
	ptrdiff_t n;
	UnlockedId *first;
	UnlockedId *last;
	UnlockedId *pointer;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	UnlockedId *first;
	UnlockedId *result;
	ptrdiff_t n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  uchar *puVar1;
  uint uVar2;
  UnlockedId *pAddress;
  UnlockedId *pUVar3;
  uint uVar4;
  
  if (x == this) {
    return this;
  }
  pUVar3 = x->start;
  pAddress = this->start;
  uVar4 = (int)x->finish - (int)pUVar3;
  if ((uint)((int)this->end_of_storage - (int)pAddress) < uVar4) {
                    /* inlined from ../MSrc/algobase.h */
    if (pAddress != this->finish) {
      do {
        pAddress = pAddress + 1;
      } while (pAddress != this->finish);
                    /* end of inlined section */
      pAddress = this->start;
    }
    if (pAddress == (UnlockedId *)0x0) {
      pUVar3 = x->finish;
    }
    else {
                    /* inlined from ../MSrc/alloc.h */
      if (this->end_of_storage == pAddress) {
        pUVar3 = x->finish;
      }
      else {
        free(pAddress);
                    /* end of inlined section */
        pUVar3 = x->finish;
      }
    }
    uVar4 = (int)pUVar3 - (int)x->start;
                    /* inlined from ../MSrc/alloc.h */
    pUVar3 = (UnlockedId *)0x0;
    if (uVar4 == 0) {
                    /* end of inlined section */
      this->start = (UnlockedId *)0x0;
    }
    else {
      pUVar3 = (UnlockedId *)malloc(uVar4);
      if (pUVar3 == (UnlockedId *)0x0) {
        pUVar3 = (UnlockedId *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar4);
        this->start = pUVar3;
      }
      else {
        this->start = pUVar3;
      }
    }
    pUVar3 = uninitialized_copy__H2ZPC10UnlockedIdZP10UnlockedId_X01X01X11_X11
                       (x->start,x->finish,pUVar3);
    this->end_of_storage = pUVar3;
  }
  else {
    uVar2 = (int)this->finish - (int)pAddress;
    if (uVar4 <= uVar2) {
                    /* inlined from ../MSrc/algobase.h */
      if ((int)uVar4 < 1) {
        pUVar3 = this->finish;
      }
      else {
        do {
          puVar1 = &pUVar3->id;
          uVar4 = uVar4 - 1;
          pUVar3 = pUVar3 + 1;
          pAddress->id = *puVar1;
          pAddress = pAddress + 1;
        } while (0 < (int)uVar4);
        pUVar3 = this->finish;
      }
      if (pAddress == pUVar3) {
        pUVar3 = x->start;
      }
      else {
        do {
          pAddress = pAddress + 1;
        } while (pAddress != pUVar3);
                    /* end of inlined section */
        pUVar3 = x->start;
      }
      goto LAB_00198fa8;
    }
                    /* inlined from ../MSrc/algobase.h */
    if ((int)uVar2 < 1) {
      pUVar3 = this->start;
    }
    else {
      do {
        puVar1 = &pUVar3->id;
        uVar2 = uVar2 - 1;
        pUVar3 = pUVar3 + 1;
        pAddress->id = *puVar1;
        pAddress = pAddress + 1;
      } while (0 < (int)uVar2);
                    /* end of inlined section */
      pUVar3 = this->start;
    }
    uninitialized_copy__H2ZPC10UnlockedIdZP10UnlockedId_X01X01X11_X11
              (this->finish + ((int)x->start - (int)pUVar3),x->finish,this->finish);
  }
  pUVar3 = x->start;
LAB_00198fa8:
  this->finish = x->finish + ((int)this->start - (int)pUVar3);
  return this;
}

UnlockedRecon& UnlockedRecon::operator=(UnlockedRecon &_ctor_arg) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/optionsrecon.cpp */
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->objects,&_ctor_arg->objects);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->gameModes,&_ctor_arg->gameModes);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->challengeLevels,&_ctor_arg->challengeLevels);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->careers,&_ctor_arg->careers);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->ma_hair,&_ctor_arg->ma_hair);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->ma_makeup,&_ctor_arg->ma_makeup);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->ma_accessories,&_ctor_arg->ma_accessories);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->ma_face,&_ctor_arg->ma_face);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->ma_upperBody,&_ctor_arg->ma_upperBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->ma_lowerBody,&_ctor_arg->ma_lowerBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->ma_shoes,&_ctor_arg->ma_shoes);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->mc_hair,&_ctor_arg->mc_hair);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->mc_makeup,&_ctor_arg->mc_makeup);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->mc_accessories,&_ctor_arg->mc_accessories);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->mc_face,&_ctor_arg->mc_face);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->mc_upperBody,&_ctor_arg->mc_upperBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->mc_lowerBody,&_ctor_arg->mc_lowerBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->mc_shoes,&_ctor_arg->mc_shoes);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fa_hair,&_ctor_arg->fa_hair);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fa_makeup,&_ctor_arg->fa_makeup);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fa_accessories,&_ctor_arg->fa_accessories);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fa_face,&_ctor_arg->fa_face);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fa_upperBody,&_ctor_arg->fa_upperBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fa_lowerBody,&_ctor_arg->fa_lowerBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fa_shoes,&_ctor_arg->fa_shoes);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fc_hair,&_ctor_arg->fc_hair);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fc_makeup,&_ctor_arg->fc_makeup);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fc_accessories,&_ctor_arg->fc_accessories);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fc_face,&_ctor_arg->fc_face);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fc_upperBody,&_ctor_arg->fc_upperBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fc_lowerBody,&_ctor_arg->fc_lowerBody);
  __as__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0RCt6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0
            (&this->fc_shoes,&_ctor_arg->fc_shoes);
  return this;
}

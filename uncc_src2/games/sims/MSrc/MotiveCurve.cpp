// STATUS: NOT STARTED

#include "MotiveCurve.h"

void MotiveCurveSet::PrintMotiveGraph(FILE *f, StringSet *motiveLabels) {
  return;
}

void MotiveCurveSet::PrintMotiveGraph(char *filename) {
  return;
}

void MotiveCurveSet::LoadFromFile(iResFile *file, SInt16 id) {
	AUTOPTR<StringSet> newPoints;
	int strCnt;
	MotiveCurveSet *this;
	char *pointsStr;
	
  StringSet *pInstance;
  long lVar1;
  PiecewiseFn *this_00;
  int iVar2;
  int iVar3;
  AUTOPTR_StringSet_ newPoints;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
                    /* end of inlined section */
  iVar3 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
  (*(code *)pInstance->__vtable[1].InsertString)
            ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].SetString,file,id,0)
  ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
  iVar2 = 0;
  if (0 < this->fNumCurves) {
    do {
      this_00 = (PiecewiseFn *)((int)&(this->fCurves->field0_0x0).fPoints + iVar2);
      Reset__11PiecewiseFn(this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
      lVar1 = (*(code *)pInstance->__vtable->RemoveString)
                        ((int)&pInstance->__vtable +
                         (int)*(short *)&pInstance->__vtable->InsertString,iVar3,0xffffffffffffffff)
      ;
      if (lVar1 != 0) {
        AddPointsFromText__11PiecewiseFnPCc(this_00,(char *)lVar1);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 <= this->fNumCurves);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet(pInstance);
  return;
}

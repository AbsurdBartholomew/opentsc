// STATUS: NOT STARTED

#include "uistringlookup.h"

BString2 _sHoursLookup = {
	/* .reference = */ NULL
};

BString2 _sMinLookup = {
	/* .reference = */ NULL
};

BString2 _sAM_PMLookup = {
	/* .reference = */ NULL
};

BString2 _sNum = {
	/* .reference = */ NULL
};

BString2 _sAmount = {
	/* .reference = */ NULL
};

BString2 _sName = {
	/* .reference = */ NULL
};

BString2 _sLiquidate = {
	/* .reference = */ NULL
};

BString2 _sDlrSgn = {
	/* .reference = */ NULL
};

BString2 _s1000s = {
	/* .reference = */ NULL
};

BString2 _s100s = {
	/* .reference = */ NULL
};

BString2 _sColon = {
	/* .reference = */ NULL
};

BString2 _sComma = {
	/* .reference = */ NULL
};

BString2 _sLbrack = {
	/* .reference = */ NULL
};

BString2 _sRbrack = {
	/* .reference = */ NULL
};

BString2 _sButtonSymbol = {
	/* .reference = */ NULL
};

BString2 _sXButt = {
	/* .reference = */ NULL
};

BString2 _sOButt = {
	/* .reference = */ NULL
};

BString2 _sTriButt = {
	/* .reference = */ NULL
};

BString2 _sSqrButt = {
	/* .reference = */ NULL
};

BString2 _sL1Butt = {
	/* .reference = */ NULL
};

BString2 _sR1Butt = {
	/* .reference = */ NULL
};

BString2 _sL2Butt = {
	/* .reference = */ NULL
};

BString2 _sR2Butt = {
	/* .reference = */ NULL
};

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___8BString2(&_sR2Butt,2);
      ___8BString2(&_sL2Butt,2);
      ___8BString2(&_sR1Butt,2);
      ___8BString2(&_sL1Butt,2);
      ___8BString2(&_sSqrButt,2);
      ___8BString2(&_sTriButt,2);
      ___8BString2(&_sOButt,2);
      ___8BString2(&_sXButt,2);
      ___8BString2(&_sButtonSymbol,2);
      ___8BString2(&_sRbrack,2);
      ___8BString2(&_sLbrack,2);
      ___8BString2(&_sComma,2);
      ___8BString2(&_sColon,2);
      ___8BString2(&_s100s,2);
      ___8BString2(&_s1000s,2);
      ___8BString2(&_sDlrSgn,2);
      ___8BString2(&_sLiquidate,2);
      ___8BString2(&_sName,2);
      ___8BString2(&_sAmount,2);
      ___8BString2(&_sNum,2);
      ___8BString2(&_sAM_PMLookup,2);
      ___8BString2(&_sMinLookup,2);
      ___8BString2(&_sHoursLookup,2);
    }
    else {
      __8BString2PCw(&_sHoursLookup,(int *)&DAT_003b5660);
      __8BString2PCw(&_sMinLookup,(int *)&DAT_003b5678);
      __8BString2PCw(&_sAM_PMLookup,(int *)&DAT_003b5688);
      __8BString2PCw(&_sNum,(int *)&DAT_003b56a0);
      __8BString2PCw(&_sAmount,(int *)&DAT_003b56b0);
      __8BString2PCw(&_sName,(int *)&DAT_003b56d0);
      __8BString2PCw(&_sLiquidate,(int *)&DAT_003b56e8);
      __8BString2PCw(&_sDlrSgn,(int *)&DAT_003b5710);
      __8BString2PCw(&_s1000s,(int *)&DAT_003b5718);
      __8BString2PCw(&_s100s,(int *)&DAT_003b5730);
      __8BString2PCw(&_sColon,(int *)&DAT_003b5748);
      __8BString2PCw(&_sComma,(int *)&DAT_003b5750);
      __8BString2PCw(&_sLbrack,(int *)&DAT_003b5758);
      __8BString2PCw(&_sRbrack,(int *)&DAT_003b5760);
      __8BString2PCw(&_sButtonSymbol,(int *)&DAT_003b5768);
      __8BString2PCw(&_sXButt,(int *)&DAT_003b5770);
      __8BString2PCw(&_sOButt,(int *)&DAT_003b5778);
      __8BString2PCw(&_sTriButt,(int *)&DAT_003b5780);
      __8BString2PCw(&_sSqrButt,(int *)&DAT_003b5790);
      __8BString2PCw(&_sL1Butt,(int *)&DAT_003b57a0);
      __8BString2PCw(&_sR1Butt,(int *)&DAT_003b57b0);
      __8BString2PCw(&_sL2Butt,(int *)&DAT_003b57c0);
      __8BString2PCw(&_sR2Butt,(int *)&DAT_003b57d0);
    }
  }
  return;
}

void global constructors keyed to _sHoursLookup() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _sHoursLookup() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

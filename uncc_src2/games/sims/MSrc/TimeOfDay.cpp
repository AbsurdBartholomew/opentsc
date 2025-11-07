// STATUS: NOT STARTED

#include "TimeOfDay.h"

Int GameTime::CountDaysInMonth(Int year, Int month) {
  return 0x1e;
}

Int GameTime::CountDaysInYear(Int year) {
  return 0x168;
}

Int GameTime::SubtractDates(Int year1, Int month1, Int day1, Int year2, Int month2, Int day2) {
	Int elapsed1;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetDaysSince1900__8GameTimeiii(year1,month1,day1);
  iVar2 = GetDaysSince1900__8GameTimeiii(year2,month2,day2);
  return iVar1 - iVar2;
}

Int GameTime::GetDaysSince1900(Int year, Int month, Int day) {
	Int days;
	Int mm;
	
  int iVar1;
  int iVar2;
  int month_00;
  
  if ((year < 0x76c) || (month_00 = 1, 0xb < month - 1U)) {
    iVar2 = 0;
  }
  else {
    iVar2 = day + -1;
    if (1 < month) {
      do {
        iVar1 = CountDaysInMonth__8GameTimeii(year,month_00);
        month_00 = month_00 + 1;
        iVar2 = iVar2 + iVar1;
      } while (month_00 < month);
    }
    iVar2 = (year + -0x76c) * 0x168 + iVar2;
  }
  return iVar2;
}

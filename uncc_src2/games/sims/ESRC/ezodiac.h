// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EZODIAC_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EZODIAC_H

typedef SInt16 StdPrm;

bool InitZodiac();
StdPrm ComputeZodiacSign(StdPrm *inPersonData);
StdPrm EORComputeZodiacSign(StdPrm *inPersonData);
void SetZodiacSign(StdPrm *outPersonData, StdPrm inSign);
void EORSetZodiacSign(StdPrm *outPersonData, StdPrm inSign);
u16* GetZodiacName(StdPrm inZodiacSign);
StdPrm GetSignFromName(u16 *inName);
u16* GetCompatibleSigns(StdPrm inZodiacSign);
u16* GetIncompatibleSigns(StdPrm inZodiacSign);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EZODIAC_H

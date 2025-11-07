// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_WSTRINGUTIL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_WSTRINGUTIL_H

typedef StackString2<256> StringBufW255;
extern char __sprintfbuff[32];
extern short unsigned int __floatstrbuff[32];

unsigned int CatWsABToBuff(c16 *pA, c16 *pB, c16 *outBuff, unsigned int outBuffSize);
unsigned int CatWsAToBuff(c16 *pA, c16 *outBuff, unsigned int outBuffSize);
unsigned int FloatToWString(float fin, c16 *outBuff, unsigned int outBuffSize);
unsigned int IntToWString(int in, c16 *outBuff, unsigned int outBuffSize, int ndig);
unsigned int CopyCharStrToWString(char *szin, c16 *outBuff, unsigned int outBuffSize);
int wcsncmp(c16 *s1, c16 *s2, c16 count);
bool SubstituteString(c16 *instr, c16 *searchString, c16 *substring, StringBufW255 &outBuff);
bool SubstituteStringAll(c16 *instr, c16 *searchString, c16 *substring, BString2 &outBuff);
bool SubstituteStringAll(c16 *instr, c16 *searchString, c16 *substring, StringBufW255 &outBuff);
bool SubstituteString(c16 *instr, c16 *searchString, c16 *substring, BString2 &outBuff);
void GetTimeString(int hours, int mins, u16 *ampm, StringBufW255 &outStr);
void GetMoneyString(int dollars, StringBufW255 &outStr);
void ReplaceButtonPrompts(c16 *instr, BString2 &outStr);
void ReplaceButtonPrompts(c16 *instr, StringBufW255 &outStr);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_WSTRINGUTIL_H

/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "global.h"

EGlobal _globals;
EVec2 _defULTextureCoord;
EVec2 _defLRTextureCoord;
EVec4 _vBlueBack;
EVec4 _WHITE;
EVec4 _BLACK;
EVec4 _YELLOW;
EVec4 _BLUE;
EVec4 _RED;
EVec4 _GREEN;
EVec4 _CYAN;
EVec4 _MAJENTA;
EVec4 _GREAY;
EVec4 _LT_GREAY;
EVec4 _DK_GREAY;

EGlobal::EGlobal()
{
}

bool EGlobal::TransformToScreen(EVec3 &vWorldIn, EVec2 &vScreenOut)
{
}

void EGlobal::Message(void *pPram, u32 messageId)
{
}

void EGlobal::AdvanceSelectedPerson(u32 player)
{
}

void EGlobal::ReverseSelectedPerson(u32 player)
{
}

bool EGlobal::IsTwoPlayer()
{
    return false;
}

void EGlobal::RecalcFloor()
{
}

void EGlobal::RecalcWalls()
{
}

void EGlobal::RecalcObjects()
{
}

void EGlobal::RecalcHouse()
{
}

void EGlobal::SelectWin(ERC *prc)
{
}

ESimsCam *EGlobal::GetCam()
{
    return _pCurCam;
}

void EGlobal::SetCam(ESimsCam *cam)
{
}

void EGlobal::CreateUnlockDialog(/* a1 5 */ s32 guid)
{
}
void EGlobal::CreateNameEntry(/* s1 17 */ s32 nNewScoreIndex, /* s2 18 */ s32 nChallengePlayerNum, /* s3 19 */ s32 nChallengeScore)
{
}
/*
void EGlobal::DoModelessMessage(int player_id, StackElem *elem, DialogParam *dialogParam, cXObject *pObj, ObjSelector *pSel)
{

}*/

void EGlobal::SwapSelectedSims()
{
}

void EGlobal::Reset()
{
    
}

void EGlobal::BeginSaveGame()
{
}

void EGlobal::EndSaveGame()
{
}

/*
bool EGlobal::CheckForZeroExtentOverride(cXObject *pOb)
{

}*/

bool EGlobal::CheckForZeroExtentOverride()
{
}

s32 EGlobal::CallUnlockItems(u32 code, u32 nPersonId, u16 *pnBitCode)
{
}

void EGlobal::CallTestUnlocked(u32 code, u16 *pnBitCode)
{
}

s32 EGlobal::CallNewScore(s16 nPlayerNum, s16 nScore, s16 nComponent1, s16 nComponent2, s16 nComponent3, s16 nComponent4)
{
}

void EGlobal::LoadIntroRequirements()
{
    
}
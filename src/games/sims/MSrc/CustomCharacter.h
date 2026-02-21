/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/types.h"
#include "MSrc/Recon.h"

struct CustomCharacter
{
    bool m_bMale;
    bool m_bAdult;
    s8 m_nBodyType;
    s8 m_nGlassesIndex;
    s8 m_nFaceIndex;
    s8 m_nHairHatIndex;
    s8 m_nUpperBodyIndex;
    s8 m_nLowerBodyIndex;
    s8 m_nShoesIndex;
    s8 m_nFacialHairIndex;
    s8 m_nSkinColor;
    s8 m_nHairHatColor;
    s8 m_nUpperBodyColor;
    s8 m_nLowerBodyColor;
    s8 m_nShoesColor;
    s8 m_nFacialHairColor;
    s8 m_nEyeColor;

    CustomCharacter(CustomCharacter &other);
    CustomCharacter();
    void DoStream(ReconBuffer *r, SInt32 version);
    void Print();
};
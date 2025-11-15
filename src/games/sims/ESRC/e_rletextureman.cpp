/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_rletextureman.h"

ERleTextureManager _rletexman;

ERleTextureManager::ERleTextureManager()
{
}

EResource *ERleTextureManager::AllocateAndLoadResource(EStream &s)
{
    ERRleTexture *pRRleTexture = new ERRleTexture();
    pRRleTexture->Load(s);

    return pRRleTexture;
}
/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once
#include <SDL2/SDL_timer.h>
#include "common/types.h"

class EClockMan
{
public:
    /* vtable[2] */ virtual void Init() = 0;
    /* vtable[3] */ virtual void Update() = 0;
    /* vtable[4] */ virtual void Start(void *pVoid) = 0;
    /* vtable[5] */ virtual void *GetInstanceData() = 0;
    /* vtable[6] */ virtual void FreeInstanceData(void *data) = 0;
    /* vtable[7] */ virtual float GetSec(void *pVoid) = 0;
    /* vtable[8] */ virtual double GetSecDouble(void *pVoid) = 0;
};

struct ESdlClockMan : public EClockMan
{
protected:
    u32 m_lastCounter;
    u32 m_nWraps;

    SDL_TimerID m_sdlTimer;

public:
    ESdlClockMan();
    virtual ~ESdlClockMan();
    /* vtable[2] */ void Init();
    /* vtable[3] */ void Update();
    /* vtable[4] */ void Start(void *pVoid);
    /* vtable[5] */ void *GetInstanceData();
    /* vtable[6] */ void FreeInstanceData(void *data);
    /* vtable[7] */ float GetSec(void *pVoid);
    /* vtable[8] */ double GetSecDouble(void *pVoid);
};

extern ESdlClockMan _sdlClockMan;
extern EClockMan *_pClockMan;
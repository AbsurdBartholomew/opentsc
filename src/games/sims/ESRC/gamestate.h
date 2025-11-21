/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/types.h"
#include "engine/e_rc.h"

class EGameStateMan;
class EGameStateId;

class EGameStateId {
protected:
	u32 m_id;
	
public:
	//EGameStateId();
	//EGameStateId(EGameStateId*, int a);
};

class EGameState {
protected:
	EGameStateId m_state;
	EGameStateMan *m_pStateMan;
public:
	EGameState();

    virtual void Init(int a) = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
    virtual void Reset(int a) = 0;

    EGameStateId GetState() { return m_state; }
};

class EGameStateMan
{
public:
    EGameStateMan();
    virtual ~EGameStateMan();

    void SetState(EGameStateId newState);
    void AddState(EGameState *pState);

    void SoftReset();
    void DeleteAllStates();

    void Update();
    void Draw(ERC *prc);

    void DrawNoCtrlMessage(ERC *prc, c16 *messageId);

    void BeginFadeIn();
    void BeginFadeout(EGameStateId newState);
    void DoFade(ERC *prc);

    void DrawStoryModeTransScreen(ERC *prc, bool DrawText);
    void DrawGenericTransitionScreen(ERC *prc);
};
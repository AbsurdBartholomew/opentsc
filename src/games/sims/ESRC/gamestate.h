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
	EGameState& operator=(EGameState state) { ; }

	EGameState();
    EGameState(int a);

    virtual void Init(int a);
    virtual void Update();
    virtual void Draw();
    virtual void Reset(int a);

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
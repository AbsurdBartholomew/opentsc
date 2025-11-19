/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/sync/sdl/e_thread.h"
#include "common/types.h"

enum EAppState {
	E_APPSTATE_NORMAL = 0,
	E_APPSTATE_NEXTMOVIEPLAY = 1,
	E_APPSTATE_MOVIEPLAY = 2
};

enum ELanguage
{
    E_LANGUAGE_ENGLISH,
};

class EApp : public EThread
{
public:
    EApp();
    virtual ~EApp();

    bool m_done;
	int m_nArgc;
	char **m_ppszArgv;
	EAppState m_appState;
	EAppState m_appNextState;
	//ERMovie *m_pRMovie;
	u32 m_uNextMovieID;
	int m_MovieX;
	int m_MovieY;

    virtual char* GetDataDirectory();
    virtual char* GetModuleDirectory();
    virtual char* GetBuildVersion();
    virtual char* GetAppName();

    void CreateAndStartAppThread();

    virtual void PlayMovie(u32 resid, int x, int y);
    virtual void StopMovie();
    virtual bool IsMoviePlaying();

    virtual FnAlloc GetMovieAllocator();
    virtual FnAllocAlign GetMovieAllocatorAlign();
    virtual FnFree GetMovieDeallocator();
    virtual int GetEventTableSize();

    void SetArgs(int nArgc, char **ppszArgv);
	char* GetArg(char *pszFlag);

    friend class EThread;
protected:
    void Main();
    virtual void Init();
    virtual void Update();
    virtual void SystemInit();
    virtual void SystemUpdate();
    virtual int GetAppStackSize();
    virtual void Shutdown();
};

extern EApp *_pApp;
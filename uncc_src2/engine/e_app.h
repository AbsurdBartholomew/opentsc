// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_APP_H
#define C__EOR_SRC2_ENGINE_E_APP_H

enum EAppState {
	E_APPSTATE_NORMAL = 0,
	E_APPSTATE_NEXTMOVIEPLAY = 1,
	E_APPSTATE_MOVIEPLAY = 2
};

struct EApp : EThread {
	bool m_done;
	int m_nArgc;
	char **m_ppszArgv;
	EAppState m_appState;
	EAppState m_appNextState;
	ERMovie *m_pRMovie;
	u32 m_uNextMovieID;
	int m_MovieX;
	int m_MovieY;
	
	EApp& operator=();
	EApp();
	EApp();
	/* vtable[1] */ virtual EApp(EApp*, int, void);
	/* vtable[3] */ virtual char* GetDataDirectory();
	/* vtable[4] */ virtual char* GetModuleDirectory();
	/* vtable[5] */ virtual char* GetBuildVersion();
	/* vtable[6] */ virtual char* GetAppName();
	void CreateAndStartAppThread();
	/* vtable[7] */ virtual void PlayMovie(u32 resid, int x, int y);
	/* vtable[8] */ virtual void StopMovie();
	/* vtable[9] */ virtual bool IsMoviePlaying();
	/* vtable[10] */ virtual FnAlloc GetMovieAllocator();
	/* vtable[11] */ virtual FnAllocAlign GetMovieAllocatorAlign();
	/* vtable[12] */ virtual FnFree GetMovieDeallocator();
	/* vtable[13] */ virtual int GetEventTableSize();
	void SetArgs(int nArgc, char **ppszArgv);
	char* GetArg(char *pszFlag);
protected:
	/* vtable[2] */ virtual void Main();
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Update();
	/* vtable[16] */ virtual void SystemInit();
	/* vtable[17] */ virtual void SystemUpdate();
	/* vtable[18] */ virtual int GetAppStackSize();
	/* vtable[19] */ virtual void Shutdown();
};

extern EApp *_pApp;
extern __vtbl_ptr_type EApp virtual table[21];

void EApp::~EApp(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_APP_H

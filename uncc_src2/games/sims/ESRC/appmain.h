// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_APPMAIN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_APPMAIN_H

typedef void* (*FnAlloc)(/* parameters unknown */);
typedef unsigned char u_char;

struct ESimsApp : EApp {
	EGameStateMan *m_pGameStateMan;
	ERC *m_prc;
	bool m_bLoadedIntroDataSet;
	EWindow *m_pFullWindow;
protected:
	ERShader *m_pSplashScreenShader;
	int m_InitializationState;
	
public:
	ESimsApp& operator=();
	ESimsApp();
	ESimsApp();
	/* vtable[1] */ virtual ESimsApp(ESimsApp*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Update();
	/* vtable[6] */ virtual char* GetAppName();
	/* vtable[5] */ virtual char* GetBuildVersion();
	/* vtable[3] */ virtual char* GetDataDirectory();
	/* vtable[4] */ virtual char* GetModuleDirectory();
	/* vtable[19] */ virtual void Shutdown();
	/* vtable[13] */ virtual int GetEventTableSize();
	void LoadSimulatorGlobs();
	/* vtable[10] */ virtual FnAlloc GetMovieAllocator();
	/* vtable[11] */ virtual FnAllocAlign GetMovieAllocatorAlign();
	/* vtable[12] */ virtual FnFree GetMovieDeallocator();
	static void* MovieAllocMemAlign(/* parameters unknown */);
	static void MovieFreeMem(/* parameters unknown */);
protected:
	void initContinue();
};

extern ESimsApp _app;
extern __vtbl_ptr_type ESimsApp virtual table[21];
extern u32 _TOTAL_FREE;
extern u32 _LARGEST_FREE;

void ESimsApp::~ESimsApp(int __in_chrg);
void PS2Reboot();
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to _app();
void global destructors keyed to _app();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_APPMAIN_H

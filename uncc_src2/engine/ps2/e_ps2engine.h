// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2ENGINE_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2ENGINE_H

struct EPs2Engine : EEngine {
protected:
	EString m_iopModulePrefix;
	EString m_PCFileServerIP;
	
public:
	EPs2Engine& operator=();
	EPs2Engine();
	EPs2Engine();
	/* vtable[1] */ virtual EPs2Engine(EPs2Engine*, int, void);
	static bool InitMemoryManager(/* parameters unknown */);
	char* GetIOPModulePrefix();
	char* GetFileServerIP();
	bool LoadIopModule(char *szName, int *pRet, char *szArgs);
	bool UnloadIopModule(char *szName, int *pRet);
	/* vtable[11] */ virtual void Reboot();
	/* vtable[5] */ virtual void EnterMovieMode();
	/* vtable[6] */ virtual void ExitMovieMode();
protected:
	/* vtable[4] */ virtual bool Init();
	void SetupIopModulePrefix();
	void InitFileServerIP();
	bool InitializeIOP();
	bool InitializeProfiler();
	bool SetCDMode();
};

extern EPs2Engine _ps2engine;
extern EEngine *_pEngine;
extern __vtbl_ptr_type EPs2Engine virtual table[17];
extern int _iSoundThread;

void EPs2Engine::~EPs2Engine(int __in_chrg);
void EString::~EString(int __in_chrg);
void __builtin_delete(void *pAddress);
void global constructors keyed to _ps2engine();
void global destructors keyed to _ps2engine();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2ENGINE_H

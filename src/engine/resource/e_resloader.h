/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/types.h"
#include "common/sync/e_mutex.h"
#include "engine/e_metrics.h"
#include "common/file/e_file.h"
#include "common/datastruc/e_string.h"
#include "common/sync/sdl/e_thread.h"

class EResource;
class EResourceManager;

struct EResourceLoader {
	/* vtable[2] */ virtual void Init() = 0;
	/* vtable[3] */ virtual void Shutdown() = 0;
	/* vtable[4] */ virtual void TerminateThread() = 0;
	/* vtable[5] */ virtual void Update() = 0;
	/* vtable[6] */ virtual void Flush() = 0;
	/* vtable[7] */ virtual u32* AddManager(EResourceManager *pManager) = 0;
	/* vtable[8] */ virtual void RemoveManager(EResourceManager *pManager) = 0;
	/* vtable[9] */ virtual EResource* Load(EResourceManager *pManager, u32 id, EFile *pSourceFile, u32 uStartOffset, u32 uLength, bool bWait) = 0;
	/* vtable[10] */ virtual EResourceManager* FindResourceManager(char *szDataType) = 0;
	/* vtable[11] */ virtual void NewDataFiles() = 0;
	/* vtable[12] */ virtual void OpenFiles() = 0;
	/* vtable[13] */ virtual void CloseAllArchiveFiles() = 0;
	/* vtable[14] */ virtual void PrintAllLoadedResources() = 0;
};

struct EResLoadCmd {
	EResourceManager *pManager;
	u32 id;
	EFile *pSourceFile;
	u32 uStartOffset;
	u32 uLength;
	EResource *pResource;
	bool bWait;
	

	EResLoadCmd();
};

struct EResourceLoaderImpl : public EResourceLoader, private EThread {
	static bool m_bLowPriority;
	TLinkedList<EResourceManager,60,64> m_resManList;
	bool m_bInitialized;
	void *m_pGlobalIndex;
	EMutex m_dataMutex;
	EMutex m_flushMutex;
	//TFixedPool<EResLoadCmd,16> m_cmdAllocPool;
	//EMsgQueue m_commandQueue;
	
	EResourceLoaderImpl();
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Shutdown();
	/* vtable[4] */ virtual void TerminateThread();
	/* vtable[5] */ virtual void Update();
	/* vtable[6] */ virtual void Flush();
	/* vtable[7] */ virtual u32* AddManager(EResourceManager *pManager);
	/* vtable[8] */ virtual void RemoveManager(EResourceManager *pManager);
	/* vtable[9] */ virtual EResource* Load(EResourceManager *pManager, u32 id, EFile *pSourceFile, u32 uStartOffset, u32 uLength, bool bWait);
	/* vtable[10] */ virtual EResourceManager* FindResourceManager(char *szDataType);
	/* vtable[11] */ virtual void NewDataFiles();
	/* vtable[12] */ virtual void OpenFiles();
	/* vtable[13] */ virtual void CloseAllArchiveFiles();
	/* vtable[14] */ virtual void PrintAllLoadedResources();
	/* vtable[2] */ virtual void Main();
	void deallocateGlobalIndex();
	void allocateGlobalIndex();
	u32* getIndexPointer(EString &dataType);
	int getCommandCount();
	void sendCommand(EResLoadCmd *pCmd);
	static void _tAlarmCallback(u32 interval, void *param);
protected:
	u32 m_timerId;
};

extern EResourceLoader *_pResLoader;
// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_AUDIOSTREAM_E_AUDIOSTREAMMAN_H
#define C__EOR_SRC2_ENGINE_AUDIOSTREAM_E_AUDIOSTREAMMAN_H

struct ERAudioStream : EResource {
	EFile *m_pFile;
	u32 m_uStartOffset;
	u32 m_uEndOffset;
	
	ERAudioStream& operator=();
	ERAudioStream();
	ERAudioStream();
	/* vtable[6] */ virtual ERAudioStream(ERAudioStream*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EAudioStreamManager : EResourceManager {
	EAudioStreamManager& operator=();
	EAudioStreamManager();
	/* vtable[1] */ virtual EAudioStreamManager(EAudioStreamManager*, int, void);
	ERAudioStream* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERAudioStream* AddRef();
	EAudioStreamManager();
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
};

extern EAudioStreamManager _audiostreamman;
extern __vtbl_ptr_type EAudioStreamManager virtual table[7];
extern __vtbl_ptr_type ERAudioStream virtual table[13];

void ERAudioStream::~ERAudioStream(int __in_chrg);
void EAudioStreamManager::~EAudioStreamManager(int __in_chrg);
void global constructors keyed to _audiostreamman();
void global destructors keyed to _audiostreamman();

#endif // C__EOR_SRC2_ENGINE_AUDIOSTREAM_E_AUDIOSTREAMMAN_H

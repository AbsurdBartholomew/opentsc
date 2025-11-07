// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2AUDIO_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2AUDIO_H

typedef EVoice *EVOICE;

enum EA_EVENT {
	EAE_TIMER = 1,
	EAE_STREAM_END = 2,
	EAE_SAMPLE_END = 3
};

struct EPMDesc {
	u32 uAudioStreamID;
	s32 sLoopStartOffset;
	s32 sLoopEndOffset;
	bool bLooping;
	bool bPaused;
};

struct EVoiceDesc {
	u32 mask;
	float volumeL;
	float volumeR;
	float pitch;
	bool bPlaying;
	
	EVoiceDesc& operator=();
	EVoiceDesc();
	EVoiceDesc();
	void SetLeftVolume();
	void SetRightVolume();
	void SetPitch();
	void SetPlaying();
};

struct EAudio {
	__vtbl_ptr_type *$vf3277;
	
	EAudio& operator=();
	EAudio();
protected:
	EAudio();
	/* vtable[1] */ virtual EAudio(EAudio*, int, void);
public:
	/* vtable[2] */ virtual void InitAudio();
	/* vtable[3] */ virtual void Shutdown();
	/* vtable[4] */ virtual void Update();
	/* vtable[5] */ virtual void Flush();
	/* vtable[6] */ virtual void AddEvent();
	/* vtable[7] */ virtual void RemoveEvent();
	/* vtable[8] */ virtual void PlayMusic();
	/* vtable[9] */ virtual void StopMusic();
	/* vtable[10] */ virtual void PauseMusic();
	/* vtable[11] */ virtual void ResumeMusic();
	/* vtable[12] */ virtual void SetMusicVolume();
	/* vtable[13] */ virtual float GetMusicVolume();
	/* vtable[14] */ virtual void SetMusicPan();
	/* vtable[15] */ virtual float GetMusicPan();
	/* vtable[16] */ virtual bool IsPlayingMusic();
	/* vtable[17] */ virtual EVOICE AllocVoice();
	/* vtable[18] */ virtual void FreeVoice();
	/* vtable[19] */ virtual void BindVoice();
	/* vtable[20] */ virtual void UnbindVoice();
	/* vtable[21] */ virtual void GetVoiceState();
	/* vtable[22] */ virtual void SetVoiceState();
};

struct EAudioCmd {
	int m_iVoice;
	EVoiceDesc m_voiceDesc;
	bool m_bUnBind;
	ERSampledata *m_pSampleRes;
	
	EAudioCmd& operator=();
	EAudioCmd();
	EAudioCmd();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

enum MusicMode {
	kMusic48khtz = 0,
	kMusic24khtz = 1
};

struct EAudioEventHandler {
	EAudioEventHandler *pNext;
	EA_EVENT type;
	EMsgQueue &queue;
	u32 queueMsg;
	
	EAudioEventHandler& operator=();
	EAudioEventHandler();
	EAudioEventHandler();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct DelayedRefHolder {
	DelayedRefHolder *pNext;
	ERSampledata *pSample;
	int iCounter;
	
	DelayedRefHolder& operator=();
	DelayedRefHolder();
	DelayedRefHolder();
	DelayedRefHolder(DelayedRefHolder*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void reset();
};

struct Stream {
	EFile *m_pFile;
	u32 m_uLoopStartOffset;
	u32 m_uLoopEndOffset;
	u32 m_uCurrentOffset;
	u32 m_uEndOffset;
	bool m_bLooping;
	bool m_bPlaying : 1;
};

struct TFixedPool<EAudioCmd,128> : EFixedPool {
protected:
	unsigned int m_buffer[1024];
	
public:
	TFixedPool<EAudioCmd,128>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<EAudioCmd,128>*, int, void);
	TFixedPool();
	EAudioCmd* Alloc();
	void Free();
protected:
	void Free();
};

struct EPs2Audio : private EAudio, private EThread {
protected:
	EMutex m_sceMutex;
	EMutex m_flushMutex;
	EMutex m_dataMutex;
	EMutex m_sendCmdMutex;
	EMutex m_musicMutex;
	EClock m_clock;
	int m_iCallbackThreadID;
	bool m_bInitialized;
	u8 *m_pIOPBuffer;
	u32 m_uMixFlags0;
	u32 m_uMixFlags1;
	u32 m_uKeyOnFlags0;
	u32 m_uKeyOnFlags1;
	u32 m_uMusicVolume;
	float m_fMusicPan;
	EAudioEventHandler *m_pEventHandlerList;
	DelayedRefHolder *m_pDelayedRefHolderList;
	int m_iCommandQueue;
	EVoice m_voice[48];
	int m_iLastVoiceAlloc;
	bool m_bMusicPreloadWait;
	Stream m_pcm;
	bool m_bMovieMode;
	MusicMode m_musicMode;
	TFixedPool<EAudioCmd,128> m_cmdAllocPool;
	EMsgQueue m_commandQueue;
	
public:
	EPs2Audio& operator=();
	EPs2Audio();
	EPs2Audio();
	/* vtable[1] */ virtual EPs2Audio(EPs2Audio*, int, void);
	/* vtable[2] */ virtual void InitAudio();
	/* vtable[3] */ virtual void Shutdown();
	/* vtable[4] */ virtual void Update();
	/* vtable[5] */ virtual void Flush(bool bWait);
	/* vtable[6] */ virtual void AddEvent(EA_EVENT type, EMsgQueue &queue, u32 queueMsg);
	/* vtable[7] */ virtual void RemoveEvent(EA_EVENT type, EMsgQueue &queue, u32 queueMsg);
	/* vtable[8] */ virtual void PlayMusic(EPMDesc &desc);
	/* vtable[9] */ virtual void StopMusic();
	/* vtable[10] */ virtual void PauseMusic();
	/* vtable[11] */ virtual void ResumeMusic();
	/* vtable[12] */ virtual void SetMusicVolume(float volume);
	/* vtable[13] */ virtual float GetMusicVolume();
	/* vtable[16] */ virtual bool IsPlayingMusic();
	/* vtable[14] */ virtual void SetMusicPan(float pan);
	/* vtable[15] */ virtual float GetMusicPan();
	/* vtable[17] */ virtual EVOICE AllocVoice();
	/* vtable[18] */ virtual void FreeVoice(EVOICE voice);
	/* vtable[19] */ virtual void BindVoice(EVOICE voice, u32 sampleResID);
	/* vtable[20] */ virtual void UnbindVoice(EVOICE _voice);
	/* vtable[21] */ virtual void GetVoiceState(EVOICE voice, EVoiceDesc &desc);
	/* vtable[22] */ virtual void SetVoiceState(EVOICE voice, EVoiceDesc &desc);
	void EnterMovieMode();
	void ExitMovieMode();
	void GetIOPBuffer(void *&pAddress, u32 &uBufferSize);
	int GetWritableHalf();
	void ClearIOPHalf();
	void SetMusicMode(MusicMode mode);
	bool IsWaitingOnPreload();
protected:
	/* vtable[2] */ virtual void Main();
	void tBlockXFer();
	static int tTransferCallback(/* parameters unknown */);
	void postEvent(EA_EVENT event);
	int getCommandCount();
	void sendCommand(u32 uCommand, EAudioCmd *pCmd);
	bool setCommandQueueBit(int iCommand);
	void clearCommandQueueBit(int iCommand);
	void tSetMusicVolume();
	void tUpdateKeyState();
	void tUpdateVoice(EAudioCmd *pCmd);
	void tUpdateDelayState();
};

struct SUBNODE {
	SUBNODE *pNext;
};

struct SUBBLOCK {
	SUBBLOCK *pNext;
	SUBNODE node[0];
};

struct __TGrowPool2Impl {
};

extern EPs2Audio _ps2Audio;
extern EAudio *_pAudio;
extern __vtbl_ptr_type EPs2Audio::EThread virtual table[4];
extern __vtbl_ptr_type EPs2Audio virtual table[24];
extern __vtbl_ptr_type EAudio virtual table[24];

EPMDesc* EPMDesc::EPMDesc(u32 streamID, bool looping);
EPMDesc* EPMDesc::EPMDesc(char *name, bool looping);
void EAudio::~EAudio(int __in_chrg);
void EPs2Audio::~EPs2Audio(int __in_chrg);
void global constructors keyed to _ps2Audio();
void global destructors keyed to _ps2Audio();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2AUDIO_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2TEXTURELOADER_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2TEXTURELOADER_H

struct EPs2TextureLoader : EThread {
protected:
	EMsgQueue m_commandQueue;
	EClock m_texloadClock;
	float m_totalTime;
	
public:
	EPs2TextureLoader& operator=();
	EPs2TextureLoader();
	/* vtable[1] */ virtual EPs2TextureLoader(EPs2TextureLoader*, int, void);
	EPs2TextureLoader();
	bool Init();
	void Queue(ESchedCommand *pCmd);
	void FrameComplete();
	void StartLoadTimer();
	void StopLoadTimer();
protected:
	/* vtable[2] */ virtual void Main();
	void LoadTextures(EDL *pDL);
};

extern EPs2TextureLoader _ps2texload;
extern float _texloadtime;
extern __vtbl_ptr_type EPs2TextureLoader virtual table[4];

void EPs2TextureLoader::~EPs2TextureLoader(int __in_chrg);
void global constructors keyed to _ps2texload();
void global destructors keyed to _ps2texload();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2TEXTURELOADER_H

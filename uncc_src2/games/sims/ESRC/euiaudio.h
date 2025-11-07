// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EUIAUDIO_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EUIAUDIO_H

struct EUiAudio {
	static EUiAudio *_pUiAudioMan;
protected:
	EVoice *m_voice[4];
	static float m_fVolume;
	int m_iNextVoice;
	
public:
	EUiAudio& operator=();
	EUiAudio();
	EUiAudio();
	EUiAudio(EUiAudio*, int, void);
	void Init();
	void Reset();
	void PlayUiSound(u32 sampleId);
	static void CreateGlobal(/* parameters unknown */);
	static void DestroyGlobal(/* parameters unknown */);
	static void Play(/* parameters unknown */);
	static void PlaySelect(/* parameters unknown */);
	static void PlayGoBack(/* parameters unknown */);
	static void PlayMove(/* parameters unknown */);
	static void PlaySelectLive(/* parameters unknown */);
	static void PlayGoBackLive(/* parameters unknown */);
	static void PlayMoveLive(/* parameters unknown */);
	static void SetVolume(/* parameters unknown */);
	static float GetVolume(/* parameters unknown */);
};

extern EUiAudio *EUiAudio::_pUiAudioMan;
extern float EUiAudio::m_fVolume;

void EUiAudio::~EUiAudio(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EUIAUDIO_H

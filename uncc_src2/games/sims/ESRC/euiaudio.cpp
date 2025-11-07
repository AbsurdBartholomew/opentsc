// STATUS: NOT STARTED

#include "euiaudio.h"

EUiAudio *EUiAudio::_pUiAudioMan;
float EUiAudio::m_fVolume;

void EUiAudio::CreateGlobal() {
  EUiAudio *this;
  
  if (_8EUiAudio__pUiAudioMan == (EUiAudio *)0x0) {
    this = (EUiAudio *)__builtin_new(0x14);
    _8EUiAudio__pUiAudioMan = __8EUiAudio(this);
    Init__8EUiAudio(_8EUiAudio__pUiAudioMan);
  }
  return;
}

void EUiAudio::DestroyGlobal() {
  if (_8EUiAudio__pUiAudioMan != (EUiAudio *)0x0) {
    ___8EUiAudio(_8EUiAudio__pUiAudioMan,3);
  }
  _8EUiAudio__pUiAudioMan = (EUiAudio *)0x0;
  return;
}

EUiAudio* EUiAudio::EUiAudio() {
  memset(this,0,0x10);
  _8EUiAudio_m_fVolume = 0.0;
  this->m_iNextVoice = 0;
  return this;
}

void EUiAudio::~EUiAudio(int __in_chrg) {
	void *pAddress;
	
  Reset__8EUiAudio(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EUiAudio::Init() {
	int i;
	
  EVoice__168_911 *pEVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    iVar2 = iVar2 + -1;
    pEVar1 = (EVoice__168_911 *)
             (*(code *)_pAudio->__vtable[1].SetMusicVolume)
                       ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].ResumeMusic);
    this->m_voice[0] = pEVar1;
    this = (EUiAudio *)(this->m_voice + 1);
  } while (-1 < iVar2);
  _8EUiAudio_m_fVolume = 1.0;
  return;
}

void EUiAudio::Reset() {
	int i;
	
  int iVar1;
  
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
    if (this->m_voice[0] != (EVoice__168_911 *)0x0) {
      (*(code *)_pAudio->__vtable[1].SetMusicPan)
                ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetMusicVolume,
                 this->m_voice[0]);
      this->m_voice[0] = (EVoice__168_911 *)0x0;
    }
    this = (EUiAudio *)(this->m_voice + 1);
  } while (-1 < iVar1);
  return;
}

void EUiAudio::PlayUiSound(u32 sampleId) {
	EVoiceDesc desc;
	float v;
	
  int iVar1;
  int iVar2;
  EVoiceDesc desc;
  
  if ((_globals.Cheats._0_4_ != 0) && (this->m_voice[this->m_iNextVoice] != (EVoice__168_911 *)0x0))
  {
    (*(code *)_pAudio->__vtable[1].IsPlayingMusic)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetMusicPan,
               this->m_voice[this->m_iNextVoice],sampleId);
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc.mask = 0xb;
    desc.volumeR = _8EUiAudio_m_fVolume;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc.volumeL = _8EUiAudio_m_fVolume;
    desc._16_4_ = 1;
                    /* end of inlined section */
    (*(code *)_pAudio->__vtable[1].SetVoiceState)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
               this->m_voice[this->m_iNextVoice],&desc);
    iVar2 = this->m_iNextVoice + 1;
    iVar1 = this->m_iNextVoice + 4;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    this->m_iNextVoice = iVar2 + (iVar1 >> 2) * -4;
  }
  return;
}

void EUiAudio::PlaySelect() {
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
  return;
}

void EUiAudio::PlayGoBack() {
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
  return;
}

void EUiAudio::PlayMove() {
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
  return;
}

void EUiAudio::PlaySelectLive() {
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x5a1d068d);
  return;
}

void EUiAudio::PlayGoBackLive() {
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
  return;
}

void EUiAudio::PlayMoveLive() {
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xe503c735);
  return;
}

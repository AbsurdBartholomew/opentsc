// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMAIN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMAIN_H

extern EPauseMenu *_pPauseMenu;
extern __vtbl_ptr_type EPausePanel::Panelstateman virtual table[5];
extern __vtbl_ptr_type EPausePanel virtual table[17];
extern __vtbl_ptr_type Panelstateman virtual table[5];
extern __vtbl_ptr_type EUIIconDef virtual table[3];
extern float EPausePanel::m_ItemInfoTimer;
extern ERShader *EPausePanel::m_pDPadUp;
extern ERShader *EPausePanel::m_pDPadDown;
extern ERShader *EPausePanel::m_pDPadLeft;
extern ERShader *EPausePanel::m_pDPadRight;

void EPausePanel::~EPausePanel(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void Panelstateman::~Panelstateman(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMAIN_H

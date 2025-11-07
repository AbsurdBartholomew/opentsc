// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2CTRLMANAGER_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2CTRLMANAGER_H

extern EPs2Controller **_ps2CtrlPads;
extern EControllerManager *_pCtrlMan;
extern EPs2ControllerManager _ps2ctrlman;
extern __vtbl_ptr_type EPs2ControllerManager::EThread virtual table[4];
extern __vtbl_ptr_type EPs2ControllerManager virtual table[8];

void EPs2ControllerManager::~EPs2ControllerManager(int __in_chrg);
void global constructors keyed to _ps2CtrlPads();
void global destructors keyed to _ps2CtrlPads();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2CTRLMANAGER_H

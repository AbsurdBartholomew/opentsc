// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UIOBJECT_H
#define C__EOR_SRC2_ENGINE_UI_E_UIOBJECT_H

typedef void (*UISfxFunPtr)(/* parameters unknown */);
extern float EUIObjectNode::SAFE_LEFT;
extern float EUIObjectNode::SAFE_TOP;
extern float EUIObjectNode::SAFE_RIGHT;
extern float EUIObjectNode::SAFE_BOTTOM;
extern UISfxFunPtr EUIObjectNode::m_uiSfxSelect;
extern UISfxFunPtr EUIObjectNode::m_uiSfxBack;
extern UISfxFunPtr EUIObjectNode::m_uiSfxNext;
extern UISfxFunPtr EUIObjectNode::m_uiSfxError;
extern __vtbl_ptr_type EUIObjectNode virtual table[15];

void EUIObjectNode::~EUIObjectNode(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_UI_E_UIOBJECT_H

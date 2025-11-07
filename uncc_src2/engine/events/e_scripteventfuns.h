// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_EVENTS_E_SCRIPTEVENTFUNS_H
#define C__EOR_SRC2_ENGINE_EVENTS_E_SCRIPTEVENTFUNS_H

void sfnSendEvent(EScriptContext *pContext);
void sfnSendSelfEvent(EScriptContext *pContext);
void sfnSendDelayedEvent(EScriptContext *pContext);
void sfnSendDelayedSelfEvent(EScriptContext *pContext);
void sfnAddListener(EScriptContext *pContext);
void sfnRemoveListener(EScriptContext *pContext);

#endif // C__EOR_SRC2_ENGINE_EVENTS_E_SCRIPTEVENTFUNS_H

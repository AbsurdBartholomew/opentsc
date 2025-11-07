// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_UTIL_E_GLOBALMANAGER_H
#define C__EOR_SRC2_COMMON_UTIL_E_GLOBALMANAGER_H

struct EGMClientData {
	EGlobalManagerClient *pClient;
	int priority;
};

extern bool EGlobalManager::m_startupComplete;
extern bool EGlobalManager::m_shutdownComplete;
extern int EGlobalManager::m_nClients;
extern int EGlobalManager::m_nStartedUpClients;
extern EGMClientData EGlobalManager::m_clients[32];


#endif // C__EOR_SRC2_COMMON_UTIL_E_GLOBALMANAGER_H

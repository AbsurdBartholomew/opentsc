/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

class EGlobalManagerClient;

struct EGMClientData {
	EGlobalManagerClient *pClient;
	int priority;
};

class EGlobalManager {
protected:
	static bool m_startupComplete;
	static bool m_shutdownComplete;
	static EGMClientData m_clients[32];
	static int m_nClients;
	static int m_nStartedUpClients;
	
public:
	static bool Startup();
	static void Shutdown();
protected:
	static void Register(EGlobalManagerClient *pClient, int priority);
};

class EGlobalManagerClient {
public:
	EGlobalManagerClient() { ; }

	bool Startup();
	void Shutdown();

    friend class EGlobalManager;
protected:
	virtual bool ManagedStartup();
	virtual void ManagedShutdown();
};
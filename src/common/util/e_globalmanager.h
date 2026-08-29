/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

class EGlobalManagerClient;

struct EGMClientData 
{
	EGlobalManagerClient *pClient;
	int priority;
};

class EGlobalManager 
{	
public:
	static bool Startup();
	static void Shutdown();

	friend class EEngine;
	friend class EGlobalManagerClient;
	friend class EAllocBucket;
	
protected:
	static void Register(EGlobalManagerClient *pClient, int priority);
protected:
	static bool m_startupComplete;
	static bool m_shutdownComplete;
	static EGMClientData m_clients[32];
	static int m_nClients;
	static int m_nStartedUpClients;
};

class EGlobalManagerClient 
{
public:
	EGlobalManagerClient() { ; }

	bool Startup();
	void Shutdown();

    friend class EGlobalManager;
//protected:
	virtual bool ManagedStartup();
	virtual void ManagedShutdown();
};
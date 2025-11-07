// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_EVENTS_E_EVENTMANAGER_H
#define C__EOR_SRC2_ENGINE_EVENTS_E_EVENTMANAGER_H

typedef u32 EHListenerHandle;
typedef void (*EHCallbackFn)(/* parameters unknown */);

struct EEventInfo {
	u32 eventId;
	EInstance *pSendingInstance;
	float delay;
	EEventInfo *pListNext;
	EEventInfo *pListPrev;
	
	EEventInfo& operator=();
	EEventInfo();
	EEventInfo();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EEventManager {
protected:
	EEventHash *m_pListenerTable;
	EEventInfo *m_pQueueHead;
	int m_eventCount;
	ERLevel *m_pLevel;
	
public:
	EEventManager& operator=();
	EEventManager();
	EEventManager();
	EEventManager(EEventManager*, int, void);
	void Init(u32 tableDepth);
	void Shutdown();
	bool ListenerTableExists();
	void SetLevel();
	bool SendEvent(char *szEvent, char *szInstance, float delay);
	bool SendEvent();
	bool SendEvent();
	bool SendEvent();
	void Update();
	void RemoveEvents(u32 eventId, u32 instanceId);
	void RemoveAllEvents();
	EHListenerHandle AddListener(u32 senderId, char *szEvent, u32 listenerId, u32 scriptId);
	EHListenerHandle AddListener();
	EHListenerHandle AddListener();
	EHListenerHandle AddListener();
	EHListenerHandle AddListener();
	EHListenerHandle AddListener();
	EHListenerHandle AddListener();
	bool RemoveListener(u32 senderId, u32 eventId, u32 listenerHandle, u32 scriptId);
	bool RemoveListener();
	bool RemoveListener();
	void RemoveAllListeners();
protected:
	void DeleteEvent(EEventInfo *pCurrentEvent);
};

extern EEventManager _eventman;

void global constructors keyed to _eventman();
void global destructors keyed to _eventman();

#endif // C__EOR_SRC2_ENGINE_EVENTS_E_EVENTMANAGER_H

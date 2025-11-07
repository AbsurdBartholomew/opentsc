// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_EVENTS_E_EVENTHASH_H
#define C__EOR_SRC2_ENGINE_EVENTS_E_EVENTHASH_H

struct EListenerInfo {
	EListenerInfo *pListNext;
	u32 key;
	u32 eventId;
	u32 senderId;
	u32 listenerHandle;
	u32 scriptId;
	ERScript *pScript;
	EHCallbackFn pFnCallback;
	u32 callbackParam;
	int referenceCount;
	EInstance *pListeningInstance;
	
	EListenerInfo& operator=();
	EListenerInfo();
	EListenerInfo();
	EListenerInfo();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EScriptRefInfo {
	EScriptRefInfo *pListNext;
	EScriptRefInfo *pListPrev;
	ERScript *pScript;
	
	EScriptRefInfo& operator=();
	EScriptRefInfo();
	EScriptRefInfo();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EEventHash {
protected:
	EListenerInfo **m_table;
	EScriptRefInfo *m_scriptRefHead;
	u32 m_tableDepth;
	u32 m_tableRows;
	u32 m_uniqueEntryCount;
	u32 m_entryCount;
	u32 m_scriptRefs;
	ERLevel *m_pLevel;
	
public:
	EEventHash& operator=();
	EEventHash(int tableDepth);
	EEventHash();
	EEventHash(EEventHash*, int, void);
	void SetLevel();
	void ClearAll();
private:
	int GetTableDepth();
	int GetTableRows();
	int GetEntryCount();
	EHListenerHandle AddListener(u32 senderId, u32 eventId, u32 listenerId, u32 scriptId);
	EHListenerHandle AddListener();
	bool RemoveListener(u32 senderId, u32 eventId, u32 listenerHandle, u32 scriptId);
	bool RemoveListener();
	bool RemoveListener();
	void FireEvent(u32 eventId, EInstance *pSendingInstance);
protected:
	u32 Hash();
	u32 GetKey();
	void InitTable(int tableDepth);
	void ClearTable();
	void DeleteEntries();
	void DeleteListener(EListenerInfo *pPreviousListener, EListenerInfo *pRemovedListener);
	void InsertListener(EListenerInfo *pNewListener, u32 hash);
	void ResolveEvents(u32 eventId, u32 senderId, u32 hash);
	EHListenerHandle FindListener(u32 senderId, u32 eventId, u32 listenerHandle, u32 scriptId);
	EHListenerHandle FindListener();
};

void EEventHash::~EEventHash(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_EVENTS_E_EVENTHASH_H

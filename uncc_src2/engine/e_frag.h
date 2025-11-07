// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_FRAG_H
#define C__EOR_SRC2_ENGINE_E_FRAG_H

struct EFrameAllocGroup : EGlobalManagerClient {
protected:
	EAllocGroup m_ag[2];
	int m_evenodd;
	
public:
	EFrameAllocGroup& operator=();
	EFrameAllocGroup();
	EFrameAllocGroup();
	/* vtable[1] */ virtual EFrameAllocGroup(EFrameAllocGroup*, int, void);
	void* Alloc(unsigned int size, int alignment);
protected:
	void Update();
	/* vtable[3] */ virtual void ManagedShutdown();
};

extern EFrameAllocGroup _frag;
extern __vtbl_ptr_type EFrameAllocGroup virtual table[5];
extern __vtbl_ptr_type EGlobalManagerClient virtual table[5];

void EFrameAllocGroup::~EFrameAllocGroup(int __in_chrg);
void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg);
void global constructors keyed to _frag();
void global destructors keyed to _frag();

#endif // C__EOR_SRC2_ENGINE_E_FRAG_H

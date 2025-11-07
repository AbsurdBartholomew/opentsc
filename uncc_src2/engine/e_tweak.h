// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_TWEAK_H
#define C__EOR_SRC2_ENGINE_E_TWEAK_H

typedef TNodeList<ETweakEntry *> ETweakEntryPtrList;

struct ETweak {
protected:
	float m_autoTime;
	float m_autoReadDelay;
	int m_nEntries;
	ETweakEntryPtrList m_entries;
	EString m_filename;
	EConfig m_cfg;
	
public:
	ETweak& operator=();
	ETweak();
	ETweak();
	ETweak(ETweak*, int, void);
	bool Update();
	void AutoReadEvery();
	void Read();
	void AddVal(EString *pData, char *szName, int type);
	void AddVal();
	void RemoveVal(void *pData);
	void RemoveAll();
	void Clear();
	void FileName(char *szFileName);
};

extern ETweak _tweak;

void ETweak::~ETweak(int __in_chrg);
void global constructors keyed to _tweak();
void global destructors keyed to _tweak();

#endif // C__EOR_SRC2_ENGINE_E_TWEAK_H

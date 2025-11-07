// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_FILE_E_CONFIG_H
#define C__EOR_SRC2_COMMON_FILE_E_CONFIG_H

typedef NLIterator EConfigIterator;

struct TNodeList<EString *> : ENodeList {
	TNodeList(TNodeList<EString *>*, int, void);
	TNodeList();
	TNodeList();
	static EString* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EString *>& operator=();
	void MoveContents();
};

struct TStringTableNoCase<NLIteratorPtrType *> : EStringTableNoCase {
	TStringTableNoCase<NLIteratorPtrType *>& operator=();
	TStringTableNoCase();
	TStringTableNoCase();
	TStringTableNoCase(TStringTableNoCase<NLIteratorPtrType *>*, int, void);
	NLIterator operator[]();
	NLIterator& operator[]();
	STNCIterator Insert();
	STNCIterator Find();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	STNCIterator SetValue();
	static void SetValue(/* parameters unknown */);
	void SetValues();
	static char* GetKey(/* parameters unknown */);
	static NLIterator GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EConfig {
protected:
	bool m_modified;
	EString m_file;
	TNodeList<EString *> m_lines;
	TStringTableNoCase<NLIteratorPtrType *> m_entries;
	
public:
	EConfig& operator=();
	EConfig();
	EConfig();
	EConfig();
	EConfig(EConfig*, int, void);
	bool Open(char *szFilename);
	bool Close(bool updateChanges, bool forceWrite, char *pszSection);
	bool Write(char *pszSection);
	char* GetString(char *szLabel, char *szDefaultString);
	void SetString(char *szLabel, char *szValue);
	int GetInt(char *szLabel, int defaultValue);
	void SetInt(char *szLabel, int value);
	float GetFloat(char *szLabel, float defaultValue);
	void SetFloat(char *szLabel, float value);
	void AddComment(char *szComment);
	bool Delete(char *szLabel);
	void Empty();
	bool IsOpened();
	EString& GetFilePath();
	EConfigIterator GetFirst(EString &labelOut, EString &valueOut);
	EConfigIterator GetNext(EConfigIterator i, EString &labelOut, EString &valueOut);
	bool IsValid();
	void Sort();
	bool IsModified();
protected:
	NLIterator GetNextLabelAndValue(EString &labelOut, EString &valueOut, NLIterator i);
	static char* GetS(/* parameters unknown */);
};

#endif // C__EOR_SRC2_COMMON_FILE_E_CONFIG_H

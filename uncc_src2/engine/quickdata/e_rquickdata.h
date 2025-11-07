// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_QUICKDATA_E_RQUICKDATA_H
#define C__EOR_SRC2_ENGINE_QUICKDATA_E_RQUICKDATA_H

struct ERQuickdata : EResource {
protected:
	QD_IMAGE *m_pImage;
	u32 m_uImageSize;
	
public:
	ERQuickdata& operator=();
	ERQuickdata();
	ERQuickdata();
	/* vtable[6] */ virtual ERQuickdata(ERQuickdata*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Load(EFile *pFile, int iLanguage);
	void* GetImage();
	u32 GetImageSize();
	/* vtable[11] */ virtual void Reload(EFile *pFile);
protected:
	void reset();
	static void applyFixups(/* parameters unknown */);
	void* getTable(char *pName);
	void* getRow(void *_pTable, char *pRowName);
	int getTableIndex(int iMinIndex, int iMaxIndex, char *pName);
	static int getRowIndex(/* parameters unknown */);
	void* findRow(void *pData, u32 *pIndex);
	int findTableIndex(int iMinIndex, int iMaxIndex, void *pData);
	u32 getStartAddr(int iIndex);
};

extern __vtbl_ptr_type ERQuickdata virtual table[13];

void ERQuickdata::~ERQuickdata(int __in_chrg);
void* LoadXImage(char *pszName, int iExtraImage);
void* LoadXImage(EFile *pFile, int iExtraImage);
void* ReloadXImage(EFile *pFile, void *pOrig, u32 &uOrigSize, int iExtraImage);

#endif // C__EOR_SRC2_ENGINE_QUICKDATA_E_RQUICKDATA_H

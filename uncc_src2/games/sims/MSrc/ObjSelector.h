// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJSELECTOR_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJSELECTOR_H

struct TTAB_Tuning {
	int numValues;
	VALUE *values;
};

enum PreloadState {
	kNotLoaded = 0,
	kDataLoaded = 1
};

struct ObjSelector {
private:
	union {
	private:
		iResFile *fFile;
		QuickResFile *fObjFile;
	};
	QuickResFile *fSemiFile;
	Behavior *fBehavior;
	Language *fLang;
	char *fObjName;
	char *fModuleName;
	ObjDefinition *fHeader;
	TreeTable *fTreeTable;
	AnimTable *fAnimTables[4];
	ObjectFolder *fFolder;
	ResFile *fResData;
	TTAB_Tuning fTreeTuning;
	ObjSelector *fMaster;
	ObjFnTable *fFnTable;
	Int fInstanceCount;
	SInt16 f_SaveType;
	Int fIndex;
	SInt32 fInitTreeVersion;
	SInt32 fMainTreeVersion;
	SInt32 fFlags;
	CatalogResource *fCatalogResource;
	BString2 *fUserName;
	CustomCharacter *fCustomCharacter;
	NPC *fNPCharacter;
	ERShader *fThumbnailShader;
	PreloadState fDesiredPreloadState;
	PreloadState fActualPreloadState;
public:
	ObjSelector *pNextHash;
	
	ObjSelector& operator=();
	ObjSelector();
	ObjSelector(ObjSelector*, int, void);
private:
	iResFile* getFile();
	iResFile* loadFile();
	void SetNeedsReset();
	Int GetLocation();
	void SetLocation(ObjSelector*, int, void);
	void SetDefID();
	bool IsPreloadable();
	void DestroyThumbnail();
	ObjSelector();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
public:
	void ChangedDef();
	void SetObjectName(char *newname);
	bool TestFromSameFile(ObjSelector *other);
	bool Writable();
	AnimTable* GetAdultAnimTable();
	AnimTable* GetChildAnimTable();
	AnimTable* GetAdultToChildAnimTable();
	AnimTable* GetChildToAdultAnimTable();
	Behavior* GetBehavior();
	Language* GetLanguage();
	iResFile* GetFile();
	char* GetName();
	char* GetModuleName();
	ObjDefinition* GetDefinition();
	ObjFnTable* GetFnTable();
	void GetShortFilename(StringBuffer *outName);
	ObjectFolder* GetFolder();
	ObjSelector* GetMasterSelector();
	SInt32 GetGUID();
	TreeTable* GetTreeTable();
	ObjSelector* GetOriginal();
	SInt16 GetEffectiveTreeTableID();
	bool GetHasGraphics();
	bool GetHasInteractions();
	bool GetIsMultiTileSubObject();
	bool GetIsPerson();
	SInt32 GetInitTreeVersion();
	SInt32 GetMainTreeVersion();
	bool GetNeedsReset();
	SInt16 GetDefID();
	Int GetIndex();
	Int CountTypeAttributes();
	SInt16* GetTypeAttributes();
	bool FromUserObject();
	bool IsDownload();
	bool IsFromHomemaster();
	bool GetHeadTextureDirty();
	void SetHeadTextureDirty();
	Int GetThumbnailGraphicIndex();
	bool GetThumbnailHasShadow();
	bool GetRuntimeHasShadow();
	Int GetShadowBrightness();
	ELocString GetCatalogName();
	ELocString GetCatalogDescription();
	ELocString GetCatalogShortName();
	CatalogResource* GetCatalogResource();
	BString2& GetUserName();
	void SetUserName(BString2 &newName);
	CustomCharacter* GetCustomCharacter();
	NPC* GetNPCharacter();
	bool GetThumbnail(ERShader **ppShader);
	void SetThumbnail(ETexture *pTexture);
	bool IsPreloaded();
	u32 CalcPreLoadMemoryCost();
	u32 CalcUnloadMemorySaving();
	int GetCatalogRating(int rating);
	bool AdultsOnly();
	bool ChildrenOnly();
	bool HasGroupActions();
	SInt16 GetSaveType();
	ResFile* GetResFileData();
	static u32 hash(/* parameters unknown */);
	u32 hash();
	bool compare();
	void destroy();
};

struct ThumbnailLoader {
private:
	ObjSelector *m_pSelector;
	
public:
	ThumbnailLoader& operator=();
	ThumbnailLoader();
	ThumbnailLoader();
	void DoStream(ReconBuffer *r, SInt32 version);
	static ETexture* CreateEmptyThumbnail(/* parameters unknown */);
	static void DuplicateThumbnail(/* parameters unknown */);
};

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJSELECTOR_H

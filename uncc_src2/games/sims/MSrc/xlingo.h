// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_XLINGO_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_XLINGO_H

struct XObjLang : Language {
private:
	ObjSelector *fLangSelector;
	
public:
	/* vtable[1] */ virtual XObjLang(ObjSelector *selector);
private:
	XObjLang();
	XObjLang& operator=();
public:
	XObjLang();
	/* vtable[2] */ virtual void GetTreeTypeName(Int type, StringBuffer &name);
	/* vtable[3] */ virtual void GetNodeText(Behavior *bhav, SInt16 treeID, BehaviorNode *node, StringBuffer &str);
	/* vtable[4] */ virtual void GetPrimName(SInt16 primCode, StringBuffer &str);
	/* vtable[6] */ virtual bool IsSingleExit(BehaviorNode *node);
	/* vtable[5] */ virtual SInt16 CountPrimitives();
	/* vtable[7] */ virtual SwizzleProc GetSwizzler();
	ObjSelector* GetSelector();
	static bool GetConstantsID(/* parameters unknown */);
	static bool GetConstantsDataField(/* parameters unknown */);
	static Int GetMaxConstants(/* parameters unknown */);
	static SInt16 GetFlagsID(/* parameters unknown */);
private:
	void CatNodeParamText();
};

extern __vtbl_ptr_type XObjLang virtual table[9];

void XObjLang::~XObjLang(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_XLINGO_H

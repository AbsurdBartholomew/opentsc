// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSECATEGORYMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSECATEGORYMENU_H

struct EPauseCategoryMenuItem : EUIIcon {
protected:
	ObjSelector *m_pMasterSel;
	ObjSelector *m_pResSel;
	ObjSelector *m_pResSel2;
	u32 m_type;
	FloorTile *m_floorNode;
	WallTile *m_wallNode;
	bool m_bLocked;
	
public:
	EPauseCategoryMenuItem& operator=();
	EPauseCategoryMenuItem(u32 type);
	EPauseCategoryMenuItem();
	EPauseCategoryMenuItem();
	EPauseCategoryMenuItem();
	EPauseCategoryMenuItem();
	/* vtable[1] */ virtual EPauseCategoryMenuItem(EPauseCategoryMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void SetMasterSelector(ObjSelector *pSelector);
	void SetResSelector(ObjSelector *pSelector);
	void SetResSelector2(ObjSelector *pSelector);
	ObjSelector* GetMasterSelector();
	ObjSelector* GetResSelector();
	ObjSelector* GetResSelector2();
	int CompareMasterSelector(ObjSelector *pSel);
	u32 GetType();
	FloorTile* GetFloorTile();
	WallTile* GetWallTile();
	u32 GetPrice();
	bool GetLockedState();
	void SetLockedState(bool on);
	s32 GetGUID();
};

struct EPauseScrollMenu : EUIScrollMenu {
protected:
	EUIObjectNode *m_pReceiver;
	
public:
	EPauseScrollMenu& operator=();
	EPauseScrollMenu(int _layout, int background_id, float optGap, float _yoff, float _xoff, int backid, int forewardid, bool clampAtEnds);
	EPauseScrollMenu();
	/* vtable[1] */ virtual EPauseScrollMenu(EPauseScrollMenu*, int, void);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	/* vtable[2] */ virtual void Update();
	void SetReceiver(EUIObjectNode *pReceiver);
	EPauseCategoryMenuItem* GetSelectedItem();
	void PrintFlags();
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
};

struct EPauseCategoryMenu : EUIIcon {
protected:
	EPauseScrollMenu m_menu;
	EUIObjectNodeList m_itemList;
	u32 m_messageId;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	ERShader *m_pDPadBackgroundShdr;
	ERShader *m_pTextLineCenterShdr;
	ERShader *m_pTextLineRightShdr;
	ERShader *m_pTextLineLeftShdr;
	ERShader *m_pMenuDPadReverseShdr;
public:
	static ERShader *m_pOutlineShdr;
	static ERShader *m_pLockedShader;
	
	EPauseCategoryMenu& operator=();
	EPauseCategoryMenu();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseCategoryMenu();
	/* vtable[1] */ virtual EPauseCategoryMenu(EPauseCategoryMenu*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void Init();
	void Reset();
	void SetupIcon(EVec2 vSize, int shaderID, EVec2 vPos);
	EPauseCategoryMenuItem* SearchExistingSelector(ObjSelector *pSel);
	void AddOption(EPauseCategoryMenuItem *pItem);
	void InsertOption(EPauseCategoryMenuItem *pItem);
	void AddItemsToMenu();
	void SetMenuFlagsPropigate(u32 mask, bool on);
	void SetMessageId(u32 id);
	void ResetCurrentOption();
	EPauseCategoryMenuItem* GetSelectedItem();
	void PrintFlags();
	EPauseCategoryMenuItem* SearchGUID(s32 guid);
	static void SetStaticShaders(/* parameters unknown */);
	static void DelRefStaticShaders(/* parameters unknown */);
};

extern float _d_pad_inverse_x;
extern float _d_pad_inverse_y;
extern __vtbl_ptr_type EPauseCategoryMenu virtual table[16];
extern __vtbl_ptr_type EPauseScrollMenu virtual table[25];
extern __vtbl_ptr_type EPauseCategoryMenuItem virtual table[16];
extern __vtbl_ptr_type EUIIconDef virtual table[3];
extern ERShader *EPauseCategoryMenu::m_pOutlineShdr;
extern ERShader *EPauseCategoryMenu::m_pLockedShader;

void EPauseCategoryMenuItem::~EPauseCategoryMenuItem(int __in_chrg);
void EPauseScrollMenu::~EPauseScrollMenu(int __in_chrg);
void EPauseCategoryMenu::~EPauseCategoryMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSECATEGORYMENU_H

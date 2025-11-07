// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_GAMEPAUSED_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_GAMEPAUSED_H

struct EPauseMenuItem : EUIStaticTextIcon {
protected:
	ObjSelector *m_pSelector;
	
public:
	EPauseMenuItem& operator=();
	EPauseMenuItem();
	EPauseMenuItem();
	/* vtable[1] */ virtual EPauseMenuItem(EPauseMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void SetSelector(ObjSelector *pSelector);
	ObjSelector* GetSelector();
};

struct EPauseMenu : EUIScrollMenu {
	EUIObjectNodeList m_itemList;
	bool m_done;
	ERFont *m_pFont;
	EFloorStylesMenu *m_pFloorStyles;
	
	EPauseMenu& operator=();
	EPauseMenu();
	EPauseMenu();
	/* vtable[1] */ virtual EPauseMenu(EPauseMenu*, int, void);
	void Init();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	bool InMainMenu();
};

struct EFloorStylesMenuItem : EUIIcon {
protected:
	FloorTile &m_idMap;
	
public:
	EFloorStylesMenuItem& operator=();
	EFloorStylesMenuItem(FloorTile &id, bool bfloor);
	EFloorStylesMenuItem();
	/* vtable[1] */ virtual EFloorStylesMenuItem(EFloorStylesMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	u16 GetMaxisId();
	u32 GetEorId();
	FloorTile& GetNode();
};

struct EWallPaperMenuItem : EUIIcon {
protected:
	WallTile &m_idMap;
	
public:
	EWallPaperMenuItem& operator=();
	EWallPaperMenuItem(WallTile &id, bool bfloor);
	EWallPaperMenuItem();
	/* vtable[1] */ virtual EWallPaperMenuItem(EWallPaperMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	u16 GetMaxisId();
	u32 GetEorId();
	WallTile& GetNode();
};

struct EWallPaperMenu : EFloorStylesMenu {
	EWallPaperMenu& operator=();
	EWallPaperMenu();
	EWallPaperMenu();
	/* vtable[1] */ virtual EWallPaperMenu(EWallPaperMenu*, int, void);
	/* vtable[24] */ virtual void Init();
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
};

extern __vtbl_ptr_type EWallPaperMenu virtual table[26];
extern __vtbl_ptr_type EWallPaperMenuItem virtual table[16];
extern __vtbl_ptr_type EFloorStylesMenu virtual table[26];
extern __vtbl_ptr_type EFloorStylesMenuItem virtual table[16];
extern __vtbl_ptr_type EPauseMenu virtual table[25];
extern __vtbl_ptr_type EPauseMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPauseMenuItem::~EPauseMenuItem(int __in_chrg);
void EPauseMenu::~EPauseMenu(int __in_chrg);
void EFloorStylesMenuItem::~EFloorStylesMenuItem(int __in_chrg);
void EFloorStylesMenu::~EFloorStylesMenu(int __in_chrg);
void EWallPaperMenuItem::~EWallPaperMenuItem(int __in_chrg);
void EWallPaperMenu::~EWallPaperMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_GAMEPAUSED_H

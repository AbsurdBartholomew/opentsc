// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_SIMINFOWIN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_SIMINFOWIN_H

struct UiStringLookUpTableEntry {
	char *pLower;
	char *pUpper;
};

struct PersonRelation {
	Int mValue;
	bool mRomantic;
	bool mFriend;
};

struct ERelationsWinCmp {
	int m_player;
	
	ERelationsWinCmp& operator=();
	ERelationsWinCmp();
	ERelationsWinCmp();
	ERelationsWinCmp(ERelationsWinCmp*, int, void);
	bool operator()(Neighbor *n1, Neighbor *n2);
};

struct ERelationsWin : EUIScrollMenu {
protected:
	cXPerson *m_pPerson;
	vector<Neighbor *,__malloc_alloc_template<0> > m_pRelList;
	
public:
	ERelationsWin& operator=();
	ERelationsWin();
	ERelationsWin();
	/* vtable[1] */ virtual ERelationsWin(ERelationsWin*, int, void);
	void Init(cXPerson *pPerson);
	void Cleanup();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	static void GetRelation(/* parameters unknown */);
	static bool GetMatrix(/* parameters unknown */);
	static void GetRelatedPeople(/* parameters unknown */);
protected:
	void AddRelation(Neighbor *pPlayer, Neighbor *pNeighbor);
};

struct ERelationsIcon : EUIObjectNode {
protected:
	float m_f16XPixels;
	float m_f16YPixels;
	float m_fXCenterDist;
	float m_fYCenterDist;
	BString2 m_firstName2;
	BString2 m_famName2;
	BString2 m_relValStr;
	Neighbor *m_pPerson;
	Neighbor *m_pNeighbor;
public:
	PersonRelation m_rel;
	ERShader *m_pThumbnail;
	ERShader *m_pThumbnailFrame;
	static ERShader *m_pHeart;
	static ERShader *m_pSmileyFace;
	
	ERelationsIcon& operator=();
	ERelationsIcon();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[14] */ virtual void SafeDelete();
	ERelationsIcon();
	/* vtable[1] */ virtual ERelationsIcon(ERelationsIcon*, int, void);
	void Init(Neighbor *pPerson, Neighbor *pNeighbor);
	ObjSelector* GetSelector();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	u16* GetFirstName();
	u16* GetFamilyName();
};

extern float _textwidth;
extern float _textheight;
extern bool SimInfoWin::m_bInit;
extern EVec2 _InfoOff;
extern EVec2 _InfoOff1;
extern EVec2 _InfoOff2;
extern EVec2 _vTextOff;
extern ESlideTextBox SimInfoWin::m_nameBoxs[2];
extern ESlideTextBox SimInfoWin::m_playerNameBoxs[2];
extern ERFont *SimInfoWin::m_pFont;
extern ERShader *SimInfoWin::m_textarrowl;
extern ERShader *SimInfoWin::m_textarrowr;
extern ERShader *SimInfoWin::m_pDpadInverse;
extern ERShader *SimInfoWin::m_pMenubevel_T_L;
extern ERShader *SimInfoWin::m_pTextBoxBGBL;
extern ERShader *SimInfoWin::m_pTextBoxBGBR;
extern ERShader *SimInfoWin::m_pTextBoxBGTL;
extern ERShader *SimInfoWin::m_pTextBoxBGTR;
extern ERShader *SimInfoWin::m_pTextBoxBGML;
extern ERShader *SimInfoWin::m_pTextBoxBGMR;
extern ERShader *SimInfoWin::m_pTextBoxBGTC;
extern ERShader *SimInfoWin::m_pTextBoxBGBC;
extern ERShader *SimInfoWin::m_pTextBoxHBL;
extern ERShader *SimInfoWin::m_pTextBoxHBR;
extern ERShader *SimInfoWin::m_pTextBoxHTL;
extern ERShader *SimInfoWin::m_pTextBoxHTR;
extern ERShader *SimInfoWin::m_pTextBoxHML;
extern ERShader *SimInfoWin::m_pTextBoxHMR;
extern ERShader *SimInfoWin::m_pTextBoxHTC;
extern ERShader *SimInfoWin::m_pTextBoxHBC;
extern ERShader *SimInfoWin::m_pTextLineBGL;
extern ERShader *SimInfoWin::m_pTextLineBGR;
extern ERShader *SimInfoWin::m_pTextLineBGC;
extern ERShader *ERelationsIcon::m_pHeart;
extern ERShader *ERelationsIcon::m_pSmileyFace;
extern ERShader *SimInfoWin::m_pTextPopOutC;
extern ERShader *SimInfoWin::m_pTextPopOutCH;
extern ERShader *SimInfoWin::m_pTextPopOutL;
extern ERShader *SimInfoWin::m_pTextPopOutLH;
extern ERShader *SimInfoWin::m_pTextPopOutR;
extern ERShader *SimInfoWin::m_pTextPopOutRH;
extern UiStringLookUpTableEntry SimInfoWin::__MoodStrings[8];
extern UiStringLookUpTableEntry SimInfoWin::__PersStrings[8];
extern UiStringLookUpTableEntry SimInfoWin::__JobStrings[8];
extern UiStringLookUpTableEntry SimInfoWin::__RelaStrings[8];
extern UiStringLookUpTableEntry *SimInfoWin::__InfoTextLookup[4];
extern float _dpad_inverseh;
extern float _dpad_inversew;
extern EVec2 _SimInfoWin_bevel_off;
extern float _SimInfoWin_bevel_h;
extern float _SimInfoWin_bevel_x;
extern float _rect1yoff;
extern float _rect2xoff;
extern float _moodinfo_x;
extern float _moodinfo_y;
extern float _mood_boxOffx;
extern float _mood_boxOffy;
extern float _mood_box_h;
extern float _mood_box_w;
extern float _mood_info_font_size;
extern EVec2 _vlight_bar_gap_wh;
extern float _light_bar_gap_width;
extern float _fontScaleFactor;
extern float _infoWinAlphaFadeDur_;
extern char *_SIW_lableNameTable[4];
extern EVec2 _SimInfoWin_ULUV;
extern EVec2 _SimInfoWin_BRUV;
extern EVec2 _vBevel2P;
extern EVec2 _vBevel2PWH;
extern EVec2 _vBevel1P;
extern EVec2 _vBevel1PWH;
extern float _playerOne2pbackH;
extern float _dtbcenterh;
extern ERelationsIconFixedPool _eRelationsIconAllocPool;
extern __vtbl_ptr_type SimInfoWin::Panelstateman virtual table[5];
extern __vtbl_ptr_type SimInfoWin virtual table[15];
extern __vtbl_ptr_type ERelationsIcon virtual table[16];
extern __vtbl_ptr_type ERelationsWin virtual table[25];
extern __vtbl_ptr_type Panelstateman virtual table[5];
extern float m_introAnimDur;
extern float m_infointroAnimDur;
extern float m_introTime;
extern float m_hoverTime;
extern float m_infoInTime;
extern short unsigned int __InfoMessageBuff[64];
extern void (*SimInfoWin::m_DrawTable[4])(/* parameters unknown */);
extern void (*SimInfoWin::m_UpdateTable[4])(/* parameters unknown */);

float GetMovtiveMag(float val);
void DrawRedGreenBar(ERC *prc, float w, float h, float greenmag, EVec2 vPos, float _alpha);
void DrawRedGreenBar(ERC *prc, float greenmag, EVec2 vPos, float _alpha, EVec2 *vPulse);
EVec2& Get2PlayerOff(int ctrl);
void __MoodDraw(SimInfoWin *pThis, ERC *prc);
void DrawLightBar(ERC *prc, float mag, EVec2 vPos, int nticks, float _alpha);
void DrawTwoColorLightBar(ERC *prc, float magOne, float magTwo, EVec2 vPos, int nticks, float _alpha);
void __PersDraw(SimInfoWin *pThis, ERC *prc);
void __Job_Draw(SimInfoWin *pThis, ERC *prc);
void __RelaDraw(SimInfoWin *pThis, ERC *prc);
void __MoodUpdate(SimInfoWin *pThis);
void __PersUpdate(SimInfoWin *pThis);
void __Job_Update(SimInfoWin *pThis);
void __RelaUpdate(SimInfoWin *pThis);
void SimInfoWin::~SimInfoWin(int __in_chrg);
void ERelationsWin::~ERelationsWin(int __in_chrg);
void ERelationsIcon::~ERelationsIcon(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
Neighbor** Neighbor ** copy_backward<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result);
Neighbor** Neighbor ** uninitialized_copy<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result);
void vector<Neighbor *, __malloc_alloc_template<0> >::insert_aux(Neighbor **position, Neighbor *&x);
int int __lg<int>(int n);
void void __push_heap<Neighbor **, int, Neighbor *, ERelationsWinCmp>(Neighbor **first, int holeIndex, int topIndex, Neighbor *value, ERelationsWinCmp comp);
void void __adjust_heap<Neighbor **, int, Neighbor *, ERelationsWinCmp>(Neighbor **first, int holeIndex, int len, Neighbor *value, ERelationsWinCmp comp);
void void __make_heap<Neighbor **, ERelationsWinCmp, Neighbor *, int>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp);
void void sort_heap<Neighbor **, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp);
void void __partial_sort<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **first, Neighbor **middle, Neighbor **last, ERelationsWinCmp comp);
Neighbor** Neighbor ** __unguarded_partition<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **first, Neighbor **last, Neighbor *pivot, ERelationsWinCmp comp);
void void __introsort_loop<Neighbor **, Neighbor *, int, ERelationsWinCmp>(Neighbor **first, Neighbor **last, int depth_limit, ERelationsWinCmp comp);
void void __unguarded_linear_insert<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **last, Neighbor *value, ERelationsWinCmp comp);
void void __insertion_sort<Neighbor **, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp);
void void __unguarded_insertion_sort_aux<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp);
void void __final_insertion_sort<Neighbor **, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp);
void Panelstateman::~Panelstateman(int __in_chrg);
void global constructors keyed to _textwidth();
void global destructors keyed to _textwidth();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_SIMINFOWIN_H

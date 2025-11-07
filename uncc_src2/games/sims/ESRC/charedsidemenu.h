// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSIDEMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSIDEMENU_H

struct EUIObjectMover {
protected:
	float m_startt;
	float m_stopt;
	float m_curtime;
	
public:
	EUIObjectMover& operator=();
	EUIObjectMover();
	EUIObjectMover();
	EUIObjectMover(EUIObjectMover*, int, void);
	void SetTime();
	void SetClock();
	float GetClock();
	float GetStopTime();
	float GetStartTime();
	void UpdateClock();
	void GetLerpPos();
	void GetHermPos();
	void GetLerpPos();
	void GetHermPos();
	void GetLerpPos();
	void GetHermPos();
	void GetLerpPos();
	void GetHermPos();
};

struct ENeighborhoodCustomChar {
	u8 m_nPersNice;
	u8 m_nPersActive;
	u8 m_nPersGenerous;
	u8 m_nPersPlayful;
	u8 m_nPersOutgoing;
	u8 m_nPersNeat;
	u8 m_ZodiacSign;
	u32 m_AgeObsolete;
	CustomCharacter c;
	short unsigned int Name[32];
	ETexture *m_pThumbnailTexturePtr;
	ERShader *m_pThumbnailShaderPtr;
	u32 m_nCleaningSkill;
	u32 m_nCookingSkill;
	u32 m_nSocialSkill;
	u32 m_nRepairSkill;
	u32 m_nGardeningSkill;
	u32 m_nMusicSkill;
	u32 m_nCreativeSkill;
	u32 m_nLiteracySkill;
	u32 m_nPhysicalSkill;
	u32 m_nLogicSkill;
	u32 m_JobData;
	u32 m_JobType;
	u32 m_JobStatus;
	u32 m_JobPerformance;
	int m_Relationship[8];
};

struct ECharedSideMenu : EUIObjectNode {
protected:
	int m_nUnusedPersonalityOptions;
	int m_nCurrentMenuType;
	bool m_bDisplayMenu;
	bool m_bDisplayBackground;
	float m_fPersonalMenuWidth;
	float m_fBodyMenuWidth;
	float m_fHeadMenuWidth;
	float m_fLeftOffset;
	EVec4 m_vStart;
	EVec4 m_vStop;
	EVec4 m_vCurPos;
	ERFont *m_pFont;
	EUIMenu *m_pMenu[3];
	ECharedName m_simName;
	ECharedAge m_simAge;
	ECharedGender m_simGender;
	ECharedBirthSign m_zodiacSign;
	ECharedPersonalItem m_pPersonalMenuItems[5];
	ECharedTextMenuItem m_pBodyMenuItems[8];
	ECharedTextMenuItem m_pHeadMenuItems[6];
	EUIObjectMover m_mover;
	c16 *m_pNamePointer;
	ETextEntryDialog *m_pKeyboard;
	ERShader *m_pBlankShdr;
	ERShader *m_pSideMenuCurveShdr;
	ERShader *m_pBevelShdr;
	
public:
	ECharedSideMenu& operator=();
	ECharedSideMenu();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ECharedSideMenu();
	/* vtable[1] */ virtual ECharedSideMenu(ECharedSideMenu*, int, void);
	void Init();
	void CleanUp();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void NewSize(EVec4 vNewLocation, float fTime);
	void InitMenu(int nMenuType);
	void HideMenu();
	void DrawPersonalMenu(ERC *prc);
	void DrawBodyMenu(ERC *prc);
	void DrawHeadMenu(ERC *prc);
	void ResetMenus(c16 *szName);
	void ResetMenus();
	void GetPersonalAttributes(ENeighborhoodCustomChar *pSim, bool bUseZeros);
	void EnableAgeEdit();
	void DisableAgeEdit();
	void EnableGenderEdit();
	void DisableGenderEdit();
	void KillKeyboard();
	bool IsKeyboardRunning();
	bool IsNameSelected();
};

extern __vtbl_ptr_type ECharedSideMenu virtual table[15];

void ECharedSideMenu::~ECharedSideMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSIDEMENU_H

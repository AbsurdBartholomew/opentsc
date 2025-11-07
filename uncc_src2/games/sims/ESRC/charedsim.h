// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSIM_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSIM_H

typedef float sceVu0FMATRIX[4][4];

struct ECharedSim {
protected:
	bool m_bDrawRect;
	bool m_bPlayAllAnims;
	bool m_bUsePalettizedSkin;
	bool m_bMiddleAnim;
	bool m_bInStoryMode;
	u32 m_nRepeatIdleCount;
	unsigned int m_nIdleAnimationID[9];
	ERModel *m_pModels[5];
	ERModel *m_pGlassesModel;
	ERModel *m_plowResShadowModel;
	ECharedSkin *m_customSkin;
	ETexture *m_pFaceImage;
	EShader *m_pPaletteSkin;
	ERShader *m_pBlankShdr;
	ERShader *m_pShadow;
	EAnimController m_ac;
	EVec3 m_vPos;
	EVec3 m_vScale;
	CustomCharacter m_character;
	CustomCharacter m_oldCharacter;
	ERQuickdata *m_pCreateSimData;
	Table *m_pBodyData;
	
public:
	ECharedSim& operator=();
	ECharedSim();
	ECharedSim();
	ECharedSim();
	void Init(ENeighborhoodCustomChar *pDescription, ECharedSkin *pSkin);
	void Init();
	ECharedSim(ECharedSim*, int, void);
	void CleanUp();
	void Draw(ERC *prc, float fRotation);
	void Update();
	void UpdateSkin();
	void Next(int nBodyPart);
	void Previous(int nBodyPart);
	void NextColor(ECharedSim*, int, void);
	void PrevColor(ECharedSim*, int, void);
	void PlayAllAnimations();
	void PlayHeadAnimations();
	void StoreOldIndexes();
	void ApplyOldIndexes();
	CustomCharacter& GetCharacterData();
	ERModel* GetPart();
	ECharedSkin* GetSkin();
	void CreatePaletteSkin();
	bool IsMale();
	bool IsAdult();
	void SetPosition();
	EVec3 GetPosition();
	void CreateFaceImage();
	ETexture* GetFaceImage();
	void InStoryMode();
	static void ScaleBone(/* parameters unknown */);
protected:
	void SetModel(s8 nIndex, u32 nNewModel);
	void RemoveModel(s8 nIndex);
	void InitMaleAdult();
	void InitFemaleAdult();
	void InitMaleChild();
	void InitFemaleChild();
	void DrawShadow(ERC *prc);
	static void ScaleBones(/* parameters unknown */);
};

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDSIM_H

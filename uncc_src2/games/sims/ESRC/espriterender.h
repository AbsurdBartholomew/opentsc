// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_ESPRITERENDER_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_ESPRITERENDER_H

struct SpriteData {
	EVec2 m_vWH;
	EVec3 m_vPos;
	EVec4 m_vColor;
};

struct ESpriteRender {
protected:
	bool bMarked;
	bool bMarkedAsNew;
	cXObject *m_pObj;
	ERShader *m_pShader;
	ERShader *m_pShaderBack;
	EDL *m_pRect;
	SpriteData m_foreData;
	SpriteData m_backData;
public:
	__vtbl_ptr_type *$vf1022;
	
	ESpriteRender& operator=();
	ESpriteRender();
	ESpriteRender();
	/* vtable[1] */ virtual ESpriteRender(ESpriteRender*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Update();
	void Draw(ERC *prc);
	void SetSprite();
	cXObject* GetObject();
	bool GetMarked();
	bool GetMarkedAsNew();
	void Mark();
	void MarkAsNew();
protected:
	bool SetUpRect(ERC *prc, EVec3 &vPos, float xSize, float ySize, SpriteData &data);
};

extern EVec2 _v2PSpriteClipLine;
extern __vtbl_ptr_type ESpriteRender virtual table[3];

void ESpriteRender::~ESpriteRender(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to ESpriteRender::ESpriteRender();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_ESPRITERENDER_H

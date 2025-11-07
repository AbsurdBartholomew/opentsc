// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_ESPRITERENDERMAN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_ESPRITERENDERMAN_H

typedef TNodeList<ESpriteRender *> ESpriteRenderPtrList;

struct ESpriteRenderMan {
protected:
	ESpriteRenderPtrList m_sprites;
	
public:
	ESpriteRenderMan& operator=();
	ESpriteRenderMan();
	ESpriteRenderMan();
	ESpriteRenderMan(ESpriteRenderMan*, int, void);
	void Update();
	void Draw(ERC *prc);
	ESpriteRender* AddSprite(cXObject *pSprite);
	void MarkSprite(cXObject *pSprite);
	void RemoveMarkedSprites();
	void SetSprite(SpriteSlot *pSprite);
};

void ESpriteRenderMan::~ESpriteRenderMan(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_ESPRITERENDERMAN_H

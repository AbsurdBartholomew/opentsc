// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTTYPEATTRIBUTES_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTTYPEATTRIBUTES_H

struct ObjectTypeAttrBlock {
private:
	SInt32 fGUID;
	Int fNumAttr;
	SInt16 *fAttr;
	
public:
	ObjectTypeAttrBlock& operator=();
	ObjectTypeAttrBlock(SInt32 guid, Int numAttr);
	ObjectTypeAttrBlock();
	ObjectTypeAttrBlock(ObjectTypeAttrBlock*, int, void);
	void Clear();
	Int GetNumAttr();
	SInt16* GetAttr();
	SInt32 GetGUID();
};

void ObjectTypeAttrBlock::~ObjectTypeAttrBlock(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTTYPEATTRIBUTES_H

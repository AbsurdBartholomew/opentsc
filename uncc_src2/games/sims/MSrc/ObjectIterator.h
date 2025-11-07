// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTITERATOR_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTITERATOR_H

enum IterateType {
	kAll = 0
};

struct ObjectIterator {
private:
	cXObject *fRoot;
	cXObject *fCurrent;
	IterateType fType;
	
public:
	ObjectIterator& operator=();
	ObjectIterator(cXObject *object, IterateType type);
	ObjectIterator();
	ObjectIterator();
	bool operator==(ObjectIterator &other);
	ObjectIterator& operator++();
	cXObject* operator*();
	bool finished();
	void init(CTilePt &location, IterateType type);
};

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTITERATOR_H

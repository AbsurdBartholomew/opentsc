// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_MOVIEMAN_H
#define C__EOR_SRC2_ENGINE_E_MOVIEMAN_H

struct EMovieMan : EResourceManager {
	EMovieMan& operator=();
	EMovieMan();
	/* vtable[1] */ virtual EMovieMan(EMovieMan*, int, void);
	ERMovie* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERMovie* AddRef();
	EMovieMan();
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
};

extern EMovieMan _movieman;
extern __vtbl_ptr_type EMovieMan virtual table[7];

void EMovieMan::~EMovieMan(int __in_chrg);
void global constructors keyed to _movieman();
void global destructors keyed to _movieman();

#endif // C__EOR_SRC2_ENGINE_E_MOVIEMAN_H

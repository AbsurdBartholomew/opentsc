// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_MOVIE_H
#define C__EOR_SRC2_ENGINE_E_MOVIE_H

struct EMovie {
protected:
	int m_MovieX;
	int m_MovieY;
public:
	__vtbl_ptr_type *$vf1944;
	
	EMovie& operator=();
	EMovie();
	/* vtable[1] */ virtual bool Load(EFile *pFile, u32 start, u32 length);
	/* vtable[2] */ virtual void Start(int x, int y);
	/* vtable[3] */ virtual void Stop();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual bool IsFinished();
	/* vtable[6] */ virtual void Update();
	/* vtable[7] */ virtual EMovie(EMovie*, int, void);
protected:
	EMovie();
};

extern __vtbl_ptr_type EMovie virtual table[9];

void EMovie::~EMovie(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_MOVIE_H

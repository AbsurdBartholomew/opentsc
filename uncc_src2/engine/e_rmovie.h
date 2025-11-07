// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_RMOVIE_H
#define C__EOR_SRC2_ENGINE_E_RMOVIE_H

struct ERMovie : EResource {
protected:
	EFile *m_pFile;
	u32 m_Start;
	u32 m_Length;
	EMovie *m_pMovie;
	
public:
	ERMovie& operator=();
	ERMovie(EFile *pFile, u32 start, u32 length);
	ERMovie();
	/* vtable[6] */ virtual ERMovie(ERMovie*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Start(int x, int y);
	void Stop();
	void Reset();
	void Update();
	bool IsFinished();
};

extern __vtbl_ptr_type ERMovie virtual table[13];

void ERMovie::~ERMovie(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_E_RMOVIE_H

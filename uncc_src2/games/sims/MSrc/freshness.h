// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_FRESHNESS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_FRESHNESS_H

struct list<cFreshPlayer *,__malloc_alloc_template<0> > {
protected:
	__list_node<cFreshPlayer *> *node;
	unsigned int length;
	
	__list_node<cFreshPlayer *>* get_node();
	void put_node();
public:
	list();
	__list_iterator<cFreshPlayer *> begin();
	__list_const_iterator<cFreshPlayer *> begin();
	__list_iterator<cFreshPlayer *> end();
	__list_const_iterator<cFreshPlayer *> end();
	reverse_bidirectional_iterator<__list_iterator<cFreshPlayer *>,cFreshPlayer *,cFreshPlayer *&,int> rbegin();
	reverse_bidirectional_iterator<__list_const_iterator<cFreshPlayer *>,cFreshPlayer *,cFreshPlayer *const &,int> rbegin();
	reverse_bidirectional_iterator<__list_iterator<cFreshPlayer *>,cFreshPlayer *,cFreshPlayer *&,int> rend();
	reverse_bidirectional_iterator<__list_const_iterator<cFreshPlayer *>,cFreshPlayer *,cFreshPlayer *const &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	cFreshPlayer*& front();
	cFreshPlayer*& front();
	cFreshPlayer*& back();
	cFreshPlayer*& back();
	void swap();
	__list_iterator<cFreshPlayer *> insert();
	__list_iterator<cFreshPlayer *> insert();
	void insert();
	void insert();
	void insert();
	void push_front();
	void push_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
	void pop_front();
	void pop_back();
	list();
	list();
	list();
	list();
	list();
	list(list<cFreshPlayer *,__malloc_alloc_template<0> >*, int, void);
	list<cFreshPlayer *,__malloc_alloc_template<0> >& operator=();
protected:
	void transfer();
public:
	void splice();
	void splice();
	void splice();
	void remove();
	void unique();
	void merge();
	void reverse();
	void sort();
};

struct cFreshTimer {
	Sint32 m_lPauseRefs;
	Sint32 m_lStartRefs;
	Sint32 m_lTimeTotal;
	Sint32 m_lTimeFast;
	Sint32 m_lTimeSetFast;
	list<cFreshPlayer *,__malloc_alloc_template<0> > m_FreshPlayerList;
	bool m_bUpdateEnabled;
	
	cFreshTimer& operator=();
	cFreshTimer();
	cFreshTimer();
	cFreshTimer(cFreshTimer*, int, void);
	void Start(cFreshPlayer *pFreshPlayer);
	void Stop(cFreshPlayer *pFreshPlayer);
	void Pause();
	void Unpause();
	void Update();
	void Shutdown();
};

extern cFreshCellPlayer *g_pReadAheadCell;

bool cFreshPlayer_Global_Lock_ReadAhead(cFreshCellPlayer *pCell);
bool cFreshPlayer_Global_Unlock_ReadAhead(cFreshCellPlayer *pCell);
cFreshCellPlayer* cFreshPlayer_Global_Get_ReadAheadCell();
void cFreshTimer::~cFreshTimer(int __in_chrg);
void cFreshPlayer::~cFreshPlayer(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void list<cFreshPlayer *, __malloc_alloc_template<0> >::clear();
void list<cFreshPlayer *, __malloc_alloc_template<0> >::erase(__list_iterator<cFreshPlayer *> first, __list_iterator<cFreshPlayer *> last);
__list_iterator<cFreshPlayer *> __list_iterator<cFreshPlayer *> find<__list_iterator<cFreshPlayer *>, cFreshPlayer *>(__list_iterator<cFreshPlayer *> first, __list_iterator<cFreshPlayer *> last, cFreshPlayer *&value);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_FRESHNESS_H

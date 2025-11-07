// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EORACTIONQUEUE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EORACTIONQUEUE_H

typedef TNodeList<const Interaction *> EInteractionPtrList;
extern float _p1aqoff;
extern float _p1aqoffy;
extern float _p2aqoffy;
extern EUIObjectNode *_PCUROPTDBG[2];
extern float _queueBackScale;
extern float EActionIcon::m_burpscale;
extern float EActionIcon::m_burptime;
extern __vtbl_ptr_type EActionIcon virtual table[15];
extern __vtbl_ptr_type EActionQueue::Panelstateman virtual table[5];
extern __vtbl_ptr_type EActionQueue virtual table[25];
extern __vtbl_ptr_type Panelstateman virtual table[5];
extern EActionIcon *_newChildArr[10];

void EActionIconCache::~EActionIconCache(int __in_chrg);
void EActionQueue::~EActionQueue(int __in_chrg);
void EActionIcon::~EActionIcon(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void Panelstateman::~Panelstateman(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EORACTIONQUEUE_H

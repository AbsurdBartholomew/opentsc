// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJTESTSIM_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJTESTSIM_H

struct iterator {
private:
	Interaction *m_pInteraction;
	
public:
	iterator& operator=();
	iterator();
	iterator();
	iterator();
	Interaction& operator*();
	Interaction* operator->();
	Interaction* operator++();
	Interaction* operator Interaction *();
};

struct InteractionList {
private:
	Interaction *m_pFirst;
	Interaction *m_pLast;
	
public:
	InteractionList& operator=();
	InteractionList();
	InteractionList();
	InteractionList(InteractionList*, int, void);
	iterator begin();
	iterator end();
	unsigned int size();
	void push_back(Interaction &x);
	void clear();
private:
	static void increment(/* parameters unknown */);
};

struct ObjTestSim {
private:
	cXPerson *fPerson;
	cXObject *fStackObject;
	bool fAutonomous;
	short int fTempStash[8];
	cXPerson *fStashed;
	static ObjTestSim *sMenuBuilder;
	static InteractionList *sMenu;
	static Interaction *sInteraction;
	static TTabScratchEntry *sCheckTreeModEntry;
	
public:
	ObjTestSim& operator=();
	ObjTestSim(cXPerson *tester, cXObject *stackObj, bool autonomous);
private:
	void RunMenuCheckTree(InteractionList &interactions, Interaction &interaction);
	void AppendInteractionsForMenu(InteractionList &interactions);
	void AppendInteractionsForAuto(InteractionList &intVector);
public:
	ObjTestSim();
	ObjTestSim();
	ObjTestSim(ObjTestSim*, int, void);
	void SetStackObject(cXObject *stackObj);
	void AppendInteractions(InteractionList &interactions);
	void TestInteraction(Interaction *interaction, TTabScratchEntry **modifiedEntry);
	static TTabScratchEntry* GetCheckTreeAds(/* parameters unknown */);
	static void MakeNewMenuItem(/* parameters unknown */);
	static bool IsMenuInProgress(/* parameters unknown */);
};

extern TTabScratchEntry sCheckTreeAds;
extern TTabScratchEntry *ObjTestSim::sCheckTreeModEntry;
extern ObjTestSim *ObjTestSim::sMenuBuilder;
extern bool gUserActionControl;
extern bool gAllowInUse;
extern InteractionList *ObjTestSim::sMenu;
extern Interaction *ObjTestSim::sInteraction;

void ObjTestSim::~ObjTestSim(int __in_chrg);
void InteractionList::~InteractionList(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to sCheckTreeAds();
void global destructors keyed to sCheckTreeAds();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJTESTSIM_H

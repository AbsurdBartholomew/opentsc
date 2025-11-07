// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_COMMANDER_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_COMMANDER_H

struct Commander {
	static Commander *sList;
	static SInt32 sId;
	Commander *fNext;
	SInt32 fWhat;
	SInt32 fId;
	__vtbl_ptr_type *$vf2158;
	
	Commander& operator=();
	Commander();
	Commander();
	/* vtable[1] */ virtual Commander(Commander*, int, void);
	/* vtable[2] */ virtual Boolean DoCommand(SInt16 command, SInt32 info);
	SInt32 GetType();
	Commander* GetNext();
};

extern Commander *Commander::sList;
extern SInt32 Commander::sId;
extern __vtbl_ptr_type Commander virtual table[4];

void Commander::~Commander(int __in_chrg);
Boolean GlobalDispatch(SInt16 command, SInt32 info);
Boolean TypedDispatch(SInt32 type, SInt16 command, SInt32 info, Boolean oneOnly);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_COMMANDER_H

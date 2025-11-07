// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_INTERACTION_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_INTERACTION_H

typedef BString2 InteractionName;

enum Type {
	kNormal = 0,
	kJoin = 1,
	kAnimPreview = 2
};

struct Interaction {
private:
	Interaction *m_pNextItem;
	Type fType;
	cXPersonImpl *fPerson;
	cXObjectImpl *fStackObject;
	cXObjectImpl *fIconObject;
	Int fTreeTabEntryIndex;
	short int fStackVars[4];
	Int fPriority;
	SInt16 fTreeID;
	float fAttenuation;
	InteractionName fName;
	Int fMenuItem;
	Int fSubMenuItem;
	SInt32 fID;
	Int fFlags;
	static SInt32 sLastUniqueID;
	
public:
	Interaction& operator=();
	Interaction(cXPerson *person, cXObject *obj, Int treeTabEntryIndex, Int priority);
	Interaction();
	Interaction();
	Interaction();
	Interaction();
	Interaction();
	Type GetType();
	float GetAttenuation();
	SInt16 GetTreeID();
	StdPrm* GetStackVars();
	cXObject* GetStackObject();
	cXPerson* GetPerson();
	Int GetTreeTabEntryIndex();
	Int GetPriority();
	TreeTableEntry* GetEntry();
	InteractionName& GetName();
	void SetName(InteractionName &name);
	Int GetMenuItem();
	void SetMenuItem(Interaction*, int, void);
	Int GetSubMenuItem();
	void SetSubMenuItem(Interaction*, int, void);
	void SetStackVars(StdPrm *stackVars);
	void SetUniqueID();
	bool HasID();
	SInt32 GetID();
	bool GetAutoFirstSelect();
	void SetAutoFirstSelect();
	bool GetContinuation();
	void SetContinuation();
	bool GetChecked();
	void SetChecked();
	bool GetAvailable();
	void SetAvailable();
	bool GetHidden();
	void SetHidden();
	bool GetResult();
	void SetResult();
	bool GetCarryNameOver();
	void SetCarryNameOver();
	bool GetNameChanged();
	void SetNameChanged();
	bool GetCancelled();
	void SetCancelled();
	cXObject* GetIconObject();
	void SetIconObject(cXObject *iconObj);
	void DoStream(ReconBuffer *r, SInt32 version);
};

extern SInt32 Interaction::sLastUniqueID;

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_INTERACTION_H

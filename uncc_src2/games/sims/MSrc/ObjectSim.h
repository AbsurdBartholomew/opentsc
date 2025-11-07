// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTSIM_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTSIM_H

typedef enum { // 0x8
	kTrueComplete = 1,
	kFalseComplete = 0,
	kEngaged = 2,
	kError = -1,
	kStackLoaded = 3,
	kGlobalEngaged = 4,
	kWatingForUpdate = -889274641,
	kDead = -559038737
} TreeReturnCode;

struct TestInteractingWithParam {
};

struct UserEventParam {
	UInt16 timeout;
	UInt8 size;
	UInt8 zoom;
	UInt8 flags;
	UInt8 strIndex;
	
	UserEventParam& operator=();
	UserEventParam();
	UserEventParam();
	bool GetTurnOn();
	void SetTurnOn();
	bool GetLiveAction();
	void SetLiveAction();
	bool GetShowIfObjectVisible();
	void SetShowIfObjectVisible();
	bool GetJustCenter();
	void SetJustCenter();
	bool GetSnapshot();
	void SetSnapshot();
	bool GetTimoutUsesLocal();
	void SetTimoutUsesLocal();
	bool GetSlowdown();
	void SetSlowdown();
};

struct UIEffectParam {
	UInt8 type;
	UInt8 whichOwner;
	SInt16 whichData;
	UInt8 flags;
	
	UIEffectParam& operator=();
	UIEffectParam();
	UIEffectParam();
	bool GetTurnOn();
	void SetTurnOn();
};

struct TestObjectTypeParam {
	SInt32 guid;
	SInt16 idData;
	UInt8 idOwner;
};

struct SetMotiveDeltaParam {
	UInt8 deltaOwner;
	UInt8 maxOwner;
	UInt8 motiveNum;
	UInt8 flags;
	SInt16 deltaData;
	SInt16 maxData;
	
	SetMotiveDeltaParam& operator=();
	SetMotiveDeltaParam();
	SetMotiveDeltaParam();
	bool GetClearAll();
	void SetClearAll();
};

struct ChangeSuitParam {
	UInt8 suitIndex;
	UInt8 suitLocation;
	StdPrm flags;
	
	ChangeSuitParam& operator=();
	ChangeSuitParam();
	ChangeSuitParam();
	bool GetUndress();
	void SetUndress();
};

struct BurnParam {
	UInt8 what;
	UInt8 flags;
	
	BurnParam& operator=();
	BurnParam();
	BurnParam();
	bool GetAllowBusyObjects();
	void SetAllowBusyObjects();
};

struct TutorialParam {
	UInt8 action;
};

struct GosubFoundActionParam {
};

struct DropParam {
};

struct GrabParam {
};

struct FindBestActionParam {
};

struct NotifyStackObjectParam {
};

struct BudgetParam {
	UInt8 oldAmountOwner;
	UInt8 amountOwner;
	StdPrm amountData;
	StdPrm flags;
	UInt8 expType;
	
	BudgetParam& operator=();
	BudgetParam();
	BudgetParam();
	bool GetJustTest();
	void SetJustTest();
	bool GetSubtract();
	void SetSubtract();
	UInt8 GetAmountOwner();
};

struct DropOntoParam {
	StdPrm srcInStackVar;
	StdPrm src;
	StdPrm destInStackVar;
	StdPrm dest;
};

struct KillObjectParam {
	StdPrm who;
	UInt8 flags;
	
	KillObjectParam& operator=();
	KillObjectParam();
	KillObjectParam();
	bool GetReturnImmediately();
	void SetReturnImmediately();
	bool GetCleanupAll();
	void SetCleanupAll();
};

struct CallNamedTreeParam {
	StdPrm stringsID;
	StdPrm flags;
	UInt8 stringIndex;
	UInt8 how;
	
	CallNamedTreeParam& operator=();
	CallNamedTreeParam();
	CallNamedTreeParam();
	bool GetNameGlobal();
	void SetNameGlobal();
};

struct MakeActionStringParam {
	StdPrm stringsID;
	StdPrm flags;
	UInt8 stringIndex;
};

struct SetToNextParam {
	SInt32 guid;
	UInt8 flags;
	UInt8 targOwner;
	UInt8 local;
	UInt8 targData;
	
	SetToNextParam& operator=();
	SetToNextParam();
	SetToNextParam();
	Int GetSearchType();
	void SetSearchType();
	Int GetTargetOwner();
	Int GetTargetData();
	void SetTarget();
};

struct GenericSimCallParam {
	StdPrm call;
};

struct LookTowardsParam {
	StdPrm typeOfLook;
};

struct KillSoundsParam {
	StdPrm useStackObject;
};

struct PlaySoundParam {
	StdPrm soundID;
	UInt16 sampleRate;
	UInt8 flags;
	SInt8 volume;
	
	PlaySoundParam& operator=();
	PlaySoundParam();
	PlaySoundParam();
	void SetSampleRate();
	float GetSampleRate();
	bool GetLooped();
	void SetLooped();
	bool GetUseStackObjAsSource();
	void SetUseStackObjAsSource();
	bool GetZooms();
	void SetZooms();
	bool GetPans();
	void SetPans();
	bool GetAutoVary();
	void SetAutoVary();
	bool GetModifyRateBasedOnSimSpeed();
	void SetModifyRateBasedOnSimSpeed();
};

struct Find5WorstMotivesParam {
	UInt16 unused0;
	UInt16 unused1;
	UInt16 whoToSearch;
	UInt16 typeOfSearch;
};

struct SetBalloonParam {
	StdPrm flags2;
	StdPrm indexAndGroup;
	StdPrm duration;
	StdPrm flagsAndType;
	
	SetBalloonParam& operator=();
	SetBalloonParam();
	SetBalloonParam();
	int GetIndex();
	void SetIndex();
	int GetGroup();
	void SetGroup();
	int GetType();
	void SetType();
	bool GetShowWhenInactive();
	void SetShowWhenInactive();
	bool GetShowNotSign();
	void SetShowNotSign();
	bool GetReverse();
	void SetReverse();
	bool GetDurationIsInLoops();
	void SetDurationIsInLoops();
	bool GetOffsetByTemp0();
	void SetOffsetByTemp0();
	bool GetOverStackObject();
	void SetOverStackObject();
	StdPrm GetLocalNum();
	void SetLocalNum();
};

struct PushActionParam {
	UInt8 interactionIndex;
	UInt8 dataForInteractingObject;
	UInt8 priority;
	UInt8 flags;
	UInt8 stackLocalForIconObject;
	
	PushActionParam& operator=();
	PushActionParam();
	PushActionParam();
	bool GetUseSpecialIcon();
	void SetUseSpecialIcon();
	bool GetUseLocal();
	void SetUseLocal();
	bool GetContinue();
	void SetContinue();
	bool GetCarryNameOver();
	void SetCarryNameOver();
};

struct IdleParam {
	StdPrm decStackVar;
};

struct IdleForInputParam {
	StdPrm decParam;
	StdPrm interruptable;
};

struct ExpressionParam {
	StdPrm lhsData;
	StdPrm rhsData;
	SInt8 isSigned;
	SInt8 opType;
	SInt8 lhsOwner;
	SInt8 rhsOwner;
};

struct TreeBreakParam {
	StdPrm checkData;
	StdPrm checkOwner;
};

struct CreateObjectParam {
	SInt32 guid;
	SInt8 where;
	SInt8 flags;
	SInt8 local;
	
	CreateObjectParam& operator=();
	CreateObjectParam();
	CreateObjectParam();
	bool GetNoDuplicate();
	void SetNoDuplicate();
	bool GetPassMyIDAndStackObjID();
	void SetPassMyIDAndStackObjID();
	bool GetCreateNeighborInStackObj();
	void SetCreateNeighborInStackObj();
	bool GetEmptyTilesOnly();
	void SetEmptyTilesOnly();
	bool GetPassTemp0();
	void SetPassTemp0();
	bool GetUseDirectionOfStackObj();
	void SetUseDirectionOfStackObj();
};

struct PreloadObjectParam {
	SInt32 guid;
	SInt16 flags;
	
	PreloadObjectParam& operator=();
	PreloadObjectParam();
	PreloadObjectParam();
	bool GetUnload();
	void SetUnload();
};

struct DistanceToParam {
	StdPrm destTemp;
	UInt8 flags;
	UInt8 fromOwner;
	StdPrm fromData;
	
	DistanceToParam& operator=();
	DistanceToParam();
	DistanceToParam();
	StdPrm GetFromOwner();
	void SetFromOwner();
	StdPrm GetFromData();
	void SetFromData();
};

struct GotoRelativeParam {
	StdPrm oldTrapCount;
	SInt8 relLocation;
	SInt8 relDirection;
	StdPrm routeCountUNUSED;
	UInt8 flags;
	
	GotoRelativeParam& operator=();
	GotoRelativeParam();
	GotoRelativeParam();
	bool GetAllowFailureTrees();
	void SetAllowFailureTrees();
	bool GetAllowDifferentAlts();
	void SetAllowDifferentAlts();
};

struct DirectionToParam {
	StdPrm destData;
	StdPrm destOwner;
	UInt8 flags;
	UInt8 fromOwner;
	StdPrm fromData;
	
	DirectionToParam& operator=();
	DirectionToParam();
	DirectionToParam();
	StdPrm GetFromOwner();
	void SetFromOwner();
	StdPrm GetFromData();
	void SetFromData();
};

struct UpdateParam {
	StdPrm who;
	StdPrm what;
};

struct RandomParam {
	StdPrm destData;
	StdPrm destOwner;
	StdPrm rangeData;
	StdPrm rangeOwner;
};

struct RelationshipParam {
	SInt8 doSet;
	SInt8 index;
	SInt8 stackVar;
	SInt8 whoseRelationship;
	SInt8 flags;
	
	RelationshipParam& operator=();
	RelationshipParam();
	RelationshipParam();
	bool GetCreate();
	void SetCreate();
	bool GetUseNeighbors();
	void SetUseNeighbors();
};

struct Relationship2Param {
	UInt8 whichVar;
	UInt8 whichRel;
	UInt8 flags2;
	UInt8 localForObject;
	UInt8 owner;
	UInt8 _pad;
	StdPrm data;
	
	Relationship2Param& operator=();
	Relationship2Param();
	Relationship2Param();
	bool GetCreate();
	void SetCreate();
	bool GetUseNeighbors();
	void SetUseNeighbors();
	bool GetAssign();
	void SetAssign();
};

struct FindFunctionalObjectParam {
	StdPrm whichFunction;
};

struct FindGoodLocationParam {
	UInt8 specialCondition;
	UInt8 relObjLocal;
	UInt8 flags;
	
	FindGoodLocationParam& operator=();
	FindGoodLocationParam();
	FindGoodLocationParam();
	bool GetStartAtRelObj();
	void SetStartAtRelObj();
	bool GetPreferEmptyTiles();
	void SetPreferEmptyTiles();
	bool GetEditableTilesOnly();
	void SetEditableTilesOnly();
};

struct ShowStringParam {
	StdPrm stringsID;
	StdPrm stringIndex;
};

struct CallFunctionalTreeParam {
	StdPrm whichFunction;
	StdPrm flags;
	
	CallFunctionalTreeParam& operator=();
	CallFunctionalTreeParam();
	CallFunctionalTreeParam();
	bool GetChangeIcon();
	void SetChangeIcon();
};

struct GotoRoutingSlotParam {
	StdPrm paramValue;
	StdPrm paramType;
	UInt8 flags;
	
	GotoRoutingSlotParam& operator=();
	GotoRoutingSlotParam();
	GotoRoutingSlotParam();
	bool GetAllowFailureTrees();
	void SetAllowFailureTrees();
};

struct SnapParam {
	StdPrm stackVarOfRoutingSlot;
	StdPrm howToSnap;
	StdPrm flags;
	
	SnapParam& operator=();
	SnapParam();
	SnapParam();
	bool GetOriginOnly();
	void SetOriginOnly();
	bool GetAskPersonToMove();
	void SetAskPersonToMove();
	bool GetUseFootprint();
	void SetUseFootprint();
};

struct ReachParam {
	StdPrm whereToReach;
	StdPrm shouldGrabOrDrop;
	StdPrm stackVarOfSlotNumber;
};

struct MakeNewCharacterParam {
	UInt8 localForSkinColor;
	UInt8 localForAge;
	UInt8 localForGender;
};

struct XPrimParam {
	union {
		BehaviorNodeParam bparam;
		ExpressionParam expression;
		IdleParam idle;
		IdleForInputParam idleForInput;
		UpdateParam update;
		RandomParam random;
		DistanceToParam distanceTo;
		DirectionToParam directionTo;
		TreeBreakParam treebreak;
		GotoRelativeParam gotoRelative;
		PushActionParam pushAction;
		Find5WorstMotivesParam find5WorstMotives;
		AnimateNewParam animateNew;
		CreateObjectParam createObject;
		PreloadObjectParam preloadObject;
		RelationshipParam relationship;
		FindFunctionalObjectParam findFunctionalObject;
		CallFunctionalTreeParam callFunctionalTree;
		ShowStringParam showString;
		GotoRoutingSlotParam gotoRoutingSlot;
		SnapParam snap;
		ReachParam reach;
		SetBalloonParam setBalloon;
		PlaySoundParam playSound;
		KillSoundsParam killSounds;
		LookTowardsParam lookTowards;
		DialogParam dialog;
		GenericSimCallParam genericSimCall;
		SetToNextParam setToNext;
		MakeActionStringParam makeActionString;
		CallNamedTreeParam callNamedTree;
		KillObjectParam killObject;
		BudgetParam budget;
		DropOntoParam dropOnto;
		NotifyStackObjectParam notifyStackObject;
		FindBestActionParam findBestAction;
		GrabParam grab;
		DropParam drop;
		TreeBreakParam treeBreak;
		GosubFoundActionParam gosubFoundAction;
		ChangeSuitParam changeSuit;
		BurnParam burn;
		TutorialParam tutorial;
		Relationship2Param relationship2;
		FindGoodLocationParam findGoodLocation;
		MakeNewCharacterParam makeNewCharacter;
		SetMotiveDeltaParam setMotiveDelta;
		TestObjectTypeParam testObjectType;
		UIEffectParam uiEffect;
		UserEventParam userEvent;
		TestInteractingWithParam testInteractingWith;
	};
};

extern bool gLogSounds;

bool TryFindSafeLocForSim(cXObject *newObj, FTilePt &loc, int level, cXObject *pTop, Int slotNum);
void LogSoundEvent(char *s);
int _MotiveSort(void *m1, void *m2);
TreeReturnCode StartFireAtObjectLoc(cXObject *obj, ObjSelector *fireSel);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void global constructors keyed to gLogSounds();
void global destructors keyed to gLogSounds();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTSIM_H

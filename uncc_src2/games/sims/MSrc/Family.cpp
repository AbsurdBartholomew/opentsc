// STATUS: NOT STARTED

#include "Family.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1121;
	__vtbl_ptr_type *$vf1187;
	
	cXObject& operator=();
	cXObject();
protected:
	cXObject();
	/* vtable[1] */ virtual cXObject(cXObject*, int, void);
	void setObjectImpl();
	void setPersonImpl();
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[7] */ virtual void SetHilite(cXObject*, int, void);
	/* vtable[8] */ virtual Int GetHilite();
	/* vtable[9] */ virtual void SetMiscFlag();
	/* vtable[10] */ virtual bool GetMiscFlag();
	/* vtable[11] */ virtual void UpdateSimFlags();
	/* vtable[12] */ virtual void Dirty();
	/* vtable[13] */ virtual void SetRenderLayer();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[15] */ virtual RenderLayer GetRenderLayer();
	/* vtable[16] */ virtual bool IsRenderingRoot();
	/* vtable[17] */ virtual RECT& GetLastDamage();
	/* vtable[18] */ virtual void SetLastDamage();
	/* vtable[19] */ virtual void ResetDamage();
	/* vtable[20] */ virtual bool IsEmissive();
	/* vtable[21] */ virtual bool IsBeingDraggedAround();
	/* vtable[22] */ virtual void CenterHouseViewOnMe();
	/* vtable[23] */ virtual void SetDrawLabel();
	/* vtable[24] */ virtual bool IsSpriteVisible();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static void SetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[29] */ virtual void Error();
	/* vtable[30] */ virtual void HandleError();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[41] */ virtual bool FindGoodLocation();
	/* vtable[42] */ virtual void GetPlacementInfo();
	/* vtable[43] */ virtual bool IsInWorld();
	/* vtable[44] */ virtual bool TestIntersection();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[46] */ virtual ObjFnTable* GetFnTable();
	/* vtable[47] */ virtual SInt16 GetTreeID();
	/* vtable[48] */ virtual void SetLevel(cXObject*, int, void);
	/* vtable[49] */ virtual bool IsOccupied();
	/* vtable[50] */ virtual void SetData();
	/* vtable[51] */ virtual void SetTemp();
	/* vtable[52] */ virtual void SetAttr();
	/* vtable[53] */ virtual ObjectProbe* GetObjectProbe();
	/* vtable[54] */ virtual void SetObjectProbe();
	/* vtable[55] */ virtual cXObject* GetInteractionLeader();
	/* vtable[56] */ virtual Int GetFrontFaceDirection();
	/* vtable[57] */ virtual ObjectFolder* GetFolder();
	/* vtable[58] */ virtual bool SimIndependent();
	/* vtable[59] */ virtual bool SimEnabled();
	/* vtable[60] */ virtual void EnableSim();
	/* vtable[61] */ virtual int GetIdleStatus();
	/* vtable[62] */ virtual void SetIdleStatus(cXObject*, int, void);
	/* vtable[63] */ virtual void ClearIdleStatus();
	/* vtable[64] */ virtual FTileRect& GetRect();
	/* vtable[65] */ virtual SInt16 GetData();
	/* vtable[66] */ virtual SInt16 GetTemp();
	/* vtable[67] */ virtual SInt16 GetAttr();
	/* vtable[68] */ virtual ObjectModule* GetModule();
	/* vtable[69] */ virtual AnimTable* GetAdultAnimTable();
	/* vtable[70] */ virtual AnimTable* GetChildAnimTable();
	/* vtable[71] */ virtual bool HideForCutaway();
	/* vtable[72] */ virtual TileWallsSegment GetRequiredSegment();
	/* vtable[73] */ virtual Int CountObjectSlots();
	/* vtable[74] */ virtual ObjectSlot* GetObjectSlot();
	/* vtable[75] */ virtual cXObject* GetContainedObject();
	/* vtable[76] */ virtual float GetSlotHeight();
	/* vtable[77] */ virtual cXObject* GetContainer();
	/* vtable[78] */ virtual bool IsContained();
	/* vtable[79] */ virtual SInt16 GetContainerID();
	/* vtable[80] */ virtual SInt16 GetContainedSlotNum();
	/* vtable[81] */ virtual cXObject* GetNextObjectSibling();
	/* vtable[82] */ virtual cXObject* GetPrevObjectSibling();
	/* vtable[83] */ virtual RoomID GetRoom();
	/* vtable[84] */ virtual ObjDefinition* GetDef();
	/* vtable[85] */ virtual SInt16 GetType();
	/* vtable[86] */ virtual void GetTypeName();
	/* vtable[87] */ virtual SInt16 GetID();
	/* vtable[88] */ virtual void GetLocation();
	/* vtable[89] */ virtual FTilePt& GetLocation();
	/* vtable[90] */ virtual int GetLevel();
	/* vtable[91] */ virtual CTilePt GetCTilePt();
	/* vtable[92] */ virtual TreeTable* GetTreeTab();
	/* vtable[93] */ virtual ObjSelector* GetSelector();
	/* vtable[94] */ virtual Behavior* GetBehavior();
	/* vtable[95] */ virtual iResFile* GetSelFile();
	static Int GetPersonWidth(/* parameters unknown */);
	/* vtable[96] */ virtual Int GetTileWidth();
	/* vtable[97] */ virtual bool IsMultiTile();
	/* vtable[98] */ virtual StdPrm GetFlags();
	/* vtable[99] */ virtual SInt16 GetWallPlacementFlags();
	/* vtable[100] */ virtual RelMatrix& GetRelMatrix();
	/* vtable[101] */ virtual cXObject* GetObstacleAtLocation();
	/* vtable[102] */ virtual int GetNumRoutingSlots();
	/* vtable[103] */ virtual RoutingSlot& GetRoutingSlot();
	/* vtable[104] */ virtual SInt16 GetCurrentValue();
	/* vtable[105] */ virtual SInt16 GetSize();
	/* vtable[106] */ virtual cSimulator* GetSim();
	/* vtable[107] */ virtual void GetErrorString();
	/* vtable[108] */ virtual Int GetAgeInMinutes();
	/* vtable[109] */ virtual bool CanChooseAutonomously();
	/* vtable[110] */ virtual int GetBuildModeType();
	/* vtable[111] */ virtual bool IsSupport();
	/* vtable[112] */ virtual bool ShouldAutoRotate();
	/* vtable[113] */ virtual bool CanContributeLight();
	/* vtable[114] */ virtual Int GetLightingContribution();
	/* vtable[115] */ virtual ObjectLightSource GetObjectLightSource();
	/* vtable[116] */ virtual bool IsDeletedByEvict();
	/* vtable[117] */ virtual bool IsFromCatalog();
	/* vtable[118] */ virtual bool IsBroken();
	/* vtable[119] */ virtual bool IsDirty();
	/* vtable[120] */ virtual bool IsBurning();
	/* vtable[121] */ virtual bool CanBurn();
	/* vtable[122] */ virtual bool IsFireproof();
	/* vtable[123] */ virtual bool HasZeroExtent();
	/* vtable[124] */ virtual bool CanIntersectPeople();
	/* vtable[125] */ virtual bool IsChair();
	/* vtable[126] */ virtual cXObject* GetObjectFromID();
	/* vtable[127] */ virtual cXObject* GetNext();
	/* vtable[128] */ virtual cXObject* GetFirst();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	static Int GetWallBlockFlagsAtTile(/* parameters unknown */);
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
	cXObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPerson : virtual cXObject {
	cXObject *$vb1187;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1300;
	
	cXPerson& operator=();
	cXPerson();
protected:
	cXPerson();
	/* vtable[1] */ virtual cXPerson(cXPerson*, int, void);
	void setPersonImpl();
public:
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPerson*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPerson*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[12] */ virtual float GetMotive();
	/* vtable[13] */ virtual float* GetMotiveRef();
	/* vtable[14] */ virtual float* GetOldMotiveRef();
	/* vtable[15] */ virtual void SetMotive();
	/* vtable[16] */ virtual void SimMotives();
	/* vtable[17] */ virtual void CalcHappy();
	/* vtable[18] */ virtual bool AddAction();
	/* vtable[19] */ virtual bool RemoveAction();
	/* vtable[20] */ virtual Int CountActions();
	/* vtable[21] */ virtual Interaction* GetIndAction();
	/* vtable[22] */ virtual Interaction& GetCurrentAction();
	/* vtable[23] */ virtual Interaction& GetLastAction();
	/* vtable[24] */ virtual void DeleteTopAction();
	/* vtable[25] */ virtual void DebugDumpHappyScape();
	/* vtable[26] */ virtual void Skipping3D();
	/* vtable[27] */ virtual bool IsSelected();
	/* vtable[28] */ virtual StdPrm GetPersonData();
	/* vtable[29] */ virtual void SetPersonData();
	/* vtable[30] */ virtual StdPrm* GetPersonDataArray();
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[33] */ virtual StdPrm GetIdleState();
	/* vtable[34] */ virtual bool IsCarrying();
	/* vtable[35] */ virtual TileList* GetDestList();
	/* vtable[36] */ virtual SAnimator* GetSAnimator();
	/* vtable[37] */ virtual void GetJobSuitTex();
	/* vtable[38] */ virtual RoomID GetCurrentRoom();
	/* vtable[39] */ virtual void UpdateCurrentRoom();
	/* vtable[40] */ virtual SInt16 GetNeighborID();
	/* vtable[41] */ virtual void SetNeighborID();
	/* vtable[42] */ virtual bool IsSleeping();
	/* vtable[43] */ virtual bool IsRouting();
	/* vtable[44] */ virtual bool IsVisitor();
	/* vtable[45] */ virtual bool IsChild();
	/* vtable[46] */ virtual bool IsMale();
	/* vtable[47] */ virtual bool IsFemale();
	/* vtable[48] */ virtual bool IsAdult();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(cXPerson*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPerson*, int, void);
	/* vtable[61] */ virtual int GetRecordStartTicks();
	/* vtable[62] */ virtual int GetRecordCurTicks();
	/* vtable[63] */ virtual int GetRecordTicksElapsed();
	/* vtable[64] */ virtual Skill* GetRecordSkill();
	/* vtable[65] */ virtual void StartRecording();
	/* vtable[66] */ virtual void StopRecording();
	/* vtable[67] */ virtual void ClearRecording();
	/* vtable[68] */ virtual int TickRecording();
	/* vtable[69] */ virtual void LogEvent();
	/* vtable[70] */ virtual void Track();
	/* vtable[71] */ virtual bool ShouldInterrupt();
	/* vtable[72] */ virtual cXObject* GetControllingObject();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
	cXPersonImpl* CAST_IMPL();
};

struct simple_alloc<FamilyMember,__malloc_alloc_template<0> > {
	simple_alloc<FamilyMember,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static FamilyMember* allocate(/* parameters unknown */);
	static FamilyMember* allocate(/* parameters unknown */);
	static FamilyMember* allocate(/* parameters unknown */);
	static FamilyMember* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct SimpleReconObject<FamilyImpl> : ReconObject {
private:
	FamilyImpl *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<FamilyImpl>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<FamilyImpl>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

__vtbl_ptr_type SimpleReconObject<FamilyImpl> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<FamilyImpl>::~SimpleReconObject,
		/* .__delta2 = */ 12264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<FamilyImpl>::DoStream,
		/* .__delta2 = */ 12296
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<FamilyImpl>::GetType,
		/* .__delta2 = */ 12344
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type FamilyImpl virtual table[37] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::~FamilyImpl,
		/* .__delta2 = */ 8464
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::MyDoCommand,
		/* .__delta2 = */ 9632
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::CountMembers,
		/* .__delta2 = */ 8960
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetIndexedMember,
		/* .__delta2 = */ 8848
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetMemberByGUID,
		/* .__delta2 = */ 8720
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::TestMember,
		/* .__delta2 = */ 8632
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::TestMember,
		/* .__delta2 = */ 8784
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::LoadFamily,
		/* .__delta2 = */ 9096
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SaveFamily,
		/* .__delta2 = */ 9512
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::DoStream,
		/* .__delta2 = */ 9168
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetName,
		/* .__delta2 = */ 8904
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetName,
		/* .__delta2 = */ 9576
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetExportName,
		/* .__delta2 = */ 9944
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetNumber,
		/* .__delta2 = */ 11888
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetHouseNumber,
		/* .__delta2 = */ 11896
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetHouseNumber,
		/* .__delta2 = */ 11904
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetCreationOrder,
		/* .__delta2 = */ 11912
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetCreationOrder,
		/* .__delta2 = */ 11920
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetFunds,
		/* .__delta2 = */ 11928
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetFunds,
		/* .__delta2 = */ 11936
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetHouseValue,
		/* .__delta2 = */ 11944
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetHouseValue,
		/* .__delta2 = */ 11952
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetNetWorth,
		/* .__delta2 = */ 9040
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetFriendCount,
		/* .__delta2 = */ 8984
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetFriendCount,
		/* .__delta2 = */ 11960
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetHasPhone,
		/* .__delta2 = */ 11976
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetHasPhone,
		/* .__delta2 = */ 12016
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetHasBaby,
		/* .__delta2 = */ 12032
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetHasBaby,
		/* .__delta2 = */ 12072
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetNewHouse,
		/* .__delta2 = */ 12088
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetNewHouse,
		/* .__delta2 = */ 12128
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetHTMLExportDirty,
		/* .__delta2 = */ 12144
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetHTMLExportDirty,
		/* .__delta2 = */ 12184
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::SetHasExportedHTMLBefore,
		/* .__delta2 = */ 12208
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FamilyImpl::GetHasExportedHTMLBefore,
		/* .__delta2 = */ 12248
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Family virtual table[37] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Family::~Family,
		/* .__delta2 = */ 8256
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

Family* Family::CreateInstance(int &desc) {
  FamilyImpl *pFVar1;
  
  pFVar1 = (FamilyImpl *)__builtin_new(0x34);
  pFVar1 = __10FamilyImpli(pFVar1,*desc);
  return &pFVar1->field0_0x0;
}

void Family::DestroyInstance(Family *pInstance) {
  if (pInstance != (Family *)0x0) {
    (*(code *)pInstance->__vtable->CountMembers)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->MyDoCommand,3);
  }
  return;
}

void Family::~Family(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Family__vtable *)_vt_6Family;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

FamilyImpl* FamilyImpl::FamilyImpl(Int number) {
	Family *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	
  (this->field0_0x0).__vtable = (Family__vtable *)_vt_10FamilyImpl;
  __8BString2(&this->fName);
  this->fNumber = number;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fMembers).start = (FamilyMember *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fMembers).end_of_storage = (FamilyMember *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fMembers).finish = (FamilyMember *)0x0;
                    /* end of inlined section */
  this->fHouseNumber = 0;
  this->fFunds = 0;
  this->fHouseValue = 0;
  this->fFriendCount = 0;
  this->fCreationOrder = -1;
  erase__8BString2UiUi(&this->fName,0,0xffffffff);
  *(undefined4 *)&this->fFriendCountDirty = 1;
  this->fFlags = 0;
  return this;
}

void FamilyImpl::~FamilyImpl(int __in_chrg) {
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *last;
	FamilyMember *first;
	FamilyMember *pointer;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  FamilyMember *pFVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (Family__vtable *)_vt_10FamilyImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  for (pFVar1 = (this->fMembers).start; pFVar1 != (this->fMembers).finish; pFVar1 = pFVar1 + 1) {
  }
  pFVar1 = (this->fMembers).start;
  if ((pFVar1 != (FamilyMember *)0x0) &&
     ((int)(this->fMembers).end_of_storage - (int)pFVar1 >> 2 != 0)) {
    free(pFVar1);
                    /* end of inlined section */
  }
  ___8BString2(&this->fName,2);
  ___6Family(&this->field0_0x0,__in_chrg);
  return;
}

bool FamilyImpl::TestMember(cXPerson *person) {
  cXObject__150_1187__vtable *pcVar1;
  Family__vtable *pFVar2;
  undefined uVar3;
  ObjSelector *this_00;
  int iVar4;
  
  pcVar1 = person->_vb1187->__vtable;
  this_00 = (ObjSelector *)
            (*(code *)pcVar1[1].SetLevel)
                      ((int)&person->_vb1187->_vb1121 + (int)*(short *)&pcVar1[1].GetTreeID);
  iVar4 = GetGUID__11ObjSelector(this_00);
  pFVar2 = (this->field0_0x0).__vtable;
  uVar3 = (*(code *)pFVar2->GetHouseNumber)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pFVar2->GetNumber,iVar4);
  return (bool)uVar3;
}

FamilyMember* FamilyImpl::GetMemberByGUID(SInt32 guid) {
	FamilyMember *i;
	FamilyMember *this;
	
  FamilyMember *pFVar1;
  int iVar2;
  FamilyMember *pFVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar1 = (this->fMembers).finish;
  pFVar3 = (this->fMembers).start;
                    /* end of inlined section */
  if (pFVar3 != pFVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Family.h */
    iVar2 = pFVar3->fGUID;
    while( true ) {
      if (iVar2 == guid) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
      if (pFVar3 == pFVar1) break;
      iVar2 = pFVar3->fGUID;
    }
  }
  return (FamilyMember *)0x0;
}

bool FamilyImpl::TestMember(SInt32 guid) {
	FamilyMember *i;
	FamilyMember *this;
	
  FamilyMember *pFVar1;
  int iVar2;
  FamilyMember *pFVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar1 = (this->fMembers).finish;
  pFVar3 = (this->fMembers).start;
                    /* end of inlined section */
  if (pFVar3 != pFVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Family.h */
    iVar2 = pFVar3->fGUID;
    while( true ) {
      pFVar3 = pFVar3 + 1;
      if (iVar2 == guid) {
        return true;
      }
      if (pFVar3 == pFVar1) break;
      iVar2 = pFVar3->fGUID;
    }
  }
  return false;
}

FamilyMember* FamilyImpl::GetIndexedMember(Int index) {
  FamilyMember *pFVar1;
  
  if (-1 < index) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pFVar1 = (this->fMembers).start;
                    /* end of inlined section */
    if (index < (int)(this->fMembers).finish - (int)pFVar1 >> 2) {
                    /* end of inlined section */
      return pFVar1 + index;
    }
  }
  return (FamilyMember *)0x0;
}

void FamilyImpl::GetName(StringBuffer2 *name) {
  short *str;
  
  str = c_str__C8BString2(&this->fName);
  copy__13StringBuffer2PCUs(name,str);
  return;
}

Int FamilyImpl::CountMembers() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fMembers).finish - (int)(this->fMembers).start >> 2;
}

Int FamilyImpl::GetFriendCount() {
  int iVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable->SetNeighborhoodVar)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetNeighborhoodVar,this);
  return iVar1;
}

Int FamilyImpl::GetNetWorth() {
  int iVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable->DoStream)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetNeighborHouseByIndex,this);
  return iVar1;
}

bool FamilyImpl::LoadFamily(iResFile *file, Int number) {
	SInt32 version;
	
  bool bVar1;
  undefined8 unaff_retaddr;
  int version;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (number < 0) {
    this->fNumber = -1;
    erase__8BString2UiUi(&this->fName,0,0xffffffff);
    bVar1 = false;
  }
  else {
    bVar1 = LoadByResID__10FamilyImplP8iResFileiPi(this,file,number,&version);
  }
  return bVar1;
}

void FamilyImpl::DoStream(ReconBuffer *rb, SInt32 version) {
  ReconInt__11ReconBufferPii(rb,&this->fHouseNumber,1);
  ReconInt__11ReconBufferPii(rb,&this->fCreationOrder,1);
  ReconInt__11ReconBufferPii(rb,&this->fFunds,1);
  ReconInt__11ReconBufferPii(rb,&this->fHouseValue,1);
  ReconInt__11ReconBufferPii(rb,&this->fFriendCount,1);
  ReconInt__11ReconBufferPii(rb,&this->fFlags,1);
  DoContainerStream__H2Zt6vector2Z12FamilyMemberZt23__malloc_alloc_template1i0Z12FamilyMember_RX01PX11P11ReconBufferi_v
            (&this->fMembers,(this->fMembers).start,rb,version);
  ReconString__11ReconBufferR8BString2(rb,&this->fName);
  return;
}

bool FamilyImpl::LoadByResID(iResFile *file, Int id, SInt32 *version) {
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *first;
	FamilyMember *last;
	FamilyMember *pointer;
	
  FamilyMember *pFVar1;
  int iVar2;
  FamilyMember *pFVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar1 = (this->fMembers).start;
  for (pFVar3 = pFVar1; pFVar3 != (this->fMembers).finish; pFVar3 = pFVar3 + 1) {
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fMembers).finish = pFVar1;
                    /* end of inlined section */
  iVar2 = ReconLoadObject__H1Z10FamilyImpl_PX01P8iResFileisPi_i
                    (this,file,0x46414d49,(ushort)id,version);
  if (iVar2 == 0) {
    this->fNumber = id;
  }
  return iVar2 == 0;
}

bool FamilyImpl::SaveFamily(iResFile *file, SInt32 houseVersion) {
  bool bVar1;
  int iVar2;
  
  if (this->fNumber == -1) {
    bVar1 = false;
  }
  else {
    iVar2 = ReconSaveObject__H1Z10FamilyImpl_PX01P8iResFileisi_i
                      (this,file,0x46414d49,*(ushort *)&this->fNumber,8);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

void FamilyImpl::SetName(StringBuffer2 *name) {
  short *s;
  
  s = c_str__C13StringBuffer2(name);
  assign__8BString2PCUs(&this->fName,s);
  return;
}

Boolean FamilyImpl::MyDoCommand(SInt16 command, SInt32 info) {
  return 0;
}

void FamilyImpl::AddMember(SInt32 guid) {
	FamilyMember *i;
	FamilyMember *this;
	SInt32 guid;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	
  FamilyMember *pFVar1;
  int iVar2;
  FamilyMember *pFVar3;
  undefined8 unaff_retaddr;
  FamilyMember local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar1 = (this->fMembers).finish;
  pFVar3 = (this->fMembers).start;
                    /* end of inlined section */
  if (pFVar3 == pFVar1) {
LAB_002625e4:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Family.h */
    pFVar1 = (this->fMembers).finish;
    if (pFVar1 == (this->fMembers).end_of_storage) {
      local_20[0].fGUID = guid;
      insert_aux__t6vector2Z12FamilyMemberZt23__malloc_alloc_template1i0P12FamilyMemberRC12FamilyMember
                (&this->fMembers,pFVar1,local_20);
    }
    else {
      pFVar1->fGUID = guid;
      (this->fMembers).finish = (this->fMembers).finish + 1;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Family.h */
    iVar2 = pFVar3->fGUID;
                    /* end of inlined section */
    while (pFVar3 = pFVar3 + 1, iVar2 != guid) {
      if (pFVar3 == pFVar1) goto LAB_002625e4;
      iVar2 = pFVar3->fGUID;
    }
  }
                    /* end of inlined section */
  return;
}

void FamilyImpl::RemoveMember(SInt32 guid) {
	FamilyMember *i;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *position;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *result;
	FamilyMember *result;
	FamilyMember *result;
	FamilyMember *first;
	ptrdiff_t n;
	
  FamilyMember *pFVar1;
  int *piVar2;
  int iVar3;
  FamilyMember *pFVar4;
  FamilyMember *pFVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar5 = (this->fMembers).start;
                    /* end of inlined section */
  if (pFVar5 == (this->fMembers).finish) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Family.h */
  iVar3 = pFVar5->fGUID;
                    /* end of inlined section */
  while (iVar3 != guid) {
                    /* end of inlined section */
    pFVar5 = pFVar5 + 1;
    if (pFVar5 == (this->fMembers).finish) {
      return;
    }
    iVar3 = pFVar5->fGUID;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar4 = pFVar5 + 1;
  pFVar1 = (this->fMembers).finish;
  if (pFVar4 != pFVar1) {
    iVar3 = (int)pFVar1 - (int)pFVar4 >> 2;
    if (iVar3 < 1) {
      pFVar5 = (this->fMembers).finish;
      goto LAB_00262690;
    }
    do {
      piVar2 = &pFVar4->fGUID;
      iVar3 = iVar3 + -1;
      pFVar4 = pFVar4 + 1;
      pFVar5->fGUID = *piVar2;
      pFVar5 = pFVar5 + 1;
    } while (0 < iVar3);
  }
  pFVar5 = (this->fMembers).finish;
LAB_00262690:
                    /* end of inlined section */
  (this->fMembers).finish = pFVar5 + -1;
  return;
}

void FamilyMember::DoStream(ReconBuffer *rb, SInt32 version) {
  Recon32__11ReconBufferPii(rb,&this->fGUID,1);
  return;
}

void FamilyImpl::GetExportName(StringBuffer2 *name) {
  Family__vtable *pFVar1;
  
  pFVar1 = (this->field0_0x0).__vtable;
  (*(code *)pFVar1->GetNetWorth)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pFVar1->SetHouseValue);
  append__13StringBuffer2PCwi(name,(int *)&DAT_003bd8e0,-1);
  appendNum__13StringBuffer2i(name,this->fNumber);
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

FamilyMember* FamilyMember * uninitialized_copy<FamilyMember *, FamilyMember *>(FamilyMember *first, FamilyMember *last, FamilyMember *result) {
	FamilyMember *p;
	FamilyMember &value;
	void *pAddress;
	
  int *piVar1;
  FamilyMember *pFVar2;
  
  pFVar2 = result;
  if (first != last) {
    do {
      piVar1 = &first->fGUID;
      first = first + 1;
      result = pFVar2 + 1;
      pFVar2->fGUID = *piVar1;
      pFVar2 = result;
    } while (first != last);
  }
  return result;
}

FamilyMember* FamilyMember * copy_backward<FamilyMember *, FamilyMember *>(FamilyMember *first, FamilyMember *last, FamilyMember *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      result->fGUID = last->fGUID;
    } while (first != last);
  }
  return result;
}

void void fill<FamilyMember *, FamilyMember>(FamilyMember *first, FamilyMember *last, FamilyMember &value) {
  int iVar1;
  
  if (first != last) {
    iVar1 = value->fGUID;
    while( true ) {
      first->fGUID = iVar1;
      first = first + 1;
      if (first == last) break;
      iVar1 = value->fGUID;
    }
  }
  return;
}

FamilyMember* FamilyMember * uninitialized_fill_n<FamilyMember *, unsigned int, FamilyMember>(FamilyMember *first, unsigned int n, FamilyMember &x) {
	FamilyMember *p;
	FamilyMember &value;
	void *pAddress;
	
  FamilyMember *pFVar1;
  int iVar2;
  
  iVar2 = n - 1;
  pFVar1 = first;
  if (n != 0) {
    do {
      first = pFVar1 + 1;
      iVar2 = iVar2 + -1;
      pFVar1->fGUID = x->fGUID;
      pFVar1 = first;
    } while (iVar2 != -1);
  }
  return first;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

void vector<FamilyMember, __malloc_alloc_template<0> >::insert(FamilyMember *position, unsigned int n, FamilyMember &x) {
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	void *result;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *first;
	FamilyMember *pointer;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	
  uint size;
  FamilyMember *pFVar1;
  uint *puVar2;
  FamilyMember *pFVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uint old_size;
  uint local_6c [3];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_6c[0] = n;
  if (n != 0) {
    pFVar1 = this->finish;
    if ((uint)((int)this->end_of_storage - (int)pFVar1 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = (int)pFVar1 - (int)this->start >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      puVar2 = local_6c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (n <= old_size) {
        puVar2 = &old_size;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      size = (old_size + *puVar2) * 4;
      if (old_size + *puVar2 == 0) {
        pFVar1 = (FamilyMember *)0x0;
        size = 0;
      }
      else {
        pFVar1 = (FamilyMember *)malloc(size);
        if (pFVar1 == (FamilyMember *)0x0) {
          pFVar1 = (FamilyMember *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
                (this->start,position,pFVar1);
      uninitialized_fill_n__H3ZP12FamilyMemberZUiZ12FamilyMember_X01X11RCX21_X01
                ((FamilyMember *)((int)pFVar1 + ((int)position - (int)this->start)),local_6c[0],x);
      uninitialized_copy__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
                (position,this->finish,
                 pFVar1 + ((int)position - (int)this->start >> 2) + local_6c[0]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      pFVar3 = this->start;
      if (pFVar3 == this->finish) {
        pFVar3 = this->start;
      }
      else {
        do {
          pFVar3 = pFVar3 + 1;
        } while (pFVar3 != this->finish);
                    /* end of inlined section */
        pFVar3 = this->start;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((pFVar3 != (FamilyMember *)0x0) && ((int)this->end_of_storage - (int)pFVar3 >> 2 != 0)) {
        free(pFVar3);
                    /* end of inlined section */
      }
      this->start = pFVar1;
      this->end_of_storage = (FamilyMember *)((int)&pFVar1->fGUID + size);
      this->finish = pFVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)((int)pFVar1 - (int)position >> 2)) {
        uninitialized_copy__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
                  (pFVar1 + -n,pFVar1,pFVar1);
        copy_backward__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZP12FamilyMemberZ12FamilyMember_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
                  (position,pFVar1,position + n);
        fill__H2ZP12FamilyMemberZ12FamilyMember_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZP12FamilyMemberZUiZ12FamilyMember_X01X11RCX21_X01
                  (this->finish,local_6c[0] - ((int)this->finish - (int)position >> 2),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

void void DoContainerStream<vector<FamilyMember, __malloc_alloc_template<0> >, FamilyMember>(vector<FamilyMember,__malloc_alloc_template<0> > &cont, FamilyMember *dummy, ReconBuffer *r, SInt32 version) {
	SInt32 size;
	FamilyMember *i;
	int sizeDiff;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *last;
	FamilyMember *first;
	FamilyMember *pointer;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  FamilyMember *pFVar2;
  int iVar3;
  FamilyMember *pFVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int size;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  size = (int)cont->finish - (int)cont->start >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar4 = cont->finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar3 = (int)pFVar4 - (int)cont->start >> 2;
                    /* end of inlined section */
  iVar1 = iVar3 - size;
  if (iVar1 < 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    local_5c = 0;
                    /* end of inlined section */
    insert__t6vector2Z12FamilyMemberZt23__malloc_alloc_template1i0P12FamilyMemberUiRC12FamilyMember
              (cont,pFVar4,size - iVar3,(FamilyMember *)((uint)&size | 4));
    pFVar4 = cont->start;
  }
  else {
    if (0 < iVar1) {
                    /* end of inlined section */
      pFVar2 = pFVar4 + -iVar1;
      iVar1 = (int)pFVar4 - (int)pFVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      for (; pFVar2 != pFVar4; pFVar2 = pFVar2 + 1) {
      }
      cont->finish = (FamilyMember *)((int)cont->finish - iVar1);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pFVar4 = cont->start;
  }
                    /* end of inlined section */
  if (pFVar4 != cont->finish) {
    do {
      pFVar2 = pFVar4 + 1;
      DoStream__12FamilyMemberP11ReconBufferi(pFVar4,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      pFVar4 = pFVar2;
    } while (pFVar2 != cont->finish);
  }
  return;
}

ErrType int ReconLoadObject<FamilyImpl>(FamilyImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<FamilyImpl> recon;
	ReconBuilder rb;
	FamilyImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_FamilyImpl_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10FamilyImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconSaveObject<FamilyImpl>(FamilyImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<FamilyImpl> recon;
	ReconBuilder rb;
	FamilyImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_FamilyImpl_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10FamilyImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

void vector<FamilyMember, __malloc_alloc_template<0> >::insert_aux(FamilyMember *position, FamilyMember &x) {
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	void *result;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *p;
	FamilyMember &value;
	void *pAddress;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	FamilyMember *first;
	FamilyMember *pointer;
	vector<FamilyMember,__malloc_alloc_template<0> > *this;
	
  uint size;
  FamilyMember *pFVar1;
  int iVar2;
  FamilyMember *pFVar3;
  int iVar4;
  
  pFVar1 = this->finish;
  if (pFVar1 == this->end_of_storage) {
    iVar4 = (int)pFVar1 - (int)this->start >> 2;
    iVar2 = 1;
    if (iVar4 != 0) {
      iVar2 = iVar4 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar2 << 2;
    if (iVar2 == 0) {
      pFVar1 = (FamilyMember *)0x0;
      size = 0;
    }
    else {
      pFVar1 = (FamilyMember *)malloc(size);
      if (pFVar1 == (FamilyMember *)0x0) {
        pFVar1 = (FamilyMember *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
              (this->start,position,pFVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(int *)((int)pFVar1 + ((int)position - (int)this->start)) = x->fGUID;
                    /* end of inlined section */
    uninitialized_copy__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
              (position,this->finish,
               (FamilyMember *)((int)pFVar1 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pFVar3 = this->start;
    if (pFVar3 == this->finish) {
      pFVar3 = this->start;
    }
    else {
      do {
        pFVar3 = pFVar3 + 1;
      } while (pFVar3 != this->finish);
                    /* end of inlined section */
      pFVar3 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pFVar3 != (FamilyMember *)0x0) && ((int)this->end_of_storage - (int)pFVar3 >> 2 != 0)) {
      free(pFVar3);
                    /* end of inlined section */
    }
    pFVar3 = pFVar1 + iVar4;
    this->start = pFVar1;
    this->end_of_storage = (FamilyMember *)((int)&pFVar1->fGUID + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pFVar1->fGUID = pFVar1[-1].fGUID;
                    /* end of inlined section */
    iVar2 = x->fGUID;
    copy_backward__H2ZP12FamilyMemberZP12FamilyMember_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    position->fGUID = iVar2;
    pFVar3 = this->finish;
  }
  this->finish = pFVar3 + 1;
  return;
}

Family* Family::Family() {
  this->__vtable = (Family__vtable *)_vt_6Family;
  return this;
}

Int FamilyImpl::GetNumber() {
  return this->fNumber;
}

Int FamilyImpl::GetHouseNumber() {
  return this->fHouseNumber;
}

void FamilyImpl::SetHouseNumber(Int number) {
  this->fHouseNumber = number;
  return;
}

Int FamilyImpl::GetCreationOrder() {
  return this->fCreationOrder;
}

void FamilyImpl::SetCreationOrder(Int newOrder) {
  this->fCreationOrder = newOrder;
  return;
}

Int FamilyImpl::GetFunds() {
  return this->fFunds;
}

void FamilyImpl::SetFunds(Int funds) {
  this->fFunds = funds;
  return;
}

Int FamilyImpl::GetHouseValue() {
  return this->fHouseValue;
}

void FamilyImpl::SetHouseValue(Int houseValue) {
  this->fHouseValue = houseValue;
  return;
}

void FamilyImpl::SetFriendCount(Int friendCount) {
  this->fFriendCount = friendCount;
  *(undefined4 *)&this->fFriendCountDirty = 0;
  return;
}

void FamilyImpl::SetHasPhone(bool hasPhone) {
  uint uVar1;
  
  uVar1 = this->fFlags & 0xfffffffe;
  this->fFlags = uVar1;
  if (hasPhone) {
    this->fFlags = uVar1 | 1;
  }
  return;
}

bool FamilyImpl::GetHasPhone() {
  return (bool)((byte)this->fFlags & 1);
}

void FamilyImpl::SetHasBaby(bool hasBaby) {
  uint uVar1;
  
  uVar1 = this->fFlags & 0xfffffffd;
  this->fFlags = uVar1;
  if (hasBaby) {
    this->fFlags = uVar1 | 2;
  }
  return;
}

bool FamilyImpl::GetHasBaby() {
  return (bool)((byte)(this->fFlags >> 1) & 1);
}

void FamilyImpl::SetNewHouse(bool newHouse) {
  uint uVar1;
  
  uVar1 = this->fFlags & 0xfffffffb;
  this->fFlags = uVar1;
  if (newHouse) {
    this->fFlags = uVar1 | 4;
  }
  return;
}

bool FamilyImpl::GetNewHouse() {
  return (bool)((byte)(this->fFlags >> 2) & 1);
}

void FamilyImpl::SetHTMLExportDirty(bool dirty) {
  uint uVar1;
  
  uVar1 = this->fFlags & 0xfffffff7;
  this->fFlags = uVar1;
  if (!dirty) {
    this->fFlags = uVar1 | 8;
  }
  return;
}

bool FamilyImpl::GetHTMLExportDirty() {
  return (bool)(((byte)(this->fFlags >> 3) ^ 1) & 1);
}

void FamilyImpl::SetHasExportedHTMLBefore(bool has) {
  uint uVar1;
  
  uVar1 = this->fFlags & 0xffffffef;
  this->fFlags = uVar1;
  if (has) {
    this->fFlags = uVar1 | 0x10;
  }
  return;
}

bool FamilyImpl::GetHasExportedHTMLBefore() {
  return (bool)((byte)(this->fFlags >> 4) & 1);
}

void SimpleReconObject<FamilyImpl>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<FamilyImpl>::DoStream(ReconBuffer *r, SInt32 version) {
  Family__vtable *pFVar1;
  
  pFVar1 = (this->fObj->field0_0x0).__vtable;
  (*(code *)pFVar1->GetHouseValue)
            ((int)&(this->fObj->field0_0x0).__vtable + (int)*(short *)&pFVar1->SetFunds,r,version);
  return;
}

SInt32 SimpleReconObject<FamilyImpl>::GetType() {
  return this->fType;
}

// STATUS: NOT STARTED

#include "Slots.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1853;
	__vtbl_ptr_type *$vf983;
	
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

struct vector<SlotDescriptor,__malloc_alloc_template<0> > {
protected:
	SlotDescriptor *start;
	SlotDescriptor *finish;
	SlotDescriptor *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	SlotDescriptor* begin();
	SlotDescriptor* begin();
	SlotDescriptor* end();
	SlotDescriptor* end();
	reverse_iterator<SlotDescriptor *,SlotDescriptor,SlotDescriptor &,int> rbegin();
	reverse_iterator<const SlotDescriptor *,SlotDescriptor,const SlotDescriptor &,int> rbegin();
	reverse_iterator<SlotDescriptor *,SlotDescriptor,SlotDescriptor &,int> rend();
	reverse_iterator<const SlotDescriptor *,SlotDescriptor,const SlotDescriptor &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	SlotDescriptor& operator[]();
	SlotDescriptor& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<SlotDescriptor,__malloc_alloc_template<0> >*, int, void);
	vector<SlotDescriptor,__malloc_alloc_template<0> >& operator=();
	void reserve();
	SlotDescriptor& front();
	SlotDescriptor& front();
	SlotDescriptor& back();
	SlotDescriptor& back();
	void push_back();
	void swap();
	SlotDescriptor* insert();
	SlotDescriptor* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct SlotDescriptorList : vector<SlotDescriptor,__malloc_alloc_template<0> > {
	SlotDescriptorList& operator=();
	SlotDescriptorList();
	SlotDescriptorList();
	SlotDescriptorList(SlotDescriptorList*, int, void);
	Int CountSlots();
};

__vtbl_ptr_type RoutingSlot virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoutingSlot::~RoutingSlot,
		/* .__delta2 = */ -24192
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SpriteSlot virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SpriteSlot::~SpriteSlot,
		/* .__delta2 = */ -29328
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectSlot virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectSlot::~ObjectSlot,
		/* .__delta2 = */ -24448
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Slot virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Slot::~Slot,
		/* .__delta2 = */ -24496
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

Slot* Slot::Slot() {
  this->nameIndex = -1;
  this->__vtable = (Slot__vtable *)_vt_4Slot;
  this->xoffset = 0.0;
  this->yoffset = 0.0;
  this->altOffset = 0.0;
  return this;
}

Slot* Slot::Slot(SlotDescriptor *sd) {
  float fVar1;
  
  this->__vtable = (Slot__vtable *)_vt_4Slot;
  this->xoffset = sd->xoffset;
  this->yoffset = sd->yoffset;
  fVar1 = sd->altOffset;
  this->nameIndex = -1;
  this->altOffset = fVar1;
  return this;
}

RoutingSlot* RoutingSlot::RoutingSlot() {
  __4Slot(&this->field0_0x0);
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_11RoutingSlot;
  this->snapTargetSlot = -1;
  this->gradient = 0.1875;
  this->facing = -2;
  this->resolution = 0x10;
  this->rsFlags = 0;
  this->multipliers[0] = 0;
  this->multipliers[1] = 0;
  this->multipliers[2] = 0;
  this->minProximity = 0x10;
  this->maxProximity = 0x10;
  this->optimalProximity = 0x10;
  return this;
}

RoutingSlot* RoutingSlot::RoutingSlot(SlotDescriptor *sd) {
  __4SlotPC14SlotDescriptor(&this->field0_0x0,sd);
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_11RoutingSlot;
  this->rsFlags = sd->rsFlags;
  this->multipliers[0] = sd->multipliers[0];
  this->multipliers[1] = sd->multipliers[1];
  this->multipliers[2] = sd->multipliers[2];
  this->snapTargetSlot = sd->snapTargetSlot;
  this->minProximity = sd->minProximity;
  this->maxProximity = sd->maxProximity;
  this->optimalProximity = sd->optimalProximity;
  this->gradient = sd->gradient;
  this->facing = sd->facing;
  this->resolution = sd->resolution;
  return this;
}

void RoutingSlot::SetIsOnTopOfObject() {
  this->rsFlags = this->rsFlags & 0xffffff00;
  return;
}

void RoutingSlot::AllowDirection(Int dir) {
  if ((uint)dir < 8) {
    this->rsFlags = this->rsFlags | 1 << (dir & 0x1fU);
  }
  return;
}

void RoutingSlot::AllowAnyRotation() {
  this->rsFlags = this->rsFlags | 0x100;
  return;
}

void RoutingSlot::AllowAnyFacing() {
  this->facing = -3;
  return;
}

void RoutingSlot::FaceTowardsObject() {
  this->facing = -2;
  return;
}

void RoutingSlot::FaceAwayFromObject() {
  this->facing = -1;
  return;
}

void RoutingSlot::SetFacingDirection(Int dir) {
  if ((uint)dir < 8) {
    this->facing = dir;
  }
  return;
}

void RoutingSlot::SetDistances(Int min, Int max, Int optimal) {
  this->optimalProximity = optimal;
  this->minProximity = min;
  this->maxProximity = max;
  return;
}

void RoutingSlot::SetTileDistances(float min, float max, float optimal) {
  this->optimalProximity = (int)(optimal * 16.0);
  this->minProximity = (int)(min * 16.0);
  this->maxProximity = (int)(max * 16.0);
  return;
}

void RoutingSlot::SetMultiplier(VerticalPosition v, Int mult) {
  this->multipliers[v] = mult;
  return;
}

ObjectSlot* ObjectSlot::ObjectSlot() {
  __4Slot(&this->field0_0x0);
  this->maximumSize = 0x32;
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
  this->objectID = 0;
  this->flags = 0;
  this->height = kHeightUndefined;
  return this;
}

ObjectSlot* ObjectSlot::ObjectSlot(SlotDescriptor *sd) {
  __4SlotPC14SlotDescriptor(&this->field0_0x0,sd);
  this->objectID = 0;
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
  this->maximumSize = sd->maximumSize;
  this->flags = sd->flags;
  SetHeight__10ObjectSlot9StdHeight(this,sd->height);
  return this;
}

void ObjectSlot::SetHeight(StdHeight h) {
  this->height = h;
  if (h < (kHeightGround|kHeightEndTable)) {
                    /* WARNING: Could not recover jumptable at 0x00208c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003b81b0)[h])();
    return;
  }
  return;
}

SpriteSlot* SpriteSlot::SpriteSlot(cXObject *pOb) {
  __4Slot(&this->field0_0x0);
  this->m_pObj = (cXObject__15_2008 *)pOb;
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_10SpriteSlot;
  this->notSignSpriteID = -1;
  this->id = 0;
  (this->field3_0x1c).selector = (ObjSelector *)0x0;
  this->frame = 0;
  this->ticksLeft = 0;
  this->priority = 0;
  *(undefined4 *)&this->showWhenInactive = 0;
  this->balloonSpriteID = -1;
  return this;
}

SpriteSlot* SpriteSlot::SpriteSlot(SlotDescriptor *sd, cXObject *pOb) {
  __4SlotPC14SlotDescriptor(&this->field0_0x0,sd);
  this->m_pObj = (cXObject__15_2008 *)pOb;
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_10SpriteSlot;
  this->notSignSpriteID = -1;
  this->id = 0;
  (this->field3_0x1c).selector = (ObjSelector *)0x0;
  this->frame = 0;
  this->ticksLeft = 0;
  this->priority = 0;
  *(undefined4 *)&this->showWhenInactive = 0;
  this->balloonSpriteID = -1;
  return this;
}

void SpriteSlot::~SpriteSlot(int __in_chrg) {
	Slot *this;
	void *pAddress;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void SpriteSlot::SetSprite(u32 renderer, Int id, Int frameCount, bool reverse) {
  this->id = id;
  this->numFrames = frameCount;
  if (reverse) {
    this->frame = frameCount + -1;
    this->frameDelta = -1;
  }
  else {
    this->frame = 0;
    this->frameDelta = 1;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable->IsObjectInUseByPlayer)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->IsTwoPlayer + -0x24,this);
  this->notSignSpriteID = -1;
  this->balloonSpriteID = -1;
  return;
}

void SpriteSlot::SetSprite(ObjSelector *sel) {
  (this->field3_0x1c).selector = sel;
  this->id = -1;
  this->frameDelta = 1;
  this->numFrames = 1;
  this->frame = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable->IsObjectInUseByPlayer)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->IsTwoPlayer + -0x24,this);
  this->notSignSpriteID = -1;
  this->balloonSpriteID = -1;
  return;
}

bool SpriteSlot::Tick() {
  int iVar1;
  
  if (0 < this->ticksLeft) {
    this->ticksLeft = this->ticksLeft + -1;
  }
  if (this->ticksLeft == 0) {
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  iVar1 = this->frameTicks + 1;
  this->frameTicks = iVar1;
  if (iVar1 != 0xc) {
    return false;
  }
  iVar1 = this->frame + this->frameDelta;
  this->frame = iVar1;
  if (iVar1 < 0) {
    do {
      iVar1 = iVar1 + this->numFrames;
    } while (iVar1 < 0);
    this->frame = iVar1;
  }
  if (this->numFrames == 0) {
    trap(7);
  }
  this->frameTicks = 0;
  this->frame = this->frame % this->numFrames;
  return true;
}

void SpriteSlot::ActivateForTicks(Int tickDuration) {
  this->ticksLeft = tickDuration;
  this->frameTicks = 0;
  return;
}

void SpriteSlot::ActivateForLoops(Int loopDuration) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  ActivateForTicks__10SpriteSloti(this,this->numFrames * 0xc * loopDuration);
  return;
}

SlotDescriptor* SlotDescriptor::SlotDescriptor() {
	RoutingSlot temp;
	
  RoutingSlot temp;
  
  this->xoffset = 0.0;
  this->yoffset = 0.0;
  this->altOffset = 0.0;
  this->type = 0xffff;
  __11RoutingSlot(&temp);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  this->multipliers[0] = temp.multipliers[0];
  this->multipliers[1] = temp.multipliers[1];
  this->multipliers[2] = temp.multipliers[2];
  this->rsFlags = temp.rsFlags;
  this->snapTargetSlot = temp.snapTargetSlot;
  this->minProximity = temp.minProximity;
  this->maxProximity = temp.maxProximity;
  this->optimalProximity = temp.optimalProximity;
  this->gradient = temp.gradient;
  this->facing = temp.facing;
  this->resolution = temp.resolution;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  this->maximumSize = 0;
  this->flags = 0;
  this->height = 0;
  return this;
}

void SlotDescriptor::DoStream(ReconBuffer *r, SInt32 version) {
	SInt16 temp;
	SInt16 dummyID;
	ReconBuffer *this;
	
  uint uVar1;
  Mode__6_4959 MVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  ushort temp;
  ushort dummyID;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (version < 3) {
    ReconFloat__11ReconBufferPfi(r,&this->xoffset,1);
    ReconFloat__11ReconBufferPfi(r,&this->yoffset,1);
    if (version < 1) {
      temp = (ushort)(int)this->altOffset;
      Recon16__11ReconBufferPsi(r,&temp,1);
      this->altOffset = (float)(int)(short)temp;
    }
    else {
      ReconFloat__11ReconBufferPfi(r,&this->altOffset,1);
    }
    Recon16__11ReconBufferPsi(r,&this->type,1);
    if (version < 2) {
      MVar2 = r->fMode;
    }
    else {
      dummyID = 0;
      Recon16__11ReconBufferPsi(r,(ushort *)((uint)&temp | 2),1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
      MVar2 = r->fMode;
    }
                    /* end of inlined section */
    if (MVar2 == kReading) {
      this->multipliers[0] = 0;
      this->multipliers[1] = 0;
      this->multipliers[2] = 0;
      this->rsFlags = 0;
    }
  }
  else {
    Recon16__11ReconBufferPsi(r,&this->type,1);
    ReconFloat__11ReconBufferPfi(r,&this->xoffset,1);
    ReconFloat__11ReconBufferPfi(r,&this->yoffset,1);
    ReconFloat__11ReconBufferPfi(r,&this->altOffset,1);
    Recon32__11ReconBufferPii(r,this->multipliers,3);
    Recon32__11ReconBufferPii(r,&this->rsFlags,1);
    if (3 < version) {
      Recon32__11ReconBufferPii(r,&this->snapTargetSlot,1);
    }
    if (4 < version) {
      Recon32__11ReconBufferPii(r,&this->minProximity,1);
      Recon32__11ReconBufferPii(r,&this->maxProximity,1);
      Recon32__11ReconBufferPii(r,&this->optimalProximity,1);
      Recon32__11ReconBufferPii(r,&this->maximumSize,1);
      Recon32__11ReconBufferPii(r,&this->flags,1);
    }
    if (6 < version) {
      ReconFloat__11ReconBufferPfi(r,&this->gradient,1);
    }
  }
  if (7 < version) {
    Recon32__11ReconBufferPii(r,&this->height,1);
  }
  if (version < 9) {
    uVar1 = this->rsFlags;
    uVar3 = 0xfffffdff;
    if ((uVar1 & 0x200) == 0) {
      uVar3 = 0xfffffbff;
      if ((uVar1 & 0x400) == 0) goto LAB_0020926c;
      iVar4 = -1;
    }
    else {
      iVar4 = -3;
    }
    this->facing = iVar4;
    this->rsFlags = uVar1 & uVar3;
  }
  else {
    Recon32__11ReconBufferPii(r,&this->facing,1);
  }
LAB_0020926c:
  if (version < 10) {
    this->maxProximity = this->maxProximity << 4;
    this->gradient = this->gradient * 0.0625;
    this->minProximity = this->minProximity << 4;
    this->optimalProximity = this->optimalProximity << 4;
  }
  else {
    Recon32__11ReconBufferPii(r,&this->resolution,1);
  }
  return;
}

SlotLoader* SlotLoader::SlotLoader(iResFile *file, SInt16 stringsID) {
  this->fFile = (iResFile__6_5027 *)file;
  this->fStringsID = stringsID;
  this->fSlotNames = (StringSet *)0x0;
  return this;
}

bool SlotLoader::Load(SInt16 id, vector<ObjectSlot,__malloc_alloc_template<0> > *objectSlots, vector<RoutingSlot,__malloc_alloc_template<0> > *routingSlots) {
	SlotDescList *theSlots;
	iResFile *this;
	VECTOR<SlotDescList> *this;
	Int count;
	VECTOR<SlotDescriptor> *this;
	VECTOR<SlotDescriptor> *this;
	unsigned int n;
	VECTOR<SlotDescriptor> *this;
	ObjectSlot newSlot;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	RoutingSlot newSlot;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	
  ushort uVar1;
  ResFile *pRVar2;
  ObjectSlot *position;
  RoutingSlot *position_00;
  SlotDescList *pSVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  SlotDescriptor *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ObjectSlot local_110;
  RoutingSlot newSlot;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
  pRVar2 = this->fFile->fResData;
  pSVar3 = (pRVar2->SLOT).pData;
  iVar6 = 0;
  if (pSVar3 != (SlotDescList *)0x0) {
    iVar6 = pSVar3[-1].resID;
  }
                    /* end of inlined section */
  pSVar3 = FindRes__H1ZC12SlotDescList_PX01T0i_PX01
                     (pSVar3,(pRVar2->SLOT).pData + iVar6,(int)(short)id);
  if (pSVar3 != (SlotDescList *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pSVar7 = (pSVar3->field0_0x0).pData;
    iVar6 = 0;
    if (pSVar7 != (SlotDescriptor *)0x0) {
      iVar6 = pSVar7[-1].resolution;
    }
                    /* end of inlined section */
    iVar9 = 0;
    if (0 < iVar6) {
      do {
        pSVar7 = (pSVar3->field0_0x0).pData + iVar9;
                    /* end of inlined section */
        uVar1 = pSVar7->type;
        if (uVar1 == 0) {
          __10ObjectSlotPC14SlotDescriptor(&local_110,pSVar7);
          local_110.field0_0x0.nameIndex = iVar9 + 1;
          if (objectSlots != (vector_ObjectSlot___malloc_alloc_template_0___ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            position = objectSlots->finish;
            if (position == objectSlots->end_of_storage) {
              insert_aux__t6vector2Z10ObjectSlotZt23__malloc_alloc_template1i0P10ObjectSlotRC10ObjectSlot
                        (objectSlots,position,&local_110);
            }
            else {
              (position->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
              (position->field0_0x0).xoffset = local_110.field0_0x0.xoffset;
              (position->field0_0x0).yoffset = local_110.field0_0x0.yoffset;
              (position->field0_0x0).altOffset = local_110.field0_0x0.altOffset;
              (position->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
              (position->field0_0x0).nameIndex = local_110.field0_0x0.nameIndex;
              position->objectID = local_110.objectID;
              position->height = local_110.height;
              position->maximumSize = local_110.maximumSize;
              position->flags = local_110.flags;
              objectSlots->finish = objectSlots->finish + 1;
            }
          }
                    /* end of inlined section */
          local_110.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
        }
        else {
          iVar10 = iVar9 + 1;
          if ((uVar1 != 1) && (uVar1 == 3)) {
            __11RoutingSlotPC14SlotDescriptor(&newSlot,pSVar7);
            newSlot.field0_0x0.nameIndex = iVar10;
            if (routingSlots != (vector_RoutingSlot___malloc_alloc_template_0___ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
              position_00 = routingSlots->finish;
              piVar5 = position_00->multipliers;
              if (position_00 == routingSlots->end_of_storage) {
                insert_aux__t6vector2Z11RoutingSlotZt23__malloc_alloc_template1i0P11RoutingSlotRC11RoutingSlot
                          (routingSlots,position_00,&newSlot);
              }
              else {
                (position_00->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
                iVar8 = 2;
                piVar4 = newSlot.multipliers;
                (position_00->field0_0x0).xoffset = newSlot.field0_0x0.xoffset;
                (position_00->field0_0x0).yoffset = newSlot.field0_0x0.yoffset;
                (position_00->field0_0x0).altOffset = newSlot.field0_0x0.altOffset;
                (position_00->field0_0x0).__vtable = (Slot__vtable *)_vt_11RoutingSlot;
                (position_00->field0_0x0).nameIndex = iVar10;
                do {
                  iVar10 = *piVar4;
                  iVar8 = iVar8 + -1;
                  piVar4 = piVar4 + 1;
                  *piVar5 = iVar10;
                  piVar5 = piVar5 + 1;
                } while (iVar8 != -1);
                position_00->rsFlags = newSlot.rsFlags;
                position_00->snapTargetSlot = newSlot.snapTargetSlot;
                position_00->minProximity = newSlot.minProximity;
                position_00->maxProximity = newSlot.maxProximity;
                position_00->optimalProximity = newSlot.optimalProximity;
                position_00->gradient = newSlot.gradient;
                position_00->facing = newSlot.facing;
                position_00->resolution = newSlot.resolution;
                routingSlots->finish = routingSlots->finish + 1;
              }
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
            newSlot.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar6);
    }
  }
  return true;
}

void SlotLoader::GetSlotName(Slot *slot, BString &str) {
  return;
}

void SlotLoader::~SlotLoader(int __in_chrg) {
	void *pAddress;
	
  DestroyInstance__9StringSetP9StringSet(this->fSlotNames);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
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

SlotDescList* SlotDescList * FindRes<SlotDescList>(SlotDescList *begin, SlotDescList *end, int resID) {
	int iCmp;
	SlotDescList *middle;
	
  SlotDescList *pSVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pSVar1 = end;
    iVar3 = (int)pSVar1 - (int)begin;
    iVar2 = iVar3 >> 3;
    if (iVar2 < 1) {
      return (SlotDescList *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == end->resID) {
      return end;
    }
    if (0 < resID - end->resID) {
      begin = end + 1;
      end = pSVar1;
    }
  }
  pSVar1 = (SlotDescList *)0x0;
  if (begin->resID == resID) {
    pSVar1 = begin;
  }
  return pSVar1;
}

ObjectSlot* ObjectSlot * copy_backward<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result) {
  float *pfVar1;
  Slot__vtable **ppSVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  Slot__vtable *pSVar6;
  ulong *puVar7;
  ulong in_v1;
  ulong uVar8;
  ObjectSlot *pOVar9;
  ObjectSlot *pOVar10;
  ulong in_a3;
  ulong in_t0;
  ulong in_t1;
  
  pOVar10 = result;
  if (first != last) {
    do {
      result = pOVar10 + -1;
      pOVar9 = last + -1;
      pSVar6 = pOVar10[-1].field0_0x0.__vtable;
      puVar3 = (undefined *)((int)&last[-1].field0_0x0.yoffset + 3);
      uVar4 = (uint)puVar3 & 7;
      uVar5 = (uint)pOVar9 & 7;
      uVar8 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)pOVar9 - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)((int)&last[-1].field0_0x0.nameIndex + 3);
      uVar4 = (uint)puVar3 & 7;
      pfVar1 = &last[-1].field0_0x0.altOffset;
      uVar5 = (uint)pfVar1 & 7;
      in_a3 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)pfVar1 - uVar5) >> uVar5 * 8;
      uVar4 = (uint)&last[-1].field_0x17 & 7;
      ppSVar2 = &last[-1].field0_0x0.__vtable;
      uVar5 = (uint)ppSVar2 & 7;
      in_t0 = (*(long *)(&last[-1].field_0x17 + -uVar4) << (7 - uVar4) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)ppSVar2 - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)((int)&last[-1].maximumSize + 3);
      uVar4 = (uint)puVar3 & 7;
      uVar5 = (uint)&last[-1].height & 7;
      in_t1 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)&last[-1].height - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)((int)&pOVar10[-1].field0_0x0.yoffset + 3);
      uVar4 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
      uVar4 = (uint)result & 7;
      *(ulong *)((int)result - uVar4) =
           uVar8 << uVar4 * 8 |
           *(ulong *)((int)result - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar3 = (undefined *)((int)&pOVar10[-1].field0_0x0.nameIndex + 3);
      uVar4 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_a3 >> (7 - uVar4) * 8;
      pfVar1 = &pOVar10[-1].field0_0x0.altOffset;
      uVar4 = (uint)pfVar1 & 7;
      puVar7 = (ulong *)((int)pfVar1 - uVar4);
      *puVar7 = in_a3 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      uVar4 = (uint)&pOVar10[-1].field_0x17 & 7;
      puVar7 = (ulong *)(&pOVar10[-1].field_0x17 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t0 >> (7 - uVar4) * 8;
      ppSVar2 = &pOVar10[-1].field0_0x0.__vtable;
      uVar4 = (uint)ppSVar2 & 7;
      puVar7 = (ulong *)((int)ppSVar2 - uVar4);
      *puVar7 = in_t0 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar3 = (undefined *)((int)&pOVar10[-1].maximumSize + 3);
      uVar4 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t1 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pOVar10[-1].height & 7;
      puVar7 = (ulong *)((int)&pOVar10[-1].height - uVar4);
      *puVar7 = in_t1 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      in_v1 = (ulong)last[-1].flags;
      pOVar10[-1].flags = last[-1].flags;
      pOVar10[-1].field0_0x0.__vtable = pSVar6;
      last = pOVar9;
      pOVar10 = result;
    } while (first != pOVar9);
  }
  return result;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

ObjectSlot* ObjectSlot * uninitialized_copy<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result) {
  int iVar1;
  ObjectSlot *pOVar2;
  ObjectSlot *pOVar3;
  
  pOVar3 = first;
  pOVar2 = result;
  if (first != last) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pOVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
                    /* end of inlined section */
      first = first + 1;
      result = result + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pOVar2->field0_0x0).xoffset = (pOVar3->field0_0x0).xoffset;
      (pOVar2->field0_0x0).yoffset = (pOVar3->field0_0x0).yoffset;
      (pOVar2->field0_0x0).altOffset = (pOVar3->field0_0x0).altOffset;
      iVar1 = (pOVar3->field0_0x0).nameIndex;
                    /* end of inlined section */
      (pOVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pOVar2->field0_0x0).nameIndex = iVar1;
                    /* end of inlined section */
      pOVar2->objectID = pOVar3->objectID;
      pOVar2->height = pOVar3->height;
      pOVar2->maximumSize = pOVar3->maximumSize;
      pOVar2->flags = pOVar3->flags;
      pOVar3 = pOVar3 + 1;
      pOVar2 = pOVar2 + 1;
    } while (first != last);
  }
  return result;
}

void vector<ObjectSlot, __malloc_alloc_template<0> >::insert_aux(ObjectSlot *position, ObjectSlot &x) {
	ObjectSlot x_copy;
	ObjectSlot &value;
	ObjectSlot &_ctor_arg;
	Slot &_ctor_arg;
	ObjectSlot &_ctor_arg;
	Slot &_ctor_arg;
	unsigned int old_size;
	unsigned int len;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	ObjectSlot *p;
	ObjectSlot &value;
	void *pAddress;
	ObjectSlot &_ctor_arg;
	Slot &_ctor_arg;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	ObjectSlot *first;
	ObjectSlot *pointer;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	
  Slot__vtable **ppSVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ObjectSlot *pOVar10;
  Slot__vtable *pSVar11;
  ObjectSlot *pOVar12;
  float *pfVar13;
  ObjectSlot *pOVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  ObjectSlot x_copy;
  
  pOVar10 = this->finish;
  if (pOVar10 == this->end_of_storage) {
    pOVar12 = this->start;
    iVar15 = ((int)pOVar10 - (int)pOVar12) * 0x38e38e39 >> 2;
    iVar16 = 1;
    if (iVar15 != 0) {
      iVar16 = iVar15 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar16 == 0) {
      pOVar10 = (ObjectSlot *)0x0;
    }
    else {
      pOVar10 = (ObjectSlot *)malloc(iVar16 * 0x24);
      if (pOVar10 == (ObjectSlot *)0x0) {
        pOVar10 = (ObjectSlot *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar16 * 0x24);
      }
      pOVar12 = this->start;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP10ObjectSlotZP10ObjectSlot_X01X01X11_X11(pOVar12,position,pOVar10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pfVar13 = (float *)((int)pOVar10 + ((int)position - (int)this->start));
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    pfVar13[4] = (float)_vt_4Slot;
    *pfVar13 = (x->field0_0x0).xoffset;
    pfVar13[1] = (x->field0_0x0).yoffset;
    pfVar13[2] = (x->field0_0x0).altOffset;
    fVar17 = (float)(x->field0_0x0).nameIndex;
    pfVar13[4] = (float)_vt_10ObjectSlot;
    pfVar13[3] = fVar17;
    *(ushort *)(pfVar13 + 5) = x->objectID;
    pfVar13[6] = (float)x->height;
    pfVar13[7] = (float)x->maximumSize;
    pfVar13[8] = (float)x->flags;
                    /* end of inlined section */
    uninitialized_copy__H2ZP10ObjectSlotZP10ObjectSlot_X01X01X11_X11
              (position,this->finish,
               (ObjectSlot *)((int)pOVar10 + (int)position + (0x24 - (int)this->start)));
    pOVar12 = this->finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pOVar14 = this->start;
    if (pOVar14 == pOVar12) {
      pOVar12 = this->start;
    }
    else {
      pSVar11 = (pOVar14->field0_0x0).__vtable;
      while( true ) {
        (*(code *)pSVar11[1].Slot)
                  ((int)&(pOVar14->field0_0x0).xoffset + (int)*(short *)(pSVar11 + 1),2);
        if (pOVar14 + 1 == pOVar12) break;
        pSVar11 = pOVar14[1].field0_0x0.__vtable;
        pOVar14 = pOVar14 + 1;
      }
                    /* end of inlined section */
      pOVar12 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pOVar12 != (ObjectSlot *)0x0) &&
       (((int)this->end_of_storage - (int)pOVar12) * 0x38e38e39 >> 2 != 0)) {
      free(pOVar12);
    }
    this->start = pOVar10;
    this->finish = pOVar10 + iVar15 + 1;
    this->end_of_storage = pOVar10 + iVar16;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    fVar17 = pOVar10[-1].field0_0x0.xoffset;
    (pOVar10->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
    (pOVar10->field0_0x0).xoffset = fVar17;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    (pOVar10->field0_0x0).yoffset = pOVar10[-1].field0_0x0.yoffset;
    (pOVar10->field0_0x0).altOffset = pOVar10[-1].field0_0x0.altOffset;
    iVar16 = pOVar10[-1].field0_0x0.nameIndex;
    (pOVar10->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
    (pOVar10->field0_0x0).nameIndex = iVar16;
    pOVar10->objectID = pOVar10[-1].objectID;
    pOVar10->height = pOVar10[-1].height;
    pOVar10->maximumSize = pOVar10[-1].maximumSize;
    pOVar10->flags = pOVar10[-1].flags;
    uVar3 = x->objectID;
    uVar7 = *(ulong *)&x->field0_0x0;
    uVar8 = *(ulong *)&(x->field0_0x0).altOffset;
    uVar9 = *(ulong *)&x->height;
    iVar16 = x->flags;
                    /* end of inlined section */
    copy_backward__H2ZP10ObjectSlotZP10ObjectSlot_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    pSVar11 = (position->field0_0x0).__vtable;
    uVar6 = CONCAT26(x_copy._22_2_,CONCAT24(uVar3,0x3b8208));
    puVar2 = (undefined *)((int)&(position->field0_0x0).yoffset + 3);
    uVar4 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
    uVar4 = (uint)position & 7;
    *(ulong *)((int)position - uVar4) =
         uVar7 << uVar4 * 8 |
         *(ulong *)((int)position - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar2 = (undefined *)((int)&(position->field0_0x0).nameIndex + 3);
    uVar4 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
    pfVar13 = &(position->field0_0x0).altOffset;
    uVar4 = (uint)pfVar13 & 7;
    puVar5 = (ulong *)((int)pfVar13 - uVar4);
    *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = (uint)&position->field_0x17 & 7;
    puVar5 = (ulong *)(&position->field_0x17 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
    ppSVar1 = &(position->field0_0x0).__vtable;
    uVar4 = (uint)ppSVar1 & 7;
    puVar5 = (ulong *)((int)ppSVar1 - uVar4);
    *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar2 = (undefined *)((int)&position->maximumSize + 3);
    uVar4 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
    uVar4 = (uint)&position->height & 7;
    puVar5 = (ulong *)((int)&position->height - uVar4);
    *puVar5 = uVar9 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    position->flags = iVar16;
    (position->field0_0x0).__vtable = pSVar11;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
    this->finish = this->finish + 1;
  }
  return;
}

RoutingSlot* RoutingSlot * copy_backward<RoutingSlot *, RoutingSlot *>(RoutingSlot *first, RoutingSlot *last, RoutingSlot *result) {
  float *pfVar1;
  undefined *puVar2;
  Slot__vtable **ppSVar3;
  uint uVar4;
  uint uVar5;
  Slot__vtable *pSVar6;
  ulong *puVar7;
  ulong in_v1;
  ulong uVar8;
  RoutingSlot *pRVar9;
  RoutingSlot *pRVar10;
  ulong in_a3;
  ulong uVar11;
  ulong in_t0;
  ulong uVar12;
  ulong in_t1;
  ulong uVar13;
  
  pRVar10 = result;
  if (first != last) {
    do {
      result = pRVar10 + -1;
      pRVar9 = last + -1;
      pSVar6 = pRVar10[-1].field0_0x0.__vtable;
      puVar2 = (undefined *)((int)&last[-1].field0_0x0.yoffset + 3);
      uVar4 = (uint)puVar2 & 7;
      uVar5 = (uint)pRVar9 & 7;
      uVar8 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)pRVar9 - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)&last[-1].field0_0x0.nameIndex + 3);
      uVar4 = (uint)puVar2 & 7;
      pfVar1 = &last[-1].field0_0x0.altOffset;
      uVar5 = (uint)pfVar1 & 7;
      uVar11 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
               in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)((int)pfVar1 - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)last[-1].multipliers + 3);
      uVar4 = (uint)puVar2 & 7;
      ppSVar3 = &last[-1].field0_0x0.__vtable;
      uVar5 = (uint)ppSVar3 & 7;
      uVar12 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
               in_t0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)((int)ppSVar3 - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)last[-1].multipliers + 0xb);
      uVar4 = (uint)puVar2 & 7;
      uVar5 = (uint)(last[-1].multipliers + 1) & 7;
      uVar13 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
               in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)((int)(last[-1].multipliers + 1) - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)&pRVar10[-1].field0_0x0.yoffset + 3);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
      uVar4 = (uint)result & 7;
      *(ulong *)((int)result - uVar4) =
           uVar8 << uVar4 * 8 |
           *(ulong *)((int)result - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar2 = (undefined *)((int)&pRVar10[-1].field0_0x0.nameIndex + 3);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
      pfVar1 = &pRVar10[-1].field0_0x0.altOffset;
      uVar4 = (uint)pfVar1 & 7;
      puVar7 = (ulong *)((int)pfVar1 - uVar4);
      *puVar7 = uVar11 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar2 = (undefined *)((int)pRVar10[-1].multipliers + 3);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar12 >> (7 - uVar4) * 8;
      ppSVar3 = &pRVar10[-1].field0_0x0.__vtable;
      uVar4 = (uint)ppSVar3 & 7;
      puVar7 = (ulong *)((int)ppSVar3 - uVar4);
      *puVar7 = uVar12 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar2 = (undefined *)((int)pRVar10[-1].multipliers + 0xb);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
      uVar4 = (uint)(pRVar10[-1].multipliers + 1) & 7;
      puVar7 = (ulong *)((int)(pRVar10[-1].multipliers + 1) - uVar4);
      *puVar7 = uVar13 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar2 = (undefined *)((int)&last[-1].snapTargetSlot + 3);
      uVar4 = (uint)puVar2 & 7;
      uVar5 = (uint)&last[-1].rsFlags & 7;
      in_v1 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)&last[-1].rsFlags - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)&last[-1].maxProximity + 3);
      uVar4 = (uint)puVar2 & 7;
      uVar5 = (uint)&last[-1].minProximity & 7;
      in_a3 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
              uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)&last[-1].minProximity - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)&last[-1].gradient + 3);
      uVar4 = (uint)puVar2 & 7;
      uVar5 = (uint)&last[-1].optimalProximity & 7;
      in_t0 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
              uVar12 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)&last[-1].optimalProximity - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)&last[-1].resolution + 3);
      uVar4 = (uint)puVar2 & 7;
      uVar5 = (uint)&last[-1].facing & 7;
      in_t1 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
              uVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)&last[-1].facing - uVar5) >> uVar5 * 8;
      puVar2 = (undefined *)((int)&pRVar10[-1].snapTargetSlot + 3);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_v1 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pRVar10[-1].rsFlags & 7;
      puVar7 = (ulong *)((int)&pRVar10[-1].rsFlags - uVar4);
      *puVar7 = in_v1 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar2 = (undefined *)((int)&pRVar10[-1].maxProximity + 3);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_a3 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pRVar10[-1].minProximity & 7;
      puVar7 = (ulong *)((int)&pRVar10[-1].minProximity - uVar4);
      *puVar7 = in_a3 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar2 = (undefined *)((int)&pRVar10[-1].gradient + 3);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t0 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pRVar10[-1].optimalProximity & 7;
      puVar7 = (ulong *)((int)&pRVar10[-1].optimalProximity - uVar4);
      *puVar7 = in_t0 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar2 = (undefined *)((int)&pRVar10[-1].resolution + 3);
      uVar4 = (uint)puVar2 & 7;
      puVar7 = (ulong *)(puVar2 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t1 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pRVar10[-1].facing & 7;
      puVar7 = (ulong *)((int)&pRVar10[-1].facing - uVar4);
      *puVar7 = in_t1 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pRVar10[-1].field0_0x0.__vtable = pSVar6;
      last = pRVar9;
      pRVar10 = result;
    } while (first != pRVar9);
  }
  return result;
}

RoutingSlot* RoutingSlot * uninitialized_copy<RoutingSlot *, RoutingSlot *>(RoutingSlot *first, RoutingSlot *last, RoutingSlot *result) {
	RoutingSlot &value;
	RoutingSlot &_ctor_arg;
	Slot &_ctor_arg;
	
  int iVar1;
  int *piVar2;
  RoutingSlot *pRVar3;
  RoutingSlot *pRVar4;
  int *piVar5;
  int iVar6;
  
  if (first != last) {
    pRVar4 = first;
    pRVar3 = result + -1;
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      pRVar3[1].field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
                    /* end of inlined section */
      piVar5 = pRVar4->multipliers;
      first = first + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
      result = result + 1;
      piVar2 = pRVar3[1].multipliers;
      iVar6 = 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      pRVar3[1].field0_0x0.xoffset = (pRVar4->field0_0x0).xoffset;
      pRVar3[1].field0_0x0.yoffset = (pRVar4->field0_0x0).yoffset;
      pRVar3[1].field0_0x0.altOffset = (pRVar4->field0_0x0).altOffset;
      iVar1 = (pRVar4->field0_0x0).nameIndex;
                    /* end of inlined section */
      pRVar3[1].field0_0x0.__vtable = (Slot__vtable *)_vt_11RoutingSlot;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      pRVar3[1].field0_0x0.nameIndex = iVar1;
      do {
                    /* end of inlined section */
        iVar1 = *piVar5;
        iVar6 = iVar6 + -1;
        piVar5 = piVar5 + 1;
        *piVar2 = iVar1;
        piVar2 = piVar2 + 1;
      } while (iVar6 != -1);
      pRVar3[1].rsFlags = pRVar4->rsFlags;
      pRVar3[1].snapTargetSlot = pRVar4->snapTargetSlot;
      pRVar3[1].minProximity = pRVar4->minProximity;
      pRVar3[1].maxProximity = pRVar4->maxProximity;
      pRVar3[1].optimalProximity = pRVar4->optimalProximity;
      pRVar3[1].gradient = pRVar4->gradient;
      pRVar3[1].facing = pRVar4->facing;
      pRVar3[1].resolution = pRVar4->resolution;
      pRVar4 = pRVar4 + 1;
      pRVar3 = pRVar3 + 1;
    } while (first != last);
  }
  return result;
}

void vector<RoutingSlot, __malloc_alloc_template<0> >::insert_aux(RoutingSlot *position, RoutingSlot &x) {
	RoutingSlot x_copy;
	RoutingSlot &value;
	RoutingSlot &_ctor_arg;
	Slot &_ctor_arg;
	RoutingSlot *this;
	RoutingSlot &_ctor_arg;
	Slot &_ctor_arg;
	Slot *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	void *result;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	RoutingSlot *p;
	RoutingSlot &value;
	void *pAddress;
	RoutingSlot &_ctor_arg;
	Slot &_ctor_arg;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	RoutingSlot *first;
	RoutingSlot *pointer;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  Slot__vtable **ppSVar2;
  float fVar3;
  ulong *puVar4;
  uint uVar5;
  RoutingSlot *pRVar6;
  Slot__vtable *pSVar7;
  RoutingSlot *pRVar8;
  float *pfVar9;
  int *piVar10;
  int *piVar11;
  float *pfVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  RoutingSlot *pRVar17;
  RoutingSlot x_copy;
  
  pRVar6 = this->finish;
  if (pRVar6 == this->end_of_storage) {
    pRVar8 = this->start;
    iVar15 = (int)pRVar6 - (int)pRVar8 >> 6;
    iVar16 = 1;
    if (iVar15 != 0) {
      iVar16 = iVar15 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar5 = iVar16 << 6;
    if (iVar16 == 0) {
      pRVar6 = (RoutingSlot *)0x0;
      uVar5 = 0;
    }
    else {
      pRVar6 = (RoutingSlot *)malloc(uVar5);
      if (pRVar6 == (RoutingSlot *)0x0) {
        pRVar6 = (RoutingSlot *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
      }
      pRVar8 = this->start;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP11RoutingSlotZP11RoutingSlot_X01X01X11_X11(pRVar8,position,pRVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pfVar9 = (float *)((int)pRVar6 + ((int)position - (int)this->start));
    pfVar9[4] = (float)_vt_4Slot;
    pfVar12 = pfVar9 + 5;
    iVar16 = 2;
    piVar10 = x->multipliers;
    *pfVar9 = (x->field0_0x0).xoffset;
    pfVar9[1] = (x->field0_0x0).yoffset;
    pfVar9[2] = (x->field0_0x0).altOffset;
    fVar3 = (float)(x->field0_0x0).nameIndex;
    pfVar9[4] = (float)_vt_11RoutingSlot;
    pfVar9[3] = fVar3;
    do {
      fVar3 = (float)*piVar10;
      iVar16 = iVar16 + -1;
      piVar10 = piVar10 + 1;
      *pfVar12 = fVar3;
      pfVar12 = pfVar12 + 1;
    } while (iVar16 != -1);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pfVar9[8] = (float)x->rsFlags;
    pfVar9[9] = (float)x->snapTargetSlot;
    pfVar9[10] = (float)x->minProximity;
    pfVar9[0xb] = (float)x->maxProximity;
    pfVar9[0xc] = (float)x->optimalProximity;
    pfVar9[0xd] = x->gradient;
    pfVar9[0xe] = (float)x->facing;
    pfVar9[0xf] = (float)x->resolution;
                    /* end of inlined section */
    uninitialized_copy__H2ZP11RoutingSlotZP11RoutingSlot_X01X01X11_X11
              (position,this->finish,
               (RoutingSlot *)((int)pRVar6 + (int)position + (0x40 - (int)this->start)));
    pRVar8 = this->finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pRVar17 = this->start;
    if (pRVar17 == pRVar8) {
      pRVar8 = this->start;
    }
    else {
      pSVar7 = (pRVar17->field0_0x0).__vtable;
      while( true ) {
        (*(code *)pSVar7[1].Slot)((int)pRVar17->multipliers + *(short *)(pSVar7 + 1) + -0x14,2);
        if (pRVar17 + 1 == pRVar8) break;
        pSVar7 = pRVar17[1].field0_0x0.__vtable;
        pRVar17 = pRVar17 + 1;
      }
                    /* end of inlined section */
      pRVar8 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pRVar8 != (RoutingSlot *)0x0) && ((int)this->end_of_storage - (int)pRVar8 >> 6 != 0)) {
      free(pRVar8);
                    /* end of inlined section */
    }
    pRVar8 = pRVar6 + iVar15;
    this->start = pRVar6;
    this->end_of_storage = (RoutingSlot *)((int)pRVar6->multipliers + (uVar5 - 0x14));
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    (pRVar6->field0_0x0).xoffset = pRVar6[-1].field0_0x0.xoffset;
    (pRVar6->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
    piVar13 = pRVar6->multipliers;
    iVar15 = 2;
    piVar10 = pRVar6[-1].multipliers;
    (pRVar6->field0_0x0).yoffset = pRVar6[-1].field0_0x0.yoffset;
    piVar14 = x_copy.multipliers;
    piVar11 = x->multipliers;
    (pRVar6->field0_0x0).altOffset = pRVar6[-1].field0_0x0.altOffset;
    iVar16 = pRVar6[-1].field0_0x0.nameIndex;
    (pRVar6->field0_0x0).__vtable = (Slot__vtable *)_vt_11RoutingSlot;
    (pRVar6->field0_0x0).nameIndex = iVar16;
    do {
      iVar16 = *piVar10;
      iVar15 = iVar15 + -1;
      piVar10 = piVar10 + 1;
      *piVar13 = iVar16;
      piVar13 = piVar13 + 1;
    } while (iVar15 != -1);
    pRVar6->rsFlags = pRVar6[-1].rsFlags;
    iVar16 = 2;
    pRVar6->snapTargetSlot = pRVar6[-1].snapTargetSlot;
    pRVar6->minProximity = pRVar6[-1].minProximity;
    pRVar6->maxProximity = pRVar6[-1].maxProximity;
    pRVar6->optimalProximity = pRVar6[-1].optimalProximity;
    pRVar6->gradient = pRVar6[-1].gradient;
    pRVar6->facing = pRVar6[-1].facing;
    pRVar6->resolution = pRVar6[-1].resolution;
    x_copy.field0_0x0.__vtable = (Slot__vtable *)_vt_11RoutingSlot;
    x_copy.field0_0x0.xoffset = (x->field0_0x0).xoffset;
    x_copy.field0_0x0.yoffset = (x->field0_0x0).yoffset;
    x_copy.field0_0x0.altOffset = (x->field0_0x0).altOffset;
    x_copy.field0_0x0.nameIndex = (x->field0_0x0).nameIndex;
    do {
      iVar15 = *piVar11;
      iVar16 = iVar16 + -1;
      piVar11 = piVar11 + 1;
      *piVar14 = iVar15;
      piVar14 = piVar14 + 1;
    } while (iVar16 != -1);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    x_copy.facing = x->facing;
    x_copy.optimalProximity = x->optimalProximity;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    x_copy.resolution = x->resolution;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    x_copy.rsFlags = x->rsFlags;
    x_copy.snapTargetSlot = x->snapTargetSlot;
    x_copy.minProximity = x->minProximity;
    x_copy.maxProximity = x->maxProximity;
    x_copy.gradient = x->gradient;
                    /* end of inlined section */
    copy_backward__H2ZP11RoutingSlotZP11RoutingSlot_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    pSVar7 = (position->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(position->field0_0x0).yoffset + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(x_copy.field0_0x0.yoffset,x_copy.field0_0x0.xoffset) >> (7 - uVar5) * 8;
    uVar5 = (uint)position & 7;
    *(ulong *)((int)position - uVar5) =
         CONCAT44(x_copy.field0_0x0.yoffset,x_copy.field0_0x0.xoffset) << uVar5 * 8 |
         *(ulong *)((int)position - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&(position->field0_0x0).nameIndex + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(x_copy.field0_0x0.nameIndex,x_copy.field0_0x0.altOffset) >> (7 - uVar5) * 8;
    pfVar9 = &(position->field0_0x0).altOffset;
    uVar5 = (uint)pfVar9 & 7;
    puVar4 = (ulong *)((int)pfVar9 - uVar5);
    *puVar4 = CONCAT44(x_copy.field0_0x0.nameIndex,x_copy.field0_0x0.altOffset) << uVar5 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)position->multipliers + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(x_copy.multipliers[0],x_copy.field0_0x0.__vtable) >> (7 - uVar5) * 8;
    ppSVar2 = &(position->field0_0x0).__vtable;
    uVar5 = (uint)ppSVar2 & 7;
    puVar4 = (ulong *)((int)ppSVar2 - uVar5);
    *puVar4 = CONCAT44(x_copy.multipliers[0],x_copy.field0_0x0.__vtable) << uVar5 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)position->multipliers + 0xb);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | x_copy.multipliers._4_8_ >> (7 - uVar5) * 8;
    uVar5 = (uint)(position->multipliers + 1) & 7;
    puVar4 = (ulong *)((int)(position->multipliers + 1) - uVar5);
    *puVar4 = x_copy.multipliers._4_8_ << uVar5 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&position->snapTargetSlot + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(x_copy.snapTargetSlot,x_copy.rsFlags) >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->rsFlags & 7;
    puVar4 = (ulong *)((int)&position->rsFlags - uVar5);
    *puVar4 = CONCAT44(x_copy.snapTargetSlot,x_copy.rsFlags) << uVar5 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&position->maxProximity + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(x_copy.maxProximity,x_copy.minProximity) >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->minProximity & 7;
    puVar4 = (ulong *)((int)&position->minProximity - uVar5);
    *puVar4 = CONCAT44(x_copy.maxProximity,x_copy.minProximity) << uVar5 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&position->gradient + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(x_copy.gradient,x_copy.optimalProximity) >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->optimalProximity & 7;
    puVar4 = (ulong *)((int)&position->optimalProximity - uVar5);
    *puVar4 = CONCAT44(x_copy.gradient,x_copy.optimalProximity) << uVar5 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&position->resolution + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(x_copy.resolution,x_copy.facing) >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->facing & 7;
    puVar4 = (ulong *)((int)&position->facing - uVar5);
    *puVar4 = CONCAT44(x_copy.resolution,x_copy.facing) << uVar5 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    (position->field0_0x0).__vtable = pSVar7;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
    pRVar8 = this->finish;
  }
  this->finish = pRVar8 + 1;
  return;
}

void Slot::~Slot(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Slot__vtable *)_vt_4Slot;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ObjectSlot::~ObjectSlot(int __in_chrg) {
	Slot *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

int SpriteSlot::GetTicksPerFrame() {
  return 0xc;
}

void SpriteSlot::ActivateForever() {
  ActivateForTicks__10SpriteSloti(this,-1);
  return;
}

void SpriteSlot::Deactivate() {
  ActivateForTicks__10SpriteSloti(this,0);
  return;
}

bool SpriteSlot::IsActive() {
  return this->ticksLeft != 0;
}

void SpriteSlot::UseBalloonSprite(Int id) {
  this->balloonSpriteID = id;
  return;
}

void SpriteSlot::UseOverlaySprite(Int id) {
  this->notSignSpriteID = id;
  return;
}

ObjSelector* SpriteSlot::GetSelector() {
  if (this->id == -1) {
    return (this->field3_0x1c).selector;
  }
  return (ObjSelector *)0x0;
}

Int SpriteSlot::GetSpriteID() {
  return this->id;
}

Int SpriteSlot::GetBalloonSpriteID() {
  return this->balloonSpriteID;
}

Int SpriteSlot::GetOverlaySpriteID() {
  return this->notSignSpriteID;
}

Int SpriteSlot::GetCurrentFrame() {
  return this->frame;
}

cXObject* SpriteSlot::GetPPerson() {
  return (cXObject__117_983 *)this->m_pObj;
}

void SpriteSlot::SetPriority(Int pri) {
  this->priority = pri;
  return;
}

Int SpriteSlot::GetPriority() {
  return this->priority;
}

bool SpriteSlot::GetShowOverInactivePeople() {
  return SUB41(*(undefined4 *)&this->showWhenInactive,0);
}

void SpriteSlot::SetShowOverInactivePeople(bool show) {
  *(int *)&this->showWhenInactive = (int)show;
  return;
}

void RoutingSlot::~RoutingSlot(int __in_chrg) {
	Slot *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

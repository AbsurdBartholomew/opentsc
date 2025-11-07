// STATUS: NOT STARTED

#include "LightLayer.h"

struct litevector<LightEntry,4096> {
private:
	int mCount;
	LightEntry mArray[4096];
	
public:
	LightEntry* begin();
	LightEntry* begin();
	LightEntry* end();
	LightEntry* end();
	reverse_iterator<LightEntry *,LightEntry,LightEntry &,int> rbegin();
	reverse_iterator<const LightEntry *,LightEntry,const LightEntry &,int> rbegin();
	reverse_iterator<LightEntry *,LightEntry,LightEntry &,int> rend();
	reverse_iterator<const LightEntry *,LightEntry,const LightEntry &,int> rend();
	long int size();
	long int max_size();
	long int capacity();
	bool empty();
	LightEntry& operator[]();
	LightEntry& operator[]();
	litevector();
	litevector();
	litevector();
	litevector();
	litevector(litevector<LightEntry,4096>*, int, void);
	litevector<LightEntry,4096>& operator=();
	void reserve();
	LightEntry& front();
	LightEntry& front();
	LightEntry& back();
	LightEntry& back();
	void push_back();
	LightEntry* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
};

struct LightLayerImpl : LightLayer {
	litevector<LightEntry,4096> mLayer;
	
	LightLayerImpl& operator=(LightLayer &_in);
	LightLayerImpl();
	LightLayerImpl();
	/* vtable[1] */ virtual LightLayerImpl(LightLayerImpl*, int, void);
	/* vtable[2] */ virtual LightLayer& operator=();
	/* vtable[3] */ virtual LightEntry& Get(CTilePt &in);
	/* vtable[4] */ virtual LightEntry& Get();
	/* vtable[5] */ virtual void Set(CTilePt &in, LightEntry &inLight);
	/* vtable[6] */ virtual void Clear();
	/* vtable[7] */ virtual void PositionLight(CTilePt &lightPos, ObjectLightSource inSrc);
	/* vtable[8] */ virtual void RemoveLight(CTilePt &lightPos, ObjectLightSource inSrc);
	/* vtable[9] */ virtual void DoOffset(CTilePt &inOffset);
	static LightLayerImpl* CreateInstance(/* parameters unknown */);
};

struct AUTOPTR<LightLayerImpl> {
private:
	LightLayerImpl *m_ptr;
	
public:
	AUTOPTR();
	AUTOPTR();
	AUTOPTR(AUTOPTR<LightLayerImpl>*, int, void);
	LightLayerImpl* CreateInstance();
	void Reset();
	LightLayerImpl* operator LightLayerImpl *();
	LightLayerImpl* operator->();
private:
	AUTOPTR<LightLayerImpl>& operator=();
};

__vtbl_ptr_type LightLayerImpl virtual table[11] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::~LightLayerImpl,
		/* .__delta2 = */ 19272
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::operator=,
		/* .__delta2 = */ 19440
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::Get,
		/* .__delta2 = */ 19576
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::Get,
		/* .__delta2 = */ 19664
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::Set,
		/* .__delta2 = */ 19752
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::Clear,
		/* .__delta2 = */ 19864
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::PositionLight,
		/* .__delta2 = */ 17456
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::RemoveLight,
		/* .__delta2 = */ 18136
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayerImpl::DoOffset,
		/* .__delta2 = */ 18520
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type LightLayer virtual table[11] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &LightLayer::~LightLayer,
		/* .__delta2 = */ 19976
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

LightLayer* LightLayer::CreateInstance() {
  LightLayerImpl *pLVar1;
  
  pLVar1 = (LightLayerImpl *)__builtin_new(0x4008);
  pLVar1 = __14LightLayerImpl(pLVar1);
  return &pLVar1->field0_0x0;
}

void LightLayer::DestroyInstance(LightLayer *pInstance) {
  if (pInstance != (LightLayer *)0x0) {
    (*(code *)pInstance->__vtable->Get)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->operator_,3);
  }
  return;
}

void LightLayerImpl::PositionLight(CTilePt &lightPos, ObjectLightSource inSrc) {
	short unsigned int roomID;
	int range;
	int y;
	int x;
	CTilePt where;
	short unsigned int testID;
	Room *r1;
	Room *r2;
	Sides s1;
	Sides s2;
	
  int y;
  int iVar1;
  LightEntry *pLVar2;
  RoomManager *pRVar3;
  long lVar4;
  long lVar5;
  LightLayer__vtable *pLVar6;
  int x;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  int iVar7;
  CTilePt where;
  CTilePt aCStack_b0 [5];
  Room *r1;
  Room *r2;
  Sides s1;
  Sides s2;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
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
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  lVar4 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall);
  if (lVar4 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar4 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,lightPos);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar7 = (int)(_5Globs_pLightingParameters->gTweeks[7] * 0.3333333 + 0.5);
    iVar1 = -iVar7;
    while (y = iVar1, y <= iVar7) {
      x = -iVar7;
      iVar1 = y + 1;
      if (x <= iVar7) {
        do {
          __7CTilePtiii(aCStack_b0,x,y,0);
          __pl__C7CTilePtRC7CTilePt(&where,lightPos);
          ___7CTilePt(aCStack_b0,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          lVar5 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&where);
          if (lVar5 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            lVar5 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                              ((int)&_5Globs_pFixedWorld->__vtable +
                               (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&where);
            if (lVar5 == lVar4) {
              pLVar6 = (this->field0_0x0).__vtable;
              pLVar2 = (LightEntry *)
                       (*(code *)pLVar6->DoOffset)
                                 ((int)((this->mLayer).mArray + -2) +
                                  (int)*(short *)&pLVar6->RemoveLight,&where);
              Absorb__10LightEntryii(pLVar2,x,y);
            }
            else if (lVar5 == 0xfffb) {
              r1 = (Room *)0x0;
              r2 = (Room *)0x0;
              pRVar3 = GetRoomManager__11RoomManager();
              if (pRVar3 != (RoomManager *)0x0) {
                pRVar3 = GetRoomManager__11RoomManager();
                (*(code *)pRVar3->__vtable[1].GetRoomManagerImpl)
                          ((int)&pRVar3->__vtable + (int)*(short *)&pRVar3->__vtable[1].RoomManager,
                           &where,&r1,&r2,&s1,&s2);
                if ((r1 == (Room *)0x0) ||
                   (lVar5 = (*(code *)r1->__vtable->GetObjectDensity)
                                      ((int)&r1->__vtable +
                                       (int)*(short *)&r1->__vtable->InvalidateRoom), lVar5 != lVar4
                   )) {
                  if ((r2 == (Room *)0x0) ||
                     (lVar5 = (*(code *)r2->__vtable->GetObjectDensity)
                                        ((int)&r2->__vtable +
                                         (int)*(short *)&r2->__vtable->InvalidateRoom),
                     lVar5 != lVar4)) goto LAB_00294680;
                  pLVar6 = (this->field0_0x0).__vtable;
                }
                else {
                  pLVar6 = (this->field0_0x0).__vtable;
                }
                pLVar2 = (LightEntry *)
                         (*(code *)pLVar6->DoOffset)
                                   ((int)((this->mLayer).mArray + -2) +
                                    (int)*(short *)&pLVar6->RemoveLight,&where);
                Absorb__10LightEntryii(pLVar2,x,y);
              }
            }
          }
LAB_00294680:
          ___7CTilePt(&where,2);
          x = x + 1;
        } while (x <= iVar7);
      }
    }
  }
  return;
}

void LightLayerImpl::RemoveLight(CTilePt &lightPos, ObjectLightSource inSrc) {
	int range;
	int y;
	int x;
	CTilePt where;
	
  LightLayer__vtable *pLVar1;
  int y;
  int iVar2;
  LightEntry *this_00;
  long lVar3;
  int x;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  int iVar4;
  CTilePt where;
  CTilePt aCStack_90 [5];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
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
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  lVar3 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall);
  if (lVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar4 = (int)(_5Globs_pLightingParameters->gTweeks[7] * 0.3333333 + 0.5);
    iVar2 = -iVar4;
    while (y = iVar2, y <= iVar4) {
      x = -iVar4;
      iVar2 = y + 1;
      if (x <= iVar4) {
        do {
          __7CTilePtiii(aCStack_90,x,y,0);
          __pl__C7CTilePtRC7CTilePt(&where,lightPos);
          ___7CTilePt(aCStack_90,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          lVar3 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&where);
          if (lVar3 == 0) {
            pLVar1 = (this->field0_0x0).__vtable;
            this_00 = (LightEntry *)
                      (*(code *)pLVar1->DoOffset)
                                ((int)((this->mLayer).mArray + -2) +
                                 (int)*(short *)&pLVar1->RemoveLight,&where);
            Unabsorb__10LightEntryii(this_00,x,y);
          }
          ___7CTilePt(&where,2);
          x = x + 1;
        } while (x <= iVar4);
      }
    }
  }
  return;
}

void LightLayerImpl::DoOffset(CTilePt &inOffset) {
	AUTOPTR<LightLayerImpl> tempLayer;
	int x;
	int y;
	litevector<LightEntry,4096> *this;
	int i;
	int new_x;
	int new_y;
	
  short sVar1;
  LightLayer__vtable *pLVar2;
  bool bVar3;
  LightLayerImpl *pLVar4;
  int iVar5;
  int iVar6;
  LightEntry *pLVar7;
  LightEntry *pLVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar9;
  undefined8 unaff_s2;
  int iVar10;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  AUTOPTR_LightLayerImpl_ tempLayer;
  CTilePt aCStack_c0 [5];
  CTilePt aCStack_b0 [5];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
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
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  DestroyInstance__10LightLayerP10LightLayer((LightLayer *)0x0);
                    /* end of inlined section */
  pLVar4 = (LightLayerImpl *)__builtin_new(0x4008);
  pLVar4 = __14LightLayerImpl(pLVar4);
                    /* end of inlined section */
  if (pLVar4 != (LightLayerImpl *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    iVar10 = (this->mLayer).mCount;
    iVar9 = 0;
    (pLVar4->mLayer).mCount = iVar10;
    if (0 < iVar10) {
      pLVar8 = (pLVar4->mLayer).mArray;
      pLVar7 = (this->mLayer).mArray;
      do {
        __as__10LightEntryRC10LightEntry(pLVar8,pLVar7);
        iVar9 = iVar9 + 1;
        pLVar7 = pLVar7 + 1;
        pLVar8 = pLVar8 + 1;
      } while (iVar9 < (pLVar4->mLayer).mCount);
    }
                    /* end of inlined section */
    iVar9 = 0;
    iVar10 = 0;
    while( true ) {
      do {
        iVar5 = GetX__C7CTilePt(inOffset);
        iVar6 = GetY__C7CTilePt(inOffset);
        iVar6 = iVar9 + iVar6;
        if ((((uint)(iVar10 + iVar5) < 0x40) && (-1 < iVar6)) && (iVar6 < 0x40)) {
          pLVar2 = (this->field0_0x0).__vtable;
          sVar1 = *(short *)&pLVar2->RemoveLight;
          __7CTilePtiii(aCStack_c0,iVar10 + iVar5,iVar6,0);
          pLVar7 = (LightEntry *)
                   (*(code *)pLVar2->DoOffset)
                             ((int)((this->mLayer).mArray + -2) + (int)sVar1,aCStack_c0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
          pLVar2 = (pLVar4->field0_0x0).__vtable;
          sVar1 = *(short *)&pLVar2->RemoveLight;
          __7CTilePtiii(aCStack_b0,iVar10,iVar9,0);
          pLVar8 = (LightEntry *)
                   (*(code *)pLVar2->DoOffset)
                             ((int)((pLVar4->mLayer).mArray + -2) + (int)sVar1,aCStack_b0);
          __as__10LightEntryRC10LightEntry(pLVar7,pLVar8);
          ___7CTilePt(aCStack_b0,2);
          ___7CTilePt(aCStack_c0,2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x40);
      iVar9 = iVar9 + 1;
      if (0x3f < iVar9) break;
      iVar10 = 0;
    }
    iVar10 = 1;
    do {
      iVar9 = 0x3f;
      do {
        iVar9 = iVar9 + -1;
        GetX__C7CTilePt(inOffset);
        GetY__C7CTilePt(inOffset);
      } while (-1 < iVar9);
      bVar3 = iVar10 < 0x40;
      iVar10 = iVar10 + 1;
    } while (bVar3);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__10LightLayerP10LightLayer(&pLVar4->field0_0x0);
  return;
}

LightLayerImpl* LightLayerImpl::LightLayerImpl() {
	LightLayer *this;
	litevector<LightEntry,4096> *this;
	LightEntry &value;
	long int i;
	
  LightEntry *this_00;
  undefined8 unaff_s0;
  long lVar1;
  int iVar2;
  undefined8 unaff_s1;
  litevector_LightEntry_4096_ *plVar3;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  LightEntry aLStack_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
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
  
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  plVar3 = &this->mLayer;
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar2 = 0xfff;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = (this->mLayer).mArray;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (LightLayer__vtable *)_vt_14LightLayerImpl;
  __10LightEntry(aLStack_80);
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
  do {
    iVar2 = iVar2 + -1;
    __10LightEntry(this_00);
    this_00 = this_00 + 1;
  } while (iVar2 != -1);
  plVar3->mCount = 0;
  lVar1 = 0;
  do {
    iVar2 = (int)lVar1;
    lVar1 = lVar1 + 1;
    __as__10LightEntryRC10LightEntry(plVar3->mArray + iVar2,aLStack_80);
  } while (lVar1 < 0x1000);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
  plVar3->mCount = 0x1000;
                    /* end of inlined section */
  ___10LightEntry(aLStack_80,2);
  return this;
}

void LightLayerImpl::~LightLayerImpl(int __in_chrg) {
	LightLayer *this;
	int __in_chrg;
	void *pAddress;
	
  litevector_LightEntry_4096_ *plVar1;
  LightEntry *pLVar2;
  LightEntry *pLVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
  pLVar3 = (this->mLayer).mArray;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
  (this->field0_0x0).__vtable = (LightLayer__vtable *)_vt_14LightLayerImpl;
  if ((this != (LightLayerImpl *)0xfffffff8) && ((LightLayerImpl *)pLVar3 != this + 1)) {
    plVar1 = &this->mLayer;
    do {
      pLVar2 = plVar1->mArray;
      ___10LightEntry(pLVar2 + 0xfff,0);
      plVar1 = (litevector_LightEntry_4096_ *)((int)(plVar1 + -1) + 0x4000);
    } while (pLVar3 != pLVar2 + 0xfff);
  }
  (this->field0_0x0).__vtable = (LightLayer__vtable *)_vt_10LightLayer;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

LightLayer& LightLayerImpl::operator=(LightLayer &_in) {
	litevector<LightEntry,4096> *this;
	int i;
	
  LightLayer__vtable *pLVar1;
  LightEntry *this_00;
  LightLayer *in;
  int iVar2;
  
  if (this != (LightLayerImpl *)_in) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
    pLVar1 = _in[1].__vtable;
    iVar2 = 0;
    (this->mLayer).mCount = (int)pLVar1;
    if (0 < (int)pLVar1) {
      in = _in + 2;
      this_00 = (this->mLayer).mArray;
      do {
        __as__10LightEntryRC10LightEntry(this_00,(LightEntry *)in);
        iVar2 = iVar2 + 1;
        in = in + 1;
        this_00 = this_00 + 1;
      } while (iVar2 < (this->mLayer).mCount);
    }
  }
                    /* end of inlined section */
  return &this->field0_0x0;
}

LightEntry& LightLayerImpl::Get(CTilePt &in) {
  int iVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
                    /* end of inlined section */
  iVar1 = GetY__C7CTilePt(in);
  iVar2 = GetX__C7CTilePt(in);
  return (this->mLayer).mArray + iVar1 * 0x40 + iVar2;
}

LightEntry& LightLayerImpl::Get(CTilePt &in) {
  int iVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
                    /* end of inlined section */
  iVar1 = GetY__C7CTilePt(in);
  iVar2 = GetX__C7CTilePt(in);
  return (this->mLayer).mArray + iVar1 * 0x40 + iVar2;
}

void LightLayerImpl::Set(CTilePt &in, LightEntry &inLight) {
  int iVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
                    /* end of inlined section */
  iVar1 = GetY__C7CTilePt(in);
  iVar2 = GetX__C7CTilePt(in);
  __as__10LightEntryRC10LightEntry((this->mLayer).mArray + iVar1 * 0x40 + iVar2,inLight);
  return;
}

void LightLayerImpl::Clear() {
	LightEntry *i;
	LightEntry *e;
	
  int iVar1;
  LightEntry *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  LightEntry aLStack_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/litevector.h */
  iVar1 = (this->mLayer).mCount;
                    /* end of inlined section */
  for (this_00 = (this->mLayer).mArray; this_00 != (this->mLayer).mArray + iVar1;
      this_00 = this_00 + 1) {
    __10LightEntry(aLStack_40);
    __as__10LightEntryRC10LightEntry(this_00,aLStack_40);
    ___10LightEntry(aLStack_40,2);
  }
  return;
}

void LightLayer::~LightLayer(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (LightLayer__vtable *)_vt_10LightLayer;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

LightLayerImpl* LightLayerImpl::CreateInstance() {
  LightLayerImpl *pLVar1;
  
  pLVar1 = (LightLayerImpl *)__builtin_new(0x4008);
  pLVar1 = __14LightLayerImpl(pLVar1);
  return pLVar1;
}

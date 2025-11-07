// STATUS: NOT STARTED

#include "IconGroup.h"

struct IconIDMap {
	int fGroup;
	SInt16 fSpriteBaseID;
	SInt16 fStringsID;
};

static IconIDMap sIDMaps[10];

__vtbl_ptr_type IconGroupImpl virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IconGroupImpl::~IconGroupImpl,
		/* .__delta2 = */ -5184
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IconGroupImpl::Init,
		/* .__delta2 = */ -5240
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IconGroupImpl::GetSpriteID,
		/* .__delta2 = */ -5088
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IconGroupImpl::GetLabel,
		/* .__delta2 = */ -4992
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IconGroupImpl::CountIconLabels,
		/* .__delta2 = */ -4816
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IconGroupImpl::GetIconLabel,
		/* .__delta2 = */ -4976
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IconGroup virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IconGroup::~IconGroup,
		/* .__delta2 = */ -4568
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static short int sOldStyleSpriteIDs[19] = {
	/* [0] = */ 200,
	/* [1] = */ 201,
	/* [2] = */ 202,
	/* [3] = */ 203,
	/* [4] = */ 204,
	/* [5] = */ 205,
	/* [6] = */ 206,
	/* [7] = */ 207,
	/* [8] = */ 208,
	/* [9] = */ 209,
	/* [10] = */ 210,
	/* [11] = */ 211,
	/* [12] = */ 212,
	/* [13] = */ 213,
	/* [14] = */ 400,
	/* [15] = */ 401,
	/* [16] = */ 402,
	/* [17] = */ 403,
	/* [18] = */ 404
};

IconGroup* IconGroup::CreateInstance() {
  IconGroupImpl *pIVar1;
  
  pIVar1 = (IconGroupImpl *)__builtin_new(0x10);
  pIVar1 = __13IconGroupImpl(pIVar1);
  return &pIVar1->field0_0x0;
}

void IconGroup::DestroyInstance(IconGroup *pInstance) {
  if (pInstance != (IconGroup *)0x0) {
    (*(code *)pInstance->__vtable->GetSpriteID)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Init,3);
  }
  return;
}

IconGroupImpl* IconGroupImpl::IconGroupImpl() {
	IconGroup *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  (this->fStrings).m_ptr = (StringSet *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IconGroup__vtable *)_vt_13IconGroupImpl;
  this->fGroup = 0;
  this->fMap = (IconIDMap *)0x0;
  return this;
}

void IconGroupImpl::Init(int group) {
	int i;
	
  IconIDMap *pIVar1;
  int iVar2;
  
  iVar2 = 9;
  pIVar1 = sIDMaps;
  do {
    iVar2 = iVar2 + -1;
    if (pIVar1->fGroup == group) {
      this->fMap = pIVar1;
    }
    pIVar1 = pIVar1 + 1;
  } while (-1 < iVar2);
  return;
}

void IconGroupImpl::~IconGroupImpl(int __in_chrg) {
	IconGroup *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (IconGroup__vtable *)_vt_13IconGroupImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet((this->fStrings).m_ptr);
  (this->fStrings).m_ptr = (StringSet *)0x0;
  (this->field0_0x0).__vtable = (IconGroup__vtable *)_vt_9IconGroup;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

SInt16 IconGroupImpl::GetSpriteID(int index) {
  IconIDMap *pIVar1;
  
  pIVar1 = this->fMap;
  if ((pIVar1 != (IconIDMap *)0x0) && (pIVar1->fSpriteBaseID != 0xffff)) {
    return (ushort)(((uint)pIVar1->fSpriteBaseID + index) * 0x10000 >> 0x10);
  }
  if ((this->fGroup == 0) && ((-1 < index && (index < 0x13)))) {
    return sOldStyleSpriteIDs[index];
  }
  return 0;
}

void IconGroupImpl::GetLabel(StringBuffer &label) {
  return;
}

void IconGroupImpl::LoadStrings() {
  return;
}

void IconGroupImpl::GetIconLabel(int index, StringBuffer &label) {
  StringSet *pSVar1;
  char *str;
  int iVar2;
  
  LoadStrings__13IconGroupImpl(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pSVar1 = (this->fStrings).m_ptr;
                    /* end of inlined section */
  if (pSVar1 != (StringSet *)0x0) {
                    /* end of inlined section */
    str = (char *)(*(code *)pSVar1->__vtable->RemoveString)
                            ((int)&pSVar1->__vtable + (int)*(short *)&pSVar1->__vtable->InsertString
                             ,index + 1,0xffffffffffffffff);
    copy__12StringBufferPCc(label,str);
  }
  iVar2 = length__C12StringBuffer(label);
  if (iVar2 == 0) {
    append__12StringBufferPCci(label,"Icon ",-1);
    appendNum__12StringBufferi(label,index);
  }
  return;
}

int IconGroupImpl::CountIconLabels() {
  StringSet *pSVar1;
  int iVar2;
  
  LoadStrings__13IconGroupImpl(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  pSVar1 = (this->fStrings).m_ptr;
                    /* end of inlined section */
  if (pSVar1 == (StringSet *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)pSVar1->__vtable->GetNativeString)
                      ((int)&pSVar1->__vtable + (int)*(short *)&pSVar1->__vtable->GetLocString,
                       0xffffffffffffffff);
  }
  return iVar2;
}

SInt16 IconGroup::GetBalloonSpriteID(BalloonType type) {
	IconGroupImpl balloonIcons;
	SInt16 balloonSpriteID;
	
  ushort uVar1;
  int index;
  IconGroupImpl balloonIcons;
  
  __13IconGroupImpl(&balloonIcons);
  uVar1 = 0;
  Init__13IconGroupImpli(&balloonIcons,1);
  if (type == kBalloonScream) {
    index = 1;
  }
  else if ((int)type < 2) {
    if (type != kBalloonThought) goto LAB_0025ee08;
    index = 0;
  }
  else {
    if (type != kBalloonSpeak) goto LAB_0025ee08;
    index = 2;
  }
  uVar1 = GetSpriteID__13IconGroupImpli(&balloonIcons,index);
LAB_0025ee08:
  ___13IconGroupImpl(&balloonIcons,2);
  return uVar1;
}

void IconGroup::~IconGroup(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (IconGroup__vtable *)_vt_9IconGroup;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

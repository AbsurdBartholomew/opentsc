// STATUS: NOT STARTED

#include "xlingo.h"

__vtbl_ptr_type XObjLang virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &XObjLang::~XObjLang,
		/* .__delta2 = */ 15352
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &XObjLang::GetTreeTypeName,
		/* .__delta2 = */ 14904
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &XObjLang::GetNodeText,
		/* .__delta2 = */ 14912
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &XObjLang::GetPrimName,
		/* .__delta2 = */ 14920
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &XObjLang::CountPrimitives,
		/* .__delta2 = */ 14936
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &XObjLang::IsSingleExit,
		/* .__delta2 = */ 14928
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &XObjLang::GetSwizzler,
		/* .__delta2 = */ 14944
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void XObjLang::GetTreeTypeName(Int type, StringBuffer &name) {
  return;
}

void XObjLang::GetNodeText(Behavior *bhav, SInt16 treeID, BehaviorNode *node, StringBuffer &str) {
  return;
}

void XObjLang::GetPrimName(SInt16 primCode, StringBuffer &str) {
  return;
}

bool XObjLang::IsSingleExit(BehaviorNode *node) {
  return false;
}

SInt16 XObjLang::CountPrimitives() {
  return 0;
}

SwizzleProc XObjLang::GetSwizzler() {
  return (undefined1 *)0x0;
}

XObjLang* XObjLang::XObjLang(ObjSelector *selector) {
	Language *this;
	
  this->fLangSelector = selector;
  (this->field0_0x0).__vtable = (Language__vtable *)_vt_8XObjLang;
  return this;
}

Int XObjLang::GetMaxConstants() {
  return 0x80;
}

bool XObjLang::GetConstantsID(StdPrm dataField, SInt16 *resID, Int *index) {
  uint uVar1;
  
  uVar1 = ((uint)dataField << 0x10) >> 0x1d;
  if (uVar1 == 1) {
    *resID = 0x2000;
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      return false;
    }
    *resID = 0x1000;
  }
  else {
    if (uVar1 != 2) {
      return false;
    }
    *resID = 0x100;
  }
  *resID = *resID + ((short)dataField >> 7 & 0x3fU);
  *index = (int)((uint)dataField << 0x10) >> 0x10 & 0x7f;
  return true;
}

bool XObjLang::GetConstantsDataField(SInt16 resID, Int index, StdPrm *outData) {
	StdPrm dataField;
	Int treeClass;
	
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar1 = GetTreeClass__8Behaviors(resID);
  uVar4 = 0;
  if (uVar1 != 2) {
    if ((short)uVar1 < 3) {
      if (uVar1 != 1) {
        return false;
      }
      uVar4 = 0x4000;
    }
    else {
      if (uVar1 != 3) {
        return false;
      }
      uVar4 = 0x2000;
    }
  }
  uVar1 = GetBaseID__8Behaviors(uVar1);
  uVar3 = ((int)(short)resID - (int)(short)uVar1) * 0x10000 >> 0x10;
  if ((int)uVar3 < 0x40) {
    iVar2 = GetMaxConstants__8XObjLang();
    if (index < iVar2) {
      *outData = uVar4 | (ushort)((uVar3 & 0x3f) << 7) | (ushort)index & 0x7f;
      return true;
    }
  }
  return false;
}

void XObjLang::~XObjLang(int __in_chrg) {
  ___8Language(&this->field0_0x0,__in_chrg);
  return;
}

ObjSelector* XObjLang::GetSelector() {
  return this->fLangSelector;
}

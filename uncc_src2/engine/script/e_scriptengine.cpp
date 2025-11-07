// STATUS: NOT STARTED

#include "e_scriptengine.h"

struct EScriptDataDef {
	char *name;
	char typeChar;
	ETypeInfo *pTypeInfo;
};

static EScriptFunDef _scriptBasicFunTable[136];

static EScriptDataDef _scriptDataTypeTable[8] = {
	/* [0] = */ {
		/* .name = */ 0x3c8650,
		/* .typeChar = */ 102,
		/* .pTypeInfo = */ &ESDFloat::m_typeInfo
	},
	/* [1] = */ {
		/* .name = */ 0x3c8660,
		/* .typeChar = */ 105,
		/* .pTypeInfo = */ &ESDInt::m_typeInfo
	},
	/* [2] = */ {
		/* .name = */ 0x3c86c8,
		/* .typeChar = */ 109,
		/* .pTypeInfo = */ &ESDMatrix::m_typeInfo
	},
	/* [3] = */ {
		/* .name = */ 0x3c8700,
		/* .typeChar = */ 112,
		/* .pTypeInfo = */ &ESDPointer::m_typeInfo
	},
	/* [4] = */ {
		/* .name = */ 0x3c8718,
		/* .typeChar = */ 115,
		/* .pTypeInfo = */ &ESDString::m_typeInfo
	},
	/* [5] = */ {
		/* .name = */ 0x3c8730,
		/* .typeChar = */ 118,
		/* .pTypeInfo = */ &ESDVector::m_typeInfo
	},
	/* [6] = */ {
		/* .name = */ 0x3c8748,
		/* .typeChar = */ 114,
		/* .pTypeInfo = */ &ESDResource::m_typeInfo
	},
	/* [7] = */ {
		/* .name = */ NULL,
		/* .typeChar = */ 0,
		/* .pTypeInfo = */ NULL
	}
};

static EScriptFunDef _scriptPlatformFunTable[49];
static EScriptFunDef _scriptEventFunTable[7];
static EScriptFunDef _scriptLevelFunTable[9];
EScriptFunDef _scriptParticleFunTable[6];

EScriptEngine _scriptEngine = {
	/* .m_pDataTypes = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL,
		/* [4] = */ NULL,
		/* [5] = */ NULL,
		/* [6] = */ NULL,
		/* [7] = */ NULL,
		/* [8] = */ NULL,
		/* [9] = */ NULL,
		/* [10] = */ NULL,
		/* [11] = */ NULL,
		/* [12] = */ NULL,
		/* [13] = */ NULL,
		/* [14] = */ NULL,
		/* [15] = */ NULL,
		/* [16] = */ NULL,
		/* [17] = */ NULL,
		/* [18] = */ NULL,
		/* [19] = */ NULL,
		/* [20] = */ NULL,
		/* [21] = */ NULL,
		/* [22] = */ NULL,
		/* [23] = */ NULL,
		/* [24] = */ NULL,
		/* [25] = */ NULL,
		/* [26] = */ NULL,
		/* [27] = */ NULL,
		/* [28] = */ NULL,
		/* [29] = */ NULL,
		/* [30] = */ NULL,
		/* [31] = */ NULL,
		/* [32] = */ NULL,
		/* [33] = */ NULL,
		/* [34] = */ NULL,
		/* [35] = */ NULL,
		/* [36] = */ NULL,
		/* [37] = */ NULL,
		/* [38] = */ NULL,
		/* [39] = */ NULL,
		/* [40] = */ NULL,
		/* [41] = */ NULL,
		/* [42] = */ NULL,
		/* [43] = */ NULL,
		/* [44] = */ NULL,
		/* [45] = */ NULL,
		/* [46] = */ NULL,
		/* [47] = */ NULL,
		/* [48] = */ NULL,
		/* [49] = */ NULL,
		/* [50] = */ NULL,
		/* [51] = */ NULL,
		/* [52] = */ NULL,
		/* [53] = */ NULL,
		/* [54] = */ NULL,
		/* [55] = */ NULL,
		/* [56] = */ NULL,
		/* [57] = */ NULL,
		/* [58] = */ NULL,
		/* [59] = */ NULL,
		/* [60] = */ NULL,
		/* [61] = */ NULL,
		/* [62] = */ NULL,
		/* [63] = */ NULL,
		/* [64] = */ NULL,
		/* [65] = */ NULL,
		/* [66] = */ NULL,
		/* [67] = */ NULL,
		/* [68] = */ NULL,
		/* [69] = */ NULL,
		/* [70] = */ NULL,
		/* [71] = */ NULL,
		/* [72] = */ NULL,
		/* [73] = */ NULL,
		/* [74] = */ NULL,
		/* [75] = */ NULL,
		/* [76] = */ NULL,
		/* [77] = */ NULL,
		/* [78] = */ NULL,
		/* [79] = */ NULL,
		/* [80] = */ NULL,
		/* [81] = */ NULL,
		/* [82] = */ NULL,
		/* [83] = */ NULL,
		/* [84] = */ NULL,
		/* [85] = */ NULL,
		/* [86] = */ NULL,
		/* [87] = */ NULL,
		/* [88] = */ NULL,
		/* [89] = */ NULL,
		/* [90] = */ NULL,
		/* [91] = */ NULL,
		/* [92] = */ NULL,
		/* [93] = */ NULL,
		/* [94] = */ NULL,
		/* [95] = */ NULL,
		/* [96] = */ NULL,
		/* [97] = */ NULL,
		/* [98] = */ NULL,
		/* [99] = */ NULL,
		/* [100] = */ NULL,
		/* [101] = */ NULL,
		/* [102] = */ NULL,
		/* [103] = */ NULL,
		/* [104] = */ NULL,
		/* [105] = */ NULL,
		/* [106] = */ NULL,
		/* [107] = */ NULL,
		/* [108] = */ NULL,
		/* [109] = */ NULL,
		/* [110] = */ NULL,
		/* [111] = */ NULL,
		/* [112] = */ NULL,
		/* [113] = */ NULL,
		/* [114] = */ NULL,
		/* [115] = */ NULL,
		/* [116] = */ NULL,
		/* [117] = */ NULL,
		/* [118] = */ NULL,
		/* [119] = */ NULL,
		/* [120] = */ NULL,
		/* [121] = */ NULL,
		/* [122] = */ NULL,
		/* [123] = */ NULL,
		/* [124] = */ NULL,
		/* [125] = */ NULL,
		/* [126] = */ NULL,
		/* [127] = */ NULL,
		/* [128] = */ NULL,
		/* [129] = */ NULL,
		/* [130] = */ NULL,
		/* [131] = */ NULL,
		/* [132] = */ NULL,
		/* [133] = */ NULL,
		/* [134] = */ NULL,
		/* [135] = */ NULL,
		/* [136] = */ NULL,
		/* [137] = */ NULL,
		/* [138] = */ NULL,
		/* [139] = */ NULL,
		/* [140] = */ NULL,
		/* [141] = */ NULL,
		/* [142] = */ NULL,
		/* [143] = */ NULL,
		/* [144] = */ NULL,
		/* [145] = */ NULL,
		/* [146] = */ NULL,
		/* [147] = */ NULL,
		/* [148] = */ NULL,
		/* [149] = */ NULL,
		/* [150] = */ NULL,
		/* [151] = */ NULL,
		/* [152] = */ NULL,
		/* [153] = */ NULL,
		/* [154] = */ NULL,
		/* [155] = */ NULL,
		/* [156] = */ NULL,
		/* [157] = */ NULL,
		/* [158] = */ NULL,
		/* [159] = */ NULL,
		/* [160] = */ NULL,
		/* [161] = */ NULL,
		/* [162] = */ NULL,
		/* [163] = */ NULL,
		/* [164] = */ NULL,
		/* [165] = */ NULL,
		/* [166] = */ NULL,
		/* [167] = */ NULL,
		/* [168] = */ NULL,
		/* [169] = */ NULL,
		/* [170] = */ NULL,
		/* [171] = */ NULL,
		/* [172] = */ NULL,
		/* [173] = */ NULL,
		/* [174] = */ NULL,
		/* [175] = */ NULL,
		/* [176] = */ NULL,
		/* [177] = */ NULL,
		/* [178] = */ NULL,
		/* [179] = */ NULL,
		/* [180] = */ NULL,
		/* [181] = */ NULL,
		/* [182] = */ NULL,
		/* [183] = */ NULL,
		/* [184] = */ NULL,
		/* [185] = */ NULL,
		/* [186] = */ NULL,
		/* [187] = */ NULL,
		/* [188] = */ NULL,
		/* [189] = */ NULL,
		/* [190] = */ NULL,
		/* [191] = */ NULL,
		/* [192] = */ NULL,
		/* [193] = */ NULL,
		/* [194] = */ NULL,
		/* [195] = */ NULL,
		/* [196] = */ NULL,
		/* [197] = */ NULL,
		/* [198] = */ NULL,
		/* [199] = */ NULL,
		/* [200] = */ NULL,
		/* [201] = */ NULL,
		/* [202] = */ NULL,
		/* [203] = */ NULL,
		/* [204] = */ NULL,
		/* [205] = */ NULL,
		/* [206] = */ NULL,
		/* [207] = */ NULL,
		/* [208] = */ NULL,
		/* [209] = */ NULL,
		/* [210] = */ NULL,
		/* [211] = */ NULL,
		/* [212] = */ NULL,
		/* [213] = */ NULL,
		/* [214] = */ NULL,
		/* [215] = */ NULL,
		/* [216] = */ NULL,
		/* [217] = */ NULL,
		/* [218] = */ NULL,
		/* [219] = */ NULL,
		/* [220] = */ NULL,
		/* [221] = */ NULL,
		/* [222] = */ NULL,
		/* [223] = */ NULL,
		/* [224] = */ NULL,
		/* [225] = */ NULL,
		/* [226] = */ NULL,
		/* [227] = */ NULL,
		/* [228] = */ NULL,
		/* [229] = */ NULL,
		/* [230] = */ NULL,
		/* [231] = */ NULL,
		/* [232] = */ NULL,
		/* [233] = */ NULL,
		/* [234] = */ NULL,
		/* [235] = */ NULL,
		/* [236] = */ NULL,
		/* [237] = */ NULL,
		/* [238] = */ NULL,
		/* [239] = */ NULL,
		/* [240] = */ NULL,
		/* [241] = */ NULL,
		/* [242] = */ NULL,
		/* [243] = */ NULL,
		/* [244] = */ NULL,
		/* [245] = */ NULL,
		/* [246] = */ NULL,
		/* [247] = */ NULL,
		/* [248] = */ NULL,
		/* [249] = */ NULL,
		/* [250] = */ NULL,
		/* [251] = */ NULL,
		/* [252] = */ NULL,
		/* [253] = */ NULL,
		/* [254] = */ NULL,
		/* [255] = */ NULL
	},
	/* .m_funTables = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL,
		/* [4] = */ NULL,
		/* [5] = */ NULL,
		/* [6] = */ NULL,
		/* [7] = */ NULL,
		/* [8] = */ NULL,
		/* [9] = */ NULL,
		/* [10] = */ NULL,
		/* [11] = */ NULL,
		/* [12] = */ NULL,
		/* [13] = */ NULL,
		/* [14] = */ NULL,
		/* [15] = */ NULL,
		/* [16] = */ NULL,
		/* [17] = */ NULL,
		/* [18] = */ NULL,
		/* [19] = */ NULL,
		/* [20] = */ NULL,
		/* [21] = */ NULL,
		/* [22] = */ NULL,
		/* [23] = */ NULL,
		/* [24] = */ NULL,
		/* [25] = */ NULL,
		/* [26] = */ NULL,
		/* [27] = */ NULL,
		/* [28] = */ NULL,
		/* [29] = */ NULL,
		/* [30] = */ NULL,
		/* [31] = */ NULL
	},
	/* .m_funTableSizes = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0,
		/* [10] = */ 0,
		/* [11] = */ 0,
		/* [12] = */ 0,
		/* [13] = */ 0,
		/* [14] = */ 0,
		/* [15] = */ 0,
		/* [16] = */ 0,
		/* [17] = */ 0,
		/* [18] = */ 0,
		/* [19] = */ 0,
		/* [20] = */ 0,
		/* [21] = */ 0,
		/* [22] = */ 0,
		/* [23] = */ 0,
		/* [24] = */ 0,
		/* [25] = */ 0,
		/* [26] = */ 0,
		/* [27] = */ 0,
		/* [28] = */ 0,
		/* [29] = */ 0,
		/* [30] = */ 0,
		/* [31] = */ 0
	},
	/* .m_nFunTables = */ 0,
	/* .m_instanceToScriptMap = */ {
		/* base class 0 = */ {
			/* .m_list = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_pRoot = */ NULL
		}
	},
	/* .m_globalMap = */ {
		/* base class 0 = */ {
			/* .m_list = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_pRoot = */ NULL
		}
	},
	/* .m_breakpointSet = */ {
		/* base class 0 = */ {
			/* .m_list = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_pRoot = */ NULL
		}
	},
	/* .m_stopped = */ false,
	/* .m_initialized = */ false
};

bool _scriptDebug = false;
bool _scriptVariableDebug = false;
bool _scriptDebugTool = false;

EScriptEngine* EScriptEngine::EScriptEngine() {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  __13ERedBlackTree(&(this->m_instanceToScriptMap).field0_0x0);
  __13ERedBlackTree(&(this->m_globalMap).field0_0x0);
  __13ERedBlackTree(&(this->m_breakpointSet).field0_0x0);
                    /* end of inlined section */
  memset(this,0,0x400);
  this->m_nFunTables = 0;
  *(undefined4 *)&this->m_stopped = 0;
  *(undefined4 *)&this->m_initialized = 0;
  return this;
}

void EScriptEngine::~EScriptEngine(int __in_chrg) {
	void *pAddress;
	
  DeallocateGlobalData__13EScriptEngine(this);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_breakpointSet).field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_globalMap).field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_instanceToScriptMap).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool EScriptEngine::Init() {
  RegisterDataTypes__13EScriptEngine(this);
  RegisterFunctionTable__13EScriptEngineP13EScriptFunDef(this,_scriptBasicFunTable);
  RegisterFunctionTable__13EScriptEngineP13EScriptFunDef(this,_scriptEventFunTable);
  RegisterFunctionTable__13EScriptEngineP13EScriptFunDef(this,_scriptLevelFunTable);
  RegisterFunctionTable__13EScriptEngineP13EScriptFunDef(this,_scriptPlatformFunTable);
  RegisterFunctionTable__13EScriptEngineP13EScriptFunDef(this,_scriptParticleFunTable);
  *(undefined4 *)&this->m_initialized = 1;
  return true;
}

void EScriptEngine::DeallocateGlobalData() {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	void *pNode;
	
  EScriptData *this_00;
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_globalMap).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
                    /* end of inlined section */
    this_00 = (EScriptData *)pEVar1->value;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      DelRef__11EScriptData(this_00);
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (EScriptData *)pEVar1->value;
    }
  }
  return;
}

EScriptFunDef* EScriptEngine::GetFunction(u32 id) {
	u32 tableIndex;
	u32 functionIndex;
	
  uint uVar1;
  
  uVar1 = id >> 0x14;
  if (this->m_nFunTables <= (int)uVar1) {
    return (EScriptFunDef *)0x0;
  }
  if ((int)(id & 0xfffff) < this->m_funTableSizes[uVar1]) {
    return this->m_funTables[uVar1] + (id & 0xfffff);
  }
  return (EScriptFunDef *)0x0;
}

void EScriptEngine::RegisterFunctionTable(EScriptFunDef *pTable) {
	int size;
	EScriptFunDef *pPos;
	
  char *pcVar1;
  EScriptFunDef *pEVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar1 = pTable->name;
  pEVar2 = pTable;
  while (pcVar1 != (char *)0x0) {
    pEVar2 = pEVar2 + 1;
    iVar3 = iVar3 + 1;
    pcVar1 = pEVar2->name;
  }
  this->m_funTables[this->m_nFunTables] = pTable;
  this->m_funTableSizes[this->m_nFunTables] = iVar3;
  this->m_nFunTables = this->m_nFunTables + 1;
  return;
}

void EScriptEngine::RegisterDataTypes() {
	EScriptDataDef *pPos;
	ETypeInfo *pType;
	
  char cVar1;
  EScriptDataDef *pEVar2;
  EScriptDataDef *pEVar3;
  
  pEVar3 = _scriptDataTypeTable;
  cVar1 = _scriptDataTypeTable[0].typeChar;
  if (_scriptDataTypeTable[0].name != (char *)0x0) {
    while( true ) {
      this->m_pDataTypes[cVar1] = pEVar3->pTypeInfo;
      if (pEVar3[1].name == (char *)0x0) break;
      pEVar2 = pEVar3 + 1;
      pEVar3 = pEVar3 + 1;
      cVar1 = pEVar2->typeChar;
    }
  }
  return;
}

void EScriptEngine::Run(ERScript *pScript, EInstance *pInstance, EScriptParams *pParams) {
	EScriptContext *pContext;
	RBIterator si;
	EInstance *key;
	EInstance *key;
	
  EStorable__vtable *pEVar1;
  bool bVar2;
  undefined1 *suspendPos;
  EScriptContext *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  EScriptContext *pContext;
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
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if (pScript == (ERScript *)0x0) {
    return;
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  suspendPos = Find__C13ERedBlackTreeUiPUi
                         (&(pScript->m_suspendedContexts).field0_0x0,(uint)pInstance,
                          (uint *)&pContext);
                    /* end of inlined section */
  if (suspendPos == (undefined1 *)0x0) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
    this_00 = (EScriptContext *)_allocBucketAlloc__FUiUi(0x454,0x30);
                    /* end of inlined section */
    pContext = __14EScriptContext(this_00);
    if (pContext == (EScriptContext *)0x0) {
      return;
    }
    bVar2 = Init__14EScriptContextP8ERScriptP9EInstanceP13EScriptParams
                      (pContext,pScript,pInstance,pParams);
    if (!bVar2) {
      pEVar1 = (pContext->field0_0x0).__vtable;
      (*(code *)pEVar1->GetTypeName)
                ((int)pContext->m_pStackData + *(short *)&pEVar1->GetTypeInfo + -0x30);
      return;
    }
    pScript->m_nRunning = pScript->m_nRunning + 1;
  }
  else {
    Reinit__14EScriptContextP17RBIteratorPtrType(pContext,suspendPos);
  }
  bVar2 = Execute__14EScriptContext(pContext);
  if (bVar2) {
    if ((pInstance != (EInstance *)0x0) && (suspendPos == (undefined1 *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Insert__13ERedBlackTreeUiUib
                (&(this->m_instanceToScriptMap).field0_0x0,(uint)pInstance,(uint)pScript,true);
                    /* end of inlined section */
    }
  }
  else {
    pScript->m_nRunning = pScript->m_nRunning + -1;
    if ((pInstance != (EInstance *)0x0) && (suspendPos != (undefined1 *)0x0)) {
      RemoveFromInstanceToScriptMap__13EScriptEngineP9EInstanceP8ERScript(this,pInstance,pScript);
    }
    pEVar1 = (pContext->field0_0x0).__vtable;
    (*(code *)pEVar1->GetTypeName)
              ((int)pContext->m_pStackData + *(short *)&pEVar1->GetTypeInfo + -0x30);
  }
  return;
}

void EScriptEngine::InstanceDestructing(EInstance *pInstance) {
	ERScript *pISMScript;
	RBIterator iis;
	TRedBlackTree<EInstance *,ERScript *> *this;
	EInstance *key;
	ERScript *pNextScript;
	RBIterator next;
	EScriptContext *pContext;
	TRedBlackTree<EInstance *,ERScript *> *this;
	RBIterator i;
	EInstance *key;
	RBIterator i;
	
  EStorable__vtable *pEVar1;
  undefined1 *i;
  undefined1 *puVar2;
  undefined1 *i_00;
  undefined8 unaff_s0;
  TRedBlackTree_EInstance___ERScript___ *this_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  ERScript *pISMScript;
  ERScript *pNextScript;
  EScriptContext *pContext;
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
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  this_00 = &this->m_instanceToScriptMap;
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  i = FindFirst__C13ERedBlackTreeUiPUi(&this_00->field0_0x0,(uint)pInstance,(uint *)&pISMScript);
                    /* end of inlined section */
  while (i != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar2 = FindNext__C13ERedBlackTreeP17RBIteratorPtrTypePUi
                       (&this_00->field0_0x0,i,(uint *)&pNextScript);
    i_00 = Find__C13ERedBlackTreeUiPUi
                     (&(pISMScript->m_suspendedContexts).field0_0x0,(uint)pInstance,
                      (uint *)&pContext);
                    /* end of inlined section */
    if (i_00 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Remove__13ERedBlackTreeP17RBIteratorPtrType
                (&(pISMScript->m_suspendedContexts).field0_0x0,i_00);
                    /* end of inlined section */
      pEVar1 = (pContext->field0_0x0).__vtable;
      (*(code *)pEVar1->GetTypeName)
                ((int)pContext->m_pStackData + *(short *)&pEVar1->GetTypeInfo + -0x30);
      pISMScript->m_nRunning = pISMScript->m_nRunning + -1;
    }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Remove__13ERedBlackTreeP17RBIteratorPtrType(&this_00->field0_0x0,i);
                    /* end of inlined section */
    pISMScript = pNextScript;
    i = puVar2;
  }
  return;
}

void EScriptEngine::ScriptDestructing(ERScript *pScript) {
	RBIterator sci;
	RBIterator i;
	RBIterator i;
	
  EInstance *pInstance;
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (pScript->m_suspendedContexts).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pInstance = (EInstance *)pEVar1->key;
    while( true ) {
                    /* end of inlined section */
      if (pInstance != (EInstance *)0x0) {
        RemoveFromInstanceToScriptMap__13EScriptEngineP9EInstanceP8ERScript(this,pInstance,pScript);
      }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      pInstance = (EInstance *)pEVar1->key;
    }
  }
  return;
}

void EScriptEngine::RemoveFromInstanceToScriptMap(EInstance *pInstance, ERScript *pScript) {
	ERScript *pISMScript;
	RBIterator iis;
	RBIterator i;
	
  undefined1 *i;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ERScript *pISMScript;
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
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  i = FindFirst__C13ERedBlackTreeUiPUi
                (&(this->m_instanceToScriptMap).field0_0x0,(uint)pInstance,(uint *)&pISMScript);
                    /* end of inlined section */
  while( true ) {
                    /* end of inlined section */
    if (i == (undefined1 *)0x0) {
                    /* end of inlined section */
      return;
    }
    if (pISMScript == pScript) break;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    i = FindNext__C13ERedBlackTreeP17RBIteratorPtrTypePUi
                  (&(this->m_instanceToScriptMap).field0_0x0,i,(uint *)&pISMScript);
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Remove__13ERedBlackTreeP17RBIteratorPtrType(&(this->m_instanceToScriptMap).field0_0x0,i);
  return;
}

EScriptData* EScriptEngine::AllocateData(char type) {
	ETypeInfo *pType;
	ETypeInfo *this;
	
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/common/storage/e_typeinfo.h */
  pEVar1 = (EScriptData *)(***(code ***)((int)this->m_pDataTypes + (((int)type << 0x18) >> 0x16)))()
  ;
                    /* end of inlined section */
  return pEVar1;
}

EScriptData* EScriptEngine::GetGlobal(char type, u32 id) {
	EScriptData *pData;
	TRedBlackTree<unsigned int,EScriptData *> *this;
	u32 key;
	u32 key;
	
  undefined1 *puVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  EScriptData *pData;
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
  
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_globalMap).field0_0x0,id,(uint *)&pData);
                    /* end of inlined section */
  if (puVar1 == (undefined1 *)0x0) {
    pData = AllocateData__13EScriptEnginec(this,type);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pData->m_nRefs = pData->m_nRefs + 1;
    Insert__13ERedBlackTreeUiUib(&(this->m_globalMap).field0_0x0,id,(uint)pData,false);
                    /* end of inlined section */
  }
  return pData;
}

void EScriptEngine::Break() {
  return;
}

void EScriptEngine::SetBreakpoint(u32 scriptId, bool set) {
  return;
}

void EScriptEngine::SetBreakpoint(char *szScriptName, bool set) {
  return;
}

void EScriptEngine::ClearAllBreakpoints() {
  return;
}

void EScriptEngine::EnableDebugText(bool enable) {
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___13EScriptEngine(&_scriptEngine,2);
    }
    else {
      __13EScriptEngine(&_scriptEngine);
    }
  }
  return;
}

void global constructors keyed to _scriptParticleFunTable() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _scriptParticleFunTable() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

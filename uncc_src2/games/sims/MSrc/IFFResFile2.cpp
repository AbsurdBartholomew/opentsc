// STATUS: NOT STARTED

#include "IFFResFile2.h"

struct IFFResNode {
	SInt32 fFileoffset;
	int fID;
	SInt16 fFlags;
	SInt16 fSavedFlags;
	HandleNode *fHandle;
	ResourceName fName;
	
	IFFResNode& operator=();
	IFFResNode();
	IFFResNode();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct vector<IFFResNode,__malloc_alloc_template<0> > {
protected:
	IFFResNode *start;
	IFFResNode *finish;
	IFFResNode *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	IFFResNode* begin();
	IFFResNode* begin();
	IFFResNode* end();
	IFFResNode* end();
	reverse_iterator<IFFResNode *,IFFResNode,IFFResNode &,int> rbegin();
	reverse_iterator<const IFFResNode *,IFFResNode,const IFFResNode &,int> rbegin();
	reverse_iterator<IFFResNode *,IFFResNode,IFFResNode &,int> rend();
	reverse_iterator<const IFFResNode *,IFFResNode,const IFFResNode &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	IFFResNode& operator[]();
	IFFResNode& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<IFFResNode,__malloc_alloc_template<0> >*, int, void);
	vector<IFFResNode,__malloc_alloc_template<0> >& operator=();
	void reserve();
	IFFResNode& front();
	IFFResNode& front();
	IFFResNode& back();
	IFFResNode& back();
	void push_back();
	void swap();
	IFFResNode* insert();
	IFFResNode* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct IFFResList : vector<IFFResNode,__malloc_alloc_template<0> > {
	ResType fType;
	SwizzleProc fLastSwizUsed;
	
	IFFResList& operator=();
	IFFResList();
	IFFResList(IFFResList*, int, void);
	IFFResList();
	IFFResList();
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct simple_alloc<IFFResNode,__malloc_alloc_template<0> > {
	simple_alloc<IFFResNode,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static IFFResNode* allocate(/* parameters unknown */);
	static IFFResNode* allocate(/* parameters unknown */);
	static IFFResNode* allocate(/* parameters unknown */);
	static IFFResNode* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct vector<IFFResList,__malloc_alloc_template<0> > {
protected:
	IFFResList *start;
	IFFResList *finish;
	IFFResList *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	IFFResList* begin();
	IFFResList* begin();
	IFFResList* end();
	IFFResList* end();
	reverse_iterator<IFFResList *,IFFResList,IFFResList &,int> rbegin();
	reverse_iterator<const IFFResList *,IFFResList,const IFFResList &,int> rbegin();
	reverse_iterator<IFFResList *,IFFResList,IFFResList &,int> rend();
	reverse_iterator<const IFFResList *,IFFResList,const IFFResList &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	IFFResList& operator[]();
	IFFResList& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<IFFResList,__malloc_alloc_template<0> >*, int, void);
	vector<IFFResList,__malloc_alloc_template<0> >& operator=();
	void reserve();
	IFFResList& front();
	IFFResList& front();
	IFFResList& back();
	IFFResList& back();
	void push_back();
	void swap();
	IFFResList* insert();
	IFFResList* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct IFFResMap : private vector<IFFResList,__malloc_alloc_template<0> > {
private:
	SInt32 fFragSize;
	
public:
	IFFResMap& operator=();
	IFFResMap();
	IFFResMap(IFFResMap*, int, void);
private:
	void Stress();
	IFFResList* GetResList(ResType type, bool makeNew);
public:
	IFFResMap();
	IFFResNode* MakeNewNode(ResType type);
	IFFResNode* GetNode(HandleNode *h, ResType *type, SwizzleProc swiz);
	IFFResNode* GetNodeWithLanguage(ResType type, int id, char lang, SwizzleProc swiz);
	IFFResNode* GetNode();
	IFFResNode* GetNode();
	IFFResNode* GetIndNode(ResType type, SInt32 index, SwizzleProc swiz);
	void RemoveNode(IFFResNode *n);
	SInt32 CountTypes();
	ResType GetIndexedType(SInt32 index);
	SInt32 CountNodes(ResType type);
	void FreeAllHandles();
	void RemoveAllNodes();
	void RemoveAllNodesOfType(ResType type);
	SwizzleProc GetLastSwizzleProc(ResType type);
	SInt16 GetHighestID(ResType type, SInt16 minimum);
	void AddToFragSize(IFFResMap*, int, void);
	void SetFragSize(IFFResMap*, int, void);
	SInt32 GetFragSize();
	bool UpdateOffset(SInt32 offsetMoving, SInt32 delta);
	void DoStream(ReconBuffer *r, SInt32 version);
};

struct simple_alloc<IFFResList,__malloc_alloc_template<0> > {
	simple_alloc<IFFResList,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static IFFResList* allocate(/* parameters unknown */);
	static IFFResList* allocate(/* parameters unknown */);
	static IFFResList* allocate(/* parameters unknown */);
	static IFFResList* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct IFFHeader {
	SInt32 fType;
	SInt32 fSize;
	SInt16 fID;
	SInt16 fFlags;
	char fName[64];
	
	IFFHeader& operator=();
	IFFHeader();
	IFFHeader();
	void Swizzle();
	void SetName();
	void GetName();
};

struct SimpleReconObject<IFFResMap> : ReconObject {
private:
	IFFResMap *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<IFFResMap>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<IFFResMap>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

static unsigned char sUniqueHeader[64] = {
	/* [0] = */ 73,
	/* [1] = */ 70,
	/* [2] = */ 70,
	/* [3] = */ 32,
	/* [4] = */ 70,
	/* [5] = */ 73,
	/* [6] = */ 76,
	/* [7] = */ 69,
	/* [8] = */ 32,
	/* [9] = */ 42,
	/* [10] = */ 46,
	/* [11] = */ 42,
	/* [12] = */ 58,
	/* [13] = */ 84,
	/* [14] = */ 89,
	/* [15] = */ 80,
	/* [16] = */ 69,
	/* [17] = */ 32,
	/* [18] = */ 70,
	/* [19] = */ 79,
	/* [20] = */ 76,
	/* [21] = */ 76,
	/* [22] = */ 79,
	/* [23] = */ 87,
	/* [24] = */ 69,
	/* [25] = */ 68,
	/* [26] = */ 32,
	/* [27] = */ 66,
	/* [28] = */ 89,
	/* [29] = */ 32,
	/* [30] = */ 83,
	/* [31] = */ 73,
	/* [32] = */ 90,
	/* [33] = */ 69,
	/* [34] = */ 0,
	/* [35] = */ 32,
	/* [36] = */ 74,
	/* [37] = */ 65,
	/* [38] = */ 77,
	/* [39] = */ 73,
	/* [40] = */ 69,
	/* [41] = */ 32,
	/* [42] = */ 68,
	/* [43] = */ 79,
	/* [44] = */ 79,
	/* [45] = */ 82,
	/* [46] = */ 78,
	/* [47] = */ 66,
	/* [48] = */ 79,
	/* [49] = */ 83,
	/* [50] = */ 32,
	/* [51] = */ 38,
	/* [52] = */ 32,
	/* [53] = */ 77,
	/* [54] = */ 65,
	/* [55] = */ 88,
	/* [56] = */ 73,
	/* [57] = */ 83,
	/* [58] = */ 32,
	/* [59] = */ 49,
	/* [60] = */ 42,
	/* [61] = */ 42,
	/* [62] = */ 42,
	/* [63] = */ 42
};

__vtbl_ptr_type SimpleReconObject<IFFResMap> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<IFFResMap>::~SimpleReconObject,
		/* .__delta2 = */ -5440
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<IFFResMap>::DoStream,
		/* .__delta2 = */ -5408
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<IFFResMap>::GetType,
		/* .__delta2 = */ -5376
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IFFResFile2::MemFile virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ -16,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -16,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::~IFFResFile2,
		/* .__delta2 = */ -22560
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IFFResFile2 virtual table[38] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::~IFFResFile2,
		/* .__delta2 = */ -22560
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::_dyncastimpl,
		/* .__delta2 = */ -13824
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Create,
		/* .__delta2 = */ -21456
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Delete,
		/* .__delta2 = */ -20888
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Open,
		/* .__delta2 = */ -22448
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::CloseForReopen,
		/* .__delta2 = */ -20120
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Reopen,
		/* .__delta2 = */ -20016
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Close,
		/* .__delta2 = */ -20792
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Update,
		/* .__delta2 = */ -19880
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Writable,
		/* .__delta2 = */ -19520
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetFileName,
		/* .__delta2 = */ -19512
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::ValidFile,
		/* .__delta2 = */ -19480
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::CountTypes,
		/* .__delta2 = */ -19448
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetIndType,
		/* .__delta2 = */ -19328
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Count,
		/* .__delta2 = */ -19168
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetByID,
		/* .__delta2 = */ -18744
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetByName,
		/* .__delta2 = */ -18688
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetByIndex,
		/* .__delta2 = */ -18424
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetByIDAndLanguage,
		/* .__delta2 = */ -19032
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetName,
		/* .__delta2 = */ -18160
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetResType,
		/* .__delta2 = */ -17800
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetID,
		/* .__delta2 = */ -17640
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetIndex,
		/* .__delta2 = */ -17464
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::GetLanguage,
		/* .__delta2 = */ -17968
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::FindUniqueName,
		/* .__delta2 = */ -17336
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::FindUniqueID,
		/* .__delta2 = */ -17048
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Detach,
		/* .__delta2 = */ -16904
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Load,
		/* .__delta2 = */ -16672
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::IsLittleEndian,
		/* .__delta2 = */ -16560
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::SetID,
		/* .__delta2 = */ -16376
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Add,
		/* .__delta2 = */ -15744
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::AddWithLanguage,
		/* .__delta2 = */ -16200
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Write,
		/* .__delta2 = */ -15688
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::Remove,
		/* .__delta2 = */ -15128
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IFFResFile2::SetInfo,
		/* .__delta2 = */ -14872
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::GetString,
		/* .__delta2 = */ -14592
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static char GetLanguage(SInt16 resFlags) {
  return (char)((uint)(int)(short)resFlags >> 8);
}

static void SetLanguage(SInt16 *resFlags, char lang) {
  *resFlags = (ushort)*(byte *)resFlags | (ushort)((uint)((int)lang << 0x18) >> 0x10);
  return;
}

void IFFResNode::DoStream(ReconBuffer *r, SInt32 version) {
	SInt16 id;
	ReconBuffer *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ushort id;
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
  Recon32__11ReconBufferPii(r,&this->fFileoffset,1);
  id = *(ushort *)&this->fID;
  Recon16__11ReconBufferPsi(r,&id,1);
  this->fID = (int)(short)id;
  Recon16__11ReconBufferPsi(r,&this->fSavedFlags,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
    this->fFlags = this->fSavedFlags;
  }
  ReconString__11ReconBufferR12StringBuffer(r,&(this->fName).field0_0x0);
  return;
}

void IFFResList::DoStream(ReconBuffer *r, SInt32 version) {
	SInt32 type;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int type;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  type = this->fType;
  Recon32__11ReconBufferPii(r,&type,1);
  this->fType = type;
  DoContainerStream__H2Zt6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0Z10IFFResNode_RX01PX11P11ReconBufferi_v
            (&this->field0_0x0,(this->field0_0x0).start,r,version);
  return;
}

bool IFFResMap::UpdateOffset(SInt32 offsetMoving, SInt32 delta) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResNode *n;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResList *pIVar1;
  IFFResNode *pIVar2;
  int iVar3;
  IFFResList *pIVar4;
  IFFResNode *pIVar5;
  
  if (delta < 0) {
    return false;
  }
  pIVar1 = (this->field0_0x0).finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pIVar4 = (this->field0_0x0).start;
                    /* end of inlined section */
  if (pIVar4 != pIVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar5 = (pIVar4->field0_0x0).start;
    while( true ) {
      pIVar2 = (pIVar4->field0_0x0).finish;
                    /* end of inlined section */
      if (pIVar5 != pIVar2) {
        iVar3 = pIVar5->fFileoffset;
        while( true ) {
          if (iVar3 == offsetMoving) {
            pIVar5->fFileoffset = iVar3 - delta;
            return true;
          }
          pIVar5 = pIVar5 + 1;
          if (pIVar5 == pIVar2) break;
          iVar3 = pIVar5->fFileoffset;
        }
      }
      pIVar4 = pIVar4 + 1;
      if (pIVar4 == pIVar1) break;
      pIVar5 = (pIVar4->field0_0x0).start;
    }
  }
  return false;
}

IFFResList* IFFResMap::GetResList(ResType type, bool makeNew) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	ResType type;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  IFFResList *pIVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  IFFResList local_50;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  for (pIVar2 = (this->field0_0x0).start;
      (pIVar2 != (this->field0_0x0).finish && (pIVar2->fType != type)); pIVar2 = pIVar2 + 1) {
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if ((makeNew) && (pIVar2 == (this->field0_0x0).finish)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    local_50.field0_0x0.start = (IFFResNode *)0x0;
    local_50.field0_0x0.finish = (IFFResNode *)0x0;
    local_50.field0_0x0.end_of_storage = (IFFResNode *)0x0;
    local_50.fLastSwizUsed = (undefined1 *)0x0;
    local_50.fType = type;
    if (pIVar2 == (this->field0_0x0).end_of_storage) {
      insert_aux__t6vector2Z10IFFResListZt23__malloc_alloc_template1i0P10IFFResListRC10IFFResList
                (&this->field0_0x0,pIVar2,&local_50);
      pIVar1 = local_50.field0_0x0.start;
    }
    else {
      (pIVar2->field0_0x0).start = (IFFResNode *)0x0;
      pIVar1 = uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
                         ((IFFResNode *)0x0,(IFFResNode *)0x0,(IFFResNode *)0x0);
      (pIVar2->field0_0x0).end_of_storage = pIVar1;
      (pIVar2->field0_0x0).finish = pIVar1;
      pIVar2->fType = local_50.fType;
      pIVar2->fLastSwizUsed = local_50.fLastSwizUsed;
      (this->field0_0x0).finish = (this->field0_0x0).finish + 1;
      pIVar1 = local_50.field0_0x0.start;
    }
    for (; pIVar1 != local_50.field0_0x0.finish; pIVar1 = pIVar1 + 1) {
    }
    if (local_50.field0_0x0.start == (IFFResNode *)0x0) {
      pIVar2 = (this->field0_0x0).start;
    }
    else if (((int)local_50.field0_0x0.end_of_storage - (int)local_50.field0_0x0.start) *
             -0x45d1745d >> 3 == 0) {
      pIVar2 = (this->field0_0x0).start;
    }
    else {
      free(local_50.field0_0x0.start);
      pIVar2 = (this->field0_0x0).start;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    pIVar2 = pIVar2 + (((int)(this->field0_0x0).finish - (int)pIVar2) * -0x33333333 >> 2) + -1;
  }
  return pIVar2;
}

IFFResNode* IFFResMap::MakeNewNode(ResType type) {
	IFFResList *i;
	StackString<64> *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	StackString<64> *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  IFFResList *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  IFFResNode local_a0;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this_00 = GetResList__9IFFResMapUib(this,type,true);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
  local_a0.fHandle = (HandleNode *)0x0;
  local_a0.fSavedFlags = 0xffff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
  local_a0.fFileoffset = -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
  local_a0.fID = -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  local_a0.fFlags = 0xffff;
  __12StringBufferPcUi(&local_a0.fName.field0_0x0,local_a0.fName.fChars,0x40);
  pIVar1 = (this_00->field0_0x0).finish;
  if (pIVar1 == (this_00->field0_0x0).end_of_storage) {
    insert_aux__t6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0P10IFFResNodeRC10IFFResNode
              (&this_00->field0_0x0,pIVar1,&local_a0);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
    pIVar1->fFileoffset = local_a0.fFileoffset;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
    pIVar1->fID = local_a0.fID;
    pIVar1->fFlags = local_a0.fFlags;
    pIVar1->fSavedFlags = local_a0.fSavedFlags;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    pIVar1->fHandle = local_a0.fHandle;
    __12StringBufferPcUi(&(pIVar1->fName).field0_0x0,(pIVar1->fName).fChars,0x40);
    append__12StringBufferRC12StringBufferi
              (&(pIVar1->fName).field0_0x0,&local_a0.fName.field0_0x0,-1);
    (this_00->field0_0x0).finish = (this_00->field0_0x0).finish + 1;
  }
  pIVar1 = (this_00->field0_0x0).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  return pIVar1 + (((int)(this_00->field0_0x0).finish - (int)pIVar1) * -0x45d1745d >> 3) + -1;
}

IFFResNode* IFFResMap::GetNode(ResType type, int id, SwizzleProc swiz) {
	IFFResList *i;
	IFFResNode *j;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  char cVar2;
  IFFResList *pIVar3;
  int iVar4;
  IFFResNode *pIVar5;
  
  pIVar3 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (pIVar3 != (this->field0_0x0).finish) {
    if (swiz != (undefined1 *)0x0) {
      pIVar3->fLastSwizUsed = swiz;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar1 = (pIVar3->field0_0x0).start;
                    /* end of inlined section */
    if (pIVar1 != (pIVar3->field0_0x0).finish) {
      iVar4 = pIVar1->fID;
      while( true ) {
        if (iVar4 == id) {
          cVar2 = GetLanguage__Fs(pIVar1->fFlags);
          if (cVar2 == '\0') {
            return pIVar1;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
          pIVar5 = (pIVar3->field0_0x0).finish;
        }
        else {
          pIVar5 = (pIVar3->field0_0x0).finish;
        }
                    /* end of inlined section */
        if (pIVar1 + 1 == pIVar5) break;
        iVar4 = pIVar1[1].fID;
        pIVar1 = pIVar1 + 1;
      }
    }
  }
  return (IFFResNode *)0x0;
}

IFFResNode* IFFResMap::GetNodeWithLanguage(ResType type, int id, char lang, SwizzleProc swiz) {
	IFFResList *i;
	IFFResNode *j;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  char cVar2;
  IFFResList *pIVar3;
  IFFResNode *pIVar4;
  int iVar5;
  
  pIVar3 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (pIVar3 != (this->field0_0x0).finish) {
    if (swiz != (undefined1 *)0x0) {
      pIVar3->fLastSwizUsed = swiz;
    }
    pIVar4 = (pIVar3->field0_0x0).finish;
    if ((long)(int)lang != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      pIVar1 = (pIVar3->field0_0x0).start;
                    /* end of inlined section */
      if (pIVar1 == pIVar4) {
        return (IFFResNode *)0x0;
      }
      iVar5 = pIVar1->fID;
      while( true ) {
        if (iVar5 == id) {
          cVar2 = GetLanguage__Fs(pIVar1->fFlags);
          if ((long)cVar2 == (long)(int)lang) {
            return pIVar1;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
          pIVar4 = (pIVar3->field0_0x0).finish;
        }
        else {
          pIVar4 = (pIVar3->field0_0x0).finish;
        }
                    /* end of inlined section */
        if (pIVar1 + 1 == pIVar4) break;
        iVar5 = pIVar1[1].fID;
        pIVar1 = pIVar1 + 1;
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar1 = (pIVar3->field0_0x0).start;
                    /* end of inlined section */
    if (pIVar1 != pIVar4) {
      iVar5 = pIVar1->fID;
      while( true ) {
        if (iVar5 == id) {
          cVar2 = GetLanguage__Fs(pIVar1->fFlags);
          if (cVar2 == '\0') {
            return pIVar1;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
          pIVar4 = (pIVar3->field0_0x0).finish;
        }
        else {
          pIVar4 = (pIVar3->field0_0x0).finish;
        }
                    /* end of inlined section */
        if (pIVar1 + 1 == pIVar4) break;
        iVar5 = pIVar1[1].fID;
        pIVar1 = pIVar1 + 1;
      }
    }
  }
  return (IFFResNode *)0x0;
}

IFFResNode* IFFResMap::GetNode(ResType type, ResourceName &name, SwizzleProc swiz) {
	IFFResList *i;
	IFFResNode *j;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  char cVar1;
  IFFResList *pIVar2;
  int iVar3;
  IFFResNode *pIVar4;
  IFFResNode *pIVar5;
  
  pIVar2 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (pIVar2 != (this->field0_0x0).finish) {
    if (swiz != (undefined1 *)0x0) {
      pIVar2->fLastSwizUsed = swiz;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar5 = (pIVar2->field0_0x0).start;
                    /* end of inlined section */
    if (pIVar5 != (pIVar2->field0_0x0).finish) {
      do {
        iVar3 = compareNoCase__C12StringBufferRC12StringBuffer
                          (&(pIVar5->fName).field0_0x0,&name->field0_0x0);
        if (iVar3 == 0) {
          cVar1 = GetLanguage__Fs(pIVar5->fFlags);
          if (cVar1 == '\0') {
            return pIVar5;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
          pIVar4 = (pIVar2->field0_0x0).finish;
        }
        else {
          pIVar4 = (pIVar2->field0_0x0).finish;
        }
                    /* end of inlined section */
        pIVar5 = pIVar5 + 1;
      } while (pIVar5 != pIVar4);
    }
  }
  return (IFFResNode *)0x0;
}

IFFResNode* IFFResMap::GetNode(HandleNode *h, ResType *type, SwizzleProc swiz) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResNode *j;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  HandleNode *pHVar2;
  IFFResList *pIVar3;
  IFFResList *pIVar4;
  IFFResNode *pIVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pIVar4 = (this->field0_0x0).start;
                    /* end of inlined section */
  if (pIVar4 == (this->field0_0x0).finish) {
    *type = 0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar5 = (pIVar4->field0_0x0).start;
    while( true ) {
      pIVar1 = (pIVar4->field0_0x0).finish;
                    /* end of inlined section */
      if (pIVar5 == pIVar1) {
        pIVar3 = (this->field0_0x0).finish;
      }
      else {
        pHVar2 = pIVar5->fHandle;
        while( true ) {
          if (pHVar2 == h) {
            if (swiz != (undefined1 *)0x0) {
              pIVar4->fLastSwizUsed = swiz;
            }
            *type = pIVar4->fType;
            return pIVar5;
          }
          if (pIVar5 + 1 == pIVar1) break;
          pHVar2 = pIVar5[1].fHandle;
          pIVar5 = pIVar5 + 1;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        pIVar3 = (this->field0_0x0).finish;
      }
                    /* end of inlined section */
      pIVar4 = pIVar4 + 1;
      if (pIVar4 == pIVar3) break;
      pIVar5 = (pIVar4->field0_0x0).start;
    }
    *type = 0;
  }
  return (IFFResNode *)0x0;
}

IFFResNode* IFFResMap::GetIndNode(ResType type, SInt32 index, SwizzleProc swiz) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResList *pIVar1;
  IFFResNode *pIVar2;
  
  pIVar1 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (pIVar1 == (this->field0_0x0).finish) {
    pIVar2 = (IFFResNode *)0x0;
  }
  else {
    if (swiz != (undefined1 *)0x0) {
      pIVar1->fLastSwizUsed = swiz;
    }
    pIVar2 = (IFFResNode *)0x0;
    if (0 < index) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      pIVar2 = (pIVar1->field0_0x0).start;
                    /* end of inlined section */
      if (((int)(pIVar1->field0_0x0).finish - (int)pIVar2) * -0x45d1745d >> 3 < index) {
        pIVar2 = (IFFResNode *)0x0;
      }
      else {
                    /* end of inlined section */
        pIVar2 = pIVar2 + index + -1;
      }
    }
  }
  return pIVar2;
}

void IFFResMap::RemoveNode(IFFResNode *n) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResNode *j;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *position;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *result;
	IFFResNode *result;
	IFFResNode *first;
	ptrdiff_t n;
	IFFResNode *this;
	IFFResNode &_ctor_arg;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *position;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *result;
	IFFResList *result;
	IFFResList *result;
	IFFResList *first;
	ptrdiff_t n;
	IFFResList *this;
	IFFResList &_ctor_arg;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	
  IFFResNode *pIVar1;
  IFFResList *pIVar2;
  IFFResNode *pIVar3;
  IFFResList *pIVar4;
  IFFResNode *pIVar5;
  int iVar6;
  IFFResList *pIVar7;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pIVar7 = (this->field0_0x0).start;
                    /* end of inlined section */
  if (pIVar7 != (this->field0_0x0).finish) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar5 = (pIVar7->field0_0x0).start;
    while( true ) {
      pIVar1 = (pIVar7->field0_0x0).finish;
                    /* end of inlined section */
      if (pIVar5 == pIVar1) {
        pIVar2 = (this->field0_0x0).finish;
      }
      else {
        do {
          if (pIVar5 == n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pIVar3 = pIVar5 + 1;
            if (pIVar3 != pIVar1) {
              iVar6 = ((int)pIVar1 - (int)pIVar3) * -0x45d1745d >> 3;
              for (; 0 < iVar6; iVar6 = iVar6 + -1) {
                pIVar5->fFileoffset = pIVar3->fFileoffset;
                pIVar5->fID = pIVar3->fID;
                pIVar5->fFlags = pIVar3->fFlags;
                pIVar5->fSavedFlags = pIVar3->fSavedFlags;
                pIVar5->fHandle = pIVar3->fHandle;
                copy__12StringBufferRC12StringBuffer
                          (&(pIVar5->fName).field0_0x0,&(pIVar3->fName).field0_0x0);
                pIVar3 = pIVar3 + 1;
                pIVar5 = pIVar5 + 1;
              }
              pIVar1 = (pIVar7->field0_0x0).finish;
            }
            (pIVar7->field0_0x0).finish = pIVar1 + -1;
                    /* end of inlined section */
            pIVar2 = pIVar7 + 1;
            if (((int)(pIVar1 + -1) - (int)(pIVar7->field0_0x0).start) * -0x45d1745d >> 3 != 0) {
              return;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pIVar4 = (this->field0_0x0).finish;
            if (pIVar2 != pIVar4) {
              iVar6 = ((int)pIVar4 - (int)pIVar2) * -0x33333333 >> 2;
              if (iVar6 < 1) {
                pIVar4 = (this->field0_0x0).finish;
              }
              else {
                do {
                  __as__t6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0RCt6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0
                            (&pIVar7->field0_0x0,&pIVar2->field0_0x0);
                  iVar6 = iVar6 + -1;
                  pIVar7->fType = pIVar2->fType;
                  pIVar7->fLastSwizUsed = pIVar2->fLastSwizUsed;
                  pIVar7 = pIVar7 + 1;
                  pIVar2 = pIVar2 + 1;
                } while (0 < iVar6);
                pIVar4 = (this->field0_0x0).finish;
              }
            }
            pIVar7 = pIVar4 + -1;
            (this->field0_0x0).finish = pIVar7;
            pIVar5 = pIVar4[-1].field0_0x0.finish;
            pIVar1 = pIVar4[-1].field0_0x0.start;
            if (pIVar1 == pIVar5) {
              pIVar5 = (pIVar7->field0_0x0).start;
            }
            else {
              do {
                pIVar1 = pIVar1 + 1;
              } while (pIVar1 != pIVar5);
              pIVar5 = (pIVar7->field0_0x0).start;
            }
            if (pIVar5 == (IFFResNode *)0x0) {
              return;
            }
            if (((int)pIVar4[-1].field0_0x0.end_of_storage - (int)pIVar5) * -0x45d1745d >> 3 == 0) {
              return;
            }
            free(pIVar5);
            return;
                    /* end of inlined section */
          }
          pIVar5 = pIVar5 + 1;
        } while (pIVar5 != pIVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        pIVar2 = (this->field0_0x0).finish;
      }
                    /* end of inlined section */
      pIVar7 = pIVar7 + 1;
      if (pIVar7 == pIVar2) break;
      pIVar5 = (pIVar7->field0_0x0).start;
    }
  }
  return;
}

SInt32 IFFResMap::CountTypes() {
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  return ((int)(this->field0_0x0).finish - (int)(this->field0_0x0).start) * -0x33333333 >> 2;
}

ResType IFFResMap::GetIndexedType(SInt32 index) {
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	
  IFFResList *pIVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if ((0 < index) &&
     (pIVar1 = (this->field0_0x0).start,
     index <= ((int)(this->field0_0x0).finish - (int)pIVar1) * -0x33333333 >> 2)) {
                    /* end of inlined section */
    return pIVar1[index + -1].fType;
  }
  return 0;
}

SInt32 IFFResMap::CountNodes(ResType type) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResList *pIVar1;
  int iVar2;
  
  pIVar1 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (pIVar1 == (this->field0_0x0).finish) {
    iVar2 = 0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    iVar2 = ((int)(pIVar1->field0_0x0).finish - (int)(pIVar1->field0_0x0).start) * -0x45d1745d >> 3;
  }
  return iVar2;
}

void IFFResMap::FreeAllHandles() {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResNode *j;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  HandleNode *pAddress;
  IFFResNode *pIVar1;
  IFFResNode *pIVar2;
  IFFResList *pIVar3;
  IFFResList *pIVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pIVar3 = (this->field0_0x0).start;
                    /* end of inlined section */
  if (pIVar3 != (this->field0_0x0).finish) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar2 = (pIVar3->field0_0x0).start;
    while( true ) {
                    /* end of inlined section */
      pIVar4 = pIVar3 + 1;
      if (pIVar2 != (pIVar3->field0_0x0).finish) {
        pAddress = pIVar2->fHandle;
        while( true ) {
          if (pAddress == (HandleNode *)0x0) {
            pIVar1 = (pIVar3->field0_0x0).finish;
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
            if (*(int *)&pAddress->owned != 0) {
              free(pAddress->ptr);
            }
            free(pAddress);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
            pIVar1 = (pIVar3->field0_0x0).finish;
          }
                    /* end of inlined section */
          if (pIVar2 + 1 == pIVar1) break;
          pAddress = pIVar2[1].fHandle;
          pIVar2 = pIVar2 + 1;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      if (pIVar4 == (this->field0_0x0).finish) break;
      pIVar2 = (pIVar4->field0_0x0).start;
      pIVar3 = pIVar4;
    }
  }
  return;
}

void IFFResMap::RemoveAllNodes() {
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *first;
	IFFResList *last;
	IFFResList *pointer;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  IFFResList *pIVar1;
  IFFResList *pIVar2;
  IFFResNode *pAddress;
  IFFResNode *pIVar3;
  IFFResList *pIVar4;
  IFFResList *pIVar5;
  
                    /* inlined from algobase.h */
  pIVar1 = (this->field0_0x0).start;
  pIVar2 = (this->field0_0x0).finish;
  if (pIVar1 != pIVar2) {
    pAddress = (pIVar1->field0_0x0).start;
    pIVar4 = pIVar1;
    while( true ) {
      pIVar5 = pIVar4 + 1;
      for (pIVar3 = pAddress; pIVar3 != (pIVar4->field0_0x0).finish; pIVar3 = pIVar3 + 1) {
      }
      if ((pAddress != (IFFResNode *)0x0) &&
         (((int)(pIVar4->field0_0x0).end_of_storage - (int)pAddress) * -0x45d1745d >> 3 != 0)) {
        free(pAddress);
      }
      if (pIVar5 == pIVar2) break;
      pAddress = (pIVar5->field0_0x0).start;
      pIVar4 = pIVar5;
    }
  }
  (this->field0_0x0).finish =
       (IFFResList *)((int)(this->field0_0x0).finish - ((int)pIVar2 - (int)pIVar1));
  return;
}

void IFFResMap::RemoveAllNodesOfType(ResType type) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *position;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *result;
	IFFResList *result;
	IFFResList *result;
	IFFResList *first;
	ptrdiff_t n;
	IFFResList *this;
	IFFResList &_ctor_arg;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	
  IFFResList *this_00;
  IFFResList *pIVar1;
  IFFResNode *pIVar2;
  IFFResNode *pIVar3;
  IFFResList *pIVar4;
  int iVar5;
  
  this_00 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pIVar1 = (this->field0_0x0).finish;
                    /* end of inlined section */
  pIVar4 = this_00 + 1;
  if (this_00 != pIVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    if (pIVar4 == pIVar1) {
      pIVar1 = (this->field0_0x0).finish;
    }
    else {
      iVar5 = ((int)pIVar1 - (int)pIVar4) * -0x33333333 >> 2;
      for (; 0 < iVar5; iVar5 = iVar5 + -1) {
        __as__t6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0RCt6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0
                  (&this_00->field0_0x0,&pIVar4->field0_0x0);
        this_00->fType = pIVar4->fType;
        this_00->fLastSwizUsed = pIVar4->fLastSwizUsed;
        pIVar4 = pIVar4 + 1;
        this_00 = this_00 + 1;
      }
      pIVar1 = (this->field0_0x0).finish;
    }
    pIVar4 = pIVar1 + -1;
    (this->field0_0x0).finish = pIVar4;
    pIVar3 = pIVar1[-1].field0_0x0.finish;
    pIVar2 = pIVar1[-1].field0_0x0.start;
    if (pIVar2 == pIVar3) {
      pIVar3 = (pIVar4->field0_0x0).start;
    }
    else {
      do {
        pIVar2 = pIVar2 + 1;
      } while (pIVar2 != pIVar3);
      pIVar3 = (pIVar4->field0_0x0).start;
    }
    if ((pIVar3 != (IFFResNode *)0x0) &&
       (((int)pIVar1[-1].field0_0x0.end_of_storage - (int)pIVar3) * -0x45d1745d >> 3 != 0)) {
      free(pIVar3);
    }
  }
  return;
}

SwizzleProc IFFResMap::GetLastSwizzleProc(ResType type) {
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	
  IFFResList *pIVar1;
  undefined1 *puVar2;
  
  pIVar1 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  puVar2 = (undefined1 *)0x0;
  if (pIVar1 != (this->field0_0x0).finish) {
    puVar2 = pIVar1->fLastSwizUsed;
  }
  return puVar2;
}

SInt16 IFFResMap::GetHighestID(ResType type, SInt16 minimum) {
	SInt16 highest;
	IFFResList *i;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResNode *j;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  int iVar2;
  IFFResList *pIVar3;
  IFFResNode *pIVar4;
  long lVar5;
  
  lVar5 = (long)(int)(short)minimum;
  pIVar3 = GetResList__9IFFResMapUib(this,type,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (pIVar3 != (this->field0_0x0).finish) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar1 = (pIVar3->field0_0x0).finish;
    pIVar4 = (pIVar3->field0_0x0).start;
                    /* end of inlined section */
    if (pIVar4 != pIVar1) {
      iVar2 = pIVar4->fID;
      while( true ) {
        if (lVar5 < iVar2) {
          lVar5 = (long)*(short *)&pIVar4->fID;
        }
        if (pIVar4 + 1 == pIVar1) break;
        iVar2 = pIVar4[1].fID;
        pIVar4 = pIVar4 + 1;
      }
    }
  }
  return (ushort)lVar5;
}

void IFFResMap::DoStream(ReconBuffer *r, SInt32 version) {
  Recon32__11ReconBufferPii(r,&this->fFragSize,1);
  DoContainerStream__H2Zt6vector2Z10IFFResListZt23__malloc_alloc_template1i0Z10IFFResList_RX01PX11P11ReconBufferi_v
            (&this->field0_0x0,(this->field0_0x0).start,r,version);
  return;
}

IFFResFile2* IFFResFile2::IFFResFile2() {
  __8iResFile(&this->field0_0x0);
  __7MemFile((MemFile *)&this->field_0x10);
  (this->field0_0x0).__vtable = (iResFile__0_3211__vtable *)_vt_11IFFResFile2;
  *(__vtbl_ptr_type **)&this->field_0x134 = _vt_11IFFResFile2_7MemFile;
  this->fLastNewBlockOffset = -1;
  this->fResMap = (IFFResMap *)0x0;
  this->fMapOffset = 0;
  *(undefined4 *)&this->fChanged = 0;
  *(undefined4 *)&this->fOptimizeTarget = 0;
  this->fSuspendedName = (StackString_260_ *)0x0;
  return this;
}

void IFFResFile2::~IFFResFile2(int __in_chrg) {
  bool bVar1;
  
  *(__vtbl_ptr_type **)&this->field_0x134 = _vt_11IFFResFile2_7MemFile;
  (this->field0_0x0).__vtable = (iResFile__0_3211__vtable *)_vt_11IFFResFile2;
  bVar1 = ValidFile__11IFFResFile2(this);
  if (bVar1) {
    Close__11IFFResFile2(this);
  }
  ___7MemFile((MemFile *)&this->field_0x10,0);
  ___8iResFile(&this->field0_0x0,__in_chrg);
  return;
}

ErrType IFFResFile2::Open(StringBuffer &path) {
	IFFHeader temheader;
	IFFResNode *newspot;
	SInt32 theoffset;
	ErrType err;
	SInt32 mapOffset;
	unsigned char header[64];
	SInt32 size;
	int i;
	HandleNode *h;
	HandleNode *mem;
	IFFResMap *this;
	
  iResFile__0_3211__vtable *piVar1;
  HandleNode *mem;
  ushort uVar2;
  int iVar3;
  IFFResMap *pIVar4;
  int iVar5;
  IFFResNode *pIVar6;
  long lVar7;
  undefined *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  uint fileoffset;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  IFFHeader temheader;
  uchar header [64];
  StringBuffer SStack_c0;
  char acStack_b8 [72];
  int size;
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
  
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  piVar1 = (this->field0_0x0).__vtable;
  lVar7 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar7 != 0) {
    return -0x2f;
  }
  fileoffset = 0;
  this_00 = &this->field_0x10;
  iVar3 = Open__7MemFileRC12StringBuffer((MemFile *)this_00,path);
  if (iVar3 != 0) {
    return iVar3;
  }
  size = 0x40;
  iVar3 = SetPos__7MemFilei((MemFile *)this_00,0);
  if ((iVar3 == 0) && (iVar3 = ReadBlock__7MemFilePvPi((MemFile *)this_00,header,&size), iVar3 == 0)
     ) {
    if ((sUniqueHeader[0] == '*') || (sUniqueHeader[0] == header[0])) {
      iVar5 = 1;
      while (iVar5 < 0x40) {
        if (sUniqueHeader[iVar5] == '*') {
          iVar5 = iVar5 + 1;
        }
        else {
          if (sUniqueHeader[iVar5] != header[iVar5]) {
            iVar3 = -0x5d;
            break;
          }
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      iVar3 = -0x5d;
    }
    if (iVar3 == 0) {
      uVar2 = (header[9] - 0x30) * 0x100 | header[11] - 0x30;
      if (uVar2 != 0x200) {
        if (uVar2 == 0x205) {
          fileoffset = (uint)header[60] << 0x18 | (uint)header[61] << 0x10 | (uint)header[62] << 8 |
                       (uint)header[63];
          this->fMapOffset = fileoffset;
        }
        else {
          iVar3 = -0x5d;
        }
      }
      if (iVar3 == 0) goto LAB_0025a9c4;
    }
  }
  Close__7MemFile((MemFile *)this_00);
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_0025a9c4:
  pIVar4 = (IFFResMap *)__builtin_new(0x10);
  this->fResMap = pIVar4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  (pIVar4->field0_0x0).start = (IFFResList *)0x0;
  (pIVar4->field0_0x0).finish = (IFFResList *)0x0;
  (pIVar4->field0_0x0).end_of_storage = (IFFResList *)0x0;
                    /* end of inlined section */
  pIVar4->fFragSize = 0;
  if (fileoffset != 0) {
    iVar5 = GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&temheader,fileoffset);
    if (((iVar5 == 0) && ((temheader.fFlags & 4) == 0)) && (temheader.fType == 0x72736d70)) {
      pIVar6 = MakeNewNode__9IFFResMapUi(this->fResMap,0x72736d70);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
      pIVar6->fID = (int)(short)temheader.fID;
      pIVar6->fFileoffset = fileoffset;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      pIVar6->fFlags = temheader.fFlags;
      __12StringBufferPcUi(&SStack_c0,acStack_b8,0x40);
      append__12StringBufferPCci(&SStack_c0,temheader.fName,-1);
      copy__12StringBufferRC12StringBuffer(&(pIVar6->fName).field0_0x0,&SStack_c0);
                    /* end of inlined section */
      pIVar6->fHandle = (HandleNode *)0x0;
      iVar5 = LoadNode__11IFFResFile2P10IFFResNodePFPvi_vi
                        (this,pIVar6,(undefined1 *)0x0,temheader.fType);
      mem = pIVar6->fHandle;
      if ((iVar5 == 0) && (mem != (HandleNode *)0x0)) {
        pIVar6->fHandle = (HandleNode *)0x0;
        ReconLoadObject__H1Z9IFFResMap_PX01PQ26Memory10HandleNodeiPi_v
                  (this->fResMap,mem,0x72736d70,(int *)0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
        if (*(int *)&mem->owned != 0) {
          free(mem->ptr);
        }
        free(mem);
                    /* end of inlined section */
        pIVar6 = GetNode__9IFFResMapUiiPFPvi_v(this->fResMap,0x72736d70,0,(undefined1 *)0x0);
        if (pIVar6 != (IFFResNode *)0x0) {
          fileoffset = 0;
          RemoveAllNodes__9IFFResMap(this->fResMap);
        }
      }
      else {
        fileoffset = 0;
      }
    }
    else {
      fileoffset = 0;
      iVar3 = -0x2f;
    }
  }
  if (iVar3 == 0) {
    if (fileoffset == 0) {
      iVar3 = 0x40;
      while ((iVar5 = GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&temheader,iVar3), iVar5 == 0
             && (temheader.fSize - 0x4cU < 0x3fffffb5))) {
        if ((temheader.fFlags & 4) == 0) {
          pIVar6 = MakeNewNode__9IFFResMapUi(this->fResMap,temheader.fType);
          if (pIVar6 != (IFFResNode *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
            pIVar6->fID = (int)(short)temheader.fID;
            pIVar6->fFlags = temheader.fFlags;
            pIVar6->fFileoffset = iVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
            pIVar6->fSavedFlags = temheader.fFlags;
            __12StringBufferPcUi((StringBuffer *)header,(char *)(header + 8),0x40);
            append__12StringBufferPCci((StringBuffer *)header,temheader.fName,-1);
            copy__12StringBufferRC12StringBuffer(&(pIVar6->fName).field0_0x0,(StringBuffer *)header)
            ;
                    /* end of inlined section */
            pIVar6->fHandle = (HandleNode *)0x0;
          }
        }
        else {
          this->fResMap->fFragSize = this->fResMap->fFragSize + temheader.fSize;
        }
        iVar3 = iVar3 + temheader.fSize;
      }
      pIVar4 = this->fResMap;
    }
    else {
      pIVar4 = this->fResMap;
    }
    RemoveAllNodesOfType__9IFFResMapUi(pIVar4,0x72736d70);
    *(undefined4 *)&this->fChanged = 0;
    iVar3 = 0;
  }
  return iVar3;
}

ErrType IFFResFile2::Create(StringBuffer &name) {
	ErrType err;
	MemFile temp;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  long lVar3;
  MemFile temp;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  iVar2 = -0x2f;
  if ((lVar3 == 0) &&
     (iVar2 = Create__7MemFileRC12StringBuffer((MemFile *)&this->field_0x10,name), iVar2 == 0)) {
    __7MemFile(&temp);
    Open__7MemFileRC12StringBuffer(&temp,name);
    iVar2 = WriteHeader__11IFFResFile2P7MemFilei(this,&temp,0);
    Close__7MemFile(&temp);
    ___7MemFile(&temp,2);
  }
  return iVar2;
}

ErrType IFFResFile2::ClearMap(StringBuffer &name) {
	ErrType err;
	MemFile temp;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  long lVar3;
  MemFile temp;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar3 == 0) {
    __7MemFile(&temp);
    Open__7MemFileRC12StringBuffer(&temp,name);
    iVar2 = WriteHeader__11IFFResFile2P7MemFilei(this,&temp,0);
    Close__7MemFile(&temp);
    ___7MemFile(&temp,2);
  }
  else {
    iVar2 = -0x2f;
  }
  return iVar2;
}

ErrType IFFResFile2::WriteHeader(MemFile *file, SInt32 mapOffset) {
	ErrType err;
	unsigned char header[64];
	SInt32 size;
	int i;
	
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  uchar header [64];
  int size;
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
  iVar4 = this->fMapOffset;
  if (iVar4 != 0) {
    this->fMapOffset = 0;
    iVar1 = InvalBlockHeader__11IFFResFile2i(this,iVar4);
    this->fMapOffset = iVar4;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar4 = 0;
  do {
    puVar2 = sUniqueHeader + iVar4;
    puVar3 = header + iVar4;
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar2;
  } while (iVar4 < 0x40);
  header[9] = '2';
  header[11] = '5';
  header[60] = (uchar)((uint)mapOffset >> 0x18);
  header[61] = (uchar)((uint)mapOffset >> 0x10);
  header[62] = (uchar)((uint)mapOffset >> 8);
  size = 0x40;
  header[63] = (uchar)mapOffset;
  iVar4 = SetPos__7MemFilei(file,0);
  if ((iVar4 == 0) && (iVar4 = WriteBlock__7MemFilePvPi(file,header,&size), iVar4 == 0)) {
    Flush__7MemFile((MemFile *)&this->field_0x10);
    this->fMapOffset = mapOffset;
    if (file == (MemFile *)&this->field_0x10) {
      *(undefined4 *)&this->fChanged = 1;
    }
    iVar4 = 0;
  }
  return iVar4;
}

ErrType IFFResFile2::Delete(StringBuffer &name) {
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  long lVar3;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  iVar2 = -0x2f;
  if (lVar3 == 0) {
    iVar2 = Delete__7MemFileRC12StringBuffer((MemFile *)&this->field_0x10,name);
  }
  return iVar2;
}

ErrType IFFResFile2::Close() {
	ErrType err;
	IFFResMap *this;
	HandleNode *h;
	ResourceName n;
	IFFResNode *node;
	
  int iVar1;
  IFFResNode *pIVar2;
  HandleNode *pHVar3;
  long lVar4;
  iResFile__0_3211__vtable *piVar5;
  StackString_64_ n;
  
  piVar5 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar5->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar5->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar1 = GetError__8iResFile(&this->field0_0x0);
  if (iVar1 == 0) {
    piVar5 = (this->field0_0x0).__vtable;
    iVar1 = 0;
    lVar4 = (*(code *)piVar5->GetResType)
                      ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar5->GetName);
    if ((lVar4 != 0) && (*(int *)&this->fChanged != 0)) {
      piVar5 = (this->field0_0x0).__vtable;
      (*(code *)piVar5->GetByIDAndLanguage)
                ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar5->GetByIndex);
      iVar1 = (this->field0_0x0).fLastError;
    }
    piVar5 = (this->field0_0x0).__vtable;
    if (iVar1 == 0) {
      lVar4 = (*(code *)piVar5->GetResType)
                        ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar5->GetName);
      if (lVar4 == 0) {
        piVar5 = (this->field0_0x0).__vtable;
      }
      else if (this->fMapOffset == 0) {
        if (*(int *)&this->fChanged == 0) {
          piVar5 = (this->field0_0x0).__vtable;
        }
        else if (*(int *)&this->fOptimizeTarget == 0) {
          if (this->fResMap->fFragSize < 0x2800) {
            piVar5 = (this->field0_0x0).__vtable;
          }
          else {
            iVar1 = Defrag__11IFFResFile2(this);
            piVar5 = (this->field0_0x0).__vtable;
          }
        }
        else {
          piVar5 = (this->field0_0x0).__vtable;
        }
      }
      else {
        piVar5 = (this->field0_0x0).__vtable;
      }
    }
    lVar4 = (*(code *)piVar5->GetResType)
                      ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar5->GetName);
    if (((lVar4 != 0) && (iVar1 == 0)) && (*(int *)&this->fChanged != 0)) {
      RemoveAllNodesOfType__9IFFResMapUi(this->fResMap,0x72736d70);
      pIVar2 = GetNode__9IFFResMapUiiPFPvi_v(this->fResMap,0x72736d70,0,(undefined1 *)0x0);
      if (pIVar2 == (IFFResNode *)0x0) {
        pHVar3 = ReconSaveObject__H1Z9IFFResMap_PX01ii_PQ26Memory10HandleNode
                           (this->fResMap,0x72736d70,0);
        if (pHVar3 != (HandleNode *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
          __12StringBufferPcUi(&n.field0_0x0,(char *)((uint)&n | 8),0x40);
          append__12StringBufferPCci(&n.field0_0x0,"",-1);
                    /* end of inlined section */
          piVar5 = (this->field0_0x0).__vtable;
          (*(code *)piVar5[1].FindUniqueID)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar5[1].FindUniqueName,
                     pHVar3,0x72736d70,0,&n,1);
          if ((((this->field0_0x0).fLastError == 0) &&
              (piVar5 = (this->field0_0x0).__vtable,
              (*(code *)piVar5[1].SetID)
                        ((int)&(this->field0_0x0).fNextFile +
                         (int)*(short *)&piVar5[1].IsLittleEndian,pHVar3),
              (this->field0_0x0).fLastError == 0)) &&
             ((pIVar2 = GetNode__9IFFResMapUiiPFPvi_v(this->fResMap,0x72736d70,0,(undefined1 *)0x0),
              pIVar2 != (IFFResNode *)0x0 && (pIVar2->fFileoffset != -1)))) {
            WriteHeader__11IFFResFile2P7MemFilei
                      (this,(MemFile *)&this->field_0x10,pIVar2->fFileoffset);
          }
        }
      }
    }
    FreeAllHandles__9IFFResMap(this->fResMap);
    RemoveAllNodes__9IFFResMap(this->fResMap);
    if (this->fResMap == (IFFResMap *)0x0) {
      this->fResMap = (IFFResMap *)0x0;
    }
    else {
      ___9IFFResMap(this->fResMap,3);
      this->fResMap = (IFFResMap *)0x0;
    }
    iVar1 = Close__7MemFile((MemFile *)&this->field_0x10);
    SetError__8iResFilei(&this->field0_0x0,iVar1);
  }
  else {
    iVar1 = GetError__8iResFile(&this->field0_0x0);
  }
  return iVar1;
}

ErrType IFFResFile2::CloseForReopen() {
  iResFile__0_3211__vtable *piVar1;
  StackString_260_ *this_00;
  int iVar2;
  
  this_00 = (StackString_260_ *)__builtin_new(0x10c);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi((StringBuffer *)this_00,this_00->fChars,0x104);
                    /* end of inlined section */
  this->fSuspendedName = this_00;
  GetFileName__7MemFileR12StringBuffer((MemFile *)&this->field_0x10,(StringBuffer *)this_00);
  piVar1 = (this->field0_0x0).__vtable;
  iVar2 = (*(code *)piVar1->GetByName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetByID);
  return iVar2;
}

ErrType IFFResFile2::Reopen() {
	FileName name;
	StackString<260> &other;
	
  StackString_260_ *other;
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  StackString_260_ name;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  other = this->fSuspendedName;
  __12StringBufferPcUi(&name.field0_0x0,(char *)((uint)&name | 8),0x104);
  append__12StringBufferRC12StringBufferi(&name.field0_0x0,&other->field0_0x0,-1);
  _memmanFree__FPv(this->fSuspendedName);
                    /* end of inlined section */
  this->fSuspendedName = (StackString_260_ *)0x0;
  iVar2 = length__C12StringBuffer(&name.field0_0x0);
  if (iVar2 == 0) {
    iVar2 = -0x32;
  }
  else {
    piVar1 = (this->field0_0x0).__vtable;
    iVar2 = (*(code *)piVar1->GetFileName)
                      ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->Writable,&name);
    this->fLastNewBlockOffset = 0;
  }
  return iVar2;
}

void IFFResFile2::Update() {
	ErrType err;
	IFFResMap *c;
	SInt32 numtypes;
	ResType type;
	SInt32 numres;
	IFFResNode *res;
	FileName name;
	
  iResFile__0_3211__vtable *piVar1;
  IFFResMap *this_00;
  int iVar2;
  uint type;
  int index;
  IFFResNode *pIVar3;
  int err;
  long lVar4;
  StackString_260_ name;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    this_00 = this->fResMap;
    err = 0;
    iVar2 = CountTypes__9IFFResMap(this_00);
    while (0 < iVar2) {
      type = GetIndexedType__9IFFResMapi(this_00,iVar2);
      iVar2 = iVar2 + -1;
      for (index = CountNodes__9IFFResMapUi(this_00,type); 0 < index; index = index + -1) {
        pIVar3 = GetIndNode__9IFFResMapUiiPFPvi_v(this_00,type,index,(undefined1 *)0x0);
        if ((pIVar3->fFileoffset == -1) &&
           (piVar1 = (this->field0_0x0).__vtable,
           (*(code *)piVar1[1].SetID)
                     ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1[1].IsLittleEndian,
                      pIVar3->fHandle), err == 0)) {
          err = GetError__8iResFile(&this->field0_0x0);
        }
      }
    }
    if (err == 0) {
      err = Flush__7MemFile((MemFile *)&this->field_0x10);
                    /* end of inlined section */
    }
    SetError__8iResFilei(&this->field0_0x0,err);
  }
  return;
}

bool IFFResFile2::Writable() {
  return SUB41(*(undefined4 *)&this->field_0x11c,0);
}

void IFFResFile2::GetFileName(StringBuffer &name) {
  GetFileName__7MemFileR12StringBuffer((MemFile *)&this->field_0x10,name);
  return;
}

bool IFFResFile2::ValidFile() {
  bool bVar1;
  
  bVar1 = ValidFile__7MemFile((MemFile *)&this->field_0x10);
  return bVar1;
}

SInt16 IFFResFile2::CountTypes() {
  iResFile__0_3211__vtable *piVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar3 = GetError__8iResFile(&this->field0_0x0);
  if (iVar3 == 0) {
    iVar3 = CountTypes__9IFFResMap(this->fResMap);
    uVar2 = (ushort)iVar3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

SInt32 IFFResFile2::GetIndType(SInt16 index) {
	SInt32 type;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  uVar3 = 0;
  if ((iVar2 == 0) &&
     (uVar3 = GetIndexedType__9IFFResMapi(this->fResMap,(int)(short)index), uVar3 == 0)) {
    SetError__8iResFilei(&this->field0_0x0,-100);
  }
  return uVar3;
}

SInt16 IFFResFile2::Count(SInt32 type) {
  iResFile__0_3211__vtable *piVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar3 = GetError__8iResFile(&this->field0_0x0);
  if (iVar3 == 0) {
    iVar3 = CountNodes__9IFFResMapUi(this->fResMap,type);
    uVar2 = (ushort)iVar3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

HandleNode* IFFResFile2::GetByIDAndLanguage(SInt32 type, SInt16 id, char langCode, SwizzleProc Swizzler) {
	IFFResNode *rc;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *rc;
  HandleNode *pHVar3;
  long lVar4;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  pHVar3 = (HandleNode *)0x0;
  if (iVar2 == 0) {
    rc = GetNodeWithLanguage__9IFFResMapUiicPFPvi_v
                   (this->fResMap,type,(int)(short)id,langCode,Swizzler);
    if (rc == (IFFResNode *)0x0) {
      piVar1 = (this->field0_0x0).__vtable;
      lVar4 = (*(code *)piVar1->FindUniqueName)
                        ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
      if (lVar4 == 0) {
        SetError__8iResFilei(&this->field0_0x0,-0x31);
        pHVar3 = (HandleNode *)0x0;
      }
      else {
        SetError__8iResFilei(&this->field0_0x0,-0x62);
        pHVar3 = (HandleNode *)0x0;
      }
    }
    else {
      iVar2 = LoadNode__11IFFResFile2P10IFFResNodePFPvi_vi(this,rc,Swizzler,type);
      SetError__8iResFilei(&this->field0_0x0,iVar2);
      pHVar3 = rc->fHandle;
    }
  }
  return pHVar3;
}

HandleNode* IFFResFile2::GetByID(SInt32 type, SInt16 id, SwizzleProc Swizzler) {
  iResFile__0_3211__vtable *piVar1;
  HandleNode *pHVar2;
  
  piVar1 = (this->field0_0x0).__vtable;
  pHVar2 = (HandleNode *)
           (*(code *)piVar1[1]._dyncastimpl)
                     ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1[1].iResFile,type,
                      id,0,Swizzler);
  return pHVar2;
}

HandleNode* IFFResFile2::GetByName(SInt32 type, StringBuffer &name, SwizzleProc Swizzler) {
	IFFResNode *spot;
	StringBuffer &other;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *rc;
  long lVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  StackString_64_ SStack_a0;
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
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar3 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    iVar2 = length__C12StringBuffer(name);
    if (iVar2 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      __12StringBufferPcUi(&SStack_a0.field0_0x0,(char *)((uint)&SStack_a0 | 8),0x40);
      append__12StringBufferRC12StringBufferi(&SStack_a0.field0_0x0,name,-1);
                    /* end of inlined section */
      rc = GetNode__9IFFResMapUiRCt11StackString1Ui64PFPvi_v(this->fResMap,type,&SStack_a0,Swizzler)
      ;
      if (rc != (IFFResNode *)0x0) {
        iVar2 = LoadNode__11IFFResFile2P10IFFResNodePFPvi_vi(this,rc,Swizzler,type);
        SetError__8iResFilei(&this->field0_0x0,iVar2);
        return rc->fHandle;
      }
    }
    SetError__8iResFilei(&this->field0_0x0,-99);
  }
  return (HandleNode *)0x0;
}

HandleNode* IFFResFile2::GetByIndex(SInt32 type, SInt16 index, SwizzleProc Swizzler) {
	IFFResNode *rc;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *rc;
  HandleNode *pHVar3;
  long lVar4;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  pHVar3 = (HandleNode *)0x0;
  if (iVar2 == 0) {
    rc = GetIndNode__9IFFResMapUiiPFPvi_v(this->fResMap,type,(int)(short)index,Swizzler);
    if (rc == (IFFResNode *)0x0) {
      piVar1 = (this->field0_0x0).__vtable;
      lVar4 = (*(code *)piVar1->FindUniqueName)
                        ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
      if (lVar4 == 0) {
        SetError__8iResFilei(&this->field0_0x0,-0x31);
        pHVar3 = (HandleNode *)0x0;
      }
      else {
        SetError__8iResFilei(&this->field0_0x0,-0x62);
        pHVar3 = (HandleNode *)0x0;
      }
    }
    else {
      iVar2 = LoadNode__11IFFResFile2P10IFFResNodePFPvi_vi(this,rc,Swizzler,type);
      SetError__8iResFilei(&this->field0_0x0,iVar2);
      pHVar3 = rc->fHandle;
    }
  }
  return pHVar3;
}

void IFFResFile2::GetName(HandleNode *res, StringBuffer &name) {
	ResType type;
	IFFResNode *rc;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *pIVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint type;
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
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    pIVar3 = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
    if (pIVar3 == (IFFResNode *)0x0) {
      erase__12StringBuffer(name);
      SetError__8iResFilei(&this->field0_0x0,-0x62);
    }
    else {
      copy__12StringBufferRC12StringBuffer(name,&(pIVar3->fName).field0_0x0);
    }
  }
  return;
}

char IFFResFile2::GetLanguage(HandleNode *res) {
	ResType type;
	IFFResNode *rc;
	
  iResFile__0_3211__vtable *piVar1;
  char cVar2;
  int iVar3;
  IFFResNode *pIVar4;
  long lVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint type;
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
  piVar1 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar5 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar3 = GetError__8iResFile(&this->field0_0x0);
  cVar2 = '\0';
  if (iVar3 == 0) {
    pIVar4 = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
    if (pIVar4 == (IFFResNode *)0x0) {
      SetError__8iResFilei(&this->field0_0x0,-0x62);
      cVar2 = '\0';
    }
    else {
      cVar2 = GetLanguage__Fs(pIVar4->fFlags);
    }
  }
  return cVar2;
}

SInt32 IFFResFile2::GetResType(HandleNode *res) {
	ResType type;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *pIVar3;
  uint uVar4;
  long lVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint type;
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
  piVar1 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar5 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  uVar4 = 0;
  if (iVar2 == 0) {
    pIVar3 = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
    uVar4 = type;
    if (pIVar3 == (IFFResNode *)0x0) {
      SetError__8iResFilei(&this->field0_0x0,-0x62);
      uVar4 = 0;
    }
  }
  return uVar4;
}

void IFFResFile2::GetID(HandleNode *res, SInt16 *id) {
	ResType type;
	IFFResNode *rc;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *pIVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint type;
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
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    pIVar3 = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
    if (pIVar3 == (IFFResNode *)0x0) {
      SetError__8iResFilei(&this->field0_0x0,-0x62);
    }
    else {
      *id = *(ushort *)&pIVar3->fID;
    }
  }
  return;
}

void IFFResFile2::GetIndex(HandleNode *res, SInt16 *index) {
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  long lVar3;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage,res);
  if (lVar3 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x5f);
    *index = 0;
  }
  return;
}

void IFFResFile2::FindUniqueName(SInt32 resType, StringBuffer &name) {
	ResourceName startname;
	int modifier;
	bool unique;
	StringBuffer &other;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *pIVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  StackString_64_ startname;
  StackString_64_ SStack_c0;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    iVar2 = 0;
    __12StringBufferPcUi(&startname.field0_0x0,(char *)((uint)&startname | 8),0x40);
                    /* end of inlined section */
    copy__12StringBufferRC12StringBuffer(&startname.field0_0x0,name);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    while( true ) {
      __12StringBufferPcUi(&SStack_c0.field0_0x0,SStack_c0.fChars,0x40);
      append__12StringBufferRC12StringBufferi(&SStack_c0.field0_0x0,name,-1);
                    /* end of inlined section */
      pIVar3 = GetNode__9IFFResMapUiRCt11StackString1Ui64PFPvi_v
                         (this->fResMap,resType,&SStack_c0,(undefined1 *)0x0);
      if (pIVar3 == (IFFResNode *)0x0) break;
      copy__12StringBufferRC12StringBuffer(name,&startname.field0_0x0);
      appendNum__12StringBufferi(name,iVar2);
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

SInt16 IFFResFile2::FindUniqueID(SInt32 rType) {
  iResFile__0_3211__vtable *piVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar4 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar3 = GetError__8iResFile(&this->field0_0x0);
  if (iVar3 == 0) {
    uVar2 = GetHighestID__9IFFResMapUis(this->fResMap,rType,0x80);
    uVar2 = uVar2 + 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

void IFFResFile2::Detach(HandleNode *res) {
	IFFResNode *rc;
	ResType type;
	
  iResFile__0_3211__vtable *piVar1;
  ushort uVar2;
  int iVar3;
  IFFResNode *pIVar4;
  long lVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint type;
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
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  piVar1 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar5 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar3 = GetError__8iResFile(&this->field0_0x0);
  if (iVar3 == 0) {
    pIVar4 = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
    if (pIVar4 == (IFFResNode *)0x0) {
      SetError__8iResFilei(&this->field0_0x0,-99);
    }
    else {
      if (pIVar4->fFileoffset == -1) {
        piVar1 = (this->field0_0x0).__vtable;
        (*(code *)piVar1[1].SetID)
                  ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1[1].IsLittleEndian,res
                  );
        uVar2 = pIVar4->fSavedFlags;
      }
      else {
        uVar2 = pIVar4->fSavedFlags;
      }
      pIVar4->fHandle = (HandleNode *)0x0;
      pIVar4->fFlags = uVar2;
      SetError__8iResFilei(&this->field0_0x0,0);
    }
  }
  return;
}

void IFFResFile2::Load(HandleNode *res) {
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  long lVar3;
  
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage,res);
  if (lVar3 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x5f);
  }
  return;
}

bool IFFResFile2::IsLittleEndian(HandleNode *res) {
	ResType type;
	IFFResNode *rc;
	
  iResFile__0_3211__vtable *piVar1;
  bool bVar2;
  int iVar3;
  IFFResNode *pIVar4;
  long lVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint type;
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
  piVar1 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar5 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar3 = GetError__8iResFile(&this->field0_0x0);
  bVar2 = true;
  if (iVar3 == 0) {
    pIVar4 = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
    if (pIVar4 == (IFFResNode *)0x0) {
      SetError__8iResFilei(&this->field0_0x0,-99);
      bVar2 = true;
    }
    else {
      SetError__8iResFilei(&this->field0_0x0,0);
      bVar2 = (bool)((byte)(pIVar4->fFlags >> 4) & 1);
    }
  }
  return bVar2;
}

void IFFResFile2::SetID(HandleNode *res, SInt16 id) {
	ResourceName oldName;
	
  iResFile__0_3211__vtable *piVar1;
  undefined8 uVar2;
  StackString_64_ oldName;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&oldName.field0_0x0,(char *)((uint)&oldName | 8),0x40);
                    /* end of inlined section */
  piVar1 = (this->field0_0x0).__vtable;
  (*(code *)piVar1[1].Delete)
            ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1[1].Create,res,&oldName);
  piVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)piVar1[1].ValidFile)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1[1].GetFileName,res)
  ;
  if ((this->field0_0x0).fLastError == 0) {
    piVar1 = (this->field0_0x0).__vtable;
    (*(code *)piVar1[1].Remove)
              ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1[1].Write,res,id,&oldName,
               uVar2);
  }
  return;
}

void IFFResFile2::AddWithLanguage(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, char langCode, bool littleEndian) {
	IFFResNode *spot;
	ErrType err;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *spot;
  long lVar3;
  int id;
  
  id = (int)(short)rID;
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar3 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    piVar1 = (this->field0_0x0).__vtable;
    lVar3 = (*(code *)piVar1->FindUniqueName)
                      ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
    if (lVar3 == 0) {
      SetError__8iResFilei(&this->field0_0x0,-0x31);
    }
    else {
      piVar1 = (this->field0_0x0).__vtable;
      lVar3 = (*(code *)piVar1->GetResType)
                        ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetName);
      if (lVar3 == 0) {
        SetError__8iResFilei(&this->field0_0x0,-0x2d);
      }
      else {
        spot = GetNodeWithLanguage__9IFFResMapUiicPFPvi_v
                         (this->fResMap,rType,id,langCode,(undefined1 *)0x0);
        if (spot == (IFFResNode *)0x0) {
          spot = MakeNewNode__9IFFResMapUi(this->fResMap,rType);
          spot->fID = id;
        }
        else {
          if (spot->fHandle == theHandle) {
            spot->fHandle = (HandleNode *)0x0;
          }
          iVar2 = LowLevelRemove__11IFFResFile2P10IFFResNode(this,spot);
          if (iVar2 != 0) {
            SetError__8iResFilei(&this->field0_0x0,iVar2);
            return;
          }
          Flush__7MemFile((MemFile *)&this->field_0x10);
          spot->fID = id;
        }
        if (littleEndian) {
          spot->fFlags = 0x10;
        }
        else {
          spot->fFlags = 0;
        }
        SetLanguage__FPsc(&spot->fFlags,langCode);
        spot->fHandle = theHandle;
        spot->fSavedFlags = 0;
        copy__12StringBufferRC12StringBuffer(&(spot->fName).field0_0x0,rName);
        spot->fFileoffset = -1;
      }
    }
  }
  return;
}

void IFFResFile2::Add(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, bool littleEndian) {
  iResFile__0_3211__vtable *piVar1;
  
  piVar1 = (this->field0_0x0).__vtable;
  (*(code *)piVar1[1].Load)
            ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1[1].Detach,theHandle,rType,
             rID,rName,0,littleEndian);
  return;
}

void IFFResFile2::Write(HandleNode *res) {
	SInt32 size;
	ResType type;
	IFFResNode *rc;
	IFFHeader newheader;
	ErrType err;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *h;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *fileoffset;
  char *__src;
  long lVar3;
  undefined *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  IFFHeader newheader;
  uint type;
  int size;
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
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar3 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    piVar1 = (this->field0_0x0).__vtable;
    lVar3 = (*(code *)piVar1->FindUniqueName)
                      ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
    if (lVar3 == 0) {
      SetError__8iResFilei(&this->field0_0x0,-0x31);
    }
    else {
      piVar1 = (this->field0_0x0).__vtable;
      lVar3 = (*(code *)piVar1->GetResType)
                        ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetName);
      if (lVar3 == 0) {
        SetError__8iResFilei(&this->field0_0x0,-0x2d);
      }
      else {
        fileoffset = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                               (this->fResMap,res,&type,(undefined1 *)0x0);
        if (fileoffset == (IFFResNode *)0x0) {
          SetError__8iResFilei(&this->field0_0x0,-99);
        }
        else {
          SetError__8iResFilei(&this->field0_0x0,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          size = 0;
          if (res != (HandleNode *)0x0) {
            size = res->allocSize;
          }
                    /* end of inlined section */
                    /* end of inlined section */
          if (fileoffset->fFileoffset == -1) {
            NewBlockHeader__11IFFResFile2P9IFFHeaderUiPi
                      (this,&newheader,size,&fileoffset->fFileoffset);
          }
          else {
            GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&newheader,fileoffset->fFileoffset);
            if (newheader.fSize != size + 0x4c) {
              InvalBlockHeader__11IFFResFile2i(this,fileoffset->fFileoffset);
              NewBlockHeader__11IFFResFile2P9IFFHeaderUiPi
                        (this,&newheader,size,&fileoffset->fFileoffset);
            }
          }
          newheader.fID = *(ushort *)&fileoffset->fID;
          newheader.fFlags = fileoffset->fFlags;
          __src = c_str__C12StringBuffer(&(fileoffset->fName).field0_0x0);
          strncpy(newheader.fName,__src,0x3f);
          newheader.fName[63] = '\0';
          iVar2 = SetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&newheader,fileoffset->fFileoffset)
          ;
          if (iVar2 == 0) {
            this_00 = &this->field_0x10;
            iVar2 = SetPos__7MemFilei((MemFile *)this_00,fileoffset->fFileoffset + 0x4c);
                    /* end of inlined section */
            if ((iVar2 == 0) &&
               (iVar2 = WriteBlock__7MemFilePvPi((MemFile *)this_00,res->ptr,&size), iVar2 == 0)) {
              fileoffset->fSavedFlags = fileoffset->fFlags;
              Flush__7MemFile((MemFile *)this_00);
              return;
            }
          }
          SetError__8iResFilei(&this->field0_0x0,iVar2);
        }
      }
    }
  }
  return;
}

void IFFResFile2::Remove(HandleNode *res) {
	ResType type;
	IFFResNode *spot;
	ErrType err;
	
  iResFile__0_3211__vtable *piVar1;
  int iVar2;
  IFFResNode *spot;
  long lVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint type;
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
  piVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)piVar1->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetLanguage);
  if (lVar3 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar2 = GetError__8iResFile(&this->field0_0x0);
  if (iVar2 == 0) {
    piVar1 = (this->field0_0x0).__vtable;
    lVar3 = (*(code *)piVar1->GetResType)
                      ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar1->GetName);
    if (lVar3 == 0) {
      SetError__8iResFilei(&this->field0_0x0,-0x2d);
    }
    else {
      spot = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
      if (spot == (IFFResNode *)0x0) {
        SetError__8iResFilei(&this->field0_0x0,-99);
      }
      else {
        iVar2 = LowLevelRemove__11IFFResFile2P10IFFResNode(this,spot);
        if (iVar2 == 0) {
          RemoveNode__9IFFResMapP10IFFResNode(this->fResMap,spot);
        }
        else {
          SetError__8iResFilei(&this->field0_0x0,iVar2);
        }
      }
      Flush__7MemFile((MemFile *)&this->field_0x10);
    }
  }
  return;
}

void IFFResFile2::SetInfo(HandleNode *res, SInt16 id, StringBuffer &name, char langCode) {
	ResType type;
	IFFResNode *spot;
	Boolean changed;
	IFFHeader header;
	ErrType err;
	
  bool bVar1;
  iResFile__0_3211__vtable *piVar2;
  int iVar3;
  IFFResNode *pIVar4;
  char *__src;
  long lVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar6;
  StackString_64_ *other;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  IFFHeader header;
  uint type;
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
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  iVar6 = (int)(short)id;
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  piVar2 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)piVar2->FindUniqueName)
                    ((int)&(this->field0_0x0).fNextFile + (int)*(short *)&piVar2->GetLanguage);
  if (lVar5 == 0) {
    SetError__8iResFilei(&this->field0_0x0,-0x31);
  }
  else {
    SetError__8iResFilei(&this->field0_0x0,0);
  }
  iVar3 = GetError__8iResFile(&this->field0_0x0);
  if (iVar3 == 0) {
    pIVar4 = GetNode__9IFFResMapPQ26Memory10HandleNodePUiPFPvi_v
                       (this->fResMap,res,&type,(undefined1 *)0x0);
    if (pIVar4 == (IFFResNode *)0x0) {
      SetError__8iResFilei(&this->field0_0x0,-99);
    }
    else {
      bVar1 = pIVar4->fID != iVar6;
      if (bVar1) {
        pIVar4->fID = iVar6;
      }
      other = &pIVar4->fName;
      iVar6 = compare__C12StringBufferRC12StringBuffer(name,&other->field0_0x0);
      if (iVar6 != 0) {
        copy__12StringBufferRC12StringBuffer(&other->field0_0x0,name);
      }
      if ((iVar6 != 0 || bVar1) && (pIVar4->fFileoffset != -1)) {
        iVar6 = GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&header,pIVar4->fFileoffset);
        if (iVar6 == 0) {
          header.fID = *(ushort *)&pIVar4->fID;
          __src = c_str__C12StringBuffer(&other->field0_0x0);
          strncpy(header.fName,__src,0x3f);
          header.fName[63] = '\0';
          SetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&header,pIVar4->fFileoffset);
        }
        SetError__8iResFilei(&this->field0_0x0,iVar6);
      }
    }
    Flush__7MemFile((MemFile *)&this->field_0x10);
  }
  return;
}

ErrType IFFResFile2::LoadNode(IFFResNode *rc, SwizzleProc Swizzle, SInt32 type) {
	IFFHeader header;
	MPtr data;
	SInt32 size;
	ErrType err;
	SInt32 size;
	HandleNode *ptr;
	HandleNode *mem;
	HandleNode *mem;
	
  int iVar1;
  HandleNode *pHVar2;
  void *pvVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  IFFHeader header;
  int size;
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
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (rc->fHandle == (HandleNode *)0x0) {
    iVar1 = GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&header,rc->fFileoffset);
    if (iVar1 != 0) {
      return iVar1;
    }
    size = header.fSize - 0x4c;
    if (0x40000000 < (uint)size) {
      return -1;
    }
    if (header.fType != type) {
      return -1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
    pHVar2 = (HandleNode *)malloc(0xc);
    pHVar2->allocSize = size;
    if (size == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = malloc(size);
    }
    pHVar2->ptr = pvVar3;
    *(undefined4 *)&pHVar2->owned = 1;
                    /* end of inlined section */
    rc->fHandle = pHVar2;
    if (pHVar2 != (HandleNode *)0x0) {
                    /* end of inlined section */
      iVar1 = SetPos__7MemFilei((MemFile *)&this->field_0x10,rc->fFileoffset + 0x4c);
      if (iVar1 != 0) {
        return iVar1;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
      pvVar3 = rc->fHandle->ptr;
                    /* end of inlined section */
      if (pvVar3 != (void *)0x0) {
                    /* end of inlined section */
        iVar1 = ReadBlock__7MemFilePvPi((MemFile *)&this->field_0x10,pvVar3,&size);
        if (iVar1 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
          pHVar2 = rc->fHandle;
          if (pHVar2 == (HandleNode *)0x0) {
            rc->fHandle = (HandleNode *)0x0;
            return iVar1;
          }
          if (*(int *)&pHVar2->owned != 0) {
            free(pHVar2->ptr);
          }
          free(pHVar2);
                    /* end of inlined section */
          rc->fHandle = (HandleNode *)0x0;
          return iVar1;
        }
        if (((rc->fSavedFlags >> 4 ^ 1) & 1) == 0) {
          return 0;
        }
        if (Swizzle == (undefined1 *)0x0) {
          return 0;
        }
        (*(code *)Swizzle)(pvVar3,size);
        rc->fFlags = rc->fFlags | 0x10;
      }
    }
  }
                    /* end of inlined section */
  return 0;
}

ErrType IFFResFile2::LowLevelRemove(IFFResNode *spot) {
	ErrType err;
	
  HandleNode *pAddress;
  int iVar1;
  
  if (spot->fFileoffset == -1) {
    pAddress = spot->fHandle;
  }
  else {
    iVar1 = InvalBlockHeader__11IFFResFile2i(this,spot->fFileoffset);
    if (iVar1 != 0) {
      return iVar1;
    }
    pAddress = spot->fHandle;
  }
  if (pAddress == (HandleNode *)0x0) {
    spot->fHandle = (HandleNode *)0x0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
    if (*(int *)&pAddress->owned != 0) {
      free(pAddress->ptr);
    }
    free(pAddress);
                    /* end of inlined section */
    spot->fHandle = (HandleNode *)0x0;
  }
  return 0;
}

ErrType IFFResFile2::InvalBlockHeader(SInt32 fileoffset) {
	IFFHeader header;
	ErrType err;
	IFFResMap *this;
	SInt32 amt;
	
  int iVar1;
  IFFHeader header;
  
  iVar1 = GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&header,fileoffset);
  if (iVar1 == 0) {
    header.fFlags = header.fFlags | 4;
    header.fType = 0x58585858;
    this->fResMap->fFragSize = this->fResMap->fFragSize + header.fSize;
    iVar1 = SetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&header,fileoffset);
  }
  return iVar1;
}

ErrType IFFResFile2::NewBlockHeader(IFFHeader *header, UInt32 datasize, SInt32 *fileoffset) {
	ErrType err;
	SInt32 newsize;
	IFFHeader nextheader;
	Boolean diff;
	SInt32 filesize;
	IFFResMap *this;
	IFFResMap *this;
	IFFHeader *this;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  char *__src;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  IFFHeader nextheader;
  StringBuffer SStack_d0;
  char acStack_c8 [72];
  int filesize;
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
  
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  *(undefined4 *)&this->fChanged = 1;
  if ((this->fMapOffset == 0) ||
     (iVar2 = WriteHeader__11IFFResFile2P7MemFilei(this,(MemFile *)&this->field_0x10,0), iVar2 == 0)
     ) {
    iVar2 = this->fLastNewBlockOffset;
    iVar4 = datasize + 0x4c;
    if (iVar2 < 1) {
      iVar2 = 0x40;
    }
    *fileoffset = iVar2;
    while( true ) {
      iVar2 = GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,header,*fileoffset);
      if (iVar2 != 0) break;
      this->fLastNewBlockOffset = *fileoffset;
      bVar1 = false;
      if ((header->fFlags & 4) == 0) {
        iVar3 = *fileoffset;
        iVar2 = header->fSize;
      }
      else {
        iVar2 = *fileoffset;
        while ((iVar2 = GetBlockHeader__11IFFResFile2P9IFFHeaderi
                                  (this,&nextheader,iVar2 + header->fSize), iVar2 == 0 &&
               ((nextheader.fFlags & 4) != 0))) {
          bVar1 = true;
          header->fSize = header->fSize + nextheader.fSize;
          iVar2 = *fileoffset;
        }
        if ((bVar1) &&
           (iVar2 = SetBlockHeader__11IFFResFile2P9IFFHeaderi(this,header,*fileoffset), iVar2 != 0))
        {
          return iVar2;
        }
        iVar2 = header->fSize;
        if (iVar2 == iVar4) {
          this->fResMap->fFragSize = this->fResMap->fFragSize - iVar4;
          return 0;
        }
        if ((int)(datasize + 0x98) <= iVar2) {
          nextheader.fSize = iVar2 - iVar4;
          nextheader.fFlags = 4;
          nextheader.fType = 0x58585858;
          iVar2 = SetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&nextheader,*fileoffset + iVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
          header->fSize = iVar4;
          iVar2 = SetBlockHeader__11IFFResFile2P9IFFHeaderi(this,header,*fileoffset);
          if (iVar2 != 0) {
            return iVar2;
          }
          this->fResMap->fFragSize = this->fResMap->fFragSize - iVar4;
          return 0;
        }
        iVar3 = *fileoffset;
      }
      *fileoffset = iVar3 + iVar2;
    }
    iVar2 = GetFileSize__7MemFilePi((MemFile *)&this->field_0x10,&filesize);
    if (iVar2 == 0) {
      this->fLastNewBlockOffset = *fileoffset;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
      header->fSize = iVar4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
      header->fFlags = 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
      header->fType = 0x58585858;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      __12StringBufferPcUi(&SStack_d0,acStack_c8,0x40);
      append__12StringBufferPCci(&SStack_d0,(char *)0x0,-1);
                    /* end of inlined section */
      __src = c_str__C12StringBuffer(&SStack_d0);
      strncpy(header->fName,__src,0x3f);
      header->fName[0x3f] = '\0';
      iVar2 = SetBlockHeader__11IFFResFile2P9IFFHeaderi(this,header,*fileoffset);
    }
  }
  return iVar2;
}

ErrType IFFResFile2::GetBlockHeader(IFFHeader *header, SInt32 fileoffset) {
	ErrType err;
	int size;
	IFFHeader *this;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int size;
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
  size = 0x4c;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar1 = SetPos__7MemFilei((MemFile *)&this->field_0x10,fileoffset);
  if ((iVar1 == 0) &&
     (iVar1 = ReadBlock__7MemFilePvPi((MemFile *)&this->field_0x10,header,&size), iVar1 == 0)) {
    Swizzle4__FPv(header);
    Swizzle4__FPv(&header->fSize);
    Swizzle2__FPv(&header->fID);
    Swizzle2__FPv(&header->fFlags);
    iVar1 = 0;
  }
  return iVar1;
}

ErrType IFFResFile2::SetBlockHeader(IFFHeader *header, SInt32 fileoffset) {
	ErrType err;
	int size;
	IFFHeader *this;
	IFFHeader *this;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int size;
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
  
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  *(undefined4 *)&this->fChanged = 1;
  if ((this->fMapOffset == 0) ||
     (iVar1 = WriteHeader__11IFFResFile2P7MemFilei(this,(MemFile *)&this->field_0x10,0), iVar1 == 0)
     ) {
    iVar1 = SetPos__7MemFilei((MemFile *)&this->field_0x10,fileoffset);
    if (iVar1 == 0) {
      size = 0x4c;
      Swizzle4__FPv(header);
      Swizzle4__FPv(&header->fSize);
      Swizzle2__FPv(&header->fID);
      Swizzle2__FPv(&header->fFlags);
      iVar1 = WriteBlock__7MemFilePvPi((MemFile *)&this->field_0x10,header,&size);
      Swizzle4__FPv(header);
      Swizzle4__FPv(&header->fSize);
      Swizzle2__FPv(&header->fID);
      Swizzle2__FPv(&header->fFlags);
    }
  }
  return iVar1;
}

ErrType IFFResFile2::MoveBlock(UInt32 offset, UInt32 distance, UInt32 size, UInt8 *temBuffer) {
	SInt32 src;
	SInt32 dest;
	ErrType err;
	SInt32 currentSize;
	SInt32 remainingSize;
	
  int iVar1;
  undefined *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int fromStart;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  int currentSize;
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
  
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
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
  if ((distance != 0) && (fromStart = offset - distance, 0 < (int)size)) {
    do {
      currentSize = 0xc800;
      if ((int)size < 0xc800) {
        currentSize = size;
      }
      this_00 = &this->field_0x10;
      iVar1 = SetPos__7MemFilei((MemFile *)this_00,offset);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = ReadBlock__7MemFilePvPi((MemFile *)this_00,temBuffer,&currentSize);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = SetPos__7MemFilei((MemFile *)this_00,fromStart);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = WriteBlock__7MemFilePvPi((MemFile *)this_00,temBuffer,&currentSize);
      if (iVar1 != 0) {
        return iVar1;
      }
      size = size - currentSize;
      offset = offset + currentSize;
      fromStart = fromStart + currentSize;
    } while (0 < (int)size);
  }
  return 0;
}

ErrType IFFResFile2::Defrag() {
	IFFHeader header;
	UInt32 theoffset;
	UInt32 vacSize;
	ErrType err;
	UInt8 *temBuffer;
	void *pAddress;
	IFFResMap *this;
	
  uchar *temBuffer;
  int iVar1;
  uint distance;
  uint offset;
  IFFHeader header;
  
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  temBuffer = (uchar *)_memmanAlloc__FUiUi(0xc800,4);
                    /* end of inlined section */
  if (temBuffer == (uchar *)0x0) {
    iVar1 = -200;
  }
  else {
    offset = 0x40;
    distance = 0;
    while (iVar1 = GetBlockHeader__11IFFResFile2P9IFFHeaderi(this,&header,offset), iVar1 == 0) {
      if (((header.fFlags & 4) == 0) && (header.fType != 0x72736d70)) {
        iVar1 = MoveBlock__11IFFResFile2UiUiUiPUc(this,offset,distance,header.fSize,temBuffer);
        if (iVar1 != 0) {
          return iVar1;
        }
        UpdateOffset__9IFFResMapii(this->fResMap,offset,distance);
      }
      else {
        distance = distance + header.fSize;
      }
      offset = offset + header.fSize;
    }
    if (temBuffer != (uchar *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
      _memmanFree__FPv(temBuffer);
                    /* end of inlined section */
    }
    SetFileSize__7MemFilei((MemFile *)&this->field_0x10,offset - distance);
    this->fLastNewBlockOffset = -1;
    this->fResMap->fFragSize = 0;
    iVar1 = 0;
  }
  return iVar1;
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

IFFResNode* IFFResNode * uninitialized_copy<IFFResNode *, IFFResNode *>(IFFResNode *first, IFFResNode *last, IFFResNode *result) {
	IFFResNode *p;
	IFFResNode &value;
	void *pAddress;
	IFFResNode &_ctor_arg;
	StackString<64> &other;
	
  StackString_64_ *pSVar1;
  StringBuffer *pSVar2;
  IFFResNode *pIVar3;
  StringBuffer *this;
  
  if (first != last) {
    pSVar2 = &result[-1].fName.field0_0x0;
    do {
      this = pSVar2 + 0xb;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      pSVar1 = &result->fName;
      pSVar2[9].fMem = (char *)first->fFileoffset;
                    /* end of inlined section */
      pIVar3 = first + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
                    /* end of inlined section */
      result = result + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
      pSVar2[9].fCapacity = first->fID;
      *(ushort *)&pSVar2[10].fMem = first->fFlags;
      *(ushort *)((int)&pSVar2[10].fMem + 2) = first->fSavedFlags;
      pSVar2[10].fCapacity = (uint)first->fHandle;
      __12StringBufferPcUi(this,pSVar1->fChars,0x40);
      append__12StringBufferRC12StringBufferi(this,&(first->fName).field0_0x0,-1);
                    /* end of inlined section */
      first = pIVar3;
      pSVar2 = this;
    } while (pIVar3 != last);
  }
  return result;
}

IFFResNode* IFFResNode * copy_backward<IFFResNode *, IFFResNode *>(IFFResNode *first, IFFResNode *last, IFFResNode *result) {
	IFFResNode *this;
	IFFResNode &_ctor_arg;
	
  bool bVar1;
  IFFResNode *pIVar2;
  IFFResNode *pIVar3;
  
  if (first != last) {
    pIVar2 = last + -1;
    pIVar3 = result;
    do {
      result = pIVar3 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
      result->fFileoffset = pIVar2->fFileoffset;
      pIVar3[-1].fID = pIVar2->fID;
      pIVar3[-1].fFlags = pIVar2->fFlags;
      pIVar3[-1].fSavedFlags = pIVar2->fSavedFlags;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      pIVar3[-1].fHandle = pIVar2->fHandle;
      copy__12StringBufferRC12StringBuffer(&pIVar3[-1].fName.field0_0x0,&(pIVar2->fName).field0_0x0)
      ;
                    /* end of inlined section */
      bVar1 = first != pIVar2;
      pIVar2 = pIVar2 + -1;
      pIVar3 = result;
    } while (bVar1);
  }
  return result;
}

void void fill<IFFResNode *, IFFResNode>(IFFResNode *first, IFFResNode *last, IFFResNode &value) {
	IFFResNode *this;
	IFFResNode &_ctor_arg;
	
  int iVar1;
  
  if (first != last) {
    iVar1 = value->fFileoffset;
    while( true ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
      first->fFileoffset = iVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
      first->fID = value->fID;
      first->fFlags = value->fFlags;
      first->fSavedFlags = value->fSavedFlags;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      first->fHandle = value->fHandle;
      copy__12StringBufferRC12StringBuffer(&(first->fName).field0_0x0,&(value->fName).field0_0x0);
                    /* end of inlined section */
      if (first + 1 == last) break;
      iVar1 = value->fFileoffset;
      first = first + 1;
    }
  }
  return;
}

IFFResNode* IFFResNode * uninitialized_fill_n<IFFResNode *, unsigned int, IFFResNode>(IFFResNode *first, unsigned int n, IFFResNode &x) {
	IFFResNode *p;
	IFFResNode &value;
	void *pAddress;
	IFFResNode &_ctor_arg;
	
  StackString_64_ *pSVar1;
  char *pcVar2;
  StringBuffer *pSVar3;
  int iVar4;
  StringBuffer *this;
  
  iVar4 = n - 1;
  if (n != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
    pcVar2 = (char *)x->fFileoffset;
    pSVar3 = &first[-1].fName.field0_0x0;
    while( true ) {
      this = pSVar3 + 0xb;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      pSVar3[9].fMem = pcVar2;
      pSVar1 = &first->fName;
                    /* end of inlined section */
      first = first + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
                    /* end of inlined section */
      iVar4 = iVar4 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
      pSVar3[9].fCapacity = x->fID;
      *(ushort *)&pSVar3[10].fMem = x->fFlags;
      *(ushort *)((int)&pSVar3[10].fMem + 2) = x->fSavedFlags;
      pSVar3[10].fCapacity = (uint)x->fHandle;
      __12StringBufferPcUi(this,pSVar1->fChars,0x40);
      append__12StringBufferRC12StringBufferi(this,&(x->fName).field0_0x0,-1);
                    /* end of inlined section */
      if (iVar4 == -1) break;
      pcVar2 = (char *)x->fFileoffset;
      pSVar3 = this;
    }
  }
  return first;
}

void vector<IFFResNode, __malloc_alloc_template<0> >::insert(IFFResNode *position, unsigned int n, IFFResNode &x) {
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  uint *puVar2;
  IFFResNode *pIVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar4;
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
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_6c[0] = n;
  if (n != 0) {
    pIVar1 = this->finish;
    if ((uint)(((int)this->end_of_storage - (int)pIVar1) * -0x45d1745d >> 3) < n) {
                    /* inlined from algobase.h */
                    /* end of inlined section */
      old_size = ((int)pIVar1 - (int)this->start) * -0x45d1745d >> 3;
                    /* inlined from algobase.h */
                    /* end of inlined section */
      puVar2 = local_6c;
                    /* inlined from algobase.h */
      if (n <= old_size) {
        puVar2 = &old_size;
      }
                    /* end of inlined section */
      iVar4 = old_size + *puVar2;
                    /* inlined from alloc.h */
      if (iVar4 == 0) {
        pIVar1 = (IFFResNode *)0x0;
      }
      else {
        pIVar1 = (IFFResNode *)malloc(iVar4 * 0x58);
        if (pIVar1 == (IFFResNode *)0x0) {
          pIVar1 = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar4 * 0x58);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11(this->start,position,pIVar1);
      uninitialized_fill_n__H3ZP10IFFResNodeZUiZ10IFFResNode_X01X11RCX21_X01
                ((IFFResNode *)((int)pIVar1 + ((int)position - (int)this->start)),local_6c[0],x);
      uninitialized_copy__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11
                (position,this->finish,
                 pIVar1 + (((int)position - (int)this->start) * -0x45d1745d >> 3) + local_6c[0]);
                    /* inlined from algobase.h */
      pIVar3 = this->start;
      if (pIVar3 == this->finish) {
        pIVar3 = this->start;
      }
      else {
        do {
          pIVar3 = pIVar3 + 1;
        } while (pIVar3 != this->finish);
                    /* end of inlined section */
        pIVar3 = this->start;
      }
                    /* inlined from alloc.h */
      if ((pIVar3 != (IFFResNode *)0x0) &&
         (((int)this->end_of_storage - (int)pIVar3) * -0x45d1745d >> 3 != 0)) {
        free(pIVar3);
                    /* end of inlined section */
      }
      this->start = pIVar1;
      this->end_of_storage = pIVar1 + iVar4;
      this->finish = pIVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)(((int)pIVar1 - (int)position) * -0x45d1745d >> 3)) {
        uninitialized_copy__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11(pIVar1 + -n,pIVar1,pIVar1);
        copy_backward__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZP10IFFResNodeZ10IFFResNode_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11
                  (position,pIVar1,position + n);
        fill__H2ZP10IFFResNodeZ10IFFResNode_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZP10IFFResNodeZUiZ10IFFResNode_X01X11RCX21_X01
                  (this->finish,
                   local_6c[0] - (((int)this->finish - (int)position) * -0x45d1745d >> 3),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

void void DoContainerStream<vector<IFFResNode, __malloc_alloc_template<0> >, IFFResNode>(vector<IFFResNode,__malloc_alloc_template<0> > &cont, IFFResNode *dummy, ReconBuffer *r, SInt32 version) {
	SInt32 size;
	IFFResNode *i;
	int sizeDiff;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *last;
	IFFResNode *first;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  int iVar2;
  int iVar3;
  uint n;
  IFFResNode *pIVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  IFFResNode local_d0;
  int size;
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
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  size = ((int)cont->finish - (int)cont->start) * -0x45d1745d >> 3;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pIVar4 = cont->finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  iVar3 = ((int)pIVar4 - (int)cont->start) * -0x45d1745d >> 3;
                    /* end of inlined section */
  iVar2 = iVar3 - size;
  if (iVar2 < 0) {
                    /* end of inlined section */
    n = size - iVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    local_d0.fSavedFlags = 0xffff;
    local_d0.fFileoffset = -1;
    local_d0.fID = -1;
    local_d0.fFlags = 0xffff;
    local_d0.fHandle = (HandleNode *)0x0;
    __12StringBufferPcUi(&local_d0.fName.field0_0x0,local_d0.fName.fChars,0x40);
                    /* end of inlined section */
    insert__t6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0P10IFFResNodeUiRC10IFFResNode
              (cont,pIVar4,n,&local_d0);
    pIVar4 = cont->start;
  }
  else {
    if (0 < iVar2) {
                    /* end of inlined section */
      pIVar1 = pIVar4 + -iVar2;
      iVar2 = (int)pIVar4 - (int)pIVar1;
                    /* inlined from algobase.h */
      for (; pIVar1 != pIVar4; pIVar1 = pIVar1 + 1) {
      }
      cont->finish = (IFFResNode *)((int)cont->finish - iVar2);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar4 = cont->start;
  }
                    /* end of inlined section */
  if (pIVar4 != cont->finish) {
    do {
      pIVar1 = pIVar4 + 1;
      DoStream__10IFFResNodeP11ReconBufferi(pIVar4,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      pIVar4 = pIVar1;
    } while (pIVar1 != cont->finish);
  }
  return;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

IFFResNode* IFFResNode * uninitialized_copy<IFFResNode *, IFFResNode *>(IFFResNode *first, IFFResNode *last, IFFResNode *result) {
	IFFResNode *p;
	IFFResNode &value;
	void *pAddress;
	IFFResNode &_ctor_arg;
	StackString<64> &other;
	
  StackString_64_ *pSVar1;
  StringBuffer *pSVar2;
  IFFResNode *pIVar3;
  StringBuffer *this;
  
  if (first != last) {
    pSVar2 = &result[-1].fName.field0_0x0;
    do {
      this = pSVar2 + 0xb;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      pSVar1 = &result->fName;
      pSVar2[9].fMem = (char *)first->fFileoffset;
                    /* end of inlined section */
      pIVar3 = first + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
                    /* end of inlined section */
      result = result + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/IFFResFile2.cpp */
      pSVar2[9].fCapacity = first->fID;
      *(ushort *)&pSVar2[10].fMem = first->fFlags;
      *(ushort *)((int)&pSVar2[10].fMem + 2) = first->fSavedFlags;
      pSVar2[10].fCapacity = (uint)first->fHandle;
      __12StringBufferPcUi(this,pSVar1->fChars,0x40);
      append__12StringBufferRC12StringBufferi(this,&(first->fName).field0_0x0,-1);
                    /* end of inlined section */
      first = pIVar3;
      pSVar2 = this;
    } while (pIVar3 != last);
  }
  return result;
}

IFFResList* IFFResList * copy_backward<IFFResList *, IFFResList *>(IFFResList *first, IFFResList *last, IFFResList *result) {
	IFFResList *this;
	IFFResList &_ctor_arg;
	
  IFFResList *x;
  IFFResList *pIVar1;
  
  pIVar1 = result;
  if (first != last) {
    do {
      result = pIVar1 + -1;
      x = last + -1;
      __as__t6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0RCt6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0
                (&result->field0_0x0,&x->field0_0x0);
      pIVar1[-1].fType = last[-1].fType;
      pIVar1[-1].fLastSwizUsed = last[-1].fLastSwizUsed;
      last = x;
      pIVar1 = result;
    } while (first != x);
  }
  return result;
}

IFFResList* IFFResList * uninitialized_copy<IFFResList *, IFFResList *>(IFFResList *first, IFFResList *last, IFFResList *result) {
	IFFResList *p;
	IFFResList &value;
	void *pAddress;
	IFFResList &_ctor_arg;
	vector<IFFResNode,__malloc_alloc_template<0> > &x;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  uint size;
  int iVar1;
  IFFResNode *pIVar2;
  IFFResList *pIVar3;
  IFFResList *pIVar4;
  
  pIVar4 = result;
  if (first != last) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      pIVar3 = first + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      iVar1 = ((int)(first->field0_0x0).finish - (int)(first->field0_0x0).start) * -0x45d1745d >> 3;
      result = pIVar4 + 1;
      if (iVar1 == 0) {
        pIVar2 = (IFFResNode *)0x0;
        (pIVar4->field0_0x0).start = (IFFResNode *)0x0;
      }
      else {
        size = iVar1 * 0x58;
        pIVar2 = (IFFResNode *)malloc(size);
        if (pIVar2 == (IFFResNode *)0x0) {
          pIVar2 = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
          (pIVar4->field0_0x0).start = pIVar2;
        }
        else {
          (pIVar4->field0_0x0).start = pIVar2;
        }
      }
      pIVar2 = uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
                         ((first->field0_0x0).start,(first->field0_0x0).finish,pIVar2);
      (pIVar4->field0_0x0).end_of_storage = pIVar2;
      (pIVar4->field0_0x0).finish = pIVar2;
                    /* end of inlined section */
      pIVar4->fType = first->fType;
      pIVar4->fLastSwizUsed = first->fLastSwizUsed;
      first = pIVar3;
      pIVar4 = result;
    } while (pIVar3 != last);
  }
  return result;
}

void vector<IFFResList, __malloc_alloc_template<0> >::insert_aux(IFFResList *position, IFFResList &x) {
	IFFResList x_copy;
	IFFResList &value;
	IFFResList &_ctor_arg;
	vector<IFFResNode,__malloc_alloc_template<0> > &x;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResList *this;
	IFFResList &_ctor_arg;
	vector<IFFResNode,__malloc_alloc_template<0> > &x;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResList *this;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	unsigned int old_size;
	unsigned int len;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *p;
	IFFResList &value;
	void *pAddress;
	IFFResList &_ctor_arg;
	vector<IFFResNode,__malloc_alloc_template<0> > &x;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *first;
	IFFResList *pointer;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	
  uint uVar1;
  IFFResNode *pIVar2;
  IFFResList *pIVar3;
  IFFResNode *pIVar4;
  int iVar5;
  IFFResList *pIVar6;
  IFFResList *pIVar7;
  int iVar8;
  IFFResNode **ppIVar9;
  IFFResList *pIVar10;
  int iVar11;
  IFFResList x_copy;
  
  pIVar3 = this->finish;
  if (pIVar3 == this->end_of_storage) {
    pIVar7 = this->start;
    iVar11 = ((int)pIVar3 - (int)pIVar7) * -0x33333333 >> 2;
    iVar5 = 1;
    if (iVar11 != 0) {
      iVar5 = iVar11 << 1;
    }
                    /* inlined from alloc.h */
    if (iVar5 == 0) {
      pIVar3 = (IFFResList *)0x0;
    }
    else {
      pIVar3 = (IFFResList *)malloc(iVar5 * 0x14);
      if (pIVar3 == (IFFResList *)0x0) {
        pIVar3 = (IFFResList *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar5 * 0x14);
      }
      pIVar7 = this->start;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11(pIVar7,position,pIVar3);
    iVar8 = ((int)(x->field0_0x0).finish - (int)(x->field0_0x0).start) * -0x45d1745d >> 3;
                    /* inlined from alloc.h */
    ppIVar9 = (IFFResNode **)((int)pIVar3 + ((int)position - (int)this->start));
    if (iVar8 == 0) {
      pIVar2 = (IFFResNode *)0x0;
                    /* end of inlined section */
      *ppIVar9 = (IFFResNode *)0x0;
    }
    else {
      uVar1 = iVar8 * 0x58;
      pIVar2 = (IFFResNode *)malloc(uVar1);
      if (pIVar2 == (IFFResNode *)0x0) {
        pIVar2 = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar1);
        *ppIVar9 = pIVar2;
      }
      else {
        *ppIVar9 = pIVar2;
      }
    }
    pIVar2 = uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
                       ((x->field0_0x0).start,(x->field0_0x0).finish,pIVar2);
    ppIVar9[2] = pIVar2;
    ppIVar9[1] = pIVar2;
                    /* inlined from algobase.h */
    ppIVar9[3] = (IFFResNode *)x->fType;
    ppIVar9[4] = (IFFResNode *)x->fLastSwizUsed;
                    /* end of inlined section */
    uninitialized_copy__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11
              (position,this->finish,
               (IFFResList *)((int)pIVar3 + (int)position + (0x14 - (int)this->start)));
    pIVar7 = this->finish;
                    /* inlined from algobase.h */
    pIVar6 = this->start;
    if (pIVar6 == pIVar7) {
      pIVar7 = this->start;
    }
    else {
                    /* end of inlined section */
      pIVar2 = (pIVar6->field0_0x0).start;
      while( true ) {
                    /* inlined from algobase.h */
        pIVar10 = pIVar6 + 1;
        for (pIVar4 = pIVar2; pIVar4 != (pIVar6->field0_0x0).finish; pIVar4 = pIVar4 + 1) {
        }
                    /* end of inlined section */
                    /* inlined from alloc.h */
        if ((pIVar2 != (IFFResNode *)0x0) &&
           (((int)(pIVar6->field0_0x0).end_of_storage - (int)pIVar2) * -0x45d1745d >> 3 != 0)) {
          free(pIVar2);
                    /* inlined from algobase.h */
        }
        if (pIVar10 == pIVar7) break;
        pIVar2 = (pIVar10->field0_0x0).start;
        pIVar6 = pIVar10;
      }
                    /* end of inlined section */
      pIVar7 = this->start;
    }
                    /* inlined from alloc.h */
    if ((pIVar7 != (IFFResList *)0x0) &&
       (((int)this->end_of_storage - (int)pIVar7) * -0x33333333 >> 2 != 0)) {
      free(pIVar7);
                    /* end of inlined section */
    }
    this->start = pIVar3;
    this->finish = pIVar3 + iVar11 + 1;
    this->end_of_storage = pIVar3 + iVar5;
  }
  else {
                    /* inlined from algobase.h */
                    /* end of inlined section */
    iVar5 = ((int)pIVar3[-1].field0_0x0.finish - (int)pIVar3[-1].field0_0x0.start) * -0x45d1745d >>
            3;
                    /* inlined from alloc.h */
    if (iVar5 == 0) {
      pIVar2 = (IFFResNode *)0x0;
                    /* end of inlined section */
      (pIVar3->field0_0x0).start = (IFFResNode *)0x0;
    }
    else {
      uVar1 = iVar5 * 0x58;
      pIVar2 = (IFFResNode *)malloc(uVar1);
      if (pIVar2 == (IFFResNode *)0x0) {
        pIVar2 = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar1);
        (pIVar3->field0_0x0).start = pIVar2;
      }
      else {
        (pIVar3->field0_0x0).start = pIVar2;
      }
    }
    pIVar2 = uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
                       (pIVar3[-1].field0_0x0.start,pIVar3[-1].field0_0x0.finish,pIVar2);
    (pIVar3->field0_0x0).end_of_storage = pIVar2;
    (pIVar3->field0_0x0).finish = pIVar2;
                    /* inlined from algobase.h */
    pIVar3->fType = pIVar3[-1].fType;
    pIVar3->fLastSwizUsed = pIVar3[-1].fLastSwizUsed;
                    /* end of inlined section */
    iVar5 = ((int)(x->field0_0x0).finish - (int)(x->field0_0x0).start) * -0x45d1745d >> 3;
                    /* inlined from alloc.h */
    if (iVar5 == 0) {
      x_copy.field0_0x0.start = (IFFResNode *)0x0;
                    /* end of inlined section */
      pIVar2 = (x->field0_0x0).finish;
    }
    else {
      uVar1 = iVar5 * 0x58;
      x_copy.field0_0x0.start = (IFFResNode *)malloc(uVar1);
      if (x_copy.field0_0x0.start == (IFFResNode *)0x0) {
        x_copy.field0_0x0.start = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar1);
        pIVar2 = (x->field0_0x0).finish;
      }
      else {
        pIVar2 = (x->field0_0x0).finish;
      }
    }
    x_copy.field0_0x0.finish =
         uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
                   ((x->field0_0x0).start,pIVar2,x_copy.field0_0x0.start);
                    /* inlined from algobase.h */
    x_copy.fLastSwizUsed = x->fLastSwizUsed;
    x_copy.fType = x->fType;
                    /* end of inlined section */
                    /* inlined from algobase.h */
                    /* end of inlined section */
    x_copy.field0_0x0.end_of_storage = x_copy.field0_0x0.finish;
                    /* inlined from algobase.h */
                    /* end of inlined section */
    copy_backward__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11
              (position,this->finish + -1,this->finish);
                    /* inlined from algobase.h */
    __as__t6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0RCt6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0
              (&position->field0_0x0,&x_copy.field0_0x0);
    position->fType = x_copy.fType;
    position->fLastSwizUsed = x_copy.fLastSwizUsed;
                    /* end of inlined section */
    this->finish = this->finish + 1;
                    /* inlined from algobase.h */
    for (pIVar2 = x_copy.field0_0x0.start; pIVar2 != x_copy.field0_0x0.finish; pIVar2 = pIVar2 + 1)
    {
    }
                    /* end of inlined section */
                    /* inlined from alloc.h */
    if ((x_copy.field0_0x0.start != (IFFResNode *)0x0) &&
       (((int)x_copy.field0_0x0.end_of_storage - (int)x_copy.field0_0x0.start) * -0x45d1745d >> 3 !=
        0)) {
      free(x_copy.field0_0x0.start);
                    /* end of inlined section */
    }
  }
  return;
}

void vector<IFFResNode, __malloc_alloc_template<0> >::insert_aux(IFFResNode *position, IFFResNode &x) {
	IFFResNode x_copy;
	IFFResNode &value;
	IFFResNode &_ctor_arg;
	StackString<64> *this;
	StackString<64> &other;
	IFFResNode &_ctor_arg;
	StackString<64> &other;
	StackString<64> *this;
	IFFResNode *this;
	unsigned int old_size;
	unsigned int len;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *p;
	IFFResNode &value;
	void *pAddress;
	IFFResNode &_ctor_arg;
	StackString<64> *this;
	StackString<64> &other;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  int *piVar2;
  IFFResNode *pIVar3;
  StackString_64_ *this_00;
  int iVar4;
  int iVar5;
  IFFResNode x_copy;
  
  pIVar1 = this->finish;
  if (pIVar1 == this->end_of_storage) {
    iVar4 = ((int)pIVar1 - (int)this->start) * -0x45d1745d >> 3;
    iVar5 = 1;
    if (iVar4 != 0) {
      iVar5 = iVar4 << 1;
    }
                    /* inlined from alloc.h */
    if (iVar5 == 0) {
      pIVar1 = (IFFResNode *)0x0;
    }
    else {
      pIVar1 = (IFFResNode *)malloc(iVar5 * 0x58);
      if (pIVar1 == (IFFResNode *)0x0) {
        pIVar1 = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar5 * 0x58);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11(this->start,position,pIVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from algobase.h */
    piVar2 = (int *)((int)pIVar1 + ((int)position - (int)this->start));
    *piVar2 = x->fFileoffset;
    piVar2[1] = x->fID;
    *(ushort *)(piVar2 + 2) = x->fFlags;
    *(ushort *)((int)piVar2 + 10) = x->fSavedFlags;
    piVar2[3] = (int)x->fHandle;
    __12StringBufferPcUi((StringBuffer *)(piVar2 + 4),(char *)(piVar2 + 6),0x40);
    append__12StringBufferRC12StringBufferi((StringBuffer *)(piVar2 + 4),&(x->fName).field0_0x0,-1);
                    /* end of inlined section */
    uninitialized_copy__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11
              (position,this->finish,
               (IFFResNode *)((int)pIVar1 + (int)position + (0x58 - (int)this->start)));
                    /* inlined from algobase.h */
    pIVar3 = this->start;
    if (pIVar3 == this->finish) {
      pIVar3 = this->start;
    }
    else {
      do {
        pIVar3 = pIVar3 + 1;
      } while (pIVar3 != this->finish);
                    /* end of inlined section */
      pIVar3 = this->start;
    }
                    /* inlined from alloc.h */
    if ((pIVar3 != (IFFResNode *)0x0) &&
       (((int)this->end_of_storage - (int)pIVar3) * -0x45d1745d >> 3 != 0)) {
      free(pIVar3);
                    /* end of inlined section */
    }
    this->start = pIVar1;
    this->finish = pIVar1 + iVar4 + 1;
    this->end_of_storage = pIVar1 + iVar5;
  }
  else {
                    /* inlined from algobase.h */
    pIVar1->fFileoffset = pIVar1[-1].fFileoffset;
    pIVar1->fID = pIVar1[-1].fID;
    pIVar1->fFlags = pIVar1[-1].fFlags;
    pIVar1->fSavedFlags = pIVar1[-1].fSavedFlags;
    pIVar1->fHandle = pIVar1[-1].fHandle;
    __12StringBufferPcUi(&(pIVar1->fName).field0_0x0,(pIVar1->fName).fChars,0x40);
    append__12StringBufferRC12StringBufferi
              (&(pIVar1->fName).field0_0x0,&pIVar1[-1].fName.field0_0x0,-1);
    x_copy.fFileoffset = x->fFileoffset;
    this_00 = &x_copy.fName;
    x_copy.fID = x->fID;
    x_copy.fFlags = x->fFlags;
    x_copy.fSavedFlags = x->fSavedFlags;
    x_copy.fHandle = x->fHandle;
    __12StringBufferPcUi(&this_00->field0_0x0,x_copy.fName.fChars,0x40);
    append__12StringBufferRC12StringBufferi(&this_00->field0_0x0,&(x->fName).field0_0x0,-1);
                    /* end of inlined section */
    copy_backward__H2ZP10IFFResNodeZP10IFFResNode_X01X01X11_X11
              (position,this->finish + -1,this->finish);
                    /* inlined from algobase.h */
    position->fFlags = x_copy.fFlags;
    position->fFileoffset = x_copy.fFileoffset;
    position->fID = x_copy.fID;
    position->fSavedFlags = x_copy.fSavedFlags;
    position->fHandle = x_copy.fHandle;
    copy__12StringBufferRC12StringBuffer(&(position->fName).field0_0x0,&this_00->field0_0x0);
                    /* end of inlined section */
    this->finish = this->finish + 1;
  }
  return;
}

vector<IFFResNode,__malloc_alloc_template<0> >& vector<IFFResNode, __malloc_alloc_template<0> >::operator=(vector<IFFResNode,__malloc_alloc_template<0> > &x) {
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *result;
	ptrdiff_t n;
	IFFResNode &_ctor_arg;
	IFFResNode *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *last;
	IFFResNode *last;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *result;
	ptrdiff_t n;
	IFFResNode &_ctor_arg;
	IFFResNode *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pIVar1;
  IFFResNode *pIVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (x == this) {
    return this;
  }
  pIVar2 = x->start;
  pIVar1 = this->start;
  uVar3 = ((int)x->finish - (int)pIVar2) * -0x45d1745d >> 3;
  if ((uint)(((int)this->end_of_storage - (int)pIVar1) * -0x45d1745d >> 3) < uVar3) {
                    /* inlined from algobase.h */
    for (; pIVar1 != this->finish; pIVar1 = pIVar1 + 1) {
    }
                    /* end of inlined section */
    pIVar2 = this->start;
    if (pIVar2 == (IFFResNode *)0x0) {
LAB_0025e078:
                    /* end of inlined section */
      pIVar2 = x->start;
    }
    else {
                    /* inlined from alloc.h */
      if (((int)this->end_of_storage - (int)pIVar2) * -0x45d1745d >> 3 != 0) {
        free(pIVar2);
        goto LAB_0025e078;
      }
      pIVar2 = x->start;
    }
    iVar5 = ((int)x->finish - (int)pIVar2) * -0x45d1745d >> 3;
                    /* inlined from alloc.h */
    if (iVar5 == 0) {
      pIVar2 = (IFFResNode *)0x0;
                    /* end of inlined section */
      this->start = (IFFResNode *)0x0;
    }
    else {
      uVar3 = iVar5 * 0x58;
      pIVar2 = (IFFResNode *)malloc(uVar3);
      if (pIVar2 == (IFFResNode *)0x0) {
        pIVar2 = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar3);
        this->start = pIVar2;
      }
      else {
        this->start = pIVar2;
      }
    }
    pIVar2 = uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
                       (x->start,x->finish,pIVar2);
    this->end_of_storage = pIVar2;
  }
  else {
    uVar4 = ((int)this->finish - (int)pIVar1) * -0x45d1745d >> 3;
    if (uVar3 <= uVar4) {
      for (; 0 < (int)uVar3; uVar3 = uVar3 - 1) {
        pIVar1->fFileoffset = pIVar2->fFileoffset;
        pIVar1->fID = pIVar2->fID;
        pIVar1->fFlags = pIVar2->fFlags;
        pIVar1->fSavedFlags = pIVar2->fSavedFlags;
        pIVar1->fHandle = pIVar2->fHandle;
        copy__12StringBufferRC12StringBuffer
                  (&(pIVar1->fName).field0_0x0,&(pIVar2->fName).field0_0x0);
        pIVar2 = pIVar2 + 1;
        pIVar1 = pIVar1 + 1;
      }
      if (pIVar1 == this->finish) {
        pIVar2 = x->start;
      }
      else {
        do {
          pIVar1 = pIVar1 + 1;
        } while (pIVar1 != this->finish);
                    /* end of inlined section */
        pIVar2 = x->start;
      }
      goto LAB_0025e248;
    }
                    /* inlined from algobase.h */
    for (iVar5 = (int)(uVar4 * 8) >> 3; 0 < iVar5; iVar5 = iVar5 + -1) {
      pIVar1->fFileoffset = pIVar2->fFileoffset;
      pIVar1->fID = pIVar2->fID;
      pIVar1->fFlags = pIVar2->fFlags;
      pIVar1->fSavedFlags = pIVar2->fSavedFlags;
      pIVar1->fHandle = pIVar2->fHandle;
      copy__12StringBufferRC12StringBuffer(&(pIVar1->fName).field0_0x0,&(pIVar2->fName).field0_0x0);
      pIVar2 = pIVar2 + 1;
      pIVar1 = pIVar1 + 1;
    }
                    /* end of inlined section */
    iVar5 = ((int)this->finish - (int)this->start) * -0x45d1745d >> 3;
    uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
              (x->start + iVar5,x->finish,this->start + iVar5);
  }
  pIVar2 = x->start;
LAB_0025e248:
  this->finish = this->start + (((int)x->finish - (int)pIVar2) * -0x45d1745d >> 3);
  return this;
}

void void fill<IFFResList *, IFFResList>(IFFResList *first, IFFResList *last, IFFResList &value) {
	IFFResList *this;
	IFFResList &_ctor_arg;
	
  IFFResList *pIVar1;
  
  if (first != last) {
    do {
      pIVar1 = first + 1;
      __as__t6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0RCt6vector2Z10IFFResNodeZt23__malloc_alloc_template1i0
                (&first->field0_0x0,&value->field0_0x0);
      first->fType = value->fType;
      first->fLastSwizUsed = value->fLastSwizUsed;
      first = pIVar1;
    } while (pIVar1 != last);
  }
  return;
}

IFFResList* IFFResList * uninitialized_fill_n<IFFResList *, unsigned int, IFFResList>(IFFResList *first, unsigned int n, IFFResList &x) {
	IFFResList *p;
	IFFResList &value;
	void *pAddress;
	IFFResList &_ctor_arg;
	vector<IFFResNode,__malloc_alloc_template<0> > &x;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	void *result;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	
  uint size;
  int iVar1;
  IFFResNode *pIVar2;
  IFFResList *pIVar3;
  int iVar4;
  
  iVar4 = n - 1;
  pIVar3 = first;
  if (n != 0) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      iVar1 = ((int)(x->field0_0x0).finish - (int)(x->field0_0x0).start) * -0x45d1745d >> 3;
      first = pIVar3 + 1;
      if (iVar1 == 0) {
        pIVar2 = (IFFResNode *)0x0;
        (pIVar3->field0_0x0).start = (IFFResNode *)0x0;
      }
      else {
        size = iVar1 * 0x58;
        pIVar2 = (IFFResNode *)malloc(size);
        if (pIVar2 == (IFFResNode *)0x0) {
          pIVar2 = (IFFResNode *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
          (pIVar3->field0_0x0).start = pIVar2;
        }
        else {
          (pIVar3->field0_0x0).start = pIVar2;
        }
      }
                    /* end of inlined section */
      iVar4 = iVar4 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      pIVar2 = uninitialized_copy__H2ZPC10IFFResNodeZP10IFFResNode_X01X01X11_X11
                         ((x->field0_0x0).start,(x->field0_0x0).finish,pIVar2);
      (pIVar3->field0_0x0).end_of_storage = pIVar2;
      (pIVar3->field0_0x0).finish = pIVar2;
                    /* end of inlined section */
      pIVar3->fType = x->fType;
      pIVar3->fLastSwizUsed = x->fLastSwizUsed;
      pIVar3 = first;
    } while (iVar4 != -1);
  }
  return first;
}

void vector<IFFResList, __malloc_alloc_template<0> >::insert(IFFResList *position, unsigned int n, IFFResList &x) {
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *first;
	IFFResList *pointer;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	
  IFFResNode *pAddress;
  IFFResList *pIVar1;
  IFFResNode *pIVar2;
  IFFResList *pIVar3;
  uint *puVar4;
  IFFResList *pIVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  IFFResList *pIVar6;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar7;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  uint old_size;
  uint local_7c [3];
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
  
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_7c[0] = n;
  if (n != 0) {
    pIVar1 = this->finish;
    if ((uint)(((int)this->end_of_storage - (int)pIVar1) * -0x33333333 >> 2) < n) {
                    /* inlined from algobase.h */
                    /* end of inlined section */
      old_size = ((int)pIVar1 - (int)this->start) * -0x33333333 >> 2;
                    /* inlined from algobase.h */
                    /* end of inlined section */
      puVar4 = local_7c;
                    /* inlined from algobase.h */
      if (n <= old_size) {
        puVar4 = &old_size;
      }
                    /* end of inlined section */
      iVar7 = old_size + *puVar4;
                    /* inlined from alloc.h */
      if (iVar7 == 0) {
        pIVar1 = (IFFResList *)0x0;
      }
      else {
        pIVar1 = (IFFResList *)malloc(iVar7 * 0x14);
        if (pIVar1 == (IFFResList *)0x0) {
          pIVar1 = (IFFResList *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar7 * 0x14);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11(this->start,position,pIVar1);
      uninitialized_fill_n__H3ZP10IFFResListZUiZ10IFFResList_X01X11RCX21_X01
                ((IFFResList *)((int)pIVar1 + ((int)position - (int)this->start)),local_7c[0],x);
      uninitialized_copy__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11
                (position,this->finish,
                 pIVar1 + (((int)position - (int)this->start) * -0x33333333 >> 2) + local_7c[0]);
      pIVar5 = this->finish;
                    /* inlined from algobase.h */
      pIVar3 = this->start;
      if (pIVar3 == pIVar5) {
        pIVar5 = this->start;
      }
      else {
                    /* end of inlined section */
        pAddress = (pIVar3->field0_0x0).start;
        while( true ) {
                    /* inlined from algobase.h */
          pIVar6 = pIVar3 + 1;
          for (pIVar2 = pAddress; pIVar2 != (pIVar3->field0_0x0).finish; pIVar2 = pIVar2 + 1) {
          }
                    /* end of inlined section */
                    /* inlined from alloc.h */
          if ((pAddress != (IFFResNode *)0x0) &&
             (((int)(pIVar3->field0_0x0).end_of_storage - (int)pAddress) * -0x45d1745d >> 3 != 0)) {
            free(pAddress);
                    /* inlined from algobase.h */
          }
          if (pIVar6 == pIVar5) break;
          pAddress = (pIVar6->field0_0x0).start;
          pIVar3 = pIVar6;
        }
                    /* end of inlined section */
        pIVar5 = this->start;
      }
                    /* inlined from alloc.h */
      if ((pIVar5 != (IFFResList *)0x0) &&
         (((int)this->end_of_storage - (int)pIVar5) * -0x33333333 >> 2 != 0)) {
        free(pIVar5);
                    /* end of inlined section */
      }
      this->start = pIVar1;
      this->end_of_storage = pIVar1 + iVar7;
      this->finish = pIVar1 + old_size + local_7c[0];
    }
    else {
      if (n < (uint)(((int)pIVar1 - (int)position) * -0x33333333 >> 2)) {
        uninitialized_copy__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11(pIVar1 + -n,pIVar1,pIVar1);
        copy_backward__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11
                  (position,this->finish + -local_7c[0],this->finish);
        fill__H2ZP10IFFResListZ10IFFResList_X01X01RCX11_v(position,position + local_7c[0],x);
      }
      else {
        uninitialized_copy__H2ZP10IFFResListZP10IFFResList_X01X01X11_X11
                  (position,pIVar1,position + n);
        fill__H2ZP10IFFResListZ10IFFResList_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZP10IFFResListZUiZ10IFFResList_X01X11RCX21_X01
                  (this->finish,
                   local_7c[0] - (((int)this->finish - (int)position) * -0x33333333 >> 2),x);
      }
      this->finish = this->finish + local_7c[0];
    }
  }
  return;
}

void void DoContainerStream<vector<IFFResList, __malloc_alloc_template<0> >, IFFResList>(vector<IFFResList,__malloc_alloc_template<0> > &cont, IFFResList *dummy, ReconBuffer *r, SInt32 version) {
	SInt32 size;
	IFFResList *i;
	int sizeDiff;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *first;
	IFFResNode *last;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	IFFResList *last;
	IFFResList *first;
	IFFResList *pointer;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *last;
	IFFResNode *first;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  IFFResNode *pIVar2;
  IFFResList *pIVar3;
  IFFResList *pIVar4;
  int iVar5;
  IFFResNode *pIVar6;
  IFFResList *pIVar7;
  undefined8 unaff_s0;
  IFFResList *pIVar8;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  IFFResList local_b0;
  int size;
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
  
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  size = ((int)cont->finish - (int)cont->start) * -0x33333333 >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pIVar7 = cont->finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  iVar1 = ((int)pIVar7 - (int)cont->start) * -0x33333333 >> 2;
                    /* end of inlined section */
  iVar5 = iVar1 - size;
  if (iVar5 < 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    local_b0.field0_0x0.start = (IFFResNode *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    local_b0.field0_0x0.finish = (IFFResNode *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    local_b0.field0_0x0.end_of_storage = (IFFResNode *)0x0;
    local_b0.fType = 0;
                    /* end of inlined section */
    local_b0.fLastSwizUsed = (undefined1 *)0x0;
    insert__t6vector2Z10IFFResListZt23__malloc_alloc_template1i0P10IFFResListUiRC10IFFResList
              (cont,pIVar7,size - iVar1,&local_b0);
                    /* inlined from algobase.h */
    for (pIVar2 = local_b0.field0_0x0.start; pIVar2 != local_b0.field0_0x0.finish;
        pIVar2 = pIVar2 + 1) {
    }
    if (local_b0.field0_0x0.start == (IFFResNode *)0x0) {
      pIVar7 = cont->start;
    }
    else if (((int)local_b0.field0_0x0.end_of_storage - (int)local_b0.field0_0x0.start) *
             -0x45d1745d >> 3 == 0) {
      pIVar7 = cont->start;
    }
    else {
      free(local_b0.field0_0x0.start);
                    /* end of inlined section */
      pIVar7 = cont->start;
    }
  }
  else {
    if (0 < iVar5) {
                    /* end of inlined section */
      pIVar3 = pIVar7 + -iVar5;
                    /* inlined from algobase.h */
      if (pIVar3 != pIVar7) {
        pIVar2 = (pIVar3->field0_0x0).start;
        pIVar4 = pIVar3;
        while( true ) {
          pIVar8 = pIVar4 + 1;
          for (pIVar6 = pIVar2; pIVar6 != (pIVar4->field0_0x0).finish; pIVar6 = pIVar6 + 1) {
          }
          if ((pIVar2 != (IFFResNode *)0x0) &&
             (((int)(pIVar4->field0_0x0).end_of_storage - (int)pIVar2) * -0x45d1745d >> 3 != 0)) {
            free(pIVar2);
          }
          if (pIVar8 == pIVar7) break;
          pIVar2 = (pIVar8->field0_0x0).start;
          pIVar4 = pIVar8;
        }
      }
      cont->finish = (IFFResList *)((int)cont->finish - ((int)pIVar7 - (int)pIVar3));
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pIVar7 = cont->start;
  }
                    /* end of inlined section */
  if (pIVar7 != cont->finish) {
    do {
      pIVar3 = pIVar7 + 1;
      DoStream__10IFFResListP11ReconBufferi(pIVar7,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      pIVar7 = pIVar3;
    } while (pIVar3 != cont->finish);
  }
  return;
}

void void ReconLoadObject<IFFResMap>(IFFResMap *obj, HandleNode *mem, SInt32 type, SInt32 *version) {
	SimpleReconObject<IFFResMap> recon;
	ReconBuilder rb;
	IFFResMap *obj;
	SInt32 type;
	
  SimpleReconObject_IFFResMap_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z9IFFResMap;
  recon.fObj = obj;
  recon.fType = type;
  Reconstitute__12ReconBuilderP11ReconObjectPQ26Memory10HandleNodePi
            ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,mem,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return;
}

HandleNode* Memory::HandleNode * ReconSaveObject<IFFResMap>(IFFResMap *obj, SInt32 type, SInt32 version) {
	SimpleReconObject<IFFResMap> recon;
	ReconBuilder rb;
	IFFResMap *obj;
	SInt32 type;
	
  HandleNode *pHVar1;
  SimpleReconObject_IFFResMap_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z9IFFResMap;
  recon.fObj = obj;
  recon.fType = type;
  pHVar1 = Compact__12ReconBuilderP11ReconObjecti
                     ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return pHVar1;
}

void IFFResFile2::SetOptimizeTarget() {
  *(undefined4 *)&this->fOptimizeTarget = 1;
  return;
}

void IFFResMap::~IFFResMap(int __in_chrg) {
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	int __in_chrg;
	IFFResList *last;
	IFFResList *first;
	IFFResList *pointer;
	IFFResList *this;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	IFFResNode *last;
	IFFResNode *first;
	IFFResNode *pointer;
	vector<IFFResNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<IFFResList,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  IFFResList *pIVar1;
  IFFResNode *pAddress;
  IFFResNode *pIVar2;
  IFFResList *pIVar3;
  IFFResList *pIVar4;
  
                    /* inlined from algobase.h */
  pIVar1 = (this->field0_0x0).finish;
  pIVar3 = (this->field0_0x0).start;
  if (pIVar3 != pIVar1) {
    pAddress = (pIVar3->field0_0x0).start;
    while( true ) {
      pIVar4 = pIVar3 + 1;
      for (pIVar2 = pAddress; pIVar2 != (pIVar3->field0_0x0).finish; pIVar2 = pIVar2 + 1) {
      }
      if ((pAddress != (IFFResNode *)0x0) &&
         (((int)(pIVar3->field0_0x0).end_of_storage - (int)pAddress) * -0x45d1745d >> 3 != 0)) {
        free(pAddress);
      }
      if (pIVar4 == pIVar1) break;
      pAddress = (pIVar4->field0_0x0).start;
      pIVar3 = pIVar4;
    }
  }
  pIVar1 = (this->field0_0x0).start;
  if ((pIVar1 != (IFFResList *)0x0) &&
     (((int)(this->field0_0x0).end_of_storage - (int)pIVar1) * -0x33333333 >> 2 != 0)) {
    free(pIVar1);
  }
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void SimpleReconObject<IFFResMap>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<IFFResMap>::DoStream(ReconBuffer *r, SInt32 version) {
  DoStream__9IFFResMapP11ReconBufferi(this->fObj,r,version);
  return;
}

SInt32 SimpleReconObject<IFFResMap>::GetType() {
  return this->fType;
}

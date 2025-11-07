// STATUS: NOT STARTED

#include "e_rdataset.h"

ETypeInfo *gpTypeInfo_ERDataset = NULL;
static bool _bFirstTime = true;

__vtbl_ptr_type ERDataset virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERDataset::SafeDelete,
		/* .__delta2 = */ -30440
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERDataset::GetTypeInfo,
		/* .__delta2 = */ -30384
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERDataset::GetTypeName,
		/* .__delta2 = */ -30368
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERDataset::GetTypeKey,
		/* .__delta2 = */ -30352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERDataset::GetTypeVersion,
		/* .__delta2 = */ -30336
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERDataset::~ERDataset,
		/* .__delta2 = */ -31496
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Read,
		/* .__delta2 = */ 9848
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Write,
		/* .__delta2 = */ 9808
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10736
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERDataset::m_typeInfo;

EStream& operator<<(EStream &s, ERDataset *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERDataset *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ERDataset *)pStorable;
  return s;
}

ERDataset* ERDataset::ERDataset() {
  __9EResource(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_resourceList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ERDataset;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_resourceList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void ERDataset::~ERDataset(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ERDataset;
  Deallocate__9ERDataset(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_resourceList).field0_0x0);
                    /* end of inlined section */
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERDataset::Deallocate() {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_resourceList).field0_0x0.m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
      pEVar1 = (ENodeListNode *)(&pEVar1->data)[2]) {
                    /* end of inlined section */
    DelRef__9EResource((EResource *)pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  RemoveAll__9ENodeList(&(this->m_resourceList).field0_0x0);
  return;
}

void ERDataset::Load(EFile *pFile, u32 uLength) {
	EFileStream s;
	u32 uStartOffs;
	int nDataTypes;
	EFSState desc;
	int i;
	char szTypeName[128];
	EResourceManager *pManager;
	int nResources;
	int j;
	u32 id;
	u32 size;
	u32 alignOffset;
	EResource *pResource;
	EResource *data;
	
  int iVar1;
  uint uVar2;
  EResourceManager *this_00;
  int iVar3;
  EResource *data;
  EFile__vtable *pEVar4;
  int iVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar6;
  EFileStream s;
  EFSState desc;
  char szTypeName [128];
  int nDataTypes;
  int nResources;
  uint id;
  uint size;
  uint alignOffset;
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
  
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  __11EFileStream(&s);
  iVar1 = (*(code *)pFile->__vtable->GetDrive)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  Attach__11EFileStreamP5EFile15FSReadWriteModeib(&s,pFile,FS_READ,iVar1,false);
  uVar2 = (*(code *)pFile->__vtable->GetDrive)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  if (__bFirstTime != 0) {
    desc._8_8_ = CONCAT71(desc._9_7_,0xc);
    desc.size = 0x1c;
    desc._8_8_ = desc._8_8_ & 0x803fffff | 0x10000000 | (ulong)uVar2 << 0x20;
    desc.id = (*(code *)pFile->__vtable[1].GetExt)
                        ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable[1].GetName);
    SetStreamState__16EPs2IOPInterfaceRC8EFSState(&_ps2IOPInterface,&desc);
    __bFirstTime = 0;
  }
                    /* inlined from c:/eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
  iVar1 = 0;
                    /* end of inlined section */
  _datasetman.m_fLoadProgress = 0.0;
  Deallocate__9ERDataset(this);
  __rs__FR7EStreamR7EString(&s.field0_0x0,&(this->field0_0x0).m_name);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s.field0_0x0.__vtable[1].GetPos)
            (&s.field0_0x0.m_streamingStructure + *(short *)&s.field0_0x0.__vtable[1].EStream,
             &nDataTypes,4);
                    /* end of inlined section */
  if (0 < nDataTypes) {
    do {
      iVar1 = iVar1 + 1;
      ReadString__7EStreamPci(&s.field0_0x0,szTypeName,0x80);
      iVar5 = 0;
      this_00 = (EResourceManager *)
                (*(code *)_pResLoader->__vtable[1].Flush)
                          ((int)&_pResLoader->__vtable +
                           (int)*(short *)&_pResLoader->__vtable[1].Update,szTypeName);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)s.field0_0x0.__vtable[1].GetPos)
                (&s.field0_0x0.m_streamingStructure + *(short *)&s.field0_0x0.__vtable[1].EStream,
                 &nResources,4);
                    /* end of inlined section */
      if (0 < nResources) {
        pEVar4 = pFile->__vtable;
        while( true ) {
          iVar3 = (*(code *)pEVar4->GetDrive)
                            ((int)&pFile->__vtable + (int)*(short *)&pEVar4->GetDeviceType);
          if ((int)uLength < 0) {
            fVar6 = (float)(uLength & 1 | uLength >> 1);
            fVar6 = fVar6 + fVar6;
          }
          else {
            fVar6 = (float)uLength;
          }
                    /* inlined from /eor/src2/common/storage/e_storage.h */
          _datasetman.m_fLoadProgress = (float)(iVar3 - uVar2) / fVar6;
          (*(code *)s.field0_0x0.__vtable[1].GetPos)
                    (&s.field0_0x0.m_streamingStructure +
                     *(short *)&s.field0_0x0.__vtable[1].EStream,&id,4);
          (*(code *)s.field0_0x0.__vtable[1].GetPos)
                    (&s.field0_0x0.m_streamingStructure +
                     *(short *)&s.field0_0x0.__vtable[1].EStream,&size,4);
          (*(code *)s.field0_0x0.__vtable[1].GetPos)
                    (&s.field0_0x0.m_streamingStructure +
                     *(short *)&s.field0_0x0.__vtable[1].EStream,&alignOffset,4);
                    /* end of inlined section */
          if (alignOffset != 0) {
            Read__11EFileStreamPvi(&s,(void *)0x0,alignOffset);
          }
          data = AddRef__16EResourceManagerUiP5EFilei(this_00,id,pFile,size);
          if (data != (EResource *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
            AddTail__9ENodeListUi(&(this->m_resourceList).field0_0x0,(uint)data);
          }
                    /* end of inlined section */
          iVar5 = iVar5 + 1;
          if (nResources <= iVar5) break;
          pEVar4 = pFile->__vtable;
        }
      }
    } while (iVar1 < nDataTypes);
  }
                    /* inlined from c:/eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
                    /* end of inlined section */
  _datasetman.m_fLoadProgress = -1.0;
  ___11EFileStream(&s,2);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/dataset/e_rdataset.h */
    gpTypeInfo_ERDataset =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9ERDataset_m_typeInfo,New__9ERDataset,0,"ERDataset",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERDataset* ERDataset::New() {
  ERDataset *pEVar1;
  
  pEVar1 = (ERDataset *)__builtin_new(0x1c);
  pEVar1 = __9ERDataset(pEVar1);
  return pEVar1;
}

void ERDataset::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERDataset *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERDataset::GetTypeInfo() {
  return &_9ERDataset_m_typeInfo;
}

char* ERDataset::GetTypeName() {
  return _9ERDataset_m_typeInfo.m_name;
}

u32 ERDataset::GetTypeKey() {
  return _9ERDataset_m_typeInfo.m_key;
}

u16 ERDataset::GetTypeVersion() {
  return _9ERDataset_m_typeInfo.m_version;
}

u16 ERDataset::GetReadVersion() {
  return _9ERDataset_m_typeInfo.m_readVersion;
}

ETypeInfo* ERDataset::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9ERDataset_m_typeInfo,New__9ERDataset,version,"ERDataset",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERDataset* ERDataset::CreateCopy() {
  ERDataset *pEVar1;
  
  pEVar1 = (ERDataset *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_ERDataset() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

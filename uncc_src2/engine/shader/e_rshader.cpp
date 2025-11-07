// STATUS: NOT STARTED

#include "e_rshader.h"

ETypeInfo *gpTypeInfo_ERShader = NULL;

__vtbl_ptr_type ERShader virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERShader::SafeDelete,
		/* .__delta2 = */ -28080
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERShader::GetTypeInfo,
		/* .__delta2 = */ -28024
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERShader::GetTypeName,
		/* .__delta2 = */ -28008
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERShader::GetTypeKey,
		/* .__delta2 = */ -27992
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERShader::GetTypeVersion,
		/* .__delta2 = */ -27976
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERShader::~ERShader,
		/* .__delta2 = */ -30096
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
		/* .__pfn = */ &ERShader::Reload,
		/* .__delta2 = */ -29792
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

ETypeInfo ERShader::m_typeInfo;

EStream& operator<<(EStream &s, ERShader *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERShader *&pD) {
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
  *pD = (ERShader *)pStorable;
  return s;
}

ERShader* ERShader::ERShader() {
  __9EResource(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_rtextureList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERShader;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_rtextureList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pShader = (EShader *)0x0;
  return this;
}

void ERShader::~ERShader(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERShader;
  Deallocate__8ERShader(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_rtextureList).field0_0x0);
                    /* end of inlined section */
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/shader/e_rshader.h */
    _allocBucketFree__FPvUiUi(this,0x20,0x20);
  }
                    /* end of inlined section */
  return;
}

void ERShader::Deallocate() {
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	
  EGlobalManagerClient__vtable *pEVar1;
  ENodeListNode *pEVar2;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[0xb].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xb].ManagedStartup,
             this->m_pShader);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_rtextureList).field0_0x0.m_l.m_pHead;
  this->m_pShader = (EShader *)0x0;
                    /* end of inlined section */
  for (; pEVar2 != (ENodeListNode *)0x0; pEVar2 = (ENodeListNode *)(&pEVar2->data)[2]) {
                    /* end of inlined section */
    DelRef__9EResource((EResource *)pEVar2->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  RemoveAll__9ENodeList(&(this->m_rtextureList).field0_0x0);
  return;
}

void ERShader::Attach(EShader *pShader, TNodeList<ERTexture *> *pRTextureList) {
	TNodeList<ERTexture *> &list;
	
  Deallocate__8ERShader(this);
  this->m_pShader = pShader;
  if (pRTextureList != (TNodeList_ERTexture___ *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListRC9ENodeList(&(this->m_rtextureList).field0_0x0,&pRTextureList->field0_0x0);
  }
                    /* end of inlined section */
  return;
}

void ERShader::Reload(EStream &s) {
	TNodeList<ERTexture *> oldTextureList;
	EShaderDef sd;
	NLIterator nli;
	TNodeList<ERTexture *> &src;
	TNodeList<ERTexture *> &src;
	TNodeList<ERTexture *> &list;
	NLIterator i;
	NLIterator i;
	
  EShader__vtable *pEVar1;
  ENodeListNode *pEVar2;
  EShaderRenderPassDef *pEVar3;
  int iVar4;
  TNodeList_ERTexture___ oldTextureList;
  EShaderDef sd;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  oldTextureList.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  oldTextureList.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  RemoveAll__9ENodeList(&oldTextureList.field0_0x0);
  AddTail__9ENodeListRC9ENodeList(&oldTextureList.field0_0x0,&(this->m_rtextureList).field0_0x0);
                    /* end of inlined section */
  RemoveAll__9ENodeList(&(this->m_rtextureList).field0_0x0);
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
  pEVar3 = sd.rp;
  iVar4 = 1;
  do {
    pEVar3->pTexture = (ETexture *)0x0;
    iVar4 = iVar4 + -1;
    pEVar3->rasterModes = 8;
    pEVar3->flags = 0x18;
    pEVar3->blendA = '\0';
    pEVar3->blendB = '\x01';
    pEVar3->blendC = '\0';
    pEVar3->blendD = '\x01';
    pEVar3->blendFix = 0x80;
    pEVar3->combine = '\0';
    pEVar3->textureGen = '\0';
    pEVar3->alphaTestThreshold = 0.5;
    pEVar3 = pEVar3 + 1;
  } while (iVar4 != -1);
  sd.mat.vAmbientColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[0] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[1] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
  sd.nRenderPasses = '\x01';
  sd.flags = 0x817;
  sd.geometryModes = 8;
  sd.sortMode = '\0';
                    /* end of inlined section */
  sd.sortValue = 0;
  DoLoad__8ERShaderR7EStreamR10EShaderDef(this,s,&sd);
  pEVar1 = this->m_pShader->__vtable;
  (*(code *)pEVar1[1].EShader)((int)(this->m_pShader->m_sd).rp + *(short *)(pEVar1 + 1) + -0x10,&sd)
  ;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar2 = oldTextureList.field0_0x0.m_l.m_pHead; pEVar2 != (ENodeListNode *)0x0;
      pEVar2 = (ENodeListNode *)(&pEVar2->data)[2]) {
                    /* end of inlined section */
    DelRef__9EResource((EResource *)pEVar2->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&oldTextureList.field0_0x0);
  return;
}

void ERShader::Load(EStream &s) {
	EShaderDef sd;
	EShaderDef *this;
	EVec4 *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  EShaderRenderPassDef *pEVar2;
  EShader *pEVar3;
  int iVar4;
  EShaderDef sd;
  
  Deallocate__8ERShader(this);
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
  pEVar2 = sd.rp;
  iVar4 = 1;
  do {
    pEVar2->pTexture = (ETexture *)0x0;
    iVar4 = iVar4 + -1;
    pEVar2->rasterModes = 8;
    pEVar2->flags = 0x18;
    pEVar2->blendA = '\0';
    pEVar2->blendB = '\x01';
    pEVar2->blendC = '\0';
    pEVar2->blendD = '\x01';
    pEVar2->blendFix = 0x80;
    pEVar2->combine = '\0';
    pEVar2->textureGen = '\0';
    pEVar2->alphaTestThreshold = 0.5;
    pEVar2 = pEVar2 + 1;
  } while (iVar4 != -1);
  sd.mat.vAmbientColor.field0_0x0.d[0] = 1.0;
  sd.mat.vAmbientColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
  sd.flags = 0x817;
  sd.geometryModes = 8;
  sd.mat.vDiffuseColor.field0_0x0.d[0] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[1] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
  sd.nRenderPasses = '\x01';
  sd.sortValue = 0;
                    /* end of inlined section */
  sd.sortMode = '\0';
  DoLoad__8ERShaderR7EStreamR10EShaderDef(this,s,&sd);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  pEVar3 = (EShader *)
           (*(code *)pEVar1[0xb].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xb),&sd);
  this->m_pShader = pEVar3;
  return;
}

void ERShader::DoLoad(EStream &s, EShaderDef &sd) {
	u32 signature;
	EVec3 vAmbientColor;
	EVec3 vDiffuseColor;
	u32 surfaceType;
	EStream &s;
	EStream &s;
	unsigned int &d;
	EVec4 *this;
	EVec4 *this;
	int crp;
	EShaderRenderPassDef &rp;
	u32 textureId;
	EStream &s;
	EStream &s;
	EStream &s;
	
  EStream *s_00;
  EResource *data;
  EString *d;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EShaderRenderPassDef *pEVar1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar2;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  EVec3 vAmbientColor;
  EVec3 vDiffuseColor;
  uint signature;
  uint textureId;
  uint surfaceType;
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
  
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  iVar2 = 0;
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  d = &(this->field0_0x0).m_name;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&signature,4);
                    /* end of inlined section */
  __rs__FR7EStreamR7EString(s,d);
  Empty__7EString(d);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&sd->nRenderPasses,1);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,sd,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&sd->sortMode,1);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&sd->sortValue,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&sd->flags,4);
                    /* end of inlined section */
  s_00 = __rs__FR7EStreamR5EVec3(s,&vAmbientColor);
  __rs__FR7EStreamR5EVec3(s_00,&vDiffuseColor);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (sd->mat).vAmbientColor.field0_0x0.d[0] = vAmbientColor.field0_0x0.d[0];
  (sd->mat).vAmbientColor.field0_0x0.d[1] = vAmbientColor.field0_0x0.d[1];
  (sd->mat).vAmbientColor.field0_0x0.d[2] = vAmbientColor.field0_0x0.d[2];
  (sd->mat).vDiffuseColor.field0_0x0.d[0] = vDiffuseColor.field0_0x0.d[0];
  (sd->mat).vDiffuseColor.field0_0x0.d[1] = vDiffuseColor.field0_0x0.d[1];
  (sd->mat).vDiffuseColor.field0_0x0.d[2] = vDiffuseColor.field0_0x0.d[2];
                    /* end of inlined section */
  if (sd->nRenderPasses != '\0') {
    do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      pEVar1 = sd->rp + iVar2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&textureId,4);
                    /* end of inlined section */
      if (textureId == 0) {
        pEVar1->pTexture = (ETexture *)0x0;
      }
      else {
                    /* inlined from /eor/src2/engine/texture/e_textureman.h */
        data = AddRef__16EResourceManagerUiP5EFilei
                         (&_textureman.field0_0x0,textureId,(EFile *)0x0,0);
        AddTail__9ENodeListUi(&(this->m_rtextureList).field0_0x0,(uint)data);
                    /* end of inlined section */
        pEVar1->pTexture = (ETexture *)data[1].field0_0x0.__vtable;
      }
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->rasterModes,4
                );
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->flags,4);
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->blendA,1);
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->blendB,1);
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->blendC,1);
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->blendD,1);
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->blendFix,1);
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->combine,1);
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&pEVar1->textureGen,1)
      ;
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                 &pEVar1->alphaTestThreshold,4);
                    /* end of inlined section */
    } while (iVar2 < (int)(uint)sd->nRenderPasses);
  }
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&surfaceType,4);
                    /* end of inlined section */
  sd->surfaceType = surfaceType;
  return;
}

int ERShader::GetGeometryPassCount() {
  int iVar1;
  
  iVar1 = GetGeometryPassCount__7EShader(this->m_pShader);
  return iVar1;
}

void ERShader::Select(ERC *prc, int geometryPass) {
  EShader__vtable *pEVar1;
  
  pEVar1 = this->m_pShader->__vtable;
  (*(code *)pEVar1->ChangeMaterial)
            ((int)(this->m_pShader->m_sd).rp + *(short *)&pEVar1->Create + -0x10,prc,geometryPass);
  return;
}

void ERShader::SelectForShadowMask(ERC *prc) {
  EShader__vtable *pEVar1;
  
  pEVar1 = this->m_pShader->__vtable;
  (*(code *)pEVar1->SetAlternateShader)
            ((int)(this->m_pShader->m_sd).rp + *(short *)&pEVar1->Validate + -0x10,prc);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/shader/e_rshader.h */
    gpTypeInfo_ERShader =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_8ERShader_m_typeInfo,New__8ERShader,0,"ERShader",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERShader* ERShader::New() {
  ERShader *pEVar1;
  
  pEVar1 = (ERShader *)__nw__8ERShaderUi(0x20);
  pEVar1 = __8ERShader(pEVar1);
  return pEVar1;
}

void ERShader::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERShader *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERShader::GetTypeInfo() {
  return &_8ERShader_m_typeInfo;
}

char* ERShader::GetTypeName() {
  return _8ERShader_m_typeInfo.m_name;
}

u32 ERShader::GetTypeKey() {
  return _8ERShader_m_typeInfo.m_key;
}

u16 ERShader::GetTypeVersion() {
  return _8ERShader_m_typeInfo.m_version;
}

u16 ERShader::GetReadVersion() {
  return _8ERShader_m_typeInfo.m_readVersion;
}

ETypeInfo* ERShader::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_8ERShader_m_typeInfo,New__8ERShader,version,"ERShader",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERShader* ERShader::CreateCopy() {
  ERShader *pEVar1;
  
  pEVar1 = (ERShader *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ERShader::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x20,0x20);
  return pvVar1;
}

void* ERShader::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ERShader::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x20,0x20);
  return;
}

EShader* ERShader::GetShader() {
  return this->m_pShader;
}

void global constructors keyed to gpTypeInfo_ERShader() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

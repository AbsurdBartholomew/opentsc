// STATUS: NOT STARTED

#include "ObjSelector.h"

enum CatalogRating {
	kCR_Hunger = 0,
	kCR_Comfort = 1,
	kCR_Hygiene = 2,
	kCR_Bladder = 3,
	kCR_Energy = 4,
	kCR_Fun = 5,
	kCR_Room = 6,
	kCR_Cook = 7,
	kCR_Mechanical = 8,
	kCR_Logic = 9,
	kCR_Body = 10,
	kCR_Creativity = 11,
	kCR_Charisma = 12,
	kCR_Study = 13,
	kCR_NumRatings = 14
};

ObjSelector* ObjSelector::ObjSelector() {
	ObjSelector *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  this->fFlags = -0x10000;
                    /* end of inlined section */
  this->fMainTreeVersion = -1;
  this->fSemiFile = (QuickResFile__182_935 *)0x0;
  this->fBehavior = (Behavior *)0x0;
  this->fLang = (Language *)0x0;
  this->fHeader = (ObjDefinition *)0x0;
  this->fTreeTable = (TreeTable *)0x0;
  this->fFolder = (ObjectFolder *)0x0;
  this->fResData = (ResFile *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  (this->fTreeTuning).numValues = 0;
  (this->fTreeTuning).values = (VALUE *)0x0;
                    /* end of inlined section */
  this->fMaster = (ObjSelector *)0x0;
  this->fFnTable = (ObjFnTable *)0x0;
  this->fInstanceCount = 0;
  this->f_SaveType = 0;
  this->fIndex = -1;
  this->fInitTreeVersion = -1;
  this->fCatalogResource = (CatalogResource *)0x0;
  this->fUserName = (BString2 *)0x0;
  this->fCustomCharacter = (CustomCharacter *)0x0;
  this->fNPCharacter = (NPC *)0x0;
  this->fThumbnailShader = (ERShader *)0x0;
  this->fDesiredPreloadState = kNotLoaded;
  this->fActualPreloadState = kNotLoaded;
  this->pNextHash = (ObjSelector *)0x0;
  (this->field0_0x0).fFile = (iResFile__6_5027 *)0x0;
  this->fAnimTables[0] = (AnimTable *)0x0;
  this->fAnimTables[1] = (AnimTable *)0x0;
  this->fAnimTables[2] = (AnimTable *)0x0;
  this->fAnimTables[3] = (AnimTable *)0x0;
  return this;
}

bool ObjSelector::IsPreloaded() {
	bool result;
	SInt16 masterID;
	ObjSelector *pSel;
	ObjSelector *this;
	ObjSelector *this;
	
  ushort uVar1;
  ObjectFolder *pOVar2;
  bool bVar3;
  bool bVar4;
  ObjectFolder__vtable *pOVar5;
  long lVar6;
  ObjSelector *this_00;
  
  pOVar2 = _5Globs_pObjectFolder;
  if ((this->fActualPreloadState == kDataLoaded) ||
     (bVar3 = false, this->fHeader->pResData == (ResData *)0x0)) {
    bVar3 = true;
    if (this->fHeader->pResData == (ResData *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = 0;
      uVar1 = this->fHeader->masterID;
      pOVar5 = _5Globs_pObjectFolder->__vtable;
      while (lVar6 = (*(code *)pOVar5->ResumeObjectFiles)
                               ((int)&pOVar2->__vtable + (int)*(short *)&pOVar5->SuspendObjectFiles,
                                lVar6), lVar6 != 0) {
        this_00 = (ObjSelector *)lVar6;
                    /* end of inlined section */
        if (this_00->fHeader->masterID == uVar1) {
                    /* end of inlined section */
          if (this_00->fHeader->pResData == (ResData *)0x0) {
            pOVar5 = pOVar2->__vtable;
          }
          else {
            bVar4 = TestFromSameFile__C11ObjSelectorPC11ObjSelector(this_00,this);
            pOVar5 = pOVar2->__vtable;
            if ((bVar4) && (this_00->fActualPreloadState != kDataLoaded)) {
              bVar3 = false;
            }
          }
        }
        else {
          pOVar5 = pOVar2->__vtable;
        }
      }
    }
  }
  return bVar3;
}

bool ObjSelector::IsPreloadable() {
  ResData *pRVar1;
  bool bVar2;
  
  pRVar1 = this->fHeader->pResData;
  bVar2 = false;
  if (pRVar1 != (ResData *)0x0) {
    bVar2 = (bool)((byte)*(undefined4 *)&pRVar1->field_0x4 & 1);
  }
  return bVar2;
}

bool ObjSelector::Writable() {
	ObjSelector *this;
	
  undefined uVar1;
  iResFile__6_5027 *piVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  piVar2 = (this->field0_0x0).fFile;
  if (piVar2 == (iResFile__6_5027 *)0x0) {
    piVar2 = loadFile__11ObjSelector(this);
  }
                    /* end of inlined section */
  uVar1 = (*(code *)piVar2->__vtable->GetResType)
                    ((int)&piVar2->fNextFile + (int)*(short *)&piVar2->__vtable->GetName);
  return (bool)uVar1;
}

iResFile* ObjSelector::loadFile() {
  ObjectFolder__vtable *pOVar1;
  
  pOVar1 = this->fFolder->__vtable;
  (*(code *)pOVar1[1].CreateNewUserSelector)
            ((int)&this->fFolder->__vtable + (int)*(short *)&pOVar1[1].RemoveSelector,this);
  return (this->field0_0x0).fFile;
}

SInt16 ObjSelector::GetEffectiveTreeTableID() {
	ObjDefinition *def;
	ObjSelector *this;
	
  bool bVar1;
  ushort uVar2;
  ObjSelector *pOVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  uVar2 = this->fHeader->treeTableID;
  if (((short)uVar2 < 0) && (bVar1 = uVar2 == 0xffff, uVar2 = 0, bVar1)) {
    pOVar3 = GetMasterSelector__11ObjSelector(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
    uVar2 = pOVar3->fHeader->treeTableID;
  }
  return uVar2;
}

bool ObjSelector::TestFromSameFile(ObjSelector *other) {
  return this->fResData == other->fResData;
}

ObjSelector* ObjSelector::GetMasterSelector() {
  ObjectFolder__vtable *pOVar1;
  ObjSelector *pOVar2;
  
  pOVar2 = this->fMaster;
  if (pOVar2 == (ObjSelector *)0x0) {
    pOVar1 = this->fFolder->__vtable;
    pOVar2 = (ObjSelector *)
             (*(code *)pOVar1->GetPlaceholder)
                       ((int)&this->fFolder->__vtable + (int)*(short *)&pOVar1->DoStream,this);
    this->fMaster = pOVar2;
    pOVar2 = this->fMaster;
  }
  return pOVar2;
}

ObjSelector* ObjSelector::GetOriginal() {
  ObjectFolder__vtable *pOVar1;
  ObjSelector *pOVar2;
  
  pOVar1 = this->fFolder->__vtable;
  pOVar2 = (ObjSelector *)
           (*(code *)pOVar1->DeletingInstance)
                     ((int)&this->fFolder->__vtable + (int)*(short *)&pOVar1->CreatingInstance,
                      this->fHeader->originalGUID);
  return pOVar2;
}

SInt32 ObjSelector::GetGUID() {
  return this->fHeader->guid;
}

void ObjSelector::SetObjectName(char *newname) {
  return;
}

void ObjSelector::ChangedDef() {
  return;
}

ELocString ObjSelector::GetCatalogName() {
	CatalogResource *cr;
	
  CatalogResource *pCVar1;
  short **ppsVar2;
  
  pCVar1 = GetCatalogResource__11ObjSelector(this);
  ppsVar2 = (short **)
            (*(code *)pCVar1->__vtable[1].CatalogResource)
                      ((int)&pCVar1->__vtable + (int)*(short *)(pCVar1->__vtable + 1));
  return (ELocString)ppsVar2;
}

ELocString ObjSelector::GetCatalogDescription() {
	CatalogResource *cr;
	
  CatalogResource *pCVar1;
  short **ppsVar2;
  
  pCVar1 = GetCatalogResource__11ObjSelector(this);
  ppsVar2 = (short **)
            (*(code *)pCVar1->__vtable[1].GetName)
                      ((int)&pCVar1->__vtable + (int)*(short *)&pCVar1->__vtable[1].Load);
  return (ELocString)ppsVar2;
}

ELocString ObjSelector::GetCatalogShortName() {
	CatalogResource *cr;
	
  CatalogResource *pCVar1;
  short **ppsVar2;
  
  pCVar1 = GetCatalogResource__11ObjSelector(this);
  ppsVar2 = (short **)
            (*(code *)pCVar1->__vtable[1].GetShortName)
                      ((int)&pCVar1->__vtable + (int)*(short *)&pCVar1->__vtable[1].GetDescription);
  return (ELocString)ppsVar2;
}

static void __tcf_0() {
  ___8BString2((BString2 *)&empty_2217,2);
  return;
}

BString2& ObjSelector::GetUserName() {
	static BString2 empty;
	
  BString2 *pBVar1;
  
  pBVar1 = this->fUserName;
  if (pBVar1 == (BString2 *)0x0) {
    if (__tmp_0_2218 == 0) {
      __8BString2((BString2 *)&empty_2217);
      __tmp_0_2218 = 1;
      atexit(__tcf_0);
    }
    pBVar1 = (BString2 *)&empty_2217;
  }
  return pBVar1;
}

void ObjSelector::SetUserName(BString2 &newName) {
  BString2 *pBVar1;
  
  if (this->fUserName == (BString2 *)0x0) {
    pBVar1 = (BString2 *)__builtin_new(4);
    pBVar1 = __8BString2(pBVar1);
    this->fUserName = pBVar1;
  }
  __as__8BString2RC8BString2(this->fUserName,newName);
  return;
}

bool ObjSelector::GetThumbnail(ERShader **ppShader) {
  uint id;
  ERShader *pEVar1;
  long lVar2;
  
  pEVar1 = this->fThumbnailShader;
  if (((pEVar1 == (ERShader *)0x0) && (this->fNPCharacter != (NPC *)0x0)) &&
     (id = this->fNPCharacter->thumbnail, id != 0)) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
    this->fThumbnailShader = pEVar1;
    pEVar1 = this->fThumbnailShader;
  }
  *ppShader = pEVar1;
  if (pEVar1 == (ERShader *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar2 = (*(code *)_5Globs_pEORGlobals->__vtable->CheckForZeroExtentOverride)
                      ((int)_5Globs_pEORGlobals->_pSelectedSims +
                       *(short *)&_5Globs_pEORGlobals->__vtable->CheckForZeroExtentOverride + -0x24,
                       this);
    if (lVar2 == 0) {
      return false;
    }
    pEVar1 = this->fThumbnailShader;
    *ppShader = pEVar1;
    if (pEVar1 == (ERShader *)0x0) {
      return false;
    }
  }
  AddRef__9EResource(&this->fThumbnailShader->field0_0x0);
  return true;
}

void ObjSelector::SetThumbnail(ETexture *pTexture) {
	EShaderDef sd;
	EShader *pCustomShdr;
	ERTexture *pRTexture;
	EShaderDef *this;
	EVec4 *this;
	EShader *this;
	ERTexture *data;
	
  EGlobalManagerClient__vtable *pEVar1;
  ETexture *pEVar2;
  EShaderRenderPassDef *pEVar3;
  EShader *pEVar4;
  ERShader *pEVar5;
  ERTexture *pEVar6;
  int iVar7;
  EShaderDef sd;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  pEVar3 = sd.rp;
  iVar7 = 1;
  do {
    pEVar3->pTexture = (ETexture *)0x0;
    iVar7 = iVar7 + -1;
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
  } while (iVar7 != -1);
  sd.mat.vAmbientColor.field0_0x0.d[0] = 1.0;
  sd.mat.vAmbientColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[2] = 1.0;
  sd.sortMode = '\0';
  sd.mat.vDiffuseColor.field0_0x0.d[0] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[1] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
  sd.sortValue = 0;
                    /* end of inlined section */
  sd.flags = 3;
  sd.rp[0].blendD = '\x01';
  sd.nRenderPasses = '\x01';
  sd.geometryModes = 0;
  sd.rp[0].blendA = '\0';
  sd.rp[0].blendB = '\x01';
  sd.rp[0].blendC = '\0';
  sd.rp[0].flags = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  sd.rp[0].pTexture = pTexture;
  pEVar4 = (EShader *)
           (*(code *)pEVar1[0xb].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xb),&sd);
  if (this->fThumbnailShader == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_rshader.h */
    pEVar5 = (ERShader *)_allocBucketAlloc__FUiUi(0x20,0x20);
                    /* end of inlined section */
    pEVar5 = __8ERShader(pEVar5);
                    /* inlined from /eor/src2/engine/texture/e_rtexture.h */
    this->fThumbnailShader = pEVar5;
    pEVar6 = (ERTexture *)_allocBucketAlloc__FUiUi(0x18,0x18);
                    /* end of inlined section */
    pEVar6 = __9ERTexture(pEVar6);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->fThumbnailShader->m_rtextureList).field0_0x0,(uint)pEVar6);
                    /* end of inlined section */
    pEVar5 = this->fThumbnailShader;
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
    pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
    pEVar2 = (this->fThumbnailShader->m_pShader->m_sd).rp[0].pTexture;
                    /* end of inlined section */
    (*(code *)pEVar1[0xb].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xb].ManagedStartup);
    if (pEVar2 != pTexture) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[8].EGlobalManagerClient)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),pEVar2);
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar5 = this->fThumbnailShader;
                    /* end of inlined section */
    pEVar6 = (ERTexture *)((pEVar5->m_rtextureList).field0_0x0.m_l.m_pHead)->data;
  }
  pEVar5->m_pShader = pEVar4;
  pEVar6->m_pTexture = pTexture;
  return;
}

void ObjSelector::DestroyThumbnail() {
  if (this->fThumbnailShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->fThumbnailShader->field0_0x0);
    this->fThumbnailShader = (ERShader *)0x0;
  }
  return;
}

Int ObjSelector::GetThumbnailGraphicIndex() {
  return (int)(short)this->fHeader->thumbnailGraphicIndex;
}

bool ObjSelector::GetThumbnailHasShadow() {
  ObjSelector *pOVar1;
  
  pOVar1 = GetMasterSelector__11ObjSelector(this);
  return (bool)(((byte)pOVar1->fHeader->shadowFlags ^ 1) & 1);
}

bool ObjSelector::GetRuntimeHasShadow() {
  ObjSelector *pOVar1;
  
  pOVar1 = GetMasterSelector__11ObjSelector(this);
  return (bool)(((byte)(pOVar1->fHeader->shadowFlags >> 1) ^ 1) & 1);
}

bool ObjSelector::GetHasGraphics() {
	ObjDefinition *this;
	
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
                    /* end of inlined section */
  if (this->fHeader->masterID == 0) {
    return this->fHeader->numGraphics != 0;
  }
  return true;
}

bool ObjSelector::GetHasInteractions() {
	TreeTable *ttab;
	TreeTable *this;
	VECTOR<TreeTableEntry> *this;
	
  TreeTableEntry *pTVar1;
  bool bVar2;
  TreeTable *pTVar3;
  short **ppsVar4;
  
  pTVar3 = GetTreeTable__11ObjSelector(this);
  if (pTVar3 == (TreeTable *)0x0) {
    bVar2 = false;
  }
  else {
    pTVar1 = (pTVar3->fEntries).pData;
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    if (pTVar1 == (TreeTableEntry *)0x0) {
      ppsVar4 = (short **)0x0;
    }
    else {
      ppsVar4 = pTVar1[-1].fName.ptr;
    }
                    /* end of inlined section */
    bVar2 = ppsVar4 != (short **)0x0;
  }
  return bVar2;
}

bool ObjSelector::GetIsMultiTileSubObject() {
	ObjDefinition *this;
	
  bool bVar1;
  
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
                    /* end of inlined section */
  bVar1 = false;
  if (this->fHeader->masterID != 0) {
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
                    /* end of inlined section */
    bVar1 = this->fHeader->subIndex != 0xffff;
  }
  return bVar1;
}

bool ObjSelector::GetIsPerson() {
  return this->fHeader->type == 2;
}

Int ObjSelector::GetShadowBrightness() {
  return (int)(short)this->fHeader->shadowBrightness;
}

SInt32 ObjSelector::GetInitTreeVersion() {
	ObjFnTable *fnTab;
	ObjSelector *this;
	
  ushort inTreeID;
  ObjFnTable *pOVar1;
  int iVar2;
  
  iVar2 = this->fInitTreeVersion;
  if (iVar2 == -1) {
    pOVar1 = GetFnTable__11ObjSelector(this);
    inTreeID = (*(code *)pOVar1->__vtable[1].ObjFnTable)
                         ((int)&pOVar1->__vtable + (int)*(short *)(pOVar1->__vtable + 1),0);
    iVar2 = GetCumulativeTreeVersion__8Behaviors(this->fBehavior,inTreeID);
    this->fInitTreeVersion = iVar2;
    iVar2 = this->fInitTreeVersion;
  }
  return iVar2;
}

SInt32 ObjSelector::GetMainTreeVersion() {
	ObjFnTable *fnTab;
	ObjSelector *this;
	
  ushort inTreeID;
  ObjFnTable *pOVar1;
  int iVar2;
  
  iVar2 = this->fMainTreeVersion;
  if (iVar2 == -1) {
    pOVar1 = GetFnTable__11ObjSelector(this);
    inTreeID = (*(code *)pOVar1->__vtable[1].ObjFnTable)
                         ((int)&pOVar1->__vtable + (int)*(short *)(pOVar1->__vtable + 1),1);
    iVar2 = GetCumulativeTreeVersion__8Behaviors(this->fBehavior,inTreeID);
    this->fMainTreeVersion = iVar2;
    iVar2 = this->fMainTreeVersion;
  }
  return iVar2;
}

bool ObjSelector::AdultsOnly() {
	TreeTable *ttab;
	int total;
	TreeTable *this;
	VECTOR<TreeTableEntry> *this;
	int i;
	TreeTableEntry *entry;
	TreeTable *this;
	Int num;
	VECTOR<TreeTableEntry> *this;
	unsigned int n;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	
  TreeTableEntry *pTVar1;
  TreeTable *pTVar2;
  short **ppsVar3;
  TreeTableEntry *pTVar4;
  int iVar5;
  TreeTableEntry *pTVar6;
  short **ppsVar7;
  int iVar8;
  
  pTVar2 = GetTreeTable__11ObjSelector(this);
  iVar8 = 0;
  if (pTVar2 != (TreeTable *)0x0) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    pTVar1 = (pTVar2->fEntries).pData;
    ppsVar7 = (short **)0x0;
    if (pTVar1 != (TreeTableEntry *)0x0) {
      ppsVar7 = pTVar1[-1].fName.ptr;
    }
                    /* end of inlined section */
    iVar5 = 0;
    pTVar6 = pTVar1;
    if (0 < (int)ppsVar7) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
        pTVar4 = (TreeTableEntry *)0x0;
        if (-1 < iVar5) {
          ppsVar3 = (short **)0x0;
          if (pTVar1 != (TreeTableEntry *)0x0) {
            ppsVar3 = pTVar1[-1].fName.ptr;
          }
          pTVar4 = pTVar6;
          if ((int)ppsVar3 <= iVar5) {
            pTVar4 = (TreeTableEntry *)0x0;
          }
        }
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
        if (((pTVar4 != (TreeTableEntry *)0x0) && ((*(ushort *)&pTVar4->field_0xe >> 7 & 1) == 0))
           && (iVar8 = iVar8 + 1, ((*(ushort *)&pTVar4->field_0xe >> 4 ^ 1) & 1) != 0)) {
          return false;
        }
        iVar5 = iVar5 + 1;
        pTVar6 = pTVar6 + 1;
      } while (iVar5 < (int)ppsVar7);
    }
  }
  return 0 < iVar8;
}

bool ObjSelector::ChildrenOnly() {
	TreeTable *ttab;
	int total;
	TreeTable *this;
	VECTOR<TreeTableEntry> *this;
	int i;
	TreeTableEntry *entry;
	TreeTable *this;
	Int num;
	VECTOR<TreeTableEntry> *this;
	unsigned int n;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	
  TreeTableEntry *pTVar1;
  TreeTable *pTVar2;
  short **ppsVar3;
  TreeTableEntry *pTVar4;
  int iVar5;
  TreeTableEntry *pTVar6;
  short **ppsVar7;
  int iVar8;
  
  pTVar2 = GetTreeTable__11ObjSelector(this);
  iVar8 = 0;
  if (pTVar2 != (TreeTable *)0x0) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    pTVar1 = (pTVar2->fEntries).pData;
    ppsVar7 = (short **)0x0;
    if (pTVar1 != (TreeTableEntry *)0x0) {
      ppsVar7 = pTVar1[-1].fName.ptr;
    }
                    /* end of inlined section */
    iVar5 = 0;
    pTVar6 = pTVar1;
    if (0 < (int)ppsVar7) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
        pTVar4 = (TreeTableEntry *)0x0;
        if (-1 < iVar5) {
          ppsVar3 = (short **)0x0;
          if (pTVar1 != (TreeTableEntry *)0x0) {
            ppsVar3 = pTVar1[-1].fName.ptr;
          }
          pTVar4 = pTVar6;
          if ((int)ppsVar3 <= iVar5) {
            pTVar4 = (TreeTableEntry *)0x0;
          }
        }
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
        if (((pTVar4 != (TreeTableEntry *)0x0) && ((*(ushort *)&pTVar4->field_0xe >> 7 & 1) == 0))
           && (iVar8 = iVar8 + 1, ((*(ushort *)&pTVar4->field_0xe >> 6 ^ 1) & 1) != 0)) {
          return false;
        }
        iVar5 = iVar5 + 1;
        pTVar6 = pTVar6 + 1;
      } while (iVar5 < (int)ppsVar7);
    }
  }
  return 0 < iVar8;
}

bool ObjSelector::HasGroupActions() {
	TreeTable *ttab;
	int total;
	TreeTable *this;
	VECTOR<TreeTableEntry> *this;
	int i;
	TreeTableEntry *entry;
	TreeTable *this;
	Int num;
	VECTOR<TreeTableEntry> *this;
	unsigned int n;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	
  bool bVar1;
  TreeTable *this_00;
  short **ppsVar2;
  TreeTableEntry *pTVar3;
  int iVar4;
  int iVar5;
  short **ppsVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  this_00 = GetTreeTable__11ObjSelector(this);
  bVar1 = false;
  if (this_00 != (TreeTable *)0x0) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    pTVar3 = (this_00->fEntries).pData;
    ppsVar6 = (short **)0x0;
    if (pTVar3 != (TreeTableEntry *)0x0) {
      ppsVar6 = pTVar3[-1].fName.ptr;
    }
                    /* end of inlined section */
    iVar5 = 0;
    if (0 < (int)ppsVar6) {
      iVar8 = 0;
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
        iVar4 = 0;
        if (-1 < iVar5) {
          pTVar3 = (this_00->fEntries).pData;
          ppsVar2 = (short **)0x0;
          if (pTVar3 != (TreeTableEntry *)0x0) {
            ppsVar2 = pTVar3[-1].fName.ptr;
          }
          iVar4 = (int)&pTVar3->fCheckTreeID + iVar8;
          if ((int)ppsVar2 <= iVar5) {
            iVar4 = 0;
          }
        }
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
        if ((iVar4 != 0) && ((*(ushort *)(iVar4 + 0xe) >> 7 & 1) == 0)) {
                    /* end of inlined section */
          pTVar3 = GetEntryByIndex__C9TreeTablei(this_00,(int)*(short *)(iVar4 + 0x14));
          if (pTVar3 != (TreeTableEntry *)0x0) {
            iVar7 = iVar7 + 1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 0x1c;
      } while (iVar5 < (int)ppsVar6);
    }
    bVar1 = 0 < iVar7;
  }
  return bVar1;
}

int ObjSelector::GetCatalogRating(int rating) {
  int iVar1;
  
  if ((uint)rating < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00226f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&PTR_LAB_003b9d80)[rating])((&PTR_LAB_003b9d80)[rating],rating,this);
    return iVar1;
  }
  return 0;
}

ObjFnTable* ObjSelector::GetFnTable() {
	ObjSelector *this;
	ObjSelector *this;
	
  short sVar1;
  ObjFnTable__vtable *pOVar2;
  ObjFnTable *pOVar3;
  iResFile__6_5027 *piVar4;
  long lVar5;
  
  pOVar3 = this->fFnTable;
  if (pOVar3 == (ObjFnTable *)0x0) {
    pOVar3 = CreateInstance__10ObjFnTable();
    this->fFnTable = pOVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    piVar4 = (this->field0_0x0).fFile;
                    /* end of inlined section */
    pOVar2 = pOVar3->__vtable;
    sVar1 = *(short *)&pOVar2[1].GetCheckTreeID;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    if (piVar4 == (iResFile__6_5027 *)0x0) {
      piVar4 = loadFile__11ObjSelector(this);
    }
                    /* end of inlined section */
    lVar5 = (*(code *)pOVar2[1].Load)
                      ((int)&pOVar3->__vtable + (int)sVar1,piVar4,
                       *(undefined2 *)((int)&this->fFlags + 2));
    if (lVar5 == -0x62) {
      pOVar2 = this->fFnTable->__vtable;
      (*(code *)pOVar2->Load)
                ((int)&this->fFnTable->__vtable + (int)*(short *)&pOVar2->GetCheckTreeID,
                 this->fHeader);
      pOVar3 = this->fFnTable;
    }
    else {
      pOVar3 = this->fFnTable;
    }
  }
  return pOVar3;
}

CatalogResource* ObjSelector::GetCatalogResource() {
	CatalogResource *cr;
	ObjSelector *this;
	
  ushort uVar1;
  short sVar2;
  CatalogResource__vtable *pCVar3;
  bool bVar4;
  CatalogResource *pCVar5;
  
  pCVar5 = this->fCatalogResource;
  if (pCVar5 == (CatalogResource *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
    uVar1 = this->fHeader->catalogID;
    pCVar5 = CreateInstance__15CatalogResource();
    pCVar3 = pCVar5->__vtable;
    sVar2 = *(short *)&pCVar3->GetDescription;
    bVar4 = GetIsPerson__11ObjSelector(this);
    (*(code *)pCVar3->GetShortName)((int)&pCVar5->__vtable + (int)sVar2,this,uVar1,bVar4);
    this->fCatalogResource = pCVar5;
    pCVar5 = this->fCatalogResource;
  }
  return pCVar5;
}

void ObjSelector::GetShortFilename(StringBuffer *outName) {
	FileName fileName;
	FileName shortName;
	char *str;
	
  char *str;
  StackString_260_ fileName;
  StackString_260_ shortName;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  str = this->fModuleName;
  __12StringBufferPcUi(&fileName.field0_0x0,(char *)((uint)&fileName | 8),0x104);
  append__12StringBufferPCci(&fileName.field0_0x0,str,-1);
  __12StringBufferPcUi(&shortName.field0_0x0,shortName.fChars,0x104);
                    /* end of inlined section */
  ExtractFileName__FRC12StringBufferR12StringBuffer(&fileName.field0_0x0,&shortName.field0_0x0);
  copy__12StringBufferRC12StringBuffer(outName,&shortName.field0_0x0);
  return;
}

Int ObjSelector::CountTypeAttributes() {
	SInt32 guid;
	ObjectTypeAttrBlock *block;
	ObjectTypeAttrBlock *this;
	
  ObjectFolder__vtable *pOVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = this->fHeader->typeAttrGUID;
  if (iVar2 == 0) {
    iVar2 = this->fHeader->guid;
  }
  pOVar1 = this->fFolder->__vtable;
  lVar3 = (*(code *)pOVar1->CalcPreloadMemoryCost)
                    ((int)&this->fFolder->__vtable + (int)*(short *)&pOVar1->ForceDataPreload,iVar2)
  ;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)lVar3 + 4);
  }
  return iVar2;
}

SInt16* ObjSelector::GetTypeAttributes() {
	SInt32 guid;
	ObjectTypeAttrBlock *block;
	ObjectTypeAttrBlock *this;
	
  ObjectFolder__vtable *pOVar1;
  ushort *puVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = this->fHeader->typeAttrGUID;
  if (iVar4 == 0) {
    iVar4 = this->fHeader->guid;
  }
  pOVar1 = this->fFolder->__vtable;
  lVar3 = (*(code *)pOVar1->CalcPreloadMemoryCost)
                    ((int)&this->fFolder->__vtable + (int)*(short *)&pOVar1->ForceDataPreload,iVar4)
  ;
  if (lVar3 == 0) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = *(ushort **)((int)lVar3 + 8);
  }
  return puVar2;
}

TreeTable* ObjSelector::GetTreeTable() {
  ObjectFolder__vtable *pOVar1;
  TreeTable *pTVar2;
  
  pTVar2 = this->fTreeTable;
  if (pTVar2 == (TreeTable *)0x0) {
    pOVar1 = this->fFolder->__vtable;
    (*(code *)pOVar1[1].SaveUserData)
              ((int)&this->fFolder->__vtable + (int)*(short *)&pOVar1[1].LoadUserData,this);
    pTVar2 = this->fTreeTable;
  }
  return pTVar2;
}

u32 ObjSelector::CalcPreLoadMemoryCost() {
  uint uVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  uVar1 = (*(code *)_5Globs_pObjectFolder->__vtable[1].DeletingInstance)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].CreatingInstance,this);
  return uVar1;
}

u32 ObjSelector::CalcUnloadMemorySaving() {
  uint uVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  uVar1 = (*(code *)_5Globs_pObjectFolder->__vtable[1].DeletingResFile)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].CreatingResFile,this);
  return uVar1;
}

AnimTable* ObjSelector::GetAdultAnimTable() {
	ObjSelector *this;
	
  AnimTable *pAVar1;
  
  pAVar1 = this->fAnimTables[0];
  if (pAVar1 == (AnimTable *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    if ((this->field0_0x0).fFile == (iResFile__6_5027 *)0x0) {
      loadFile__11ObjSelector(this);
    }
                    /* end of inlined section */
    pAVar1 = CreateInstance__9AnimTable();
    this->fAnimTables[0] = pAVar1;
    (*(code *)pAVar1->__vtable->GetEntry)
              ((int)&pAVar1->__vtable + (int)*(short *)&pAVar1->__vtable->GetFile,
               (this->field0_0x0).fFile,0x81);
    pAVar1 = this->fAnimTables[0];
  }
  return pAVar1;
}

AnimTable* ObjSelector::GetChildAnimTable() {
	ObjSelector *this;
	
  AnimTable *pAVar1;
  
  pAVar1 = this->fAnimTables[1];
  if (pAVar1 == (AnimTable *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    if ((this->field0_0x0).fFile == (iResFile__6_5027 *)0x0) {
      loadFile__11ObjSelector(this);
    }
                    /* end of inlined section */
    pAVar1 = CreateInstance__9AnimTable();
    this->fAnimTables[1] = pAVar1;
    (*(code *)pAVar1->__vtable->GetEntry)
              ((int)&pAVar1->__vtable + (int)*(short *)&pAVar1->__vtable->GetFile,
               (this->field0_0x0).fFile,0x82);
    pAVar1 = this->fAnimTables[1];
  }
  return pAVar1;
}

AnimTable* ObjSelector::GetAdultToChildAnimTable() {
	ObjSelector *this;
	
  AnimTable *pAVar1;
  
  pAVar1 = this->fAnimTables[2];
  if (pAVar1 == (AnimTable *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    if ((this->field0_0x0).fFile == (iResFile__6_5027 *)0x0) {
      loadFile__11ObjSelector(this);
    }
                    /* end of inlined section */
    pAVar1 = CreateInstance__9AnimTable();
    this->fAnimTables[2] = pAVar1;
    (*(code *)pAVar1->__vtable->GetEntry)
              ((int)&pAVar1->__vtable + (int)*(short *)&pAVar1->__vtable->GetFile,
               (this->field0_0x0).fFile,0x83);
    pAVar1 = this->fAnimTables[2];
  }
  return pAVar1;
}

AnimTable* ObjSelector::GetChildToAdultAnimTable() {
	ObjSelector *this;
	
  AnimTable *pAVar1;
  
  pAVar1 = this->fAnimTables[3];
  if (pAVar1 == (AnimTable *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
    if ((this->field0_0x0).fFile == (iResFile__6_5027 *)0x0) {
      loadFile__11ObjSelector(this);
    }
                    /* end of inlined section */
    pAVar1 = CreateInstance__9AnimTable();
    this->fAnimTables[3] = pAVar1;
    (*(code *)pAVar1->__vtable->GetEntry)
              ((int)&pAVar1->__vtable + (int)*(short *)&pAVar1->__vtable->GetFile,
               (this->field0_0x0).fFile,0x84);
    pAVar1 = this->fAnimTables[3];
  }
  return pAVar1;
}

void ThumbnailLoader::DoStream(ReconBuffer *r, SInt32 version) {
	ETexture *pTexture;
	int pitchX;
	int pitchY;
	int i;
	s8 *pData;
	ReconBuffer *this;
	ETextureDef td;
	ERShader *pShader;
	EShader *this;
	ReconBuffer *this;
	ReconBuffer *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  ETexture *pTexture;
  char *pcVar2;
  ETexture__vtable *pEVar3;
  undefined8 unaff_s0;
  int iVar4;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ETextureDef td;
  ERShader *pShader;
  int pitchX;
  int pitchY;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/recon.h */
                    /* end of inlined section */
  pTexture = (ETexture *)0x0;
  if (r->fMode == kReading) {
                    /* end of inlined section */
    td.paletteSize = 0x100;
    td.paletteFormat = '\x02';
    td.bitsPerImagePixel = '\b';
    td.bitsPerPaletteEntry = ' ';
    td.flags = 0x803;
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
    td.pfnAllocAlign = (undefined1 *)0x0;
    td.pfnFree = (undefined1 *)0x0;
    td.mipMapLevels = 0;
    td.mipMapShift = 0.0;
                    /* end of inlined section */
    td.ysize = 0x20;
    td.xsize = 0x20;
    td.imageFormat = '\0';
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    pTexture = (ETexture *)
               (*(code *)pEVar1[7].ManagedShutdown)
                         ((int)&(_pGfx->field0_0x0).__vtable +
                          (int)*(short *)&pEVar1[7].ManagedStartup,&td);
  }
  else {
    GetThumbnail__11ObjSelectorPP8ERShader(this->m_pSelector,&pShader);
    if (pShader != (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
      pTexture = (pShader->m_pShader->m_sd).rp[0].pTexture;
      DelRef__9EResource(&pShader->field0_0x0);
    }
  }
  if (pTexture != (ETexture *)0x0) {
    EnableCompression__11ReconBuffer(r);
                    /* inlined from c:/eor/src2/games/sims/MSrc/recon.h */
                    /* end of inlined section */
    pEVar3 = pTexture->__vtable;
    if (r->fMode == kReading) {
      (*(code *)pEVar3->Validate)
                ((int)&(pTexture->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar3->Test1,2);
      pEVar3 = pTexture->__vtable;
    }
    else {
      (*(code *)pEVar3->Validate)
                ((int)&(pTexture->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar3->Test1,1);
      pEVar3 = pTexture->__vtable;
    }
    iVar4 = 0x1f;
    pcVar2 = (char *)(**(code **)(pEVar3 + 1))
                               ((int)&(pTexture->m_textureDef).pfnAllocAlign +
                                (int)*(short *)&pEVar3->Select,0,&pitchX,&pitchY);
    do {
      iVar4 = iVar4 + -1;
      Recon8__11ReconBufferPSci(r,pcVar2,0x20);
      pcVar2 = pcVar2 + pitchX;
    } while (-1 < iVar4);
    pcVar2 = (char *)(*(code *)pTexture->__vtable[1].Lock)
                               ((int)&(pTexture->m_textureDef).pfnAllocAlign +
                                (int)*(short *)&pTexture->__vtable[1].ETexture);
    Recon8__11ReconBufferPSci(r,pcVar2,0x400);
    (*(code *)pTexture->__vtable[1].Invalidate)
              ((int)&(pTexture->m_textureDef).pfnAllocAlign +
               (int)*(short *)&pTexture->__vtable[1].Unlock);
                    /* inlined from c:/eor/src2/games/sims/MSrc/recon.h */
                    /* end of inlined section */
    if (r->fMode == kReading) {
      SetThumbnail__11ObjSelectorP8ETexture(this->m_pSelector,pTexture);
    }
  }
  return;
}

ETexture* ThumbnailLoader::CreateEmptyThumbnail() {
	ETextureDef td;
	ETexture *pTexture;
	int pitchX;
	int pitchY;
	int i;
	s8 *pData;
	int j;
	int j;
	
  EGlobalManagerClient__vtable *pEVar1;
  ETexture *pEVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ETextureDef td;
  int pitchX;
  int pitchY;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  td.paletteSize = 0x100;
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  td.flags = 0x803;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  td.paletteFormat = '\x02';
  td.bitsPerImagePixel = '\b';
  td.bitsPerPaletteEntry = ' ';
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
                    /* end of inlined section */
  td.ysize = 0x20;
  td.xsize = 0x20;
  td.imageFormat = '\0';
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  pEVar2 = (ETexture *)
           (*(code *)pEVar1[7].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[7].ManagedStartup,
                      &td);
  (*(code *)pEVar2->__vtable->Validate)
            ((int)&(pEVar2->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar2->__vtable->Test1,2)
  ;
  iVar3 = (**(code **)(pEVar2->__vtable + 1))
                    ((int)&(pEVar2->m_textureDef).pfnAllocAlign +
                     (int)*(short *)&pEVar2->__vtable->Select,0,&pitchX,&pitchY);
  iVar6 = 0;
  do {
    iVar5 = 3;
    puVar4 = (undefined4 *)(iVar3 + 0xc);
    do {
      *puVar4 = 0;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined4 *)(iVar3 + 0x10);
    iVar5 = 3;
    do {
      *puVar4 = 0xffffffff;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar5);
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + pitchX;
  } while (iVar6 < 0x10);
  iVar6 = 0x10;
  do {
    iVar6 = iVar6 + 1;
    iVar5 = 3;
    puVar4 = (undefined4 *)(iVar3 + 0xc);
    do {
      *puVar4 = 0xffffffff;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined4 *)(iVar3 + 0x10);
    iVar5 = 3;
    do {
      *puVar4 = 0;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar5);
    iVar3 = iVar3 + pitchX;
  } while (iVar6 < 0x20);
  puVar4 = (undefined4 *)
           (*(code *)pEVar2->__vtable[1].Lock)
                     ((int)&(pEVar2->m_textureDef).pfnAllocAlign +
                      (int)*(short *)&pEVar2->__vtable[1].ETexture);
  memset(puVar4,0x55,0x400);
  puVar4[0xff] = 0xff0000;
  *puVar4 = 0xff;
  (*(code *)pEVar2->__vtable[1].Invalidate)
            ((int)&(pEVar2->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar2->__vtable[1].Unlock
            );
  return pEVar2;
}

void ThumbnailLoader::DuplicateThumbnail(ETexture **OutPtr, ETexture *InPtr) {
	ETextureDef td;
	ETexture *pTexture;
	int pitchX;
	int pitchY;
	int i;
	s8 *pData;
	s8 *pData1;
	int j;
	s8 *pBeginLine;
	s8 *pBeginLine1;
	
  undefined uVar1;
  EGlobalManagerClient__vtable *pEVar2;
  ETexture *pEVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pDest;
  void *pSource;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined *puVar9;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  ETextureDef td;
  int pitchX;
  int pitchY;
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
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((OutPtr != (ETexture **)0x0) && (InPtr != (ETexture *)0x0)) {
                    /* end of inlined section */
    td.paletteSize = 0x100;
    td.flags = 0x803;
    td.paletteFormat = '\x02';
    td.bitsPerImagePixel = '\b';
    td.bitsPerPaletteEntry = ' ';
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
    td.pfnAllocAlign = (undefined1 *)0x0;
    td.pfnFree = (undefined1 *)0x0;
    td.mipMapLevels = 0;
    td.mipMapShift = 0.0;
                    /* end of inlined section */
    td.ysize = 0x20;
    td.xsize = 0x20;
    td.imageFormat = '\0';
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    pEVar3 = (ETexture *)
             (*(code *)pEVar2[7].ManagedShutdown)
                       ((int)&(_pGfx->field0_0x0).__vtable +
                        (int)*(short *)&pEVar2[7].ManagedStartup,&td);
    (*(code *)pEVar3->__vtable->Validate)
              ((int)&(pEVar3->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar3->__vtable->Test1,
               2);
    (*(code *)InPtr->__vtable->Validate)
              ((int)&(InPtr->m_textureDef).pfnAllocAlign + (int)*(short *)&InPtr->__vtable->Test1,1)
    ;
    puVar4 = (undefined *)
             (**(code **)(pEVar3->__vtable + 1))
                       ((int)&(pEVar3->m_textureDef).pfnAllocAlign +
                        (int)*(short *)&pEVar3->__vtable->Select,0,&pitchX,&pitchY);
    puVar5 = (undefined *)
             (**(code **)(InPtr->__vtable + 1))
                       ((int)&(InPtr->m_textureDef).pfnAllocAlign +
                        (int)*(short *)&InPtr->__vtable->Select,0,&pitchX,&pitchY);
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      iVar7 = 0x1f;
      puVar8 = puVar5;
      puVar9 = puVar4;
      do {
        uVar1 = *puVar8;
        iVar7 = iVar7 + -1;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
      } while (-1 < iVar7);
      puVar5 = puVar5 + pitchX;
      puVar4 = puVar4 + pitchX;
    } while (iVar6 < 0x20);
    pDest = (void *)(*(code *)pEVar3->__vtable[1].Lock)
                              ((int)&(pEVar3->m_textureDef).pfnAllocAlign +
                               (int)*(short *)&pEVar3->__vtable[1].ETexture);
    pSource = (void *)(*(code *)InPtr->__vtable[1].Lock)
                                ((int)&(InPtr->m_textureDef).pfnAllocAlign +
                                 (int)*(short *)&InPtr->__vtable[1].ETexture);
    memcpy(pDest,pSource,0x400);
    (*(code *)pEVar3->__vtable[1].Invalidate)
              ((int)&(pEVar3->m_textureDef).pfnAllocAlign +
               (int)*(short *)&pEVar3->__vtable[1].Unlock);
    (*(code *)InPtr->__vtable[1].Invalidate)
              ((int)&(InPtr->m_textureDef).pfnAllocAlign + (int)*(short *)&InPtr->__vtable[1].Unlock
              );
    *OutPtr = pEVar3;
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

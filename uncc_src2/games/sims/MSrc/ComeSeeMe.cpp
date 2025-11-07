// STATUS: NOT STARTED

#include "ComeSeeMe.h"

FTilePt GetAverageLocation(cXObject *obj) {
	cXMTObject *mtobj;
	FTilePt loc;
	Int numPieces;
	cXObject *ptr;
	FTilePt loc;
	FTilePt tloc;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  long in_a1;
  FTilePt in_a2;
  TreeSim **ppTVar10;
  int iVar11;
  FTilePt loc;
  FTilePt tloc;
  
                    /* inlined from SCID.h */
  ppTVar10 = (TreeSim **)in_a1;
  if (in_a1 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)_dyncastimpl__7TreeSim4SCID(*ppTVar10,cXMTObjectID);
  }
                    /* end of inlined section */
  if (piVar7 == (int *)0x0) {
                    /* end of inlined section */
    (*(code *)ppTVar10[1][0x16].m_pPerson)
              ((int)ppTVar10 + (int)*(short *)&ppTVar10[1][0x16].m_pObject,&loc);
  }
  else {
    loc.x.whole = 0;
                    /* end of inlined section */
    iVar11 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/tiles.h */
    loc.y.whole = 0;
                    /* end of inlined section */
    sVar4 = *(short *)(piVar7[1] + 0x10);
    pcVar9 = *(code **)(piVar7[1] + 0x14);
    while (piVar7 = (int *)(*pcVar9)((int)piVar7 + (int)sVar4), piVar7 != (int *)0x0) {
      iVar11 = iVar11 + 1;
      iVar5 = *(int *)(*piVar7 + 4);
      uVar8 = (**(code **)(iVar5 + 0x2cc))(*piVar7 + (int)*(short *)(iVar5 + 0x2c8));
      uVar2 = uVar8 + 7 & 7;
      uVar3 = uVar8 & 7;
      in_a2 = (FTilePt)((*(long *)((uVar8 + 7) - uVar2) << (7 - uVar2) * 8 |
                        (ulong)in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                        -1L << (8 - uVar3) * 8 | *(ulong *)(uVar8 - uVar3) >> uVar3 * 8);
      puVar1 = (undefined *)((int)&tloc.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)in_a2 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/tiles.h */
      tloc.x = in_a2.x;
      tloc.y = in_a2.y;
      loc.x.whole = loc.x.whole + tloc.x.whole;
      loc.y.whole = loc.y.whole + tloc.y.whole;
                    /* end of inlined section */
      sVar4 = *(short *)(piVar7[1] + 0x18);
      pcVar9 = *(code **)(piVar7[1] + 0x1c);
      tloc = in_a2;
    }
    if (iVar11 == 0) {
      trap(7);
    }
    loc.x.whole = loc.x.whole / iVar11;
    loc.y.whole = loc.y.whole / iVar11;
  }
  puVar1 = (undefined *)((int)&obj->__vtable + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | CONCAT44(loc.x.whole,loc.y.whole) >> (7 - uVar2) * 8;
  uVar2 = (uint)obj & 7;
  *(ulong *)((int)obj - uVar2) =
       CONCAT44(loc.x.whole,loc.y.whole) << uVar2 * 8 |
       *(ulong *)((int)obj - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return (FTilePt)(long)(int)obj;
}

static ObjSelector* GetComeSeeMeSelector() {
  ObjSelector *pOVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pOVar1 = (ObjSelector *)
           (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,
                      0xfffffffff3aaa62f);
  return pOVar1;
}

static cXObject* GetComeSeeMe(cXObject *object) {
	ObjSelector *comeSeeMeSel;
	ObjectModule *om;
	RelMatrix &rm;
	Int numKeys;
	Int k;
	cXObject *test;
	
  undefined2 uVar1;
  ObjSelector *pOVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  ObjSelector *pOVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  pOVar2 = GetComeSeeMeSelector__Fv();
  piVar3 = (int *)(*(code *)object->__vtable->AdvanceGraphic)
                            ((int)&object->_vb899 + (int)*(short *)&object->__vtable->GetDebugName);
  piVar4 = (int *)(*(code *)object->__vtable[1].SetIdleStatus)
                            ((int)&object->_vb899 +
                             (int)*(short *)&object->__vtable[1].GetIdleStatus);
  iVar5 = (**(code **)(*piVar4 + 0x44))((int)piVar4 + (int)*(short *)(*piVar4 + 0x40));
  lVar7 = 0;
  if (0 < iVar5) {
    iVar9 = *piVar4;
    while( true ) {
      uVar1 = (**(code **)(iVar9 + 0x4c))((int)piVar4 + (int)*(short *)(iVar9 + 0x48),iVar10);
      lVar7 = (**(code **)(*piVar3 + 0x8c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x88),uVar1);
      if ((((lVar7 != 0) &&
           (iVar9 = *(int *)((int)lVar7 + 4),
           pOVar6 = (ObjSelector *)
                    (**(code **)(iVar9 + 0x2ec))((int)lVar7 + (int)*(short *)(iVar9 + 0x2e8)),
           pOVar6 == pOVar2)) &&
          (lVar8 = (**(code **)(*piVar4 + 0x14))
                             ((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),uVar1), 0 < lVar8)) &&
         (lVar8 = (**(code **)(*piVar4 + 0x2c))
                            ((int)piVar4 + (int)*(short *)(*piVar4 + 0x28),uVar1,0), 0 < lVar8))
      goto LAB_00269480;
      iVar10 = iVar10 + 1;
      if (iVar5 <= iVar10) break;
      iVar9 = *piVar4;
    }
    lVar7 = 0;
  }
LAB_00269480:
  return (cXObject__21_1030 *)lVar7;
}

void RemoveComeSeeMeObjects() {
	ObjectModule *om;
	ObjSelector *sel;
	cXObject *obj;
	
  short sVar1;
  int iVar2;
  ObjectModule *pOVar3;
  ObjSelector *pOVar4;
  ObjSelector *pOVar5;
  code *pcVar6;
  undefined8 uVar7;
  ObjectModule__vtable *pOVar9;
  int iVar10;
  long lVar8;
  
  pOVar3 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pOVar4 = GetComeSeeMeSelector__Fv();
  pOVar9 = pOVar3->__vtable;
  do {
    pcVar6 = (code *)pOVar9->LevelInfoRequested;
    iVar10 = (int)&pOVar3->__vtable + (int)*(short *)&pOVar9->CleanupPeople;
    while( true ) {
      lVar8 = (*pcVar6)(iVar10);
      if (lVar8 == 0) {
        return;
      }
      iVar10 = (int)lVar8;
      pOVar5 = (ObjSelector *)
               (**(code **)(*(int *)(iVar10 + 4) + 0x2ec))
                         (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x2e8));
      iVar2 = *(int *)(iVar10 + 4);
      if (pOVar5 == pOVar4) break;
      pcVar6 = *(code **)(iVar2 + 0x3fc);
      iVar10 = iVar10 + *(short *)(iVar2 + 0x3f8);
    }
    pOVar9 = pOVar3->__vtable;
    sVar1 = *(short *)&pOVar9->GetNumObjects;
    uVar7 = (**(code **)(iVar2 + 700))(iVar10 + *(short *)(iVar2 + 0x2b8));
    (*(code *)pOVar9->CheckIntegrity)((int)&pOVar3->__vtable + (int)sVar1,uVar7);
    pOVar9 = pOVar3->__vtable;
  } while( true );
}

void UpdateComeSeeMeObjects() {
	ObjectModule *om;
	ObjSelector *sel;
	cXObject *srch;
	cXMTObject *mtobj;
	cXObject *comeSeeMe;
	FTilePt pt;
	FTilePt curPt;
	cXObject *ptr;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  ObjectModule *pOVar3;
  bool bVar4;
  ObjSelector *pOVar5;
  void *pvVar6;
  void *pvVar7;
  cXObject__21_1030 *pcVar8;
  int *piVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  cXObject__21_1030__vtable *pcVar14;
  int iVar15;
  cXObject__21_1030 *object;
  FTilePt pt;
  FTilePt curPt;
  long lVar13;
  
  pOVar3 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pOVar5 = GetComeSeeMeSelector__Fv();
  if (pOVar5 != (ObjSelector *)0x0) {
    pcVar10 = (code *)pOVar3->__vtable->LevelInfoRequested;
    iVar15 = (int)&pOVar3->__vtable + (int)*(short *)&pOVar3->__vtable->CleanupPeople;
    while (lVar13 = (*pcVar10)(iVar15), lVar13 != 0) {
      object = (cXObject__21_1030 *)lVar13;
      lVar11 = (*(code *)object->__vtable[1].Pickup)
                         ((int)&object->_vb899 + (int)*(short *)&object->__vtable[1].Turn);
      pcVar14 = object->__vtable;
      if (lVar11 == 4) {
        lVar11 = (*(code *)pcVar14->GetID)
                           ((int)&object->_vb899 + (int)*(short *)&pcVar14->GetTypeName);
        if (lVar11 == 0) {
LAB_002697e4:
          pcVar14 = object->__vtable;
        }
        else {
          lVar11 = (*(code *)object->__vtable->ReconType)
                             ((int)&object->_vb899 + (int)*(short *)&object->__vtable->ReconStream,
                              0x22);
          if (lVar11 == 0) {
                    /* inlined from SCID.h */
            pvVar6 = (void *)0x0;
            if (lVar13 != 0) {
              pvVar6 = _dyncastimpl__7TreeSim4SCID(object->_vb899,cXMTObjectID);
            }
                    /* end of inlined section */
            if ((pvVar6 == (void *)0x0) ||
               (pvVar7 = (void *)(**(code **)(*(int *)((int)pvVar6 + 4) + 0x14))
                                           ((int)pvVar6 +
                                            (int)*(short *)(*(int *)((int)pvVar6 + 4) + 0x10)),
               pvVar7 == pvVar6)) {
              pcVar8 = GetComeSeeMe__FP8cXObject(object);
              if (pcVar8 == (cXObject__21_1030 *)0x0) {
                lVar13 = (*(code *)object->__vtable[1].IsContained)
                                   ((int)&object->_vb899 +
                                    (int)*(short *)&object->__vtable[1].GetContainer);
                if (lVar13 == 0) {
                  uVar12 = (*(code *)pOVar3->__vtable->GetObject)
                                     ((int)&pOVar3->__vtable +
                                      (int)*(short *)&pOVar3->__vtable->GetFirst,pOVar5);
                  pcVar8 = (cXObject__21_1030 *)
                           (*(code *)pOVar3->__vtable->AdvanceSelectedPerson)
                                     ((int)&pOVar3->__vtable +
                                      (int)*(short *)&pOVar3->__vtable->SetSelectedPerson,uVar12);
                  pcVar14 = object->__vtable;
                  if (pcVar8 == (cXObject__21_1030 *)0x0) goto LAB_002697e8;
                  piVar9 = (int *)(*(code *)pcVar14[1].SetIdleStatus)
                                            ((int)&object->_vb899 +
                                             (int)*(short *)&pcVar14[1].GetIdleStatus);
                  (**(code **)(*piVar9 + 0x1c))
                            ((int)piVar9 + (int)*(short *)(*piVar9 + 0x18),uVar12,1);
                  (**(code **)(*piVar9 + 0x34))
                            ((int)piVar9 + (int)*(short *)(*piVar9 + 0x30),uVar12,0,1);
                }
                if (pcVar8 == (cXObject__21_1030 *)0x0) goto LAB_002697e4;
              }
              GetAverageLocation__FP8cXObject((cXObject__21_1030 *)&pt);
              (*(code *)pcVar8->__vtable[1].UserCanPickup)
                        ((int)&pcVar8->_vb899 + (int)*(short *)&pcVar8->__vtable[1].UserPlace,&curPt
                        );
              lVar13 = (*(code *)pcVar8->__vtable->GetID)
                                 ((int)&pcVar8->_vb899 +
                                  (int)*(short *)&pcVar8->__vtable->GetTypeName);
              if (lVar13 == 0) {
                pcVar14 = object->__vtable;
              }
              else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/tiles.h */
                bVar4 = __eq__C7FTilePtRC7FTilePt(&curPt,&pt);
                    /* end of inlined section */
                pcVar14 = object->__vtable;
                if (bVar4) {
                  lVar13 = (*(code *)pcVar14[1].GetPlacementInfo)
                                     ((int)&object->_vb899 +
                                      (int)*(short *)&pcVar14[1].FindGoodLocation);
                  lVar11 = (*(code *)pcVar8->__vtable[1].GetPlacementInfo)
                                     ((int)&pcVar8->_vb899 +
                                      (int)*(short *)&pcVar8->__vtable[1].FindGoodLocation);
                  pcVar14 = object->__vtable;
                  if (lVar13 == lVar11) goto LAB_002697e8;
                }
              }
              pcVar2 = pcVar8->__vtable;
              sVar1 = *(short *)&pcVar2->GetModule;
              uVar12 = (*(code *)pcVar14[1].GetPlacementInfo)
                                 ((int)&object->_vb899 + (int)*(short *)&pcVar14[1].FindGoodLocation
                                 );
              (*(code *)pcVar2->GetAdultAnimTable)((int)&pcVar8->_vb899 + (int)sVar1,&pt,uVar12,0,0)
              ;
              goto LAB_002697e4;
            }
            pcVar14 = object->__vtable;
          }
          else {
            pcVar14 = object->__vtable;
          }
        }
      }
LAB_002697e8:
      pcVar10 = (code *)pcVar14[1].IsDeletedByEvict;
      iVar15 = (int)&object->_vb899 + (int)*(short *)&pcVar14[1].GetObjectLightSource;
    }
  }
  return;
}

bool FTilePt::operator==(FTilePt &inPt) {
	FInt *this;
	FInt &in;
	
  bool bVar1;
  
  bVar1 = false;
  if ((this->x).whole == (inPt->x).whole) {
    bVar1 = (this->y).whole == (inPt->y).whole;
  }
  return bVar1;
}

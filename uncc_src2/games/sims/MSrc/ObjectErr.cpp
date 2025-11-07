// STATUS: NOT STARTED

#include "ObjectErr.h"

int cXObjectImpl::GetDebugName(char *buffer, int iBufferSize) {
	int result;
	char *pName;
	StackString<8> numBuf;
	int i;
	ObjSelector *this;
	unsigned int n;
	int len;
	
  ResFile *pRVar1;
  ObjDefinition **ppOVar2;
  uint nBytes;
  char *pcVar3;
  size_t sVar4;
  uint nBytes_00;
  int iVar5;
  ObjDefinition *pOVar6;
  int iVar7;
  StackString_8_ numBuf;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  pRVar1 = this->fObjSel->fResData;
  pcVar3 = this->fObjSel->fModuleName;
  ppOVar2 = (pRVar1->objDefinition).pData;
  pOVar6 = (ObjDefinition *)0x0;
  if (ppOVar2 != (ObjDefinition **)0x0) {
    pOVar6 = ppOVar2[-1];
  }
  iVar5 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&numBuf.field0_0x0,(char *)((uint)&numBuf | 8),8);
  append__12StringBufferPCci(&numBuf.field0_0x0,"?",-1);
                    /* end of inlined section */
  do {
    if ((int)pOVar6 <= iVar5) {
LAB_00240678:
      sVar4 = strlen(pcVar3);
      if ((long)(iBufferSize + -1) <= (long)sVar4) {
        sVar4 = (long)(iBufferSize + -1);
      }
      if (0 < (long)sVar4) {
        nBytes_00 = (uint)sVar4;
        memcpy(buffer,pcVar3,nBytes_00);
        buffer[nBytes_00] = '\0';
        if ((int)(nBytes_00 + 6) < iBufferSize) {
          buffer[nBytes_00] = '[';
          nBytes = length__C12StringBuffer(&numBuf.field0_0x0);
          pcVar3 = c_str__C12StringBuffer(&numBuf.field0_0x0);
          iVar5 = nBytes_00 + 1 + nBytes;
          memcpy(buffer + nBytes_00 + 1,pcVar3,nBytes);
          iVar7 = iVar5 + 1;
          sVar4 = (size_t)iVar7;
          buffer[iVar5] = ']';
          buffer[iVar7] = '\0';
        }
      }
      return (int)sVar4;
    }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    if ((pRVar1->objDefinition).pData[iVar5] == this->fDef) {
      erase__12StringBuffer(&numBuf.field0_0x0);
      appendNum__12StringBufferi(&numBuf.field0_0x0,iVar5);
      goto LAB_00240678;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

void cXObjectImpl::Error(SInt16 errNum) {
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  ObjectModule *pOVar3;
  ObjectModule__vtable *pOVar4;
  undefined8 uVar5;
  
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->ResetDamage)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SetLastDamage,0x100,1);
  pOVar3 = this->fModule;
  pcVar2 = this->_vb966->__vtable;
  pOVar4 = pOVar3->__vtable;
  sVar1 = *(short *)&pOVar4[1].IsBuyAndBuildDisabled;
  uVar5 = (*(code *)pcVar2[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].IsPartOfMe);
  (*(code *)pOVar4[1].SetIdleStatus)((int)&pOVar3->__vtable + (int)sVar1,uVar5,4,1);
  return;
}

void cXObjectImpl::HandleError() {
	StackElem *pElem;
	cXObject *obj;
	StringBuf255 errorStr;
	char nameBuffer[256];
	StringBuf255 message;
	
  cXObject__21_1030__vtable *pcVar1;
  TreeSim *pTVar2;
  TreeSim__vtable *pTVar3;
  cXObject__21_1030 *pcVar4;
  int iVar5;
  ObjectModule *pOVar6;
  long lVar7;
  char *str;
  long lVar8;
  short *psVar9;
  StackString_256_ errorStr;
  char nameBuffer [256];
  StackString_256_ message;
  
  pcVar1 = this->_vb966->__vtable;
  lVar7 = (*(code *)pcVar1->IsBeingDraggedAround)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->IsEmissive,0x100);
  if (lVar7 != 0) {
    pTVar2 = this->_vb1168->_vb899;
    pTVar3 = pTVar2->__vtable;
    lVar7 = (*(code *)pTVar3->GetStackSize)
                      ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar3->GetNthElem);
    pcVar4 = this->_vb966;
    if (lVar7 == 0) {
      (*(code *)pcVar4->__vtable->ResetDamage)
                ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable->SetLastDamage,0x100,0);
    }
    else {
      (*(code *)pcVar4->__vtable->ResetDamage)
                ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable->SetLastDamage,0x100,0);
      pTVar2 = this->_vb1168->_vb899;
      pTVar3 = pTVar2->__vtable;
      lVar7 = (**(code **)(pTVar3 + 1))
                        ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar3->GetISimInstance);
      lVar8 = 0;
      psVar9 = (short *)lVar7;
      if (lVar7 != 0) {
        pcVar1 = this->_vb966->__vtable;
        lVar8 = (*(code *)pcVar1[1].GetLightingContribution)
                          ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CanContributeLight
                           ,psVar9[2]);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      __12StringBufferPcUi(&errorStr.field0_0x0,(char *)((uint)&errorStr | 8),0x100);
                    /* end of inlined section */
      pcVar1 = this->_vb966->__vtable;
      (*(code *)pcVar1[1].GetSlotHeight)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetContainedObject,&errorStr
                );
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      __12StringBufferPcUi(&message.field0_0x0,message.fChars,0x100);
                    /* end of inlined section */
      append__12StringBufferPCci(&message.field0_0x0,"TREEASSERT:",-1);
      append__12StringBufferRC12StringBufferi(&message.field0_0x0,&errorStr.field0_0x0,-1);
      append__12StringBufferPCci(&message.field0_0x0," this=\"",-1);
      str = nameBuffer;
      pcVar1 = this->_vb966->__vtable;
      (*(code *)pcVar1[1].Backtrace)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].ReconHeader,str,0x100);
      append__12StringBufferPCci(&message.field0_0x0,str,-1);
      append__12StringBufferPCci(&message.field0_0x0,"\", obj=\"",-1);
      if ((lVar8 == 0) ||
         (iVar5 = *(int *)((int)lVar8 + 4),
         (**(code **)(iVar5 + 0x444))((int)lVar8 + (int)*(short *)(iVar5 + 0x440),str,0x100),
         lVar8 == 0)) {
        str = "?";
      }
      append__12StringBufferPCci(&message.field0_0x0,str,-1);
      append__12StringBufferPCci(&message.field0_0x0,"\" TreeID=",-1);
      if (lVar7 == 0) {
        append__12StringBufferPCci(&message.field0_0x0,"?,?",-1);
        pOVar6 = this->fModule;
      }
      else {
        appendNum__12StringBufferi(&message.field0_0x0,(int)*psVar9);
        append__12StringBufferPCci(&message.field0_0x0,",NodeID=",-1);
        appendNum__12StringBufferi(&message.field0_0x0,(int)psVar9[1]);
        pOVar6 = this->fModule;
      }
      (*(code *)pOVar6->__vtable[1].Init)
                ((int)&pOVar6->__vtable + (int)*(short *)&pOVar6->__vtable[1].ObjectModule,
                 this->_vb966);
      (*(code *)this->__vtable->PostLoad)
                ((int)this->fTemp + *(short *)&this->__vtable->Reset + -0x16,0);
    }
  }
  return;
}

void cXObjectImpl::GetErrorString(StringBuffer &errStr) {
  erase__12StringBuffer(errStr);
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

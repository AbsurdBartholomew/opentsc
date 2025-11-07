// STATUS: NOT STARTED

#include "FileUtils.h"

void SplitPath(StringBuffer &fullPath, StringBuffer &directory, StringBuffer &fileName, StringBuffer &extension) {
	char dirsep;
	char altDirSep;
	int count;
	int lastSepIndex;
	int lastDot;
	
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = length__C12StringBuffer(fullPath);
  do {
    iVar2 = iVar2 + -1;
    iVar6 = -1;
    if ((iVar2 < 0) ||
       (cVar1 = charAt__C12StringBufferi(fullPath,iVar2), iVar6 = iVar2, cVar1 == '\\')) break;
    cVar1 = charAt__C12StringBufferi(fullPath,iVar2);
  } while (cVar1 != '/');
  iVar3 = length__C12StringBuffer(fullPath);
  iVar2 = iVar3;
  do {
    iVar2 = iVar2 + -1;
    iVar5 = iVar3;
    if (iVar2 <= iVar6) break;
    cVar1 = charAt__C12StringBufferi(fullPath,iVar2);
    iVar5 = iVar2;
  } while (cVar1 != '.');
  erase__12StringBuffer(directory);
  append__12StringBufferRC12StringBufferi(directory,fullPath,iVar6 + 1);
  erase__12StringBuffer(fileName);
  pcVar4 = c_str__C12StringBuffer(fullPath);
  append__12StringBufferPCci(fileName,pcVar4 + iVar6 + 1,(iVar5 - iVar6) + -1);
  erase__12StringBuffer(extension);
  pcVar4 = c_str__C12StringBuffer(fullPath);
  append__12StringBufferPCci(extension,pcVar4 + iVar5,-1);
  return;
}

void ExtractDirectory(StringBuffer &fullPath, StringBuffer &directory) {
	FileName name;
	FileName ext;
	
  StackString_260_ name;
  StackString_260_ ext;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&name.field0_0x0,(char *)((uint)&name | 8),0x104);
  __12StringBufferPcUi(&ext.field0_0x0,ext.fChars,0x104);
                    /* end of inlined section */
  SplitPath__FRC12StringBufferR12StringBufferN21
            (fullPath,directory,&name.field0_0x0,&ext.field0_0x0);
  return;
}

void ExtractFileName(StringBuffer &path, StringBuffer &name) {
	FileName ext;
	FileName directory;
	
  StackString_260_ ext;
  StackString_260_ directory;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&ext.field0_0x0,(char *)((uint)&ext | 8),0x104);
  __12StringBufferPcUi(&directory.field0_0x0,directory.fChars,0x104);
                    /* end of inlined section */
  SplitPath__FRC12StringBufferR12StringBufferN21(path,&directory.field0_0x0,name,&ext.field0_0x0);
  append__12StringBufferRC12StringBufferi(name,&ext.field0_0x0,-1);
  return;
}

void ExtractExtension(StringBuffer &path, StringBuffer &nameOnly, StringBuffer &ext) {
	FileName directory;
	FileName name;
	
  StackString_260_ directory;
  StackString_260_ name;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&directory.field0_0x0,(char *)((uint)&directory | 8),0x104);
  __12StringBufferPcUi(&name.field0_0x0,name.fChars,0x104);
                    /* end of inlined section */
  SplitPath__FRC12StringBufferR12StringBufferN21(path,&directory.field0_0x0,&name.field0_0x0,ext);
  copy__12StringBufferRC12StringBuffer(nameOnly,&directory.field0_0x0);
  append__12StringBufferRC12StringBufferi(nameOnly,&name.field0_0x0,-1);
  return;
}

ErrType WriteHandleToFile(HandleNode *hand, char *filename) {
	FILE *wf;
	MPtr data;
	UInt32 sizeWritten;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *h;
	
  __sFILE__432_30 *stream;
  int iVar1;
  uint uVar2;
  uint nmemb;
  
  stream = fopen(filename,"wb");
  if (stream == (__sFILE__432_30 *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
    nmemb = 0;
    if (hand != (HandleNode *)0x0) {
      nmemb = hand->allocSize;
    }
                    /* end of inlined section */
    uVar2 = fwrite(hand->ptr,1,nmemb,stream);
    fclose(stream);
    iVar1 = -1;
    if (uVar2 == nmemb) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

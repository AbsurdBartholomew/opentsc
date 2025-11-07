// STATUS: NOT STARTED

#include "e_memorystream.h"

__vtbl_ptr_type EMemoryWriteStream virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryWriteStream::~EMemoryWriteStream,
		/* .__delta2 = */ 14496
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryWriteStream::GetPos,
		/* .__delta2 = */ 15800
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryWriteStream::Read,
		/* .__delta2 = */ 15808
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryWriteStream::Write,
		/* .__delta2 = */ 14824
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EMemoryReadStream virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryReadStream::~EMemoryReadStream,
		/* .__delta2 = */ 15704
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryReadStream::GetPos,
		/* .__delta2 = */ 15784
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryReadStream::Read,
		/* .__delta2 = */ 14320
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryReadStream::Write,
		/* .__delta2 = */ 15792
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EStream virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStream::~EStream,
		/* .__delta2 = */ -11288
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

int EMemoryReadStream::Read(void *pData, int size) {
  if (pData != (void *)0x0) {
    memcpy(pData,this->m_pData + this->m_pos,size);
  }
  this->m_pos = this->m_pos + size;
  return size;
}

EMemoryWriteStream* EMemoryWriteStream::EMemoryWriteStream() {
	EStream *this;
	TArray<unsigned char *> *this;
	EArray *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  *(undefined4 *)&this->field0_0x0 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_18EMemoryWriteStream;
  __6EArray(&(this->m_blocks).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->m_blocks).field0_0x0.m_elementSize = 4;
                    /* end of inlined section */
  this->m_pos = 0;
  return this;
}

void EMemoryWriteStream::~EMemoryWriteStream(int __in_chrg) {
	TArray<unsigned char *> *this;
	TArray<unsigned char *> *this;
	EArray *this;
	int i;
	int index;
	TArray<unsigned char *> *this;
	TArray<unsigned char *> *this;
	TArray<unsigned char *> *this;
	TArray<unsigned char *> *this;
	EArray *this;
	int i;
	int index;
	TArray<unsigned char *> *this;
	int i;
	int index;
	TArray<unsigned char *> *this;
	int i;
	int index;
	EStream *this;
	int __in_chrg;
	void *pAddress;
	
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TArray_unsigned_char___ *this_00;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  this_00 = &this->m_blocks;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_18EMemoryWriteStream;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar2 = (this->m_blocks).field0_0x0.m_size;
  iVar4 = 0;
  if (0 < iVar2) {
    pvVar1 = (this_00->field0_0x0).m_p;
    while( true ) {
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      _memmanFree__FPv(*(void **)((int)pvVar1 + iVar3));
      if (iVar2 <= iVar4) break;
      pvVar1 = (this_00->field0_0x0).m_p;
    }
  }
  iVar2 = (this->m_blocks).field0_0x0.m_size;
  iVar4 = iVar2;
  if (0 < iVar2) {
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  SetSize__6EArrayii(&this_00->field0_0x0,0,0);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    iVar2 = (this->m_blocks).field0_0x0.m_size;
  }
  else {
    iVar2 = (this->m_blocks).field0_0x0.m_size;
  }
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  Deallocate__6EArray(&(this->m_blocks).field0_0x0);
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_7EStream;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

int EMemoryWriteStream::Write(void *pData, int size) {
	TArray<unsigned char *> *this;
	EArray *this;
	int written;
	u8 *pSeg;
	int index;
	int i;
	int offset;
	TArray<unsigned char *> *this;
	TArray<unsigned char *> *this;
	EArray *this;
	TArray<unsigned char *> *this;
	TArray<unsigned char *> *this;
	int startPos;
	int index;
	
  int pos;
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (size != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    uVar4 = this->m_pos;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    iVar3 = (this->m_blocks).field0_0x0.m_size;
                    /* end of inlined section */
    if (iVar3 << 0xc < (int)(uVar4 + size)) {
      iVar5 = 0;
      if (uVar4 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
        pvVar2 = *(void **)((int)(this->m_blocks).field0_0x0.m_p + (iVar3 + -1) * 4);
      }
      iVar3 = 0;
      if (0 < size) {
        do {
          uVar4 = this->m_pos & 0xfff;
          if (uVar4 == 0) {
            pvVar2 = _memmanAlloc__FUiUi(0x1000,4);
            if (pvVar2 == (void *)0x0) {
              return iVar5;
            }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
            pos = (this->m_blocks).field0_0x0.m_size;
            Insert__6EArrayii(&(this->m_blocks).field0_0x0,pos,1);
            *(void **)((int)(this->m_blocks).field0_0x0.m_p + pos * 4) = pvVar2;
                    /* end of inlined section */
          }
          puVar1 = (undefined *)((int)pData + iVar3);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
          *(undefined *)((int)pvVar2 + uVar4) = *puVar1;
          this->m_pos = this->m_pos + 1;
        } while (iVar3 < size);
      }
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      memcpy((void *)(*(int *)((int)(this->m_blocks).field0_0x0.m_p + (iVar3 + -1) * 4) +
                     (uVar4 & 0xfff)),pData,size);
      this->m_pos = this->m_pos + size;
      iVar5 = size;
    }
  }
  return iVar5;
}

u8 EMemoryWriteStream::operator[](int pos) {
	int nBlock;
	int offset;
	int index;
	
  int iVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = pos + 0xfff;
                    /* end of inlined section */
  if (-1 < pos) {
    iVar1 = pos;
  }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  return *(uchar *)(*(int *)((int)(this->m_blocks).field0_0x0.m_p + (iVar1 >> 0xc) * 4) +
                   (pos & 0xfffU));
}

u8& EMemoryWriteStream::operator[](int pos) {
	int nBlock;
	int offset;
	int index;
	
  int iVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = pos + 0xfff;
                    /* end of inlined section */
  if (-1 < pos) {
    iVar1 = pos;
  }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  return (uchar *)(*(int *)((int)(this->m_blocks).field0_0x0.m_p + (iVar1 >> 0xc) * 4) +
                  (pos & 0xfffU));
}

void* EMemoryWriteStream::AllocAndCopyToBuffer() {
	u8 *pBuffer;
	u32 i;
	
  uchar uVar1;
  void *pvVar2;
  uint pos;
  
  pvVar2 = _memmanAlloc__FUiUi(this->m_pos,4);
  if ((pvVar2 != (void *)0x0) && (pos = 0, this->m_pos != 0)) {
    do {
      uVar1 = __vc__C18EMemoryWriteStreami(this,pos);
      *(uchar *)((int)pvVar2 + pos) = uVar1;
      pos = pos + 1;
    } while (pos < this->m_pos);
  }
  return pvVar2;
}

void EMemoryWriteStream::FreeBuffer(void *p) {
  _memmanFree__FPv(p);
  return;
}

void EMemoryWriteStream::WriteToStream(EStream &stream, int pos, int count) {
	int nBlock;
	int offset;
	int bytes;
	int index;
	
  uint uVar1;
  int iVar2;
  
  if (count != 0) {
    do {
      uVar1 = pos + 0xfff;
      if (-1 < pos) {
        uVar1 = pos;
      }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = 0x1000 - (pos & 0xfffU);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      if (count < iVar2) {
        iVar2 = count;
      }
      (*(code *)stream->__vtable[1].Write)
                (&stream->m_streamingStructure + *(short *)&stream->__vtable[1].Read,
                 *(int *)((int)(this->m_blocks).field0_0x0.m_p + ((int)uVar1 >> 0xc) * 4) +
                 (pos & 0xfffU),iVar2);
      count = count - iVar2;
      pos = pos + iVar2;
    } while (count != 0);
  }
  return;
}

void EStream::~EStream(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EStream__vtable *)_vt_7EStream;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EMemoryReadStream::~EMemoryReadStream(int __in_chrg) {
	EStream *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_7EStream;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
  }
  return;
}

EMemoryReadStream* EMemoryReadStream::EMemoryReadStream(void *pData) {
	EStream *this;
	
  this->m_pData = (uchar *)pData;
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  *(undefined4 *)&this->field0_0x0 = 0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_17EMemoryReadStream;
  this->m_pos = 0;
  return this;
}

int EMemoryReadStream::GetPos() {
  return this->m_pos;
}

int EMemoryReadStream::Write(void *pData, int Size) {
  return 0;
}

int EMemoryWriteStream::GetPos() {
  return this->m_pos;
}

int EMemoryWriteStream::Read(void *pData, int size) {
  return 0;
}

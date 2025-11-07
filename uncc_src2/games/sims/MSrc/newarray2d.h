// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_NEWARRAY2D_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_NEWARRAY2D_H

struct _c2DArray {
private:
	_c2DArray *fNextArray;
	static _c2DArray *sArrayList;
protected:
	Int fySize;
	Int fxSize;
	void **fData;
	BString fName;
	Int fEntrySize;
	static void* (*m_pfnAlloc)(/* parameters unknown */);
	static void (*m_pfnFree)(/* parameters unknown */);
	
public:
	_c2DArray& operator=();
	_c2DArray(Int entrySize, Int xSize, Int ySize, BString &name);
private:
	static void AddArray(/* parameters unknown */);
	static void RemoveArray(/* parameters unknown */);
	static _c2DArray* GetArray(/* parameters unknown */);
	bool SetSize(Int newxSize, Int newySize);
	static void Swizzle(/* parameters unknown */);
	void DoStream(ReconBuffer *r, bool compressionEnabledForWriting);
public:
	_c2DArray();
	Int GetXSize();
	Int GetYSize();
	void ClearBytes(SInt8 zeropad);
	ErrType WriteToDisk(iResFile *pFile, SInt32 rType, SInt16 id, bool enableCompression);
	ErrType ReadFromDisk(iResFile *pFile, SInt32 type, SInt16 id, SwizzleProc SwizzleEntry);
	void CopyFrom(_c2DArray *src);
	void CopyFrom();
	void CopyTo(BString &toName);
	void CopyTo();
	void SetName(BString &name);
	static void SetAllocFn(/* parameters unknown */);
	static void SetFreeFn(/* parameters unknown */);
	static void* (*)(/* parameters unknown */) GetAllocFn(/* parameters unknown */);
	static void (*)(/* parameters unknown */) GetFreeFn(/* parameters unknown */);
	_c2DArray(_c2DArray*, int, void);
};

extern _c2DArray *_c2DArray::sArrayList;
extern void* (*_c2DArray::m_pfnAlloc)(/* parameters unknown */);
extern void (*_c2DArray::m_pfnFree)(/* parameters unknown */);

void _c2DArray::~_c2DArray(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_NEWARRAY2D_H

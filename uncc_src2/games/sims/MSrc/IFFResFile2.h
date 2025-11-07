// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_IFFRESFILE2_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_IFFRESFILE2_H

typedef unsigned int UInt32;
typedef UInt32 ResType;
typedef void (*SwizzleProc)(/* parameters unknown */);
typedef StackString<64> ResourceName;

struct IFFResFile2 : iResFile, MemFile {
private:
	IFFResMap *fResMap;
	SInt32 fLastNewBlockOffset;
	SInt32 fMapOffset;
	bool fChanged;
	bool fOptimizeTarget;
	FileName *fSuspendedName;
	
public:
	IFFResFile2& operator=();
	IFFResFile2();
private:
	ErrType LoadNode(IFFResNode *rc, SwizzleProc Swizzle, SInt32 type);
	ErrType LowLevelRemove(IFFResNode *spot);
	ErrType GetBlockHeader(IFFHeader *header, SInt32 fileoffset);
	ErrType SetBlockHeader(IFFHeader *header, SInt32 fileoffset);
	ErrType NewBlockHeader(IFFHeader *header, UInt32 datasize, SInt32 *fileoffset);
	ErrType InvalBlockHeader(SInt32 fileoffset);
	ErrType MoveBlock(UInt32 offset, UInt32 distance, UInt32 size, UInt8 *temBuffer);
	ErrType Defrag();
	ErrType WriteHeader(MemFile *file, SInt32 mapOffset);
	void SetOptimizeTarget();
public:
	IFFResFile2();
	/* vtable[1] */ virtual IFFResFile2(IFFResFile2*, int, void);
	/* vtable[3] */ virtual ErrType Create(StringBuffer &name);
	/* vtable[4] */ virtual ErrType Delete(StringBuffer &name);
	ErrType ClearMap(StringBuffer &name);
	/* vtable[5] */ virtual ErrType Open(StringBuffer &path);
	/* vtable[8] */ virtual ErrType Close();
	/* vtable[6] */ virtual ErrType CloseForReopen();
	/* vtable[7] */ virtual ErrType Reopen();
	/* vtable[9] */ virtual void Update();
	/* vtable[10] */ virtual bool Writable();
	/* vtable[11] */ virtual void GetFileName(StringBuffer &name);
	/* vtable[12] */ virtual bool ValidFile();
	/* vtable[13] */ virtual SInt16 CountTypes();
	/* vtable[14] */ virtual SInt32 GetIndType(SInt16 index);
	/* vtable[15] */ virtual SInt16 Count(SInt32 type);
	/* vtable[16] */ virtual MHandle GetByID(SInt32 type, SInt16 id, SwizzleProc Swizzler);
	/* vtable[17] */ virtual MHandle GetByName(SInt32 type, StringBuffer &name, SwizzleProc Swizzler);
	/* vtable[18] */ virtual MHandle GetByIndex(SInt32 type, SInt16 index, SwizzleProc Swizzler);
	/* vtable[19] */ virtual MHandle GetByIDAndLanguage(SInt32 type, SInt16 id, char langCode, SwizzleProc Swizzler);
	/* vtable[20] */ virtual void GetName(HandleNode *res, StringBuffer &name);
	/* vtable[21] */ virtual SInt32 GetResType(HandleNode *res);
	/* vtable[22] */ virtual void GetID(HandleNode *res, SInt16 *id);
	/* vtable[23] */ virtual void GetIndex(HandleNode *res, SInt16 *index);
	/* vtable[24] */ virtual char GetLanguage(HandleNode *res);
	/* vtable[25] */ virtual void FindUniqueName(SInt32 resType, StringBuffer &name);
	/* vtable[26] */ virtual SInt16 FindUniqueID(SInt32 rType);
	/* vtable[27] */ virtual void Detach(HandleNode *res);
	/* vtable[28] */ virtual void Load(HandleNode *res);
	/* vtable[29] */ virtual bool IsLittleEndian(HandleNode *res);
	/* vtable[30] */ virtual void SetID(HandleNode *res, SInt16 id);
	/* vtable[31] */ virtual void Add(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, bool littleEndian);
	/* vtable[32] */ virtual void AddWithLanguage(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, char langCode, bool littleEndian);
	/* vtable[33] */ virtual void Write(HandleNode *res);
	/* vtable[34] */ virtual void Remove(HandleNode *res);
	/* vtable[35] */ virtual void SetInfo(HandleNode *res, SInt16 id, StringBuffer &name, char langCode);
};

extern __vtbl_ptr_type SimpleReconObject<IFFResMap> virtual table[5];
extern __vtbl_ptr_type IFFResFile2::MemFile virtual table[3];
extern __vtbl_ptr_type IFFResFile2 virtual table[38];

void IFFResFile2::~IFFResFile2(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
IFFResNode* IFFResNode * uninitialized_copy<IFFResNode *, IFFResNode *>(IFFResNode *first, IFFResNode *last, IFFResNode *result);
IFFResNode* IFFResNode * copy_backward<IFFResNode *, IFFResNode *>(IFFResNode *first, IFFResNode *last, IFFResNode *result);
void void fill<IFFResNode *, IFFResNode>(IFFResNode *first, IFFResNode *last, IFFResNode &value);
IFFResNode* IFFResNode * uninitialized_fill_n<IFFResNode *, unsigned int, IFFResNode>(IFFResNode *first, unsigned int n, IFFResNode &x);
void vector<IFFResNode, __malloc_alloc_template<0> >::insert(IFFResNode *position, unsigned int n, IFFResNode &x);
void void DoContainerStream<vector<IFFResNode, __malloc_alloc_template<0> >, IFFResNode>(vector<IFFResNode,__malloc_alloc_template<0> > &cont, IFFResNode *dummy, ReconBuffer *r, SInt32 version);
IFFResNode* IFFResNode * uninitialized_copy<IFFResNode *, IFFResNode *>(IFFResNode *first, IFFResNode *last, IFFResNode *result);
IFFResList* IFFResList * copy_backward<IFFResList *, IFFResList *>(IFFResList *first, IFFResList *last, IFFResList *result);
IFFResList* IFFResList * uninitialized_copy<IFFResList *, IFFResList *>(IFFResList *first, IFFResList *last, IFFResList *result);
void vector<IFFResList, __malloc_alloc_template<0> >::insert_aux(IFFResList *position, IFFResList &x);
void vector<IFFResNode, __malloc_alloc_template<0> >::insert_aux(IFFResNode *position, IFFResNode &x);
vector<IFFResNode,__malloc_alloc_template<0> >& vector<IFFResNode, __malloc_alloc_template<0> >::operator=(vector<IFFResNode,__malloc_alloc_template<0> > &x);
void void fill<IFFResList *, IFFResList>(IFFResList *first, IFFResList *last, IFFResList &value);
IFFResList* IFFResList * uninitialized_fill_n<IFFResList *, unsigned int, IFFResList>(IFFResList *first, unsigned int n, IFFResList &x);
void vector<IFFResList, __malloc_alloc_template<0> >::insert(IFFResList *position, unsigned int n, IFFResList &x);
void void DoContainerStream<vector<IFFResList, __malloc_alloc_template<0> >, IFFResList>(vector<IFFResList,__malloc_alloc_template<0> > &cont, IFFResList *dummy, ReconBuffer *r, SInt32 version);
void void ReconLoadObject<IFFResMap>(IFFResMap *obj, HandleNode *mem, SInt32 type, SInt32 *version);
HandleNode* Memory::HandleNode * ReconSaveObject<IFFResMap>(IFFResMap *obj, SInt32 type, SInt32 version);
void IFFResMap::~IFFResMap(int __in_chrg);
void SimpleReconObject<IFFResMap>::~SimpleReconObject(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_IFFRESFILE2_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_QUICKRESFILE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_QUICKRESFILE_H

struct QuickResFile : iResFile {
	QuickResFile& operator=();
	QuickResFile();
	QuickResFile();
	/* vtable[1] */ virtual QuickResFile(QuickResFile*, int, void);
	/* vtable[2] */ virtual void* _dyncastimpl(SCID id);
	/* vtable[3] */ virtual ErrType Create(StringBuffer &path);
	/* vtable[4] */ virtual ErrType Delete(StringBuffer &path);
	/* vtable[5] */ virtual ErrType Open(StringBuffer &path);
	/* vtable[6] */ virtual ErrType CloseForReopen();
	/* vtable[7] */ virtual ErrType Reopen();
	/* vtable[8] */ virtual ErrType Close();
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
	/* vtable[35] */ virtual void SetInfo(HandleNode *res, SInt16 id, StringBuffer &name, char language);
	/* vtable[36] */ virtual void GetString(StringBuffer &str, SInt16 resID, SInt16 index);
};

extern __vtbl_ptr_type QuickResFile virtual table[38];

void QuickResFile::~QuickResFile(int __in_chrg);
AStringSet* AStringSet * FindRes<AStringSet>(AStringSet *begin, AStringSet *end, int resID);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_QUICKRESFILE_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_RECON_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_RECON_H

typedef signed char SignedByte;
typedef SignedByte SInt8;

// warning: multiple differing types with the same name (enum constant not equal)
enum Mode {
	kReading = 0,
	kWriting = 1,
	kCounting = 2
};

struct ReconBuffer {
private:
	void *fData;
	SInt32 fSize;
	SInt32 fPosition;
	Mode fMode;
	Boolean fSwizzle;
	bool fUsesStringTable;
	bool fCmprsOn;
	StringSet *fStrings;
	Int fLastStringIndex;
	Int fBits;
	Int fNextMask;
	SInt32 fMarkPos;
	
public:
	ReconBuffer& operator=();
	ReconBuffer();
private:
	void ReconCmprInt(SInt32 *value, Scheme *sch);
	void ReconBits(Int bitCount, SInt32 *bitVal);
	void PadBits();
public:
	ReconBuffer();
	ReconBuffer();
	ReconBuffer(ReconBuffer*, int, void);
	bool IsReading();
	bool IsWriting();
	bool IsCounting();
	Mode GetMode();
	SInt32 GetPosition();
	void Recon8(SInt8 *value, Int numelems);
	void Recon16(SInt16 *value, Int numelems);
	void Recon32(SInt32 *value, Int numelems);
	void ReconInt(Int *value, Int numelems);
	void ReconFloat(float *value, Int numelems);
	void ReconBool(bool *value);
	void ReconString(StringBuffer2 &str);
	void ReconString();
	void ReconString();
	void ReconString();
	void ReconMark();
	void ReadToNextMark();
	void UseStringTable(iResFile *file, ResType type, SInt16 id);
	void EnableCompression();
};

struct ReconObject {
	__vtbl_ptr_type *$vf4987;
	
	ReconObject& operator=();
	ReconObject();
	ReconObject();
	/* vtable[1] */ virtual ReconObject(ReconObject*, int, void);
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

struct ReconBuilder {
	ReconBuilder& operator=();
	ReconBuilder();
	ReconBuilder();
	MHandle Compact(ReconObject *recon, SInt32 version, iResFile *pFile, SInt16 id);
	void Reconstitute(ReconObject *recon, HandleNode *hmem, SInt32 *version);
	ErrType Compact();
	ErrType Reconstitute();
	static void Swizzle(/* parameters unknown */);
};

extern __vtbl_ptr_type ReconObject virtual table[5];

void SetReconDumpFile(char *fname);
void ReconBuffer::~ReconBuffer(int __in_chrg);
void ReconObject::~ReconObject(int __in_chrg);
void global constructors keyed to SetReconDumpFile();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_RECON_H

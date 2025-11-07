// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2RAUDIOSAMPLE_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2RAUDIOSAMPLE_H

struct VAGheader {
	u32 format;
	u32 ver;
	u32 ssa;
	u32 size;
	u32 fs;
	u16 volL;
	u16 volR;
	u16 pitch;
	u16 ADSR1;
	u16 ADSR2;
	u16 reserved;
	char name[16];
	char filler[16];
	
	VAGheader& operator=();
	VAGheader();
	VAGheader();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

typedef VAGheader ESampleHeader;

struct ERSampledata : EResource {
protected:
	ESampleHeader *m_pHeader;
	
public:
	ERSampledata& operator=();
	ERSampledata();
	ERSampledata();
	/* vtable[6] */ virtual ERSampledata(ERSampledata*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESampleHeader& GetSampleHeader();
protected:
	void Load(EFile *pFile);
};

extern __vtbl_ptr_type ERSampledata virtual table[13];

void ERSampledata::~ERSampledata(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2RAUDIOSAMPLE_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2FILEIO_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2FILEIO_H

struct EPs2IOPInterface {
	EPs2IOPInterface& operator=();
	EPs2IOPInterface();
	EPs2IOPInterface();
	EPs2IOPInterface(EPs2IOPInterface*, int, void);
	bool Initialize();
	u32 OpenStream(char *filename);
	u32 OpenStream();
	bool CloseStream(u32 nFD);
	EFSState GetStreamState(u32 nFD);
	bool SetStreamState(EFSState &desc);
	int ReadStream(u32 nFD, int size, void *pBuffer, long int nFilePos);
	void ClearIOPMemory(EFSClearMem &desc);
	void QueryIOPState(EFSIOQuery &desc);
	int ReadStream();
};

struct EFSOpen : EFSState {
	char filename[256];
	u32 flags;
};

struct EFSRead : EFSState {
	u32 flags;
	void *addr;
	u32 numBytes;
};

struct EFSClearMem {
	u32 size;
	void *addr;
	u32 numBytes;
};

struct EFSIOQuery {
	u32 size;
	u32 mask;
	u32 flags;
	u32 state : 8;
	u32 music : 8;
};

extern EPs2IOPInterface _ps2IOPInterface;

void EPs2IOPInterface::~EPs2IOPInterface(int __in_chrg);
void global constructors keyed to _ps2IOPInterface();
void global destructors keyed to _ps2IOPInterface();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2FILEIO_H

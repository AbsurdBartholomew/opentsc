// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2MOVIE_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2MOVIE_H

enum sceMpegCbType {
	sceMpegCbError = 0,
	sceMpegCbNodata = 1,
	sceMpegCbStopDMA = 2,
	sceMpegCbRestartDMA = 3,
	sceMpegCbBackground = 4,
	sceMpegCbTimeStamp = 5,
	sceMpegCbStr = 6
};

typedef struct {
	sceMpegCbType type;
	char *errMessage;
} sceMpegCbDataError;

typedef struct {
	sceMpegCbType type;
	long int pts;
	long int dts;
} sceMpegCbDataTimeStamp;

typedef struct {
	sceMpegCbType type;
	u_char *header;
	u_char *data;
	u_int len;
	long int pts;
	long int dts;
} sceMpegCbDataStr;

typedef union {
	sceMpegCbType type;
	sceMpegCbDataError error;
	sceMpegCbDataTimeStamp ts;
	sceMpegCbDataStr str;
} sceMpegCbData;

typedef struct {
	int width;
	int height;
	int frameCount;
	long int pts;
	long int dts;
	u_long flags;
	long int pts2nd;
	long int dts2nd;
	u_long flags2nd;
	void *sys;
} sceMpeg;

struct SpuStreamHeader {
	char id[4];
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
	char id2[4];
	int size2;
};

struct EPs2Movie : EMovie {
protected:
	sceMpeg m_mpeg;
	u128 *m_pDList[2];
	u128 *m_pCurrentDList;
	EFile *m_pFile;
	ERingBuffer m_MuxRingBuffer;
	u8 *m_pMpegBuffer;
	u8 *m_pVideoOutBuffer;
	ERingBuffer m_DemuxRingBuffer;
	unsigned int m_DemuxLastDMASize;
	SpuStreamHeader m_AudioHeader;
	ERingBuffer m_AudioRingBuffer;
	int m_AudioDataCount;
	int m_AudioSkipBytes;
	unsigned int m_AudioDataRead;
	void *m_IopBuffer;
	u32 m_IopBufferSize;
	int m_IopBufferHalf;
	int m_Retrace;
	u32 m_MovieLength;
	u32 m_MovieDataRead;
	int m_CSCDuration;
	bool m_IsFinished;
	
public:
	EPs2Movie& operator=();
	EPs2Movie();
	EPs2Movie();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[7] */ virtual EPs2Movie(EPs2Movie*, int, void);
	/* vtable[8] */ virtual void Draw();
	/* vtable[1] */ virtual bool Load(EFile *pFile, u32 uStart, u32 length);
	/* vtable[6] */ virtual void Update();
	/* vtable[5] */ virtual bool IsFinished();
	/* vtable[3] */ virtual void Stop();
	void tBlockXFer();
protected:
	void GenerateDisplayList();
	static int VideoCallback(/* parameters unknown */);
	static int AudioCallback(/* parameters unknown */);
	static int NoDataCallback(/* parameters unknown */);
	static int BackgroundCallback(/* parameters unknown */);
	static int ErrorCallback(/* parameters unknown */);
	int FillBuffer(bool blocking);
	int Demux(bool blocking);
	int strFileRead(void *buff, int size);
	void waitForIOPReadComplete();
};

extern EPs2Movie *_pMoviePlayer;
extern __vtbl_ptr_type EPs2Movie virtual table[10];

void EPs2Movie::~EPs2Movie(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2MOVIE_H

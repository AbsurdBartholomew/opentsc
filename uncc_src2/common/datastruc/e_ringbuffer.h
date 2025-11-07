// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_RINGBUFFER_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_RINGBUFFER_H

struct ERingBuffer {
protected:
	u8 *m_pBuffer;
	unsigned int m_Size;
	unsigned int m_FilledCount;
	int m_FilledIndex;
	EMutex m_mutex;
	
public:
	ERingBuffer& operator=();
	ERingBuffer();
	ERingBuffer();
	ERingBuffer();
	ERingBuffer(ERingBuffer*, int, void);
	void Init();
	u8* GetEmptyPtr();
	unsigned int GetEmptySize();
	void FillByCopy(u8 *source, unsigned int length);
	void FillByUncachedCopy(u8 *source, unsigned int length);
	void Fill();
	unsigned int GetFilledSize();
	u8* GetFilledPtr();
	void Empty(ERingBuffer*, int, void);
	void EmptyCopy(u8 *dest, unsigned int length);
	u8* GetBufferPtr();
	unsigned int GetSize();
};

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_RINGBUFFER_H

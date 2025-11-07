// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_ARRAY_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_ARRAY_H

struct EArray {
	void *m_p;
	int m_size;
	int m_allocSize;
	int m_growBy;
	int m_elementSize;
	
	EArray& operator=();
	EArray();
	EArray();
	EArray(EArray*, int, void);
	void SetElementSize(EArray*, int, void);
	void SetGrowBy(EArray*, int, void);
	void SetSize(int size, int allocSize);
	void FreeUnusedBufferSpace();
	int GetSize();
	void Insert(int pos, int count);
	void Remove(int pos, int count);
protected:
	void Deallocate();
};

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_ARRAY_H

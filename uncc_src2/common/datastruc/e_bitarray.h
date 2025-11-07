// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_BITARRAY_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_BITARRAY_H

struct EBitArrayProxy {
protected:
	EBitArray *m_pArray;
	int m_index;
	
public:
	EBitArrayProxy& operator=(bool value);
	EBitArrayProxy();
	EBitArrayProxy();
	void operator=();
	void operator|=(bool value);
	void operator&=(bool value);
	void operator^=(bool value);
	bool operator bool();
};

EStream& operator<<(EStream &s, EBitArray &d);
EStream& operator>>(EStream &s, EBitArray &d);

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_BITARRAY_H

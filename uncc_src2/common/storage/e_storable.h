// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_STORAGE_E_STORABLE_H
#define C__EOR_SRC2_COMMON_STORAGE_E_STORABLE_H

extern ETypeInfo *gpTypeInfo_EStorable;
extern __vtbl_ptr_type EStream virtual table[6];
extern ETypeInfo EStorable::m_typeInfo;
extern __vtbl_ptr_type EStorable virtual table[10];

void EStream::~EStream(int __in_chrg);
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to gpTypeInfo_EStorable();

#endif // C__EOR_SRC2_COMMON_STORAGE_E_STORABLE_H

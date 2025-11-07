// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_STORAGE_E_STORAGE_H
#define C__EOR_SRC2_COMMON_STORAGE_E_STORAGE_H

typedef TNodeList<int> EIntList;
EStream& operator<<(EStream &s, EStorable &d);
EStream& operator>>(EStream &s, EStorable &d);
EStream& operator<<(EStream &s, EStorable *pD);
EStream& operator>>(EStream &s, EStorable *&pD);
EStream& operator<<(EStream &s, EVec4 &v);
EStream& operator<<(EStream &s, EVec3 &v);
EStream& operator<<(EStream &s, EVec2 &v);
EStream& operator<<(EStream &s, EBound3 &b);
EStream& operator<<(EStream &s, EBoundSphere &bs);
EStream& operator>>(EStream &s, EVec4 &v);
EStream& operator>>(EStream &s, EVec3 &v);
EStream& operator>>(EStream &s, EVec2 &v);
EStream& operator>>(EStream &s, EBound3 &b);
EStream& operator>>(EStream &s, EBoundSphere &b);

#endif // C__EOR_SRC2_COMMON_STORAGE_E_STORAGE_H

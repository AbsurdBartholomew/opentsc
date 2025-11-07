// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_PORTTYPE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_PORTTYPE_H

struct Rect {
	SInt16 top;
	SInt16 left;
	SInt16 bottom;
	SInt16 right;
};

struct Point {
	SInt16 v;
	SInt16 h;
};

SInt32 PinRect(Rect *rect, Point p);
SInt32 TickCount();
void OffsetRect(Rect *rect, SInt16 hoff, SInt16 voff);
void OffsetRect(RECT *rect, SInt16 hoff, SInt16 voff);
bool SectRect(Rect *rect1, Rect *rect2, Rect *result);
void SetRect(Rect *rect, SInt16 left, SInt16 top, SInt16 right, SInt16 bottom);
void SetRect(RECT *rect, SInt32 left, SInt32 top, SInt32 right, SInt32 bottom);
void SetRect(Rect *rect, LPRECT lpRect);
int LocalUnionRect(LPRECT result, RECT *rect1, RECT *rect2);
void UnionRect(Rect *rect1, Rect *rect2, Rect *result);
bool EqualRect(Rect *rect1, Rect *rect2);
void InsetRect_Mac(Rect *r, SInt16 hdelta, SInt16 vdelta);
bool PtInRect(Point p, Rect *r);
bool EmptyRect(Rect *r);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_PORTTYPE_H

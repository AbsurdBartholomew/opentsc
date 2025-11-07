// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PICTUREINPICTURE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PICTUREINPICTURE_H

struct EPictureInPicture {
protected:
	bool m_IsPiPActive;
	cXObject *m_pLastObject;
	int m_Zoom;
	int m_Size;
	short unsigned int m_DisplayText[128];
	bool m_IsThereACaption;
	float m_TimeAccumulator;
	float m_Duration;
	bool m_InfiniteDuration;
	EPortalWindow m_Portal;
	ERFont *m_pFont;
	SInt16 m_ObjectId;
public:
	__vtbl_ptr_type *$vf1030;
	
	EPictureInPicture& operator=();
	EPictureInPicture();
	EPictureInPicture();
	/* vtable[1] */ virtual EPictureInPicture(EPictureInPicture*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Update();
	void Draw(ERC *prc);
	void Reset();
	/* vtable[2] */ virtual void DoPictureInPicture(bool inTurnOn, cXObject *inObject, bool inLive, int inMSTimeout, int inZoom, int inSize, bool inDontShowIfObjectVisible, bool justCenter, u16 *inText);
	bool IsPipActive();
protected:
	void setupPortal();
	void resetPiP();
};

extern __vtbl_ptr_type EPictureInPicture virtual table[4];

void EPictureInPicture::~EPictureInPicture(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PICTUREINPICTURE_H

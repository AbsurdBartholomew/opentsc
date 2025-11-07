// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_ICONGROUP_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_ICONGROUP_H

struct AUTOPTR<StringSet> {
private:
	StringSet *m_ptr;
	
public:
	AUTOPTR();
	AUTOPTR();
	AUTOPTR(AUTOPTR<StringSet>*, int, void);
	StringSet* CreateInstance();
	void Reset();
	StringSet* operator StringSet *();
	StringSet* operator->();
private:
	AUTOPTR<StringSet>& operator=();
};

enum BalloonType {
	kBalloonThought = 0,
	kBalloonScream = 1,
	kBalloonSpeak = 2,
	kBalloonNone = 3
};

struct IconGroup {
	__vtbl_ptr_type *$vf4320;
	
	IconGroup& operator=();
	IconGroup();
protected:
	IconGroup();
	/* vtable[1] */ virtual IconGroup(IconGroup*, int, void);
public:
	static SInt16 GetBalloonSpriteID(/* parameters unknown */);
	static int NumGroups(/* parameters unknown */);
	/* vtable[2] */ virtual void Init(IconGroup*, int, void);
	/* vtable[3] */ virtual SInt16 GetSpriteID();
	/* vtable[4] */ virtual void GetLabel();
	/* vtable[5] */ virtual int CountIconLabels();
	/* vtable[6] */ virtual void GetIconLabel();
	static IconGroup* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct IconGroupImpl : IconGroup {
	int fGroup;
	AUTOPTR<StringSet> fStrings;
	IconIDMap *fMap;
	
	IconGroupImpl& operator=();
	IconGroupImpl();
	IconGroupImpl();
	/* vtable[1] */ virtual IconGroupImpl(IconGroupImpl*, int, void);
	/* vtable[2] */ virtual void Init(int group);
	/* vtable[3] */ virtual SInt16 GetSpriteID(int index);
	/* vtable[4] */ virtual void GetLabel(StringBuffer &label);
	/* vtable[5] */ virtual int CountIconLabels();
	/* vtable[6] */ virtual void GetIconLabel(int index, StringBuffer &label);
	void LoadStrings();
};

extern __vtbl_ptr_type IconGroupImpl virtual table[8];
extern __vtbl_ptr_type IconGroup virtual table[8];

void IconGroupImpl::~IconGroupImpl(int __in_chrg);
void IconGroup::~IconGroup(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_ICONGROUP_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CONTROLLPAD_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CONTROLLPAD_H

struct EUIVirtualCtrl {
	__vtbl_ptr_type *$vf2699;
	
	EUIVirtualCtrl& operator=();
	EUIVirtualCtrl();
	EUIVirtualCtrl();
	/* vtable[1] */ virtual EUIVirtualCtrl(EUIVirtualCtrl*, int, void);
	/* vtable[2] */ virtual bool GetButDown();
	/* vtable[3] */ virtual void ClearBut();
	/* vtable[4] */ virtual bool GetBut();
};

struct Controllpad : EUIVirtualCtrl {
protected:
	unsigned int m_pressed[8];
	unsigned int m_released[8];
	
public:
	Controllpad& operator=();
	Controllpad();
	Controllpad();
	/* vtable[1] */ virtual Controllpad(Controllpad*, int, void);
	void Update();
	/* vtable[2] */ virtual bool GetButDown(u32 player, u32 mask);
	/* vtable[3] */ virtual void ClearBut(u32 player, u32 mask);
	/* vtable[4] */ virtual bool GetBut(u32 player, u32 mask);
};

extern __vtbl_ptr_type Controllpad virtual table[6];
extern __vtbl_ptr_type EUIVirtualCtrl virtual table[6];

void Controllpad::~Controllpad(int __in_chrg);
void EUIVirtualCtrl::~EUIVirtualCtrl(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CONTROLLPAD_H

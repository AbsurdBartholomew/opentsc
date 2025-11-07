// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2CLOCK_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2CLOCK_H

struct EClockMan {
	__vtbl_ptr_type *$vf2342;
	
	EClockMan& operator=();
	EClockMan();
protected:
	EClockMan();
	/* vtable[1] */ virtual EClockMan(EClockMan*, int, void);
public:
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Start();
	/* vtable[5] */ virtual void* GetInstanceData();
	/* vtable[6] */ virtual void FreeInstanceData();
	/* vtable[7] */ virtual float GetSec();
	/* vtable[8] */ virtual double GetSecDouble();
};

struct EPs2ClockMan : EClockMan {
protected:
	u32 m_lastCounter;
	u32 m_nWraps;
	
public:
	EPs2ClockMan& operator=();
	EPs2ClockMan();
	/* vtable[1] */ virtual EPs2ClockMan(EPs2ClockMan*, int, void);
	EPs2ClockMan();
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Start(void *pVoid);
	/* vtable[5] */ virtual void* GetInstanceData();
	/* vtable[6] */ virtual void FreeInstanceData(void *data);
	/* vtable[7] */ virtual float GetSec(void *pVoid);
	/* vtable[8] */ virtual double GetSecDouble(void *pVoid);
};

extern EPs2ClockMan _ps2ClockMan;
extern EClockMan *_pClockMan;
extern __vtbl_ptr_type EPs2ClockMan virtual table[10];
extern __vtbl_ptr_type EClockMan virtual table[10];

void EPs2ClockMan::~EPs2ClockMan(int __in_chrg);
void EClockMan::~EClockMan(int __in_chrg);
void global constructors keyed to _ps2ClockMan();
void global destructors keyed to _ps2ClockMan();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2CLOCK_H

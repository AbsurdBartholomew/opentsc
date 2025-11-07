// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_LEVEL_E_TRIGGER_H
#define C__EOR_SRC2_ENGINE_LEVEL_E_TRIGGER_H

struct ETrigger : EStorable {
	static ETypeInfo m_typeInfo;
	ERScript *m_pScript;
	EString m_name;
	TNodeList<EInstance *> m_receiverList;
	u32 m_typeFlags;
	
	ETrigger& operator=();
	ETrigger();
	static ETrigger* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ETrigger* CreateCopy();
	ETrigger();
	/* vtable[6] */ virtual ETrigger(ETrigger*, int, void);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void Deallocate();
};

extern ETypeInfo *gpTypeInfo_ETrigger;
extern __vtbl_ptr_type ETrigger virtual table[10];
extern __vtbl_ptr_type EStorable virtual table[10];
extern ETypeInfo ETrigger::m_typeInfo;

EStream& operator<<(EStream &s, ETrigger *pD);
EStream& operator>>(EStream &s, ETrigger *&pD);
void ETrigger::~ETrigger(int __in_chrg);
EStream& EStream & operator>><EInstance *>(EStream &s, TNodeList<EInstance *> &d);
void EStorable::~EStorable(int __in_chrg);
void global constructors keyed to gpTypeInfo_ETrigger();

#endif // C__EOR_SRC2_ENGINE_LEVEL_E_TRIGGER_H

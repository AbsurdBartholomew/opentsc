// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_EXCEPTIONHANDLER_H
#define C__EOR_SRC2_ENGINE_PS2_E_EXCEPTIONHANDLER_H

typedef unsigned int u_int;
typedef long long unsigned int u_long128;

typedef struct {
	int reg[45];
	int version;
	int offset;
	char module[32];
} sceExcepIOPExceptionData;

typedef struct {
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
} sceGsDBuff;

struct EExceptionHandler {
protected:
	sceExcepIOPExceptionData m_iop;
	sceGsDBuff m_db;
	
public:
	EExceptionHandler& operator=();
	EExceptionHandler();
	EExceptionHandler();
	void Init();
protected:
	static void EEExceptionHandler(/* parameters unknown */);
	static void IOPExceptionHandler(/* parameters unknown */);
	void InitGS();
	static void PrintConfig(/* parameters unknown */);
};

extern EExceptionHandler _exceptionhandler;


#endif // C__EOR_SRC2_ENGINE_PS2_E_EXCEPTIONHANDLER_H

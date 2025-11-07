// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_FFFRAMEBUF_H
#define C__EOR_SRC2_ENGINE_PS2_E_FFFRAMEBUF_H

typedef long unsigned int u_long;
typedef float sceVu0FVECTOR[4];

typedef struct {
	long unsigned int NLOOP : 15;
	long unsigned int EOP : 1;
	long unsigned int pad16 : 16;
	long unsigned int id : 14;
	long unsigned int PRE : 1;
	long unsigned int PRIM : 11;
	long unsigned int FLG : 2;
	long unsigned int NREG : 4;
	long unsigned int REGS0 : 4;
	long unsigned int REGS1 : 4;
	long unsigned int REGS2 : 4;
	long unsigned int REGS3 : 4;
	long unsigned int REGS4 : 4;
	long unsigned int REGS5 : 4;
	long unsigned int REGS6 : 4;
	long unsigned int REGS7 : 4;
	long unsigned int REGS8 : 4;
	long unsigned int REGS9 : 4;
	long unsigned int REGS10 : 4;
	long unsigned int REGS11 : 4;
	long unsigned int REGS12 : 4;
	long unsigned int REGS13 : 4;
	long unsigned int REGS14 : 4;
	long unsigned int REGS15 : 4;
} sceGifTag;

typedef struct {
	long unsigned int LCM : 1;
	long unsigned int pad01 : 1;
	long unsigned int MXL : 3;
	long unsigned int MMAG : 1;
	long unsigned int MMIN : 3;
	long unsigned int MTBA : 1;
	long unsigned int pad10 : 9;
	long unsigned int L : 2;
	long unsigned int pad21 : 11;
	long unsigned int K : 12;
	long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct {
	sceGsFrame frame1;
	u_long frame1addr;
	sceGsZbuf zbuf1;
	long int zbuf1addr;
	sceGsXyoffset xyoffset1;
	long int xyoffset1addr;
	sceGsScissor scissor1;
	long int scissor1addr;
	sceGsPrmodecont prmodecont;
	long int prmodecontaddr;
	sceGsColclamp colclamp;
	long int colclampaddr;
	sceGsDthe dthe;
	long int dtheaddr;
	sceGsTest test1;
	long int test1addr;
} sceGsDrawEnv1;

typedef struct {
	sceGsTest testa;
	long int testaaddr;
	sceGsPrim prim;
	long int primaddr;
	sceGsRgbaq rgbaq;
	long int rgbaqaddr;
	sceGsXyz xyz2a;
	long int xyz2aaddr;
	sceGsXyz xyz2b;
	long int xyz2baddr;
	sceGsTest testb;
	long int testbaddr;
} sceGsClear;

struct EMotionBlur {
	float alpha;
	float offsetX;
	float offsetY;
	float scaleX;
	float scaleY;
	float scaleCenterX;
	float scaleCenterY;
};

typedef struct {
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
	tGS_DISPFB1 dispfb1;
	tGS_DISPLAY1 display1;
	tGS_DISPLAY1 pad;
} DispEnvTwoCircuits;

typedef struct {
	DispEnvTwoCircuits disp0;
	DispEnvTwoCircuits disp1;
	sceGifTag giftagDrawSmall0;
	sceGsDrawEnv1 drawSmall0;
	sceGsClear clearSmall0;
	sceGifTag giftagDrawSmall1;
	sceGsDrawEnv1 drawSmall1;
	sceGsClear clearSmall1;
	short int drawW;
	short int drawH;
	short int drawPSM;
	short int drawFBP;
	short int dispW;
	short int dispH;
	short int dispPSM;
	short int dispFBP0;
	short int dispFBP1;
	short int zPSM;
	short int zFBP;
} fsAABuff;

typedef struct {
	sceGifTag giftag0;
	u_long testa;
	long int testaaddr;
	sceGsTex1 tex1;
	long int tex1addr;
	sceGsTex0 tex0;
	long int tex0addr;
	long int nothing;
	long int texflushaddr;
	u_long prim;
	long int primaddr;
	u_long uv0;
	long int uv0addr;
	u_long rgbaq0;
	long int rgbaq0addr;
	u_long xyz0;
	long int xyz0addr;
	u_long uv1;
	long int uv1addr;
	u_long xyz1;
	long int xyz1addr;
	u_long testb;
	long int testbaddr;
	long int pad[10];
} gsDrawDecalSprite;


void CalcFrameBufferPositions(fsAABuff *buff, short int dispW, short int dispH, short int dispPSM);
void SetupFS_AA_buffer(fsAABuff *buff, short int dispW, short int dispH, short int dispPSM, short int ztest, short int zPSM, short int clear, float horizontalBlur);
void SetDispBuffers(fsAABuff *buff, short int w, short int h, short int psm, short int fbp0, short int fbp1, float horizontalBlur);
void SetDrawBuffersSmall(fsAABuff *buff, short int w, short int h, short int psm, short int fbp0, short int fbp1, short int zbp, short int ztest, int zpsm, int clear);
void PutDispBuffer(fsAABuff *buff, int bufferNum, int both);
void PutDrawBufferSmall(fsAABuff *buff, int bufferNum, int clear);
void PutCopySprite(sceGifTag *spriteTag);
void SetCopyPreviousFrameSprite(fsAABuff *buff, gsDrawDecalSprite *spriteStruct, int oddFrame, EMotionBlur &mb);
void SetBlurAmountAlpha(int alpha);

#endif // C__EOR_SRC2_ENGINE_PS2_E_FFFRAMEBUF_H

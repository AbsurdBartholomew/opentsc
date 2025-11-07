// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_BITCONV_H
#define C__EOR_SRC2_ENGINE_PS2_BITCONV_H


int BlockConv4to32(unsigned char *p_input, unsigned char *p_output);
int BlockConv8to32(unsigned char *p_input, unsigned char *p_output);
int PageConv4to32(int width, int height, unsigned char *p_input, unsigned char *p_output);
int PageConv8to32(int width, int height, unsigned char *p_input, unsigned char *p_output);
int Conv4to32(int width, int height, unsigned char *p_input, unsigned char *p_output);
int Conv8to32(int width, int height, unsigned char *p_input, unsigned char *p_output);

#endif // C__EOR_SRC2_ENGINE_PS2_BITCONV_H

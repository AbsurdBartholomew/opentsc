typedef struct {
	int real;
	int imag;
} complex int;

typedef long unsigned int clock_t;
typedef long int time_t;

struct tm {
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

// warning: multiple differing types with the same name (type name not equal)
typedef struct {
	_Bigint *_next;
	int _k;
	int _maxwds;
	int _sign;
	int _wds;
	ULong _x[1];
} _Bigint;

struct _atexit {
	_atexit *_next;
	int _ind;
	void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf {
	unsigned char *_base;
	int _size;
};

struct __sFILE {
	unsigned char *_p;
	int _r;
	int _w;
	short int _flags;
	short int _file;
	__sbuf _bf;
	int _lbfsize;
	void *_cookie;
	int (*_read)(/* parameters unknown */);
	int (*_write)(/* parameters unknown */);
	_fpos_t (*_seek)(/* parameters unknown */);
	int (*_close)(/* parameters unknown */);
	__sbuf _ub;
	unsigned char *_up;
	int _ur;
	unsigned char _ubuf[3];
	unsigned char _nbuf[1];
	__sbuf _lb;
	int _blksize;
	int _offset;
	_reent *_data;
};

struct _reent {
	int _errno;
	__sFILE *_stdin;
	__sFILE *_stdout;
	__sFILE *_stderr;
	int _inc;
	char _emergency[25];
	int _current_category;
	char *_current_locale;
	int __sdidinit;
	void (*__cleanup)(/* parameters unknown */);
	_Bigint *_result;
	int _result_k;
	_Bigint *_p5s;
	_Bigint **_freelist;
	int _cvtlen;
	char *_cvtbuf;
	union {
		struct {
			unsigned int _rand_next;
			char *_strtok_last;
			char _asctime_buf[26];
			tm _localtime_buf;
			int _gamma_signgam;
		} _reent;
		struct {
			unsigned char *_nextf[30];
			unsigned int _nmalloc[30];
		} _unused;
	} _new;
	_atexit *_atexit;
	_atexit _atexit0;
	void (**_sig_func)(/* parameters unknown */);
	_glue __sglue;
	__sFILE __sf[3];
};

typedef struct {
	int quot;
	int rem;
} div_t;

typedef struct {
	long int quot;
	long int rem;
} ldiv_t;

typedef double f64;
typedef long int s64;
typedef long long int s128;
typedef SignedByte Sint8;
typedef short unsigned int Uint16;
typedef long unsigned int Uint64;
typedef long unsigned int DWORD;
typedef short unsigned int WORD;
typedef unsigned char BYTE;
typedef int LONG;
typedef LONG HRESULT;
typedef unsigned int UINT;
typedef UINT WPARAM;
typedef LONG LPARAM;
typedef LONG LRESULT;
typedef char CHAR;
typedef void *LPVOID;

struct HWND__ {
	int unused;
};

typedef HWND__ *HWND;

struct HDC__ {
	int unused;
};

typedef HDC__ *HDC;

struct HBRUSH__ {
	int unused;
};

typedef HBRUSH__ *HBRUSH;

struct HINSTANCE__ {
	int unused;
};

typedef HINSTANCE__ *HINSTANCE;

struct HPALETTE__ {
	int unused;
};

typedef HPALETTE__ *HPALETTE;

struct HICON__ {
	int unused;
};

typedef HICON__ *HICON;

struct HMENU__ {
	int unused;
};

typedef HMENU__ *HMENU;

struct HBITMAP__ {
	int unused;
};

typedef HBITMAP__ *HBITMAP;

struct HGDIOBJ__ {
	int unused;
};

typedef HGDIOBJ__ *HGDIOBJ;

struct HRGN__ {
	int unused;
};

typedef HRGN__ *HRGN;
typedef HICON HCURSOR;
typedef DWORD COLORREF;
typedef CHAR *LPCSTR;
typedef CHAR *PCSTR;
typedef CHAR *LPSTR;
typedef CHAR *PSTR;
typedef short unsigned int WCHAR;
typedef WCHAR OLECHAR;
typedef char TCHAR;
typedef char *PTCHAR;
typedef DWORD FOURCC;

struct _GUID {
	DWORD Data1;
	WORD Data2;
	WORD Data3;
	unsigned char Data4[8];
	
	_GUID& operator=();
	_GUID();
	_GUID();
	bool operator==();
};

typedef _GUID GUID;
typedef GUID IID;
typedef GUID *LPGUID;
typedef tagRECT *PRECT;
typedef tagRECT *NPRECT;
typedef tagPOINT *PPOINT;
typedef tagPOINT *NPPOINT;
typedef tagPOINT *LPPOINT;

struct tagPALETTEENTRY {
	BYTE peRed;
	BYTE peGreen;
	BYTE peBlue;
	BYTE peFlags;
};

typedef tagPALETTEENTRY PALETTEENTRY;
typedef tagPALETTEENTRY *PPALETTEENTRY;
typedef tagPALETTEENTRY *LPPALETTEENTRY;

struct tWAVEFORMATEX {
	WORD wFormatTag;
	WORD nChannels;
	DWORD nSamplesPerSec;
	DWORD nAvgBytesPerSec;
	WORD nBlockAlign;
	WORD wBitsPerSample;
	WORD cbSize;
};

typedef tWAVEFORMATEX WAVEFORMATEX;
typedef tWAVEFORMATEX *PWAVEFORMATEX;
typedef tWAVEFORMATEX *NPWAVEFORMATEX;
typedef tWAVEFORMATEX *LPWAVEFORMATEX;

struct _MMCKINFO {
	FOURCC ckid;
	DWORD cksize;
	FOURCC fccType;
	DWORD dwDataOffset;
	DWORD dwFlags;
};

typedef _MMCKINFO MMCKINFO;
typedef _MMCKINFO *PMMCKINFO;
typedef _MMCKINFO *NPMMCKINFO;
typedef _MMCKINFO *LPMMCKINFO;
typedef int (*LPDDENUMCALLBACKA)(/* parameters unknown */);

struct _DDSCAPS {
	DWORD dwCaps;
};

typedef _DDSCAPS DDSCAPS;

struct _DDCAPS {
	DWORD dwSize;
	DWORD dwCaps;
	DWORD dwCaps2;
	DWORD dwCKeyCaps;
	DWORD dwFXCaps;
	DWORD dwFXAlphaCaps;
	DWORD dwPalCaps;
	DWORD dwSVCaps;
	DWORD dwAlphaBltConstBitDepths;
	DWORD dwAlphaBltPixelBitDepths;
	DWORD dwAlphaBltSurfaceBitDepths;
	DWORD dwAlphaOverlayConstBitDepths;
	DWORD dwAlphaOverlayPixelBitDepths;
	DWORD dwAlphaOverlaySurfaceBitDepths;
	DWORD dwZBufferBitDepths;
	DWORD dwVidMemTotal;
	DWORD dwVidMemFree;
	DWORD dwMaxVisibleOverlays;
	DWORD dwCurrVisibleOverlays;
	DWORD dwNumFourCCCodes;
	DWORD dwAlignBoundarySrc;
	DWORD dwAlignSizeSrc;
	DWORD dwAlignBoundaryDest;
	DWORD dwAlignSizeDest;
	DWORD dwAlignStrideAlign;
	long unsigned int dwRops[8];
	DDSCAPS ddsCaps;
	DWORD dwMinOverlayStretch;
	DWORD dwMaxOverlayStretch;
	DWORD dwMinLiveVideoStretch;
	DWORD dwMaxLiveVideoStretch;
	DWORD dwMinHwCodecStretch;
	DWORD dwMaxHwCodecStretch;
	DWORD dwReserved1;
	DWORD dwReserved2;
	DWORD dwReserved3;
	DWORD dwSVBCaps;
	DWORD dwSVBCKeyCaps;
	DWORD dwSVBFXCaps;
	long unsigned int dwSVBRops[8];
	DWORD dwVSBCaps;
	DWORD dwVSBCKeyCaps;
	DWORD dwVSBFXCaps;
	long unsigned int dwVSBRops[8];
	DWORD dwSSBCaps;
	DWORD dwSSBCKeyCaps;
	DWORD dwSSBFXCaps;
	long unsigned int dwSSBRops[8];
	DWORD dwReserved4;
	DWORD dwReserved5;
	DWORD dwReserved6;
};

typedef _DDCAPS DDCAPS;
typedef _DDCAPS *LPDDCAPS;

struct _DDSCAPS2 {
	DWORD dwCaps;
	DWORD dwCaps2;
	DWORD dwCaps3;
	union {
		DWORD dwCaps4;
		DWORD dwVolumeDepth;
	};
};

typedef _DDSCAPS2 DDSCAPS2;

struct _DDCAPS_DX6 {
	DWORD dwSize;
	DWORD dwCaps;
	DWORD dwCaps2;
	DWORD dwCKeyCaps;
	DWORD dwFXCaps;
	DWORD dwFXAlphaCaps;
	DWORD dwPalCaps;
	DWORD dwSVCaps;
	DWORD dwAlphaBltConstBitDepths;
	DWORD dwAlphaBltPixelBitDepths;
	DWORD dwAlphaBltSurfaceBitDepths;
	DWORD dwAlphaOverlayConstBitDepths;
	DWORD dwAlphaOverlayPixelBitDepths;
	DWORD dwAlphaOverlaySurfaceBitDepths;
	DWORD dwZBufferBitDepths;
	DWORD dwVidMemTotal;
	DWORD dwVidMemFree;
	DWORD dwMaxVisibleOverlays;
	DWORD dwCurrVisibleOverlays;
	DWORD dwNumFourCCCodes;
	DWORD dwAlignBoundarySrc;
	DWORD dwAlignSizeSrc;
	DWORD dwAlignBoundaryDest;
	DWORD dwAlignSizeDest;
	DWORD dwAlignStrideAlign;
	long unsigned int dwRops[8];
	DDSCAPS ddsOldCaps;
	DWORD dwMinOverlayStretch;
	DWORD dwMaxOverlayStretch;
	DWORD dwMinLiveVideoStretch;
	DWORD dwMaxLiveVideoStretch;
	DWORD dwMinHwCodecStretch;
	DWORD dwMaxHwCodecStretch;
	DWORD dwReserved1;
	DWORD dwReserved2;
	DWORD dwReserved3;
	DWORD dwSVBCaps;
	DWORD dwSVBCKeyCaps;
	DWORD dwSVBFXCaps;
	long unsigned int dwSVBRops[8];
	DWORD dwVSBCaps;
	DWORD dwVSBCKeyCaps;
	DWORD dwVSBFXCaps;
	long unsigned int dwVSBRops[8];
	DWORD dwSSBCaps;
	DWORD dwSSBCKeyCaps;
	DWORD dwSSBFXCaps;
	long unsigned int dwSSBRops[8];
	DWORD dwMaxVideoPorts;
	DWORD dwCurrVideoPorts;
	DWORD dwSVBCaps2;
	DWORD dwNLVBCaps;
	DWORD dwNLVBCaps2;
	DWORD dwNLVBCKeyCaps;
	DWORD dwNLVBFXCaps;
	long unsigned int dwNLVBRops[8];
	DDSCAPS2 ddsCaps;
};

typedef _DDCAPS_DX6 DDCAPS_DX6;

struct _DDCOLORKEY {
	DWORD dwColorSpaceLowValue;
	DWORD dwColorSpaceHighValue;
};

typedef _DDCOLORKEY DDCOLORKEY;

struct _DDPIXELFORMAT {
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwFourCC;
	union {
		DWORD dwRGBBitCount;
		DWORD dwYUVBitCount;
		DWORD dwZBufferBitDepth;
		DWORD dwAlphaBitDepth;
	};
	union {
		DWORD dwRBitMask;
		DWORD dwYBitMask;
	};
	union {
		DWORD dwGBitMask;
		DWORD dwUBitMask;
	};
	union {
		DWORD dwBBitMask;
		DWORD dwVBitMask;
	};
	union {
		DWORD dwRGBAlphaBitMask;
		DWORD dwYUVAlphaBitMask;
		DWORD dwRGBZBitMask;
		DWORD dwYUVZBitMask;
	};
};

typedef _DDPIXELFORMAT DDPIXELFORMAT;
typedef _DDPIXELFORMAT *LPDDPIXELFORMAT;

struct _DDSURFACEDESC {
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwHeight;
	DWORD dwWidth;
	union {
		LONG lPitch;
		DWORD dwLinearSize;
	};
	DWORD dwBackBufferCount;
	union {
		DWORD dwMipMapCount;
		DWORD dwZBufferBitDepth;
		DWORD dwRefreshRate;
	};
	DWORD dwAlphaBitDepth;
	DWORD dwReserved;
	LPVOID lpSurface;
	DDCOLORKEY ddckCKDestOverlay;
	DDCOLORKEY ddckCKDestBlt;
	DDCOLORKEY ddckCKSrcOverlay;
	DDCOLORKEY ddckCKSrcBlt;
	DDPIXELFORMAT ddpfPixelFormat;
	DDSCAPS ddsCaps;
};

typedef _DDSURFACEDESC DDSURFACEDESC;
typedef _DDSURFACEDESC *LPDDSURFACEDESC;

struct _DDSURFACEDESC2 {
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwHeight;
	DWORD dwWidth;
	union {
		LONG lPitch;
		DWORD dwLinearSize;
	};
	union {
		DWORD dwBackBufferCount;
		DWORD dwDepth;
	};
	union {
		DWORD dwMipMapCount;
		DWORD dwRefreshRate;
		DWORD dwSrcVBHandle;
	};
	DWORD dwAlphaBitDepth;
	DWORD dwReserved;
	LPVOID lpSurface;
	union {
		DDCOLORKEY ddckCKDestOverlay;
		DWORD dwEmptyFaceColor;
	};
	DDCOLORKEY ddckCKDestBlt;
	DDCOLORKEY ddckCKSrcOverlay;
	DDCOLORKEY ddckCKSrcBlt;
	union {
		DDPIXELFORMAT ddpfPixelFormat;
		DWORD dwFVF;
	};
	DDSCAPS2 ddsCaps;
	DWORD dwTextureStage;
};

typedef _DDSURFACEDESC2 DDSURFACEDESC2;
typedef IDirectDrawSurface *LPDIRECTDRAWSURFACE;

struct _DDBLTFX {
	DWORD dwSize;
	DWORD dwDDFX;
	DWORD dwROP;
	DWORD dwDDROP;
	DWORD dwRotationAngle;
	DWORD dwZBufferOpCode;
	DWORD dwZBufferLow;
	DWORD dwZBufferHigh;
	DWORD dwZBufferBaseDest;
	DWORD dwZDestConstBitDepth;
	union {
		DWORD dwZDestConst;
		LPDIRECTDRAWSURFACE lpDDSZBufferDest;
	};
	DWORD dwZSrcConstBitDepth;
	union {
		DWORD dwZSrcConst;
		LPDIRECTDRAWSURFACE lpDDSZBufferSrc;
	};
	DWORD dwAlphaEdgeBlendBitDepth;
	DWORD dwAlphaEdgeBlend;
	DWORD dwReserved;
	DWORD dwAlphaDestConstBitDepth;
	union {
		DWORD dwAlphaDestConst;
		LPDIRECTDRAWSURFACE lpDDSAlphaDest;
	};
	DWORD dwAlphaSrcConstBitDepth;
	union {
		DWORD dwAlphaSrcConst;
		LPDIRECTDRAWSURFACE lpDDSAlphaSrc;
	};
	union {
		DWORD dwFillColor;
		DWORD dwFillDepth;
		DWORD dwFillPixel;
		LPDIRECTDRAWSURFACE lpDDSPattern;
	};
	DDCOLORKEY ddckDestColorkey;
	DDCOLORKEY ddckSrcColorkey;
};

typedef _DDBLTFX DDBLTFX;
typedef _DDBLTFX *LPDDBLTFX;
typedef float D3DVALUE;
typedef DWORD D3DCOLOR;
typedef DWORD D3DTEXTUREHANDLE;
typedef DWORD *LPD3DTEXTUREHANDLE;
typedef DWORD D3DMATRIXHANDLE;
typedef DWORD *LPD3DMATRIXHANDLE;
typedef DWORD D3DMATERIALHANDLE;
typedef DWORD *LPD3DMATERIALHANDLE;

struct _D3DVERTEX {
	union {
		D3DVALUE x;
		D3DVALUE dvX;
	};
	union {
		D3DVALUE y;
		D3DVALUE dvY;
	};
	union {
		D3DVALUE z;
		D3DVALUE dvZ;
	};
	union {
		D3DVALUE nx;
		D3DVALUE dvNX;
	};
	union {
		D3DVALUE ny;
		D3DVALUE dvNY;
	};
	union {
		D3DVALUE nz;
		D3DVALUE dvNZ;
	};
	union {
		D3DVALUE tu;
		D3DVALUE dvTU;
	};
	union {
		D3DVALUE tv;
		D3DVALUE dvTV;
	};
};

typedef _D3DVERTEX D3DVERTEX;
typedef _D3DVERTEX *LPD3DVERTEX;

struct _D3DVECTOR {
	union {
		D3DVALUE x;
		D3DVALUE dvX;
	};
	union {
		D3DVALUE y;
		D3DVALUE dvY;
	};
	union {
		D3DVALUE z;
		D3DVALUE dvZ;
	};
};

typedef _D3DVECTOR D3DVECTOR;

struct _D3DCOLORVALUE {
	union {
		D3DVALUE r;
		D3DVALUE dvR;
	};
	union {
		D3DVALUE g;
		D3DVALUE dvG;
	};
	union {
		D3DVALUE b;
		D3DVALUE dvB;
	};
	union {
		D3DVALUE a;
		D3DVALUE dvA;
	};
};

typedef _D3DCOLORVALUE D3DCOLORVALUE;
typedef _D3DCOLORVALUE *LPD3DCOLORVALUE;

struct _D3DMATERIAL {
	DWORD dwSize;
	union {
		D3DCOLORVALUE diffuse;
		D3DCOLORVALUE dcvDiffuse;
	};
	union {
		D3DCOLORVALUE ambient;
		D3DCOLORVALUE dcvAmbient;
	};
	union {
		D3DCOLORVALUE specular;
		D3DCOLORVALUE dcvSpecular;
	};
	union {
		D3DCOLORVALUE emissive;
		D3DCOLORVALUE dcvEmissive;
	};
	union {
		D3DVALUE power;
		D3DVALUE dvPower;
	};
	D3DTEXTUREHANDLE hTexture;
	DWORD dwRampSize;
};

typedef _D3DMATERIAL D3DMATERIAL;
typedef _D3DMATERIAL *LPD3DMATERIAL;

enum _D3DLIGHTTYPE {
	D3DLIGHT_POINT = 1,
	D3DLIGHT_SPOT = 2,
	D3DLIGHT_DIRECTIONAL = 3,
	D3DLIGHT_PARALLELPOINT = 4,
	D3DLIGHT_FORCE_DWORD = 2147483647
};

typedef _D3DLIGHTTYPE D3DLIGHTTYPE;

struct _D3DLIGHT2 {
	DWORD dwSize;
	D3DLIGHTTYPE dltType;
	D3DCOLORVALUE dcvColor;
	D3DVECTOR dvPosition;
	D3DVECTOR dvDirection;
	D3DVALUE dvRange;
	D3DVALUE dvFalloff;
	D3DVALUE dvAttenuation0;
	D3DVALUE dvAttenuation1;
	D3DVALUE dvAttenuation2;
	D3DVALUE dvTheta;
	D3DVALUE dvPhi;
	DWORD dwFlags;
};

typedef _D3DLIGHT2 D3DLIGHT2;
typedef _D3DLIGHT2 *LPD3DLIGHT2;

struct _D3DSTATS {
	DWORD dwSize;
	DWORD dwTrianglesDrawn;
	DWORD dwLinesDrawn;
	DWORD dwPointsDrawn;
	DWORD dwSpansDrawn;
	DWORD dwVerticesProcessed;
};

typedef _D3DSTATS D3DSTATS;
typedef _D3DSTATS *LPD3DSTATS;

struct _D3DVIEWPORT {
	DWORD dwSize;
	DWORD dwX;
	DWORD dwY;
	DWORD dwWidth;
	DWORD dwHeight;
	D3DVALUE dvScaleX;
	D3DVALUE dvScaleY;
	D3DVALUE dvMaxX;
	D3DVALUE dvMaxY;
	D3DVALUE dvMinZ;
	D3DVALUE dvMaxZ;
};

typedef _D3DVIEWPORT D3DVIEWPORT;
typedef _D3DVIEWPORT *LPD3DVIEWPORT;

struct _D3DVIEWPORT2 {
	DWORD dwSize;
	DWORD dwX;
	DWORD dwY;
	DWORD dwWidth;
	DWORD dwHeight;
	D3DVALUE dvClipX;
	D3DVALUE dvClipY;
	D3DVALUE dvClipWidth;
	D3DVALUE dvClipHeight;
	D3DVALUE dvMinZ;
	D3DVALUE dvMaxZ;
};

typedef _D3DVIEWPORT2 D3DVIEWPORT2;
typedef _D3DVIEWPORT2 *LPD3DVIEWPORT2;

enum _D3DSHADEMODE {
	D3DSHADE_FLAT = 1,
	D3DSHADE_GOURAUD = 2,
	D3DSHADE_PHONG = 3,
	D3DSHADE_FORCE_DWORD = 2147483647
};

typedef _D3DSHADEMODE D3DSHADEMODE;

enum _D3DFILLMODE {
	D3DFILL_POINT = 1,
	D3DFILL_WIREFRAME = 2,
	D3DFILL_SOLID = 3,
	D3DFILL_FORCE_DWORD = 2147483647
};

typedef _D3DFILLMODE D3DFILLMODE;

struct _D3DLINEPATTERN {
	WORD wRepeatFactor;
	WORD wLinePattern;
};

typedef _D3DLINEPATTERN D3DLINEPATTERN;

struct _D3DTRIANGLE {
	union {
		WORD v1;
		WORD wV1;
	};
	union {
		WORD v2;
		WORD wV2;
	};
	union {
		WORD v3;
		WORD wV3;
	};
	WORD wFlags;
};

typedef _D3DTRIANGLE D3DTRIANGLE;
typedef _D3DTRIANGLE *LPD3DTRIANGLE;

struct _D3DLINE {
	union {
		WORD v1;
		WORD wV1;
	};
	union {
		WORD v2;
		WORD wV2;
	};
};

typedef _D3DLINE D3DLINE;
typedef _D3DLINE *LPD3DLINE;

struct _D3DBRANCH {
	DWORD dwMask;
	DWORD dwValue;
	int bNegate;
	DWORD dwOffset;
};

typedef _D3DBRANCH D3DBRANCH;
typedef _D3DBRANCH *LPD3DBRANCH;

struct _D3DRECT {
	union {
		LONG x1;
		LONG lX1;
	};
	union {
		LONG y1;
		LONG lY1;
	};
	union {
		LONG x2;
		LONG lX2;
	};
	union {
		LONG y2;
		LONG lY2;
	};
};

typedef _D3DRECT D3DRECT;
typedef _D3DRECT *LPD3DRECT;

struct _D3DSTATUS {
	DWORD dwFlags;
	DWORD dwStatus;
	D3DRECT drExtent;
};

typedef _D3DSTATUS D3DSTATUS;
typedef _D3DSTATUS *LPD3DSTATUS;
typedef DWORD D3DCOLORMODEL;

struct _D3DTRANSFORMCAPS {
	DWORD dwSize;
	DWORD dwCaps;
};

typedef _D3DTRANSFORMCAPS D3DTRANSFORMCAPS;
typedef _D3DTRANSFORMCAPS *LPD3DTRANSFORMCAPS;

struct _D3DLIGHTINGCAPS {
	DWORD dwSize;
	DWORD dwCaps;
	DWORD dwLightingModel;
	DWORD dwNumLights;
};

typedef _D3DLIGHTINGCAPS D3DLIGHTINGCAPS;
typedef _D3DLIGHTINGCAPS *LPD3DLIGHTINGCAPS;

struct _D3DPrimCaps {
	DWORD dwSize;
	DWORD dwMiscCaps;
	DWORD dwRasterCaps;
	DWORD dwZCmpCaps;
	DWORD dwSrcBlendCaps;
	DWORD dwDestBlendCaps;
	DWORD dwAlphaCmpCaps;
	DWORD dwShadeCaps;
	DWORD dwTextureCaps;
	DWORD dwTextureFilterCaps;
	DWORD dwTextureBlendCaps;
	DWORD dwTextureAddressCaps;
	DWORD dwStippleWidth;
	DWORD dwStippleHeight;
};

typedef _D3DPrimCaps D3DPRIMCAPS;
typedef _D3DPrimCaps *LPD3DPRIMCAPS;

struct _D3DDeviceDesc {
	DWORD dwSize;
	DWORD dwFlags;
	D3DCOLORMODEL dcmColorModel;
	DWORD dwDevCaps;
	D3DTRANSFORMCAPS dtcTransformCaps;
	int bClipping;
	D3DLIGHTINGCAPS dlcLightingCaps;
	D3DPRIMCAPS dpcLineCaps;
	D3DPRIMCAPS dpcTriCaps;
	DWORD dwDeviceRenderBitDepth;
	DWORD dwDeviceZBufferBitDepth;
	DWORD dwMaxBufferSize;
	DWORD dwMaxVertexCount;
};

typedef _D3DDeviceDesc D3DDEVICEDESC;
typedef _D3DDeviceDesc *LPD3DDEVICEDESC;

enum _D3DOPCODE {
	D3DOP_POINT = 1,
	D3DOP_LINE = 2,
	D3DOP_TRIANGLE = 3,
	D3DOP_MATRIXLOAD = 4,
	D3DOP_MATRIXMULTIPLY = 5,
	D3DOP_STATETRANSFORM = 6,
	D3DOP_STATELIGHT = 7,
	D3DOP_STATERENDER = 8,
	D3DOP_PROCESSVERTICES = 9,
	D3DOP_TEXTURELOAD = 10,
	D3DOP_EXIT = 11,
	D3DOP_BRANCHFORWARD = 12,
	D3DOP_SPAN = 13,
	D3DOP_SETSTATUS = 14,
	D3DOP_FORCE_DWORD = 2147483647
};

typedef _D3DOPCODE D3DOPCODE;

struct _D3DINSTRUCTION {
	BYTE bOpcode;
	BYTE bSize;
	WORD wCount;
};

typedef _D3DINSTRUCTION D3DINSTRUCTION;
typedef _D3DINSTRUCTION *LPD3DINSTRUCTION;

enum _D3DTEXTUREFILTER {
	D3DFILTER_NEAREST = 1,
	D3DFILTER_LINEAR = 2,
	D3DFILTER_MIPNEAREST = 3,
	D3DFILTER_MIPLINEAR = 4,
	D3DFILTER_LINEARMIPNEAREST = 5,
	D3DFILTER_LINEARMIPLINEAR = 6,
	D3DFILTER_FORCE_DWORD = 2147483647
};

typedef _D3DTEXTUREFILTER D3DTEXTUREFILTER;

enum _D3DBLEND {
	D3DBLEND_ZERO = 1,
	D3DBLEND_ONE = 2,
	D3DBLEND_SRCCOLOR = 3,
	D3DBLEND_INVSRCCOLOR = 4,
	D3DBLEND_SRCALPHA = 5,
	D3DBLEND_INVSRCALPHA = 6,
	D3DBLEND_DESTALPHA = 7,
	D3DBLEND_INVDESTALPHA = 8,
	D3DBLEND_DESTCOLOR = 9,
	D3DBLEND_INVDESTCOLOR = 10,
	D3DBLEND_SRCALPHASAT = 11,
	D3DBLEND_BOTHSRCALPHA = 12,
	D3DBLEND_BOTHINVSRCALPHA = 13,
	D3DBLEND_FORCE_DWORD = 2147483647
};

typedef _D3DBLEND D3DBLEND;

enum _D3DTEXTUREBLEND {
	D3DTBLEND_DECAL = 1,
	D3DTBLEND_MODULATE = 2,
	D3DTBLEND_DECALALPHA = 3,
	D3DTBLEND_MODULATEALPHA = 4,
	D3DTBLEND_DECALMASK = 5,
	D3DTBLEND_MODULATEMASK = 6,
	D3DTBLEND_COPY = 7,
	D3DTBLEND_ADD = 8,
	D3DTBLEND_FORCE_DWORD = 2147483647
};

typedef _D3DTEXTUREBLEND D3DTEXTUREBLEND;

enum _D3DTEXTUREADDRESS {
	D3DTADDRESS_WRAP = 1,
	D3DTADDRESS_MIRROR = 2,
	D3DTADDRESS_CLAMP = 3,
	D3DTADDRESS_BORDER = 4,
	D3DTADDRESS_FORCE_DWORD = 2147483647
};

typedef _D3DTEXTUREADDRESS D3DTEXTUREADDRESS;

enum _D3DCULL {
	D3DCULL_NONE = 1,
	D3DCULL_CW = 2,
	D3DCULL_CCW = 3,
	D3DCULL_FORCE_DWORD = 2147483647
};

typedef _D3DCULL D3DCULL;

enum _D3DCMPFUNC {
	D3DCMP_NEVER = 1,
	D3DCMP_LESS = 2,
	D3DCMP_EQUAL = 3,
	D3DCMP_LESSEQUAL = 4,
	D3DCMP_GREATER = 5,
	D3DCMP_NOTEQUAL = 6,
	D3DCMP_GREATEREQUAL = 7,
	D3DCMP_ALWAYS = 8,
	D3DCMP_FORCE_DWORD = 2147483647
};

typedef _D3DCMPFUNC D3DCMPFUNC;

enum _D3DFOGMODE {
	D3DFOG_NONE = 0,
	D3DFOG_EXP = 1,
	D3DFOG_EXP2 = 2,
	D3DFOG_LINEAR = 3,
	D3DFOG_FORCE_DWORD = 2147483647
};

typedef _D3DFOGMODE D3DFOGMODE;

enum _D3DANTIALIASMODE {
	D3DANTIALIAS_NONE = 0,
	D3DANTIALIAS_SORTDEPENDENT = 1,
	D3DANTIALIAS_SORTINDEPENDENT = 2,
	D3DANTIALIAS_FORCE_DWORD = 2147483647
};

typedef _D3DANTIALIASMODE D3DANTIALIASMODE;

enum _D3DVERTEXTYPE {
	D3DVT_VERTEX = 1,
	D3DVT_LVERTEX = 2,
	D3DVT_TLVERTEX = 3,
	D3DVT_FORCE_DWORD = 2147483647
};

typedef _D3DVERTEXTYPE D3DVERTEXTYPE;

enum _D3DPRIMITIVETYPE {
	D3DPT_POINTLIST = 1,
	D3DPT_LINELIST = 2,
	D3DPT_LINESTRIP = 3,
	D3DPT_TRIANGLELIST = 4,
	D3DPT_TRIANGLESTRIP = 5,
	D3DPT_TRIANGLEFAN = 6,
	D3DPT_FORCE_DWORD = 2147483647
};

typedef _D3DPRIMITIVETYPE D3DPRIMITIVETYPE;

struct _D3DMATRIXMULTIPLY {
	D3DMATRIXHANDLE hDestMatrix;
	D3DMATRIXHANDLE hSrcMatrix1;
	D3DMATRIXHANDLE hSrcMatrix2;
};

typedef _D3DMATRIXMULTIPLY D3DMATRIXMULTIPLY;
typedef _D3DMATRIXMULTIPLY *LPD3DMATRIXMULTIPLY;

struct _D3DPROCESSVERTICES {
	DWORD dwFlags;
	WORD wStart;
	WORD wDest;
	DWORD dwCount;
	DWORD dwReserved;
};

typedef _D3DPROCESSVERTICES D3DPROCESSVERTICES;
typedef _D3DPROCESSVERTICES *LPD3DPROCESSVERTICES;

enum _D3DTRANSFORMSTATETYPE {
	D3DTRANSFORMSTATE_WORLD = 1,
	D3DTRANSFORMSTATE_VIEW = 2,
	D3DTRANSFORMSTATE_PROJECTION = 3,
	D3DTRANSFORMSTATE_FORCE_DWORD = 2147483647
};

typedef _D3DTRANSFORMSTATETYPE D3DTRANSFORMSTATETYPE;

enum _D3DLIGHTSTATETYPE {
	D3DLIGHTSTATE_MATERIAL = 1,
	D3DLIGHTSTATE_AMBIENT = 2,
	D3DLIGHTSTATE_COLORMODEL = 3,
	D3DLIGHTSTATE_FOGMODE = 4,
	D3DLIGHTSTATE_FOGSTART = 5,
	D3DLIGHTSTATE_FOGEND = 6,
	D3DLIGHTSTATE_FOGDENSITY = 7,
	D3DLIGHTSTATE_FORCE_DWORD = 2147483647
};

typedef _D3DLIGHTSTATETYPE D3DLIGHTSTATETYPE;

enum _D3DRENDERSTATETYPE {
	D3DRENDERSTATE_TEXTUREHANDLE = 1,
	D3DRENDERSTATE_ANTIALIAS = 2,
	D3DRENDERSTATE_TEXTUREADDRESS = 3,
	D3DRENDERSTATE_TEXTUREPERSPECTIVE = 4,
	D3DRENDERSTATE_WRAPU = 5,
	D3DRENDERSTATE_WRAPV = 6,
	D3DRENDERSTATE_ZENABLE = 7,
	D3DRENDERSTATE_FILLMODE = 8,
	D3DRENDERSTATE_SHADEMODE = 9,
	D3DRENDERSTATE_LINEPATTERN = 10,
	D3DRENDERSTATE_MONOENABLE = 11,
	D3DRENDERSTATE_ROP2 = 12,
	D3DRENDERSTATE_PLANEMASK = 13,
	D3DRENDERSTATE_ZWRITEENABLE = 14,
	D3DRENDERSTATE_ALPHATESTENABLE = 15,
	D3DRENDERSTATE_LASTPIXEL = 16,
	D3DRENDERSTATE_TEXTUREMAG = 17,
	D3DRENDERSTATE_TEXTUREMIN = 18,
	D3DRENDERSTATE_SRCBLEND = 19,
	D3DRENDERSTATE_DESTBLEND = 20,
	D3DRENDERSTATE_TEXTUREMAPBLEND = 21,
	D3DRENDERSTATE_CULLMODE = 22,
	D3DRENDERSTATE_ZFUNC = 23,
	D3DRENDERSTATE_ALPHAREF = 24,
	D3DRENDERSTATE_ALPHAFUNC = 25,
	D3DRENDERSTATE_DITHERENABLE = 26,
	D3DRENDERSTATE_ALPHABLENDENABLE = 27,
	D3DRENDERSTATE_FOGENABLE = 28,
	D3DRENDERSTATE_SPECULARENABLE = 29,
	D3DRENDERSTATE_ZVISIBLE = 30,
	D3DRENDERSTATE_SUBPIXEL = 31,
	D3DRENDERSTATE_SUBPIXELX = 32,
	D3DRENDERSTATE_STIPPLEDALPHA = 33,
	D3DRENDERSTATE_FOGCOLOR = 34,
	D3DRENDERSTATE_FOGTABLEMODE = 35,
	D3DRENDERSTATE_FOGTABLESTART = 36,
	D3DRENDERSTATE_FOGTABLEEND = 37,
	D3DRENDERSTATE_FOGTABLEDENSITY = 38,
	D3DRENDERSTATE_STIPPLEENABLE = 39,
	D3DRENDERSTATE_EDGEANTIALIAS = 40,
	D3DRENDERSTATE_COLORKEYENABLE = 41,
	D3DRENDERSTATE_BORDERCOLOR = 43,
	D3DRENDERSTATE_TEXTUREADDRESSU = 44,
	D3DRENDERSTATE_TEXTUREADDRESSV = 45,
	D3DRENDERSTATE_MIPMAPLODBIAS = 46,
	D3DRENDERSTATE_ZBIAS = 47,
	D3DRENDERSTATE_RANGEFOGENABLE = 48,
	D3DRENDERSTATE_ANISOTROPY = 49,
	D3DRENDERSTATE_FLUSHBATCH = 50,
	D3DRENDERSTATE_STIPPLEPATTERN00 = 64,
	D3DRENDERSTATE_STIPPLEPATTERN01 = 65,
	D3DRENDERSTATE_STIPPLEPATTERN02 = 66,
	D3DRENDERSTATE_STIPPLEPATTERN03 = 67,
	D3DRENDERSTATE_STIPPLEPATTERN04 = 68,
	D3DRENDERSTATE_STIPPLEPATTERN05 = 69,
	D3DRENDERSTATE_STIPPLEPATTERN06 = 70,
	D3DRENDERSTATE_STIPPLEPATTERN07 = 71,
	D3DRENDERSTATE_STIPPLEPATTERN08 = 72,
	D3DRENDERSTATE_STIPPLEPATTERN09 = 73,
	D3DRENDERSTATE_STIPPLEPATTERN10 = 74,
	D3DRENDERSTATE_STIPPLEPATTERN11 = 75,
	D3DRENDERSTATE_STIPPLEPATTERN12 = 76,
	D3DRENDERSTATE_STIPPLEPATTERN13 = 77,
	D3DRENDERSTATE_STIPPLEPATTERN14 = 78,
	D3DRENDERSTATE_STIPPLEPATTERN15 = 79,
	D3DRENDERSTATE_STIPPLEPATTERN16 = 80,
	D3DRENDERSTATE_STIPPLEPATTERN17 = 81,
	D3DRENDERSTATE_STIPPLEPATTERN18 = 82,
	D3DRENDERSTATE_STIPPLEPATTERN19 = 83,
	D3DRENDERSTATE_STIPPLEPATTERN20 = 84,
	D3DRENDERSTATE_STIPPLEPATTERN21 = 85,
	D3DRENDERSTATE_STIPPLEPATTERN22 = 86,
	D3DRENDERSTATE_STIPPLEPATTERN23 = 87,
	D3DRENDERSTATE_STIPPLEPATTERN24 = 88,
	D3DRENDERSTATE_STIPPLEPATTERN25 = 89,
	D3DRENDERSTATE_STIPPLEPATTERN26 = 90,
	D3DRENDERSTATE_STIPPLEPATTERN27 = 91,
	D3DRENDERSTATE_STIPPLEPATTERN28 = 92,
	D3DRENDERSTATE_STIPPLEPATTERN29 = 93,
	D3DRENDERSTATE_STIPPLEPATTERN30 = 94,
	D3DRENDERSTATE_STIPPLEPATTERN31 = 95,
	D3DRENDERSTATE_FORCE_DWORD = 2147483647
};

typedef _D3DRENDERSTATETYPE D3DRENDERSTATETYPE;

struct _D3DSTATE {
	union {
		D3DTRANSFORMSTATETYPE dtstTransformStateType;
		D3DLIGHTSTATETYPE dlstLightStateType;
		D3DRENDERSTATETYPE drstRenderStateType;
	};
	union {
		long unsigned int dwArg[1];
		float dvArg[1];
	};
};

typedef _D3DSTATE D3DSTATE;
typedef _D3DSTATE *LPD3DSTATE;

struct _D3DEXECUTEDATA {
	DWORD dwSize;
	DWORD dwVertexOffset;
	DWORD dwVertexCount;
	DWORD dwInstructionOffset;
	DWORD dwInstructionLength;
	DWORD dwHVertexOffset;
	D3DSTATUS dsStatus;
};

typedef _D3DEXECUTEDATA D3DEXECUTEDATA;
typedef _D3DEXECUTEDATA *LPD3DEXECUTEDATA;
typedef IDirectDraw *LPDIRECTDRAW;
typedef IDirectDraw2 *LPDIRECTDRAW2;
typedef IDirectDraw4 *LPDIRECTDRAW4;
typedef IDirectDrawSurface2 *LPDIRECTDRAWSURFACE2;
typedef IDirectDrawSurface3 *LPDIRECTDRAWSURFACE3;
typedef IDirectDrawSurface4 *LPDIRECTDRAWSURFACE4;
typedef IDirectDrawPalette *LPDIRECTDRAWPALETTE;
typedef IDirectDrawClipper *LPDIRECTDRAWCLIPPER;
typedef IDirectDrawColorControl *LPDIRECTDRAWCOLORCONTROL;
typedef IDirect3D *LPDIRECT3D;
typedef IDirect3D2 *LPDIRECT3D2;
typedef IDirect3D3 *LPDIRECT3D3;
typedef IDirect3DDevice *LPDIRECT3DDEVICE;
typedef IDirect3DDevice2 *LPDIRECT3DDEVICE2;
typedef IDirect3DDevice3 *LPDIRECT3DDEVICE3;
typedef IDirect3DExecuteBuffer *LPDIRECT3DEXECUTEBUFFER;
typedef IDirect3DLight *LPDIRECT3DLIGHT;
typedef IDirect3DMaterial *LPDIRECT3DMATERIAL;
typedef IDirect3DMaterial2 *LPDIRECT3DMATERIAL2;
typedef IDirect3DMaterial3 *LPDIRECT3DMATERIAL3;
typedef IDirect3DTexture *LPDIRECT3DTEXTURE;
typedef IDirect3DTexture2 *LPDIRECT3DTEXTURE2;
typedef IDirect3DViewport *LPDIRECT3DVIEWPORT;
typedef IDirect3DViewport2 *LPDIRECT3DVIEWPORT2;
typedef IDirect3DViewport3 *LPDIRECT3DVIEWPORT3;

struct EventRecord {
	SInt16 what;
	SInt32 message;
	SInt32 when;
	Point where;
	SInt16 modifiers;
};

typedef int PersonHandle;
typedef unsigned int SimTime;
typedef HRESULT DDDErr;
typedef int ptrdiff_t;

enum EObjMiscFlags {
	kHardToClick = 1,
	kClearAttributesWithTutorialReset = 2,
	kIsBelowFloor = 4
};

enum WorldTilePtDir {
	kNEworld = 7,
	kSWworld = 6,
	kNWworld = 5,
	kSEworld = 4,
	kNworld = 1,
	kSworld = 0,
	kEworld = 3,
	kWworld = 2
};

enum PersonAge {
	kPA_Adult = 0,
	kPA_Child = 1
};

enum PersonGender {
	kPG_Male = 0,
	kPG_Female = 1
};

typedef long long int long128;

struct ThreadParam {
	int status;
	void (*entry)(/* parameters unknown */);
	void *stack;
	int stackSize;
	void *gpReg;
	int initPriority;
	int currentPriority;
	u_int attr;
	u_int option;
	int waitType;
	int waitId;
	int wakeupCount;
};

struct SemaParam {
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	u_int attr;
	u_int option;
};

struct Neighborhood {
	__vtbl_ptr_type *$vf839;
	
	Neighborhood& operator=();
	Neighborhood();
protected:
	Neighborhood();
	/* vtable[1] */ virtual Neighborhood(Neighborhood*, int, void);
public:
	/* vtable[2] */ virtual c16* GetNeighborhoodName();
	/* vtable[3] */ virtual int GetHighestLevelCompleted();
	/* vtable[4] */ virtual void LevelComplete(Neighborhood*, int, void);
	/* vtable[5] */ virtual void SetFilename();
	/* vtable[6] */ virtual void GetFilename();
	/* vtable[7] */ virtual void GetDirectory();
	/* vtable[8] */ virtual void GetHousePath();
	/* vtable[9] */ virtual Int GetNumCharacters();
	/* vtable[10] */ virtual Int GetFamilyFriendsCount();
	/* vtable[11] */ virtual Int GetFriendCount();
	/* vtable[12] */ virtual Int GetFamilyNetWorth();
	/* vtable[13] */ virtual ErrType LoadHouse();
	/* vtable[14] */ virtual ErrType SaveHouse();
	/* vtable[15] */ virtual void UnloadHouse();
	/* vtable[16] */ virtual Int GetHouseNumber();
	/* vtable[17] */ virtual bool GetHouseFileInfo();
	/* vtable[18] */ virtual ErrType Save();
	/* vtable[19] */ virtual int GetHouseNumberForLevel();
	/* vtable[20] */ virtual SInt16 GetNeighborhoodVar();
	/* vtable[21] */ virtual void SetNeighborhoodVar();
	/* vtable[22] */ virtual void UpdateInstanceVisitorTypes();
	/* vtable[23] */ virtual int GetNumNeighborHouses();
	/* vtable[24] */ virtual int GetNeighborHouseByIndex();
	/* vtable[25] */ virtual void DoStream();
	/* vtable[26] */ virtual Neighbor* FindNeighborByID();
	/* vtable[27] */ virtual Neighbor* FindNeighborByGUID();
	/* vtable[28] */ virtual ObjSelector* GetNeighborSelector();
	/* vtable[29] */ virtual SInt16 GetNeighborData();
	/* vtable[30] */ virtual SInt16 GetNextNeighborID();
	/* vtable[31] */ virtual void LoadPersistentData();
	/* vtable[32] */ virtual void SavePersistentData();
	/* vtable[33] */ virtual void RelationshipsChanged();
	/* vtable[34] */ virtual void PostSim();
	/* vtable[35] */ virtual int GetNumFamilies();
	/* vtable[36] */ virtual Family* GetFamilyByIndex();
	/* vtable[37] */ virtual Family* GetFamily();
	/* vtable[38] */ virtual Family* GetFamilyInHouse();
	/* vtable[39] */ virtual Family* MakeNewFamily();
	/* vtable[40] */ virtual ErrType RemoveFamily();
	/* vtable[41] */ virtual ErrType AddToFamily();
	/* vtable[42] */ virtual ErrType RemoveFromFamily();
	/* vtable[43] */ virtual ErrType AddNewCharacter();
	/* vtable[44] */ virtual ErrType DeleteCharacter();
	/* vtable[45] */ virtual Int CountHouses();
	/* vtable[46] */ virtual ErrType MoveOut();
	/* vtable[47] */ virtual void PrepareAndTestLot();
	/* vtable[48] */ virtual void GetLotPosition();
	/* vtable[49] */ virtual int GetCurrentTutorialStage();
	/* vtable[50] */ virtual void TutorialCompleted(Neighborhood*, int, void);
	/* vtable[51] */ virtual void CancelTutorial();
	/* vtable[52] */ virtual bool GetShowTutorialArrow();
	/* vtable[53] */ virtual void SetShowTutorialArrow();
	/* vtable[54] */ virtual void AddFamilyHistoryStat();
	/* vtable[55] */ virtual NeighborhoodImpl* GetImpl();
	static Neighborhood* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct GameTime {
	GameTime& operator=();
	GameTime();
	GameTime();
	static Int CountDaysInMonth(/* parameters unknown */);
	static Int CountDaysInYear(/* parameters unknown */);
	static Int SubtractDates(/* parameters unknown */);
	static Int GetDaysSince1900(/* parameters unknown */);
};

struct cSimulator {
	__vtbl_ptr_type *$vf825;
	
	cSimulator& operator=();
	cSimulator();
protected:
	cSimulator();
	/* vtable[1] */ virtual cSimulator(cSimulator*, int, void);
public:
	static float GetMultiplierForSpeed(/* parameters unknown */);
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Simulate();
	/* vtable[4] */ virtual SInt16 GetGlobal();
	/* vtable[5] */ virtual void SetGlobal();
	/* vtable[6] */ virtual void SetSpeed();
	/* vtable[7] */ virtual SimSpeed GetSpeed();
	/* vtable[8] */ virtual void Pause();
	/* vtable[9] */ virtual void Resume();
	/* vtable[10] */ virtual bool IsPaused();
	/* vtable[11] */ virtual bool IsStopped();
	/* vtable[12] */ virtual Mode GetMode();
	/* vtable[13] */ virtual void SetMode();
	/* vtable[14] */ virtual Boolean DoCommand();
	/* vtable[15] */ virtual void DoStream();
	/* vtable[16] */ virtual SInt32 GetFunds();
	/* vtable[17] */ virtual void Spend();
	/* vtable[18] */ virtual void GetTodaysExpenses();
	/* vtable[19] */ virtual void GetPreviousExpenses();
	/* vtable[20] */ virtual void GetExpensesHistory();
	/* vtable[21] */ virtual int GetDaysRunning();
	/* vtable[22] */ virtual void SetFunds(cSimulator*, int, void);
	/* vtable[23] */ virtual void ClearHistory();
	/* vtable[24] */ virtual void SetCurrentHour(cSimulator*, int, void);
	/* vtable[25] */ virtual SInt32 GetTicks();
	/* vtable[26] */ virtual TimeOfDay GetTimeOfDay();
	/* vtable[27] */ virtual void SetTimeOfDay();
	/* vtable[28] */ virtual bool GetTutorialOn();
	/* vtable[29] */ virtual Int GetLotValue();
	/* vtable[30] */ virtual void SetLotValue(cSimulator*, int, void);
	/* vtable[31] */ virtual Int GetArchValue();
	/* vtable[32] */ virtual void SetArchValue(cSimulator*, int, void);
	/* vtable[33] */ virtual Int GetObjectsValue();
	/* vtable[34] */ virtual void SetObjectsValue(cSimulator*, int, void);
	/* vtable[35] */ virtual SimLoopProbe* GetProbe();
	/* vtable[36] */ virtual void SetProbe();
	/* vtable[37] */ virtual void RestoreTrueDt();
	static cSimulator* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct cSoundPlayer {
private:
	bool fInitialized;
	cIGZSndSys *fTheSystem;
	cBoxX *mpBoxX;
	bool m_SoundOn;
	
public:
	cSoundPlayer& operator=();
	cSoundPlayer();
private:
	bool PlayBySource(/* a1 5 */ EventMapping *sound, /* a2 6 */ SInt16 sourceID);
public:
	cSoundPlayer();
	cSoundPlayer(cSoundPlayer*, int, void);
	void Initialize();
	void Shutdown();
	void Update();
	void EnableSound(/* a1 5 */ bool bOn);
	void EnableMusic(/* a1 5 */ bool bOn);
	void SetGameMode(/* s1 17 */ eMode mode);
	bool PlayObjectSnd(/* a1 5 */ SoundInfo *sound, /* a2 6 */ SInt16 sourceID);
	bool PlayObjectSnd();
	TreeReturnCode PlayObjectSnd();
	int GetFXVolume();
	void SetFXVolume(/* a1 5 */ int lVolume);
	int GetMusicVolume();
	void SetMusicVolume(/* a1 5 */ int lVolume);
	int GetVoxVolume();
	void SetVoxVolume(/* a1 5 */ int lVolume);
	void QuietBySourceID(/* a1 5 */ Int sourceID);
	void QuietAll();
	void PauseSounds();
	void ResumeSounds();
	void NotifyViewChange();
	void NotifyHourChange();
};

struct TLinkedList<ENodeListNode,4,8> {
protected:
	ENodeListNode *m_pHead;
	ENodeListNode *m_pTail;
	
public:
	TLinkedList<ENodeListNode,4,8>& operator=();
	TLinkedList();
	TLinkedList();
	static ENodeListNode*& Last(/* parameters unknown */);
	static ENodeListNode*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	ENodeListNode* Head();
	ENodeListNode* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct EDLEntryCommand2U32 {
	unsigned int dw[2];
};

struct EDLEntryCommandU32 {
	u8 command;
	unsigned char db[3];
	unsigned int dw[1];
};

struct EDLEntryCommandF32 {
	u8 command;
	unsigned char db[3];
	float df[1];
};

struct EDLEntryCommandU8 {
	u8 command;
	unsigned char db[3];
	unsigned char db2[4];
};

struct EDLEntryCommandU8andU32 {
	u8 command;
	unsigned char db[3];
	unsigned int dw[1];
};

struct EDLEntryCommandU16andU32 {
	u8 command;
	unsigned char db[1];
	short unsigned int dn[1];
	unsigned int dw[1];
};

typedef union {
	u64 d_u64;
	unsigned int d_u32[2];
	float d_f32[2];
	short unsigned int d_u16[4];
	unsigned char d_u8[8];
} EDLEntry64;

struct TNodeList<EDL *> : ENodeList {
	TNodeList(TNodeList<EDL *>*, int, void);
	TNodeList();
	TNodeList();
	static EDL* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EDL *>& operator=();
	void MoveContents();
};

struct EDL {
protected:
	EAllocGroup m_allocGroup;
	EAllocGroup m_flushableAllocGroup;
	TNodeList<ETexture *> m_textureRefs;
	TNodeList<int> m_texturePasses;
	TNodeList<EDL *> m_dlRefs;
	EDLEntry *m_pStart;
	int m_type;
	int m_branchDepth;
	int m_nVerts;
	int m_stripSum;
	int m_nStrips;
	int m_firstMPG;
	int m_lastMPG;
	int m_nMPGLoads;
public:
	__vtbl_ptr_type *$vf1280;
	
	EDL& operator=();
	EDL();
protected:
	EDL();
	/* vtable[1] */ virtual EDL(EDL*, int, void);
public:
	EDLEntry* GetStart();
	void* Alloc();
	void AllocExternal();
	void* AllocFlushable();
	void AllocFlushableExternal();
	void Validate();
	int GetVertCount();
	int GetMemUsage();
	float GetAverageStripLength();
protected:
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct __exception {
	int type;
	char *name;
	double arg1;
	double arg2;
	double retval;
	int err;
};

struct TLinkedList<ERedBlackTreeNode,12,16> {
protected:
	ERedBlackTreeNode *m_pHead;
	ERedBlackTreeNode *m_pTail;
	
public:
	TLinkedList<ERedBlackTreeNode,12,16>& operator=();
	TLinkedList();
	TLinkedList();
	static ERedBlackTreeNode*& Last(/* parameters unknown */);
	static ERedBlackTreeNode*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	ERedBlackTreeNode* Head();
	ERedBlackTreeNode* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

typedef int qword[4];
typedef int sceVu0IVECTOR[4];

struct EByteColor {
	unsigned char d[4];
	
	EByteColor& operator=();
	EByteColor();
	EByteColor();
	EByteColor();
	u8 operator[]();
	u8& operator[]();
	u8* operator unsigned char *();
	bool operator==();
	bool operator!=();
	EByteColor operator+();
	EByteColor operator-();
	EByteColor& operator+=();
	EByteColor operator*();
	EByteColor& operator*=();
	EByteColor operator/();
	EByteColor& operator/=();
	EByteColor& Set();
};

typedef TRect<int> EIntRect;

struct EGlobalManager {
protected:
	static bool m_startupComplete;
	static bool m_shutdownComplete;
	static EGMClientData m_clients[32];
	static int m_nClients;
	static int m_nStartedUpClients;
	
public:
	EGlobalManager& operator=();
	EGlobalManager();
protected:
	EGlobalManager();
public:
	static bool Startup(/* parameters unknown */);
	static void Shutdown(/* parameters unknown */);
protected:
	static void Register(/* parameters unknown */);
};

struct EGlobalManagerClient {
	__vtbl_ptr_type *$vf1727;
	
	EGlobalManagerClient& operator=();
	EGlobalManagerClient();
	EGlobalManagerClient();
	/* vtable[1] */ virtual EGlobalManagerClient(EGlobalManagerClient*, int, void);
	bool Startup();
	void Shutdown();
protected:
	/* vtable[2] */ virtual bool ManagedStartup();
	/* vtable[3] */ virtual void ManagedShutdown();
};

struct TRect<float> {
	float left;
	float top;
	float right;
	float bottom;
	
	TRect();
	TRect();
	TRect();
	TRect<float>& operator=();
	bool operator==();
	bool operator!=();
	bool Overlaps();
	float Width();
	float Height();
	void Set();
	void Zero();
};

struct TRedBlackTree<unsigned int,EResource *> : ERedBlackTree {
	TRedBlackTree<unsigned int,EResource *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,EResource *>*, int, void);
	EResource* operator[]();
	EResource*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EResource* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EChecksum {
protected:
	static unsigned int m_table[256];
	
public:
	EChecksum& operator=();
	EChecksum();
	EChecksum();
	static u32 Compute(/* parameters unknown */);
	static u32 Compute(/* parameters unknown */);
	static u32 ComputeNoCase(/* parameters unknown */);
	static u32 ComputeSymbol(/* parameters unknown */);
};

struct EStorable {
	static ETypeInfo m_typeInfo;
	__vtbl_ptr_type *$vf1514;
	
	EStorable& operator=();
	EStorable();
	EStorable();
	static EStorable* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	/* vtable[6] */ virtual EStorable(EStorable*, int, void);
	EStorable* CreateCopy();
	void AssertValid(/* a1 5 */ ETypeInfo *pType);
	bool IsDerivedFrom(/* s0 16 */ ETypeInfo *pType);
	bool IsExactType(/* s0 16 */ ETypeInfo *pType);
	EStorable* DynamicCast(/* a1 5 */ ETypeInfo *pType);
	/* vtable[7] */ virtual void Read(/* a1 5 */ EStream &s);
	/* vtable[8] */ virtual void Write(/* a1 5 */ EStream &s);
};

struct TLinkedList<EHashTableNode,0,4> {
protected:
	EHashTableNode *m_pHead;
	EHashTableNode *m_pTail;
	
public:
	TLinkedList<EHashTableNode,0,4>& operator=();
	TLinkedList();
	TLinkedList();
	static EHashTableNode*& Last(/* parameters unknown */);
	static EHashTableNode*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EHashTableNode* Head();
	EHashTableNode* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct EFontKerningPair {
	u32 m_first;
	u32 m_second;
	
	EFontKerningPair& operator=();
	EFontKerningPair();
	EFontKerningPair();
	u32 operator unsigned int();
};

struct THashTable<unsigned int,EFontCharacter *> : EHashTable {
	THashTable<unsigned int,EFontCharacter *>& operator=();
	THashTable();
	THashTable();
	THashTable(THashTable<unsigned int,EFontCharacter *>*, int, void);
	EFontCharacter* operator[]();
	EFontCharacter*& operator[]();
	HTIterator Insert();
	HTIterator Find();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	HTIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EFontCharacter* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TNodeList<EFontSize *> : ENodeList {
	TNodeList(TNodeList<EFontSize *>*, int, void);
	TNodeList();
	TNodeList();
	static EFontSize* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EFontSize *>& operator=();
	void MoveContents();
};

struct THashTable<unsigned int,int> : EHashTable {
	THashTable<unsigned int,int>& operator=();
	THashTable();
	THashTable();
	THashTable(THashTable<unsigned int,int>*, int, void);
	int operator[]();
	int& operator[]();
	HTIterator Insert();
	HTIterator Find();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	HTIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static int GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct ECheatVariables {
	bool SoundOn;
	bool FreeItems;
	bool MemoryDisplay;
	bool UnlockAllItems;
	bool UnlockPartyMotel;
	bool UnlockFreeplayMode;
	bool DebugInteractions;
	bool AnimationNameDisplay;
	bool DispFPS;
	bool ArtsendDebug;
	bool CameraTiltUnlocked;
	bool CameraFirstPersonUnlocked;
	bool gAllowMovingAllObjects;
	bool UseBigHead;
	bool RainbowSkin;
	bool SmurfMode;
	bool bMenuEnabled;
	u8 TutorialStage;
	u8 TutorialHouseNum;
	u8 cam_zoom_min;
	u8 cam_zoom_max;
	u8 cam_fov;
	u8 ambientIntensity;
	u8 directionIntensity;
	u8 cameraIntensity;
	u8 directionX;
	u8 directionY;
	u8 directionZ;
	u8 LocTestEnabled;
	u8 ResourceTestEnabled;
	char EXEName[32];
};

struct EGlobal {
	EGameStateId _curGameState;
	float _EHouse_levelrad;
	float _global_house_offx;
	float _global_house_offy;
	bool _bGamePaused;
	bool _bForceCtrl2Connect;
	u8 _VanityMirrorState;
	u8 _UnlockDialogState;
	u8 _HighScoreDialogState;
	u32 m_nCreditMode;
	ERLevel *_pNeighborhoodTerrain;
	cXPerson *_pSelectedSims[2];
	ESimsCursor *_pCursor[2];
	EHouse *_pCurHouse;
	ELights *_pCurLights;
	int _nCurLights;
	int m_renderPass;
	ESimsCam *_pCurCam;
	EPanel *_pPanel;
	EWardrobeMenu *_pWardrobe;
	EVanityMirrorMenu *_pVanityMirror;
	FloorSet *_pFloorSet;
	WallSet *_pWallSet;
	FenceSet *_pFenceSet;
	EUnlockDialog *_pUnlockDialog;
	EHighScoreDialog *_pHighScoreDialog;
	ERQuickdata *m_pUiData;
	ERQuickdata *m_pSpriteIdToResId;
	ERQuickdata *m_pTileData;
	ERQuickdata *m_waveDataTable;
	ERShader *m_pWhiteShader;
	ERShader *m_pBlackShader;
	ERFont *m_pFont;
	ERFont *m_pFontShadowed;
	EDialog *m_pDialog;
	E2PDialog *m_p2PDialog[2];
	EMessageDialog *m_pMessDialogs[2];
	Controllpad *m_pCtrlPad;
	ESpriteRenderMan *m_pSpriteMan;
	ERDataset *m_pDataset;
	EPictureInPicture *m_pPiP;
	EVibrate *m_pVibrate;
	ECheats *m_pCheats;
	ESimsMemCard *m_pMemCard;
	OptionsRecon *m_pOptionsRecon;
	bool m_bCtrl2Detected;
	int m_whichPlayerPaused;
	float m_vCameraRotDegrees;
	ECheatVariables Cheats;
	int m_FamilyToMoveIn;
	u16 m_nUnlockBitField;
	u8 ChallengeModeHouseNum;
	bool m_bGotoNeighborhoodMode;
	bool m_bGotoStartMode;
	bool m_bUseCurrentNeighborhood;
	int m_NeighborhoodHouseNum;
	bool m_bSetNeighborhoodAsStoryMode;
	bool m_bStoryModeTransferHouses;
	bool m_bStoryModeDoSubstitutionOnTransfer;
	int m_StoryModeFamilyToMoveInBehind;
	int m_StoryModeMoveIntoHouseNum;
	bool m_bDisplayStoryModeTransitionScreen;
	c16 *m_pStoryModeTransitionText;
	ERShader *m_pStoryModeTransitionShader;
	bool m_bStoryModeStart;
	bool m_bStoryModeWonGame;
	bool m_bDisplayGenericTransitionScreen;
	bool m_bDisplayingChallengeModeScreen;
	float m_GenTransitionLoadPercent;
	ERShader *m_pGenericTransShader;
	bool m_bLanguageSelected;
	s32 m_nChallengePlayerNum;
	s32 m_nChallengeScore;
	s32 m_nChallengeComponent1;
	s32 m_nChallengeComponent2;
	s32 m_nChallengeComponent3;
	s32 m_nChallengeComponent4;
	s32 m_nUnlockCode;
	s32 m_nUnlockPersonId;
	s32 m_nUnlockGuid;
	bool m_bResetBackgroundColor;
	bool m_bListenToController;
	__vtbl_ptr_type *$vf849;
	
	EGlobal& operator=();
	EGlobal();
	EGlobal();
	/* vtable[1] */ virtual EGlobal(EGlobal*, int, void);
	/* vtable[2] */ virtual bool TransformToScreen(/* s1 17 */ EVec3 &vWorldIn, /* s0 16 */ EVec2 &vScreenOut);
	/* vtable[3] */ virtual void Message(/* a1 5 */ void *pPram, /* a2 6 */ u32 messageId);
	/* vtable[4] */ virtual void GetCursorPosAsFtile(/* a1 5 */ FTilePt &pOut);
	/* vtable[5] */ virtual void DestroyInstance(/* s2 18 */ IBaseSimInstance **ppInstance);
	/* vtable[6] */ virtual void AllocInstance(/* s0 16 */ cXObject *pObject);
	/* vtable[7] */ virtual void AllocPersonInstance(/* s2 18 */ cXPerson *pPerson);
	/* vtable[8] */ virtual ESpriteRender* AllocSpriteRenderer(/* a1 5 */ cXObject *pSprite);
	/* vtable[9] */ virtual void FreeSpriteRenderer(/* a1 5 */ cXObject *pSprite);
	/* vtable[10] */ virtual void UpdateSpriteRenderer(/* a1 5 */ SpriteSlot *pSprite);
	/* vtable[11] */ virtual SpriteIdToResIdNode* ConvertSpriteIdToResId(/* s0 16 */ u32 id);
	/* vtable[12] */ virtual ECntrMdlLkupTable& GetCounterModelTable();
	/* vtable[13] */ virtual SAnimator* CreateAnimator();
	/* vtable[14] */ virtual void SetSelectedPerson(/* s4 20 */ u32 player, /* s3 19 */ cXPerson *newSelection, /* -0xb0(caller sp) */ bool reverse);
	/* vtable[15] */ virtual void AdvanceSelectedPerson(/* s6 22 */ u32 player);
	/* vtable[16] */ virtual void ReverseSelectedPerson(/* s7 23 */ u32 player);
	/* vtable[17] */ virtual void LoadSelectorData(/* a1 5 */ ObjSelector *sel, /* a2 6 */ bool bWait);
	/* vtable[18] */ virtual void UnloadSelectorData(/* a1 5 */ ObjSelector *sel);
	/* vtable[19] */ virtual bool CreateThumbnail(/* a1 5 */ ObjSelector *sel);
	/* vtable[20] */ virtual bool IsTwoPlayer();
	/* vtable[21] */ virtual bool IsObjectInUseByPlayer(/* a1 5 */ int which, /* s3 19 */ cXObject *pObject);
	/* vtable[22] */ virtual void RecalcFloor();
	/* vtable[23] */ virtual void RecalcWalls();
	/* vtable[24] */ virtual void RecalcObjects();
	/* vtable[25] */ virtual void RecalcHouse();
	/* vtable[26] */ virtual E3DWindow* GetWin();
	/* vtable[27] */ virtual void SelectWin(/* a1 5 */ ERC *prc);
	/* vtable[28] */ virtual ESimsCam* GetCam();
	/* vtable[29] */ virtual void SetCam(/* a1 5 */ ESimsCam *cam);
	/* vtable[30] */ virtual bool CreateWardrobe(/* s4 20 */ cXObject *pWorldObject, /* s0 16 */ cXPerson *pSim);
	/* vtable[31] */ virtual bool CreateVanityMirror(/* s4 20 */ cXObject *pWorldObject, /* s0 16 */ cXPerson *pSim);
	/* vtable[32] */ virtual void CreateUnlockDialog(/* a1 5 */ s32 guid);
	/* vtable[33] */ virtual void CreateNameEntry(/* s1 17 */ s32 nNewScoreIndex, /* s2 18 */ s32 nChallengePlayerNum, /* s3 19 */ s32 nChallengeScore);
	/* vtable[34] */ virtual void DoModelessMessage(/* v1 3 */ int player_id, /* s2 18 */ StackElem *elem, /* s3 19 */ DialogParam *dialogParam, /* a1 5 */ cXObject *pObj, /* t1 9 */ ObjSelector *pSel);
	/* vtable[35] */ virtual void SwapSelectedSims();
	void Reset();
	void SetDefaults();
	void LoadIntroRequirements();
	void LoadPreGlobalRequirements();
	void LoadNeigborhoodTerrain();
	void UnloadNeigborhoodTerrain();
	void SetCurHouse(/* s0 16 */ int house);
	void ClearCurHouse();
	cXPerson* GetOtherPlayersSim(/* a1 5 */ u32 idx);
	void TransformToWorld(/* s2 18 */ EVec2 &vScreenIn, /* s1 17 */ EVec3 &vWorldOut);
	void PlaceObjectInHouse(/* a1 5 */ cXObject *pOb);
	void PickUpInHouseObject(/* a1 5 */ cXObject *pOb);
	c16* GetUiString(/* s0 16 */ char *pRef);
	c16* GetHelpString(/* s0 16 */ char *pRef);
	c16* GetCreateASimString(/* s0 16 */ char *pRef);
	c16* GetLiveModeMenuUIString(/* s0 16 */ char *pRef);
	c16* GetNeighborhoodModeString(/* s0 16 */ char *pRef);
	c16* GetMemCardUIString(/* s0 16 */ char *pRef);
	c16* GetCreditUIStrings(/* s0 16 */ char *pRef);
	c16* GetStoryModeIntroScreenText(/* s0 16 */ char *pRef);
	c16* GetStoryModeOutroScreenText(/* s0 16 */ char *pRef);
	u32 GetStoryModeIntroScreenShaderId(/* s0 16 */ char *pRef);
	u32 GetStoryModeOutroScreenShaderId(/* s0 16 */ char *pRef);
	c16* GetMainMenuUIString(/* s0 16 */ char *pRef);
	c16* GetUserCharacterArray(/* a1 5 */ u32 nIndex);
	u32 GetNumUserCharacters(/* a1 5 */ u32 nIndex);
	int ConvertUnicodeToShiftJIS(/* s0 16 */ c16 *pInput, /* s1 17 */ c16 *pOutput, /* s2 18 */ u32 bufferSize);
	FloorSet& GetFloorSet();
	WallSet& GetWallSet();
	FenceSet& GetFenceSet();
	int GetFloorIndex(/* a1 5 */ FloorTile *pTile);
	int GetWallIndex(/* a1 5 */ WallTile *pTile);
	int GetFenceIndex(/* a1 5 */ FenceData *pTile);
	/* vtable[36] */ virtual void BeginSaveGame();
	/* vtable[37] */ virtual void EndSaveGame();
	/* vtable[38] */ virtual bool CheckForZeroExtentOverride(/* s0 16 */ cXObject *pOb);
	/* vtable[39] */ virtual bool CheckForZeroExtentOverride();
	/* vtable[40] */ virtual s32 CallUnlockItems(/* a1 5 */ u32 code, /* a2 6 */ u32 nPersonId, /* a3 7 */ u16 *pnBitCode);
	/* vtable[41] */ virtual void CallTestUnlocked(/* a1 5 */ u32 code, /* a2 6 */ u16 *pnBitCode);
	/* vtable[42] */ virtual s32 CallNewScore(/* a1 5 */ s16 nPlayerNum, /* a2 6 */ s16 nScore, /* a3 7 */ s16 nComponent1, /* t0 8 */ s16 nComponent2, /* t1 9 */ s16 nComponent3, /* t2 10 */ s16 nComponent4);
	bool IsTransitionStoryMode();
	void HotSyncLighting();
	ERShader* GetBuyBuildDPadUp();
	ERShader* GetBuyBuildDPadDown();
	ERShader* GetBuyBuildDPadLeft();
	ERShader* GetBuyBuildDPadRight();
	void AddParticleEffectToOrphanMan(/* s0 16 */ ERParticleType *pType, /* a2 6 */ EIParticleEmit *pEffect);
	void ProcessCheatCode(/* s4 20 */ c16 *String);
	bool IsChallangeMode();
	bool IsBuildHouseMode();
	void SetBackgroundColor();
	bool ListenForController();
	void SetListenFlag(/* a1 5 */ bool bFlag);
};

typedef TNodeList<EGameState *> EGameStateList;

struct TNodeList<EGameState *> : ENodeList {
	TNodeList(TNodeList<EGameState *>*, int, void);
	TNodeList();
	TNodeList();
	static EGameState* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EGameState *>& operator=();
	void MoveContents();
};

struct EGameStateMan {
	bool m_bDrawBlackOneFrame;
protected:
	NLIterator m_nliCurGame;
	EGameStateList m_gameStateList;
	EGameStateId m_NextState;
	EUIObjectMover m_fadeClock;
	bool m_bInfadeout;
	bool m_bInfadein;
	float m_fadeAlpha;
	bool m_bStateChanged;
	EVec2 m_vBarPos;
	float m_fBarWidth;
	float m_fHighestProgress;
	EWindow *m_pClipWin;
	ERShader *m_BarLeft;
	ERShader *m_BarMiddle;
	ERShader *m_BarRight;
	ERShader *m_BarHighlightLeft;
	ERShader *m_BarHighlightMiddle;
	ERShader *m_BarHighlightRight;
	ERShader *m_Glow;
	
public:
	EGameStateMan& operator=();
	EGameStateMan();
	EGameStateMan();
	EGameStateMan(EGameStateMan*, int, void);
	void Update();
	void Draw(/* s2 18 */ ERC *prc);
	void BeginFadeout(/* a1 5 */ EGameStateId newState);
	void DoFade(/* s1 17 */ ERC *prc);
	void BeginFadeIn();
	void SetState(/* s3 19 */ EGameStateId newState);
	void AddState(/* s0 16 */ EGameState *pState);
	void SoftReset();
	void DeleteAllStates();
	EGameStateId GetState();
	void DrawStoryModeTransScreen(/* s2 18 */ ERC *prc, /* s1 17 */ bool DrawText);
	void DrawGenericTransitionScreen(/* s0 16 */ ERC *prc);
	void DrawLoadingBar(/* s3 19 */ ERC *prc);
	bool AreFadingIn();
	void DrawNoCtrlMessage(/* fp 30 */ ERC *prc, /* s2 18 */ c16 *messageId);
};

struct TNodeList<EUIObjectNode *> : ENodeList {
	TNodeList(TNodeList<EUIObjectNode *>*, int, void);
	TNodeList();
	TNodeList();
	static EUIObjectNode* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EUIObjectNode *>& operator=();
	void MoveContents();
};

struct EUIObjectNode {
	static float SAFE_LEFT;
	static float SAFE_TOP;
	static float SAFE_RIGHT;
	static float SAFE_BOTTOM;
protected:
	EUIObjectNodeList m_ChildList;
	EUIObjectNode *m_pParent;
	NLIterator m_listIr;
	u32 m_flags;
	u32 m_id;
	EVec3 m_WDH;
	EVec3 m_pos;
	int m_activeCtrl;
	EUiMonitorAutoRepeat *m_pAutoRepeatMonitor;
	static UISfxFunPtr m_uiSfxSelect;
	static UISfxFunPtr m_uiSfxBack;
	static UISfxFunPtr m_uiSfxNext;
	static UISfxFunPtr m_uiSfxError;
public:
	__vtbl_ptr_type *$vf2489;
	
	EUIObjectNode& operator=();
	EUIObjectNode();
	EUIObjectNode();
	/* vtable[1] */ virtual EUIObjectNode(EUIObjectNode*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(/* a1 5 */ ERC *prc);
	/* vtable[4] */ virtual void SetPos(/* v0 2 */ EVec2 &pos);
	void SetPos();
	/* vtable[5] */ virtual void SetBoxDims(/* a1 5 */ EVec2 &dims);
	/* vtable[6] */ virtual void SetBoxDims();
	/* vtable[7] */ virtual void Message(/* a1 5 */ EUIObjectNode *pChild, /* a2 6 */ u32 messId);
	/* vtable[8] */ virtual void StateChanged(/* a1 5 */ u32 state, /* a2 6 */ bool on);
	/* vtable[9] */ virtual void OnButtonRepeat(/* a1 5 */ int buttonId);
	/* vtable[10] */ virtual void OnStickRepeat(/* a1 5 */ int stickId, /* a2 6 */ int axisId, /* a3 7 */ int direction);
	void SetActiveController(/* s1 17 */ u32 ctrl);
	void SetName(/* a1 5 */ EString &szId);
	char* GetName();
	void SetId(/* a1 5 */ u32 id);
	u32 GetFlags();
	bool HasFlags(/* a1 5 */ u32 mask);
	void SetFlags(/* s2 18 */ u32 mask, /* s0 16 */ bool on);
	void SetFlagsPropigate(/* s1 17 */ u32 mask, /* s2 18 */ bool on);
	bool GetVis();
	bool GetActive();
	bool GetSelected();
	bool GetSelectable();
	/* vtable[11] */ virtual EVec3& GetPos();
	int GetActiveCtrl();
	int GetId();
	EVec3& GetParentPos();
	float GetHeight();
	float GetWidth();
	float GetDepth();
	EVec3& GetWDH();
	EUIObjectNode* GetParent();
	void SetParent(/* a1 5 */ EUIObjectNode *pChild);
	void SetIterator(/* a1 5 */ EUIObjectNode *pChild, /* a2 6 */ NLIterator itr);
	void DrawChildren(/* s1 17 */ ERC *prc);
	EUIObjectNode* FindChildByName();
	EUIObjectNode* FindChildById(/* a1 5 */ u32 Id);
	/* vtable[12] */ virtual void AddChild(/* s0 16 */ EUIObjectNode *pChild);
	/* vtable[13] */ virtual void RemoveChild(/* s0 16 */ EUIObjectNode *pChild);
	void MarkChildForRemoval(/* a1 5 */ EUIObjectNode *pChild);
	void RemoveAllChildren();
	void RemoveMarkedChildren();
	bool NotHead(/* a1 5 */ EUIObjectNode *pChild);
	bool NotTail(/* a1 5 */ EUIObjectNode *pChild);
	bool IsChild(/* a1 5 */ EUIObjectNode *pChild);
	EUIObjectNode* GetHead();
	EUIObjectNode* GetTail();
	EUIObjectNode* GetLast(/* a1 5 */ EUIObjectNode *pChild);
	EUIObjectNode* GetNext(/* a1 5 */ EUIObjectNode *pChild);
	NLIterator GetNLI();
	static void BindSelect(/* parameters unknown */);
	static void BindBack(/* parameters unknown */);
	static void BindNext(/* parameters unknown */);
	static void BindError(/* parameters unknown */);
	static void UnBindSelect(/* parameters unknown */);
	static void UnBindBack(/* parameters unknown */);
	static void UnBindNext(/* parameters unknown */);
	static void UnBindError(/* parameters unknown */);
	static void PlaySelect(/* parameters unknown */);
	static void PlayBack(/* parameters unknown */);
	static void PlayNext(/* parameters unknown */);
	static void PlayError(/* parameters unknown */);
};

typedef _E_CtrlToPlayerAssoc E_CtrlToPlayerAssoc;

struct _EBtnToCmdAssoc {
	u32 buttonIndex;
	u32 commandIndex;
};

typedef _EBtnToCmdAssoc EBtnToCmdAssoc;

struct EControllerContext {
protected:
	EControllerData m_controllerData;
	EBtnToCmdAssoc *m_buttonToCommand;
	
public:
	EControllerContext& operator=();
	EControllerContext();
	EControllerContext();
	EControllerContext(EControllerContext*, int, void);
	void SetControllerData(/* a1 5 */ EControllerData &dataIn);
	EControllerData& GetControllerData();
	void SetCommandMap();
	float GetStick(/* a1 5 */ int stickIndex, /* a2 6 */ int axisIndex);
	float GetLastStick(/* a1 5 */ int stickIndex, /* a2 6 */ int axisIndex);
	u32 GetButtonsDown(/* a1 5 */ int mask);
	u32 GetButtonsUp(/* a1 5 */ int mask);
	u32 GetLastButtonsDown(/* a1 5 */ int mask);
	u32 GetLastButtonsUp(/* a1 5 */ int mask);
	u32 GetButtonsPressed(/* a1 5 */ int mask);
	u32 GetButtonsReleased(/* a1 5 */ int mask);
	u32 GetCommandsDown(/* a1 5 */ int mask);
	u32 GetCommandsUp(/* a1 5 */ int mask);
	u32 GetLastCommandsDown(/* a1 5 */ int mask);
	u32 GetLastCommandsUp(/* a1 5 */ int mask);
	u32 GetCommandsPressed(/* a1 5 */ int mask);
	u32 GetCommandsReleased(/* a1 5 */ int mask);
	bool IsStable();
	bool IsConnected();
	void Clear(/* a1 5 */ bool bConnected);
	int GetPressedCount(/* a1 5 */ int buttonId);
	int GetReleasedCount(/* a1 5 */ int buttonId);
	bool WasPressedFirst(/* a1 5 */ int buttonId);
	u32 BuildButtonMask(/* a1 5 */ u32 commandMask);
	u32 BuildCommandMask(/* a1 5 */ u32 buttonMask);
	int BitToIndex();
	u32 IndexToBit();
};

struct EController {
protected:
	int m_id;
	int m_status;
	EControllerData m_controllerData;
	int m_stackTop;
	EControllerContext *m_pTopContext;
	EControllerContext m_contextStack[32];
	bool m_bAxesSwapped[2];
	int m_axisDirection[2][2];
	_EBtnToCmdAssoc m_buttonToCommand[16];
public:
	__vtbl_ptr_type *$vf2597;
	
	EController& operator=();
	EController();
	EController();
	/* vtable[1] */ virtual EController(EController*, int, void);
	/* vtable[2] */ virtual void RefreshContext();
	EControllerContext* LockFocus(/* a1 5 */ bool bCopyContext);
	void ReleaseFocus(/* a1 5 */ bool bCopyContext);
	void ClearAllData();
	void OverrideData(/* a1 5 */ EControllerData &newData);
	void OverrideStatus(/* a1 5 */ int newStatus);
	void SwapAxes(/* a1 5 */ int stickIndex);
	void InvertAxis(/* a1 5 */ int stickIndex, /* a2 6 */ int axisIndex);
	bool IsStable();
	bool IsConnected();
	bool IsConnectedAndSupported();
	int GetStatus();
	void MapCommandToButton(/* a1 5 */ u32 button, /* a2 6 */ u32 command);
	float GetStick(/* a1 5 */ char axis, /* a2 6 */ int which);
	float GetLastStick(/* s1 17 */ int stickIndex, /* s0 16 */ int axisIndex);
	u32 GetButtonsDown(/* a1 5 */ int mask);
	u32 GetButtonsUp(/* a1 5 */ int mask);
	u32 GetLastButtonsDown(/* a1 5 */ int mask);
	u32 GetLastButtonsUp(/* a1 5 */ int mask);
	u32 GetButtonsPressed(/* a1 5 */ int mask);
	u32 GetButtonsReleased(/* a1 5 */ int mask);
	int GetPressedCount(/* a1 5 */ int buttonId);
	int GetReleasedCount(/* a1 5 */ int buttonId);
	bool WasPressedFirst(/* a1 5 */ int buttonId);
	u32 GetCommandsDown(/* a1 5 */ int mask);
	u32 GetCommandsUp(/* a1 5 */ int mask);
	u32 GetLastCommandsDown(/* a1 5 */ int mask);
	u32 GetLastCommandsUp(/* a1 5 */ int mask);
	u32 GetCommandsPressed(/* a1 5 */ int mask);
	u32 GetCommandsReleased(/* a1 5 */ int mask);
	u32 GetBut(/* a1 5 */ int mask);
	u32 GetTrigger(/* s2 18 */ int mask);
	float GetStick();
	u32 GetPressed(/* a1 5 */ int mask);
	u32 GetReleased(/* a1 5 */ int mask);
	u32 GetDownButtons(/* a1 5 */ int mask);
};

typedef StackString2<260> FileName2;

struct StackString2<1024> : StringBuffer2 {
private:
	short unsigned int fChars[1024];
};

struct EUiMonitorAutoRepeat {
protected:
	float m_delay;
	float m_period;
	int m_maxUpdatesPerFrame;
	float m_totalDt[16];
	float m_stickDt[2][2];
	int m_lastEvenOdd[2];
	bool m_bAutoRepeating[16];
	bool m_bStickAutoRepeating[2][2];
	int m_buttonOwner[16];
	int m_stickOwner[2];
	EUIObjectNode &m_rUInode;
public:
	__vtbl_ptr_type *$vf2500;
	
	EUiMonitorAutoRepeat& operator=();
	EUiMonitorAutoRepeat(/* a1 5 */ EUIObjectNode &rUInode, /* f12 50 */ float delay, /* f13 51 */ float period);
	EUiMonitorAutoRepeat();
	/* vtable[1] */ virtual EUiMonitorAutoRepeat(EUiMonitorAutoRepeat*, int, void);
	void UpdateAll(EUiMonitorAutoRepeat*, int, void);
	void SetValues();
	void UpdateButtons(/* -0xd0(caller sp) */ int ctrlIndex);
	void UpdateSticks(/* -0xe0(caller sp) */ int ctrlIndex);
};

struct EGameMenuMainPanel : private EUIObjectNode {
	bool m_bWaitForButtonUp;
private:
	EGameMenuOptions m_OptionsMenu;
	EGameMenuStoryMenu m_StoryMenu;
	EGameMenuBonusMenu m_BonusMenu;
	EGameMenuSandboxMenu m_SandboxMenu;
	EGameMenuCredits m_Credits;
	EGameMenuMainMenu m_MainMenu;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	int m_MenuActive;
	int m_PromptLevel;
	ERShader *m_pDPadBack;
	ERShader *m_pUpShdr;
	ERShader *m_pDownShdr;
	ERShader *m_pLeftShdr;
	ERShader *m_pRightShdr;
	ERShader *m_pUpBlankShdr;
	ERShader *m_pDownBlankShdr;
	ERShader *m_pLeftBlankShdr;
	ERShader *m_pRightBlankShdr;
	ERShader *m_pDPadUp;
	ERShader *m_pDPadDown;
	ERShader *m_pDPadLeft;
	ERShader *m_pDPadRight;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBar;
	EUIIcon m_XIcon2;
	EUIPrompt m_PromptShort;
	EPromptBar m_PromptBarShort;
	EUIIcon m_TriIcon2;
	EUIPrompt m_PromptShort2;
	EPromptBar m_PromptBarShort2;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsSelectCancel[2];
	EPromptBar m_PromptBarSelectCancel;
	EUIIcon m_XIcon4;
	EUIIcon m_TriIcon4;
	EUIPrompt m_PromptsOKCancel[2];
	EPromptBar m_PromptBarOKCancel;
	EUIIcon m_XIcon5;
	EUIIcon m_SquareIcon5;
	EUIIcon m_TriIcon5;
	EUIPrompt m_PromptsSelDetBack[3];
	EPromptBar m_PromptBarSelDetBack;
	EUIIcon m_SquareIcon6;
	EUIIcon m_TriIcon6;
	EUIPrompt m_PromptsDetBack[2];
	EPromptBar m_PromptBarDetBack;
	int m_ReturnCode;
	bool m_bLoadingNeigbhorhood;
	
public:
	EGameMenuMainPanel& operator=();
	EGameMenuMainPanel();
	EGameMenuMainPanel();
	/* vtable[1] */ virtual EGameMenuMainPanel(EGameMenuMainPanel*, int, void);
	void Init();
	void Reset();
	int UpdateReturn();
	/* vtable[3] */ virtual void Draw(/* s1 17 */ ERC *prc);
	void SetSinglePrompt();
	void SetFullPrompt();
	void DisablePrompt();
	void SetBackPrompt();
	void SetSelectCancelPrompt();
	void SetOKCancelPrompt();
	void SetSelDetBackPrompt();
	void SetDetBackPrompt();
	void HandleMessage(/* a1 5 */ int Message);
	void ResetReturnCode();
	void SetDPadUp(/* a1 5 */ bool bOn);
	void SetDPadDown(/* a1 5 */ bool bOn);
	void SetDPadLeft(/* a1 5 */ bool bOn);
	void SetDPadRight(/* a1 5 */ bool bOn);
};

struct E3DWindow : EWindow {
	EMat4 m_mLookAt;
	EMat4 m_mLookAtPos;
	EMat4 m_mLookAtDotProjection;
	EMat4 m_mProjection;
	EFloatRect m_rViewportIn;
	EFloatRect m_rViewportOut;
	EViewport m_vpIn;
	EViewport m_vpOut;
	
	E3DWindow& operator=();
	E3DWindow();
	/* vtable[1] */ virtual E3DWindow(E3DWindow*, int, void);
	E3DWindow();
	/* vtable[9] */ virtual void SetProjection(/* f12 50 */ float fovYDegrees, /* f13 51 */ float aspect, /* f14 52 */ float nearPlane, /* f15 53 */ float farPlane);
	/* vtable[10] */ virtual void SetProjection();
	/* vtable[11] */ virtual void SetOrthoProjection(/* f12 50 */ float left, /* f13 51 */ float right, /* f14 52 */ float bottom, /* f15 53 */ float top, /* f16 54 */ float nearPlane, /* f17 55 */ float farPlane);
	/* vtable[12] */ virtual void SetLookAt(/* a1 5 */ EVec3 &vEye, /* a2 6 */ EVec3 &vTarget, /* a3 7 */ EVec3 &vUp);
	/* vtable[13] */ virtual void SetLookAtPos(/* s1 17 */ EMat4 &mLookAtPos);
	/* vtable[14] */ virtual void SetLookAt();
	void SetViewport(/* s0 16 */ EFloatRect &rect);
	void CalcTextureProjection(/* s2 18 */ EMat4 &mOut);
	bool TransformToScreen(/* a1 5 */ EVec3 &vWorld, /* s1 17 */ EVec2 &vScreenOut);
	bool TransformToWorld(/* a1 5 */ EVec2 &vScreen, /* s1 17 */ EVec3 &vWorldOut);
	void GetNearFar(/* a1 5 */ float *nearPlane, /* a2 6 */ float *farPlane);
	void GetFOVLengths(/* a1 5 */ float *right, /* a2 6 */ float *bottom);
	bool BackCullTest(/* a1 5 */ EVec3 *vCorners);
	/* vtable[2] */ virtual void Select(/* s0 16 */ ERC *prc);
	/* vtable[7] */ virtual E3DWindow* Cast3DWindow();
	/* vtable[15] */ virtual void ProjectionMatrixChanged();
	/* vtable[16] */ virtual void LookAtMatrixChanged();
	/* vtable[4] */ virtual void InputCoordinatesChanged();
	/* vtable[5] */ virtual void OutputCoordinatesChanged();
protected:
	void CalcLookAtDotProjection();
	void CalcViewport();
	void CalcViewportInv();
	void CalcViewportStructures();
};

struct TNodeList<EHouseSelectMenuItem *> : ENodeList {
	TNodeList(TNodeList<EHouseSelectMenuItem *>*, int, void);
	TNodeList();
	TNodeList();
	static EHouseSelectMenuItem* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EHouseSelectMenuItem *>& operator=();
	void MoveContents();
};

struct ENeighborhoodMode : EGameState {
protected:
	int m_NeighborhoodSubmode;
	int m_DrawSubmode;
	ERLevel *m_pLevel;
	EIParticleEmit *m_pParticleEmitter[2];
	ERParticleType *m_pParticleType;
	EPortalWindow *m_pWin;
	EVec3 m_vCameraPos;
	EVec3 m_vCameraTarget;
	EVec3 m_vLastCameraPos;
	EVec3 m_vLastCameraTarget;
	float m_CameraAngle;
	EDL *m_pdl;
	EDL *m_pLineDl;
	ERShader *m_pWhiteShaderAdditive;
	ERShader *m_pLineShdr;
	ERShader *m_pXCursorShader;
	ERShader *m_pXCursorWireShader;
	ERShader *m_pCursorShader;
	ERShader *m_pCursorWireShader;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	ERShader *m_pTitleBgCenterShdr;
	ERShader *m_pTitleBgLeftShdr;
	ERShader *m_pTitleBgRightShdr;
	ERShader *m_pTitleHighCenterShdr;
	ERShader *m_pTitleHighLeftShdr;
	ERShader *m_pTitleHighRightShdr;
	ERShader *m_pTitleIconShdr;
	ERShader *m_pDPadBackgroundShdr;
	ERShader *m_pTextLineCenterShdr;
	ERShader *m_pTextLineRightShdr;
	ERShader *m_pTextLineLeftShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pCircIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pChallengeModeIntroShdr;
	ERShader *m_pGlow;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIIcon m_SquareIcon;
	EUIIcon m_CircleIcon;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIPrompt m_PromptsDescLevel2[4];
	EUIPrompt m_PromptsDescLevel1[2];
	EPromptBar m_PromptsBarDescLevel2;
	EPromptBar m_PromptsBarDescLevel1;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_GenericYesNoBox[2];
	EPromptBar m_GenericYesNoPrompt;
	EUIIcon m_XIcon4;
	EUIIcon m_TriIcon4;
	EUIIcon m_CircleIcon4;
	EUIPrompt m_FamilySelectPrompts[3];
	EPromptBar m_FamilySelectBar;
	EUIIcon m_dpadIcons[4];
	ERFont *m_pFont;
	EVec3 m_vPos;
	EVec3 m_vTargetPos;
	EVec2 m_HouseCoords[8];
	EHouse *m_pHouseData[8];
	ERoofs *m_pRoofs[8];
	int m_HousePrevToMoveTo[8];
	int m_HouseNextToMoveTo[8];
	float m_HouseViewDir[8];
	bool m_bHouseLockedOut[8];
	float m_Alpha;
	bool m_bClearpCurHouseOnExit;
	EHouseSelectMenu *m_pHouseSelectMenu;
	bool m_bInHouseSelectMenu;
	bool m_bPlayHouse;
	bool m_bEvictFamilyOrDestroyHouse;
	bool m_bLiquidateHouse;
	int m_bEvictionMode;
	int m_DrawButtonDescLevel;
	EFamilySelect *m_pSelectFamilyMenu;
	bool m_bMoveIn;
	bool m_bExitScreen;
	bool m_bSaveScreen;
	int m_CreateAFamilyMode;
	EFamilyConstructData *m_pFamilyConstructData;
	int m_OriginalGuids[8];
	int m_FamilyNum;
	ECharedMode *m_pCharedMode;
	E3DWindow m_TempWin;
	int m_LoadScreenNumber;
	bool m_bImportActive;
	int m_ImportMode;
	NghResFile *m_pImportResFile;
	EHouseImportMenuMgr *m_pHouseImportMenu;
	int m_ImportHouseNum;
	bool m_bImportSimActive;
	int m_ImportSimMode;
	int m_ImportFamily;
	EFamilyMemberMenuMgr *m_pFamilyMemberMenu;
	NeighborhoodImpl *m_pImportNeighborhood;
	int m_ImportMember;
	bool m_bGetNeighborhoodName;
	ETextEntryDialog *m_pTextEntryDialog;
	int m_CurrentTargetHouse;
	EVec2 m_LastTargetPos;
	float m_LastTargetCameraAngle;
	bool m_SelectionTargetInitialized;
	float m_CumulativeTime;
	bool m_bDisableHouseMenu;
	int m_StoryModeTransitionStateNum;
	bool m_bNeighborhoodIsChallengeMode;
	int m_ChallengeModeStateNum;
	int m_ChallCursorPos;
	bool m_bLastXDown;
	ERDataset *m_pDataset;
	EGameMenuMainPanel m_MainMenu;
	bool m_bWaitForButtonUp;
	int m_LastSelection;
	ERShader *m_pMorePrompts[2];
	bool m_bWaitForSaveReturn;
	EAnimController *m_AC;
	ERModel *m_pCarsModel;
	bool m_bGoingToCredits;
	EDialogMenu m_DialogMenu;
	c16 *m_ppNoYesOptions[2];
	c16 *m_ppYesNoOptions[2];
	c16 *m_ppOptionsTextList[4];
	bool m_bQueryDelete;
	FamilyImpl *m_pDeleteFamily;
	float m_PulseAccumulator;
	
public:
	ENeighborhoodMode& operator=();
	ENeighborhoodMode();
	ENeighborhoodMode();
	/* vtable[1] */ virtual ENeighborhoodMode(ENeighborhoodMode*, int, void);
	/* vtable[2] */ virtual void Init(/* a1 5 */ int FromState);
	/* vtable[5] */ virtual void Reset(/* a1 5 */ int ToState);
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw(/* s1 17 */ ERC *prc);
	bool HandleHouseSelectMenu(/* s0 16 */ int Index);
	static bool DeleteSelectorOnEvict(/* parameters unknown */);
protected:
	void UpdateHoodSel();
	void UpdateHouseSel();
	void UpdateCursorPos();
	void UpdateHouseSelectMenu();
	void UpdateEvictFamilyOrDestroyHouse();
	void UpdateMovein();
	void UpdateCreateAFamilyStage1();
	void UpdateCreateAFamilyStage2();
	void UpdateLoadMode();
	void UpdateOptionsMode();
	void UpdateExitScreen();
	void UpdateSaveScreen();
	void UpdateImport();
	void UpdateImportSim();
	void UpdateChallengeModeSetup();
	void DrawHoodSel(/* a1 5 */ ERC *prc);
	void DrawHouseSel(/* s1 17 */ ERC *prc);
	void DrawCursor(/* a1 5 */ ERC *prc);
	void DrawHouseHighlight(/* s2 18 */ ERC *prc);
	void DrawHoodBasicUI(/* s4 20 */ ERC *prc);
	void DrawHouseDesc(/* s4 20 */ ERC *prc, /* s0 16 */ int Selection);
	void DrawEvictFamilyOrHouse(/* a1 5 */ ERC *prc);
	void DrawGenericMessageBox(/* s2 18 */ ERC *prc, /* s4 20 */ c16 *Title, /* s5 21 */ c16 *Line1, /* s6 22 */ c16 *Line2);
	void DrawCreateAFamilyStage1(/* a1 5 */ ERC *prc);
	void DrawCreateAFamilyStage2(/* a1 5 */ ERC *prc);
	void DrawLoadMode(/* a1 5 */ ERC *prc);
	void DrawOptionsMode(/* s1 17 */ ERC *prc);
	void DrawExitScreen(/* a1 5 */ ERC *prc);
	void DrawSaveScreen(/* a1 5 */ ERC *prc);
	void DrawImport(/* a1 5 */ ERC *prc);
	void DrawImportSim(/* s1 17 */ ERC *prc);
	void DrawGetNeighborhoodName(/* a1 5 */ ERC *prc);
	void DrawChallengeModeSetup(/* s5 21 */ ERC *prc);
	void SetSelectHouseSubmode();
	void ResetSelectHouseCamera();
	void UpdateSelectHouseCamera();
	int GetHouseSelection();
	void SelectHouse(/* a1 5 */ int Selection);
	void DemolishHouse(/* a1 5 */ int Selection);
	void EvictFamily(/* -0xac(caller sp) */ int Selection, /* -0xa8(caller sp) */ bool RefundMoney);
	void EvictFamilyAndLiquidateAssets(/* -0xac(caller sp) */ int Selection);
	void ResetHouseVisuals(/* s0 16 */ int HouseNum);
	bool GuidIsOk(/* a1 5 */ int guid);
	bool ThereAreFamiliesToMoveIn();
	void ImportHouse();
	void ImportSimStart(/* s1 17 */ bool bSkipCurrentNeighborhood);
	void DoActualImport(/* a1 5 */ bool IncludeFurniture);
	void StartCreateAFamily();
	void PrepCreateAFamilyData(/* s2 18 */ int FamilyNum);
	void StoreCreateAFamilyData();
	void StartHouseSelection();
	void HouseSelectGoToHoodSelect();
	void ImportMemberIntoFamily();
	void ReplaceFamilyMember(/* s5 21 */ int Identifier);
	void UpdateGetNeighborhoodName();
	bool ImpFamilySetupSource(/* s0 16 */ int HouseSelection);
	void ImpFamilyReadSourceFamily(/* s0 16 */ int HouseSelection);
	void ImpFamilySetupDestination();
	void ImpFamilyWriteDestFamily(/* -0xb8(caller sp) */ int HouseSelection);
	void ImpFamilyCleanup();
	void TransitionStoryModeToNextHouse();
	void StoryModeTransferSim(/* s3 19 */ int OutOfHouseNum, /* s2 18 */ int InToHouseNum);
	void StoryModeExtractSim(/* s0 16 */ int HouseNum);
	void StoryModePlaceSimInHouse(/* a1 5 */ int HouseNum);
	void StoryModeRenameFamilyInHouse(/* a1 5 */ int HouseNum);
	void StoryModeEvictAndEliminateFamily(/* s1 17 */ int HouseNum);
	void StoryModeFillInFamily(/* s1 17 */ int HouseNum, /* a1 5 */ int FamilyNum);
	void StoryModeTransferFamily(/* s0 16 */ int OutOfHouseNum, /* s3 19 */ int InToHouseNum);
	void StoryModeStartHouse(/* s0 16 */ int HouseNum);
	void CleanupLevel();
	void SetChallengeModeBackground();
	void DisplayFamilyList();
	void SetupDpadWin();
	void DrawDpadWin(/* s1 17 */ ERC *prc);
};

struct ObjectFolder {
	__vtbl_ptr_type *$vf827;
	
	ObjectFolder& operator=();
	ObjectFolder();
protected:
	ObjectFolder();
	/* vtable[1] */ virtual ObjectFolder(ObjectFolder*, int, void);
public:
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Destroy();
	/* vtable[4] */ virtual Boolean DoCommand();
	/* vtable[5] */ virtual char* GetPath();
	/* vtable[6] */ virtual iResFile* GetGlobFile();
	/* vtable[7] */ virtual iResFile* GetPersonGlobFile();
	/* vtable[8] */ virtual void FreeUnusedData();
	/* vtable[9] */ virtual void DeleteUserSelectors();
	/* vtable[10] */ virtual void ReconSelector();
	/* vtable[11] */ virtual void ReconBehavior();
	/* vtable[12] */ virtual Int CountSelectors();
	/* vtable[13] */ virtual ObjSelector* GetNextSelector();
	/* vtable[14] */ virtual ObjSelector* GetSelectorByGUID();
	/* vtable[15] */ virtual ObjSelector* GetSelectorByBehavior();
	/* vtable[16] */ virtual ObjSelector* GetSubTileSelector();
	/* vtable[17] */ virtual ObjSelector* GetLeadSelector();
	/* vtable[18] */ virtual ObjSelector* GetMasterSelector();
	/* vtable[19] */ virtual ObjSelector* GetNthSubSelector();
	/* vtable[20] */ virtual ObjectTypeAttrBlock* GetTypeAttrBlock();
	/* vtable[21] */ virtual ErrType SetSemiGlobalFile();
	/* vtable[22] */ virtual bool RemoveSelector();
	/* vtable[23] */ virtual ObjSelector* CreateNewUserSelector();
	/* vtable[24] */ virtual void LoadUserData();
	/* vtable[25] */ virtual void SaveUserData();
	/* vtable[26] */ virtual void SuspendObjectFiles();
	/* vtable[27] */ virtual void ResumeObjectFiles();
	/* vtable[28] */ virtual void CreatingInstance();
	/* vtable[29] */ virtual void DeletingInstance();
	/* vtable[30] */ virtual void CreatingResFile();
	/* vtable[31] */ virtual void DeletingResFile();
	/* vtable[32] */ virtual void PrepareForModuleLoad();
	/* vtable[33] */ virtual void PrepareForModuleSave();
	/* vtable[34] */ virtual ErrType Save();
	/* vtable[35] */ virtual ErrType Load();
	/* vtable[36] */ virtual void DoStream();
	/* vtable[37] */ virtual ObjSelector* GetPlaceholder();
	/* vtable[38] */ virtual void OpenResFile();
	/* vtable[39] */ virtual void GetTreeTable();
	/* vtable[40] */ virtual bool ForceDataPreload();
	/* vtable[41] */ virtual u32 CalcPreloadMemoryCost();
	/* vtable[42] */ virtual u32 CalcUnloadMemorySaving();
	/* vtable[43] */ virtual u32 GetCurrentMemoryCost();
	/* vtable[44] */ virtual u32 GetBaseMemoryCost();
	/* vtable[45] */ virtual u32 CalcPerformanceCost();
	/* vtable[46] */ virtual u32 GetCurrentPerformanceCost();
	/* vtable[47] */ virtual void ApplyBCONTuningForFile();
	/* vtable[48] */ virtual BehaviorFinder* GetBehaviorFinder();
	/* vtable[49] */ virtual ERQuickdata& GetObjectsDatabase();
	/* vtable[50] */ virtual EventMapping* GetSndEventByName();
	/* vtable[51] */ virtual AnimRef* GetAnimRefByName();
	/* vtable[52] */ virtual void GetAnimPreloadList();
	/* vtable[53] */ virtual void PreloadSelectors();
	static ObjectFolder* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct ECharedMode {
	bool m_Initialized;
	ECharedPanel *m_pPanel;
protected:
	int m_FromState;
	bool m_BackgroundColorSet;
	
public:
	ECharedMode& operator=();
	ECharedMode();
	ECharedMode();
	ECharedMode(ECharedMode*, int, void);
	void Init(/* a1 5 */ int FromState);
	void Reset(/* a1 5 */ int ToState);
	int Update();
	void Draw(/* s1 17 */ ERC *prc);
	void initContinue();
};

enum EShaderSymbol {
	UNDEFINED_SHADER = 0,
	ACTION_CHANNEL_010000_SHADER = -176632222,
	ACTION_CHANNEL_010001_SHADER = -2105540876,
	ACTION_CHANNEL_010002_SHADER = 460762958,
	ACTION_CHANNEL_010003_SHADER = 1819385816,
	ACTION_CHANNEL_010004_SHADER = -233502085,
	ACTION_CHANNEL_010005_SHADER = -2062402835,
	ACTION_CHANNEL_010006_SHADER = 471558999,
	ACTION_CHANNEL_010007_SHADER = 1797020609,
	ACTION_CHANNEL_010008_SHADER = -73185712,
	ACTION_CHANNEL_010009_SHADER = -1935378746,
	ACTION_CHANNEL_010010_SHADER = -328990941,
	ACTION_CHANNEL_010011_SHADER = -1687892043,
	ACTION_CHANNEL_010012_SHADER = 40738319,
	ACTION_CHANNEL_010013_SHADER = 1969925785,
	ACTION_CHANNEL_010014_SHADER = -351388870,
	ACTION_CHANNEL_010015_SHADER = -1677128788,
	ADULT60S_ANARCHY_SHADER = 1934622088,
	ADULT60S_FLOWER_SHADER = -1234636028,
	ADULT60S_NUCLEAR_SHADER = 1686966918,
	ADULT_MONEY_BURGLAR_SHADER = 2064958313,
	ADULT_MONEY_MONEY_SHADER = 1890741598,
	ADULT_MONEY_UNSURE_SHADER = -682374989,
	ADULT_POLITICS_BILL_SIGNING_SHADER = -853099275,
	ADULT_POLITICS_CAPITAL_SHADER = 1714871382,
	ADULT_POLITICS_JUSTICE_SHADER = -785463649,
	ADULT_TRAVEL_CAR_SHADER = 2059725387,
	ADULT_TRAVEL_FLYING_SHADER = 1027830898,
	ADULT_TRAVEL_SAILING_SHADER = -1907949039,
	AFRICAN_VIOLET_SHADER = -335158503,
	AFRICAN_VIOLET_ACTION_QUEUE_SHADER = 15114695,
	AMISHIM_BOOK_CASE_SHADER = -826222530,
	AMISHIM_BOOK_CASE_ACTION_QUEUE_SHADER = 805711295,
	ANDERSONVILLE_PEDESTAL_SINK_01_SHADER = 443172104,
	ANDERSONVILLE_PEDESTAL_SINK_ACTION_QUEUE_SHADER = 1785236087,
	ANOTHERMETAL_FENCE_01_SHADER = -1627033195,
	ANTIQUE_ARMOIRE_SHADER = -2057828757,
	ANTIQUE_ARMOIRE_ACTION_QUEUE_SHADER = -1801411735,
	ANTIQUE_PERSIAN_RUG_SHADER = -175537619,
	ANTIQUE_PERSIAN_RUG_ACTION_QUEUE_SHADER = -762246301,
	ANYWHERE_END_TABLE_SHADER = -506521204,
	ANYWHERE_END_TABLE_ACTION_QUEUE_SHADER = 300312616,
	ARISTOSCRATCH_POOL_TABLE_SHADER = -2038011458,
	ARISTOSCRATCH_POOL_TABLE_02_SHADER = -267062645,
	ARISTOSCRATCH_POOL_TABLE_ACTION_QUEUE_SHADER = -860386853,
	AROMASTER_2000_SHADER = -1160051233,
	AROMASTER_ACTION_QUEUE_SHADER = 762048732,
	ARROWTEST_SHADER = 926607369,
	ARROWTEST_UP_SHADER = 1803342740,
	ARROW_DOWN_SHADER = -873439499,
	ARROW_LEFT_SHADER = -1385682522,
	ARROW_RIGHT_SHADER = -206588507,
	ARROW_UP_SHADER = 841426323,
	ASH_ACTION_QUEUE_SHADER = -567570336,
	ASH_PILE_LARGE_SIZE_SHADER = 409953985,
	ASH_PILE_MEDIUM_SIZE_SHADER = 978642866,
	ASH_PILE_SMALL_SIZE_SHADER = -4031414,
	BABIES_BOTTLE_SHADER = -498404870,
	BABIES_DIAPER_SHADER = -1987258696,
	BABIES_MOSES_SHADER = -1540411109,
	BABIES_STROLLER_SHADER = 1982543632,
	BABIES_SUCKTHINGY_SHADER = 149102951,
	BABY_CRADLE_SHADER = 1041591381,
	BABY_CRADLE_ACTION_QUEUE_SHADER = -1064246599,
	BACHMAN_WOOD_BEVERAGE_BAR_SHADER = 1347900347,
	BACHMAN_WOOD_BEVERAGE_BAR_ACTION_QUEUE_SHADER = -1286066984,
	BACHMAN_WOOD_BEVERAGE_BAR_NEON_SHADER = -90633129,
	BACKWOODS_TABLE_ACTION_QUEUE_SHADER = -1010279143,
	BACKWOODS_TABLE_BY_SURVIVALL_SHADER = -184852254,
	BACK_OF_STUFF_ROOM_SHADER = -1880250595,
	BEAUTY_BLOWDRYER_SHADER = -1972046285,
	BEAUTY_COMB_SHADER = 539350939,
	BEAUTY_LIPSTICK_SHADER = 1226328230,
	BEAUTY_PERFUME_SHADER = 940790657,
	BEAUTY_TRINKETS_SHADER = 683214849,
	BEAVER_PELT_MOOSEHEAD_SHADER = -2040824143,
	BEAVER_PELT_MOOSEHEAD_ACTION_QUEUE_SHADER = 1468857633,
	BEEJAPHONE_GUITAR_SHADER = -2136319695,
	BEEJAPHONE_GUITAR_ACTION_QUEUE_SHADER = -568581462,
	BENI_KANA_TEPPENYAKI_TABLE_SHADER = -261803116,
	BENI_KANA_TEPPENYAKI_TABLE_ACTION_QUEUE_SHADER = -698735076,
	BENTLEY_SHADER = 1425569944,
	BG_GRAY_GRADIENT_SHADER = -431579526,
	BILLS_ACTION_QUEUE_SHADER = -435619912,
	BIRCH_TREE_SHADER = -1867305593,
	BIRCH_TREE_ACTION_QUEUE_SHADER = 213120098,
	BI_POLAR_SHADER = -869126679,
	BI_POLAR_ACTION_QUEUE_SHADER = -303976939,
	BLACKLINE_SHADER = -368508540,
	BLACK_SLACK_RECLINER_SHADER = 2056903900,
	BLACK_SLACK_RECLINER_ACTION_QUEUE_SHADER = 2032899104,
	BLANK_DOWN_SHADER = 1687323529,
	BLANK_LEFT_SHADER = 34272474,
	BLANK_RIGHT_SHADER = -1431049617,
	BLANK_UP_SHADER = 698643521,
	BLIND_DATE_BY_I_RONEY_SHADER = 2039954359,
	BLIND_DATE_BY_I_RONEY_ACTION_QUEUE_SHADER = 358452159,
	BLUE_CHINA_VASE_SHADER = -843479749,
	BLUE_CHINA_VASE_ACTION_QUEUE_SHADER = -509275589,
	BLUE_CHINA_VASE_ROOM_SHADER = -1585287370,
	BLUE_PLATE_SCONCE_SHADER = 1692459378,
	BLUE_PLATE_SCONCE_ACTION_QUEUE_SHADER = -1504240459,
	BLUR_OUT_SHADER = -792466962,
	BOTHPLAYERSELECTION_SHADER = -1044903330,
	BOTTLE_LAMP_SHADER = -1667556177,
	BOTTLE_LAMP_ACTION_QUEUE_SHADER = 1277270157,
	BOXWOOD_HEDGE_SHADER = -1078333910,
	BOXWOOD_HEDGE_ACTION_QUEUE_SHADER = 591982791,
	BRAND_NAME_TOASTER_OVEN_SHADER = -597521358,
	BRAND_NAME_TOASTER_OVEN_ACTION_QUEUE_SHADER = 529246059,
	BRIDGE_SHADER = -1719613415,
	BUILDGLOW_SHADER = -226736892,
	BUTTON_BG_SHADER = -1487850137,
	BUTTON_BG_4_TEXTLINE_SHADER = 1383237537,
	BUTTON_BG_HIGHLIGHT_SHADER = -1931746326,
	BUYGLOW_SHADER = -636154771,
	CARD_TABLE_SHADER = -1037146487,
	CARD_TABLE_ACTION_QUEUE_SHADER = 415629578,
	CARRY_BEANS_SHADER = 912134021,
	CARRY_BENNIKANNA_STIR_THE_FOOD_STATE_01_SHADER = -1396580127,
	CARRY_BENNIKANNA_STIR_THE_FOOD_STATE_01_SECOND_TEXTURE_SHADER = 1549947424,
	CARRY_BILLS_ORANGE_SHADER = -1140391461,
	CARRY_BILLS_RED_SHADER = 1615082764,
	CARRY_BILLS_YELLOW_SHADER = 1908825148,
	CARRY_BURRITO_ENCHILADA_EMPTY_PLATE_SHADER = 187088903,
	CARRY_BURRITO_ENCHILADA_FULL_PLATE_SHADER = 1784951381,
	CARRY_BURRITO_ENCHILADA_HALFFULL_PLATE_SHADER = 1103347070,
	CARRY_CUTTING_BOARD_EMPTY_SHADER = -525801912,
	CARRY_CUTTING_BOARD_STAGE_1_SHADER = 1982519110,
	CARRY_CUTTING_BOARD_STAGE_2_SHADER = -282884356,
	CARRY_FRUITCAKE_SHADER = -503761451,
	CARRY_FRYING_PAN_SHADER = 1904568127,
	CARRY_GIFT_CHOCOLATES_SHADER = -19855608,
	CARRY_GIFT_FLOWERS_SHADER = 634740547,
	CARRY_GNOME_SHADER = -52900756,
	CARRY_GNOME_ACTION_QUEUE_SHADER = 788336269,
	CARRY_HAMBURGER_TRAY_SHADER = -521480617,
	CARRY_MICROWAVE_POT_SHADER = -1907704245,
	CARRY_NEWSPAPER_SHADER = 1185976430,
	CARRY_NEWSPAPER_OLD_SHADER = -1191051960,
	CARRY_PIZZABOX_SHADER = -1914391555,
	CARRY_SALAD_EMPTY_PLATE_SHADER = -413079295,
	CARRY_SALAD_FULL_PLATE_SHADER = 1337922196,
	CARRY_SALAD_HALFFULL_PLATE_SHADER = -1632126354,
	CARRY_SNACK_CHIPS_SHADER = -1513196014,
	CARRY_SOUP_IN_PAN_SHADER = 427564387,
	CARRY_STOOL_SHADER = 502698227,
	CARRY_TOASTER_OVEN_POT_SHADER = 1808555458,
	CARRY_TRAY_BOXES_CARTONS_ETC_SHADER = 1301790734,
	CARRY_TRAY_OF_BEANS_SHADER = -1762191270,
	CARRY_TV_DINNER_BOX_SHADER = -365370202,
	CARTOON_01_SHADER = 694812133,
	CARTOON_02_SHADER = -1335841697,
	CARTOON_03_SHADER = -949510967,
	CARTOON_04_SHADER = 1493371242,
	CARTOON_05_SHADER = 772028924,
	CARTOON_06_SHADER = -1223858106,
	CARTOON_07_SHADER = -1073063728,
	CARTOON_08_SHADER = 1354057025,
	CARTOON_09_SHADER = 666006999,
	CARTOON_10_SHADER = 1198914610,
	CARTOON_11_SHADER = 812829860,
	CARTOON_12_SHADER = -1451516642,
	CARTOON_13_SHADER = -562254456,
	CARTOON_14_SHADER = 1075329067,
	CARVING_BLOCK_SHADER = -1340939189,
	CARVING_BLOCK_ACTION_QUEUE_SHADER = 961379836,
	CAR_BENTLEY_ACTION_QUEUE_SHADER = 1303845632,
	CAR_JUNKER_ACTION_QUEUE_SHADER = 1713147342,
	CAR_LIMO_ACTION_QUEUE_SHADER = -1815434193,
	CAR_MILITARY_JEEP_ACTION_QUEUE_SHADER = -1372965968,
	CAR_SCHOOL_BUS_ACTION_QUEUE_SHADER = -868893368,
	CAR_STAFF_SEDAN_ACTION_QUEUE_SHADER = -1542760161,
	CAR_STANDARD_CAR_ACTION_QUEUE_SHADER = 1127323391,
	CAR_SUV_ACTION_QUEUE_SHADER = -825888944,
	CAR_TOWN_CAR_ACTION_QUEUE_SHADER = -1536111146,
	CEILING_01_ROOM_SHADER = 1710571491,
	CEILING_01_ROOM_CHARED_SHADER = 1389955019,
	CENSORED_128X128_D_SHADER = -768613568,
	CERAMIC_TILES_SHADER = 1242442298,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_SHADER = -984160650,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_ACTION_QUEUE_SHADER = -472757629,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_SHEETS_SHADER = -450664166,
	CHEAP_PINE_BOOKCASE_SHADER = -579110849,
	CHEAP_PINE_BOOKCASE_ACTION_QUEUE_SHADER = 626361102,
	CHECKBOX_CHECKED_SHADER = -1042240448,
	CHECKBOX_UNCHECKED_SHADER = 333061141,
	CHIMEWAY___DAUGHTERS_PIANO_SHADER = -1860350781,
	CHIMEWAY___DAUGHTERS_PIANO_02_SHADER = 588485556,
	CHIMEWAY___DAUGHTERS_PIANO_ACTION_QUEUE_SHADER = -1900423864,
	CHUCK_MATEWELL_CHESS_SET_SHADER = -1307343461,
	CHUCK_MATEWELL_CHESS_SET_ACTION_QUEUE_SHADER = -434028544,
	CLOTHES_FOR_ARMOIRE_SHADER = -1611009827,
	CLOUDS_TERRAIN_SHADER = -1164078196,
	COMPUTER_SCREEN_00_SHADER = -581261007,
	COMPUTER_SCREEN_01_SHADER = -1436706393,
	COMPUTER_SCREEN_02_SHADER = 861194269,
	COMPUTER_SCREEN_03_SHADER = 1146353803,
	COMPUTER_SCREEN_04_SHADER = -633901784,
	COMPUTER_SCREEN_05_SHADER = -1389339202,
	COMPUTER_SCREEN_06_SHADER = 876153860,
	COMPUTER_SCREEN_07_SHADER = 1128152210,
	COMPUTER_SCREEN_SEARCH_SHADER = 1474117417,
	CONCRETE_46_FLOOR_SHADER = 421647710,
	CONTEMPO_COUCH_SHADER = 1062736438,
	CONTEMPO_COUCH_ACTION_QUEUE_SHADER = 1288452373,
	CONTEMPO_COUCH_ROOM_CHARED_SHADER = 466751034,
	CONTEMPO_LOVESEAT_SHADER = 1715079332,
	CONTEMPO_LOVESEAT_ACTION_QUEUE_SHADER = -1821669259,
	CONTROLLER_LOAD_SCREEN_SHADER = 179332798,
	COUNTRY_CLASS_ARMCHAIR_ACTION_QUEUE_SHADER = 2052681589,
	COUNTRY_CLASS_LOVESEAT_ACTION_QUEUE_SHADER = 1920407260,
	COUNTRY_CLASS_SOFA_SHADER = -1421385399,
	COUNTRY_CLASS_SOFA_ACTION_QUEUE_SHADER = 2010307390,
	COUNT_BLANC_BATHROOM_COUNTER_ACTION_QUEUE_SHADER = 2083786102,
	COUNT_BLANC_BATHROOM_COUNTER_FACE_SHADER = 1848601242,
	COUNT_BLANC_BATHROOM_COUNTER_SIDE_SHADER = 1220151880,
	COUNT_BLANC_BATHROOM_COUNTER_TOP_SHADER = 1318655674,
	CRAP_SHADER = 1171586465,
	CREATE_SIM_ROOM_WALL_ROOM_SHADER = 699563091,
	CREATE_SIM_ROOM_WALL_ROOM_CHARED_SHADER = -1066314891,
	DAFFODILS_00_SEARCH_SHADER = 1205195629,
	DAFFODILS_01_SHADER = -1539894934,
	DAFFODILS_02_SHADER = 1027490000,
	DAFFODILS_03_SHADER = 1245278278,
	DAFFODILS_ACTION_QUEUE_SHADER = 783129770,
	DAFFODILS_ALL_SHADER = -821471043,
	DECAL_GROUND_01_SHADER = 884974805,
	DECAL_GROUND_02_SHADER = -1380518545,
	DECKCHAIR_BY_SURVIVAL_SHADER = -625526526,
	DECKCHAIR_BY_SURVIVAL_ACTION_QUEUE_SHADER = -2018947058,
	DEFAULT_SHADER = -602145083,
	DELETE_QUEUE_SHADER = -1960834779,
	DELETE_WALL_SHADER = 439810240,
	DELUSION_DE_GRANDEUR_SHADER = 2072813303,
	DELUSION_DE_GRANDEUR_ACTION_QUEUE_SHADER = -1046000978,
	DIALECTRIC_FREESTANDING_RANGE_SHADER = 451750111,
	DIALECTRIC_FREESTANDING_RANGE_ACTION_QUEUE_SHADER = 477497476,
	DIMANCHE_FOLDING_EASEL_SHADER = 408261476,
	DIMANCHE_FOLDING_EASEL_02_SHADER = -2122069846,
	DIMANCHE_FOLDING_EASEL_ACTION_QUEUE_SHADER = -1200763634,
	DIMANCHE_FOLDING_EASEL__CANVAS__00_SHADER = -1960248074,
	DIMANCHE_FOLDING_EASEL__CANVAS__01_SHADER = -63976352,
	DIMANCHE_FOLDING_EASEL__CANVAS__02_SHADER = 1697029594,
	DIMANCHE_FOLDING_EASEL__CANVAS__03_SHADER = 304196940,
	DIMANCHE_FOLDING_EASEL__CANVAS__04_SHADER = -1941620497,
	DIMANCHE_FOLDING_EASEL__CANVAS__05_SHADER = -79558535,
	DIMANCHE_FOLDING_EASEL__CANVAS__06_SHADER = 1649105347,
	DIMANCHE_FOLDING_EASEL__CANVAS__07_SHADER = 357329237,
	DIMANCHE_FOLDING_EASEL__CANVAS__08_SHADER = -2047642428,
	DIMANCHE_FOLDING_EASEL__CANVAS__09_SHADER = -218872750,
	DIMANCHE_FOLDING_EASEL__CANVAS__10_SHADER = -1842098761,
	DIMANCHE_FOLDING_EASEL__CANVAS__11_SHADER = -449512159,
	DIMANCHE_FOLDING_EASEL__CANVAS__12_SHADER = 2084416667,
	DISH_DUSTER_DELUXE_SHADER = 1792912192,
	DISH_DUSTER_DELUXE_02_SHADER = 1245417741,
	DISH_DUSTER_DELUXE_ACTION_QUEUE_SHADER = -435081752,
	DIVING_BOARD_01_SHADER = -1953512098,
	DIVING_BOARD_ACTION_QUEUE_SHADER = 985148090,
	DOWN_WIT_DAT_BOOMBOX_ACTION_QUEUE_SHADER = 943654919,
	DOWN_WIT_DAT_BOOM_BOX_SHADER = 5152201,
	D_PAD_BEVEL_SHADER = -1956894250,
	D_PAD_BG_SHADER = 756329597,
	ECHINOPSIS_MAXIMUS_CACTUS_SHADER = 1038211780,
	ECHINOPSIS_MAXIMUS_CACTUS_ACTION_QUEUE_SHADER = 1083566872,
	EDGE_OF_REALITY___LOGO_FINAL_SHADER = 1654318011,
	EDGING_SHADER = -1125211002,
	ELITE_REFLECTIONS_CHROME_LAMP_SHADER = -1847129970,
	ELITE_REFLECTIONS_CHROME_LAMP_ACTION_QUEUE_SHADER = 739350522,
	EMPRESS_DINING_CHAIR_SHADER = 1743128456,
	EMPRESS_DINING_CHAIR_ACTION_QUEUE_SHADER = 582808648,
	EPIKOUROS_KITCHEN_SINK_SHADER = 457763968,
	EPIKOUROS_KITCHEN_SINK_ACTION_QUEUE_SHADER = 247887003,
	ERUPTION_OF_DECADENCE_TAPESTRY_SHADER = -836010465,
	ERUPTION_OF_DECADENCE_TAPESTRY_ACTION_QUEUE_SHADER = -852391212,
	EXERTO_BENCHPRESS_EXCERCISE_MACHINE_SHADER = -640002094,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_ACTION_QUEUE_SHADER = -951403988,
	EXTERIOR_TILE__01_SHADER = 427072907,
	EXTERIOR_TILE__02_SHADER = -2139239375,
	EXTERIOR_TILE__03_SHADER = -142934873,
	EXTERIOR_TILE__201_SHADER = -483384147,
	EXTERIOR_TILE__202_SHADER = 2050585879,
	EXTERIOR_TILE__203_SHADER = 222184833,
	EXTERIOR_TILE__204_SHADER = -1822765022,
	EXTERIOR_TILE__205_SHADER = -463609676,
	EXTERIOR_TILE__206_SHADER = 2102702350,
	EXTERIOR_TILE__207_SHADER = 173244824,
	EXTERIOR_TILE__208_SHADER = -1695769591,
	EXTERIOR_TILE__209_SHADER = -303321953,
	EXTERIOR_TILE__210_SHADER = -1926486662,
	EXTERIOR_TILE__211_SHADER = -97839636,
	EXTERIOR_TILE__213_SHADER = 337999040,
	FAUX_BEARSKIN_RUG_SHADER = -474660622,
	FAUX_BEARSKIN_RUG_ACTION_QUEUE_SHADER = -396451125,
	FA_CA_ARMY_RANGER_SHADER = 1108926099,
	FA_CA_ARMY_RECRUIT_SHADER = 1721166240,
	FA_CA_BURGLAR_SHADER = -1128355065,
	FA_CA_CLERK_SHADER = -534991775,
	FA_CA_EXTREME_OUTDOORS_SHADER = -1101524449,
	FA_CA_EXTREME_RACECAR_SHADER = 1069759129,
	FA_CA_LIFEGUARD_SHADER = 1038414441,
	FA_CA_LOUNGE_SINGER_SHADER = -310724496,
	FA_CA_MOB_BOSS_SHADER = 69902407,
	FA_CA_ROCK_STAR_SHADER = 227949085,
	FA_CA_SLACKER_SHADER = -1865431382,
	FA_CA_SPY_SHADER = -1024719060,
	FA_FT_DEFINED_01_SHADER = 1071790859,
	FA_FT_NORMAL_02_SHADER = -1208399710,
	FA_FT_ROUNDED_01_SHADER = 376728346,
	FA_GL_CAT_SUN_MAP_SHADER = 2042925928,
	FA_GL_LIBRARY_EYE_MAP_SHADER = -1963406922,
	FA_GL_LIBRARY_EYE_MAP2_SHADER = 945639549,
	FA_GL_NORMAL_EYE_MAP_SHADER = -1271682960,
	FA_GL_NORMAL_EYE_MAP2_SHADER = 1248132249,
	FA_GL_NORMAL_SUN_MAP_SHADER = -1339035410,
	FA_JW_BIG_HOOPS_SHADER = 746184142,
	FA_JW_DIAMONDMAP_SHADER = 1707541197,
	FA_JW_DIAMONDS_SHADER = 1138213196,
	FA_JW_PEARLMAP_SHADER = 1790648562,
	FA_JW_PEARLS_SHADER = 1144209282,
	FA_JW_PUNK_SHADER = 1358740151,
	FA_JW_SILVER_HOOP_SHADER = 1019491471,
	FA_LB_1C_BELLA_SHADER = -957302167,
	FA_LB_1C_BELLS_01_SHADER = 146300165,
	FA_LB_1C_KNEE_01_SHADER = -919241173,
	FA_LB_1C_KNEE_02_SHADER = 1346121617,
	FA_LB_1C_KNEE_03_SHADER = 658185991,
	FA_LB_1C_KNEE_04_SHADER = -1184920924,
	FA_LB_1C_MINI_01_SHADER = -1964575488,
	FA_LB_1C_MINI_02_SHADER = 334472378,
	FA_LB_1C_MINI_02_ZIP_SHADER = 1748450185,
	FA_LB_1C_MINI_03_SHADER = 1692963884,
	FA_LB_1C_MINI_04_SHADER = -91487857,
	FA_LB_1C_MINI_05_SHADER = -1920257767,
	FA_LB_1C_PANTS_01_SHADER = -550424056,
	FA_LB_1C_PANTS_02_SHADER = 1178100658,
	FA_LB_1C_PANTS_03_SHADER = 826233636,
	FA_LB_1C_PANTS_04_SHADER = -1352939897,
	FA_LB_1C_SHORTS_01_SHADER = 2035435268,
	FA_LB_1C_SHORTS_02_SHADER = -530901314,
	FA_LB_1C_SKIRT_01_SHADER = -94595324,
	FA_LB_1C_SKIRT_02_SHADER = 1666565822,
	FA_LB_1C_SKIRT_03_SHADER = 340981288,
	FA_LB_1C_SKIRT_04_SHADER = -1976147061,
	FA_LB_1C_TIGHT_01_SHADER = 2002542951,
	FA_LB_1C_TIGHT_02_SHADER = -296406819,
	FA_LB_2C_KNEE_01_SHADER = 570606888,
	FA_LB_2C_KNEE_01_T_SHADER = -1498448866,
	FA_LB_2C_PANTS_SHADER = -1357130944,
	FA_LB_2C_PANTS_T_SHADER = -10508807,
	FA_LB_2C_SKIRT_01_SHADER = 1673457925,
	FA_LB_2C_SKIRT_01_T_SHADER = -1489923080,
	FA_MU_EGYPTIAN_SHADER = 425718387,
	FA_MU_GEISHA_SHADER = 789025153,
	FA_MU_NEW_HEAVY_SHADER = 90469603,
	FA_MU_NEW_LIGHT_SHADER = 340742731,
	FA_MU_NEW_NORMAL_SHADER = -666639739,
	FA_MU_PUNK_SHADER = -661445326,
	FA_PO_FORMAL_SHADER = 550259536,
	FA_PO_PJS_SHADER = -1440717596,
	FA_PO_SWIMSUIT_SHADER = -1219654005,
	FA_PO_TEPPEN_SHADER = 284667105,
	FA_PO_WORKOUT_SHADER = -1609323669,
	FA_SH_BELLA_SHADER = 1913803757,
	FA_SH_PUMP_01_SHADER = 343087962,
	FA_SH_PUMP_02_SHADER = -1921365280,
	FA_SH_PUMP_03_SHADER = -92439946,
	FA_SH_SKIN_TIGHT_01_SHADER = -454007190,
	FA_SH_SKIN_TIGHT_02_SHADER = 2113484752,
	FA_SH_SNEAKER_01_SHADER = 1075862151,
	FA_SH_SNEAKER_02_SHADER = -651621571,
	FA_SH_SNEAKER_03_SHADER = -1372701781,
	FA_SH_SNEAKER_04_SHADER = 810200584,
	FA_UB_1C_BELLA_SHADER = 323698727,
	FA_UB_1C_CROP_01_SHADER = -1876172398,
	FA_UB_1C_CROP_02_SHADER = 153268264,
	FA_UB_1C_JACKET_01_SHADER = 2000723849,
	FA_UB_1C_JACKET_02_SHADER = -297152973,
	FA_UB_1C_JACKET_02T_SHADER = 20599480,
	FA_UB_1C_JACKET_03_SHADER = -1722876251,
	FA_UB_1C_JACKET_04_SHADER = 120220422,
	FA_UB_1C_LONG_01_SHADER = 696633000,
	FA_UB_1C_LONG_02_SHADER = -1332963566,
	FA_UB_1C_LONG_03_SHADER = -947148924,
	FA_UB_1C_PUFFY_01_SHADER = 495644434,
	FA_UB_1C_PUFFY_02_SHADER = -2071740760,
	FA_UB_1C_SHORT_01_SHADER = -720786008,
	FA_UB_1C_SHORT_02_SHADER = 1275132946,
	FA_UB_1C_SHORT_02_T_SHADER = -603765651,
	FA_UB_1C_SHORT_03_SHADER = 990366852,
	FA_UB_1C_SHORT_04_SHADER = -1520215769,
	FA_UB_1C_TIGHT_01_SHADER = -1078418869,
	FA_UB_1C_TIGHT_02_SHADER = 649196529,
	FA_UB_1C_TIGHT_03_SHADER = 1370932071,
	FA_UB_1C_TIGHT_03_ZIP_SHADER = 37372361,
	FA_UB_1C_TIGHT_04_SHADER = -808298812,
	FA_UB_1C_TIGHT_05_SHADER = -1193974190,
	FA_UB_2C_LONG_SHADER = 1375097357,
	FA_UB_2C_LONG_02_SHADER = 1538993169,
	FA_UB_2C_LONG_02_T_SHADER = 1912459969,
	FA_UB_2C_LONG_T_SHADER = 540531178,
	FA_UB_2C_SHORT_01_SHADER = 1290521513,
	FA_UB_2C_SHORT_01_T_SHADER = 1670354682,
	FA_UB_2C_SHORT_02_SHADER = -706569709,
	FA_UB_2C_SHORT_02_T_SHADER = 1640573091,
	FC_CA_MILITARY_CADET_SHADER = -1123205534,
	FC_FP_BUTTERFLY_SHADER = -1521231958,
	FC_FP_CLOWN_SHADER = 1831493726,
	FC_FP_MAKEUP_SHADER = -826579208,
	FC_FP_WACKY_SHADER = 1721673791,
	FC_FR_HEAVY_SHADER = 1614517856,
	FC_FR_LIGHT_SHADER = 1896919240,
	FC_FT_NORMAL_02_SHADER = 1452772367,
	FC_FT_ROUNDED_01_SHADER = -1091380597,
	FC_GL_PINK_SUN_MAP_SHADER = -1902250451,
	FC_HH_BALL_CAP_T_SHADER = 1399801181,
	FC_HH_COWBOY_HAT_T_SHADER = -1583372117,
	FC_HH_HEADBAND_T_SHADER = 932153073,
	FC_HH_PIGTAILS_T_SHADER = 1106732449,
	FC_HH_PONYTAIL_T_SHADER = 263891542,
	FC_HH_PRINCESS_HAT_T_SHADER = -847384692,
	FC_HH_WITCH_HAT_T_SHADER = 1975183061,
	FC_HH_WIZARD_HAT_T_SHADER = 1810946794,
	FC_LB_1C_PANTSTAIN_T_SHADER = 311893948,
	FC_LB_1C_PANTS_01_SHADER = 1485903723,
	FC_LB_1C_PANTS_02_SHADER = -1046985007,
	FC_LB_1C_SHORTS_01_SHADER = -1385244733,
	FC_LB_1C_SHORTS_02_SHADER = 879199865,
	FC_LB_1C_SKIRT_01_SHADER = 2113712743,
	FC_LB_1C_SKIRT_02_SHADER = -453647395,
	FC_LB_1C_SKIRT_PRINCESS_SHADER = 1736993351,
	FC_LB_1C_SKIRT_WITCH_SHADER = -1654782239,
	FC_LB_1C_TIGHT_01_SHADER = -251902972,
	FC_LB_1C_TIGHT_02_SHADER = 1777669566,
	FC_LB_2C_PANTS_01_SHADER = -1049398934,
	FC_LB_2C_PANTS_01_T_SHADER = -1460877955,
	FC_LB_2C_PANTS_02_T_SHADER = -1431667932,
	FC_LB_2C_SHORTS_01_T_SHADER = -1795322426,
	FC_LB_2C_SKIRT_01_SHADER = -467741594,
	FC_LB_2C_SKIRT_01_T_SHADER = -1561986949,
	FC_LB_2C_SKIRT_02_SHADER = 2098693596,
	FC_LB_2C_SKIRT_02_T_SHADER = -1599912414,
	FC_PO_PJS_SHADER = -402300007,
	FC_PO_SWIMSUIT_SHADER = -686736448,
	FC_SH_POINTY_01_SHADER = -1220440717,
	FC_SH_POINTY_02_SHADER = 776527049,
	FC_SH_POINTY_PRINCESS_01_SHADER = 1133368405,
	FC_SH_POINTY_WITCH_01_SHADER = -1400500958,
	FC_SH_SKIN_TIGHT_01_SHADER = -517730839,
	FC_SH_SKIN_TIGHT_02_SHADER = 2016238675,
	FC_SH_SNEAKER_01_SHADER = -391714026,
	FC_SH_SNEAKER_02_SHADER = 1907341996,
	FC_UB_1C_LONG_01_SHADER = -2130479303,
	FC_UB_1C_LONG_02_SHADER = 403318403,
	FC_UB_1C_LONG_PRINCESS_SHADER = 304277550,
	FC_UB_1C_LONG_WITCH_SHADER = 1626589473,
	FC_UB_1C_SHORT_01_SHADER = 1386842315,
	FC_UB_1C_SHORT_02_SHADER = -878651023,
	FC_UB_1C_SHORT_02_T_SHADER = -640208914,
	FC_UB_1C_SHORT_03_SHADER = -1129846297,
	FC_UB_1C_TIGHT_01_SHADER = 941131560,
	FC_UB_1C_TIGHT_02_SHADER = -1592666478,
	FC_UB_2C_LONG_01_SHADER = 1781845050,
	FC_UB_2C_LONG_01_T_SHADER = -1484260257,
	FC_UB_2C_LONG_02_SHADER = -214065792,
	FC_UB_2C_LONG_02_T_SHADER = -1514061306,
	FC_UB_2C_SHORT_01_SHADER = -884216118,
	FC_UB_2C_SHORT_01_T_SHADER = 1717304697,
	FC_UB_2C_SHORT_02_SHADER = 1380106096,
	FC_UB_2C_SHORT_02_T_SHADER = 1679639328,
	FC_UB_2C_SHORT_03_SHADER = 625315814,
	FC_UB_2C_SHORT_03_T_SHADER = 1709123863,
	FEDERAL_LATTICE_WINDOW_DOOR_SHADER = 1675156705,
	FEDERAL_LATTICE_WINDOW_DOOR_ACTION_QUEUE_SHADER = -184322692,
	FERN_01_ROOM_SHADER = -1670691797,
	FIGHTING_STRIP_01_SHADER = -399782793,
	FINAL_ADULT_FEMALE_NUDE_SHADER = 1583557018,
	FINAL_ADULT_MALE_NUDE_SHADER = 703761717,
	FINAL_CHILD_FEMALE_NUDE_SHADER = -1729234204,
	FINAL_CLIFF_01_TOP_SHADER = -975363813,
	FINAL_CLIFF_02_MID_SHADER = -586501937,
	FINAL_CLIFF_MID_WATERFALL_SHADER = 793690405,
	FINAL_CLIFF_TOP_WATERFALL_SHADER = -305233986,
	FINAL_FLOORTILE_19_ROOM_SHADER = 697551851,
	FINAL_FLOOR_TILE_01_SHADER = -546748232,
	FINAL_FLOOR_TILE_02_SHADER = 1180702978,
	FINAL_FLOOR_TILE_03_SHADER = 828844436,
	FINAL_FLOOR_TILE_04_SHADER = -1358709705,
	FINAL_FLOOR_TILE_05_SHADER = -670790495,
	FINAL_FLOOR_TILE_06_SHADER = 1091427611,
	FINAL_FLOOR_TILE_07_SHADER = 906685837,
	FINAL_FLOOR_TILE_08_SHADER = -1498025956,
	FINAL_FLOOR_TILE_09_SHADER = -776814454,
	FINAL_FLOOR_TILE_09_ROOM_CHARED_SHADER = -281965340,
	FINAL_FLOOR_TILE_10_SHADER = -1317713553,
	FINAL_FLOOR_TILE_11_SHADER = -965576199,
	FINAL_FLOOR_TILE_12_SHADER = 1601906755,
	FINAL_FLOOR_TILE_13_SHADER = 679221461,
	FINAL_FLOOR_TILE_14_SHADER = -1239904906,
	FINAL_FLOOR_TILE_15_SHADER = -1054884384,
	FINAL_FLOOR_TILE_16_SHADER = 1477897306,
	FINAL_FLOOR_TILE_17_SHADER = 789699788,
	FINAL_FLOOR_TILE_18_SHADER = -1079066275,
	FINAL_FLOOR_TILE_19_SHADER = -928386613,
	FINAL_FLOOR_TILE_20_SHADER = -1705502036,
	FINAL_FLOOR_TILE_21_SHADER = -312530374,
	FINAL_FLOOR_TILE_22_SHADER = 1951824768,
	FINAL_FLOOR_TILE_23_SHADER = 55659286,
	FINAL_FLOOR_TILE_24_SHADER = -1657413963,
	FINAL_FLOOR_TILE_25_SHADER = -365760989,
	FINAL_FLOOR_TILE_26_SHADER = 1933295513,
	FINAL_FLOOR_TILE_27_SHADER = 71077647,
	FINAL_FLOOR_TILE_28_SHADER = -1803316578,
	FINAL_FLOOR_TILE_29_SHADER = -477847032,
	FINAL_FLOOR_TILE_30_SHADER = -2092749843,
	FINAL_FLOOR_TILE_31_SHADER = -196863109,
	FINAL_FLOOR_TILE_32_SHADER = 1833781953,
	FINAL_FLOOR_TILE_33_SHADER = 441088599,
	FINAL_FLOOR_TILE_34_SHADER = -2077298700,
	FINAL_FLOOR_TILE_35_SHADER = -215359646,
	FINAL_FLOOR_TILE_36_SHADER = 1780518616,
	FINAL_FLOOR_TILE_37_SHADER = 489143886,
	FINAL_FLOOR_TILE_38_SHADER = -1919376417,
	FINAL_FLOOR_TILE_39_SHADER = -90205367,
	FINAL_FLOOR_TILE_40_SHADER = -872235734,
	FINAL_FLOOR_TILE_41_SHADER = -1157263940,
	FINAL_FLOOR_TILE_42_SHADER = 571268102,
	FINAL_FLOOR_TILE_43_SHADER = 1426844816,
	FINAL_FLOOR_TILE_44_SHADER = -881886925,
	FINAL_FLOOR_TILE_45_SHADER = -1134016091,
	FINAL_FLOOR_TILE_46_SHADER = 627120159,
	FINAL_FLOOR_TILE_46_LOTS_SHADER = 741020850,
	FINAL_FLOOR_TILE_47_SHADER = 1382426761,
	FINAL_FLOOR_TILE_48_SHADER = -1025952488,
	FINAL_FLOOR_TILE_49_SHADER = -1243740786,
	FINAL_FLOOR_TILE_50_SHADER = -719745941,
	FINAL_FLOOR_TILE_51_SHADER = -1575043843,
	FINAL_FLOOR_TILE_52_SHADER = 991423815,
	FINAL_FLOOR_TILE_53_SHADER = 1276173777,
	FINAL_FLOOR_TILE_54_SHADER = -764131214,
	FINAL_FLOOR_TILE_55_SHADER = -1519159068,
	FINAL_FLOOR_TILE_56_SHADER = 1014638942,
	FIREBRAND_SMOKE_DETECTOR_SHADER = 1282771947,
	FIREBRAND_SMOKE_DETECTOR_ACTION_QUEUE_SHADER = 50335691,
	FIREPLACE_LOG_TGA_SHADER = -1267198651,
	FIRE_ACTION_QUEUE_SHADER = 2082458760,
	FLARE_PARTICLE_SHADER = -458298323,
	FLOORS_AGAIN_SHADER = 1282546766,
	FLOORS_AGAIN_CHARED_SHADER = 727797451,
	FLOOR_RUG_BY_LEOPARD_LIFE_SHADER = 1769553741,
	FLOOR_RUG_BY_LEOPARD_LIFE_ACTION_QUEUE_SHADER = 1685554748,
	FLOWERPOWER_ANARCHY_SHADER = 74359844,
	FLOWERPOWER_FLOWER_SHADER = -1878931195,
	FLOWERPOWER_PEACESIGN_SHADER = 1978873991,
	FLOWERPOWER_RECYCLE_SHADER = -449601634,
	FLUSH_FORCE_5_ACTION_QUEUE_SHADER = -1525905226,
	FLUSH_FORCE_5_XLT_SHADER = 470758490,
	FLY_SHADER = -986857159,
	FONT_ONESTROKE_SCRIPT_24_SHADER = -150927626,
	FONT_SYSTEMFONT_12_SHADER = 1108813115,
	FOOD_ACTION_QUEUE_SHADER = 183347545,
	FOUNTAIN_OF_TRANQUILITY_SHADER = -1299510361,
	FOUNTAIN_OF_TRANQUILITY_ACTION_QUEUE_SHADER = -1849640901,
	FREEZE_SECRET_REFRIDGERATOR_SHADER = -1844346097,
	FREEZE_SECRET_REFRIDGERATOR_02_SHADER = -26051783,
	FREEZE_SECRET_REFRIGERATOR_ACTION_QUEUE_SHADER = 2061671094,
	FRUIT_CAKE_ACTION_QUEUE_SHADER = -49942828,
	FUZZY_LOGIC_DISHWASHER_SHADER = 1424750824,
	FUZZY_LOGIC_DISHWASHER_02_SHADER = -1015281947,
	FUZZY_LOGIC_DISHWASHER_ACTION_QUEUE_SHADER = 1376136015,
	FU_HH_AFRO_SHADER = -753877958,
	FU_HH_BEEHIVE_SHADER = -301094195,
	FU_HH_COLORED_SHADER = 2143151426,
	FU_HH_EGYPTIAN_SHADER = -823748571,
	FU_HH_EGYPTIAN_T_SHADER = 115065854,
	FU_HH_ELEGANT_SHADER = -1300349746,
	FU_HH_GEISHA_T_SHADER = 1658161408,
	FU_HH_HEADBAND_SHADER = -1531608765,
	FU_HH_HIGHLIGHTS_SHADER = -1256944228,
	FU_HH_LONG_SHADER = -972584441,
	FU_HH_LONG_02_SHADER = -713612083,
	FU_HH_MED_LENGTH_SHADER = -1606534091,
	FU_HH_MOB_BOSS_T_SHADER = -848509033,
	FU_HH_MOHAWK_SHADER = -38040767,
	FU_HH_PIGTAILS_SHADER = -676221915,
	FU_HH_PONYTAIL_SHADER = -229309501,
	FU_HH_PUNK_SPIKED_SHADER = -992899467,
	FU_HH_PUNK_SPIKED_T_SHADER = 1219764684,
	FU_HH_THEIF_T_SHADER = 1578085124,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_00_SEARCH_SHADER = -173293897,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_01_SHADER = 1301619140,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_ACTION_QUEUE_SHADER = -916626129,
	GARDEN_LAMP_BY_LUNATECH_SHADER = 1125204274,
	GARDEN_LAMP_BY_LUNATECH_ACTION_QUEUE_SHADER = -2032101117,
	GENERIC_HEAD_ACTION_QUEUE_SHADER = -1168152768,
	GENERIC_RUG_01_SHADER = -932069645,
	GENERIC_RUG_02_SHADER = 1366880073,
	GIFT_CHOCOLATES_ACTION_QUEUE_SHADER = 267568360,
	GIFT_FLOWERS_ACTION_QUEUE_SHADER = -2114759280,
	GO_HERE_SHADER = -28851942,
	GRANDFATHER_CLOCK_SHADER = -988042556,
	GRANDFATHER_CLOCK_ACTION_QUEUE_SHADER = 203987305,
	GRANDFATHER_CLOCK_ROOM_SHADER = -2121132844,
	GRASS_GRID_SHADER = 1038804442,
	GREY_SHADER = -687466666,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_SHADER = -1664649378,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_ACTION_QUEUE_SHADER = -1605525634,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_ROOM_SHADER = 569401448,
	HAMBURGER_ACTION_QUEUE_SHADER = 1474889824,
	HAMBURGER_TRAY_SHADER = -19038447,
	HAZARD_THE_GUESS_BY_CONNER_TIIS_SHADER = -273889149,
	HAZARD_THE_GUESS_BY_CONNOR_TIIST_ACTION_QUEUE_SHADER = 7335304,
	HAZARD_THE_GUESS_BY_CONNOT_TIIST_ROOM_CHARED_SHADER = 1288357384,
	HEAD_IN_JAR_CURIO_SHADER = -287101311,
	HEAD_IN_JAR_CURIO_ACTION_QUEUE_SHADER = 1274450240,
	HEAD_IN_JAR_CURIO_GLASS_SHADER = -1458777065,
	HIGHBRAU_COAT_OF_ARMS_SHADER = 901898024,
	HIGHBRAU_COAT_OF_ARMS_ACTION_QUEUE_SHADER = 2036209049,
	HORRORWITZ_STAR_TRACK_BACKYARD_TELESCOPE_SHADER = -1227908772,
	HORRORWITZ_STAR_TRACK_BACKYARD_TELESCOPE_ACTION_QUEUE_SHADER = -2096527201,
	HORROR_CHANNEL_010000_SHADER = -1815367598,
	HORROR_CHANNEL_010001_SHADER = -456359740,
	HORROR_CHANNEL_010002_SHADER = 2110116222,
	HORROR_CHANNEL_010003_SHADER = 180543976,
	HORROR_CHANNEL_010004_SHADER = -1801030581,
	HORROR_CHANNEL_010005_SHADER = -475970339,
	HORROR_CHANNEL_010006_SHADER = 2057835879,
	HORROR_CHANNEL_010007_SHADER = 229582321,
	HORROR_CHANNEL_010008_SHADER = -1659881376,
	HORROR_CHANNEL_010009_SHADER = -367589130,
	HORROR_CHANNEL_010010_SHADER = -1966046957,
	HORROR_CHANNEL_010011_SHADER = -36195963,
	HORROR_CHANNEL_010012_SHADER = 1692327999,
	HORROR_CHANNEL_010013_SHADER = 333041833,
	HORROR_CHANNEL_010014_SHADER = -1916975862,
	HORROR_CHANNEL_010015_SHADER = -88443492,
	HOUSE01_SHADER = -989542964,
	HOUSE02_SHADER = 1544393846,
	HOUSE03_SHADER = 722117856,
	HOUSE04_SHADER = -1251069629,
	HOUSE05_SHADER = -1033305643,
	HOUSE06_SHADER = 1533038703,
	HOUSE08_SHADER = -1126662808,
	HOUSEC01_SHADER = 1583841953,
	HOUSEC02_SHADER = -949038309,
	HOUSEC03_SHADER = -1335237747,
	HOUSEC04_SHADER = 772634158,
	HOUSEC05_SHADER = 1493845688,
	HOUSEC06_SHADER = -1073539326,
	HOUSEC07_SHADER = -1224464492,
	HOUSEC08_SHADER = 666581509,
	HYDRONOMIC_KITCHEN_SINK_01_SHADER = 2041209347,
	HYDRONOMIC_KITCHEN_SINK_ACTION_QUEUE_SHADER = -1260351579,
	HYDROTHERA_BATHTUB_SHADER = 979298098,
	HYDROTHERA_BATHTUB_ACTION_QUEUE_SHADER = 1590152064,
	HYGEIA_O_MATIC_TOILET_SHADER = -2120784311,
	HYGEIA_O_MATIC_TOILET_ACTION_QUEUE_SHADER = 1416251667,
	ICE_CHEST_SHADER = 317915674,
	ICE_CHEST_ACTION_QUEUE_SHADER = 32478091,
	ICON_BG_SHADER = 692905913,
	ICON_NEIGHBORHOOD_SHADER = -669725480,
	INFO_UP_SHADER = -1506873310,
	JADE_PLANT_SHADER = 2142436463,
	JADE_PLANT_ACTION_QUEUE_SHADER = 945236217,
	JADE_PLANT_RUNTIME_SHADER = 406729926,
	JOB_SHADER = 1837081202,
	JUNKER_SHADER = -526578011,
	JUNK_GENIE_TRASH_COMPACTOR_SHADER = 1875749862,
	JUNK_GENIE_TRASH_COMPACTOR_ACTION_QUEUE_SHADER = 490705752,
	JUSTA_BATHTUB_SHADER = -2009441109,
	JUSTA_BATHTUB_ACTION_QUEUE_SHADER = -1572011535,
	KIDSALIENS_ALIENHEAD_SHADER = 1841562887,
	KIDSALIENS_OCTO_CREATURE_SHADER = 1795521280,
	KIDSALIENS_UFO_SHADER = -1382244467,
	KIDSPETS_CAT_SHADER = -2067744332,
	KIDSPETS_DOG_SHADER = -1682783391,
	KIDSPETS_FISH_SHADER = 268543566,
	KIDSSCHOOL_BOOK_SHADER = -1217735224,
	KIDSSCHOOL_GLOBE_SHADER = 1244389650,
	KIDSSCHOOL_MATH_SHADER = -710380876,
	KIDSTOYS_BEAR_SHADER = -1105957424,
	KIDSTOYS_BUBBLES_SHADER = -1430073995,
	KIDSTOYS_TOP_SHADER = -1729910852,
	KINDERSTUFF_DRESSER_SHADER = 1217071111,
	KINDERSTUFF_DRESSER_ACTION_QUEUE_SHADER = -232515463,
	KINDERSTUFF_NIGHTSTAND_SHADER = -282357280,
	KINDERSTUFF_NIGHTSTAND_ACTION_QUEUE_SHADER = 1782706693,
	KRAFTKING_WOODWORKING_BENCH_SHADER = 1786286454,
	KRAFTKING_WOODWORKING_TABLE_ACTION_QUEUE_SHADER = 675180585,
	L1_SHADER = 1288377036,
	L1_AND_R1_SHADER = -883455766,
	L2_SHADER = -708689034,
	L2_AND_R2_SHADER = -590225741,
	L2_PLAYER_SHADER = 368653731,
	LEISURE_BICYCLE_SHADER = 973209766,
	LEISURE_ROLLERBLADES_SHADER = -1236916578,
	LEISURE_SAILING_SHADER = -350212923,
	LEISURE_SNOWSKI_SHADER = -1722792758,
	LEISURE_SWIMING_FLIPPERS_SHADER = -1527393045,
	LIBRI_DI_REGINA_BOOKCASE_SHADER = -1246900290,
	LIBRI_DI_REGINA_BOOKCASE_ACTION_QUEUE_SHADER = 2097523083,
	LIGHT_LOAD_HOUSE_SHADER = -1257612320,
	LIGHT_LOAD_LAMP_SHADER = 1259393632,
	LIGHT_LOAD_MOON_SHADER = 822855662,
	LIGHT_LOAD_SUN_SHADER = -1146014223,
	LIMO_ZINE_SHADER = 979060604,
	LIMO_ZINE_SPECULAR__SHADER = 1534735604,
	LITTLEWHITEDIAMOND_SHADER = -695530688,
	LITTLEWHITESQUARE_SHADER = -1570850150,
	LITTLE_HEART_SHADER = -1195643863,
	LLAMARK_REFRIDGERATOR_SHADER = -50724348,
	LLAMARK_REFRIDGERATOR_02_SHADER = -412678580,
	LLAMARK_REFRIDGERATOR_A_05_ACTION_QUEUE_SHADER = -2133117283,
	LOCKED_ACTION_QUEUE_SHADER = -1079417647,
	LONDON_CUPPERTINO_DESK_TABLE_SHADER = -722119768,
	LONDON_CUPPERTINO_DESK_TABLE_ACTION_QUEUE_SHADER = -60142530,
	LONDON_MESA_DINING_DESIGN_SHADER = -291174719,
	LONDON_MESA_DINING_DESIGN_ACTION_QUEUE_SHADER = -692355519,
	LONG_01_SHADER = -391012062,
	LONG_03_SHADER = 113229838,
	LONG_04_SHADER = -1730456147,
	LONG_05_SHADER = -270768837,
	LONG_06_SHADER = 1993684097,
	LONG__02_SHADER = -1781665004,
	LOT_FENCE_01_SHADER = -2140514600,
	LOVE_N_HAIGHT_LAMP_ACTION_QUEUE_SHADER = 532808067,
	LUXIARE_LOVESEAT_ACTION_QUEUE_SHADER = 1252095717,
	LUXURIARE_LOVESEAT_SHADER = 2007726293,
	MAGIC_MYSTERY_TOY_BOX_SHADER = -766057033,
	MAGIC_MYSTERY_TOY_BOX_ACTION_QUEUE_SHADER = -1857064997,
	MAILBOX_SHADER = -1713759215,
	MAILBOX_ACTION_QUEUE_SHADER = -532983442,
	MAIN_LOGO_LOAD_SIMSPS2_SHADER = -175843649,
	MALE_CHILD_SHADER = -952392200,
	MAPLE_DOOR_FRAME_SHADER = 1357817149,
	MAPLE_DOOR_FRAME_ACTION_QUEUE_SHADER = 1017241056,
	MASTER_SUITE_TUB_SHADER = -845633452,
	MASTER_SUITE_TUB_ACTION_QUEUE_SHADER = 162174801,
	MAXIS_LOGO_BLACK_CLEAN_SHADER = 705153205,
	MAXIS_LOGO_SCREEN_SHADER = -535357129,
	MA_CA_CRIMINAL_BURGLAR_SHADER = 1671987813,
	MA_CA_CRIMINAL_MOBSTER_SHADER = -26233865,
	MA_CA_EXTREME_OUTDOORS_SHADER = 1046714719,
	MA_CA_EXTREME_RACECAR_DRIVER_SHADER = -829366581,
	MA_CA_EXTREME_SPY_SHADER = -1708978054,
	MA_CA_MILITARY_ASTRONAUT_SHADER = 644431270,
	MA_CA_MILITARY_RANGER_SHADER = -1758533342,
	MA_CA_MILITARY_RECRUIT_SHADER = -635085683,
	MA_CA_MUSICIAN_LOUNGE_SINGER_SHADER = -246426258,
	MA_CA_MUSICIAN_ROCKSTAR_SHADER = 1743092065,
	MA_CA_SLACKER_CLERK_SHADER = 977388551,
	MA_CA_SLACKER_LIFEGUARD_SHADER = 209639677,
	MA_CA_SLACKER_SLACKER_SHADER = -536790596,
	MA_FH_BEARD_01_SHADER = 287646563,
	MA_FH_BEARD_02_SHADER = -2010352935,
	MA_FH_GOATEE_01_SHADER = 36463611,
	MA_FH_GOATEE_02_SHADER = -1692061119,
	MA_FH_MUSTACHE_01_SHADER = 1389967300,
	MA_FH_MUTTONCHOPS_SHADER = -2050747423,
	MA_FH_SOUL_PATCH_SHADER = -357463015,
	MA_FT_ASIAN_01_SHADER = 43541321,
	MA_FT_ASIAN_02_SHADER = -1684983053,
	MA_FT_BLACK_01_SHADER = -1127437902,
	MA_FT_BLACK_02_SHADER = 633731080,
	MA_FT_DEFINED_CUT_SHADER = -884658845,
	MA_FT_NORMAL_01_SHADER = -268124186,
	MA_FT_NORMAL_02_SHADER = 1762520668,
	MA_FT_ROUNDED_SHADER = -820389990,
	MA_FT_ROUNDED_02_SHADER = -710536931,
	MA_GL_NERD_EYEMAP2_SHADER = -1390605668,
	MA_GL_NORMAL_EYEMAP_SHADER = 1143780422,
	MA_GL_NORMAL_SUNMAP_SHADER = -2091761728,
	MA_GL_NORMAL_SUN_02MAP_SHADER = 1386033521,
	MA_GL_PUNKY_SUNMAP_SHADER = 731469071,
	MA_HH_RECEDING_SHADER = -1332638620,
	MA_JW_GOLDMAP_SHADER = -1436252199,
	MA_JW_SILVERMAP_SHADER = -7748345,
	MA_LB_1C_PANTS_01_SHADER = 1790649874,
	MA_LB_1C_PANTS_02_SHADER = -206407768,
	MA_LB_1C_PANTS_03_SHADER = -2068494530,
	MA_LB_1C_PANTS_04_SHADER = 449958557,
	MA_LB_1C_PANTS_05_SHADER = 1842799115,
	MA_LB_1C_PANTS_06_SHADER = -186666063,
	MA_LB_1C_PANTS_07_SHADER = -2082962649,
	MA_LB_1C_PANTS_08_SHADER = 325557942,
	MA_LB_1C_PANTS_09_SHADER = 1684057632,
	MA_LB_1C_PANTS_10_SHADER = 78063557,
	MA_LB_1C_SHORTS_01_SHADER = -2071645078,
	MA_LB_1C_SHORTS_02_SHADER = 495740368,
	MA_LB_1C_SHORTS_03_SHADER = 1787516230,
	MA_LB_1C_SHORTS_04_SHADER = -185614107,
	MA_LB_1C_SHORTS_05_SHADER = -2081886093,
	MA_LB_1C_TIGHT_01_SHADER = -1026132611,
	MA_LB_1C_TIGHT_02_SHADER = 1541350599,
	MA_LB_1C_TIGHT_03_SHADER = 752358481,
	MA_LB_1C_TIGHT_04_SHADER = -1296268814,
	MA_LB_2C_PANTS_01_B_SHADER = -216301437,
	MA_LB_2C_PANTS_01_T_SHADER = 131020242,
	MA_LB_2C_PANTS_02_B_SHADER = -245547302,
	MA_LB_2C_PANTS_02_T_SHADER = 92900235,
	MA_LB_2C_PANTS_03_B_SHADER = -257993491,
	MA_LB_2C_PANTS_03_T_SHADER = 72081852,
	MA_LB_2C_SHORTS_01_B_SHADER = 653239582,
	MA_LB_2C_SHORTS_01_T_SHADER = -767881137,
	MA_LB_2C_SHORTS_02_B_SHADER = 615062343,
	MA_LB_2C_SHORTS_02_T_SHADER = -797069802,
	MA_LB_2C_TIGHT_01_B_SHADER = -484679736,
	MA_LB_2C_TIGHT_01_T_SHADER = 399043225,
	MA_LB_2C_TIGHT_02_B_SHADER = -514137711,
	MA_LB_2C_TIGHT_02_T_SHADER = 361649344,
	MA_PO_FORMAL_SHADER = 1365176158,
	MA_PO_NAKED_SHADER = -194064687,
	MA_PO_PAJAMAS_SHADER = 873783689,
	MA_PO_SKELETON_PLUS_SHADER = 2011493939,
	MA_PO_SWIMSUIT_SHADER = -126503578,
	MA_PO_TEPPEN_CHEF_SHADER = -1003294587,
	MA_SH_BOOTS_01_SHADER = 309391186,
	MA_SH_BOOTS_02_SHADER = -1954955544,
	MA_SH_CLOGS_01_SHADER = -932046845,
	MA_SH_CLOGS_02_SHADER = 1367034297,
	MA_SH_DRESS_01_SHADER = -1045568339,
	MA_SH_SKIN_TIGHT_01_SHADER = 1309146438,
	MA_SH_SNEAKERS_01_SHADER = 1435291536,
	MA_SH_SNEAKERS_02_SHADER = -863658454,
	MA_UB_1C_COLLARED_01_SHADER = 1768436971,
	MA_UB_1C_COLLARED_02_SHADER = -262052527,
	MA_UB_1C_COLLARED_03_SHADER = -2023336505,
	MA_UB_1C_JACKET_01_B_SHADER = 1554723383,
	MA_UB_1C_JACKET_01_T_SHADER = -1468037274,
	MA_UB_1C_JACKET_02_B_SHADER = 1592626286,
	MA_UB_1C_JACKET_02_T_SHADER = -1439090369,
	MA_UB_1C_JACKET_03_SHADER = 1687784907,
	MA_UB_1C_JACKET_04_B_SHADER = 1516302556,
	MA_UB_1C_JACKET_04_T_SHADER = -1363917427,
	MA_UB_1C_LONG_SLV_01_SHADER = -2102313554,
	MA_UB_1C_LONG_SLV_02_SHADER = 465071124,
	MA_UB_1C_LONG_SLV_03_SHADER = 1824480386,
	MA_UB_1C_LONG_SLV_04_SHADER = -220477151,
	MA_UB_1C_LONG_SLV_05_SHADER = -2049115721,
	MA_UB_1C_SHORT_SLV_01_SHADER = -1987026702,
	MA_UB_1C_SHORT_SLV_02_SHADER = 278475080,
	MA_UB_1C_SHORT_SLV_03_SHADER = 1738408414,
	MA_UB_1C_SHORT_SLV_04_SHADER = -101018499,
	MA_UB_1C_SHORT_SLV_04_B_SHADER = -1982080316,
	MA_UB_1C_SHORT_SLV_04_T_SHADER = 2098163605,
	MA_UB_1C_SHORT_SLV_05_SHADER = -1895979797,
	MA_UB_1C_TIGHT_01_SHADER = 171095633,
	MA_UB_1C_TIGHT_02_SHADER = -1824790549,
	MA_UB_1C_TIGHT_03_SHADER = -465774723,
	MA_UB_2C_LONG_SLV_01_SHADER = -19916683,
	MA_UB_2C_LONG_SLV_01_B_SHADER = -1525901075,
	MA_UB_2C_LONG_SLV_01_T_SHADER = 1373121980,
	MA_UB_2C_LONG_SLV_02_SHADER = 1742293455,
	MA_UB_2C_LONG_SLV_02_B_SHADER = -1488312652,
	MA_UB_2C_LONG_SLV_02_T_SHADER = 1402901477,
	MA_UB_2C_SHORT_SLV_01_SHADER = -1729295733,
	MA_UB_2C_SHORT_SLV_02_SHADER = 31742769,
	MC_CA_MILITARY_CADET_SHADER = -1887460070,
	MC_FE_HEAVY_SHADER = -513559708,
	MC_FE_LIGHT_SHADER = -263678516,
	MC_FE_MED_SHADER = -438653624,
	MC_FP_CLOWN_SHADER = 1309402906,
	MC_FP_KISS_SHADER = 577457610,
	MC_FP_ZANNY_SHADER = -931099428,
	MC_FP_ZORRO_SHADER = 801130999,
	MC_FT_ASIAN_SHADER = -789897531,
	MC_FT_BLACK_SHADER = -746658711,
	MC_FT_NORMAL_SHADER = 459981428,
	MC_FT_ROUNDED_SHADER = 589449477,
	MC_HH_COWBOY_HAT_T_SHADER = 1548278725,
	MC_HH_PIRATE_HAT_T_SHADER = -1854930228,
	MC_HH_WIZARD_HAT_SHADER = -790299315,
	MC_LB_1C_PANTS_01_SHADER = -316996751,
	MC_LB_1C_PANTS_02_SHADER = 1947357899,
	MC_LB_1C_PANTS_03_SHADER = 51733085,
	MC_LB_1C_PANTS_04_SHADER = -1653475330,
	MC_LB_1C_PANTS_05_SHADER = -361314456,
	MC_LB_1C_PANTS_06_SHADER = 1937741522,
	MC_LB_1C_PANTS_07_SHADER = 75015748,
	MC_LB_1C_PANTS_08_SHADER = -1798849579,
	MC_LB_1C_PANTS_09_SHADER = -473920701,
	MC_LB_1C_PANTS_10_SHADER = -2096692570,
	MC_LB_1C_SHORTS_01_SHADER = 1354343597,
	MC_LB_1C_SHORTS_02_SHADER = -911149801,
	MC_LB_1C_SHORTS_03_SHADER = -1095252607,
	MC_LB_1C_SHORTS_04_SHADER = 550719522,
	MC_LB_1C_TIGHT_01_SHADER = 1165381662,
	MC_LB_1C_TIGHT_02_SHADER = -595656284,
	MC_LB_1C_TIGHT_03_SHADER = -1418186446,
	MC_LB_2C_PANTS_01_B_SHADER = -154146048,
	MC_LB_2C_PANTS_01_T_SHADER = 35348049,
	MC_LB_2C_PANTS_02_B_SHADER = -192326311,
	MC_LB_2C_PANTS_02_T_SHADER = 6152200,
	MC_LB_2C_PANTS_03_B_SHADER = -179617938,
	MC_LB_2C_PANTS_03_T_SHADER = 27232831,
	MC_LB_2C_SHORTS_01_B_SHADER = 1381737455,
	MC_LB_2C_SHORTS_01_T_SHADER = -1500571970,
	MC_LB_2C_SHORTS_02_B_SHADER = 1344085430,
	MC_LB_2C_SHORTS_02_T_SHADER = -1530287897,
	MC_LB_2C_TIGHT_01_B_SHADER = -423087029,
	MC_LB_2C_TIGHT_01_T_SHADER = 303857946,
	MC_LB_2C_TIGHT_02_B_SHADER = -460420590,
	MC_LB_2C_TIGHT_02_T_SHADER = 274349891,
	MC_LB_COWBOY_SHADER = 1204952562,
	MC_LB_COWBOY_T_SHADER = 1433431741,
	MC_PO_FORMAL_SHADER = 154293919,
	MC_PO_NAKED_SHADER = -258269460,
	MC_PO_PAJAMAS_SHADER = -667975914,
	MC_PO_SWIMSUIT_SHADER = -1742143443,
	MC_SH_BOOTS_01_SHADER = 1915509273,
	MC_SH_BOOTS_02_SHADER = -349893725,
	MC_SH_CLOGS_01_SHADER = -1473335992,
	MC_SH_CLOGS_02_SHADER = 824704242,
	MC_SH_DRESS_01_SHADER = -1578020378,
	MC_SH_SKIN_TIGHT_01_SHADER = 1272157893,
	MC_SH_SNEAKERS_01_SHADER = -768808205,
	MC_SH_SNEAKERS_02_SHADER = 1260763977,
	MC_UB_1C_COLLARED_01_SHADER = 500970010,
	MC_UB_1C_COLLARED_02_SHADER = -2066390112,
	MC_UB_1C_COLLARED_03_SHADER = -204319946,
	MC_UB_1C_JACKET_01_B_SHADER = 673133766,
	MC_UB_1C_JACKET_01_T_SHADER = -590642793,
	MC_UB_1C_JACKET_02_B_SHADER = 710511263,
	MC_UB_1C_JACKET_02_T_SHADER = -561168434,
	MC_UB_1C_JACKET_03_SHADER = -1331356404,
	MC_UB_1C_JACKET_04_B_SHADER = 785708589,
	MC_UB_1C_JACKET_04_T_SHADER = -637516932,
	MC_UB_1C_LONG_SLV_01_SHADER = -167429281,
	MC_UB_1C_LONG_SLV_01_T_SHADER = -1663789005,
	MC_UB_1C_LONG_SLV_02_SHADER = 1863084773,
	MC_UB_1C_LONG_SLV_03_SHADER = 403397235,
	MC_UB_1C_LONG_SLV_04_SHADER = -2039492656,
	MC_UB_1C_LONG_SLV_05_SHADER = -244777146,
	MC_UB_1C_SHORT_SLV_01_SHADER = 1130239614,
	MC_UB_1C_SHORT_SLV_02_SHADER = -631814204,
	MC_UB_1C_SHORT_SLV_03_SHADER = -1387235502,
	MC_UB_1C_SHORT_SLV_04_B_SHADER = -1484057788,
	MC_UB_1C_SHORT_SLV_04_T_SHADER = 1398777365,
	MC_UB_1C_SHORT_SLV_05_SHADER = 1144246887,
	MC_UB_1C_TIGHT_01_SHADER = -1919773902,
	MC_UB_1C_TIGHT_02_SHADER = 345752200,
	MC_UB_1C_TIGHT_03_SHADER = 1671229982,
	MC_UB_2C_LONG_SLV_01_B_SHADER = 1103665552,
	MC_UB_2C_LONG_SLV_01_T_SHADER = -1256444735,
	MC_UB_2C_LONG_SLV_02_B_SHADER = 1133389769,
	MC_UB_2C_LONG_SLV_02_T_SHADER = -1218801000,
	MC_UB_2C_SHORT_SLV_01_SHADER = 1378057223,
	MC_UB_2C_SHORT_SLV_02_SHADER = -886428227,
	MC_UB_2C_SHORT_SLV_02_T_SHADER = 71860515,
	MC_UB_COWBOY_SHADER = 1202842072,
	MC_UB_COWBOY_T_SHADER = -2134141709,
	MEDICINE_CABINET_SHADER = -860737754,
	MEDICINE_CABINET_ACTION_QUEUE_SHADER = 1286366364,
	MEET_MARCO_SHADER = -2043674472,
	MEET_MARCO_ACTION_QUEUE_SHADER = -571867222,
	MEMORYCARD_LOAD_SCREEN_SHADER = -1019991247,
	MEMORYCARD_LOAD_SCREEN_02_SHADER = -44215980,
	MENUBEVEL_B___R_SHADER = 1099240078,
	MENUBEVEL_RIGHT_SHADER = -1430102492,
	MENUBEVEL_T___L_SHADER = 1412058575,
	MENUICON__BUDGET_SHADER = 1554416462,
	MENUICON__BUILD_MENU_DOOR_SHADER = 1554645435,
	MENUICON__BUILD_MENU_FIREPLACE_SHADER = 1849748447,
	MENUICON__BUILD_MENU_FLOOR_SHADER = -1668182078,
	MENUICON__BUILD_MENU_PLANT_SHADER = -1982376802,
	MENUICON__BUILD_MENU_WALLNFENCE_SHADER = -282647568,
	MENUICON__BUILD_MENU_WALLPAPER_SHADER = 754394072,
	MENUICON__BUILD_MENU_WATER_SHADER = -639152842,
	MENUICON__BUILD_MENU_WINDOW_SHADER = 420782879,
	MENUICON__BUILD_MODE_SHADER = -2031516185,
	MENUICON__BUY_MENU_APPLIANCES_SHADER = -1482412187,
	MENUICON__BUY_MENU_DECORATIVE_SHADER = -1440744452,
	MENUICON__BUY_MENU_ELECTRONICS_SHADER = -1598403026,
	MENUICON__BUY_MENU_LIGHTING_SHADER = 1232352795,
	MENUICON__BUY_MENU_MISCELLANEOUS_SHADER = -88813329,
	MENUICON__BUY_MENU_PLUMBING_SHADER = -1009510021,
	MENUICON__BUY_MENU_SEATING_SHADER = 1134758172,
	MENUICON__BUY_MENU_SURFACES_SHADER = 868540834,
	MENUICON__BUY_MODE_SHADER = -215062482,
	MENUICON__DISK_SHADER = 1793460482,
	MENUICON__DONE_SHADER = 1992242347,
	MENUICON__EXIT_SHADER = -224702450,
	MENUICON__FAMILY_ADD_SHADER = 1288102648,
	MENUICON__FAMILY_CHANGE_NAME_SHADER = -1636227318,
	MENUICON__FAMILY_DELETE_SHADER = 1559297877,
	MENUICON__FAMILY_EDIT_SHADER = 937570230,
	MENUICON__FAMILY_MAIN_SHADER = 167722184,
	MENUICON__FENCE_SHADER = -689861820,
	MENUICON__FLOORS_SHADER = -399314137,
	MENUICON__LEFT_ARROW_SHADER = 66663410,
	MENUICON__LIGHTING_LOAD_SHADER = 639972566,
	MENUICON__NEIGHBORHOOD_SHADER = 563242833,
	MENUICON__OPTIONS_CONTROLLER_SHADER = 685675725,
	MENUICON__OPTIONS_DISPLAY_SHADER = -331116604,
	MENUICON__OPTIONS_GAMEPLAY_SHADER = -522153397,
	MENUICON__OPTIONS_MAIN_SHADER = -1255512863,
	MENUICON__OPTIONS_SOUND_SHADER = 1580766794,
	MENUICON__RIGHT_ARROW_SHADER = 605031556,
	MENUICON__SELECT_SHADER = 1688641269,
	MENUICON__SIM_BODY_SHADER = 929342389,
	MENUICON__SIM_HEAD_SHADER = 1262444187,
	MENUICON__SIM_MAIN_SHADER = 1407477091,
	MENUICON__SIM_PERSONALITY_SHADER = 1580087523,
	MENUICON__TO_DO_LIST_SHADER = -1521908452,
	MENUICON__WALLS_SHADER = 1959518161,
	MENU_D_PAD_INVERSE_1_SHADER = -905999463,
	MENU_GLOW_01_SHADER = -629067333,
	MENU_GLOW_02_SHADER = 1133010945,
	MENU_TIME_MONEY_WINDOW_INVERSE_SHADER = 653851785,
	MESQUITE_DESK_TABLE_SHADER = -36534249,
	MESQUITE_DESK_TABLE_ACTION_QUEUE_SHADER = 1304982175,
	METAL_FENCE_01_SHADER = 285097338,
	METAL_FENCE_TYPE1_SHADER = -1266272118,
	METAL_FENCE_TYPE2_SHADER = 764373296,
	MICROSCOTCH_CORVETTA_Q628_1500JA_SHADER = 450132433,
	MICROSCOTCH_CORVETTA_Q628_1500JA_ACTION_QUEUE_SHADER = 308897742,
	MILITARY_JEEP_SHADER = 1837017856,
	MILITARY_JEEP_SPECULAR__SHADER = 1021941782,
	MIRROR_SHADER = -1419780916,
	MODERN_MISSION_BED_SHADER = 1119873414,
	MODERN_MISSION_BED_ACTION_QUEUE_SHADER = -747044037,
	MODERN_MISSION_BED_SHEETS_SHADER = 625068602,
	MODERN_MISSION_END_TABLE_SHADER = 1768719868,
	MODERN_MISSION_END_TABLE_ACTION_QUEUE_SHADER = 1602899597,
	MODESTO_TILE_FIREPLACE_ACTION_QUEUE_SHADER = 194092111,
	MODESTO_TILE_FIREPLACE_BRICK_SHADER = 1185615393,
	MODESTO_TILE_FIREPLACE_NEW_SHADER = -187539199,
	MONEYWELL_COMPUTER_SHADER = -475324298,
	MONEYWELL_COMPUTER_ACTION_QUEUE_SHADER = 1549758095,
	MONKEY_BUTLER_HUT_SHADER = 1318759385,
	MONKEY_BUTLER_HUT_ACTION_QUEUE_SHADER = -869528821,
	MONOCHROME_TV_SHADER = 1008232004,
	MONOCHROME_TV_ACTION_QUEUE_SHADER = -1940395843,
	MONOCHROME_TV_SCREEN_00_SHADER = -1584053274,
	MONOCHROME_TV_SCREEN_01_SHADER = -695045264,
	MONOCHROME_TV_SCREEN_02_SHADER = 1335567050,
	MONOCHROME_TV_SCREEN_03_SHADER = 949752412,
	MONOCHROME_TV_SCREEN_04_SHADER = -1493661697,
	MONOCHROME_TV_SCREEN_05_SHADER = -771770519,
	MONOCHROME_TV_SCREEN_06_SHADER = 1224140499,
	MONOCHROME_TV_SCREEN_07_SHADER = 1072813637,
	MONOCHROME_TV_SCREEN_08_SHADER = -1353790508,
	MONTICELLO_DOOR_SHADER = -428857615,
	MONTICELLO_DOOR_ACTION_QUEUE_SHADER = -1540600677,
	MONTICELLO_DOOR_ROOM_SHADER = -1242072831,
	MONTICELLO_DOOR_ROOM_CHARED_SHADER = 1131656061,
	MOOD_SHADER = 900481858,
	MOVE_QUEUE_SHADER = -1077118781,
	MOVE_TOOL_SHADER = -1416088690,
	MR_REGULAR_JOE_COFFEE_SHADER = 1462182578,
	MR_REGULAR_JOE_COFFEE_ACTION_QUEUE_SHADER = -1747148255,
	MR_REGULAR_JOE_COFFEE_SORT__SHADER = 49326514,
	MULBERRY_TREE_SHADER = 292676034,
	MULBERRY_TREE_ACTION_QUEUE_SHADER = 163427525,
	MU_HH_CLEAN_CUT_SHADER = -1741802355,
	MU_HH_HEADBAND_T_SHADER = 197977841,
	MU_HH_MED_LENGTH_01_SHADER = 754736885,
	MU_HH_MED_LENGTH_02_SHADER = -1242230961,
	MU_HH_MED_LENGTH_03_SHADER = -1024311335,
	MU_HH_MED_LENGTH_04_SHADER = 1553377914,
	MU_HH_MOHAWK_SHADER = -1943457969,
	MU_HH_MULLET_SHADER = -734013106,
	MU_HH_PONYTAIL_SHADER = -1116915666,
	MU_HH_PONY_TAIL_SHADER = 309375360,
	MU_HH_STOCKING_CAP_T_SHADER = 2024398854,
	NAPOLEAN_SLEIGH_BED_SHADER = 406894218,
	NAPOLEAN_SLEIGH_BED_ACTION_QUEUE_SHADER = -1289618794,
	NAPOLEAN_SLEIGH_BED_SHEETS_SHADER = 1911370278,
	NARCISCO_FLOOR_MIRROR_SHADER = -958048262,
	NARCISCO_FLOOR_MIRROR_ACTION_QUEUE_SHADER = 454516837,
	NARCISCO_NEW_FLOOR_MIRROR_SHADER = -1667393499,
	NARCISCO_WALL_MIRROR_SHADER = 173745944,
	NARCISCO_WALL_MIRROR_ACTION_QUEUE_SHADER = -1629089735,
	NASTURTIUM_00_SEARCH_SHADER = 345553542,
	NASTURTIUM_01_SHADER = 310658188,
	NASTURTIUM_02_SHADER = -1953688266,
	NASTURTIUM_03_SHADER = -58055264,
	NASTURTIUM_ACTION_QUEUE_SHADER = 927485563,
	NASTURTIUM_ALL_SHADER = -2032751451,
	NEIGHBORHOOD_CAR_BLACK_SHADER = -815406282,
	NEIGHBORHOOD_CAR_BLUE_SHADER = 399617339,
	NEIGHBORHOOD_CAR_GOLD_SHADER = -833717538,
	NEIGHBORHOOD_CAR_GREEN_SHADER = -1770342593,
	NEIGHBORHOOD_CAR_LIGHTBLUE_SHADER = -1366049253,
	NEIGHBORHOOD_CAR_RED_SHADER = -835899338,
	NEIGHBORHOOD_CAR_WHITE_SHADER = 70227130,
	NEIGHBORHOOD_LOAD_SCREEN_SHADER = -1200374634,
	NEKKID_CENSORSHIP_BAR_SHADER = 1649194276,
	NEONGREEN_SHADER = -136727118,
	NEWSPAPER_ACTION_QUEUE_SHADER = -8551449,
	NEW_CURSOR_01_SHADER = 1863522633,
	NEW_CURSOR_03_SHADER = -2128775067,
	NEW_CURSOR_03_BUILDMODE_SHADER = 2000452066,
	NEW_CURSOR_BUYMODE_SHADER = 526379910,
	NEW_CURSOR_ZTEST_ZWRITE_OFF_SHADER = 82541599,
	NORTH_SHADER = 729739890,
	NORTH_FLOOR_SHADER = 147794267,
	NOTHING_SHADER = 493646029,
	NPC_FIREFIGHTER_SHADER = 542255949,
	NPC_FIREFIGHTER_ACTION_QUEUE_SHADER = -1401195450,
	NPC_GARDENER_SHADER = -236245840,
	NPC_GARDENER_ACTION_QUEUE_SHADER = 289669205,
	NPC_HANDYMAN_SHADER = 876295113,
	NPC_HANDYMAN_ACTION_QUEUE_SHADER = -1017107990,
	NPC_MAID_SHADER = 21221387,
	NPC_MAID_ACTION_QUEUE_SHADER = 1273693135,
	NPC_MAIL_CARRIER_SHADER = -169278974,
	NPC_MAIL_CARRIER_ACTION_QUEUE_SHADER = 1988914299,
	NPC_MONKEY_BUTLER_SHADER = 1642686160,
	NPC_MONKEY_BUTLER_ACTION_QUEUE_SHADER = 1545909426,
	NPC_PAPERGIRL_SHADER = 1414048478,
	NPC_PAPERGIRL_ACTION_QUEUE_SHADER = 1296367975,
	NPC_PIZZA_GUY_SHADER = 1269994351,
	NPC_PIZZA_GUY_ACTION_QUEUE_SHADER = 59374018,
	NPC_POLICE_OFFICER_SHADER = 994415533,
	NPC_POLICE_OFFICER_ACTION_QUEUE_SHADER = 679677762,
	NPC_REAPER_SHADER = -183589130,
	NPC_REAPER_ACTION_QUEUE_SHADER = -648714691,
	NPC_REPOMAN_SHADER = 759903044,
	NPC_REPOMAN_ACTION_QUEUE_SHADER = 29332562,
	NPC_SOCIAL_WORKER_SHADER = -793679215,
	NPC_SOCIAL_WORKER_ACTION_QUEUE_SHADER = -1703121541,
	NPC_THIEF_SHADER = -745727416,
	NPC_THIEF_ACTION_QUEUE_SHADER = 1493472985,
	NPC_THIEF_ROOM_SHADER = 233862728,
	NULL_SHADER = 324932091,
	NUMICA_COUNTER_ACTION_QUEUE_SHADER = 4024935,
	NUMICA_COUNTER_FACE_SHADER = -2094946512,
	NUMICA_COUNTER_SIDE_SHADER = -1514879006,
	NUMICA_COUNTER_TOP_SHADER = -120087494,
	NUMICA_FOLDING_CARD_TABLE_SHADER = 1545157711,
	NUMICA_FOLDING_CARD_TABLE_ACTION_QUEUE_SHADER = -1380237629,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_SHADER = -1641335688,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_ACTION_QUEUE_SHADER = -571371765,
	OCEAN_TERRAIN_SHADER = -199559931,
	OLD_MOVIE_PROP_SHADER = 1281231191,
	OLD_MOVIE_PROP_ACTION_QUEUE_SHADER = 401115108,
	OPTIONS_SCREEN_SHADER = -1261984386,
	OS_SHADER = -1000717957,
	OUTDOOR_TRASH_CAN_SHADER = -1376759031,
	OUTDOOR_TRASH_CAN_ACTION_QUEUE_SHADER = 1239677257,
	OVAL_GLASS_SCONCE_SHADER = -1565027672,
	OVAL_GLASS_SCONCE_02_ROOM_SHADER = -617647415,
	OVAL_GLASS_SCONCE_ACTION_QUEUE_SHADER = 1108905392,
	OVAL_GLASS_SCONCE_ALPHA_ROOM_SHADER = -1168547641,
	OVAL_GLASS_SCONCE_ROOM_SHADER = 303105970,
	OVAL_GLASS_SCONCE_SORT__SHADER = -1103769404,
	OVERHEAD_HOUSE01_SHADER = -73908195,
	OVERHEAD_HOUSE02_SHADER = 1653674407,
	OVERHEAD_HOUSE03_SHADER = 362160433,
	OVERHEAD_HOUSE04_SHADER = -1947028334,
	OVERHEAD_HOUSE05_SHADER = -51018748,
	OVERHEAD_HOUSE06_SHADER = 1711068606,
	PAINTING_CANVAS_SEARCH_SHADER = -1864911362,
	PARQUE_FRESCO_DEL_AIRE_BENCH_SHADER = 2107041810,
	PARQUE_FRESCO_DEL_AIRE_BENCH_ACTION_QUEUE_SHADER = -132002072,
	PARTICLE_ABDUCTION_SHADER = -609456227,
	PARTICLE_BUBBLE_SHADER = 763608004,
	PARTICLE_DAISY_SHADER = -330029842,
	PARTICLE_DIRTPUFF_SHADER = 133078983,
	PARTICLE_ELECTRICZAP_SHADER = -61541142,
	PARTICLE_EXTINGUISHER_SHADER = -142835428,
	PARTICLE_FIREBALL_ADDITIVE_SHADER = 1797095305,
	PARTICLE_FIREBALL_NORMAL_SHADER = 620615353,
	PARTICLE_FLAME01_SHADER = -1925922465,
	PARTICLE_FLAME02_SHADER = 339579109,
	PARTICLE_FLAME03_SHADER = 1664786547,
	PARTICLE_FLAME04_SHADER = -44157488,
	PARTICLE_FLAME05_SHADER = -1973877434,
	PARTICLE_FLAME06_SHADER = 324031740,
	PARTICLE_FLAME07_SHADER = 1683448938,
	PARTICLE_FLAME08_SHADER = -186091013,
	PARTICLE_FLAME09_SHADER = -2081470099,
	PARTICLE_FLAME10_SHADER = -483868536,
	PARTICLE_FLAME11_SHADER = -1808797666,
	PARTICLE_FLAME12_SHADER = 220635556,
	PARTICLE_FLAME13_SHADER = 2049020210,
	PARTICLE_FLAME14_SHADER = -465238895,
	PARTICLE_FLAME15_SHADER = -1824377849,
	PARTICLE_FLAME16_SHADER = 172713405,
	PARTICLE_FLARE_SHADER = 1744278501,
	PARTICLE_HEART_SHADER = -813743364,
	PARTICLE_LEAF_BIRCH_SHADER = -1848777381,
	PARTICLE_MUSIC_NOTE_SHADER = 73853897,
	PARTICLE_REPOZESSER_SHADER = -91164939,
	PARTICLE_RESURRECTION_SHADER = 1742327235,
	PARTICLE_RESURRECTION_B_SHADER = -517329279,
	PARTICLE_ROCK_SHADER = -1361842901,
	PARTICLE_SPARK_SHADER = 847269431,
	PARTICLE_SPLASH_01_SHADER = -969567195,
	PARTICLE_SPLASH_02_SHADER = 1597818271,
	PARTICLE_SPLASH_03_SHADER = 675017993,
	PARTICLE_SPLASH_04_SHADER = -1235263318,
	PARTICLE_SPLASH_05_SHADER = -1051176900,
	PARTICLE_SPLASH_06_SHADER = 1481703814,
	PARTICLE_SPLASH_07_SHADER = 794177808,
	PARTICLE_SPLASH_08_SHADER = -1075237759,
	PARTICLE_SPLASH_09_SHADER = -923919337,
	PARTICLE_SPLASH_10_SHADER = -1473669646,
	PARTICLE_SPLASH_11_SHADER = -550591132,
	PARTICLE_SPLASH_12_SHADER = 1177023710,
	PARTICLE_STAR_SHADER = 1346440349,
	PARTICLE_STEAM_SHADER = 845649179,
	PARTICLE_TEPPENYAKI_TABLE_SHRIMP_SHADER = -17731010,
	PARTICLE_WATER_SHADER = 1419810240,
	PARTICLE_WOOD_CHIP_SHADER = -1867046652,
	PAUSE_SHADER = 550391901,
	PERSONALITY_SHADER = 1825309254,
	PICKET_FENCE_01_SHADER = -613796931,
	PICKET_FENCE_ACTION_QUEUE_SHADER = -345709462,
	PICTURE_FRAME_MAROON_ROOM_CHARED_SHADER = 2110266627,
	PIEMENU_C_SHADER = 1411746479,
	PIEMENU_L_SHADER = -996501698,
	PIEMENU_R_SHADER = 1049995869,
	PINEGULCHER_DRESSER_SHADER = 110326991,
	PINEGULCHER_DRESSER_ACTION_QUEUE_SHADER = 13017408,
	PINE_GULCHER_END_TABLE_SHADER = -1059394112,
	PINE_GULCHER_END_TABLE_ACTION_QUEUE_SHADER = 241472884,
	PINE_TREE_SHADER = -209441397,
	PINE_TREE_ACTION_QUEUE_SHADER = -1383551883,
	PINE_TREE_ROOM_SHADER = 1424767862,
	PINK_FLAMINGO_SHADER = 700850019,
	PINK_FLAMINGO_ACTION_QUEUE_SHADER = 1729599332,
	PIXELS_01_SHADER = 1088813649,
	PIXELS_02_SHADER = -638800917,
	PIXELS_03_SHADER = -1360290947,
	PIZZA_BOX_ACTION_QUEUE_SHADER = -2128997127,
	PIZZA_SLICE_ACTION_QUEUE_SHADER = -1488411881,
	PLANTER_POT_03_ROOM_SHADER = 1373338922,
	PLANTER_POT__02_ROOM_SHADER = -451322508,
	PLATE_GLASS_WINDOW_SHADER = 849102219,
	PLATE_GLASS_WINDOW_ACTION_QUEUE_SHADER = 10417810,
	PLATE_OF_FOOD_EMPTY__SHADER = 918063094,
	PLATE_OF_FOOD_EMPTY__ACTION_QUEUE_SHADER = 2121789640,
	PLATE_OF_FOOD_FULL__SHADER = 418255371,
	PLATE_OF_FOOD_HALF_EMPTY__SHADER = -945790068,
	PLATE_OF_FOOD_SCRAPS_EMPTY__SHADER = -372615174,
	PLAY_SHADER = 1746678542,
	PLAYERONEEMPTY_SHADER = -1087870221,
	PLAYERONESELECTION_SHADER = 1701753114,
	PLAYERONEWIREFRAMEEMPTY_SHADER = -1753259789,
	PLAYERONEWIREFRAMEWITHX_SHADER = -1807419823,
	PLAYERONEWITHX_SHADER = -1139540911,
	PLAYERONE_LINE_SHADER = -1709196066,
	PLAYERSTATS_BOTTOM_SHADER = -196132284,
	PLAYERSTATS_TOP_SHADER = -1660694404,
	PLAYERTWOEMPTY_SHADER = -853230091,
	PLAYERTWOSELECTION_SHADER = -629304721,
	PLAYERTWOWIREFRAMEEMPTY_SHADER = 1777836226,
	PLAYERTWOWIREFRAMEWITHX_SHADER = 1791768160,
	PLAYERTWOWITHX_SHADER = -836818089,
	PLAYERTWO_LINE_SHADER = -401380392,
	PLAYER_1_BG_SHADER = -58077046,
	PLAYER_2_BG_SHADER = -298025116,
	PLAYX2_SHADER = -633360217,
	PLAYX3_SHADER = -1388806095,
	POLITICS_ABE_LINCOLN_SHADER = -820714589,
	POLITICS_CAPITAL_BUILDING_SHADER = -119487230,
	POLITICS_DONKEY_SHADER = 1370376523,
	POLITICS_ELEPHANT_SHADER = 1061338507,
	POLITICS_UNCLE_SAM_HAT_SHADER = 1281040030,
	POLYSHADOW_SHADER = -1484341978,
	POOL_ACTION_QUEUE_SHADER = -1982752486,
	POOL_BOTTOM_SHADER = 510240334,
	POOL_I_ACTION_QUEUE_SHADER = -1336652390,
	POOL_LADDER_01_SHADER = 1535437964,
	POOL_LADDER_ACTION_QUEUE_SHADER = -1180213723,
	POOL_LARGE_ACTION_QUEUE_SHADER = -617815422,
	POOL_LINING_02_SHADER = 428965039,
	POOL_L_ACTION_QUEUE_SHADER = 888611831,
	POOL_MEDIUM_ACTION_QUEUE_SHADER = 417553655,
	POOL_SMALL_ACTION_QUEUE_SHADER = 698720625,
	POOL_STOP_SIGN_ACTION_QUEUE_SHADER = -182990460,
	POOL_WATER_01_SHADER = 440097909,
	POOL_WATER_02_SHADER = -2093871665,
	POOL_WAVE_BASE_SHADER = 994424293,
	POOL_WAVE_REFLECT_SHADER = 656960288,
	POOL_WAVE_WATER_SHADER = 712213088,
	POOL_WAVE_WATER2_SHADER = 1464708311,
	POPUP_BOX_BG_BC_SHADER = 1344628705,
	POPUP_BOX_BG_BL_SHADER = -1063617936,
	POPUP_BOX_BG_BR_SHADER = 982861587,
	POPUP_BOX_BG_ML_SHADER = 1191339711,
	POPUP_BOX_BG_MR_SHADER = -1123197988,
	POPUP_BOX_BG_TC_SHADER = 1287508534,
	POPUP_BOX_BG_TL_SHADER = -603795545,
	POPUP_BOX_BG_TR_SHADER = 638448324,
	PORCINA_REFRIGERATOR_ACTION_QUEUE_SHADER = -1404782085,
	PORCINA_REFRIGERATOR_MODEL_P1GS_SHADER = 1197866826,
	PORCINA_REFRIGERATOR_MODEL_P1GS_02_SHADER = 1556199192,
	PORTRAIT_GRID_BY_PAYNE_A_PITCHER_SHADER = -1443520646,
	PORTRAIT_GRID_BY_PAYNE_A_PITCHER_ACTION_QUEUE_SHADER = 1674539178,
	POSEIDONS_ADVENTURE_AQUARIUM2_SHADER = -1121267847,
	POSEIDONS_ADVENTURE_AQUARIUM_ACTION_QUEUE_SHADER = 697602777,
	POSEIDONS_ADVENTURE_AQUARIUM_FISH_2_SHADER = -1058721030,
	POSEIDONS_ADVENTURE_AQUARIUM_GLASS_2_SHADER = -172612920,
	POSEIDONS_ADVENTURE_AQUARIUM_KELP_INSIDE_2_SHADER = 1692153297,
	POSITIVE_POTENTIAL_MICROWAVE_SHADER = -592645282,
	POSITIVE_POTENTIAL_MICROWAVE_ACTION_QUEUE_SHADER = 784588093,
	POSTURE_PLUS_OFFICE_CHAIR_SHADER = -257248790,
	POSTURE_PLUS_OFFICE_CHAIR_ACTION_QUEUE_SHADER = 686129121,
	PRIVACY_WINDOW_SHADER = 1642731377,
	PRIVACY_WINDOW_ACTION_QUEUE_SHADER = -1263818673,
	PROGRESS_00_SHADER = 1593844827,
	PROGRESS_01_SHADER = 671552717,
	PROGRESS_02_SHADER = -1324464777,
	PROGRESS_03_SHADER = -972458527,
	PROGRESS_04_SHADER = 1483595842,
	PROGRESS_05_SHADER = 795529428,
	PROGRESS_06_SHADER = -1234992786,
	PROGRESS_07_SHADER = -1050365448,
	PROGRESS_08_SHADER = 1373351017,
	PROGRESS_09_SHADER = 651992319,
	PROGRESS_10_SHADER = 1176179994,
	PROGRESS_REPAIR_01_SHADER = 528915994,
	PROGRESS_REPAIR_02_SHADER = -2037395552,
	PROGRESS_REPAIR_03_SHADER = -242680010,
	PROGRESS_REPAIR_04_SHADER = 1877764757,
	PROGRESS_REPAIR_05_SHADER = 418077187,
	PROGRESS_REPAIR_06_SHADER = -2115892295,
	PROGRESS_REPAIR_07_SHADER = -152749265,
	PROGRESS_REPAIR_08_SHADER = 1717184190,
	PROGRESS_REPAIR_09_SHADER = 291313192,
	PROGRESS_REPAIR_10_SHADER = 1905958861,
	PROP_ABDUCTION_RINGS_SHADER = -1109591609,
	PROP_BABY_BOTTLE_SHADER = 803880555,
	PROP_BABY_CLOSED_SHADER = -2021336358,
	PROP_BABY_OPEN_SHADER = 160703883,
	PROP_BAG_FISH_SHADER = -1903231058,
	PROP_BBALL_SHADER = 1767536064,
	PROP_BBQ_SPATULA_SHADER = -1478611984,
	PROP_BILLIARDS_SHADER = -1347204436,
	PROP_BILLS_SHADER = 998992999,
	PROP_BOOK_SHADER = 1541563783,
	PROP_BUBBLES_01_SHADER = 268455895,
	PROP_BUBBLES_02_SHADER = -1995891091,
	PROP_CHILD_TEDDYBEAR_SHADER = 1289490867,
	PROP_CHILD_TOYCAR_SHADER = -1210786364,
	PROP_CHILD_TOYDOLL_SHADER = 1927158318,
	PROP_CHILD_TOYPLANE_SHADER = -1255414214,
	PROP_COFEEPOT_SHADER = 2354920,
	PROP_COFFEE_MUG_SHADER = 1706955882,
	PROP_DUSTPAN_SHADER = 905501972,
	PROP_DUSTPANASH_SHADER = -78171339,
	PROP_ESPRESSO_CUP_SHADER = -1723614307,
	PROP_GIFT_BOX_SHADER = -1819678764,
	PROP_GIFT_FLOWERS_SHADER = 1575455884,
	PROP_GNOME_TOOLS_SHADER = -1369355222,
	PROP_HANDBROOM_SHADER = -1429383896,
	PROP_HOBOSTICK_SHADER = 730901192,
	PROP_JUGGLE_SHADER = 1477753749,
	PROP_KNIFE_SHADER = -1547916897,
	PROP_MONEY_SHADER = -1373429165,
	PROP_MOP_SHADER = -1242193894,
	PROP_NIGHTSTICK_SHADER = -1648101202,
	PROP_PAINTING_SHADER = 1113192483,
	PROP_PLUNGER_SHADER = 1531992191,
	PROP_REAPER_SCYTHE_SHADER = 2101101156,
	PROP_REMOTE_SHADER = 885294436,
	PROP_RINGBOX_SHADER = -355732861,
	PROP_SAND_BOX_SHOVEL_SHADER = 534300973,
	PROP_SCREWDRIVER_SHADER = 1301481635,
	PROP_SCRUBBRUSH_SHADER = -2088983618,
	PROP_SODA_CAN_SHADER = -2030721490,
	PROP_SPONGE_SHADER = -1648579299,
	PROP_SPOON_SHADER = 24595203,
	PROP_SSRI_VIRTUAL_REALITY_SET_SHADER = 28097500,
	PROP_TOOTHSTUFF_SHADER = -819958522,
	PROP_TRASHBAG_SHADER = 1963244253,
	PROP_TUMBLER_SHADER = -1646943451,
	PROP_UTENSIL_SHADER = -879224465,
	PROP_WATERINGCAN_SHADER = 1263278991,
	PROP_WINE_BOTTLE_SHADER = 784122214,
	PROP_WRENCH_SHADER = 160294326,
	PROP_YOYO_SHADER = -955267881,
	PYROTORRE_GAS_RANGE_ACTION_QUEUE_SHADER = -1998610677,
	QUEEN_VIVANCO_ROSES_SHADER = 59846215,
	QUEEN_VIVANCO_ROSES_ACTION_QUEUE_SHADER = -1834575918,
	R1_SHADER = -1735774957,
	R2_SHADER = 25394345,
	R2_PLAYER_SHADER = 1912319040,
	RED_SHADER = 1824922885,
	RELATIONSHIPS_SHADER = -340497854,
	RIVER_TERRAIN_SHADER = -1727174635,
	ROAD_SHADER = -1554700027,
	ROAD_STRIPES_SORT_2__SHADER = 451985899,
	ROMANCE_01_SHADER = 1612178922,
	ROMANCE_02_SHADER = -115428272,
	ROMANCE_03_SHADER = -1910930234,
	ROMANCE_04_SHADER = 276631909,
	ROMANCE_05_SHADER = 1736057331,
	ROMANCE_06_SHADER = -25989047,
	ROMANCE_07_SHADER = -1988869921,
	ROMANCE_08_SHADER = 432758094,
	ROMANCE_09_SHADER = 1858891224,
	ROMANCE_10_SHADER = 235660349,
	ROOF_LARGE_SHADER = 501466342,
	ROOF_SMALL_SHADER = 835520331,
	ROSEBUSH_SHADER = 1754282234,
	ROSEBUSH_ROSE_SHADER = -1766860618,
	ROSE_BUSH_ACTION_QUEUE_SHADER = -1081335715,
	ROXANA_GERANIUM_SHADER = -1667457470,
	ROXANA_GERANIUM_ACTION_QUEUE_SHADER = 5497670,
	RUBBER_TREE_PLANT_SHADER = 1081271696,
	RUBBER_TREE_PLANT_02_SHADER = -283019035,
	RUBBER_TREE_PLANT_03_SHADER = -1742321549,
	RUBBER_TREE_PLANT_ACTION_QUEUE_SHADER = -1403418889,
	RUBBER_TREE_PLANT_ROOM_SHADER = -1903908587,
	SAND_BOX_SHADER = 922160194,
	SAND_BOX_ACTION_QUEUE_SHADER = 1295545505,
	SANI_QUEEN_BATHTUB_SHADER = -2052084969,
	SANI_QUEEN_BATHTUB_ACTION_QUEUE_SHADER = -229662449,
	SATINISTICS_REPRODUCTION_ARMCHAIR_ACTION_QUEUE_SHADER = -581825990,
	SATINISTIC_REPRODUCTION_ARMCHAIR_SHADER = -601742731,
	SCHOOL_BUS_SHADER = -1470212925,
	SCI_FI_3EYE_ALIEN_SHADER = 538275250,
	SCI_FI_ALIENTRADITIONAL_SHADER = -1094192165,
	SCI_FI_FLYINGSAUCER_SHADER = -1004378092,
	SCI_FI_PLANET_SHADER = 2117972999,
	SCI_FI_ROCKET_SHADER = -661166660,
	SCTC_CORDLESS_WALL_PHONE_SHADER = -1217983587,
	SCTC_CORDLESS_WALL_PHONE_ACTION_QUEUE_SHADER = 1742784790,
	SCYLLA_AND_CHARYBDIS_SHADER = 1029845720,
	SCYLLA_AND_CHARYBDIS_ACTION_QUEUE_SHADER = -827141455,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_SHADER = -857433744,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_GLASS_SHADER = 1933271192,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_SELF_ILLUMINATED_SHADER = 1522189225,
	SEE_ME__FEEL_ME_PINBALL_MACHINE_ACTION_QUEUE_SHADER = -1679943029,
	SHADOW_CARS_SHADER = -132784969,
	SHADOW_ROUND__SHADER = -194318901,
	SHADOW_SQUARE__SHADER = 1255837485,
	SHAREDMUSIC_DRUMS_SHADER = 231715389,
	SHAREDMUSIC_GUITAR_SHADER = 1249571395,
	SHAREDMUSIC_MUSICNOTES_SHADER = -1638246362,
	SHAREDOUTDOORS_DOLPHIN_SHADER = -589871934,
	SHAREDOUTDOORS_MOUNTAIN_SHADER = -1995720447,
	SHAREDOUTDOORS_RIVERCANOEING_SHADER = -304869545,
	SHAREDSPORTS_SKIING_SHADER = 1433697163,
	SHAREDSPORTS_SOCCER_SHADER = 1291290073,
	SHAREDSPORTS_TENNIS_SHADER = 977443284,
	SHAREDWEATHER_PARTLYSUNNY_SHADER = -661054340,
	SHAREDWEATHER_RAINING_SHADER = -1715821068,
	SHAREDWEATHER_SUNNY_SHADER = 221570880,
	SHD______SHADER = -711165003,
	SHOWER_CURTAIN_SHADER = 948436173,
	SIM4000_BUILDING_10_SHADER = 46247921,
	SIMBADS_STUFFED_MARLIN_SHADER = 1337740084,
	SIMBADS_STUFFED_MARLIN_ACTION_QUEUE_SHADER = -320358018,
	SIMSAFETY_IV_BURGALUR_ALARM_SHADER = 1932150773,
	SIMSAFETY_IV_BURGALUR_ALARM_ACTION_QUEUE_SHADER = 1794228327,
	SIMS_LOGO_MEDIUM_SHADER = 372675071,
	SIMS_WALL_PAPER_000_SHADER = 1970764196,
	SIMS_WALL_PAPER_001_SHADER = 40913202,
	SIMS_WALL_PAPER_002_SHADER = -1686562680,
	SIMS_WALL_PAPER_003_SHADER = -327276514,
	SIMS_WALL_PAPER_004_SHADER = 1914355133,
	SIMS_WALL_PAPER_005_SHADER = 85822763,
	SIMS_WALL_PAPER_006_SHADER = -1676354415,
	SIMS_WALL_PAPER_006_ROOM_CHARED_SHADER = -1110700580,
	SIMS_WALL_PAPER_007_SHADER = -351015929,
	SIMS_WALL_PAPER_008_SHADER = 2074931606,
	SIMS_WALL_PAPER_009_SHADER = 212582656,
	SIMS_WALL_PAPER_010_SHADER = 1819035877,
	SIMS_WALL_PAPER_011_SHADER = 460028019,
	SIMS_WALL_PAPER_012_SHADER = -2107495991,
	SIMS_WALL_PAPER_013_SHADER = -177923745,
	SIMS_WALL_PAPER_014_SHADER = 1795263740,
	SIMS_WALL_PAPER_015_SHADER = 470203498,
	SIMS_WALL_PAPER_016_SHADER = -2062553648,
	SIMS_WALL_PAPER_017_SHADER = -234300090,
	SIMS_WALL_PAPER_018_SHADER = 1656209623,
	SIMS_WALL_PAPER_019_SHADER = 363917377,
	SIMS_WALL_PAPER_020_SHADER = 1195449126,
	SIMS_WALL_PAPER_021_SHADER = 809905072,
	SIMS_WALL_PAPER_022_SHADER = -1454409206,
	SIMS_WALL_PAPER_023_SHADER = -565687652,
	SIMS_WALL_PAPER_024_SHADER = 1076682559,
	SIMS_WALL_PAPER_025_SHADER = 925626281,
	SIMS_WALL_PAPER_026_SHADER = -1373454829,
	SIMS_WALL_PAPER_027_SHADER = -651850107,
	SIMS_WALL_PAPER_028_SHADER = 1234866964,
	SIMS_WALL_PAPER_029_SHADER = 1050518402,
	SIMS_WALL_PAPER_030_SHADER = 1582967399,
	SIMS_WALL_PAPER_031_SHADER = 693967601,
	SIMS_WALL_PAPER_032_SHADER = -1336652981,
	SIMS_WALL_PAPER_033_SHADER = -950830115,
	SIMS_WALL_PAPER_034_SHADER = 1496837758,
	SIMS_WALL_PAPER_035_SHADER = 774954728,
	SIMS_WALL_PAPER_036_SHADER = -1220964526,
	SIMS_WALL_PAPER_037_SHADER = -1069629500,
	SIMS_WALL_PAPER_038_SHADER = 1350672981,
	SIMS_WALL_PAPER_100_SHADER = 1958024083,
	SIMS_WALL_PAPER_201_SHADER = 32808284,
	SIMS_WALL_PAPER_202_SHADER = -1728197402,
	SIMS_WALL_PAPER_203_SHADER = -268764048,
	SIMS_WALL_PAPER_204_SHADER = 1906207187,
	SIMS_WALL_PAPER_205_SHADER = 110713157,
	SIMS_WALL_PAPER_206_SHADER = -1617950465,
	SIMS_WALL_PAPER_207_SHADER = -392742807,
	SIMS_WALL_PAPER_208_SHADER = 2015897080,
	SIMS_WALL_PAPER_209_SHADER = 254743918,
	SIMS_WALL_PAPER_210_SHADER = 1877515403,
	SIMS_WALL_PAPER_211_SHADER = 418360349,
	SIMS_WALL_PAPER_212_SHADER = -2115568217,
	SIMS_WALL_PAPER_213_SHADER = -152974031,
	SIMS_WALL_PAPER_214_SHADER = 1753569426,
	SIMS_WALL_PAPER_215_SHADER = 528640004,
	SIMS_WALL_PAPER_216_SHADER = -2037696066,
	SIMS_WALL_PAPER_217_SHADER = -242480856,
	SIMS_WALL_PAPER_218_SHADER = 1630737593,
	SIMS_WALL_PAPER_219_SHADER = 372515887,
	SIM_ROAD_SHADER = -460542889,
	SIM_ROAD_LOTS_SHADER = -1520207093,
	SIM_ROAD_STRIPE_NORTH_SHADER = 1958393091,
	SIM_ROAD_STRIPE_WEST_SHADER = 1032865135,
	SIM_ROAD_STRIPE_WEST_LOTS_SHADER = -628907332,
	SIM_SIDEWALK_SHADER = -818251649,
	SIM_TERRAIN_GRASS_02_SHADER = -953515006,
	SIM_TERRAIN_GRASS_LOTS_SHADER = -934310825,
	SIM_WALL_PAPER_032_ROOM_SHADER = 225840031,
	SIM_WALL_PAPER_032_ROOM_CHARED_SHADER = -298914431,
	SINGLE_HUNG_WINDOW_SHADER = -424048080,
	SINGLE_HUNG_WINDOW_ACTION_QUEUE_SHADER = -1018836274,
	SINGLE_HUNG_WINDOW_N_SHADER = 1068860807,
	SINGLE_HUNG_WINDOW_NEW_SHADER = -792188034,
	SINGLE_HUNG_WINDOW_NEW_N_SHADER = -258063869,
	SINGLE_HUNG_WINDOW_ROOM_SHADER = -129912040,
	SINGLE_PANE_FIXED_WINDOW_ACTION_QUEUE_SHADER = 893049386,
	SKY_BLUE_TERRAIN_SHADER = -1813445019,
	SMILEY_FACE_SHADER = 2024338963,
	SNACK_ACTION_QUEUE_SHADER = 256033428,
	SNAILS_WITH_ICICLES_IN_NOSE_SHADER = -1343632621,
	SNAILS_WITH_ICICLES_IN_NOSE_ACTION_QUEUE_SHADER = 2082924324,
	SNOOZEMORE_ALARM_CLOCK_SHADER = 918158805,
	SNOOZEMORE_ALARM_CLOCK_ACTION_QUEUE_SHADER = 2133877158,
	SOMA_PLASMA_TV_SHADER = 1036732951,
	SOMA_PLASMA_TV_ACTION_QUEUE_SHADER = 1548992767,
	SONIC_SHOWER_SHADER = -1254363214,
	SONIC_SHOWER_ACTION_QUEUE_SHADER = -835915617,
	SONIC_SHOWER_GLOW_RING_SHADER = 733254870,
	SOUTH_SHADER = -1237207100,
	SOUTH_FLOOR_SHADER = 164416862,
	SPACE_MISER_SHOWER_SHADER = -1529619732,
	SPACE_MISER_SHOWER_ACTION_QUEUE_SHADER = -464510338,
	SPACE_MISER_SHOWER_DOOR1_SHADER = -925366344,
	SPACE_MISER_SHOWER_DOOR2_SHADER = 1372673538,
	SPACE_MISER_SHOWER_DOOR3_SHADER = 651585172,
	SPARTAN_SPECIAL_SHADER = 309080012,
	SPARTAN_SPECIAL_ACTION_QUEUE_SHADER = -996441676,
	SPEED_L1_REGULAR_SHADER = -407224867,
	SPEED_R1_REGULAR_SHADER = -555905914,
	SPEND_SHADER = 461825421,
	SPEND_BACK_SHADER = -500746983,
	SPIDER_PLANT_SHADER = 465918780,
	SPIDER_PLANT_ACTION_QUEUE_SHADER = -1888694869,
	SPILL_4_WAY_CONNECT_SHADER = -708512332,
	SPILL_CONNECT_EAST_SHADER = -407409088,
	SPILL_CONNECT_NORTH_SHADER = 1257503940,
	SPILL_CONNECT_SOUTH_SHADER = -674449038,
	SPILL_CONNECT_WEST_SHADER = 447633800,
	SPILL_EAST_EDGE_ROUGH_SHADER = -1309633439,
	SPILL_NORTH_EDGE_ROUGH_SHADER = 1523302966,
	SPILL_ROUNDED_CORNER_BOTTOM_LEFT_SHADER = 985852493,
	SPILL_ROUNDED_CORNER_BOTTOM_RIGHT_SHADER = -991943530,
	SPILL_ROUNDED_CORNER_TOP_LEFT_SHADER = 1269694521,
	SPILL_ROUNDED_CORNER_TOP_RIGHT_SHADER = -1812333223,
	SPILL_SOUTH_EDGE_ROUGH_SHADER = -798288847,
	SPILL_STAND_ALONE_SHADER = -398703642,
	SPILL_WEST_EDGE_ROUGH_SHADER = 1152923044,
	SPOOKYSTUFF_BATS_SHADER = 72608467,
	SPOOKYSTUFF_BLACKCAT_SHADER = -827706123,
	SPOOKYSTUFF_HUNTEDHOUSE_SHADER = 1808890490,
	SPOOKYSTUFF_SKULL_SHADER = 1276315725,
	SPOOKYSTUFF_SPIDERWEB_SHADER = 627776854,
	SPORTS_BASEBALL_SHADER = -503269448,
	SPORTS_BASKETBALL_SHADER = 375081125,
	SPORTS_FOOTBALL_SHADER = 534888141,
	SPORTS_SOCCER_SHADER = -46433409,
	SPORTS_TENNIS_SHADER = -1953601678,
	SPRINKLER_SHADER = -1093599287,
	SPRINKLER_ACTION_QUEUE_SHADER = 1677525328,
	SQR_BG_2EXPENSIVE_SHADER = 978863936,
	SQR_BG_NORMAL_SHADER = 305776020,
	SQR_BG_SELECTED_SHADER = -1323618573,
	SQUARES_SHADER = -1953707723,
	SSRI_VIRTUAL_REALITY_SET_SHADER = -250167448,
	SSRI_VR_SET_ACTION_QUEUE_SHADER = -578474386,
	STAFF_SEDAN_SHADER = 449847407,
	STAFF_SEDAN_SPECULAR__SHADER = 1846362722,
	STANDARD_CAR_SHADER = -1319840928,
	STANDARD_CAR_SPECULAR__SHADER = -1566512636,
	STAR_02_NEW_SHADER = 2141420088,
	STILL_LIFE_DRAPERY_AND_CRUMBS_SHADER = -1974978290,
	STILL_LIFE_DRAPERY_AND_CRUMBS_ACTION_QUEUE_SHADER = -1103299561,
	STRAIGHT_NORTH_TO_SOUTH_SHADER = 1201043482,
	STRAIGHT_WEST_TO_EAST_SHADER = 906437155,
	STRINGS_THEORY_STEREO_SHADER = 1284958308,
	STRINGS_THEORY_STEREO_ACTION_QUEUE_SHADER = 1694598327,
	STRINGS_THEORY_STEREO_ROOM_SHADER = -1023102939,
	SUPERDOOPER_BASKETBALL_HOOP_SHADER = -1134690783,
	SUPERDOOP_BASKETBALL_HOOP_ACTION_QUEUE_SHADER = 844997033,
	SURPLUS_LLAMA_LAWN_ORNAMENT_SHADER = -1853802549,
	SURPLUS_LLAMA_LAWN_ORNAMENT_02_SHADER = 410172766,
	SURPLUS_LLAMA_LAWN_ORNAMENT_ACTION_QUEUE_SHADER = 1383022668,
	SUV_SHADER = -729869269,
	SYSTEMDEPTH_SHADER = 994659692,
	TERRAIN_BRIDGE_01_SHADER = 1208067359,
	TERRAIN_FENCE_01_SHADER = 456510833,
	TERRAIN_GRASS_01_SHADER = -1860025669,
	TERRAIN_GROUND_OVERLAY_01_DAMN_SHADER = 477764376,
	TERRAIN_PINE_SHADER = 1699578514,
	TERRAIN_RIVER_BED_01_SHADER = -1068783449,
	TERRAIN_RIVER_BED_BOTTOM_01_SHADER = -823207477,
	TERRAIN_SAND_01_SHADER = -1938697508,
	TERRAIN_SHADOW_01_DAMN_SHADER = -1902912256,
	TERRAIN_SIDEWALK_01_SHADER = 202129710,
	TEXT_ARROW_L_SHADER = -471313671,
	TEXT_ARROW_R_SHADER = 434597786,
	TEXT_BOX_BG_BC_SHADER = 1979750871,
	TEXT_BOX_BG_BL_SHADER = -423656378,
	TEXT_BOX_BG_BR_SHADER = 481343781,
	TEXT_BOX_BG_ML_SHADER = 1629984905,
	TEXT_BOX_BG_MR_SHADER = -1691834902,
	TEXT_BOX_BG_TC_SHADER = 1788357632,
	TEXT_BOX_BG_TL_SHADER = -98094703,
	TEXT_BOX_BG_TR_SHADER = 2624754,
	TEXT_BOX_H_BC_SHADER = 642873603,
	TEXT_BOX_H_BL_SHADER = -1225890670,
	TEXT_BOX_H_BR_SHADER = 1289837041,
	TEXT_BOX_H_ML_SHADER = 829847645,
	TEXT_BOX_H_MR_SHADER = -881244866,
	TEXT_BOX_H_TC_SHADER = 986303700,
	TEXT_BOX_H_TL_SHADER = -1435053755,
	TEXT_BOX_H_TR_SHADER = 1350167590,
	TEXT_LINE_BG_C_SHADER = -1676018146,
	TEXT_LINE_BG_L_SHADER = 212263823,
	TEXT_LINE_BG_R_SHADER = -156639508,
	TEXT_LINE_H_C_SHADER = -2078308767,
	TEXT_LINE_H_L_SHADER = 346070000,
	TEXT_LINE_H_R_SHADER = -290478445,
	TEXT_POPOUT_C_SHADER = -986294779,
	TEXT_POPOUT_H_C_SHADER = 1610967325,
	TEXT_POPOUT_H_L_SHADER = -256215924,
	TEXT_POPOUT_H_R_SHADER = 179653103,
	TEXT_POPOUT_L_SHADER = 1435061140,
	TEXT_POPOUT_R_SHADER = -1350142217,
	THE_BOSTONIAN_FIREPLACE_ACTION_QUEUE_SHADER = 496577278,
	THE_BOSTONIAN_FIREPLACE_BRICK_SHADER = -1876974227,
	THE_BOSTONIAN_FIREPLACE_NEW_SHADER = 560668253,
	THE_DIETER_BY_WORKBUNST_SHADER = 1849435193,
	THE_DIETER_BY_WORKBUNST_ACTION_QUEUE_SHADER = 645101320,
	THE_FUNINATOR_DELUXE_SHADER = 82017050,
	THE_FUNINATOR_DELUXE_ACTION_QUEUE_SHADER = 1011490186,
	THE_PYROTORRE_GAS_RANGE_SHADER = -1904421291,
	THE_REDMOND_DESK_TABLE_SHADER = -1656878073,
	THE_REDMOND_DESK_TABLE_ACTION_QUEUE_SHADER = 1724298698,
	THE_SARRBACH_BY_WORKBUNNST_SHADER = 1234666,
	THE_SARRBACH_BY_WORKBUNNST_ACTION_QUEUE_SHADER = -2127828679,
	THE_VIBROMATIC_HEART_BED_ACTION_QUEUE_SHADER = 1007216883,
	THE_VIBROMATIC_LOVE_BED_SHADER = 1258198825,
	TILED_COUNTER_FACE_SHADER = -1491227381,
	TILED_COUNTER_SIDE_SHADER = -2121740839,
	TILED_COUNTER_TOP_SHADER = 1887306185,
	TILED_COUNTER__STRAIGHT__ACTION_QUEUE_SHADER = 790033384,
	TILE_COUNTER_ACTION_QUEUE_SHADER = 2009560654,
	TIME_MONEY_WINDOW_SHADER = 1958765649,
	TITLE_BG_C_SHADER = 7045294,
	TITLE_BG_L_SHADER = -1865114305,
	TITLE_BG_R_SHADER = 1792778332,
	TITLE_H_C_SHADER = -9986139,
	TITLE_H_L_SHADER = 1876460084,
	TITLE_H_R_SHADER = -1781022889,
	TMP_ROOF_SHADER = -708584262,
	TMP_WALL_SHADER = 595311455,
	TOMBSTONES_SHADER = -1295748861,
	TOP_BRASS_SCONCE_SHADER = 1586525931,
	TOP_BRASS_SCONCE_ACTION_QUEUE_SHADER = -1407468031,
	TORCHOSTERONE_FLOOR_LAMP_SHADER = 1049153561,
	TORCHOSTERONE_FLOOR_LAMP_ACTION_QUEUE_SHADER = -2067766561,
	TORCHOSTERONE_TABLE_LAMP_SHADER = 1487035380,
	TORCHOSTERONE_TABLE_LAMP_ACTION_QUEUE_SHADER = -991259294,
	TOWN_CAR_SHADER = 2112920403,
	TRADITIONAL_OAK_ARMOIRE_SHADER = -56909970,
	TRADITIONAL_OAK_ARMOIRE_ACTION_QUEUE_SHADER = 1257131220,
	TRADITIONAL_OAK_ARMOIRE_ROOM_SHADER = -1824453302,
	TRAGIC_CLOWN_PAINTING_SHADER = 851147269,
	TRASH_ASH_SEARCH_SHADER = -2086939800,
	TRASH_CAN_SHADER = 1206245837,
	TRASH_CAN_ACTION_QUEUE_SHADER = -517188141,
	TRASH_PILE_SHADER = 1336920589,
	TRASH_PILE_ACTION_QUEUE_SHADER = -1602363396,
	TRASH_PILE_MEDIUM_SIZE_SHADER = -110008007,
	TRASH_PILE_SMALL_SIZE_SHADER = -691906889,
	TRAVEL_HAT_SHADER = 16138232,
	TRAVEL_ISLAND_SHADER = 1649733293,
	TRAVEL_JET_SHADER = 1730031250,
	TRAVEL_SHIP_SHADER = 2108339557,
	TRAVEL_SUITCASE_SHADER = 136662358,
	TREADMILL_SHADER = -1805404436,
	TREADMILL_ACTION_QUEUE_SHADER = -26149044,
	TREE_LINE_01_PINE__SHADER = -988162883,
	TREE_SWING_SHADER = 1428654390,
	TREE_SWING_ACTION_QUEUE_SHADER = -90296949,
	TRIANGLES_SHADER = 751783946,
	TROTTCO_27_INCH_COLOR_TELEVISION_SHADER = 144191926,
	TROTTCO_27_INCH_COLOR_TELEVISION_ACTION_QUEUE_SHADER = -1466982341,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__00_SHADER = -995849968,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__01_SHADER = -1281115770,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__02_SHADER = 715843644,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__03_SHADER = 1571674282,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__04_SHADER = -1010217719,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__05_SHADER = -1261535841,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__06_SHADER = 768027685,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__07_SHADER = 1522539699,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__08_SHADER = -897646302,
	TUB_DIRTY_SHADER = 302663140,
	TUB_WATER_SHADER = 813172339,
	TULIPS_00_SEARCH_SHADER = 34267919,
	TULIPS_01_SHADER = 2002685212,
	TULIPS_02_SHADER = -296231770,
	TULIPS_03_SHADER = -1722749904,
	TULIPS_ACTION_QUEUE_SHADER = -1395361257,
	TULIPS_ALL_SHADER = 1992090920,
	TURD_WATER_SHADER = -76909319,
	TV_DINNER_ACTION_QUEUE_SHADER = -482119729,
	TV_SCREEN_SEARCH_SHADER = 244753640,
	TV_SCREEN_SEARCH_MONOCHROME_SHADER = 1297493633,
	TYKE_NYTE_BED_SHADER = -702726432,
	TYKE_NYTE_BED_ACTION_QUEUE_SHADER = 874181057,
	URCHINEER_TRAIN_SET_ACTION_QUEUE_SHADER = -615284978,
	URCHINEER_TRAIN_SET_BY_RIPCO_SHADER = -1420391806,
	URN_SHADER = -1931516408,
	URN_ACTION_QUEUE_SHADER = -1392217561,
	UU_EY_IRIS_SHADER = -713522503,
	UU_EY_WHITE_SHADER = -907468313,
	UU_HH_AFRO_SHADER = 529106641,
	UU_HH_BALD_SHADER = 1273027053,
	UU_HH_BALD_02_SHADER = -554039174,
	UU_HH_BALL_CAP_SHADER = 1806855086,
	UU_HH_BALL_CAP_B_SHADER = 248263133,
	UU_HH_BALL_CAP_T_SHADER = -99056500,
	UU_HH_CHEF_HAT_T_SHADER = 1923056705,
	UU_HH_CORNROWS_SHADER = -891624142,
	UU_HH_COWBOY_HAT_SHADER = -205389309,
	UU_HH_COWBOY_HAT_B_SHADER = 554414837,
	UU_HH_COWBOY_HAT_T_SHADER = -706803804,
	UU_HH_PUNK_SPIKED_SHADER = -2145760116,
	UU_HH_PUNK_SPIKED_B_SHADER = 208939326,
	UU_HH_PUNK_SPIKED_T_SHADER = -123691921,
	UU_HH_TOP_HAT_B_SHADER = 1896194750,
	UU_HH_TOP_HAT_T_SHADER = -2049894417,
	VANITY_MIRROR_SHADER = 1100699540,
	VANITY_MIRROR_ACTION_QUEUE_SHADER = 1200610566,
	VANITY_MIRROR_BULB_SHADER = -1989317439,
	VANITY_MIRROR_BULB_OFF_SHADER = 997954426,
	VANITY_MIRROR_SPECULAR__SHADER = 1195833574,
	VERT_METER_BG_B_SHADER = 560305816,
	VERT_METER_BG_C_SHADER = 1449305614,
	VERT_METER_BG_T_SHADER = -709811255,
	VERT_METER_H_B_SHADER = 847391750,
	VERT_METER_H_C_SHADER = 1166351504,
	VERT_METER_H_T_SHADER = -967403177,
	VERT_METER_ICON_BG_SHADER = -399169825,
	VERT_METER_ICON_H_SHADER = 1649243448,
	VON_BRAUN_RECLINER_SHADER = 1968894798,
	VON_BRAUN_RECLINER_ACTION_QUEUE_SHADER = -1358956589,
	WALLCONSTRUCTIONSHD_SHADER = -1986288661,
	WALLS_DOWN_SHADER = -1220171140,
	WALL_BLACK_SHADER = -921100533,
	WALL_RED_BORDER_SHADER = 813977005,
	WALL_TOOL_ACTION_QUEUE_SHADER = -551907709,
	WALNUT_DOOR_SHADER = -1907456137,
	WALNUT_DOOR_ACTION_QUEUE_SHADER = -2331976,
	WATER_SHADER = 208131690,
	WATERCOLOR_BY_JME_SHADER = 347789247,
	WATERCOLOR_BY_JME_ACTION_QUEUE_SHADER = 1808817067,
	WATER_POND_SHADER = -495872422,
	WATER_PUDDLE_ACTION_QUEUE_SHADER = -82383724,
	WEATHER_PARTLY_SUNNY_SHADER = 1628401949,
	WEATHER_RAIN_SHADER = 2099410624,
	WEATHER_SNOW_SHADER = -51160610,
	WEATHER_SUNNY_SHADER = -1124591130,
	WEATHER_THUNDERCLOUD_SHADER = -1955587261,
	WHAT_A_GAS_PARTY_BALLOONS_SHADER = 1793452590,
	WHAT_A_GAS_PARTY_BALLOONS_ACTION_QUEUE_SHADER = 728476352,
	WHIRL_N_HURL_RETRO_JUKEBOX_SHADER = 974932606,
	WHIRL_N_HURL_RETRO_JUKEBOX_ACTION_QUEUE_SHADER = 294516232,
	WHIRL_WIZARD_HOT_TUB_SHADER = 413093903,
	WHIRL_WIZARD_HOT_TUB_ACTION_QUEUE_SHADER = 896259815,
	WHIRL_WIZARD_HOT_TUB__WATER_01_SORT__SHADER = 124838718,
	WHITELIGHT_SHADER = 968471231,
	WHITELINE_SHADER = 437832293,
	WHITELINEADDITIVE_SHADER = 364592778,
	WHITE_RHINO_RE_ENACTMENT_SHADER = -281603146,
	WHITE_RHINO_RE_ENACTMENT_ACTION_QUEUE_SHADER = -348209702,
	WICKED_BREEZE_END_TABLE_SHADER = 1395105642,
	WICKED_BREEZE_END_TABLE_ACTION_QUEUE_SHADER = -2020238502,
	WILDFLOWERS_00_SEARCH_SHADER = -1143532594,
	WILDFLOWERS_01_SHADER = 1792437045,
	WILDFLOWERS_02_SHADER = -203474289,
	WILDFLOWERS_03_SHADER = -2066216423,
	WILDFLOWERS_ACTION_QUEUE_SHADER = -798504691,
	WILDFLOWERS_ALL_SHADER = 873723298,
	WILD_BILL_BBQ_ACTION_QUEUE_SHADER = 2014061413,
	WILD_BILL_THX_451_BBQ_SHADER = 1998558723,
	WILL_LLOYD_WRIGHT_DOLL_HOUSE_SHADER = -1497233471,
	WILL_LLOYD_WRIGHT_DOLL_HOUSE_ACTION_QUEUE_SHADER = -1180895551,
	WINDOW_FRAMING_SHADER = 1885013235,
	WINDOW_FRAMING_ROOM_CHARED_SHADER = 2139805799,
	WINDSOR_DOOR_SHADER = -1830465208,
	WINDSOR_DOOR_ACTION_QUEUE_SHADER = -2087018812,
	WORKBUNNST_ALL_PURPOSE_CHAIR_SHADER = 1279754020,
	WORKBUNNST_ALL_PURPOSE_CHAIR_ACTION_QUEUE_SHADER = 236603892,
	XLR8R_FOOD_PROCESSOR_SHADER = -168429336,
	XLR8R_FOOD_PROCESSOR_ACTION_QUEUE_SHADER = -400775827,
	XLR8R_FOOD_PROCESSOR_ALPHA__SHADER = 1311146470,
	XS_SHADER = -1042692627,
	YOU_WIN_SCREEN_SHADER = -746558589,
	ZAP_ZALL_BUG_ZAPPER_SHADER = 1594332643,
	ZAP_ZALL_BUG_ZAPPER_ACTION_QUEUE_SHADER = -688049251,
	ZIMANTZ_COMPONENT_HIFI_STEREO_SHADER = -1030606594,
	ZIMANTZ_COMPONENT_HIFI_STEREO_ACTION_QUEUE_SHADER = 1503029374,
	_000_MIDDLE_FINGER_UNSURE_SHADER = -441443450,
	_1ST_FINAL_SHADER = -217371913,
	_200_MOTIVE_ICON_HUNGER_BLACK_SHADER = -1571801892,
	_200_MOTIVE_ICON_HUNGER_RED_SHADER = 1173886577,
	_201_MOTIVE_ICON_BLADDER_BLACK_SHADER = 955988159,
	_201_MOTIVE_ICON_BLADDER_RED_SHADER = -76425107,
	_203_MOTIVE_ICON_HYGIENE_BLACK_SHADER = -1104930479,
	_203_MOTIVE_ICON_HYGIENE_RED_SHADER = -1102040922,
	_204_MOTIVE_ICON_ENERGY_BLACK_SHADER = -987148499,
	_204_MOTIVE_ICON_ENERGY_RED_SHADER = -1526603753,
	_205_MOTIVE_ICON_COMFORT_BLACK_SHADER = 1789299104,
	_205_MOTIVE_ICON_COMFORT_RED_SHADER = 502305093,
	_206_MOTIVE_ICON_ENTERTAINED_BLACK_SHADER = 578084585,
	_206_MOTIVE_ICON_ENTERTAINED_RED_SHADER = -864230438,
	_210_MOTIVE_ICON_SOCIAL_BLACK_SHADER = 1939358571,
	_210_MOTIVE_ICON_SOCIAL_RED_SHADER = -1985465866,
	_213_MOTIVE_ICON_ENVIRONMENT_BLACK_SHADER = 1004385121,
	_213_MOTIVE_ICON_ENVIRONMENT_RED_SHADER = 767478626,
	_2ND_FINAL_SHADER = 1256631814,
	_2_PLAYER_SPLIT_SHADER = 1379233924,
	_300_MOTIVE_ICON_ROMANCE_BLACK_SHADER = -337447382,
	_300_MOTIVE_ICON_ROMANCE_RED_SHADER = 2072651355,
	_300_ROMANCE_SHADER = 2124600805,
	_3RD_FINAL_SHADER = 1988730401,
	_4TH_FINAL_SHADER = 321359899,
	_501_HEADLINE_STRESS_SHADER = -432703689,
	_502_HEADLINE_SURPRISE_SHADER = -1934368827,
	_503_HEADLINE_IDEA_SHADER = 1962653852,
	_504_HEADLINE_LOVE_SHADER = -1292685858,
	_505_HEADLINE_DRUNK_SHADER = -1895020053,
	_506_HEADLINE_HURT_SHADER = -1971664824,
	_507_HEADLINE_SMELL_SHADER = 1650603138,
	_5TH_FINAL_SHADER = 73172056,
	_615_2_POSITIVES_SHADER = -408893098,
	_616_1_POSITIVE_SHADER = -1960359800,
	_617_1_NEGATIVE_SHADER = 1978954748,
	_618_2_NEGATIVES_SHADER = 713823923,
	_630_FRIENDS_SHADER = 158103869,
	_631_ROMANCE_SHADER = -205924633,
	_632_BROKEN_HEART_SHADER = -513946594,
	_666_FRIENDS_GONE_BAD_SHADER = 815120007,
	_700_ROUTE_ERROR_CHAIR_NOT_FOUND_SHADER = -1411792273,
	_701_ROUTE_ERROR_DOOR_NOT_FOUND_SHADER = -1088168727,
	_702_ROUTE_ERROR_WALL_IN_WAY_SHADER = 128337788,
	_704_ROUTE_ERROR_NO_POOL_LADDER_SHADER = 1761088365,
	_THOUGHT_BUBBLE_TYPE1_SHADER = -1204490137,
	_THOUGHT_BUBBLE_TYPE2_SHADER = 557687261,
	_THOUGHT_BUBBLE_TYPE3_SHADER = 1446678859,
	_______BLANK_SHADER = -1835644340
};

typedef void (*NewSwizzleProc)(/* parameters unknown */);

struct Iter {
private:
	iResFile *cur;
	
public:
	Iter& operator=();
	Iter();
	Iter();
	iResFile* Current();
	void Next();
};

struct iResFile {
private:
	static iResFile *sFileList;
protected:
	iResFile *fNextFile;
	ErrType fLastError;
	ResFile *fResData;
public:
	__vtbl_ptr_type *$vf3211;
	
	iResFile& operator=();
	iResFile();
private:
	void Link();
	void Unlink();
public:
	iResFile();
	/* vtable[1] */ virtual iResFile(iResFile*, int, void);
	/* vtable[2] */ virtual void* _dyncastimpl(/* a1 5 */ SCID id);
	/* vtable[3] */ virtual ErrType Create();
	/* vtable[4] */ virtual ErrType Delete();
	ErrType Open(/* s1 17 */ StringBuffer &path, /* s2 18 */ OpenFlags openFlags);
	/* vtable[5] */ virtual ErrType Open();
	/* vtable[6] */ virtual ErrType CloseForReopen();
	/* vtable[7] */ virtual ErrType Reopen();
	/* vtable[8] */ virtual ErrType Close();
	/* vtable[9] */ virtual void Update();
	/* vtable[10] */ virtual bool Writable();
	/* vtable[11] */ virtual void GetFileName();
	/* vtable[12] */ virtual bool ValidFile();
	ErrType GetError();
	void SetError(/* a1 5 */ ErrType err);
	/* vtable[13] */ virtual SInt16 CountTypes();
	/* vtable[14] */ virtual SInt32 GetIndType();
	/* vtable[15] */ virtual SInt16 Count();
	/* vtable[16] */ virtual MHandle GetByID();
	/* vtable[17] */ virtual MHandle GetByName();
	/* vtable[18] */ virtual MHandle GetByIndex();
	/* vtable[19] */ virtual MHandle GetByIDAndLanguage(/* a1 5 */ SInt32 type, /* a2 6 */ SInt16 id, /* a3 7 */ char langCode, /* t0 8 */ SwizzleProc Swizzler);
	/* vtable[20] */ virtual void GetName();
	/* vtable[21] */ virtual SInt32 GetResType();
	/* vtable[22] */ virtual void GetID();
	/* vtable[23] */ virtual void GetIndex();
	/* vtable[24] */ virtual char GetLanguage(/* a1 5 */ HandleNode *res);
	/* vtable[25] */ virtual void FindUniqueName();
	/* vtable[26] */ virtual SInt16 FindUniqueID();
	void Release(/* s1 17 */ HandleNode *res);
	/* vtable[27] */ virtual void Detach();
	/* vtable[28] */ virtual void Load();
	/* vtable[29] */ virtual bool IsLittleEndian();
	/* vtable[30] */ virtual void SetID();
	/* vtable[31] */ virtual void Add();
	/* vtable[32] */ virtual void AddWithLanguage(/* s1 17 */ HandleNode *theHandle, /* s2 18 */ SInt32 rType, /* a3 7 */ SInt16 rID, /* t0 8 */ StringBuffer &rName, /* t1 9 */ char langCode, /* s3 19 */ bool littleEndian);
	/* vtable[33] */ virtual void Write();
	/* vtable[34] */ virtual void Remove();
	/* vtable[35] */ virtual void SetInfo();
	/* vtable[36] */ virtual void GetString(/* s3 19 */ StringBuffer &str, /* a2 6 */ SInt16 resID, /* a3 7 */ SInt16 index);
	ResFile* GetResFileData();
	void SetResFileData(/* a1 5 */ ResFile *pData);
};

struct NghResFile : iResFile {
private:
	u32 m_uCurrentHouse;
	NghResFileWriteInfo **m_ppNghWriteInfo;
	NghResFileWriteInfo **m_ppHouseWriteInfo[8];
	NghResFileWriteInfo **m_ppUserWriteInfo;
	NghResFileWriteInfo *m_pLastGetByIndexNode;
	
public:
	NghResFile& operator=();
	NghResFile();
	NghResFile();
	/* vtable[1] */ virtual NghResFile(NghResFile*, int, void);
	/* vtable[3] */ virtual ErrType Create(/* a1 5 */ StringBuffer &path);
	/* vtable[4] */ virtual ErrType Delete(/* a1 5 */ StringBuffer &path);
	/* vtable[5] */ virtual ErrType Open(/* a1 5 */ StringBuffer &path);
	/* vtable[6] */ virtual ErrType CloseForReopen();
	/* vtable[7] */ virtual ErrType Reopen();
	/* vtable[8] */ virtual ErrType Close();
	/* vtable[9] */ virtual void Update();
	/* vtable[10] */ virtual bool Writable();
	/* vtable[11] */ virtual void GetFileName(/* a1 5 */ StringBuffer &name);
	/* vtable[12] */ virtual bool ValidFile();
	/* vtable[13] */ virtual SInt16 CountTypes();
	/* vtable[14] */ virtual SInt32 GetIndType(/* a1 5 */ SInt16 index);
	/* vtable[15] */ virtual SInt16 Count(/* a1 5 */ SInt32 type);
	/* vtable[16] */ virtual MHandle GetByID(/* a1 5 */ SInt32 type, /* s0 16 */ SInt16 id, /* a3 7 */ SwizzleProc Swizzler);
	/* vtable[17] */ virtual MHandle GetByName(/* a1 5 */ SInt32 type, /* a2 6 */ StringBuffer &name, /* a3 7 */ SwizzleProc Swizzler);
	/* vtable[18] */ virtual MHandle GetByIndex(/* a1 5 */ SInt32 type, /* s1 17 */ SInt16 index, /* a3 7 */ SwizzleProc Swizzler);
	/* vtable[20] */ virtual void GetName(/* a1 5 */ HandleNode *res, /* a2 6 */ StringBuffer &name);
	/* vtable[21] */ virtual SInt32 GetResType(/* a1 5 */ HandleNode *res);
	/* vtable[22] */ virtual void GetID(/* a1 5 */ HandleNode *res, /* a2 6 */ SInt16 *id);
	/* vtable[23] */ virtual void GetIndex(/* a1 5 */ HandleNode *res, /* a2 6 */ SInt16 *index);
	/* vtable[25] */ virtual void FindUniqueName(/* a1 5 */ SInt32 resType, /* a2 6 */ StringBuffer &name);
	/* vtable[26] */ virtual SInt16 FindUniqueID(/* a1 5 */ SInt32 rType);
	/* vtable[27] */ virtual void Detach(/* a1 5 */ HandleNode *res);
	/* vtable[28] */ virtual void Load(/* a1 5 */ HandleNode *res);
	/* vtable[29] */ virtual bool IsLittleEndian(/* a1 5 */ HandleNode *res);
	/* vtable[30] */ virtual void SetID(/* a1 5 */ HandleNode *res, /* a2 6 */ SInt16 id);
	/* vtable[31] */ virtual void Add(/* s2 18 */ HandleNode *theHandle, /* a2 6 */ SInt32 rType, /* s1 17 */ SInt16 rID, /* t0 8 */ StringBuffer &rName, /* t1 9 */ bool littleEndian);
	/* vtable[33] */ virtual void Write(/* a1 5 */ HandleNode *res);
	/* vtable[34] */ virtual void Remove(/* a1 5 */ HandleNode *res);
	/* vtable[35] */ virtual void SetInfo(/* a1 5 */ HandleNode *res, /* a2 6 */ SInt16 id, /* a3 7 */ StringBuffer &name, /* t0 8 */ char language);
	void SetCurrentHouse(/* a1 5 */ u32 uCurrentHouse);
	void FlushHouseData();
	void FlushCharacterData();
	void FlushNeighborData();
	ErrType WriteToFile(/* s0 16 */ char *fileName);
	ErrType ReadFromFile(/* s1 17 */ char *fileName);
	ErrType WriteToMemoryCard(/* s3 19 */ char *fileName);
	ErrType ReadFromMemoryCard(/* s0 16 */ char *fileName);
	void CopyHouse(/* s0 16 */ int dstHouseNum, /* s5 21 */ NghResFile &srcFile, /* s4 20 */ int srcHouseNum);
private:
	void init();
	void reset();
	NghResFileWriteInfo** findListByResType(/* s0 16 */ u32 type);
	bool readFromMemoryBlock(/* -0xcc(caller sp) */ void *pMemoryBlock, /* a2 6 */ u32 blockSize);
	bool writeToMemoryBlock(/* -0x148(caller sp) */ void *&pMemoryBlock, /* -0x144(caller sp) */ u32 &blockSize);
};

typedef StackString<256> StringBuf255;

enum EDatasetSymbol {
	UNDEFINED_DATASET = 0,
	CREDITS_DATASET = 2119315300,
	GLOBALS_DATASET = 1343415808,
	HOUSE01_DATASET = -989542964,
	HOUSE02_DATASET = 1544393846,
	HOUSE03_DATASET = 722117856,
	HOUSE04_DATASET = -1251069629,
	HOUSE05_DATASET = -1033305643,
	HOUSE06_DATASET = 1533038703,
	HOUSE08_DATASET = -1126662808,
	HOUSEC01_DATASET = 1583841953,
	HOUSEC02_DATASET = -949038309,
	HOUSEC03_DATASET = -1335237747,
	HOUSEC04_DATASET = 772634158,
	HOUSEC05_DATASET = 1493845688,
	HOUSEC06_DATASET = -1073539326,
	HOUSEC07_DATASET = -1224464492,
	HOUSEC08_DATASET = 666581509,
	INTRO_DATASET = -313456752,
	LOT_TYPE_01_DATASET = -93963294,
	LOT_TYPE_02_DATASET = 1668246104,
	LOT_TYPE_03_DATASET = 342383310,
	LOT_TYPE_04_DATASET = -1978871955,
	NEIGHBORHOOD_DATASET = 1807982846,
	OVERHEAD_HOUSE01_DATASET = -73908195,
	OVERHEAD_HOUSE02_DATASET = 1653674407,
	OVERHEAD_HOUSE03_DATASET = 362160433,
	OVERHEAD_HOUSE04_DATASET = -1947028334,
	OVERHEAD_HOUSE05_DATASET = -51018748,
	OVERHEAD_HOUSE06_DATASET = 1711068606,
	RD_ALARM___BURGLAR_DATASET = -1671040316,
	RD_ALARM___SMOKE_DATASET = -1633607757,
	RD_AQUARIUM_DATASET = -112930333,
	RD_AROMASTER_DATASET = -2055104824,
	RD_BALLOONS___PARTY_DATASET = -1951892651,
	RD_BAR___WET___MAIN_PIECE_DATASET = -1254974260,
	RD_BASKETBALL___STANDARD___BACKBOARD_DATASET = -1359537181,
	RD_BATHTUB_A_DATASET = -629152085,
	RD_BATHTUB___MEDIUM_DATASET = 290658115,
	RD_BBQ2_DATASET = 785957645,
	RD_BED_DOUBLE_CHEAP__DATASET = 1740690754,
	RD_BED_DOUBLE_CHEAP_LEFT_DATASET = -293515772,
	RD_BED_DOUBLE_EXPENSIVE_DATASET = 1253614902,
	RD_BED_DOUBLE_EXPENSIVE_LEFT_DATASET = -2066163983,
	RD_BED_HEART_LEFT_DATASET = -1489811358,
	RD_BED_NAPOLEAN_SLEIGH_DATASET = -1844869182,
	RD_BED_NAPOLEON_SLEIGH_LEFT_DATASET = 1974585705,
	RD_BED___HEART___BOTTOM_LEFT_DATASET = -2087414309,
	RD_BED___SINGLE___CHEAP_DATASET = -1779493951,
	RD_BED___SINGLE___CHILD___MIDDLE_DATASET = -925642994,
	RD_BENCH___GARDEN_1_DATASET = -1199691429,
	RD_BOOKSHELFX_DATASET = 1729367907,
	RD_BOOKSHELF___CHEAP_DATASET = 1927208350,
	RD_BOOKSHELF___MODERATE_DATASET = -1326427151,
	RD_BUG_ZAPPER_DATASET = -1919807431,
	RD_CARDTABLE_DATASET = 1626292970,
	RD_CARVING_BLOCK___A_DATASET = -1482521678,
	RD_CARVING_BLOCK___STATUES_DATASET = 2020227755,
	RD_CHAIR___DINING___CHEAP_DATASET = -83911266,
	RD_CHAIR___DINING___EXPENSIVE_DATASET = 1979600299,
	RD_CHAIR___DINING___OUTDOOR___MODERATE_DATASET = -737041025,
	RD_CHAIR___LIVING_ROOM___EXPENSIVE_2_DATASET = -1631228625,
	RD_CHAIR___LIVING_ROOM___MODERATE_1_DATASET = 1159040611,
	RD_CHAIR___LIVING_ROOM___VEGAS_1_DATASET = -1322301181,
	RD_CHAIR___OFFICE_DATASET = -671751687,
	RD_CHESS_TABLE_DATASET = -2116800125,
	RD_CLOCK___ALARM_DATASET = 707050757,
	RD_COFFEE___ESPRESSO_DATASET = -1490130233,
	RD_COFFEE___REGULAR_DATASET = 2128977322,
	RD_COMPUTER___CHEAP_DATASET = -232067875,
	RD_COMPUTER___MODERATE_DATASET = -1096724129,
	RD_COMPUTER___VERY_EXPENSIVE_DATASET = 432764820,
	RD_COUNTER___BATHROOM___MODERATE_1_DATASET = 383676591,
	RD_COUNTER___KITCHEN___CHEAP_1_DATASET = 1123358736,
	RD_COUNTER___KITCHEN___MODERATE_DATASET = -2088026332,
	RD_DESK_MODERATE_DATASET = -1585482415,
	RD_DESK___CHEAP___B_DATASET = -2066660607,
	RD_DESK___EXPENSIVE_DATASET = -418603604,
	RD_DINING_TABLE___CHEAP___A_DATASET = -1056186067,
	RD_DINING_TABLE___EXPENSIVE_DATASET = 1004498490,
	RD_DINING_TABLE___OUTDOOR___MODERATE_DATASET = 580833155,
	RD_DISHWASHER_CHEAP___MAIN_PART_DATASET = -852112243,
	RD_DISH_WASHER_EXPENSIVE_DATASET = -1856427872,
	RD_DOLLHOUSE_DATASET = 1531637300,
	RD_DOOR___FRENCH___PART_1_DATASET = 745963167,
	RD_DOOR___FRONT___PART_1_DATASET = -463002543,
	RD_DOOR___WINDOW___FEDERAL_DATASET = -315359237,
	RD_DOOR___WOOD_DATASET = -2109270439,
	RD_DOOR___WOOD_2_DATASET = 729863151,
	RD_DRESSER___CHEAP_DATASET = 658124878,
	RD_DRESSER___CHILD_S_DATASET = -368175033,
	RD_DRESSER___EXPENSIVE_DATASET = -857360541,
	RD_DRESSER___MODERATE___BACK_LEFT_DATASET = -1873285162,
	RD_EASEL_DATASET = 278400745,
	RD_EXERCISE_MACHINE___BENCH_DATASET = -897696813,
	RD_FIREPLACE___CHEAP__DATASET = 1468070973,
	RD_FIREPLACE___MODERATE_DATASET = 354124177,
	RD_FLAMINGO_DATASET = -1131257956,
	RD_FLOWER___DAFFODIL_DATASET = -1393336334,
	RD_FLOWER___NASTURTIUM_DATASET = 1766574461,
	RD_FLOWER___TULIP_DATASET = 2025870485,
	RD_FLOWER___WILD_DATASET = -1311781255,
	RD_FOOD_PROCESSOR_DATASET = -1284625472,
	RD_FOUNTAIN_DATASET = 305572411,
	RD_FRIDGES___CHEAP_DATASET = 1691524957,
	RD_FRIDGES___EXPENSIVE_DATASET = 622804097,
	RD_FRIDGE___MODERATE_DATASET = 766757126,
	RD_GARDEN_GNOME___WB___RIGHT_DATASET = 626198917,
	RD_GRANDFATHER_CLOCK_DATASET = -622799727,
	RD_GUITAR___ELECTRIC_DATASET = 1647227139,
	RD_HOT_TUB___LEFT_DATASET = 1468968148,
	RD_ICE_CHEST_DATASET = 1910612960,
	RD_LAMP___FLOOR___CHEAP_DATASET = 588632325,
	RD_LAMP___FLOOR___EXPENSIVE_DATASET = 1033973436,
	RD_LAMP___GARDEN_DATASET = 857755156,
	RD_LAMP___TABLE___CHEAP_DATASET = -2115822906,
	RD_LAMP___TABLE___EXPENSIVE_DATASET = -1096969718,
	RD_LAMP___TABLE___RETRO_DATASET = -552929015,
	RD_LAMP___WALL___BLUE_DISH_DATASET = -203011006,
	RD_LAMP___WALL___BRASS_DATASET = 1181690075,
	RD_LAMP___WALL___OVAL_GLASS_DATASET = -539875832,
	RD_LAWN_SCULPTURE___LLAMA_DATASET = 1870523046,
	RD_MAGIC_TOY_BOX_DATASET = -615635150,
	RD_MAILBOX___PART_A_DATASET = -911886098,
	RD_MASTER_SUITE_TUB_DATASET = -328887417,
	RD_MEDICINE_CABINET_DATASET = -313584395,
	RD_MIRROR___FLOOR___MODERATE_DATASET = -193846939,
	RD_MIRROR___WALL___MODERATE_DATASET = -1840199339,
	RD_MONKEYBUTLER_DATASET = -532885012,
	RD_MOOSE_HEAD_DATASET = 1671038345,
	RD_PAINTING___ABSTRACT___LEFT_DATASET = 1702547345,
	RD_PAINTING___CASTLE_5___LEFT_DATASET = 306382124,
	RD_PAINTING___CASTLE___2_DATASET = 1570268985,
	RD_PAINTING___FLOWERS_DATASET = 1923911552,
	RD_PAINTING___MARLIN_STUFFED_DATASET = -580384639,
	RD_PAINTING___M_ABSTRACT_DATASET = 347574304,
	RD_PAINTING___RETRO_2_DATASET = 1683004001,
	RD_PAINTING___RETRO_3_DATASET = 324512503,
	RD_PAINTING___VEGAS_4_DATASET = 162288752,
	RD_PAINTING___WARHOL_DATASET = 561110746,
	RD_PAINTING___X_ABSTRACT_DATASET = -718218612,
	RD_PHONE___WALL_DATASET = 1500348485,
	RD_PIANO___STANDING_C_DATASET = 2120704888,
	RD_PINBALL_MACHINE___A_DATASET = -1074598647,
	RD_PLANT___FLOOR___CACTUS_DATASET = -360292258,
	RD_PLANT___FLOOR___JADE_DATASET = -1443988361,
	RD_PLANT___FLOOR___RUBBER_DATASET = 717101634,
	RD_PLANT___TABLE___GERANIUM_DATASET = -1897063987,
	RD_PLANT___TABLE___SPIDER_DATASET = -129902363,
	RD_PLANT___TABLE___VIOLET_DATASET = 124196852,
	RD_PLAY_STRUCTURE___A_DATASET = -2089257950,
	RD_POOL_TABLE_DATASET = 1328538830,
	RD_POOL___I_SHAPED_DATASET = 351469793,
	RD_POOL___L_SHAPED_DATASET = 1544752773,
	RD_POOL___MEDIUM_DATASET = 1797785553,
	RD_POOL___SMALL___4X6_DATASET = -1176966527,
	RD_RECLINER___CHEAP___A_DATASET = -1600853539,
	RD_RECLINER___EXPENSIVE___A_DATASET = -950020121,
	RD_RUG___BEAR___F_DATASET = 1113433831,
	RD_RUG___CASTLE_1_A_DATASET = 1114094420,
	RD_RUG___VEGAS_A_DATASET = 1295813186,
	RD_SANDBOX_DATASET = 365976929,
	RD_SCULPTURES___CASTLE_1___HEAD_JAR_DATASET = -1345171406,
	RD_SCULPTURES___CASTLE_6___RIGHT_DATASET = 1531182847,
	RD_SCULPTURES___KINETIC_DATASET = 1947702623,
	RD_SCULPTURES___VASE_DATASET = 1228333715,
	RD_SHOWER_DATASET = -2104378880,
	RD_SHRUB___HEDGE_LOW_DATASET = 2031716709,
	RD_SHRUB___ROSE_BUSH_DATASET = -835873217,
	RD_SINK___BATHROOM___EXPENSIVE_DATASET = 1291326118,
	RD_SINK___KITCHEN___CHEAP_DATASET = -1224789461,
	RD_SINK___KITCHEN___EXPENSIVE_DATASET = -232987419,
	RD_SOFA___CHEAP_2___LEFT_DATASET = -934328970,
	RD_SOFA___EXPENSIVE_1_DATASET = -1476870155,
	RD_SOFA___LOVESEAT___CHEAP_1_DATASET = 1059781773,
	RD_SOFA___LOVESEAT___EXPENSIVE_1_DATASET = -1947645402,
	RD_SOFA___LOVESEAT___MODERATE_1_DATASET = -1289761219,
	RD_SOFA___MODERATE_2_DATASET = -495073479,
	RD_SONICSHOWER_DATASET = -1073786081,
	RD_SPRINKLER_DATASET = -574464461,
	RD_STEREO___BOOMBOX_DATASET = -9156331,
	RD_STEREO___EXPENSIVE___RIGHT_DATASET = 265259773,
	RD_STEREO___JUKEBOX_DATASET = 1591912608,
	RD_STEREO___MODERATE___LEFT_DATASET = -1481230508,
	RD_STILL_LIFE_FRUIT_DATASET = 1561780461,
	RD_STOVE___CHEAP_DATASET = 1831882819,
	RD_STOVE___EXPENSIVE_DATASET = 448717978,
	RD_STOVE___MICROWAVE_DATASET = -444388328,
	RD_STOVE___TOASTER_OVEN_DATASET = -2007327692,
	RD_TABLE___END___CHEAP_DATASET = 363745833,
	RD_TABLE___END___CHEAP_1_DATASET = -335025725,
	RD_TABLE___END___EXPENSIVE_1_DATASET = -717234894,
	RD_TABLE___END___MODERATE_1_DATASET = -1150167995,
	RD_TABLE___NIGHTSTAND___CHILD_S_DATASET = -551372015,
	RD_TELESCOPE___PART_B_DATASET = 294749719,
	RD_TELEVISION___CHEAP_DATASET = 1366541066,
	RD_TELEVISION___EXPENSIVE___LEFT_DATASET = -2046399040,
	RD_TELEVISION___MODERATE_DATASET = 919380852,
	RD_TEPPENYAKI_TABLE_DATASET = 958819176,
	RD_TOILET___CHEAP_DATASET = -459462104,
	RD_TOILET___EXPENSIVE_DATASET = 540180542,
	RD_TRAINSET___CHEAP_A_DATASET = 51853608,
	RD_TRAINSET___EXPENSIVE___F_DATASET = 1604844285,
	RD_TRASH_CAN_INSIDE_DATASET = -322669851,
	RD_TRASH_COMPACTOR_DATASET = 403021462,
	RD_TRASH_OUTSIDE_DATASET = 809712000,
	RD_TREADMILL_DATASET = -143583466,
	RD_TREESWING_DATASET = 610275939,
	RD_TREES___BIRCH_FRONT_DATASET = -1383318315,
	RD_TREES___MULBERRY_FRONT_DATASET = 784400052,
	RD_TREES___PINE_FRONT_DATASET = -744596333,
	RD_TUBX_DATASET = -1907640465,
	RD_VANITY_DATASET = -1253877179,
	RD_VR___HELMET_DATASET = -972064843,
	RD_WINDOW___PLATE_GLASS_DATASET = 1455647844,
	RD_WINDOW___PRIVACY_DATASET = -1470881909,
	RD_WINDOW___SINGLE_PANE_DATASET = 1924641087,
	RD_WINDOW___STORM_DATASET = -1380146224,
	RF_ALARMCLOCK_DATASET = 1993526183,
	RF_AQUARIUM1_DATASET = -498425499,
	RF_AROMASTER_DATASET = -571658487,
	RF_BARS_DATASET = 1892605522,
	RF_BBALL_DATASET = -369975191,
	RF_BBQ2_DATASET = 1662018054,
	RF_BEDHEART_DATASET = -842920650,
	RF_BEDS_DATASET = 1801438041,
	RF_BOOKCASES_DATASET = 656358988,
	RF_BUGZAPPER_DATASET = -702193245,
	RF_CARDTABLE_DATASET = 948173611,
	RF_CARVINGBLOCK_DATASET = 134842968,
	RF_CASTLEFENCE_DATASET = -526784988,
	RF_CHAIRSLR1TILE_DATASET = -1050509018,
	RF_CHAIRSLR2_DATASET = -1467291277,
	RF_CHESSTABLE_DATASET = 2088246759,
	RF_COFFEEESP_DATASET = -2072369830,
	RF_COFFEEM_DATASET = 1861620215,
	RF_COMPUTERS_DATASET = 1537562533,
	RF_COUNTERS_DATASET = -1826980867,
	RF_DININGCHAIRS_DATASET = 1888970496,
	RF_DISHWASHERS_DATASET = -31742822,
	RF_DOLLHOUSE_DATASET = 52844533,
	RF_DRESSERS_DATASET = -1717049605,
	RF_EASEL_DATASET = -2029576256,
	RF_EXERCISEMACHINE_DATASET = 1734811452,
	RF_FIREPLACES_DATASET = 227187172,
	RF_FLAMINGO_DATASET = -1201172575,
	RF_FLOWERSOUTDOOR_DATASET = 1010668312,
	RF_FOODPROC_DATASET = 1205277215,
	RF_FRIDGES_DATASET = 1381275970,
	RF_GGWORKBENCH_DATASET = -1480997618,
	RF_GRANDCLOCK_DATASET = -1732278927,
	RF_GUITAR_DATASET = -2084402622,
	RF_HOTTUB_DATASET = -911278137,
	RF_ICECHEST2_DATASET = 723041381,
	RF_LAMPS_DATASET = 638720042,
	RF_LAMPS2_DATASET = -1052219965,
	RF_MAILBOX_DATASET = 2069063307,
	RF_MASTERSUITETUB_DATASET = 372690652,
	RF_MEDICINECABINET_DATASET = -572690199,
	RF_MONKEYHUT_DATASET = -2132165734,
	RF_PIANO_DATASET = -1880305486,
	RF_PINBALLMACHINE_DATASET = 983499923,
	RF_PLANTS_DATASET = 1683395929,
	RF_PLAYSTRUCTURE_DATASET = -1724715600,
	RF_POOL_DATASET = -232518235,
	RF_POOLTABLE_DATASET = 1377757390,
	RF_RECLINERS_DATASET = -817796710,
	RF_ROSEINTERACTION_DATASET = -1231313332,
	RF_RUGS_DATASET = 206398581,
	RF_SANDBOX_DATASET = 992376295,
	RF_SHOWERC_DATASET = 329467547,
	RF_SINKS_DATASET = -1436138155,
	RF_SOFAS_DATASET = 2079433659,
	RF_SONICSHOWER_DATASET = -542906796,
	RF_SPRINKLER_DATASET = -2052134926,
	RF_STOVES_DATASET = 325164383,
	RF_TEPPENYAKI_DATASET = 1664430227,
	RF_TOILETS_DATASET = -2001413519,
	RF_TOYBOX_DATASET = 439630233,
	RF_TRAINSETS_DATASET = 1266572396,
	RF_TRASH1_DATASET = 1898091430,
	RF_TRASHCOMPACTOR_DATASET = 726627465,
	RF_TRASHELEPHANTFOOT1_DATASET = -1293350013,
	RF_TRASHOUTSIDE_DATASET = -1359079066,
	RF_TREADMILL_DATASET = -1357009193,
	RF_TREES_DATASET = 227052468,
	RF_TREESWING_DATASET = 2081205154,
	RF_TUBC_DATASET = 1239867272,
	RF_TUBM_DATASET = -1369509233,
	RF_TUBX_DATASET = -1014819228,
	RF_TVS_DATASET = -1049639246,
	RF_VANITYMIRROR_DATASET = 758358012,
	RF_VRHELMET_DATASET = 1770628629,
	RF_WALLLITE_DATASET = 1542761345,
	_1ST_FINAL_DATASET = -217371913
};

struct TLinkedList<EMMSubAllocator,28,32> {
protected:
	EMMSubAllocator *m_pHead;
	EMMSubAllocator *m_pTail;
	
public:
	TLinkedList<EMMSubAllocator,28,32>& operator=();
	TLinkedList();
	TLinkedList();
	static EMMSubAllocator*& Last(/* parameters unknown */);
	static EMMSubAllocator*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EMMSubAllocator* Head();
	EMMSubAllocator* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

enum ESimsPreloadType {
	kSimsPreloadNone = 0,
	kSimsPreloadTexture = 1,
	kStartSimsPreloadTypes = 1,
	kSimsPreloadShader = 2,
	kSimsPreloadModel = 3,
	kSimsPreloadAnim = 4,
	kSimsPreloadParticle = 5,
	kSimsPreloadCharacter = 6,
	kNumSimsPreloadTypes = 7
};

enum ESampleSymbol {
	UNDEFINED_SAMPLE = 0,
	AQUARIUM_CLEAN1_SAMPLE = 1248859251,
	AQUARIUM_CLEAN2_SAMPLE = -747026999,
	AQUARIUM_CLEAN3_SAMPLE = -1535216289,
	AQUARIUM_CLEAN4_SAMPLE = 974840060,
	AQUARIUM_CLEAN5_SAMPLE = 1293799530,
	AQUARIUM_CLEAN6_SAMPLE = -736853552,
	AQUARIUM_FEED1_SAMPLE = -1459742111,
	AQUARIUM_FEED2_SAMPLE = 838290395,
	AQUARIUM_FEED3_SAMPLE = 1190165325,
	AQUARIUM_FEED4_SAMPLE = -661328146,
	AQUARIUM_FEED5_SAMPLE = -1349263752,
	AQUARIUM_FEED6_SAMPLE = 916099010,
	AQUARIUM_RESTOCK_SAMPLE = -2009049735,
	AQUARIUM_RUNNING_SAMPLE = -1797784066,
	AQUARIUM_TAPGLASS1_SAMPLE = -670323043,
	AQUARIUM_TAPGLASS2_SAMPLE = 1090715431,
	AQUARIUM_TAPGLASS3_SAMPLE = 906350513,
	AQUARIUM_TAPGLASS4_SAMPLE = -1470014958,
	AQUARIUM_TAPGLASS5_SAMPLE = -546936188,
	AROMA_BREATHE_VOXF10_SAMPLE = -1581964508,
	AROMA_BREATHE_VOXF5_SAMPLE = 1823993518,
	AROMA_BREATHE_VOXF8_SAMPLE = 302420499,
	AROMA_BREATHE_VOXM2_SAMPLE = 287810246,
	AROMA_BREATHE_VOXM4_SAMPLE = -129759245,
	AROMA_BREATHE_VOXM8_SAMPLE = -235779112,
	AROMA_MACH_BREAK_SAMPLE = 1429709603,
	AROMA_MACH_BREAKA_SFX1_SAMPLE = -257812299,
	AROMA_MACH_BREAKA_SFX2_SAMPLE = 1772833039,
	AROMA_MACH_BREAKA_SFX3_SAMPLE = 514619801,
	AROMA_MACH_BREAKA_VOXF2_SAMPLE = 1958245597,
	AROMA_MACH_BREAKA_VOXF8_SAMPLE = -1804755517,
	AROMA_MACH_BREAKA_VOXM1_SAMPLE = 239467692,
	AROMA_MACH_BREAKA_VOXM9_SAMPLE = 10384542,
	AROMA_MACH_BREAKB_VOXF6_SAMPLE = 1111337561,
	AROMA_MACH_BREAKB_VOXM3_SAMPLE = -777812195,
	AROMA_MACH_BREAKB_VOXM4_SAMPLE = 1338446526,
	AROMA_MACH_BREAKC_SFX1_SAMPLE = -1117079106,
	AROMA_MACH_BREAKC_SFX2_SAMPLE = 610527236,
	AROMA_MACH_BREAKC_SFX3_SAMPLE = 1399117970,
	AROMA_MACH_BREAKC_VOXF4_SAMPLE = 172277953,
	AROMA_MACH_BREAKC_VOXF8_SAMPLE = 66227434,
	AROMA_MACH_BREAKC_VOXM15_SAMPLE = 435848940,
	AROMA_MACH_BREAKC_VOXM7_SAMPLE = 1891190960,
	AROMA_MACH_BROKEN_LP_SAMPLE = 1387064461,
	AROMA_MACH_LP_SAMPLE = 609811043,
	AROMA_MACH_OFF_SAMPLE = -2013501250,
	AROMA_MACH_ON_SAMPLE = -176515901,
	AROMA_SMOKE_VOXF1_SAMPLE = -278192127,
	AROMA_SMOKE_VOXF11_SAMPLE = -197872639,
	AROMA_SMOKE_VOXF7_SAMPLE = 101221684,
	AROMA_SMOKE_VOXM2_SAMPLE = -1785288592,
	AROMA_SMOKE_VOXM4_SAMPLE = 2096434501,
	AROMA_SMOKE_VOXM8_SAMPLE = 1967341934,
	BABY_BURP1_SAMPLE = -893638544,
	BABY_BURP2_SAMPLE = 1404402122,
	BABY_BURP3_SAMPLE = 615663964,
	BABY_FEEDING_SAMPLE = 2110860237,
	BABY_SPARKLEDUST_SAMPLE = -34297451,
	BALLOONS_POP1_SAMPLE = -1344119494,
	BALLOONS_POP2_SAMPLE = 921373824,
	BARBECUE_BEINGLIT_SAMPLE = -43768124,
	BARBECUE_OPENCLOSE_SAMPLE = -189217084,
	BARBECUE_SIZZLEHOT_SAMPLE = -1564917126,
	BARBECUE_SIZZLELOOP_SAMPLE = 793756628,
	BAR_CLOSE_SAMPLE = -1732310135,
	BAR_GLASSCLINK_SAMPLE = 764395982,
	BAR_OPEN_SAMPLE = -1539169058,
	BAR_POURDRINK_SAMPLE = -1625117830,
	BBALL_BACKBOARD1_SAMPLE = -1587105678,
	BBALL_BACKBOARD2_SAMPLE = 946856392,
	BBALL_BACKBOARD3_SAMPLE = 1332269406,
	BBALL_BOUNCE1_SAMPLE = 565395658,
	BBALL_BOUNCE2_SAMPLE = -1195765392,
	BBALL_BOUNCE3_SAMPLE = -809688602,
	BBALL_BOUNCE4_SAMPLE = 1373221957,
	BBALL_SWISH1_SAMPLE = 711571124,
	BBALL_SWISH2_SAMPLE = -1285495026,
	BBALL_SWISH3_SAMPLE = -999827560,
	BBALL_SWISH4_SAMPLE = 1510163003,
	BEAR_RUG_ROAR_SAMPLE = -979587246,
	BED_COINDROP_SAMPLE = -2027341496,
	BED_GET_INOUT1_SAMPLE = 216167019,
	BED_GET_INOUT2_SAMPLE = -1779751983,
	BED_GET_INOUT3_SAMPLE = -487845049,
	BED_GET_OUT_SAMPLE = -1031782767,
	BED_MAKE1_SAMPLE = 425222677,
	BED_MAKE2_SAMPLE = -2142162001,
	BED_MAKE3_SAMPLE = -145358023,
	BED_TUCKIN_KISS_SAMPLE = 1240795138,
	BED_VIBRATE_SAMPLE = 269807574,
	BENI_DRAGON_HISS1_SAMPLE = 326087321,
	BENI_END_VOXF3_SAMPLE = 124784416,
	BENI_END_VOXF5_SAMPLE = -300701163,
	BENI_END_VOXM2_SAMPLE = -1820072323,
	BENI_END_VOXM6_SAMPLE = -1796332956,
	BENI_FLAME_SFX1_SAMPLE = 1904180652,
	BENI_FLAME_SFX2_SAMPLE = -394908650,
	BENI_FLAME_VOXM1_SAMPLE = 1789888777,
	BENI_FLAME_VOXM3_SAMPLE = -2069764059,
	BENI_FLAME_VOX_F2_SAMPLE = 482291983,
	BENI_FLAME_VOX_F6_SAMPLE = 466810134,
	BENI_FLICK_SFX1_SAMPLE = -928023500,
	BENI_FLICK_SFX2_SAMPLE = 1369845134,
	BENI_FLICK_VOXF2_SAMPLE = -297809393,
	BENI_FLICK_VOXF6_SAMPLE = -380498410,
	BENI_FLICK_VOXM1_SAMPLE = -1799208322,
	BENI_FLICK_VOXM5_SAMPLE = -1817213337,
	BENI_PREPA1_SAMPLE = 1589127606,
	BENI_PREPA2_SAMPLE = -944670708,
	BENI_PREPB1_SAMPLE = 1972730485,
	BENI_PREPB2_SAMPLE = -325309489,
	BENI_PREPC1_SAMPLE = 1821264692,
	BENI_PREPC2_SAMPLE = -175695218,
	BENI_SIZZLE_LP_SAMPLE = -608835000,
	BENI_TOSSBACK_SFX1_SAMPLE = -1148969203,
	BENI_TOSSBACK_SFX2_SAMPLE = 579686071,
	BENI_TOSSBACK_VOXF12_SAMPLE = 2073428454,
	BENI_TOSSBACK_VOXF15_SAMPLE = -437087163,
	BENI_TOSSBACK_VOXF19_SAMPLE = -331032466,
	BENI_TOSSBACK_VOXM11_SAMPLE = -288702531,
	BENI_TOSSBACK_VOXM14_SAMPLE = -1633662158,
	BENI_TOSSBACK_VOXM16_SAMPLE = 1890462238,
	BENI_TOSSFRNT_SFX1_SAMPLE = -2029278905,
	BENI_TOSSFRNT_SFX2_SAMPLE = 503511293,
	BENI_TOSSFRNT_VOXF1_SAMPLE = -1099620378,
	BENI_TOSSFRNT_VOXF5_SAMPLE = -1189553153,
	BENI_TOSSFRNT_VOXM2_SAMPLE = -997681257,
	BENI_TOSSFRNT_VOXM4_SAMPLE = 770388642,
	BILLS_CRACKLE_SAMPLE = 507545817,
	BILLS_EXPLOSION_SAMPLE = 838868518,
	BIRDY1_SAMPLE = -1971243794,
	BIRDY10_SAMPLE = -1276931734,
	BIRDY10I_SAMPLE = 1893105006,
	BIRDY11_SAMPLE = -991649284,
	BIRDY11I_SAMPLE = 1775062063,
	BIRDY12_SAMPLE = 1575874630,
	BIRDY12I_SAMPLE = 1121984492,
	BIRDY13_SAMPLE = 720027856,
	BIRDY13I_SAMPLE = 1543188141,
	BIRDY14_SAMPLE = -1265740429,
	BIRDY14I_SAMPLE = 347781226,
	BIRDY15_SAMPLE = -1014405659,
	BIRDY15I_SAMPLE = 228690219,
	BIRDY16_SAMPLE = 1518351455,
	BIRDY16I_SAMPLE = 646765288,
	BIRDY17_SAMPLE = 763823305,
	BIRDY17I_SAMPLE = 1066920873,
	BIRDY18_SAMPLE = -1120396968,
	BIRDY18I_SAMPLE = -1206913178,
	BIRDY19_SAMPLE = -901830194,
	BIRDY19I_SAMPLE = -1592474073,
	BIRDY1I_SAMPLE = -1707452174,
	BIRDY2_SAMPLE = 327705940,
	BIRDY20_SAMPLE = -1731280215,
	BIRDY20I_SAMPLE = 1922089783,
	BIRDY21_SAMPLE = -271977921,
	BIRDY21I_SAMPLE = 1804333686,
	BIRDY22_SAMPLE = 1992336261,
	BIRDY22I_SAMPLE = 1084662197,
	BIRDY23_SAMPLE = 29856531,
	BIRDY23I_SAMPLE = 1505595636,
	BIRDY24_SAMPLE = -1616705872,
	BIRDY25_SAMPLE = -391891418,
	BIRDY25I_SAMPLE = 266811250,
	BIRDY26_SAMPLE = 1907189660,
	BIRDY26I_SAMPLE = 617243825,
	BIRDY27_SAMPLE = 111826698,
	BIRDY27I_SAMPLE = 1037129200,
	BIRDY28_SAMPLE = -1776989541,
	BIRDY28I_SAMPLE = -1169602241,
	BIRDY29_SAMPLE = -518882803,
	BIRDY29I_SAMPLE = -1554876290,
	BIRDY2I_SAMPLE = -1323889871,
	BIRDY3_SAMPLE = 1687115202,
	BIRDY3I_SAMPLE = -1475593616,
	BIRDY4_SAMPLE = -85213087,
	BIRDY4I_SAMPLE = -414339913,
	BIRDY5_SAMPLE = -1913851657,
	BIRDY5I_SAMPLE = -27877898,
	BIRDY6_SAMPLE = 350593357,
	BIRDY6I_SAMPLE = -713306571,
	BIRDY7_SAMPLE = 1675792859,
	BIRDY7I_SAMPLE = -866058380,
	BIRDY8_SAMPLE = -211973046,
	BIRDY8I_SAMPLE = 1274602427,
	BIRDY9_SAMPLE = -2074428196,
	BIRDY9I_SAMPLE = 1390662394,
	BODY_FALLING1_SAMPLE = -2067748906,
	BODY_FALLING2_SAMPLE = 499775084,
	BODY_FALLING3_SAMPLE = 1791936250,
	BODY_FALLING4_SAMPLE = -190164135,
	BOOKSHELF_GET_BOOK_SAMPLE = -987250036,
	BOOKSHELF_REPLACE_BOOK_SAMPLE = -1932084509,
	BOOK_PAGE_TURN1_SAMPLE = 1272660094,
	BOOK_PAGE_TURN2_SAMPLE = -757984828,
	BRDMRN1_SAMPLE = -1682967340,
	BRDMRN10_SAMPLE = 1979606552,
	BRDMRN10I_SAMPLE = -837062519,
	BRDMRN11_SAMPLE = 49895054,
	BRDMRN11I_SAMPLE = -687849016,
	BRDMRN12_SAMPLE = -1678768332,
	BRDMRN12I_SAMPLE = -64155125,
	BRDMRN13_SAMPLE = -319342686,
	BRDMRN13I_SAMPLE = -449436854,
	BRDMRN14_SAMPLE = 1922277889,
	BRDMRN14I_SAMPLE = -1434995315,
	BRDMRN15_SAMPLE = 93622935,
	BRDMRN15I_SAMPLE = -1284733748,
	BRDMRN16_SAMPLE = -1667382483,
	BRDMRN16I_SAMPLE = -1740515569,
	BRDMRN17_SAMPLE = -342166597,
	BRDMRN18_SAMPLE = 2066083370,
	BRDMRN19_SAMPLE = 203611836,
	BRDMRN19I_SAMPLE = 534367168,
	BRDMRN1I_SAMPLE = 1546104704,
	BRDMRN2_SAMPLE = 44475758,
	BRDMRN20_SAMPLE = 1590900187,
	BRDMRN20I_SAMPLE = -866267440,
	BRDMRN21_SAMPLE = 701760845,
	BRDMRN21I_SAMPLE = -716767343,
	BRDMRN22_SAMPLE = -1327672073,
	BRDMRN22I_SAMPLE = -26497966,
	BRDMRN23_SAMPLE = -941988767,
	BRDMRN23I_SAMPLE = -412050157,
	BRDMRN24_SAMPLE = 1505685954,
	BRDMRN25_SAMPLE = 783925588,
	BRDMRN25I_SAMPLE = -1322632555,
	BRDMRN26_SAMPLE = -1213165330,
	BRDMRN26I_SAMPLE = -1710790314,
	BRDMRN27_SAMPLE = -1061707656,
	BRDMRN27I_SAMPLE = -2095294441,
	BRDMRN28_SAMPLE = 1342750185,
	BRDMRN28I_SAMPLE = 75777240,
	BRDMRN29_SAMPLE = 655330687,
	BRDMRN29I_SAMPLE = 496989593,
	BRDMRN2I_SAMPLE = 1997208643,
	BRDMRN3_SAMPLE = 1973523960,
	BRDMRN30_SAMPLE = 1204290714,
	BRDMRN30I_SAMPLE = -845175577,
	BRDMRN31_SAMPLE = 818885644,
	BRDMRN31I_SAMPLE = -729508442,
	BRDMRN32_SAMPLE = -1446615626,
	BRDMRN32I_SAMPLE = -5650843,
	BRDMRN33_SAMPLE = -557755104,
	BRDMRN33I_SAMPLE = -424478940,
	BRDMRN34_SAMPLE = 1084604547,
	BRDMRN34I_SAMPLE = -1443667485,
	BRDMRN35_SAMPLE = 933425173,
	BRDMRN35I_SAMPLE = -1326952286,
	BRDMRN36_SAMPLE = -1364483665,
	BRDMRN36I_SAMPLE = -1681587359,
	BRDMRN37_SAMPLE = -643002055,
	BRDMRN37I_SAMPLE = -2099367392,
	BRDMRN38_SAMPLE = 1226017960,
	BRDMRN38I_SAMPLE = 88485615,
	BRDMRN3I_SAMPLE = 1846660354,
	BRDMRN4_SAMPLE = -339410853,
	BRDMRN5_SAMPLE = -1664995123,
	BRDMRN5I_SAMPLE = 944466564,
	BRDMRN6_SAMPLE = 97214839,
	BRDMRN6I_SAMPLE = 325466439,
	BRDMRN7_SAMPLE = 1925992929,
	BRDMRN7I_SAMPLE = 175966214,
	BRDMRN8_SAMPLE = -495760272,
	BRDMRN8I_SAMPLE = -1914366775,
	BRDMRN9_SAMPLE = -1787527962,
	BROOM_SWEEP1_SAMPLE = -1088977228,
	BROOM_SWEEP2_SAMPLE = 639555342,
	BROOM_SWEEP3_SAMPLE = 1360652184,
	BROOM_SWEEP4_SAMPLE = -813862341,
	BROOM_SWEEP5_SAMPLE = -1199947091,
	BUBBLEMAKER_BLOW_HARD1_SAMPLE = -567218484,
	BUBBLEMAKER_BLOW_HARD2_SAMPLE = 1194966902,
	BUBBLEMAKER_BLOW_HARD3_SAMPLE = 809406432,
	BUBBLEMAKER_BLOW_LIGHT1_SAMPLE = -865691330,
	BUBBLEMAKER_BLOW_LIGHT2_SAMPLE = 1433389188,
	BUBBLEMAKER_BLOW_LIGHT3_SAMPLE = 577304594,
	BUBBLEMAKER_BREATHL_VOXF1_SAMPLE = -144136240,
	BUBBLEMAKER_BREATHL_VOXF2_SAMPLE = 1851913834,
	BUBBLEMAKER_BREATHL_VOXF3_SAMPLE = 426166012,
	BUBBLEMAKER_BREATHL_VOXF4_SAMPLE = -2029890721,
	BUBBLEMAKER_BREATHL_VOXK1_SAMPLE = 1120328093,
	BUBBLEMAKER_BREATHL_VOXK2_SAMPLE = -607156185,
	BUBBLEMAKER_BREATHL_VOXK3_SAMPLE = -1396131663,
	BUBBLEMAKER_BREATHL_VOXM1_SAMPLE = 345800219,
	BUBBLEMAKER_BREATHL_VOXM2_SAMPLE = -1919602783,
	BUBBLEMAKER_BREATHL_VOXM3_SAMPLE = -91087049,
	BUBBLEMAKER_BREATHL_VOXM4_SAMPLE = 1693878932,
	BUBBLEMAKER_BREATHS_VOXF1_SAMPLE = 1727941623,
	BUBBLEMAKER_BREATHS_VOXF2_SAMPLE = -583091,
	BUBBLEMAKER_BREATHS_VOXF3_SAMPLE = -1997526309,
	BUBBLEMAKER_BREATHS_VOXK1_SAMPLE = -749718086,
	BUBBLEMAKER_BREATHS_VOXK2_SAMPLE = 1247372288,
	BUBBLEMAKER_BREATHS_VOXM1_SAMPLE = -2062904772,
	BUBBLEMAKER_BREATHS_VOXM2_SAMPLE = 470008710,
	BUBBLEMAKER_BREATHS_VOXM3_SAMPLE = 1795486480,
	BUBBLEMAKER_BUBBLE_SAMPLE = 1164421539,
	BUBBLEMAKER_BUBBLE_POP1_SAMPLE = -524426726,
	BUBBLEMAKER_BUBBLE_POP2_SAMPLE = 2041885600,
	BUBBLEMAKER_BUBBLE_POP3_SAMPLE = 246645558,
	BUBBLEMAKER_BUBBLE_POP4_SAMPLE = -1864952171,
	BUBBLEMAKER_BUBBLE_POP5_SAMPLE = -405789181,
	BUBBLEMAKER_FOLLOW_VOXF1_SAMPLE = 2028545555,
	BUBBLEMAKER_FOLLOW_VOXF2_SAMPLE = -505382999,
	BUBBLEMAKER_FOLLOW_VOXF3_SAMPLE = -1763227841,
	BUBBLEMAKER_FOLLOW_VOXF4_SAMPLE = 142856860,
	BUBBLEMAKER_FOLLOW_VOXK2_SAMPLE = 1414400484,
	BUBBLEMAKER_FOLLOW_VOXK4_SAMPLE = -1121080111,
	BUBBLEMAKER_FOLLOW_VOXK5_SAMPLE = -903177145,
	BUBBLEMAKER_FOLLOW_VOXK6_SAMPLE = 1394855421,
	BUBBLEMAKER_FOLLOW_VOXK7_SAMPLE = 606403947,
	BUBBLEMAKER_FOLLOW_VOXM1_SAMPLE = -1692532776,
	BUBBLEMAKER_FOLLOW_VOXM2_SAMPLE = 34909794,
	BUBBLEMAKER_FOLLOW_VOXM3_SAMPLE = 1964220148,
	BUBBLEMAKER_FOLLOW_VOXM4_SAMPLE = -344519849,
	BUBBLEMAKER_FOLLOW_VOXM5_SAMPLE = -1670366271,
	BUBBLEMAKER_GAZE_VOXF1_SAMPLE = 232966643,
	BUBBLEMAKER_GAZE_VOXF2_SAMPLE = -1796499383,
	BUBBLEMAKER_GAZE_VOXF3_SAMPLE = -471029537,
	BUBBLEMAKER_GAZE_VOXK10_SAMPLE = -658895587,
	BUBBLEMAKER_GAZE_VOXK13_SAMPLE = 1102273703,
	BUBBLEMAKER_GAZE_VOXK3_SAMPLE = 1447220882,
	BUBBLEMAKER_GAZE_VOXK4_SAMPLE = -937016527,
	BUBBLEMAKER_GAZE_VOXK5_SAMPLE = -1088326745,
	BUBBLEMAKER_GAZE_VOXK7_SAMPLE = 1362039435,
	BUBBLEMAKER_GAZE_VOXK8_SAMPLE = -1047523558,
	BUBBLEMAKER_GAZE_VOXK9_SAMPLE = -1231601780,
	BUBBLEMAKER_GAZE_VOXM1_SAMPLE = -300543944,
	BUBBLEMAKER_GAZE_VOXM2_SAMPLE = 1998537090,
	BUBBLEMAKER_GAZE_VOXM3_SAMPLE = 1601812,
	BUBBLEMAKER_GIGGLE_VOXF1_SAMPLE = 260198161,
	BUBBLEMAKER_GIGGLE_VOXF2_SAMPLE = -1769267541,
	BUBBLEMAKER_GIGGLE_VOXF3_SAMPLE = -510906819,
	BUBBLEMAKER_GIGGLE_VOXF4_SAMPLE = 2145958814,
	BUBBLEMAKER_GIGGLE_VOXF5_SAMPLE = 149916424,
	BUBBLEMAKER_GIGGLE_VOXK1_SAMPLE = -1171508900,
	BUBBLEMAKER_GIGGLE_VOXK11_SAMPLE = -507781543,
	BUBBLEMAKER_GIGGLE_VOXK2_SAMPLE = 589652198,
	BUBBLEMAKER_GIGGLE_VOXK3_SAMPLE = 1411534960,
	BUBBLEMAKER_GIGGLE_VOXK4_SAMPLE = -901331501,
	BUBBLEMAKER_GIGGLE_VOXK6_SAMPLE = 608740607,
	BUBBLEMAKER_GIGGLE_VOXK7_SAMPLE = 1397724265,
	BUBBLEMAKER_GIGGLE_VOXK8_SAMPLE = -1007646216,
	BUBBLEMAKER_GIGGLE_VOXK9_SAMPLE = -1258833554,
	BUBBLEMAKER_GIGGLE_VOXM1_SAMPLE = -327772454,
	BUBBLEMAKER_GIGGLE_VOXM2_SAMPLE = 1971308384,
	BUBBLEMAKER_GIGGLE_VOXM3_SAMPLE = 41482230,
	BUBBLEMAKER_GIGGLE_VOXM4_SAMPLE = -1675861419,
	BUBBLEMAKER_GIGGLE_VOXM5_SAMPLE = -350530877,
	BUBBLEMAKER_GIGGLE_VOXM6_SAMPLE = 1913783161,
	BUBBLEMAKER_LAUGH_VOXF1_SAMPLE = 1247209766,
	BUBBLEMAKER_LAUGH_VOXF2_SAMPLE = -748701540,
	BUBBLEMAKER_LAUGH_VOXF3_SAMPLE = -1537701878,
	BUBBLEMAKER_LAUGH_VOXF4_SAMPLE = 977018281,
	BUBBLEMAKER_LAUGH_VOXF5_SAMPLE = 1295723839,
	BUBBLEMAKER_LAUGH_VOXK1_SAMPLE = -485525,
	BUBBLEMAKER_LAUGH_VOXK2_SAMPLE = 1727121105,
	BUBBLEMAKER_LAUGH_VOXK3_SAMPLE = 301397575,
	BUBBLEMAKER_LAUGH_VOXK4_SAMPLE = -1886231580,
	BUBBLEMAKER_LAUGH_VOXK5_SAMPLE = -124431502,
	BUBBLEMAKER_LAUGH_VOXM4_SAMPLE = -641153950,
	BUBBLEMAKER_LAUGH_VOXM5_SAMPLE = -1362103052,
	BUBBLEMAKER_LAUGH_VOXM6_SAMPLE = 935765326,
	BUBBLEMAKER_LAUGH_VOXM7_SAMPLE = 1086428632,
	BUBBLEMAKER_LAUGH_VOXM8_SAMPLE = -797013943,
	BUBBLEMAKER_POINT_VOXF1_SAMPLE = 95867757,
	BUBBLEMAKER_POINT_VOXF2_SAMPLE = -1665170729,
	BUBBLEMAKER_POINT_VOXF3_SAMPLE = -340217279,
	BUBBLEMAKER_POINT_VOXF4_SAMPLE = 1977362402,
	BUBBLEMAKER_POINT_VOXF5_SAMPLE = 47912820,
	BUBBLEMAKER_POINT_VOXF6_SAMPLE = -1680718130,
	BUBBLEMAKER_POINT_VOXK1_SAMPLE = -1340560096,
	BUBBLEMAKER_POINT_VOXK2_SAMPLE = 689044634,
	BUBBLEMAKER_POINT_VOXK3_SAMPLE = 1578552332,
	BUBBLEMAKER_POINT_VOXK5_SAMPLE = -1217042119,
	BUBBLEMAKER_POINT_VOXK6_SAMPLE = 779892867,
	BUBBLEMAKER_POINT_VOXK7_SAMPLE = 1501235221,
	BUBBLEMAKER_POINT_VOXM3_SAMPLE = 139225994,
	BUBBLEMAKER_POINT_VOXM4_SAMPLE = -1775698391,
	BUBBLEMAKER_POINT_VOXM5_SAMPLE = -516960577,
	BUBBLEMAKER_POINT_VOXM6_SAMPLE = 2015796997,
	BUBBLEMAKER_POINT_VOXM7_SAMPLE = 253865875,
	BUBBLEMAKER_WOO_VOXF4_SAMPLE = -49635564,
	BUBBLEMAKER_WOO_VOXF5_SAMPLE = -1978814590,
	BUBBLEMAKER_WOO_VOXF6_SAMPLE = 319094328,
	BUBBLEMAKER_WOO_VOXF7_SAMPLE = 1677971118,
	BUBBLEMAKER_WOO_VOXF8_SAMPLE = -188951745,
	BUBBLEMAKER_WOO_VOXM5_SAMPLE = 1777956425,
	BUBBLEMAKER_WOO_VOXM6_SAMPLE = -252696589,
	BUBBLEMAKER_WOO_VOXM7_SAMPLE = -2013849755,
	BUBBLEMAKER_WOO_VOXM8_SAMPLE = 390597364,
	BUBBLEMAKER_WOO_VOXM9_SAMPLE = 1615805026,
	BULL_FALLOFF_HI1_SAMPLE = -762468363,
	BULL_FALLOFF_HI2_SAMPLE = 1267005007,
	BULL_FALLOFF_HI3_SAMPLE = 1015269081,
	BULL_FALLOFF_MED1_SAMPLE = 576053350,
	BULL_FALLOFF_MED2_SAMPLE = -1151553060,
	BULL_FALL_HI_VOXE1_SAMPLE = 1322253953,
	BULL_FALL_HI_VOXE2_SAMPLE = -674844869,
	BULL_FALL_HI_VOXE3_SAMPLE = -1597923411,
	BULL_FALL_HI_VOXF5_SAMPLE = 1653565787,
	BULL_FALL_HI_VOXF6_SAMPLE = -75089695,
	BULL_FALL_HI_VOXF7_SAMPLE = -1937700745,
	BULL_FALL_HI_VOXF8_SAMPLE = 473830886,
	BULL_FALL_HI_VOXF9_SAMPLE = 1798907248,
	BULL_FALL_HI_VOXG1_SAMPLE = 2096733187,
	BULL_FALL_HI_VOXG2_SAMPLE = -437203527,
	BULL_FALL_HI_VOXG3_SAMPLE = -1829241553,
	BULL_FALL_HI_VOXG4_SAMPLE = 210987148,
	BULL_FALL_HI_VOXM5_SAMPLE = -2122600304,
	BULL_FALL_HI_VOXM6_SAMPLE = 410181930,
	BULL_FALL_HI_VOXM7_SAMPLE = 1869992380,
	BULL_FALL_HI_VOXM8_SAMPLE = -3486675,
	BULL_FALL_HI_VOXM9_SAMPLE = -1999766341,
	BULL_FALL_MED_VOXE1_SAMPLE = -1185919993,
	BULL_FALL_MED_VOXE2_SAMPLE = 542711229,
	BULL_FALL_MED_VOXE5_SAMPLE = -1103263714,
	BULL_FALL_MED_VOXF1_SAMPLE = -1837293628,
	BULL_FALL_MED_VOXF2_SAMPLE = 192171646,
	BULL_FALL_MED_VOXF3_SAMPLE = 2087943912,
	BULL_FALL_MED_VOXG1_SAMPLE = -1956237691,
	BULL_FALL_MED_VOXG2_SAMPLE = 309296959,
	BULL_FALL_MED_VOXG3_SAMPLE = 1701334953,
	BULL_FALL_MED_VOXM1_SAMPLE = 1904854543,
	BULL_FALL_MED_VOXM2_SAMPLE = -394225739,
	BULL_FALL_MED_VOXM3_SAMPLE = -1618499805,
	BULL_FALL_MED_VOXM4_SAMPLE = 31666816,
	BULL_GETOFF1_SAMPLE = -847937358,
	BULL_GETOFF2_SAMPLE = 1417466120,
	BULL_GETOFF_VOXE1_SAMPLE = -1783119438,
	BULL_GETOFF_VOXE2_SAMPLE = 213815304,
	BULL_GETOFF_VOXE3_SAMPLE = 2075762846,
	BULL_GETOFF_VOXE4_SAMPLE = -438487747,
	BULL_GETOFF_VOXE5_SAMPLE = -1831205461,
	BULL_GETOFF_VOXF2_SAMPLE = 663995339,
	BULL_GETOFF_VOXF3_SAMPLE = 1351938909,
	BULL_GETOFF_VOXF4_SAMPLE = -823105794,
	BULL_GETOFF_VOXF5_SAMPLE = -1174972824,
	BULL_GETOFF_VOXF6_SAMPLE = 553519058,
	BULL_GETOFF_VOXG1_SAMPLE = -1484676304,
	BULL_GETOFF_VOXG2_SAMPLE = 1049162378,
	BULL_GETOFF_VOXM1_SAMPLE = 1567509434,
	BULL_GETOFF_VOXM2_SAMPLE = -999876096,
	BULL_GETOFF_VOXM3_SAMPLE = -1285543274,
	BULL_GETOFF_VOXM4_SAMPLE = 755285813,
	BULL_GETON1_SAMPLE = -1420542091,
	BULL_GETON2_SAMPLE = 844984015,
	BULL_GETON_A_VOXAF1_SAMPLE = 1664252970,
	BULL_GETON_A_VOXAF2_SAMPLE = -96785008,
	BULL_GETON_A_VOXAF3_SAMPLE = -1925440250,
	BULL_GETON_A_VOXAF4_SAMPLE = 324569253,
	BULL_GETON_A_VOXAM1_SAMPLE = -2134465055,
	BULL_GETON_A_VOXAM2_SAMPLE = 433058907,
	BULL_GETON_A_VOXAM4_SAMPLE = -257142418,
	BULL_GETON_A_VOXAM5_SAMPLE = -2018811400,
	BULL_GETON_A_VOXBF1_SAMPLE = 1635041907,
	BULL_GETON_A_VOXBF2_SAMPLE = -125987895,
	BULL_GETON_A_VOXBF3_SAMPLE = -1887788193,
	BULL_GETON_A_VOXBF4_SAMPLE = 287192828,
	BULL_GETON_A_VOXBF5_SAMPLE = 1712916074,
	BULL_GETON_A_VOXBM1_SAMPLE = -2105533512,
	BULL_GETON_A_VOXBM2_SAMPLE = 461982210,
	BULL_GETON_A_VOXBM3_SAMPLE = 1821276820,
	BULL_GETON_A_VOXBM4_SAMPLE = -219484361,
	BULL_GETON_A_VOXCF1_SAMPLE = 1622583364,
	BULL_GETON_A_VOXCF2_SAMPLE = -104859138,
	BULL_GETON_A_VOXCF3_SAMPLE = -1900492440,
	BULL_GETON_A_VOXCM1_SAMPLE = -2092797553,
	BULL_GETON_A_VOXCM2_SAMPLE = 441131061,
	BULL_GETON_A_VOXCM3_SAMPLE = 1833701539,
	BULL_GETON_A_VOXCM4_SAMPLE = -215448320,
	BULL_GETON_A_VOXE1_SAMPLE = -1854430575,
	BULL_GETON_A_VOXE2_SAMPLE = 142537515,
	BULL_GETON_A_VOXE3_SAMPLE = 2138686397,
	BULL_GETON_A_VOXG1_SAMPLE = -1555972077,
	BULL_GETON_A_VOXG2_SAMPLE = 977834409,
	BULL_GETON_A_VOXG3_SAMPLE = 1297064255,
	BULL_GETON_A_VOXG4_SAMPLE = -752143204,
	BULL_GETON_B_VOXAF1_SAMPLE = -306349111,
	BULL_GETON_B_VOXAF2_SAMPLE = 1957964403,
	BULL_GETON_B_VOXAF3_SAMPLE = 62069477,
	BULL_GETON_B_VOXAF4_SAMPLE = -1646817466,
	BULL_GETON_B_VOXAM1_SAMPLE = 239706626,
	BULL_GETON_B_VOXAM2_SAMPLE = -1757350984,
	BULL_GETON_B_VOXAM3_SAMPLE = -532167890,
	BULL_GETON_B_VOXAM4_SAMPLE = 2116245133,
	BULL_GETON_B_VOXAM5_SAMPLE = 153380379,
	BULL_GETON_B_VOXBF1_SAMPLE = -268712560,
	BULL_GETON_B_VOXBF2_SAMPLE = 1995609130,
	BULL_GETON_B_VOXBF3_SAMPLE = 32875708,
	BULL_GETON_B_VOXBF4_SAMPLE = -1617874657,
	BULL_GETON_B_VOXBF5_SAMPLE = -392822391,
	BULL_GETON_B_VOXBM1_SAMPLE = 202316891,
	BULL_GETON_B_VOXBM2_SAMPLE = -1794748959,
	BULL_GETON_B_VOXBM3_SAMPLE = -503218825,
	BULL_GETON_B_VOXBM4_SAMPLE = 2087053524,
	BULL_GETON_B_VOXCF1_SAMPLE = -298209369,
	BULL_GETON_B_VOXCF2_SAMPLE = 1999699485,
	BULL_GETON_B_VOXCF3_SAMPLE = 3657355,
	BULL_GETON_B_VOXCM1_SAMPLE = 231569004,
	BULL_GETON_B_VOXCM2_SAMPLE = -1799084074,
	BULL_GETON_B_VOXCM3_SAMPLE = -473753792,
	BULL_GETON_B_VOXCM4_SAMPLE = 2108130019,
	BULL_GETON_B_VOXE1_SAMPLE = -1600145396,
	BULL_GETON_B_VOXE2_SAMPLE = 966191542,
	BULL_GETON_B_VOXE3_SAMPLE = 1318181152,
	BULL_GETON_B_VOXG1_SAMPLE = -1834362226,
	BULL_GETON_B_VOXG2_SAMPLE = 195070772,
	BULL_GETON_B_VOXG4_SAMPLE = -490525183,
	BULL_GETON_B_VOXG5_SAMPLE = -1782309225,
	BULL_GETUP_HI_VOXE1_SAMPLE = -1297685568,
	BULL_GETUP_HI_VOXE2_SAMPLE = 732934778,
	BULL_GETUP_HI_VOXE3_SAMPLE = 1554547436,
	BULL_GETUP_HI_VOXF3_SAMPLE = 2005258543,
	BULL_GETUP_HI_VOXF4_SAMPLE = -371112820,
	BULL_GETUP_HI_VOXF5_SAMPLE = -1629064166,
	BULL_GETUP_HI_VOXF6_SAMPLE = 133113248,
	BULL_GETUP_HI_VOXF8_SAMPLE = -531167065,
	BULL_GETUP_HI_VOXG1_SAMPLE = -2138013374,
	BULL_GETUP_HI_VOXG2_SAMPLE = 429510904,
	BULL_GETUP_HI_VOXG3_SAMPLE = 1855905902,
	BULL_GETUP_HI_VOXG4_SAMPLE = -252021299,
	BULL_GETUP_HI_VOXM10_SAMPLE = 1629416138,
	BULL_GETUP_HI_VOXM6_SAMPLE = -467927957,
	BULL_GETUP_HI_VOXM7_SAMPLE = -1826829059,
	BULL_GETUP_HI_VOXM8_SAMPLE = 61067628,
	BULL_GETUP_HI_VOXM9_SAMPLE = 1956962810,
	BULL_GETUP_MED_VOXE1_SAMPLE = -1200139236,
	BULL_GETUP_MED_VOXE2_SAMPLE = 561907110,
	BULL_GETUP_MED_VOXE3_SAMPLE = 1450784048,
	BULL_GETUP_MED_VOXE4_SAMPLE = -937582445,
	BULL_GETUP_MED_VOXF1_SAMPLE = -1822816289,
	BULL_GETUP_MED_VOXF2_SAMPLE = 173233765,
	BULL_GETUP_MED_VOXF3_SAMPLE = 2102683379,
	BULL_GETUP_MED_VOXG1_SAMPLE = -1975437666,
	BULL_GETUP_MED_VOXG2_SAMPLE = 323512100,
	BULL_GETUP_MED_VOXG3_SAMPLE = 1682921394,
	BULL_GETUP_MED_VOXM1_SAMPLE = 1890508308,
	BULL_GETUP_MED_VOXM2_SAMPLE = -374894674,
	BULL_GETUP_MED_VOXM3_SAMPLE = -1633632456,
	BULL_GETUP_MED_VOXM4_SAMPLE = 12855963,
	BULL_HIGHSKILL_WATCH_VOXF1_SAMPLE = 1110973960,
	BULL_HIGHSKILL_WATCH_VOXF2_SAMPLE = -617525326,
	BULL_HIGHSKILL_WATCH_VOXF3_SAMPLE = -1405714652,
	BULL_HIGHSKILL_WATCH_VOXF4_SAMPLE = 844294791,
	BULL_HIGHSKILL_WATCH_VOXF5_SAMPLE = 1163254289,
	BULL_HIGHSKILL_WATCH_VOXK1_SAMPLE = -141139899,
	BULL_HIGHSKILL_WATCH_VOXK2_SAMPLE = 1855926783,
	BULL_HIGHSKILL_WATCH_VOXK3_SAMPLE = 429392233,
	BULL_HIGHSKILL_WATCH_VOXK4_SAMPLE = -2013489974,
	BULL_HIGHSKILL_WATCH_VOXK5_SAMPLE = -251943844,
	BULL_HIGHSKILL_WATCH_VOXK6_SAMPLE = 1777530342,
	BULL_HIGHSKILL_WATCH_VOXK8_SAMPLE = -1907697439,
	BULL_HIGHSKILL_WATCH_VOXM2_SAMPLE = 952473209,
	BULL_HIGHSKILL_WATCH_VOXM3_SAMPLE = 1338156783,
	BULL_HIGHSKILL_WATCH_VOXM4_SAMPLE = -777637044,
	BULL_HIGHSKILL_WATCH_VOXM6_SAMPLE = 1067995744,
	BULL_HIGHSKILL_WATCH_VOXM7_SAMPLE = 1219453686,
	BULL_HIGH_A1_SAMPLE = -1428231181,
	BULL_HIGH_A2_SAMPLE = 869775945,
	BULL_HIGH_A3_SAMPLE = 1154517727,
	BULL_HIGH_A4_SAMPLE = -625729668,
	BULL_HIGH_B1_SAMPLE = -2114734032,
	BULL_HIGH_B2_SAMPLE = 419096970,
	BULL_HIGH_B3_SAMPLE = 1878907164,
	BULL_LOOP_SAMPLE = -61382453,
	BULL_LOW1_SAMPLE = 1157212508,
	BULL_LOW2_SAMPLE = -571410202,
	BULL_LOW3_SAMPLE = -1426601872,
	BULL_LOW4_SAMPLE = 882073043,
	BULL_LOW5_SAMPLE = 1133800773,
	BULL_MEDSKILL_WATCH_VOXF1_SAMPLE = -73164660,
	BULL_MEDSKILL_WATCH_VOXF2_SAMPLE = 1655359798,
	BULL_MEDSKILL_WATCH_VOXF3_SAMPLE = 363723168,
	BULL_MEDSKILL_WATCH_VOXF4_SAMPLE = -1949733885,
	BULL_MEDSKILL_WATCH_VOXF5_SAMPLE = -53584747,
	BULL_MEDSKILL_WATCH_VOXK1_SAMPLE = 1309533889,
	BULL_MEDSKILL_WATCH_VOXK2_SAMPLE = -687556741,
	BULL_MEDSKILL_WATCH_VOXK3_SAMPLE = -1610381331,
	BULL_MEDSKILL_WATCH_VOXK4_SAMPLE = 1046942286,
	BULL_MEDSKILL_WATCH_VOXM4_SAMPLE = 1748874696,
	BULL_MEDSKILL_WATCH_VOXM5_SAMPLE = 523928926,
	BULL_MEDSKILL_WATCH_VOXM6_SAMPLE = -2043423516,
	BULL_MEDSKILL_WATCH_VOXM7_SAMPLE = -248191886,
	BULL_MEDSKILL_WATCH_VOXM8_SAMPLE = 1636563427,
	BULL_MED_A1_SAMPLE = -1050086349,
	BULL_MED_A2_SAMPLE = 1482794377,
	BULL_MED_A3_SAMPLE = 795251999,
	BULL_MED_B1_SAMPLE = -364533776,
	BULL_MED_B2_SAMPLE = 1934423626,
	BULL_MED_B3_SAMPLE = 72074972,
	BULL_RIDER_VOXAF3_SAMPLE = -490453714,
	BULL_RIDER_VOXAF4_SAMPLE = 2090913933,
	BULL_RIDER_VOXAF5_SAMPLE = 195551259,
	BULL_RIDER_VOXAF6_SAMPLE = -1834045023,
	BULL_RIDER_VOXAF7_SAMPLE = -441876169,
	BULL_RIDER_VOXAF8_SAMPLE = 1964416166,
	BULL_RIDER_VOXAF9_SAMPLE = 34712624,
	BULL_RIDER_VOXAM11_SAMPLE = 1636543326,
	BULL_RIDER_VOXAM13_SAMPLE = -1887057294,
	BULL_RIDER_VOXAM14_SAMPLE = 299982801,
	BULL_RIDER_VOXAM15_SAMPLE = 1726377799,
	BULL_RIDER_VOXAM16_SAMPLE = -1097987,
	BULL_RIDER_VOXAM17_SAMPLE = -1998057877,
	BULL_RIDER_VOXAM7_SAMPLE = 106780924,
	BULL_RIDER_VOXAM8_SAMPLE = -1763555987,
	BULL_RIDER_VOXAM9_SAMPLE = -505055749,
	BULL_RIDER_VOXBF1_SAMPLE = 244095579,
	BULL_RIDER_VOXBF2_SAMPLE = -1752839199,
	BULL_RIDER_VOXBF3_SAMPLE = -528286857,
	BULL_RIDER_VOXBF4_SAMPLE = 2129030868,
	BULL_RIDER_VOXBF5_SAMPLE = 165764674,
	BULL_RIDER_VOXBF6_SAMPLE = -1863839752,
	BULL_RIDER_VOXBF7_SAMPLE = -403751058,
	BULL_RIDER_VOXBM1_SAMPLE = -310885488,
	BULL_RIDER_VOXBM2_SAMPLE = 1953567274,
	BULL_RIDER_VOXBM3_SAMPLE = 58073788,
	BULL_RIDER_VOXBM4_SAMPLE = -1659717857,
	BULL_RIDER_VOXBM5_SAMPLE = -367687799,
	BULL_RIDER_VOXBM6_SAMPLE = 1931269683,
	BULL_RIDER_VOXBM7_SAMPLE = 68937381,
	BULL_RIDER_VOXBM8_SAMPLE = -1801127116,
	BULL_RIDER_VOXCF1_SAMPLE = 256831596,
	BULL_RIDER_VOXCF3_SAMPLE = -515862208,
	BULL_RIDER_VOXCF4_SAMPLE = 2133066979,
	BULL_RIDER_VOXCF5_SAMPLE = 136524917,
	BULL_RIDER_VOXCF6_SAMPLE = -1859492401,
	BULL_RIDER_VOXCM1_SAMPLE = -323343961,
	BULL_RIDER_VOXCM3_SAMPLE = 45369483,
	BULL_RIDER_VOXCM4_SAMPLE = -1664033496,
	BULL_RIDER_VOXCM5_SAMPLE = -338170434,
	BULL_RIDER_VOXCM6_SAMPLE = 1927199748,
	BULL_RIDER_VOXCM7_SAMPLE = 98143378,
	BULL_RIDER_VOXE1_SAMPLE = -648516793,
	BULL_RIDER_VOXE2_SAMPLE = 1079065341,
	BULL_RIDER_VOXE3_SAMPLE = 928385643,
	BULL_RIDER_VOXE4_SAMPLE = -1456300088,
	BULL_RIDER_VOXE6_SAMPLE = 1195179748,
	BULL_RIDER_VOXE7_SAMPLE = 809225842,
	BULL_RIDER_VOXE8_SAMPLE = -1601907741,
	BULL_RIDER_VOXE9_SAMPLE = -679222411,
	BULL_RIDER_VOXG1_SAMPLE = -345110075,
	BULL_RIDER_VOXG11_SAMPLE = 1748612993,
	BULL_RIDER_VOXG12_SAMPLE = -248453573,
	BULL_RIDER_VOXG3_SAMPLE = 90204393,
	BULL_RIDER_VOXG4_SAMPLE = -1694171830,
	BULL_RIDER_VOXG6_SAMPLE = 1963629670,
	BULL_RIDER_VOXG8_SAMPLE = -1833782943,
	BULL_RIDER_VOXG9_SAMPLE = -441089545,
	BULL_START_SAMPLE = -280057475,
	BULL_STOP_SAMPLE = -463574125,
	BUNSEN_BOILING_SAMPLE = -273619574,
	BUNSEN_OFF_SAMPLE = 105397503,
	BUNSEN_ON_SAMPLE = -13101033,
	BURGLAR_ALARM_SAMPLE = -81578770,
	CAMPFIRE_GUITAR_GET_SAMPLE = -283556841,
	CAMPFIRE_GUITAR_PUT_SAMPLE = -1129126989,
	CAMPFIRE_LOG_PUT1_SAMPLE = 1506755732,
	CAMPFIRE_LOG_PUT2_SAMPLE = -1060760274,
	CAMPFIRE_LOG_PUT3_SAMPLE = -1212078664,
	CAMPFIRE_LOG_PUT4_SAMPLE = 698724379,
	CAMPFIRE_LOG_PUT5_SAMPLE = 1587708045,
	CAMPFIRE_LOG_PUT6_SAMPLE = -945041097,
	CAMPFIRE_LOOP_EMBERS_SAMPLE = 355980467,
	CAMPFIRE_LOOP_HIGH_SAMPLE = -767577020,
	CAMPFIRE_LOOP_LOW_SAMPLE = 1908397686,
	CAMPFIRE_LOOP_MED_SAMPLE = 237770005,
	CAMPFIRE_POKE1_SAMPLE = 470548734,
	CAMPFIRE_POKE2_SAMPLE = -2063249084,
	CAMPFIRE_POKE3_SAMPLE = -234724910,
	CAMPFIRE_POKE4_SAMPLE = 1818686577,
	CAMPFIRE_POKE5_SAMPLE = 459392231,
	CAMPFIRE_POKE6_SAMPLE = -2107075235,
	CAMPFIRE_START_SAMPLE = -377995737,
	CAMPGHOST_LOOP_SAMPLE = 980691945,
	CAMPGHOST_SCARE_A_VOX1_SAMPLE = 2000093739,
	CAMPGHOST_SCARE_A_VOX2_SAMPLE = -297905263,
	CAMPGHOST_SCARE_C_VOX1_SAMPLE = 989831968,
	CAMPGHOST_SCARE_C_VOX2_SAMPLE = -1544097126,
	CAMPGHOST_WAIL_VOX1_SAMPLE = -1040168766,
	CAMPGHOST_WAIL_VOX2_SAMPLE = 1527323000,
	CARPOOL_DOOR_CLOSE_LARGE_SAMPLE = 439853988,
	CARPOOL_DOOR_CLOSE_MED_SAMPLE = 1002637770,
	CARPOOL_DOOR_CLOSE_SMALL_SAMPLE = 907632649,
	CARPOOL_DOOR_OPEN_LARGE_SAMPLE = -1784637639,
	CARPOOL_DOOR_OPEN_MED_SAMPLE = -207512679,
	CARPOOL_DOOR_OPEN_SMALL_SAMPLE = -1181854572,
	CARPOOL_LEAVE_LARGE_SAMPLE = -1427471959,
	CARPOOL_LEAVE_MED_SAMPLE = -326742720,
	CARPOOL_LEAVE_SMALL_SAMPLE = -2033958396,
	CARPOOL_TOWNCAR_LEAVES_SAMPLE = 1071929131,
	CARVE_LP_HI_A_SAMPLE = 6016080,
	CARVE_LP_HI_B_SAMPLE = -1722638870,
	CARVE_LP_HI_C_SAMPLE = -296374916,
	CARVE_LP_LO_B_SAMPLE = 314406415,
	CARVE_SCULPTURE_DESTROY_SAMPLE = 1259391494,
	CARVE_TADA_VOXF10_SAMPLE = -1070885722,
	CARVE_TADA_VOXF13_SAMPLE = 1495450908,
	CARVE_TADA_VOXM3_SAMPLE = -1821850738,
	CARVE_TADA_VOXM4_SAMPLE = 218912301,
	CAR_BENTLEY_HONK1_SAMPLE = -795331148,
	CAR_BENTLEY_HONK2_SAMPLE = 1234265102,
	CAR_JEEP_HONK1_SAMPLE = -2043663022,
	CAR_JEEP_HONK2_SAMPLE = 523861224,
	CAR_JUNKY_HONK1_SAMPLE = 647049969,
	CAR_JUNKY_HONK2_SAMPLE = -1080532149,
	CAR_LIMO_HONK1_SAMPLE = 795433363,
	CAR_LIMO_HONK2_SAMPLE = -1235220439,
	CAR_SCHOOLBUS_DOORCLOSE_SAMPLE = 530057840,
	CAR_SCHOOLBUS_DOOROPEN_SAMPLE = -1948250289,
	CAR_SCHOOLBUS_HONK1_SAMPLE = -293181272,
	CAR_SCHOOLBUS_HONK2_SAMPLE = 2005874962,
	CAR_SCHOOLBUS_LEAVES_SAMPLE = 778863681,
	CAR_SQUAD_HONK1_SAMPLE = 1134384559,
	CAR_SQUAD_HONK2_SAMPLE = -627833835,
	CAR_STAFFSEDAN_HONK1_SAMPLE = 1815878594,
	CAR_STAFFSEDAN_HONK2_SAMPLE = -181056904,
	CAR_STANDARDSEDAN_HONK1_SAMPLE = -616277407,
	CAR_STANDARDSEDAN_HONK2_SAMPLE = 1112345563,
	CAR_SUV_HONK1_SAMPLE = -1268813253,
	CAR_SUV_HONK2_SAMPLE = 760619905,
	CAR_TOWNCAR_HONK1_SAMPLE = -1836131732,
	CAR_TOWNCAR_HONK2_SAMPLE = 193432534,
	CATERER_CLEAN1_SAMPLE = 152676870,
	CATERER_CLEAN2_SAMPLE = -1877935172,
	CATERER_CLEAN3_SAMPLE = -417871062,
	CATERER_CSTUME_APP_VOX1_SAMPLE = 551994491,
	CATERER_CSTUME_APP_VOX2_SAMPLE = -1175480895,
	CATERER_CSTUME_APP_VOX3_SAMPLE = -823614121,
	CATERER_CSTUME_APP_VOX5_SAMPLE = 663421026,
	CATERER_CSTUME_APP_VOX7_SAMPLE = -914005682,
	CATERER_CSTUME_DIS_VOX1_SAMPLE = 483680684,
	CATERER_CSTUME_DIS_VOX11_SAMPLE = 1554043925,
	CATERER_CSTUME_DIS_VOX3_SAMPLE = -220594048,
	CATERER_CSTUME_DIS_VOX4_SAMPLE = 1824429347,
	CATERER_CSTUME_DIS_VOX7_SAMPLE = -172505959,
	CATERER_HUM_VOX2_SAMPLE = -866638683,
	CATERER_HUM_VOX3_SAMPLE = -1151396813,
	CATERER_HUM_VOX4_SAMPLE = 624656784,
	CATERER_HUM_VOX5_SAMPLE = 1379709190,
	CATERER_HUM_VOX6_SAMPLE = -885661508,
	CATERER_HUM_VOX7_SAMPLE = -1137520598,
	CATERER_HUM_VOX8_SAMPLE = 747490747,
	CATERER_HUM_VOX9_SAMPLE = 1535835437,
	CATERER_REFILL_VOX1_SAMPLE = -50801390,
	CATERER_REFILL_VOX2_SAMPLE = 1710326952,
	CATERER_REFILL_VOX3_SAMPLE = 318157886,
	CATERER_REFILL_VOX4_SAMPLE = -1936580195,
	CATERER_REFILL_VOX5_SAMPLE = -74116853,
	CATERER_RESTOCK_PRO_SAMPLE = -1880133462,
	CATERER_RESTOCK_PRO_VOX10_SAMPLE = -1623851517,
	CATERER_RESTOCK_PRO_VOX11_SAMPLE = -399323499,
	CATERER_RESTOCK_PRO_VOX4_SAMPLE = -182836513,
	CATERER_RESTOCK_PRO_VOX5_SAMPLE = -2112023991,
	CATERER_RESTOCK_PRO_VOX8_SAMPLE = -55808268,
	CATERER_RESTOCK_VOXF1_SAMPLE = -2037145631,
	CATERER_RESTOCK_VOXF2_SAMPLE = 530239067,
	CATERER_RESTOCK_VOXF3_SAMPLE = 1755184845,
	CATERER_RESTOCK_VOXM1_SAMPLE = 1701266986,
	CATERER_RESTOCK_VOXM2_SAMPLE = -59893872,
	CATERER_RESTOCK_VOXM3_SAMPLE = -1956043002,
	CATERER_SHOO_MIME_VOX1_SAMPLE = -383097031,
	CATERER_SHOO_MIME_VOX2_SAMPLE = 1881355907,
	CATERER_SHOO_MIME_VOX3_SAMPLE = 119801365,
	CATERER_SHOO_MIME_VOX4_SAMPLE = -1723821130,
	CATERER_SHOO_MIME_VOX5_SAMPLE = -297295072,
	CATERER_SHOO_MIME_VOX6_SAMPLE = 2001662618,
	CATERER_STORY_A_VOX1_SAMPLE = -2145254496,
	CATERER_STORY_A_VOX3_SAMPLE = 1848402572,
	CATERER_STORY_A_VOX5_SAMPLE = -2024814663,
	CATERER_STORY_A_VOX6_SAMPLE = 507942403,
	CATERER_STORY_A_VOX8_SAMPLE = -100746492,
	CATERER_STORY_B_VOX1_SAMPLE = 112619790,
	CATERER_STORY_B_VOX2_SAMPLE = -1614864204,
	CATERER_STORY_B_VOX3_SAMPLE = -390590430,
	CATERER_STORY_B_VOX4_SAMPLE = 1994163585,
	CATERER_STORY_B_VOX5_SAMPLE = 31175959,
	CATERER_STORY_C_VOX10_SAMPLE = -1257091101,
	CATERER_STORY_C_VOX2_SAMPLE = 1424225041,
	CATERER_STORY_C_VOX3_SAMPLE = 602194823,
	CATERER_STORY_C_VOX6_SAMPLE = 1401829128,
	CATERER_STORY_C_VOX8_SAMPLE = -1271522801,
	CATERER_TALK_ENG_VOX1_SAMPLE = -186612286,
	CATERER_TALK_ENG_VOX2_SAMPLE = 1844040824,
	CATERER_TALK_ENG_VOX4_SAMPLE = -2071301811,
	CATERER_TALK_ENG_VOX5_SAMPLE = -208846373,
	CATERER_TALK_ENG_VOX6_SAMPLE = 1787039841,
	CATERER_TALK_ENG_VOX7_SAMPLE = 495132919,
	CATERER_TALK_ENG_VOX8_SAMPLE = -1925431962,
	CATERER_TALK_ENG_VOX9_SAMPLE = -96793104,
	CATERER_TALK_FLOWR_VOX1_SAMPLE = 1718735536,
	CATERER_TALK_FLOWR_VOX11_SAMPLE = 1222323689,
	CATERER_TALK_FLOWR_VOX4_SAMPLE = 370878015,
	CATERER_TALK_FLOWR_VOX5_SAMPLE = 1629230761,
	CATERER_TALK_FLOWR_VOX8_SAMPLE = 531458580,
	CATERER_TALK_SELF_VOX1_SAMPLE = -545549355,
	CATERER_TALK_SELF_VOX2_SAMPLE = 1181925999,
	CATERER_TALK_SELF_VOX3_SAMPLE = 829813497,
	CATERER_TALK_SELF_VOX4_SAMPLE = -1357813926,
	CATERER_TALK_SELF_VOX5_SAMPLE = -669624372,
	CATERER_TALK_SELF_VOX6_SAMPLE = 1092552310,
	CATERER_TALK_SELF_VOX7_SAMPLE = 907556576,
	CATERER_TALK_SELF_VOX8_SAMPLE = -1498993807,
	CATERER_TALK_SELF_VOX9_SAMPLE = -778036249,
	CATERER_TALK_SUBTLE_VOX1_SAMPLE = 737859303,
	CATERER_TALK_SUBTLE_VOX2_SAMPLE = -1292662947,
	CATERER_TALK_SUBTLE_VOX3_SAMPLE = -973817909,
	CATERER_TALK_SUBTLE_VOX8_SAMPLE = 1378250307,
	CATERER_TALK_SUBTLE_VOX9_SAMPLE = 622943957,
	CATERER_TANTRUM_A_VOX1_SAMPLE = 276587043,
	CATERER_TANTRUM_A_VOX3_SAMPLE = -26082545,
	CATERER_TANTRUM_A_VOX4_SAMPLE = 1612093100,
	CATERER_TANTRUM_A_VOX6_SAMPLE = -1910966400,
	CATERER_TANTRUM_A_VOX7_SAMPLE = -115357930,
	CATERER_TANTRUM_B_VOX1_SAMPLE = -1763176307,
	CATERER_TANTRUM_B_VOX2_SAMPLE = 266420535,
	CATERER_TANTRUM_B_VOX3_SAMPLE = 2028368289,
	CATERER_TANTRUM_B_VOX4_SAMPLE = -427629566,
	CATERER_TANTRUM_B_VOX5_SAMPLE = -1853500268,
	CATERER_TANTRUM_B_VOX6_SAMPLE = 143426862,
	CATERER_TANTRUM_B_VOX7_SAMPLE = 2139862456,
	CATERER_TANTRUM_B_VOX8_SAMPLE = -281761751,
	CATERER_TANTRUM_C_VOX1_SAMPLE = 1572127528,
	CATERER_TANTRUM_C_VOX4_SAMPLE = 769537959,
	CATERER_TANTRUM_C_VOX5_SAMPLE = 1524172593,
	CATERER_TANTRUM_C_VOX6_SAMPLE = -1009756533,
	CATERER_TANTRUM_C_VOX7_SAMPLE = -1260952035,
	CC_TICK_SAMPLE = -629261786,
	CC_TOCK_SAMPLE = -554482028,
	CHAIR_MOVE_SAMPLE = -1006406875,
	CHAIR_OFFICE_MOVE_SAMPLE = 68999535,
	CHAIR_RECLINE_SAMPLE = -1361125456,
	CHAIR_SIT_HAYBALE_SAMPLE = -1658871170,
	CHAIR_SIT_METAL1_SAMPLE = 214205405,
	CHAIR_SIT_METAL2_SAMPLE = -1781673369,
	CHAIR_SIT_METAL3_SAMPLE = -490020111,
	CHAIR_SIT_RECLINER_LEATHER1_SAMPLE = -983542083,
	CHAIR_SIT_RECLINER_LEATHER2_SAMPLE = 1550386951,
	CHAIR_SIT_RECLINER_LEATHER3_SAMPLE = 728643473,
	CHAIR_SIT_UNMOVABLE_SAMPLE = 478295305,
	CHAIR_SIT_WOOD_SAMPLE = 286134493,
	CHARADES_BOX_OPEN_SAMPLE = 341207217,
	CHEMISTRY_REACTION1_VOXF1_SAMPLE = 193331246,
	CHEMISTRY_REACTION1_VOXF2_SAMPLE = -1836101228,
	CHEMISTRY_REACTION1_VOXF3_SAMPLE = -444047102,
	CHEMISTRY_REACTION1_VOXM1_SAMPLE = -395126299,
	CHEMISTRY_REACTION1_VOXM2_SAMPLE = 1903921247,
	CHEMISTRY_REACTION1_VOXM3_SAMPLE = 108837065,
	CHEMISTRY_REACTION2_VOXF1_SAMPLE = 980294323,
	CHEMISTRY_REACTION2_VOXF2_SAMPLE = -1553511671,
	CHEMISTRY_REACTION2_VOXF3_SAMPLE = -731874401,
	CHEMISTRY_REACTION2_VOXM1_SAMPLE = -644168840,
	CHEMISTRY_REACTION2_VOXM2_SAMPLE = 1083413186,
	CHEMISTRY_REACTION2_VOXM3_SAMPLE = 932487764,
	CHEMSET_EXPLOSION_SAMPLE = -624597179,
	CHEMSET_HANDWIPE_SAMPLE = 898832437,
	CHEMSET_REPAIR1_SAMPLE = 483455778,
	CHEMSET_REPAIR2_SAMPLE = -2049334632,
	CHEMSET_REPAIR3_SAMPLE = -220294642,
	CHEMSET_TEND2_SAMPLE = -1300742233,
	CHESS_PIECE_PUT1_SAMPLE = 731444661,
	CHESS_PIECE_PUT2_SAMPLE = -1299078129,
	CHESS_PIECE_PUT3_SAMPLE = -979987303,
	CLOCK_ALARM_RING_SAMPLE = 1358266284,
	CLOCK_ALARM_SETUNSET_SAMPLE = 1017777279,
	CLOCK_GRAND_TICKTOCK_SAMPLE = 802991956,
	CLOCK_GRAND_WIND_SAMPLE = 273649906,
	CLOTHES_CHANGE_NAKED_SAMPLE = 1558159904,
	CLOTHES_CHANGE_SPIN_SAMPLE = 2043783638,
	CLOWN_APPEAR_VOX1_SAMPLE = -1983486862,
	CLOWN_APPEAR_VOX2_SAMPLE = 282015176,
	CLOWN_APPEAR_VOX3_SAMPLE = 1741161822,
	CLOWN_BALLOON_BLOW1A_SAMPLE = -693554498,
	CLOWN_BALLOON_BLOW1B_SAMPLE = 1335911172,
	CLOWN_BALLOON_BLOW1C_SAMPLE = 950490002,
	CLOWN_BALLOON_BLOW2A_SAMPLE = -41655939,
	CLOWN_BALLOON_BLOW2B_SAMPLE = 1686974663,
	CLOWN_BALLOON_BLOW2C_SAMPLE = 327811153,
	CLOWN_BALLOON_BLOW3A_SAMPLE = -459321284,
	CLOWN_BALLOON_BLOW3B_SAMPLE = 2106982790,
	CLOWN_BALLOON_BLOW3C_SAMPLE = 177287440,
	CLOWN_BLOWNOSE_SAMPLE = -21105237,
	CLOWN_COMPLAIN_VOX1_SAMPLE = -1188648006,
	CLOWN_COMPLAIN_VOX2_SAMPLE = 540015104,
	CLOWN_COMPLAIN_VOX3_SAMPLE = 1462291094,
	CLOWN_COMPLAIN_VOX4_SAMPLE = -917741771,
	CLOWN_COMPLAIN_VOX5_SAMPLE = -1102352477,
	CLOWN_COMPLAIN_VOX6_SAMPLE = 658652697,
	CLOWN_COUGH2_VOX1_SAMPLE = -1831792787,
	CLOWN_COUGH2_VOX2_SAMPLE = 198729431,
	CLOWN_COUGH2_VOX3_SAMPLE = 2095017537,
	CLOWN_COUGH2_VOX4_SAMPLE = -490996766,
	CLOWN_COUGH_VOX1_SAMPLE = 844873528,
	CLOWN_COUGH_VOX2_SAMPLE = -1420628350,
	CLOWN_COUGH_VOX3_SAMPLE = -598352364,
	CLOWN_COUGH_VOX4_SAMPLE = 1110526903,
	CLOWN_COUGH_VOX5_SAMPLE = 892762913,
	CLOWN_CRY_VOX1_SAMPLE = -1053250689,
	CLOWN_CRY_VOX2_SAMPLE = 1479670469,
	CLOWN_CRY_VOX3_SAMPLE = 792119891,
	CLOWN_CRY_VOX4_SAMPLE = -1320001552,
	CLOWN_CRY_VOX5_SAMPLE = -967479450,
	CLOWN_CRY_VOX6_SAMPLE = 1599880924,
	CLOWN_CRY_VOX7_SAMPLE = 677056074,
	CLOWN_DOVE_FALLA_SAMPLE = 194445901,
	CLOWN_DOVE_FALLB_SAMPLE = -1835117577,
	CLOWN_DOVE_FLAP1A_SAMPLE = -347731158,
	CLOWN_DOVE_FLAP1B_SAMPLE = 1917803152,
	CLOWN_DOVE_FLAP2A_SAMPLE = -1066706711,
	CLOWN_DOVE_FLAP2B_SAMPLE = 1499597139,
	CLOWN_DOVE_HANKY1_SAMPLE = -1662164289,
	CLOWN_DOVE_HANKY2_SAMPLE = 98841349,
	CLOWN_DOVE_SMACKA_SAMPLE = 1317879271,
	CLOWN_DOVE_SMACKB_SAMPLE = -679187363,
	CLOWN_FIRE_BURN_VOX_SAMPLE = 2055716552,
	CLOWN_HOLE_PUT_SAMPLE = 18093681,
	CLOWN_JUGGLE_SAMPLE = 120469042,
	CLOWN_JUGGLE_FAIL_VOX1_SAMPLE = 1577732024,
	CLOWN_JUGGLE_FAIL_VOX2_SAMPLE = -956099070,
	CLOWN_JUGGLE_FAIL_VOX3_SAMPLE = -1341905260,
	CLOWN_JUGGLE_FAIL_VOX4_SAMPLE = 778089271,
	CLOWN_JUGGLE_THROW_SAMPLE = 277760531,
	CLOWN_JUMPIN_SAMPLE = -1688252818,
	CLOWN_JUMPIN2_SAMPLE = -1337676516,
	CLOWN_PICTURE_VOX1_SAMPLE = -544141420,
	CLOWN_PICTURE_VOX2_SAMPLE = 1184390702,
	CLOWN_PICTURE_VOX3_SAMPLE = 832532152,
	CLOWN_PICTURE_VOX4_SAMPLE = -1342440677,
	CLOWN_PICTURE_VOX5_SAMPLE = -654521459,
	CLOWN_PICTURE_VOX6_SAMPLE = 1106614839,
	CLOWN_PREPARE_SAMPLE = 2023423391,
	CLOWN_SPIT_VOX1_SAMPLE = 755797455,
	CLOWN_SPIT_VOX3_SAMPLE = -1023218461,
	CLOWN_SPIT_VOX4_SAMPLE = 1566996800,
	CLOWN_TRICK_VOX1_SAMPLE = -211160490,
	CLOWN_TRICK_VOX2_SAMPLE = 1784718316,
	CLOWN_TRICK_VOX3_SAMPLE = 493327226,
	CLOWN_TRICK_VOX4_SAMPLE = -2096953639,
	CLOWN_TRICK_VOX5_SAMPLE = -201050545,
	CLOWN_TWINKLETOES_SAMPLE = -1466439525,
	CLOWN_WEEPBIG_VOX1_SAMPLE = -1349647206,
	CLOWN_WEEPBIG_VOX2_SAMPLE = 914838816,
	CLOWN_WEEPBIG_VOX3_SAMPLE = 1098933686,
	CLOWN_WEEPBIG_VOX4_SAMPLE = -538644459,
	CLOWN_WEEPSMALL_VOX1_SAMPLE = -1755153274,
	CLOWN_WEEPSMALL_VOX2_SAMPLE = 241904956,
	CLOWN_WEEPSMALL_VOX3_SAMPLE = 2037128618,
	CLOWN_WEEPSMALL_VOX4_SAMPLE = -418871287,
	CLOWN_WEEPSMALL_VOX5_SAMPLE = -1878017889,
	CLOWN_WHIMPER_VOX1_SAMPLE = -1987263681,
	CLOWN_WHIMPER_VOX2_SAMPLE = 277189253,
	CLOWN_WHIMPER_VOX3_SAMPLE = 1736614419,
	CLOWN_WHIMPER_VOX4_SAMPLE = -102352976,
	CLOWN_WHIMPER_VOX5_SAMPLE = -1897855194,
	COFFEE_BUZZ_SAMPLE = 1787022090,
	COFFEE_EXPRESSO_STEAM_SAMPLE = 1168239694,
	COFFEE_GETPOT_SAMPLE = 1896003901,
	COFFEE_GRIND_SAMPLE = 653622628,
	COFFEE_POUR_SAMPLE = 140633669,
	COFFEE_PUTPOT_SAMPLE = 254876828,
	COFFEE_SIP_SAMPLE = 667415913,
	COFFEE_SLURP1_SAMPLE = -1343245437,
	COFFEE_SLURP2_SAMPLE = 921100857,
	COFFEE_SLURP3_SAMPLE = 1105318575,
	COMESEEME_CLAP1_SAMPLE = 1225529629,
	COMESEEME_CLAP2_SAMPLE = -804960089,
	COMESEEME_CLAP3_SAMPLE = -1493010383,
	COMESEEME_CLAP4_SAMPLE = 963046802,
	COMESEEME_CLAP5_SAMPLE = 1315036420,
	COMESEEME_CLAP6_SAMPLE = -681014082,
	COMESEEME_CLAP7_SAMPLE = -1603290072,
	COMESEEME_CLAP8_SAMPLE = 818979257,
	COMPUTER_BOOT_CHEAP_SAMPLE = 321398478,
	COMPUTER_BOOT_EXP_SAMPLE = -54209718,
	COMPUTER_BOOT_MOD_SAMPLE = -309407207,
	COMPUTER_BOOT_VEXP_SAMPLE = -1323855746,
	COMPUTER_BREAK_SAMPLE = -980798851,
	COMPUTER_GAME_SAMPLE = -647425825,
	COMPUTER_GAME2_SAMPLE = 207624280,
	COMPUTER_GAME3_SAMPLE = 2070358222,
	COMPUTER_RUNNING_SAMPLE = -1020170583,
	COMPUTER_SKEY1_SAMPLE = -2016373727,
	COMPUTER_SONOFF_SAMPLE = 1527241424,
	COMPUTER_TURN_OFF_SAMPLE = 1034205528,
	COSTUME_TRUNK_CLOSE_SAMPLE = 816213283,
	COSTUME_TRUNK_CLOSE_VOXK1_SAMPLE = -1271666864,
	COSTUME_TRUNK_CLOSE_VOXK2_SAMPLE = 758822634,
	COSTUME_TRUNK_CLOSE_VOXK4_SAMPLE = -1000795169,
	COSTUME_TRUNK_CLOSE_VOXK5_SAMPLE = -1285676215,
	COSTUME_TRUNK_OPEN_SAMPLE = -621028493,
	COSTUME_TRUNK_OPEN_VOXK6_SAMPLE = 608961977,
	COSTUME_TRUNK_OPEN_VOXK7_SAMPLE = 1397437743,
	COSTUME_TRUNK_OPEN_VOXK9_SAMPLE = -1259136984,
	COUNTER_GET_ALL_SAMPLE = 1692604194,
	COUNTER_PUT_ALL_SAMPLE = -984827911,
	COUNTER_SCHOP1_SAMPLE = -346668392,
	COUNTER_SCHOP2_SAMPLE = 1918833442,
	COUNTER_SCHOP3_SAMPLE = 89662388,
	COUNTER_SCHOP4_SAMPLE = -1690520041,
	COUNTER_SCHOP5_SAMPLE = -331643263,
	COUNTER_SCHOP6_SAMPLE = 1966266171,
	COUNTER_SCHOP7_SAMPLE = 37087149,
	CRYSTALBALL_SFX_SAMPLE = -601235257,
	CRYSTAL_BALL_VOXF1_SAMPLE = 301977134,
	CRYSTAL_BALL_VOXF2_SAMPLE = -1997103212,
	CRYSTAL_BALL_VOXF3_SAMPLE = -938238,
	CRYSTAL_BALL_VOXK1_SAMPLE = -1538150301,
	CRYSTAL_BALL_VOXK2_SAMPLE = 1029235161,
	CRYSTAL_BALL_VOXM1_SAMPLE = -234154011,
	CRYSTAL_BALL_VOXM2_SAMPLE = 1795311199,
	CRYSTAL_BALL_VOXM3_SAMPLE = 470120137,
	CRYSTAL_BALL_VOXM4_SAMPLE = -2107514006,
	CTABLE_GET_CARD1_SAMPLE = 1394774167,
	CTABLE_GET_CARD2_SAMPLE = -903102163,
	CTABLE_IDLEA_SFX1_SAMPLE = 364506403,
	CTABLE_IDLEA_SFX2_SAMPLE = -1934574439,
	CTABLE_IDLEA_VOXF10_SAMPLE = -852732693,
	CTABLE_IDLEA_VOXF12_SAMPLE = 589444551,
	CTABLE_IDLEA_VOXF2_SAMPLE = 1831950681,
	CTABLE_IDLEA_VOXF4_SAMPLE = -2074936212,
	CTABLE_IDLEA_VOXM11_SAMPLE = -1233220708,
	CTABLE_IDLEA_VOXM7_SAMPLE = -22055907,
	CTABLE_LOSEGAME_SFX1_SAMPLE = 309234181,
	CTABLE_LOSEGAME_SFX2_SAMPLE = -1956127809,
	CTABLE_LOSEGAME_VOXF4_SAMPLE = 1448652534,
	CTABLE_LOSEGAME_VOXM2_SAMPLE = 1557123592,
	CTABLE_LOSEGAME_VOXM4_SAMPLE = -1246988483,
	CTABLE_LOSEHAND_VOXF2_SAMPLE = 1724406809,
	CTABLE_LOSEHAND_VOXF7_SAMPLE = 379758742,
	CTABLE_LOSEHAND_VOXM15_SAMPLE = -943393008,
	CTABLE_LOSEHAND_VOXM6_SAMPLE = -2108603957,
	CTABLE_PLAYONE1_SAMPLE = -978176724,
	CTABLE_PLAYONE2_SAMPLE = 1555784854,
	CTABLE_TRICKA_VOXF5_SAMPLE = -1420320451,
	CTABLE_TRICKA_VOXF8_SAMPLE = -706290304,
	CTABLE_TRICKA_VOXM1_SAMPLE = 1338948847,
	CTABLE_TRICKA_VOXM6_SAMPLE = -777377460,
	CTABLE_TRICKB_VOXF10_SAMPLE = 1190856310,
	CTABLE_TRICKB_VOXF8_SAMPLE = -468793571,
	CTABLE_TRICKB_VOXM5_SAMPLE = 2034983531,
	CTABLE_TRICKB_VOXM7_SAMPLE = -1757084857,
	CTABLE_WINGAME_SFX_SAMPLE = -1863750619,
	CTABLE_WINGAME_VOXF6_SAMPLE = 828359266,
	CTABLE_WINGAME_VOXF8_SAMPLE = -689442971,
	CTABLE_WINGAME_VOXM11_SAMPLE = 1665517863,
	CTABLE_WINGAME_VOXM4_SAMPLE = 1017477765,
	CTABLE_WINHAND_VOXF3_SAMPLE = -1731829449,
	CTABLE_WINHAND_VOXF9_SAMPLE = 2014545961,
	CTABLE_WINHAND_VOXM13_SAMPLE = -342597482,
	CTABLE_WINHAND_VOXM2_SAMPLE = 204834922,
	CUCKOO_CLOCK_SAMPLE = 748689340,
	DANCE_CAGE_MONSTER_VOXK3_SAMPLE = -45745840,
	DANCE_CAGE_MONSTER_VOXK4_SAMPLE = 1663134963,
	DANCE_CAGE_MONSTER_VOXK7_SAMPLE = -98026167,
	DANCE_CAGE_TURNOFF_SAMPLE = -159279781,
	DANCE_CAGE_TURNON_SAMPLE = 956496007,
	DANCE_CAGE_VOXF10_SAMPLE = 959803184,
	DANCE_CAGE_VOXF11_SAMPLE = 1311924134,
	DANCE_CAGE_VOXF6_SAMPLE = -1479403690,
	DANCE_CAGE_VOXF7_SAMPLE = -791337024,
	DANCE_CAGE_VOXF8_SAMPLE = 1080703569,
	DANCE_CAGE_VOXF9_SAMPLE = 929893063,
	DANCE_CAGE_VOXM10_SAMPLE = 895516881,
	DANCE_CAGE_VOXM11_SAMPLE = 1114091591,
	DANCE_CAGE_VOXM12_SAMPLE = -613490179,
	DANCE_CAGE_VOXM13_SAMPLE = -1402351253,
	DANCE_CAGE_VOXM14_SAMPLE = 839730376,
	DANCE_CAGE_VOXM15_SAMPLE = 1158313054,
	DAYAMB1_SAMPLE = 341112337,
	DAYAMB1I_SAMPLE = -1213832515,
	DAYAMB2_SAMPLE = -1923242069,
	DAYAMB2I_SAMPLE = -1668599426,
	DAYAMB3_SAMPLE = -94726339,
	DAYAMB3I_SAMPLE = -2054160321,
	DAYAMB4_SAMPLE = 1681785502,
	DAYAMB4I_SAMPLE = -892233992,
	DAYAMB5_SAMPLE = 322515464,
	DAYAMB5I_SAMPLE = -741693511,
	DAYAMB6_SAMPLE = -1976540238,
	DAYAMB6I_SAMPLE = -119016326,
	DAYAMB7_SAMPLE = -46705884,
	DAYAMB7I_SAMPLE = -503528133,
	DAYAMB8_SAMPLE = 1837649589,
	DAYAMB8I_SAMPLE = 1717885428,
	DAYAMB9_SAMPLE = 445611555,
	DAYAMB9I_SAMPLE = 2139089077,
	DENIED_SAMPLE = 1294440808,
	DINGBAT_BUTT1_SAMPLE = 580872741,
	DINGBAT_BUTT2_SAMPLE = -1147782241,
	DINGBAT_BUTT3_SAMPLE = -862909687,
	DINGBAT_BUTT4_SAMPLE = 1391828650,
	DISHW_SCLOSE_SAMPLE = -254845841,
	DISHW_SLOAD_SAMPLE = -1999610443,
	DISHW_SOPEN_SAMPLE = 161888780,
	DISHW_SRUN_CHEAP_END_SAMPLE = -1699291602,
	DISHW_SRUN_CHEAP_LOOP_SAMPLE = -98830050,
	DISHW_SRUN_CHEAP_START_SAMPLE = 435274687,
	DISHW_SRUN_EXPENSIVE_END_SAMPLE = -489656610,
	DISHW_SRUN_EXPENSIVE_LOOP_SAMPLE = 1205759410,
	DISHW_SRUN_EXPENSIVE_START_SAMPLE = -970135064,
	DISHW_TURNDIAL_SAMPLE = -1714780276,
	DJ_BOOTH_RECORD_PLACE_SAMPLE = 417325837,
	DJ_BOOTH_STATIONS_SWITCH_SAMPLE = -2075275552,
	DJ_BOOTH_TURNOFF_SAMPLE = -1189007687,
	DJ_BOOTH_TURNON_SAMPLE = 1179338788,
	DJ_SCRATCH_A1_SAMPLE = 178343018,
	DJ_SCRATCH_A2_SAMPLE = -1817698864,
	DJ_SCRATCH_A3_SAMPLE = -458281658,
	DJ_SCRATCH_A4_SAMPLE = 2060171493,
	DJ_SCRATCH_A5_SAMPLE = 231508083,
	DJ_SCRATCH_B1_SAMPLE = 562831273,
	DJ_SCRATCH_B2_SAMPLE = -1199223277,
	DJ_SCRATCH_B3_SAMPLE = -813531515,
	DJ_SCRATCH_B4_SAMPLE = 1374087974,
	DJ_SCRATCH_B5_SAMPLE = 652336048,
	DJ_SCRATCH_B6_SAMPLE = -1075279350,
	DOGDAY1_SAMPLE = 1719434318,
	DOGDAY10_SAMPLE = 1708773322,
	DOGDAY10I_SAMPLE = -1495866152,
	DOGDAY11_SAMPLE = 316604252,
	DOGDAY11I_SAMPLE = -1077029479,
	DOGDAY12_SAMPLE = -1948799258,
	DOGDAY12I_SAMPLE = -1797224870,
	DOGDAY13_SAMPLE = -53436816,
	DOGDAY13I_SAMPLE = -1912883429,
	DOGDAY14_SAMPLE = 1655966675,
	DOGDAY14I_SAMPLE = -1027989028,
	DOGDAY2_SAMPLE = -9097740,
	DOGDAY2I_SAMPLE = 1731024273,
	DOGDAY3_SAMPLE = -2005787294,
	DOGDAY3I_SAMPLE = 2117493968,
	DOGDAY4_SAMPLE = 370575553,
	DOGDAY4I_SAMPLE = 829944343,
	DOGDAY5_SAMPLE = 1628551255,
	DOGDAY5I_SAMPLE = 678216534,
	DOGDAY6_SAMPLE = -132584979,
	DOGDAY6I_SAMPLE = 54628501,
	DOGDAY7_SAMPLE = -1893738117,
	DOGDAY7I_SAMPLE = 442147284,
	DOGDAY8_SAMPLE = 530629866,
	DOGDAY9_SAMPLE = 1755837564,
	DOGDAY9I_SAMPLE = -2066117542,
	DOGMRN1_SAMPLE = 9939579,
	DOGMRN10_SAMPLE = 856481855,
	DOGMRN10I_SAMPLE = 1800877924,
	DOGMRN11_SAMPLE = 1141625001,
	DOGMRN11I_SAMPLE = 1917584933,
	DOGMRN12_SAMPLE = -587038445,
	DOGMRN12I_SAMPLE = 1499551206,
	DOGMRN1I_SAMPLE = 450177447,
	DOGMRN2_SAMPLE = -1717634111,
	DOGMRN2I_SAMPLE = 838367844,
	DOGMRN3_SAMPLE = -291910825,
	DOGMRN3I_SAMPLE = 685984549,
	DOGMRN4_SAMPLE = 1895653108,
	DOGMRN5_SAMPLE = 133852770,
	DOGMRN6_SAMPLE = -1628225576,
	DOGMRN6I_SAMPLE = 1435811680,
	DOGMRN7_SAMPLE = -369881266,
	DOGMRN8_SAMPLE = 2034963167,
	DOGMRN8I_SAMPLE = -887647506,
	DOGMRN9_SAMPLE = 239870537,
	DOGMRN9I_SAMPLE = -770923601,
	DOGNIT1_SAMPLE = -1300450337,
	DOGNIT10_SAMPLE = -502960937,
	DOGNIT10I_SAMPLE = -984132446,
	DOGNIT11_SAMPLE = -1795007423,
	DOGNIT11I_SAMPLE = -598972957,
	DOGNIT12_SAMPLE = 202051067,
	DOGNIT12I_SAMPLE = -144624096,
	DOGNIT2_SAMPLE = 729145957,
	DOGNIT2I_SAMPLE = -521013620,
	DOGNIT3_SAMPLE = 1551028979,
	DOGNIT3I_SAMPLE = -102053939,
	DOGNIT4_SAMPLE = -1038727344,
	DOGNIT4I_SAMPLE = -1230286582,
	DOGNIT5_SAMPLE = -1257146426,
	DOGNIT5I_SAMPLE = -1347395509,
	DOGNIT6_SAMPLE = 739780220,
	DOGNIT6I_SAMPLE = -2070072440,
	DOGNIT7_SAMPLE = 1528764138,
	DOGNIT7I_SAMPLE = -1652161847,
	DOGNIT8_SAMPLE = -878703749,
	DOGNIT8I_SAMPLE = 438181382,
	DOGNIT9_SAMPLE = -1129890835,
	DOGNIT9I_SAMPLE = 50671431,
	DOLLHOUSE_SOUNDS1_SAMPLE = -1793648420,
	DOLLHOUSE_SOUNDS2_SAMPLE = 203311462,
	DOLLHOUSE_SOUNDS3_SAMPLE = 2065267184,
	DOLLHOUSE_SOUNDS4_SAMPLE = -444732333,
	DOLLHOUSE_SOUNDS5_SAMPLE = -1837441851,
	DOLLHOUSE_SOUNDS6_SAMPLE = 192122239,
	DOLLHOUSE_SOUNDS7_SAMPLE = 2088025577,
	DOLLHOUSE_SOUNDS8_SAMPLE = -322199432,
	DOOR_BAMBOO_CLOSE1_SAMPLE = 183759539,
	DOOR_BAMBOO_CLOSE2_SAMPLE = -1812290807,
	DOOR_BAMBOO_CLOSE3_SAMPLE = -453143649,
	DOOR_BAMBOO_OPEN1_SAMPLE = -2036679344,
	DOOR_BAMBOO_OPEN2_SAMPLE = 529788138,
	DOOR_BAMBOO_OPEN3_SAMPLE = 1754586236,
	DOOR_BEADED_OPEN1_SAMPLE = -861790236,
	DOOR_BEADED_OPEN2_SAMPLE = 1437290078,
	DOOR_BEADED_OPEN3_SAMPLE = 581729992,
	DOOR_CASTLE_CLOSE1_SAMPLE = -1458039463,
	DOOR_CASTLE_CLOSE2_SAMPLE = 806438115,
	DOOR_CASTLE_CLOSE3_SAMPLE = 1192653941,
	DOOR_CASTLE_OPEN1_SAMPLE = -780328142,
	DOOR_CASTLE_OPEN2_SAMPLE = 1215591048,
	DOOR_CASTLE_OPEN3_SAMPLE = 1064518174,
	DOOR_CLOSE_SAMPLE = -290970130,
	DOOR_GLASS_CLOSE_SAMPLE = 481605834,
	DOOR_JAIL_CLOSE_SAMPLE = 187023292,
	DOOR_JAIL_OPEN_SAMPLE = 923372627,
	DOOR_METAL_CLOSE_SAMPLE = 1263605451,
	DOOR_OPEN_SAMPLE = 1865274270,
	DOOR_RETRO_OPENCLOSE_SAMPLE = 1291805216,
	DOOR_RINGBELL_SAMPLE = 418798014,
	DOOR_SALOON_CLOSE_SAMPLE = -747519273,
	DOOR_SALOON_OPEN_SAMPLE = 1851735547,
	DOOR_STEEL_CLOSE1_SAMPLE = -1863304278,
	DOOR_STEEL_CLOSE2_SAMPLE = 167340560,
	DOOR_STEEL_CLOSE3_SAMPLE = 2130598534,
	DOOR_STEEL_CLOSE4_SAMPLE = -526725339,
	DOOR_STEEL_OPEN1_SAMPLE = 987763409,
	DOOR_STEEL_OPEN2_SAMPLE = -1544993941,
	DOOR_STEEL_OPEN3_SAMPLE = -722570243,
	DRESSER_CLOSE_SHORT_SAMPLE = -1640550432,
	DRESSER_CLOSE_TALL_SAMPLE = 536108771,
	DRESSER_OPEN_SHORT_SAMPLE = 1748254870,
	DRESSER_OPEN_TALL_SAMPLE = -1514310858,
	DREW_CELLCALL_VOX1_SAMPLE = 2099304221,
	DREW_CELLPHONE_CALL_SAMPLE = -606841038,
	DREW_CHEERER_VOX1_SAMPLE = -1227809522,
	DREW_CHEERER_VOX2_SAMPLE = 802704564,
	DREW_EUREKA_VOX1_SAMPLE = -2075428562,
	DREW_FALLDOWN_VOX1_SAMPLE = 989022645,
	DREW_GETUP_VOX1_SAMPLE = 436590245,
	DREW_GETUP_VOX2_SAMPLE = -2096330977,
	DREW_GOODBYE_VOX1_SAMPLE = 1587757770,
	DREW_GREETER_VOX1_SAMPLE = 1071756217,
	DREW_GREETER_VOX2_SAMPLE = -1494687229,
	DREW_GREETER_VOX3_SAMPLE = -772812139,
	DREW_GREETER_VOX4_SAMPLE = 1334527798,
	DREW_HELLO_VOX1_SAMPLE = 1150734053,
	DREW_HELLO_VOX2_SAMPLE = -576741537,
	DREW_MUMBLE_A_VOX1_SAMPLE = -440234620,
	DREW_MUMBLE_A_VOX2_SAMPLE = 2093734974,
	DREW_MUMBLE_B_VOX1_SAMPLE = 1666645802,
	DREW_MUMBLE_B_VOX2_SAMPLE = -94392688,
	DREW_MUMBLE_B_VOX3_SAMPLE = -1923572218,
	DREW_MUMBLE_B_VOX4_SAMPLE = 322702245,
	DREW_MUMBLE_B_VOX5_SAMPLE = 1681603379,
	DREW_MUMBLE_C_VOX1_SAMPLE = -1475728241,
	DREW_OHWELL_VOX1_SAMPLE = -2028321811,
	DREW_OHWELL_VOX2_SAMPLE = 504566359,
	DREW_SCRATCHHEAD_VOX1_SAMPLE = 771048503,
	DREW_SIGH_VOX1_SAMPLE = 1121395945,
	DREW_SIGH_VOX2_SAMPLE = -606177965,
	DREW_TALKUP_SLAP_VOX1_SAMPLE = 799207719,
	DREW_TALKUP_SLAP_VOX2_SAMPLE = -1230266211,
	DREW_TALKUP_SUAVE_A_VOX1_SAMPLE = 1608458197,
	DREW_TALKUP_SUAVE_A_VOX2_SAMPLE = -959033745,
	DREW_TALKUP_SUAVE_A_VOX3_SAMPLE = -1311670535,
	DREW_TALKUP_SUAVE_A_VOX4_SAMPLE = 800451418,
	DREW_TALKUP_SUAVE_A_VOX5_SAMPLE = 1488116684,
	DREW_TALKUP_SUAVE_B_VOX1_SAMPLE = -649368197,
	DREW_TALKUP_SUAVE_B_VOX2_SAMPLE = 1078082753,
	DREW_TALKUP_TOUCHY_VOX1_SAMPLE = 1047635103,
	DREW_TALKUP_TOUCHY_VOX2_SAMPLE = -1485245147,
	DREW_TALKUP_TOUCHY_VOX3_SAMPLE = -796932685,
	DREW_TALKUP_TOUCHY_VOX4_SAMPLE = 1310412816,
	DREW_TALK_ANIM_VOX1_SAMPLE = -459489453,
	DREW_TALK_ANIM_VOX2_SAMPLE = 2106978025,
	DREW_TALK_ANIM_VOX3_SAMPLE = 177397375,
	DREW_TALK_IRATE_VOX1_SAMPLE = 650149629,
	DREW_TALK_IRATE_VOX2_SAMPLE = -1077334201,
	DREW_TALK_IRATE_VOX3_SAMPLE = -926015535,
	DREW_TALK_SUBTLE_VOX1_SAMPLE = 1836868042,
	DREW_TALK_SUBTLE_VOX3_SAMPLE = -2089680666,
	DREW_TELL_GETIT_VOX1_SAMPLE = 1732514845,
	DREW_TELL_GETIT_VOX2_SAMPLE = -28490329,
	DREW_TELL_GIRL_VOX1_SAMPLE = -633033916,
	DREW_TELL_GIRL_VOX2_SAMPLE = 1129183998,
	DREW_TELL_GIRL_VOX3_SAMPLE = 877316712,
	DREW_TELL_HADIT_VOX1_SAMPLE = -1223151689,
	DREW_TELL_HADIT_VOX2_SAMPLE = 772898317,
	DREW_TELL_HADIT_VOX3_SAMPLE = 1494634139,
	DREW_TELL_SLAP_VOX1_SAMPLE = 1101722350,
	DREW_TELL_SLAP_VOX2_SAMPLE = -660364460,
	DREW_TELL_TRAVEL_VOX1_SAMPLE = -1733614680,
	DREW_TELL_TRAVEL_VOX2_SAMPLE = 27423250,
	DREW_TELL_TRAVEL_VOX3_SAMPLE = 1990541956,
	DREW_TELL_WHYME_VOX1_SAMPLE = 375755358,
	EASEL_BRUSHSTROKE1_SAMPLE = 140402104,
	EASEL_BRUSHSTROKE2_SAMPLE = -1856566270,
	EASEL_BRUSHSTROKE3_SAMPLE = -430949228,
	EASEL_BRUSHSTROKE4_SAMPLE = 2016717111,
	EASEL_BRUSHSTROKE5_SAMPLE = 255039905,
	EASEL_GET_PAINT1_SAMPLE = 2028320683,
	EASEL_GET_PAINT2_SAMPLE = -504568303,
	EASEL_GET_PAINT3_SAMPLE = -1762929017,
	EASEL_GET_PAINT4_SAMPLE = 143606564,
	EASEL_GET_PAINT5_SAMPLE = 2139648946,
	ELECTROCUTION_SAMPLE = 1716346762,
	ENDTABLE_HAYBALE_GET_SAMPLE = -2105659662,
	ENDTABLE_HAYBALE_PUT_SAMPLE = -774534826,
	ESPRESSO_BREAK_SAMPLE = 641473210,
	EX_MACHINE_BAR_DOWN_SAMPLE = -1386122004,
	EX_MACHINE_BAR_UP_SAMPLE = -248678504,
	FIREPLACE_LOOP_SAMPLE = 1740183730,
	FIREPLACE_OFF_SAMPLE = -1050627239,
	FIREPLACE_ON_SAMPLE = 2034284,
	FIRE_ALARM_SAMPLE = -1155609094,
	FIRE_BURNING_SAMPLE = -475378684,
	FIRE_BURNING_BIG_SAMPLE = -1824604821,
	FIRE_BURNING_MEDIUM_SAMPLE = -1120869801,
	FIRE_BURNING_SMALL_SAMPLE = -2016828167,
	FIRE_EXTINGUISHEND_SAMPLE = 1017567912,
	FIRE_EXTINGUISHLOOP_SAMPLE = -26816753,
	FIRE_EXTINGUISHSTART_SAMPLE = 1933942395,
	FIRE_START_SAMPLE = 1358487208,
	FLAMINGO_KICK_SAMPLE = -650863680,
	FLAMINGO_SCREECH_SAMPLE = 1075333742,
	FLIES_BUZZ_LOOP_SAMPLE = -1529164832,
	FLOOD_FLOODING_SAMPLE = -679383586,
	FLOOD_MOPUP1_SAMPLE = 1299444312,
	FLOOD_MOPUP2_SAMPLE = -730160158,
	FLOOD_MOPUP3_SAMPLE = -1552051340,
	FLOOD_MOPUP4_SAMPLE = 1025050327,
	FLOOD_MOPUP5_SAMPLE = 1243493953,
	FLOOD_MOPUP6_SAMPLE = -753440773,
	FLOORLAMP1_SBULB_SAMPLE = -2028943233,
	FLOORLAMP1_SONOFF_SAMPLE = -1809704897,
	FLOORLAMP_BREAK_BULB_SAMPLE = -261717554,
	FOODPROC_END_SAMPLE = -139390507,
	FOODPROC_SRUN_SAMPLE = -2034277097,
	FOODPROC_START_SAMPLE = -446543377,
	FOOD_SNACK_EAT1_SAMPLE = 868299762,
	FOOD_SNACK_EAT2_SAMPLE = -1429708216,
	FOOD_SNACK_EAT3_SAMPLE = -573615394,
	FOOD_SNACK_EAT4_SAMPLE = 1135331197,
	FOOD_SNACK_EAT5_SAMPLE = 883750891,
	FOOTSTEP_HARD1_SAMPLE = 1536747809,
	FOOTSTEP_HARD2_SAMPLE = -1030637413,
	FOOTSTEP_HARD3_SAMPLE = -1248425971,
	FOOTSTEP_HARD4_SAMPLE = 737287598,
	FOOTSTEP_HARD5_SAMPLE = 1559571768,
	FOOTSTEP_HARD7_SAMPLE = -1292153836,
	FOOTSTEP_HARD_NOSHOE1_SAMPLE = -1849035980,
	FOOTSTEP_HARD_NOSHOE2_SAMPLE = 146842254,
	FOOTSTEP_HARD_NOSHOE3_SAMPLE = 2143785496,
	FOOTSTEP_HARD_NOSHOE4_SAMPLE = -509409349,
	FOOTSTEP_HARD_NOSHOE5_SAMPLE = -1767622867,
	FOOTSTEP_MEDIUM1_SAMPLE = -1692105832,
	FOOTSTEP_MEDIUM2_SAMPLE = 36557346,
	FOOTSTEP_MEDIUM3_SAMPLE = 1965744820,
	FOOTSTEP_MEDIUM4_SAMPLE = -347179241,
	FOOTSTEP_MEDIUM5_SAMPLE = -1672919167,
	FOOTSTEP_MEDIUM_NOSHOE1_SAMPLE = 775020136,
	FOOTSTEP_MEDIUM_NOSHOE2_SAMPLE = -1221029934,
	FOOTSTEP_MEDIUM_NOSHOE3_SAMPLE = -1069564092,
	FOOTSTEP_MEDIUM_NOSHOE4_SAMPLE = 1583033063,
	FOOTSTEP_MEDIUM_NOSHOE5_SAMPLE = 693901937,
	FOOTSTEP_PLANT1_SAMPLE = -1890926334,
	FOOTSTEP_PLANT2_SAMPLE = 373526712,
	FOOTSTEP_PLANT3_SAMPLE = 1631887406,
	FOOTSTEP_PLANT4_SAMPLE = -14666355,
	FOOTSTEP_PLANT5_SAMPLE = -2010708709,
	FOOTSTEP_PUDDLE1_SAMPLE = -1212172761,
	FOOTSTEP_PUDDLE2_SAMPLE = 783738781,
	FOOTSTEP_PUDDLE3_SAMPLE = 1504827147,
	FOOTSTEP_PUDDLE4_SAMPLE = -942325080,
	FOOTSTEP_PUDDLE5_SAMPLE = -1328385474,
	FOOTSTEP_ROACH1_SAMPLE = 1804457175,
	FOOTSTEP_ROACH2_SAMPLE = -226196115,
	FOOTSTEP_ROACH3_SAMPLE = -2054965765,
	FOOTSTEP_ROACH4_SAMPLE = 468131928,
	FOOTSTEP_ROACH5_SAMPLE = 1826623694,
	FOOTSTEP_SOFT1_SAMPLE = -40230532,
	FOOTSTEP_SOFT2_SAMPLE = 1687384262,
	FOOTSTEP_SOFT3_SAMPLE = 328482896,
	FOOTSTEP_SOFT4_SAMPLE = -1913596429,
	FOOTSTEP_SOFT5_SAMPLE = -84417179,
	FOOTSTEP_SOFT6_SAMPLE = 1677636831,
	FOOTSTEP_SOFT_NOSHOE1_SAMPLE = 1018229283,
	FOOTSTEP_SOFT_NOSHOE2_SAMPLE = -1514560615,
	FOOTSTEP_SOFT_NOSHOE3_SAMPLE = -759262449,
	FOOTSTEP_SOFT_NOSHOE4_SAMPLE = 1289356972,
	FOOTSTEP_SOFT_NOSHOE5_SAMPLE = 1004353082,
	FOOTSTEP_TERRAIN1_SAMPLE = -1408388998,
	FOOTSTEP_TERRAIN2_SAMPLE = 889512384,
	FOOTSTEP_TERRAIN3_SAMPLE = 1107546454,
	FOOTSTEP_TERRAIN4_SAMPLE = -597211915,
	FOOTSTEP_TERRAIN5_SAMPLE = -1419742109,
	FOOTSTEP_TERRAIN6_SAMPLE = 845751769,
	FOOTSTEP_TERRAIN7_SAMPLE = 1164842319,
	FOOTSTEP_TERRAIN8_SAMPLE = -707720994,
	FOOTSTEP_TRASH1_SAMPLE = 964872073,
	FOOTSTEP_TRASH2_SAMPLE = -1601464781,
	FOOTSTEP_TRASH3_SAMPLE = -678648155,
	FOOTSTEP_TRASH4_SAMPLE = 1239954182,
	FOOTSTEP_TRASH5_SAMPLE = 1055851408,
	FOUNTAIN_SPLASH1_SAMPLE = -1673870694,
	FOUNTAIN_SPLASH2_SAMPLE = 87266080,
	FOUNTAIN_SPLASH3_SAMPLE = 1916052406,
	FOUNTAIN_TINKLE_SAMPLE = 1479457254,
	FRIDGE_ALL_CLOSE_SAMPLE = 1706333651,
	FRIDGE_ALL_CLOSE__SAMPLE = 912888851,
	FRIDGE_CHEAP_END_SAMPLE = -2091099672,
	FRIDGE_CHEAP_LOOP_SAMPLE = -2012908516,
	FRIDGE_CHEAP_START_SAMPLE = -141706210,
	FRIDGE_C_OPEN_SAMPLE = 1983243802,
	FRIDGE_EXP_END_SAMPLE = -1700678881,
	FRIDGE_EXP_LOOP_SAMPLE = -1413091767,
	FRIDGE_EXP_START_SAMPLE = -324019713,
	FRIDGE_GET1_SAMPLE = -1399033207,
	FRIDGE_GET2_SAMPLE = 898966323,
	FRIDGE_GET5_SAMPLE = -1410222448,
	FRIDGE_GET_SNACK_SAMPLE = 819816590,
	FRIDGE_MED_END_SAMPLE = -2090410625,
	FRIDGE_MED_LOOP_SAMPLE = -428980097,
	FRIDGE_MED_START_SAMPLE = 593029056,
	FRIDGE_M_OPEN_SAMPLE = 1279231850,
	FRIDGE_PUT1_SAMPLE = 2104803039,
	FRIDGE_PUT2_SAMPLE = -461508763,
	FRIDGE_PUT4_SAMPLE = 220088912,
	FRIDGE_PUT5_SAMPLE = 2048490182,
	FRIDGE_X_OPEN_SAMPLE = 522458178,
	GAS_LOOP_SAMPLE = 584148821,
	GENIELAMP_PICKUP_SAMPLE = -598585512,
	GENIELAMP_PUTDOWN_SAMPLE = -2041765418,
	GENIELAMP_RUB_SAMPLE = -1592960309,
	GENIELAMP_SHAKE_HARD_SAMPLE = -1158118520,
	GENIELAMP_SHAKE_HARD2_SAMPLE = -116634212,
	GENIELAMP_SHAKE_LIGHT_SAMPLE = -609146551,
	GENIE_APPEAR_SAMPLE = -203431374,
	GENIE_ASK_VOXF1_SAMPLE = 242223999,
	GENIE_ASK_VOXF2_SAMPLE = -1753654587,
	GENIE_ASK_VOXF3_SAMPLE = -528586157,
	GENIE_ASK_VOXK1_SAMPLE = -1143048910,
	GENIE_ASK_VOXK2_SAMPLE = 584524936,
	GENIE_ASK_VOXK3_SAMPLE = 1439699998,
	GENIE_ASK_VOXM1_SAMPLE = -310062412,
	GENIE_ASK_VOXM2_SAMPLE = 1955431182,
	GENIE_ASK_VOXM3_SAMPLE = 59421592,
	GENIE_CASTSPELL_VOX1_SAMPLE = -777076970,
	GENIE_CASTSPELL_VOX2_SAMPLE = 1218965164,
	GENIE_CASTSPELL_VOX3_SAMPLE = 1067507258,
	GENIE_CASTSPELL_VOX4_SAMPLE = -1580971111,
	GENIE_CLAP_SAMPLE = 1905507728,
	GENIE_DISAPPEAR_SAMPLE = -867174658,
	GENIE_GOLDPILE_SAMPLE = 1586295176,
	GENIE_LOSE_BALANCE_VOX1_SAMPLE = -72559813,
	GENIE_LOSE_BALANCE_VOX2_SAMPLE = 1655014017,
	GENIE_LOSE_BALANCE_VOX3_SAMPLE = 362983959,
	GENIE_LOSE_BALANCE_VOX4_SAMPLE = -1949947980,
	GENIE_SMOKE_SAMPLE = 1597918236,
	GENIE_SPELL_SAMPLE = -968398613,
	GENIE_SPELLFAIL_VOX1_SAMPLE = -158314124,
	GENIE_SPELLFAIL_VOX2_SAMPLE = 1872298190,
	GENIE_SPELLFAIL_VOX3_SAMPLE = 413020248,
	GENIE_SPELLFAIL_VOX4_SAMPLE = -2030393861,
	GENIE_SPELL_CHOICE_VOX1_SAMPLE = -2105116164,
	GENIE_SPELL_CHOICE_VOX2_SAMPLE = 462366790,
	GENIE_SPELL_CHOICE_VOX3_SAMPLE = 1820858576,
	GENIE_SPELL_CHOICE_VOX4_SAMPLE = -219378317,
	GENIE_SPELL_SUCCESS_VOX1_SAMPLE = -372660562,
	GENIE_SPELL_SUCCESS_VOX2_SAMPLE = 1891694356,
	GENIE_SPELL_SUCCESS_VOX3_SAMPLE = 130533250,
	GENIE_SPELL_SUCCESS_VOX4_SAMPLE = -1717349855,
	GET_BILLS_SAMPLE = 79997202,
	GHOST_SCARERF1_SAMPLE = -1335084598,
	GHOST_SCARERF2_SAMPLE = 694511728,
	GHOST_SCARERF3_SAMPLE = 1583503590,
	GHOST_SCARERK1_SAMPLE = 96618375,
	GHOST_SCARERK2_SAMPLE = -1664412099,
	GHOST_SCARERM1_SAMPLE = 1402527745,
	GHOST_SCARERM2_SAMPLE = -896421445,
	GHOST_SCARERM3_SAMPLE = -1114210003,
	GIDDY_HANDCLAPS1_SAMPLE = -1086005238,
	GIDDY_HANDCLAPS2_SAMPLE = 642625968,
	GIDDY_HANDCLAPS3_SAMPLE = 1363837222,
	GIDDY_HANDCLAPS4_SAMPLE = -819063675,
	GIFT_SHAKE1_SAMPLE = 1040974039,
	GIFT_SHAKE2_SAMPLE = -1492823699,
	GIFT_SHAKE3_SAMPLE = -805150213,
	GIFT_SHAKE4_SAMPLE = 1315370072,
	GNOME_CHISEL_DOWN_SAMPLE = -2011094177,
	GNOME_CHISEL_UP_SAMPLE = 457327268,
	GNOME_EXPLOSION_SAMPLE = 73802820,
	GNOME_MAKE1_SAMPLE = 1862994814,
	GNOME_MAKE2_SAMPLE = -167617852,
	GNOME_MAKE3_SAMPLE = -2130351534,
	GNOME_MALLET_DOWN_SAMPLE = 650888621,
	GNOME_MALLET_UP_SAMPLE = -103128444,
	GRIMREAPER_COFFIN_SAMPLE = -1584456001,
	GRIMREAPER_LOOP_SAMPLE = 1269734672,
	GRIM_RESURRECT1_VOX1_SAMPLE = -217560329,
	GRIM_RESURRECT1_VOX2_SAMPLE = 1778457421,
	GRIM_RESURRECT1_VOX3_SAMPLE = 486943707,
	GRIM_RESURRECT1_VOX4_SAMPLE = -2090680712,
	GRIM_RESURRECT2_VOX1_SAMPLE = 1973172313,
	GRIM_RESURRECT2_VOX2_SAMPLE = -325752349,
	GUITAR_PICKUP1_SAMPLE = -53765676,
	GUITAR_PICKUP2_SAMPLE = 1707264110,
	GUITAR_PICKUP3_SAMPLE = 314964216,
	GUITAR_PICKUP4_SAMPLE = -1935577765,
	GUITAR_PLAY_LEVEL1_1_SAMPLE = 1848805854,
	GUITAR_PLAY_LEVEL1_2_SAMPLE = -147072924,
	GUITAR_PLAY_LEVEL1_3_SAMPLE = -2143491854,
	GUITAR_PLAY_LEVEL1_4_SAMPLE = 509115729,
	GUITAR_PLAY_LEVEL2_1_SAMPLE = 1819555719,
	GUITAR_PLAY_LEVEL2_2_SAMPLE = -176331203,
	GUITAR_PLAY_LEVEL2_3_SAMPLE = -2105911637,
	GUITAR_PLAY_LEVEL2_4_SAMPLE = 471778056,
	GUITAR_PLAY_LEVEL3_1_SAMPLE = 1840668080,
	GUITAR_PLAY_LEVEL3_2_SAMPLE = -188806134,
	GUITAR_PLAY_LEVEL3_3_SAMPLE = -2085077860,
	GUITAR_PLAY_LEVEL3_4_SAMPLE = 501000511,
	GUITAR_PLAY_LEVEL4_1_SAMPLE = 1761168181,
	GUITAR_PLAY_LEVEL4_2_SAMPLE = -235922801,
	GUITAR_PLAY_LEVEL4_3_SAMPLE = -2030622183,
	GUITAR_PLAY_LEVEL4_4_SAMPLE = 412336058,
	GUITAR_PLAY_LEVEL4_5_SAMPLE = 1872006956,
	GUITAR_PLAY_LEVEL5_1_SAMPLE = 1765482754,
	GUITAR_PLAY_LEVEL5_2_SAMPLE = -265129800,
	GUITAR_PLAY_LEVEL5_3_SAMPLE = -2026553298,
	GUITAR_PLAY_LEVEL5_4_SAMPLE = 424793485,
	GUITAR_PLAY_LEVEL6_1_SAMPLE = 1803394907,
	GUITAR_PLAY_LEVEL6_2_SAMPLE = -227225887,
	GUITAR_PLAY_LEVEL6_3_SAMPLE = -2055995785,
	GUITAR_PLAY_LEVEL6_4_SAMPLE = 454519764,
	GUITAR_PLAY_LEVEL6_5_SAMPLE = 1813011266,
	GUITAR_PLAY_LEVEL6_6_SAMPLE = -182908168,
	GUITAR_PLAY_LEVEL6_7_SAMPLE = -2111948178,
	GUITAR_STOP1_SAMPLE = 2081222612,
	GUITAR_STOP2_SAMPLE = -452608402,
	GUITAR_STOP3_SAMPLE = -1845326088,
	HAMSTER_ATTACK_SAMPLE = 1817088916,
	HAMSTER_DEATH_SAMPLE = -576460620,
	HAMSTER_DRINKING_SAMPLE = 1806173346,
	HAMSTER_DUMP1_SAMPLE = -921351469,
	HAMSTER_DUMP2_SAMPLE = 1344019305,
	HAMSTER_EATING_SAMPLE = -304829778,
	HAMSTER_FEED_SAMPLE = 1915490538,
	HAMSTER_PUT_GET_SAMPLE = 1790149263,
	HAMSTER_RUSTLE_SAMPLE = 863412987,
	HAMSTER_SCOOP1_SAMPLE = -1406574670,
	HAMSTER_SCOOP2_SAMPLE = 891293192,
	HAMSTER_SCOOP3_SAMPLE = 1109868190,
	HAMSTER_SQUEAK1_SAMPLE = 1708687524,
	HAMSTER_SQUEAK2_SAMPLE = -53358306,
	HAMSTER_SQUEAK3_SAMPLE = -1948851832,
	HAMSTER_WHEEL_SAMPLE = 1530172142,
	HOTTUB_BREAK_DRAIN_SAMPLE = -1916032622,
	HOTTUB_RUNNING_SAMPLE = 1626027175,
	HOTTUB_TURNOFF_SAMPLE = 494452018,
	HOTTUB_TURNON_SAMPLE = -836981182,
	HOUSEPLANT_SWATER_SAMPLE = 1465157171,
	ICECHEST_CLEAN1_SAMPLE = 479344443,
	ICECHEST_CLEAN2_SAMPLE = -2053413247,
	ICECHEST_CLEAN3_SAMPLE = -224635369,
	ICECHEST_CLOSE_SAMPLE = 328009163,
	ICECHEST_DIG_SFX1_SAMPLE = -549270275,
	ICECHEST_DIG_SFX2_SAMPLE = 1179360583,
	ICECHEST_DIG_VOXF2_SAMPLE = 210787755,
	ICECHEST_DIG_VOXF6_SAMPLE = 201169330,
	ICECHEST_DIG_VOXM12_SAMPLE = 2091247634,
	ICECHEST_DIG_VOXM7_SAMPLE = -1626443537,
	ICECHEST_GETDRINK_SFX_SAMPLE = -463540937,
	ICECHEST_GETDRINK_VOXF27_SAMPLE = -983488385,
	ICECHEST_GETDRINK_VOXF7_SAMPLE = -1542240986,
	ICECHEST_GETDRINK_VOXM3_SAMPLE = 1082808564,
	ICECHEST_GETDRINK_VOXM5_SAMPLE = -1444282943,
	ICECHEST_OPEN_SAMPLE = 687115396,
	ICECHEST_REFILL_SAMPLE = -651422431,
	ICECHEST_SHIVER_VOXF4_SAMPLE = 732426522,
	ICECHEST_SHIVER_VOXF6_SAMPLE = -978743242,
	ICECHEST_SHIVER_VOXM6_SAMPLE = 643647997,
	ICECHEST_SHIVER_VOXM8_SAMPLE = -1041931014,
	JUKECHANGE_SAMPLE = 830400326,
	JUKEOFF_SAMPLE = -521704575,
	JUKEON_SAMPLE = 859006808,
	KNIFE_SHARPEN1_SAMPLE = 1996266543,
	KNIFE_SHARPEN10_SAMPLE = 1601969892,
	KNIFE_SHARPEN2_SAMPLE = -269103723,
	KNIFE_SHARPEN3_SAMPLE = -1728905981,
	KNIFE_SHARPEN4_SAMPLE = 110520480,
	KNIFE_SHARPEN5_SAMPLE = 1905350710,
	KNIFE_SHARPEN6_SAMPLE = -392689268,
	KNIFE_SHARPEN7_SAMPLE = -1616955110,
	KNIFE_SHARPEN8_SAMPLE = 253764747,
	KNIFE_SHARPEN9_SAMPLE = 2015826973,
	LAMP1_REPLACEBULB_SAMPLE = 883891187,
	LAMP_TORCH_OFF_SAMPLE = 531852042,
	LAMP_TORCH_ON_SAMPLE = 1750703233,
	LAMP_TURNOFF_CLICK_SAMPLE = -1314034121,
	LAMP_TURNON_CLICK_SAMPLE = -1319651612,
	LAMP_VEGAS_ONOFF_SAMPLE = 474653487,
	MAILBOX_OPENCLOSE_SQUEAK_SAMPLE = -757799671,
	MATCH_STRIKE_SAMPLE = -165171635,
	MEAL_SLOPPY_EATER1_SAMPLE = -1206727847,
	MEAL_SLOPPY_EATER10_SAMPLE = -422304582,
	MEAL_SLOPPY_EATER2_SAMPLE = 555457251,
	MEAL_SLOPPY_EATER3_SAMPLE = 1444719221,
	MEAL_SLOPPY_EATER4_SAMPLE = -931643434,
	MEAL_SLOPPY_EATER5_SAMPLE = -1082192064,
	MEAL_SLOPPY_EATER6_SAMPLE = 645291770,
	MEAL_SLOPPY_EATER7_SAMPLE = 1366388332,
	MEAL_SLOPPY_EATER8_SAMPLE = -1043434499,
	MEAL_SLOPPY_EATER9_SAMPLE = -1228323989,
	MEAL_UTENSILS1_SAMPLE = 1384014277,
	MEAL_UTENSILS2_SAMPLE = -881381249,
	MEAL_UTENSILS3_SAMPLE = -1133510423,
	MEAL_UTENSILS4_SAMPLE = 571774282,
	MEAL_UTENSILS5_SAMPLE = 1427351004,
	MED_CAB_BRUSH_TEETH1_SAMPLE = 1448430756,
	MED_CAB_BRUSH_TEETH2_SAMPLE = -816046818,
	MED_CAB_BRUSH_TEETH3_SAMPLE = -1201984120,
	MED_CAB_BRUSH_TEETH4_SAMPLE = 641710123,
	MED_CAB_CLOSE_SAMPLE = 2106087349,
	MED_CAB_OC_SQUEAK_SAMPLE = -256811888,
	MICROWAVE_SBEEP_SAMPLE = -1352153598,
	MICROWAVE_SCLOSE_SAMPLE = 1556606039,
	MICROWAVE_SCOOK_SAMPLE = 1791362519,
	MICROWAVE_SDONE_SAMPLE = 162668840,
	MICROWAVE_SOPEN_SAMPLE = -1108393433,
	MIME_NO_VOX1_SAMPLE = -314646709,
	MISSINGEVENT_SAMPLE = 1535362527,
	MONKEY_AKNOCK_VOXF11_SAMPLE = 1973242875,
	MONKEY_AKNOCK_VOXF5_SAMPLE = -1059892,
	MONKEY_AKNOCK_VOXM1_SAMPLE = 460770846,
	MONKEY_AKNOCK_VOXM8_SAMPLE = 1655338682,
	MONKEY_CKNOCK_VOXK10_SAMPLE = 1780374901,
	MONKEY_CKNOCK_VOXK6_SAMPLE = 1064526500,
	MONKEY_ENTER_HUT_VOX13_SAMPLE = -1754539785,
	MONKEY_ENTER_HUT_VOX15_SAMPLE = 2114485698,
	MONKEY_ENTER_HUT_VOX17_SAMPLE = -1878647570,
	MONKEY_EXIT_HUT_VOX14_SAMPLE = -1272311435,
	MONKEY_EXIT_HUT_VOX15_SAMPLE = -1020452381,
	MONKEY_FEET_LAND1_SAMPLE = -1471789047,
	MONKEY_FEET_LAND2_SAMPLE = 827267507,
	MONKEY_HUT_CLOSE_SAMPLE = 370125497,
	MONKEY_HUT_OPEN_SAMPLE = -1441993405,
	MONKEY_KNOCKA_SFX_SAMPLE = 786680865,
	MONKEY_KNOCKB_SFX_SAMPLE = 1766045425,
	MONKEY_STAIRS_STEP1_SAMPLE = 67129274,
	MONKEY_STAIRS_STEP3_SAMPLE = -368169322,
	MONKEY_STAIRS_STEP4_SAMPLE = 1953151797,
	MONKEY_STAIRS_STEP5_SAMPLE = 57510819,
	MONSTER_TANTRUM_VOXF1_SAMPLE = -418223613,
	MONSTER_TANTRUM_VOXM1_SAMPLE = 82228168,
	MOOSE_MOO_SAMPLE = -343046429,
	NEWFRIDGE_SCLOSE_SAMPLE = 150933715,
	NEWFRIDGE_SOPEN_SAMPLE = 1531244497,
	NEWSPAPER_CLEAN_UP_SAMPLE = -1520787451,
	NEWSPAPER_OPENCLOSE_SAMPLE = 414046397,
	NEWSPAPER_WHISTLE_SAMPLE = 91677151,
	NITE1_SAMPLE = 1889024916,
	NITE10_SAMPLE = 63508551,
	NITE10I_SAMPLE = 901319578,
	NITE1I_SAMPLE = 705747423,
	NITE2_SAMPLE = -376346066,
	NITE2I_SAMPLE = 20810268,
	NITE3_SAMPLE = -1634313544,
	NITE3I_SAMPLE = 405191517,
	NITE4_SAMPLE = 15912731,
	NITE4I_SAMPLE = 1466379674,
	NITE5_SAMPLE = 2012610445,
	NITE5I_SAMPLE = 1316756699,
	NITE6_SAMPLE = -285430217,
	NITE6I_SAMPLE = 1699827480,
	NITE7_SAMPLE = -1711563103,
	NITE7I_SAMPLE = 2085256793,
	NITE8_SAMPLE = 155484976,
	NITE8I_SAMPLE = -70098282,
	NITE9_SAMPLE = 2118366118,
	NITE9I_SAMPLE = -490122281,
	NITE_LOOP_SAMPLE = 1112093914,
	NOISEMAKER_BLOW1_SAMPLE = -1144740245,
	NOISEMAKER_BLOW2_SAMPLE = 583923665,
	NOISEMAKER_BLOW3_SAMPLE = 1439352647,
	NOISEMAKER_HORN1_SAMPLE = 1816102943,
	NOISEMAKER_HORN2_SAMPLE = -180954715,
	NOISEMAKER_HORN3_SAMPLE = -2110658253,
	NOISEMAKER_RATTLER1_SAMPLE = -635621301,
	NOISEMAKER_RATTLER2_SAMPLE = 1125409265,
	NOISEMAKER_RATTLER3_SAMPLE = 873681255,
	NPC_COP_WHISTLE_SAMPLE = -10819965,
	PHONE1_SPICKUP_SAMPLE = 145866521,
	PHONE_DIAL_SAMPLE = -1010935717,
	PHONE_DIAL_BEEP1_SAMPLE = 1606010732,
	PHONE_DIAL_BEEP2_SAMPLE = -961505578,
	PHONE_DIAL_BEEP3_SAMPLE = -1313364416,
	PHONE_DIAL_BEEP4_SAMPLE = 802370531,
	PHONE_DIAL_BEEP5_SAMPLE = 1490289525,
	PHONE_HANGUP_SAMPLE = -1039859472,
	PHONE_LISTEN_FEMALE1_SAMPLE = 774028550,
	PHONE_LISTEN_FEMALE2_SAMPLE = -1221858116,
	PHONE_LISTEN_FEMALE3_SAMPLE = -1070801878,
	PHONE_LISTEN_FEMALE4_SAMPLE = 1581795721,
	PHONE_LISTEN_FEMALE_ANGRY_SAMPLE = 1442673222,
	PHONE_LISTEN_KID1_SAMPLE = 1869624456,
	PHONE_LISTEN_KID2_SAMPLE = -159816398,
	PHONE_LISTEN_KID3_SAMPLE = -2122426972,
	PHONE_LISTEN_KID4_SAMPLE = 521846791,
	PHONE_LISTEN_KID_ANGRY_SAMPLE = 1293943198,
	PHONE_LISTEN_MALE1_SAMPLE = 1868866708,
	PHONE_LISTEN_MALE2_SAMPLE = -160565970,
	PHONE_LISTEN_MALE3_SAMPLE = -2123709000,
	PHONE_LISTEN_MALE4_SAMPLE = 521031707,
	PHONE_LISTEN_MALE_ANGRY_SAMPLE = 1314885909,
	PHONE_LISTEN_NOPHONE_SAMPLE = -269214199,
	PHONE_RING_SAMPLE = -1501129377,
	PHONE_RING_PAY_SAMPLE = 530130355,
	PHONE_RING_RECEIVER_SAMPLE = 994266291,
	PHONE_RING_WALL_SAMPLE = 1434273672,
	PIANOSTOP1_SAMPLE = -1931635215,
	PIANOSTOP2_SAMPLE = 366265419,
	PIANOSTOP3_SAMPLE = 1658057949,
	PIANOSTOP4_SAMPLE = -55090818,
	PINBALL_BREAK_SAMPLE = 1105664344,
	PINBALL_SOUNDS_FLIPPER1_SAMPLE = -1138540247,
	PINBALL_SOUNDS_FLIPPER2_SAMPLE = 623513747,
	PINBALL_SOUNDS_FLIPPER3_SAMPLE = 1378689029,
	PINBALL_SOUNDS_FLIPPER4_SAMPLE = -867584602,
	PINBALL_SOUNDS_FLIPPER5_SAMPLE = -1152482000,
	PINBALL_SOUNDS_FLIPPER6_SAMPLE = 575132810,
	PINBALL_SOUNDS_HIGHSCORE1_SAMPLE = 742863641,
	PINBALL_SOUNDS_HIGHSCORE2_SAMPLE = -1253154141,
	PINBALL_SOUNDS_HIGHSCORE3_SAMPLE = -1035382219,
	PINBALL_SOUNDS_HIGHSCORE4_SAMPLE = 1546504086,
	PINBALL_SOUNDS_JACKPOT_SAMPLE = -273498228,
	PINBALL_SOUNDS_LOWSCORE1_SAMPLE = 1755905310,
	PINBALL_SOUNDS_LOWSCORE2_SAMPLE = -241062748,
	PINBALL_SOUNDS_LOWSCORE3_SAMPLE = -2035901390,
	PINBALL_SOUNDS_LOWSCORE4_SAMPLE = 415369617,
	PINBALL_SOUNDS_LOWSCORE5_SAMPLE = 1875196167,
	PINBALL_SOUNDS_LOWSCORE6_SAMPLE = -154376003,
	PINBALL_SOUNDS_MEDSCORE1_SAMPLE = -1205505082,
	PINBALL_SOUNDS_MEDSCORE2_SAMPLE = 556540540,
	PINBALL_SOUNDS_MEDSCORE3_SAMPLE = 1445663466,
	PINBALL_SOUNDS_MEDSCORE4_SAMPLE = -934312119,
	PINBALL_SOUNDS_MEDSCORE5_SAMPLE = -1085753377,
	PINBALL_START_SAMPLE = -756933619,
	PINBALL_STOP_SAMPLE = -1870738186,
	PIT_WALKTHRU_VOXF1_SAMPLE = 1150551788,
	PIT_WALKTHRU_VOXF2_SAMPLE = -576891050,
	PIT_WALKTHRU_VOXF3_SAMPLE = -1432721472,
	PIT_WALKTHRU_VOXM1_SAMPLE = -1486823641,
	PIT_WALKTHRU_VOXM2_SAMPLE = 1047105181,
	PIT_WALKTHRU_VOXM3_SAMPLE = 1231994379,
	PIT_WALKTHRU_VOXM4_SAMPLE = -687199320,
	PIT_WALKTHRU_VOXM5_SAMPLE = -1609753794,
	PIZZA_GOOEY_SAMPLE = -2139884428,
	PLAYSTRUCTURE_CLIMB1_SAMPLE = 520353583,
	PLAYSTRUCTURE_CLIMB2_SAMPLE = -2046122347,
	PLAYSTRUCTURE_CLIMB3_SAMPLE = -250767869,
	PLAYSTRUCTURE_CLIMB4_SAMPLE = 1869153184,
	PLAY_STRUCTURE_POLE_SAMPLE = -2134031176,
	PLAY_STRUCTURE_SLIDE_SAMPLE = 1531677436,
	POOLTABLE_CHALK_SAMPLE = -1338447497,
	POOLTABLE_HIT_MANY_IN_MANY_SAMPLE = 740073969,
	POOLTABLE_HIT_MANY_IN_NONE_SAMPLE = 540442458,
	POOLTABLE_HIT_MANY_IN_ONE_SAMPLE = -644146200,
	POOLTABLE_HIT_ONE_IN_NONE_SAMPLE = -1729595014,
	POOLTABLE_HIT_ONE_IN_ONE_SAMPLE = -1170721569,
	POOLTABLE_HIT_SOME_IN_NONE_SAMPLE = 917135576,
	POOLTABLE_HIT_SOME_IN_ONE_SAMPLE = 692837431,
	POOLTABLE_RACK_SAMPLE = -1405232829,
	POOL_DVBOARD_BOUNCE_SAMPLE = -29685598,
	POOL_DVBOARD_SPLASH_SAMPLE = -968890357,
	POOL_SWIM_STROKE1_SAMPLE = -2027651625,
	POOL_SWIM_STROKE2_SAMPLE = 506276973,
	POOL_SWIM_STROKE3_SAMPLE = 1764367611,
	POOL_SWIM_STROKE4_SAMPLE = -145847976,
	POOL_SWIM_STROKE5_SAMPLE = -2142651954,
	PRESENT_CRUSH_SAMPLE = 1549996617,
	PRESENT_CRUSH2_SAMPLE = 361309227,
	PUNCHBOWL_BUCKET_GET1_SAMPLE = -1473566498,
	PUNCHBOWL_BUCKET_GET2_SAMPLE = 824342884,
	PUNCHBOWL_BUCKET_GET3_SAMPLE = 1176848882,
	PUNCHBOWL_BUCKET_POUR1_SAMPLE = 275825385,
	PUNCHBOWL_BUCKET_POUR2_SAMPLE = -1988521133,
	PUNCHBOWL_BUCKET_POUR3_SAMPLE = -25254971,
	PUNCHBOWL_BUCKET_POUR_PRO1_SAMPLE = -1902602830,
	PUNCHBOWL_BUCKET_POUR_PRO2_SAMPLE = 395428872,
	PUNCHBOWL_BUCKET_POUR_PRO3_SAMPLE = 1620505758,
	PUNCHBOWL_BUCKET_PUT1_SAMPLE = 2042881160,
	PUNCHBOWL_BUCKET_PUT2_SAMPLE = -523586254,
	PUNCHBOWL_BUCKET_PUT3_SAMPLE = -1748138588,
	PUNCHBOWL_CUP_FILL1_SAMPLE = 1834874578,
	PUNCHBOWL_CUP_FILL2_SAMPLE = -195778712,
	PUNCHBOWL_CUP_FILL3_SAMPLE = -2091673602,
	PUNCHBOWL_CUP_FILL4_SAMPLE = 490144349,
	PUNCHBOWL_CUP_QUAFF_VOXD1_SAMPLE = -1917866381,
	PUNCHBOWL_CUP_QUAFF_VOXD2_SAMPLE = 346488777,
	PUNCHBOWL_CUP_QUAFF_VOXD3_SAMPLE = 1671548767,
	PUNCHBOWL_CUP_QUAFF_VOXF1_SAMPLE = -1080439567,
	PUNCHBOWL_CUP_QUAFF_VOXF2_SAMPLE = 647011659,
	PUNCHBOWL_CUP_QUAFF_VOXF3_SAMPLE = 1368894941,
	PUNCHBOWL_CUP_QUAFF_VOXF4_SAMPLE = -806143874,
	PUNCHBOWL_CUP_QUAFF_VOXK1_SAMPLE = 171422396,
	PUNCHBOWL_CUP_QUAFF_VOXK2_SAMPLE = -1824595194,
	PUNCHBOWL_CUP_QUAFF_VOXM1_SAMPLE = 1550652730,
	PUNCHBOWL_CUP_QUAFF_VOXM2_SAMPLE = -983284608,
	PUNCHBOWL_CUP_QUAFF_VOXM3_SAMPLE = -1302105066,
	PUNCHBOWL_CUP_QUAFF_VOXM4_SAMPLE = 738714037,
	PUNCHBOWL_CUP_SIP_VOXF1_SAMPLE = -1642435930,
	PUNCHBOWL_CUP_SIP_VOXF2_SAMPLE = 118700828,
	PUNCHBOWL_CUP_SIP_VOXF3_SAMPLE = 1880361866,
	PUNCHBOWL_CUP_SIP_VOXF4_SAMPLE = -294609367,
	PUNCHBOWL_CUP_SIP_VOXF5_SAMPLE = -1720209729,
	PUNCHBOWL_CUP_SIP_VOXK1_SAMPLE = 733222123,
	PUNCHBOWL_CUP_SIP_VOXK2_SAMPLE = -1296218799,
	PUNCHBOWL_CUP_SIP_VOXK3_SAMPLE = -977635897,
	PUNCHBOWL_CUP_SIP_VOXK4_SAMPLE = 1541333092,
	PUNCHBOWL_CUP_SIP_VOXM1_SAMPLE = 2112795501,
	PUNCHBOWL_CUP_SIP_VOXM2_SAMPLE = -454565161,
	PUNCHBOWL_CUP_SIP_VOXM3_SAMPLE = -1813982655,
	PUNCHBOWL_CUP_SIP_VOXM4_SAMPLE = 226772962,
	PUNCHBOWL_CUP_SIP_VOXM5_SAMPLE = 2055436148,
	PUNCHBOWL_DRAIN_SAMPLE = 570114211,
	PUNCHBOWL_LOOP_SAMPLE = 1803353054,
	PUNCHBOWL_THROWUP_VOXF1_SAMPLE = -857511049,
	PUNCHBOWL_THROWUP_VOXF2_SAMPLE = 1441413837,
	PUNCHBOWL_THROWUP_VOXF3_SAMPLE = 585960027,
	PUNCHBOWL_THROWUP_VOXK1_SAMPLE = 2035094842,
	PUNCHBOWL_THROWUP_VOXK2_SAMPLE = -532396928,
	PUNCHBOWL_THROWUP_VOXM1_SAMPLE = 790082236,
	PUNCHBOWL_THROWUP_VOXM2_SAMPLE = -1239489786,
	PUNCHBOWL_THROWUP_VOXM3_SAMPLE = -1055272048,
	PUNCHBOWL_THROWUP_VOXM4_SAMPLE = 1602045491,
	PUNCHBOWL_VALVE_TURN_SAMPLE = 72325653,
	REAPEE_CELEBRATE_VOXF1_SAMPLE = -1823614553,
	REAPEE_CELEBRATE_VOXM1_SAMPLE = 1891172460,
	REAPEE_COUNT_VOXF1_SAMPLE = -1792239140,
	REAPEE_COUNT_VOXF2_SAMPLE = 203802726,
	REAPEE_COUNT_VOXF3_SAMPLE = 2065889520,
	REAPEE_COUNT_VOXF4_SAMPLE = -448369325,
	REAPEE_COUNT_VOXM1_SAMPLE = 1993883671,
	REAPEE_COUNT_VOXM2_SAMPLE = -271511123,
	REAPEE_COUNT_VOXM3_SAMPLE = -1730797253,
	REAPEE_COUNT_VOXM4_SAMPLE = 112374936,
	REAPEE_CRY_VOXF1_SAMPLE = -1841442220,
	REAPEE_CRY_VOXF2_SAMPLE = 187991022,
	REAPEE_CRY_VOXF3_SAMPLE = 2083763064,
	REAPEE_CRY_VOXM1_SAMPLE = 1909001119,
	REAPEE_CRY_VOXM2_SAMPLE = -390047195,
	REAPEE_CRY_VOXM3_SAMPLE = -1614320973,
	REAPEE_LOSER_VOXF1_SAMPLE = 1265909244,
	REAPEE_LOSER_VOXM1_SAMPLE = -1467947977,
	REAPEE_PLEAD2_VOXF1_SAMPLE = 1903361213,
	REAPEE_PLEAD2_VOXF2_SAMPLE = -394547961,
	REAPEE_PLEAD2_VOXF3_SAMPLE = -1619223151,
	REAPEE_PLEAD2_VOXM1_SAMPLE = -1836702346,
	REAPEE_PLEAD2_VOXM2_SAMPLE = 193950924,
	REAPEE_PLEAD2_VOXM3_SAMPLE = 2089305178,
	REAPEE_PLEAD_VOXF1_SAMPLE = 1529957382,
	REAPEE_PLEAD_VOXF2_SAMPLE = -1036509764,
	REAPEE_PLEAD_VOXF4_SAMPLE = 727431305,
	REAPEE_PLEAD_VOXM1_SAMPLE = -1195010611,
	REAPEE_PLEAD_VOXM2_SAMPLE = 567067767,
	REAPEE_PLEAD_VOXM3_SAMPLE = 1456207073,
	REAPEE_PLEAD_VOXM4_SAMPLE = -928030398,
	REAPER_ACCEPT_VOX1_SAMPLE = -283548894,
	REAPER_ACCEPT_VOX2_SAMPLE = 1980773016,
	REAPER_COUNT_VOX1_SAMPLE = 710463027,
	REAPER_COUNT_VOX2_SAMPLE = -1286496375,
	REAPER_COUNT_VOX3_SAMPLE = -1000952033,
	REAPER_COUNT_VOX4_SAMPLE = 1513241276,
	REAPER_REJECT_VOX1_SAMPLE = 797344167,
	REAPER_REJECT_VOX2_SAMPLE = -1232089059,
	REAPER_SKULLS_SAMPLE = -1192232992,
	REPAIR_GET_SHOCKED1_SAMPLE = 2096701391,
	REPAIR_GET_SHOCKED2_SAMPLE = -437236107,
	REPAIR_GET_SHOCKED3_SAMPLE = -1829273885,
	REPAIR_SCREWDRIVER_SAMPLE = 866142707,
	REPAIR_TANTRUM_VOXF1_SAMPLE = -1480017320,
	REPAIR_TANTRUM_VOXF2_SAMPLE = 1052896226,
	REPAIR_TANTRUM_VOXK1_SAMPLE = 308724757,
	REPAIR_TANTRUM_VOXK2_SAMPLE = -1955621457,
	REPAIR_TANTRUM_VOXM1_SAMPLE = 1144808339,
	REPAIR_TANTRUM_VOXM2_SAMPLE = -583716311,
	REPAIR_WRENCH_SAMPLE = 1372460062,
	REPAIR_WRENCH1_SAMPLE = 2038570176,
	REPAIR_WRENCH2_SAMPLE = -527741574,
	REPAIR_WRENCH3_SAMPLE = -1752400404,
	REPAIR_WRENCH4_SAMPLE = 166258767,
	REPOMAN_POOF_SAMPLE = 869602568,
	REPOMAN_REPOIZER_SAMPLE = 723221345,
	ROACH1_SAMPLE = 304942641,
	ROACH2_SAMPLE = -1960550517,
	ROACH3_SAMPLE = -64786659,
	ROACH4_SAMPLE = 1648884414,
	ROACH5_SAMPLE = 356567592,
	ROACHES_SAMPLE = 989822469,
	ROACHES_FREAKOUT_VOXF1_SAMPLE = 40454499,
	ROACHES_FREAKOUT_VOXF2_SAMPLE = -1688200999,
	ROACHES_FREAKOUT_VOXF3_SAMPLE = -328783793,
	ROACHES_FREAKOUT_VOXF4_SAMPLE = 1912847852,
	ROACHES_FREAKOUT_VOXF5_SAMPLE = 84184442,
	ROACHES_FREAKOUT_VOXK1_SAMPLE = -1211680978,
	ROACHES_FREAKOUT_VOXK2_SAMPLE = 785278612,
	ROACHES_FREAKOUT_VOXK3_SAMPLE = 1506366978,
	ROACHES_FREAKOUT_VOXK4_SAMPLE = -944913503,
	ROACHES_FREAKOUT_VOXK5_SAMPLE = -1330973897,
	ROACHES_FREAKOUT_VOXM1_SAMPLE = -509767512,
	ROACHES_FREAKOUT_VOXM2_SAMPLE = 2023014674,
	ROACHES_FREAKOUT_VOXM3_SAMPLE = 261353860,
	ROACHES_FREAKOUT_VOXM4_SAMPLE = -1846057945,
	ROACHES_STOMP1_SAMPLE = 1774895803,
	ROACHES_STOMP2_SAMPLE = -255618303,
	ROACHES_STOMP3_SAMPLE = -2017156201,
	ROACHES_STOMP4_SAMPLE = 429930036,
	ROACHES_STOMP5_SAMPLE = 1856439970,
	ROACHES_STOMP_VOXF1_SAMPLE = -2030133130,
	ROACHES_STOMP_VOXF2_SAMPLE = 536342988,
	ROACHES_STOMP_VOXF3_SAMPLE = 1760608602,
	ROACHES_STOMP_VOXK1_SAMPLE = 860937787,
	ROACHES_STOMP_VOXK2_SAMPLE = -1436971135,
	ROACHES_STOMP_VOXM1_SAMPLE = 1695185341,
	ROACHES_STOMP_VOXM2_SAMPLE = -66902009,
	ROACH_SPRAY1_SAMPLE = -816476188,
	ROACH_SPRAY2_SAMPLE = 1448926814,
	ROACH_SPRAYTOP_OFF_SAMPLE = -1490666362,
	ROACH_SPRAYTOP_ON_SAMPLE = 1084956598,
	ROACH_SPRAY_SHAKE1_SAMPLE = -752465421,
	ROACH_SPRAY_SHAKE2_SAMPLE = 1244600393,
	ROACH_SPRAY_SHAKE3_SAMPLE = 1026042079,
	ROBOT_BREAK_SAMPLE = 863330325,
	ROBOT_CHEST_CLOSE_SAMPLE = -2138942342,
	ROBOT_CHEST_OPEN_SAMPLE = 777691145,
	ROBOT_DEPLOY_SAMPLE = -1565405661,
	ROBOT_DOOR_CLOSE_SAMPLE = -570266503,
	ROBOT_DOOR_OPEN_SAMPLE = 1889250673,
	ROBOT_LOOPFX_SAMPLE = -1076772115,
	ROBOT_POWERDOWN_SAMPLE = -1958049368,
	ROBOT_POWERON_SAMPLE = 350735987,
	ROBOT_TASK_VOX1_SAMPLE = 1221305394,
	ROBOT_TASK_VOX2_SAMPLE = -775752312,
	ROBOT_TASK_VOX3_SAMPLE = -1496988386,
	ROBOT_TYPING1_SAMPLE = -795945729,
	ROBOT_TYPING2_SAMPLE = 1233618245,
	ROBOT_TYPING3_SAMPLE = 1048622547,
	ROBOT_UNDEPLOY_SAMPLE = -752028701,
	ROCKET_BLASTOFF_SAMPLE = 1221398145,
	ROCKET_FIREWORKS_SAMPLE = -989616393,
	ROCKET_FUSE_SAMPLE = -817139638,
	ROCKET_PLACE_SAMPLE = -918875197,
	SANDBOXA_DESTROY_SFX_SAMPLE = -1430464620,
	SANDBOXA_DESTROY_VOXF14_SAMPLE = -942238628,
	SANDBOXA_DESTROY_VOXF2_SAMPLE = -1755330093,
	SANDBOXA_DESTROY_VOXM4_SAMPLE = -1647790803,
	SANDBOXA_DESTROY_VOXM8_SAMPLE = -1803618042,
	SANDBOXA_LPA_SFX_SAMPLE = 726262421,
	SANDBOXA_LPA_SFX2_SAMPLE = -1701081052,
	SANDBOXA_LPA_VOXF2_SAMPLE = -654852796,
	SANDBOXA_LPA_VOXF4_SAMPLE = 831789169,
	SANDBOXA_LPA_VOXM3_SAMPLE = 1275352089,
	SANDBOXA_LPA_VOXM5_SAMPLE = -1519914708,
	SANDBOXA_LPB_VOXF20_SAMPLE = 188590838,
	SANDBOXA_LPB_VOXF5_SAMPLE = 2004562554,
	SANDBOXA_LPB_VOXM12_SAMPLE = -1035241480,
	SANDBOXA_LPB_VOXM6_SAMPLE = 226933259,
	SANDBOXA_LPC_SFX_SAMPLE = 1367978485,
	SANDBOXA_LPC_VOXF3_SAMPLE = 946838779,
	SANDBOXA_LPC_VOXF7_SAMPLE = 1057118434,
	SANDBOXA_LPC_VOXM4_SAMPLE = 1174392979,
	SANDBOXA_LPC_VOXM6_SAMPLE = -1410223681,
	SANDBOXK_DESTROY_SFX_SAMPLE = -1864126030,
	SANDBOXK_DESTROY_VOXK17_SAMPLE = -1565201255,
	SANDBOXK_DESTROY_VOXK2_SAMPLE = 1174325896,
	SANDBOXK_LPA_VOXK4_SAMPLE = 1721056952,
	SANDBOXK_LPA_VOXK5_SAMPLE = 294784558,
	SANDBOXK_LPA_VOXK9_SAMPLE = 405029381,
	SANDBOXK_LPB_VOXK3_SAMPLE = -921063034,
	SANDBOXK_LPB_VOXK9_SAMPLE = 701257880,
	SANDBOXK_LPC_VOXK1_SAMPLE = -2124358882,
	SANDBOXK_LPC_VOXK3_SAMPLE = 1869527602,
	SANDBOXK_START_VOXK13_SAMPLE = 1417018383,
	SANDBOXK_START_VOXK3_SAMPLE = 1255094223,
	SANDBOXK_STOP_VOXK5_SAMPLE = 403758993,
	SANDBOXK_STOP_VOXK7_SAMPLE = -165757251,
	SANDBOX_STRUCTURE_COLLAPSE_SAMPLE = 1560342623,
	SANTA_APPEAR_SAMPLE = -1780618001,
	SANTA_HO_VOX1_SAMPLE = -462843377,
	SANTA_HO_VOX2_SAMPLE = 2103493557,
	SANTA_PRESENT_MAIN_SAMPLE = -468761337,
	SCULPTURE_KINETIC_SAMPLE = 468953316,
	SCULPTURE_RAVE_LOOP_SAMPLE = 1911493489,
	SHOWER1_SCLEANSHOWER1_SAMPLE = -994697599,
	SHOWER1_SCLEANSHOWER2_SAMPLE = 1572818747,
	SHOWER1_SCLEANSHOWER3_SAMPLE = 716734381,
	SHOWER1_SCLEANSHOWER4_SAMPLE = -1260590578,
	SHOWER1_SCLEANSHOWER5_SAMPLE = -1009001832,
	SHOWER1_SCLEANSHOWER6_SAMPLE = 1523747618,
	SHOWER1_SDOORSLIDE_SAMPLE = 1318317656,
	SHOWER1_SFAUCETSQUEAK_SAMPLE = -874289760,
	SHOWER1_SWATERON_SAMPLE = -662712351,
	SHOWER_DOOR_TIKI1_SAMPLE = -1032963989,
	SHOWER_DOOR_TIKI2_SAMPLE = 1533503953,
	SHOWER_FAN_SAMPLE = 1075120251,
	SHP_CELEBSTING1_SAMPLE = -172818320,
	SHP_CELEBSTING2_SAMPLE = 1824149962,
	SHP_MIMESTING1_SAMPLE = 852193232,
	SHP_MIMESTING3_SAMPLE = -591065348,
	SHP_MIMESTING4_SAMPLE = 1117887327,
	SHP_STRIPPER1_SAMPLE = -414691383,
	SHP_STRIPPER2_SAMPLE = 2118196851,
	SHP_STRIPPER3_SAMPLE = 155594469,
	SICK_COUGH_MILD_SITTINGF_SAMPLE = 707247807,
	SICK_COUGH_MILD_SITTINGK_SAMPLE = 1419166210,
	SICK_COUGH_MILD_SITTINGM_SAMPLE = -1107990729,
	SICK_COUGH_MILD_STANDINGF_SAMPLE = 366068259,
	SICK_COUGH_MILD_STANDINGK_SAMPLE = 1801502366,
	SICK_COUGH_MILD_STANDINGM_SAMPLE = -2113725525,
	SICK_COUGH_SEVERE_SITTINGF_SAMPLE = -249202578,
	SICK_COUGH_SEVERE_SITTINGK_SAMPLE = -1886124845,
	SICK_COUGH_SEVERE_SITTINGM_SAMPLE = 1727504870,
	SICK_COUGH_SEVERE_STANDINGF_SAMPLE = -455204185,
	SICK_COUGH_SEVERE_STANDINGK_SAMPLE = -1703977446,
	SICK_COUGH_SEVERE_STANDINGM_SAMPLE = 1930230575,
	SICK_SNEEZE_MILD_SITTINGF_SAMPLE = 1031315501,
	SICK_SNEEZE_MILD_SITTINGK_SAMPLE = 1137302672,
	SICK_SNEEZE_MILD_SITTINGM_SAMPLE = -1431668315,
	SICK_SNEEZE_MILD_STANDINGF_SAMPLE = 197619541,
	SICK_SNEEZE_MILD_STANDINGK_SAMPLE = 1970672616,
	SICK_SNEEZE_MILD_STANDINGM_SAMPLE = -1676298531,
	SICK_SNEEZE_SEVERE_SITTINGF_SAMPLE = 1214102218,
	SICK_SNEEZE_SEVERE_SITTINGK_SAMPLE = 921486967,
	SICK_SNEEZE_SEVERE_SITTINGM_SAMPLE = -544251070,
	SICK_SNEEZE_SEVERE_STANDINGF_SAMPLE = 903626132,
	SICK_SNEEZE_SEVERE_STANDINGK_SAMPLE = 1265451305,
	SICK_SNEEZE_SEVERE_STANDINGM_SAMPLE = -1576082404,
	SIMS_RIVER_LOOP_SAMPLE = -84195136,
	SINK_FILLING_END_SAMPLE = -1047879024,
	SINK_FILLING_LOOP_SAMPLE = -694592535,
	SINK_FILLING_START_SAMPLE = 973350562,
	SINK_WASHDISHES_SAMPLE = 1830801964,
	SINK_WASHHANDS_SAMPLE = -2121811728,
	SLOT_COINTRAY_FULL_SAMPLE = -680991564,
	SLOT_COIN_DROP_IN_SAMPLE = 439826918,
	SLOT_LOSE_SAMPLE = 1910456100,
	SLOT_PULL_HANDLE_SAMPLE = 1994741500,
	SLOT_WHEELS_SPIN_SAMPLE = -1922297700,
	SLOT_WIN_SAMPLE = 1157585641,
	SOCIAL_KISS_SAMPLE = 1151875978,
	SOCIAL_SLAP_SAMPLE = 909354872,
	SOCIAL_SLAP_LIGHT_SAMPLE = -243765092,
	SOFA1_SSQUEAK1_SAMPLE = -1827003029,
	SOFA1_SSQUEAK2_SAMPLE = 169047249,
	SOFA1_SSQUEAK3_SAMPLE = 2098480199,
	SOFA1_SSQUEAK4_SAMPLE = -479145500,
	SONIC_CLEAN1_SAMPLE = 53779814,
	SONIC_CLEAN2_SAMPLE = -1707225892,
	SONIC_HUM_CRAZY_SAMPLE = 1332400149,
	SONIC_HUM_NORM_SAMPLE = -1092609161,
	SONIC_OFF_SAMPLE = -1351674006,
	SONIC_ON_SAMPLE = 1690164987,
	SPRINKLER_GETUP_VOXK4_SAMPLE = 1922889673,
	SPRINKLER_GETUP_VOXK5_SAMPLE = 94095199,
	SPRINKLER_JUMPA_VOXK11_SAMPLE = 218490604,
	SPRINKLER_JUMPA_VOXK12_SAMPLE = -1811105962,
	SPRINKLER_JUMPB_VOXK3_SAMPLE = -1207903956,
	SPRINKLER_JUMPB_VOXK7_SAMPLE = -1083368139,
	SPRINKLER_JUMP_FALLA_VOXK1_SAMPLE = 2043634673,
	SPRINKLER_JUMP_FALLA_VOXK9_SAMPLE = 1997859779,
	SPRINKLER_JUMP_FALLB_VOXK15_SAMPLE = -1057152604,
	SPRINKLER_JUMP_FALLB_VOXK22_SAMPLE = 1974790084,
	SPRINKLER_JUMP_FALLB_VOXK5_SAMPLE = 1330298229,
	SPRINKLER_LOOP_SAMPLE = 119585308,
	SPRINKLER_OFF_SAMPLE = -397621050,
	SPRINKLER_ON_SAMPLE = -173208299,
	SPRINKLER_PLAYA_VOXK11_SAMPLE = -2012327958,
	SPRINKLER_PLAYA_VOXK27_SAMPLE = 1245755676,
	SPRINKLER_PLAYB_VOXK13_SAMPLE = -393271003,
	SPRINKLER_PLAYB_VOXK5_SAMPLE = 1073390155,
	SPRINKLER_PLAYC_VOXK11_SAMPLE = -903133033,
	SPRINKLER_PLAYC_VOXK12_SAMPLE = 1394743597,
	STEREO_BREAK_SAMPLE = -812887187,
	STEREO_STATIONS_SWITCH1_SAMPLE = -1131718899,
	STEREO_STATIONS_SWITCH2_SAMPLE = 629278391,
	STEREO_STATIONS_SWITCH3_SAMPLE = 1384461857,
	STEREO_SWITCH_SAMPLE = 21085692,
	STEREO_TURNOFF_CLICK_SAMPLE = -874004665,
	STING_BABY_SAMPLE = -2074983427,
	STING_CHAR_WINNER_SAMPLE = -255063410,
	STING_CLOWN_FAIL1_SAMPLE = -1896189764,
	STING_CLOWN_FAIL2_SAMPLE = 401809670,
	STING_CLOWN_FAIL3_SAMPLE = 1626608016,
	STING_CLOWN_FAIL4_SAMPLE = -24083405,
	STING_CLOWN_FAIL5_SAMPLE = -1986546523,
	STING_CLOWN_FAIL6_SAMPLE = 278848799,
	STING_CLOWN_FAIL7_SAMPLE = 1738134921,
	STING_CRYSTALBALL_SAMPLE = 1860026363,
	STING_CRYSTALBALL1_SAMPLE = -1445127780,
	STING_CRYSTALBALL2_SAMPLE = 819218470,
	STING_CRYSTALBALL3_SAMPLE = 1205041328,
	STING_CRYSTALBALL4_SAMPLE = -642257645,
	STING_DANGER1_SAMPLE = -1517773477,
	STING_DANGER2_SAMPLE = 1015139553,
	STING_DEATH1_SAMPLE = 1607771424,
	STING_DEATH2_SAMPLE = -958532454,
	STING_DEATH_FISH_SAMPLE = 1323441248,
	STING_ECONFAIL1_SAMPLE = 284306985,
	STING_ECONFAIL2_SAMPLE = -1980006509,
	STING_ECONFAIL3_SAMPLE = -17019131,
	STING_ECONFAIL4_SAMPLE = 1620630182,
	STING_ECONSUC1_SAMPLE = -1886565753,
	STING_ECONSUC2_SAMPLE = 377756477,
	STING_ECONSUC3_SAMPLE = 1635986347,
	STING_FIRE1_SAMPLE = -1976482985,
	STING_FIRE2_SAMPLE = 322441965,
	STING_FLOOD1_SAMPLE = 1125454580,
	STING_FLOOD2_SAMPLE = -635681970,
	STING_KISS_PASSION1_SAMPLE = -1544757252,
	STING_KISS_PASSION2_SAMPLE = 988122694,
	STING_KISS_PASSION3_SAMPLE = 1306705616,
	STING_KISS_POLITE1A_SAMPLE = 2084930909,
	STING_KISS_POLITE1B_SAMPLE = -447949593,
	STING_KISS_POLITE1C_SAMPLE = -1840520079,
	STING_KISS_REFUSED_SAMPLE = -715404458,
	STING_POTION_BAD_SAMPLE = -682086229,
	STING_POTION_BAD1_SAMPLE = -1039151641,
	STING_POTION_BAD2_SAMPLE = 1527159901,
	STING_POTION_BAD3_SAMPLE = 738307275,
	STING_POTION_BAD4_SAMPLE = -1301989016,
	STING_POTION_FUNNY_SAMPLE = 1909651500,
	STING_POTION_GOOD_SAMPLE = 1020546215,
	STING_POTION_GOOD1_SAMPLE = -883814992,
	STING_POTION_GOOD2_SAMPLE = 1381719050,
	STING_POTION_GOOD3_SAMPLE = 626814108,
	STING_POTION_GOOD4_SAMPLE = -1153894081,
	STING_PROPOSE_REFUSE_SAMPLE = -478331449,
	STING_RESURRECTION_SAMPLE = -583520896,
	STING_RESURRECTION1_SAMPLE = 1857639610,
	STING_RESURRECTION2_SAMPLE = -139459328,
	STING_RESURRECTION3_SAMPLE = -2135476842,
	STING_RESURRECTION4_SAMPLE = 517185589,
	STING_ROACHES_SAMPLE = 945373928,
	STING_ROMANCE1_SAMPLE = 491378973,
	STING_ROMANCE2_SAMPLE = -2076145497,
	STING_ROMANCE3_SAMPLE = -213403599,
	STING_SLEEP1_SAMPLE = 1552560955,
	STING_SLEEP2_SAMPLE = -981245311,
	STING_SOCFAIL1_SAMPLE = -570471894,
	STING_SOCFAIL2_SAMPLE = 1156979600,
	STING_SOCIALATTACK_SAMPLE = -1759495422,
	STING_SOCSUC1_SAMPLE = 1441782386,
	STING_SOCSUC2_SAMPLE = -857306168,
	STING_SOCSUC3_SAMPLE = -1142834338,
	STING_SOCSUC4_SAMPLE = 629485309,
	STING_SOCSUC5_SAMPLE = 1384259179,
	STING_SPOOKY1_SAMPLE = -557507653,
	STING_SPOOKY2_SAMPLE = 1204570625,
	STING_WEDDING_MARCH_SAMPLE = -84890148,
	STOVE_BUBBLE_SAMPLE = -2007742751,
	STOVE_EXPENSIVE_GASON_SAMPLE = -1262721256,
	STOVE_GET_SAMPLE = -2087843970,
	STOVE_IRON_ON_SAMPLE = -584519846,
	STOVE_PUT_SAMPLE = -802840358,
	STOVE_SONOFF_SAMPLE = 1265012007,
	STOVE_SSTIR1_SAMPLE = 898633511,
	STOVE_SSTIR2_SAMPLE = -1399234915,
	STOVE_SSTIR3_SAMPLE = -610374133,
	STOVE_SSTIR4_SAMPLE = 1174076328,
	STOVE_SSTIR5_SAMPLE = 855493438,
	STRIPPER_BYE_VOXE1_SAMPLE = -1494387510,
	STRIPPER_BYE_VOXE2_SAMPLE = 1071916400,
	STRIPPER_BYE_VOXE3_SAMPLE = 1222841830,
	STRIPPER_BYE_VOXF1_SAMPLE = -1916786935,
	STRIPPER_BYE_VOXF2_SAMPLE = 348747443,
	STRIPPER_BYE_VOXF3_SAMPLE = 1674462757,
	STRIPPER_BYE_VOXF4_SAMPLE = -39136378,
	STRIPPER_BYE_VOXF5_SAMPLE = -1968315632,
	STRIPPER_BYE_VOXF6_SAMPLE = 329560746,
	STRIPPER_BYE_VOXF7_SAMPLE = 1688437308,
	STRIPPER_BYE_VOXG3_SAMPLE = 2060810084,
	STRIPPER_BYE_VOXG5_SAMPLE = -1816735151,
	STRIPPER_BYE_VOXG7_SAMPLE = 2109256573,
	STRIPPER_BYE_VOXM1_SAMPLE = 1848966850,
	STRIPPER_BYE_VOXM2_SAMPLE = -146952328,
	STRIPPER_BYE_VOXM3_SAMPLE = -2143641618,
	STRIPPER_BYE_VOXM4_SAMPLE = 509479501,
	STRIPPER_CHEERER_VOXE10_SAMPLE = -101764872,
	STRIPPER_CHEERER_VOXE4_SAMPLE = 703533829,
	STRIPPER_CHEERER_VOXE6_SAMPLE = -941526487,
	STRIPPER_CHEERER_VOXE7_SAMPLE = -1327086913,
	STRIPPER_CHEERER_VOXE8_SAMPLE = 542727982,
	STRIPPER_CHEERER_VOXE9_SAMPLE = 1465806776,
	STRIPPER_CHEERER_VOXF2_SAMPLE = -341711373,
	STRIPPER_CHEERER_VOXF3_SAMPLE = -1666787995,
	STRIPPER_CHEERER_VOXF6_SAMPLE = -322166294,
	STRIPPER_CHEERER_VOXF7_SAMPLE = -1681190532,
	STRIPPER_CHEERER_VOXF8_SAMPLE = 192154861,
	STRIPPER_CHEERER_VOXF9_SAMPLE = 2087926907,
	STRIPPER_CHEERER_VOXG1_SAMPLE = 1806927112,
	STRIPPER_CHEERER_VOXG2_SAMPLE = -222636878,
	STRIPPER_CHEERER_VOXG3_SAMPLE = -2051152860,
	STRIPPER_CHEERER_VOXG4_SAMPLE = 467235207,
	STRIPPER_CHEERER_VOXM1_SAMPLE = -1856213630,
	STRIPPER_CHEERER_VOXM10_SAMPLE = -134454976,
	STRIPPER_CHEERER_VOXM11_SAMPLE = -2131013162,
	STRIPPER_CHEERER_VOXM12_SAMPLE = 435290220,
	STRIPPER_CHEERER_VOXM13_SAMPLE = 1861562618,
	STRIPPER_CHEERER_VOXM2_SAMPLE = 139803704,
	STRIPPER_CHEERER_VOXM3_SAMPLE = 2136083630,
	STRIPPER_CHEERER_VOXM4_SAMPLE = -516515571,
	STRIPPER_CHEERER_VOXM5_SAMPLE = -1775130213,
	STRIPPER_CHEERER_VOXM6_SAMPLE = 255391777,
	STRIPPER_CHEERER_VOXM7_SAMPLE = 2017446071,
	STRIPPER_CHEERER_VOXM8_SAMPLE = -394210010,
	STRIPPER_CHEERER_VOXM9_SAMPLE = -1618483792,
	STRIPPER_CLIMB_VOXF1_SAMPLE = 255234696,
	STRIPPER_CLIMB_VOXF3_SAMPLE = -516361308,
	STRIPPER_CLIMB_VOXF4_SAMPLE = 2136761863,
	STRIPPER_CLIMB_VOXF8_SAMPLE = 1995057708,
	STRIPPER_CLIMB_VOXF9_SAMPLE = 32316090,
	STRIPPER_CLIMB_VOXG2_SAMPLE = -1893404045,
	STRIPPER_CLIMB_VOXG3_SAMPLE = -131874075,
	STRIPPER_CLIMB_VOXG4_SAMPLE = 1715951430,
	STRIPPER_DANCE_ARMS_VOXE1_SAMPLE = 2082606787,
	STRIPPER_DANCE_ARMS_VOXE2_SAMPLE = -450142343,
	STRIPPER_DANCE_ARMS_VOXE3_SAMPLE = -1842581521,
	STRIPPER_DANCE_ARMS_VOXM1_SAMPLE = -1258584885,
	STRIPPER_DANCE_ARMS_VOXM2_SAMPLE = 770889073,
	STRIPPER_DANCE_BUMP_VOXE1_SAMPLE = -1029913964,
	STRIPPER_DANCE_BUMP_VOXE2_SAMPLE = 1536529198,
	STRIPPER_DANCE_BUMP_VOXE3_SAMPLE = 747807672,
	STRIPPER_DANCE_BUMP_VOXM1_SAMPLE = 172312732,
	STRIPPER_DANCE_BUMP_VOXM2_SAMPLE = -1823729370,
	STRIPPER_DANCE_BUMP_VOXM3_SAMPLE = -464836176,
	STRIPPER_DANCE_BUMP_VOXM4_SAMPLE = 2049948691,
	STRIPPER_DANCE_BUMP_VOXM5_SAMPLE = 220761221,
	STRIPPER_DANCE_BUMP_VOXM6_SAMPLE = -1809720001,
	STRIPPER_DANCE_END_VOXE1_SAMPLE = -196746575,
	STRIPPER_DANCE_END_VOXE2_SAMPLE = 1833743115,
	STRIPPER_DANCE_END_VOXE3_SAMPLE = 441156509,
	STRIPPER_DANCE_END_VOXF1_SAMPLE = -546786958,
	STRIPPER_DANCE_END_VOXF2_SAMPLE = 1180819656,
	STRIPPER_DANCE_END_VOXF3_SAMPLE = 828821598,
	STRIPPER_DANCE_END_VOXG1_SAMPLE = -965509069,
	STRIPPER_DANCE_END_VOXG2_SAMPLE = 1601884553,
	STRIPPER_DANCE_END_VOXM1_SAMPLE = 1016883385,
	STRIPPER_DANCE_END_VOXM2_SAMPLE = -1516947197,
	STRIPPER_DANCE_KICK_VOXF1_SAMPLE = 788779518,
	STRIPPER_DANCE_KICK_VOXF2_SAMPLE = -1240825788,
	STRIPPER_DANCE_KICK_VOXF3_SAMPLE = -1056067374,
	STRIPPER_DANCE_KICK_VOXG1_SAMPLE = 907600063,
	STRIPPER_DANCE_KICK_VOXG2_SAMPLE = -1357795067,
	STRIPPER_DANCE_PUNCH_VOXE1_SAMPLE = 867874467,
	STRIPPER_DANCE_PUNCH_VOXE2_SAMPLE = -1431050471,
	STRIPPER_DANCE_PUNCH_VOXE3_SAMPLE = -575350897,
	STRIPPER_DANCE_PUNCH_VOXM1_SAMPLE = -77382485,
	STRIPPER_DANCE_PUNCH_VOXM2_SAMPLE = 1651141905,
	STRIPPER_DANCE_PUNCH_VOXM3_SAMPLE = 359488903,
	STRIPPER_DANCE_SHIMY_VOXE1_SAMPLE = -934661509,
	STRIPPER_DANCE_SHIMY_VOXE2_SAMPLE = 1363370945,
	STRIPPER_DANCE_SHIMY_VOXF1_SAMPLE = -479764040,
	STRIPPER_DANCE_SHIMY_VOXF2_SAMPLE = 2054041602,
	STRIPPER_DANCE_SHIMY_VOXF3_SAMPLE = 224985236,
	STRIPPER_DANCE_SHIMY_VOXG1_SAMPLE = -92516103,
	STRIPPER_DANCE_SHIMY_VOXG2_SAMPLE = 1668612419,
	STRIPPER_DANCE_SHIMY_VOXM1_SAMPLE = 9681011,
	STRIPPER_DANCE_SHIMY_VOXM2_SAMPLE = -1717900855,
	STRIPPER_DANCE_SHIMY_VOXM3_SAMPLE = -291645089,
	STRIPPER_DANCE_SHIMY_VOXM4_SAMPLE = 1895386364,
	STRIPPER_DANCE_SHIMY_VOXM5_SAMPLE = 134118506,
	STRIPPER_DANCE_SHIMY_VOXM6_SAMPLE = -1627968048,
	STRIPPER_DANCE_SPANK_VOXF1_SAMPLE = 302549176,
	STRIPPER_DANCE_SPANK_VOXF2_SAMPLE = -1962813182,
	STRIPPER_DANCE_SPANK_VOXF3_SAMPLE = -66655852,
	STRIPPER_DANCE_SPANK_VOXG1_SAMPLE = 185842169,
	STRIPPER_DANCE_SPANK_VOXG2_SAMPLE = -1843730365,
	STRIPPER_DANCE_SWING_VOXF1_SAMPLE = -1934861395,
	STRIPPER_DANCE_SWING_VOXF2_SAMPLE = 363137559,
	STRIPPER_DANCE_SWING_VOXF3_SAMPLE = 1654798977,
	STRIPPER_DANCE_SWING_VOXG1_SAMPLE = -1783141652,
	STRIPPER_DANCE_SWING_VOXG2_SAMPLE = 213793622,
	STRIPPER_DANCE_WIGLE_VOXE1_SAMPLE = 860292977,
	STRIPPER_DANCE_WIGLE_VOXE2_SAMPLE = -1437706549,
	STRIPPER_DANCE_WIGLE_VOXE3_SAMPLE = -582392227,
	STRIPPER_DANCE_WIGLE_VOXF1_SAMPLE = 409621682,
	STRIPPER_DANCE_WIGLE_VOXF2_SAMPLE = -2124217080,
	STRIPPER_DANCE_WIGLE_VOXF3_SAMPLE = -161204834,
	STRIPPER_DANCE_WIGLE_VOXG1_SAMPLE = 24208883,
	STRIPPER_DANCE_WIGLE_VOXG2_SAMPLE = -1736952759,
	STRIPPER_DANCE_WIGLE_VOXM1_SAMPLE = -73495175,
	STRIPPER_DANCE_WIGLE_VOXM2_SAMPLE = 1654119619,
	STRIPPER_FLIRT_VOXE1_SAMPLE = -187046022,
	STRIPPER_FLIRT_VOXE12_SAMPLE = -1426980920,
	STRIPPER_FLIRT_VOXE15_SAMPLE = 882207339,
	STRIPPER_FLIRT_VOXE5_SAMPLE = -206298269,
	STRIPPER_FLIRT_VOXE6_SAMPLE = 1790800601,
	STRIPPER_FLIRT_VOXE7_SAMPLE = 498745935,
	STRIPPER_FLIRT_VOXE9_SAMPLE = -100503736,
	STRIPPER_FLIRT_VOXF10_SAMPLE = 1186537661,
	STRIPPER_FLIRT_VOXF11_SAMPLE = 834539563,
	STRIPPER_FLIRT_VOXF12_SAMPLE = -1464385135,
	STRIPPER_FLIRT_VOXF13_SAMPLE = -542084857,
	STRIPPER_FLIRT_VOXF15_SAMPLE = 919852082,
	STRIPPER_FLIRT_VOXG1_SAMPLE = -957381128,
	STRIPPER_FLIRT_VOXG2_SAMPLE = 1608963138,
	STRIPPER_FLIRT_VOXG3_SAMPLE = 685892820,
	STRIPPER_FLIRT_VOXG4_SAMPLE = -1232768649,
	STRIPPER_FLIRT_VOXG5_SAMPLE = -1048428063,
	STRIPPER_FLIRT_VOXG6_SAMPLE = 1485508699,
	STRIPPER_FLIRT_VOXG7_SAMPLE = 797712589,
	STRIPPER_FLIRT_VOXM18_SAMPLE = 1144473454,
	STRIPPER_FLIRT_VOXM19_SAMPLE = 858814456,
	STRIPPER_FLIRT_VOXM2_SAMPLE = -1526121272,
	STRIPPER_FLIRT_VOXM20_SAMPLE = 1640078495,
	STRIPPER_FLIRT_VOXM3_SAMPLE = -770831266,
	STRIPPER_JUMP_VOXE1_SAMPLE = -266750435,
	STRIPPER_JUMP_VOXE2_SAMPLE = 1762715559,
	STRIPPER_JUMP_VOXE3_SAMPLE = 504878897,
	STRIPPER_JUMP_VOXE4_SAMPLE = -2139929966,
	STRIPPER_JUMP_VOXE5_SAMPLE = -143363580,
	STRIPPER_JUMP_VOXE6_SAMPLE = 1853694910,
	STRIPPER_JUMP_VOXM1_SAMPLE = 952122389,
	STRIPPER_JUMP_VOXM2_SAMPLE = -1580634705,
	STRIPPER_JUMP_VOXM3_SAMPLE = -691118791,
	STRIPPER_JUMP_VOXM4_SAMPLE = 1219152026,
	STRIPPER_KISSEE_VOXD1_SAMPLE = 1238336004,
	STRIPPER_KISSEE_VOXD2_SAMPLE = -792276034,
	STRIPPER_KISSER_A_VOXE3_SAMPLE = 1390731458,
	STRIPPER_KISSER_A_VOXE4_SAMPLE = -863996575,
	STRIPPER_KISSER_A_VOXE5_SAMPLE = -1148762633,
	STRIPPER_KISSER_A_VOXE8_SAMPLE = -986302134,
	STRIPPER_KISSER_A_VOXF1_SAMPLE = -1748512211,
	STRIPPER_KISSER_A_VOXF2_SAMPLE = 248415127,
	STRIPPER_KISSER_A_VOXF3_SAMPLE = 2043261697,
	STRIPPER_KISSER_A_VOXF4_SAMPLE = -408082782,
	STRIPPER_KISSER_A_VOXG1_SAMPLE = -1898126484,
	STRIPPER_KISSER_A_VOXG2_SAMPLE = 399880918,
	STRIPPER_KISSER_A_VOXM1_SAMPLE = 1949502438,
	STRIPPER_KISSER_A_VOXM2_SAMPLE = -314942884,
	STRIPPER_KISSER_A_VOXM3_SAMPLE = -1707250998,
	STRIPPER_KISSER_B_VOXE1_SAMPLE = -1929208973,
	STRIPPER_KISSER_B_VOXE2_SAMPLE = 336317129,
	STRIPPER_KISSER_B_VOXE4_SAMPLE = -43487236,
	STRIPPER_KISSER_B_VOXE6_SAMPLE = 325455568,
	STRIPPER_KISSER_B_VOXF1_SAMPLE = -1506817872,
	STRIPPER_KISSER_B_VOXF2_SAMPLE = 1059494154,
	STRIPPER_KISSER_B_VOXF3_SAMPLE = 1210165660,
	STRIPPER_KISSER_B_VOXF4_SAMPLE = -700105665,
	STRIPPER_KISSER_B_VOXG1_SAMPLE = -1087047183,
	STRIPPER_KISSER_B_VOXG2_SAMPLE = 641574987,
	STRIPPER_KISSER_B_VOXM1_SAMPLE = 1171984763,
	STRIPPER_KISSER_B_VOXM2_SAMPLE = -590200639,
	STRIPPER_KISSER_B_VOXM3_SAMPLE = -1412075433,
	STRIPPER_KISSER_B_VOXM4_SAMPLE = 900851188,
	STRIPPER_KISSER_B_VOXM5_SAMPLE = 1119278434,
	STRIPPER_TADA_VOXE2_SAMPLE = 2143144400,
	STRIPPER_TADA_VOXE3_SAMPLE = 146471238,
	STRIPPER_TADA_VOXE4_SAMPLE = -1763808027,
	STRIPPER_TADA_VOXE9_SAMPLE = -395374504,
	STRIPPER_TADA_VOXF1_SAMPLE = -845558871,
	STRIPPER_TADA_VOXF2_SAMPLE = 1418762771,
	STRIPPER_TADA_VOXF5_SAMPLE = -889974864,
	STRIPPER_TADA_VOXF6_SAMPLE = 1409113610,
	STRIPPER_TADA_VOXG1_SAMPLE = -729613592,
	STRIPPER_TADA_VOXG2_SAMPLE = 1300998994,
	STRIPPER_TADA_VOXG3_SAMPLE = 982293444,
	STRIPPER_TADA_VOXG4_SAMPLE = -1528295833,
	STRIPPER_TADA_VOXM10_SAMPLE = 1464447559,
	STRIPPER_TADA_VOXM12_SAMPLE = -1186475157,
	STRIPPER_TADA_VOXM13_SAMPLE = -834608131,
	STRIPPER_TADA_VOXM14_SAMPLE = 1344566878,
	STRIPPER_TADA_VOXM8_SAMPLE = 1471261382,
	STRIPPER_TADA_VOXM9_SAMPLE = 548837968,
	STRIPPER_WAVE_VOXE1_SAMPLE = -950914772,
	STRIPPER_WAVE_VOXE4_SAMPLE = -1221016157,
	STRIPPER_WAVE_VOXF1_SAMPLE = -327195921,
	STRIPPER_WAVE_VOXF2_SAMPLE = 1970680661,
	STRIPPER_WAVE_VOXF3_SAMPLE = 40960963,
	STRIPPER_WAVE_VOXG1_SAMPLE = -177974354,
	STRIPPER_WAVE_VOXG2_SAMPLE = 1819083284,
	STRIPPER_WAVE_VOXG3_SAMPLE = 459944578,
	STRIPPER_WAVE_VOXM10_SAMPLE = -925388725,
	STRIPPER_WAVE_VOXM11_SAMPLE = -1076854563,
	STRIPPER_WAVE_VOXM2_SAMPLE = -1769805154,
	STRIPPER_WAVE_VOXM6_SAMPLE = -1846595961,
	STRIPPER_WAVE_VOXM8_SAMPLE = 1985414016,
	STRIPPER_WAVE_VOXM9_SAMPLE = 22033174,
	SURFACE_FORMICA_GET_SAMPLE = -1851911791,
	SURFACE_FORMICA_PUT_SAMPLE = -1036667339,
	SURFACE_WOOD_GET_SAMPLE = -482084499,
	SURFACE_WOOD_PUT_SAMPLE = -1326948663,
	TELEPORT_COLOR_SAMPLE = 261547202,
	TELEPORT_RECEIVE_SAMPLE = 1753828913,
	TELEPORT_SEND_SAMPLE = 1629351806,
	TELESCOPE_ABDUCTION_SAMPLE = -935712898,
	TELESCOPE_FOCUS_SAMPLE = -514173772,
	TELESCOPE_UFO_SAMPLE = -1324566137,
	TELESCOPE_UFO_VANISH_SAMPLE = 183423096,
	TOASTER_END_DING_SAMPLE = 948054834,
	TOASTER_OPEN_SQUEAK_SAMPLE = 1891886177,
	TOASTER_OVEN_CLOSE_SAMPLE = 498575434,
	TOILET1_SCLOGGED01_SAMPLE = -1548547407,
	TOILET1_SCLOGGED02_SAMPLE = 985291531,
	TOILET1_SCLOGGED03_SAMPLE = 1304259485,
	TOILET1_SCLOGGED04_SAMPLE = -740688322,
	TOILET1_SCLOGGED05_SAMPLE = -1528901976,
	TOILET1_SCLOGGED06_SAMPLE = 1037541138,
	TOILET1_SCLOGGED07_SAMPLE = 1255190404,
	TOILET_FLUSH_CHEAP_SAMPLE = 991182555,
	TOILET_FLUSH_COUNTRY_SAMPLE = 1522655650,
	TOILET_FLUSH_EXPENSIVE_SAMPLE = 1407442588,
	TOILET_SCRUB1_SAMPLE = 812420997,
	TOILET_SCRUB2_SAMPLE = -1452941761,
	TOILET_SCRUB3_SAMPLE = -563941719,
	TOILET_SCRUB4_SAMPLE = 1074166538,
	TOILET_SEAT_DOWN_CHEAP_SAMPLE = 362503654,
	TOILET_SEAT_DOWN_EXP_SAMPLE = 849642893,
	TOILET_SEAT_UP_CHEAP_SAMPLE = 1362024701,
	TOILET_SEAT_UP_EXP_SAMPLE = -1859793482,
	TOILET_UNCLOG1_SAMPLE = -1067697801,
	TOILET_UNCLOG2_SAMPLE = 1498769613,
	TOILET_UNCLOG3_SAMPLE = 777148507,
	TOILET_UNCLOG4_SAMPLE = -1338585608,
	TOYBOX_CAR1_SAMPLE = -1334867710,
	TOYBOX_CAR2_SAMPLE = 694606008,
	TOYBOX_CAR3_SAMPLE = 1583474734,
	TOYBOX_CAR4_SAMPLE = -1073382003,
	TOYBOX_CLOSE_SAMPLE = -1957317140,
	TOYBOX_DOLL1_SAMPLE = -1279998992,
	TOYBOX_DOLL2_SAMPLE = 717066826,
	TOYBOX_DOLL3_SAMPLE = 1572512476,
	TOYBOX_DOLL4_SAMPLE = -1008846977,
	TOYBOX_OPEN_SAMPLE = 576985030,
	TOYBOX_PLANE1_SAMPLE = 1535648628,
	TOYBOX_PLANE2_SAMPLE = -1031703858,
	TOYBOX_PLANE3_SAMPLE = -1249492392,
	TRAINSET_PLAY_LARGE_END_SAMPLE = -1536577976,
	TRAINSET_PLAY_LARGE_LOOP_SAMPLE = 1593106947,
	TRAINSET_PLAY_LARGE_START_SAMPLE = 2052276349,
	TRAINSET_PLAY_LARGE_TOOT_SAMPLE = -868984470,
	TRAINSET_PLAY_LARGE_TOOT2_SAMPLE = -1216478702,
	TRAINSET_PLAY_SMALL_END_SAMPLE = -1319230906,
	TRAINSET_PLAY_SMALL_LOOP_SAMPLE = -1185286008,
	TRAINSET_PLAY_SMALL_START_SAMPLE = 14596047,
	TRASHCOMPACT_BEEPSTART_SAMPLE = -248715357,
	TRASHCOMPACT_CLOSE_SAMPLE = -1961734533,
	TRASHCOMPACT_OPEN_SAMPLE = 1704952006,
	TRASH_ASH_DISPOSE_SAMPLE = 1390441607,
	TRASH_BAG_SAMPLE = 1073417054,
	TRASH_DISPOSE_SAMPLE = 2061870565,
	TRASH_EMPTY_SAMPLE = -540269813,
	TRASH_OUTSIDE_LID_OFF_SAMPLE = -1605470374,
	TRASH_OUTSIDE_LID_ON_SAMPLE = 1160043186,
	TRASH_TAKEOUT_SAMPLE = -86685732,
	TREADMILL_CLEANA_SAMPLE = 179212474,
	TREADMILL_CLEANB_SAMPLE = -1817722624,
	TREADMILL_CLEANC_SAMPLE = -459214442,
	TREADMILL_FALL_CRASH_VOXF12_SAMPLE = 1386799908,
	TREADMILL_FALL_CRASH_VOXF2_SAMPLE = 1449276189,
	TREADMILL_FALL_CRASH_VOXF7_SAMPLE = 638109586,
	TREADMILL_FALL_CRASH_VOXM11_SAMPLE = -940286593,
	TREADMILL_FALL_CRASH_VOXM3_SAMPLE = -1030628800,
	TREADMILL_FALL_CRASH_VOXM5_SAMPLE = 737312629,
	TREADMILL_FALL_LP_VOXF12_SAMPLE = -67063322,
	TREADMILL_FALL_LP_VOXF5_SAMPLE = -1321324970,
	TREADMILL_FALL_LP_VOXM11_SAMPLE = 1767641021,
	TREADMILL_FALL_LP_VOXM8_SAMPLE = 746294048,
	TREADMILL_FALL_START_VOXF12_SAMPLE = -1972702020,
	TREADMILL_FALL_START_VOXF4_SAMPLE = 1883100288,
	TREADMILL_FALL_START_VOXF6_SAMPLE = -1640778324,
	TREADMILL_FALL_START_VOXM12_SAMPLE = -2042684579,
	TREADMILL_FALL_START_VOXM3_SAMPLE = 229480680,
	TREADMILL_FALL_START_VOXM5_SAMPLE = -456245795,
	TREADMILL_JOG1_SAMPLE = -1754724956,
	TREADMILL_JOG2_SAMPLE = 241194014,
	TREADMILL_JOG3_SAMPLE = 2036819080,
	TREADMILL_LOOPA_SAMPLE = -12554623,
	TREADMILL_LOOPB_SAMPLE = 1716076347,
	TREADMILL_LOOPC_SAMPLE = 290328493,
	TREADMILL_START_STOP_SAMPLE = 1327068227,
	TSWING_FALLOFF_VOXF5_SAMPLE = 852026270,
	TSWING_FALLOFF_VOXF6_SAMPLE = -1413369308,
	TSWING_FALLOFF_VOXF7_SAMPLE = -590970190,
	TSWING_FALLOFF_VOXF8_SAMPLE = 1283039011,
	TSWING_FALLOFF_VOXF9_SAMPLE = 998158261,
	TSWING_FALLOFF_VOXM5_SAMPLE = -784582059,
	TSWING_FALLOFF_VOXM6_SAMPLE = 1211460591,
	TSWING_FALLOFF_VOXM7_SAMPLE = 1060264825,
	TSWING_FALLOFF_VOXM8_SAMPLE = -1349695768,
	TSWING_FALLOFF_VOXM9_SAMPLE = -662014338,
	TUB1_SDRAIN_SAMPLE = 396988335,
	TUB1_SFAUCETSQUEAK_SAMPLE = -1801206693,
	TUB1_STUBFILL_SAMPLE = 1454433798,
	TUB_BODYCLEAN1_SAMPLE = -1172299179,
	TUB_BODYCLEAN2_SAMPLE = 589919215,
	TUB_BODYCLEAN3_SAMPLE = 1412318073,
	TUB_BODYCLEAN4_SAMPLE = -901064998,
	TUB_SPLASH1_SAMPLE = 656653502,
	TUB_SPLASH2_SAMPLE = -1104483068,
	TUB_SPLASH3_SAMPLE = -919741038,
	TUB_SPLASH4_SAMPLE = 1464420401,
	TUB_SSCRUBBING1_SAMPLE = -1015839977,
	TUB_SSCRUBBING2_SAMPLE = 1517998765,
	TUB_SSCRUBBING3_SAMPLE = 763224635,
	TURKEY_CARVE_A1_SAMPLE = -677267550,
	TURKEY_CARVE_A2_SAMPLE = 1319691800,
	TURKEY_CARVE_B1_SAMPLE = -57875359,
	TURKEY_CARVE_B2_SAMPLE = 1703261659,
	TURKEY_CARVE_C1_SAMPLE = -443034336,
	TURKEY_CARVE_C2_SAMPLE = 2090763418,
	TV_ACTION_AIRPLANE_SAMPLE = -1809619648,
	TV_ACTION_ARGUE_SAMPLE = -1378967014,
	TV_ACTION_BRAINSTORM_SAMPLE = -1399619253,
	TV_ACTION_CARAWAY_SAMPLE = 1224596994,
	TV_ACTION_CARCONV_SAMPLE = -404298465,
	TV_ACTION_DOCKSCENE_SAMPLE = 564457343,
	TV_ACTION_DYINGMAN_SAMPLE = -1014130829,
	TV_ACTION_DYINGWOMAN_SAMPLE = -1687180998,
	TV_ACTION_GONNABLOW_SAMPLE = 1859976136,
	TV_ACTION_MACHINEGUN_SAMPLE = -1727238897,
	TV_ACTION_MUS1_SAMPLE = -1918306528,
	TV_ACTION_MUS2_SAMPLE = 346138266,
	TV_ACTION_MUS3_SAMPLE = 1671861772,
	TV_ACTION_MUS4_SAMPLE = -37616721,
	TV_ACTION_MUS5_SAMPLE = -1966787783,
	TV_ACTION_MUS6_SAMPLE = 332161667,
	TV_ACTION_MUS7_SAMPLE = 1691046421,
	TV_ACTION_MUS8_SAMPLE = -193704060,
	TV_ACTION_PARTY_SAMPLE = -1525290804,
	TV_ACTION_PHONE_SAMPLE = 1758409201,
	TV_BROKEN_SAMPLE = 754101658,
	TV_C1_01_SAMPLE = -1221613853,
	TV_C1_02_SAMPLE = 774305625,
	TV_C1_03_SAMPLE = 1495386063,
	TV_C1_04_SAMPLE = -951758228,
	TV_C1_05_SAMPLE = -1337826566,
	TV_C1_06_SAMPLE = 692794176,
	TV_C1_07_SAMPLE = 1582040022,
	TV_C1_08_SAMPLE = -822927801,
	TV_C1_09_SAMPLE = -1175179567,
	TV_C1_10_SAMPLE = -650926284,
	TV_C1_11_SAMPLE = -1372285022,
	TV_C1_12_SAMPLE = 926795288,
	TV_C1_13_SAMPLE = 1077606030,
	TV_C1_14_SAMPLE = -564239571,
	TV_C1_15_SAMPLE = -1453763653,
	TV_C1_16_SAMPLE = 810549761,
	TV_C1_17_SAMPLE = 1196896919,
	TV_C1_18_SAMPLE = -672649466,
	TV_C1_19_SAMPLE = -1594941552,
	TV_C1_20_SAMPLE = -232852233,
	TV_C1_21_SAMPLE = -2061908895,
	TV_C1_22_SAMPLE = 470848987,
	TV_C1_23_SAMPLE = 1796711757,
	TV_C1_24_SAMPLE = -177000210,
	TV_C1_25_SAMPLE = -2106326920,
	TV_C1_26_SAMPLE = 461197762,
	TV_C1_27_SAMPLE = 1819959636,
	TV_C1_28_SAMPLE = -54166331,
	TV_C1_29_SAMPLE = -1950200749,
	TV_C1_30_SAMPLE = -351943242,
	TV_C1_31_SAMPLE = -1677527776,
	TV_C1_32_SAMPLE = 84649114,
	TV_C1_33_SAMPLE = 1913426956,
	TV_C1_34_SAMPLE = -328728145,
	TV_C1_35_SAMPLE = -1687211719,
	TV_C1_36_SAMPLE = 40263811,
	TV_C1_37_SAMPLE = 1969311765,
	TV_C1_38_SAMPLE = -438415996,
	TV_C1_39_SAMPLE = -1831240430,
	TV_C1_40_SAMPLE = -1539026063,
	TV_C1_41_SAMPLE = -750558233,
	TV_C1_42_SAMPLE = 1246376541,
	TV_C1_43_SAMPLE = 1028457163,
	TV_C1_44_SAMPLE = -1557555352,
	TV_C1_45_SAMPLE = -735139842,
	TV_C1_46_SAMPLE = 1294464580,
	TV_C1_M1_SAMPLE = 767467864,
	TV_C1_M10_SAMPLE = -1857636282,
	TV_C1_M11_SAMPLE = -431912752,
	TV_C1_M12_SAMPLE = 2135480682,
	TV_C1_M13_SAMPLE = 139454972,
	TV_C1_M2_SAMPLE = -1263013662,
	TV_C1_M3_SAMPLE = -1011826572,
	TV_C1_M4_SAMPLE = 1574196695,
	TV_C1_M5_SAMPLE = 718497089,
	TV_C1_V1_SAMPLE = -2071434558,
	TV_C1_V2_SAMPLE = 495008632,
	TV_C1_V3_SAMPLE = 1787169774,
	TV_C1_V4_SAMPLE = -186474931,
	TV_C1_V5_SAMPLE = -2082099493,
	TV_COMM_BEER_SAMPLE = -396328151,
	TV_COMM_DOG_SAMPLE = -950952153,
	TV_COMM_MONSTERTRUCK_SAMPLE = 800470471,
	TV_COMM_MOVIE_SAMPLE = -866843781,
	TV_COMM_NEWS_SAMPLE = -1387954988,
	TV_COMM_POLICECHASE_SAMPLE = 883119927,
	TV_COMM_PROPECIA_SAMPLE = 1844142416,
	TV_COMM_SPORTS_SAMPLE = 1387005528,
	TV_COMM_STATIONID_SAMPLE = -1102507348,
	TV_COMM_TOY_SAMPLE = 561512756,
	TV_C_SWITCH_SAMPLE = -430106993,
	TV_C_TURNOFF_SAMPLE = 121541256,
	TV_C_TURNON_SAMPLE = 1390897494,
	TV_EXP_SWITCH_SAMPLE = -516512444,
	TV_EXP_TURNOFF_SAMPLE = 193978883,
	TV_EXP_TURNON_SAMPLE = 1435294365,
	TV_HOR_ATTACK1_SAMPLE = 1892940703,
	TV_HOR_ATTACK2_SAMPLE = -371545563,
	TV_HOR_ATTACK3_SAMPLE = -1629644109,
	TV_HOR_BLATU_SAMPLE = 128346156,
	TV_HOR_CARDIE_SAMPLE = 1834647889,
	TV_HOR_CRAZY_SAMPLE = 490012821,
	TV_HOR_EVIL_SAMPLE = -1827321546,
	TV_HOR_FLIES_SAMPLE = 1183783281,
	TV_HOR_ITWALKS_SAMPLE = -1401124767,
	TV_HOR_MONSTERFREAKS_SAMPLE = 1257169053,
	TV_HOR_MONSTERRUNS_SAMPLE = -2067217340,
	TV_HOR_MONSTERWAITS_SAMPLE = 213937524,
	TV_HOR_MUSIC_SAMPLE = -1124251205,
	TV_HOR_MUSIC2_SAMPLE = 1188702528,
	TV_HOR_SHOWER_SAMPLE = -253118181,
	TV_HOR_TRAPPED_SAMPLE = 1933915895,
	TV_MOD_SWITCH_SAMPLE = -1028524583,
	TV_MOD_TURNOFF_SAMPLE = -2062382422,
	TV_MOD_TURNON_SAMPLE = 1980467712,
	TV_R1_SAMPLE = 1533319177,
	TV_R10_SAMPLE = -1923349731,
	TV_R11_SAMPLE = -94686325,
	TV_R12_SAMPLE = 1666343473,
	TV_R13_SAMPLE = 341136039,
	TV_R14_SAMPLE = -1976449276,
	TV_R15_SAMPLE = -46729326,
	TV_R16_SAMPLE = 1681892904,
	TV_R17_SAMPLE = 322475710,
	TV_R18_SAMPLE = -2088269009,
	TV_R2_SAMPLE = -1032992333,
	TV_R3_SAMPLE = -1251280603,
	TV_R4_SAMPLE = 722365574,
	TV_R5_SAMPLE = 1544117264,
	TV_R6_SAMPLE = -989852246,
	TV_R7_SAMPLE = -1308148420,
	TV_R8_SAMPLE = 582492333,
	TV_R9_SAMPLE = 1438584891,
	TV_REPAIR_DEATHWARNING_SAMPLE = 1335202115,
	UI_ACCEPT_SAMPLE = -812000482,
	UI_BACK_SAMPLE = 76212559,
	UI_BLD_DRAGTOOL_MOUSEDOWN_SAMPLE = 554923087,
	UI_BLD_DRAGTOOL_MOUSEUP_SAMPLE = 1559123769,
	UI_BLD_DRAGTOOL_PLACE_SAMPLE = -336761120,
	UI_CAC_CYCLEHEAD_SAMPLE = -1079539618,
	UI_CAC_CYCLEPARTS_SAMPLE = 660369620,
	UI_CAC_PERSONPTS_SAMPLE = -209211249,
	UI_CAMERA_PHOTO_SAMPLE = 700734269,
	UI_CLICK_SAMPLE = -550543410,
	UI_ERROR_SAMPLE = 939794847,
	UI_HELP_SAMPLE = 1640199380,
	UI_MOVE_SAMPLE = -2038817024,
	UI_NHOOD_BDOZE_DEMOLISH_SAMPLE = -1608010381,
	UI_NHOOD_BDOZE_END_SAMPLE = -421382994,
	UI_NHOOD_BDOZE_EVICT_SAMPLE = 2060383431,
	UI_NHOOD_BDOZE_LOOP_SAMPLE = 400502484,
	UI_NHOOD_BDOZE_START_SAMPLE = 1655516358,
	UI_NHOOD_CLICK_SAMPLE = 943585254,
	UI_NHOOD_ERROR_SAMPLE = -552171081,
	UI_NHOOD_ROLLOVER_SAMPLE = -303616556,
	UI_OBJECT_MONEYBACK_SAMPLE = -1722906252,
	UI_OBJECT_MOVE_PLACE_SAMPLE = -648729884,
	UI_OBJECT_PLACE_SAMPLE = -1297269043,
	UI_OBJECT_ROTATE_SAMPLE = 203539113,
	UI_PIEMENU_APPEAR_SAMPLE = 2107216511,
	UI_PIEMENU_HIGHLIGHT_SAMPLE = -452737227,
	UI_PIEMENU_SELECT_SAMPLE = 1511851661,
	UI_QUEUED_SAMPLE = 815837563,
	UI_QUEUE_DELETE_SAMPLE = -1972284666,
	UI_REMOVE_SAMPLE = 339290906,
	UI_SPEED_1TO2_SAMPLE = -1191409781,
	UI_SPEED_1TO3_SAMPLE = -805587171,
	UI_SPEED_1TOP_SAMPLE = 457213951,
	UI_SPEED_2TO1_SAMPLE = 859863519,
	UI_SPEED_2TO3_SAMPLE = -582084365,
	UI_SPEED_2TOP_SAMPLE = 167061521,
	UI_SPEED_3TO1_SAMPLE = -1946411334,
	UI_SPEED_3TO2_SAMPLE = 318066432,
	UI_SPEED_3TOP_SAMPLE = -1320595596,
	UI_SPEED_PTO1_SAMPLE = -1569765801,
	UI_SPEED_PTO2_SAMPLE = 996546541,
	UI_SPEED_PTO3_SAMPLE = 1281435515,
	UI_TERRAIN1_SAMPLE = 170335060,
	UI_TERRAIN2_SAMPLE = -1825682706,
	UI_TERRAIN3_SAMPLE = -467043720,
	UI_TERRAIN4_SAMPLE = 2051928027,
	UI_TERRAIN_LEVEL1_SAMPLE = -1480955280,
	UI_TERRAIN_LEVEL2_SAMPLE = 1051933642,
	UI_WHOOSH_SAMPLE = 363544171,
	VMIRROR_BRUSHOFF_VOXF4_SAMPLE = 957582063,
	VMIRROR_BRUSHOFF_VOXF6_SAMPLE = -685904957,
	VMIRROR_BRUSHOFF_VOXK3_SAMPLE = 316236033,
	VMIRROR_BRUSHOFF_VOXK37_SAMPLE = 497722229,
	VMIRROR_BRUSHOFF_VOXK4_SAMPLE = -1933708126,
	VMIRROR_BRUSHOFF_VOXM5_SAMPLE = -1377803342,
	VMIRROR_BRUSHOFF_VOXM7_SAMPLE = 1139671710,
	VMIRROR_COMBO_VOXF2_SAMPLE = 1713438370,
	VMIRROR_COMBO_VOXF5_SAMPLE = -129733887,
	VMIRROR_COMBO_VOXF8_SAMPLE = -2030757956,
	VMIRROR_COMBO_VOXK11_SAMPLE = -1734882019,
	VMIRROR_COMBO_VOXK23_SAMPLE = 1572143090,
	VMIRROR_COMBO_VOXM4_SAMPLE = 1823965788,
	VMIRROR_COMBO_VOXM6_SAMPLE = -2101746832,
	VMIRROR_COMBO_VOXM9_SAMPLE = 302448353,
	VMIRROR_SPEECH_VOXF5_SAMPLE = -710707262,
	VMIRROR_SPEECH_VOXF7_SAMPLE = 1001199342,
	VMIRROR_SPEECH_VOXK7_SAMPLE = -1912379229,
	VMIRROR_SPEECH_VOXM6_SAMPLE = -1352728653,
	VMIRROR_SPEECH_VOXM8_SAMPLE = 1223086772,
	VOODOO_LAUGH_VOXF1_SAMPLE = -1738799011,
	VOODOO_LAUGH_VOXF2_SAMPLE = 22370791,
	VOODOO_LAUGH_VOXF3_SAMPLE = 1985112433,
	VOODOO_LAUGH_VOXM1_SAMPLE = 2074661270,
	VOODOO_LAUGH_VOXM2_SAMPLE = -492732372,
	VOODOO_LAUGH_VOXM3_SAMPLE = -1784237894,
	VOODOO_PINS_SAMPLE = -435043204,
	VOODOO_PINS1_SAMPLE = -628505756,
	VOODOO_PINS2_SAMPLE = 1132499678,
	VOODOO_PINS3_SAMPLE = 881304136,
	VOODOO_PINS_VOXF1_SAMPLE = -1999380103,
	VOODOO_PINS_VOXF2_SAMPLE = 299544771,
	VOODOO_PINS_VOXF3_SAMPLE = 1725792341,
	VOODOO_PINS_VOXF4_SAMPLE = -122087946,
	VOODOO_PINS_VOXF5_SAMPLE = -1883364000,
	VOODOO_PINS_VOXM1_SAMPLE = 1797732530,
	VOODOO_PINS_VOXM2_SAMPLE = -231839480,
	VOODOO_PINS_VOXM3_SAMPLE = -2060887650,
	VOODOO_PINS_VOXM4_SAMPLE = 458083389,
	VOODOO_PINS_VOXM5_SAMPLE = 1816853675,
	VOODOO_PUNCH1_SAMPLE = -1911367559,
	VOODOO_PUNCH2_SAMPLE = 387680707,
	VOODOO_PUNCH3_SAMPLE = 1612495189,
	VOODOO_PUNCH_VOXF1_SAMPLE = -1205162603,
	VOODOO_PUNCH_VOXF2_SAMPLE = 556006447,
	VOODOO_PUNCH_VOXF3_SAMPLE = 1445252281,
	VOODOO_PUNCH_VOXF4_SAMPLE = -935306982,
	VOODOO_PUNCH_VOXM1_SAMPLE = 1541305438,
	VOODOO_PUNCH_VOXM3_SAMPLE = -1244654222,
	VOODOO_PUNCH_VOXM4_SAMPLE = 733249745,
	VOODOO_PUT_SAMPLE = 1726458141,
	VOODOO_SFX_SAMPLE = 217586429,
	VOODOO_SHAKE_SAMPLE = -71650160,
	VOODOO_SHAKE_VOXF1_SAMPLE = -1642892184,
	VOODOO_SHAKE_VOXF2_SAMPLE = 119154130,
	VOODOO_SHAKE_VOXF3_SAMPLE = 1880954180,
	VOODOO_SHAKE_VOXM1_SAMPLE = 2112335267,
	VOODOO_SHAKE_VOXM2_SAMPLE = -454099943,
	VOODOO_SHAKE_VOXM3_SAMPLE = -1813394289,
	VOODOO_TAKE_SAMPLE = -289193081,
	VOODOO_THINK_VOXF1_SAMPLE = 338671306,
	VOODOO_THINK_VOXF2_SAMPLE = -1926830224,
	VOODOO_THINK_VOXM1_SAMPLE = -136614143,
	VOODOO_THINK_VOXM2_SAMPLE = 1859272379,
	VOX_AHA_OHF1_SAMPLE = 1285331109,
	VOX_AHA_OHF13_SAMPLE = -886946460,
	VOX_AHA_OHF15_SAMPLE = 574742609,
	VOX_AHA_OHF16_SAMPLE = -1152863765,
	VOX_AHA_OHF17_SAMPLE = -867204739,
	VOX_AHA_OHF2_SAMPLE = -711603937,
	VOX_AHA_OHF21_SAMPLE = 234977163,
	VOX_AHA_OHF3_SAMPLE = -1567426167,
	VOX_AHA_OHF4_SAMPLE = 1022782506,
	VOX_AHA_OHF5_SAMPLE = 1274109116,
	VOX_AHA_OHF6_SAMPLE = -755495674,
	VOX_AHA_OHF9_SAMPLE = 1111953559,
	VOX_AHA_OHK1_SAMPLE = -114104600,
	VOX_AHA_OHK12_SAMPLE = -1258428767,
	VOX_AHA_OHK13_SAMPLE = -1006971337,
	VOX_AHA_OHK14_SAMPLE = 1570653076,
	VOX_AHA_OHK18_SAMPLE = 1411911615,
	VOX_AHA_OHK19_SAMPLE = 590298921,
	VOX_AHA_OHK20_SAMPLE = 1910428750,
	VOX_AHA_OHK4_SAMPLE = -1990716825,
	VOX_AHA_OHM1_SAMPLE = -1352122002,
	VOX_AHA_OHM2_SAMPLE = 912330964,
	VOX_AHA_OHM3_SAMPLE = 1097211970,
	VOX_AHA_OHM4_SAMPLE = -553470495,
	VOX_APOLOGIZEK10_SAMPLE = 1285752087,
	VOX_APOLOGIZEK6_SAMPLE = 1528540308,
	VOX_APOLOGIZEK8_SAMPLE = -1130135149,
	VOX_ARRIBAF1_SAMPLE = 409709152,
	VOX_ARRIBAF2_SAMPLE = -2124219430,
	VOX_ARRIBAF3_SAMPLE = -161100980,
	VOX_ARRIBAF9_SAMPLE = 380641874,
	VOX_ARRIBAM1_SAMPLE = -73436245,
	VOX_ARRIBAM2_SAMPLE = 1654006289,
	VOX_ATTACKEEK2_SAMPLE = -1891207545,
	VOX_ATTACKEEK3_SAMPLE = -129939951,
	VOX_ATTACKERK1_SAMPLE = 254186184,
	VOX_ATTACKERK3_SAMPLE = -517409820,
	VOX_ATTACKF1_SAMPLE = 683267381,
	VOX_ATTACKF5_SAMPLE = 802427180,
	VOX_ATTACKF7_SAMPLE = -1042649088,
	VOX_ATTACKM1_SAMPLE = -884142850,
	VOX_ATTACKM6_SAMPLE = 1428789597,
	VOX_ATTACKM7_SAMPLE = 573483467,
	VOX_ATTACKM8_SAMPLE = -1299073958,
	VOX_ATTACK_BUTTPLANTF1_SAMPLE = -1997877412,
	VOX_ATTACK_BUTTPLANTM1_SAMPLE = 1797133975,
	VOX_BABYSINGF1_SAMPLE = -302576164,
	VOX_BABYSINGF2_SAMPLE = 1962826854,
	VOX_BABYSINGF3_SAMPLE = 66678000,
	VOX_BABYSINGF4_SAMPLE = -1650591405,
	VOX_BABYSINGF5_SAMPLE = -358954555,
	VOX_BABYSINGF6_SAMPLE = 1939052671,
	VOX_BABYSINGK4_SAMPLE = 674465566,
	VOX_BABYSINGM1_SAMPLE = 235131927,
	VOX_BABYSINGM2_SAMPLE = -1760918099,
	VOX_BABYTALKF1_SAMPLE = 1670465354,
	VOX_BABYTALKF2_SAMPLE = -90695952,
	VOX_BABYTALKF3_SAMPLE = -1918949786,
	VOX_BABYTALKK12_SAMPLE = -2073619305,
	VOX_BABYTALKK13_SAMPLE = -211803135,
	VOX_BABYTALKK4_SAMPLE = -1504326264,
	VOX_BABYTALKM1_SAMPLE = -2140823935,
	VOX_BABYTALKM3_SAMPLE = 1852571565,
	VOX_BABYTALKM8_SAMPLE = -105306587,
	VOX_BABY_COO1_SAMPLE = -304904878,
	VOX_BABY_COO2_SAMPLE = 1960498408,
	VOX_BABY_COO3_SAMPLE = 64873598,
	VOX_BABY_COO7_SAMPLE = 78651495,
	VOX_BABY_COO9_SAMPLE = -486011552,
	VOX_BABY_CRY_SCREAM_SAMPLE = 1134058400,
	VOX_BABY_CRY_SCREAM2_SAMPLE = -868186690,
	VOX_BABY_CRY_SMALL1_SAMPLE = 1573414245,
	VOX_BABY_CRY_SMALL2_SAMPLE = -993970977,
	VOX_BABY_CRY_SMALL3_SAMPLE = -1278868407,
	VOX_BABY_CRY_SMALL5_SAMPLE = 1520804220,
	VOX_BABY_CRY_WINDUP1_SAMPLE = -109926105,
	VOX_BABY_CRY_WINDUP2_SAMPLE = 1618737309,
	VOX_BABY_CRY_WINDUP3_SAMPLE = 394053643,
	VOX_BABY_CRY_WINDUP5_SAMPLE = -31494850,
	VOX_BABY_CRY_WINDUP6_SAMPLE = 1729510532,
	VOX_BABY_GIGGLE1_SAMPLE = 808808464,
	VOX_BABY_GIGGLE2_SAMPLE = -1455677014,
	VOX_BABY_GIGGLE3_SAMPLE = -566554308,
	VOX_BABY_GIGGLE5_SAMPLE = 928560137,
	VOX_BABY_GIGGLE7_SAMPLE = -648620763,
	VOX_BARKF1_SAMPLE = -926894931,
	VOX_BARKF10_SAMPLE = 1551155392,
	VOX_BARKF18_SAMPLE = 1387219186,
	VOX_BARKF2_SAMPLE = 1372185879,
	VOX_BARKK2_SAMPLE = -462972070,
	VOX_BARKM1_SAMPLE = 724856166,
	VOX_BARKM2_SAMPLE = -1304609572,
	VOX_BARK_WOLFM1_SAMPLE = 161309622,
	VOX_BAR_DRINK_GULPF1_SAMPLE = 66823246,
	VOX_BAR_DRINK_GULPF2_SAMPLE = -1695353356,
	VOX_BAR_DRINK_GULPK1_SAMPLE = -1235887613,
	VOX_BAR_DRINK_GULPM1_SAMPLE = -535855739,
	VOX_BBALLF10_SAMPLE = 1316057113,
	VOX_BBALLF9_SAMPLE = 1950528966,
	VOX_BBALLK2_SAMPLE = 1446908419,
	VOX_BKRUBBEE_ACCEPTF2_SAMPLE = 941628727,
	VOX_BKRUBBEE_ACCEPTF3_SAMPLE = 1327967649,
	VOX_BKRUBBEE_ACCEPTF6_SAMPLE = 1062066478,
	VOX_BKRUBBEE_ACCEPTM1_SAMPLE = 1121817926,
	VOX_BKRUBBEE_ACCEPTM3_SAMPLE = -1395395478,
	VOX_BKRUBBEE_ACCEPTM6_SAMPLE = -591855387,
	VOX_BKRUBBEE_ACCEPTM8_SAMPLE = 989933026,
	VOX_BKRUBBEE_REJECTF1_SAMPLE = 1433331398,
	VOX_BKRUBBEE_REJECTF3_SAMPLE = -1151301654,
	VOX_BKRUBBEE_REJECTF5_SAMPLE = 1375937247,
	VOX_BKRUBBEE_REJECTF6_SAMPLE = -888507547,
	VOX_BKRUBBEE_REJECTM2_SAMPLE = 798191287,
	VOX_BKRUBBEE_REJECTM3_SAMPLE = 1486118433,
	VOX_BKRUBBEE_REJECTM4_SAMPLE = -957297790,
	VOX_BKRUBBERF1_SAMPLE = -1317741912,
	VOX_BKRUBBERF11_SAMPLE = 1533063351,
	VOX_BKRUBBERF3_SAMPLE = 1601878916,
	VOX_BKRUBBERF6_SAMPLE = 789597963,
	VOX_BKRUBBERF9_SAMPLE = -1079029094,
	VOX_BKRUBBERM4_SAMPLE = 585824236,
	VOX_BKRUBBERM5_SAMPLE = 1441646458,
	VOX_BKRUBBERM7_SAMPLE = -1142708650,
	VOX_BKRUBBERR1_SAMPLE = -1613099523,
	VOX_BKRUBBERR2_SAMPLE = 114515015,
	VOX_BKRUBBERR3_SAMPLE = 1909746897,
	VOX_BKRUBBER_MONKEY20_SAMPLE = -1531855870,
	VOX_BKRUBBER_MONKEY9_SAMPLE = -121583880,
	VOX_BLADDER_FULLF1_SAMPLE = -85545522,
	VOX_BLADDER_FULLF2_SAMPLE = 1676672116,
	VOX_BLADDER_FULLM1_SAMPLE = 420639749,
	VOX_BLOWOUT_CANDLESF1_SAMPLE = 1010090101,
	VOX_BLOWOUT_CANDLESF2_SAMPLE = -1522691633,
	VOX_BLOWOUT_CANDLESF3_SAMPLE = -767909543,
	VOX_BLOWOUT_CANDLESM1_SAMPLE = -541058626,
	VOX_BLOWOUT_CANDLESM2_SAMPLE = 1187596292,
	VOX_BLOWOUT_CANDLESM3_SAMPLE = 835614866,
	VOX_BORED_SIGHF1_SAMPLE = 1268838604,
	VOX_BORED_SIGHF2_SAMPLE = -760635018,
	VOX_BORED_SIGHF3_SAMPLE = -1515286048,
	VOX_BORED_SIGHF4_SAMPLE = 1003095107,
	VOX_BORED_SIGHF5_SAMPLE = 1288516821,
	VOX_BORED_SIGHK1_SAMPLE = -32600447,
	VOX_BORED_SIGHK3_SAMPLE = 268496813,
	VOX_BORED_SIGHK4_SAMPLE = -1906017778,
	VOX_BORED_SIGHK5_SAMPLE = -110933352,
	VOX_BORED_SIGHK9_SAMPLE = -254474573,
	VOX_BORED_SIGHM1_SAMPLE = -1470879481,
	VOX_BORED_SIGHM2_SAMPLE = 828209341,
	VOX_BRAGGEE_ADMIREF3_SAMPLE = 1196434814,
	VOX_BRAGGEE_ADMIREF4_SAMPLE = -650858275,
	VOX_BRAGGEE_ADMIREK2_SAMPLE = -2047251547,
	VOX_BRAGGEE_ADMIREK4_SAMPLE = 1822084752,
	VOX_BRAGGEE_ADMIREK7_SAMPLE = -174874838,
	VOX_BRAGGEE_ADMIREM1_SAMPLE = 1252695449,
	VOX_BRAGGEE_ADMIREM6_SAMPLE = -724694982,
	VOX_BRAGGEE_DISMISSF1_SAMPLE = 1663259722,
	VOX_BRAGGEE_DISMISSF2_SAMPLE = -97909264,
	VOX_BRAGGEE_DISMISSK1_SAMPLE = -695391737,
	VOX_BRAGGEE_DISMISSK2_SAMPLE = 1334082493,
	VOX_BRAGGEE_DISMISSK6_SAMPLE = 1223278500,
	VOX_BRAGGEE_DISMISSM2_SAMPLE = 434035771,
	VOX_BRAGGEE_DISMISSM4_SAMPLE = -256018162,
	VOX_BRAGGERF2_SAMPLE = 1042125731,
	VOX_BRAGGERF5_SAMPLE = -1602681344,
	VOX_BRAGGERF7_SAMPLE = 1316448044,
	VOX_BRAGGERK1_SAMPLE = 314227796,
	VOX_BRAGGERK3_SAMPLE = -55255688,
	VOX_BRAGGERM13_SAMPLE = 88857976,
	VOX_BRAGGERM2_SAMPLE = -571913624,
	VOX_BRAGGERM3_SAMPLE = -1427211522,
	VOX_BRAGGERM4_SAMPLE = 881520477,
	VOX_BRAGGERM7_SAMPLE = -1383874841,
	VOX_BULL_WATCH_BOOF1_SAMPLE = 116631811,
	VOX_BULL_WATCH_BOOF2_SAMPLE = -1610942279,
	VOX_BULL_WATCH_BOOF3_SAMPLE = -386021329,
	VOX_BULL_WATCH_BOOF4_SAMPLE = 1989762444,
	VOX_BULL_WATCH_BOOK10_SAMPLE = 1695346273,
	VOX_BULL_WATCH_BOOK17_SAMPLE = -77038654,
	VOX_BULL_WATCH_BOOK18_SAMPLE = 1809278547,
	VOX_BULL_WATCH_BOOK3_SAMPLE = 1565767266,
	VOX_BULL_WATCH_BOOK5_SAMPLE = -1271917737,
	VOX_BULL_WATCH_BOOK8_SAMPLE = -897486870,
	VOX_BULL_WATCH_BOOM1_SAMPLE = -452497208,
	VOX_BULL_WATCH_BOOM2_SAMPLE = 2081300850,
	VOX_BULL_WATCH_BOOM3_SAMPLE = 185143780,
	VOX_BULL_WATCH_BOOM4_SAMPLE = -1787984825,
	VOX_BULL_WATCH_CONSIDERF3_SAMPLE = -692796443,
	VOX_BULL_WATCH_CONSIDERF5_SAMPLE = 1071081168,
	VOX_BULL_WATCH_CONSIDERF6_SAMPLE = -1495386262,
	VOX_BULL_WATCH_CONSIDERF7_SAMPLE = -774305796,
	VOX_BULL_WATCH_CONSIDERK1_SAMPLE = -1928012668,
	VOX_BULL_WATCH_CONSIDERK2_SAMPLE = 337481022,
	VOX_BULL_WATCH_CONSIDERK3_SAMPLE = 1662696872,
	VOX_BULL_WATCH_CONSIDERK4_SAMPLE = -42063861,
	VOX_BULL_WATCH_CONSIDERM4_SAMPLE = -1423667315,
	VOX_BULL_WATCH_CONSIDERM5_SAMPLE = -601637093,
	VOX_BULL_WATCH_CONSIDERM6_SAMPLE = 1160441505,
	VOX_BULL_WATCH_CONSIDERM7_SAMPLE = 841866807,
	VOX_BULL_WATCH_CONSIDERM8_SAMPLE = -1567439962,
	VOX_BULL_WATCH_DISF3_SAMPLE = 1474967623,
	VOX_BULL_WATCH_DISF4_SAMPLE = -913396252,
	VOX_BULL_WATCH_DISF5_SAMPLE = -1098277518,
	VOX_BULL_WATCH_DISF6_SAMPLE = 662752456,
	VOX_BULL_WATCH_DISF7_SAMPLE = 1351089246,
	VOX_BULL_WATCH_DISK2_SAMPLE = -1790740836,
	VOX_BULL_WATCH_DISK3_SAMPLE = -498842102,
	VOX_BULL_WATCH_DISK4_SAMPLE = 2082526121,
	VOX_BULL_WATCH_DISK5_SAMPLE = 187163455,
	VOX_BULL_WATCH_DISM2_SAMPLE = -1021718246,
	VOX_BULL_WATCH_DISM3_SAMPLE = -1273044596,
	VOX_BULL_WATCH_DISM4_SAMPLE = 712668207,
	VOX_BULL_WATCH_DISM5_SAMPLE = 1568490681,
	VOX_BULL_WATCH_DISM6_SAMPLE = -999025405,
	VOX_BULL_WATCH_ENTHRALF5_SAMPLE = -1332170876,
	VOX_BULL_WATCH_ENTHRALF6_SAMPLE = 697433662,
	VOX_BULL_WATCH_ENTHRALF7_SAMPLE = 1586941608,
	VOX_BULL_WATCH_ENTHRALF8_SAMPLE = -836119751,
	VOX_BULL_WATCH_ENTHRALF9_SAMPLE = -1188109393,
	VOX_BULL_WATCH_ENTHRALK1_SAMPLE = 39523792,
	VOX_BULL_WATCH_ENTHRALK2_SAMPLE = -1689107350,
	VOX_BULL_WATCH_ENTHRALK3_SAMPLE = -329943812,
	VOX_BULL_WATCH_ENTHRALK4_SAMPLE = 1915871583,
	VOX_BULL_WATCH_ENTHRALK9_SAMPLE = 209755618,
	VOX_BULL_WATCH_ENTHRALM1_SAMPLE = 1409397334,
	VOX_BULL_WATCH_ENTHRALM2_SAMPLE = -855055380,
	VOX_BULL_WATCH_ENTHRALM3_SAMPLE = -1173367942,
	VOX_BULL_WATCH_ENTHRALM4_SAMPLE = 611010265,
	VOX_BULL_WATCH_ENTHRALM5_SAMPLE = 1399617103,
	VOX_BULL_WATCH_SHRUGF1_SAMPLE = 1678748760,
	VOX_BULL_WATCH_SHRUGF2_SAMPLE = -49873438,
	VOX_BULL_WATCH_SHRUGF3_SAMPLE = -1979593356,
	VOX_BULL_WATCH_SHRUGK1_SAMPLE = -777924075,
	VOX_BULL_WATCH_SHRUGK2_SAMPLE = 1219003311,
	VOX_BULL_WATCH_SHRUGK3_SAMPLE = 1068479289,
	VOX_BULL_WATCH_SHRUGK5_SAMPLE = -691268084,
	VOX_BULL_WATCH_SHRUGK6_SAMPLE = 1338329014,
	VOX_BULL_WATCH_SHRUGM1_SAMPLE = -2013563501,
	VOX_BULL_WATCH_SHRUGM2_SAMPLE = 519185449,
	VOX_BULL_WATCH_SHRUGM3_SAMPLE = 1777669311,
	VOX_BULL_WATCH_SHRUGM4_SAMPLE = -141459172,
	VOX_BURPF1_SAMPLE = 1305725310,
	VOX_BURPF2_SAMPLE = -723871548,
	VOX_BURPK1_SAMPLE = -125978829,
	VOX_BURPM1_SAMPLE = -1373171531,
	VOX_BURPM2_SAMPLE = 925778191,
	VOX_BURPM3_SAMPLE = 1076457881,
	VOX_BURPM4_SAMPLE = -565320646,
	VOX_CALLHEREE_ACCEPTF3_SAMPLE = -1741041025,
	VOX_CALLHEREE_ACCEPTF6_SAMPLE = -397203728,
	VOX_CALLHEREE_ACCEPTF7_SAMPLE = -1621879194,
	VOX_CALLHEREE_ACCEPTK13_SAMPLE = -1759630795,
	VOX_CALLHEREE_ACCEPTK14_SAMPLE = 159039382,
	VOX_CALLHEREE_ACCEPTK5_SAMPLE = -990639865,
	VOX_CALLHEREE_ACCEPTK6_SAMPLE = 1576884413,
	VOX_CALLHEREE_ACCEPTM1_SAMPLE = -1782355304,
	VOX_CALLHEREE_ACCEPTM7_SAMPLE = 2090913709,
	VOX_CALLHEREE_ACCEPTM8_SAMPLE = -333458884,
	VOX_CALLHERERF1_SAMPLE = 1460724610,
	VOX_CALLHERERF4_SAMPLE = 662312717,
	VOX_CALLHERERF8_SAMPLE = 785144614,
	VOX_CALLHERERK4_SAMPLE = -1831573184,
	VOX_CALLHERERK7_SAMPLE = 199047418,
	VOX_CALLHERERM4_SAMPLE = -997273914,
	VOX_CALLHERERM6_SAMPLE = 713076714,
	VOX_CALLHERERM8_SAMPLE = -851934483,
	VOX_CAMP_SIT_BOO_KAK4_SAMPLE = -1407645325,
	VOX_CAMP_SIT_BOO_KAK6_SAMPLE = 1108830303,
	VOX_CAMP_SIT_BOO_KAK8_SAMPLE = -1515240104,
	VOX_CAMP_SIT_BOO_KBK10_SAMPLE = 1387904261,
	VOX_CAMP_SIT_BOO_KBK13_SAMPLE = -877597505,
	VOX_CAMP_SIT_BOO_KBK7_SAMPLE = 928442000,
	VOX_CAMP_SIT_LAUGHK_AK10_SAMPLE = 65661138,
	VOX_CAMP_SIT_LAUGHK_AK11_SAMPLE = 1961809988,
	VOX_CAMP_SIT_LAUGHK_AK15_SAMPLE = 1937972317,
	VOX_CAMP_SIT_LAUGHK_AK16_SAMPLE = -360034841,
	VOX_CAMP_SIT_LAUGHK_AK17_SAMPLE = -1651671695,
	VOX_CAMP_SIT_LAUGHK_AK2_SAMPLE = -915800274,
	VOX_CAMP_SIT_LAUGHK_AK4_SAMPLE = 537549339,
	VOX_CAMP_SIT_LAUGHK_AK5_SAMPLE = 1460497037,
	VOX_CAMP_SIT_LAUGHK_AK7_SAMPLE = -1190982751,
	VOX_CAMP_SIT_LAUGHK_AK8_SAMPLE = 700192304,
	VOX_CAMP_SIT_LAUGHK_AK9_SAMPLE = 1589323430,
	VOX_CAMP_SIT_LAUGHK_BK2_SAMPLE = -886095497,
	VOX_CAMP_SIT_LAUGHK_BK4_SAMPLE = 575464514,
	VOX_CAMP_SIT_LAUGHK_BK5_SAMPLE = 1431033044,
	VOX_CAMP_SIT_LAUGHK_BK6_SAMPLE = -868055698,
	VOX_CAMP_TELL_BITESHAKEF1_SAMPLE = -1091985152,
	VOX_CAMP_TELL_BITESHAKEF2_SAMPLE = 669053114,
	VOX_CAMP_TELL_BITESHAKEF3_SAMPLE = 1357365292,
	VOX_CAMP_TELL_BITESHAKEF4_SAMPLE = -830253681,
	VOX_CAMP_TELL_BITESHAKEM1_SAMPLE = 1562212555,
	VOX_CAMP_TELL_BITESHAKEM2_SAMPLE = -1005311631,
	VOX_CAMP_TELL_BITESHAKEM3_SAMPLE = -1290593817,
	VOX_CAMP_TELL_BITESHAKEM4_SAMPLE = 762809412,
	VOX_CAMP_TELL_BITESHAKEM5_SAMPLE = 1517337810,
	VOX_CAMP_TELL_BITESHAKE_DF1_SAMPLE = 1759405439,
	VOX_CAMP_TELL_BITESHAKE_DF2_SAMPLE = -237554491,
	VOX_CAMP_TELL_BITESHAKE_DF3_SAMPLE = -2033187757,
	VOX_CAMP_TELL_BITESHAKE_DF4_SAMPLE = 414487024,
	VOX_CAMP_TELL_BITESHAKE_DF5_SAMPLE = 1874043238,
	VOX_CAMP_TELL_BITESHAKE_DM1_SAMPLE = -1960133452,
	VOX_CAMP_TELL_BITESHAKE_DM2_SAMPLE = 304344334,
	VOX_CAMP_TELL_BITESHAKE_DM3_SAMPLE = 1696914840,
	VOX_CAMP_TELL_BITESHAKE_DM4_SAMPLE = -79673285,
	VOX_CAMP_TELL_BITESHAKE_DM5_SAMPLE = -1941473107,
	VOX_CAMP_TELL_BOOF11_SAMPLE = 17345373,
	VOX_CAMP_TELL_BOOF12_SAMPLE = -1744700697,
	VOX_CAMP_TELL_BOOF13_SAMPLE = -284767631,
	VOX_CAMP_TELL_BOOF17_SAMPLE = -395637144,
	VOX_CAMP_TELL_BOOF18_SAMPLE = 2027164665,
	VOX_CAMP_TELL_BOOM3_SAMPLE = -783641679,
	VOX_CAMP_TELL_BOOM4_SAMPLE = 1328416274,
	VOX_CAMP_TELL_BOOM5_SAMPLE = 942225028,
	VOX_CAMP_TELL_BOOM6_SAMPLE = -1591711938,
	VOX_CAMP_TELL_BOOM9_SAMPLE = 832535215,
	VOX_CAMP_TELL_BOO_DF10_SAMPLE = -1880906216,
	VOX_CAMP_TELL_BOO_DF4_SAMPLE = -113745083,
	VOX_CAMP_TELL_BOO_DF7_SAMPLE = 1613837055,
	VOX_CAMP_TELL_BOO_DF8_SAMPLE = -259117202,
	VOX_CAMP_TELL_BOO_DF9_SAMPLE = -2021056520,
	VOX_CAMP_TELL_BOO_DM2_SAMPLE = -206626885,
	VOX_CAMP_TELL_BOO_DM5_SAMPLE = 1842055704,
	VOX_CAMP_TELL_BOO_DM6_SAMPLE = -188556382,
	VOX_CAMP_TELL_BOO_DM7_SAMPLE = -2084181196,
	VOX_CAMP_TELL_BOO_DM8_SAMPLE = 326825637,
	VOX_CAMP_TELL_CHOKEDF1_SAMPLE = -1076902426,
	VOX_CAMP_TELL_CHOKEDF2_SAMPLE = 650548316,
	VOX_CAMP_TELL_CHOKEDF3_SAMPLE = 1371645130,
	VOX_CAMP_TELL_CHOKEDF4_SAMPLE = -811257495,
	VOX_CAMP_TELL_CHOKEDM1_SAMPLE = 1547377709,
	VOX_CAMP_TELL_CHOKEDM2_SAMPLE = -986559081,
	VOX_CAMP_TELL_CHOKEDM3_SAMPLE = -1305117439,
	VOX_CAMP_TELL_CHOKEDM4_SAMPLE = 743565474,
	VOX_CAMP_TELL_CHOKED_DF2_SAMPLE = -1288911672,
	VOX_CAMP_TELL_CHOKED_DF3_SAMPLE = -1003752354,
	VOX_CAMP_TELL_CHOKED_DF4_SAMPLE = 1515151869,
	VOX_CAMP_TELL_CHOKED_DM1_SAMPLE = -909030215,
	VOX_CAMP_TELL_CHOKED_DM2_SAMPLE = 1356340483,
	VOX_CAMP_TELL_CHOKED_DM3_SAMPLE = 668937621,
	VOX_CAMP_TELL_CHOKED_DM4_SAMPLE = -1178879946,
	VOX_CAMP_TELL_CHOKED_DM5_SAMPLE = -826505056,
	VOX_CAMP_TELL_CHOKEF1_SAMPLE = -325515719,
	VOX_CAMP_TELL_CHOKEF2_SAMPLE = 1972393859,
	VOX_CAMP_TELL_CHOKEF3_SAMPLE = 43476757,
	VOX_CAMP_TELL_CHOKEF4_SAMPLE = -1661734218,
	VOX_CAMP_TELL_CHOKEM2_SAMPLE = -1771794872,
	VOX_CAMP_TELL_CHOKEM3_SAMPLE = -513556770,
	VOX_CAMP_TELL_CHOKEM4_SAMPLE = 2131176317,
	VOX_CAMP_TELL_CHOKEM5_SAMPLE = 134224875,
	VOX_CAMP_TELL_CHOKEM6_SAMPLE = -1861662127,
	VOX_CAMP_TELL_CHOKE_DF1_SAMPLE = 786992382,
	VOX_CAMP_TELL_CHOKE_DF2_SAMPLE = -1209934524,
	VOX_CAMP_TELL_CHOKE_DF3_SAMPLE = -1058607662,
	VOX_CAMP_TELL_CHOKE_DM1_SAMPLE = -853781195,
	VOX_CAMP_TELL_CHOKE_DM2_SAMPLE = 1410663567,
	VOX_CAMP_TELL_CHOKE_DM3_SAMPLE = 588395545,
	VOX_CAMP_TELL_CHOKE_DM4_SAMPLE = -1116298822,
	VOX_CAMP_TELL_CLOUDSF4_SAMPLE = 1173351945,
	VOX_CAMP_TELL_CLOUDSF5_SAMPLE = 854122143,
	VOX_CAMP_TELL_CLOUDSF6_SAMPLE = -1411281115,
	VOX_CAMP_TELL_CLOUDSF7_SAMPLE = -588857421,
	VOX_CAMP_TELL_CLOUDSF8_SAMPLE = 1280942626,
	VOX_CAMP_TELL_CLOUDSM3_SAMPLE = 947888737,
	VOX_CAMP_TELL_CLOUDSM4_SAMPLE = -1508165694,
	VOX_CAMP_TELL_CLOUDSM5_SAMPLE = -786692268,
	VOX_CAMP_TELL_CLOUDSM6_SAMPLE = 1209358062,
	VOX_CAMP_TELL_CLOUDSM7_SAMPLE = 1058170488,
	VOX_CAMP_TELL_DEATHF1_SAMPLE = 707936658,
	VOX_CAMP_TELL_DEATHF2_SAMPLE = -1287974872,
	VOX_CAMP_TELL_DEATHF3_SAMPLE = -1002692418,
	VOX_CAMP_TELL_DEATHF4_SAMPLE = 1515762973,
	VOX_CAMP_TELL_DEATHF5_SAMPLE = 761234827,
	VOX_CAMP_TELL_DEATHM1_SAMPLE = -909731751,
	VOX_CAMP_TELL_DEATHM2_SAMPLE = 1355794915,
	VOX_CAMP_TELL_DEATHM3_SAMPLE = 667482485,
	VOX_CAMP_TELL_DEATHM5_SAMPLE = -827630528,
	VOX_CAMP_TELL_DEATHM6_SAMPLE = 1470238202,
	VOX_CAMP_TELL_DEATH_DF3_SAMPLE = 1705876072,
	VOX_CAMP_TELL_DEATH_DF4_SAMPLE = -70709301,
	VOX_CAMP_TELL_DEATH_DF5_SAMPLE = -1932640419,
	VOX_CAMP_TELL_DEATH_DF6_SAMPLE = 365391591,
	VOX_CAMP_TELL_DEATH_DF7_SAMPLE = 1656774257,
	VOX_CAMP_TELL_DEATH_DM2_SAMPLE = -245468363,
	VOX_CAMP_TELL_DEATH_DM4_SAMPLE = 406705664,
	VOX_CAMP_TELL_DEATH_DM5_SAMPLE = 1866131094,
	VOX_CAMP_TELL_DEATH_DM6_SAMPLE = -164382932,
	VOX_CAMP_TELL_DEATH_DM7_SAMPLE = -2127263814,
	VOX_CAMP_TELL_DOORF2_SAMPLE = 889847143,
	VOX_CAMP_TELL_DOORF3_SAMPLE = 1108266481,
	VOX_CAMP_TELL_DOORF4_SAMPLE = -597010350,
	VOX_CAMP_TELL_DOORF5_SAMPLE = -1418893116,
	VOX_CAMP_TELL_DOORF6_SAMPLE = 845429118,
	VOX_CAMP_TELL_DOORM3_SAMPLE = -1577446342,
	VOX_CAMP_TELL_DOORM4_SAMPLE = 1067352473,
	VOX_CAMP_TELL_DOORM5_SAMPLE = 1218031887,
	VOX_CAMP_TELL_DOORM6_SAMPLE = -779034443,
	VOX_CAMP_TELL_DOORM7_SAMPLE = -1500000221,
	VOX_CAMP_TELL_EXPOF1_SAMPLE = -1458027776,
	VOX_CAMP_TELL_EXPOF10_SAMPLE = -193804446,
	VOX_CAMP_TELL_EXPOF11_SAMPLE = -2089420812,
	VOX_CAMP_TELL_EXPOF12_SAMPLE = 444376654,
	VOX_CAMP_TELL_EXPOF2_SAMPLE = 806425274,
	VOX_CAMP_TELL_EXPOF3_SAMPLE = 1192632876,
	VOX_CAMP_TELL_EXPOF4_SAMPLE = -646793329,
	VOX_CAMP_TELL_EXPOF5_SAMPLE = -1368029415,
	VOX_CAMP_TELL_EXPOF6_SAMPLE = 930928291,
	VOX_CAMP_TELL_EXPOF7_SAMPLE = 1081861685,
	VOX_CAMP_TELL_EXPOF8_SAMPLE = -792396892,
	VOX_CAMP_TELL_EXPOF9_SAMPLE = -1480340686,
	VOX_CAMP_TELL_EXPOM1_SAMPLE = 1257020107,
	VOX_CAMP_TELL_EXPOM10_SAMPLE = -131651453,
	VOX_CAMP_TELL_EXPOM2_SAMPLE = -739914895,
	VOX_CAMP_TELL_EXPOM3_SAMPLE = -1528628249,
	VOX_CAMP_TELL_EXPOM4_SAMPLE = 981888580,
	VOX_CAMP_TELL_EXPOM5_SAMPLE = 1300324050,
	VOX_CAMP_TELL_EXPOM6_SAMPLE = -729280664,
	VOX_CAMP_TELL_EXPOM7_SAMPLE = -1550893058,
	VOX_CAMP_TELL_EXPOM8_SAMPLE = 858792559,
	VOX_CAMP_TELL_EXPOM9_SAMPLE = 1144460025,
	VOX_CAMP_TELL_FEARF2_SAMPLE = -760335362,
	VOX_CAMP_TELL_FEARF3_SAMPLE = -1515650200,
	VOX_CAMP_TELL_FEARF4_SAMPLE = 1003329227,
	VOX_CAMP_TELL_FEARF5_SAMPLE = 1288349277,
	VOX_CAMP_TELL_FEARF6_SAMPLE = -708577305,
	VOX_CAMP_TELL_FEARM2_SAMPLE = 828041781,
	VOX_CAMP_TELL_FEARM3_SAMPLE = 1180555939,
	VOX_CAMP_TELL_FEARM4_SAMPLE = -667332864,
	VOX_CAMP_TELL_FEARM5_SAMPLE = -1354858602,
	VOX_CAMP_TELL_FEARM6_SAMPLE = 909585964,
	VOX_CAMP_TELL_FEAR_DF2_SAMPLE = 1739577472,
	VOX_CAMP_TELL_FEAR_DF3_SAMPLE = 279504918,
	VOX_CAMP_TELL_FEAR_DF4_SAMPLE = -1899201099,
	VOX_CAMP_TELL_FEAR_DF5_SAMPLE = -104116957,
	VOX_CAMP_TELL_FEAR_DF6_SAMPLE = 1623334041,
	VOX_CAMP_TELL_FEAR_DM2_SAMPLE = -2074410677,
	VOX_CAMP_TELL_FEAR_DM3_SAMPLE = -212061731,
	VOX_CAMP_TELL_FEAR_DM4_SAMPLE = 1832428670,
	VOX_CAMP_TELL_FEAR_DM5_SAMPLE = 440374504,
	VOX_CAMP_TELL_FEAR_DM6_SAMPLE = -2093562542,
	VOX_CAMP_TELL_FIREF1_SAMPLE = -711802175,
	VOX_CAMP_TELL_FIREF2_SAMPLE = 1285264251,
	VOX_CAMP_TELL_FIREF3_SAMPLE = 1000121325,
	VOX_CAMP_TELL_FIREF4_SAMPLE = -1510459826,
	VOX_CAMP_TELL_FIREM5_SAMPLE = 822861587,
	VOX_CAMP_TELL_FIREM6_SAMPLE = -1476227415,
	VOX_CAMP_TELL_FIREM7_SAMPLE = -553271745,
	VOX_CAMP_TELL_FIREM8_SAMPLE = 1337631662,
	VOX_CAMP_TELL_FIREM9_SAMPLE = 951948088,
	VOX_CAMP_TELL_FIRE_DF1_SAMPLE = 1854200041,
	VOX_CAMP_TELL_FIRE_DF2_SAMPLE = -141719213,
	VOX_CAMP_TELL_FIRE_DF4_SAMPLE = 518925414,
	VOX_CAMP_TELL_FIRE_DF5_SAMPLE = 1776884976,
	VOX_CAMP_TELL_FIRE_DF6_SAMPLE = -253735606,
	VOX_CAMP_TELL_FIRE_DM1_SAMPLE = -1922039518,
	VOX_CAMP_TELL_FIRE_DM2_SAMPLE = 343494808,
	VOX_CAMP_TELL_FIRE_DM3_SAMPLE = 1669226510,
	VOX_CAMP_TELL_FIRE_DM4_SAMPLE = -48564819,
	VOX_CAMP_TELL_FIRE_DM5_SAMPLE = -1977760453,
	VOX_CAMP_TELL_FLYF1_SAMPLE = 590282170,
	VOX_CAMP_TELL_FLYF2_SAMPLE = -1171805184,
	VOX_CAMP_TELL_FLYF3_SAMPLE = -853500778,
	VOX_CAMP_TELL_FLYF4_SAMPLE = 1396967733,
	VOX_CAMP_TELL_FLYF5_SAMPLE = 608385443,
	VOX_CAMP_TELL_FLYM1_SAMPLE = -1059445647,
	VOX_CAMP_TELL_FLYM2_SAMPLE = 1507030475,
	VOX_CAMP_TELL_FLYM3_SAMPLE = 785663325,
	VOX_CAMP_TELL_FLYM4_SAMPLE = -1330589442,
	VOX_CAMP_TELL_FLY_DF1_SAMPLE = 338273109,
	VOX_CAMP_TELL_FLY_DF2_SAMPLE = -1927220497,
	VOX_CAMP_TELL_FLY_DF3_SAMPLE = -98057607,
	VOX_CAMP_TELL_FLY_DF4_SAMPLE = 1682135002,
	VOX_CAMP_TELL_FLY_DF5_SAMPLE = 323249996,
	VOX_CAMP_TELL_FLY_DM2_SAMPLE = 1859398436,
	VOX_CAMP_TELL_FLY_DM3_SAMPLE = 433265586,
	VOX_CAMP_TELL_FLY_DM4_SAMPLE = -2018013679,
	VOX_CAMP_TELL_FLY_DM5_SAMPLE = -256852345,
	VOX_CAMP_TELL_FLY_DM6_SAMPLE = 1773793085,
	VOX_CAMP_TELL_HOUSEF3_SAMPLE = -1570180348,
	VOX_CAMP_TELL_HOUSEF4_SAMPLE = 1007445671,
	VOX_CAMP_TELL_HOUSEF5_SAMPLE = 1259034161,
	VOX_CAMP_TELL_HOUSEF6_SAMPLE = -771618933,
	VOX_CAMP_TELL_HOUSEF7_SAMPLE = -1526384867,
	VOX_CAMP_TELL_HOUSEM10_SAMPLE = -847774040,
	VOX_CAMP_TELL_HOUSEM11_SAMPLE = -1167012290,
	VOX_CAMP_TELL_HOUSEM7_SAMPLE = 1190260438,
	VOX_CAMP_TELL_HOUSEM8_SAMPLE = -699468985,
	VOX_CAMP_TELL_HOUSEM9_SAMPLE = -1589001263,
	VOX_CAMP_TELL_LIGHTNINGF2_SAMPLE = 1812595415,
	VOX_CAMP_TELL_LIGHTNINGF3_SAMPLE = 453849665,
	VOX_CAMP_TELL_LIGHTNINGF4_SAMPLE = -2056673310,
	VOX_CAMP_TELL_LIGHTNINGF5_SAMPLE = -227633292,
	VOX_CAMP_TELL_LIGHTNINGF6_SAMPLE = 1801963214,
	VOX_CAMP_TELL_LIGHTNINGM2_SAMPLE = -1879123172,
	VOX_CAMP_TELL_LIGHTNINGM3_SAMPLE = -117838966,
	VOX_CAMP_TELL_LIGHTNINGM4_SAMPLE = 1721597481,
	VOX_CAMP_TELL_LIGHTNINGM5_SAMPLE = 295325375,
	VOX_CAMP_TELL_LIGHTNINGM6_SAMPLE = -2003624187,
	VOX_CAMP_TELL_LIGHTNING_DF2_SAMPLE = 1916271093,
	VOX_CAMP_TELL_LIGHTNING_DF3_SAMPLE = 87083363,
	VOX_CAMP_TELL_LIGHTNING_DF4_SAMPLE = -1688970048,
	VOX_CAMP_TELL_LIGHTNING_DF5_SAMPLE = -330077098,
	VOX_CAMP_TELL_LIGHTNING_DF6_SAMPLE = 1968848364,
	VOX_CAMP_TELL_LIGHTNING_DM3_SAMPLE = -423358296,
	VOX_CAMP_TELL_LIGHTNING_DM4_SAMPLE = 2023785739,
	VOX_CAMP_TELL_LIGHTNING_DM5_SAMPLE = 262649245,
	VOX_CAMP_TELL_LIGHTNING_DM6_SAMPLE = -1766923225,
	VOX_CAMP_TELL_LIGHTNING_DM7_SAMPLE = -508963663,
	VOX_CAMP_TELL_LISTENF1_SAMPLE = 1537973147,
	VOX_CAMP_TELL_LISTENF2_SAMPLE = -1029518815,
	VOX_CAMP_TELL_LISTENF3_SAMPLE = -1247413577,
	VOX_CAMP_TELL_LISTENF5_SAMPLE = 1556504450,
	VOX_CAMP_TELL_LISTENF6_SAMPLE = -976286152,
	VOX_CAMP_TELL_LISTENM2_SAMPLE = 559289322,
	VOX_CAMP_TELL_LISTENM3_SAMPLE = 1448158076,
	VOX_CAMP_TELL_LISTENM4_SAMPLE = -936003873,
	VOX_CAMP_TELL_LISTENM5_SAMPLE = -1087207863,
	VOX_CAMP_TELL_LISTENM6_SAMPLE = 641456115,
	VOX_CAMP_TELL_LOOKF1_SAMPLE = 1403303503,
	VOX_CAMP_TELL_LOOKF2_SAMPLE = -894572555,
	VOX_CAMP_TELL_LOOKF3_SAMPLE = -1112877213,
	VOX_CAMP_TELL_LOOKF4_SAMPLE = 600720064,
	VOX_CAMP_TELL_LOOKF5_SAMPLE = 1422488150,
	VOX_CAMP_TELL_LOOKM2_SAMPLE = 693714494,
	VOX_CAMP_TELL_LOOKM3_SAMPLE = 1583222440,
	VOX_CAMP_TELL_LOOKM4_SAMPLE = -1069901045,
	VOX_CAMP_TELL_LOOKM5_SAMPLE = -1220695139,
	VOX_CAMP_TELL_LOOKM6_SAMPLE = 775223847,
	VOX_CAMP_TELL_PEEKF1_SAMPLE = 45976682,
	VOX_CAMP_TELL_PEEKF2_SAMPLE = -1682645552,
	VOX_CAMP_TELL_PEEKF3_SAMPLE = -323752634,
	VOX_CAMP_TELL_PEEKF4_SAMPLE = 1926723813,
	VOX_CAMP_TELL_PEEKM1_SAMPLE = -515287647,
	VOX_CAMP_TELL_PEEKM2_SAMPLE = 2017461275,
	VOX_CAMP_TELL_PEEKM3_SAMPLE = 256324749,
	VOX_CAMP_TELL_PEEKM4_SAMPLE = -1859935954,
	VOX_CAMP_TELL_PEEKM5_SAMPLE = -433811016,
	VOX_CAMP_TELL_RAINF1_SAMPLE = -152504590,
	VOX_CAMP_TELL_RAINF2_SAMPLE = 1877059400,
	VOX_CAMP_TELL_RAINF3_SAMPLE = 417765342,
	VOX_CAMP_TELL_RAINF4_SAMPLE = -2038300035,
	VOX_CAMP_TELL_RAINF5_SAMPLE = -242928917,
	VOX_CAMP_TELL_RAINM1_SAMPLE = 354168633,
	VOX_CAMP_TELL_RAINM2_SAMPLE = -1944748413,
	VOX_CAMP_TELL_RAINM3_SAMPLE = -82686443,
	VOX_CAMP_TELL_RAINM4_SAMPLE = 1702288310,
	VOX_CAMP_TELL_RAINM5_SAMPLE = 309455648,
	VOX_CAMP_TELL_SNEAKF1_SAMPLE = 1921887269,
	VOX_CAMP_TELL_SNEAKF2_SAMPLE = -343605857,
	VOX_CAMP_TELL_SNEAKF3_SAMPLE = -1669083895,
	VOX_CAMP_TELL_SNEAKF4_SAMPLE = 48715946,
	VOX_CAMP_TELL_SNEAKF5_SAMPLE = 1977641020,
	VOX_CAMP_TELL_SNEAKM4_SAMPLE = -518815391,
	VOX_CAMP_TELL_SNEAKM5_SAMPLE = -1777028617,
	VOX_CAMP_TELL_SNEAKM6_SAMPLE = 253616205,
	VOX_CAMP_TELL_SNEAKM7_SAMPLE = 2015023323,
	VOX_CAMP_TELL_SNEAKM8_SAMPLE = -391787190,
	VOX_CAMP_TELL_SNEAK_DF1_SAMPLE = -23329471,
	VOX_CAMP_TELL_SNEAK_DF2_SAMPLE = 1737839867,
	VOX_CAMP_TELL_SNEAK_DF3_SAMPLE = 278029421,
	VOX_CAMP_TELL_SNEAK_DF4_SAMPLE = -1896418866,
	VOX_CAMP_TELL_SNEAK_DF6_SAMPLE = 1626902754,
	VOX_CAMP_TELL_SNEAK_DM4_SAMPLE = 1828857861,
	VOX_CAMP_TELL_SNEAK_DM5_SAMPLE = 436541587,
	VOX_CAMP_TELL_SNEAK_DM6_SAMPLE = -2096346839,
	VOX_CAMP_TELL_SNEAK_DM7_SAMPLE = -200574529,
	VOX_CAMP_TELL_SNEAK_DM8_SAMPLE = 1689543726,
	VOX_CAMP_TELL_STABF10_SAMPLE = 676644866,
	VOX_CAMP_TELL_STABF11_SAMPLE = 1599338644,
	VOX_CAMP_TELL_STABF6_SAMPLE = -948012659,
	VOX_CAMP_TELL_STABF8_SAMPLE = 549868682,
	VOX_CAMP_TELL_STABF9_SAMPLE = 1472291868,
	VOX_CAMP_TELL_STABM10_SAMPLE = 604055523,
	VOX_CAMP_TELL_STABM11_SAMPLE = 1392908149,
	VOX_CAMP_TELL_STABM12_SAMPLE = -904968497,
	VOX_CAMP_TELL_STABM8_SAMPLE = -1020097215,
	VOX_CAMP_TELL_STABM9_SAMPLE = -1271546409,
	VOX_CAMP_TELL_STAB_DF1_SAMPLE = 1807005325,
	VOX_CAMP_TELL_STAB_DF2_SAMPLE = -222435529,
	VOX_CAMP_TELL_STAB_DF3_SAMPLE = -2051352671,
	VOX_CAMP_TELL_STAB_DM1_SAMPLE = -2009043130,
	VOX_CAMP_TELL_STAB_DM2_SAMPLE = 290012924,
	VOX_CAMP_TELL_STAB_DM3_SAMPLE = 1716391530,
	VOX_CAMP_TELL_STAB_DM4_SAMPLE = -131425335,
	VOX_CAMP_TELL_WALKF3_SAMPLE = 2034119860,
	VOX_CAMP_TELL_WALKF4_SAMPLE = -413490921,
	VOX_CAMP_TELL_WALKF5_SAMPLE = -1872916095,
	VOX_CAMP_TELL_WALKF6_SAMPLE = 156549179,
	VOX_CAMP_TELL_WALKF7_SAMPLE = 2119430317,
	VOX_CAMP_TELL_WALKM15_SAMPLE = 1990717292,
	VOX_CAMP_TELL_WALKM16_SAMPLE = -273760554,
	VOX_CAMP_TELL_WALKM17_SAMPLE = -1733718464,
	VOX_CAMP_TELL_WALKM18_SAMPLE = 135697361,
	VOX_CAMP_TELL_WALKM20_SAMPLE = 769673248,
	VOX_CAMP_TELL_WALLFALLF1_SAMPLE = -517967935,
	VOX_CAMP_TELL_WALLFALLF2_SAMPLE = 2015968891,
	VOX_CAMP_TELL_WALLFALLF4_SAMPLE = -1857381554,
	VOX_CAMP_TELL_WALLFALLM1_SAMPLE = 47494666,
	VOX_CAMP_TELL_WALLFALLM2_SAMPLE = -1679956048,
	VOX_CAMP_TELL_WALLFALLM3_SAMPLE = -321202394,
	VOX_CAMP_TELL_WALLFALLM4_SAMPLE = 1925071493,
	VOX_CAMP_TELL_WALLFALLM5_SAMPLE = 96039443,
	VOX_CHAR_ACTOR_NOF1_SAMPLE = -1273047073,
	VOX_CHAR_ACTOR_NOF2_SAMPLE = 756516453,
	VOX_CHAR_ACTOR_NOF3_SAMPLE = 1511044851,
	VOX_CHAR_ACTOR_NOF4_SAMPLE = -999021744,
	VOX_CHAR_ACTOR_NOK1_SAMPLE = 28354962,
	VOX_CHAR_ACTOR_NOK2_SAMPLE = -1732642776,
	VOX_CHAR_ACTOR_NOK3_SAMPLE = -272709442,
	VOX_CHAR_ACTOR_NOK4_SAMPLE = 1910136093,
	VOX_CHAR_ACTOR_NOK5_SAMPLE = 115174795,
	VOX_CHAR_ACTOR_NOM1_SAMPLE = 1474956820,
	VOX_CHAR_ACTOR_NOM3_SAMPLE = -1176211656,
	VOX_CHAR_ACTOR_NOM4_SAMPLE = 662764187,
	VOX_CHAR_ACTOR_UHUHF1_SAMPLE = 1787712793,
	VOX_CHAR_ACTOR_UHUHF2_SAMPLE = -209255261,
	VOX_CHAR_ACTOR_UHUHF3_SAMPLE = -2071972811,
	VOX_CHAR_ACTOR_UHUHF4_SAMPLE = 451191190,
	VOX_CHAR_ACTOR_UHUHK1_SAMPLE = -551539884,
	VOX_CHAR_ACTOR_UHUHK2_SAMPLE = 1177123566,
	VOX_CHAR_ACTOR_UHUHK3_SAMPLE = 825117304,
	VOX_CHAR_ACTOR_UHUHK4_SAMPLE = -1354047525,
	VOX_CHAR_ACTOR_UHUHM1_SAMPLE = -1988457262,
	VOX_CHAR_ACTOR_UHUHM2_SAMPLE = 276028776,
	VOX_CHAR_ACTOR_UHUHM3_SAMPLE = 1735716350,
	VOX_CHAR_BOX_OPENF1_SAMPLE = 1656192491,
	VOX_CHAR_BOX_OPENF2_SAMPLE = -71422895,
	VOX_CHAR_BOX_OPENF4_SAMPLE = 316508516,
	VOX_CHAR_BOX_OPENF5_SAMPLE = 1708833266,
	VOX_CHAR_BOX_OPENM1_SAMPLE = -2126273504,
	VOX_CHAR_BOX_OPENM2_SAMPLE = 407565722,
	VOX_CHAR_BOX_OPENM3_SAMPLE = 1867367692,
	VOX_CHAR_BOX_OPENM4_SAMPLE = -248950609,
	VOX_CHAR_BOX_OPENM5_SAMPLE = -2043781063,
	VOX_CHAR_WATCH_GUESSF1_SAMPLE = -290171953,
	VOX_CHAR_WATCH_GUESSF5_SAMPLE = -371615786,
	VOX_CHAR_WATCH_GUESSF8_SAMPLE = -1754731669,
	VOX_CHAR_WATCH_GUESSF9_SAMPLE = -529540099,
	VOX_CHAR_WATCH_GUESSK1_SAMPLE = 1528442242,
	VOX_CHAR_WATCH_GUESSK4_SAMPLE = 728815885,
	VOX_CHAR_WATCH_GUESSK6_SAMPLE = -981551071,
	VOX_CHAR_WATCH_GUESSK7_SAMPLE = -1300657993,
	VOX_CHAR_WATCH_GUESSK8_SAMPLE = 583439654,
	VOX_CHAR_WATCH_GUESSK9_SAMPLE = 1438754224,
	VOX_CHAR_WATCH_GUESSM3_SAMPLE = -481367256,
	VOX_CHAR_WATCH_GUESSM5_SAMPLE = 170741277,
	VOX_CHAR_WATCH_GUESSM7_SAMPLE = -467456207,
	VOX_CHAR_WATCH_GUESS_DF10_SAMPLE = -1649798478,
	VOX_CHAR_WATCH_GUESS_DF11_SAMPLE = -357752284,
	VOX_CHAR_WATCH_GUESS_DF4_SAMPLE = 124098844,
	VOX_CHAR_WATCH_GUESS_DF6_SAMPLE = -378800080,
	VOX_CHAR_WATCH_GUESS_DF7_SAMPLE = -1637037914,
	VOX_CHAR_WATCH_GUESS_DK10_SAMPLE = -1787657759,
	VOX_CHAR_WATCH_GUESS_DK2_SAMPLE = 1537753700,
	VOX_CHAR_WATCH_GUESS_DK3_SAMPLE = 749695730,
	VOX_CHAR_WATCH_GUESS_DK5_SAMPLE = -976431161,
	VOX_CHAR_WATCH_GUESS_DM1_SAMPLE = -1795443624,
	VOX_CHAR_WATCH_GUESS_DM2_SAMPLE = 234022370,
	VOX_CHAR_WATCH_GUESS_DM6_SAMPLE = 178201083,
	VOX_CHAR_WATCH_GUESS_DM8_SAMPLE = -316207876,
	VOX_CHAR_WATCH_IKNOWF1_SAMPLE = -314492269,
	VOX_CHAR_WATCH_IKNOWF2_SAMPLE = 1950903081,
	VOX_CHAR_WATCH_IKNOWF4_SAMPLE = -1658073572,
	VOX_CHAR_WATCH_IKNOWF5_SAMPLE = -366150006,
	VOX_CHAR_WATCH_IKNOWM2_SAMPLE = -1749241118,
	VOX_CHAR_WATCH_IKNOWM3_SAMPLE = -524582284,
	VOX_CHAR_WATCH_PONDERF1_SAMPLE = -1961023240,
	VOX_CHAR_WATCH_PONDERF2_SAMPLE = 303331650,
	VOX_CHAR_WATCH_PONDERF4_SAMPLE = -76030857,
	VOX_CHAR_WATCH_PONDERF5_SAMPLE = -1938756383,
	VOX_CHAR_WATCH_PONDERF6_SAMPLE = 360299867,
	VOX_CHAR_WATCH_PONDERF7_SAMPLE = 1652461005,
	VOX_CHAR_WATCH_PONDERF8_SAMPLE = -222195620,
	VOX_CHAR_WATCH_PONDERK1_SAMPLE = 1051940533,
	VOX_CHAR_WATCH_PONDERK11_SAMPLE = 954801122,
	VOX_CHAR_WATCH_PONDERK12_SAMPLE = -1579136424,
	VOX_CHAR_WATCH_PONDERK6_SAMPLE = -1596472554,
	VOX_CHAR_WATCH_PONDERK8_SAMPLE = 1198517777,
	VOX_CHAR_WATCH_PONDERK9_SAMPLE = 812179079,
	VOX_CHAR_WATCH_PONDERM1_SAMPLE = 1760162099,
	VOX_CHAR_WATCH_PONDERM2_SAMPLE = -236937079,
	VOX_CHAR_WATCH_PONDERM3_SAMPLE = -2031644641,
	VOX_CHAR_WATCH_PONDERM4_SAMPLE = 411239868,
	VOX_CHAR_WATCH_RIGHTF1_SAMPLE = 1473361725,
	VOX_CHAR_WATCH_RIGHTF2_SAMPLE = -824646009,
	VOX_CHAR_WATCH_RIGHTF3_SAMPLE = -1176513007,
	VOX_CHAR_WATCH_RIGHTF4_SAMPLE = 666583986,
	VOX_CHAR_WATCH_RIGHTK1_SAMPLE = -494941840,
	VOX_CHAR_WATCH_RIGHTK2_SAMPLE = 2071369930,
	VOX_CHAR_WATCH_RIGHTK3_SAMPLE = 208775260,
	VOX_CHAR_WATCH_RIGHTK4_SAMPLE = -1844101633,
	VOX_CHAR_WATCH_RIGHTM1_SAMPLE = -1272615178,
	VOX_CHAR_WATCH_RIGHTM2_SAMPLE = 757874508,
	VOX_CHAR_WATCH_WRONGF1_SAMPLE = 1736664054,
	VOX_CHAR_WATCH_WRONGF2_SAMPLE = -24497588,
	VOX_CHAR_WATCH_WRONGF3_SAMPLE = -1987247398,
	VOX_CHAR_WATCH_WRONGF4_SAMPLE = 401184633,
	VOX_CHAR_WATCH_WRONGK1_SAMPLE = -768795205,
	VOX_CHAR_WATCH_WRONGK2_SAMPLE = 1260669953,
	VOX_CHAR_WATCH_WRONGK3_SAMPLE = 1008958615,
	VOX_CHAR_WATCH_WRONGK4_SAMPLE = -1572345548,
	VOX_CHAR_WATCH_WRONGM1_SAMPLE = -2072528323,
	VOX_CHAR_WATCH_WRONGM2_SAMPLE = 494857095,
	VOX_CHAR_WINNERF1_SAMPLE = -304241763,
	VOX_CHAR_WINNERF2_SAMPLE = 1960112679,
	VOX_CHAR_WINNERF3_SAMPLE = 64209585,
	VOX_CHAR_WINNERK10_SAMPLE = 1917877800,
	VOX_CHAR_WINNERK11_SAMPLE = 89607870,
	VOX_CHAR_WINNERK5_SAMPLE = 1595808201,
	VOX_CHAR_WINNERK8_SAMPLE = 565142900,
	VOX_CHAR_WINNERK9_SAMPLE = 1453872610,
	VOX_CHAR_WINNERM1_SAMPLE = 237599318,
	VOX_CHAR_WINNERM2_SAMPLE = -1759499284,
	VOX_CHAR_WINNERM3_SAMPLE = -534307974,
	VOX_CHAR_WINNERM4_SAMPLE = 2118356697,
	VOX_CHEEREE_CRYF1_SAMPLE = 1636197555,
	VOX_CHEEREE_CRYF2_SAMPLE = -124832503,
	VOX_CHEEREE_CRYK3_SAMPLE = 975600594,
	VOX_CHEEREE_CRYK7_SAMPLE = 1028374475,
	VOX_CHEEREE_CRYM1_SAMPLE = -2106409608,
	VOX_CHEEREE_CRYM2_SAMPLE = 461106370,
	VOX_CHEEREE_LAUGHF2_SAMPLE = -8631513,
	VOX_CHEEREE_LAUGHF4_SAMPLE = 371191314,
	VOX_CHEEREE_LAUGHF5_SAMPLE = 1629019780,
	VOX_CHEEREE_LAUGHF7_SAMPLE = -1894334552,
	VOX_CHEEREE_LAUGHK3_SAMPLE = 1037370876,
	VOX_CHEEREE_LAUGHK8_SAMPLE = -1442325388,
	VOX_CHEEREE_LAUGHM1_SAMPLE = -2055093418,
	VOX_CHEEREE_LAUGHM2_SAMPLE = 478712556,
	VOX_CHEEREE_SIGHF1_SAMPLE = 521522554,
	VOX_CHEEREE_SIGHF5_SAMPLE = 410519907,
	VOX_CHEEREE_SIGHF7_SAMPLE = -160012209,
	VOX_CHEEREE_SIGHK5_SAMPLE = -1378453714,
	VOX_CHEEREE_SIGHK6_SAMPLE = 887039636,
	VOX_CHEEREE_SIGHK8_SAMPLE = -748221549,
	VOX_CHEEREE_SIGHM1_SAMPLE = -52357967,
	VOX_CHEEREE_SIGHM2_SAMPLE = 1709720843,
	VOX_CHEERERF10_SAMPLE = 116739081,
	VOX_CHEERERF12_SAMPLE = -386192091,
	VOX_CHEERERF13_SAMPLE = -1610867277,
	VOX_CHEERERF3_SAMPLE = -1566767233,
	VOX_CHEERERF9_SAMPLE = 1112075873,
	VOX_CHEERERK4_SAMPLE = -1990726511,
	VOX_CHEERERK6_SAMPLE = 1733922237,
	VOX_CHEERERM1_SAMPLE = -1352155240,
	VOX_CHEERERM2_SAMPLE = 913239586,
	VOX_CHOKE_HEIMLICHF1_SAMPLE = 1951708164,
	VOX_CHOKE_HEIMLICHF2_SAMPLE = -312613442,
	VOX_CHOKE_HEIMLICHF3_SAMPLE = -1705323224,
	VOX_CHOKE_HEIMLICHK2_SAMPLE = 1492360179,
	VOX_CHOKE_HEIMLICHM1_SAMPLE = -1751093809,
	VOX_CHOKE_SHORTF1_SAMPLE = 1875897178,
	VOX_CHOKE_SHORTK1_SAMPLE = -631139049,
	VOX_CHOKE_SHORTM1_SAMPLE = -1942277487,
	VOX_CLEAR_THROATF1_SAMPLE = 817409209,
	VOX_CLEAR_THROATF2_SAMPLE = -1447953149,
	VOX_CLEAR_THROATK4_SAMPLE = -176413061,
	VOX_CLEAR_THROATM1_SAMPLE = -749963918,
	VOX_CLEAR_THROATM2_SAMPLE = 1246045384,
	VOX_CLEAR_THROATM3_SAMPLE = 1027740766,
	VOX_COMFORT_SIGHF1_SAMPLE = 1466486664,
	VOX_COMFORT_SIGHF10_SAMPLE = 401587452,
	VOX_COMFORT_SIGHF11_SAMPLE = 1625853034,
	VOX_COMFORT_SIGHF2_SAMPLE = -832463310,
	VOX_COMFORT_SIGHF3_SAMPLE = -1184452956,
	VOX_COMFORT_SIGHF4_SAMPLE = 654457607,
	VOX_COMFORT_SIGHF7_SAMPLE = -1106548035,
	VOX_COMFORT_SIGHF9_SAMPLE = 1504921530,
	VOX_COMFORT_SIGHK1_SAMPLE = -490294843,
	VOX_COMFORT_SIGHK10_SAMPLE = 523710383,
	VOX_COMFORT_SIGHK11_SAMPLE = 1747984185,
	VOX_COMFORT_SIGHK12_SAMPLE = -247902589,
	VOX_COMFORT_SIGHK13_SAMPLE = -2042724843,
	VOX_COMFORT_SIGHK15_SAMPLE = 1868421920,
	VOX_COMFORT_SIGHK2_SAMPLE = 2077220991,
	VOX_COMFORT_SIGHK5_SAMPLE = -441748004,
	VOX_COMFORT_SIGHK6_SAMPLE = 2091000934,
	VOX_COMFORT_SIGHK8_SAMPLE = -1692792479,
	VOX_COMFORT_SIGHK9_SAMPLE = -333628937,
	VOX_COMFORT_SIGHM1_SAMPLE = -1264839101,
	VOX_COMFORT_SIGHM2_SAMPLE = 764758009,
	VOX_COMFORT_SIGHM3_SAMPLE = 1519548271,
	VOX_COMFORT_SIGHM4_SAMPLE = -990453044,
	VOX_COMFORT_SIGHM5_SAMPLE = -1275997606,
	VOX_COMPLIMENTEE_APPRECIF10_SAMPLE = 1412863782,
	VOX_COMPLIMENTEE_APPRECIF3_SAMPLE = 161750732,
	VOX_COMPLIMENTEE_APPRECIF5_SAMPLE = -523781127,
	VOX_COMPLIMENTEE_APPRECIF8_SAMPLE = -1636382908,
	VOX_COMPLIMENTEE_APPRECIK1_SAMPLE = 1375994285,
	VOX_COMPLIMENTEE_APPRECIK2_SAMPLE = -888319977,
	VOX_COMPLIMENTEE_APPRECIK3_SAMPLE = -1140170623,
	VOX_COMPLIMENTEE_APPRECIK4_SAMPLE = 577697058,
	VOX_COMPLIMENTEE_APPRECIK5_SAMPLE = 1432995252,
	VOX_COMPLIMENTEE_APPRECIM2_SAMPLE = -1655179375,
	VOX_COMPLIMENTEE_APPRECIM4_SAMPLE = 1949586084,
	VOX_COMPLIMENTEE_APPRECIM7_SAMPLE = -314768610,
	VOX_COMPLIMENTEE_APPRECIM8_SAMPLE = 2105679503,
	VOX_COMPLIMENTEE_REJECTF1_SAMPLE = -543397202,
	VOX_COMPLIMENTEE_REJECTF4_SAMPLE = -1342792159,
	VOX_COMPLIMENTEE_REJECTK4_SAMPLE = 442032236,
	VOX_COMPLIMENTEE_REJECTK8_SAMPLE = 334408775,
	VOX_COMPLIMENTEE_REJECTM2_SAMPLE = -1520311585,
	VOX_COMPLIMENTEE_REJECTM3_SAMPLE = -765013431,
	VOX_COMPLIMENTEE_REJECTM4_SAMPLE = 1275217898,
	VOX_COMPLIMENTOR_APPRETEDF1_SAMPLE = -1711142256,
	VOX_COMPLIMENTOR_APPRETEDF2_SAMPLE = 51075882,
	VOX_COMPLIMENTOR_APPRETEDF8_SAMPLE = -471944652,
	VOX_COMPLIMENTOR_APPRETEDF9_SAMPLE = -1797684574,
	VOX_COMPLIMENTOR_APPRETEDK1_SAMPLE = 799831261,
	VOX_COMPLIMENTOR_APPRETEDK2_SAMPLE = -1230690969,
	VOX_COMPLIMENTOR_APPRETEDK3_SAMPLE = -1046342159,
	VOX_COMPLIMENTOR_APPRETEDK4_SAMPLE = 1606844498,
	VOX_COMPLIMENTOR_APPRETEDK5_SAMPLE = 683782340,
	VOX_COMPLIMENTOR_APPRETEDK6_SAMPLE = -1312235138,
	VOX_COMPLIMENTOR_APPRETEDM2_SAMPLE = -520125727,
	VOX_COMPLIMENTOR_APPRETEDM4_SAMPLE = 161228756,
	VOX_COMPLIMENTOR_APPRETEDM5_SAMPLE = 2124093250,
	VOX_COMPLIMENTOR_APPRETEDM8_SAMPLE = 2780159,
	VOX_COMPLIMENTOR_REJECTEDF1_SAMPLE = 697785339,
	VOX_COMPLIMENTOR_REJECTEDF4_SAMPLE = 1509797748,
	VOX_COMPLIMENTOR_REJECTEDM1_SAMPLE = -899448272,
	VOX_COMPLIMENTOR_REJECTEDM2_SAMPLE = 1399509898,
	VOX_COMPLIMENTOR_REJECTEDM3_SAMPLE = 611181340,
	VOX_COMPLIMENTOR_REJECTEDM4_SAMPLE = -1173784897,
	VOX_CONFUSED_HUHF1_SAMPLE = 1652266820,
	VOX_CONFUSED_HUHF14_SAMPLE = -2107251418,
	VOX_CONFUSED_HUHF2_SAMPLE = -76364034,
	VOX_CONFUSED_HUHF3_SAMPLE = -1938426264,
	VOX_CONFUSED_HUHF5_SAMPLE = 1695961949,
	VOX_CONFUSED_HUHF6_SAMPLE = -65076505,
	VOX_CONFUSED_HUHK10_SAMPLE = -1915702676,
	VOX_CONFUSED_HUHK13_SAMPLE = 349823958,
	VOX_CONFUSED_HUHK17_SAMPLE = 330573775,
	VOX_CONFUSED_HUHK2_SAMPLE = 1323088051,
	VOX_CONFUSED_HUHM1_SAMPLE = -2121314673,
	VOX_CONFUSED_HUHM2_SAMPLE = 411442997,
	VOX_CONFUSED_HUHM3_SAMPLE = 1870737315,
	VOX_CONFUSED_HUHM5_SAMPLE = -2031973738,
	VOX_CONVERSE_HIGHF1_SAMPLE = 1002487851,
	VOX_CONVERSE_HIGHF2_SAMPLE = -1563848303,
	VOX_CONVERSE_HIGHF3_SAMPLE = -707878649,
	VOX_CONVERSE_HIGHF4_SAMPLE = 1269445796,
	VOX_CONVERSE_HIGHF5_SAMPLE = 1017971762,
	VOX_CONVERSE_HIGHK3_SAMPLE = 1616961354,
	VOX_CONVERSE_HIGHK4_SAMPLE = -33273111,
	VOX_CONVERSE_HIGHM1_SAMPLE = -667674144,
	VOX_CONVERSE_HIGHM2_SAMPLE = 1094535258,
	VOX_CONVERSE_HIGHM3_SAMPLE = 909801676,
	VOX_CONVERSE_HIGHM4_SAMPLE = -1470173841,
	VOX_CONVERSE_HIGHM5_SAMPLE = -547758599,
	VOX_CONVERSE_HIGHR1_SAMPLE = 359536510,
	VOX_CONVERSE_HIGHR2_SAMPLE = -1939388732,
	VOX_CONVERSE_HIGHR3_SAMPLE = -77564334,
	VOX_CONVERSE_HIGHR4_SAMPLE = 1694819313,
	VOX_CONVERSE_HIGH_LEADF1_SAMPLE = -582181712,
	VOX_CONVERSE_HIGH_LEADF10_SAMPLE = 1063723057,
	VOX_CONVERSE_HIGH_LEADF11_SAMPLE = 1214255271,
	VOX_CONVERSE_HIGH_LEADF12_SAMPLE = -781631203,
	VOX_CONVERSE_HIGH_LEADF2_SAMPLE = 1145425162,
	VOX_CONVERSE_HIGH_LEADF3_SAMPLE = 860028316,
	VOX_CONVERSE_HIGH_LEADK10_SAMPLE = 935310178,
	VOX_CONVERSE_HIGH_LEADK11_SAMPLE = 1085834228,
	VOX_CONVERSE_HIGH_LEADK2_SAMPLE = -236211385,
	VOX_CONVERSE_HIGH_LEADK3_SAMPLE = -2031320111,
	VOX_CONVERSE_HIGH_LEADM1_SAMPLE = 1052263803,
	VOX_CONVERSE_HIGH_LEADM10_SAMPLE = 858968016,
	VOX_CONVERSE_HIGH_LEADM11_SAMPLE = 1144389446,
	VOX_CONVERSE_HIGH_LEADM12_SAMPLE = -583225604,
	VOX_CONVERSE_HIGH_LEADM2_SAMPLE = -1481567039,
	VOX_CONVERSE_HIGH_LEADM3_SAMPLE = -793369513,
	VOX_CONVERSE_HIGH_LEADR1_SAMPLE = -203273243,
	VOX_CONVERSE_HIGH_LEADR2_SAMPLE = 1793792607,
	VOX_CONVERSE_HIGH_LEADR3_SAMPLE = 502016713,
	VOX_CONVERSE_LOWF1_SAMPLE = 1034223690,
	VOX_CONVERSE_LOWF2_SAMPLE = -1532210704,
	VOX_CONVERSE_LOWF3_SAMPLE = -743743130,
	VOX_CONVERSE_LOWF4_SAMPLE = 1305474245,
	VOX_CONVERSE_LOWF5_SAMPLE = 986235987,
	VOX_CONVERSE_LOWK2_SAMPLE = 285355965,
	VOX_CONVERSE_LOWK4_SAMPLE = -127825272,
	VOX_CONVERSE_LOWK8_SAMPLE = -237517149,
	VOX_CONVERSE_LOWM1_SAMPLE = -565061247,
	VOX_CONVERSE_LOWM2_SAMPLE = 1196984379,
	VOX_CONVERSE_LOWM3_SAMPLE = 811579565,
	VOX_CONVERSE_LOWM4_SAMPLE = -1371853554,
	VOX_CONVERSE_LOWM5_SAMPLE = -650371688,
	VOX_CONVERSE_MEDF1_SAMPLE = 1897452727,
	VOX_CONVERSE_MEDF2_SAMPLE = -401505011,
	VOX_CONVERSE_MEDF3_SAMPLE = -1625901669,
	VOX_CONVERSE_MEDF4_SAMPLE = 24256568,
	VOX_CONVERSE_MEDF5_SAMPLE = 1987383470,
	VOX_CONVERSE_MEDK2_SAMPLE = 1572862784,
	VOX_CONVERSE_MEDK6_SAMPLE = 1523728217,
	VOX_CONVERSE_MEDK8_SAMPLE = -1117121954,
	VOX_CONVERSE_MEDM1_SAMPLE = -1830023812,
	VOX_CONVERSE_MEDM2_SAMPLE = 199580870,
	VOX_CONVERSE_MEDM3_SAMPLE = 2095213648,
	VOX_CONVERSE_MEDM4_SAMPLE = -494470669,
	VOX_CONVERSE_MEDM5_SAMPLE = -1786656411,
	VOX_CONV_HIGHLEAD_MONKEY7_SAMPLE = 219556666,
	VOX_CONV_HIGHLEAD_MONKEY8_SAMPLE = -1649854805,
	VOX_CONV_HIGHLEAD_MONKEY9_SAMPLE = -357693891,
	VOX_CONV_HIGH_MONKEY5_SAMPLE = 969793998,
	VOX_CONV_HIGH_MONKEY6_SAMPLE = -1597722508,
	VOX_CONV_HIGH_MONKEY7_SAMPLE = -675053342,
	VOX_CONV_HIGH_MONKEY8_SAMPLE = 1199349107,
	VOX_COUGHF1_SAMPLE = 622344961,
	VOX_COUGHF2_SAMPLE = -1139709253,
	VOX_COUGHK1_SAMPLE = -1867102900,
	VOX_COUGHK14_SAMPLE = -1941135162,
	VOX_COUGHM1_SAMPLE = -957553974,
	VOX_COUGHM2_SAMPLE = 1608889200,
	VOX_CRY_HARDF1_SAMPLE = -1802375178,
	VOX_CRY_HARDF2_SAMPLE = 228113996,
	VOX_CRY_HARDF3_SAMPLE = 2057277146,
	VOX_CRY_HARDF4_SAMPLE = -453305479,
	VOX_CRY_HARDF5_SAMPLE = -1812190225,
	VOX_CRY_HARDK2_SAMPLE = -1204371455,
	VOX_CRY_HARDK5_SAMPLE = 642930082,
	VOX_CRY_HARDM1_SAMPLE = 2003121725,
	VOX_CRY_HARDM2_SAMPLE = -294885497,
	VOX_CRY_SNIFFLEF1_SAMPLE = -675552519,
	VOX_CRY_SNIFFLEF2_SAMPLE = 1320334147,
	VOX_CRY_SNIFFLEF3_SAMPLE = 968197077,
	VOX_CRY_SNIFFLEK2_SAMPLE = -81998578,
	VOX_CRY_SNIFFLEK3_SAMPLE = -1944322664,
	VOX_CRY_SNIFFLEM1_SAMPLE = 877607730,
	VOX_CRY_SOFTF1_SAMPLE = -2115125129,
	VOX_CRY_SOFTF2_SAMPLE = 417632717,
	VOX_CRY_SOFTF3_SAMPLE = 1877188955,
	VOX_CRY_SOFTF4_SAMPLE = -242797320,
	VOX_CRY_SOFTF5_SAMPLE = -2038430610,
	VOX_CRY_SOFTK1_SAMPLE = 876854842,
	VOX_CRY_SOFTM1_SAMPLE = 1645812156,
	VOX_CRY_SOFTM2_SAMPLE = -82819066,
	VOX_DANCEE_ACCEPTF1_SAMPLE = -1890141848,
	VOX_DANCEE_ACCEPTF2_SAMPLE = 375384274,
	VOX_DANCEE_ACCEPTF3_SAMPLE = 1633212484,
	VOX_DANCEE_ACCEPTF4_SAMPLE = -12825113,
	VOX_DANCEE_ACCEPTM1_SAMPLE = 1822580899,
	VOX_DANCEE_ACCEPTM2_SAMPLE = -173330151,
	VOX_DANCEE_ACCEPTM3_SAMPLE = -2102656625,
	VOX_DANCEE_DECLINEF1_SAMPLE = 1537302020,
	VOX_DANCEE_DECLINEF10_SAMPLE = -202524058,
	VOX_DANCEE_DECLINEF2_SAMPLE = -1029173314,
	VOX_DANCEE_DECLINEF3_SAMPLE = -1246806232,
	VOX_DANCEE_DECLINEF4_SAMPLE = 734767755,
	VOX_DANCEE_DECLINEM1_SAMPLE = -1202354225,
	VOX_DANCEE_DECLINEM2_SAMPLE = 559732341,
	VOX_DANCEE_DECLINEM3_SAMPLE = 1448863459,
	VOX_DANCEE_DECLINEM4_SAMPLE = -935365824,
	VOX_DANCEE_DECLINEM5_SAMPLE = -1086831658,
	VOX_DANCEE_DECLINEM6_SAMPLE = 640750188,
	VOX_DANCEE_DECLINEM7_SAMPLE = 1362502394,
	VOX_DANCEE_ENJOYF1_SAMPLE = -1351221808,
	VOX_DANCEE_ENJOYF2_SAMPLE = 914140266,
	VOX_DANCEE_ENJOYF3_SAMPLE = 1098620156,
	VOX_DANCEE_ENJOYM1_SAMPLE = 1283531803,
	VOX_DANCEE_ENJOYM2_SAMPLE = -712477279,
	VOX_DANCEE_ENJOYM3_SAMPLE = -1567668937,
	VOX_DANCEE_THANKSF1_SAMPLE = 21333212,
	VOX_DANCEE_THANKSF2_SAMPLE = -1739795098,
	VOX_DANCEE_THANKSF3_SAMPLE = -280238608,
	VOX_DANCEE_THANKSF4_SAMPLE = 1898934355,
	VOX_DANCEE_THANKSM1_SAMPLE = -491692777,
	VOX_DANCEE_THANKSM2_SAMPLE = 2075659437,
	VOX_DANCEE_THANKSM3_SAMPLE = 213859387,
	VOX_DANCER_HUMF1_SAMPLE = -1553484884,
	VOX_DANCER_HUMF2_SAMPLE = 980345366,
	VOX_DANCER_HUMM1_SAMPLE = 1083402855,
	VOX_DANCER_HUMM2_SAMPLE = -644203555,
	VOX_DANCER_HUMM3_SAMPLE = -1365439669,
	VOX_DANCER_HUMR1_SAMPLE = -1916181255,
	VOX_DANCER_HUMR2_SAMPLE = 348140867,
	VOX_DANCER_HUM_MONKEY17_SAMPLE = 387740325,
	VOX_DANCER_HUM_MONKEY8_SAMPLE = -579195349,
	VOX_DANCER_INVITEF1_SAMPLE = -59016779,
	VOX_DANCER_INVITEF2_SAMPLE = 1701980175,
	VOX_DANCER_INVITEF3_SAMPLE = 309663897,
	VOX_DANCER_INVITEF6_SAMPLE = 1646259222,
	VOX_DANCER_INVITEF8_SAMPLE = -2052603631,
	VOX_DANCER_INVITEM1_SAMPLE = 529506430,
	VOX_DANCER_INVITEM10_SAMPLE = 1132006586,
	VOX_DANCER_INVITEM11_SAMPLE = 880688172,
	VOX_DANCER_INVITEM12_SAMPLE = -1384682090,
	VOX_DANCER_INVITEM2_SAMPLE = -2037976636,
	VOX_DANCER_INVITEM3_SAMPLE = -243154606,
	VOX_DANCER_INVITEM4_SAMPLE = 1877300465,
	VOX_DANCER_INVITEM5_SAMPLE = 417490023,
	VOX_DANCER_INVITEM6_SAMPLE = -2115291683,
	VOX_DANCER_INVITEM7_SAMPLE = -152304309,
	VOX_DANCER_INVITEM8_SAMPLE = 1716721882,
	VOX_DANCER_INVITEM9_SAMPLE = 290728012,
	VOX_DANCER_INVITER10_SAMPLE = 1409542391,
	VOX_DANCER_INVITER2_SAMPLE = 1272774490,
	VOX_DANCER_INVITER3_SAMPLE = 1021038540,
	VOX_DANCER_INVITER5_SAMPLE = -709334279,
	VOX_DANCER_INVITER6_SAMPLE = 1286683459,
	VOX_DANCER_INVITER7_SAMPLE = 1001786325,
	VOX_DANCER_INVITER8_SAMPLE = -1425467836,
	VOX_DANCER_INVITER9_SAMPLE = -603052334,
	VOX_DANCER_INVITE_MONKEY4_SAMPLE = 782188675,
	VOX_DANCER_INVITE_MONKEY6_SAMPLE = -1064230481,
	VOX_DANCER_INVITE_MONKEY7_SAMPLE = -1214901959,
	VOX_DCAGE_DANCEF1_SAMPLE = 1714659585,
	VOX_DCAGE_DANCEF2_SAMPLE = -12914501,
	VOX_DCAGE_DANCEF3_SAMPLE = -2009219027,
	VOX_DCAGE_DANCEF4_SAMPLE = 374953358,
	VOX_DCAGE_DANCEF5_SAMPLE = 1633576216,
	VOX_DCAGE_DANCEM1_SAMPLE = -2050524982,
	VOX_DCAGE_DANCEM2_SAMPLE = 483273072,
	VOX_DCAGE_DANCEM3_SAMPLE = 1808341478,
	VOX_DCAGE_DANCEM4_SAMPLE = -173175739,
	VOX_DCAGE_DANCEX1_SAMPLE = -1301111074,
	VOX_DCAGE_DANCEX10_SAMPLE = -1795009940,
	VOX_DCAGE_DANCEX2_SAMPLE = 729534308,
	VOX_DCAGE_DANCEX3_SAMPLE = 1551695858,
	VOX_DCAGE_DANCEX4_SAMPLE = -1038587311,
	VOX_DCAGE_DANCEX5_SAMPLE = -1256236345,
	VOX_DCAGE_DANCEX6_SAMPLE = 739642237,
	VOX_DCAGE_DANCEX7_SAMPLE = 1527856107,
	VOX_DCAGE_DANCEX8_SAMPLE = -877779334,
	VOX_DCAGE_DANCEX9_SAMPLE = -1129769236,
	VOX_DCAGE_DANCEY1_SAMPLE = -1419137121,
	VOX_DCAGE_DANCEY10_SAMPLE = -1799341989,
	VOX_DCAGE_DANCEY2_SAMPLE = 845217317,
	VOX_DCAGE_DANCEY3_SAMPLE = 1164431027,
	VOX_DCAGE_DANCEY4_SAMPLE = -620537072,
	VOX_DCAGE_DANCEY5_SAMPLE = -1408996474,
	VOX_DCAGE_DANCEY6_SAMPLE = 890059324,
	VOX_DCAGE_DANCEY7_SAMPLE = 1107954346,
	VOX_DCAGE_DANCEY8_SAMPLE = -759883973,
	VOX_DCAGE_DANCEY9_SAMPLE = -1515051091,
	VOX_DCAGE_MONKF1_SAMPLE = 1234219648,
	VOX_DCAGE_MONKF2_SAMPLE = -795221190,
	VOX_DCAGE_MONKF3_SAMPLE = -1482763348,
	VOX_DCAGE_MONKF4_SAMPLE = 972703247,
	VOX_DCAGE_MONKM1_SAMPLE = -1436259509,
	VOX_DCAGE_MONKM2_SAMPLE = 862796529,
	VOX_DCAGE_MONKM3_SAMPLE = 1147800167,
	VOX_DCAGE_MONKM4_SAMPLE = -636575804,
	VOX_DCAGE_MONKM5_SAMPLE = -1391874222,
	VOX_DCAGE_WHIPF3_SAMPLE = 978803305,
	VOX_DCAGE_WHIPF4_SAMPLE = -1540108342,
	VOX_DCAGE_WHIPF5_SAMPLE = -751501476,
	VOX_DCAGE_WHIPF6_SAMPLE = 1245556454,
	VOX_DCAGE_WHIPF7_SAMPLE = 1027251824,
	VOX_DCAGE_WHIPM5_SAMPLE = 817899159,
	VOX_DCAGE_WHIPM6_SAMPLE = -1446414547,
	VOX_DCAGE_WHIPM7_SAMPLE = -556906565,
	VOX_DCAGE_WHIPM8_SAMPLE = 1316051498,
	VOX_DCAGE_WHIPM9_SAMPLE = 964061884,
	VOX_DCAGE_WRITHEF1_SAMPLE = 254324356,
	VOX_DCAGE_WRITHEF2_SAMPLE = -1776156866,
	VOX_DCAGE_WRITHEF3_SAMPLE = -517550168,
	VOX_DCAGE_WRITHEF4_SAMPLE = 2135054859,
	VOX_DCAGE_WRITHEF5_SAMPLE = 138767005,
	VOX_DCAGE_WRITHEM1_SAMPLE = -321095857,
	VOX_DCAGE_WRITHEM2_SAMPLE = 1976903413,
	VOX_DCAGE_WRITHEM3_SAMPLE = 47322723,
	VOX_DCAGE_WRITHEM4_SAMPLE = -1665760320,
	VOX_DCAGE_WRITHEM5_SAMPLE = -340675754,
	VOX_DEFIANT_UHUHF1_SAMPLE = -1350268983,
	VOX_DEFIANT_UHUHF2_SAMPLE = 915265139,
	VOX_DEFIANT_UHUHF3_SAMPLE = 1099622117,
	VOX_DEFIANT_UHUHK13_SAMPLE = -2028084389,
	VOX_DEFIANT_UHUHK29_SAMPLE = 1290099078,
	VOX_DEFIANT_UHUHK4_SAMPLE = 1782582539,
	VOX_DEFIANT_UHUHM1_SAMPLE = 1282432514,
	VOX_DEFIANT_UHUHM2_SAMPLE = -713486408,
	VOX_DEFIANT_UHUHM6_SAMPLE = -770389087,
	VOX_DIEF1_SAMPLE = 819834701,
	VOX_DIEF2_SAMPLE = -1445658889,
	VOX_DIEK1_SAMPLE = -2056007424,
	VOX_DIEK2_SAMPLE = 477790394,
	VOX_DIEK3_SAMPLE = 1803399212,
	VOX_DIEK6_SAMPLE = 454509731,
	VOX_DIEM1_SAMPLE = -752257402,
	VOX_DIEM2_SAMPLE = 1243621180,
	VOX_DIEM3_SAMPLE = 1025972138,
	VOX_DIEM4_SAMPLE = -1555856887,
	VOX_DISAPPOINTED_OHF1_SAMPLE = 1301319808,
	VOX_DISAPPOINTED_OHF10_SAMPLE = 422497425,
	VOX_DISAPPOINTED_OHF2_SAMPLE = -728121030,
	VOX_DISAPPOINTED_OHF3_SAMPLE = -1549864532,
	VOX_DISAPPOINTED_OHF6_SAMPLE = -738982621,
	VOX_DISAPPOINTED_OHF8_SAMPLE = 877406244,
	VOX_DISAPPOINTED_OHK10_SAMPLE = 301359042,
	VOX_DISAPPOINTED_OHK5_SAMPLE = -11326764,
	VOX_DISAPPOINTED_OHK6_SAMPLE = 1717205870,
	VOX_DISAPPOINTED_OHK7_SAMPLE = 291326968,
	VOX_DISAPPOINTED_OHK9_SAMPLE = -152738049,
	VOX_DISAPPOINTED_OHM1_SAMPLE = -1369159349,
	VOX_DISAPPOINTED_OHM2_SAMPLE = 929896689,
	VOX_DISAPPOINTED_OHM3_SAMPLE = 1080698983,
	VOX_DISGUSTED_OHK11_SAMPLE = -674140411,
	VOX_DISGUSTED_OHK2_SAMPLE = 1256114764,
	VOX_DISGUSTED_OHK21_SAMPLE = -50578234,
	VOX_DISGUSTED_OHK3_SAMPLE = 1037695706,
	VOX_DISGUSTED_OHK4_SAMPLE = -1547866247,
	VOX_DISGUSTED_OHK5_SAMPLE = -725983249,
	VOX_DISGUSTED_OHK8_SAMPLE = -1442110638,
	VOX_DISGUSTED_OHK9_SAMPLE = -586411068,
	VOX_DISGUSTED_SIGHF1_SAMPLE = -878894511,
	VOX_DISGUSTED_SIGHF12_SAMPLE = 108151373,
	VOX_DISGUSTED_SIGHF13_SAMPLE = 1903522523,
	VOX_DISGUSTED_SIGHF14_SAMPLE = -284039304,
	VOX_DISGUSTED_SIGHF17_SAMPLE = 1981331138,
	VOX_DISGUSTED_SIGHF18_SAMPLE = -425219245,
	VOX_DISGUSTED_SIGHF2_SAMPLE = 1385460715,
	VOX_DISGUSTED_SIGHF20_SAMPLE = -1018072926,
	VOX_DISGUSTED_SIGHF3_SAMPLE = 630408061,
	VOX_DISGUSTED_SIGHF6_SAMPLE = 1442428914,
	VOX_DISGUSTED_SIGHF7_SAMPLE = 587106148,
	VOX_DISGUSTED_SIGHK11_SAMPLE = -1750892380,
	VOX_DISGUSTED_SIGHK21_SAMPLE = -1131490457,
	VOX_DISGUSTED_SIGHK4_SAMPLE = 240756883,
	VOX_DISGUSTED_SIGHK9_SAMPLE = 1894306862,
	VOX_DISGUSTED_SIGHM1_SAMPLE = 678034330,
	VOX_DISGUSTED_SIGHM2_SAMPLE = -1319065056,
	VOX_DISGUSTED_SIGHM3_SAMPLE = -966288714,
	VOX_DISGUSTED_SIGHM4_SAMPLE = 1476595477,
	VOX_DISGUSTED_SIGHM5_SAMPLE = 788807555,
	VOX_DISMISS_ASKLEAVE_REPLYM1_SAMPLE = 1052234478,
	VOX_DOLLHOUSE_PLAYF1_SAMPLE = -2103820134,
	VOX_DOLLHOUSE_PLAYF2_SAMPLE = 462623008,
	VOX_DOLLHOUSE_PLAYK1_SAMPLE = 926170839,
	VOX_DOLLHOUSE_PLAYK2_SAMPLE = -1371705491,
	VOX_DOLLHOUSE_PLAYM1_SAMPLE = 1634638161,
	VOX_DOLLHOUSE_PLAYM2_SAMPLE = -127416085,
	VOX_ENTERTAINEE_BOOF1_SAMPLE = -1066336034,
	VOX_ENTERTAINEE_BOOF2_SAMPLE = 1501057380,
	VOX_ENTERTAINEE_BOOF3_SAMPLE = 780100082,
	VOX_ENTERTAINEE_BOOK5_SAMPLE = 1924315786,
	VOX_ENTERTAINEE_BOOK9_SAMPLE = 2063922849,
	VOX_ENTERTAINEE_BOOM1_SAMPLE = 595974421,
	VOX_ENTERTAINEE_BOOM2_SAMPLE = -1165195089,
	VOX_ENTERTAINEE_BOOM3_SAMPLE = -846481351,
	VOX_ENTERTAINEE_BOOM4_SAMPLE = 1408183706,
	VOX_ENTERTAINEE_BOOM5_SAMPLE = 619191564,
	VOX_ENTERTAINEE_BOOM6_SAMPLE = -1109308234,
	VOX_ENTERTAINEE_BOOM7_SAMPLE = -890864608,
	VOX_ENTERTAINEE_LAUGHF3_SAMPLE = -462941634,
	VOX_ENTERTAINEE_LAUGHF4_SAMPLE = 2047641501,
	VOX_ENTERTAINEE_LAUGHK5_SAMPLE = -1197094586,
	VOX_ENTERTAINEE_LAUGHK6_SAMPLE = 564959484,
	VOX_ENTERTAINEE_LAUGHM1_SAMPLE = -376263975,
	VOX_ENTERTAINEE_LAUGHM2_SAMPLE = 1889270627,
	VOX_ENTERTAINEE_LAUGHM3_SAMPLE = 127716341,
	VOX_ENTERTAINEE_LAUGHM4_SAMPLE = -1711776170,
	VOX_EWWWWF1_SAMPLE = -1796313473,
	VOX_EWWWWF2_SAMPLE = 233258949,
	VOX_EWWWWF6_SAMPLE = 176880604,
	VOX_EWWWWK1_SAMPLE = 557846578,
	VOX_EWWWWK3_SAMPLE = -816942818,
	VOX_EWWWWK6_SAMPLE = -1088125551,
	VOX_EWWWWM1_SAMPLE = 1998239668,
	VOX_EWWWWM2_SAMPLE = -300685810,
	VOX_EWWWWM3_SAMPLE = -1726687592,
	VOX_EWWWWM7_SAMPLE = -1636232575,
	VOX_FLAMINGOKICKF1_SAMPLE = -125057742,
	VOX_FLAMINGOKICKF2_SAMPLE = 1635947656,
	VOX_FLAMINGOKICKF3_SAMPLE = 377857054,
	VOX_FLAMINGOKICKK1_SAMPLE = 1294318463,
	VOX_FLAMINGOKICKM1_SAMPLE = 461315321,
	VOX_FLAMINGOKICKM2_SAMPLE = -2106176189,
	VOX_FLAMINGOKICKM3_SAMPLE = -177111595,
	VOX_FLIRTEE_GIGGLEF1_SAMPLE = 1012690672,
	VOX_FLIRTEE_GIGGLEF2_SAMPLE = -1521139894,
	VOX_FLIRTEE_GIGGLEF3_SAMPLE = -766373924,
	VOX_FLIRTEE_GIGGLEF7_SAMPLE = -717239355,
	VOX_FLIRTEE_GIGGLEF8_SAMPLE = 1166071380,
	VOX_FLIRTEE_GIGGLEM1_SAMPLE = -542591173,
	VOX_FLIRTEE_GIGGLEM11_SAMPLE = 839429668,
	VOX_FLIRTEE_GIGGLEM12_SAMPLE = -1425932386,
	VOX_FLIRTEE_GIGGLEM2_SAMPLE = 1185015425,
	VOX_FLIRTEE_GIGGLEM3_SAMPLE = 833017367,
	VOX_FLIRTEE_GIGGLEM4_SAMPLE = -1346223180,
	VOX_FLIRTEE_GIGGLEM8_SAMPLE = -1502343265,
	VOX_FLIRTEE_IGNOREF1_SAMPLE = -565166790,
	VOX_FLIRTEE_IGNOREF2_SAMPLE = 1197042816,
	VOX_FLIRTEE_IGNOREM1_SAMPLE = 1034216689,
	VOX_FLIRTEE_IGNOREM2_SAMPLE = -1532119733,
	VOX_FLIRTEE_IGNOREM3_SAMPLE = -743799331,
	VOX_FLIRTEE_SCOLDF1_SAMPLE = 1858396332,
	VOX_FLIRTEE_SCOLDF2_SAMPLE = -137514730,
	VOX_FLIRTEE_SCOLDF3_SAMPLE = -2134212224,
	VOX_FLIRTEE_SCOLDF5_SAMPLE = 1772692661,
	VOX_FLIRTEE_SCOLDF6_SAMPLE = -257919729,
	VOX_FLIRTEE_SCOLDM1_SAMPLE = -1926219417,
	VOX_FLIRTEE_SCOLDM2_SAMPLE = 339306717,
	VOX_FLIRTEE_SCOLDM3_SAMPLE = 1665030219,
	VOX_FLIRTEE_SCOLDM4_SAMPLE = -44380696,
	VOX_FLIRTEE_SCOLDM5_SAMPLE = -1973551746,
	VOX_FLIRTEE_SCOLDM6_SAMPLE = 324316356,
	VOX_FLIRTERF1_SAMPLE = -729972719,
	VOX_FLIRTERF16_SAMPLE = 2010916710,
	VOX_FLIRTERF18_SAMPLE = -1872491935,
	VOX_FLIRTERF19_SAMPLE = -412927241,
	VOX_FLIRTERF2_SAMPLE = 1299501483,
	VOX_FLIRTERF3_SAMPLE = 980672829,
	VOX_FLIRTERF4_SAMPLE = -1541966690,
	VOX_FLIRTERF5_SAMPLE = -753908728,
	VOX_FLIRTERF9_SAMPLE = -626653149,
	VOX_FLIRTERM1_SAMPLE = 931748314,
	VOX_FLIRTERM12_SAMPLE = 2095320222,
	VOX_FLIRTERM13_SAMPLE = 199441416,
	VOX_FLIRTERM14_SAMPLE = -1786271317,
	VOX_FLIRTERM19_SAMPLE = -348728042,
	VOX_FLIRTERM2_SAMPLE = -1367340960,
	VOX_FLIRTERM3_SAMPLE = -645449482,
	VOX_FLIRTERM4_SAMPLE = 1206103381,
	VOX_FLIRTERM5_SAMPLE = 820288963,
	VOX_FLIRTERM6_SAMPLE = -1444033415,
	VOX_FLOWER_AHHF1_SAMPLE = 864958383,
	VOX_FLOWER_AHHK2_SAMPLE = 522786904,
	VOX_FLOWER_AHHK5_SAMPLE = -2125623813,
	VOX_FLOWER_AHHK9_SAMPLE = -1996766768,
	VOX_FLOWER_AHHM1_SAMPLE = -797249948,
	VOX_FLOWER_AHHM3_SAMPLE = 1047826248,
	VOX_FRUSTRATED_MUTTERF1_SAMPLE = 233021613,
	VOX_FRUSTRATED_MUTTERF2_SAMPLE = -1796542185,
	VOX_FRUSTRATED_MUTTERM1_SAMPLE = -300451482,
	VOX_FRUSTRATED_MUTTERM2_SAMPLE = 1998465244,
	VOX_FRUSTRATED_SALPF1_SAMPLE = -804141424,
	VOX_FRUSTRATED_SALPF2_SAMPLE = 1226348330,
	VOX_FRUSTRATED_SALPM1_SAMPLE = 870653787,
	VOX_FRUSTRATED_SIGHF1_SAMPLE = 626391192,
	VOX_FRUSTRATED_SIGHF2_SAMPLE = -1134778078,
	VOX_FRUSTRATED_SIGHF3_SAMPLE = -883189324,
	VOX_FRUSTRATED_SIGHF4_SAMPLE = 1430195223,
	VOX_FRUSTRATED_SIGHF5_SAMPLE = 574110849,
	VOX_FRUSTRATED_SIGHK1_SAMPLE = -1862564139,
	VOX_FRUSTRATED_SIGHK14_SAMPLE = 94357221,
	VOX_FRUSTRATED_SIGHK16_SAMPLE = -342775863,
	VOX_FRUSTRATED_SIGHK2_SAMPLE = 166909807,
	VOX_FRUSTRATED_SIGHK4_SAMPLE = -527338918,
	VOX_FRUSTRATED_SIGHK5_SAMPLE = -1751760180,
	VOX_FRUSTRATED_SIGHK6_SAMPLE = 245306230,
	VOX_FRUSTRATED_SIGHM1_SAMPLE = -962518701,
	VOX_FRUSTRATED_SIGHM2_SAMPLE = 1604874473,
	VOX_FRUSTRATED_SIGHM3_SAMPLE = 682573951,
	VOX_FRUSTRATED_SIGHM7_SAMPLE = 801277030,
	VOX_FRUSTRATED_SWEARF1_SAMPLE = 946354853,
	VOX_FRUSTRATED_SWEARF2_SAMPLE = -1587451105,
	VOX_FRUSTRATED_SWEARF3_SAMPLE = -697934967,
	VOX_FRUSTRATED_SWEARF4_SAMPLE = 1208143402,
	VOX_FRUSTRATED_SWEARF5_SAMPLE = 1057357500,
	VOX_FRUSTRATED_SWEARF6_SAMPLE = -1509118202,
	VOX_FRUSTRATED_SWEARF7_SAMPLE = -787767408,
	VOX_FRUSTRATED_SWEARM1_SAMPLE = -610475154,
	VOX_FRUSTRATED_SWEARM2_SAMPLE = 1117106900,
	VOX_FRUSTRATED_SWEARM3_SAMPLE = 898794050,
	VOX_FRUSTRATED_SWEARM4_SAMPLE = -1409935391,
	VOX_GARGLEF1_SAMPLE = -791395270,
	VOX_GARGLEF2_SAMPLE = 1239225728,
	VOX_GARGLEF3_SAMPLE = 1054483734,
	VOX_GARGLEM1_SAMPLE = 857775601,
	VOX_GARGLEM2_SAMPLE = -1440101301,
	VOX_GASPF1_SAMPLE = 818024170,
	VOX_GASPF2_SAMPLE = -1446289584,
	VOX_GASPF3_SAMPLE = -557027386,
	VOX_GASPF5_SAMPLE = 934267635,
	VOX_GASPF8_SAMPLE = 1226749518,
	VOX_GASPK17_SAMPLE = 579342521,
	VOX_GASPK2_SAMPLE = 476389661,
	VOX_GASPK25_SAMPLE = -408214954,
	VOX_GASPK26_SAMPLE = 2124575724,
	VOX_GASPK3_SAMPLE = 1801589131,
	VOX_GASPM1_SAMPLE = -751380703,
	VOX_GASPM3_SAMPLE = 1027126797,
	VOX_GHOSTK3_SAMPLE = 2011505972,
	VOX_GHOSTK5_SAMPLE = -1635352575,
	VOX_GHOST_HAUNTF1_SAMPLE = 1392371738,
	VOX_GHOST_HAUNTF2_SAMPLE = -873154144,
	VOX_GHOST_HAUNTF3_SAMPLE = -1124890314,
	VOX_GHOST_HAUNTF4_SAMPLE = 580328597,
	VOX_GHOST_HAUNTF5_SAMPLE = 1435511811,
	VOX_GHOST_HAUNTK1_SAMPLE = -413952425,
	VOX_GHOST_HAUNTK2_SAMPLE = 2119878637,
	VOX_GHOST_HAUNTK3_SAMPLE = 157153147,
	VOX_GHOST_HAUNTK4_SAMPLE = -1757846824,
	VOX_GHOST_HAUNTK5_SAMPLE = -532786610,
	VOX_GHOST_HAUNTM1_SAMPLE = -1324797487,
	VOX_GHOST_HAUNTM2_SAMPLE = 671113323,
	VOX_GHOST_HAUNTM3_SAMPLE = 1594315005,
	VOX_GHOST_HAUNTM4_SAMPLE = -1050426018,
	VOX_GHOST_HAUNTM5_SAMPLE = -1234897464,
	VOX_GHOST_HAUNTM6_SAMPLE = 795714674,
	VOX_GIFTGETTER_LIKEF2_SAMPLE = 325200467,
	VOX_GIFTGETTER_LIKEF4_SAMPLE = -100561050,
	VOX_GIFTGETTER_LIKEK1_SAMPLE = 1069876644,
	VOX_GIFTGETTER_LIKEK4_SAMPLE = 1336930603,
	VOX_GIFTGETTER_LIKEK5_SAMPLE = 950583741,
	VOX_GIFTGETTER_LIKEM2_SAMPLE = -258542696,
	VOX_GIFTGETTER_LIKEM3_SAMPLE = -2020490482,
	VOX_GIFTGETTER_LIKEM4_SAMPLE = 435508909,
	VOX_GIFTGETTER_SKEPTICALF1_SAMPLE = -1159551404,
	VOX_GIFTGETTER_SKEPTICALF2_SAMPLE = 602666990,
	VOX_GIFTGETTER_SKEPTICALK4_SAMPLE = 2133208214,
	VOX_GIFTGETTER_SKEPTICALK5_SAMPLE = 136387584,
	VOX_GIFTGETTER_SKEPTICALK6_SAMPLE = -1859629638,
	VOX_GIFTGETTER_SKEPTICALM1_SAMPLE = 1494646687,
	VOX_GIFTGETTER_SKEPTICALM2_SAMPLE = -1071698395,
	VOX_GIFTGETTER_STOMPF1_SAMPLE = 1019190702,
	VOX_GIFTGETTER_STOMPF3_SAMPLE = -760087422,
	VOX_GIFTGETTER_STOMPK5_SAMPLE = -1904465926,
	VOX_GIFTGETTER_STOMPK6_SAMPLE = 393573952,
	VOX_GIFTGETTER_STOMPM1_SAMPLE = -548715419,
	VOX_GIFTGETTER_STOMPM2_SAMPLE = 1178736095,
	VOX_GIFTGIVER_FOILF1_SAMPLE = 543141996,
	VOX_GIFTGIVER_FOILF3_SAMPLE = -833498816,
	VOX_GIFTGIVER_FOILF7_SAMPLE = -918809255,
	VOX_GIFTGIVER_FOILK4_SAMPLE = -442811730,
	VOX_GIFTGIVER_FOILK6_SAMPLE = 194337666,
	VOX_GIFTGIVER_FOILM1_SAMPLE = -1012176473,
	VOX_GIFTGIVER_FOILM7_SAMPLE = 717802642,
	VOX_GIFTGIVER_FOILM8_SAMPLE = -1166552829,
	VOX_GIFTGIVER_TADAF3_SAMPLE = -976386241,
	VOX_GIFTGIVER_TADAF6_SAMPLE = -1247317072,
	VOX_GIFTGIVER_TADAK1_SAMPLE = -1636984738,
	VOX_GIFTGIVER_TADAK5_SAMPLE = -1728029625,
	VOX_GIFTGIVER_TADAM4_SAMPLE = -1201812649,
	VOX_GIFTGIVER_TADAM7_SAMPLE = 559192813,
	VOX_GIFTGIVER_TADAM8_SAMPLE = -1309964420,
	VOX_GOODBYE_SHOOEEF2_SAMPLE = 1308908096,
	VOX_GOODBYE_SHOOEEF4_SAMPLE = -1486356619,
	VOX_GOODBYE_SHOOEEK2_SAMPLE = -72735731,
	VOX_GOODBYE_SHOOEEM3_SAMPLE = -621300963,
	VOX_GOODBYE_SHOOEEM6_SAMPLE = -1432533102,
	VOX_GOODBYE_SHOOEEM9_SAMPLE = 975329795,
	VOX_GOODBYE_SHOOERF1_SAMPLE = -832258545,
	VOX_GOODBYE_SHOOERF4_SAMPLE = -1106359680,
	VOX_GOODBYE_SHOOERF7_SAMPLE = 654777146,
	VOX_GOODBYE_SHOOERF8_SAMPLE = -1212676437,
	VOX_GOODBYE_SHOOERF9_SAMPLE = -1061210563,
	VOX_GOODBYE_SHOOERK2_SAMPLE = -490499592,
	VOX_GOODBYE_SHOOERK7_SAMPLE = -1834392201,
	VOX_GOODBYE_SHOOERM1_SAMPLE = 764438468,
	VOX_GOODBYE_SHOOERM3_SAMPLE = -1013053720,
	VOX_GOODBYE_SHOOERM5_SAMPLE = 721265629,
	VOX_GOODBYE_WAVEEF10_SAMPLE = -1115067681,
	VOX_GOODBYE_WAVEEF5_SAMPLE = 1017083903,
	VOX_GOODBYE_WAVEEF7_SAMPLE = -762243373,
	VOX_GOODBYE_WAVEEK4_SAMPLE = -30000860,
	VOX_GOODBYE_WAVEEK8_SAMPLE = -142576369,
	VOX_GOODBYE_WAVEEM2_SAMPLE = 1091517335,
	VOX_GOODBYE_WAVEEM7_SAMPLE = 828755736,
	VOX_GOODBYE_WAVERF2_SAMPLE = -1148037207,
	VOX_GOODBYE_WAVERF5_SAMPLE = 636928522,
	VOX_GOODBYE_WAVERK6_SAMPLE = 156364285,
	VOX_GOODBYE_WAVERK7_SAMPLE = 2119621995,
	VOX_GOODBYE_WAVERM3_SAMPLE = 794935028,
	VOX_GOODBYE_WAVERM4_SAMPLE = -1325061289,
	VOX_GREET_SHAKEEF2_SAMPLE = -1413850549,
	VOX_GREET_SHAKEEK3_SAMPLE = 1762858128,
	VOX_GREET_SHAKEEK7_SAMPLE = 1853804681,
	VOX_GREET_SHAKEEM1_SAMPLE = -783822278,
	VOX_GREET_SHAKEEM3_SAMPLE = 1061794582,
	VOX_GREET_SHAKERF1_SAMPLE = 735755780,
	VOX_GREET_SHAKERF3_SAMPLE = -975904984,
	VOX_GREET_SHAKERK3_SAMPLE = 1887084901,
	VOX_GREET_SHAKERK4_SAMPLE = -300010298,
	VOX_GREET_SHAKERM2_SAMPLE = 1361524341,
	VOX_GROAN_LONG_PAINF1_SAMPLE = 1543730329,
	VOX_GROAN_LONG_PAINF2_SAMPLE = -989190877,
	VOX_GROAN_LONG_PAINK4_SAMPLE = -1714946469,
	VOX_GROAN_LONG_PAINK9_SAMPLE = -411663642,
	VOX_GROAN_LONG_PAINM1_SAMPLE = -1074287278,
	VOX_GROAN_LONG_PAINM2_SAMPLE = 654245096,
	VOX_GROAN_LONG_PLEASUREF1_SAMPLE = 1957519181,
	VOX_GROAN_LONG_PLEASUREF2_SAMPLE = -308015369,
	VOX_GROAN_LONG_PLEASUREF3_SAMPLE = -1700577695,
	VOX_GROAN_LONG_PLEASUREM1_SAMPLE = -1755740538,
	VOX_GROAN_LONG_PLEASUREM2_SAMPLE = 240179004,
	VOX_GROAN_SHORTK11_SAMPLE = -1922111631,
	VOX_GROAN_SHORTK2_SAMPLE = -259414606,
	VOX_GROAN_SHORTK6_SAMPLE = -136027733,
	VOX_GROAN_SHORT_PAINF1_SAMPLE = -200033187,
	VOX_GROAN_SHORT_PAINF2_SAMPLE = 1830481383,
	VOX_GROAN_SHORT_PAINF3_SAMPLE = 438164849,
	VOX_GROAN_SHORT_PAINF4_SAMPLE = -2072426286,
	VOX_GROAN_SHORT_PAINK1_SAMPLE = 1102955024,
	VOX_GROAN_SHORT_PAINK5_SAMPLE = 1188038153,
	VOX_GROAN_SHORT_PAINK8_SAMPLE = 945912500,
	VOX_GROAN_SHORT_PAINM1_SAMPLE = 401040790,
	VOX_GROAN_SHORT_PAINM10_SAMPLE = -308277707,
	VOX_GROAN_SHORT_PAINM2_SAMPLE = -1896991700,
	VOX_GROAN_SHORT_PAINM3_SAMPLE = -102169414,
	VOX_GROAN_SHORT_PLEASUREF1_SAMPLE = -2131634065,
	VOX_GROAN_SHORT_PLEASUREF2_SAMPLE = 435718613,
	VOX_GROAN_SHORT_PLEASUREF6_SAMPLE = 513101260,
	VOX_GROAN_SHORT_PLEASUREM1_SAMPLE = 1661272484,
	VOX_GROAN_SHORT_PLEASUREM2_SAMPLE = -99856354,
	VOX_GROAN_SHORT_PLEASUREM3_SAMPLE = -1928634232,
	VOX_GROAN_SHORT_PLEASUREM4_SAMPLE = 326104363,
	VOX_GROAN_SHORT_PLEASUREM5_SAMPLE = 1684587965,
	VOX_GROWLF1_SAMPLE = 325025335,
	VOX_GROWLM1_SAMPLE = -257185796,
	VOX_GROWLM2_SAMPLE = 1772287558,
	VOX_GRUNTF1_SAMPLE = 103488457,
	VOX_GRUNTF2_SAMPLE = -1625142669,
	VOX_GRUNTF3_SAMPLE = -400196891,
	VOX_GRUNTK1_SAMPLE = -1283103356,
	VOX_GRUNTM1_SAMPLE = -438320638,
	VOX_GRUNTM10_SAMPLE = 439378383,
	VOX_GRUNTM2_SAMPLE = 2094437304,
	VOX_GRUNTM4_SAMPLE = -1783286131,
	VOX_GRUNTM6_SAMPLE = 2075875233,
	VOX_GRUNT_M11_SAMPLE = 922566550,
	VOX_GUZZLEF1_SAMPLE = 929443257,
	VOX_GUZZLEF2_SAMPLE = -1368425469,
	VOX_GUZZLEK1_SAMPLE = -2100800524,
	VOX_GUZZLEM1_SAMPLE = -728566670,
	VOX_HAPPY_WHISTLEF1_SAMPLE = 842971507,
	VOX_HAPPY_WHISTLEF2_SAMPLE = -1422399287,
	VOX_HAPPY_WHISTLEF3_SAMPLE = -600778657,
	VOX_HAPPY_WHISTLEM1_SAMPLE = -775266120,
	VOX_HAPPY_WHISTLE_LONGK2_SAMPLE = -1850569882,
	VOX_HAPPY_WHISTLE_LONGK5_SAMPLE = 265690821,
	VOX_HAPPY_WHISTLE_SHORTF1_SAMPLE = -1384017044,
	VOX_HAPPY_WHISTLE_SHORTK5_SAMPLE = 524429624,
	VOX_HAPPY_WHISTLE_SHORTK8_SAMPLE = 1643337093,
	VOX_HATE_YUCKF1_SAMPLE = 783803415,
	VOX_HATE_YUCKF10_SAMPLE = 1999039746,
	VOX_HATE_YUCKF14_SAMPLE = 1883973915,
	VOX_HATE_YUCKF16_SAMPLE = -1639626697,
	VOX_HATE_YUCKF2_SAMPLE = -1212238419,
	VOX_HATE_YUCKF3_SAMPLE = -1061583557,
	VOX_HATE_YUCKF4_SAMPLE = 1591546008,
	VOX_HATE_YUCKF5_SAMPLE = 702160910,
	VOX_HATE_YUCKF6_SAMPLE = -1328320076,
	VOX_HATE_YUCKF8_SAMPLE = 1466653875,
	VOX_HATE_YUCKK13_SAMPLE = -420007957,
	VOX_HATE_YUCKK3_SAMPLE = 1964505974,
	VOX_HATE_YUCKK4_SAMPLE = -344756523,
	VOX_HATE_YUCKK6_SAMPLE = 92082169,
	VOX_HATE_YUCKK7_SAMPLE = 1920614255,
	VOX_HATE_YUCKK9_SAMPLE = -1782443416,
	VOX_HATE_YUCKM1_SAMPLE = -851231268,
	VOX_HATE_YUCKM12_SAMPLE = -1786944561,
	VOX_HATE_YUCKM13_SAMPLE = -495299751,
	VOX_HATE_YUCKM14_SAMPLE = 2082391802,
	VOX_HATE_YUCKM2_SAMPLE = 1414163558,
	VOX_HATE_YUCKM3_SAMPLE = 592272624,
	VOX_HATE_YUCKM8_SAMPLE = -1264614024,
	VOX_HATE_YUCK_M2_SAMPLE = 156574251,
	VOX_HATE_YUCK_M8_SAMPLE = -377435339,
	VOX_HEYLGF1_SAMPLE = -1624677984,
	VOX_HEYLGF10_SAMPLE = 580015528,
	VOX_HEYLGF14_SAMPLE = 637505969,
	VOX_HEYLGF2_SAMPLE = 102772762,
	VOX_HEYLGF3_SAMPLE = 1898381452,
	VOX_HEYLGF34_SAMPLE = 399110963,
	VOX_HEYLGF46_SAMPLE = -1232730920,
	VOX_HEYLGF5_SAMPLE = -1740331591,
	VOX_HEYLGF6_SAMPLE = 21885955,
	VOX_HEYLGF7_SAMPLE = 1984611477,
	VOX_HEYLGF8_SAMPLE = -420095740,
	VOX_HEYLGK3_SAMPLE = -997622079,
	VOX_HEYLGK5_SAMPLE = 770366452,
	VOX_HEYLGM1_SAMPLE = 2094905451,
	VOX_HEYLGM2_SAMPLE = -439031343,
	VOX_HEYLGM3_SAMPLE = -1831610041,
	VOX_HEYLGM4_SAMPLE = 213339364,
	VOX_HEYLGM5_SAMPLE = 2075163762,
	VOX_HEYLGM6_SAMPLE = -491180600,
	VOX_HEYLGM7_SAMPLE = -1782702754,
	VOX_HEYLGM8_SAMPLE = 83951823,
	VOX_HEYSHF1_SAMPLE = -1676713644,
	VOX_HEYSHF14_SAMPLE = -1624473164,
	VOX_HEYSHF19_SAMPLE = -509739767,
	VOX_HEYSHF2_SAMPLE = 84291822,
	VOX_HEYSHF22_SAMPLE = 1566734146,
	VOX_HEYSHF25_SAMPLE = -1022958879,
	VOX_HEYSHF3_SAMPLE = 1912668280,
	VOX_HEYSHF6_SAMPLE = 40629495,
	VOX_HEYSHF8_SAMPLE = -439100944,
	VOX_HEYSHK13_SAMPLE = 160466756,
	VOX_HEYSHK7_SAMPLE = -1060980180,
	VOX_HEYSHK9_SAMPLE = 662345515,
	VOX_HEYSHM1_SAMPLE = 2147203231,
	VOX_HEYSHM2_SAMPLE = -420288219,
	VOX_HEYSHM3_SAMPLE = -1846158925,
	VOX_HEYSHM4_SAMPLE = 261180432,
	VOX_HICCUPF1_SAMPLE = 820844161,
	VOX_HICCUPK2_SAMPLE = 474626422,
	VOX_HICCUPM1_SAMPLE = -753283254,
	VOX_HICCUPM2_SAMPLE = 1242603248,
	VOX_HUGGEE_GOODF1_SAMPLE = -543793072,
	VOX_HUGGEE_GOODF2_SAMPLE = 1184838122,
	VOX_HUGGEE_GOODK11_SAMPLE = -525288592,
	VOX_HUGGEE_GOODK2_SAMPLE = -214872153,
	VOX_HUGGEE_GOODM1_SAMPLE = 1013103003,
	VOX_HUGGEE_GOODM3_SAMPLE = -764618569,
	VOX_HUGGEE_GOODM5_SAMPLE = 990870914,
	VOX_HUGGEE_REFUSEF1_SAMPLE = -1615400698,
	VOX_HUGGEE_REFUSEK4_SAMPLE = 1517452228,
	VOX_HUGGEE_REFUSEM1_SAMPLE = 2084710605,
	VOX_HUGGEE_REFUSEM2_SAMPLE = -448038537,
	VOX_HUGGEE_TENTF3_SAMPLE = 1525722621,
	VOX_HUGGER_GOODF1_SAMPLE = -1444390814,
	VOX_HUGGER_GOODK1_SAMPLE = 474359343,
	VOX_HUGGER_GOODK2_SAMPLE = -2058389611,
	VOX_HUGGER_GOODM1_SAMPLE = 1243382185,
	VOX_HUGGER_GOODM3_SAMPLE = -1542266747,
	VOX_HUGGER_TENTF3_SAMPLE = 747541967,
	VOX_HUGGER_TENTK11_SAMPLE = -1295691822,
	VOX_HUGGER_TENTK9_SAMPLE = 2046100124,
	VOX_HUGGER_TENTM2_SAMPLE = -1199735662,
	VOX_HUGGER_TENTM3_SAMPLE = -814068732,
	VOX_HUMWHISTLEM1_SAMPLE = 1319179873,
	VOX_HUNGRY_SATEDF2_SAMPLE = 111365112,
	VOX_HUNGRY_WARNINGF1_SAMPLE = -1330979496,
	VOX_HUNGRY_WARNINGF2_SAMPLE = 698584290,
	VOX_HUNGRY_WARNINGK1_SAMPLE = 84189973,
	VOX_HUNGRY_WARNINGM1_SAMPLE = 1398670483,
	VOX_HUNGRY_WARNINGM7_SAMPLE = -1170366042,
	VOX_INDIFFERENT_HUHF1_SAMPLE = -1371964303,
	VOX_INDIFFERENT_HUHF13_SAMPLE = 1249834573,
	VOX_INDIFFERENT_HUHF15_SAMPLE = -1558359176,
	VOX_INDIFFERENT_HUHF17_SAMPLE = 1293103700,
	VOX_INDIFFERENT_HUHF2_SAMPLE = 925904331,
	VOX_INDIFFERENT_HUHF3_SAMPLE = 1077353821,
	VOX_INDIFFERENT_HUHF4_SAMPLE = -564950786,
	VOX_INDIFFERENT_HUHF5_SAMPLE = -1454065560,
	VOX_INDIFFERENT_HUHF8_SAMPLE = -672807723,
	VOX_INDIFFERENT_HUHK1_SAMPLE = 462881340,
	VOX_INDIFFERENT_HUHK10_SAMPLE = -609274716,
	VOX_INDIFFERENT_HUHK12_SAMPLE = 899765640,
	VOX_INDIFFERENT_HUHK2_SAMPLE = -2103553146,
	VOX_INDIFFERENT_HUHK3_SAMPLE = -174497008,
	VOX_INDIFFERENT_HUHM1_SAMPLE = 1305322938,
	VOX_INDIFFERENT_HUHM13_SAMPLE = 1177229740,
	VOX_INDIFFERENT_HUHM14_SAMPLE = -665875441,
	VOX_INDIFFERENT_HUHM2_SAMPLE = -725289984,
	VOX_INDIFFERENT_HUHM4_SAMPLE = 1034375477,
	VOX_INDIFFERENT_HUHM8_SAMPLE = 873536798,
	VOX_INSULTEE_CRYF1_SAMPLE = 641193522,
	VOX_INSULTEE_CRYF2_SAMPLE = -1086421112,
	VOX_INSULTEE_CRYF3_SAMPLE = -935741666,
	VOX_INSULTEE_CRYF4_SAMPLE = 1448944317,
	VOX_INSULTEE_CRYK4_SAMPLE = -470590224,
	VOX_INSULTEE_CRYK6_SAMPLE = 234700252,
	VOX_INSULTEE_CRYM1_SAMPLE = -977072135,
	VOX_INSULTEE_CRYM2_SAMPLE = 1556766275,
	VOX_INSULTEE_CRYM3_SAMPLE = 734883541,
	VOX_INSULTEE_CRYM5_SAMPLE = -1028731936,
	VOX_INSULTEE_CRYM7_SAMPLE = 748726988,
	VOX_INSULTEE_PISSEDF1_SAMPLE = 1295257690,
	VOX_INSULTEE_PISSEDF2_SAMPLE = -734182944,
	VOX_INSULTEE_PISSEDF3_SAMPLE = -1556450954,
	VOX_INSULTEE_PISSEDF4_SAMPLE = 1029629141,
	VOX_INSULTEE_PISSEDF5_SAMPLE = 1247401027,
	VOX_INSULTEE_PISSEDF6_SAMPLE = -749697543,
	VOX_INSULTEE_PISSEDK1_SAMPLE = -124097001,
	VOX_INSULTEE_PISSEDM1_SAMPLE = -1363097199,
	VOX_INSULTEE_PISSEDM2_SAMPLE = 935958571,
	VOX_INSULTEE_PISSEDM3_SAMPLE = 1087285437,
	VOX_INSULTEE_PISSEDM4_SAMPLE = -559268578,
	VOX_INSULTEE_PISSEDM6_SAMPLE = 816077874,
	VOX_INSULTEE_PISSEDM7_SAMPLE = 1201892516,
	VOX_INSULTEE_STOICF1_SAMPLE = 1708478072,
	VOX_INSULTEE_STOICF2_SAMPLE = -52682814,
	VOX_INSULTEE_STOICF5_SAMPLE = 1656261217,
	VOX_INSULTEE_STOICK10_SAMPLE = -1564975054,
	VOX_INSULTEE_STOICK6_SAMPLE = 1310696854,
	VOX_INSULTEE_STOICK8_SAMPLE = -1448638319,
	VOX_INSULTEE_STOICM1_SAMPLE = -2044618829,
	VOX_INSULTEE_STOICM2_SAMPLE = 522765833,
	VOX_INSULTEE_STOICM3_SAMPLE = 1747973791,
	VOX_INSULTEE_STOICM7_SAMPLE = 1866609286,
	VOX_INSULTERF1_SAMPLE = 436430812,
	VOX_INSULTERF12_SAMPLE = -1784011883,
	VOX_INSULTERF13_SAMPLE = -491973885,
	VOX_INSULTERF16_SAMPLE = -1832392820,
	VOX_INSULTERF2_SAMPLE = -2096482714,
	VOX_INSULTERF3_SAMPLE = -200472848,
	VOX_INSULTERF4_SAMPLE = 1785303891,
	VOX_INSULTERF5_SAMPLE = 493790149,
	VOX_INSULTERF6_SAMPLE = -2073562497,
	VOX_INSULTERF9_SAMPLE = 349761518,
	VOX_INSULTERK1_SAMPLE = -1347610223,
	VOX_INSULTERM1_SAMPLE = -101204457,
	VOX_INSULTERM10_SAMPLE = 2012327256,
	VOX_INSULTERM12_SAMPLE = -1711289228,
	VOX_INSULTERM14_SAMPLE = 1889298753,
	VOX_INSULTERM16_SAMPLE = -1634596755,
	VOX_INSULTERM2_SAMPLE = 1627320237,
	VOX_INSULTERM3_SAMPLE = 402251579,
	VOX_INSULTERM4_SAMPLE = -1986180456,
	VOX_INSULTERM5_SAMPLE = -23430642,
	VOX_INSULTERM6_SAMPLE = 1737698228,
	VOX_INTRIGUED_HMMF1_SAMPLE = -620366079,
	VOX_INTRIGUED_HMMF10_SAMPLE = -2096633280,
	VOX_INTRIGUED_HMMF12_SAMPLE = 1829342060,
	VOX_INTRIGUED_HMMF14_SAMPLE = -2073416103,
	VOX_INTRIGUED_HMMF15_SAMPLE = -210952497,
	VOX_INTRIGUED_HMMF2_SAMPLE = 1108125371,
	VOX_INTRIGUED_HMMF20_SAMPLE = -1473595005,
	VOX_INTRIGUED_HMMF3_SAMPLE = 889951789,
	VOX_INTRIGUED_HMMF5_SAMPLE = -597150952,
	VOX_INTRIGUED_HMMF6_SAMPLE = 1164010146,
	VOX_INTRIGUED_HMMF7_SAMPLE = 845566516,
	VOX_INTRIGUED_HMMK1_SAMPLE = 1856735564,
	VOX_INTRIGUED_HMMK10_SAMPLE = -1948288749,
	VOX_INTRIGUED_HMMK11_SAMPLE = -52934267,
	VOX_INTRIGUED_HMMK12_SAMPLE = 1708202047,
	VOX_INTRIGUED_HMMK13_SAMPLE = 316025001,
	VOX_INTRIGUED_HMMK14_SAMPLE = -1934443254,
	VOX_INTRIGUED_HMMK4_SAMPLE = 515997123,
	VOX_INTRIGUED_HMMK5_SAMPLE = 1774603605,
	VOX_INTRIGUED_HMMK7_SAMPLE = -2016924551,
	VOX_INTRIGUED_HMMK8_SAMPLE = 393687528,
	VOX_INTRIGUED_HMMM1_SAMPLE = 955330250,
	VOX_INTRIGUED_HMMM2_SAMPLE = -1577549968,
	VOX_INTRIGUED_HMMM3_SAMPLE = -687910938,
	VOX_INTRIGUED_HMMM4_SAMPLE = 1218173509,
	VOX_INTRIGUED_HMMM6_SAMPLE = -1500136599,
	VOX_INTRIGUED_HMMM8_SAMPLE = 1093506670,
	VOX_INTRIGUED_HMMM9_SAMPLE = 908764920,
	VOX_JOKEE_BOMBF2_SAMPLE = -430687208,
	VOX_JOKEE_BOMBK4_SAMPLE = -1164318880,
	VOX_JOKEE_BOMBK5_SAMPLE = -845228042,
	VOX_JOKEE_BOMBM1_SAMPLE = -1666599831,
	VOX_JOKEE_BOMBM3_SAMPLE = 1923601733,
	VOX_JOKEE_GIGGLEF2_SAMPLE = -32399217,
	VOX_JOKEE_GIGGLEF3_SAMPLE = -1995010023,
	VOX_JOKEE_GIGGLEK1_SAMPLE = -759787656,
	VOX_JOKEE_GIGGLEK2_SAMPLE = 1270865602,
	VOX_JOKEE_GIGGLEM1_SAMPLE = -2064897794,
	VOX_JOKEE_GIGGLEM2_SAMPLE = 501578052,
	VOX_JOKEE_GIGGLEM3_SAMPLE = 1793214930,
	VOX_JOKEE_GIGGLEM5_SAMPLE = -2088637209,
	VOX_JOKEE_GIGGLEM6_SAMPLE = 445168989,
	VOX_JOKEE_GIGGLEM7_SAMPLE = 1838124491,
	VOX_JOKEE_LAUGHHARDF2_SAMPLE = -1141951284,
	VOX_JOKEE_LAUGHHARDK1_SAMPLE = -1756882117,
	VOX_JOKEE_LAUGHHARDK3_SAMPLE = 2034661911,
	VOX_JOKEE_LAUGHHARDM1_SAMPLE = -1055736643,
	VOX_JOKEE_LAUGHHARDM2_SAMPLE = 1478225159,
	VOX_JOKEE_LAUGHHARDM6_SAMPLE = 1601579294,
	VOX_JOKERF11_SAMPLE = -1760994495,
	VOX_JOKERF3_SAMPLE = 988207152,
	VOX_JOKERF6_SAMPLE = 1250700479,
	VOX_JOKERF8_SAMPLE = -1389100616,
	VOX_JOKERK2_SAMPLE = -129001749,
	VOX_JOKERK4_SAMPLE = 288109534,
	VOX_JOKERK7_SAMPLE = -2010815900,
	VOX_JOKERM1_SAMPLE = 924606679,
	VOX_JOKERM2_SAMPLE = -1374342803,
	VOX_JOKERM3_SAMPLE = -653131269,
	VOX_JOKERM4_SAMPLE = 1198953560,
	VOX_JOKERM5_SAMPLE = 812754126,
	VOX_JOKERM7_SAMPLE = -562051614,
	VOX_JOKERR1_SAMPLE = -96047543,
	VOX_JOKERR2_SAMPLE = 1666138099,
	VOX_JOKERR3_SAMPLE = 340266853,
	VOX_JOKERR4_SAMPLE = -1976788282,
	VOX_JOKERR5_SAMPLE = -47470000,
	VOX_JOKERR6_SAMPLE = 1680014314,
	VOX_JOKER_MONKEY14_SAMPLE = -895094593,
	VOX_JOKER_MONKEY15_SAMPLE = -1113407447,
	VOX_JOKER_MONKEY16_SAMPLE = 615223699,
	VOX_JUGGLER_SINGF7_SAMPLE = 638711595,
	VOX_JUGGLER_SINGF8_SAMPLE = -1230050630,
	VOX_JUGGLER_SINGK6_SAMPLE = -457655824,
	VOX_JUGGLER_SINGM1_SAMPLE = 747015125,
	VOX_JUGGLER_SINGM10_SAMPLE = 38698993,
	VOX_JUGGLER_SINGM2_SAMPLE = -1248863633,
	VOX_JUGGLER_SINGM3_SAMPLE = -1031214343,
	VOX_JUGGLER_SINGM4_SAMPLE = 1559002970,
	VOX_JUGGLER_SINGM5_SAMPLE = 736841676,
	VOX_JUGGLER_SINGM6_SAMPLE = -1293803914,
	VOX_JUGGLER_SINGM7_SAMPLE = -974836000,
	VOX_JUGGLER_SINGM8_SAMPLE = 1431974769,
	VOX_JUGGLER_SINGM9_SAMPLE = 576521191,
	VOX_JUGGLER_SINGR1_SAMPLE = -505641653,
	VOX_JUGGLER_SINGR2_SAMPLE = 2027279601,
	VOX_JUGGLER_SINGR3_SAMPLE = 265479271,
	VOX_JUGGLER_SINGR4_SAMPLE = -1850314300,
	VOX_JUGGLER_TADAF10_SAMPLE = 1211394958,
	VOX_JUGGLER_TADAF5_SAMPLE = -1906675288,
	VOX_JUGGLER_TADAF6_SAMPLE = 391323666,
	VOX_JUGGLER_TADAK1_SAMPLE = 1016712188,
	VOX_JUGGLER_TADAK7_SAMPLE = -705007927,
	VOX_JUGGLER_TADAM1_SAMPLE = 1791192186,
	VOX_JUGGLER_TADAM10_SAMPLE = 1147241583,
	VOX_JUGGLER_TADAM2_SAMPLE = -204849728,
	VOX_JUGGLER_TADAM3_SAMPLE = -2066936490,
	VOX_JUGGLER_TADAM4_SAMPLE = 447322357,
	VOX_JUGGLER_TADAM5_SAMPLE = 1840162915,
	VOX_JUGGLER_TADAM6_SAMPLE = -190318119,
	VOX_JUGGLER_TADAM7_SAMPLE = -2086614705,
	VOX_JUGGLER_TADAM8_SAMPLE = 320853214,
	VOX_JUGGLER_TADAM9_SAMPLE = 1679352904,
	VOX_JUGGLER_TADAR1_SAMPLE = -1483119900,
	VOX_JUGGLER_TADAR2_SAMPLE = 1049637726,
	VOX_JUGGLER_TADAR3_SAMPLE = 1234633672,
	VOX_JUGGLER_TADAR4_SAMPLE = -671902101,
	VOX_JUGGLE_SING_MONKEY13_SAMPLE = -717776028,
	VOX_JUGGLE_SING_MONKEY14_SAMPLE = 1263734471,
	VOX_JUGGLE_SING_MONKEY16_SAMPLE = -1520603157,
	VOX_JUGGLE_STOP_MONKEY11_SAMPLE = -1385016565,
	VOX_JUGGLE_STOP_MONKEY14_SAMPLE = -585586812,
	VOX_JUGGLE_STOP_MONKEY17_SAMPLE = 1142027838,
	VOX_KARATECHOPF1_SAMPLE = -1884179472,
	VOX_KARATECHOPF18_SAMPLE = 1194464444,
	VOX_KARATECHOPF24_SAMPLE = 1705577300,
	VOX_KARATECHOPK1_SAMPLE = 975162813,
	VOX_KARATECHOPK2_SAMPLE = -1558799353,
	VOX_KARATECHOPK3_SAMPLE = -737039215,
	VOX_KARATECHOPM1_SAMPLE = 1816488507,
	VOX_KARATECHOPM15_SAMPLE = 903251936,
	VOX_KISSEE_PASSIONF1_SAMPLE = 727492311,
	VOX_KISSEE_PASSION_M1_SAMPLE = 188570211,
	VOX_KISSEE_PASSION_M3_SAMPLE = -449627313,
	VOX_KISSEE_REFUSEF1_SAMPLE = -1188287247,
	VOX_KISSEE_REFUSEF3_SAMPLE = 1461865949,
	VOX_KISSEE_REFUSEF5_SAMPLE = -1102976792,
	VOX_KISSEE_REFUSE_M1_SAMPLE = -643649772,
	VOX_KISSEE_REFUSE_M2_SAMPLE = 1085013678,
	VOX_KISSEE_REFUSE_M3_SAMPLE = 934071864,
	VOX_KISSER_PASSIONF1_SAMPLE = -1399752801,
	VOX_KISSER_PASSIONF2_SAMPLE = 899163685,
	VOX_KISSER_PASSIONM1_SAMPLE = 1332063828,
	VOX_KISSER_PASSIONM2_SAMPLE = -697499666,
	VOX_KISSER_PASSIONM5_SAMPLE = 1208511053,
	VOX_KISS_POLITEF2_SAMPLE = -887374042,
	VOX_KISS_POLITEF4_SAMPLE = 578296339,
	VOX_KISS_POLITEM3_SAMPLE = 1609062011,
	VOX_KISS_POLITEM4_SAMPLE = -1047739432,
	VOX_KISS_POLITEM5_SAMPLE = -1232342194,
	VOX_LAUGH_APPRECF1_SAMPLE = -688360493,
	VOX_LAUGH_APPRECF2_SAMPLE = 1341203049,
	VOX_LAUGH_APPRECIATIVELYK1_SAMPLE = 1949006078,
	VOX_LAUGH_APPRECIATIVELYK2_SAMPLE = -316528316,
	VOX_LAUGH_APPRECIATIVELYK5_SAMPLE = 1934015719,
	VOX_LAUGH_APPRECK3_SAMPLE = -1923584846,
	VOX_LAUGH_APPRECK4_SAMPLE = 322763025,
	VOX_LAUGH_APPRECM1_SAMPLE = 890022424,
	VOX_LAUGH_APPRECM2_SAMPLE = -1408894046,
	VOX_LAUGH_APPRECM3_SAMPLE = -620573900,
	VOX_LAUGH_DEVILF1_SAMPLE = -1811482285,
	VOX_LAUGH_DEVILK4_SAMPLE = 1371698065,
	VOX_LAUGH_DEVILK9_SAMPLE = 796069676,
	VOX_LAUGH_DEVILM1_SAMPLE = 2012356760,
	VOX_LAUGH_EVILF1_SAMPLE = -1148514210,
	VOX_LAUGH_EVILM1_SAMPLE = 1484769685,
	VOX_LAUGH_GIGGLEF1_SAMPLE = 763869856,
	VOX_LAUGH_GIGGLEF2_SAMPLE = -1265702118,
	VOX_LAUGH_GIGGLEK1_SAMPLE = -1742093075,
	VOX_LAUGH_GIGGLEK2_SAMPLE = 18912599,
	VOX_LAUGH_GIGGLEK3_SAMPLE = 1982309825,
	VOX_LAUGH_GIGGLEM1_SAMPLE = -831298709,
	VOX_LAUGH_GOOFYF1_SAMPLE = 722158742,
	VOX_LAUGH_GOOFYK1_SAMPLE = -1633338661,
	VOX_LAUGH_GOOFYK3_SAMPLE = 1890278391,
	VOX_LAUGH_GOOFYM1_SAMPLE = -922772131,
	VOX_LAUGH_HARDF1_SAMPLE = 1558104372,
	VOX_LAUGH_HARDF2_SAMPLE = -975726450,
	VOX_LAUGH_HARDF3_SAMPLE = -1294948328,
	VOX_LAUGH_HARDF4_SAMPLE = 750009787,
	VOX_LAUGH_HARDF5_SAMPLE = 1538460973,
	VOX_LAUGH_HARDK1_SAMPLE = -378488967,
	VOX_LAUGH_HARDK2_SAMPLE = 1887037123,
	VOX_LAUGH_HARDK3_SAMPLE = 125752917,
	VOX_LAUGH_HARDM1_SAMPLE = -1087762177,
	VOX_LAUGH_RESERVEDF1_SAMPLE = 626601238,
	VOX_LAUGH_RESERVEDF2_SAMPLE = -1135575892,
	VOX_LAUGH_RESERVEDF3_SAMPLE = -883471302,
	VOX_LAUGH_RESERVEDM1_SAMPLE = -961678115,
	VOX_LAUGH_RESERVEDM2_SAMPLE = 1604625767,
	VOX_LAUGH_RESERVEDM3_SAMPLE = 681809393,
	VOX_LAUGH_SHORTF1_SAMPLE = 1916575592,
	VOX_LAUGH_SHORTF2_SAMPLE = -348795182,
	VOX_LAUGH_SHORTF3_SAMPLE = -1674379708,
	VOX_LAUGH_SHORTM1_SAMPLE = -1849145693,
	VOX_LAUGH_SHORTM2_SAMPLE = 146872089,
	VOX_LIKE_HMMF1_SAMPLE = -1571311339,
	VOX_LIKE_HMMF11_SAMPLE = -291283731,
	VOX_LIKE_HMMF12_SAMPLE = 2007633239,
	VOX_LIKE_HMMF3_SAMPLE = 1280954425,
	VOX_LIKE_HMMK10_SAMPLE = -1854079192,
	VOX_LIKE_HMMK12_SAMPLE = 2138217988,
	VOX_LIKE_HMMK13_SAMPLE = 141930130,
	VOX_LIKE_HMMK15_SAMPLE = -518648921,
	VOX_LIKE_HMMK7_SAMPLE = -23434643,
	VOX_LIKE_HMMK9_SAMPLE = 421676906,
	VOX_LIKE_HMMM1_SAMPLE = 1101228254,
	VOX_LIKE_HMMM10_SAMPLE = -1779334246,
	VOX_LIKE_HMMM18_SAMPLE = -1691743320,
	VOX_LIKE_HMMM2_SAMPLE = -659932828,
	VOX_LIKE_HMMM23_SAMPLE = 668303843,
	VOX_LIKE_HMMM24_SAMPLE = -1179577280,
	VOX_LIKE_HMMM25_SAMPLE = -826923818,
	VOX_LIKE_HMMM27_SAMPLE = 548947450,
	VOX_LIKE_HMMM30_SAMPLE = -1480072936,
	VOX_LIKE_HMMM9_SAMPLE = 1333321964,
	VOX_LIKE_YUMF1_SAMPLE = 1786409047,
	VOX_LIKE_YUMF11_SAMPLE = 1991856528,
	VOX_LIKE_YUMF13_SAMPLE = -1732824900,
	VOX_LIKE_YUMF17_SAMPLE = -1613040475,
	VOX_LIKE_YUMF2_SAMPLE = -210558483,
	VOX_LIKE_YUMF3_SAMPLE = -2072768133,
	VOX_LIKE_YUMF5_SAMPLE = 1830270030,
	VOX_LIKE_YUMF7_SAMPLE = -2095458974,
	VOX_LIKE_YUMK1_SAMPLE = -539750886,
	VOX_LIKE_YUMK10_SAMPLE = 157741653,
	VOX_LIKE_YUMK11_SAMPLE = 2120336067,
	VOX_LIKE_YUMK12_SAMPLE = -412576903,
	VOX_LIKE_YUMK13_SAMPLE = -1871731729,
	VOX_LIKE_YUMK14_SAMPLE = 235615820,
	VOX_LIKE_YUMK2_SAMPLE = 1188913056,
	VOX_LIKE_YUMK3_SAMPLE = 836398902,
	VOX_LIKE_YUMK4_SAMPLE = -1346438507,
	VOX_LIKE_YUMK6_SAMPLE = 1102093241,
	VOX_LIKE_YUMK9_SAMPLE = -787511768,
	VOX_LIKE_YUMM1_SAMPLE = -1987139172,
	VOX_LIKE_YUMM12_SAMPLE = -471470133,
	VOX_LIKE_YUMM14_SAMPLE = 176573182,
	VOX_LIKE_YUMM2_SAMPLE = 277346342,
	VOX_LIKE_YUMM3_SAMPLE = 1736493232,
	VOX_LIKE_YUMM6_SAMPLE = 401226815,
	VOX_LIKE_YUMM7_SAMPLE = 1626148009,
	VOX_LONELY_CRYF1_SAMPLE = 1751636491,
	VOX_LONELY_CRYM1_SAMPLE = -1953299520,
	VOX_LTUBEE_FOLLOWF12_SAMPLE = -1152018613,
	VOX_LTUBEE_FOLLOWF5_SAMPLE = 1456995512,
	VOX_LTUBEE_FOLLOWF7_SAMPLE = -1193697900,
	VOX_LTUBEE_FOLLOWM1_SAMPLE = -1303453334,
	VOX_LTUBEE_FOLLOWM13_SAMPLE = -1073264580,
	VOX_LTUBEE_FOLLOWM4_SAMPLE = -1037822491,
	VOX_LTUBEE_GETOUTF3_SAMPLE = 1118434777,
	VOX_LTUBEE_GETOUTF7_SAMPLE = 1170485696,
	VOX_LTUBEE_GETOUTF9_SAMPLE = -1568924473,
	VOX_LTUBEE_GETOUTM14_SAMPLE = 848844254,
	VOX_LTUBEE_GETOUTM4_SAMPLE = 1060747697,
	VOX_LTUBEE_GETOUTM6_SAMPLE = -784869219,
	VOX_LTUBEE_PLAY_REJECTF10_SAMPLE = 305506543,
	VOX_LTUBEE_PLAY_REJECTF2_SAMPLE = 337813237,
	VOX_LTUBEE_PLAY_REJECTF8_SAMPLE = -185108501,
	VOX_LTUBEE_PLAY_REJECTM3_SAMPLE = -2133755992,
	VOX_LTUBEE_PLAY_REJECTM5_SAMPLE = 1773327005,
	VOX_LTUBEE_SWITCHF1_SAMPLE = 1814152002,
	VOX_LTUBEE_SWITCHF2_SAMPLE = -181890312,
	VOX_LTUBEE_SWITCHM1_SAMPLE = -1881859447,
	VOX_LTUBER_GETINF1_SAMPLE = 1596681605,
	VOX_LTUBER_GETINF13_SAMPLE = -262155687,
	VOX_LTUBER_GETINF21_SAMPLE = 897376438,
	VOX_LTUBER_GETINM2_SAMPLE = 634840564,
	VOX_LTUBER_GETINM8_SAMPLE = -989655830,
	VOX_LTUBER_GETOUTF12_SAMPLE = 1348718146,
	VOX_LTUBER_GETOUTF16_SAMPLE = 1460537947,
	VOX_LTUBER_GETOUTF18_SAMPLE = -1330239652,
	VOX_LTUBER_GETOUTM13_SAMPLE = 724635957,
	VOX_LTUBER_GETOUTM19_SAMPLE = -874186709,
	VOX_LTUBER_GETOUTM3_SAMPLE = 1680848515,
	VOX_LTUBER_PLAY_ACCEPTF5_SAMPLE = -1587400376,
	VOX_LTUBER_PLAY_ACCEPTF7_SAMPLE = 1332498532,
	VOX_LTUBER_PLAY_ACCEPTM10_SAMPLE = -465281449,
	VOX_LTUBER_PLAY_ACCEPTM16_SAMPLE = 220724066,
	VOX_LTUBER_PLAY_ACCEPTM3_SAMPLE = -1409987146,
	VOX_LTUBER_PLAY_REJECTF12_SAMPLE = -404418776,
	VOX_LTUBER_PLAY_REJECTF4_SAMPLE = 572697493,
	VOX_LTUBER_PLAY_REJECTF6_SAMPLE = -869479751,
	VOX_LTUBER_PLAY_REJECTM3_SAMPLE = 1605560317,
	VOX_LTUBER_PLAY_REJECTM5_SAMPLE = -1227799864,
	VOX_LTUBER_PLAY_REJECTM9_SAMPLE = -1083765021,
	VOX_LTUBER_PLAY_STARTF12_SAMPLE = -866659044,
	VOX_LTUBER_PLAY_STARTF16_SAMPLE = -885387003,
	VOX_LTUBER_PLAY_STARTF4_SAMPLE = 614599983,
	VOX_LTUBER_PLAY_STARTM11_SAMPLE = 1493920583,
	VOX_LTUBER_PLAY_STARTM13_SAMPLE = -1224406421,
	VOX_LTUBER_PLAY_STOPF5_SAMPLE = 1265044201,
	VOX_LTUBER_PLAY_STOPF7_SAMPLE = -1519817787,
	VOX_LTUBER_PLAY_STOPM1_SAMPLE = -1342302405,
	VOX_LTUBER_PLAY_STOPM4_SAMPLE = -543890508,
	VOX_LTUBER_SWITCHF1_SAMPLE = -1454155309,
	VOX_LTUBER_SWITCHF2_SAMPLE = 811206761,
	VOX_LTUBER_SWITCHM1_SAMPLE = 1252491288,
	VOX_LTUB_BATHEAF12_SAMPLE = 799994287,
	VOX_LTUB_BATHEAF14_SAMPLE = -959621990,
	VOX_LTUB_BATHEAF6_SAMPLE = 1350815115,
	VOX_LTUB_BATHEAM11_SAMPLE = -1158524940,
	VOX_LTUB_BATHEAM15_SAMPLE = -1113617427,
	VOX_LTUB_BATHEAM9_SAMPLE = 600312273,
	VOX_LTUB_BATHEBF11_SAMPLE = -1542320133,
	VOX_LTUB_BATHEBF16_SAMPLE = 980851288,
	VOX_LTUB_BATHEBF2_SAMPLE = 1437120459,
	VOX_LTUB_BATHEBM12_SAMPLE = 827240864,
	VOX_LTUB_BATHEBM14_SAMPLE = -668134251,
	VOX_LTUB_BATHEBM7_SAMPLE = -969500017,
	VOX_LTUB_LUXAF11_SAMPLE = 441351435,
	VOX_LTUB_LUXAF3_SAMPLE = 1976395567,
	VOX_LTUB_LUXAF9_SAMPLE = -1793552847,
	VOX_LTUB_LUXAM10_SAMPLE = 1629266556,
	VOX_LTUB_LUXAM2_SAMPLE = -515993998,
	VOX_LTUB_LUXAM6_SAMPLE = -430749077,
	VOX_LTUB_LUXBF16_SAMPLE = -1767946426,
	VOX_LTUB_LUXBF9_SAMPLE = -1755434904,
	VOX_LTUB_LUXBM13_SAMPLE = -358589400,
	VOX_LTUB_LUXBM15_SAMPLE = 63174941,
	VOX_LTUB_LUXCF10_SAMPLE = -952072938,
	VOX_LTUB_LUXCF2_SAMPLE = 21922775,
	VOX_LTUB_LUXCF6_SAMPLE = 102975438,
	VOX_LTUB_LUXCF8_SAMPLE = -509908279,
	VOX_LTUB_LUXCM1_SAMPLE = 2075331494,
	VOX_LTUB_LUXCM11_SAMPLE = -1139647903,
	VOX_LTUB_LUXCM7_SAMPLE = -1831817581,
	VOX_MARRY_I_DOF1_SAMPLE = 508212557,
	VOX_MARRY_I_DOM1_SAMPLE = -37852026,
	VOX_MARRY_PROPOSEE_ACCEPTF1_SAMPLE = 1117983470,
	VOX_MARRY_PROPOSEE_ACCEPTF2_SAMPLE = -609598636,
	VOX_MARRY_PROPOSEE_ACCEPTM1_SAMPLE = -1588081883,
	VOX_MARRY_PROPOSERF1_SAMPLE = 1842121570,
	VOX_MARRY_PROPOSERM1_SAMPLE = -1908911447,
	VOX_MARSH_EATF1_SAMPLE = 1067316074,
	VOX_MARSH_EATF2_SAMPLE = -1500208432,
	VOX_MARSH_EATF3_SAMPLE = -778857914,
	VOX_MARSH_EATK1_SAMPLE = -1976333017,
	VOX_MARSH_EATK2_SAMPLE = 322624669,
	VOX_MARSH_EATK3_SAMPLE = 1681779723,
	VOX_MARSH_EATM1_SAMPLE = -597087583,
	VOX_MARSH_EATM2_SAMPLE = 1163950875,
	VOX_MARSH_EATM3_SAMPLE = 845630349,
	VOX_MARSH_ROASTF2_SAMPLE = -1927036594,
	VOX_MARSH_ROASTF3_SAMPLE = -98242088,
	VOX_MARSH_ROASTF4_SAMPLE = 1681941627,
	VOX_MARSH_ROASTF5_SAMPLE = 323441901,
	VOX_MARSH_ROASTF6_SAMPLE = -1974598313,
	VOX_MARSH_ROASTK1_SAMPLE = -1585123655,
	VOX_MARSH_ROASTK2_SAMPLE = 948813571,
	VOX_MARSH_ROASTK3_SAMPLE = 1334480789,
	VOX_MARSH_ROASTK4_SAMPLE = -772924874,
	VOX_MARSH_ROASTM2_SAMPLE = 1859590277,
	VOX_MARSH_ROASTM3_SAMPLE = 433072147,
	VOX_MARSH_ROASTM4_SAMPLE = -2018198096,
	VOX_MARSH_ROASTM5_SAMPLE = -256668378,
	VOX_MARSH_ROASTM6_SAMPLE = 1773853852,
	VOX_MOANF1_SAMPLE = -1027505533,
	VOX_MOANF2_SAMPLE = 1539887929,
	VOX_MOANM1_SAMPLE = 557144904,
	VOX_MOANM2_SAMPLE = -1204024590,
	VOX_MUMBLEF1_SAMPLE = -387588335,
	VOX_MUMBLEF2_SAMPLE = 1911328427,
	VOX_MUMBLEK5_SAMPLE = 1512465733,
	VOX_MUMBLEK6_SAMPLE = -1020316417,
	VOX_MUMBLEK8_SAMPLE = 613882360,
	VOX_MUMBLEM1_SAMPLE = 185665242,
	VOX_MUMBLEM2_SAMPLE = -1843898528,
	VOX_NO_UHUHF1_SAMPLE = 479835932,
	VOX_NO_UHUHF2_SAMPLE = -2054101338,
	VOX_NO_UHUHK10_SAMPLE = -400651894,
	VOX_NO_UHUHK11_SAMPLE = -1625704164,
	VOX_NO_UHUHK14_SAMPLE = -277656173,
	VOX_NO_UHUHK4_SAMPLE = -648200738,
	VOX_NO_UHUHK8_SAMPLE = -789876235,
	VOX_NO_UHUHM1_SAMPLE = -9605417,
	VOX_NO_UHUHM11_SAMPLE = -1684748882,
	VOX_NO_UHUHM17_SAMPLE = 1928814747,
	VOX_NO_UHUHM2_SAMPLE = 1717845869,
	VOX_NO_UHUHM3_SAMPLE = 291704827,
	VOX_NPC_SOCIALF1_SAMPLE = -1305280994,
	VOX_OOOOF1_SAMPLE = 1846820492,
	VOX_OOOOF2_SAMPLE = -149065930,
	VOX_OOOOF4_SAMPLE = 511625731,
	VOX_OOOOF5_SAMPLE = 1769601685,
	VOX_OOOOF6_SAMPLE = -261051601,
	VOX_OOOOK2_SAMPLE = 1119031675,
	VOX_OOOOK6_SAMPLE = 1172231522,
	VOX_OOOOM1_SAMPLE = -1914640569,
	VOX_OOOOM2_SAMPLE = 350861053,
	VOX_OOOOM4_SAMPLE = -41282616,
	VOX_OOOOM6_SAMPLE = 327447268,
	VOX_OOOOM9_SAMPLE = -2093256843,
	VOX_OOPSF1_SAMPLE = 1934762833,
	VOX_OOPSF11_SAMPLE = -1614553866,
	VOX_OOPSF12_SAMPLE = 113937740,
	VOX_OOPSF16_SAMPLE = 27740501,
	VOX_OOPSF4_SAMPLE = 54056926,
	VOX_OOPSF7_SAMPLE = -1708030364,
	VOX_OOPSF8_SAMPLE = 177118197,
	VOX_OOPSK1_SAMPLE = -956539620,
	VOX_OOPSK2_SAMPLE = 1609895078,
	VOX_OOPSK3_SAMPLE = 686963760,
	VOX_OOPSK4_SAMPLE = -1231640173,
	VOX_OOPSK7_SAMPLE = 799012905,
	VOX_OOPSM1_SAMPLE = -1868105062,
	VOX_OOPSM11_SAMPLE = -1818873065,
	VOX_OOPSM15_SAMPLE = -1795426546,
	VOX_OOPSM17_SAMPLE = 2062915106,
	VOX_OOPSM3_SAMPLE = 2124979126,
	VOX_OOPSM4_SAMPLE = -523497963,
	VOX_OOPSM9_SAMPLE = -1635945816,
	VOX_OUCH_BIGF1_SAMPLE = 2044971814,
	VOX_OUCH_BIGK1_SAMPLE = -867322517,
	VOX_OUCH_BIGK2_SAMPLE = 1430578385,
	VOX_OUCH_BIGK6_SAMPLE = 1378427080,
	VOX_OUCH_BIGM1_SAMPLE = -1709763859,
	VOX_OUCH_BIGM2_SAMPLE = 52314967,
	VOX_OUCH_SMALLF1_SAMPLE = -1616895982,
	VOX_OUCH_SMALLF10_SAMPLE = 134024777,
	VOX_OUCH_SMALLF2_SAMPLE = 111767976,
	VOX_OUCH_SMALLF3_SAMPLE = 1907245374,
	VOX_OUCH_SMALLF4_SAMPLE = -271919971,
	VOX_OUCH_SMALLF8_SAMPLE = -428042058,
	VOX_OUCH_SMALLK4_SAMPLE = 1516546768,
	VOX_OUCH_SMALLK5_SAMPLE = 761502278,
	VOX_OUCH_SMALLM1_SAMPLE = 2085943769,
	VOX_OUCH_SMALLM2_SAMPLE = -446846877,
	VOX_OUCH_SMALLM3_SAMPLE = -1839556363,
	VOX_OUCH_SMALLM5_SAMPLE = 2067348928,
	VOX_OUCH_SMALLM7_SAMPLE = -1791533844,
	VOX_OUCH_SMALLM8_SAMPLE = 92815741,
	VOX_PHONE_CHANCEINF1_SAMPLE = 312497137,
	VOX_PHONE_CHANCEINF11_SAMPLE = 1232375150,
	VOX_PHONE_CHANCEINF8_SAMPLE = 1803348821,
	VOX_PHONE_CHANCEINK2_SAMPLE = 1040677894,
	VOX_PHONE_CHANCEINK6_SAMPLE = 963295263,
	VOX_PHONE_CHANCEINM1_SAMPLE = -246117830,
	VOX_PHONE_CHANCEINM2_SAMPLE = 1750981504,
	VOX_PHONE_CHANCEINM4_SAMPLE = -2126610763,
	VOX_PHONE_CHANCEINM5_SAMPLE = -164016605,
	VOX_PHONE_TALKF1_SAMPLE = -433766378,
	VOX_PHONE_TALKF2_SAMPLE = 2133594540,
	VOX_PHONE_TALKF3_SAMPLE = 137044282,
	VOX_PHONE_TALKK1_SAMPLE = 1401634395,
	VOX_PHONE_TALKK2_SAMPLE = -897421343,
	VOX_PHONE_TALKK3_SAMPLE = -1115332745,
	VOX_PHONE_TALKM1_SAMPLE = 97622493,
	VOX_PHONE_TALKM2_SAMPLE = -1663514521,
	VOX_PHONE_TALKM3_SAMPLE = -337643279,
	VOX_PURRF1_SAMPLE = 4832896,
	VOX_PURRM1_SAMPLE = -474126517,
	VOX_PURRM2_SAMPLE = 2058630897,
	VOX_PURRM7_SAMPLE = 182370942,
	VOX_RASPBERRYF1_SAMPLE = 99520196,
	VOX_RASPBERRYK1_SAMPLE = -1337921399,
	VOX_RASPBERRYK10_SAMPLE = 1611637845,
	VOX_RASPBERRYK4_SAMPLE = -1070988282,
	VOX_RASPBERRYK5_SAMPLE = -1221774192,
	VOX_RASPBERRYM1_SAMPLE = -434481393,
	VOX_REFUSE_FUNF1_SAMPLE = -1722979863,
	VOX_REFUSE_FUNF2_SAMPLE = 4470867,
	VOX_RELIEVED_SIGHF1_SAMPLE = 2033512598,
	VOX_RELIEVED_SIGHF10_SAMPLE = -305209952,
	VOX_RELIEVED_SIGHF2_SAMPLE = -532831956,
	VOX_RELIEVED_SIGHF3_SAMPLE = -1757769286,
	VOX_RELIEVED_SIGHF5_SAMPLE = 2119775375,
	VOX_RELIEVED_SIGHK1_SAMPLE = -862286117,
	VOX_RELIEVED_SIGHK12_SAMPLE = 186134495,
	VOX_RELIEVED_SIGHK6_SAMPLE = 1392384888,
	VOX_RELIEVED_SIGHM1_SAMPLE = -1698682531,
	VOX_RELIEVED_SIGHM2_SAMPLE = 63535335,
	VOX_ROOSTER_CROWF1_SAMPLE = -1998073842,
	VOX_ROOSTER_CROWF8_SAMPLE = -247764822,
	VOX_ROOSTER_CROWK2_SAMPLE = -1539244039,
	VOX_ROOSTER_CROWM1_SAMPLE = 1796409797,
	VOX_SCARED_FREAKOUTF1_SAMPLE = 882428036,
	VOX_SCARED_FREAKOUTF2_SAMPLE = -1382966978,
	VOX_SCARED_FREAKOUTK3_SAMPLE = 1865996261,
	VOX_SCARED_FREAKOUTK5_SAMPLE = -2040827184,
	VOX_SCARED_FREAKOUTM1_SAMPLE = -680783537,
	VOX_SCARED_FREAKOUTM2_SAMPLE = 1315258613,
	VOX_SCARED_FREAKOUTM4_SAMPLE = -1492720192,
	VOX_SCARED_WHIMPERF1_SAMPLE = -728883810,
	VOX_SCARED_WHIMPERF2_SAMPLE = 1300712484,
	VOX_SCARED_WHIMPERK2_SAMPLE = -131517847,
	VOX_SCARED_WHIMPERM1_SAMPLE = 930792533,
	VOX_SCARED_WHIMPERM2_SAMPLE = -1368156689,
	VOX_SCAREE_ANNOYEDF1_SAMPLE = -1855860204,
	VOX_SCAREE_ANNOYEDF2_SAMPLE = 141067182,
	VOX_SCAREE_ANNOYEDF6_SAMPLE = 252004279,
	VOX_SCAREE_ANNOYEDK3_SAMPLE = -893268619,
	VOX_SCAREE_ANNOYEDK4_SAMPLE = 1420122326,
	VOX_SCAREE_ANNOYEDM2_SAMPLE = -342074779,
	VOX_SCAREE_ANNOYEDM4_SAMPLE = 50331472,
	VOX_SCAREE_ANNOYEDM5_SAMPLE = 1979240390,
	VOX_SCAREE_CAMPGHOSTF1_SAMPLE = 273848766,
	VOX_SCAREE_CAMPGHOSTF3_SAMPLE = -27461486,
	VOX_SCAREE_CAMPGHOSTF4_SAMPLE = 1614310705,
	VOX_SCAREE_CAMPGHOSTK1_SAMPLE = -1510152205,
	VOX_SCAREE_CAMPGHOSTK2_SAMPLE = 1022735945,
	VOX_SCAREE_CAMPGHOSTK3_SAMPLE = 1274185439,
	VOX_SCAREE_CAMPGHOSTK4_SAMPLE = -711584900,
	VOX_SCAREE_CAMPGHOSTM1_SAMPLE = -207208331,
	VOX_SCAREE_CAMPGHOSTM2_SAMPLE = 1789858255,
	VOX_SCAREE_CAMPGHOSTM3_SAMPLE = 497557849,
	VOX_SCAREE_CAMPGHOSTM4_SAMPLE = -2083736326,
	VOX_SCAREE_CAMPGHOSTM5_SAMPLE = -187988884,
	VOX_SCAREE_EEKF3_SAMPLE = 692596561,
	VOX_SCAREE_EEKF5_SAMPLE = -1070888348,
	VOX_SCAREE_EEKK6_SAMPLE = -326326893,
	VOX_SCAREE_EEKM5_SAMPLE = 601838511,
	VOX_SCAREE_EEKM7_SAMPLE = -841928061,
	VOX_SCAREE_LAUGHF4_SAMPLE = -83905,
	VOX_SCAREE_LAUGHF5_SAMPLE = -1996912471,
	VOX_SCAREE_LAUGHK3_SAMPLE = -734768175,
	VOX_SCAREE_LAUGHK4_SAMPLE = 1246807666,
	VOX_SCAREE_LAUGHM2_SAMPLE = -177617727,
	VOX_SCAREE_LAUGHM7_SAMPLE = -2063388594,
	VOX_SCAREE_SCOLDF1_SAMPLE = -1484656422,
	VOX_SCAREE_SCOLDF5_SAMPLE = -1595132733,
	VOX_SCAREE_SCOLDF6_SAMPLE = 971335033,
	VOX_SCAREE_SCOLDK1_SAMPLE = 305106583,
	VOX_SCAREE_SCOLDK2_SAMPLE = -1960386771,
	VOX_SCAREE_SCOLDM3_SAMPLE = -1434761155,
	VOX_SCAREE_SCOLDM6_SAMPLE = -636371790,
	VOX_SCARERF1_SAMPLE = -157681542,
	VOX_SCARERF2_SAMPLE = 1871751616,
	VOX_SCARERF8_SAMPLE = -1891286818,
	VOX_SCARERK7_SAMPLE = -1437326590,
	VOX_SCARERK8_SAMPLE = 988495507,
	VOX_SCARERM2_SAMPLE = -1939574773,
	VOX_SCARERM4_SAMPLE = 1695012158,
	VOX_SCARERM7_SAMPLE = -66157436,
	VOX_SCREAMF1_SAMPLE = 956543175,
	VOX_SCREAMF2_SAMPLE = -1609899651,
	VOX_SCREAMK1_SAMPLE = -1934766454,
	VOX_SCREAMK2_SAMPLE = 363110192,
	VOX_SCREAMK5_SAMPLE = -1950348653,
	VOX_SCREAMM1_SAMPLE = -621319924,
	VOX_SCREAMM10_SAMPLE = -38312861,
	VOX_SCREAMM11_SAMPLE = -1968155403,
	VOX_SCREAMM2_SAMPLE = 1140734134,
	VOX_SCREAMM3_SAMPLE = 888735776,
	VOX_SCREAMM4_SAMPLE = -1432511101,
	VOX_SCREAM_MOCKF1_SAMPLE = -634316581,
	VOX_SCREAM_MOCKF2_SAMPLE = 1127762273,
	VOX_SCREAM_MOCKM1_SAMPLE = 969261328,
	VOX_SCREAM_MOCKM2_SAMPLE = -1597206358,
	VOX_SCREAM_MOCKM3_SAMPLE = -674521028,
	VOX_SEXY_GROWLF1_SAMPLE = 92802789,
	VOX_SEXY_GROWLF2_SAMPLE = -1669243041,
	VOX_SEXY_GROWLM1_SAMPLE = -428026066,
	VOX_SEXY_GROWLM2_SAMPLE = 2138408596,
	VOX_SHOO_LONGK4_SAMPLE = -1478493370,
	VOX_SHOO_LONGK6_SAMPLE = 1238473322,
	VOX_SHOO_SHORTK1_SAMPLE = 1965885215,
	VOX_SHOO_SHORTK8_SAMPLE = 217169851,
	VOX_SING_BOREDF1_SAMPLE = -1071425773,
	VOX_SING_BOREDF2_SAMPLE = 1495926441,
	VOX_SING_BOREDF3_SAMPLE = 774714943,
	VOX_SING_BOREDK1_SAMPLE = 1972185438,
	VOX_SING_BOREDK3_SAMPLE = -1685895054,
	VOX_SING_BOREDK4_SAMPLE = 99081681,
	VOX_SING_BOREDK5_SAMPLE = 1927343431,
	VOX_SING_BOREDK6_SAMPLE = -337003267,
	VOX_SING_BOREDK7_SAMPLE = -1662088085,
	VOX_SING_BOREDK9_SAMPLE = 2069274988,
	VOX_SING_BOREDM1_SAMPLE = 601329368,
	VOX_SING_CAMP_BIG_FF1_SAMPLE = 2010168373,
	VOX_SING_CAMP_BIG_FF2_SAMPLE = -287707761,
	VOX_SING_CAMP_BIG_FF3_SAMPLE = -1713447655,
	VOX_SING_CAMP_BIG_FM1_SAMPLE = -1809553922,
	VOX_SING_CAMP_BIG_FM2_SAMPLE = 221066308,
	VOX_SING_CAMP_BIG_FM3_SAMPLE = 2049574098,
	VOX_SING_CAMP_BIG_MM1_SAMPLE = -1737389537,
	VOX_SING_CAMP_BIG_MM2_SAMPLE = 24697765,
	VOX_SING_CAMP_BIG_MM3_SAMPLE = 1988094771,
	VOX_SING_CAMP_MED_FF1_SAMPLE = -1308985737,
	VOX_SING_CAMP_MED_FF2_SAMPLE = 687024077,
	VOX_SING_CAMP_MED_FF3_SAMPLE = 1609832283,
	VOX_SING_CAMP_MED_FM1_SAMPLE = 1376694204,
	VOX_SING_CAMP_MED_FM2_SAMPLE = -888668666,
	VOX_SING_CAMP_MED_FM3_SAMPLE = -1140797808,
	VOX_SING_CAMP_MED_MM1_SAMPLE = 1583038557,
	VOX_SING_CAMP_MED_MM2_SAMPLE = -950922777,
	VOX_SING_CAMP_MED_MM3_SAMPLE = -1336598159,
	VOX_SING_CAMP_SMALL_FF1_SAMPLE = 968807201,
	VOX_SING_CAMP_SMALL_FF2_SAMPLE = -1598586213,
	VOX_SING_CAMP_SMALL_FF3_SAMPLE = -676285939,
	VOX_SING_CAMP_SMALL_FM1_SAMPLE = -632681750,
	VOX_SING_CAMP_SMALL_FM2_SAMPLE = 1128487760,
	VOX_SING_CAMP_SMALL_FM3_SAMPLE = 876899270,
	VOX_SING_CAMP_SMALL_MM1_SAMPLE = -702552821,
	VOX_SING_CAMP_SMALL_MM2_SAMPLE = 1326888113,
	VOX_SING_CAMP_SMALL_MM3_SAMPLE = 940672039,
	VOX_SING_FUNK5_SAMPLE = 831893793,
	VOX_SING_FUNK7_SAMPLE = -543436787,
	VOX_SING_FUNK9_SAMPLE = 941882634,
	VOX_SING_HAPPYF1_SAMPLE = 1470148035,
	VOX_SING_HAPPYF2_SAMPLE = -827720583,
	VOX_SING_HAPPYF3_SAMPLE = -1179726609,
	VOX_SING_HAPPYF4_SAMPLE = 667572556,
	VOX_SING_HAPPYM1_SAMPLE = -1269533688,
	VOX_SING_HAPPYM14_SAMPLE = -36059266,
	VOX_SING_HAPPYM17_SAMPLE = 1691391684,
	VOX_SING_HAPPYM19_SAMPLE = -2090288189,
	VOX_SING_HAPPYM2_SAMPLE = 761079218,
	VOX_SING_HAPPYM21_SAMPLE = -1499570126,
	VOX_SING_HAPPYM26_SAMPLE = 955970961,
	VOX_SING_HAPPYM3_SAMPLE = 1515853092,
	VOX_SING_HAPPYM32_SAMPLE = 646709449,
	VOX_SING_HAPPYM4_SAMPLE = -1002536825,
	VOX_SING_HAPPYM45_SAMPLE = -139918419,
	VOX_SING_HAPPYNPCF1_SAMPLE = -1759735657,
	VOX_SING_HAPPYNPCF3_SAMPLE = 2031284667,
	VOX_SING_HAPPY_SHORTF1_SAMPLE = 833105415,
	VOX_SING_HAPPY_SHORTF2_SAMPLE = -1465811011,
	VOX_SING_HAPPY_SHORTF3_SAMPLE = -542748885,
	VOX_SING_HAPPY_SHORTM1_SAMPLE = -765659188,
	VOX_SING_HAPPY_SHORTM2_SAMPLE = 1263904374,
	VOX_SING_SERENADEF1_SAMPLE = 621286936,
	VOX_SING_SERENADEF2_SAMPLE = -1140766814,
	VOX_SING_SERENADEF3_SAMPLE = -888768716,
	VOX_SING_SERENADEK1_SAMPLE = -1868142507,
	VOX_SING_SERENADEM1_SAMPLE = -956510253,
	VOX_SING_SHOWERF1_SAMPLE = 345101402,
	VOX_SING_SHOWERF2_SAMPLE = -1919384096,
	VOX_SING_SHOWERF3_SAMPLE = -90196618,
	VOX_SING_SHOWERF4_SAMPLE = 1694179541,
	VOX_SING_SHOWERF5_SAMPLE = 335286339,
	VOX_SING_SHOWERK4_SAMPLE = -782934376,
	VOX_SING_SHOWERK5_SAMPLE = -1504547314,
	VOX_SING_SHOWERM1_SAMPLE = -144372335,
	VOX_SING_SHOWERM12_SAMPLE = -1658160942,
	VOX_SING_SHOWERM5_SAMPLE = -267859576,
	VOX_SINK_WASH_HIGHF1_SAMPLE = -507765547,
	VOX_SINK_WASH_HIGHF2_SAMPLE = 2025147759,
	VOX_SINK_WASH_HIGHF3_SAMPLE = 263355897,
	VOX_SINK_WASH_HIGHF4_SAMPLE = -1848186790,
	VOX_SINK_WASH_HIGHK1_SAMPLE = 1410491032,
	VOX_SINK_WASH_HIGHK2_SAMPLE = -853855454,
	VOX_SINK_WASH_HIGHM1_SAMPLE = 38323486,
	VOX_SINK_WASH_HIGHM2_SAMPLE = -1690200924,
	VOX_SINK_WASH_HIGHM3_SAMPLE = -330914766,
	VOX_SINK_WASH_HIGHM4_SAMPLE = 1914843537,
	VOX_SLAPBACK_OHYEAHF11_SAMPLE = 481766218,
	VOX_SLAPBACK_OHYEAHF7_SAMPLE = 1027865971,
	VOX_SLAPBACK_OHYEAHM4_SAMPLE = 1203664130,
	VOX_SLAPBACK_YOUJERKF12_SAMPLE = 1910715221,
	VOX_SLAPBACK_YOUJERKF6_SAMPLE = -1011336717,
	VOX_SLAPBACK_YOUJERKF9_SAMPLE = 1392976994,
	VOX_SLAPBACK_YOUJERKM5_SAMPLE = -1186614910,
	VOX_SLAPBACK_YOUJERKM6_SAMPLE = 541909048,
	VOX_SLAPPEE_CRYF3_SAMPLE = 1730251154,
	VOX_SLAPPEE_CRYF4_SAMPLE = -112911311,
	VOX_SLAPPEE_CRYM1_SAMPLE = 1792749941,
	VOX_SLAPPEE_CRYM2_SAMPLE = -204316465,
	VOX_SLAPPEE_OUCHF5_SAMPLE = 944239462,
	VOX_SLAPPEE_OUCHF8_SAMPLE = 1190563803,
	VOX_SLAPPEE_OUCHM2_SAMPLE = 1171767054,
	VOX_SLAPPEE_OUCHM7_SAMPLE = 901598081,
	VOX_SLAPPERF1_SAMPLE = -1181888893,
	VOX_SLAPPERF2_SAMPLE = 545562425,
	VOX_SLAPPERM13_SAMPLE = 361709102,
	VOX_SLAPPERM5_SAMPLE = 1561645905,
	VOX_SLEEP_AHF1_SAMPLE = 1147451417,
	VOX_SLEEP_AHF2_SAMPLE = -579999325,
	VOX_SLEEP_AHF3_SAMPLE = -1435838155,
	VOX_SLEEP_AHHHHF1_SAMPLE = -1442404882,
	VOX_SLEEP_AHHHHK1_SAMPLE = 531159971,
	VOX_SLEEP_AHHHHM1_SAMPLE = 1240628261,
	VOX_SLEEP_AHK1_SAMPLE = -238369196,
	VOX_SLEEP_AHK2_SAMPLE = 1757648878,
	VOX_SLEEP_AHM1_SAMPLE = -1483709998,
	VOX_SLEEP_AHM2_SAMPLE = 1050226792,
	VOX_SLEEP_GRUMBLEF1_SAMPLE = 1849022936,
	VOX_SLEEP_GRUMBLEM1_SAMPLE = -1916731373,
	VOX_SLEEP_GRUMBLEM2_SAMPLE = 348672425,
	VOX_SLEEP_GRUMBLEM3_SAMPLE = 1674535231,
	VOX_SLEEP_SNORE_LONGF1_SAMPLE = 1426941002,
	VOX_SLEEP_SNORE_LONGK3_SAMPLE = 246250283,
	VOX_SLEEP_SNORE_LONGM1_SAMPLE = -1225147007,
	VOX_SLEEP_SNORE_SNORTF1_SAMPLE = 1781621741,
	VOX_SLEEP_SNORE_SNORTK2_SAMPLE = 1184255002,
	VOX_SLEEP_SNORE_SNORTM1_SAMPLE = -1983530458,
	VOX_SLEEP_YAWN_REFRESHEDF1_SAMPLE = -1526067393,
	VOX_SLEEP_YAWN_REFRESHEDF2_SAMPLE = 1006853765,
	VOX_SLEEP_YAWN_REFRESHEDF3_SAMPLE = 1258581523,
	VOX_SLEEP_YAWN_REFRESHEDK2_SAMPLE = -1985142584,
	VOX_SLEEP_YAWN_REFRESHEDM1_SAMPLE = 1191106292,
	VOX_SLEEP_YAWN_TIREDF1_SAMPLE = -1597404587,
	VOX_SLEEP_YAWN_TIREDF4_SAMPLE = -794591526,
	VOX_SLEEP_YAWN_TIREDF9_SAMPLE = -1374551449,
	VOX_SLEEP_YAWN_TIREDK1_SAMPLE = 359134232,
	VOX_SLEEP_YAWN_TIREDK2_SAMPLE = -1938905694,
	VOX_SLEEP_YAWN_TIREDM1_SAMPLE = 1128092574,
	VOX_SLEEP__SNORE_ACTM1_SAMPLE = 125061062,
	VOX_SNEEZE_HAYFEVERF1_SAMPLE = -631591471,
	VOX_SNEEZE_HAYFEVERF2_SAMPLE = 1129577579,
	VOX_SNEEZE_HAYFEVERM1_SAMPLE = 967734298,
	VOX_SNEEZE_SINGLEF1_SAMPLE = 1757462339,
	VOX_SNEEZE_SINGLEF2_SAMPLE = -238424327,
	VOX_SNEEZE_SINGLEK7_SAMPLE = 873292859,
	VOX_SNEEZE_SINGLEM1_SAMPLE = -1959500152,
	VOX_SNIFF_HYGIENEF1_SAMPLE = -719949797,
	VOX_SNIFF_HYGIENEK1_SAMPLE = 1622675030,
	VOX_SNIFF_HYGIENEM1_SAMPLE = 920824272,
	VOX_SNIFF_SMELLF1_SAMPLE = -1463955936,
	VOX_SNIFF_SMELLK1_SAMPLE = 487829613,
	VOX_SNIFF_SMELLM1_SAMPLE = 1263081451,
	VOX_SNORE_LITEF3_SAMPLE = -1657663071,
	VOX_SNORE_LITEF6_SAMPLE = -312941266,
	VOX_SNORE_LITEF7_SAMPLE = -1704995400,
	VOX_SNORE_LITEF9_SAMPLE = 2112354495,
	VOX_SNORE_LONGK3_SAMPLE = -1677919783,
	VOX_SNORE_SHORTK2_SAMPLE = -1008112203,
	VOX_SONIC_FLOATDOWNF4_SAMPLE = 669619002,
	VOX_SONIC_FLOATDOWNF8_SAMPLE = 778034961,
	VOX_SONIC_FLOATDOWNM3_SAMPLE = 1517936466,
	VOX_SONIC_FLOATDOWNM5_SAMPLE = -1290110361,
	VOX_SONIC_FLOATUPF1_SAMPLE = -705068058,
	VOX_SONIC_FLOATUPF15_SAMPLE = -854747808,
	VOX_SONIC_FLOATUPM14_SAMPLE = -1235269097,
	VOX_SONIC_FLOATUPM16_SAMPLE = 1481714491,
	VOX_SONIC_FLOATUPM2_SAMPLE = -1358689385,
	VOX_SONIC_FLOATUPM9_SAMPLE = 953602591,
	VOX_SONIC_GETIN_APPF13_SAMPLE = -490825719,
	VOX_SONIC_GETIN_APPF2_SAMPLE = -1870578586,
	VOX_SONIC_GETIN_APPF8_SAMPLE = 1884607864,
	VOX_SONIC_GETIN_APPM12_SAMPLE = -1712568450,
	VOX_SONIC_GETIN_APPM3_SAMPLE = 74634555,
	VOX_SONIC_GETIN_APPM7_SAMPLE = 52367650,
	VOX_SONIC_GETOUT_DIZZYF7_SAMPLE = 401719187,
	VOX_SONIC_GETOUT_DIZZYF9_SAMPLE = -263613804,
	VOX_SONIC_GETOUT_DIZZYM3_SAMPLE = -211246527,
	VOX_SONIC_GETOUT_DIZZYM8_SAMPLE = 1689942985,
	VOX_SONIC_SPIN_CRAZYF19_SAMPLE = -1126972504,
	VOX_SONIC_SPIN_CRAZYF8_SAMPLE = -1007257078,
	VOX_SONIC_SPIN_CRAZYM11_SAMPLE = -1101159301,
	VOX_SONIC_SPIN_CRAZYM7_SAMPLE = -1329742256,
	VOX_SONIC_SPIN_NORMALF14_SAMPLE = -749118458,
	VOX_SONIC_SPIN_NORMALF9_SAMPLE = -1910962873,
	VOX_SONIC_SPIN_NORMALM15_SAMPLE = -1475640463,
	VOX_SONIC_SPIN_NORMALM6_SAMPLE = -44908259,
	VOX_SPITF1_SAMPLE = -844566670,
	VOX_SPITF2_SAMPLE = 1419886280,
	VOX_SPITK1_SAMPLE = 2013696319,
	VOX_SPITM1_SAMPLE = 777795257,
	VOX_STARTLED_OHF1_SAMPLE = -1225054344,
	VOX_STARTLED_OHF16_SAMPLE = 1137735741,
	VOX_STARTLED_OHF19_SAMPLE = -747674196,
	VOX_STARTLED_OHF6_SAMPLE = 681554651,
	VOX_STARTLED_OHK4_SAMPLE = 1933553082,
	VOX_STARTLED_OHK5_SAMPLE = 70819116,
	VOX_STARTLED_OHK7_SAMPLE = -365495296,
	VOX_STARTLED_OHK8_SAMPLE = 2055856529,
	VOX_STARTLED_OHM1_SAMPLE = 1427111603,
	VOX_STARTLED_OHM20_SAMPLE = -1916051158,
	VOX_STARTLED_OHM21_SAMPLE = -87273028,
	VOX_STRIPPER_GAWKK1_SAMPLE = 1379852459,
	VOX_STRIPPER_GAWKK2_SAMPLE = -885542639,
	VOX_STRIPPER_GAWKK3_SAMPLE = -1137671801,
	VOX_STRIPPER_GAWKK4_SAMPLE = 575935524,
	VOX_STRIPPER_GAWKK5_SAMPLE = 1431512242,
	VOX_STRIPPER_GAWKK6_SAMPLE = -866487032,
	VOX_STRIPPER_WATCHF1_SAMPLE = 1165505710,
	VOX_STRIPPER_WATCHF2_SAMPLE = -596548332,
	VOX_STRIPPER_WATCHF4_SAMPLE = 890421281,
	VOX_STRIPPER_WATCHF6_SAMPLE = -618880755,
	VOX_STRIPPER_WATCHF7_SAMPLE = -1407479397,
	VOX_STRIPPER_WATCHF8_SAMPLE = 1017416714,
	VOX_STRIPPER_WATCHF9_SAMPLE = 1269021852,
	VOX_STRIPPER_WATCHM12_SAMPLE = 665560887,
	VOX_STRIPPER_WATCHM14_SAMPLE = -825753086,
	VOX_STRIPPER_WATCHM15_SAMPLE = -1177603436,
	VOX_STRIPPER_WATCHM6_SAMPLE = 954759366,
	VOX_STRIPPER_WATCHM9_SAMPLE = -1470667433,
	VOX_TANTRUMK2_SAMPLE = 976505633,
	VOX_TANTRUMK3_SAMPLE = 1295219639,
	VOX_TEASEE_CRYF1_SAMPLE = 289182826,
	VOX_TEASEE_CRYF2_SAMPLE = -2009741872,
	VOX_TEASEE_CRYK1_SAMPLE = -1533875673,
	VOX_TEASEE_CRYK3_SAMPLE = 1251773195,
	VOX_TEASEE_CRYM1_SAMPLE = -221753951,
	VOX_TEASEE_GIGGLEF1_SAMPLE = 2106980138,
	VOX_TEASEE_GIGGLEF2_SAMPLE = -459495792,
	VOX_TEASEE_GIGGLEK5_SAMPLE = -816427650,
	VOX_TEASEE_GIGGLEK7_SAMPLE = 559426642,
	VOX_TEASEE_GIGGLEM1_SAMPLE = -1637798175,
	VOX_TEASEE_GIGGLEM2_SAMPLE = 124288859,
	VOX_TEASEE_HUHF1_SAMPLE = -421571451,
	VOX_TEASEE_HUHF2_SAMPLE = 2144732479,
	VOX_TEASEE_HUHF5_SAMPLE = -508391268,
	VOX_TEASEE_HUHK1_SAMPLE = 1399925448,
	VOX_TEASEE_HUHK6_SAMPLE = -854212757,
	VOX_TEASEE_HUHM1_SAMPLE = 86740302,
	VOX_TEASEE_HUHM3_SAMPLE = -349836190,
	VOX_TEASERF11_SAMPLE = 1520982406,
	VOX_TEASERF9_SAMPLE = -1405655589,
	VOX_TEASERK14_SAMPLE = 572145242,
	VOX_TEASERK4_SAMPLE = 1730701099,
	VOX_TEASERK8_SAMPLE = 1855859456,
	VOX_TEASERM1_SAMPLE = 1092105250,
	VOX_TEASERM3_SAMPLE = -1357490930,
	VOX_TEASERM6_SAMPLE = -545480319,
	VOX_THROWUPF1_SAMPLE = 481150028,
	VOX_THROWUPK1_SAMPLE = -1459373567,
	VOX_THROWUPK2_SAMPLE = 806022075,
	VOX_THROWUPM1_SAMPLE = -10936953,
	VOX_TICKLEE_LAUGHF1_SAMPLE = -1857189712,
	VOX_TICKLEE_LAUGHF3_SAMPLE = 2135157148,
	VOX_TICKLEE_LAUGHK1_SAMPLE = 618919677,
	VOX_TICKLEE_LAUGHK3_SAMPLE = -890398767,
	VOX_TICKLEE_LAUGHM2_SAMPLE = -340787007,
	VOX_TICKLEE_LAUGHM4_SAMPLE = 47425012,
	VOX_TICKLEE_LAUGHM6_SAMPLE = -321010472,
	VOX_TICKLEE_PUSHF4_SAMPLE = -918191740,
	VOX_TICKLEE_PUSHF5_SAMPLE = -1102925550,
	VOX_TICKLEE_PUSHK10_SAMPLE = 1802025615,
	VOX_TICKLEE_PUSHM2_SAMPLE = -1009582726,
	VOX_TICKLEE_PUSHM4_SAMPLE = 716265551,
	VOX_TICKLER_REJECTEDF1_SAMPLE = -67956680,
	VOX_TICKLER_REJECTEDF4_SAMPLE = -1952848713,
	VOX_TICKLER_REJECTEDK3_SAMPLE = -1605169319,
	VOX_TICKLER_REJECTEDM2_SAMPLE = -2129749943,
	VOX_TICKLER_REJECTEDM6_SAMPLE = -2040308656,
	VOX_TICKLER_TICKLEF1_SAMPLE = -322296477,
	VOX_TICKLER_TICKLEF6_SAMPLE = 1924051136,
	VOX_TICKLER_TICKLEK10_SAMPLE = 676640437,
	VOX_TICKLER_TICKLEK3_SAMPLE = -1217775102,
	VOX_TICKLER_TICKLEK6_SAMPLE = -956248435,
	VOX_TICKLER_TICKLEM1_SAMPLE = 255786152,
	VOX_TICKLER_TICKLEM3_SAMPLE = -516907644,
	VOX_TRAIN_GIGGLEM1_SAMPLE = -1037891865,
	VOX_UNIV_KNEEL_BOOF1_SAMPLE = 1362923247,
	VOX_UNIV_KNEEL_BOOF2_SAMPLE = -935993515,
	VOX_UNIV_KNEEL_BOOF3_SAMPLE = -1087180861,
	VOX_UNIV_KNEEL_BOOF4_SAMPLE = 559315552,
	VOX_UNIV_KNEEL_BOOM1_SAMPLE = -1295493340,
	VOX_UNIV_KNEEL_BOOM2_SAMPLE = 734070430,
	VOX_UNIV_KNEEL_BOOM3_SAMPLE = 1556493832,
	VOX_UNIV_KNEEL_BOOM4_SAMPLE = -1029528661,
	VOX_UNIV_KNEEL_BOOM5_SAMPLE = -1247440067,
	VOX_UNIV_KNEEL_LAUGHAF1_SAMPLE = -1650850074,
	VOX_UNIV_KNEEL_LAUGHAF2_SAMPLE = 76765020,
	VOX_UNIV_KNEEL_LAUGHAM1_SAMPLE = 2121195309,
	VOX_UNIV_KNEEL_LAUGHAM2_SAMPLE = -412643689,
	VOX_UNIV_KNEEL_LAUGHAM3_SAMPLE = -1872708095,
	VOX_UNIV_KNEEL_LAUGHAM4_SAMPLE = 235154338,
	VOX_UNIV_KNEEL_LAUGHBF1_SAMPLE = -1612924737,
	VOX_UNIV_KNEEL_LAUGHBF2_SAMPLE = 114682117,
	VOX_UNIV_KNEEL_LAUGHBM1_SAMPLE = 2083021172,
	VOX_UNIV_KNEEL_LAUGHBM12_SAMPLE = 1304503113,
	VOX_WEDDING_COMEF1_SAMPLE = -1983780241,
	VOX_WEDDING_COMEF2_SAMPLE = 281590741,
	VOX_WHINEF1_SAMPLE = 2068583742,
	VOX_WHINEK4_SAMPLE = -1098342404,
	VOX_WHINEM1_SAMPLE = -1732719371,
	VOX_WHISPERF1_SAMPLE = -716132932,
	VOX_WHISPERF4_SAMPLE = -1522902733,
	VOX_WHISPERK3_SAMPLE = -1896828195,
	VOX_WHISPERM1_SAMPLE = 916747383,
	VOX_WHISPERM2_SAMPLE = -1347607091,
	VOX_WHISPERM4_SAMPLE = 1187938552,
	VOX_WHISPERM5_SAMPLE = 835301486,
	VOX_WHISTLE_WOLFF1_SAMPLE = 1269950117,
	VOX_WOOHOOF1_SAMPLE = -563436832,
	VOX_WOOHOOF11_SAMPLE = 587753325,
	VOX_WOOHOOF2_SAMPLE = 1197732698,
	VOX_WOOHOOF7_SAMPLE = 923338709,
	VOX_WOOHOOK1_SAMPLE = 1808063661,
	VOX_WOOHOOK2_SAMPLE = -221410025,
	VOX_WOOHOOK3_SAMPLE = -2050310783,
	VOX_WOOHOOK4_SAMPLE = 464398370,
	VOX_WOOHOOM1_SAMPLE = 1033796395,
	VOX_WOOHOOM10_SAMPLE = 1482340378,
	VOX_WOOHOOM12_SAMPLE = -1235953354,
	VOX_WOOHOOM13_SAMPLE = -1051465312,
	VOX_WOOHOOM2_SAMPLE = -1533597039,
	VOX_WOOHOOM4_SAMPLE = 1307873188,
	VOX_WOOHOOM5_SAMPLE = 989052722,
	VOX_WOOHOOM6_SAMPLE = -1543836024,
	VOX_WOOHOOM8_SAMPLE = 1145226127,
	VOX_WOOHOOM9_SAMPLE = 860222233,
	VOX_WOWF1_SAMPLE = 760507101,
	VOX_WOWF3_SAMPLE = -1017508879,
	VOX_WOWF4_SAMPLE = 1564384850,
	VOX_WOWF5_SAMPLE = 708423364,
	VOX_WOWK2_SAMPLE = 32720170,
	VOX_WOWM1_SAMPLE = -828329194,
	VOX_WOWM2_SAMPLE = 1470751404,
	VOX_WOWM3_SAMPLE = 548327994,
	VOX_WOWM5_SAMPLE = -909281521,
	VOX_WOWM6_SAMPLE = 1355032245,
	VOX_WOWM8_SAMPLE = -1216607310,
	VOX_YAWNBIGK1_SAMPLE = 1975648095,
	VOX_YAWN_LIGHTK1_SAMPLE = -1840527588,
	VOX_YAWN_LIGHTK2_SAMPLE = 188913318,
	VOX_YES_ACKNOWLEDGEK1_SAMPLE = -1432035625,
	VOX_YES_AGREEABLEF1_SAMPLE = -1902797126,
	VOX_YES_AGREEABLEF11_SAMPLE = -1461313349,
	VOX_YES_AGREEABLEK4_SAMPLE = 1263604856,
	VOX_YES_AGREEABLEM1_SAMPLE = 1835091825,
	VOX_YES_AGREEABLEM5_SAMPLE = 1779204968,
	VOX_YES_AGREEABLEM7_SAMPLE = -2080185788,
	VOX_YES_UHUHF1_SAMPLE = -605454514,
	VOX_YES_UHUHF2_SAMPLE = 1121988340,
	VOX_YES_UHUHM1_SAMPLE = 941467269,
	VOX_YES_UHUHM2_SAMPLE = -1592461505,
	VOX_YES_UHUHM4_SAMPLE = 1215779338,
	VOX_YODELF1_SAMPLE = 372647652,
	VOX_YODELF10_SAMPLE = 1403703142,
	VOX_YODELF12_SAMPLE = -1113280950,
	VOX_YODELF5_SAMPLE = 291234557,
	VOX_YODELF9_SAMPLE = 418229974,
	VOX_YODELK2_SAMPLE = 982583571,
	VOX_YODELK3_SAMPLE = 1301690757,
	VOX_YODELM1_SAMPLE = -171770065,
	VOX_YODELM2_SAMPLE = 1825287829,
	VOX_YODELM4_SAMPLE = -2052584544,
	WATERING2_WATER_SAMPLE = 1709967,
	WATERINGCAN_WATER_SAMPLE = -12171406,
	XMASSTREE_DISLIKE_VOXF1_SAMPLE = -964456008,
	XMASSTREE_DISLIKE_VOXF2_SAMPLE = 1602928642,
	XMASSTREE_DISLIKE_VOXK1_SAMPLE = 1932390389,
	XMASSTREE_DISLIKE_VOXK2_SAMPLE = -366690737,
	XMASSTREE_DISLIKE_VOXM1_SAMPLE = 628574323,
	XMASSTREE_DISLIKE_VOXM2_SAMPLE = -1132586551,
	XMASSTREE_LIKE_VOXF1_SAMPLE = 967437150,
	XMASSTREE_LIKE_VOXF2_SAMPLE = -1600079132,
	XMASSTREE_LIKE_VOXF3_SAMPLE = -676885902,
	XMASSTREE_LIKE_VOXK1_SAMPLE = -1945660141,
	XMASSTREE_LIKE_VOXK2_SAMPLE = 353289385,
	XMASSTREE_LIKE_VOXK3_SAMPLE = 1644819519,
	XMASSTREE_LIKE_VOXM1_SAMPLE = -631426411,
	XMASSTREE_LIKE_VOXM2_SAMPLE = 1129603887,
	XMASSTREE_LIKE_VOXM3_SAMPLE = 877876153,
	XMASSTREE_TAKE1_SAMPLE = -2100610128,
	XMASSTREE_TAKE2_SAMPLE = 465725962,
	XMASSTREE_TAKE3_SAMPLE = 1824873116,
	ZAPPER_BREAK_SAMPLE = 1694277201,
	ZAPPER_BUG_LP_SAMPLE = -458149981,
	ZAPPER_FALL_VOXF10_SAMPLE = -647905778,
	ZAPPER_FALL_VOXF4_SAMPLE = -924559760,
	ZAPPER_FALL_VOXF8_SAMPLE = -1051583909,
	ZAPPER_FALL_VOXM2_SAMPLE = -1032639858,
	ZAPPER_FALL_VOXM5_SAMPLE = 1545060141,
	ZAPPER_FALL_VOXM7_SAMPLE = -1306927615,
	ZAPPER_LAUGH_VOXF5_SAMPLE = 1159983727,
	ZAPPER_LAUGH_VOXF9_SAMPLE = 1284881988,
	ZAPPER_LAUGH_VOXM10_SAMPLE = 1101703935,
	ZAPPER_LAUGH_VOXM6_SAMPLE = 1071544862,
	ZAPPER_LP_SAMPLE = 1783223317,
	ZAPPER_ONOFF_SAMPLE = -1161503381,
	ZAPPER_WATCH_VOXF4_SAMPLE = 750951375,
	ZAPPER_WATCH_VOXF6_SAMPLE = -1026753821,
	ZAPPER_WATCH_VOXM1_SAMPLE = -1084442997,
	ZAPPER_WATCH_VOXM2_SAMPLE = 643163953,
	ZAPPER_ZAPPED_VOXF3_SAMPLE = 376492023,
	ZAPPER_ZAPPED_VOXF7_SAMPLE = 287116270,
	ZAPPER_ZAPPED_VOXM25_SAMPLE = -1305419138,
	ZAPPER_ZAPPED_VOXM6_SAMPLE = -2047941965,
	ZAPPER_ZAP_BUG1_SAMPLE = 1171056765,
	ZAPPER_ZAP_BUG2_SAMPLE = -591021625,
	ZAPPER_ZAP_BUG3_SAMPLE = -1413314223,
	ZAPPER_ZAP_BUG4_SAMPLE = 900078834,
	ZAPPER_ZAP_BUG5_SAMPLE = 1117858916,
	ZAPPER_ZAP_SIM_SAMPLE = 127403326,
	_10BUMBLEBEE_SAMPLE = -1458469821,
	_10CHILDREN_SAMPLE = 1208791869,
	_1CHOPSTIX_SAMPLE = 1068385015,
	_1CSCALE_SAMPLE = -947644045,
	_1GSCALE_SAMPLE = 1544903525,
	_1KNUCKLES_SAMPLE = -1234584597,
	_2EX_SAMPLE = 806390378,
	_2MORNING_SAMPLE = -1190554565,
	_2SCALE_SAMPLE = 624957228,
	_2TWINKLE_SAMPLE = 1816575107,
	_3CHORALE_SAMPLE = 1745696322,
	_3ODETOJOY_SAMPLE = -127508063,
	_3PASSEPIED_SAMPLE = -1209660634,
	_3SCALE_SAMPLE = -300104567,
	_4EX_SAMPLE = 882767576,
	_4MENUTE_SAMPLE = 726171310,
	_4RONDINO_SAMPLE = 713450318,
	_5ABOUTSTRANGE_SAMPLE = -1861537784,
	_5ETUDE_SAMPLE = -908219596,
	_5INTERMEZZO_SAMPLE = 199875101,
	_6BBWALTZ_SAMPLE = 854995513,
	_6VALSE_SAMPLE = 431656716,
	_6WALTZ_SAMPLE = -426558066,
	_7GLADIOLUSRAG_SAMPLE = -1535909848,
	_7PINEAPPLERAG_SAMPLE = 1697763093,
	_8AINVENTION_SAMPLE = -477978059,
	_8EINVENTION_SAMPLE = -362216881,
	_9CINVENTION_SAMPLE = 653897160,
	_9FPRELUDE_SAMPLE = 1358891775
};

struct TRedBlackTree<EInstance *,EOTOverlapPair *> : ERedBlackTree {
	TRedBlackTree<EInstance *,EOTOverlapPair *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EInstance *,EOTOverlapPair *>*, int, void);
	EOTOverlapPair* operator[]();
	EOTOverlapPair*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static EInstance* GetKey(/* parameters unknown */);
	static EOTOverlapPair* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TLinkedList<EClipPlane,68,72> {
protected:
	EClipPlane *m_pHead;
	EClipPlane *m_pTail;
	
public:
	TLinkedList<EClipPlane,68,72>& operator=();
	TLinkedList();
	TLinkedList();
	static EClipPlane*& Last(/* parameters unknown */);
	static EClipPlane*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EClipPlane* Head();
	EClipPlane* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct TLinkedList<EClipOccluder,88,92> {
protected:
	EClipOccluder *m_pHead;
	EClipOccluder *m_pTail;
	
public:
	TLinkedList<EClipOccluder,88,92>& operator=();
	TLinkedList();
	TLinkedList();
	static EClipOccluder*& Last(/* parameters unknown */);
	static EClipOccluder*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EClipOccluder* Head();
	EClipOccluder* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct EPortalWindow : E3DWindow {
protected:
	EClipContext *m_pcc;
	EClipContext m_contexts[16];
	int m_nCurrentContext;
	unsigned int m_dataBuffer[512];
	EVec3 m_vFrustCorners[5];
	float m_clipRatio;
	bool m_viewNeedsSettingUp;
	
public:
	EPortalWindow& operator=();
	EPortalWindow();
	EPortalWindow();
	/* vtable[1] */ virtual EPortalWindow(EPortalWindow*, int, void);
	void DeallocateData();
	/* vtable[9] */ virtual void SetProjection(/* a1 5 */ EMat4 &mProjection);
	/* vtable[12] */ virtual void SetLookAt(/* a1 5 */ EMat4 &mLookAt);
	/* vtable[13] */ virtual void SetLookAtPos(/* a1 5 */ EMat4 &mLookAtPos);
	/* vtable[14] */ virtual void SetLookAt();
	void SetReverseCulling(/* a1 5 */ bool reverseCulling);
	void SetClipRatio(/* f12 50 */ float clipRatio);
	float GetClipRatio();
	bool PushPortal(/* s3 19 */ EPortalDef &portal, /* s0 16 */ bool testBackCullingAndVisibility, /* s1 17 */ u32 parentVis);
	void PopPortal();
	static void CalcMirrorMatrix(/* parameters unknown */);
	void AddClipPlane(/* s1 17 */ EVec3 *vCorners);
	void Reset();
	EVec3& GetFrustCorner(/* s1 17 */ EFrustCorner fc);
	bool AddOccluder(/* s0 16 */ EOccluderDef &occluder, /* s1 17 */ bool testBackCullingAndVisibility, /* s3 19 */ u32 parentVis);
	u32 GetRootVisFlags();
	u32 Test(/* s1 17 */ EVec3 *vPoints, /* s0 16 */ int nPoints, /* s3 19 */ u32 parentVis);
	u32 Test();
	u32 IntermediateTest(/* s1 17 */ EVec3 *vPoints, /* s0 16 */ int nPoints, /* s4 20 */ bool skipNearPlane, /* s3 19 */ u32 parentVis);
	void GetViewParams(/* a1 5 */ EVec3 &vEyeOut, /* a2 6 */ float &fovYDegreesOut, /* a3 7 */ float &aspectOut, /* t0 8 */ float &nearPlaneOut, /* t1 9 */ float &farPlaneOut);
	EVec3& GetLookDir();
	/* vtable[2] */ virtual void Select(/* s0 16 */ ERC *prc);
	/* vtable[8] */ virtual EPortalWindow* CastPortalWindow();
protected:
	void SetupView();
	void ResetCurrentContext();
	bool TestBackCull(/* t2 10 */ EVec3 *vCorners);
	bool TestBackCullingAndVisibility(/* s1 17 */ EVec3 *vCorners, /* s3 19 */ int nCorners, /* s2 18 */ u32 parentVis);
	void ViewChanged();
	void PrepareForUse();
	void CopyPlaneList(/* s1 17 */ EPortalDef &portal, /* a2 6 */ EClipPlaneList &src, /* s3 19 */ EClipPlaneList &dest);
	bool NearClipPoly(/* s4 20 */ EVec3 *vIn, /* s2 18 */ int inSides, /* t2 10 */ EVec3 *vOut, /* s3 19 */ int &outSides, /* t1 9 */ int parentVis);
	void SetUpClipOccluder(/* s3 19 */ EClipOccluder *pOccluder);
	/* vtable[10] */ virtual void SetProjection();
	/* vtable[11] */ virtual void SetOrthoProjection(/* f12 50 */ float left, /* f13 51 */ float right, /* f14 52 */ float bottom, /* f15 53 */ float top, /* f16 54 */ float nearPlane, /* f17 55 */ float farPlane);
};

struct EInstance : EStorable {
	static ETypeInfo m_typeInfo;
protected:
	ERLevel *m_pLevel;
	ERIGroup *m_pIGroup;
	NLIterator m_iIGroup;
public:
	u32 m_instanceId;
	u32 m_instanceFlags;
	int m_nReceivingPointLights;
private:
	RBIterator m_iAlwaysUpdate;
	NLIterator m_iLevelList;
	ESphereTreeNode *m_pSphereTreeParent;
	EOTData m_otd;
	
public:
	EInstance& operator=();
	EInstance();
	static EInstance* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EInstance* CreateCopy();
	EInstance();
	/* vtable[6] */ virtual EInstance(EInstance*, int, void);
	/* vtable[9] */ virtual void Init();
	/* vtable[10] */ virtual void Update();
	/* vtable[11] */ virtual u32 VisibilityTest(/* a1 5 */ EPortalWindow &win, /* a2 6 */ u32 parentVis);
	/* vtable[12] */ virtual void Draw(/* a1 5 */ ERC *prc, /* a2 6 */ u32 renderFlags);
	/* vtable[13] */ virtual void DrawWireFrame(/* a1 5 */ ERC *prc, /* a2 6 */ u32 renderFlags);
	/* vtable[14] */ virtual void SetOrient(/* a1 5 */ EMat4 &mOrient);
	/* vtable[15] */ virtual u32 GetUpdatePriority();
	void RemoveFromLevel();
	void RemoveFromInstanceGroup();
	/* vtable[16] */ virtual bool CollidePointWithInstance(/* a1 5 */ ECollisionInfo &ciOut, /* a2 6 */ EVec3 &vStart, /* a3 7 */ EVec3 &vEnd, /* t0 8 */ u32 type, /* t1 9 */ bool testOnly, /* t2 10 */ EInstance *pInst);
	/* vtable[17] */ virtual bool CollideSphereWithInstance(/* a1 5 */ ECollisionInfo &ciOut, /* a2 6 */ EVec3 &vStart, /* a3 7 */ EVec3 &vEnd, /* f12 50 */ float radius, /* t0 8 */ u32 type, /* t1 9 */ EInstance *pInst);
	/* vtable[18] */ virtual int CollideTest(/* a1 5 */ EBound3 &b, /* a2 6 */ u32 type);
	bool GetOverlapList(/* a1 5 */ EBound3 &bBox, /* s2 18 */ u32 type, /* s4 20 */ TNodeList<EInstance *> &instancesOut);
	/* vtable[19] */ virtual void CalcLights3(/* s5 21 */ EVec3 &vPos, /* s1 17 */ ELights3 &lights3Out);
	void SetOverlapCauseFlags(/* s2 18 */ u32 flags);
	u32 GetOverlapCauseFlags();
	void SetOverlapReceiveFlags(/* s2 18 */ u32 flags);
	u32 GetOverlapReceiveFlags();
	void SetBounds(/* a2 6 */ EBound3 &b);
	EBound3& GetBounds();
	/* vtable[20] */ virtual void GetBoundSphere(/* a1 5 */ EBoundSphere &boundSphereOut);
	/* vtable[21] */ virtual ETriggerList* GetTriggerList();
	/* vtable[22] */ virtual void ReadInstanceData(/* a1 5 */ EStream &s);
	/* vtable[7] */ virtual void Read(/* s0 16 */ EStream &s);
	/* vtable[8] */ virtual void Write(/* s0 16 */ EStream &s);
protected:
	/* vtable[23] */ virtual void SetLevel(/* a1 5 */ ERLevel *pLevel);
};

struct EBlendModePreset {
	char *Name;
	int BlendA;
	int BlendB;
	int BlendC;
	int BlendD;
};

struct TLinkedList<EParticle,184,188> {
protected:
	EParticle *m_pHead;
	EParticle *m_pTail;
	
public:
	TLinkedList<EParticle,184,188>& operator=();
	TLinkedList();
	TLinkedList();
	static EParticle*& Last(/* parameters unknown */);
	static EParticle*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EParticle* Head();
	EParticle* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct TLinkedList<EIParticleEmit,288,284> {
protected:
	EIParticleEmit *m_pHead;
	EIParticleEmit *m_pTail;
	
public:
	TLinkedList<EIParticleEmit,288,284>& operator=();
	TLinkedList();
	TLinkedList();
	static EIParticleEmit*& Last(/* parameters unknown */);
	static EIParticleEmit*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EIParticleEmit* Head();
	EIParticleEmit* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct EDebugShaders {
	EDebugShaders& operator=();
	EDebugShaders();
	EDebugShaders();
	void Update();
	void Init();
	void Shutdown();
	void Next();
	void Last();
	void Enable();
	void Deallocate();
};

struct TRedBlackTree<EInstance *,unsigned int> : ERedBlackTree {
	TRedBlackTree<EInstance *,unsigned int>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EInstance *,unsigned int>*, int, void);
	u32 operator[]();
	u32& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static EInstance* GetKey(/* parameters unknown */);
	static u32 GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct ESimScratchPadMan {
protected:
	static CWallArray *mWallLayer;
	static CFloorArray *mFloorLayer;
	static EHeap *m_pHeap;
	static void *m_pHead;
	
public:
	ESimScratchPadMan& operator=();
	ESimScratchPadMan();
	ESimScratchPadMan();
	static void InitHeap(/* parameters unknown */);
	static void EmptyHeap(/* parameters unknown */);
	static void* Alloc(/* parameters unknown */);
	static void* AllocAlign(/* parameters unknown */);
	static void Free(/* parameters unknown */);
	static void* GetUpper32k(/* parameters unknown */);
	static void SaveWallLayer(/* parameters unknown */);
	static void RestoreWallLayer(/* parameters unknown */);
	static void SaveFloorLayer(/* parameters unknown */);
	static void RestoreFloorLayer(/* parameters unknown */);
};

struct GlobalStrings {
	ELocString string;
};

struct HelpStrings {
	ELocString string;
};

struct CreateASimStrings {
	ELocString string;
};

struct NeighborhoodModeStrings {
	ELocString string;
};

struct MemCardUIStrings {
	ELocString string;
};

struct LiveModeMenuUIStrings {
	ELocString string;
};

struct StoryModeTransitionScreens {
	ELocString string;
	u32 backgroundImage;
};

struct LockableItem {
	u8 id;
	s32 data;
};

struct LockableAssociation {
	LockableItem lock;
	u8 goalIndex;
};

struct VECTOR<LockableItem> {
private:
	LockableItem *pData;
	
public:
	VECTOR<LockableItem>& operator=();
	VECTOR();
	VECTOR();
	int size();
	LockableItem& operator[]();
	LockableItem& operator[]();
	LockableItem* begin();
	LockableItem* end();
	LockableItem* begin();
	LockableItem* end();
};

struct VECTOR<LockableAssociation> {
private:
	LockableAssociation *pData;
	
public:
	VECTOR<LockableAssociation>& operator=();
	VECTOR();
	VECTOR();
	int size();
	LockableAssociation& operator[]();
	LockableAssociation& operator[]();
	LockableAssociation* begin();
	LockableAssociation* end();
	LockableAssociation* begin();
	LockableAssociation* end();
};

struct HouseData {
	ELocString houseName;
	ELocString introText;
	ELocString outroText;
	u32 backgroundImageIntro;
	u32 backgroundImageOutro;
	VECTOR<LockableAssociation> objects2;
	ELocString objectives[16];
};

struct ChallengeData {
	ELocString houseName;
	ELocString introText;
	u32 backgroundImageIntro;
	LockableItem lock;
	ELocString objectives[16];
	ELocString scoreBreakdown[4];
};

struct MainMenuUIStrings {
	ELocString string;
};

struct CreditUIStrings {
	ELocString string;
};

struct input_iterator_tag {
};

struct output_iterator_tag {
};

struct forward_iterator_tag {
};

struct bidirectional_iterator_tag {
};

struct random_access_iterator_tag {
};

struct output_iterator {
};

typedef __malloc_alloc_template<0> malloc_alloc;

struct __malloc_alloc_template<0> {
	__malloc_alloc_template<0>& operator=();
	__malloc_alloc_template();
	__malloc_alloc_template();
private:
	static void* oom_malloc(/* parameters unknown */);
	static void* oom_realloc(/* parameters unknown */);
public:
	static void* allocate(/* parameters unknown */);
	static void* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void* reallocate(/* parameters unknown */);
	static void (*)(/* parameters unknown */) set_malloc_handler(/* parameters unknown */);
};

typedef malloc_alloc alloc;

struct StackString2<16> : StringBuffer2 {
private:
	short unsigned int fChars[16];
};

struct StackString2<4> : StringBuffer2 {
private:
	short unsigned int fChars[4];
};

enum EQuickDataSymbol {
	UNDEFINED_QUICKDATA = 0,
	CREATEASIM_QUICKDATA = 707458153,
	SIMSCAREERS_QUICKDATA = 1329644780,
	SIMSOBJECTS_QUICKDATA = 204725057,
	SIMSTILES_QUICKDATA = 430010157,
	SIMSUI_QUICKDATA = -1586257426
};

typedef void (*CdlCB)(/* parameters unknown */);

typedef struct {
	u_char trycount;
	u_char spindlctrl;
	u_char datapattern;
	u_char pad;
} sceCdRMode;

typedef struct {
	u_char minute;
	u_char second;
	u_char sector;
	u_char track;
} sceCdlLOCCD;

typedef struct {
	u_int lsn;
	u_int size;
	char name[16];
	unsigned char date[8];
	u_int flag;
} sceCdlFILE;

typedef struct {
	u_char stat;
	u_char second;
	u_char minute;
	u_char hour;
	u_char pad;
	u_char day;
	u_char month;
	u_char year;
} sceCdCLOCK;

typedef struct {
	u_int bufmax;
	u_int bankmax;
	u_int iop_bufaddr;
} sceCdStmInit;

struct TLinkedList<EFloatTreeNode,12,16> {
protected:
	EFloatTreeNode *m_pHead;
	EFloatTreeNode *m_pTail;
	
public:
	TLinkedList<EFloatTreeNode,12,16>& operator=();
	TLinkedList();
	TLinkedList();
	static EFloatTreeNode*& Last(/* parameters unknown */);
	static EFloatTreeNode*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EFloatTreeNode* Head();
	EFloatTreeNode* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct ELights2 : ELights {
	EDirLight d[2];
};

typedef TRedBlackTree<int,EOrderTableEntry *> EOTEntrySet;

struct TFloatTree<EOrderTableData *> : EFloatTree {
	TFloatTree<EOrderTableData *>& operator=();
	TFloatTree();
	TFloatTree();
	TFloatTree(TFloatTree<EOrderTableData *>*, int, void);
	EOrderTableData* operator[]();
	EOrderTableData*& operator[]();
	FTIterator Insert();
	FTIterator Find();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	FTIterator SetValue();
	static void SetValue(/* parameters unknown */);
	void SetValues();
	static EOrderTableData* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct ELevelDrawData {
	ERC *prc;
	EPortalWindow *pWin;
	EVec3 vEyePos;
	float radius;
	float invRadius;
	u32 renderFlags;
	u32 cameraBit;
};

struct TNodeList<ETrigger *> : ENodeList {
	TNodeList(TNodeList<ETrigger *>*, int, void);
	TNodeList();
	TNodeList();
	static ETrigger* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ETrigger *>& operator=();
	void MoveContents();
};

struct TRedBlackTree<int,EOrderTableEntry *> : ERedBlackTree {
	TRedBlackTree<int,EOrderTableEntry *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<int,EOrderTableEntry *>*, int, void);
	EOrderTableEntry* operator[]();
	EOrderTableEntry*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static s32 GetKey(/* parameters unknown */);
	static EOrderTableEntry* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct ERLevel : EResource {
	static ETypeInfo m_typeInfo;
	EOverlapTracker m_ot;
	static bool m_drawingOrderTable;
protected:
	EStorable *m_pStaticSphereTreeRoot;
	EStorable *m_pDynamicSphereTreeRoot;
	ETriggerList m_triggerList;
	EOrderTableEntry m_orderTable[48];
	EOTEntrySet m_activeOTEntries;
	ELevelDrawData m_dd;
	bool m_reverseShaderOrder;
	EInstance m_updateRegionInstance;
	EInstance m_globalLightReceiveInstance;
	u32 m_instanceGroupId;
	TRedBlackTree<unsigned int,EInstance *> m_idMap;
	TRedBlackTree<unsigned int,EInstance *> m_alwaysUpdatePriorityQueue;
	TNodeList<EInstance *> m_dynamicList;
	TNodeList<EInstance *> m_dynamicOptimizeList;
	ERIGroup *m_pRInstanceGroup;
	ELights *m_pLights;
	int m_nDirLights;
	bool m_depthComp;
	ERShader *m_pDepthShader;
	EHavokWorld *m_pHavokWorld;
	
public:
	ERLevel& operator=();
	ERLevel();
	static ERLevel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERLevel* CreateCopy();
	ERLevel();
	/* vtable[6] */ virtual ERLevel(ERLevel*, int, void);
	void Update();
	void Draw(/* s2 18 */ ERC *prc, /* s3 19 */ u32 renderFlags, /* s0 16 */ int nCamera);
	void DrawWireFrame(/* s0 16 */ ERC *prc);
	void UpdateHavok();
	void InsertInstance(/* s0 16 */ EInstance *pInstance, /* s2 18 */ EInstance *pRefInstance);
	void RemoveInstance(/* s0 16 */ EInstance *pInstance);
	void Optimize();
	EInstance* FindInstance(/* a1 5 */ u32 id);
	EInstance* FindInstance();
	void SetBounds(/* s0 16 */ EInstance *pInstance, /* a2 6 */ EBound3 &b);
	void InsertInOrderTable(/* s1 17 */ EOrderTableData &otd);
	void SetUpdateRegion(/* a2 6 */ EBound3 &region);
	void SetUpdateRegionToEntireLevel();
	static void CalcRegionFromPortalWindow(/* parameters unknown */);
	EBound3 CalcBounds();
	bool CollidePoint(/* s3 19 */ ECollisionInfo &ciOut, /* s2 18 */ EVec3 &vStart, /* s5 21 */ EVec3 &vEnd, /* s7 23 */ u32 type, /* s6 22 */ bool testOnly, /* s4 20 */ EInstance *pRef, /* -0xdc(caller sp) */ bool resetPrevious);
	bool CollideSphere(/* s3 19 */ ECollisionInfo &ciOut, /* s2 18 */ EVec3 &vStart, /* s4 20 */ EVec3 &vEnd, /* f21 59 */ float radius, /* s7 23 */ u32 type, /* s5 21 */ EInstance *pRef, /* -0xdc(caller sp) */ bool resetPrevious);
	int CollideTest(/* s2 18 */ EBound3 &bBox, /* s1 17 */ u32 type);
	void SetLights(/* a1 5 */ ELights *pLights, /* a2 6 */ int nDirectionalLights);
	void SelectLights(/* t0 8 */ ERC *prc);
	bool SetTriggers(/* s5 21 */ EInstance *pInstance, /* a2 6 */ EVec3 &vStart, /* -0xac(caller sp) */ EVec3 &vEnd);
	void DepthCompMode(/* s3 19 */ bool mode);
	void SetHavokWorld(/* a1 5 */ EHavokWorld *pHavokWorld);
	static bool IsDrawingOrderTable(/* parameters unknown */);
	/* vtable[7] */ virtual void Read(/* s0 16 */ EStream &s);
	/* vtable[8] */ virtual void Write(/* s1 17 */ EStream &s);
	/* vtable[9] */ virtual void Init();
	EHavokWorld* GetHavokWorld();
	bool IsHavokScene();
protected:
	void Deallocate();
	void AddInstancesToOverlapTrackerAndIdMap();
	void AddListToOverlapTrackerAndIdMap(/* a1 5 */ TNodeList<EInstance *> &list, /* s2 18 */ EInstance *&pPrevInstance);
	void DoAddSphereTreeToOverlapTrackerAndIdMap(/* s0 16 */ EStorable *pNode, /* s2 18 */ EInstance *&pPrevInstance);
	void InitializeInstances();
	void DoInitSphereTree(/* s0 16 */ EStorable *pNode);
	void AddBounds(/* a1 5 */ EBound3 &bOut, /* a2 6 */ EBound3 &bIn, /* a3 7 */ bool &firstInOut);
	static float CalcRadiusFromViewParams(/* parameters unknown */);
	void DeallocateSphereTree(/* s0 16 */ EStorable *&pRoot);
	void RecomputeBoundsUpSphereTree(/* s3 19 */ ESphereTreeNode *pNode);
	void DoMoveFromDynamicSphereTreeToOptimizeList(/* s0 16 */ EStorable *pNode);
	void DoBuildSphereTree(/* s1 17 */ ESTGNode *pSTGNode, /* s2 18 */ EStorable *&pONode, /* s3 19 */ EStorable *pParent);
	void RemoveFromSphereTree(/* s3 19 */ EStorable *&pRoot, /* s2 18 */ EInstance *pInstance);
	void CalcListBounds(/* a1 5 */ TNodeList<EInstance *> &list, /* s2 18 */ EBound3 &b, /* s1 17 */ bool &first);
	void DoCalcSphereTreeBounds(/* s0 16 */ EStorable *pNode, /* s2 18 */ EBound3 &b, /* s3 19 */ bool &first);
	void AddInstanceToIdMap(/* a2 6 */ EInstance *pInstance);
	void RemoveInstanceFromIdMap(/* s1 17 */ EInstance *pInstance);
	void InitList(/* a1 5 */ TNodeList<EInstance *> &list);
	void DrawList(/* a1 5 */ TNodeList<EInstance *> &list, /* s3 19 */ u32 parentVis);
	void DoDrawSphereTree(/* s1 17 */ EStorable *pNode, /* s0 16 */ u32 parentVis);
	void DoDrawSphereTreeVisible(/* s0 16 */ EStorable *pNode);
	void DrawOrderTable();
	void DoDrawSphereTreeWireFrame(/* s1 17 */ EStorable *pNode, /* s0 16 */ u32 parentVis);
	static bool IntersectBoundBox(/* parameters unknown */);
	void CalcGlobalLights(/* a1 5 */ ERC *prc);
	void InitializeHavokWorld();
};

struct EUIGrowBox : EUIIcon {
protected:
	EUIObjectMover m_mover;
	EVec4 m_vStart;
	EVec4 m_vStop;
	float m_growTime;
	
public:
	EUIGrowBox& operator=();
	EUIGrowBox();
	EUIGrowBox();
	/* vtable[1] */ virtual EUIGrowBox(EUIGrowBox*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[8] */ virtual void StateChanged();
	void SetStartRect();
	void SetStopRect();
	void SetGrowTime();
};

struct EUITextColorToken {
	char m_token;
	EVec4 m_color;
};

struct EUIScrollTextBox : EUIGrowBox {
	EWindow *m_pLastWin;
protected:
	EWindow m_win;
	ERFont *m_pFont;
	EUITextColorToken *m_pTokenMap;
	EFontAlignY m_yAlign;
	EFontAlignX m_xAlign;
	float m_time;
	float m_pulseTime;
	float m_pointSize;
	float m_yInc;
	float m_yGap;
	float m_clipBorderX;
	float m_clipBorderY;
	EVec4 m_vColor;
	EVec2 m_vTextTop;
	char **m_stringList;
	int m_nStrings;
	int m_dirpressed;
	bool m_bPopDone;
	bool m_bLastLineAboveTop;
	bool m_bFirstLineBelowBot;
	u8 m_stick;
	
public:
	EUIScrollTextBox& operator=();
	EUIScrollTextBox();
	EUIScrollTextBox();
	/* vtable[1] */ virtual EUIScrollTextBox(EUIScrollTextBox*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	void DrawStrings();
	void InitStrings();
	void InitTokenMap();
	/* vtable[4] */ virtual void SetPos();
	/* vtable[6] */ virtual void SetBoxDims();
	/* vtable[5] */ virtual void SetBoxDims();
	void SetTextJust();
	void SetTextTopPos();
	void SetScrollInc();
	void CleanUpStrings();
	void SetStringColor();
	void SetPointSize();
	void SetFont(EUIScrollTextBox*, int, void);
	void SetTextYGap();
	int GetYDirection();
	void SetTextClipBorder();
	bool GetPopDone();
	void SetPulseTime();
	void SetStick();
protected:
	void CreateStringBuff();
	void SetTextWin();
};

struct ECharacterNode {
	int nParentIndex;
	EVec3 vPivot;
	EQuat qLocal;
	EMat4 mLocalRot;
	EMat4 mInvLocalRot;
	bool localRotIsIdentity;
	EString name;
};

struct TArray<unsigned int> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<unsigned int>*, int, void);
	u32& operator[]();
	u32& operator[]();
	u32& operator[]();
	u32& operator[]();
	TArray<unsigned int>& operator=();
	u32* operator unsigned int *();
	u32* operator unsigned int *();
	void SetGrowBy(TArray<unsigned int>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct ESMSStrip {
	void *vertPositions;
	void *vertTcs;
	s8 *vertNormals;
	u8 *vertColors;
	u8 *vertWeights;
	u32 nVerts;
};

typedef u32 EBitArrayElement;

struct EBitArray {
protected:
	EBitArrayElement *m_p;
	int m_size;
	int m_allocSize;
	int m_growBy;
	
public:
	EBitArray(/* s1 17 */ EBitArray &array);
	EBitArray();
	EBitArray();
	EBitArray();
	EBitArray(EBitArray*, int, void);
	void SetGrowBy(/* a1 5 */ int growBy);
	void SetSize(/* s5 21 */ int size, /* s2 18 */ int allocSize);
	void FreeUnusedBufferSpace();
	int GetSize();
	void Insert(/* s1 17 */ EBitArray &array, /* s2 18 */ int sourcePos, /* s3 19 */ int destPos, /* s4 20 */ int count);
	void Insert();
	void Insert();
	void Add(/* f12 50 */ f32 value);
	void Add();
	void Add();
	void Add();
	void Add();
	void Remove(/* s4 20 */ int pos, /* s5 21 */ int count);
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	bool Get(/* a1 5 */ int pos, /* a2 6 */ int count);
	u32 Get();
	s32 GetSigned(/* s2 18 */ int pos, /* a2 6 */ int count);
	f32 GetFloat(/* a1 5 */ int pos);
	void Set(/* s4 20 */ EBitArray &array, /* s3 19 */ int sourcePos, /* s2 18 */ int destPos, /* s1 17 */ int count);
	void Set();
	void Clear(EBitArray*, int, void);
	void SetAll(/* s1 17 */ bool value);
	void ClearAll();
	void InvertAll();
	void Interleave(/* s7 23 */ int pos, /* s3 19 */ int width, /* s2 18 */ int count);
	void Deinterleave(/* s7 23 */ int pos, /* s2 18 */ int width, /* s3 19 */ int count);
	bool operator[]();
	EBitArrayProxy operator[]();
	EBitArray& operator=(/* s1 17 */ EBitArray &array);
	void operator|=(/* s1 17 */ EBitArray &array);
	void operator&=(/* s1 17 */ EBitArray &array);
	void operator^=(/* s1 17 */ EBitArray &array);
	bool operator==(/* s1 17 */ EBitArray &array);
	bool operator!=();
	bool Intersection(/* s1 17 */ EBitArray &array);
	void Print();
	static int ToleranceToSignedBits(/* parameters unknown */);
	static int ToleranceToUnsignedBits(/* parameters unknown */);
	static int MaxNumberToUnsignedBits(/* parameters unknown */);
	s32 FloatToSignedBits(/* f12 50 */ float val, /* a1 5 */ int nBits);
	u32 FloatToUnsignedBits(/* f12 50 */ float val, /* a1 5 */ int nBits);
	float SignedBitsToFloatScaler(/* a1 5 */ int nBits);
	float UnsignedBitsToFloatScaler(/* a1 5 */ int nBits);
protected:
	void Deallocate();
	void InsertElements(/* s0 16 */ int pos, /* a2 6 */ int count);
	int GetElementCount();
};

struct EAnimNodeDataPos {
	s32 rot;
	s32 scale;
	s32 trans;
};

struct EAnimNote {
	EString string;
	int frame;
	int nNode;
};

struct EACTrackStreams {
	ERotDecomp *pRotDecomp;
	EVec3Decomp *pTransDecomp;
	EVec3Decomp *pScaleDecomp;
};

struct TRPtr<ERAnim> {
protected:
	ERAnim *m_p;
	
public:
	TRPtr();
	TRPtr();
	TRPtr();
	TRPtr(TRPtr<ERAnim>*, int, void);
	TRPtr<ERAnim>& operator=();
	TRPtr<ERAnim>& operator=();
	ERAnim& operator*();
	ERAnim* operator->();
	ERAnim* Ptr();
	bool IsValid();
	bool operator bool();
	bool operator==();
	bool operator==();
	bool operator!=();
	bool operator!=();
protected:
	void Release();
};

struct TRedBlackTree<int,EACTrack *> : ERedBlackTree {
	TRedBlackTree<int,EACTrack *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<int,EACTrack *>*, int, void);
	EACTrack* operator[]();
	EACTrack*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static int GetKey(/* parameters unknown */);
	static EACTrack* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EACTrack {
	EAnimDef animDef;
	FACTrackCallback pfnCallback;
	u32 userParam;
	int id;
	float time;
	float pos;
	float speed;
	float intensity;
	float blendSpeed;
	float blendThreshold;
	float blendU;
	float blendStart;
	float blendTarget;
	float blendDuration;
	float blendM1;
	float blendM2;
	int phaseLockMaster;
	float phaseLockOffset;
	TRPtr<ERAnim> pRAnim;
	EVec3 vInitialRootTrans;
	EACTrackSet slaveTracks;
	EACTrackStreams *streams;
	float *blendFactors;
	u8 blendType;
	bool animComplete;
	bool active;
	
	EACTrack& operator=();
	EACTrack();
	EACTrack();
	EACTrack(EACTrack*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EUI3DPanelIcon : EUIObjectNode {
protected:
	ERShader *m_pShd;
	ERModel *m_pModel;
	EWindow *m_pLastWin;
	E3DWindow m_win;
	EVec4 m_vBackColor;
	EVec3 m_vRotAx;
	EVec3 m_vModelPos;
	EVec3 m_vModelScale;
	ELights *m_pLights;
	int m_nLights;
	float m_rotTime;
	float m_rotVel;
	float m_rotThrough;
	float m_curAng;
	
public:
	EUI3DPanelIcon& operator=();
	EUI3DPanelIcon();
	EUI3DPanelIcon();
	/* vtable[1] */ virtual EUI3DPanelIcon(EUI3DPanelIcon*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[4] */ virtual void SetPos();
	/* vtable[6] */ virtual void SetBoxDims();
	/* vtable[5] */ virtual void SetBoxDims();
	void SetLastWin();
	void SetRotThrough();
	void SetRotAxis();
	void Init();
	void SetLookAt();
	void InitModel(EUI3DPanelIcon*, int, void);
	void InitBackground(EUI3DPanelIcon*, int, void);
	void InitLights();
	void InitRotation();
};

struct ISimInstance : EIStaticModel, IBaseSimInstance {
	static ETypeInfo m_typeInfo;
protected:
	cXObject *m_pXOb;
	u32 m_cursFlags;
	float m_cursorLightTime;
	static EVec3 _ERRORLight;
	EAnimController m_AC;
	ELights m_highlight[2];
	static ELights _ERRORLightCur;
	
public:
	ISimInstance& operator=();
	ISimInstance();
	static ISimInstance* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ISimInstance* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ISimInstance();
	/* vtable[6] */ virtual ISimInstance(ISimInstance*, int, void);
	/* vtable[25] */ virtual void Create(/* a1 5 */ cXObject *pXOb, /* a2 6 */ EHouse *pEHouse);
	/* vtable[26] */ virtual void OrentSubObject(/* a1 5 */ cXObject *pRotOb);
	/* vtable[2] */ virtual void SetObjOrient();
	/* vtable[27] */ virtual void SetCarryOrient();
	/* vtable[28] */ virtual void CreateShadow();
	/* vtable[29] */ virtual void InsertSubModelsInHouse(/* a1 5 */ ERLevel *pLevel);
	/* vtable[30] */ virtual void RemoveSubModelsFromHouse(/* a1 5 */ ERLevel *pLevel);
	/* vtable[31] */ virtual void PropigateFlagsToSubModels();
	/* vtable[32] */ virtual EIStaticModel* GetShadow();
	/* vtable[33] */ virtual void SetOutOfWorld();
	/* vtable[34] */ virtual void StartBurp(/* a1 5 */ int player);
	/* vtable[35] */ virtual void TestForCursorOverlap(/* s4 20 */ int player, /* f12 50 */ float cursrad, /* a2 6 */ OverlapMode mode);
	/* vtable[36] */ virtual EVec3 GetObCenter();
	/* vtable[3] */ virtual void SetCursFlags(/* a1 5 */ u32 flags);
	/* vtable[4] */ virtual u32 GetCursFlags();
	/* vtable[5] */ virtual ISimInstance* GetSimInstance();
	/* vtable[37] */ virtual void SetPlacementError(/* a1 5 */ bool on);
	/* vtable[38] */ virtual bool IsMultiTilePart();
	void SetXOb(/* a1 5 */ cXObject *p);
	cXObject* GetXOb();
	void SetHighlight(/* a1 5 */ u32 flag, /* a2 6 */ bool on);
	bool GetIsPerson();
	bool HasModel();
};

struct VECTOR<anim::TimePropsAssociation> {
private:
	TimePropsAssociation *pData;
	
public:
	VECTOR<anim::TimePropsAssociation>& operator=();
	VECTOR();
	VECTOR();
	int size();
	TimePropsAssociation& operator[]();
	TimePropsAssociation& operator[]();
	TimePropsAssociation* begin();
	TimePropsAssociation* end();
	TimePropsAssociation* begin();
	TimePropsAssociation* end();
};

struct AnimRef {
	u32 id;
	Int duration;
	VECTOR<anim::TimePropsAssociation> props;
};

struct NamedAnimation {
	AnimRef *pAnim;
};

enum eBodyPart {
	kSIM_GLASSES = 0,
	kSIM_FACE = 1,
	kSIM_HAIRHAT = 2,
	kSIM_UPPERBODY = 3,
	kSIM_LOWERBODY = 4,
	kSIM_SHOES = 5,
	kSIM_NPARTS = 6
};

enum eBodyType {
	SIM_NORMAL_BODY = 0,
	SIM_LARGER_BODY = 1,
	SIM_SMALLER_BODY = 2
};

enum eAnimationTracks {
	kSimIdleTrack = 1,
	kSimBaseTrack = 2
};

struct sce_stat {
	unsigned int st_mode;
	unsigned int st_attr;
	unsigned int st_size;
	unsigned char st_ctime[8];
	unsigned char st_atime[8];
	unsigned char st_mtime[8];
	unsigned int st_hisize;
	unsigned int st_private[6];
};

struct sce_dirent {
	sce_stat d_stat;
	char d_name[256];
	void *d_private;
};

typedef struct {
	unsigned int epc;
	unsigned int gp;
	unsigned int sp;
	unsigned int dummy;
} sceExecData;

struct _sif_rpc_data {
	void *paddr;
	unsigned int pid;
	int tid;
	unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;
typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data {
	_sif_rpc_data rpcd;
	unsigned int command;
	void *buff;
	void *cbuff;
	sceSifEndFunc func;
	void *para;
	_sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data {
	_sif_rpc_data rpcd;
	void *src;
	void *dest;
	int size;
};

typedef _sif_receive_data sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data {
	unsigned int command;
	sceSifRpcFunc func;
	void *buff;
	int size;
	sceSifRpcFunc cfunc;
	void *cbuff;
	int csize;
	sceSifClientData *client;
	void *paddr;
	unsigned int fno;
	void *receive;
	int rsize;
	int rmode;
	unsigned int rid;
	_sif_serve_data *link;
	_sif_serve_data *next;
	_sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data {
	int key;
	int active;
	_sif_serve_data *link;
	_sif_serve_data *start;
	_sif_serve_data *end;
	_sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

typedef struct {
	unsigned int psize : 8;
	unsigned int dsize : 24;
	unsigned int daddr;
	unsigned int fcode;
	unsigned int opt;
} sceSifCmdHdr;

typedef void (*sceSifCmdHandler)(/* parameters unknown */);

typedef struct {
	sceSifCmdHandler func;
	void *data;
} sceSifCmdData;

typedef struct {
	sceSifCmdHdr chdr;
	void *newaddr;
} sceSifCmdCSData;

typedef struct {
	sceSifCmdHdr chdr;
	int rno;
	unsigned int value;
} sceSifCmdSRData;

typedef struct {
	sceSifCmdHdr chdr;
	int size;
	int flag;
	char arg[80];
} sceSifCmdResetData;

struct EProf {
protected:
	double m_lastTime;
	double m_startTime;
	double m_pauseStart;
	double m_totalTime;
	char *m_szName;
	int m_cnt;
	int m_printEvery;
	bool m_stopped;
	ERFont *m_pFont;
	
public:
	EProf& operator=();
	EProf();
	EProf();
	EProf();
	void SetCount();
	void SetFont();
	int GetCount();
	void Begin();
	void End();
	void Start();
	void Stop();
	void Reset();
	void Print();
	void AddCnt();
	void Name();
	void PrintEvery();
	float GetLastTime();
	float GetAvgTime();
	void DrawStats();
};

typedef TNodeList<cXObject *> cXObjectNodeList;
typedef TNodeList<ERoom *> ERoomList;
typedef TRedBlackTree<unsigned int,EIPointAmbLight *> EIAmbLightPtrManager;
typedef TNodeList<EIFloor *> EIFloorPtrList;
typedef TRedBlackTree<EIParticleEmit *,ERParticleType *> EParticleEffectOrphanMan;
typedef TRedBlackTree<EILightmap *,EILightmap *> EILightmapPtrRBTree;

enum ELMComputeStage {
	LM_STAGE_NONE = 0,
	LM_INC_PREP_COMPUTE = 1,
	LM_FULL_PREP_COMPUTE = 2,
	LM_EXECUTE_INC_COMPUTE = 3,
	LM_EXECUTE_FULL_COMPUTE = 4,
	LM_EXIT_FULL_COMPUTE = 5,
	LM_NSTAGES = 6
};

typedef struct {
	short int __delta;
	short int __index;
	union {
		void (*__pfn)();
		short int __delta2;
	} __pfn_or_delta2;
} ComputeFN;

struct TNodeList<EIFloor *> : ENodeList {
	TNodeList(TNodeList<EIFloor *>*, int, void);
	TNodeList();
	TNodeList();
	static EIFloor* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EIFloor *>& operator=();
	void MoveContents();
};

struct TRedBlackTree<unsigned int,EIPointAmbLight *> : ERedBlackTree {
	TRedBlackTree<unsigned int,EIPointAmbLight *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,EIPointAmbLight *>*, int, void);
	EIPointAmbLight* operator[]();
	EIPointAmbLight*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EIPointAmbLight* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TRedBlackTree<EIParticleEmit *,ERParticleType *> : ERedBlackTree {
	TRedBlackTree<EIParticleEmit *,ERParticleType *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EIParticleEmit *,ERParticleType *>*, int, void);
	ERParticleType* operator[]();
	ERParticleType*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static EIParticleEmit* GetKey(/* parameters unknown */);
	static ERParticleType* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TRedBlackTree<EILightmap *,EILightmap *> : ERedBlackTree {
	TRedBlackTree<EILightmap *,EILightmap *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EILightmap *,EILightmap *>*, int, void);
	EILightmap* operator[]();
	EILightmap*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static EILightmap* GetKey(/* parameters unknown */);
	static EILightmap* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EHouse {
	bool m_bForNeighborHoodMode;
	EIObjectMan *m_pObjectMan;
	ERoom *m_pWallMan2;
	bool m_binUpdate;
protected:
	bool m_bShadows;
	bool m_bAmInit;
	ELMComputeStage m_lmLastStage;
	ELMComputeStage m_lmStage;
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_computeFns[6];
	ERLevel *m_pLevel;
	EIFloorPtrList m_floors;
	EWallUpDownStateType m_wallUpDownState;
	EIAmbLightPtrManager m_roomLights;
	EIPointLight *m_pSun;
	EVec2 m_vHouse_off;
	int m_lotNum;
	u32 m_lotdasid;
	float m_fadeAlpha;
	float m_iconAlpha;
	EParticleEffectOrphanMan m_particleEffectMan;
	EILightmapPtrRBTree m_lmcomputeList;
	EILightmap *m_pFloorLM;
	ERShader *m_pLightShader;
	ERShader *m_pDayShader;
	ERShader *m_pNightShader;
	ERShader *m_pBuildShader;
	ERoofs *m_pRoof;
	
public:
	EHouse& operator=();
	EHouse(/* s1 17 */ EVec2 &vOff, /* s5 21 */ int lot, /* s4 20 */ ERLevel *pLevel, /* s6 22 */ bool bObjects, /* s2 18 */ bool bWalls, /* t2 10 */ bool bFloors, /* s0 16 */ bool bForNeighborHoodMode);
	EHouse();
	EHouse(EHouse*, int, void);
	void Init();
	void Reset();
	void Cleanup();
	void Update();
	void Draw(/* s3 19 */ ERC *prc);
	void BuildHouse(/* a1 5 */ bool useLightMaps);
	EVec2& GetHouseOff();
	void SetHouseOff();
	ERLevel* GetRLevel();
	int GetLotNum();
	void ReCalcHouse();
	void DestroyWalls();
	void DestroyFloor();
	void EnableLightMaps(/* v0 2 */ bool enable);
	void ReComputeLighting(/* s1 17 */ bool computeLightMaps);
	void InitRoomLighting();
	void UpdateRoomAmbientLights();
	void UpdateRoomLight(/* s1 17 */ u32 roomId);
	void CleanUpRoomLights();
	void SetWallState(/* a1 5 */ EWallUpDownStateType state);
	EWallUpDownStateType GetWallUpDownState();
	void SetNextWallMode();
	void UpdateSun();
	float CalcRoomAmbLight(/* s0 16 */ u32 id);
	EIPointAmbLight* GetRoomAmbLight(/* a1 5 */ u32 roomId);
	EIPointLight* GetSun();
	void DirtyLightMaps();
	void BeginLMCompute();
	void EndLMCompute();
	bool ShadowsEnabled();
	void RemoveOrphanParticleEffectsFromLevel();
	void AddParticleEffectToOrphanMan(/* v0 2 */ ERParticleType *pType, /* a2 6 */ EIParticleEmit *pEffect);
	bool DrawLMCoputePrompt(/* s2 18 */ ERC *prc, /* s6 22 */ EVec2 &vPos, /* s3 19 */ int player);
	void InitStage1();
	void InitStage2();
	void InitStage3();
	void InitStage4();
	void InitStage5();
	void InitStage6();
	void InitStage7();
	void InitStage8();
	void InitStage9();
	void FlushLightLists();
	void ForceFullLMCompute();
	void ForceIncComputeComplete();
	ELMComputeStage GetLmComputeStage();
protected:
	ELMComputeStage SetLmDirtyStage();
	void _LM_STAGE_NONE();
	void _LM_INC_PREP_COMPUTE();
	void _LM_FULL_PREP_COMPUTE();
	void _LM_EXECUTE_INC_COMPUTE();
	void _LM_EXECUTE_FULL_COMPUTE();
	void _LM_EXIT_FULL_COMPUTE();
};

struct EParticleEvent {
	float time;
	ERScript *pScript;
	int perParticle;
};

struct ERParticleType : EResource {
	static ETypeInfo m_typeInfo;
protected:
	u32 m_version;
public:
	u32 m_flags;
	u8 m_class;
	EVec3 m_vDir;
	float m_dirSpread;
	float m_speed;
	float m_speedSpread;
	float m_velGain;
	float m_interval;
	float m_intervalSpread;
	EVec3 m_vPosSpread;
	float m_lifeTime;
	EVec3 m_vPclAcc;
	EVec3 m_vGrowthAcc;
	EVec3 m_vGrowthVel;
	EVec3 m_vSize;
	EVec3 m_vSizeSpread;
	EVec4 m_vStartColor;
	EVec4 m_vEndColor;
	float m_lifeTimeSpread;
	EVec3 m_vRotVel;
	EVec3 m_vRotStart;
	ERScript *m_pCreateScript;
	ERScript *m_pUpdateScript;
	ERScript *m_pDieScript;
	ERScript *m_pImpactScript;
	EBoundSphere m_bs;
protected:
	int m_nShaders;
	float m_shaderLoopTime;
	ERShader **m_pShaders;
	int m_nEvents;
	EParticleEvent *m_events;
	int m_nScripts;
	EIParticleEmit m_emit;
	
public:
	ERParticleType& operator=();
	ERParticleType();
	static ERParticleType* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERParticleType* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ERParticleType();
	/* vtable[6] */ virtual ERParticleType(ERParticleType*, int, void);
	void Load(/* s2 18 */ EStream &s);
	/* vtable[10] */ virtual void Reload(/* s1 17 */ EStream &s);
	/* vtable[12] */ virtual void Shaders(/* s2 18 */ int nShaders, /* f20 58 */ float loopTime, /* s1 17 */ u32 *shaderIDs);
	/* vtable[13] */ virtual void Emit(/* s4 20 */ EVec3 &vPos, /* s2 18 */ EVec3 &vVel, /* s3 19 */ ERLevel *pLevel);
	/* vtable[14] */ virtual void ProcessEvents(/* s4 20 */ EInstance *pInstance, /* f12 50 */ float dt, /* f20 58 */ float age, /* s3 19 */ bool perParticle);
	int GetNShaders();
	ERShader** GetShaders();
protected:
	void Deallocate();
	void DeallocateShaders();
	void DeallocateEvents();
};

enum Outfit {
	kOutfitNormal = 0,
	kOutfitNaked = 1,
	kOutfitSwimSuit = 2,
	kOutfitJob = 3,
	kOutfitFormal = 4,
	kOutfitSleep = 5,
	kOutfitSkeleton = 6,
	kOutfitSkeletonNeg = 7,
	kOutfitToga = 8,
	kOutfitWestern = 9,
	kOutfitLuau = 10,
	kOutfitRave = 11,
	kOutfitCostume = 12,
	kOutfitFormalExpanded = 13,
	kOutfitSwimsuitExpanded = 14,
	kOutfitPajamaExpanded = 15,
	kOutfitDisco = 16
};

struct SAnimator {
	__vtbl_ptr_type *$vf1063;
	
	SAnimator& operator=();
	SAnimator();
	SAnimator();
	/* vtable[1] */ virtual SAnimator(SAnimator*, int, void);
	static void InitializeManager(/* parameters unknown */);
	static void DestroyManager(/* parameters unknown */);
	/* vtable[2] */ virtual Boolean Initialize();
	/* vtable[3] */ virtual void Render(SAnimator*, int, void);
	/* vtable[4] */ virtual void Update();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void ResetSuits();
	/* vtable[7] */ virtual void SnapToGrid();
	/* vtable[8] */ virtual void ForceLocation();
	/* vtable[9] */ virtual TreeReturnCode TryAnimate();
	/* vtable[10] */ virtual TreeReturnCode TryChangeSuit();
	/* vtable[11] */ virtual void SetAnimDisplacements();
	/* vtable[12] */ virtual void BeginFollow();
	/* vtable[13] */ virtual TreeReturnCode FollowOneStep();
	/* vtable[14] */ virtual bool EndFollow();
	/* vtable[15] */ virtual int IsFollowing();
	/* vtable[16] */ virtual int IsInterruptable();
	/* vtable[17] */ virtual int StartReachAnimation();
	/* vtable[18] */ virtual int IsReachDone();
	/* vtable[19] */ virtual void StopReachAnimation();
	/* vtable[20] */ virtual void LookTowards();
	/* vtable[21] */ virtual void LookTowards(SAnimator*, int, void);
	/* vtable[22] */ virtual void Tick();
	/* vtable[23] */ virtual int DequeueAnimEvent();
	/* vtable[24] */ virtual void ReconStream();
	/* vtable[25] */ virtual void ResetCensorship();
	/* vtable[26] */ virtual void SetPixelated(SAnimator*, int, void);
	/* vtable[27] */ virtual void Dress();
	/* vtable[28] */ virtual void Undress();
	/* vtable[29] */ virtual void GetCarryHandPosAndDir();
	/* vtable[30] */ virtual void DrawProps();
	/* vtable[31] */ virtual void DrawCensor();
	/* vtable[32] */ virtual void GetBonePos();
	/* vtable[33] */ virtual void GetBonePosAndDirForParticle();
};

struct EPrimitive {
	EPrimitive& operator=();
	EPrimitive();
	EPrimitive();
	static void Torus(/* parameters unknown */);
	static void Cube(/* parameters unknown */);
	static void Rect(/* parameters unknown */);
	static void Grid(/* parameters unknown */);
	static void Sphere(/* parameters unknown */);
	static EGEVert* SpherePacked(/* parameters unknown */);
	static void WireRect(/* parameters unknown */);
	static void Axis(/* parameters unknown */);
	static void Vector(/* parameters unknown */);
	static void WireBox(/* parameters unknown */);
	static void WireCircle(/* parameters unknown */);
	static void WireSphere(/* parameters unknown */);
};

struct EBSControlPoint {
	EVec3 vPoint;
};

enum ESZoomResult {
	ZOOM_NONE = 0,
	ZOOM_NORMAL = 1,
	CLAMP_MIN = 2,
	CLAMP_MAX = 3
};

struct ESimsCam : Panelstateman {
protected:
	int m_playerId;
	bool m_bCanUpdate;
	bool m_bmoved;
	bool m_bGotBut;
	EPortalWindow m_win;
	ESimsCursor *m_pCursor;
	u32 m_mode;
	u32 m_lastMode;
	u32 m_but;
	s32 m_LockedPad;
	EMat4 m_mFirstPerson;
	EVec3 m_vEye;
	EVec3 m_vTarget;
	EVec3 m_vUp;
	float m_transSpeed;
	float m_rotSpeed;
	float m_zoom;
	float m_DegRotAng;
	float m_DegTiltAng;
	static EVec3 m_minZoomPt;
	static EVec3 m_ctrlPt1;
	static EVec3 m_ctrlPt2;
	static EVec3 m_maxZoomPt;
	static EIBezierSpline m_spline;
public:
	static u32 m_modeDef;
	static float m_rotSpeedDef;
	static float m_transSpeedDef;
	static float m_maxZoom;
	static float m_minZoom;
	static float m_minHeight;
	static float m_maxTilt;
	static float m_minTilt;
	static float m_maxHeight;
	static float m_transSpeedMin;
	static EVec3 m_vEyeDef;
	static EVec3 m_vTargetDef;
	static EVec3 m_vUpDef;
	
	ESimsCam& operator=();
	ESimsCam(/* s1 17 */ int player);
private:
	ESimsCam();
public:
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ESimsCam();
	/* vtable[1] */ virtual ESimsCam(ESimsCam*, int, void);
	void Init();
	void Reset();
	/* vtable[4] */ virtual void Update();
	/* vtable[2] */ virtual void SetState(/* a1 5 */ Panelstate newstate);
	/* vtable[3] */ virtual void SetEvent(/* a1 5 */ PanelEvent event, /* a2 6 */ u32 data);
	void GetPos(/* a1 5 */ EVec3 &vEyeOut, /* a2 6 */ EVec3 &vTargetOut, /* a3 7 */ EVec3 &vUpOut);
	EVec3& GetEye();
	EVec3& GetTarget();
	EVec3& GetUp();
	void SetPos(/* a1 5 */ EVec3 &vEye, /* a2 6 */ EVec3 &vTarget, /* a3 7 */ EVec3 &vUp);
	void IncPos(/* a1 5 */ EVec2 vinc);
	void SetWinPos(/* t0 8 */ E3DWindow &win);
	void SetPos2Player(/* a1 5 */ E3DWindow &win);
	void SetTarget(/* a1 5 */ EVec3 &vTarget);
	float GetTransSpeed();
	void SetTransSpeed(/* f12 50 */ float transSpeed);
	float GetRotSpeed();
	void SetRotSpeed(/* f12 50 */ float rotSpeed);
	void ResetPos();
	void GetCursPos(/* a1 5 */ EVec3 &vin);
	float GetZoom();
	float GetTilt();
	E3DWindow* GetWin();
	void UpdateWin();
	void CusorMoved(/* a1 5 */ int which, /* s1 17 */ EVec2 &vStick);
	void AttachCursor(/* a1 5 */ int which, /* a2 6 */ ESimsCursor *pCurs);
	bool GetbMoved();
	void SetUpdateable(/* a1 5 */ bool on);
	void CenterOnSelectedSim();
	float GetRotAng();
	u32 GetMode();
	void ToggleFirstPerson();
	float GetCurZoomRatio();
	int GetPlayerId();
	void ForceFullScreen();
	void SetFirstPerson(/* a1 5 */ EMat4 &in);
protected:
	void ForceCusor();
	bool HandleRotation();
	bool HandleTilt();
	bool HandleZoom();
	ESZoomResult DoZoom();
	bool CursorOnScreen();
	bool HandleFirsPerson();
	void UpdateCamPos();
};

struct PackedAlt {
	UInt8 left;
	UInt8 top;
	UInt8 right;
	UInt8 bottom;
	
	PackedAlt& operator=();
	PackedAlt();
	PackedAlt();
	bool operator==();
	bool IsFlat();
};

typedef struct {
	short int __delta;
	short int __index;
	union {
		s32 (*__pfn)();
		short int __delta2;
	} __pfn_or_delta2;
} ToolValueCalcFn;

enum WallToolMode {
	kAdd = 0,
	kDelete = 1,
	kRoom = 2
};

struct TNodeList<ISimInstance *> : ENodeList {
	TNodeList(TNodeList<ISimInstance *>*, int, void);
	TNodeList();
	TNodeList();
	static ISimInstance* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ISimInstance *>& operator=();
	void MoveContents();
};

struct TNodeList<CursorFloorTile *> : ENodeList {
	TNodeList(TNodeList<CursorFloorTile *>*, int, void);
	TNodeList();
	TNodeList();
	static CursorFloorTile* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<CursorFloorTile *>& operator=();
	void MoveContents();
};

struct ObjectModule {
	__vtbl_ptr_type *$vf829;
	
	ObjectModule& operator=();
	ObjectModule();
protected:
	ObjectModule();
	/* vtable[1] */ virtual ObjectModule(ObjectModule*, int, void);
public:
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Destroy();
	/* vtable[4] */ virtual ErrType Save();
	/* vtable[5] */ virtual ErrType Load();
	/* vtable[6] */ virtual void PostLoad();
	/* vtable[7] */ virtual ObjectFolder* GetFolder();
	/* vtable[8] */ virtual SInt16 AddObject();
	/* vtable[9] */ virtual SInt16 MakeNewOutOfWorldObject();
	/* vtable[10] */ virtual void KillObject();
	/* vtable[11] */ virtual void AddToKillQueue();
	/* vtable[12] */ virtual ErrType KillAllObjects();
	/* vtable[13] */ virtual ErrType KillObjectsInvalidatedByResize();
	/* vtable[14] */ virtual void UpdateRooms(ObjectModule*, int, void);
	/* vtable[15] */ virtual bool PostSim();
	/* vtable[16] */ virtual void DayChanged();
	/* vtable[17] */ virtual cXObject* GetObjectFromID();
	/* vtable[18] */ virtual cXObject* GetFirst();
	/* vtable[19] */ virtual cXObject* GetObject();
	/* vtable[20] */ virtual int GetNumObjects();
	/* vtable[21] */ virtual bool CheckIntegrity();
	/* vtable[22] */ virtual bool IsFamilyMemberAwakeAndVisible();
	/* vtable[23] */ virtual Boolean DoCommand();
	/* vtable[24] */ virtual bool PreviewAnimation();
	/* vtable[25] */ virtual cSimulator* GetSim();
	/* vtable[26] */ virtual cXObject* GetObjectByGUID();
	/* vtable[27] */ virtual cXPerson* GetPersonByGUID();
	/* vtable[28] */ virtual void ForceAllLocations();
	/* vtable[29] */ virtual cXPerson* GetPeople();
	/* vtable[30] */ virtual int GetNumPeople();
	/* vtable[31] */ virtual cXPortal* GetPortal();
	/* vtable[32] */ virtual int GetNumPortals();
	/* vtable[33] */ virtual cXPerson* GetSelectedPerson();
	/* vtable[34] */ virtual void SetSelectedPerson();
	/* vtable[35] */ virtual cXPerson* AdvanceSelectedPerson();
	/* vtable[36] */ virtual void CleanupPeople();
	/* vtable[37] */ virtual void LevelInfoRequested();
	/* vtable[38] */ virtual EDialog* GetCurrentDialog();
	/* vtable[39] */ virtual void EnqueueObjectDialog();
	/* vtable[40] */ virtual void EnqueueObjectDialog();
	/* vtable[41] */ virtual RoutingSlot& GetGlobalRoutingSlot();
	/* vtable[42] */ virtual int GetNumGlobalRoutineSlots();
	/* vtable[43] */ virtual void SendMessage();
	/* vtable[44] */ virtual void BroadcastMessage();
	/* vtable[45] */ virtual void UpdateWallAdjacencies();
	/* vtable[46] */ virtual void InvalidateAllRoutes();
	/* vtable[47] */ virtual void SkillAccessed();
	/* vtable[48] */ virtual void MotiveAccessed();
	/* vtable[49] */ virtual void PersonalityAccessed();
	/* vtable[50] */ virtual void RelationshipAccessed();
	/* vtable[51] */ virtual void RelationshipAccessed();
	/* vtable[52] */ virtual void OffsetWorld();
	/* vtable[53] */ virtual void DoStream();
	/* vtable[54] */ virtual void DoReconObject();
	/* vtable[55] */ virtual void DoReconPerson();
	/* vtable[56] */ virtual cXObject* GetTutorialObject();
	/* vtable[57] */ virtual int SetTutorialObject();
	/* vtable[58] */ virtual void ShowTutorialInfo();
	/* vtable[59] */ virtual void ComputeStats();
	/* vtable[60] */ virtual void FillInObjectStats();
	/* vtable[61] */ virtual void DisableBuyAndBuild();
	/* vtable[62] */ virtual void EnableBuyAndBuild();
	/* vtable[63] */ virtual bool IsBuyAndBuildDisabled();
	/* vtable[64] */ virtual void SetIdleStatus();
	/* vtable[65] */ virtual void ClearIdleStatus(ObjectModule*, int, void);
	/* vtable[66] */ virtual int GetIdleStatus();
	/* vtable[67] */ virtual void SetSimFlag();
	/* vtable[68] */ virtual bool GetSimFlag();
	/* vtable[69] */ virtual SInt16 GetTileObjectID();
	/* vtable[70] */ virtual void SetTileObjectID();
	static ObjectModule* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct StackString2<256> : StringBuffer2 {
private:
	short unsigned int fChars[256];
};

typedef void (*SimInfoWin_DrawCallback)(/* parameters unknown */);
typedef void (*SimInfoWin_UpdateCallback)(/* parameters unknown */);
typedef TNodeList<cXPerson *> XPersonPtrList;

typedef struct {
	short int __delta;
	short int __index;
	union {
		void (*__pfn)();
		short int __delta2;
	} __pfn_or_delta2;
} DrawStateFn;

typedef struct {
	short int __delta;
	short int __index;
	union {
		void (*__pfn)();
		short int __delta2;
	} __pfn_or_delta2;
} MessageFN;

struct EParticleInfoNode {
	u32 particleID;
	float posx;
	float posy;
	float posz;
	float dirx;
	float diry;
	float dirz;
};

struct VECTOR<EParticleInfoNode> {
private:
	EParticleInfoNode *pData;
	
public:
	VECTOR<EParticleInfoNode>& operator=();
	VECTOR();
	VECTOR();
	int size();
	EParticleInfoNode& operator[]();
	EParticleInfoNode& operator[]();
	EParticleInfoNode* begin();
	EParticleInfoNode* end();
	EParticleInfoNode* begin();
	EParticleInfoNode* end();
};

struct ECntrMdlLkupNode {
	u32 defaultID;
	u32 counterTopID;
	u32 counterBaseID;
	u32 counterCornerID;
};

struct VECTOR<ECntrMdlLkupNode> {
private:
	ECntrMdlLkupNode *pData;
	
public:
	VECTOR<ECntrMdlLkupNode>& operator=();
	VECTOR();
	VECTOR();
	int size();
	ECntrMdlLkupNode& operator[]();
	ECntrMdlLkupNode& operator[]();
	ECntrMdlLkupNode* begin();
	ECntrMdlLkupNode* end();
	ECntrMdlLkupNode* begin();
	ECntrMdlLkupNode* end();
};

struct ECntrMdlLkupTable {
	VECTOR<ECntrMdlLkupNode> vCounters;
};

enum EObjLightType {
	E_OBJ_POINT_LIGHT = 0,
	E_OBJ_SPOT_LIGHT = 1
};

struct cFixedWorld {
	__vtbl_ptr_type *$vf831;
	
	cFixedWorld& operator=();
	cFixedWorld();
protected:
	cFixedWorld();
	/* vtable[1] */ virtual cFixedWorld(cFixedWorld*, int, void);
public:
	/* vtable[2] */ virtual ErrType Save();
	/* vtable[3] */ virtual ErrType Load();
	/* vtable[4] */ virtual Boolean DoCommand();
	/* vtable[5] */ virtual bool SetSize();
	/* vtable[6] */ virtual Int GetSize();
	/* vtable[7] */ virtual Int GetMaxSize();
	/* vtable[8] */ virtual bool OutOfBounds();
	/* vtable[9] */ virtual bool OutOfGrid();
	/* vtable[10] */ virtual bool OutOfBounds();
	/* vtable[11] */ virtual bool OutOfGrid();
	/* vtable[12] */ virtual CFloorArray& GetFloorLayer();
	/* vtable[13] */ virtual FloorPattern GetFloor();
	/* vtable[14] */ virtual void SetFloor();
	/* vtable[15] */ virtual CWallArray& GetWalls();
	/* vtable[16] */ virtual TileWalls GetWall();
	/* vtable[17] */ virtual void SetWall();
	/* vtable[18] */ virtual bool HasWalls();
	/* vtable[19] */ virtual bool HasWalls();
	/* vtable[20] */ virtual TileWallStorage& GetWallStorage();
	/* vtable[21] */ virtual void SetWallStorage();
	/* vtable[22] */ virtual UInt16 GetRoom();
	/* vtable[23] */ virtual void SetRoom();
	/* vtable[24] */ virtual UInt8 GetFlags();
	/* vtable[25] */ virtual void SetFlags();
	/* vtable[26] */ virtual bool IsOutside();
	/* vtable[27] */ virtual VertexConfig GetVertexConfig();
	/* vtable[28] */ virtual void SetVertexConfig();
	/* vtable[29] */ virtual VertexConfig AnalyzeWallVertex();
	/* vtable[30] */ virtual LightEntry& GetLightEntry();
	/* vtable[31] */ virtual void SetLightEntry();
	/* vtable[32] */ virtual void ComputeRooms(cFixedWorld*, int, void);
	/* vtable[33] */ virtual int ComputeArchValue();
	/* vtable[34] */ virtual WallManager* GetWallManager();
	/* vtable[35] */ virtual LightLayer* GetLightLayer();
	/* vtable[36] */ virtual int MayEditTile();
};

struct TLinkedList<EDebugMenuItem,0,4> {
protected:
	EDebugMenuItem *m_pHead;
	EDebugMenuItem *m_pTail;
	
public:
	TLinkedList<EDebugMenuItem,0,4>& operator=();
	TLinkedList();
	TLinkedList();
	static EDebugMenuItem*& Last(/* parameters unknown */);
	static EDebugMenuItem*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EDebugMenuItem* Head();
	EDebugMenuItem* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct CamFloat {
	u8 m_d;
	
	CamFloat& operator=();
	CamFloat();
	CamFloat();
	CamFloat();
	CamFloat(CamFloat*, int, void);
	u8 operator unsigned char();
	float operator float();
	CamFloat operator=();
	float MakeFloat();
};

struct ECheatDMI : EDebugMenuItem {
private:
	ECheatLookup *m_pVariable;
	
public:
	ECheatDMI& operator=();
	ECheatDMI(/* s1 17 */ ECheatLookup *pVariable);
	ECheatDMI();
	/* vtable[1] */ virtual void GetDescription(/* a1 5 */ char *szBuffer);
	/* vtable[2] */ virtual void GetValue(/* s1 17 */ char *szBuffer);
	/* vtable[3] */ virtual void ButtonPress(/* a1 5 */ EDebugMenuButton button, /* f12 50 */ float val);
	/* vtable[4] */ virtual void ButtonPress();
};

struct HashList<ECheatLookup,char *,64> {
	ECheatLookup *table[64];
	
	HashList<ECheatLookup,char *,64>& operator=();
	HashList();
	HashList();
	HashList(HashList<ECheatLookup,char *,64>*, int, void);
private:
	void resetHash(HashList<ECheatLookup,char *,64>*, int, void);
	int getSize();
public:
	void clear();
	int size();
	void addNode();
	void addNode();
	void removeNode();
	void deleteItem();
	ECheatLookup* findItem();
	ECheatLookup* findItem();
	HashIterator<ECheatLookup,char *,64> find();
	HashIterator<ECheatLookup,char *,64> find();
	HashIterator<ECheatLookup,char *,64> begin();
	HashIterator<ECheatLookup,char *,64> end();
};

typedef TRedBlackTree<unsigned int,EBoneParticle *> EBoneParticlePtrTree;

struct TRedBlackTree<unsigned int,TRedBlackTree<unsigned int,EBoneParticle *> *> : ERedBlackTree {
	TRedBlackTree<unsigned int,TRedBlackTree<unsigned int,EBoneParticle *> *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,TRedBlackTree<unsigned int,EBoneParticle *> *>*, int, void);
	EBoneParticlePtrTree* operator[]();
	EBoneParticlePtrTree*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EBoneParticlePtrTree* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

enum ESimsHeadAnimState {
	ATTACK = 0,
	HOLD = 1,
	RELEASE = 2
};

enum ESimsGender {
	FEMALE_HEAD = 0,
	MALE_HEAD = 1,
	GIRL_HEAD = 2,
	BOY_HEAD = 3,
	NSIM_HEAD_GENDERS = 4
};

enum EFontSymbol {
	UNDEFINED_FONT = 0,
	ONESTROKE_SCRIPT_FONT = -545322217,
	SYSTEMFONT_FONT = 1540925132
};

enum EModelSymbol {
	UNDEFINED_MODEL = 0,
	AFRICAN_VIOLET_MODEL = -335158503,
	AMISHIM_BOOK_CASE_MODEL = -826222530,
	ANDERSONVILLE_PEDESTAL_SINK_MODEL = -1246956662,
	ANIMATE_THE_CARS_01_MODEL = -980350220,
	ANOTHERMETAL_FENCE_45_MODEL = -66817912,
	ANOTHERMETAL_FENCE_STRAIGHT_MODEL = -1659232034,
	ANTIQUE_ARMOIRE_MODEL = -2057828757,
	ANTIQUE_PERSIAN_RUG_MODEL = -175537619,
	ANYWHERE_END_TABLE_MODEL = -506521204,
	ARISTOSCRATCH_POOL_TABLE_MODEL = -2038011458,
	AROMASTER_2000_MODEL = -1160051233,
	BABY_CRADLE_MODEL = 1041591381,
	BACHMAN_WOOD_BEVERAGE_BAR_MODEL = 1347900347,
	BACKWOODS_TABLE_BY_SURVIVALL_MODEL = -184852254,
	BEAVER_PELT_MOOSEHEAD_MODEL = -2040824143,
	BEEJAPHONE_GUITAR_MODEL = -2136319695,
	BENI_KANA_TEPPENYAKI_TABLE_MODEL = -261803116,
	BENTLEY_MODEL = 1425569944,
	BIRCH_TREE_MODEL = -1867305593,
	BI_POLAR_MODEL = -869126679,
	BLACK_SLACK_RECLINER_MODEL = 2056903900,
	BLIND_DATE_BY_I_RONEY_MODEL = 2039954359,
	BLUE_CHINA_VASE_MODEL = -843479749,
	BLUE_PLATE_SCONCE_A_00_MODEL = -2079058820,
	BOTTLE_LAMP_A_00_MODEL = 96243178,
	BOXWOOD_HEDGE_MODEL = -1078333910,
	BRAND_NAME_TOASTER_OVEN_MODEL = -597521358,
	BUILDMODE_CURSOR_MODEL = -1032819287,
	BUILDMODE_CURSOR_02_MODEL = -640690921,
	BUILDMODE_CURSOR_H_MODEL = 1211843315,
	BUYMODE_CURSOR_MODEL = 95268310,
	BUYMODE_CURSOR_02_MODEL = -1241873510,
	BUYMODE_CURSOR_H_MODEL = 2079859367,
	CARD_TABLE_MODEL = -1037146487,
	CARRY_BABY_CLOSED_MODEL = -1298221166,
	CARRY_BABY_OPEN_MODEL = -969064158,
	CARRY_BEANS_MODEL = 912134021,
	CARRY_BENNIKANNA_BOWL_OF_FOOD_EMPTY_MODEL = 1758741927,
	CARRY_BENNIKANNA_BOWL_OF_FOOD_FULL_MODEL = -217598080,
	CARRY_BENNIKANNA_BOWL_OF_FOOD_HALF_FULL_MODEL = 301657184,
	CARRY_BENNIKANNA_RAW_TABLE_FOOD_STATE_01_MODEL = -1372029866,
	CARRY_BENNIKANNA_STIR_THE_FOOD_STATE_01_MODEL = -1396580127,
	CARRY_BENNIKANNA_STIR_THE_FOOD_STATE_02_MODEL = 902345051,
	CARRY_BENNIKANNA_STIR_THE_FOOD_STATE_03_MODEL = 1120895437,
	CARRY_BENNIKANNA_TRAY_FULL_MODEL = -1524619804,
	CARRY_BILLS_ORANGE_MODEL = -1140391461,
	CARRY_BILLS_RED_MODEL = 1615082764,
	CARRY_BILLS_WHITE_MODEL = 1374425125,
	CARRY_BILLS_YELLOW_MODEL = 1908825148,
	CARRY_BURRITO_ENCHILADA_EMPTY_PLATE_MODEL = 187088903,
	CARRY_BURRITO_ENCHILADA_FULL_PLATE_MODEL = 1784951381,
	CARRY_BURRITO_ENCHILADA_FULL_PLATE__BKUP_MODEL = 1636439529,
	CARRY_BURRITO_ENCHILADA_HALFFULL_PLATE_MODEL = 1103347070,
	CARRY_CARD_BLANK_MODEL = -1769199519,
	CARRY_CARD_DECK_MODEL = -502502023,
	CARRY_CARD_DIAMONDS_MODEL = 1340209168,
	CARRY_CARD_HEARTS_MODEL = 1856907192,
	CARRY_CARD_SPADES_MODEL = -456314432,
	CARRY_CUTTING_BOARD_EMPTY_MODEL = -525801912,
	CARRY_CUTTING_BOARD_STAGE_1_MODEL = 1982519110,
	CARRY_CUTTING_BOARD_STAGE_2_MODEL = -282884356,
	CARRY_FRUITCAKE_01_MODEL = -81004190,
	CARRY_FRUITCAKE_PIECE_HALF_MODEL = -740629120,
	CARRY_FRUITCAKE_PIECE_WHOLE_MODEL = 1590565469,
	CARRY_FRYING_PAN_MODEL = 1904568127,
	CARRY_GIFT_CHOCOLATES_CLOSED_MODEL = -238410685,
	CARRY_GIFT_FLOWERS_MODEL = 634740547,
	CARRY_GNOME_MODEL = -52900756,
	CARRY_GROUNDBEEF_SMALLTRAY_EMPTY_MODEL = 1402856941,
	CARRY_GROUNDBEEF_SMALLTRAY_FULL_MODEL = -729336416,
	CARRY_GROUNDBEEF_SMALLTRAY_HALF_MODEL = -811425759,
	CARRY_GROUP_MEAL_EMPTY_MODEL = -116659097,
	CARRY_GROUP_MEAL_FIVE_SIXTHS_FULL_MODEL = -1424262972,
	CARRY_GROUP_MEAL_FULL_MODEL = 1220731086,
	CARRY_GROUP_MEAL_HALF_FULL_MODEL = 817241739,
	CARRY_GROUP_MEAL_ONE_SIXTH_FULL_MODEL = 2015709546,
	CARRY_GROUP_MEAL_ONE_THIRD_FULL_MODEL = 696353444,
	CARRY_GROUP_MEAL_TWO_THIRDS_FULL_MODEL = 1606340088,
	CARRY_HAMBURGER_EMPTY_MODEL = -924162387,
	CARRY_HAMBURGER_HALF_MODEL = -589082399,
	CARRY_HAMBURGER_WHOLE_MODEL = 1685352998,
	CARRY_MICROWAVE_POT_MODEL = -1907704245,
	CARRY_NEWSPAPER_MODEL = 1185976430,
	CARRY_NEWSPAPER_OLD_MODEL = -1191051960,
	CARRY_PIZZABOX_A_00_MODEL = 1578308719,
	CARRY_PLATE_HAMBURGER_1_MODEL = 918566178,
	CARRY_PLATE_HAMBURGER_2_MODEL = -1345756008,
	CARRY_PLATE_HAMBURGER_3_MODEL = -657566706,
	CARRY_PLATE_HAMBURGER_4_MODEL = 1185595821,
	CARRY_PLATE_HAMBURGER_5_MODEL = 833483067,
	CARRY_PLATE_HAMBURGER_6_MODEL = -1465606015,
	CARRY_PLATE_HAMBURGER_EMPTY_MODEL = -932232102,
	CARRY_SALAD_EMPTY_PLATE_MODEL = -413079295,
	CARRY_SALAD_FULL_PLATE_MODEL = 1337922196,
	CARRY_SALAD_HALFFULL_PLATE_MODEL = -1632126354,
	CARRY_SALAD_MEAL_EMPTY_MODEL = -1715252132,
	CARRY_SALAD_MEAL_FIVE_SIXTHS_FULL_MODEL = -293241158,
	CARRY_SALAD_MEAL_FULL_MODEL = 821300817,
	CARRY_SALAD_MEAL_HALF_FULL_MODEL = -1841237347,
	CARRY_SALAD_MEAL_ONE_SIXTHS_FULL_MODEL = 172232978,
	CARRY_SALAD_MEAL_ONE_THIRD_FULL_MODEL = 2012270351,
	CARRY_SALAD_MEAL_TWO_THIRDS_FULL_MODEL = 518309589,
	CARRY_SIX_PATTIES_COOKED_MODEL = 507165509,
	CARRY_SIX_PATTIES_HALF_COOKED_MODEL = -1181744922,
	CARRY_SIX_PATTIES_ONTRAY_MODEL = -954354894,
	CARRY_SIX_PATTIES_RAW_MODEL = -1014666533,
	CARRY_SLICE_1_3RDS_MODEL = 467815586,
	CARRY_SLICE_2_3RDS_MODEL = -1653195252,
	CARRY_SLICE_3_3RDS_MODEL = 1445653929,
	CARRY_SNACK_CHIPS_MODEL = -1513196014,
	CARRY_SOUP_IN_PAN_MODEL = 427564387,
	CARRY_STOOL_MODEL = 502698227,
	CARRY_TOASTEROVEN_POT_MODEL = 1892638597,
	CARRY_TRAY_BOXES_CARTONS_ETC_MODEL = 1301790734,
	CARRY_TRAY_EMPTY_MODEL = 1717763619,
	CARRY_TRAY_OF_BEANS_1_CANS_MODEL = 1407892713,
	CARRY_TRAY_OF_BEANS_2_CANS_MODEL = -713109945,
	CARRY_TRAY_OF_BEANS_3_CANS_MODEL = 505552354,
	CARRY_TRAY_OF_BEANS_4_CANS_MODEL = 52899162,
	CARRY_TRAY_OF_BEANS_5_CANS_MODEL = -931397889,
	CARRY_TRAY_OF_BEANS_6_CANS_MODEL = 1324321873,
	CARRY_TV_DINNER_BOX_MODEL = -365370202,
	CARRY_TV_DINNER_BOX_WITH_OPEN_FLAP_MODEL = -347164485,
	CARVING_BLOCK_MODEL = -1340939189,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_MODEL = -984160650,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_L_MODEL = 865862324,
	CHEAP_PINE_BOOKCASE_MODEL = -579110849,
	CHIMEWAY___DAUGHTERS_PIANO_MODEL = -1860350781,
	CHUCK_MATEWELL_CHESS_SET_MODEL = -1307343461,
	CONTEMPO_COUCH_MODEL = 1062736438,
	CONTEMPO_LOVESEAT_MODEL = 1715079332,
	COUNTRY_CLASS_ARMCHAIR_MODEL = -741871276,
	COUNTRY_CLASS_LOVESEAT_MODEL = 154224908,
	COUNTRY_CLASS_SOFA_MODEL = -1421385399,
	COUNT_BLANC_BATHROOM_COUNTER_SINK_HOLE_EPIKOUROS__MODEL = -1403319834,
	COUNT_BLANC_BATHROOM_COUNTER_SINK_HOLE_NORTH__MODEL = -1661101130,
	COUNT_BLANC_BATHROOM_COUNTER_SINK_HOLE_STRAIGHT__MODEL = -1289108574,
	COUNT_BLANC_BATHROOM_COUNTER__CORNER__MODEL = 558188366,
	COUNT_BLANC_BATHROOM_COUNTER__STRAIGHT__MODEL = 629240759,
	CREATE_SIM_SCENE_MODEL = -177711922,
	CREATE_SIM_SCENE_MIRROR_FIX__MODEL = 1871273923,
	DAFFODILS_MODEL = 1638570782,
	DECKCHAIR_BY_SURVIVAL_MODEL = -625526526,
	DELUSION_DE_GRANDEUR_MODEL = 2072813303,
	DIALECTRIC_FREESTANDING_RANGE_MODEL = 451750111,
	DIAMOND_MODEL = 1830750550,
	DIMANCHE_FOLDING_EASEL_MODEL = 408261476,
	DISH_DUSTER_DELUXE_MODEL = 1792912192,
	DIVING_BOARD_MODEL = 181211449,
	DOWN_WIT_DAT_BOOMBOX_MODEL = 1668575959,
	ECHINOPSIS_MAXIMUS_CACTUS_MODEL = 1038211780,
	ELITE_REFLECTIONS_CHROME_LAMP_A_00_MODEL = -836524817,
	EMPRESS_DINING_CHAIR_MODEL = 1743128456,
	EPIKOUROS_KITCHEN_SINK_MODEL = 457763968,
	ERUPTION_OF_DECADENCE_TAPESTRY_MODEL = -836010465,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_MODEL = -708658642,
	FAUX_BEARSKIN_RUG_MODEL = -474660622,
	FA_FT_DEFINED_01_MODEL = 1071790859,
	FA_FT_DEFINED_02_MODEL = -1494521167,
	FA_FT_ETHNIC_01_MODEL = -1604501503,
	FA_FT_ETHNIC_02_MODEL = 961810875,
	FA_FT_ETHNIC_03_MODEL = 1314070829,
	FA_FT_ETHNIC_04_MODEL = -801655666,
	FA_FT_NORMAL_01_MODEL = 787487000,
	FA_FT_NORMAL_02_MODEL = -1208399710,
	FA_FT_NORMAL_03_MODEL = -1057064908,
	FA_FT_ROUNDED_01_MODEL = 376728346,
	FA_FT_ROUNDED_02_MODEL = -1887618400,
	FA_FT_ROUNDED_03_MODEL = -126219722,
	FA_GL_CAT_SUN_MODEL = 1293042324,
	FA_GL_LIBRARY_EYE_MODEL = 1667617463,
	FA_GL_NORMAL_EYE_MODEL = -278250674,
	FA_GL_NORMAL_SUN_MODEL = -861507064,
	FA_HH_BALL_CAP_MODEL = 98549333,
	FA_HH_BALL_CAP_02_MODEL = -1989314623,
	FA_HH_BALL_CAP_03_MODEL = -26589353,
	FA_HH_BEEHIVE_MODEL = -518816690,
	FA_HH_BUN_MODEL = 1182477659,
	FA_HH_CHEF_HAT_MODEL = 980064649,
	FA_HH_COP_HAT_MODEL = -306123493,
	FA_HH_COWBOY_HAT_MODEL = -231509437,
	FA_HH_EGYPTIAN_MODEL = -1168616343,
	FA_HH_ELEGANT_MODEL = -1117722035,
	FA_HH_GEISHA_MODEL = -2110853068,
	FA_HH_HEADBAND_MODEL = -804565745,
	FA_HH_LONG_MODEL = 925604218,
	FA_HH_LONG_02_MODEL = -630590898,
	FA_HH_LONG_03_MODEL = -1385250088,
	FA_HH_LONG_04_MODEL = 856315771,
	FA_HH_MAID_HAT_MODEL = -1216717453,
	FA_HH_MED_LENGTH_MODEL = 1847641625,
	FA_HH_MED_LENGTH_02_MODEL = 973676413,
	FA_HH_MOB_BOSS_MODEL = -618787639,
	FA_HH_MOHAWK_MODEL = -476824568,
	FA_HH_PIGTAILS_MODEL = -1559273367,
	FA_HH_PIGTAILS_02_MODEL = 1031033302,
	FA_HH_PONYTAIL_02_MODEL = 518224806,
	FA_HH_PONYTAIL_03_MODEL = 1776569136,
	FA_HH_PUNK_SPIKED_MODEL = -154665876,
	FA_HH_SHORT_MODEL = 1207139602,
	FA_HH_THEIF_HAT_MODEL = -1946685090,
	FA_JW_BIG_HOOPS_MODEL = 746184142,
	FA_JW_DIAMONDS_MODEL = 1138213196,
	FA_JW_PEARLS_MODEL = 1144209282,
	FA_JW_PUNK_MODEL = 1358740151,
	FA_LB_1C_ARMYPANTS_MODEL = 1528741822,
	FA_LB_1C_BELLS_01_MODEL = 146300165,
	FA_LB_1C_KNEE_01_MODEL = -919241173,
	FA_LB_1C_KNEE_02_MODEL = 1346121617,
	FA_LB_1C_LOUNGE_01_MODEL = -446289972,
	FA_LB_1C_MINI_01_MODEL = -1964575488,
	FA_LB_1C_MINI_02_MODEL = 334472378,
	FA_LB_1C_NEKKID_MODEL = -1332205811,
	FA_LB_1C_PANTS_01_MODEL = -550424056,
	FA_LB_1C_PANTS_02_MODEL = 1178100658,
	FA_LB_1C_SHORTS_01_MODEL = 2035435268,
	FA_LB_1C_SKIRT_01_MODEL = -94595324,
	FA_LB_1C_SKIRT_02_MODEL = 1666565822,
	FA_LB_1C_TIGHT_01_MODEL = 2002542951,
	FA_SH_PUMP_01_MODEL = 343087962,
	FA_SH_SKIN_TIGHT_01_MODEL = -454007190,
	FA_SH_SNEAKER_01_MODEL = 1075862151,
	FA_UB_1C_ASTRONAUT_MODEL = 198569220,
	FA_UB_1C_CROP_01_MODEL = -1876172398,
	FA_UB_1C_JACKET_01_MODEL = 2000723849,
	FA_UB_1C_LONG_01_MODEL = 696633000,
	FA_UB_1C_LONG_02_MODEL = -1332963566,
	FA_UB_1C_MOB_BOSS_MODEL = -1180044173,
	FA_UB_1C_NEKKID_MODEL = 556396640,
	FA_UB_1C_PUFFY_01_MODEL = 495644434,
	FA_UB_1C_SHORT_01_MODEL = -720786008,
	FA_UB_1C_SHORT_01_V_MODEL = 810261272,
	FA_UB_1C_SHORT_02_MODEL = 1275132946,
	FA_UB_1C_SHORT_03_MODEL = 990366852,
	FA_UB_1C_TEPPEN_MODEL = 1483729792,
	FA_UB_1C_TIGHT_01_MODEL = -1078418869,
	FC_FT_ETHNIC_01_MODEL = 1093895340,
	FC_FT_ETHNIC_02_MODEL = -667233002,
	FC_FT_NORMAL_01_MODEL = -811672139,
	FC_FT_NORMAL_02_MODEL = 1452772367,
	FC_FT_NORMAL_03_MODEL = 563133593,
	FC_FT_ROUNDED_01_MODEL = -1091380597,
	FC_FT_ROUNDED_02_MODEL = 670796593,
	FC_GL_LIBRARY_EYE_MODEL = -456788012,
	FC_GL_NERDY_EYE_MODEL = 370908683,
	FC_GL_NORMAL_EYE_MODEL = 1206684383,
	FC_GL_PINK_SUN_MODEL = -980544562,
	FC_HH_AFRO_MODEL = 214599617,
	FC_HH_BALL_CAP_01_MODEL = -1748761832,
	FC_HH_BALL_CAP_02_MODEL = 248337058,
	FC_HH_COWBOY_HAT_MODEL = 1521861586,
	FC_HH_ELEGANT_MODEL = 1364948178,
	FC_HH_HEADBAND_MODEL = -1336412092,
	FC_HH_LONG_MODEL = 433959420,
	FC_HH_MED_LENGTH_MODEL = -962168952,
	FC_HH_MOHAWK_MODEL = -1141340727,
	FC_HH_PIGTAILS_MODEL = -1017916126,
	FC_HH_PIGTAILS_02_MODEL = -1160481611,
	FC_HH_PONYTAIL_01_MODEL = 4853631,
	FC_HH_PONYTAIL_02_MODEL = -1723638075,
	FC_HH_PONYTAIL_03_MODEL = -297505197,
	FC_HH_PRINCESS_HAT_MODEL = -2035245986,
	FC_HH_PUNK_SPIKED_MODEL = 1902631183,
	FC_HH_SHORT_MODEL = 1124511023,
	FC_HH_WITCH_HAT_MODEL = 1086063573,
	FC_HH_WIZARD_HAT_MODEL = -1975527696,
	FC_LB_1C_NEKKID_MODEL = 1375134624,
	FC_LB_1C_PANTS_01_MODEL = 1485903723,
	FC_LB_1C_PANTS_02_MODEL = -1046985007,
	FC_LB_1C_SHORTS_01_MODEL = -1385244733,
	FC_LB_1C_SHORTS_02_MODEL = 879199865,
	FC_LB_1C_SKIRT_01_MODEL = 2113712743,
	FC_LB_1C_SKIRT_02_MODEL = -453647395,
	FC_LB_1C_TIGHT_01_MODEL = -251902972,
	FC_SH_POINTY_01_MODEL = -1220440717,
	FC_SH_SNEAKER_01_MODEL = -391714026,
	FC_SH_TIGHT_01_MODEL = 814001205,
	FC_UB_1C_JACKET_MODEL = -622811236,
	FC_UB_1C_LONG_01_MODEL = -2130479303,
	FC_UB_1C_LONG_02_MODEL = 403318403,
	FC_UB_1C_LONG_03_MODEL = 1863128597,
	FC_UB_1C_NEKKID_MODEL = -1069075251,
	FC_UB_1C_SHORT_01_MODEL = 1386842315,
	FC_UB_1C_SHORT_02_MODEL = -878651023,
	FC_UB_1C_TIGHT_01_MODEL = 941131560,
	FEDERAL_LATTICE_WINDOW_DOOR_MODEL = 1675156705,
	FIGHT_3D_PART_MODEL = -2018520452,
	FIREBRAND_SMOKE_DETECTOR_MODEL = 1282771947,
	FLIES_MODEL = -1066094544,
	FLOOR_RUG_BY_LEOPARD_LIFE_MODEL = 1769553741,
	FLUSH_FORCE_5_XLT_MODEL = 470758490,
	FOUNTAIN_OF_TRANQUILITY_MODEL = -1299510361,
	FREEZE_SECRET_REFRIGERATOR_MODEL = -252302827,
	FUZZY_LOGIC_DISHWASHER_MODEL = 1424750824,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_MODEL = 867365896,
	GARDEN_LAMP_BY_LUNATECH_MODEL = 1125204274,
	GENERIC_RUG_01_MODEL = -932069645,
	GENERIC_RUG_02_MODEL = 1366880073,
	GIFT_TRASH_01_MODEL = 685793743,
	GIFT_TRASH_02_MODEL = -1310117771,
	GRANDFATHER_CLOCK_MODEL = -988042556,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_A_00_MODEL = -110537775,
	HAZARD_THE_GUESS_BY_CONNOR_TIIST_MODEL = 1536825594,
	HEAD_IN_JAR_CURIO_MODEL = -287101311,
	HIGHBRAU_COAT_OF_ARMS_MODEL = 901898024,
	HIGH_CREATIVE_BAD_MOOD_MONKEY_BUTLER__MODEL = -322808725,
	HIGH_CREATIVE_GOOD_MOOD_VENUS__MODEL = 517723412,
	HORRORWITZ_STAR_TRACK_BACKYARD_TELESCOPE_MODEL = -1227908772,
	HYDRONOMIC_KITCHEN_SINK_MODEL = 214742628,
	HYDROTHERA_BATHTUB_A_00_MODEL = 309637161,
	HYGEIA_O_MATIC_TOILET_MODEL = -2120784311,
	ICE_CHEST_MODEL = 317915674,
	JADE_PLANT_MODEL = 2142436463,
	JUNKER_MODEL = -526578011,
	JUNK_GENIE_TRASH_COMPACTOR_MODEL = 1875749862,
	JUSTA_BATHTUB_MODEL = -2009441109,
	JUST_A_CAP_MODEL = -1525413215,
	JUST_A_CAP___DOWN__MODEL = -1313909391,
	KINDERSTUFF_DRESSER_MODEL = 1217071111,
	KINDERSTUFF_NIGHTSTAND_MODEL = -282357280,
	KRAFTKING_WOODWORKING_TABLE_MODEL = -91620075,
	LIBRI_DI_REGINA_BOOKCASE_MODEL = -1246900290,
	LIMO_ZINE_MODEL = 979060604,
	LLAMARK_REFRIDGERATOR_MODEL = -50724348,
	LONDON_CUPPERTINO_DESK_TABLE_MODEL = -722119768,
	LONDON_MESA_DINING_DESIGN_MODEL = -291174719,
	LOT_TYPE_01_MODEL = -93963294,
	LOT_TYPE_02_MODEL = 1668246104,
	LOT_TYPE_03_MODEL = 342383310,
	LOT_TYPE_04_MODEL = -1978871955,
	LOW_CREATIVE_BAD_MOOD_ABSTRACT__MODEL = -1811724293,
	LOW_CREATIVE_GOOD_MOOD_DAVID__MODEL = 2085947945,
	LUXURIARE_LOVESEAT_MODEL = 2007726293,
	MAGIC_MYSTERY_TOY_BOX_MODEL = -766057033,
	MAILBOX_MODEL = -1713759215,
	MAIN_CURSOR_MODEL = 417167852,
	MAIN_CURSOR_02_MODEL = 693605094,
	MAIN_CURSOR_ARROW_MODEL = -166458663,
	MAIN_CURSOR_ARROW_H_MODEL = -1261241446,
	MAIN_CURSOR_H_MODEL = -537921693,
	MALE_CHILD_MODEL = -952392200,
	MAPLE_DOOR_FRAME_MODEL = 1357817149,
	MAPLE_DOOR_FRAME___DOWN__MODEL = 1287565850,
	MASTER_SUITE_TUB_A_00_MODEL = 162457383,
	MA_CA_CRIMINAL_MOBSTER_UB_MODEL = 1708252459,
	MA_CA_MILITARY_ASTRONAUT_LB_MODEL = -540270436,
	MA_CA_MILITARY_ASTRONAUT_SH_MODEL = -230439140,
	MA_CA_MILITARY_ASTRONAUT_UB_MODEL = 1154255236,
	MA_CA_MILITARY_RANGER_LB_MODEL = 874268505,
	MA_CA_MILITARY_RANGER_UB_MODEL = -1357058495,
	MA_CA_MILITARY_RECRUIT_LB_MODEL = -396829124,
	MA_CA_MILITARY_RECRUIT_SH_MODEL = -975750724,
	MA_CA_MILITARY_RECRUIT_UB_MODEL = 1935177508,
	MA_CA_SLACKER_CLERK_LB_MODEL = -138549799,
	MA_CA_SLACKER_SLACKER_UB_MODEL = 1920500618,
	MA_FT_ASIAN_01_MODEL = 43541321,
	MA_FT_ASIAN_02_MODEL = -1684983053,
	MA_FT_BLACK_01_MODEL = -1127437902,
	MA_FT_BLACK_02_MODEL = 633731080,
	MA_FT_DEFINED_CUT_MODEL = -884658845,
	MA_FT_NORMAL_01_MODEL = -268124186,
	MA_FT_NORMAL_02_MODEL = 1762520668,
	MA_FT_ROUNDED_MODEL = -820389990,
	MA_FT_ROUNDED_02_MODEL = -710536931,
	MA_GL_NERD_EYE_MODEL = -1846294414,
	MA_GL_NORMAL_EYE_MODEL = -1246686989,
	MA_GL_NORMAL_SUN_MODEL = -1770169931,
	MA_GL_NORMAL_SUN_02_MODEL = 157810717,
	MA_GL_PUNKY_SUN_MODEL = 1138514361,
	MA_HH_CHEF_HAT_MODEL = 1968349796,
	MA_HH_HEADBAND_MODEL = -1624017182,
	MA_HH_MULLET_MODEL = -904892921,
	MA_HH_PONYTAIL_MODEL = -908856222,
	MA_HH_PUNK_SPIKED_MODEL = 1129179254,
	MA_HH_RECEDING_MODEL = -1332638620,
	MA_HH_STOCKING_CAP_MODEL = -109802902,
	MA_JW_BOTH_EARS_MODEL = -103669063,
	MA_JW_DOUBLE_MODEL = -790686391,
	MA_JW_GOLDBOTH_EARS_MODEL = 668426671,
	MA_JW_GOLDDOUBLE_MODEL = -981364759,
	MA_JW_GOLDSINGLE_MODEL = -708748769,
	MA_JW_PUNK_MODEL = -1474543296,
	MA_JW_SINGLE_MODEL = -1063272257,
	MA_LB_1C_NEKKID_MODEL = 1852604915,
	MA_LB_1C_PANTS_01_MODEL = 1790649874,
	MA_LB_1C_PANTS_02_MODEL = -206407768,
	MA_LB_1C_PANTS_03_MODEL = -2068494530,
	MA_LB_1C_PANTS_04_MODEL = 449958557,
	MA_LB_1C_SHORTS_01_MODEL = -2071645078,
	MA_LB_1C_SHORTS_02_MODEL = 495740368,
	MA_LB_1C_TIGHT_01_MODEL = -1026132611,
	MA_PO_NAKED_LB_MODEL = 797407558,
	MA_PO_SKELETON_PLUS_MODEL = 2011493939,
	MA_SH_BOOTS_01_MODEL = 309391186,
	MA_SH_BOOTS_02_MODEL = -1954955544,
	MA_SH_CLOGS_01_MODEL = -932046845,
	MA_SH_DRESS_01_MODEL = -1045568339,
	MA_SH_SKIN_TIGHT_01_MODEL = 1309146438,
	MA_SH_SNEAKERS_01_MODEL = 1435291536,
	MA_SH_SNEAKERS_02_MODEL = -863658454,
	MA_UB_1C_COLLARED_01_MODEL = 1768436971,
	MA_UB_1C_JACKET_01_MODEL = -1969754905,
	MA_UB_1C_JACKET_02_MODEL = 329170269,
	MA_UB_1C_JACKET_03_MODEL = 1687784907,
	MA_UB_1C_LONG_SLV_01_MODEL = -2102313554,
	MA_UB_1C_LONG_SLV_02_MODEL = 465071124,
	MA_UB_1C_LONG_SLV_03_MODEL = 1824480386,
	MA_UB_1C_SHORT_SLV_01_MODEL = -1987026702,
	MA_UB_1C_SHORT_SLV_02_MODEL = 278475080,
	MA_UB_1C_TIGHT_01_MODEL = 171095633,
	MC_CA_CADET_UB_MODEL = -951318537,
	MC_FT_ASIAN_MODEL = -789897531,
	MC_FT_ASIAN2_MODEL = -250911956,
	MC_FT_BLACK_MODEL = -746658711,
	MC_FT_NORMAL_MODEL = 459981428,
	MC_FT_ROUNDED_MODEL = 589449477,
	MC_GL_NERD_EYE_MODEL = -240157383,
	MC_GL_NORMAL_EYE_MODEL = 490185058,
	MC_GL_NORMAL_SUN_MODEL = 1056696356,
	MC_HH_AFRO_MODEL = -198542282,
	MC_HH_BALD_MODEL = -1606212854,
	MC_HH_BALL_CAP_MODEL = 716910835,
	MC_HH_BALL_CAP_02_MODEL = -1152956744,
	MC_HH_BOWL_MODEL = 221269416,
	MC_HH_CLEAN_CUT_MODEL = 106840919,
	MC_HH_CORNROWS_MODEL = -1949057425,
	MC_HH_COWBOY_HAT_MODEL = 7268463,
	MC_HH_HEADBAND_MODEL = -9452631,
	MC_HH_MED_LENGTH_MODEL = -1669505995,
	MC_HH_MOHAWK_MODEL = -899014201,
	MC_HH_MULLET_MODEL = -1837312058,
	MC_HH_PIRATE_HAT_MODEL = 182728492,
	MC_HH_PONYTAIL_MODEL = -1450229463,
	MC_HH_PUNK_SPIKED_MODEL = -991048427,
	MC_HH_STOCKING_CAP_MODEL = 759700141,
	MC_HH_WIZARD_HAT_MODEL = -790299315,
	MC_LB_COWBOY_MODEL = 1204952562,
	MC_LB_NEKKID_MODEL = -1849815430,
	MC_LB_PANTS_01_MODEL = -33725325,
	MC_LB_PANTS_02_MODEL = 1693726153,
	MC_LB_PANTS_03_MODEL = 334693727,
	MC_LB_PANTS_04_MODEL = -1919446788,
	MC_LB_SHORTS_01_MODEL = -1096342554,
	MC_LB_SHORTS_02_MODEL = 665743964,
	MC_LB_SHORTS_03_MODEL = 1353269962,
	MC_LB_TIGHT_MODEL = -188781623,
	MC_PO_SKELETON_PLUS_MODEL = 1915788720,
	MC_SH_BOOTS_01_MODEL = 1915509273,
	MC_SH_BOOTS_02_MODEL = -349893725,
	MC_SH_CLOGS_01_MODEL = -1473335992,
	MC_SH_DRESS_MODEL = 645585483,
	MC_SH_SNEAKERS_01_MODEL = -768808205,
	MC_SH_SNEAKERS_02_MODEL = 1260763977,
	MC_SH_TIGHT_MODEL = -179038464,
	MC_UB_COLLARED_MODEL = 402303655,
	MC_UB_JACKET_01_MODEL = 320119846,
	MC_UB_JACKET_02_MODEL = -1977748068,
	MC_UB_JACKET_03_MODEL = -48577270,
	MC_UB_LONG_SLV_01_MODEL = 676825984,
	MC_UB_LONG_SLV_02_MODEL = -1319183814,
	MC_UB_LONG_SLV_03_MODEL = -967185748,
	MC_UB_SHORT_SLV_01_MODEL = 1441565579,
	MC_UB_SHORT_SLV_02_MODEL = -857351631,
	MC_UB_TIGHT_MODEL = -1756675639,
	MEDICINE_CABINET_MODEL = -860737754,
	MED_CREATIVE_BAD_MOOD_LLAMA__MODEL = -1881467476,
	MED_CREATIVE_GOOD_MOOD_THINKER__MODEL = 466785043,
	MEET_MARCO_MODEL = -2043674472,
	MESQUITE_DESK_TABLE_MODEL = -36534249,
	METAL_FENCE_45_MODEL = 1946106983,
	METAL_FENCE_STRAIGHT_MODEL = 1543893466,
	MICROSCOTCH_CORVETTA_Q628_1500JA_MODEL = 450132433,
	MILITARY_JEEP_MODEL = 1837017856,
	MODERN_MISSION_BED_MODEL = 1119873414,
	MODERN_MISSION_BED_L_MODEL = -1214285455,
	MODERN_MISSION_END_TABLE_MODEL = 1768719868,
	MODESTO_TILE_FIREPLACE_MODEL = -154870688,
	MONEYWELL_COMPUTER_MODEL = -475324298,
	MONKEY_BUTLER_HUT_MODEL = 1318759385,
	MONOCHROME_TV_MODEL = 1008232004,
	MONTICELLO_DOOR_MODEL = -428857615,
	MOVE_TOOL_MODEL = -1416088690,
	MR_REGULAR_JOE_COFFEE_MODEL = 1462182578,
	MULBERRY_TREE_MODEL = 292676034,
	MU_HH_CLEAN_CUT_MODEL = -1741802355,
	MU_HH_CORNROWS_MODEL = -1624127640,
	MU_HH_MED_LENGTH_01_MODEL = 754736885,
	MU_HH_MED_LENGTH_02_MODEL = -1242230961,
	MU_HH_MED_LENGTH_03_MODEL = -1024311335,
	MU_HH_MED_LENGTH_04_MODEL = 1553377914,
	NAPOLEAN_SLEIGH_BED_MODEL = 406894218,
	NAPOLEAN_SLEIGH_BED_L_MODEL = -520216345,
	NARCISCO_FLOOR_MIRROR_MODEL = -958048262,
	NARCISCO_FLOOR_MIRROR_WIDER__MODEL = 2138051336,
	NARCISCO_WALL_MIRROR_MODEL = 173745944,
	NASTURTIUM_MODEL = 1278660297,
	NPC_FIREFIGHTER_MODEL = 542255949,
	NPC_GARDENER_MODEL = -236245840,
	NPC_HANDYMAN_MODEL = 876295113,
	NPC_MAID_MODEL = 21221387,
	NPC_MAIL_CARRIER_MODEL = -169278974,
	NPC_MONKEY_BUTLER_MODEL = 1642686160,
	NPC_PAPERGIRL_MODEL = 1414048478,
	NPC_PIZZA_GUY_MODEL = 1269994351,
	NPC_POLICE_OFFICER_MODEL = 994415533,
	NPC_REAPER_MODEL = -183589130,
	NPC_REPOMAN_MODEL = 759903044,
	NPC_SOCIAL_WORKER_MODEL = -793679215,
	NPC_THIEF_MODEL = -745727416,
	NULL_MODEL = 324932091,
	NUMICA_COUNTER_SINK_HOLE_EPIKOUROS__MODEL = 1232475710,
	NUMICA_COUNTER_SINK_HOLE_NORTH__MODEL = -1313738569,
	NUMICA_COUNTER_SINK_HOLE_STRAIGHT__MODEL = 1267209839,
	NUMICA_COUNTER__CORNER__MODEL = -623114121,
	NUMICA_COUNTER__STRAIGHT__MODEL = -848930411,
	NUMICA_FOLDING_CARD_TABLE_MODEL = 1545157711,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_MODEL = -1641335688,
	OLD_MOVIE_PROP_MODEL = 1281231191,
	OUTDOOR_TRASH_CAN_MODEL = -1376759031,
	OVAL_GLASS_SCONCE_A_00_MODEL = -897043445,
	PARQUE_FRESCO_DEL_AIRE_BENCH_MODEL = 2107041810,
	PICKET_FENCE_45_MODEL = -1200934240,
	PICKET_FENCE_STRAIGHT_MODEL = 1073770213,
	PINEGULCHER_DRESSER_MODEL = 110326991,
	PINE_GULCHER_END_TABLE_MODEL = -1059394112,
	PINE_TREE_MODEL = -209441397,
	PINK_FLAMINGO_MODEL = 700850019,
	PLATE_GLASS_WINDOW_MODEL = 849102219,
	PLATE_GLASS_WINDOW__ACTUAL_WINDOW__MODEL = 1083683864,
	PLATE_GLASS_WINDOW__NORTH__MODEL = -1280690824,
	PLATE_GLASS_WINDOW__SOUTH__MODEL = -1858790268,
	PLATE_GLASS_WINDOW___DOWN__MODEL = -90225718,
	PLATE_OF_FOOD_EMPTY__MODEL = 918063094,
	PLATE_OF_FOOD_FULL__MODEL = 418255371,
	PLATE_OF_FOOD_HALF_EMPTY__MODEL = -945790068,
	PLATE_OF_FOOD_SCRAPS_EMPTY__MODEL = -372615174,
	POOL_3X3_SQUARE_MODEL = 318581446,
	POOL_LADDER_MODEL = -1601476401,
	POOL_LETTER_I_7X11_MODEL = -1648068215,
	POOL_LETTER_L_9X11_MODEL = 769040137,
	POOL_MEDIUM_5X8_MODEL = -1640081461,
	POOL_SMALL_4X6_MODEL = 1233204168,
	PORCINA_REFRIGERATOR_MODEL_P1GS_MODEL = 1197866826,
	PORTRAIT_GRID_BY_PAYNE_A_PITCHER_MODEL = -1443520646,
	POSEIDONS_ADVENTURE_AQUARIUM_MODEL = -1739123228,
	POSITIVE_POTENTIAL_MICROWAVE_MODEL = -592645282,
	POSTURE_PLUS_OFFICE_CHAIR_MODEL = -257248790,
	PRIVACY_WINDOW_MODEL = 1642731377,
	PRIVACY_WINDOW__ACTUAL_WINDOW__MODEL = -1219647946,
	PRIVACY_WINDOW__NORTH__MODEL = -880566621,
	PRIVACY_WINDOW__SOUTH__MODEL = -383994017,
	PRIVACY_WINDOW___DOWN__MODEL = -2101942255,
	PROP_ABDUCTION_RINGS01_MODEL = -1885629733,
	PROP_ABDUCTION_RINGS02_MODEL = 378717025,
	PROP_ABDUCTION_RINGS03_MODEL = 1637217271,
	PROP_ABDUCTION_RINGS04_MODEL = -956844,
	PROP_BABY_BOTTLE_MODEL = 803880555,
	PROP_BABY_BOTTLE_CLOSED_MODEL = 553153333,
	PROP_BABY_BOTTLE_OPEN_MODEL = -2017477922,
	PROP_BABY_PLAY_CLOSED_MODEL = -1560497821,
	PROP_BABY_PLAY_OPEN_MODEL = 120837141,
	PROP_BABY_SOCIAL_CLOSED_MODEL = -218879226,
	PROP_BABY_SOCIAL_OPEN_MODEL = -2130666849,
	PROP_BAG_FISH_MODEL = -1903231058,
	PROP_BBALL_MODEL = 1767536064,
	PROP_BBQ_SPATULA_MODEL = -1478611984,
	PROP_BILLS_MODEL = 998992999,
	PROP_BOOK1_MODEL = -262464687,
	PROP_BOOK2_MODEL = 1767000811,
	PROP_BOOK3_MODEL = 508918397,
	PROP_BUBBLES_FA_MODEL = 962650267,
	PROP_BUBBLES_FC_MODEL = -680623689,
	PROP_BUBBLES_MA_MODEL = -627820208,
	PROP_BUBBLES_MC_MODEL = 882530428,
	PROP_BUTTERKNIFE_MODEL = -1589823142,
	PROP_CARD_BLANK_MODEL = 961124937,
	PROP_CARD_BLANK_RIGHT_MODEL = -1209928059,
	PROP_CARD_DECK_MODEL = 765790672,
	PROP_CARD_DECK_RIGHT_MODEL = -1666704926,
	PROP_CARD_DIAMONDS_MODEL = 1145181666,
	PROP_CARD_DIAMONDS_RIGHT_MODEL = 2091142377,
	PROP_CARD_HEARTS_MODEL = 1538542320,
	PROP_CARD_HEARTS_RIGHT_MODEL = 1015945813,
	PROP_CARD_SPADE_MODEL = 1666255313,
	PROP_CARD_SPADE_RIGHT_MODEL = 620030845,
	PROP_CHILD_ABDUCTION_RINGS01_MODEL = -1013622280,
	PROP_CHILD_ABDUCTION_RINGS02_MODEL = 1520175170,
	PROP_CHILD_ABDUCTION_RINGS03_MODEL = 765147348,
	PROP_CHILD_ABDUCTION_RINGS04_MODEL = -1275089545,
	PROP_CHILD_BABY_BOTTLE_MODEL = 803025850,
	PROP_CHILD_BABY_BOTTLE_CLOSED_MODEL = -2100097908,
	PROP_CHILD_BABY_BOTTLE_OPEN_MODEL = -530266113,
	PROP_CHILD_BABY_PLAY_CLOSED_MODEL = -987247550,
	PROP_CHILD_BABY_PLAY_OPEN_MODEL = -2039787440,
	PROP_CHILD_BAG_FISH_MODEL = 71299212,
	PROP_CHILD_BBALL_MODEL = -1875007665,
	PROP_CHILD_BILLS_MODEL = -1024672024,
	PROP_CHILD_BOOK1_MODEL = 154978782,
	PROP_CHILD_BOOK2_MODEL = -1875535772,
	PROP_CHILD_BOOK3_MODEL = -416110350,
	PROP_CHILD_BUTTERKNIFE_MODEL = -1593166709,
	PROP_CHILD_DUSTPAN_MODEL = -516025585,
	PROP_CHILD_DUSTPANASH_MODEL = -866459083,
	PROP_CHILD_FORK_MODEL = -169771440,
	PROP_CHILD_GIFT_BOX_MODEL = 423160054,
	PROP_CHILD_GUITAR_MODEL = 1370931384,
	PROP_CHILD_GUITAR_BODY_MODEL = -2070817415,
	PROP_CHILD_HANDBROOM_MODEL = 2133304771,
	PROP_CHILD_MOP_MODEL = 59505143,
	PROP_CHILD_NEWSPAPER_CLOSED_MODEL = 282060424,
	PROP_CHILD_NEWSPAPER_MIDDLE_MODEL = -1970753117,
	PROP_CHILD_NEWSPAPER_OLD_MODEL = 1412470894,
	PROP_CHILD_NEWSPAPER_OPEN_MODEL = -450915192,
	PROP_CHILD_PAINT_BRUSH_MODEL = -971111,
	PROP_CHILD_PAINT_PALETTE_MODEL = -1655658837,
	PROP_CHILD_PHONE_MODEL = -1529580315,
	PROP_CHILD_PLUNGER_MODEL = -1885956508,
	PROP_CHILD_REMOTE_MODEL = 1228569607,
	PROP_CHILD_SAND_BOX_SHOVEL_MODEL = 435102902,
	PROP_CHILD_SCREWDRIVER_MODEL = 1302594930,
	PROP_CHILD_SCRUBBRUSH_MODEL = -1267633474,
	PROP_CHILD_SODA_CAN_MODEL = 205826316,
	PROP_CHILD_SPONGE_MODEL = -532523906,
	PROP_CHILD_SPONGE_LEFT_MODEL = 1043994334,
	PROP_CHILD_TEDDYBEAR_MODEL = 1289490867,
	PROP_CHILD_TOOTHBRUSH_MODEL = 1355519739,
	PROP_CHILD_TOOTHPASTE_MODEL = 1027226784,
	PROP_CHILD_TOYCAR_MODEL = -1210786364,
	PROP_CHILD_TOYDOLL_MODEL = 1927158318,
	PROP_CHILD_TOYPLANE_MODEL = -1255414214,
	PROP_CHILD_TRASHBAG_MODEL = -4868609,
	PROP_CHILD_VR_GLASSES_MODEL = -708768846,
	PROP_CHILD_VR_GLASSES_HAND_MODEL = -1644769672,
	PROP_CHILD_WATERINGCAN_MODEL = 1266357854,
	PROP_CHILD_WRENCH_MODEL = 1953701077,
	PROP_CHILD_YOYO01_MODEL = -523284693,
	PROP_CHILD_YOYO02_MODEL = 2043027089,
	PROP_CHILD_YOYO03_MODEL = 247541255,
	PROP_CHILD_YOYO04_MODEL = -1868186716,
	PROP_COFFEEPOT_MODEL = 1338689808,
	PROP_COFFEE_MUG_MODEL = 1706955882,
	PROP_DUSTPAN_MODEL = 905501972,
	PROP_DUSTPANASH_MODEL = -78171339,
	PROP_ESPRESSO_CUP_MODEL = -1723614307,
	PROP_FIRE_EXTINGUISHER_MODEL = -1835553353,
	PROP_FORK_MODEL = 736927436,
	PROP_GIFT_BOX_MODEL = -1819678764,
	PROP_GIFT_FLOWERS_MODEL = 1575455884,
	PROP_GNOME_MODEL = -2127175193,
	PROP_GNOME_CHISEL_MODEL = -200824103,
	PROP_GNOME_MALLET_MODEL = -254466575,
	PROP_GUITAR_MODEL = 742930907,
	PROP_GUITAR_BODY_MODEL = -2069440344,
	PROP_HANDBROOM_MODEL = -1429383896,
	PROP_HOBOSTICK_MODEL = 730901192,
	PROP_JUGGLE_IN_HAND_MODEL = 1378035904,
	PROP_JUGGLE_LOOP1_MODEL = 363163652,
	PROP_JUGGLE_LOOP2_MODEL = -1934876226,
	PROP_JUGGLE_LOOP3_MODEL = -72675032,
	PROP_KNIFE_MODEL = -1547916897,
	PROP_LOOTBAG_MODEL = 1731463095,
	PROP_LOOTBAG_LEFT_MODEL = 658056790,
	PROP_MONEY_MODEL = -1373429165,
	PROP_MOP_MODEL = -1242193894,
	PROP_NEWSPAPER_CLOSED_MODEL = 1997839273,
	PROP_NEWSPAPER_MIDDLE_MODEL = -313275262,
	PROP_NEWSPAPER_OLD_MODEL = -1298001734,
	PROP_NEWSPAPER_OPEN_MODEL = 1682378957,
	PROP_NIGHTSTICK_MODEL = -1648101202,
	PROP_PAINT_BRUSH_MODEL = -3792056,
	PROP_PAINT_PALETTE_MODEL = 2076323455,
	PROP_PHONE_MODEL = 1572054634,
	PROP_PLUNGER_MODEL = 1531992191,
	PROP_POOL_CUE_MODEL = 592550754,
	PROP_POOL_CUE_HIGH_LEFT_MODEL = -1219208271,
	PROP_POOL_CUE_HIGH_RIGHT_MODEL = 1885735952,
	PROP_POOL_RACK_MODEL = 893631146,
	PROP_POOL_RACK_BALLS_MODEL = -748770938,
	PROP_REAPER_SCYTHE_MODEL = 2101101156,
	PROP_REMOTE_MODEL = 885294436,
	PROP_REPOZESSER_MODEL = -1639874965,
	PROP_RINGBOX_MODEL = -355732861,
	PROP_RINGBOX_OPEN_MODEL = 746743970,
	PROP_SAND_BOX_SHOVEL_MODEL = 534300973,
	PROP_SCREWDRIVER_MODEL = 1301481635,
	PROP_SCRUBBRUSH_MODEL = -2088983618,
	PROP_SODA_CAN_MODEL = -2030721490,
	PROP_SODA_SIXPACK_MODEL = 896402724,
	PROP_SPONGE_MODEL = -1648579299,
	PROP_SPONGE_LEFT_MODEL = 1041046287,
	PROP_SPOON_MODEL = 24595203,
	PROP_STOOL_MODEL = 1612430712,
	PROP_SWING_MODEL = -118847763,
	PROP_TEPPEN_SPATULA_MODEL = -1407288364,
	PROP_TOOTHBRUSH_MODEL = 1741047803,
	PROP_TOOTHPASTE_MODEL = 171437472,
	PROP_TRASHBAG_MODEL = 1963244253,
	PROP_TUMBLER_MODEL = -1646943451,
	PROP_VR_GLASSES_MODEL = -489891150,
	PROP_VR_GLASSES_HAND_MODEL = -1681841181,
	PROP_WATERINGCAN_MODEL = 1263278991,
	PROP_WINE_BOTTLE_MODEL = 784122214,
	PROP_WRENCH_MODEL = 160294326,
	QUEEN_VIVANCO_ROSES_MODEL = 59846215,
	ROSEBUSH_MODEL = 1754282234,
	ROXANA_GERANIUM_MODEL = -1667457470,
	RUBBER_TREE_PLANT_MODEL = 1081271696,
	SAND_BOX_MODEL = 922160194,
	SANI_QUEEN_BATHTUB_A_00_MODEL = 499932232,
	SATINISTICS_REPRODUCTION_ARMCHAIR_MODEL = -662059090,
	SCHOOL_BUS_MODEL = -1470212925,
	SCTC_CORDLESS_WALL_PHONE_MODEL = -1217983587,
	SCYLLA_AND_CHARYBDIS_MODEL = 1029845720,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_MODEL = -857433744,
	SHADOW_ADULT_MODEL = 1861415642,
	SHADOW_CHILD_MODEL = 1450136690,
	SHADOW_ROUND__MODEL = -194318901,
	SHADOW_SQUARE__MODEL = 1255837485,
	SHOWER_CURTAIN_MODEL = 948436173,
	SIMBADS_STUFFED_MARLIN_MODEL = 1337740084,
	SIMSAFETY_IV_BURGALUR_ALARM_MODEL = 1932150773,
	SINGLE_HUNG_WINDOW_MODEL = -424048080,
	SINGLE_HUNG_WINDOW__ACTUAL_WINDOW__MODEL = 1203966380,
	SINGLE_HUNG_WINDOW__NORTH__MODEL = 695688695,
	SINGLE_HUNG_WINDOW__SOUTH__MODEL = 199783435,
	SINGLE_HUNG_WINDOW___DOWN__MODEL = 1614949189,
	SINGLE_PANE_FIXED_WINDOW_MODEL = -1343272226,
	SINGLE_PANE_FIXED_WINDOW__ACTUAL_WINDOW__MODEL = 1666193370,
	SINGLE_PANE_FIXED_WINDOW__NORTH__MODEL = -66837251,
	SINGLE_PANE_FIXED_WINDOW__SOUTH__MODEL = -560263935,
	SINGLE_PANE_FIXED_WINDOW___DOWN__MODEL = -1255058865,
	SNACK_REV__01_MODEL = -160012683,
	SNAILS_WITH_ICICLES_IN_NOSE_MODEL = -1343632621,
	SNOOZEMORE_ALARM_CLOCK_MODEL = 918158805,
	SOMA_PLASMA_TV_MODEL = 1036732951,
	SONIC_SHOWER_MODEL = -1254363214,
	SPACE_MISER_SHOWER_MODEL = -1529619732,
	SPARTAN_SPECIAL_MODEL = 309080012,
	SPIDER_PLANT_MODEL = 465918780,
	SPILL_4_WAY_CONNECT_MODEL = -708512332,
	SPRINKLER_MODEL = -1093599287,
	SSRI_VIRTUAL_REALITY_SET_MODEL = -250167448,
	STAFF_SEDAN_MODEL = 449847407,
	STANDARD_CAR_MODEL = -1319840928,
	STILL_LIFE_DRAPERY_AND_CRUMBS_MODEL = -1974978290,
	STRAIGHT_NORTH_TO_SOUTH_MODEL = 1201043482,
	STRAIGHT_POOL_TOOL_MODEL = 1074040703,
	STRAIGHT_TUNNEL_POOL_TOOL_MODEL = 1674276339,
	STRAIGHT_WEST_TO_EAST_MODEL = 906437155,
	STRAIGHT_WITH_2NOOKS_POOL_TOOL_MODEL = 45546219,
	STRAIGHT_WITH_NOOK_01_POOL_TOOL_MODEL = 406263511,
	STRAIGHT_WITH_NOOK_01_POOL_TOOL_02_MODEL = -1546394471,
	STRAIGHT_WITH_NOOK_01_POOL_TOOL_03_MODEL = -724249585,
	STRINGS_THEORY_STEREO_MODEL = 1284958308,
	SUPERDOOP_BASKETBALL_HOOP_MODEL = 1420886656,
	SURPLUS_LLAMA_LAWN_ORNAMENT_MODEL = -1853802549,
	SUV_MODEL = -729869269,
	TERRAIN_FROM_LARGE_NEIGHBORHOOD_MODEL = -1015990862,
	THE_BOSTONIAN_FIREPLACE_MODEL = -641630050,
	THE_DIETER_BY_WORKBUNST_MODEL = 1849435193,
	THE_FUNINATOR_DELUXE_MODEL = 82017050,
	THE_PYROTORRE_GAS_RANGE_MODEL = -1904421291,
	THE_REDMOND_DESK_TABLE_MODEL = -1656878073,
	THE_SARRBACH_BY_WORKBUNNST_MODEL = 1234666,
	THE_TERRAIN_FOR_NEIGHBORHOOD_SCREEN_DERIVED_FROM_REV46__MODEL = -538636160,
	THE_VIBROMATIC_HEART_BED_MODEL = 1480214735,
	THE_VIBROMATIC_HEART_BED_L_MODEL = 938804422,
	THIEFCAS_GETIN_MODEL = -513952012,
	THIEFCAS_VASESNEAK_MODEL = 563699406,
	TILED_COUNTER_SINK_HOLE_EPIKOUROS__MODEL = 2002710924,
	TILED_COUNTER_SINK_HOLE_NORTH__MODEL = -1686664416,
	TILED_COUNTER_SINK_HOLE_STRAIGHT__MODEL = 219709320,
	TILED_COUNTER__CORNER__MODEL = -1080987857,
	TILED_COUNTER__STRAIGHT__MODEL = 1825709951,
	TOMBSTONE_LARGE_MODEL = 227239162,
	TOMBSTONE_MEDIUM_MODEL = -1929903941,
	TOMBSTONE_SMALL_MODEL = 564504407,
	TOM_DEBUG_MODEL = -1126365180,
	TOP_BRASS_SCONCE_A_00_MODEL = 164445737,
	TORCHOSTERONE_FLOOR_LAMP_A_00_MODEL = 619831970,
	TORCHOSTERONE_TABLE_LAMP_A_00_MODEL = -930029599,
	TOWN_CAR_MODEL = 2112920403,
	TRACKING_CURSOR_MODEL = -1046244099,
	TRACKING_CURSOR_02_MODEL = 1759415010,
	TRACKING_CURSOR_H_MODEL = 1385010120,
	TRADITIONAL_OAK_ARMOIRE_MODEL = -56909970,
	TRAGIC_CLOWN_PAINTING_MODEL = 851147269,
	TRASH_ASH_MODEL = -705243067,
	TRASH_CAN_MODEL = 1206245837,
	TREADMILL_MODEL = -1805404436,
	TREE_SWING_MODEL = 1428654390,
	TROTTCO_27_INCH_COLOR_TELEVISION_MODEL = 144191926,
	TULIPS_MODEL = 813606697,
	TYKE_NYTE_BED_MODEL = -702726432,
	UA_HH_AFRO_MODEL = -291138132,
	UA_HH_BALD_MODEL = -1160983920,
	UA_HH_BALL_CAP_MODEL = 520923106,
	UA_HH_BALL_CAP_02_MODEL = -844712648,
	UA_HH_COWBOY_HAT_MODEL = 1037891631,
	UA_HH_MOHAWK_MODEL = -1743650044,
	UA_HH_TOP_HAT_MODEL = 1182041423,
	URCHINEER_TRAIN_SET_BY_RIPCO_MODEL = -1420391806,
	URN_MODEL = -1931516408,
	VANITY_MIRROR_A_00_MODEL = -1412538349,
	VANITY_MIRROR_REFLECT_PIECE_MODEL = 901723963,
	VON_BRAUN_RECLINER_MODEL = 1968894798,
	WALL_CAP_BUILDMODE_01_MODEL = 744659718,
	WALL_CAP_BUILDMODE_01___DOWN__MODEL = 957741651,
	WALL_STRAIGHT_BUILDMODE_01_MODEL = -350807726,
	WALL_STRAIGHT_BUILDMODE_01_HALF_MODEL = 1540081634,
	WALL_STRAIGHT_BUILDMODE_01_HALF_L_MODEL = 1792590697,
	WALL_STRAIGHT_BUILDMODE_01___DOWN__MODEL = -148220915,
	WALL_STRAIGHT_CAP_NORMAL_SOUTH___DOWN__MODEL = -1229699300,
	WALNUT_DOOR_MODEL = -1907456137,
	WALNUT_DOOR___DOWN__MODEL = -2095541156,
	WATERCOLOR_BY_JME_MODEL = 347789247,
	WHAT_A_GAS_PARTY_BALLOONS_MODEL = 1793452590,
	WHIRL_N_HURL_RETRO_JUKEBOX_MODEL = 974932606,
	WHIRL_WIZARD_HOT_TUB_MODEL = 413093903,
	WHIRL_WIZARD_HOT_TUB_00_MODEL = -1335287196,
	WHITE_RHINO_RE_ENACTMENT_MODEL = -281603146,
	WICKED_BREEZE_END_TABLE_MODEL = 1395105642,
	WILDFLOWERS_MODEL = 307915585,
	WILD_BILL_THX_451_BBQ_MODEL = 1998558723,
	WILL_LLOYD_WRIGHT_DOLL_HOUSE_MODEL = -1497233471,
	WINDSOR_DOOR_MODEL = -1830465208,
	WORKBUNNST_ALL_PURPOSE_CHAIR_MODEL = 1279754020,
	XLR8R_FOOD_PROCESSOR_MODEL = -168429336,
	ZAP_ZALL_BUG_ZAPPER_MODEL = 1594332643,
	ZIMANTZ_COMPONENT_HIFI_STEREO_MODEL = -1030606594,
	_45_JUST_FLOOR__MODEL = -1670999677,
	_45_WALL_NW_FLAT_MODEL = 48462510,
	_45_WALL_NW_FLAT___DOWN__MODEL = 1316486609,
	_45_WALL_NW_H_MODEL = -1733161663,
	_45_WALL_NW_HALF_MODEL = -1393323573,
	_45_WALL_NW_H___DOWN__MODEL = 1630322778,
	_45_WALL_NW_V_MODEL = 1656565794,
	_45_WALL_NW_V___DOWN__MODEL = 86923705,
	_45_WALL_NW_WEDGE_MODEL = -1569438266,
	_45_WALL_NW_WEDGE___DOWN__MODEL = 1662396937,
	_45_WALL_SE_FLAT_MODEL = 1257514032,
	_45_WALL_SE_FLAT___DOWN__MODEL = 1908926547,
	_45_WALL_SE_H_MODEL = 627307805,
	_45_WALL_SE_HALF_MODEL = -454766763,
	_45_WALL_SE_H___DOWN__MODEL = 83972418,
	_45_WALL_SE_V_MODEL = -546518914,
	_45_WALL_SE_V___DOWN__MODEL = 1627637921,
	_45_WALL_SE_WEDGE_MODEL = -1249121061,
	_45_WALL_SE_WEDGE___DOWN__MODEL = 1621063696,
	_NEW_45_NE_MODEL = 1542087800,
	_NEW_45_NE_EXTENDS_BOTH_MODEL = 1879436912,
	_NEW_45_NE_EXTENDS_TO_LEFT_MODEL = 1542432296,
	_NEW_45_NE_EXTENDS_TO_RIGHT_MODEL = -111567859,
	_NEW_45_NW_MODEL = -1470950096,
	_NEW_45_NW_EXTENDS_BOTH_MODEL = -136767823,
	_NEW_45_NW_EXTENDS_TO_LEFT_MODEL = -1736265838,
	_NEW_45_NW_EXTENDS_TO_RIGHT_MODEL = -768693354,
	_NEW_45_ORPHAN_MODEL = 1277689527,
	_NEW_45_SE_MODEL = -1534719900,
	_NEW_45_SE_EXTENDS_BOTH_MODEL = -932641997,
	_NEW_45_SE_EXTENDS_TO_LEFT_MODEL = -2031667749,
	_NEW_45_SE_EXTENDS_TO_RIGHT_MODEL = -584042696,
	_NEW_45_SW_MODEL = 1463777580,
	_NEW_45_SW_EXTENDS_BOTH_MODEL = 1337326578,
	_NEW_45_SW_EXTENDS_TO_LEFT_MODEL = 1166687329,
	_NEW_45_SW_EXTENDS_TO_RIGHT_MODEL = -163118941,
	_NEW_PLATE_GLASS_WINDOW_MODEL = 68064169,
	_NEW_PRIVACY_WINDOW_MODEL = -1837819366,
	_NEW_SINGLE_HUNG_WINDOW_MODEL = -802464750,
	_NEW_SINGLE_PANE_FIXED_WINDOW_MODEL = -728640489,
	_NEW_STRAIGHT_BOTTOM_MODEL = 380534045,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_BOTH_MODEL = -4344275,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_BOTH__DOOR_HOLE__MODEL = 1449159031,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_BOTH__DOOR_HOLE__N_MODEL = -1181851810,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_BOTH__PLATE_GLASS__MODEL = -1584551194,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_BOTH__PRIVACY_WINDOW__MODEL = 1499463969,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_BOTH__STANDARD_WINDOW__MODEL = 460266050,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_BOTH__STANDARD_WINDOW__N_MODEL = -759959455,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_LEFT_MODEL = -2007763034,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_LEFT__DOOR_HOLE__MODEL = -316999832,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_LEFT__DOOR_HOLE__N_MODEL = 1667454201,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_LEFT__PLATE_GLASS__MODEL = 2069930305,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_LEFT__PRIVACY_WINDOW__MODEL = -1206383344,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_LEFT__STANDARD_WINDOW__MODEL = 1246782068,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_LEFT__STANDARD_WINDOW__N_MODEL = 91343141,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_RIGHT_MODEL = -209023365,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_RIGHT__DOOR_HOLE__MODEL = 2073319063,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_RIGHT__DOOR_HOLE__N_MODEL = 1368829051,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_RIGHT__PLATE_GLASS__MODEL = 1234524611,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_RIGHT__PRIVACY_WINDOW__MODEL = 1260105706,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_RIGHT__STANDARD_WINDOW__MODEL = 399211220,
	_NEW_STRAIGHT_BOTTOM_EXTENDS_TO_RIGHT__STANDARD_WINDOW__N_MODEL = -1206210559,
	_NEW_STRAIGHT_BOTTOM__DOOR_HOLE__MODEL = -1697777380,
	_NEW_STRAIGHT_BOTTOM__DOOR_HOLE__N_MODEL = -813124901,
	_NEW_STRAIGHT_BOTTOM__PLATE_GLASS__MODEL = -678738077,
	_NEW_STRAIGHT_BOTTOM__PRIVACY_WINDOW__MODEL = -1137839960,
	_NEW_STRAIGHT_BOTTOM__STANDARD_WINDOW__MODEL = -1880200137,
	_NEW_STRAIGHT_BOTTOM__STANDARD_WINDOW__N_MODEL = 966606170,
	_NEW_STRAIGHT_LEFT_MODEL = -1778854486,
	_NEW_STRAIGHT_LEFT_EXTENDS_BOTH_MODEL = -971104306,
	_NEW_STRAIGHT_LEFT_EXTENDS_BOTH__DOOR_HOLE__MODEL = 598146041,
	_NEW_STRAIGHT_LEFT_EXTENDS_BOTH__DOOR_HOLE__N_MODEL = 42954037,
	_NEW_STRAIGHT_LEFT_EXTENDS_BOTH__PLATE_GLASS__MODEL = 445421709,
	_NEW_STRAIGHT_LEFT_EXTENDS_BOTH__PRIVACY_WINDOW__MODEL = -2020261444,
	_NEW_STRAIGHT_LEFT_EXTENDS_BOTH__STANDARD_WINDOW__MODEL = -1794178821,
	_NEW_STRAIGHT_LEFT_EXTENDS_BOTH__STANDARD_WINDOW__N_MODEL = 450269834,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_BOTTOM_MODEL = -438899875,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_BOTTOM__DOOR_HOLE__MODEL = -773238840,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_BOTTOM__DOOR_HOLE__N_MODEL = 148827997,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_BOTTOM__PLATE_GLASS__MODEL = 282925797,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_BOTTOM__PRIVACY_WINDOW__MODEL = -729268091,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_BOTTOM__STANDARD_WINDOW__MODEL = -900098574,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_BOTTOM__STANDARD_WINDOW__N_MODEL = 1265701214,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_TOP_MODEL = -1836049031,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_TOP__DOOR_HOLE__MODEL = -1395729509,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_TOP__DOOR_HOLE__N_MODEL = 1848298416,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_TOP__PLATE_GLASS__MODEL = 1982414344,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_TOP__PRIVACY_WINDOW__MODEL = 1049285811,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_TOP__STANDARD_WINDOW__MODEL = 84476671,
	_NEW_STRAIGHT_LEFT_EXTENDS_TO_TOP__STANDARD_WINDOW__N_MODEL = -1867209052,
	_NEW_STRAIGHT_LEFT__DOOR_HOLE__MODEL = 987224319,
	_NEW_STRAIGHT_LEFT__DOOR_HOLE__N_MODEL = -156065104,
	_NEW_STRAIGHT_LEFT__PLATE_GLASS__MODEL = -290367736,
	_NEW_STRAIGHT_LEFT__PRIVACY_WINDOW__MODEL = 1952522163,
	_NEW_STRAIGHT_LEFT__STANDARD_WINDOW__MODEL = 88336692,
	_NEW_STRAIGHT_LEFT__STANDARD_WINDOW__N_MODEL = -1889365093,
	_NEW_STRAIGHT_ORPHAN_MODEL = -1349219193,
	_NEW_STRAIGHT_RIGHT_MODEL = -98473614,
	_NEW_STRAIGHT_RIGHT_EXTENDS_BOTH_MODEL = 283591523,
	_NEW_STRAIGHT_RIGHT_EXTENDS_BOTH__DOOR_HOLE__MODEL = 1008705036,
	_NEW_STRAIGHT_RIGHT_EXTENDS_BOTH__DOOR_HOLE__N_MODEL = 1453126307,
	_NEW_STRAIGHT_RIGHT_EXTENDS_BOTH__PLATE_GLASS__MODEL = 1319044891,
	_NEW_STRAIGHT_RIGHT_EXTENDS_BOTH__PRIVACY_WINDOW__MODEL = 208425633,
	_NEW_STRAIGHT_RIGHT_EXTENDS_BOTH__STANDARD_WINDOW__MODEL = -159214287,
	_NEW_STRAIGHT_RIGHT_EXTENDS_BOTH__STANDARD_WINDOW__N_MODEL = -1415141112,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_BOTTOM_MODEL = -2117260634,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_BOTTOM__DOOR_HOLE__MODEL = 1511021781,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_BOTTOM__DOOR_HOLE__N_MODEL = 1930185062,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_BOTTOM__PLATE_GLASS__MODEL = 1796193502,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_BOTTOM__PRIVACY_WINDOW__MODEL = 1815536152,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_BOTTOM__STANDARD_WINDOW__MODEL = 1147126953,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_BOTTOM__STANDARD_WINDOW__N_MODEL = 240286373,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_TOP_MODEL = -337373957,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_TOP__DOOR_HOLE__MODEL = -119716851,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_TOP__DOOR_HOLE__N_MODEL = 696335594,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_TOP__PLATE_GLASS__MODEL = 830654802,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_TOP__PRIVACY_WINDOW__MODEL = 1163424392,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_TOP__STANDARD_WINDOW__MODEL = -1267123843,
	_NEW_STRAIGHT_RIGHT_EXTENDS_TO_TOP__STANDARD_WINDOW__N_MODEL = 671745081,
	_NEW_STRAIGHT_RIGHT__DOOR_HOLE__MODEL = 354983263,
	_NEW_STRAIGHT_RIGHT__DOOR_HOLE__N_MODEL = 1577288889,
	_NEW_STRAIGHT_RIGHT__PLATE_GLASS__MODEL = 1174434049,
	_NEW_STRAIGHT_RIGHT__PRIVACY_WINDOW__MODEL = 67642538,
	_NEW_STRAIGHT_RIGHT__STANDARD_WINDOW__MODEL = 1633167567,
	_NEW_STRAIGHT_RIGHT__STANDARD_WINDOW__N_MODEL = -1807139376,
	_NEW_STRAIGHT_TOP_MODEL = 1425799081,
	_NEW_STRAIGHT_TOP_EXTENDS_BOTH_MODEL = -2126432775,
	_NEW_STRAIGHT_TOP_EXTENDS_BOTH__DOOR_HOLE__MODEL = -708296662,
	_NEW_STRAIGHT_TOP_EXTENDS_BOTH__DOOR_HOLE__N_MODEL = -198613117,
	_NEW_STRAIGHT_TOP_EXTENDS_BOTH__PLATE_GLASS__MODEL = -332754373,
	_NEW_STRAIGHT_TOP_EXTENDS_BOTH__PRIVACY_WINDOW__MODEL = -2095305281,
	_NEW_STRAIGHT_TOP_EXTENDS_BOTH__STANDARD_WINDOW__MODEL = 201513005,
	_NEW_STRAIGHT_TOP_EXTENDS_BOTH__STANDARD_WINDOW__N_MODEL = 1169961976,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_LEFT_MODEL = -1502208117,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_LEFT__DOOR_HOLE__MODEL = 355860025,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_LEFT__DOOR_HOLE__N_MODEL = -1189119897,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_LEFT__PLATE_GLASS__MODEL = -1591964193,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_LEFT__PRIVACY_WINDOW__MODEL = 790089353,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_LEFT__STANDARD_WINDOW__MODEL = -1022081449,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_LEFT__STANDARD_WINDOW__N_MODEL = -2015636527,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_RIGHT_MODEL = -1233389594,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_RIGHT__DOOR_HOLE__MODEL = 1728059644,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_RIGHT__DOOR_HOLE__N_MODEL = 1190882836,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_RIGHT__PLATE_GLASS__MODEL = 1593351084,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_RIGHT__PRIVACY_WINDOW__MODEL = -1033925687,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_RIGHT__STANDARD_WINDOW__MODEL = -1255846014,
	_NEW_STRAIGHT_TOP_EXTENDS_TO_RIGHT__STANDARD_WINDOW__N_MODEL = 38284318,
	_NEW_STRAIGHT_TOP__DOOR_HOLE__MODEL = -684552175,
	_NEW_STRAIGHT_TOP__DOOR_HOLE__N_MODEL = 1313364117,
	_NEW_STRAIGHT_TOP__PLATE_GLASS__MODEL = 1447800109,
	_NEW_STRAIGHT_TOP__PRIVACY_WINDOW__MODEL = -102987467,
	_NEW_STRAIGHT_TOP__STANDARD_WINDOW__MODEL = 18182839,
	_NEW_STRAIGHT_TOP__STANDARD_WINDOW__N_MODEL = -133097847,
	_WALL_CUT_AWAY_FOR_DOOR_MODEL = 1643086525
};

struct ETextEntryDialog : EUIObjectNode {
protected:
	u8 m_nCurrentChar;
	short unsigned int m_szText[32];
	short unsigned int m_szTitle[64];
	u32 m_nMaxCharacters;
	u32 m_nCurrentPage;
	bool m_bReturnValue;
	float m_fMaxWidth;
	float m_fTitleWidth;
	EVec4 m_vDimentions;
	EVec4 m_vBackground;
	EVec4 m_vDimentionsTwo;
	EVec4 m_vBackgroundTwo;
	EVec4 m_vDimentionsThree;
	EVec4 m_vBackgroundThree;
	EUIAlphaMenu *m_pKeyboard[3];
	EUIMenu *m_pCtrlKeys[3];
	TNodeList<EUIObjectNode *> m_ctrlicons[3];
	ERFont *m_pFont;
	
public:
	ETextEntryDialog& operator=();
	ETextEntryDialog(/* s3 19 */ c16 *pTitle, /* s4 20 */ u32 nMaxCharacters, /* f20 58 */ float fMaxWidth, /* s1 17 */ s32 nControllerId, /* s2 18 */ bool bAddSpace);
	ETextEntryDialog();
	ETextEntryDialog();
	ETextEntryDialog();
	/* vtable[1] */ virtual ETextEntryDialog(ETextEntryDialog*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[3] */ virtual void Draw(/* s1 17 */ ERC *prc);
	/* vtable[7] */ virtual void Message(/* a1 5 */ EUIObjectNode *pChild, /* a2 6 */ u32 messId);
	bool UpdateKeyboard();
	void GetBuffer(/* a1 5 */ c16 *pBuffer);
	void SetBuffer(/* a1 5 */ c16 *pNewText);
protected:
	void CreateKeyboard(/* s0 16 */ c16 *pTitle, /* s7 23 */ s32 nControllerId, /* s4 20 */ bool bAddSpace);
	void InitCtrlKeyCol(/* -0xd0(caller sp) */ bool bAddSpace, /* -0xcc(caller sp) */ u32 nIndex, /* -0xc8(caller sp) */ u32 nNumPages);
	void GetBackgroundSize(/* a1 5 */ u32 nNumCharacters, /* a2 6 */ u32 *nNumColumns, /* a3 7 */ EVec4 *vBackground, /* t0 8 */ EVec4 *vDimentions);
};

enum EAnimationSymbol {
	UNDEFINED_ANIMATION = 0,
	A2A_APOLOGIZEE_ANIMATION = 1120307603,
	A2A_APOLOGIZEE_ACCEPT_ANIMATION = 171731277,
	A2A_APOLOGIZEE_REJECT_ANIMATION = 484041408,
	A2A_APOLOGIZER_ANIMATION = -1055585196,
	A2A_APOLOGIZER_ACCEPTED_ANIMATION = 162354223,
	A2A_APOLOGIZER_REJECTED_ANIMATION = -34931100,
	A2A_ARGUE_LOOP1_ANIMATION = -391043262,
	A2A_ARGUE_LOOP2_ANIMATION = 1907914488,
	A2A_ARGUE_LOOP3_ANIMATION = 113198702,
	A2A_ARGUE_START_ANIMATION = -2006372912,
	A2A_ARGUE_STOP_ANIMATION = 512756232,
	A2A_ATTACK_LOOP_HEAD_ANIMATION = -1694417144,
	A2A_ATTACK_LOOP_KICK_ANIMATION = 572987025,
	A2A_ATTACK_LOOP_PUNCH_ANIMATION = -523111164,
	A2A_ATTACK_LOOP_SLAM_ANIMATION = 1779723453,
	A2A_ATTACK_LOOP_TOPKICK_ANIMATION = -1617110094,
	A2A_ATTACK_LOSE_START_ANIMATION = 1304119262,
	A2A_ATTACK_LOSE_STOP_ANIMATION = 1992407728,
	A2A_ATTACK_WIN_START_ANIMATION = -2135642290,
	A2A_ATTACK_WIN_STOP_ANIMATION = -1372604091,
	A2A_BKRUBBEE_GOTO_LOOP_ANIMATION = -263273381,
	A2A_BKRUBBEE_LOOP_ROCK_ANIMATION = 1934918832,
	A2A_BKRUBBEE_LOOP_WAGGLE_ANIMATION = 2083945693,
	A2A_BKRUBBEE_LOOP_WRIGGLE_ANIMATION = -883992453,
	A2A_BKRUBBEE_REFUSE_ANIMATION = -1384003504,
	A2A_BKRUBBEE_START_ANIMATION = -393909598,
	A2A_BKRUBBEE_STOP_ANIMATION = 1113173399,
	A2A_BKRUBBER_GOTO_LOOP_ANIMATION = 2005079315,
	A2A_BKRUBBER_LOOP_KNEAD_ANIMATION = 990875601,
	A2A_BKRUBBER_LOOP_PINCH_ANIMATION = -2042769229,
	A2A_BKRUBBER_LOOP_RUB_ANIMATION = -2053106890,
	A2A_BKRUBBER_REFUSED_ANIMATION = 13931904,
	A2A_BKRUBBER_START_ANIMATION = 1258080482,
	A2A_BKRUBBER_STOP_ANIMATION = 1552588724,
	A2A_BOOER_LOOP_ANIMATION = 449423917,
	A2A_BOOER_START_ANIMATION = -1497272070,
	A2A_BOOER_STOP_ANIMATION = 46178677,
	A2A_BRAGGER_LOOP_GOD_ANIMATION = 1301446931,
	A2A_BRAGGER_LOOP_HIPS_ANIMATION = -690780371,
	A2A_BRAGGER_LOOP_OTHERS_ANIMATION = 1622373601,
	A2A_BRAGGER_START_ANIMATION = 1024088616,
	A2A_BRAGGER_STOP_ANIMATION = -1389837387,
	A2A_CALLHERE_ANIMATION = 2059099320,
	A2A_CASH_GET_ANIMATION = -591244006,
	A2A_CASH_GIVE_ANIMATION = 304544347,
	A2A_CHEEREE_LOOP_ANIMATION = 1867029853,
	A2A_CHEEREE_START_ANIMATION = -156139279,
	A2A_CHEEREE_STOP_ANIMATION = 2000786949,
	A2A_CHEERER_LOOP_ANIMATION = 1906028414,
	A2A_CHEERER_START_ANIMATION = 1422402225,
	A2A_CHEERER_STOP_ANIMATION = 1771217958,
	A2A_COMPLIMENTEE1_ANIMATION = -62862577,
	A2A_COMPLIMENTEE_REJECT_ANIMATION = -957534447,
	A2A_COMPLIMENTER1_ANIMATION = -104640615,
	A2A_COMPLIMENTER_REJECT_ANIMATION = -1332537565,
	A2A_COMPLIMENT_APPRECIATE_ANIMATION = 279017287,
	A2A_DANCEE_ACCEPT_ANIMATION = -1835600366,
	A2A_DANCEE_INVITE_ANIMATION = -430699535,
	A2A_DANCEE_LOOP_BASIC_ANIMATION = -1085352644,
	A2A_DANCEE_LOOP_TURN_ANIMATION = 2029845851,
	A2A_DANCEE_LOOP_WHIP_ANIMATION = 764318831,
	A2A_DANCEE_START_ANIMATION = -1651063141,
	A2A_DANCEE_STOP_ANIMATION = 995493973,
	A2A_DANCER_ACCEPT_ANIMATION = -454504928,
	A2A_DANCER_INVITE_ANIMATION = -1876282429,
	A2A_DANCER_LOOP_BASIC_ANIMATION = -942747313,
	A2A_DANCER_LOOP_TURN_ANIMATION = -13554669,
	A2A_DANCER_LOOP_WHIP_ANIMATION = -1438431961,
	A2A_DANCER_REJECTED_ANIMATION = -1602639488,
	A2A_DANCER_START_ANIMATION = 1072653531,
	A2A_DANCER_STOP_ANIMATION = 629488246,
	A2A_FLIRTEE1_ANIMATION = -1800056104,
	A2A_FLIRTEE_GIGGLE_ANIMATION = 1754362957,
	A2A_FLIRTEE_IGNORE_ANIMATION = 1257343665,
	A2A_FLIRTEE_MALE_ANIMATION = -1491951047,
	A2A_FLIRTEE_SCOLD_ANIMATION = 1514935510,
	A2A_FLIRTER1_ANIMATION = -1858677170,
	A2A_FLIRTER_LONG_ANIMATION = -673457701,
	A2A_FLIRTER_SHORT_ANIMATION = -423485908,
	A2A_GIFT_APPRECIATEE_ANIMATION = 1424055882,
	A2A_GIFT_APPRECIATER_ANIMATION = -684532851,
	A2A_GIFT_GETTER_ANIMATION = 1371924541,
	A2A_GIFT_GIVER_ANIMATION = -1915045308,
	A2A_GIFT_GUEST_GIVES_ANIMATION = 1223293638,
	A2A_GIFT_HOST_GETS_ANIMATION = 855044727,
	A2A_GIFT_STOMPEE_ANIMATION = -220602109,
	A2A_GIFT_STOMPER_ANIMATION = 1896506564,
	A2A_GIGGLE_LOOP_ANIMATION = 337369226,
	A2A_GIGGLE_START_ANIMATION = -293759805,
	A2A_GIGGLE_STOP_ANIMATION = 202560466,
	A2A_GOODBYE_BYEBYE_ANIMATION = 708114450,
	A2A_GOODBYE_REFUSE_ANIMATION = 2109829787,
	A2A_GOODBYE_SHOO_ANIMATION = 433368067,
	A2A_HANDSHAKEE_ANIMATION = -734458357,
	A2A_HANDSHAKER_ANIMATION = 1474989004,
	A2A_HAVEBABYF_ANIMATION = -787810684,
	A2A_HAVEBABYM_ANIMATION = 1188572940,
	A2A_HUGGEE_GOOD_ANIMATION = -500016251,
	A2A_HUGGEE_REFUSE_ANIMATION = 368288371,
	A2A_HUGGEE_TENT_ANIMATION = -1448802553,
	A2A_HUGGER_GOOD_ANIMATION = -52336218,
	A2A_HUGGER_REFUSE_ANIMATION = 1670224449,
	A2A_HUGGER_TENT_ANIMATION = -1216989916,
	A2A_INSULTEE1_ANIMATION = -1156486180,
	A2A_INSULTER1_ANIMATION = -1097666742,
	A2A_JOKEE1_LISTEN_ANIMATION = -1542004710,
	A2A_JOKEE1_RESPOND_NEGATIVE_ANIMATION = -172691,
	A2A_JOKEE1_RESPOND_POSITIVE_ANIMATION = -1702155658,
	A2A_JOKER1_COUNTERRESPONSE_NEGATIVE_ANIMATION = 652006794,
	A2A_JOKER1_COUNTERRESPONSE_POSITIVE_ANIMATION = 1135256209,
	A2A_JOKER1_TELL_ANIMATION = 1992576205,
	A2A_JUGGLER_LOOP_2HAND_ANIMATION = 612786152,
	A2A_JUGGLER_START_ANIMATION = 2037462100,
	A2A_JUGGLER_STOP_ANIMATION = -764687143,
	A2A_KISSEE1_ANIMATION = 930695369,
	A2A_KISSER1_ANIMATION = 855297119,
	A2A_KISS_DENYEE1_ANIMATION = -1755789985,
	A2A_KISS_DENYER1_ANIMATION = -1831124535,
	A2A_KISS_PASSIONEE1_ANIMATION = -548086354,
	A2A_KISS_PASSIONER1_ANIMATION = -623421128,
	A2A_LAUGH_LOOP_ANIMATION = 342580283,
	A2A_LAUGH_START_ANIMATION = 1377527645,
	A2A_LAUGH_STOP_ANIMATION = 207771491,
	A2A_LISTEN_ENERGETIC_AGREE_ANIMATION = 462994929,
	A2A_LISTEN_ENERGETIC_EMPATHIZE_ANIMATION = 458124534,
	A2A_LISTEN_IMPATIENT_ANIMATION = 2084897613,
	A2A_LISTEN_INTENSE_LOOP_ANIMATION = -423013964,
	A2A_LISTEN_INTENSE_START_ANIMATION = 804150241,
	A2A_LISTEN_INTENSE_STOP_ANIMATION = -20948244,
	A2A_LISTEN_NORMAL_ANIMATION = -1589192358,
	A2A_LISTEN_NORMAL_AGREE_ANIMATION = -2063599502,
	A2A_LISTEN_NORMAL_APATHETIC_ANIMATION = 991383235,
	A2A_LISTEN_UNINTERESTED_ANIMATION = -1709937676,
	A2A_MARRYEE_ANIMATION = 2138201722,
	A2A_MARRYER_ANIMATION = -56501315,
	A2A_PIZZA_DELIVERY_GIVE_ANIMATION = -967161279,
	A2A_PIZZA_DELIVERY_TAKE_ANIMATION = 1971949460,
	A2A_PROPOSEE_ANIMATION = 2109900771,
	A2A_PROPOSEE_NO_ANIMATION = -1170977407,
	A2A_PROPOSEE_NO_SUBTLE_ANIMATION = -1996253374,
	A2A_PROPOSEE_THINK_LOOP_ANIMATION = 95042915,
	A2A_PROPOSEE_YES_ANIMATION = 1508062535,
	A2A_PROPOSER_ANIMATION = -32439772,
	A2A_PROPOSER_NO_ANIMATION = 2012881575,
	A2A_PROPOSER_NO_SUBTLE_ANIMATION = 248399370,
	A2A_PROPOSER_THINK_LOOP_ANIMATION = 2099919120,
	A2A_PROPOSER_YES_ANIMATION = -1960608043,
	A2A_REAPEE_PLEAD_LOOP1_ANIMATION = 325457496,
	A2A_REAPEE_PLEAD_LOOP2_ANIMATION = -1972418590,
	A2A_REAPEE_PLEAD_LOOP3_ANIMATION = -43485324,
	A2A_REAPEE_PLEAD_START_ANIMATION = 1941839050,
	A2A_REAPEE_PLEAD_STOP_ACCEPTED_ANIMATION = -1320006981,
	A2A_REAPEE_PLEAD_STOP_REJECTED_ANIMATION = 1159061744,
	A2A_REAPEE_ROCKPAPER_PLAY_LOOP_ANIMATION = 276426086,
	A2A_REAPEE_ROCKPAPER_PLAY_START_ANIMATION = 1204115621,
	A2A_REAPEE_ROCKPAPER_STOP_LOSE_ANIMATION = 2049992734,
	A2A_REAPEE_ROCKPAPER_STOP_WIN_ANIMATION = 1886863654,
	A2A_REAPER_PLEAD_WATCH_ACCEPT_ANIMATION = -52293463,
	A2A_REAPER_PLEAD_WATCH_LOOP_ANIMATION = 427883230,
	A2A_REAPER_PLEAD_WATCH_REJECT_ANIMATION = -368600284,
	A2A_REAPER_PLEAD_WATCH_START_ANIMATION = -2106156532,
	A2A_REAPER_ROCKPAPER_PLAY_LOOP_ANIMATION = 846887378,
	A2A_REAPER_ROCKPAPER_PLAY_START_ANIMATION = -1947521884,
	A2A_REAPER_ROCKPAPER_STOP_LOSE_ANIMATION = 1479802026,
	A2A_REAPER_ROCKPAPER_STOP_WIN_ANIMATION = 1911901328,
	A2A_SCAREE_ANIMATION = -251779960,
	A2A_SCARER_ANIMATION = 1932370255,
	A2A_SHOVEE1_ANIMATION = 987415412,
	A2A_SHOVER1_ANIMATION = 1062815714,
	A2A_SHRUG_ANIMATION = -1762406096,
	A2A_SIGH_DESPONDENT_ANIMATION = 1164052238,
	A2A_SIT_ANIMATION = -484927408,
	A2A_SLAPPEE_BACK_ANIMATION = -1300135997,
	A2A_SLAPPEE_FIRST_ANIMATION = 319862564,
	A2A_SLAPPEE_LIGHT_ANIMATION = -361036412,
	A2A_SLAPPER_BACK_ANIMATION = -1403892256,
	A2A_SLAPPER_FIRST_ANIMATION = -1318513308,
	A2A_SLAPPER_LIGHT_ANIMATION = 1208133572,
	A2A_TALK_ANGRY_ANIMATION = 1743751960,
	A2A_TALK_ENERGETIC_SPORTS_ANIMATION = -1423060370,
	A2A_TALK_ENERGETIC_VACATION_ANIMATION = -58334769,
	A2A_TALK_IDLE_LOOP_ANIMATION = 1555778874,
	A2A_TALK_IDLE_START_ANIMATION = 626296794,
	A2A_TALK_IDLE_STOP_ANIMATION = 1152534114,
	A2A_TALK_INTENSE_LOOP_ANIMATION = -2073021874,
	A2A_TALK_INTENSE_START_ANIMATION = 1927608704,
	A2A_TALK_INTENSE_STOP_ANIMATION = -1669777130,
	A2A_TALK_NORMAL_ANIMATION = -2131503817,
	A2A_TALK_SUBTLE_ANIMATION = -1703460136,
	A2A_TEASE_LOOKS_ANIMATION = 1302163129,
	A2A_TICKLEE_LOOP_ANIMATION = 2058079778,
	A2A_TICKLEE_START_ANIMATION = 907939599,
	A2A_TICKLEE_STOP_LAUGH_ANIMATION = 2021976678,
	A2A_TICKLEE_STOP_PUSH_ANIMATION = 1263332794,
	A2A_TICKLER_LOOP_ANIMATION = 1685650433,
	A2A_TICKLER_START_ANIMATION = -1805144753,
	A2A_TICKLER_STOP_LAUGH_ANIMATION = 323093,
	A2A_TICKLER_STOP_PUSHED_ANIMATION = -1266475249,
	A2C_APOLOGIZEE_ANIMATION = -1359145204,
	A2C_APOLOGIZEE_ACCEPT_ANIMATION = 2122870716,
	A2C_APOLOGIZEE_REJECT_ANIMATION = 1752032305,
	A2C_APOLOGIZER_ANIMATION = 758026955,
	A2C_APOLOGIZER_ACCEPTED_ANIMATION = -311863982,
	A2C_APOLOGIZER_REJECTED_ANIMATION = 422510361,
	A2C_BOOER_LOOP_ANIMATION = -151898958,
	A2C_BOOER_START_ANIMATION = -962738767,
	A2C_BOOER_STOP_ANIMATION = -285523990,
	A2C_BRAGGER_LOOP_GOD_ANIMATION = 1212607120,
	A2C_BRAGGER_LOOP_HIPS_ANIMATION = -1570274852,
	A2C_BRAGGER_LOOP_OTHERS_ANIMATION = -2072545892,
	A2C_BRAGGER_START_ANIMATION = -1785926727,
	A2C_BRAGGER_STOP_ANIMATION = 1279657752,
	A2C_CALLHERE_ANIMATION = 2119076997,
	A2C_CHEEREE_LOOP_ANIMATION = -1910089232,
	A2C_CHEEREE_START_ANIMATION = 1580675424,
	A2C_CHEEREE_STOP_ANIMATION = -1775283544,
	A2C_CHEERER_LOOP_ANIMATION = -1862964269,
	A2C_CHEERER_START_ANIMATION = -61959392,
	A2C_CHEERER_STOP_ANIMATION = -1996726133,
	A2C_ENTHRALLED2_ANIMATION = 1148565471,
	A2C_GIFT_APPRECIATEE_ANIMATION = 1362441673,
	A2C_GIFT_APPRECIATER_ANIMATION = -756633586,
	A2C_GIFT_GETTER_ANIMATION = 832134518,
	A2C_GIFT_GIVER_ANIMATION = 1642144987,
	A2C_GIFT_GUEST_GIVES_ANIMATION = 1295880517,
	A2C_GIFT_HOST_GETS_ANIMATION = -1252600044,
	A2C_GIFT_STOMPEE_ANIMATION = 330769838,
	A2C_GIFT_STOMPER_ANIMATION = -1872453527,
	A2C_GIGGLE_LOOP_ANIMATION = 1950838209,
	A2C_GIGGLE_START_ANIMATION = 252924014,
	A2C_GIGGLE_STOP_ANIMATION = 1817077401,
	A2C_GOODBYE_BYEBYE_ANIMATION = -1382752911,
	A2C_GOODBYE_REFUSE_ANIMATION = -94283784,
	A2C_GOODBYE_SHOO_ANIMATION = -122001234,
	A2C_HANDSHAKEE_ANIMATION = 939692180,
	A2C_HANDSHAKER_ANIMATION = -1143925421,
	A2C_HUGGEE_GOOD_ANIMATION = -2106659122,
	A2C_HUGGEE_REFUSE_ANIMATION = -1116400670,
	A2C_HUGGEE_TENT_ANIMATION = -906382772,
	A2C_HUGGER_GOOD_ANIMATION = -1665278739,
	A2C_HUGGER_REFUSE_ANIMATION = -888460336,
	A2C_HUGGER_TENT_ANIMATION = -685080465,
	A2C_INSULTEE1_ANIMATION = -478293475,
	A2C_INSULTER1_ANIMATION = -419539317,
	A2C_JOKEE1_LISTEN_ANIMATION = 210784651,
	A2C_JOKEE1_RESPOND_NEGATIVE_ANIMATION = 1872460592,
	A2C_JOKEE1_RESPOND_POSITIVE_ANIMATION = 183307307,
	A2C_JOKER1_COUNTERRESPONSE_NEGATIVE_ANIMATION = 1262089324,
	A2C_JOKER1_COUNTERRESPONSE_POSITIVE_ANIMATION = 776962935,
	A2C_JOKER1_TELL_ANIMATION = 379124102,
	A2C_JUGGLER_LOOP_2HAND_ANIMATION = -297260700,
	A2C_JUGGLER_START_ANIMATION = -772307515,
	A2C_JUGGLER_STOP_ANIMATION = 855967860,
	A2C_LISTEN_ENERGETIC_AGREE_ANIMATION = -1029475842,
	A2C_LISTEN_ENERGETIC_EMPATHIZE_ANIMATION = 405116620,
	A2C_LISTEN_IMPATIENT_ANIMATION = 2039572686,
	A2C_LISTEN_INTENSE_LOOP_ANIMATION = 34427081,
	A2C_LISTEN_NORMAL_AGREE_ANIMATION = 1614543119,
	A2C_LISTEN_NORMAL_APATHETIC_ANIMATION = -1418631010,
	A2C_LISTEN_UNINTERESTED_ANIMATION = 2127587977,
	A2C_LONELY2_ANIMATION = -1747136060,
	A2C_PIZZA_DELIVERY_GIVE_ANIMATION = 580799292,
	A2C_SCAREE_ANIMATION = -1294261259,
	A2C_SCARER_ANIMATION = 822650418,
	A2C_SHOVEE1_ANIMATION = 338488306,
	A2C_SHOVER1_ANIMATION = 296709988,
	A2C_SIGH_DESPONDENT_ANIMATION = -1856071735,
	A2C_TALKTOHAND_ANIMATION = -88847921,
	A2C_TALKTOHANDSTART_ANIMATION = -915365767,
	A2C_TALK_ENERGETIC_SPORTS_ANIMATION = 1186660743,
	A2C_TALK_ENERGETIC_VACATION_ANIMATION = 1826867090,
	A2C_TALK_IDLE_LOOP_ANIMATION = -618960807,
	A2C_TALK_IDLE_START_ANIMATION = -244836579,
	A2C_TALK_IDLE_STOP_ANIMATION = -1022205183,
	A2C_TALK_INTENSE_LOOP_ANIMATION = -255576897,
	A2C_TALK_INTENSE_START_ANIMATION = -1205170420,
	A2C_TALK_INTENSE_STOP_ANIMATION = -389201945,
	A2C_TALK_NORMAL_ANIMATION = -525377412,
	A2C_TALK_SUBTLE_ANIMATION = -97781869,
	A2C_TEASE_LOOKS_ANIMATION = 767679474,
	A2C_TICKLEE_LOOP_ANIMATION = -1681585521,
	A2C_TICKLEE_START_ANIMATION = -1634156898,
	A2C_TICKLEE_STOP_LAUGH_ANIMATION = -1303733014,
	A2C_TICKLEE_STOP_PUSH_ANIMATION = 1073277771,
	A2C_TICKLER_LOOP_ANIMATION = -2062141268,
	A2C_TICKLER_START_ANIMATION = 1021385950,
	A2C_TICKLER_STOP_LAUGH_ANIMATION = -892692327,
	A2C_TICKLER_STOP_PUSHED_ANIMATION = 1346838130,
	A2O_APPROACH_ANIMATION = -74655545,
	A2O_APPROVE_ANIMATION = -1155599470,
	A2O_AQUARIUM1_CLEAN_ANIMATION = 1726558690,
	A2O_AQUARIUM1_FEEDSTART_ANIMATION = 523181085,
	A2O_AQUARIUM1_FEEDSTOP_ANIMATION = -1971826941,
	A2O_AQUARIUM1_FEED_LOOP_ANIMATION = -1108538525,
	A2O_AQUARIUM1_RESTOCK_ANIMATION = 689309846,
	A2O_AQUARIUM1_WATCH_ANIMATION = -950872435,
	A2O_AQUARIUM_WATCH_EXCITED_LOOP1_ANIMATION = -1586354379,
	A2O_AQUARIUM_WATCH_EXCITED_LOOP2_ANIMATION = 947615375,
	A2O_AQUARIUM_WATCH_EXCITED_START_ANIMATION = -1045811801,
	A2O_AQUARIUM_WATCH_EXCITED_STOP_ANIMATION = -1260965650,
	A2O_ARGUE_LOOP1_ANIMATION = 307702770,
	A2O_ARGUE_LOOP2_ANIMATION = -1956742584,
	A2O_ARGUE_LOOP3_ANIMATION = -61256994,
	A2O_ARGUE_START_ANIMATION = 1921982816,
	A2O_ARGUE_STOP_ANIMATION = -140388074,
	A2O_ARMOIRE_OPEN_ANIMATION = 80679184,
	A2O_ARO_BREATHE_ANIMATION = 1773784285,
	A2O_ARO_REPAIR_LOOP1_ANIMATION = -139144683,
	A2O_ARO_REPAIR_LOOP2_ANIMATION = 1857913775,
	A2O_ARO_REPAIR_LOOP3_ANIMATION = 431665977,
	A2O_ARO_REPAIR_SMOKEWAVE_ANIMATION = -231459769,
	A2O_ARO_REPAIR_START_ANIMATION = -1754474361,
	A2O_ARO_REPAIR_STOP_ANIMATION = -1041878053,
	A2O_ARO_TURNOFF_ANIMATION = -303546640,
	A2O_ARO_TURNON_ANIMATION = 1359751378,
	A2O_ARO_TURNON2_ANIMATION = 1918435805,
	A2O_AWARE1_ANIMATION = 1768034637,
	A2O_AWARE2_ANIMATION = -261406473,
	A2O_BABY_ADJUST_LEFT_ANIMATION = -526595827,
	A2O_BABY_ADJUST_RIGHT_ANIMATION = -1293534427,
	A2O_BABY_CARRY_ANIMATION = 2045449425,
	A2O_BABY_FEED_LOOP1_ANIMATION = 666705633,
	A2O_BABY_FEED_LOOP2_ANIMATION = -1095479461,
	A2O_BABY_FEED_START_ANIMATION = 1197806707,
	A2O_BABY_FEED_STOP_ANIMATION = -1472450498,
	A2O_BABY_GETL_ANIMATION = 486055960,
	A2O_BABY_GETR_ANIMATION = -419979909,
	A2O_BABY_PLAY_LOOP1_ANIMATION = 602778337,
	A2O_BABY_PLAY_LOOP2_ANIMATION = -1159398565,
	A2O_BABY_PLAY_START_ANIMATION = 1127587955,
	A2O_BABY_PLAY_STOP_ANIMATION = 598615480,
	A2O_BABY_PUTL_ANIMATION = -854561714,
	A2O_BABY_PUTR_ANIMATION = 924799277,
	A2O_BABY_SING_LOOP1_ANIMATION = 1821155730,
	A2O_BABY_SING_LOOP2_ANIMATION = -175771608,
	A2O_BABY_SING_START_ANIMATION = 206875392,
	A2O_BABY_SING_STOP_ANIMATION = -1655241701,
	A2O_BAR_DRINK_RARMCARRY_ANIMATION = -373864708,
	A2O_BAR_GETDRINK_LOOP1_ANIMATION = -1296393991,
	A2O_BAR_GETDRINK_LOOP2_ANIMATION = 733202755,
	A2O_BAR_GETDRINK_POUR_ANIMATION = 1276498558,
	A2O_BAR_GETDRINK_START_ANIMATION = -765291925,
	A2O_BAR_GETDRINK_STOP_ANIMATION = 284207862,
	A2O_BAR_GETDRINK_TAKEONE_ANIMATION = -1339244099,
	A2O_BAR_POURDRINKS_ANIMATION = -467949458,
	A2O_BBALL_DRIBBLE_LOOP_ANIMATION = 1605326672,
	A2O_BBALL_DRIBBLE_START_ANIMATION = -2010113146,
	A2O_BBALL_SHOOT_ANIMATION = -1501005343,
	A2O_BBQ_FLIPFOOD_ANIMATION = 669920506,
	A2O_BBQ_GETFOOD_ANIMATION = 394183448,
	A2O_BBQ_GRILLSIDE_INTERRUPT_ANIMATION = -935504759,
	A2O_BBQ_POKEFOOD_ANIMATION = 1226487602,
	A2O_BBQ_PREPFOOD_CHOP_ANIMATION = -37010427,
	A2O_BBQ_PREPFOOD_IDLE_ANIMATION = -576918995,
	A2O_BBQ_PREPFOOD_SLICE_ANIMATION = 784554156,
	A2O_BBQ_PREPSIDE_INTERRUPT_ANIMATION = 774504481,
	A2O_BBQ_SIDESTEPGRILL_ANIMATION = 1088964823,
	A2O_BBQ_TENDFOOD_ANIMATION = 76373637,
	A2O_BBQ_TURNOFF_ANIMATION = 933642490,
	A2O_BBQ_TURNON_ANIMATION = 2144006841,
	A2O_BEDD_MAKELOVE_COINS_ANIMATION = 702659890,
	A2O_BEDD_MAKELOVE_INVITEL_ANIMATION = -31869919,
	A2O_BEDD_MAKELOVE_INVITER_ANIMATION = 68585794,
	A2O_BEDD_MAKELOVE_LOOPL_ANIMATION = -160078725,
	A2O_BEDD_MAKELOVE_LOOPR_ANIMATION = 209344792,
	A2O_BEDD_MAKELOVE_STARTL_ANIMATION = -289861057,
	A2O_BEDD_MAKELOVE_STARTR_ANIMATION = 347483996,
	A2O_BEDD_MAKELOVE_STOP_REJECTEDL_ANIMATION = 1452355339,
	A2O_BEDD_MAKELOVE_STOP_REJECTEDR_ANIMATION = -1398926744,
	A2O_BEDD_MAKELOVE_STOP_REJECTL_ANIMATION = -184477127,
	A2O_BEDD_MAKELOVE_STOP_REJECTR_ANIMATION = 252585818,
	A2O_BEDD_MAKELOVE_STOP_SATISFIEDL_ANIMATION = -1134018512,
	A2O_BEDD_MAKELOVE_STOP_SATISFIEDR_ANIMATION = 1181187411,
	A2O_BEDD_ROUTEFAILURE_LEFT_ANIMATION = -853254767,
	A2O_BEDD_ROUTEFAILURE_RIGHT_ANIMATION = 1265786078,
	A2O_BEDS_GETINL_ANIMATION = -377594539,
	A2O_BEDS_GETINR_ANIMATION = 326197302,
	A2O_BEDS_GETOUTL_ENERGETIC_ANIMATION = -1551212618,
	A2O_BEDS_GETOUTL_ENERGETIC_STOP_ANIMATION = -1215883227,
	A2O_BEDS_GETOUTL_LAZY_ANIMATION = 915097522,
	A2O_BEDS_GETOUTL_LAZY_LOOP1_ANIMATION = 631435022,
	A2O_BEDS_GETOUTL_LAZY_LOOP2_ANIMATION = -1129595212,
	A2O_BEDS_GETOUTL_LAZY_LOOP3_ANIMATION = -877883870,
	A2O_BEDS_GETOUTL_LAZY_STOP_ANIMATION = -631319043,
	A2O_BEDS_GETOUTL_NORMAL_ANIMATION = -973507669,
	A2O_BEDS_GETOUTL_NORMAL_STOP_ANIMATION = -1610399304,
	A2O_BEDS_GETOUTR_ENERGETIC_ANIMATION = 1594536059,
	A2O_BEDS_GETOUTR_ENERGETIC_STOP_ANIMATION = 1898106896,
	A2O_BEDS_GETOUTR_LAZY_ANIMATION = 257369177,
	A2O_BEDS_GETOUTR_LAZY_LOOP1_ANIMATION = -1064578580,
	A2O_BEDS_GETOUTR_LAZY_LOOP2_ANIMATION = 1501724758,
	A2O_BEDS_GETOUTR_LAZY_LOOP3_ANIMATION = 780513472,
	A2O_BEDS_GETOUTR_LAZY_STOP_ANIMATION = 652098096,
	A2O_BEDS_GETOUTR_NORMAL_ANIMATION = -1396158286,
	A2O_BEDS_GETOUTR_NORMAL_STOP_ANIMATION = -287118382,
	A2O_BEDS_MAKEL_ANIMATION = -2105453065,
	A2O_BEDS_MAKER_ANIMATION = 2022598804,
	A2O_BEDS_ROUTEFAILURE_LEFT_ANIMATION = -1806111280,
	A2O_BEDS_ROUTEFAILURE_RIGHT_ANIMATION = 1257263464,
	A2O_BEDS_SLEEPL_ANIMATION = 1238862312,
	A2O_BEDS_SLEEPR_ANIMATION = -1277643637,
	A2O_BED_GETINL_ANIMATION = 493051580,
	A2O_BED_GETINR_ANIMATION = -412326945,
	A2O_BED_GETINTOL1_ANIMATION = 553593853,
	A2O_BED_GETINTOL2_ANIMATION = -1175029177,
	A2O_BED_GETINTOR1_ANIMATION = -188869598,
	A2O_BED_GETINTOR2_ANIMATION = 1840727448,
	A2O_BED_GETOUTL_ENERGETIC_ANIMATION = 845923841,
	A2O_BED_GETOUTL_ENERGETIC_STOP_ANIMATION = 357721027,
	A2O_BED_GETOUTL_LAZY_ANIMATION = 1356735334,
	A2O_BED_GETOUTL_LAZY_LOOP1_ANIMATION = 1882597560,
	A2O_BED_GETOUTL_LAZY_LOOP2_ANIMATION = -381716222,
	A2O_BED_GETOUTL_LAZY_LOOP3_ANIMATION = -1640478316,
	A2O_BED_GETOUTL_LAZY_STOP_ANIMATION = 1270828106,
	A2O_BED_GETOUTL_NORMAL_ANIMATION = 1785901220,
	A2O_BED_GETOUTL_NORMAL_STOP_ANIMATION = -2108374074,
	A2O_BED_GETOUTR_ENERGETIC_ANIMATION = -823449140,
	A2O_BED_GETOUTR_ENERGETIC_STOP_ANIMATION = -738743306,
	A2O_BED_GETOUTR_LAZY_ANIMATION = 1761755277,
	A2O_BED_GETOUTR_LAZY_LOOP1_ANIMATION = -1793124774,
	A2O_BED_GETOUTR_LAZY_LOOP2_ANIMATION = 202786784,
	A2O_BED_GETOUTR_LAZY_LOOP3_ANIMATION = 2064742262,
	A2O_BED_GETOUTR_LAZY_STOP_ANIMATION = -1220566137,
	A2O_BED_GETOUTR_NORMAL_ANIMATION = 54760381,
	A2O_BED_GETOUTR_NORMAL_STOP_ANIMATION = -860526164,
	A2O_BED_MAKEL_ANIMATION = 1261956577,
	A2O_BED_MAKER_ANIMATION = -1321676670,
	A2O_BED_SLEEPL_ANIMATION = -1110799871,
	A2O_BED_SLEEPR_ANIMATION = 1204139874,
	A2O_BOOKSHELF_BOOK_GET_ANIMATION = 1884288257,
	A2O_BOOKSHELF_BOOK_PUT_ANIMATION = 602165925,
	A2O_BOOKSHELF_CLEAN_ANIMATION = -650444194,
	A2O_BOOKSHELF_READ_SITTING_LOOP1_ANIMATION = -1716032871,
	A2O_BOOKSHELF_READ_SITTING_LOOP2_ANIMATION = 12466979,
	A2O_BOOKSHELF_READ_SITTING_START_ANIMATION = -110141429,
	A2O_BOOKSHELF_READ_SITTING_STOP_ANIMATION = -1453828020,
	A2O_BOOKSHELF_READ_STANDING_LOOP1_ANIMATION = 1388325007,
	A2O_BOOKSHELF_READ_STANDING_LOOP2_ANIMATION = -875988683,
	A2O_BOOKSHELF_READ_STANDING_START_ANIMATION = 840442397,
	A2O_BOOKSHELF_READ_STANDING_STOP_ANIMATION = -1079393540,
	A2O_BOOKSHELF_XLEFT_BOOK_GET_ANIMATION = 324666113,
	A2O_BOOKSHELF_XLEFT_BOOK_PUT_ANIMATION = 1089578149,
	A2O_BORED1_ANIMATION = -38223003,
	A2O_BORED2_ANIMATION = 1689359071,
	A2O_BURGLAR_TAKEFROMWALL_ANIMATION = -1242330618,
	A2O_BURN_ANIMATION = -1188600210,
	A2O_CARD_GET_ANIMATION = -861447411,
	A2O_CARD_IDLE1_ANIMATION = -1045972769,
	A2O_CARD_IDLE2_ANIMATION = 1487858021,
	A2O_CARD_IDLE3_ANIMATION = 799660531,
	A2O_CARD_LOSEGAME_ANIMATION = -651112683,
	A2O_CARD_LOSEHAND_ANIMATION = -579224554,
	A2O_CARD_PLAYONE_ANIMATION = 1219154974,
	A2O_CARD_TRICK1_ANIMATION = 588966353,
	A2O_CARD_TRICK2_ANIMATION = -1173112725,
	A2O_CARD_WINGAME_ANIMATION = -823807337,
	A2O_CARD_WINHAND_ANIMATION = -894647916,
	A2O_CARVINGBLOCK_APPROACH_ANIMATION = -1208778546,
	A2O_CARVINGBLOCK_FINISH_ANIMATION = -226603967,
	A2O_CARVINGBLOCK_HI_LOOP1_ANIMATION = 919895246,
	A2O_CARVINGBLOCK_HI_LOOP2_ANIMATION = -1344459404,
	A2O_CARVINGBLOCK_HI_LOOP3_ANIMATION = -656794142,
	A2O_CARVINGBLOCK_HI_START_ANIMATION = 1443657308,
	A2O_CARVINGBLOCK_HI_STOP_ANIMATION = -1068153883,
	A2O_CARVINGBLOCK_LO_LOOP1_ANIMATION = -783399154,
	A2O_CARVINGBLOCK_LO_LOOP2_ANIMATION = 1212618420,
	A2O_CARVINGBLOCK_LO_LOOP3_ANIMATION = 1061168674,
	A2O_CARVINGBLOCK_LO_START_ANIMATION = -1315549796,
	A2O_CARVINGBLOCK_LO_STOP_ANIMATION = -498891541,
	A2O_CARVINGBLOCK_TADA_ANIMATION = 1169864057,
	A2O_CAR_GETINL_ANIMATION = 362372130,
	A2O_CAR_GETINR_ANIMATION = -275357375,
	A2O_CHAIR2_IDLE1_ANIMATION = 679876923,
	A2O_CHAIR2_IDLE1INTRO_ANIMATION = -1370202230,
	A2O_CHAIR2_IDLE2_ANIMATION = -1316009855,
	A2O_CHEMSET_MONSTER_STOP_ANIMATION = 2050445316,
	A2O_CHESS_CLEAN_ANIMATION = -1741555277,
	A2O_CHESS_PLAY1_ANIMATION = -86423351,
	A2O_CHESS_PLAY2_ANIMATION = 1674582387,
	A2O_CHESS_PLAY3_ANIMATION = 349645285,
	A2O_CHESS_PLAY4_ANIMATION = -1967932346,
	A2O_CHESS_SCOOT_ANIMATION = -826003643,
	A2O_CHESS_SCOOT_LOOP_ANIMATION = 1634872396,
	A2O_CHOCOLATES_EAT_ANIMATION = 1464038715,
	A2O_CHOCOLATES_OPEN_TAKE_ANIMATION = 1167373584,
	A2O_CLOCKALARM_SET_ANIMATION = 2088369982,
	A2O_CLOCKGRAND_WIND_ANIMATION = -1164520338,
	A2O_CLOTHESCHANGE_ANIMATION = 1566388919,
	A2O_CLOWN_IDLETRANS_HANDSKNEES_HANDSIDE_ANIMATION = -1788912528,
	A2O_CLOWN_IDLE_HANDSKNEES_COUGH_ANIMATION = -568881512,
	A2O_COFFEEMAKER_DRINK_LOOP1_ANIMATION = 668085458,
	A2O_COFFEEMAKER_DRINK_LOOP2_ANIMATION = -1092911768,
	A2O_COFFEEMAKER_DRINK_START_ANIMATION = 1191847488,
	A2O_COFFEEMAKER_DRINK_STOP_ANIMATION = -955382978,
	A2O_COMFORTABLE1_ANIMATION = -672354522,
	A2O_COMFORTABLE1START_ANIMATION = 1562722004,
	A2O_COMFORTABLE2_ANIMATION = 1323695772,
	A2O_COMPLIMENTEE1_ANIMATION = 288609146,
	A2O_COMPLIMENTER1_ANIMATION = 347101164,
	A2O_COMPUTER_GETJOYSTICK_ANIMATION = 1002452220,
	A2O_COMPUTER_GETKEYBOARD_ANIMATION = 1157065401,
	A2O_COMPUTER_PLAYGAME_ANIMATION = 1174800926,
	A2O_COMPUTER_TURNON_ANIMATION = -1808727028,
	A2O_COMPUTER_TYPE_ANIMATION = -206321415,
	A2O_CONSIDER_ANIMATION = -1541686771,
	A2O_COUGH_BAD_STANDING1_ANIMATION = -2088600968,
	A2O_COUGH_BAD_STANDING2_ANIMATION = 445328322,
	A2O_COUNTER_FOODPREP_ANIMATION = 1739393387,
	A2O_DANCE_INPLACE_HANDSUPLOOP_ANIMATION = 2027485042,
	A2O_DANCE_INPLACE_HANDSUPSTART_ANIMATION = 1568091586,
	A2O_DANCE_INPLACE_HANDSUPSTOP_ANIMATION = 1624374314,
	A2O_DANCE_INPLACE_STARTSTAND_ANIMATION = -1353363566,
	A2O_DANCE_INPLACE_STOPSTAND_ANIMATION = 530449534,
	A2O_DANCE_INPLACE_SWIMLOOP_ANIMATION = 1219088823,
	A2O_DANCE_INPLACE_SWIMSTART_ANIMATION = -1236702501,
	A2O_DANCE_INPLACE_SWIMSTOP_ANIMATION = 1352719087,
	A2O_DANCE_INPLACE_TWISTLOOP_ANIMATION = 1055277718,
	A2O_DANCE_INPLACE_TWISTSTART_ANIMATION = -95013610,
	A2O_DANCE_INPLACE_TWISTSTOP_ANIMATION = 653216206,
	A2O_DEAD_LOOP_ANIMATION = 44648882,
	A2O_DIE_BURN_END_ANIMATION = 1021808402,
	A2O_DIE_BURN_LOOP1_ANIMATION = 381056993,
	A2O_DIE_BURN_LOOP2_ANIMATION = -1883298213,
	A2O_DIE_BURN_START_ANIMATION = 1986952563,
	A2O_DIE_SHOCK_LOOP1_ANIMATION = 361375257,
	A2O_DIE_SHOCK_LOOP2_ANIMATION = -1937541213,
	A2O_DIE_STARVE_ANIMATION = 1935140879,
	A2O_DISAPPROVE_ANIMATION = -618386676,
	A2O_DISGUSTED1_ANIMATION = -1460016471,
	A2O_DISGUSTED2_ANIMATION = 837860115,
	A2O_DISHWC_REPAIR_LOOP1_ANIMATION = -520752594,
	A2O_DISHWC_REPAIR_LOOP2_ANIMATION = 2046600084,
	A2O_DISHWC_REPAIR_START_ANIMATION = -2144470852,
	A2O_DISHWC_REPAIR_STOP_ANIMATION = 930630469,
	A2O_DISHW_LOAD_ANIMATION = 329997594,
	A2O_DISHW_OPEN_ANIMATION = -1830995293,
	A2O_DOLLHOUSE_PLAY_LOOP1_ANIMATION = 1659034779,
	A2O_DOLLHOUSE_PLAY_LOOP2_ANIMATION = -68448991,
	A2O_DOLLHOUSE_START_ANIMATION = 199395510,
	A2O_DOLLHOUSE_STOP_ANIMATION = 1185983263,
	A2O_DOLLHOUSE_WATCH_LOOP1_ANIMATION = 948823367,
	A2O_DOLLHOUSE_WATCH_LOOP2_ANIMATION = -1585138435,
	A2O_DOOR_KNOCK_ANIMATION = -105330749,
	A2O_DOOR_PULL_OPEN_ANIMATION = -803558930,
	A2O_DOOR_PUSH_CLOSE_ANIMATION = -272210884,
	A2O_DRESSER_OPEN_ANIMATION = -1801573871,
	A2O_EASEL_CONSIDER_ANIMATION = 55420451,
	A2O_EASEL_PAINT_ANIMATION = -557588972,
	A2O_EASEL_STARTPAINT_ANIMATION = 23865589,
	A2O_EASEL_STOPPAINT_ANIMATION = 80867674,
	A2O_EAT_ANIMATION = -1940229125,
	A2O_EATLOOP_STAND_ANIMATION = -1215690057,
	A2O_ENERGETIC1_ANIMATION = 1267583370,
	A2O_ENERGETIC2_ANIMATION = -763062224,
	A2O_ENTHRALLED_ANIMATION = 2080018937,
	A2O_ENTHRALLED2_ANIMATION = -556855772,
	A2O_ENTHRALLEDSTART_ANIMATION = 1550677481,
	A2O_ESPRESSO_CLEAN_ANIMATION = -1346102771,
	A2O_ESPRESSO_DRINK_LOOP1_ANIMATION = 1115218951,
	A2O_ESPRESSO_DRINK_LOOP2_ANIMATION = -613304899,
	A2O_ESPRESSO_DRINK_START_ANIMATION = 580972181,
	A2O_ESPRESSO_DRINK_STOP_ANIMATION = -585166746,
	A2O_ESPRESSO_REPAIR_LOOP1_ANIMATION = -140759900,
	A2O_ESPRESSO_REPAIR_LOOP2_ANIMATION = 1855290654,
	A2O_ESPRESSO_REPAIR_START_ANIMATION = -1757141450,
	A2O_ESPRESSO_REPAIR_STOP_ANIMATION = -384269605,
	A2O_EXMACH_GETUPFRONT_ANIMATION = -664559987,
	A2O_EXMACH_GETUPL_ANIMATION = -581470123,
	A2O_EXMACH_GETUPR_ANIMATION = 660096310,
	A2O_EXMACH_LOOP1_ANIMATION = 447927402,
	A2O_EXMACH_LOOP2_ANIMATION = -2084862512,
	A2O_EXMACH_SIT_FRONT_ANIMATION = -1499768708,
	A2O_EXMACH_SIT_LEFT_ANIMATION = 1913748597,
	A2O_EXMACH_SIT_RIGHT_ANIMATION = -324382818,
	A2O_EXMACH_START_ANIMATION = 2053824248,
	A2O_EXMACH_STOP_ANIMATION = 2137222235,
	A2O_FAINT_ANIMATION = 775896000,
	A2O_FIREASH_OUTSIDE_DUMP_ANIMATION = -715878993,
	A2O_FIREASH_SWEEP2CARRY_ANIMATION = -950293426,
	A2O_FIREASH_SWEEP_CARRYING_ANIMATION = 795567234,
	A2O_FIREASH_SWEEP_LOOP1_ANIMATION = 1948249059,
	A2O_FIREASH_SWEEP_LOOP2_ANIMATION = -317277607,
	A2O_FIREASH_SWEEP_START_ANIMATION = 348643697,
	A2O_FIREASH_SWEEP_STOP_ANIMATION = -1185283380,
	A2O_FIREASH_TRASHCOM_DUMP_ANIMATION = -499243573,
	A2O_FIREPLACE_LIGHT_ANIMATION = 236476361,
	A2O_FIRE_EXTINGUISH_LOOP1_ANIMATION = -781868428,
	A2O_FIRE_EXTINGUISH_LOOP2_ANIMATION = 1215099854,
	A2O_FIRE_EXTINGUISH_START_ANIMATION = -1312970522,
	A2O_FIRE_EXTINGUISH_STOP_ANIMATION = -911802645,
	A2O_FIRE_EXTINGUISH_WHEW_ANIMATION = 930303617,
	A2O_FLAMINGO_KICK_ANIMATION = 1545282883,
	A2O_FLIRTEE1_ANIMATION = -1971559829,
	A2O_FLIRTER1_ANIMATION = -1879054595,
	A2O_FLOOD_MOP_LOOP1_ANIMATION = 1373096987,
	A2O_FLOOD_MOP_LOOP2_ANIMATION = -924934751,
	A2O_FLOOD_MOP_START_ANIMATION = 823117449,
	A2O_FLOOD_MOP_STOP_ANIMATION = 514808446,
	A2O_FLOORGETUP_ANIMATION = -366436543,
	A2O_FLOORLAMP1_TURNON_ANIMATION = -662596670,
	A2O_FLOORLAMP_CLEAN_ANIMATION = 1896742469,
	A2O_FLOORSLEEP_ANIMATION = 1432763039,
	A2O_FLOWEREE_CHERISH_ANIMATION = 1456285315,
	A2O_FLOWEREE_START_ANIMATION = 673126801,
	A2O_FLOWEREE_STOMP_ANIMATION = -390660580,
	A2O_FLOWERER_REACT_BAD_ANIMATION = 1596915537,
	A2O_FLOWERER_REACT_GOOD_ANIMATION = 1630806378,
	A2O_FLOWERER_START_ANIMATION = -1972978735,
	A2O_FLOWERS_REPLANT_ANIMATION = 377145626,
	A2O_FLOWERS_WATER_ANIMATION = 444917394,
	A2O_FOODPROC_FOODPREP_ANIMATION = -502444981,
	A2O_FOODPROC_FOODWATCH_ANIMATION = -949084209,
	A2O_FOUNTAIN2_BENDDOWN_ANIMATION = -74876415,
	A2O_FOUNTAIN2_SPLASH_ANIMATION = 1815323483,
	A2O_FOUNTAIN_SPLASH_LOOP_ANIMATION = 757466936,
	A2O_FOUNTAIN_SPLASH_START_ANIMATION = -886342724,
	A2O_FOUNTAIN_SPLASH_STOP_ANIMATION = 892275808,
	A2O_FRIDGE_CLOSE_ANIMATION = -977139000,
	A2O_FRIDGE_GETFOOD_ANIMATION = 174015509,
	A2O_FRIDGE_LOOK_ANIMATION = 1041379458,
	A2O_FRIDGE_OPEN_ANIMATION = -1319606492,
	A2O_FULLBLADDER1_ANIMATION = 1641851654,
	A2O_FULLBLADDER1START_ANIMATION = -2056099287,
	A2O_FULLBLADDER2_ANIMATION = -120194372,
	A2O_FULLBLADDER2LOOP_ANIMATION = 924105738,
	A2O_FULLBLADDER2START_ANIMATION = 65411207,
	A2O_GNOMEWORKBENCH_DONE_STOP_ANIMATION = 760108451,
	A2O_GNOMEWORKBENCH_LOOP1_ANIMATION = 2090172724,
	A2O_GNOMEWORKBENCH_LOOP2_ANIMATION = -442707826,
	A2O_GNOMEWORKBENCH_LOOP3_ANIMATION = -1835278312,
	A2O_GNOMEWORKBENCH_NOTDONE_STOP_ANIMATION = 138785702,
	A2O_GNOMEWORKBENCH_START_ANIMATION = 474844070,
	A2O_GNOME_CARRY_ANIMATION = -724020360,
	A2O_GNOME_KICK_BOOM_ANIMATION = 506471124,
	A2O_GNOME_PUTDOWN_ANIMATION = 472610412,
	A2O_GREET01_ANIMATION = -2072762910,
	A2O_GUITAR_PLAY_LEANBACK_LOOP1_ANIMATION = 1301588394,
	A2O_GUITAR_PLAY_LEANBACK_LOOP2_ANIMATION = -727844848,
	A2O_GUITAR_PLAY_LEANBACK_LOOP3_ANIMATION = -1550137210,
	A2O_GUITAR_PLAY_LEANBACK_LOOPX_ANIMATION = 2046455894,
	A2O_GUITAR_PLAY_LEANFRONT_LOOP1_ANIMATION = -864066235,
	A2O_GUITAR_PLAY_LEANFRONT_LOOP2_ANIMATION = 1433810175,
	A2O_GUITAR_PLAY_LEANFRONT_LOOP3_ANIMATION = 577832041,
	A2O_GUITAR_PLAY_LEANFRONT_LOOPX_ANIMATION = -133055303,
	A2O_GUITAR_PLAY_STAND_LOOP1_ANIMATION = 1888996208,
	A2O_GUITAR_PLAY_STAND_LOOP2_ANIMATION = -375481654,
	A2O_GUITAR_PLAY_STAND_LOOP3_ANIMATION = -1634096548,
	A2O_GUITAR_PLAY_STAND_LOOPX_ANIMATION = 1157173900,
	A2O_GUITAR_PLAY_START_ANIMATION = -504023046,
	A2O_GUITAR_PLAY_STOP_ANIMATION = -2075599205,
	A2O_GUITAR_TRANS_LEANBACK_STAND_ANIMATION = 403468173,
	A2O_GUITAR_TRANS_LEANFRONT_LEANBACK_ANIMATION = 572854772,
	A2O_GUITAR_TRANS_STAND_LEANFRONT_ANIMATION = -156506535,
	A2O_HANDSUP_ANIMATION = 526560227,
	A2O_HANDSUP_ARMSONLY_ANIMATION = 1003988675,
	A2O_HAVEACCIDENT_ANIMATION = 484291089,
	A2O_HEYYOU_ANIMATION = 2105891133,
	A2O_HEYYOU1_ANIMATION = -607574273,
	A2O_HEYYOU2_ANIMATION = 1119909701,
	A2O_HOTTUB_GETIN_ANIMATION = 1933350499,
	A2O_HOTTUB_GETOUT_ANIMATION = -948453060,
	A2O_HOTTUB_REPAIR_LOOP1_ANIMATION = 1516150582,
	A2O_HOTTUB_REPAIR_LOOP2_ANIMATION = -1017655668,
	A2O_HOTTUB_REPAIR_START_ANIMATION = 981898660,
	A2O_HOTTUB_REPAIR_STOP_ANIMATION = 1277384369,
	A2O_HOTTUB_REPAIR_TRANS_ANIMATION = -706814314,
	A2O_HOTTUB_SOAKLOOP1_ANIMATION = 2053147525,
	A2O_HOTTUB_TURNON_ANIMATION = 1261637825,
	A2O_HOUSEPLANT_SHAKEHEAD_ANIMATION = 1587987662,
	A2O_HOUSEPLANT_WATER_ANIMATION = 1269306620,
	A2O_HUNGRY1_ANIMATION = 38940789,
	A2O_HUNGRY1START_ANIMATION = -197486467,
	A2O_HUNGRY2_ANIMATION = -1688510001,
	A2O_ICECHEST_CLEAN_ANIMATION = -2063018910,
	A2O_ICECHEST_CLOSE_ANIMATION = 1740241135,
	A2O_ICECHEST_DIG_ANIMATION = -896854313,
	A2O_ICECHEST_GETDRINK_ANIMATION = -1537867924,
	A2O_ICECHEST_OPEN_ANIMATION = -1378143737,
	A2O_ICECHEST_REFILL_ANIMATION = -446970611,
	A2O_ICECHEST_SHIVER_ANIMATION = -1304190936,
	A2O_IDLE1_ANIMATION = 1129763540,
	A2O_IDLE10_ANIMATION = 1965465406,
	A2O_IDLE1_LOOP1_ANIMATION = 1693278422,
	A2O_IDLE1_START_ANIMATION = 70609476,
	A2O_IDLE1_STOP_ANIMATION = -1851036330,
	A2O_IDLE2_ANIMATION = -631274642,
	A2O_IDLE2_LOOP1_ANIMATION = 1426422347,
	A2O_IDLE2_START_ANIMATION = 903704793,
	A2O_IDLE2_STOP_ANIMATION = 390012920,
	A2O_IDLE3_ANIMATION = -1386695688,
	A2O_IDLE4_ANIMATION = 859579995,
	A2O_IDLE5_ANIMATION = 1144723149,
	A2O_IDLE6_ANIMATION = -583907465,
	A2O_IDLE7_ANIMATION = -1439336479,
	A2O_IDLE8_ANIMATION = 982149744,
	A2O_IDLE9_ANIMATION = 1301109478,
	A2O_IDLE_ARMSCROSSED_BREATHE_ANIMATION = -1623421752,
	A2O_IDLE_ARMSCROSSED_LOOKOFF_ANIMATION = 1119825584,
	A2O_IDLE_ARMSCROSSED_SCRATCHCHIN_ANIMATION = -742107812,
	A2O_IDLE_ARMSDOWN_BREATHE_ANIMATION = 242396554,
	A2O_IDLE_ARMSDOWN_FIDGET_ANIMATION = -788051866,
	A2O_IDLE_ARMSDOWN_LOOKOFF_ANIMATION = -739176462,
	A2O_IDLE_HANDSHIPS_BREATHE_ANIMATION = 1473641417,
	A2O_IDLE_HANDSHIPS_LOOKOFF_ANIMATION = -1974052431,
	A2O_IDLE_HANDSHIPS_SHIFTSIDE_ANIMATION = -515230400,
	A2O_IDLE_NEUTRAL_LCROSSED_BREATHE_1A_ANIMATION = 1511572562,
	A2O_IDLE_NEUTRAL_LCROSSED_BREATHE_1A_BAIL_ANIMATION = -1956084899,
	A2O_IDLE_NEUTRAL_LCROSSED_BREATHE_1B_ANIMATION = -1022257688,
	A2O_IDLE_NEUTRAL_LCROSSED_BREATHE_1B_BAIL_ANIMATION = 234680819,
	A2O_IDLE_NEUTRAL_LCROSSED_BREATHE_1C_ANIMATION = -1273584258,
	A2O_IDLE_NEUTRAL_LCROSSED_BREATHE_1C_BAIL_ANIMATION = -962583978,
	A2O_IDLE_NEUTRAL_LCROSSED_BREATHE_1D_ANIMATION = 712126685,
	A2O_IDLE_NEUTRAL_LCROSSED_FIDGET_1A_ANIMATION = -471340313,
	A2O_IDLE_NEUTRAL_LCROSSED_FIDGET_1A_BAIL_ANIMATION = -1740767960,
	A2O_IDLE_NEUTRAL_LCROSSED_FIDGET_1B_ANIMATION = 2062465885,
	A2O_IDLE_NEUTRAL_LCROSSED_FIDGET_1B_BAIL_ANIMATION = 514428806,
	A2O_IDLE_NEUTRAL_LCROSSED_FIDGET_1C_ANIMATION = 233409483,
	A2O_IDLE_NEUTRAL_LCROSSED_FIDGET_1C_BAIL_ANIMATION = -705340381,
	A2O_IDLE_NEUTRAL_LCROSSED_FIDGET_1D_ANIMATION = -1819468184,
	A2O_IDLE_NEUTRAL_LCROSSED_LOOK_1A_ANIMATION = -2041789552,
	A2O_IDLE_NEUTRAL_LCROSSED_LOOK_1A_BAIL_ANIMATION = -1018033120,
	A2O_IDLE_NEUTRAL_LCROSSED_LOOK_1B_ANIMATION = 524653098,
	A2O_IDLE_NEUTRAL_LCROSSED_LOOK_1B_BAIL_ANIMATION = 1170636430,
	A2O_IDLE_NEUTRAL_LCROSSED_LOOK_1C_ANIMATION = 1749197500,
	A2O_IDLE_NEUTRAL_LCROSSED_LOOK_1C_BAIL_ANIMATION = -1902465749,
	A2O_IDLE_NEUTRAL_LCROSSED_LOOK_1D_ANIMATION = -165267681,
	A2O_IDLE_NEUTRAL_LEFT_BREATHE_1_ANIMATION = -448200642,
	A2O_IDLE_NEUTRAL_LEFT_BREATHE_2_ANIMATION = 2084589956,
	A2O_IDLE_NEUTRAL_LEFT_BREATHE_3_ANIMATION = 189227282,
	A2O_IDLE_NEUTRAL_LEFT_BREATHE_4_ANIMATION = -1792805711,
	A2O_IDLE_NEUTRAL_LEFT_BRTHBAIL_1_ANIMATION = 277260341,
	A2O_IDLE_NEUTRAL_LEFT_BRTHBAIL_2_ANIMATION = -1987053169,
	A2O_IDLE_NEUTRAL_LEFT_BRTHBAIL_3_ANIMATION = -24590055,
	A2O_IDLE_NEUTRAL_LEFT_FISTBUMP_1_ANIMATION = -1837246655,
	A2O_IDLE_NEUTRAL_LEFT_FISTBUMP_2_ANIMATION = 192186107,
	A2O_IDLE_NEUTRAL_LEFT_FISTBUMP_3_ANIMATION = 2087958125,
	A2O_IDLE_NEUTRAL_LEFT_FISTBUMP_BAIL_1_ANIMATION = 472397947,
	A2O_IDLE_NEUTRAL_LEFT_FISTBUMP_BAIL_2_ANIMATION = -2061407807,
	A2O_IDLE_NEUTRAL_LEFT_LOOK_LEFT_0900_ANIMATION = 594015785,
	A2O_IDLE_NEUTRAL_LEFT_LOOK_SHLDR_LEFT_ANIMATION = -47976471,
	A2O_IDLE_NEUTRAL_LEFT_ROLL_SHOULDER_1_ANIMATION = 1041465027,
	A2O_IDLE_NEUTRAL_LEFT_ROLL_SHOULDER_2_ANIMATION = -1491456135,
	A2O_IDLE_NEUTRAL_LEFT_ROLL_SHOULDER_BAIL_1_ANIMATION = -1483302711,
	A2O_IDLE_NEUTRAL_LEFT_SCRATCH_SHLDR_WITH_CHIN_ANIMATION = -1360414886,
	A2O_IDLE_NEUTRAL_LEFT_START_ANIMATION = 1915674541,
	A2O_IDLE_NEUTRAL_LHIPS_BREATHE_1A_ANIMATION = 1645983261,
	A2O_IDLE_NEUTRAL_LHIPS_BREATHE_1A_BAIL_ANIMATION = -2061228432,
	A2O_IDLE_NEUTRAL_LHIPS_BREATHE_1B_ANIMATION = -82647129,
	A2O_IDLE_NEUTRAL_LHIPS_BREATHE_1B_BAIL_ANIMATION = 61887710,
	A2O_IDLE_NEUTRAL_LHIPS_BREATHE_1C_ANIMATION = -1944725711,
	A2O_IDLE_NEUTRAL_LHIPS_BREATHE_1C_BAIL_ANIMATION = -924022917,
	A2O_IDLE_NEUTRAL_LHIPS_BREATHE_1D_ANIMATION = 309412498,
	A2O_IDLE_NEUTRAL_LHIPS_FIDGET_1A_ANIMATION = 945250629,
	A2O_IDLE_NEUTRAL_LHIPS_FIDGET_1A_BAIL_ANIMATION = 252764704,
	A2O_IDLE_NEUTRAL_LHIPS_FIDGET_1B_ANIMATION = -1587662593,
	A2O_IDLE_NEUTRAL_LHIPS_FIDGET_1B_BAIL_ANIMATION = -1987800946,
	A2O_IDLE_NEUTRAL_LHIPS_FIDGET_1C_ANIMATION = -698810263,
	A2O_IDLE_NEUTRAL_LHIPS_FIDGET_1C_BAIL_ANIMATION = 1121469227,
	A2O_IDLE_NEUTRAL_LHIPS_FIDGET_1D_ANIMATION = 1211995594,
	A2O_IDLE_NEUTRAL_LHIPS_LOOK_1A_ANIMATION = 535283807,
	A2O_IDLE_NEUTRAL_LHIPS_LOOK_1A_BAIL_ANIMATION = 179861497,
	A2O_IDLE_NEUTRAL_LHIPS_LOOK_1B_ANIMATION = -2031183387,
	A2O_IDLE_NEUTRAL_LHIPS_LOOK_1B_BAIL_ANIMATION = -1943272105,
	A2O_IDLE_NEUTRAL_LHIPS_LOOK_1C_ANIMATION = -236344973,
	A2O_IDLE_NEUTRAL_LHIPS_LOOK_1C_BAIL_ANIMATION = 1198577394,
	A2O_IDLE_NEUTRAL_LHIPS_LOOK_1D_ANIMATION = 1871527120,
	A2O_IDLE_NEUTRAL_LSTAND_BREATHE_1A_ANIMATION = 614922161,
	A2O_IDLE_NEUTRAL_LSTAND_BREATHE_1A_BAIL_ANIMATION = 2029973119,
	A2O_IDLE_NEUTRAL_LSTAND_BREATHE_1B_ANIMATION = -1112562165,
	A2O_IDLE_NEUTRAL_LSTAND_BREATHE_1B_BAIL_ANIMATION = -26567471,
	A2O_IDLE_NEUTRAL_LSTAND_BREATHE_1C_ANIMATION = -894921059,
	A2O_IDLE_NEUTRAL_LSTAND_BREATHE_1C_BAIL_ANIMATION = 892751732,
	A2O_IDLE_NEUTRAL_LSTAND_BREATHE_1D_ANIMATION = 1422656318,
	A2O_IDLE_NEUTRAL_LSTAND_FIDGET_1A_ANIMATION = -324487958,
	A2O_IDLE_NEUTRAL_LSTAND_FIDGET_1A_BAIL_ANIMATION = -1222535366,
	A2O_IDLE_NEUTRAL_LSTAND_FIDGET_1B_ANIMATION = 1973544272,
	A2O_IDLE_NEUTRAL_LSTAND_FIDGET_1B_BAIL_ANIMATION = 834004372,
	A2O_IDLE_NEUTRAL_LSTAND_FIDGET_1C_ANIMATION = 44488134,
	A2O_IDLE_NEUTRAL_LSTAND_FIDGET_1C_BAIL_ANIMATION = -85379535,
	A2O_IDLE_NEUTRAL_LSTAND_FIDGET_1D_ANIMATION = -1664991131,
	A2O_IDLE_NEUTRAL_LSTAND_LOOK_1A_ANIMATION = -24651725,
	A2O_IDLE_NEUTRAL_LSTAND_LOOK_1A_BAIL_ANIMATION = 164737959,
	A2O_IDLE_NEUTRAL_LSTAND_LOOK_1B_ANIMATION = 1737394569,
	A2O_IDLE_NEUTRAL_LSTAND_LOOK_1B_BAIL_ANIMATION = -1891254007,
	A2O_IDLE_NEUTRAL_LSTAND_LOOK_1C_ANIMATION = 277461279,
	A2O_IDLE_NEUTRAL_LSTAND_LOOK_1C_BAIL_ANIMATION = 1142493868,
	A2O_IDLE_NEUTRAL_LSTAND_LOOK_1D_ANIMATION = -1897059140,
	A2O_IDLE_NEUTRAL_MCROSSED_BREATHE_1A_ANIMATION = -1912978422,
	A2O_IDLE_NEUTRAL_MCROSSED_BREATHE_1A_BAIL_ANIMATION = 172877434,
	A2O_IDLE_NEUTRAL_MCROSSED_BREATHE_1B_ANIMATION = 351475120,
	A2O_IDLE_NEUTRAL_MCROSSED_BREATHE_1B_BAIL_ANIMATION = -1931897644,
	A2O_IDLE_NEUTRAL_MCROSSED_BREATHE_1C_ANIMATION = 1676944678,
	A2O_IDLE_NEUTRAL_MCROSSED_BREATHE_1C_BAIL_ANIMATION = 1199916913,
	A2O_IDLE_NEUTRAL_MCROSSED_BREATHE_1D_ANIMATION = -40849275,
	A2O_IDLE_NEUTRAL_MCROSSED_FIDGET_1A_ANIMATION = 213212166,
	A2O_IDLE_NEUTRAL_MCROSSED_FIDGET_1A_BAIL_ANIMATION = 55449596,
	A2O_IDLE_NEUTRAL_MCROSSED_FIDGET_1B_ANIMATION = -1782837828,
	A2O_IDLE_NEUTRAL_MCROSSED_FIDGET_1B_BAIL_ANIMATION = -2049284782,
	A2O_IDLE_NEUTRAL_MCROSSED_FIDGET_1C_ANIMATION = -491045590,
	A2O_IDLE_NEUTRAL_MCROSSED_FIDGET_1C_BAIL_ANIMATION = 1317451511,
	A2O_IDLE_NEUTRAL_MCROSSED_FIDGET_1D_ANIMATION = 2095032457,
	A2O_IDLE_NEUTRAL_MCROSSED_LOOK_1A_ANIMATION = 673468929,
	A2O_IDLE_NEUTRAL_MCROSSED_LOOK_1A_BAIL_ANIMATION = 1552453566,
	A2O_IDLE_NEUTRAL_MCROSSED_LOOK_1B_ANIMATION = -1322449989,
	A2O_IDLE_NEUTRAL_MCROSSED_LOOK_1B_BAIL_ANIMATION = -635634416,
	A2O_IDLE_NEUTRAL_MCROSSED_LOOK_1C_ANIMATION = -970312915,
	A2O_IDLE_NEUTRAL_MCROSSED_LOOK_1C_BAIL_ANIMATION = 289418933,
	A2O_IDLE_NEUTRAL_MCROSSED_LOOK_1D_ANIMATION = 1481549454,
	A2O_IDLE_NEUTRAL_MHIPS_BREATHE_1A_ANIMATION = -864868468,
	A2O_IDLE_NEUTRAL_MHIPS_BREATHE_1A_BAIL_ANIMATION = 452896238,
	A2O_IDLE_NEUTRAL_MHIPS_BREATHE_1B_ANIMATION = 1434089014,
	A2O_IDLE_NEUTRAL_MHIPS_BREATHE_1B_BAIL_ANIMATION = -1670719680,
	A2O_IDLE_NEUTRAL_MHIPS_BREATHE_1C_ANIMATION = 578635424,
	A2O_IDLE_NEUTRAL_MHIPS_BREATHE_1C_BAIL_ANIMATION = 1463157989,
	A2O_IDLE_NEUTRAL_MHIPS_BREATHE_1D_ANIMATION = -1139158269,
	A2O_IDLE_NEUTRAL_MHIPS_FIDGET_1A_ANIMATION = -2119386451,
	A2O_IDLE_NEUTRAL_MHIPS_FIDGET_1A_BAIL_ANIMATION = 1786239334,
	A2O_IDLE_NEUTRAL_MHIPS_FIDGET_1B_ANIMATION = 413526807,
	A2O_IDLE_NEUTRAL_MHIPS_FIDGET_1B_BAIL_ANIMATION = -320623672,
	A2O_IDLE_NEUTRAL_MHIPS_FIDGET_1C_ANIMATION = 1872944001,
	A2O_IDLE_NEUTRAL_MHIPS_FIDGET_1C_BAIL_ANIMATION = 666859629,
	A2O_IDLE_NEUTRAL_MHIPS_FIDGET_1D_ANIMATION = -238662110,
	A2O_IDLE_NEUTRAL_MHIPS_LOOK_1A_ANIMATION = -1032777254,
	A2O_IDLE_NEUTRAL_MHIPS_LOOK_1A_BAIL_ANIMATION = -437599976,
	A2O_IDLE_NEUTRAL_MHIPS_LOOK_1B_ANIMATION = 1534607456,
	A2O_IDLE_NEUTRAL_MHIPS_LOOK_1B_BAIL_ANIMATION = 1669247926,
	A2O_IDLE_NEUTRAL_MHIPS_LOOK_1C_ANIMATION = 746549494,
	A2O_IDLE_NEUTRAL_MHIPS_LOOK_1C_BAIL_ANIMATION = -1474142189,
	A2O_IDLE_NEUTRAL_MHIPS_LOOK_1D_ANIMATION = -1306794667,
	A2O_IDLE_NEUTRAL_MIDDLE_BREATHE_1_ANIMATION = -971777412,
	A2O_IDLE_NEUTRAL_MIDDLE_BREATHE_2_ANIMATION = 1595575238,
	A2O_IDLE_NEUTRAL_MIDDLE_BREATHE_3_ANIMATION = 673037136,
	A2O_IDLE_NEUTRAL_MIDDLE_BREATHE_4_ANIMATION = -1233572109,
	A2O_IDLE_NEUTRAL_MIDDLE_BRTHBAIL_1_ANIMATION = -2005413293,
	A2O_IDLE_NEUTRAL_MIDDLE_BRTHBAIL_2_ANIMATION = 293503977,
	A2O_IDLE_NEUTRAL_MIDDLE_BRTHBAIL_3_ANIMATION = 1719251839,
	A2O_IDLE_NEUTRAL_MIDDLE_DRY_PALMS_ANIMATION = 1891275973,
	A2O_IDLE_NEUTRAL_MIDDLE_FIDGET_1_ANIMATION = 1381532300,
	A2O_IDLE_NEUTRAL_MIDDLE_FIDGET_2_ANIMATION = -883829962,
	A2O_IDLE_NEUTRAL_MIDDLE_FIDGET_3_ANIMATION = -1135156320,
	A2O_IDLE_NEUTRAL_MIDDLE_FIDGET_BAIL_1_ANIMATION = 67287236,
	A2O_IDLE_NEUTRAL_MIDDLE_FIDGET_BAIL_2_ANIMATION = -1660163714,
	A2O_IDLE_NEUTRAL_MIDDLE_FLINCH_1_ANIMATION = -2118526644,
	A2O_IDLE_NEUTRAL_MIDDLE_FLINCH_2_ANIMATION = 414222582,
	A2O_IDLE_NEUTRAL_MIDDLE_FLINCH_BAIL_1_ANIMATION = -215026441,
	A2O_IDLE_NEUTRAL_MIDDLE_LOOK_AHEAD_ANIMATION = 654542821,
	A2O_IDLE_NEUTRAL_MIDDLE_LOOK_UP_ANIMATION = -399445464,
	A2O_IDLE_NEUTRAL_MIDDLE_START_ANIMATION = 675684021,
	A2O_IDLE_NEUTRAL_MSTAND_BREATHE_1A_ANIMATION = -1560265486,
	A2O_IDLE_NEUTRAL_MSTAND_BREATHE_1A_BAIL_ANIMATION = 1876331199,
	A2O_IDLE_NEUTRAL_MSTAND_BREATHE_1B_ANIMATION = 973696328,
	A2O_IDLE_NEUTRAL_MSTAND_BREATHE_1B_BAIL_ANIMATION = -381487087,
	A2O_IDLE_NEUTRAL_MSTAND_BREATHE_1C_ANIMATION = 1292787166,
	A2O_IDLE_NEUTRAL_MSTAND_BREATHE_1C_BAIL_ANIMATION = 572402612,
	A2O_IDLE_NEUTRAL_MSTAND_BREATHE_1D_ANIMATION = -747976579,
	A2O_IDLE_NEUTRAL_MSTAND_FIDGET_1A_ANIMATION = 1119888763,
	A2O_IDLE_NEUTRAL_MSTAND_FIDGET_1A_BAIL_ANIMATION = 687543460,
	A2O_IDLE_NEUTRAL_MSTAND_FIDGET_1B_ANIMATION = -607554367,
	A2O_IDLE_NEUTRAL_MSTAND_FIDGET_1B_BAIL_ANIMATION = -1368431094,
	A2O_IDLE_NEUTRAL_MSTAND_FIDGET_1C_ANIMATION = -1395768233,
	A2O_IDLE_NEUTRAL_MSTAND_FIDGET_1C_BAIL_ANIMATION = 1697887663,
	A2O_IDLE_NEUTRAL_MSTAND_FIDGET_1D_ANIMATION = 850055668,
	A2O_IDLE_NEUTRAL_MSTAND_LOOK_1A_ANIMATION = 1669871941,
	A2O_IDLE_NEUTRAL_MSTAND_LOOK_1A_BAIL_ANIMATION = -567069697,
	A2O_IDLE_NEUTRAL_MSTAND_LOOK_1B_ANIMATION = -92182273,
	A2O_IDLE_NEUTRAL_MSTAND_LOOK_1B_BAIL_ANIMATION = 1487356241,
	A2O_IDLE_NEUTRAL_MSTAND_LOOK_1C_ANIMATION = -1920575383,
	A2O_IDLE_NEUTRAL_MSTAND_LOOK_1C_BAIL_ANIMATION = -1812229388,
	A2O_IDLE_NEUTRAL_MSTAND_LOOK_1D_ANIMATION = 333630922,
	A2O_IDLE_NEUTRAL_RCROSSED_BREATHE_1A_ANIMATION = -584586802,
	A2O_IDLE_NEUTRAL_RCROSSED_BREATHE_1A_BAIL_ANIMATION = -1775005042,
	A2O_IDLE_NEUTRAL_RCROSSED_BREATHE_1B_ANIMATION = 1143912564,
	A2O_IDLE_NEUTRAL_RCROSSED_BREATHE_1B_BAIL_ANIMATION = 279437344,
	A2O_IDLE_NEUTRAL_RCROSSED_BREATHE_1C_ANIMATION = 858360034,
	A2O_IDLE_NEUTRAL_RCROSSED_BREATHE_1C_BAIL_ANIMATION = -604294267,
	A2O_IDLE_NEUTRAL_RCROSSED_BREATHE_1D_ANIMATION = -1387455167,
	A2O_IDLE_NEUTRAL_RCROSSED_FIDGET_1A_ANIMATION = -731274122,
	A2O_IDLE_NEUTRAL_RCROSSED_FIDGET_1A_BAIL_ANIMATION = 1950108216,
	A2O_IDLE_NEUTRAL_RCROSSED_FIDGET_1B_ANIMATION = 1298200012,
	A2O_IDLE_NEUTRAL_RCROSSED_FIDGET_1B_BAIL_ANIMATION = -223856490,
	A2O_IDLE_NEUTRAL_RCROSSED_FIDGET_1C_ANIMATION = 979879258,
	A2O_IDLE_NEUTRAL_RCROSSED_FIDGET_1C_BAIL_ANIMATION = 972352307,
	A2O_IDLE_NEUTRAL_RCROSSED_FIDGET_1D_ANIMATION = -1543286535,
	A2O_IDLE_NEUTRAL_RCROSSED_LOOK_1A_ANIMATION = 1089014693,
	A2O_IDLE_NEUTRAL_RCROSSED_LOOK_1A_BAIL_ANIMATION = 1534661244,
	A2O_IDLE_NEUTRAL_RCROSSED_LOOK_1B_ANIMATION = -639608289,
	A2O_IDLE_NEUTRAL_RCROSSED_LOOK_1B_BAIL_ANIMATION = -571645742,
	A2O_IDLE_NEUTRAL_RCROSSED_LOOK_1C_ANIMATION = -1360565623,
	A2O_IDLE_NEUTRAL_RCROSSED_LOOK_1C_BAIL_ANIMATION = 380744567,
	A2O_IDLE_NEUTRAL_RCROSSED_LOOK_1D_ANIMATION = 813956906,
	A2O_IDLE_NEUTRAL_RCROSSED_RHIPS_ANIMATION = -2141137491,
	A2O_IDLE_NEUTRAL_RHIPS_BREATHE_1A_ANIMATION = -1531019736,
	A2O_IDLE_NEUTRAL_RHIPS_BREATHE_1A_BAIL_ANIMATION = 487536684,
	A2O_IDLE_NEUTRAL_RHIPS_BREATHE_1B_ANIMATION = 1035415442,
	A2O_IDLE_NEUTRAL_RHIPS_BREATHE_1B_BAIL_ANIMATION = -1684321662,
	A2O_IDLE_NEUTRAL_RHIPS_BREATHE_1C_ANIMATION = 1253056260,
	A2O_IDLE_NEUTRAL_RHIPS_BREATHE_1C_BAIL_ANIMATION = 1355258151,
	A2O_IDLE_NEUTRAL_RHIPS_BREATHE_1D_ANIMATION = -724268377,
	A2O_IDLE_NEUTRAL_RHIPS_FIDGET_1A_ANIMATION = -1857624449,
	A2O_IDLE_NEUTRAL_RHIPS_FIDGET_1A_BAIL_ANIMATION = -164756894,
	A2O_IDLE_NEUTRAL_RHIPS_FIDGET_1B_ANIMATION = 139442117,
	A2O_IDLE_NEUTRAL_RHIPS_FIDGET_1B_BAIL_ANIMATION = 1891266764,
	A2O_IDLE_NEUTRAL_RHIPS_FIDGET_1C_ANIMATION = 2135459667,
	A2O_IDLE_NEUTRAL_RHIPS_FIDGET_1C_BAIL_ANIMATION = -1142512791,
	A2O_IDLE_NEUTRAL_RHIPS_FIDGET_1D_ANIMATION = -517205264,
	A2O_IDLE_NEUTRAL_RHIPS_LOOK_1A_ANIMATION = 1359372853,
	A2O_IDLE_NEUTRAL_RHIPS_LOOK_1A_BAIL_ANIMATION = 1026963816,
	A2O_IDLE_NEUTRAL_RHIPS_LOOK_1B_ANIMATION = -938527857,
	A2O_IDLE_NEUTRAL_RHIPS_LOOK_1B_BAIL_ANIMATION = -1146991674,
	A2O_IDLE_NEUTRAL_RHIPS_LOOK_1C_ANIMATION = -1089993959,
	A2O_IDLE_NEUTRAL_RHIPS_LOOK_1C_BAIL_ANIMATION = 1895733347,
	A2O_IDLE_NEUTRAL_RHIPS_LOOK_1D_ANIMATION = 560764602,
	A2O_IDLE_NEUTRAL_RIGHT_BREATHE_1_ANIMATION = 605443654,
	A2O_IDLE_NEUTRAL_RIGHT_BREATHE_2_ANIMATION = -1122039812,
	A2O_IDLE_NEUTRAL_RIGHT_BREATHE_3_ANIMATION = -904382614,
	A2O_IDLE_NEUTRAL_RIGHT_BREATHE_4_ANIMATION = 1417454281,
	A2O_IDLE_NEUTRAL_RIGHT_BRTHBAIL_1_ANIMATION = 1318653549,
	A2O_IDLE_NEUTRAL_RIGHT_BRTHBAIL_2_ANIMATION = -678404137,
	A2O_IDLE_NEUTRAL_RIGHT_BRTHBAIL_3_ANIMATION = -1600688319,
	A2O_IDLE_NEUTRAL_RIGHT_CATTWIST_1_ANIMATION = -627937145,
	A2O_IDLE_NEUTRAL_RIGHT_CATTWIST_2_ANIMATION = 1134240061,
	A2O_IDLE_NEUTRAL_RIGHT_CATTWIST_3_ANIMATION = 882643371,
	A2O_IDLE_NEUTRAL_RIGHT_CATTWIST_BAIL_1_ANIMATION = 819942956,
	A2O_IDLE_NEUTRAL_RIGHT_CATTWIST_BAIL_2_ANIMATION = -1445591146,
	A2O_IDLE_NEUTRAL_RIGHT_LEG_PUMP_LEFT_ANIMATION = 128142856,
	A2O_IDLE_NEUTRAL_RIGHT_LOOK_LEFT_1030_ANIMATION = 769822194,
	A2O_IDLE_NEUTRAL_RIGHT_LOOK_RIGHT_0300_ANIMATION = 1476862744,
	A2O_IDLE_NEUTRAL_RIGHT_START_ANIMATION = 618324253,
	A2O_IDLE_NEUTRAL_RIGHT_WRIST_SCRATCH_1_ANIMATION = -2122680796,
	A2O_IDLE_NEUTRAL_RIGHT_WRIST_SCRATCH_2_ANIMATION = 410199966,
	A2O_IDLE_NEUTRAL_RIGHT_WRIST_SCRATCH_BAIL_1_ANIMATION = -594679503,
	A2O_IDLE_NEUTRAL_RSTAND_BREATHE_1A_ANIMATION = 1926469210,
	A2O_IDLE_NEUTRAL_RSTAND_BREATHE_1A_BAIL_ANIMATION = 448518334,
	A2O_IDLE_NEUTRAL_RSTAND_BREATHE_1B_ANIMATION = -337983520,
	A2O_IDLE_NEUTRAL_RSTAND_BREATHE_1B_BAIL_ANIMATION = -1674597872,
	A2O_IDLE_NEUTRAL_RSTAND_BREATHE_1C_ANIMATION = -1663174794,
	A2O_IDLE_NEUTRAL_RSTAND_BREATHE_1C_BAIL_ANIMATION = 1467185589,
	A2O_IDLE_NEUTRAL_RSTAND_BREATHE_1D_ANIMATION = 45703893,
	A2O_IDLE_NEUTRAL_RSTAND_FIDGET_1A_ANIMATION = 705527007,
	A2O_IDLE_NEUTRAL_RSTAND_FIDGET_1A_BAIL_ANIMATION = 789219686,
	A2O_IDLE_NEUTRAL_RSTAND_FIDGET_1B_ANIMATION = -1291571867,
	A2O_IDLE_NEUTRAL_RSTAND_FIDGET_1B_BAIL_ANIMATION = -1449198648,
	A2O_IDLE_NEUTRAL_RSTAND_FIDGET_1C_ANIMATION = -1006428685,
	A2O_IDLE_NEUTRAL_RSTAND_FIDGET_1C_BAIL_ANIMATION = 1656891501,
	A2O_IDLE_NEUTRAL_RSTAND_FIDGET_1D_ANIMATION = 1516734544,
	A2O_IDLE_NEUTRAL_RSTAND_LOOK_1A_ANIMATION = 1403957727,
	A2O_IDLE_NEUTRAL_RSTAND_LOOK_1A_BAIL_ANIMATION = -1896964549,
	A2O_IDLE_NEUTRAL_RSTAND_LOOK_1B_ANIMATION = -894967707,
	A2O_IDLE_NEUTRAL_RSTAND_LOOK_1B_BAIL_ANIMATION = 142273685,
	A2O_IDLE_NEUTRAL_RSTAND_LOOK_1C_ANIMATION = -1113534221,
	A2O_IDLE_NEUTRAL_RSTAND_LOOK_1C_BAIL_ANIMATION = -1020903632,
	A2O_IDLE_NEUTRAL_RSTAND_LOOK_1D_ANIMATION = 600065360,
	A2O_IDLE_NEUTRAL_TRANS_LCROSSED_LHIPS_ANIMATION = -1741639605,
	A2O_IDLE_NEUTRAL_TRANS_LM_ANIMATION = -166605393,
	A2O_IDLE_NEUTRAL_TRANS_LR_ANIMATION = 2065285210,
	A2O_IDLE_NEUTRAL_TRANS_LSTAND_LCROSSED_ANIMATION = 765511472,
	A2O_IDLE_NEUTRAL_TRANS_LSTAND_LHIPS_ANIMATION = 1170352256,
	A2O_IDLE_NEUTRAL_TRANS_MCROSSED_MHIPS_ANIMATION = 945780877,
	A2O_IDLE_NEUTRAL_TRANS_MR_ANIMATION = 1644359963,
	A2O_IDLE_NEUTRAL_TRANS_MSTAND_MCROSSED_ANIMATION = 1492196422,
	A2O_IDLE_NEUTRAL_TRANS_MSTAND_MHIPS_ANIMATION = -486060705,
	A2O_IDLE_NEUTRAL_TRANS_RCROSSED_RHIPS_ANIMATION = -355864508,
	A2O_IDLE_NEUTRAL_TRANS_RSTAND_RCROSSED_ANIMATION = -310353133,
	A2O_IDLE_NEUTRAL_TRANS_RSTAND_RHIPS_ANIMATION = 2134589313,
	A2O_IDLE_NEUTRAL_TRANS_STAND_LSTAND_ANIMATION = -588354066,
	A2O_IDLE_NEUTRAL_TRANS_STAND_MSTAND_ANIMATION = 397590091,
	A2O_IDLE_NEUTRAL_TRANS_STAND_RSTAND_ANIMATION = -449704443,
	A2O_IDLE_SIT_1_ANIMATION = 695605785,
	A2O_IDLE_SIT_2_ANIMATION = -1333834845,
	A2O_IDLE_SIT_3_ANIMATION = -948405451,
	A2O_IDLE_TRANSITION_ARMSCROSSED_ARMSDOWN_ANIMATION = -523913880,
	A2O_IDLE_TRANSITION_ARMSDOWN_HANDSHIPS_ANIMATION = 153647426,
	A2O_IDLE_TRANSITION_HANDSHIPS_ARMSCROSSED_ANIMATION = 2019674067,
	A2O_INSULTEE1_ANIMATION = -379109158,
	A2O_INSULTER1_ANIMATION = -320551860,
	A2O_JOKEE1_LISTEN_ANIMATION = 1231419503,
	A2O_JOKEE1_RESPOND_NEGATIVE_ANIMATION = -1204968836,
	A2O_JOKEE1_RESPOND_POSITIVE_ANIMATION = -581184153,
	A2O_JOKER1_COUNTERRESPONSE_NEGATIVE_ANIMATION = -65653127,
	A2O_JOKER1_COUNTERRESPONSE_POSITIVE_ANIMATION = -1721745054,
	A2O_JOKER1_TELL_ANIMATION = -1943912323,
	A2O_KICK_BALL_HARD_ANIMATION = -377963430,
	A2O_KICK_BALL_LIGHTLY_ANIMATION = 1472201766,
	A2O_KID_TUCKIN_L_ANIMATION = 1059737919,
	A2O_KID_TUCKIN_R_ANIMATION = -987403172,
	A2O_KISSEE1_ANIMATION = -4484261,
	A2O_KISSER1_ANIMATION = -96987187,
	A2O_KISS_DENYEE1_ANIMATION = 1556320479,
	A2O_KISS_DENYER1_ANIMATION = 1497371721,
	A2O_KISS_PASSIONEE1_ANIMATION = -1636817608,
	A2O_KISS_PASSIONER1_ANIMATION = -1678532178,
	A2O_LEFTARM_CARRY_ANIMATION = 1153014226,
	A2O_LETHARGIC_ANIMATION = 1219765783,
	A2O_LETHARGIC2_ANIMATION = -1722904596,
	A2O_LISTEN_INTENSE_LOOP_ANIMATION = 889609476,
	A2O_LISTEN_INTENSE_START_ANIMATION = -463722655,
	A2O_LISTEN_INTENSE_STOP_ANIMATION = 755979868,
	A2O_LISTEN_NORMAL_ANIMATION = 1278591279,
	A2O_LONELY_ANIMATION = 1456286032,
	A2O_LONELY2_ANIMATION = 1911038672,
	A2O_LOVETUBEE_ENJOY_LOOP_ANIMATION = 1963646654,
	A2O_LOVETUBEE_FOLLOWIN_ANIMATION = 1616850189,
	A2O_LOVETUBEE_GETOUT_ANIMATION = 738736169,
	A2O_LOVETUBEE_PLAY_LOOP_ANIMATION = 1582258678,
	A2O_LOVETUBEE_PLAY_REJECT_ANIMATION = -125468653,
	A2O_LOVETUBEE_PLAY_START_ANIMATION = -1216021163,
	A2O_LOVETUBEE_PLAY_STOP_ANIMATION = 1179013806,
	A2O_LOVETUBEE_SWITCHER_ANIMATION = -445594195,
	A2O_LOVETUBER_ENJOY_LOOP_ANIMATION = 227203789,
	A2O_LOVETUBER_GETIN_ANIMATION = -1601560858,
	A2O_LOVETUBER_GETOUT_ANIMATION = 1517682715,
	A2O_LOVETUBER_PLAY_LOOP_ANIMATION = -645756738,
	A2O_LOVETUBER_PLAY_REJECTED_ANIMATION = -296581548,
	A2O_LOVETUBER_PLAY_START_ANIMATION = -821757658,
	A2O_LOVETUBER_PLAY_STOP_ANIMATION = -1047821338,
	A2O_LOVETUBER_SWITCHER_ANIMATION = 537026364,
	A2O_LOVETUB_ALONE_BATHE_LOOP1_ANIMATION = 247163587,
	A2O_LOVETUB_ALONE_BATHE_LOOP2_ANIMATION = -1749927047,
	A2O_LOVETUB_ALONE_BATHE_START_ANIMATION = 1852006481,
	A2O_LOVETUB_ALONE_BATHE_STOP_ANIMATION = 2004978247,
	A2O_LOVETUB_ALONE_LUXURIATE_LOOP1_ANIMATION = 4622413,
	A2O_LOVETUB_ALONE_LUXURIATE_LOOP2_ANIMATION = -1722820105,
	A2O_LOVETUB_ALONE_LUXURIATE_LOOP3_ANIMATION = -297211551,
	A2O_LOVETUB_ALONE_START_ANIMATION = 1973964719,
	A2O_LOVETUB_ALONE_STOP_ANIMATION = -1123348718,
	A2O_MAILBOX_GETBILLS_ANIMATION = 1829133146,
	A2O_MEDCAB_BRUSH_START_COUNTER_ANIMATION = -1182323621,
	A2O_MEDCAB_BRUSH_START_NOCOUNTER_ANIMATION = -220952679,
	A2O_MEDCAB_BRUSH_START_PEDSINK_ANIMATION = 582547766,
	A2O_MEDCAB_BRUSH_STOP_COUNTER_ANIMATION = 948490092,
	A2O_MEDCAB_BRUSH_STOP_NOCOUNTER_ANIMATION = 1540363616,
	A2O_MEDCAB_BRUSH_STOP_PEDSINK_ANIMATION = -1548281343,
	A2O_MEDCAB_COUNTER_BRUSH_LOOP1_ANIMATION = -1144989827,
	A2O_MEDCAB_COUNTER_BRUSH_LOOP2_ANIMATION = 583632583,
	A2O_MEDCAB_NOCOUNTER_BRUSH_LOOP1_ANIMATION = 70163757,
	A2O_MEDCAB_NOCOUNTER_BRUSH_LOOP2_ANIMATION = -1658336105,
	A2O_MICRO_CHECKFOOD_LOOP_ANIMATION = -2018638695,
	A2O_MICRO_START_ANIMATION = 1417858787,
	A2O_MICRO_STOP_ANIMATION = 595523110,
	A2O_MICRO_WATCHFOOD_LOOP_ANIMATION = 61843350,
	A2O_MOVEOUT_HOBOSTICK_CARRY_ANIMATION = -1598700446,
	A2O_MOVEOUT_START_ANIMATION = 1110825990,
	A2O_NPCFIREFIGHTER_EXTINGUISH_LOOP1_ANIMATION = 277073142,
	A2O_NPCFIREFIGHTER_EXTINGUISH_LOOP2_ANIMATION = -1987404468,
	A2O_NPCFIREFIGHTER_EXTINGUISH_START_ANIMATION = 1885062756,
	A2O_NPCFIREFIGHTER_EXTINGUISH_STOP_ANIMATION = 1322637269,
	A2O_NPCMAIL_PUTBILLS_ANIMATION = 372782540,
	A2O_PANIC_LOOP1_ANIMATION = 1439804695,
	A2O_PANIC_LOOP2_ANIMATION = -858194771,
	A2O_PANIC_START_ANIMATION = 889825157,
	A2O_PANIC_STOP_ANIMATION = -1008188424,
	A2O_PAPERREAD_LOOP1_ANIMATION = 2005655996,
	A2O_PAPERREAD_LOOP2_ANIMATION = -293425146,
	A2O_PAPERREAD_START_ANIMATION = 391375662,
	A2O_PAPERREAD_STOP_ANIMATION = -1682812594,
	A2O_PAPER_READ_SIT_LOOP1_ANIMATION = -1844431060,
	A2O_PAPER_READ_SIT_LOOP2_ANIMATION = 186214038,
	A2O_PAPER_READ_SIT_START_ANIMATION = -221758018,
	A2O_PAPER_READ_SIT_STOP_ANIMATION = -707081085,
	A2O_PHONE1_DIALPHONE_ANIMATION = 276489594,
	A2O_PHONE1_EARSPLIT_ANIMATION = -1686923194,
	A2O_PHONE1_GETHANDSET_ANIMATION = 1206278224,
	A2O_PHONE1_TALKANGRY_ANIMATION = -1761387390,
	A2O_PHONE1_TALKEXCITED_ANIMATION = -1920041797,
	A2O_PHONE1_TALKHAPPY_ANIMATION = -382731822,
	A2O_PHONE1_TALKNEUTRAL_ANIMATION = 321447392,
	A2O_PHONE1_TALKSHY_ANIMATION = -394711966,
	A2O_PHONEWALLCLOSE_ANSWER_ANIMATION = -354276375,
	A2O_PHONEWALLCLOSE_EARSPLIT_ANIMATION = 314903288,
	A2O_PHONEWALLCLOSE_HANGUP_ANIMATION = 1428468415,
	A2O_PHONEWALLCLOSE_PHONE1_ANIMATION = 1890275149,
	A2O_PHONEWALLCLOSE_PHONE2_ANIMATION = -375251209,
	A2O_PHONEWALLCLOSE_START_ANIMATION = 367489088,
	A2O_PHONEWALLCLOSE_TALKANGRY_ANIMATION = -1152158565,
	A2O_PHONEWALLCLOSE_TALKEXCITED_ANIMATION = 591089929,
	A2O_PHONEWALLCLOSE_TALKHAPPY_ANIMATION = -981478965,
	A2O_PHONEWALLCLOSE_TALKNEUTRAL_ANIMATION = -1113733038,
	A2O_PHONEWALLCLOSE_TALKSHY_ANIMATION = -1916767493,
	A2O_PHONEWALL_ANSWER_ANIMATION = -1008662574,
	A2O_PHONEWALL_HANGUP_ANIMATION = 2082971268,
	A2O_PHONEWALL_START_ANIMATION = -821898439,
	A2O_PHONE_IDLE_LOOP1_ANIMATION = -1167377559,
	A2O_PHONE_IDLE_LOOP2_ANIMATION = 593652435,
	A2O_PIANO_CLEAN_ANIMATION = 1523299083,
	A2O_PIANO_GETUP_LEFT_ANIMATION = 192584319,
	A2O_PIANO_GETUP_RIGHT_ANIMATION = 201772390,
	A2O_PIANO_PLAY_LOOP1_ANIMATION = 2032449073,
	A2O_PIANO_PLAY_LOOP2_ANIMATION = -533862517,
	A2O_PIANO_PLAY_LOOP3_ANIMATION = -1758800099,
	A2O_PIANO_PLAY_START_ANIMATION = 435993763,
	A2O_PIANO_PLAY_STOP_ANIMATION = -278008250,
	A2O_PIANO_SIT_LEFT_ANIMATION = 535743605,
	A2O_PIANO_SIT_RIGHT_ANIMATION = -322457554,
	A2O_PINBALL_PLAYLOOP1_ANIMATION = -2110447763,
	A2O_PINBALL_PLAYLOOP2_ANIMATION = 456937175,
	A2O_PINBALL_PLAYLOOP3_ANIMATION = 1815838273,
	A2O_PINBALL_PLAY_START_ANIMATION = 2046523793,
	A2O_PINBALL_PLAY_STOP_ANIMATION = 1478887897,
	A2O_PINBALL_REPAIR_LOOP1_ANIMATION = -1614206283,
	A2O_PINBALL_REPAIR_LOOP2A_ANIMATION = 1130382177,
	A2O_PINBALL_REPAIR_START_ANIMATION = -15654873,
	A2O_PINBALL_REPAIR_STOP_ANIMATION = 1638755081,
	A2O_PIZZA_EAT_GET_ANIMATION = 1204053790,
	A2O_PIZZA_EAT_LOOP1_ANIMATION = -1523229035,
	A2O_PIZZA_EAT_LOOP2_ANIMATION = 1010569007,
	A2O_PIZZA_EAT_OPENBOX_ANIMATION = -1127973955,
	A2O_PIZZA_EAT_START_ANIMATION = -974302201,
	A2O_PIZZA_EAT_STOP_ANIMATION = 680035688,
	A2O_PLANTFLOORRUB_WATER_ANIMATION = 1530061325,
	A2O_POOLTABLE_IDLE_ANIMATION = 972687322,
	A2O_POOLTABLE_IDLE_START_ANIMATION = 569487398,
	A2O_POOLTABLE_RACK_ANIMATION = -670489497,
	A2O_POOLTABLE_SHOOT_ANIMATION = 1075109349,
	A2O_POOLTABLE_SWITCHHAND_ANIMATION = -1890416704,
	A2O_POOL_DIVE_DIVEIN_ANIMATION = -1361817560,
	A2O_POOL_DIVE_JUMPIN_ANIMATION = -1405355298,
	A2O_POOL_DIVE_SIDEIN_DIVE_ANIMATION = 2018002364,
	A2O_POOL_DIVE_SIDEIN_JUMP_ANIMATION = 1228949482,
	A2O_POOL_DIVE_WAITLOOP_ANIMATION = 866299293,
	A2O_POOL_DIVE_WALKON_ANIMATION = 2022069931,
	A2O_POOL_STANDING_LOOP_ANIMATION = -344320881,
	A2O_POOL_SWIM_ADJUST_E_ANIMATION = 1562964723,
	A2O_POOL_SWIM_ADJUST_N_ANIMATION = -889574533,
	A2O_POOL_SWIM_ADJUST_NE_ANIMATION = 329844749,
	A2O_POOL_SWIM_ADJUST_NW_ANIMATION = -535791291,
	A2O_POOL_SWIM_ADJUST_S_ANIMATION = -1443084382,
	A2O_POOL_SWIM_ADJUST_SE_ANIMATION = -322608111,
	A2O_POOL_SWIM_ADJUST_SW_ANIMATION = 528225625,
	A2O_POOL_SWIM_ADJUST_W_ANIMATION = -1366195269,
	A2O_POOL_SWIM_GETOUT_ANIMATION = 1326305531,
	A2O_POOL_SWIM_IDLE1_ANIMATION = 2025963478,
	A2O_POOL_SWIM_IDLE2_ANIMATION = -506925460,
	A2O_POOL_SWIM_IDLE3_ANIMATION = -1764761862,
	A2O_POOL_SWIM_LOOP_ANIMATION = -1268274012,
	A2O_POOL_SWIM_START_ANIMATION = 839640440,
	A2O_POOL_SWIM_TURN_0_ANIMATION = 1043746668,
	A2O_POOL_SWIM_TURN_180_CCW_ANIMATION = -814478093,
	A2O_POOL_SWIM_TURN_180_CW_ANIMATION = -618017222,
	A2O_POOL_SWIM_TURN_45_CCW_ANIMATION = 84747897,
	A2O_POOL_SWIM_TURN_45_CW_ANIMATION = 415354571,
	A2O_POOL_SWIM_TURN_90_CCW_ANIMATION = 1903409879,
	A2O_POOL_SWIM_TURN_90_CW_ANIMATION = -678430136,
	A2O_PUNCH_CUP_GONE_ANIMATION = 1428436977,
	A2O_PUNCH_RARMCARRY_ANIMATION = -1787743157,
	A2O_PUNCH_SIP_ANIMATION = -1216780860,
	A2O_RARMCARRY_POOLCUE_ANIMATION = -1187653323,
	A2O_RARM_CARRY_ANIMATION = -1318118193,
	A2O_RARM_CARRY_LOOP_ANIMATION = 87032968,
	A2O_REACH_FLOORHT_ANIMATION = -1119803461,
	A2O_REACH_LFBURNER_ANIMATION = -12356433,
	A2O_REACH_SEATHT_ANIMATION = -113984531,
	A2O_REACH_TABLEHT_ANIMATION = 47343400,
	A2O_REACH_TABLEHT_AROUNDCHAIRL_ANIMATION = -578310539,
	A2O_REACH_TABLEHT_AROUNDCHAIRR_ANIMATION = 663261974,
	A2O_REACH_TABLEHT_PAST_CHAIR_START_ANIMATION = 2097782089,
	A2O_REACH_TABLEHT_PAST_CHAIR_STOP_ANIMATION = 1910817887,
	A2O_REAPER_RITUAL_LOOP1_ANIMATION = 625687924,
	A2O_REAPER_RITUAL_LOOP2_ANIMATION = -1136497458,
	A2O_REAPER_RITUAL_LOOP3_ANIMATION = -884646824,
	A2O_REAPER_RITUAL_START_ANIMATION = 1167276006,
	A2O_REAPER_RITUAL_STOP_ANIMATION = 864858109,
	A2O_REAPER_SCYTHE_RARMCARRY_ANIMATION = 1774017253,
	A2O_RECLINER_NAP_LOOP_ANIMATION = -2034497631,
	A2O_RECLINER_NAP_START_ANIMATION = 1112787548,
	A2O_RECLINER_NAP_STOP_ANIMATION = -1632301831,
	A2O_REFUSE_STRONG_ANIMATION = 247178273,
	A2O_REFUSE_SUBTLE_ANIMATION = -1349937871,
	A2O_REPEAR_RESURRECT_ANIMATION = -1123319400,
	A2O_REPOSSESS_ANIMATION = -914475511,
	A2O_ROACH_FREAK_LOOP1_ANIMATION = 673615049,
	A2O_ROACH_FREAK_LOOP2_ANIMATION = -1322263181,
	A2O_ROACH_FREAK_LOOP3_ANIMATION = -970396187,
	A2O_ROACH_FREAK_START_ANIMATION = 1224640091,
	A2O_ROACH_FREAK_STOP_ANIMATION = 861351031,
	A2O_ROACH_SPRAY_END_ANIMATION = 2015656043,
	A2O_ROACH_SPRAY_LOOP1_ANIMATION = -879585758,
	A2O_ROACH_SPRAY_LOOP2_ANIMATION = 1385940888,
	A2O_ROACH_SPRAY_START_ANIMATION = -1421173584,
	A2O_ROACH_STOMP_LOOP1_ANIMATION = 1572979682,
	A2O_ROACH_STOMP_LOOP2_ANIMATION = -993488296,
	A2O_ROACH_STOMP_START_ANIMATION = 1025100144,
	A2O_ROACH_STOMP_STOP_ANIMATION = -1095001163,
	A2O_ROBOT_ACTIVATE_ANIMATION = 1755112470,
	A2O_ROBOT_CONTROL_LOOP1_ANIMATION = -1574938772,
	A2O_ROBOT_CONTROL_LOOP2_ANIMATION = 992544470,
	A2O_ROBOT_CONTROL_LOOP3_ANIMATION = 1278096960,
	A2O_ROBOT_CONTROL_START_ANIMATION = -1023910402,
	A2O_ROBOT_CONTROL_STOP_ANIMATION = 1346725228,
	A2O_ROBOT_DOCK_ENTER_ANIMATION = -478217550,
	A2O_ROBOT_DOCK_EXIT_ANIMATION = -1611906096,
	A2O_ROBOT_GETFOOD_ANIMATION = 857013717,
	A2O_ROBOT_STAND_LOOP_ANIMATION = -178330478,
	A2O_ROUTE_FAILURE_NOPOINT_ANIMATION = -1701193018,
	A2O_ROUTE_FAILURE_SEATED_NOPOINT_ANIMATION = -1073495944,
	A2O_ROUTING_FAILURE_ANIMATION = 1769970950,
	A2O_ROUTING_FAILURE_SEATED_ANIMATION = 434017165,
	A2O_RUNNING_ADJUST_E_ANIMATION = -1689002680,
	A2O_RUNNING_ADJUST_N_ANIMATION = 209781952,
	A2O_RUNNING_ADJUST_NE_ANIMATION = 1339824422,
	A2O_RUNNING_ADJUST_NW_ANIMATION = -1134204818,
	A2O_RUNNING_ADJUST_S_ANIMATION = 1871144985,
	A2O_RUNNING_ADJUST_SE_ANIMATION = -1330612934,
	A2O_RUNNING_ADJUST_SW_ANIMATION = 1124664434,
	A2O_RUNNING_ADJUST_W_ANIMATION = 1760209920,
	A2O_RUNNING_LOOP_ANIMATION = 1118264612,
	A2O_RUNNING_START_ANIMATION = -549083479,
	A2O_RUNNING_STOP_ANIMATION = 1521374844,
	A2O_RUNNING_TURN_0_ANIMATION = -821042323,
	A2O_RUNNING_TURN_180_CCW_ANIMATION = -1998978291,
	A2O_RUNNING_TURN_180_CW_ANIMATION = -941010988,
	A2O_RUNNING_TURN_45_CCW_ANIMATION = 432908183,
	A2O_RUNNING_TURN_45_CW_ANIMATION = -1272888678,
	A2O_RUNNING_TURN_90_CCW_ANIMATION = 1840462649,
	A2O_RUNNING_TURN_90_CW_ANIMATION = 2070902297,
	A2O_SALUTE_ANIMATION = 994609298,
	A2O_SANDBX_BUILD_LOOP1_ANIMATION = 281414798,
	A2O_SANDBX_BUILD_LOOP2_ANIMATION = -1982898892,
	A2O_SANDBX_BUILD_LOOP3_ANIMATION = -20419166,
	A2O_SANDBX_BUILD_START_ANIMATION = 1881015836,
	A2O_SANDBX_BUILD_STOP_ANIMATION = 185970645,
	A2O_SANDBX_DESTROY_ANIMATION = 547184270,
	A2O_SATED_ANIMATION = 1820515006,
	A2O_SATED2_ANIMATION = 912302684,
	A2O_SATEDSTART_ANIMATION = -1513450510,
	A2O_SELL_PAINTING_ANIMATION = -1504958086,
	A2O_SHAKEHEAD_ANIMATION = -1935170209,
	A2O_SHOVEE1_ANIMATION = -233301786,
	A2O_SHOVER1_ANIMATION = -140796816,
	A2O_SHOWER1_CLEAN_ANIMATION = -1509938053,
	A2O_SHOWER1_GETIN_ANIMATION = -71989634,
	A2O_SHOWER1_GETOUT_ANIMATION = -1527175947,
	A2O_SHOWER1_SCRUB1LOOP_ANIMATION = 443325943,
	A2O_SHOWER_REPAIR_LOOP1_ANIMATION = -1425625150,
	A2O_SHOWER_REPAIR_LOOP2_ANIMATION = 839908984,
	A2O_SHOWER_REPAIR_START_ANIMATION = -874601136,
	A2O_SHOWER_REPAIR_STOP_ANIMATION = -1057890208,
	A2O_SHRUG_ANIMATION = -959665555,
	A2O_SINK_BATHX_CLEAN_ANIMATION = 443582818,
	A2O_SINK_CHEAP_CLEAN_ANIMATION = -1326416362,
	A2O_SINK_REPAIR_LOOP1_ANIMATION = 759396145,
	A2O_SINK_REPAIR_LOOP2_ANIMATION = -1270208885,
	A2O_SINK_REPAIR_START_ANIMATION = 1302035875,
	A2O_SINK_REPAIR_STOP_ANIMATION = 1459341232,
	A2O_SINK_TURNON_LEFTHAND_ANIMATION = -666925145,
	A2O_SINK_WASHDISHES_LOOP_ANIMATION = -2055029177,
	A2O_SINK_WASHDISHES_START_ANIMATION = 188330920,
	A2O_SINK_WASHDISHES_STOP_ANIMATION = -1651788513,
	A2O_SINK_WASHHANDS_ANIMATION = -172800556,
	A2O_SITTING_FLOOR_LOOP_ANIMATION = -527553978,
	A2O_SITTING_LOOP_ANIMATION = 1955372681,
	A2O_SIT_BEHIND_ANIMATION = 190416883,
	A2O_SIT_BEHIND_COMFY_ANIMATION = 1987626703,
	A2O_SIT_FLOOR_ANIMATION = 1118742187,
	A2O_SIT_FRONT_ANIMATION = 34607731,
	A2O_SIT_FRONT_COMFY_ANIMATION = -1729931697,
	A2O_SIT_LEFT_ANIMATION = 681516563,
	A2O_SIT_LEFT_COMFY_ANIMATION = -720907953,
	A2O_SIT_LOOP_ANIMATION = -207100779,
	A2O_SIT_REACH_TABLE_ANIMATION = 1739230263,
	A2O_SIT_RELAXED_LOOP1_ANIMATION = -1367351600,
	A2O_SIT_RELAXED_LOOP2_ANIMATION = 930516842,
	A2O_SIT_RELAXED_LOOP3_ANIMATION = 1081196540,
	A2O_SIT_RELAXED_SITBACK_ANIMATION = 1708022911,
	A2O_SIT_RELAXED_SITUP_ANIMATION = 1041590341,
	A2O_SIT_RELAXED_SOFA_LOOP1_ANIMATION = 304065098,
	A2O_SIT_RELAXED_SOFA_LOOP2_ANIMATION = -1961427984,
	A2O_SIT_RELAXED_SOFA_LOOP3_ANIMATION = -65942682,
	A2O_SIT_RELAXED_SOFA_SITBACK_ANIMATION = -1190643798,
	A2O_SIT_RELAXED_SOFA_SITUP_ANIMATION = -2106254113,
	A2O_SIT_RIGHT_ANIMATION = 1210123665,
	A2O_SIT_RIGHT_COMFY_ANIMATION = 607465606,
	A2O_SIT_SCOOT_ANIMATION = 1538132794,
	A2O_SIT_SCOOT_CUTFOOD_ANIMATION = -1272893444,
	A2O_SIT_SCOOT_CUTFOOD_START_ANIMATION = 420316291,
	A2O_SIT_SCOOT_CUTFOOD_STOP_ANIMATION = 508939846,
	A2O_SIT_SCOOT_LOOP_ANIMATION = 2094420882,
	A2O_SIT_SCOOT_SHOVELFOOD_LIFT_ANIMATION = 955181751,
	A2O_SIT_SCOOT_SHOVELFOOD_RETURN2LOOP_ANIMATION = 692915532,
	A2O_SIT_SCOOT_STABFOOD_LIFT_ANIMATION = 1471193760,
	A2O_SIT_SCOOT_STABFOOD_RETURN_ANIMATION = -921627670,
	A2O_SIT_SLEEP_LOOP_ANIMATION = 223256019,
	A2O_SIT_SLEEP_START_ANIMATION = -53270314,
	A2O_SIT_SLEEP_STOP_ANIMATION = 357013131,
	A2O_SIT_STARTEAT_ANIMATION = -149824854,
	A2O_SLEEPY1_ANIMATION = -1659926810,
	A2O_SLEEPY2_ANIMATION = 67557212,
	A2O_SMELLY_ANIMATION = 106788592,
	A2O_SMELLY2_ANIMATION = -1485958809,
	A2O_SOFA_DUST_ANIMATION = -71482638,
	A2O_SOFA_LIEDOWNX2_ANIMATION = 618250789,
	A2O_SOFA_LIEDOWNX3_ANIMATION = 1407120051,
	A2O_SOFA_NAPX2_ANIMATION = 1923463491,
	A2O_SOFA_NAPX3_ANIMATION = 94538197,
	A2O_SOFA_SITUPX2_ANIMATION = 879161176,
	A2O_SOFA_SITUPX3_ANIMATION = 1130487758,
	A2O_SONICSHOWER_CLEAN_LOOP_ANIMATION = -1170960890,
	A2O_SONICSHOWER_CLEAN_START_ANIMATION = 182285470,
	A2O_SONICSHOWER_CLEAN_STOP_ANIMATION = -1573026466,
	A2O_SONICSHOWER_FLOATDOWN_ANIMATION = 1596399784,
	A2O_SONICSHOWER_FLOATUP_ANIMATION = 293896811,
	A2O_SONICSHOWER_GETIN_ANIMATION = -331061071,
	A2O_SONICSHOWER_GETIN_APPREHENSIVE_ANIMATION = -356961614,
	A2O_SONICSHOWER_GETOUT_ANIMATION = -1355478470,
	A2O_SONICSHOWER_GETOUT_DIZZY_ANIMATION = -834851853,
	A2O_SONICSHOWER_SPIN_CRAZY_ANIMATION = -282975354,
	A2O_SONICSHOWER_SPIN_NORMAL_ANIMATION = 1416393520,
	A2O_SPRINKLER_ON_OFF_ANIMATION = 2079714761,
	A2O_STAND_ANIMATION = -228801213,
	A2O_STANDING_ADJUST_E_ANIMATION = -1923306627,
	A2O_STANDING_ADJUST_N_ANIMATION = 445543157,
	A2O_STANDING_ADJUST_NE_ANIMATION = 427414131,
	A2O_STANDING_ADJUST_NW_ANIMATION = -356474053,
	A2O_STANDING_ADJUST_S_ANIMATION = 2038963756,
	A2O_STANDING_ADJUST_SE_ANIMATION = -434782609,
	A2O_STANDING_ADJUST_SW_ANIMATION = 363646759,
	A2O_STANDING_ADJUST_W_ANIMATION = 2128992821,
	A2O_STANDING_LOOP_ANIMATION = 702282640,
	A2O_STANDING_TURN_0_ANIMATION = 1880352112,
	A2O_STANDING_TURN_180_CCW_ANIMATION = 1814017762,
	A2O_STANDING_TURN_180_CW_ANIMATION = 211004248,
	A2O_STANDING_TURN_45_CCW_ANIMATION = -759741669,
	A2O_STANDING_TURN_45_CW_ANIMATION = -1351204310,
	A2O_STANDING_TURN_90_CCW_ANIMATION = -1496719435,
	A2O_STANDING_TURN_90_CW_ANIMATION = 1614313129,
	A2O_STANDUP_FROMFLOOR_ANIMATION = 1471869677,
	A2O_STAND_BEHIND_ANIMATION = 1100482532,
	A2O_STAND_BEHIND_COMFY_ANIMATION = 1790035211,
	A2O_STAND_FRONT_ANIMATION = 473252887,
	A2O_STAND_FRONT_COMFY_ANIMATION = 1031925790,
	A2O_STAND_LEFT_ANIMATION = 205197953,
	A2O_STAND_LEFT_COMFY_ANIMATION = -1122702488,
	A2O_STAND_RIGHT_ANIMATION = 1443124213,
	A2O_STAND_RIGHT_COMFY_ANIMATION = -2124966185,
	A2O_STAND_SLEEP_LOOP_ANIMATION = 1700636660,
	A2O_STAND_SLEEP_START_ANIMATION = 1504808583,
	A2O_STAND_SLEEP_STOP_ANIMATION = 2102701228,
	A2O_STARTEAT_STAND_ANIMATION = 42094764,
	A2O_STARVE_ANIMATION = 1448819898,
	A2O_STEREOX_SWITCHSTATION_ANIMATION = 644577790,
	A2O_STEREO_BOOMBOX_TURNON_ANIMATION = 982117517,
	A2O_STEREO_EXPENSIVE_TURNON_ANIMATION = 2048954270,
	A2O_STEREO_REPAIR_ANIMATION = 1701018694,
	A2O_STEREO_SWITCHSTATION_ANIMATION = 2029075591,
	A2O_STEREO_TURNON_ANIMATION = 819231910,
	A2O_STOPEAT_ANIMATION = -86780663,
	A2O_STOPEAT_STAND_ANIMATION = -209881334,
	A2O_STOVE_CLEAN_ANIMATION = -761958128,
	A2O_STOVE_COOK_ANIMATION = -1881005437,
	A2O_STOVE_TURNON_ANIMATION = -223750011,
	A2O_STRESS_ANIMATION = -2076364758,
	A2O_SWING_FAST_L_LOOP_ANIMATION = -1771674391,
	A2O_SWING_FAST_L_START_ANIMATION = 977590685,
	A2O_SWING_FAST_R_LOOP_ANIMATION = -1346763006,
	A2O_SWING_FAST_R_START_ANIMATION = 228933134,
	A2O_SWING_LFALL_ANIMATION = -1019394010,
	A2O_SWING_RFALL_ANIMATION = 485319109,
	A2O_SWING_SIT_L_ANIMATION = 49051690,
	A2O_SWING_SIT_L_IDLE1_ANIMATION = 1483179709,
	A2O_SWING_SIT_L_IDLE2_ANIMATION = -1049700601,
	A2O_SWING_SIT_R_ANIMATION = -119323319,
	A2O_SWING_SIT_R_IDLE1_ANIMATION = 1871077678,
	A2O_SWING_SIT_R_IDLE2_ANIMATION = -158388076,
	A2O_SWING_SLOW_L_LOOP_ANIMATION = 2017603926,
	A2O_SWING_SLOW_L_LOOP2_ANIMATION = -1734014723,
	A2O_SWING_SLOW_R_LOOP_ANIMATION = 1100894909,
	A2O_SWING_SLOW_R_LOOP2_ANIMATION = -1354436754,
	A2O_SWING_STAND_L_ANIMATION = -1009057312,
	A2O_SWING_STAND_R_ANIMATION = 970210435,
	A2O_TABLELAMP_CLEAN_ANIMATION = -1653816570,
	A2O_TABLELAMP_TURNON_ANIMATION = 103978086,
	A2O_TABLEPLANT_WATER_ANIMATION = 2010514588,
	A2O_TALKTOHAND_ANIMATION = -4324274,
	A2O_TALKTOHANDSTART_ANIMATION = 1550370856,
	A2O_TALK_ANGRY_ANIMATION = -1898031098,
	A2O_TALK_INTENSE_LOOP_ANIMATION = 269296856,
	A2O_TALK_INTENSE_START_ANIMATION = 1797042919,
	A2O_TALK_INTENSE_STOP_ANIMATION = 134492032,
	A2O_TALK_NORMAL_ANIMATION = 2048252295,
	A2O_TANTRUM_ANIMATION = -1916728280,
	A2O_TELESCOPE_ABDUCTION_ANIMATION = -532246146,
	A2O_TELESCOPE_LOOK_LOOP1_ANIMATION = -1894441825,
	A2O_TELESCOPE_LOOK_LOOP2_ANIMATION = 370953509,
	A2O_TELESCOPE_LOOK_LOOP3_ANIMATION = 1629191603,
	A2O_TELESCOPE_LOOK_START_ANIMATION = -271772147,
	A2O_TELESCOPE_LOOK_STOP_ANIMATION = 1742805907,
	A2O_TEPCHEF_FIN_ANIMATION = -139903033,
	A2O_TEPCHEF_FLAME_ANIMATION = 216513210,
	A2O_TEPCHEF_GETFOOD_ANIMATION = -2114349918,
	A2O_TEPCHEF_IDLE_ANIMATION = -1278327495,
	A2O_TEPCHEF_PREP1_ANIMATION = -57898543,
	A2O_TEPCHEF_PREP2_ANIMATION = 1703270507,
	A2O_TEPCHEF_PREP3_ANIMATION = 310569213,
	A2O_TEPCHEF_START_ANIMATION = -1767836844,
	A2O_TEPCHEF_TOSSBACK_ANIMATION = 1604415001,
	A2O_TEPCHEF_TOSSFLICK_ANIMATION = -1784934408,
	A2O_TEPCHEF_TOSSFRNT_ANIMATION = -167405601,
	A2O_TEPSIT_BURNT_ANIMATION = -196680359,
	A2O_TEPSIT_LAUGH_ANIMATION = 1417767539,
	A2O_TEST_ANIMATION_ANIMATION = -544303137,
	A2O_TEST_ANIMATION2_ANIMATION = 208076767,
	A2O_TEST_ANIMATION3_ANIMATION = 2070007625,
	A2O_TEST_ANIMATION4_ANIMATION = -452633878,
	A2O_TEST_ANIMATION5_ANIMATION = -1845335428,
	A2O_TEST_ANIMATION6_ANIMATION = 185285574,
	A2O_TOASTEROVEN_FOODCHECK_ANIMATION = -2078494141,
	A2O_TOASTEROVEN_GETFOOD_ANIMATION = 2055623152,
	A2O_TOASTEROVEN_PUTFOOD_ANIMATION = -618008277,
	A2O_TOASTEROVEN_WAITLOOP_ANIMATION = -663520114,
	A2O_TOILET1_CLEAN_ANIMATION = 1585412727,
	A2O_TOILET1_CLEANSTART_ANIMATION = 1556657327,
	A2O_TOILET1_CLEANSTOP_ANIMATION = 70883179,
	A2O_TOILET1_FLUSH_ANIMATION = 456033169,
	A2O_TOILET1_LOWERSEAT_ANIMATION = 533056251,
	A2O_TOILET1_RAISESEAT_ANIMATION = 1591938221,
	A2O_TOILET1_SITTINGGO_ANIMATION = 961091242,
	A2O_TOILET1_STANDINGGO1LOOP_ANIMATION = -674640823,
	A2O_TOILET1_STANDINGGOSTART_ANIMATION = 1393103387,
	A2O_TOILET1_UNCLOG_ANIMATION = 1868754803,
	A2O_TOILET1_UNCLOGSTART_ANIMATION = -243977112,
	A2O_TOILET1_UNCLOG_STOP_ANIMATION = 1270753358,
	A2O_TRAINSETLARGE_PLAYLOOP1_ANIMATION = 1656522776,
	A2O_TRAINSETLARGE_PLAYLOOP2_ANIMATION = -71968350,
	A2O_TRAINSETLARGE_PLAY_START_ANIMATION = 1500804533,
	A2O_TRAINSETLARGE_PLAY_STOP_ANIMATION = -1196450132,
	A2O_TRANSFER_R2L_ANIMATION = -962321582,
	A2O_TRASHBAG_CARRY_ANIMATION = -1781044209,
	A2O_TRASHCANOUT_PUT_ANIMATION = -1716918643,
	A2O_TRASHCAN_EMPTY_ANIMATION = -2021915537,
	A2O_TRASHCAN_TRASH_THROWAWAY_ANIMATION = 2066391200,
	A2O_TRASHCOMPACTOR_EMPTY_ANIMATION = 150329091,
	A2O_TRASHCOMPACTOR_TRASH_THROWAWAY_ANIMATION = -1353630392,
	A2O_TREAD_CLEAN_LOOP1_ANIMATION = -1948291699,
	A2O_TREAD_CLEAN_LOOP2_ANIMATION = 316030007,
	A2O_TREAD_CLEAN_LOOP3_ANIMATION = 1708199073,
	A2O_TREAD_CLEAN_START_ANIMATION = -351836385,
	A2O_TREAD_CLEAN_STOP_ANIMATION = 1991646229,
	A2O_TREAD_FALL_CRASH_ANIMATION = 630727333,
	A2O_TREAD_FALL_LOOP_ANIMATION = -1282594403,
	A2O_TREAD_FALL_START_ANIMATION = 1829341173,
	A2O_TREAD_FEMALE_WALK_ANIMATION = 1715667614,
	A2O_TREAD_JOG_ANIMATION = -1408131169,
	A2O_TREAD_MALE_WALK_ANIMATION = 974750003,
	A2O_TREAD_RUN_ANIMATION = 2010459944,
	A2O_TREAD_START_ANIMATION = -581020406,
	A2O_TREAD_STOP_ANIMATION = 751763391,
	A2O_TREE1_EAT1LOOP_ANIMATION = -383117722,
	A2O_TREE1_HANGOUT1LOOP_ANIMATION = -1972775963,
	A2O_TREE1_HANGOUT2LOOP_ANIMATION = -842421963,
	A2O_TREE1_HANGOUT3LOOP_ANIMATION = -257326971,
	A2O_TREE1_WHIZZ_ANIMATION = 695802924,
	A2O_TREE1_WHIZZSTART_ANIMATION = 1773498665,
	A2O_TUB1_CLEAN_ANIMATION = 319905276,
	A2O_TUB1_DRAIN_ANIMATION = -567835756,
	A2O_TUB1_GETINL_ANIMATION = 1766263929,
	A2O_TUB1_GETINR_ANIMATION = -1823985382,
	A2O_TUB1_GETOUTL_ANIMATION = 870049718,
	A2O_TUB1_GETOUTR_ANIMATION = -908797227,
	A2O_TUB1_LATHER1LOOP_ANIMATION = 1319645041,
	A2O_TUB1_LIEBACK_ANIMATION = 1765543745,
	A2O_TUB1_LUXURIATE_ANIMATION = -1765714192,
	A2O_TUB1_SCRUB1LOOP_ANIMATION = 1316988214,
	A2O_TUB1_SCRUB2LOOP_ANIMATION = 165666790,
	A2O_TUB1_SCRUB3LOOP_ANIMATION = 884995670,
	A2O_TUB1_TURNOFFL_ANIMATION = 727934892,
	A2O_TUB1_TURNOFFR_ANIMATION = -781428017,
	A2O_TUB1_TURNONL_ANIMATION = -262459962,
	A2O_TUB1_TURNONR_ANIMATION = 173281445,
	A2O_TUBM_CLEAN_ANIMATION = 953804707,
	A2O_TUBM_DRAIN_ANIMATION = -168871477,
	A2O_TUBM_GETINL_ANIMATION = -1833400154,
	A2O_TUBM_GETINR_ANIMATION = 1756870085,
	A2O_TUBM_GETOUTL_ANIMATION = 625792887,
	A2O_TUBM_GETOUTR_ANIMATION = -549197292,
	A2O_TUBM_LATHER1LOOP_ANIMATION = 1860626958,
	A2O_TUBM_LIEBACK_ANIMATION = 2141929344,
	A2O_TUBM_LUXURIATE_ANIMATION = 1660524228,
	A2O_TUBM_SCRUB1LOOP_ANIMATION = 1866426691,
	A2O_TUBM_SCRUB2LOOP_ANIMATION = 681513875,
	A2O_TUBM_SCRUB3LOOP_ANIMATION = 369048099,
	A2O_TUBM_TURNOFFL_ANIMATION = -954858822,
	A2O_TUBM_TURNOFFR_ANIMATION = 1025064921,
	A2O_TUBM_TURNONL_ANIMATION = -422830841,
	A2O_TUBM_TURNONR_ANIMATION = 482549860,
	A2O_TUBX_CLEAN_ANIMATION = 222254282,
	A2O_TUBX_DRAIN_ANIMATION = -1073116510,
	A2O_TUBX_GETINL_ANIMATION = -1495025687,
	A2O_TUBX_GETINR_ANIMATION = 1559005834,
	A2O_TUBX_GETOUTL_ANIMATION = -1021587383,
	A2O_TUBX_GETOUTR_ANIMATION = 957672746,
	A2O_TUBX_LATHER1LOOPL_ANIMATION = -1464894502,
	A2O_TUBX_LATHER1LOOPR_ANIMATION = 1386235577,
	A2O_TUBX_LIEBACKL_ANIMATION = -2128052091,
	A2O_TUBX_LIEBACKR_ANIMATION = 2066202086,
	A2O_TUBX_LUXURIATEL_ANIMATION = -1514633243,
	A2O_TUBX_LUXURIATER_ANIMATION = 1605876358,
	A2O_TUBX_SCRUB1LOOPL_ANIMATION = -335882052,
	A2O_TUBX_SCRUB1LOOPR_ANIMATION = 301327839,
	A2O_TUBX_SCRUB2LOOPL_ANIMATION = 1835969042,
	A2O_TUBX_SCRUB2LOOPR_ANIMATION = -1755211919,
	A2O_TUBX_SCRUB3LOOPL_ANIMATION = -1506641481,
	A2O_TUBX_SCRUB3LOOPR_ANIMATION = 1547519188,
	A2O_TUBX_TURNOFFL_ANIMATION = 110184470,
	A2O_TUBX_TURNOFFR_ANIMATION = -56724107,
	A2O_TUBX_TURNONL_ANIMATION = 10164793,
	A2O_TUBX_TURNONR_ANIMATION = -90953894,
	A2O_TV1_REPAIR1LOOP_ANIMATION = -776589500,
	A2O_TV1_REPAIR2LOOP_ANIMATION = -1776921196,
	A2O_TV1_REPAIRSTART_ANIMATION = 1433858326,
	A2O_TV1_REPAIRSTOP_ANIMATION = 204473703,
	A2O_TV1_SURF_ANIMATION = 582887264,
	A2O_TV1_WATCHCRY_SIT_ANIMATION = 893752281,
	A2O_TV1_WATCHCRY_STAND_ANIMATION = -537881911,
	A2O_TV1_WATCHLAUGH_SIT_ANIMATION = 1463636349,
	A2O_TV1_WATCHLAUGH_STAND_ANIMATION = 1626417856,
	A2O_TVLARGE_CLEAN_ANIMATION = 1775593376,
	A2O_TVLARGE_REPAIR1LOOP_ANIMATION = 240434409,
	A2O_TVLARGE_REPAIR2LOOP_ANIMATION = 1240778297,
	A2O_TVLARGE_REPAIRKICK_ANIMATION = 701473400,
	A2O_TVLARGE_REPAIRSLAP_ANIMATION = 49984653,
	A2O_TVLARGE_REPAIRSTART_ANIMATION = -1969986885,
	A2O_TVLARGE_REPAIRSTOP_ANIMATION = -1907594293,
	A2O_TVSMALL_REPAIR1LOOP_ANIMATION = -451477062,
	A2O_TVSMALL_REPAIR2LOOP_ANIMATION = -1565033622,
	A2O_TVSMALL_REPAIRKICK_ANIMATION = 1682230973,
	A2O_TVSMALL_REPAIRSLAP_ANIMATION = 1332861000,
	A2O_TVSMALL_REPAIRSTART_ANIMATION = 1641537512,
	A2O_TVSMALL_REPAIRSTOP_ANIMATION = -1010366706,
	A2O_TVSMALL_TURNON_ANIMATION = 476476488,
	A2O_TV_REPAIRKICK_ANIMATION = -2041133956,
	A2O_TV_REPAIRSLAP_ANIMATION = -1385966967,
	A2O_TV_SITTANTRUM_ANIMATION = -1698889071,
	A2O_TV_SIT_SURF_ANIMATION = 1751397782,
	A2O_UNCOMFORTABLE1_ANIMATION = -1476686317,
	A2O_UNCOMFORTABLE1START_ANIMATION = 440143226,
	A2O_UNCOMFORTABLE2_ANIMATION = 1056104361,
	A2O_VANITY_BRUSHOFF_ANIMATION = -1314533587,
	A2O_VANITY_COMBO_ANIMATION = 489343020,
	A2O_VANITY_IDLE1_ANIMATION = 2040919879,
	A2O_VANITY_IDLE2_ANIMATION = -525555971,
	A2O_VANITY_SPEECH_ANIMATION = 367530922,
	A2O_VR_PLAY_LOOP1_ANIMATION = -101370622,
	A2O_VR_PLAY_LOOP2_ANIMATION = 1627153592,
	A2O_VR_PLAY_LOOP3_ANIMATION = 402347054,
	A2O_VR_PLAY_START_ANIMATION = -1725087856,
	A2O_VR_PLAY_STOP_ANIMATION = 1535710931,
	A2O_WALKING_FAST_LOOP_ANIMATION = -2006460943,
	A2O_WALKING_FEMALE_LOOP_ANIMATION = -337026195,
	A2O_WALKING_FEMALE_START_ANIMATION = -789835357,
	A2O_WALKING_FEMALE_STOP_ANIMATION = -203397067,
	A2O_WALKING_FRANTIC_LOOP_ANIMATION = 747403968,
	A2O_WALKING_HALF_LOOP_ANIMATION = -1624423980,
	A2O_WALKING_LOOP_ANIMATION = -1974925297,
	A2O_WALKING_QUARTER_LOOP_ANIMATION = 954818847,
	A2O_WALKING_START_ANIMATION = 1932636604,
	A2O_WALKING_STOP_LEFT_ANIMATION = -1162042454,
	A2O_WALKING_STOP_RIGHT_ANIMATION = -99734268,
	A2O_WALKING_TURN_45_CCW_LEFT_ANIMATION = -364601742,
	A2O_WALKING_TURN_45_CCW_RIGHT_ANIMATION = 1918275551,
	A2O_WALKING_TURN_45_CW_LEFT_ANIMATION = -1553083953,
	A2O_WALKING_TURN_45_CW_RIGHT_ANIMATION = -942708319,
	A2O_WALKING_TURN_90_CCW_LEFT_ANIMATION = -939976655,
	A2O_WALKING_TURN_90_CCW_RIGHT_ANIMATION = -1649532301,
	A2O_WALKING_TURN_90_CW_LEFT_ANIMATION = 470032176,
	A2O_WALKING_TURN_90_CW_RIGHT_ANIMATION = -361566238,
	A2O_WALLAMP_TURNON_ANIMATION = 706636923,
	A2O_YOYO_STOP_ANIMATION = -400959122,
	A2O_ZAPZALL_GETUP_ANIMATION = -1939624326,
	A2O_ZAPZALL_LAUGH_ANIMATION = 512461454,
	A2O_ZAPZALL_SHOCK_ANIMATION = 1843885903,
	A2O_ZAPZALL_SHOCKA_ANIMATION = 903292413,
	A2O_ZAPZALL_SHOCKB_ANIMATION = -1394707385,
	A2O_ZAPZALL_SHOCKC_ANIMATION = -606518063,
	A2O_ZAPZALL_WAIT_ANIMATION = 1623415521,
	ADULT_CREATE_A_SIM_PICK_BUTT_ANIMATION = -1213486822,
	ADULT_CREATE_A_SIM_SNIFF_ARMPITS_ANIMATION = 1504330848,
	ADULT_IDLE_01_ANIMATION = -281616472,
	ADULT_IDLE_02_ANIMATION = 1983876626,
	ADULT_IDLE_03_ANIMATION = 20496004,
	ADULT_IDLE_04_ANIMATION = -1621349593,
	ADULT_IDLE_05_ANIMATION = -396682319,
	ADULT_IDLE_06_ANIMATION = 1901218315,
	ADULT_IDLE_07_ANIMATION = 106265245,
	ADULT_IDLE_08_ANIMATION = -1763023092,
	ADULT_TEST_ANIMATION_ANIMATION = -2616995,
	ADULT_TEST_ANIMATION2_ANIMATION = 267406165,
	ADULT_TEST_ANIMATION3_ANIMATION = 2029484995,
	ADULT_TEST_ANIMATION4_ANIMATION = -426512800,
	ADULT_TEST_ANIMATION5_ANIMATION = -1852514570,
	ADULT_TEST_ANIMATION6_ANIMATION = 144543564,
	ADULT_TEST_ANIMATION7_ANIMATION = 2140848090,
	ADULT_TEST_ANIMATION8_ANIMATION = -282746293,
	AFRICAN_VIOLET_A_00_ANIMATION = -1668506973,
	AFRICAN_VIOLET_A_01_ANIMATION = -343168459,
	AFRICAN_VIOLET_A_02_ANIMATION = 1921186703,
	ANIMATE_THE_CARS_01_ANIMATION = -980350220,
	ANTIQUE_ARMOIRE_A_00_ANIMATION = 778368267,
	ANTIQUE_ARMOIRE_A_04_ANIMATION = 688468242,
	ARISTOSCRATCH_POOL_TABLE_A00_ANIMATION = -381357666,
	ARISTOSCRATCH_POOL_TABLE_A01_ANIMATION = -1639726840,
	ARISTOSCRATCH_POOL_TABLE_A02_ANIMATION = 122327218,
	ARISTOSCRATCH_POOL_TABLE_A03_ANIMATION = 1884135460,
	ARISTOSCRATCH_POOL_TABLE_A04_ANIMATION = -299289209,
	ARISTOSCRATCH_POOL_TABLE_A05_ANIMATION = -1725037295,
	ARISTOSCRATCH_POOL_TABLE_A06_ANIMATION = 2577579,
	BABY_CRADLE_ANIMATION = 1041591381,
	BABY_CRADLE_B_ANIMATION = 1742784943,
	BABY_CRADLE_CLOSED_ANIMATION = -1155271760,
	BABY_CRADLE_CRY_01_ANIMATION = 1790714740,
	BACHMAN_WOOD_BEVERAGE_BAR_A00_ANIMATION = 16114261,
	BACHMAN_WOOD_BEVERAGE_BAR_A01_ANIMATION = 2012402371,
	BACHMAN_WOOD_BEVERAGE_BAR_A02_ANIMATION = -285506695,
	BACHMAN_WOOD_BEVERAGE_BAR_A03_ANIMATION = -1711492113,
	BACHMAN_WOOD_BEVERAGE_BAR_A04_ANIMATION = 127411788,
	BACHMAN_WOOD_BEVERAGE_BAR_A10_ANIMATION = 435082004,
	BACHMAN_WOOD_BEVERAGE_BAR_A11_ANIMATION = 1860821890,
	BACHMAN_WOOD_BEVERAGE_BAR_A12_ANIMATION = -136269256,
	BACHMAN_WOOD_BEVERAGE_BAR_A13_ANIMATION = -2132311378,
	BACHMAN_WOOD_BEVERAGE_BAR_A14_ANIMATION = 511907597,
	BEAVER_PELT_MOOSEHEAD_00_ANIMATION = -391643547,
	BEAVER_PELT_MOOSEHEAD_01_ANIMATION = -1616851213,
	BEAVER_PELT_MOOSEHEAD_02_ANIMATION = 111779657,
	BEAVER_PELT_MOOSEHEAD_03_ANIMATION = 1907273695,
	BEAVER_PELT_MOOSEHEAD_04_ANIMATION = -271959428,
	BEEJAPHONE_GUITAR_A_00_ANIMATION = 77491822,
	BEEJAPHONE_GUITAR_A_01_ANIMATION = 1939431160,
	BENI_KANA_TEPPENYAKI_TABLE_A_00_ANIMATION = 1561248100,
	BENI_KANA_TEPPENYAKI_TABLE_A_01_ANIMATION = 705294834,
	BENI_KANA_TEPPENYAKI_TABLE_A_02_ANIMATION = -1291804600,
	BENI_KANA_TEPPENYAKI_TABLE_A_03_ANIMATION = -1006137122,
	BENI_KANA_TEPPENYAKI_TABLE_A_04_ANIMATION = 1516438909,
	BENI_KANA_TEPPENYAKI_TABLE_A_05_ANIMATION = 761542123,
	BENI_KANA_TEPPENYAKI_TABLE_A_06_ANIMATION = -1267899311,
	BENI_KANA_TEPPENYAKI_TABLE_A_07_ANIMATION = -1016441657,
	BENI_KANA_TEPPENYAKI_TABLE_B_03_ANIMATION = -692961488,
	BENI_KANA_TEPPENYAKI_TABLE_B_04_ANIMATION = 1222027923,
	BENI_KANA_TEPPENYAKI_TABLE_B_05_ANIMATION = 1070701061,
	BENI_KANA_TEPPENYAKI_TABLE_B_06_ANIMATION = -1495741505,
	BENI_KANA_TEPPENYAKI_TABLE_B_07_ANIMATION = -773850327,
	BENI_KANA_TEPPENYAKI_TABLE_C_03_ANIMATION = 1846433877,
	BENI_KANA_TEPPENYAKI_TABLE_C_04_ANIMATION = -261435914,
	BENI_KANA_TEPPENYAKI_TABLE_C_05_ANIMATION = -2022834848,
	BENI_KANA_TEPPENYAKI_TABLE_C_06_ANIMATION = 509914330,
	BENI_KANA_TEPPENYAKI_TABLE_C_07_ANIMATION = 1768135756,
	BIRCH_TREE_A_00_ANIMATION = 644951743,
	BLACK_SLACK_RECLINER_A_00_ANIMATION = -970753545,
	BLACK_SLACK_RECLINER_A_02_ANIMATION = 674044123,
	BLUE_PLATE_SCONCE_A_00_ANIMATION = -2079058820,
	BLUE_PLATE_SCONCE_A_01_ANIMATION = -216849174,
	BOTTLE_LAMP_A_00_ANIMATION = 96243178,
	BOTTLE_LAMP_A_01_ANIMATION = 1924906364,
	BRAND_NAME_TOASTER_OVEN_00_ANIMATION = 1918587089,
	BRAND_NAME_TOASTER_OVEN_01_ANIMATION = 89940039,
	BRAND_NAME_TOASTER_OVEN_02_ANIMATION = -1672138243,
	BRAND_NAME_TOASTER_OVEN_03_ANIMATION = -346947221,
	BRAND_NAME_TOASTER_OVEN_04_ANIMATION = 1966511304,
	C2A_APOLOGIZEE_ANIMATION = -1549251266,
	C2A_APOLOGIZEE_ACCEPT_ANIMATION = -285710288,
	C2A_APOLOGIZEE_REJECT_ANIMATION = -132258883,
	C2A_APOLOGIZER_ANIMATION = 544983289,
	C2A_APOLOGIZER_ACCEPTED_ANIMATION = -465860666,
	C2A_APOLOGIZER_REJECTED_ANIMATION = 276573581,
	C2A_BOOER_LOOP_ANIMATION = -72913280,
	C2A_BOOER_START_ANIMATION = 239583595,
	C2A_BOOER_STOP_ANIMATION = -475109928,
	C2A_BRAGGER_LOOP_GOD_ANIMATION = -2023950433,
	C2A_BRAGGER_LOOP_HIPS_ANIMATION = 840402512,
	C2A_BRAGGER_LOOP_OTHERS_ANIMATION = -1926912248,
	C2A_BRAGGER_START_ANIMATION = -382285073,
	C2A_BRAGGER_STOP_ANIMATION = 713615062,
	C2A_CALLHERE_ANIMATION = -1769946585,
	C2A_CHEEREE_LOOP_ANIMATION = -387401666,
	C2A_CHEEREE_START_ANIMATION = 579670070,
	C2A_CHEEREE_STOP_ANIMATION = -253643930,
	C2A_CHEERER_LOOP_ANIMATION = -163870179,
	C2A_CHEERER_START_ANIMATION = -2131447178,
	C2A_CHEERER_STOP_ANIMATION = -298679995,
	C2A_ENTHRALLED2_ANIMATION = -1934642427,
	C2A_GIFT_APPRECIATEE_ANIMATION = -1641076538,
	C2A_GIFT_APPRECIATER_ANIMATION = 503098625,
	C2A_GIFT_GETTER_ANIMATION = -113026644,
	C2A_GIFT_GIVER_ANIMATION = 1823768297,
	C2A_GIFT_GUEST_GIVES_ANIMATION = -2111337398,
	C2A_GIFT_HOST_GETS_ANIMATION = 925014516,
	C2A_GIFT_STOMPEE_ANIMATION = 1970914400,
	C2A_GIFT_STOMPER_ANIMATION = -156614233,
	C2A_GIGGLE_LOOP_ANIMATION = -1130534629,
	C2A_GIGGLE_START_ANIMATION = 1776136608,
	C2A_GIGGLE_STOP_ANIMATION = -1533779389,
	C2A_GOODBYE_BYEBYE_ANIMATION = 803246993,
	C2A_GOODBYE_REFUSE_ANIMATION = 2014648600,
	C2A_GOODBYE_SHOO_ANIMATION = -1636529824,
	C2A_HANDSHAKEE_ANIMATION = 894945958,
	C2A_HANDSHAKER_ANIMATION = -1232842911,
	C2A_HUGGEE_GOOD_ANIMATION = 1253370388,
	C2A_HUGGEE_REFUSE_ANIMATION = -1043385676,
	C2A_HUGGEE_TENT_ANIMATION = 19117718,
	C2A_HUGGER_GOOD_ANIMATION = 1416091703,
	C2A_HUGGER_REFUSE_ANIMATION = -1213134202,
	C2A_HUGGER_TENT_ANIMATION = 535856309,
	C2A_INSULTEE1_ANIMATION = -615653737,
	C2A_INSULTER1_ANIMATION = -556901887,
	C2A_JOKEE1_LISTEN_ANIMATION = 1881829597,
	C2A_JOKEE1_RESPOND_NEGATIVE_ANIMATION = 585460719,
	C2A_JOKEE1_RESPOND_POSITIVE_ANIMATION = 1200823540,
	C2A_JOKER1_COUNTERRESPONSE_NEGATIVE_ANIMATION = 1653734491,
	C2A_JOKER1_COUNTERRESPONSE_POSITIVE_ANIMATION = 132614976,
	C2A_JOKER1_TELL_ANIMATION = -566035108,
	C2A_LISTEN_ENERGETIC_AGREE_ANIMATION = 248706718,
	C2A_LISTEN_ENERGETIC_EMPATHIZE_ANIMATION = 1670359782,
	C2A_LISTEN_IMPATIENT_ANIMATION = -1232374335,
	C2A_LISTEN_INTENSE_LOOP_ANIMATION = 190808669,
	C2A_LISTEN_NORMAL_AGREE_ANIMATION = 1768500123,
	C2A_LISTEN_NORMAL_APATHETIC_ANIMATION = -435193791,
	C2A_LISTEN_UNINTERESTED_ANIMATION = 2005055517,
	C2A_LONELY2_ANIMATION = -515489661,
	C2A_PIZZA_DELIVERY_TAKE_ANIMATION = -1742775171,
	C2A_SCAREE_ANIMATION = -200543051,
	C2A_SCARER_ANIMATION = 2010673522,
	C2A_SHOVEE1_ANIMATION = 1656126133,
	C2A_SHOVER1_ANIMATION = 1731591715,
	C2A_SIGH_DESPONDENT_ANIMATION = 836108799,
	C2A_TALKTOHAND_ANIMATION = -136244227,
	C2A_TALKTOHANDSTART_ANIMATION = 1777874511,
	C2A_TALK_ANGRY_ANIMATION = -2038345803,
	C2A_TALK_ENERGETIC_SPORTS_ANIMATION = 994833459,
	C2A_TALK_ENERGETIC_VACATION_ANIMATION = 563992397,
	C2A_TALK_IDLE_LOOP_ANIMATION = 1500456633,
	C2A_TALK_IDLE_START_ANIMATION = 1373667627,
	C2A_TALK_IDLE_STOP_ANIMATION = 1097215457,
	C2A_TALK_INTENSE_LOOP_ANIMATION = 1622422323,
	C2A_TALK_INTENSE_START_ANIMATION = 1555312640,
	C2A_TALK_INTENSE_STOP_ANIMATION = 2025666667,
	C2A_TALK_NORMAL_ANIMATION = 678782118,
	C2A_TALK_SUBTLE_ANIMATION = 854717257,
	C2A_TEASE_LOOKS_ANIMATION = -451158232,
	C2A_TICKLEE_LOOP_ANIMATION = -49550527,
	C2A_TICKLEE_START_ANIMATION = -501047352,
	C2A_TICKLEE_STOP_LAUGH_ANIMATION = 1456743398,
	C2A_TICKLEE_STOP_PUSH_ANIMATION = -1349980985,
	C2A_TICKLER_LOOP_ANIMATION = -472327838,
	C2A_TICKLER_START_ANIMATION = 1079721352,
	C2A_TICKLER_STOP_LAUGH_ANIMATION = 777267093,
	C2A_TICKLER_STOP_PUSHED_ANIMATION = 1494600934,
	C2A_YOYO_LOOP1_ANIMATION = 1154055503,
	C2A_YOYO_LOOP2_ANIMATION = -574608139,
	C2A_YOYO_LOOP3_ANIMATION = -1429791645,
	C2A_YOYO_START_ANIMATION = 605124573,
	C2A_YOYO_STOP_ANIMATION = -634173661,
	C2C_APOLOGIZEE_ANIMATION = 1335088033,
	C2C_APOLOGIZEE_ACCEPT_ANIMATION = -1706266943,
	C2C_APOLOGIZEE_REJECT_ANIMATION = -1935022772,
	C2C_APOLOGIZER_ANIMATION = -868198810,
	C2C_APOLOGIZER_ACCEPTED_ANIMATION = 16746171,
	C2C_APOLOGIZER_REJECTED_ANIMATION = -189256464,
	C2C_ATTACK_LOOP_HEAD_ANIMATION = 1411064327,
	C2C_ATTACK_LOOP_KICK_ANIMATION = -314766434,
	C2C_ATTACK_LOOP_PUNCH_ANIMATION = 1889661576,
	C2C_ATTACK_LOOP_SLAM_ANIMATION = -1525780046,
	C2C_ATTACK_LOOP_TOPKICK_ANIMATION = -1764882138,
	C2C_ATTACK_LOSE_START_ANIMATION = -573882286,
	C2C_ATTACK_LOSE_STOP_ANIMATION = -1176787009,
	C2C_ATTACK_WIN_START_ANIMATION = 1336848961,
	C2C_ATTACK_WIN_STOP_ANIMATION = 245837683,
	C2C_BOOER_LOOP_ANIMATION = 396161055,
	C2C_BOOER_START_ANIMATION = 1847292960,
	C2C_BOOER_STOP_ANIMATION = 261487431,
	C2C_BRAGGER_LOOP_GOD_ANIMATION = -2104976356,
	C2C_BRAGGER_LOOP_HIPS_ANIMATION = 1185120417,
	C2C_BRAGGER_LOOP_OTHERS_ANIMATION = 1776395893,
	C2C_BRAGGER_START_ANIMATION = 1102084990,
	C2C_BRAGGER_STOP_ANIMATION = -874110341,
	C2C_CALLHERE_ANIMATION = -1837821414,
	C2C_CHEEREE_LOOP_ANIMATION = 159808659,
	C2C_CHEEREE_START_ANIMATION = -1978949209,
	C2C_CHEEREE_STOP_ANIMATION = 294614987,
	C2C_CHEERER_LOOP_ANIMATION = 391466672,
	C2C_CHEERER_START_ANIMATION = 678560743,
	C2C_CHEERER_STOP_ANIMATION = 257705448,
	C2C_GIFT_APPRECIATEE_ANIMATION = -1678032059,
	C2C_GIFT_APPRECIATER_ANIMATION = 405325442,
	C2C_GIFT_GETTER_ANIMATION = -1725960985,
	C2C_GIFT_GIVER_ANIMATION = -2138054538,
	C2C_GIFT_GUEST_GIVES_ANIMATION = -2014058551,
	C2C_GIFT_HOST_GETS_ANIMATION = -1333609321,
	C2C_GIFT_STOMPEE_ANIMATION = -1810431795,
	C2C_GIFT_STOMPER_ANIMATION = 398755082,
	C2C_GIGGLE_LOOP_ANIMATION = -591274928,
	C2C_GIGGLE_START_ANIMATION = -2001505011,
	C2C_GIGGLE_STOP_ANIMATION = -993470712,
	C2C_GOODBYE_BYEBYE_ANIMATION = -1472153870,
	C2C_GOODBYE_REFUSE_ANIMATION = -4899717,
	C2C_GOODBYE_SHOO_ANIMATION = 2132430285,
	C2C_HANDSHAKEE_ANIMATION = -647211975,
	C2C_HANDSHAKER_ANIMATION = 1522520574,
	C2C_HUGGEE_GOOD_ANIMATION = 719871839,
	C2C_HUGGEE_REFUSE_ANIMATION = 1766425381,
	C2C_HUGGEE_TENT_ANIMATION = 1635714013,
	C2C_HUGGER_GOOD_ANIMATION = 876309884,
	C2C_HUGGER_REFUSE_ANIMATION = 523746071,
	C2C_HUGGER_TENT_ANIMATION = 2141991422,
	C2C_INSULTEE1_ANIMATION = -2094962858,
	C2C_INSULTER1_ANIMATION = -2036145216,
	C2C_JOKEE1_LISTEN_ANIMATION = -659766964,
	C2C_JOKEE1_RESPOND_NEGATIVE_ANIMATION = -1300017742,
	C2C_JOKEE1_RESPOND_POSITIVE_ANIMATION = -671794519,
	C2C_JOKER1_COUNTERRESPONSE_NEGATIVE_ANIMATION = 259317181,
	C2C_JOKER1_COUNTERRESPONSE_POSITIVE_ANIMATION = 1778559654,
	C2C_JOKER1_TELL_ANIMATION = -1105311721,
	C2C_LISTEN_ENERGETIC_AGREE_ANIMATION = -672580975,
	C2C_LISTEN_ENERGETIC_EMPATHIZE_ANIMATION = 1625575644,
	C2C_LISTEN_IMPATIENT_ANIMATION = -1285611966,
	C2C_LISTEN_INTENSE_LOOP_ANIMATION = -275021024,
	C2C_LISTEN_NORMAL_AGREE_ANIMATION = -1918031130,
	C2C_LISTEN_NORMAL_APATHETIC_ANIMATION = 1986616860,
	C2C_LISTEN_UNINTERESTED_ANIMATION = -1824081568,
	C2C_LONELY2_ANIMATION = -810522619,
	C2C_SCAREE_ANIMATION = -1238436920,
	C2C_SCARER_ANIMATION = 905803279,
	C2C_SHOVEE1_ANIMATION = 1279283763,
	C2C_SHOVER1_ANIMATION = 1237571237,
	C2C_SIGH_DESPONDENT_ANIMATION = -437612232,
	C2C_TALK_ENERGETIC_SPORTS_ANIMATION = -690149414,
	C2C_TALK_ENERGETIC_VACATION_ANIMATION = -1308888816,
	C2C_TALK_IDLE_LOOP_ANIMATION = -556858406,
	C2C_TALK_IDLE_START_ANIMATION = -2049175060,
	C2C_TALK_IDLE_STOP_ANIMATION = -960100222,
	C2C_TALK_INTENSE_LOOP_ANIMATION = 335558082,
	C2C_TALK_INTENSE_START_ANIMATION = -1770371444,
	C2C_TALK_INTENSE_STOP_ANIMATION = 201932442,
	C2C_TALK_NORMAL_ANIMATION = 1210700269,
	C2C_TALK_SUBTLE_ANIMATION = 1387087362,
	C2C_TEASE_LOOKS_ANIMATION = -2058917277,
	C2C_TICKLEE_LOOP_ANIMATION = 476393452,
	C2C_TICKLEE_START_ANIMATION = 1252273753,
	C2C_TICKLEE_STOP_LAUGH_ANIMATION = -1675995798,
	C2C_TICKLEE_STOP_PUSH_ANIMATION = -616764874,
	C2C_TICKLER_LOOP_ANIMATION = 45489615,
	C2C_TICKLER_START_ANIMATION = -388133863,
	C2C_TICKLER_STOP_LAUGH_ANIMATION = -459648743,
	C2C_TICKLER_STOP_PUSHED_ANIMATION = -1110323813,
	C2C_YOYO_LOOP1_ANIMATION = -1460476976,
	C2C_YOYO_LOOP2_ANIMATION = 838578794,
	C2C_YOYO_LOOP3_ANIMATION = 1190953724,
	C2C_YOYO_START_ANIMATION = -936711870,
	C2C_YOYO_STOP_ANIMATION = -2107638046,
	C2O_APPROACH_ANIMATION = 397887064,
	C2O_APPROVE_ANIMATION = -479049133,
	C2O_AQUARIUM1_CLEAN_ANIMATION = 308098835,
	C2O_AQUARIUM1_FEEDSTART_ANIMATION = -222703628,
	C2O_AQUARIUM1_FEEDSTOP_ANIMATION = -1540847997,
	C2O_AQUARIUM1_FEED_LOOP_ANIMATION = 1350293642,
	C2O_AQUARIUM1_RESTOCK_ANIMATION = -841872917,
	C2O_AQUARIUM1_WATCH_ANIMATION = -1276718980,
	C2O_AQUARIUM_WATCH_EXCITED_LOOP1_ANIMATION = -1716049376,
	C2O_AQUARIUM_WATCH_EXCITED_LOOP2_ANIMATION = 12483482,
	C2O_AQUARIUM_WATCH_EXCITED_START_ANIMATION = -110157646,
	C2O_AQUARIUM_WATCH_EXCITED_STOP_ANIMATION = -1457987252,
	C2O_ARMOIRE_OPEN_ANIMATION = -2089864077,
	C2O_AWARE1_ANIMATION = 1838662000,
	C2O_AWARE2_ANIMATION = -190934838,
	C2O_BABY_ADJUST_LEFT_ANIMATION = 710066049,
	C2O_BABY_ADJUST_RIGHT_ANIMATION = 1445083736,
	C2O_BABY_CARRY_ANIMATION = -1736060804,
	C2O_BABY_FEED_LOOP1_ANIMATION = 1393104912,
	C2O_BABY_FEED_LOOP2_ANIMATION = -905950806,
	C2O_BABY_FEED_START_ANIMATION = 869339778,
	C2O_BABY_FEED_STOP_ANIMATION = -1377281091,
	C2O_BABY_GETL_ANIMATION = 2091128147,
	C2O_BABY_GETR_ANIMATION = -2035603408,
	C2O_BABY_GROW_UP_ANIMATION = 839458084,
	C2O_BABY_PLAY_LOOP1_ANIMATION = 1465494544,
	C2O_BABY_PLAY_LOOP2_ANIMATION = -833552982,
	C2O_BABY_PLAY_START_ANIMATION = 931243650,
	C2O_BABY_PLAY_STOP_ANIMATION = 645549627,
	C2O_BABY_PUTL_ANIMATION = -1387472635,
	C2O_BABY_PUTR_ANIMATION = 1464067174,
	C2O_BABY_SING_LOOP1_ANIMATION = 406366051,
	C2O_BABY_SING_LOOP2_ANIMATION = -2127431975,
	C2O_BABY_SING_START_ANIMATION = 2027990513,
	C2O_BABY_SING_STOP_ANIMATION = -1736216680,
	C2O_BALL_KICK_HARD_ANIMATION = -681730887,
	C2O_BALL_KICK_LIGHTLY_ANIMATION = 585406980,
	C2O_BAR_DRINKSODA_GETSODA_ANIMATION = 249299183,
	C2O_BAR_DRINKSODA_LOOP1_ANIMATION = 343187507,
	C2O_BAR_DRINKSODA_LOOP2_ANIMATION = -1921126007,
	C2O_BAR_DRINKSODA_START_ANIMATION = 1957472929,
	C2O_BAR_DRINKSODA_STOP_ANIMATION = 1654589267,
	C2O_BAR_DRINK_RARMCARRY_ANIMATION = 69309717,
	C2O_BBALL_DRIBBLE_LOOP_ANIMATION = 1912577744,
	C2O_BBALL_DRIBBLE_START_ANIMATION = 1705429103,
	C2O_BBALL_SHOOT_ANIMATION = 235849840,
	C2O_BEDD_ROUTEFAILURE_LEFT_ANIMATION = -663873794,
	C2O_BEDD_ROUTEFAILURE_RIGHT_ANIMATION = -1771410852,
	C2O_BEDS_GETINL_ANIMATION = 1106832580,
	C2O_BEDS_GETINR_ANIMATION = -1141386841,
	C2O_BEDS_GETOUTL_ENERGETIC_ANIMATION = -1228925735,
	C2O_BEDS_GETOUTL_ENERGETIC_STOP_ANIMATION = -1438070393,
	C2O_BEDS_GETOUTL_LAZY_ANIMATION = -766556465,
	C2O_BEDS_GETOUTL_LAZY_LOOP1_ANIMATION = -121972340,
	C2O_BEDS_GETOUTL_LAZY_LOOP2_ANIMATION = 1639155766,
	C2O_BEDS_GETOUTL_LAZY_LOOP3_ANIMATION = 380942496,
	C2O_BEDS_GETOUTL_LAZY_STOP_ANIMATION = -820732270,
	C2O_BEDS_GETOUTL_NORMAL_ANIMATION = 678404162,
	C2O_BEDS_GETOUTL_NORMAL_STOP_ANIMATION = -1553417342,
	C2O_BEDS_GETOUTR_ENERGETIC_ANIMATION = 1245772564,
	C2O_BEDS_GETOUTR_ENERGETIC_STOP_ANIMATION = 1827471794,
	C2O_BEDS_GETOUTR_LAZY_ANIMATION = -342678236,
	C2O_BEDS_GETOUTR_LAZY_LOOP1_ANIMATION = 496232302,
	C2O_BEDS_GETOUTR_LAZY_LOOP2_ANIMATION = -2070235436,
	C2O_BEDS_GETOUTR_LAZY_LOOP3_ANIMATION = -207780286,
	C2O_BEDS_GETOUTR_LAZY_STOP_ANIMATION = 865366367,
	C2O_BEDS_GETOUTR_NORMAL_ANIMATION = 1096713051,
	C2O_BEDS_GETOUTR_NORMAL_STOP_ANIMATION = -309784088,
	C2O_BEDS_MAKEL_ANIMATION = 1676644698,
	C2O_BEDS_MAKER_ANIMATION = -1713329095,
	C2O_BEDS_ROUTEFAILURE_LEFT_ANIMATION = -2129484097,
	C2O_BEDS_ROUTEFAILURE_RIGHT_ANIMATION = -1746376726,
	C2O_BEDS_SLEEPL_ANIMATION = -514770823,
	C2O_BEDS_SLEEPR_ANIMATION = 459146522,
	C2O_BED_GETINL_ANIMATION = -66217455,
	C2O_BED_GETINR_ANIMATION = 100837234,
	C2O_BED_GETOUTL_ENERGETIC_ANIMATION = -1576148900,
	C2O_BED_GETOUTL_ENERGETIC_STOP_ANIMATION = 1838392787,
	C2O_BED_GETOUTL_LAZY_ANIMATION = -1710205462,
	C2O_BED_GETOUTL_LAZY_LOOP1_ANIMATION = 1702650839,
	C2O_BED_GETOUTL_LAZY_LOOP2_ANIMATION = -59428243,
	C2O_BED_GETOUTL_LAZY_LOOP3_ANIMATION = -1955462405,
	C2O_BED_GETOUTL_LAZY_STOP_ANIMATION = -606508521,
	C2O_BED_GETOUTL_NORMAL_ANIMATION = 1143109924,
	C2O_BED_GETOUTL_NORMAL_STOP_ANIMATION = 1598879044,
	C2O_BED_GETOUTR_ENERGETIC_ANIMATION = 1586302865,
	C2O_BED_GETOUTR_ENERGETIC_STOP_ANIMATION = -1422496282,
	C2O_BED_GETOUTR_LAZY_ANIMATION = -1546897919,
	C2O_BED_GETOUTR_LAZY_LOOP1_ANIMATION = -2141889227,
	C2O_BED_GETOUTR_LAZY_LOOP2_ANIMATION = 425462927,
	C2O_BED_GETOUTR_LAZY_LOOP3_ANIMATION = 1851472921,
	C2O_BED_GETOUTR_LAZY_STOP_ANIMATION = 660178394,
	C2O_BED_GETOUTR_NORMAL_ANIMATION = 756243005,
	C2O_BED_GETOUTR_NORMAL_STOP_ANIMATION = 296574766,
	C2O_BED_MAKEL_ANIMATION = 728455338,
	C2O_BED_MAKER_ANIMATION = -781949495,
	C2O_BED_SLEEPL_ANIMATION = 1554271916,
	C2O_BED_SLEEPR_ANIMATION = -1498713137,
	C2O_BOOKSHELF_BOOK_GET_ANIMATION = 1579105409,
	C2O_BOOKSHELF_BOOK_PUT_ANIMATION = 229940005,
	C2O_BOOKSHELF_READ_SITTING_LOOP1_ANIMATION = -1586337908,
	C2O_BOOKSHELF_READ_SITTING_LOOP2_ANIMATION = 947598902,
	C2O_BOOKSHELF_READ_SITTING_START_ANIMATION = -1045795554,
	C2O_BOOKSHELF_READ_SITTING_STOP_ANIMATION = -1265137170,
	C2O_BOOKSHELF_READ_STANDING_LOOP1_ANIMATION = 1059391849,
	C2O_BOOKSHELF_READ_STANDING_LOOP2_ANIMATION = -1507043117,
	C2O_BOOKSHELF_READ_STANDING_START_ANIMATION = 1610417147,
	C2O_BOOKSHELF_READ_STANDING_STOP_ANIMATION = -2022912023,
	C2O_BOOKSHELF_XLEFT_BOOK_GET_ANIMATION = 271710523,
	C2O_BOOKSHELF_XLEFT_BOOK_PUT_ANIMATION = 1134190239,
	C2O_BORED1_ANIMATION = -112389288,
	C2O_BORED2_ANIMATION = 1615086306,
	C2O_BURN_ANIMATION = -83730157,
	C2O_CAR_GETINL_ANIMATION = -185100145,
	C2O_CAR_GETINR_ANIMATION = 251176428,
	C2O_CHEMSET_MONSTER_STOP_ANIMATION = -1559454709,
	C2O_CHESS_PLAY1_ANIMATION = 1382021464,
	C2O_CHESS_PLAY2_ANIMATION = -883513118,
	C2O_CHESS_PLAY3_ANIMATION = -1135503244,
	C2O_CHESS_PLAY4_ANIMATION = 573902295,
	C2O_CHESS_SCOOT_ANIMATION = 1715642068,
	C2O_CHESS_SCOOT_LOOP_ANIMATION = -1413719360,
	C2O_CHOCOLATES_EAT_ANIMATION = 1385635512,
	C2O_CHOCOLATES_OPEN_TAKE_ANIMATION = -1666221793,
	C2O_CLOCKALARM_SET_ANIMATION = 2041418941,
	C2O_CLOTHESCHANGE_ANIMATION = -1990090128,
	C2O_COMFORTABLE1_ANIMATION = 1347193413,
	C2O_COMFORTABLE2_ANIMATION = -918168577,
	C2O_COMPUTER_GETJOYSTICK_ANIMATION = -486803213,
	C2O_COMPUTER_GETKEYBOARD_ANIMATION = -1647532362,
	C2O_COMPUTER_PLAYGAME_ANIMATION = -1564341405,
	C2O_COMPUTER_TURNON_ANIMATION = -528153859,
	C2O_COMPUTER_TYPE_ANIMATION = 663705662,
	C2O_CONSIDER_ANIMATION = 1210066066,
	C2O_COUGH_BAD_STANDING1_ANIMATION = 1846847889,
	C2O_COUGH_BAD_STANDING2_ANIMATION = -149030869,
	C2O_DANCE_INPLACE_HANDSUPLOOP_ANIMATION = -1093188294,
	C2O_DANCE_INPLACE_HANDSUPSTART_ANIMATION = 632744914,
	C2O_DANCE_INPLACE_HANDSUPSTOP_ANIMATION = -1495380382,
	C2O_DANCE_INPLACE_STARTSTAND_ANIMATION = -1405176408,
	C2O_DANCE_INPLACE_STOPSTAND_ANIMATION = -1031392516,
	C2O_DANCE_INPLACE_SWIMLOOP_ANIMATION = 1575197400,
	C2O_DANCE_INPLACE_SWIMSTART_ANIMATION = 1800494169,
	C2O_DANCE_INPLACE_SWIMSTOP_ANIMATION = 1173000576,
	C2O_DANCE_INPLACE_TWISTLOOP_ANIMATION = -469863404,
	C2O_DANCE_INPLACE_TWISTSTART_ANIMATION = -113389780,
	C2O_DANCE_INPLACE_TWISTSTOP_ANIMATION = -67666100,
	C2O_DEAD_LOOP_ANIMATION = 1660288249,
	C2O_DIE_BURN_END_ANIMATION = -1152931215,
	C2O_DIE_BURN_LOOP1_ANIMATION = 325196898,
	C2O_DIE_BURN_LOOP2_ANIMATION = -1972679208,
	C2O_DIE_BURN_START_ANIMATION = 1941575408,
	C2O_DIE_SHOCK_LOOP1_ANIMATION = 1631461608,
	C2O_DIE_SHOCK_LOOP2_ANIMATION = -130584238,
	C2O_DIE_STARVE_ANIMATION = -1841746782,
	C2O_DISAPPROVE_ANIMATION = 977989537,
	C2O_DISGUSTED1_ANIMATION = 1234644484,
	C2O_DISGUSTED2_ANIMATION = -794918978,
	C2O_DISHW_LOAD_ANIMATION = -221931081,
	C2O_DOLLHOUSE_PLAY_LOOP1_ANIMATION = -1143402348,
	C2O_DOLLHOUSE_PLAY_LOOP2_ANIMATION = 584073518,
	C2O_DOLLHOUSE_START_ANIMATION = 2136378951,
	C2O_DOLLHOUSE_STOP_ANIMATION = 1130676380,
	C2O_DOLLHOUSE_WATCH_LOOP1_ANIMATION = -1460944102,
	C2O_DOLLHOUSE_WATCH_LOOP2_ANIMATION = 836932256,
	C2O_DOOR_KNOCK_ANIMATION = 416678766,
	C2O_DRESSER_OPEN_ANIMATION = 322834290,
	C2O_EASEL_CONSIDER_ANIMATION = 110742944,
	C2O_EASEL_PAINT_ANIMATION = 1984262021,
	C2O_EASEL_STARTPAINT_ANIMATION = -878551431,
	C2O_EASEL_STOPPAINT_ANIMATION = 1885730731,
	C2O_EAT_ANIMATION = 465920722,
	C2O_EATLOOP_STAND_ANIMATION = 1672911472,
	C2O_ENERGETIC1_ANIMATION = -1427960537,
	C2O_ENERGETIC2_ANIMATION = 870997149,
	C2O_ENTHRALLED_ANIMATION = -1701554860,
	C2O_ENTHRALLED2_ANIMATION = 1984544693,
	C2O_FAINT_ANIMATION = 13177670,
	C2O_FIREASH_OUTSIDE_DUMP_ANIMATION = 208617888,
	C2O_FIREASH_SWEEP2CARRY_ANIMATION = 718110631,
	C2O_FIREASH_SWEEP_CARRYING_ANIMATION = 975253485,
	C2O_FIREASH_SWEEP_LOOP1_ANIMATION = -1719060470,
	C2O_FIREASH_SWEEP_LOOP2_ANIMATION = 8415664,
	C2O_FIREASH_SWEEP_START_ANIMATION = -112119144,
	C2O_FIREASH_SWEEP_STOP_ANIMATION = -1760900276,
	C2O_FIREASH_TRASHCOM_DUMP_ANIMATION = 1918370710,
	C2O_FLAMINGO_KICK_ANIMATION = -2010663548,
	C2O_FLOOD_MOP_LOOP1_ANIMATION = 627297002,
	C2O_FLOOD_MOP_LOOP2_ANIMATION = -1133864112,
	C2O_FLOOD_MOP_START_ANIMATION = 1169932408,
	C2O_FLOOD_MOP_STOP_ANIMATION = 461058557,
	C2O_FLOORGETUP_ANIMATION = 189160428,
	C2O_FLOORLAMP1_TURNON_ANIMATION = 1011192511,
	C2O_FLOORSLEEP_ANIMATION = -1274479054,
	C2O_FLOWERS_REPLANT_ANIMATION = 1657720811,
	C2O_FLOWERS_WATER_ANIMATION = -826771883,
	C2O_FOUNTAIN_SPLASH_LOOP_ANIMATION = -199374025,
	C2O_FOUNTAIN_SPLASH_START_ANIMATION = 1531796961,
	C2O_FOUNTAIN_SPLASH_STOP_ANIMATION = -334184337,
	C2O_FRIDGE_CLOSE_ANIMATION = 1113730987,
	C2O_FRIDGE_GETFOOD_ANIMATION = 260779926,
	C2O_FRIDGE_LOOK_ANIMATION = -1768652525,
	C2O_FRIDGE_OPEN_ANIMATION = 434034357,
	C2O_FULLBLADDER1_ANIMATION = -428044699,
	C2O_FULLBLADDER1START_ANIMATION = 1639344980,
	C2O_FULLBLADDER2_ANIMATION = 2138431455,
	C2O_GNOME_KICK_BOOM_ANIMATION = 1787044901,
	C2O_GUITAR_PLAY_LEANBACK_LOOP1_ANIMATION = 894791610,
	C2O_GUITAR_PLAY_LEANBACK_LOOP2_ANIMATION = -1403240960,
	C2O_GUITAR_PLAY_LEANBACK_LOOP3_ANIMATION = -614789482,
	C2O_GUITAR_PLAY_LEANBACK_LOOPX_ANIMATION = 20690502,
	C2O_GUITAR_PLAY_LEANFRONT_LOOP1_ANIMATION = -776948505,
	C2O_GUITAR_PLAY_LEANFRONT_LOOP2_ANIMATION = 1220142429,
	C2O_GUITAR_PLAY_LEANFRONT_LOOP3_ANIMATION = 1069471179,
	C2O_GUITAR_PLAY_LEANFRONT_LOOPX_ANIMATION = -438407909,
	C2O_GUITAR_PLAY_STAND_LOOP1_ANIMATION = -1383072270,
	C2O_GUITAR_PLAY_STAND_LOOP2_ANIMATION = 881241160,
	C2O_GUITAR_PLAY_STAND_LOOP3_ANIMATION = 1132567774,
	C2O_GUITAR_PLAY_STAND_LOOPX_ANIMATION = -1713298418,
	C2O_GUITAR_PLAY_START_ANIMATION = 87111303,
	C2O_GUITAR_PLAY_STOP_ANIMATION = 1317447703,
	C2O_GUITAR_TRANS_LEANBACK_STAND_ANIMATION = 96714287,
	C2O_GUITAR_TRANS_LEANFRONT_LEANBACK_ANIMATION = 1718106149,
	C2O_GUITAR_TRANS_STAND_LEANFRONT_ANIMATION = -831591604,
	C2O_HAVEACCIDENT_ANIMATION = -1686268046,
	C2O_HEYYOU1_ANIMATION = -2086297794,
	C2O_HEYYOU2_ANIMATION = 447532676,
	C2O_HOUSEPLANT_SHAKEHEAD_ANIMATION = -2019751743,
	C2O_HUNGRY1_ANIMATION = 1514047924,
	C2O_HUNGRY1START_ANIMATION = 1939520798,
	C2O_HUNGRY2_ANIMATION = -1019750386,
	C2O_IDLE1_ANIMATION = 1839266386,
	C2O_IDLE2_ANIMATION = -190207000,
	C2O_IDLE2_START_ANIMATION = -1654931128,
	C2O_IDLE2_STOP_ANIMATION = -162407595,
	C2O_IDLE3_ANIMATION = -2085708930,
	C2O_IDLE4_ANIMATION = 499781341,
	C2O_IDLE5_ANIMATION = 1791835723,
	C2O_IDLE6_ANIMATION = -205230095,
	C2O_IDLE7_ANIMATION = -2067570841,
	C2O_IDLE8_ANIMATION = 343687926,
	C2O_IDLE9_ANIMATION = 1669034592,
	C2O_IDLE_ARMSCROSSED_BREATHE_ANIMATION = -1671989518,
	C2O_IDLE_ARMSCROSSED_LOOKOFF_ANIMATION = 1104467082,
	C2O_IDLE_ARMSCROSSED_SCRATCHCHIN_ANIMATION = -352233399,
	C2O_IDLE_ARMSDOWN_BREATHE_ANIMATION = -1642820649,
	C2O_IDLE_ARMSDOWN_FIDGET_ANIMATION = 138183785,
	C2O_IDLE_ARMSDOWN_LOOKOFF_ANIMATION = 1133980079,
	C2O_IDLE_CRAZY_ANIMATION = 185853212,
	C2O_IDLE_HANDSHIPS_BREATHE_ANIMATION = 1117761702,
	C2O_IDLE_HANDSHIPS_LOOKOFF_ANIMATION = -1625550114,
	C2O_IDLE_HANDSHIPS_SHIFTSIDE_ANIMATION = -501100678,
	C2O_IDLE_LOOKAROUND_ANIMATION = 482204922,
	C2O_IDLE_SIT_1_ANIMATION = -937894220,
	C2O_IDLE_SIT_2_ANIMATION = 1360105230,
	C2O_IDLE_SIT_3_ANIMATION = 639025048,
	C2O_IDLE_TRANSITION_ARMSCROSSED_ARMSDOWN_ANIMATION = 1698535335,
	C2O_IDLE_TRANSITION_ARMSDOWN_HANDSHIPS_ANIMATION = -917994297,
	C2O_IDLE_TRANSITION_HANDSHIPS_ARMSCROSSED_ANIMATION = 1933566160,
	C2O_LETHARGIC_ANIMATION = 686330716,
	C2O_LETHARGIC2_ANIMATION = 2015382337,
	C2O_LONELY_ANIMATION = 1379465581,
	C2O_LONELY2_ANIMATION = 696556305,
	C2O_MAILBOX_GETBILLS_ANIMATION = -1480053290,
	C2O_MEDCAB_BRUSH_START_COUNTER_ANIMATION = -1052317109,
	C2O_MEDCAB_BRUSH_START_NOCOUNTER_ANIMATION = -904820084,
	C2O_MEDCAB_BRUSH_START_PEDSINK_ANIMATION = 1517895462,
	C2O_MEDCAB_BRUSH_STOP_COUNTER_ANIMATION = -24675036,
	C2O_MEDCAB_BRUSH_STOP_NOCOUNTER_ANIMATION = 1176487106,
	C2O_MEDCAB_BRUSH_STOP_PEDSINK_ANIMATION = 1706600521,
	C2O_MEDCAB_COUNTER_BRUSH_LOOP1_ANIMATION = -1023340179,
	C2O_MEDCAB_COUNTER_BRUSH_LOOP2_ANIMATION = 1510490327,
	C2O_MEDCAB_NOCOUNTER_BRUSH_LOOP1_ANIMATION = 1022070840,
	C2O_MEDCAB_NOCOUNTER_BRUSH_LOOP2_ANIMATION = -1511865982,
	C2O_NEWSPAPER_PULLOUT_ANIMATION = 98977702,
	C2O_PANIC_LOOP1_ANIMATION = -44622714,
	C2O_PANIC_LOOP2_ANIMATION = 1683901756,
	C2O_PANIC_START_ANIMATION = -1651567084,
	C2O_PANIC_STOP_ANIMATION = 579241813,
	C2O_PAPERREAD_LOOP1_ANIMATION = 54519629,
	C2O_PAPERREAD_LOOP2_ANIMATION = -1707690249,
	C2O_PAPERREAD_START_ANIMATION = 1676144095,
	C2O_PAPERREAD_STOP_ANIMATION = -1637467443,
	C2O_PAPER_READ_SIT_LOOP1_ANIMATION = 1261173539,
	C2O_PAPER_READ_SIT_LOOP2_ANIMATION = -769480039,
	C2O_PAPER_READ_SIT_START_ANIMATION = 737407409,
	C2O_PAPER_READ_SIT_STOP_ANIMATION = 944512874,
	C2O_PHONE1_DIALPHONE_ANIMATION = -625699850,
	C2O_PHONE1_EARSPLIT_ANIMATION = -272130377,
	C2O_PHONE1_GETHANDSET_ANIMATION = -1558030035,
	C2O_PHONE1_TALKANGRY_ANIMATION = 1573726734,
	C2O_PHONE1_TALKEXCITED_ANIMATION = -1545685701,
	C2O_PHONE1_TALKHAPPY_ANIMATION = 601984862,
	C2O_PHONE1_TALKNEUTRAL_ANIMATION = 1031285856,
	C2O_PHONE1_TALKSHY_ANIMATION = -307410975,
	C2O_PHONEWALLCLOSE_ANSWER_ANIMATION = 2055474612,
	C2O_PHONEWALLCLOSE_EARSPLIT_ANIMATION = -807584646,
	C2O_PHONEWALLCLOSE_HANGUP_ANIMATION = -985492254,
	C2O_PHONEWALLCLOSE_PHONE1_ANIMATION = -523409136,
	C2O_PHONEWALLCLOSE_PHONE2_ANIMATION = 2042902698,
	C2O_PHONEWALLCLOSE_START_ANIMATION = -857949105,
	C2O_PHONEWALLCLOSE_TALKANGRY_ANIMATION = -1204253023,
	C2O_PHONEWALLCLOSE_TALKEXCITED_ANIMATION = 1543149337,
	C2O_PHONEWALLCLOSE_TALKHAPPY_ANIMATION = -971756559,
	C2O_PHONEWALLCLOSE_TALKNEUTRAL_ANIMATION = -983822782,
	C2O_PHONEWALLCLOSE_TALKSHY_ANIMATION = -1735771756,
	C2O_PHONEWALLSTOOL_ANSWER_ANIMATION = 923955080,
	C2O_PHONEWALLSTOOL_EARSPLIT_ANIMATION = 529664103,
	C2O_PHONEWALLSTOOL_HANGUP_ANIMATION = -1999309090,
	C2O_PHONEWALLSTOOL_PHONE1_ANIMATION = -1386542292,
	C2O_PHONEWALLSTOOL_PHONE2_ANIMATION = 877812374,
	C2O_PHONEWALLSTOOL_START_ANIMATION = -387983313,
	C2O_PHONEWALLSTOOL_TALKANGRY_ANIMATION = -605115060,
	C2O_PHONEWALLSTOOL_TALKEXCITED_ANIMATION = 307038236,
	C2O_PHONEWALLSTOOL_TALKHAPPY_ANIMATION = -1514010596,
	C2O_PHONEWALLSTOOL_TALKNEUTRAL_ANIMATION = -1930718905,
	C2O_PHONEWALLSTOOL_TALKSHY_ANIMATION = -1213672591,
	C2O_PHONE_IDLE_LOOP1_ANIMATION = 1889881573,
	C2O_PHONE_IDLE_LOOP2_ANIMATION = -374596513,
	C2O_PIANO_GETUP_LEFT_ANIMATION = -1045107469,
	C2O_PIANO_GETUP_RIGHT_ANIMATION = -389886949,
	C2O_PIANO_PLAY_LOOP1_ANIMATION = -1276460867,
	C2O_PIANO_PLAY_LOOP2_ANIMATION = 719556871,
	C2O_PIANO_PLAY_LOOP3_ANIMATION = 1575264657,
	C2O_PIANO_PLAY_START_ANIMATION = -751646161,
	C2O_PIANO_PLAY_STOP_ANIMATION = -1680217929,
	C2O_PIANO_SIT_LEFT_ANIMATION = 440051702,
	C2O_PIANO_SIT_RIGHT_ANIMATION = -1737247009,
	C2O_PINBALL_PLAYLOOP1_ANIMATION = 1727077904,
	C2O_PINBALL_PLAYLOOP2_ANIMATION = -503894,
	C2O_PINBALL_PLAYLOOP3_ANIMATION = -1996521668,
	C2O_PINBALL_PLAY_START_ANIMATION = 1470869521,
	C2O_PINBALL_PLAY_STOP_ANIMATION = -1126037340,
	C2O_PIZZA_EAT_GET_ANIMATION = -1812400167,
	C2O_PIZZA_EAT_LOOP1_ANIMATION = -780052380,
	C2O_PIZZA_EAT_LOOP2_ANIMATION = 1216874974,
	C2O_PIZZA_EAT_OPENBOX_ANIMATION = 1476426432,
	C2O_PIZZA_EAT_START_ANIMATION = -1319546122,
	C2O_PIZZA_EAT_STOP_ANIMATION = 761065195,
	C2O_PLANTFLOORRUB_WATER_ANIMATION = -1230753308,
	C2O_PLAYSTRUCTURE_PLAY1_ANIMATION = -586866924,
	C2O_PLAYSTRUCTURE_PLAY2_ANIMATION = 1141657262,
	C2O_PLAYSTRUCTURE_PLAY3_ANIMATION = 856391224,
	C2O_PLAYTRAIN_LOOP1_ANIMATION = 378181504,
	C2O_PLAYTRAIN_LOOP2_ANIMATION = -1887189446,
	C2O_PLAYTRAIN_LOOP3_ANIMATION = -125503828,
	C2O_PLAYTRAIN_START_ANIMATION = 1985125650,
	C2O_PLAYTRAIN_STOP_ANIMATION = -247742832,
	C2O_POOLTABLE_IDLE_ANIMATION = 1009675353,
	C2O_POOLTABLE_IDLE_START_ANIMATION = -120947671,
	C2O_POOLTABLE_RACK_ANIMATION = -572698652,
	C2O_POOLTABLE_SHOOT_ANIMATION = 882957076,
	C2O_POOLTABLE_SWITCHHAND_ANIMATION = 1449741263,
	C2O_POOL_DIVE_DIVEIN_ANIMATION = 1679435428,
	C2O_POOL_DIVE_JUMPIN_ANIMATION = 1727368274,
	C2O_POOL_DIVE_SIDEIN_DIVE_ANIMATION = -399612959,
	C2O_POOL_DIVE_SIDEIN_JUMP_ANIMATION = -651796041,
	C2O_POOL_DIVE_WAITLOOP_ANIMATION = 502424605,
	C2O_POOL_DIVE_WALKON_ANIMATION = -1303896025,
	C2O_POOL_STANDING_LOOP_ANIMATION = -987046641,
	C2O_POOL_SWIM_ADJUST_E_ANIMATION = 1937259379,
	C2O_POOL_SWIM_ADJUST_N_ANIMATION = -458562821,
	C2O_POOL_SWIM_ADJUST_NE_ANIMATION = -29369372,
	C2O_POOL_SWIM_ADJUST_NW_ANIMATION = 226929324,
	C2O_POOL_SWIM_ADJUST_S_ANIMATION = -2018734558,
	C2O_POOL_SWIM_ADJUST_SE_ANIMATION = 22263800,
	C2O_POOL_SWIM_ADJUST_SW_ANIMATION = -219494736,
	C2O_POOL_SWIM_ADJUST_W_ANIMATION = -2134816197,
	C2O_POOL_SWIM_GETOUT_ANIMATION = -2050775433,
	C2O_POOL_SWIM_IDLE1_ANIMATION = 209041703,
	C2O_POOL_SWIM_IDLE2_ANIMATION = -1786976099,
	C2O_POOL_SWIM_IDLE3_ANIMATION = -495200245,
	C2O_POOL_SWIM_LOOP_ANIMATION = -1313618137,
	C2O_POOL_SWIM_START_ANIMATION = 1186980745,
	C2O_POOL_SWIM_TURN_0_ANIMATION = -185058848,
	C2O_POOL_SWIM_TURN_180_CCW_ANIMATION = -633452644,
	C2O_POOL_SWIM_TURN_180_CW_ANIMATION = 1263528039,
	C2O_POOL_SWIM_TURN_45_CCW_ANIMATION = -1788149724,
	C2O_POOL_SWIM_TURN_45_CW_ANIMATION = -1040579900,
	C2O_POOL_SWIM_TURN_90_CCW_ANIMATION = -518677366,
	C2O_POOL_SWIM_TURN_90_CW_ANIMATION = 246691399,
	C2O_RARMCARRY_POOLCUE_ANIMATION = 1576130632,
	C2O_RARM_CARRY_ANIMATION = 1342298210,
	C2O_RARM_CARRY_LOOP_ANIMATION = 1904476793,
	C2O_REACH_FLOORHT_ANIMATION = 1769846652,
	C2O_REACH_SEATHT_ANIMATION = 2123669134,
	C2O_REACH_TABLEHT_ANIMATION = -688982033,
	C2O_REACH_TABLEHT_AROUNDCHAIRL_ANIMATION = -1522112411,
	C2O_REACH_TABLEHT_AROUNDCHAIRR_ANIMATION = 1598641414,
	C2O_REACH_TABLEHT_PAST_CHAIR_START_ANIMATION = 873283365,
	C2O_REACH_TABLEHT_PAST_CHAIR_STOP_ANIMATION = 469886393,
	C2O_RECLINER_NAP_LOOP_ANIMATION = 1652033244,
	C2O_RECLINER_NAP_START_ANIMATION = 1812136924,
	C2O_RECLINER_NAP_STOP_ANIMATION = 2054229380,
	C2O_REFUSE_STRONG_ANIMATION = -628673306,
	C2O_REFUSE_SUBTLE_ANIMATION = 2075461110,
	C2O_REPEAR_RESURRECT_ANIMATION = 2009462548,
	C2O_REPOSSESS_ANIMATION = -1457355966,
	C2O_ROACH_FREAK_LOOP1_ANIMATION = -857567820,
	C2O_ROACH_FREAK_LOOP2_ANIMATION = 1441520654,
	C2O_ROACH_FREAK_LOOP3_ANIMATION = 585952408,
	C2O_ROACH_FREAK_START_ANIMATION = -1405450458,
	C2O_ROACH_FREAK_STOP_ANIMATION = -107390213,
	C2O_ROACH_SPRAY_END_ANIMATION = 210796186,
	C2O_ROACH_SPRAY_LOOP1_ANIMATION = 794203999,
	C2O_ROACH_SPRAY_LOOP2_ANIMATION = -1235237147,
	C2O_ROACH_SPRAY_START_ANIMATION = 1334746573,
	C2O_ROACH_STOMP_LOOP1_ANIMATION = -1190804833,
	C2O_ROACH_STOMP_LOOP2_ANIMATION = 537695013,
	C2O_ROACH_STOMP_START_ANIMATION = -639776755,
	C2O_ROACH_STOMP_STOP_ANIMATION = 1953885497,
	C2O_ROBOT_ACTIVATE_ANIMATION = 1833471893,
	C2O_ROBOT_CONTROL_LOOP1_ANIMATION = 1337361541,
	C2O_ROBOT_CONTROL_LOOP2_ANIMATION = -692071105,
	C2O_ROBOT_CONTROL_LOOP3_ANIMATION = -1581718103,
	C2O_ROBOT_CONTROL_START_ANIMATION = 795774487,
	C2O_ROBOT_CONTROL_STOP_ANIMATION = 2115349740,
	C2O_ROUTE_FAILURE_NOPOINT_ANIMATION = 184548507,
	C2O_ROUTE_FAILURE_SEATED_NOPOINT_ANIMATION = -121189011,
	C2O_ROUTING_FAILURE_ANIMATION = 499882999,
	C2O_ROUTING_FAILURE_SEATED_ANIMATION = 211081442,
	C2O_RUNNING_ADJUST_E_ANIMATION = 1369287620,
	C2O_RUNNING_ADJUST_N_ANIMATION = -967871924,
	C2O_RUNNING_ADJUST_NE_ANIMATION = -1424484261,
	C2O_RUNNING_ADJUST_NW_ANIMATION = 1486973203,
	C2O_RUNNING_ADJUST_S_ANIMATION = -1521934699,
	C2O_RUNNING_ADJUST_SE_ANIMATION = 1416918087,
	C2O_RUNNING_ADJUST_SW_ANIMATION = -1479736049,
	C2O_RUNNING_ADJUST_W_ANIMATION = -1574643060,
	C2O_RUNNING_LOOP_ANIMATION = -989366201,
	C2O_RUNNING_START_ANIMATION = 192493166,
	C2O_RUNNING_STOP_ANIMATION = -586255585,
	C2O_RUNNING_TURN_0_ANIMATION = -891582226,
	C2O_RUNNING_TURN_180_CCW_ANIMATION = 1373753090,
	C2O_RUNNING_TURN_180_CW_ANIMATION = 713006141,
	C2O_RUNNING_TURN_45_CCW_ANIMATION = -195332994,
	C2O_RUNNING_TURN_45_CW_ANIMATION = -1703834854,
	C2O_RUNNING_TURN_90_CCW_ANIMATION = -2144999216,
	C2O_RUNNING_TURN_90_CW_ANIMATION = 1430241177,
	C2O_SALUTE_ANIMATION = 1069373615,
	C2O_SANDBX_BUILD_LOOP1_ANIMATION = 1050068238,
	C2O_SANDBX_BUILD_LOOP2_ANIMATION = -1482713932,
	C2O_SANDBX_BUILD_LOOP3_ANIMATION = -795302878,
	C2O_SANDBX_BUILD_START_ANIMATION = 1582223260,
	C2O_SANDBX_BUILD_STOP_ANIMATION = -271470936,
	C2O_SANDBX_DESTROY_ANIMATION = 625554701,
	C2O_SATED_ANIMATION = 1114960440,
	C2O_SATED2_ANIMATION = 848654945,
	C2O_SATEDSTART_ANIMATION = 1151620959,
	C2O_SELL_PAINTING_ANIMATION = 1919990205,
	C2O_SHAKEHEAD_ANIMATION = -319090668,
	C2O_SHOWER1_CLEAN_ANIMATION = 1916583100,
	C2O_SHOWER1_GETIN_ANIMATION = 797513401,
	C2O_SHOWER1_GETOUT_ANIMATION = -1590866058,
	C2O_SHOWER1_SCRUB1LOOP_ANIMATION = 876369015,
	C2O_SHRUG_ANIMATION = -398818581,
	C2O_SINK_TURNON_LEFTHAND_ANIMATION = 17058728,
	C2O_SINK_WASHDISHES_LOOP_ANIMATION = 1555657288,
	C2O_SINK_WASHDISHES_START_ANIMATION = -1688234507,
	C2O_SINK_WASHDISHES_STOP_ANIMATION = 1152416016,
	C2O_SINK_WASHHANDS_ANIMATION = -261673385,
	C2O_SITTING_FLOOR_LOOP_ANIMATION = -824253498,
	C2O_SIT_BEHIND_ANIMATION = -365477026,
	C2O_SIT_BEHIND_COMFY_ANIMATION = -1128878013,
	C2O_SIT_FLOOR_ANIMATION = 586290144,
	C2O_SIT_FRONT_ANIMATION = 1649190712,
	C2O_SIT_FRONT_COMFY_ANIMATION = -329822018,
	C2O_SIT_LEFT_ANIMATION = -995852148,
	C2O_SIT_LEFT_COMFY_ANIMATION = -791430452,
	C2O_SIT_LOOP_ANIMATION = 530348554,
	C2O_SIT_REACH_TABLE_ANIMATION = 320768710,
	C2O_SIT_RELAXED_LOOP1_ANIMATION = 1253826477,
	C2O_SIT_RELAXED_LOOP2_ANIMATION = -743272937,
	C2O_SIT_RELAXED_LOOP3_ANIMATION = -1531593087,
	C2O_SIT_RELAXED_SITBACK_ANIMATION = -2007461994,
	C2O_SIT_RELAXED_SITUP_ANIMATION = -623810248,
	C2O_SIT_RELAXED_SOFA_LOOP1_ANIMATION = 123068709,
	C2O_SIT_RELAXED_SOFA_LOOP2_ANIMATION = -1638092641,
	C2O_SIT_RELAXED_SOFA_LOOP3_ANIMATION = -379879415,
	C2O_SIT_RELAXED_SOFA_SITBACK_ANIMATION = -1167864432,
	C2O_SIT_RELAXED_SOFA_SITUP_ANIMATION = -1757456464,
	C2O_SIT_RIGHT_ANIMATION = 679325914,
	C2O_SIT_RIGHT_COMFY_ANIMATION = 1350645367,
	C2O_SIT_SCOOT_ANIMATION = 1005764209,
	C2O_SIT_SCOOT_CUTFOOD_ANIMATION = 1357196929,
	C2O_SIT_SCOOT_CUTFOOD_START_ANIMATION = -1005211135,
	C2O_SIT_SCOOT_CUTFOOD_STOP_ANIMATION = 186615081,
	C2O_SIT_SCOOT_LOOP_ANIMATION = 2030188561,
	C2O_SIT_SCOOT_STABFOOD_LIFT_ANIMATION = -1968663518,
	C2O_SIT_SCOOT_STABFOOD_RETURN_ANIMATION = 253665698,
	C2O_SIT_SLEEP_LOOP_ANIMATION = 144373328,
	C2O_SIT_SLEEP_START_ANIMATION = -2006503897,
	C2O_SIT_SLEEP_STOP_ANIMATION = 278134024,
	C2O_SIT_VAIN_ANIMATION = -2030863842,
	C2O_SLEEPY1_ANIMATION = -983351513,
	C2O_SLEEPY2_ANIMATION = 1550479005,
	C2O_SMELLY_ANIMATION = 44607181,
	C2O_SMELLY2_ANIMATION = -16602970,
	C2O_SOFA_LIEDOWNX2_ANIMATION = 554543526,
	C2O_SOFA_LIEDOWNX3_ANIMATION = 1443535152,
	C2O_SOFA_NAPX2_ANIMATION = -1815380498,
	C2O_SOFA_NAPX3_ANIMATION = -456372872,
	C2O_SOFA_SITUPX2_ANIMATION = -1278817733,
	C2O_SOFA_SITUPX3_ANIMATION = -993920339,
	C2O_SPRINKLER_FALL_STAND_ANIMATION = -1161209905,
	C2O_SPRINKLER_JUMP_1TILE_ANIMATION = -1780648551,
	C2O_SPRINKLER_JUMP_1TILE_FALL_ANIMATION = -1720676528,
	C2O_SPRINKLER_JUMP_2TILE_ANIMATION = -763556023,
	C2O_SPRINKLER_JUMP_2TILE_FALL_ANIMATION = 1917269075,
	C2O_SPRINKLER_JUMP_TURN_L_ANIMATION = 1975934417,
	C2O_SPRINKLER_JUMP_TURN_R_ANIMATION = -1882627918,
	C2O_SPRINKLER_ON_OFF_ANIMATION = -1321493691,
	C2O_SPRINKLER_PLAY_LOOP1_ANIMATION = 1422762020,
	C2O_SPRINKLER_PLAY_LOOP2_ANIMATION = -842731106,
	C2O_SPRINKLER_PLAY_LOOP3_ANIMATION = -1161576184,
	C2O_SPRINKLER_PLAY_START_ANIMATION = 873835190,
	C2O_SPRINKLER_PLAY_STOP_ANIMATION = 76838585,
	C2O_STANDING_ADJUST_E_ANIMATION = 1771612672,
	C2O_STANDING_ADJUST_N_ANIMATION = -28675192,
	C2O_STANDING_ADJUST_NE_ANIMATION = 925441011,
	C2O_STANDING_ADJUST_NW_ANIMATION = -997168453,
	C2O_STANDING_ADJUST_S_ANIMATION = -1655955631,
	C2O_STANDING_ADJUST_SE_ANIMATION = -934971409,
	C2O_STANDING_ADJUST_SW_ANIMATION = 1006372519,
	C2O_STANDING_ADJUST_W_ANIMATION = -1709057208,
	C2O_STANDING_LOOP_ANIMATION = -35165353,
	C2O_STANDING_TURN_0_ANIMATION = 78111617,
	C2O_STANDING_TURN_180_CCW_ANIMATION = -59141953,
	C2O_STANDING_TURN_180_CW_ANIMATION = -710383785,
	C2O_STANDING_TURN_45_CCW_ANIMATION = 193761044,
	C2O_STANDING_TURN_45_CW_ANIMATION = 1122013635,
	C2O_STANDING_TURN_90_CCW_ANIMATION = 2146571194,
	C2O_STANDING_TURN_90_CW_ANIMATION = -1917934272,
	C2O_STAND_BEHIND_ANIMATION = -969399673,
	C2O_STAND_BEHIND_COMFY_ANIMATION = 1155599499,
	C2O_STAND_FRONT_ANIMATION = -1263274618,
	C2O_STAND_FRONT_COMFY_ANIMATION = -649727645,
	C2O_STAND_LEFT_ANIMATION = -313141716,
	C2O_STAND_LEFT_COMFY_ANIMATION = 2010815972,
	C2O_STAND_RIGHT_ANIMATION = -24976796,
	C2O_STAND_RIGHT_COMFY_ANIMATION = 1704171434,
	C2O_STAND_SLEEP_LOOP_ANIMATION = -1349267080,
	C2O_STAND_SLEEP_START_ANIMATION = -1116368902,
	C2O_STAND_SLEEP_STOP_ANIMATION = -1214588384,
	C2O_STARTEAT_STAND_ANIMATION = 123091759,
	C2O_STEP_DOWN_ANIMATION = -873657409,
	C2O_STEP_UP_ANIMATION = -797097597,
	C2O_STEREOX_SWITCHSTATION_ANIMATION = -1240637533,
	C2O_STEREO_BOOMBOX_TURNON_ANIMATION = -1427125552,
	C2O_STEREO_EXPENSIVE_TURNON_ANIMATION = -1489454820,
	C2O_STEREO_SWITCHSTATION_ANIMATION = -1580535672,
	C2O_STEREO_TURNON_ANIMATION = -454497183,
	C2O_STOPEAT_ANIMATION = -1564513080,
	C2O_STOPEAT_STAND_ANIMATION = 658630605,
	C2O_STRESS_ANIMATION = -2134319081,
	C2O_TABLELAMP_TURNON_ANIMATION = -855842070,
	C2O_TABLEPLANT_WATER_ANIMATION = -1122471408,
	C2O_TALKTOHAND_ANIMATION = 516997347,
	C2O_TALKTOHANDSTART_ANIMATION = 685559513,
	C2O_TANTRUM_ANIMATION = -710035991,
	C2O_TELESCOPE_ABDUCTION_ANIMATION = 231752343,
	C2O_TELESCOPE_LOOK_LOOP1_ANIMATION = 1445908624,
	C2O_TELESCOPE_LOOK_LOOP2_ANIMATION = -819494614,
	C2O_TELESCOPE_LOOK_LOOP3_ANIMATION = -1205816900,
	C2O_TELESCOPE_LOOK_START_ANIMATION = 922147330,
	C2O_TELESCOPE_LOOK_STOP_ANIMATION = -1971861382,
	C2O_TOASTEROVEN_FOODCHECK_ANIMATION = 343577630,
	C2O_TOASTEROVEN_GETFOOD_ANIMATION = -1760525799,
	C2O_TOASTEROVEN_GET_FOOD_ANIMATION = 876851700,
	C2O_TOASTEROVEN_PUTFOOD_ANIMATION = 918495938,
	C2O_TOASTEROVEN_WAITLOOP_ANIMATION = 21540993,
	C2O_TOILET1_CLEAN_ANIMATION = -1975260496,
	C2O_TOILET1_CLEANSTART_ANIMATION = 1922596143,
	C2O_TOILET1_CLEANSTOP_ANIMATION = -520251882,
	C2O_TOILET1_FLUSH_ANIMATION = -820898986,
	C2O_TOILET1_LOWERSEAT_ANIMATION = -83768442,
	C2O_TOILET1_RAISESEAT_ANIMATION = -1171845680,
	C2O_TOILET1_SITTINGGO_ANIMATION = -577955881,
	C2O_TOYBOX_CAR_PLAY_LOOP_ANIMATION = 1020448672,
	C2O_TOYBOX_DOLL_PLAY_LOOP_ANIMATION = 2024306601,
	C2O_TOYBOX_PLANE_PLAY_LOOP_ANIMATION = 420950708,
	C2O_TOYBOX_PLAY_STOP_ANIMATION = -607514925,
	C2O_TOYBOX_TEDDYBEAR_PLAY_LOOP_ANIMATION = 1470105981,
	C2O_TOYBOX_TOY_GET_ANIMATION = 451806041,
	C2O_TRAINSETLARGE_PLAYLOOP1_ANIMATION = -1079722342,
	C2O_TRAINSETLARGE_PLAYLOOP2_ANIMATION = 648933152,
	C2O_TRAINSETLARGE_PLAY_START_ANIMATION = 1512017807,
	C2O_TRAINSETLARGE_PLAY_STOP_ANIMATION = 1706534958,
	C2O_TRAINSETSMALL_WATCH_LOOP1_ANIMATION = -682796200,
	C2O_TRAINSETSMALL_WATCH_LOOP2_ANIMATION = 1313082082,
	C2O_TRAINSETSMALL_WATCH_START_ANIMATION = -1214950966,
	C2O_TRAINSETSMALL_WATCH_STOP_ANIMATION = 1475005870,
	C2O_TRASHBAG_CARRY_ANIMATION = -1878849652,
	C2O_TRASHCANOUT_PUT_ANIMATION = -316809092,
	C2O_TRASHCAN_EMPTY_ANIMATION = -2102890516,
	C2O_TRASHCAN_TRASH_THROWAWAY_ANIMATION = 2017548954,
	C2O_TRASHCOMPACTOR_EMPTY_ANIMATION = -775021812,
	C2O_TRASHCOMPACTOR_TRASH_THROWAWAY_ANIMATION = -430596316,
	C2O_TUB1_CLEAN_ANIMATION = -226518703,
	C2O_TUB1_DRAIN_ANIMATION = 1061766969,
	C2O_TUB1_GETINL_ANIMATION = -1044267544,
	C2O_TUB1_GETINR_ANIMATION = 1003389067,
	C2O_TUB1_GETOUTL_ANIMATION = -1266957611,
	C2O_TUB1_GETOUTR_ANIMATION = 1316290486,
	C2O_TUB1_LATHER1LOOP_ANIMATION = -2073667075,
	C2O_TUB1_LIEBACK_ANIMATION = -291755486,
	C2O_TUB1_LUXURIATE_ANIMATION = -1827324557,
	C2O_TUB1_SCRUB1LOOP_ANIMATION = 986424263,
	C2O_TUB1_SCRUB2LOOP_ANIMATION = 2104219927,
	C2O_TUB1_SCRUB3LOOP_ANIMATION = 1074524327,
	C2O_TUB1_TURNOFFL_ANIMATION = -10487957,
	C2O_TUB1_TURNOFFR_ANIMATION = 89180680,
	C2O_TUB1_TURNONL_ANIMATION = 2012940453,
	C2O_TUB1_TURNONR_ANIMATION = -1913375290,
	C2O_TUBM_CLEAN_ANIMATION = -642309362,
	C2O_TUBM_DRAIN_ANIMATION = 344063334,
	C2O_TUBM_GETINL_ANIMATION = 977156407,
	C2O_TUBM_GETINR_ANIMATION = -1070529452,
	C2O_TUBM_GETOUTL_ANIMATION = -1561529836,
	C2O_TUBM_GETOUTR_ANIMATION = 1491324791,
	C2O_TUBM_LATHER1LOOP_ANIMATION = -1540842366,
	C2O_TUBM_LIEBACK_ANIMATION = -133489949,
	C2O_TUBM_LUXURIATE_ANIMATION = 1731067207,
	C2O_TUBM_SCRUB1LOOP_ANIMATION = 462122930,
	C2O_TUBM_SCRUB2LOOP_ANIMATION = 1546327394,
	C2O_TUBM_SCRUB3LOOP_ANIMATION = 1632320722,
	C2O_TUBM_TURNOFFL_ANIMATION = 321557117,
	C2O_TUBM_TURNOFFR_ANIMATION = -383406306,
	C2O_TUBM_TURNONL_ANIMATION = 1634482276,
	C2O_TUBM_TURNONR_ANIMATION = -1688009465,
	C2O_TUBX_CLEAN_ANIMATION = -330198937,
	C2O_TUBX_DRAIN_ANIMATION = 560418319,
	C2O_TUBX_GETINL_ANIMATION = 241501816,
	C2O_TUBX_GETINR_ANIMATION = -194364645,
	C2O_TUBX_GETOUTL_ANIMATION = 1153168682,
	C2O_TUBX_GETOUTR_ANIMATION = -1095448503,
	C2O_TUBX_LATHER1LOOPL_ANIMATION = 1282112167,
	C2O_TUBX_LATHER1LOOPR_ANIMATION = -1234942012,
	C2O_TUBX_LIEBACKL_ANIMATION = 1427378242,
	C2O_TUBX_LIEBACKR_ANIMATION = -1357173471,
	C2O_TUBX_LUXURIATEL_ANIMATION = -787709676,
	C2O_TUBX_LUXURIATER_ANIMATION = 721665143,
	C2O_TUBX_SCRUB1LOOPL_ANIMATION = 557100592,
	C2O_TUBX_SCRUB1LOOPR_ANIMATION = -616852653,
	C2O_TUBX_SCRUB2LOOPL_ANIMATION = -1482629986,
	C2O_TUBX_SCRUB2LOOPR_ANIMATION = 1571807741,
	C2O_TUBX_SCRUB3LOOPL_ANIMATION = 1828458299,
	C2O_TUBX_SCRUB3LOOPR_ANIMATION = -1762446760,
	C2O_TUBX_TURNOFFL_ANIMATION = -760358703,
	C2O_TUBX_TURNOFFR_ANIMATION = 681764274,
	C2O_TUBX_TURNONL_ANIMATION = -2026160294,
	C2O_TUBX_TURNONR_ANIMATION = 2100560441,
	C2O_TV1_SURF_ANIMATION = -830096897,
	C2O_TV1_WATCHCRY_SIT_ANIMATION = -7609003,
	C2O_TV1_WATCHCRY_STAND_ANIMATION = -241149111,
	C2O_TV1_WATCHLAUGH_SIT_ANIMATION = 2037225725,
	C2O_TV1_WATCHLAUGH_STAND_ANIMATION = -1177884977,
	C2O_TVSMALL_TURNON_ANIMATION = 431103947,
	C2O_TV_SITTANTRUM_ANIMATION = 1317114454,
	C2O_TV_SIT_SURF_ANIMATION = -1058896889,
	C2O_UNCOMFORTABLE1_ANIMATION = -1573919344,
	C2O_UNCOMFORTABLE1START_ANIMATION = -139796845,
	C2O_UNCOMFORTABLE2_ANIMATION = 992392234,
	C2O_VANITY_IDLE1_ANIMATION = -33172956,
	C2O_VANITY_IDLE2_ANIMATION = 1728873374,
	C2O_VR_PLAY_LOOP1_ANIMATION = 768189893,
	C2O_VR_PLAY_LOOP2_ANIMATION = -1262422913,
	C2O_VR_PLAY_LOOP3_ANIMATION = -1010318103,
	C2O_VR_PLAY_START_ANIMATION = 1293004631,
	C2O_VR_PLAY_STOP_ANIMATION = -601279568,
	C2O_WALKING_FAST_LOOP_ANIMATION = 1822676108,
	C2O_WALKING_HALF_LOOP_ANIMATION = 2078884009,
	C2O_WALKING_LOOP_ANIMATION = 233385324,
	C2O_WALKING_QUARTER_LOOP_ANIMATION = -506286832,
	C2O_WALKING_START_ANIMATION = -1492311685,
	C2O_WALKING_STOP_LEFT_ANIMATION = 1584964311,
	C2O_WALKING_STOP_RIGHT_ANIMATION = -731978620,
	C2O_WALKING_TURN_45_CCW_LEFT_ANIMATION = -382770104,
	C2O_WALKING_TURN_45_CCW_RIGHT_ANIMATION = -1269219945,
	C2O_WALKING_TURN_45_CW_LEFT_ANIMATION = 2121656141,
	C2O_WALKING_TURN_45_CW_RIGHT_ANIMATION = -995847269,
	C2O_WALKING_TURN_90_CCW_LEFT_ANIMATION = -997006837,
	C2O_WALKING_TURN_90_CCW_RIGHT_ANIMATION = 1537314875,
	C2O_WALKING_TURN_90_CW_LEFT_ANIMATION = -1055118926,
	C2O_WALKING_TURN_90_CW_RIGHT_ANIMATION = -384231976,
	C2O_WALLAMP_TURNON_ANIMATION = 801769464,
	CARD_TABLE_A_00_ANIMATION = -1475191913,
	CARD_TABLE_A_01_ANIMATION = -552244479,
	CARD_TABLE_A_02_ANIMATION = 1176255163,
	CARD_TABLE_A_03_ANIMATION = 823855661,
	CARD_TABLE_A_04_ANIMATION = -1350590578,
	CARRY_FRUITCAKE_01_ANIMATION = -81004190,
	CARRY_FRUITCAKE_02_ANIMATION = 1646438616,
	CARRY_FRUITCAKE_03_ANIMATION = 354785358,
	CARRY_FRUITCAKE_04_ANIMATION = -1958670867,
	CARRY_FRUITCAKE_05_ANIMATION = -62505605,
	CARRY_FRUITCAKE_06_ANIMATION = 1699704001,
	CARRY_FRUITCAKE_07_ANIMATION = 306732119,
	CARRY_GIFT_CHOCOLATES_CLOSED_ANIMATION = -238410685,
	CARRY_GIFT_CHOCOLATES_EMPTY_ANIMATION = 1785384371,
	CARRY_GIFT_CHOCOLATES_FULL_ANIMATION = 538749251,
	CARRY_GIFT_CHOCOLATES_HALF_EMPTY_ANIMATION = -2008595318,
	CARRY_GIFT_CHOCOLATES_OPEN_ANIMATION = 1679031879,
	CARRY_GIFT_CHOCOLATES_OPENING_ANIMATION = 2099040041,
	CARRY_PIZZABOX_A_00_ANIMATION = 1578308719,
	CARRY_PIZZABOX_A_01_ANIMATION = 689186041,
	CARRY_PIZZABOX_A_02_ANIMATION = -1340246717,
	CARRY_PIZZABOX_A_03_ANIMATION = -954579499,
	CARRY_PIZZABOX_A_04_ANIMATION = 1501483126,
	CARRY_PIZZABOX_A_05_ANIMATION = 779739360,
	CARRY_PIZZABOX_A_06_ANIMATION = -1217351334,
	CARRY_PIZZABOX_A_07_ANIMATION = -1065909812,
	CARRY_PIZZABOX_A_08_ANIMATION = 1355324509,
	CARVING_BLOCK_A_00_ANIMATION = 1290770716,
	CARVING_BLOCK_A_01_ANIMATION = 1005103498,
	CARVING_BLOCK_A_02_ANIMATION = -1562249168,
	CARVING_BLOCK_A_03_ANIMATION = -706295642,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_A_00_ANIMATION = -1702066929,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_A_01_ANIMATION = -309611111,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_A_02_ANIMATION = 1954735139,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_A_03_ANIMATION = 59102389,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_L_A_00_ANIMATION = -1902461578,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_L_A_01_ANIMATION = -107115040,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_L_A_02_ANIMATION = 1620368474,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_L_A_03_ANIMATION = 395570380,
	CHUCK_MATEWELL_CHESS_SET_A00_ANIMATION = -204337732,
	CHUCK_MATEWELL_CHESS_SET_A01_ANIMATION = -2066399958,
	CHUCK_MATEWELL_CHESS_SET_A02_ANIMATION = 500984976,
	DECKCHAIR_BY_SURVIVAL_00_ANIMATION = 960219617,
	DECKCHAIR_BY_SURVIVAL_01_ANIMATION = 1312618871,
	DECKCHAIR_BY_SURVIVAL_02_ANIMATION = -684349235,
	DECKCHAIR_BY_SURVIVAL_03_ANIMATION = -1607296933,
	DECKCHAIR_BY_SURVIVAL_04_ANIMATION = 1045827064,
	DECKCHAIR_BY_SURVIVAL_05_ANIMATION = 1230060910,
	DECKCHAIR_BY_SURVIVAL_06_ANIMATION = -799511340,
	DISH_DUSTER_DELUXE_A_00_ANIMATION = 426515598,
	DISH_DUSTER_DELUXE_A_01_ANIMATION = 1852517400,
	DISH_DUSTER_DELUXE_A_02_ANIMATION = -144540254,
	DISH_DUSTER_DELUXE_A_03_ANIMATION = -2140844748,
	DISH_DUSTER_DELUXE_A_04_ANIMATION = 503437463,
	DISH_DUSTER_DELUXE_A_05_ANIMATION = 1762060289,
	ECHINOPSIS_MAXIMUS_CACTUS_A_00_ANIMATION = 1442978370,
	ECHINOPSIS_MAXIMUS_CACTUS_A_01_ANIMATION = 553986772,
	ECHINOPSIS_MAXIMUS_CACTUS_A_02_ANIMATION = -1207141522,
	ELITE_REFLECTIONS_CHROME_LAMP_A_00_ANIMATION = -836524817,
	ELITE_REFLECTIONS_CHROME_LAMP_A_01_ANIMATION = -1188785031,
	EMPRESS_DINING_CHAIR_00_ANIMATION = -2010108651,
	EMPRESS_DINING_CHAIR_01_ANIMATION = -13165181,
	EMPRESS_DINING_CHAIR_02_ANIMATION = 1715358777,
	EMPRESS_DINING_CHAIR_03_ANIMATION = 288980143,
	EMPRESS_DINING_CHAIR_04_ANIMATION = -1889670900,
	EMPRESS_DINING_CHAIR_05_ANIMATION = -128263782,
	EMPRESS_DINING_CHAIR_06_ANIMATION = 1632864288,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_00_ANIMATION = 950876241,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_01_ANIMATION = 1336543431,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_02_ANIMATION = -693937795,
	FEDERAL_LATTICE_WINDOW_DOOR_A_00_ANIMATION = 1976191791,
	FEDERAL_LATTICE_WINDOW_DOOR_A_01_ANIMATION = 47020985,
	FIGHT_3D_PART_A_00_ANIMATION = -684746880,
	FIREBRAND_SMOKE_DETECTOR_00_ANIMATION = 1016155646,
	FIREBRAND_SMOKE_DETECTOR_01_ANIMATION = 1268153704,
	FIREBRAND_SMOKE_DETECTOR_02_ANIMATION = -761320238,
	FIREBRAND_SMOKE_DETECTOR_03_ANIMATION = -1516757948,
	FLIES_A_00_ANIMATION = -437838253,
	FLIES_A_01_ANIMATION = -1830801723,
	FLIES_A_02_ANIMATION = 199851903,
	FLUSH_FORCE_5_XLT_A_00_ANIMATION = 561470833,
	FLUSH_FORCE_5_XLT_A_01_ANIMATION = 1450208743,
	FLUSH_FORCE_5_XLT_A_02_ANIMATION = -814138275,
	FLUSH_FORCE_5_XLT_A_03_ANIMATION = -1199698741,
	FLUSH_FORCE_5_XLT_A_04_ANIMATION = 639277416,
	FLUSH_FORCE_5_XLT_A_05_ANIMATION = 1360898558,
	FREEZE_SECRET_REFRIGERATOR_A_00_ANIMATION = 63719162,
	FREEZE_SECRET_REFRIGERATOR_A_01_ANIMATION = 1959491180,
	FREEZE_SECRET_REFRIGERATOR_A_02_ANIMATION = -306042922,
	FREEZE_SECRET_REFRIGERATOR_A_03_ANIMATION = -1698359488,
	FREEZE_SECRET_REFRIGERATOR_A_04_ANIMATION = 77693667,
	FREEZE_SECRET_REFRIGERATOR_A_05_ANIMATION = 1940304501,
	FUZZY_LOGIC_DISHWASHER_A_00_ANIMATION = -509547830,
	FUZZY_LOGIC_DISHWASHER_A_02_ANIMATION = 263097318,
	FUZZY_LOGIC_DISHWASHER_A_03_ANIMATION = 2024389488,
	FUZZY_LOGIC_DISHWASHER_A_04_ANIMATION = -422760749,
	FUZZY_LOGIC_DISHWASHER_A_05_ANIMATION = -1849024955,
	GRANDFATHER_CLOCK_A_00_ANIMATION = 1493903213,
	GRANDFATHER_CLOCK_A_01_ANIMATION = 772544507,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_A_00_ANIMATION = -110537775,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_A_01_ANIMATION = -1905368249,
	HAPPYFACE_ANIMATION = 1860793079,
	HYDRONOMIC_KITCHEN_SINK_A_00_ANIMATION = -1591926930,
	HYDRONOMIC_KITCHEN_SINK_A_01_ANIMATION = -702926856,
	HYDROTHERA_BATHTUB_A_00_ANIMATION = 309637161,
	HYDROTHERA_BATHTUB_A_01_ANIMATION = 1702068415,
	HYDROTHERA_BATHTUB_A_02_ANIMATION = -59059963,
	HYDROTHERA_BATHTUB_A_03_ANIMATION = -1954684525,
	HYDROTHERA_BATHTUB_A_04_ANIMATION = 353989680,
	HYDROTHERA_BATHTUB_A_05_ANIMATION = 1646150822,
	HYGEIA_O_MATIC_TOILET_A_00_ANIMATION = 1356622357,
	HYGEIA_O_MATIC_TOILET_A_01_ANIMATION = 668686979,
	HYGEIA_O_MATIC_TOILET_A_02_ANIMATION = -1093530823,
	HYGEIA_O_MATIC_TOILET_A_03_ANIMATION = -908772433,
	HYGEIA_O_MATIC_TOILET_A_04_ANIMATION = 1471262220,
	HYGEIA_O_MATIC_TOILET_A_05_ANIMATION = 548839066,
	ICE_CHEST_A_00_ANIMATION = -1902574209,
	ICE_CHEST_A_01_ANIMATION = -107072023,
	JADE_PLANT_A_00_ANIMATION = 2014968137,
	JADE_PLANT_A_01_ANIMATION = 253675999,
	JADE_PLANT_A_02_ANIMATION = -1776838555,
	JUNK_GENIE_TRASH_COMPACTOR_A00_ANIMATION = -1081255697,
	JUNK_GENIE_TRASH_COMPACTOR_A01_ANIMATION = -930453383,
	JUNK_GENIE_TRASH_COMPACTOR_A02_ANIMATION = 1367554499,
	JUNK_GENIE_TRASH_COMPACTOR_A03_ANIMATION = 646187349,
	JUNK_GENIE_TRASH_COMPACTOR_A04_ANIMATION = -1193239306,
	JUNK_GENIE_TRASH_COMPACTOR_A05_ANIMATION = -806900640,
	JUSTA_BATHTUB_A_00_ANIMATION = -1656974571,
	JUSTA_BATHTUB_A_01_ANIMATION = -365190269,
	JUSTA_BATHTUB_A_02_ANIMATION = 1932718649,
	JUSTA_BATHTUB_A_03_ANIMATION = 70632111,
	JUSTA_BATHTUB_A_04_ANIMATION = -1705945332,
	JUSTA_BATHTUB_A_05_ANIMATION = -313104486,
	KINDERSTUFF_DRESSER_00_ANIMATION = -691900243,
	KINDERSTUFF_DRESSER_03_ANIMATION = 1338712343,
	KRAFTKING_WOODWORKING_TABLE_A_00_ANIMATION = 487391293,
	KRAFTKING_WOODWORKING_TABLE_A_01_ANIMATION = 1779052715,
	KRAFTKING_WOODWORKING_TABLE_A_02_ANIMATION = -217882351,
	KRAFTKING_WOODWORKING_TABLE_A_03_ANIMATION = -2080091769,
	KRAFTKING_WOODWORKING_TABLE_A_04_ANIMATION = 442549284,
	LLAMARK_REFRIDGERATOR_A_00_ANIMATION = -1637496463,
	LLAMARK_REFRIDGERATOR_A_01_ANIMATION = -379389465,
	LLAMARK_REFRIDGERATOR_A_02_ANIMATION = 1886103645,
	LLAMARK_REFRIDGERATOR_A_03_ANIMATION = 124557515,
	LLAMARK_REFRIDGERATOR_A_04_ANIMATION = -1727525528,
	LLAMARK_REFRIDGERATOR_A_05_ANIMATION = -300990978,
	MAGIC_MYSTERY_TOY_BOX_A00_ANIMATION = -1856173054,
	MAGIC_MYSTERY_TOY_BOX_A01_ANIMATION = -430293868,
	MAGIC_MYSTERY_TOY_BOX_A02_ANIMATION = 2136173870,
	MAGIC_MYSTERY_TOY_BOX_A03_ANIMATION = 139746744,
	MAILBOX_A_00_ANIMATION = -1503385555,
	MAILBOX_A_03_ANIMATION = 1064139159,
	MAILBOX_A_04_ANIMATION = -1593185228,
	MAILBOX_A_07_ANIMATION = 939572622,
	MASTER_SUITE_TUB_A_00_ANIMATION = 162457383,
	MASTER_SUITE_TUB_A_01_ANIMATION = 2125060017,
	MASTER_SUITE_TUB_A_02_ANIMATION = -408910325,
	MEDICINE_CABINET_A_00_ANIMATION = -688707459,
	MEDICINE_CABINET_A_01_ANIMATION = -1577838357,
	MEDICINE_CABINET_A_02_ANIMATION = 956123473,
	MODERN_MISSION_BED_A_00_ANIMATION = 1479155879,
	MODERN_MISSION_BED_A_01_ANIMATION = 791482417,
	MODERN_MISSION_BED_A_02_ANIMATION = -1239137909,
	MODERN_MISSION_BED_A_03_ANIMATION = -1054641891,
	MODERN_MISSION_BED_L_A_00_ANIMATION = 1324883542,
	MODERN_MISSION_BED_L_A_01_ANIMATION = 973024960,
	MODERN_MISSION_BED_L_A_02_ANIMATION = -1594458246,
	MODERN_MISSION_BED_L_A_03_ANIMATION = -672051220,
	MONKEY_BUTLER_HUT_A_00_ANIMATION = 1095181068,
	MONKEY_BUTLER_HUT_A_01_ANIMATION = 910168986,
	MONKEY_BUTLER_HUT_A_02_ANIMATION = -1354153440,
	MONTICELLO_DOOR_A_00_ANIMATION = 1835944632,
	MONTICELLO_DOOR_A_01_ANIMATION = 443120174,
	MR_REGULAR_JOE_COFFEE_A_00_ANIMATION = 1769101498,
	MR_REGULAR_JOE_COFFEE_A_01_ANIMATION = 511010860,
	MULBERRY_TREE_A_00_ANIMATION = 977945372,
	NAPOLEAN_SLEIGH_BED_A_00_ANIMATION = -260549791,
	NAPOLEAN_SLEIGH_BED_A_01_ANIMATION = -2021694473,
	NAPOLEAN_SLEIGH_BED_A_02_ANIMATION = 511062605,
	NAPOLEAN_SLEIGH_BED_A_03_ANIMATION = 1769013979,
	NAPOLEAN_SLEIGH_BED_L_A_00_ANIMATION = 441771594,
	NAPOLEAN_SLEIGH_BED_L_A_01_ANIMATION = 1834211036,
	NAPOLEAN_SLEIGH_BED_L_A_02_ANIMATION = -195393690,
	NAPOLEAN_SLEIGH_BED_L_A_03_ANIMATION = -2091010064,
	NOT_IN_YET_ANIMATION = -1195610565,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_00_ANIMATION = -1400424992,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_01_ANIMATION = -612366986,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_02_ANIMATION = 1116296396,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_03_ANIMATION = 898524250,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_04_ANIMATION = -1410665991,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_05_ANIMATION = -588398225,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_06_ANIMATION = 1172607189,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_07_ANIMATION = 853778499,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_08_ANIMATION = -1570980398,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_09_ANIMATION = -715420348,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_10_ANIMATION = -1248066399,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_11_ANIMATION = -1030015945,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_12_ANIMATION = 1536320909,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_13_ANIMATION = 747984155,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_A_14_ANIMATION = -1292779336,
	OUTDOOR_TRASH_CAN_A_00_ANIMATION = -1150055228,
	OUTDOOR_TRASH_CAN_A_01_ANIMATION = -864764846,
	OUTDOOR_TRASH_CAN_A_02_ANIMATION = 1434316264,
	OVAL_GLASS_SCONCE_A_00_ANIMATION = -897043445,
	OVAL_GLASS_SCONCE_A_01_ANIMATION = -1114700643,
	PINEGULCHER_DRESSER_00_ANIMATION = -644343369,
	PINEGULCHER_DRESSER_03_ANIMATION = 1083262989,
	PINE_TREE_A_00_ANIMATION = -1938487089,
	PINE_TREE_A_01_ANIMATION = -76400551,
	PORCINA_REFRIGERATOR_MODEL_P1GS_A_00_ANIMATION = -53188195,
	PORCINA_REFRIGERATOR_MODEL_P1GS_A_01_ANIMATION = -1949083381,
	PORCINA_REFRIGERATOR_MODEL_P1GS_A_02_ANIMATION = 316278961,
	PORCINA_REFRIGERATOR_MODEL_P1GS_A_03_ANIMATION = 1708996647,
	PORCINA_REFRIGERATOR_MODEL_P1GS_A_04_ANIMATION = -71717500,
	PORCINA_REFRIGERATOR_MODEL_P1GS_A_05_ANIMATION = -1933665006,
	POSEIDONS_ADVENTURE_AQUARIUM_A_00_ANIMATION = -1420951272,
	POSEIDONS_ADVENTURE_AQUARIUM_A_01_ANIMATION = -599182962,
	POSEIDONS_ADVENTURE_AQUARIUM_A_02_ANIMATION = 1161846836,
	POSEIDONS_ADVENTURE_AQUARIUM_A_03_ANIMATION = 843534498,
	POSEIDONS_ADVENTURE_AQUARIUM_A_04_ANIMATION = -1406941951,
	POSEIDONS_ADVENTURE_AQUARIUM_A_05_ANIMATION = -618334825,
	POSEIDONS_ADVENTURE_AQUARIUM_A_06_ANIMATION = 1110287405,
	POSEIDONS_ADVENTURE_AQUARIUM_A_07_ANIMATION = 891983035,
	POSEIDONS_ADVENTURE_AQUARIUM_A_08_ANIMATION = -1516926678,
	POSEIDONS_ADVENTURE_AQUARIUM_A_09_ANIMATION = -762136132,
	POSEIDONS_ADVENTURE_AQUARIUM_A_10_ANIMATION = -1303039911,
	POSEIDONS_ADVENTURE_AQUARIUM_A_11_ANIMATION = -984481585,
	POSEIDONS_ADVENTURE_AQUARIUM_A_12_ANIMATION = 1549488501,
	POSEIDONS_ADVENTURE_AQUARIUM_A_13_ANIMATION = 727474659,
	POSEIDONS_ADVENTURE_AQUARIUM_A_14_ANIMATION = -1254558656,
	POSEIDONS_ADVENTURE_AQUARIUM_A_15_ANIMATION = -1036008234,
	POSEIDONS_ADVENTURE_AQUARIUM_A_16_ANIMATION = 1530303852,
	POSEIDONS_ADVENTURE_AQUARIUM_A_17_ANIMATION = 741451258,
	POSEIDONS_ADVENTURE_AQUARIUM_A_18_ANIMATION = -1131497365,
	POSEIDONS_ADVENTURE_AQUARIUM_A_19_ANIMATION = -880178947,
	POSEIDONS_ADVENTURE_AQUARIUM_A_20_ANIMATION = -1720163430,
	POSEIDONS_ADVENTURE_AQUARIUM_A_21_ANIMATION = -293645556,
	POSEIDONS_ADVENTURE_AQUARIUM_A_22_ANIMATION = 2004222646,
	POSEIDONS_ADVENTURE_AQUARIUM_A_23_ANIMATION = 7418400,
	POSEIDONS_ADVENTURE_AQUARIUM_A_24_ANIMATION = -1642748029,
	POSEIDONS_ADVENTURE_AQUARIUM_A_25_ANIMATION = -384657643,
	POSITIVE_POTENTIAL_MICROWAVE_A_00_ANIMATION = 799611257,
	POSITIVE_POTENTIAL_MICROWAVE_A_01_ANIMATION = 1487809007,
	POSITIVE_POTENTIAL_MICROWAVE_A_02_ANIMATION = -1045989291,
	POSITIVE_POTENTIAL_MICROWAVE_A_03_ANIMATION = -1231009597,
	POSITIVE_POTENTIAL_MICROWAVE_A_04_ANIMATION = 683990368,
	POSTURE_PLUS_OFFICE_CHAIR_00_ANIMATION = 244725321,
	POSTURE_PLUS_OFFICE_CHAIR_01_ANIMATION = 2039547615,
	POSTURE_PLUS_OFFICE_CHAIR_02_ANIMATION = -526887067,
	POSTURE_PLUS_OFFICE_CHAIR_03_ANIMATION = -1751160845,
	POSTURE_PLUS_OFFICE_CHAIR_04_ANIMATION = 167506512,
	POSTURE_PLUS_OFFICE_CHAIR_05_ANIMATION = 2130494150,
	POSTURE_PLUS_OFFICE_CHAIR_06_ANIMATION = -403336324,
	ROXANA_GERANIUM_A_00_ANIMATION = -1746409807,
	ROXANA_GERANIUM_A_01_ANIMATION = -522136025,
	ROXANA_GERANIUM_A_02_ANIMATION = 2045347741,
	RUBBER_TREE_PLANT_A_00_ANIMATION = 1444780716,
	RUBBER_TREE_PLANT_A_01_ANIMATION = 555395642,
	RUBBER_TREE_PLANT_A_02_ANIMATION = -1206649984,
	SADFACE_ANIMATION = -186432805,
	SAND_BOX_A_00_ANIMATION = -1866154180,
	SAND_BOX_A_01_ANIMATION = -406614102,
	SAND_BOX_A_02_ANIMATION = 2127224336,
	SAND_BOX_A_03_ANIMATION = 164490886,
	SAND_BOX_A_04_ANIMATION = -1750500571,
	SAND_BOX_A_05_ANIMATION = -525448269,
	SAND_BOX_A_06_ANIMATION = 2040994313,
	SAND_BOX_A_07_ANIMATION = 245377695,
	SAND_BOX_A_08_ANIMATION = -1642121458,
	SAND_BOX_A_09_ANIMATION = -384301160,
	SAND_BOX_A_10_ANIMATION = -1981837699,
	SAND_BOX_A_11_ANIMATION = -19349781,
	SAND_BOX_A_12_ANIMATION = 1741811537,
	SAND_BOX_A_13_ANIMATION = 282517447,
	SAND_BOX_A_14_ANIMATION = -1900918172,
	SAND_BOX_A_15_ANIMATION = -105547022,
	SAND_BOX_A_16_ANIMATION = 1622944584,
	SAND_BOX_A_17_ANIMATION = 398138334,
	SAND_BOX_A_18_ANIMATION = -2029779377,
	SAND_BOX_A_19_ANIMATION = -268224807,
	SAND_BOX_A_20_ANIMATION = -1561141826,
	SAND_BOX_A_21_ANIMATION = -705303256,
	SAND_BOX_A_22_ANIMATION = 1291631762,
	SAND_BOX_A_23_ANIMATION = 1006341124,
	SAND_BOX_A_24_ANIMATION = -1516299865,
	SAND_BOX_A_25_ANIMATION = -761779919,
	SANI_QUEEN_BATHTUB_A_00_ANIMATION = 499932232,
	SANI_QUEEN_BATHTUB_A_01_ANIMATION = 1791716574,
	SANI_QUEEN_BATHTUB_A_02_ANIMATION = -205374108,
	SANI_QUEEN_BATHTUB_A_03_ANIMATION = -2067460622,
	SANI_QUEEN_BATHTUB_A_04_ANIMATION = 446797905,
	SANI_QUEEN_BATHTUB_A_05_ANIMATION = 1839638727,
	SCTC_CORDLESS_WALL_PHONE_A_00_ANIMATION = -650281225,
	SCTC_CORDLESS_WALL_PHONE_A_01_ANIMATION = -1371910559,
	SCTC_CORDLESS_WALL_PHONE_A_02_ANIMATION = 926097371,
	SCTC_CORDLESS_WALL_PHONE_A_03_ANIMATION = 1077161805,
	SCTC_CORDLESS_WALL_PHONE_A_04_ANIMATION = -565134610,
	SCTC_CORDLESS_WALL_PHONE_A_05_ANIMATION = -1453880712,
	SCTC_CORDLESS_WALL_PHONE_A_06_ANIMATION = 811523010,
	SCTC_CORDLESS_WALL_PHONE_A_07_ANIMATION = 1197075284,
	SCYLLA_AND_CHARYBDIS_A_00_ANIMATION = 61517007,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_00_ANIMATION = 841730414,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_01_ANIMATION = 1160575480,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_02_ANIMATION = -601511870,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_03_ANIMATION = -1423796012,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_04_ANIMATION = 893783415,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_05_ANIMATION = 1111571937,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_06_ANIMATION = -616010661,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_07_ANIMATION = -1404085043,
	SIMSAFETY_IV_BURGALUR_ALARM_00_ANIMATION = -1229842532,
	SIMSAFETY_IV_BURGALUR_ALARM_01_ANIMATION = -1045092598,
	SIMSAFETY_IV_BURGALUR_ALARM_02_ANIMATION = 1488746160,
	SIMSAFETY_IV_BURGALUR_ALARM_03_ANIMATION = 800802342,
	SNOOZEMORE_ALARM_CLOCK_00_ANIMATION = -103557643,
	SNOOZEMORE_ALARM_CLOCK_01_ANIMATION = -1898650269,
	SNOOZEMORE_ALARM_CLOCK_02_ANIMATION = 400405721,
	SNOOZEMORE_ALARM_CLOCK_03_ANIMATION = 1624933455,
	SNOOZEMORE_ALARM_CLOCK_04_ANIMATION = -21098004,
	SNOOZEMORE_ALARM_CLOCK_05_ANIMATION = -1984355974,
	SNOOZEMORE_ALARM_CLOCK_06_ANIMATION = 279998656,
	SONIC_SHOWER_00_ANIMATION = -821454324,
	SONIC_SHOWER_01_ANIMATION = -1206998374,
	SONIC_SHOWER_02_ANIMATION = 554171168,
	SONIC_SHOWER_03_ANIMATION = 1442892726,
	SONIC_SHOWER_04_ANIMATION = -932946411,
	SPACE_MISER_SHOWER_A_00_ANIMATION = 551517738,
	SPACE_MISER_SHOWER_A_01_ANIMATION = 1473793724,
	SPACE_MISER_SHOWER_A_02_ANIMATION = -825155834,
	SPARTAN_SPECIAL_A_00_ANIMATION = 742066088,
	SPARTAN_SPECIAL_A_01_ANIMATION = 1530672958,
	SPARTAN_SPECIAL_A_02_ANIMATION = -1036687740,
	SPARTAN_SPECIAL_A_03_ANIMATION = -1254992366,
	SPIDER_PLANT_A_00_ANIMATION = -2026259048,
	SPIDER_PLANT_A_01_ANIMATION = -264336114,
	SPIDER_PLANT_A_02_ANIMATION = 1765268660,
	SUPERDOOP_BASKETBALL_HOOP_00_ANIMATION = 240864396,
	SUPERDOOP_BASKETBALL_HOOP_01_ANIMATION = 2036104218,
	SUPERDOOP_BASKETBALL_HOOP_02_ANIMATION = -531288672,
	SUPERDOOP_BASKETBALL_HOOP_03_ANIMATION = -1756226250,
	SUPERDOOP_BASKETBALL_HOOP_04_ANIMATION = 154568853,
	SUPERDOOP_BASKETBALL_HOOP_CHILD_02_ANIMATION = 2133476006,
	SUPERDOOP_BASKETBALL_HOOP_CHILD_03_ANIMATION = 137196080,
	SUPERDOOP_BASKETBALL_HOOP_CHILD_04_ANIMATION = -1773541485,
	THE_FUNINATOR_DELUXE_ANIMATION = 82017050,
	THE_VIBROMATIC_HEART_BED_A_00_ANIMATION = -1345501361,
	THE_VIBROMATIC_HEART_BED_A_01_ANIMATION = -657819687,
	THE_VIBROMATIC_HEART_BED_A_02_ANIMATION = 1103308387,
	THE_VIBROMATIC_HEART_BED_A_03_ANIMATION = 918820597,
	THE_VIBROMATIC_HEART_BED_A_04_ANIMATION = -1465875626,
	THE_VIBROMATIC_HEART_BED_A_05_ANIMATION = -542657600,
	THE_VIBROMATIC_HEART_BED_A_06_ANIMATION = 1185866362,
	THE_VIBROMATIC_HEART_BED_A_07_ANIMATION = 833213164,
	THE_VIBROMATIC_HEART_BED_L_A_00_ANIMATION = 193553582,
	THE_VIBROMATIC_HEART_BED_L_A_01_ANIMATION = 2089702456,
	THE_VIBROMATIC_HEART_BED_L_A_02_ANIMATION = -444136062,
	THE_VIBROMATIC_HEART_BED_L_A_03_ANIMATION = -1837091564,
	THE_VIBROMATIC_HEART_BED_L_A_04_ANIMATION = 216309943,
	THE_VIBROMATIC_HEART_BED_L_A_05_ANIMATION = 2078511137,
	THE_VIBROMATIC_HEART_BED_L_A_06_ANIMATION = -487931493,
	THE_VIBROMATIC_HEART_BED_L_A_07_ANIMATION = -1779568371,
	THIEFCAS_GETIN_ANIMATION = -513952012,
	THIEFCAS_HEADLEFT_ANIMATION = -1910531725,
	THIEFCAS_HEADRIGHT_ANIMATION = 87417934,
	THIEFCAS_HEADUP_ANIMATION = 875010171,
	THIEFCAS_STEALPIC_ANIMATION = 598742657,
	THIEFCAS_VASESNEAK_ANIMATION = 563699406,
	TOP_BRASS_SCONCE_A_00_ANIMATION = 164445737,
	TOP_BRASS_SCONCE_A_01_ANIMATION = 2127171263,
	TORCHOSTERONE_FLOOR_LAMP_A_00_ANIMATION = 619831970,
	TORCHOSTERONE_FLOOR_LAMP_A_01_ANIMATION = 1408684596,
	TORCHOSTERONE_TABLE_LAMP_A_00_ANIMATION = -930029599,
	TORCHOSTERONE_TABLE_LAMP_A_01_ANIMATION = -1080561801,
	TRADITIONAL_OAK_ARMOIRE_A_00_ANIMATION = 1272463091,
	TRADITIONAL_OAK_ARMOIRE_A_04_ANIMATION = 1286994666,
	TRASH_CAN_A_00_ANIMATION = -1686180227,
	TRASH_CAN_A_01_ANIMATION = -327557397,
	TREADMILL_OFF_ANIMATION = 347608360,
	TREADMILL_ON_ANIMATION = -1191665842,
	TREE_SWING_00_ANIMATION = 244562398,
	TREE_SWING_01_ANIMATION = 2039777608,
	TREE_SWING_02_ANIMATION = -526526222,
	TREE_SWING_03_ANIMATION = -1751455644,
	TYKE_NYTE_BED_A_00_ANIMATION = 973792634,
	TYKE_NYTE_BED_A_01_ANIMATION = 1292752364,
	TYKE_NYTE_BED_A_02_ANIMATION = -737901482,
	TYKE_NYTE_BED_A_03_ANIMATION = -1560038208,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_00_ANIMATION = -1380549376,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_01_ANIMATION = -625914474,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_02_ANIMATION = 1136139308,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_03_ANIMATION = 884944058,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_04_ANIMATION = -1428440807,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_05_ANIMATION = -572749425,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_06_ANIMATION = 1154865205,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_07_ANIMATION = 869460131,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_08_ANIMATION = -1553074894,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_09_ANIMATION = -731200092,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_10_ANIMATION = -1263711167,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_11_ANIMATION = -1012237097,
	URCHINEER_TRAIN_SET_BY_RIPCO_A_12_ANIMATION = 1520643437,
	VANITY_MIRROR_A_00_ANIMATION = -1412538349,
	VANITY_MIRROR_A_01_ANIMATION = -590786427,
	VON_BRAUN_RECLINER_A_00_ANIMATION = -2117761479,
	VON_BRAUN_RECLINER_A_02_ANIMATION = 1875633941,
	WALNUT_DOOR_A_00_ANIMATION = 634280159,
	WALNUT_DOOR_A_01_ANIMATION = 1388931145,
	WHAT_A_GAS_PARTY_BALLOONS_A_00_ANIMATION = 918445778,
	WHAT_A_GAS_PARTY_BALLOONS_A_01_ANIMATION = 1102671428,
	WHAT_A_GAS_PARTY_BALLOONS_A_02_ANIMATION = -659537922,
	WHAT_A_GAS_PARTY_BALLOONS_A_03_ANIMATION = -1346957464,
	WHAT_A_GAS_PARTY_BALLOONS_A_04_ANIMATION = 835951307,
	WHAT_A_GAS_PARTY_BALLOONS_A_05_ANIMATION = 1188342365,
	WHIRL_WIZARD_HOT_TUB_00_ANIMATION = -1335287196,
	WHIRL_WIZARD_HOT_TUB_01_ANIMATION = -949087502,
	WHIRL_WIZARD_HOT_TUB_02_ANIMATION = 1583825736,
	WILD_BILL_THX_451_BBQ_A_00_ANIMATION = 1765355609,
	WILD_BILL_THX_451_BBQ_A_03_ANIMATION = -265264669,
	WILD_BILL_THX_451_BBQ_A_04_ANIMATION = 1851061312,
	WILD_BILL_THX_451_BBQ_A_05_ANIMATION = 424920278,
	WINDSOR_DOOR_A_00_ANIMATION = 920288785,
	WINDSOR_DOOR_A_01_ANIMATION = 1105022599,
	WORKBUNNST_ALL_PURPOSE_CHAIR_00_ANIMATION = 509995450,
	WORKBUNNST_ALL_PURPOSE_CHAIR_01_ANIMATION = 1768085804,
	WORKBUNNST_ALL_PURPOSE_CHAIR_02_ANIMATION = -261388138,
	WORKBUNNST_ALL_PURPOSE_CHAIR_03_ANIMATION = -2022918144,
	WORKBUNNST_ALL_PURPOSE_CHAIR_04_ANIMATION = 419966371,
	WORKBUNNST_ALL_PURPOSE_CHAIR_05_ANIMATION = 1846484277,
	WORKBUNNST_ALL_PURPOSE_CHAIR_06_ANIMATION = -150582129,
	ZAP_ZALL_BUG_ZAPPER_ANIMATION = 1594332643,
	ZAP_ZALL_BUG_ZAPPER_TURNED_OFF_ANIMATION = 1496118859
};

enum ECharacterSymbol {
	UNDEFINED_CHARACTER = 0,
	AFRICAN_VIOLET_CHARACTER = -335158503,
	ANTIQUE_ARMOIRE_CHARACTER = -2057828757,
	ARISTOSCRATCH_POOL_TABLE_CHARACTER = -2038011458,
	BABY_CRADLE_CHARACTER = 1041591381,
	BACHMAN_WOOD_BEVERAGE_BAR_CHARACTER = 1347900347,
	BEAVER_PELT_MOOSEHEAD_CHARACTER = -2040824143,
	BEEJAPHONE_GUITAR_CHARACTER = -2136319695,
	BENI_KANA_TEPPENYAKI_TABLE_CHARACTER = -261803116,
	BIRCH_TREE_CHARACTER = -1867305593,
	BLACK_SLACK_RECLINER_CHARACTER = 2056903900,
	BLUE_PLATE_SCONCE_CHARACTER = 1692459378,
	BOTTLE_LAMP_CHARACTER = -1667556177,
	BRAND_NAME_TOASTER_OVEN_CHARACTER = -597521358,
	CARD_TABLE_CHARACTER = -1037146487,
	CARRY_FRUITCAKE_01_CHARACTER = -81004190,
	CARRY_GIFT_CHOCOLATES_CHARACTER = -19855608,
	CARRY_PIZZABOX_CHARACTER = -1914391555,
	CARVING_BLOCK_CHARACTER = -1340939189,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_CHARACTER = -984160650,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_L_CHARACTER = 865862324,
	CHILD_CHARACTER = -706242919,
	CHUCK_MATEWELL_CHESS_SET_CHARACTER = -1307343461,
	DECKCHAIR_BY_SURVIVAL_CHARACTER = -625526526,
	DISH_DUSTER_DELUXE_CHARACTER = 1792912192,
	ECHINOPSIS_MAXIMUS_CACTUS_CHARACTER = 1038211780,
	ELITE_REFLECTIONS_CHROME_LAMP_CHARACTER = -1847129970,
	EMPRESS_DINING_CHAIR_CHARACTER = 1743128456,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_CHARACTER = -708658642,
	FEDERAL_LATTICE_WINDOW_DOOR_CHARACTER = 1675156705,
	FEMALE_ADULT_CHARACTER = 532155124,
	FIGHTING_STRIP_CHARACTER = -432981766,
	FIREBRAND_SMOKE_DETECTOR_CHARACTER = 1282771947,
	FLIES_CHARACTER = -1066094544,
	FLUSH_FORCE_5_XLT_CHARACTER = 470758490,
	FREEZE_SECRET_REFRIGERATOR_CHARACTER = -252302827,
	FUZZY_LOGIC_DISHWASHER_CHARACTER = 1424750824,
	GRANDFATHER_CLOCK_CHARACTER = -988042556,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_CHARACTER = -1664649378,
	HYDRONOMIC_KITCHEN_SINK_CHARACTER = 214742628,
	HYDROTHERA_BATHTUB_CHARACTER = 979298098,
	HYGEIA_O_MATIC_TOILET_CHARACTER = -2120784311,
	ICE_CHEST_CHARACTER = 317915674,
	JADE_PLANT_CHARACTER = 2142436463,
	JUNK_GENIE_TRASH_COMPACTOR_CHARACTER = 1875749862,
	JUSTA_BATHTUB_CHARACTER = -2009441109,
	KINDERSTUFF_DRESSER_CHARACTER = 1217071111,
	KRAFTKING_WOODWORKING_TABLE_CHARACTER = -91620075,
	LLAMARK_REFRIDGERATOR_CHARACTER = -50724348,
	MAGIC_MYSTERY_TOY_BOX_CHARACTER = -766057033,
	MAILBOX_CHARACTER = -1713759215,
	MALE_ADULT_CHARACTER = -5897392,
	MASTER_SUITE_TUB_CHARACTER = -845633452,
	MEDICINE_CABINET_CHARACTER = -860737754,
	MODERN_MISSION_BED_CHARACTER = 1119873414,
	MODERN_MISSION_BED_L_CHARACTER = -1214285455,
	MONKEY_BUTLER_HUT_CHARACTER = 1318759385,
	MONTICELLO_DOOR_CHARACTER = -428857615,
	MR_REGULAR_JOE_COFFEE_CHARACTER = 1462182578,
	MULBERRY_TREE_CHARACTER = 292676034,
	NAPOLEAN_SLEIGH_BED_CHARACTER = 406894218,
	NAPOLEAN_SLEIGH_BED_L_CHARACTER = -520216345,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_CHARACTER = -1641335688,
	OUTDOOR_TRASH_CAN_CHARACTER = -1376759031,
	OVAL_GLASS_SCONCE_CHARACTER = -1565027672,
	PINEGULCHER_DRESSER_CHARACTER = 110326991,
	PINE_TREE_CHARACTER = -209441397,
	PORCINA_REFRIGERATOR_MODEL_P1GS_CHARACTER = 1197866826,
	POSEIDONS_ADVENTURE_AQUARIUM_CHARACTER = -1739123228,
	POSITIVE_POTENTIAL_MICROWAVE_CHARACTER = -592645282,
	POSTURE_PLUS_OFFICE_CHAIR_CHARACTER = -257248790,
	ROXANA_GERANIUM_CHARACTER = -1667457470,
	RUBBER_TREE_PLANT_CHARACTER = 1081271696,
	SAND_BOX_CHARACTER = 922160194,
	SANI_QUEEN_BATHTUB_CHARACTER = -2052084969,
	SCTC_CORDLESS_WALL_PHONE_CHARACTER = -1217983587,
	SCYLLA_AND_CHARYBDIS_CHARACTER = 1029845720,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_CHARACTER = -857433744,
	SIMSAFETY_IV_BURGALUR_ALARM_CHARACTER = 1932150773,
	SNOOZEMORE_ALARM_CLOCK_CHARACTER = 918158805,
	SONIC_SHOWER_CHARACTER = -1254363214,
	SPACE_MISER_SHOWER_CHARACTER = -1529619732,
	SPARTAN_SPECIAL_CHARACTER = 309080012,
	SPIDER_PLANT_CHARACTER = 465918780,
	SUPERDOOP_BASKETBALL_HOOP_CHARACTER = 1420886656,
	TERRAINCARS_CHARACTER = 1059758616,
	THE_FUNINATOR_DELUXE_CHARACTER = 82017050,
	THE_VIBROMATIC_HEART_BED_CHARACTER = 1480214735,
	THE_VIBROMATIC_HEART_BED_L_CHARACTER = 938804422,
	THIEF_CHARACTER = 954926958,
	THIEFVASE_CHARACTER = 1650775825,
	TOP_BRASS_SCONCE_CHARACTER = 1586525931,
	TORCHOSTERONE_FLOOR_LAMP_CHARACTER = 1049153561,
	TORCHOSTERONE_TABLE_LAMP_CHARACTER = 1487035380,
	TRADITIONAL_OAK_ARMOIRE_CHARACTER = -56909970,
	TRASH_CAN_CHARACTER = 1206245837,
	TREADMILL_CHARACTER = -1805404436,
	TREE_SWING_CHARACTER = 1428654390,
	TYKE_NYTE_BED_CHARACTER = -702726432,
	URCHINEER_TRAIN_SET_BY_RIPCO_CHARACTER = -1420391806,
	VANITY_MIRROR_CHARACTER = 1100699540,
	VON_BRAUN_RECLINER_CHARACTER = 1968894798,
	WALNUT_DOOR_CHARACTER = -1907456137,
	WHAT_A_GAS_PARTY_BALLOONS_CHARACTER = 1793452590,
	WHIRL_WIZARD_HOT_TUB_CHARACTER = 413093903,
	WILD_BILL_THX_451_BBQ_CHARACTER = 1998558723,
	WINDSOR_DOOR_CHARACTER = -1830465208,
	WORKBUNNST_ALL_PURPOSE_CHAIR_CHARACTER = 1279754020,
	ZAP_ZALL_BUG_ZAPPER_CHARACTER = 1594332643
};

enum ELevelSymbol {
	UNDEFINED_LEVEL = 0,
	CREATE_SIM_SCENE_LEVEL = -177711922,
	CREATE_SIM_SCENE_MIRROR_FIX__LEVEL = 1871273923,
	LOT_TYPE_01_LEVEL = -93963294,
	LOT_TYPE_02_LEVEL = 1668246104,
	LOT_TYPE_03_LEVEL = 342383310,
	LOT_TYPE_04_LEVEL = -1978871955,
	TERRAIN_FROM_LARGE_NEIGHBORHOOD_LEVEL = -1015990862,
	THE_TERRAIN_FOR_NEIGHBORHOOD_SCREEN_DERIVED_FROM_REV46__LEVEL = -538636160
};

struct Header {
	char swizzle;
	char _pad[3];
	int version;
	int type;
};

typedef Byte *MPtr;

struct HandleNode {
	UInt32 allocSize;
	void *ptr;
	bool owned;
};

typedef TNodeList<EDialogWin *> EDialogWinPtrList;

struct TNodeList<EDialogWin *> : ENodeList {
	TNodeList(TNodeList<EDialogWin *>*, int, void);
	TNodeList();
	TNodeList();
	static EDialogWin* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EDialogWin *>& operator=();
	void MoveContents();
};

struct EDialog {
protected:
	TreeReturnCode m_retcode;
	EDialogWinPtrList m_dialogList;
	EDialogWin *m_pCurDialog;
public:
	__vtbl_ptr_type *$vf851;
	
	EDialog& operator=();
	EDialog();
	EDialog();
	/* vtable[1] */ virtual EDialog(EDialog*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[2] */ virtual void SetParams(/* s5 21 */ StackElem *elem, /* s2 18 */ DialogParam *dialogParam, /* s3 19 */ cXObject *pObj, /* s4 20 */ ObjSelector *pSel);
	/* vtable[3] */ virtual void PutPanelToSleep();
	/* vtable[4] */ virtual bool GetCurDialog();
	/* vtable[5] */ virtual TreeReturnCode GetRetCode();
	/* vtable[6] */ virtual void ExitCurDialog();
	void Draw(/* a1 5 */ ERC *prc);
	void Update();
	void SetRetCode(/* a1 5 */ TreeReturnCode code);
	static void Init(/* parameters unknown */);
	static void Reset(/* parameters unknown */);
	bool DialogCanScroll();
	void Clean();
	bool InKeyboard();
protected:
	EDialogWin* GetNextDialog();
};

enum ERleTextureSymbol {
	UNDEFINED_RLETEXTURE = 0,
	FA_CA_ARMY_RANGER_RLETEXTURE = 1108926099,
	FA_CA_ARMY_RECRUIT_RLETEXTURE = 1721166240,
	FA_CA_BURGLAR_RLETEXTURE = -1128355065,
	FA_CA_CLERK_RLETEXTURE = -534991775,
	FA_CA_EXTREME_OUTDOORS_RLETEXTURE = -1101524449,
	FA_CA_EXTREME_RACECAR_RLETEXTURE = 1069759129,
	FA_CA_LIFEGUARD_RLETEXTURE = 1038414441,
	FA_CA_LOUNGE_SINGER_RLETEXTURE = -310724496,
	FA_CA_MOB_BOSS_RLETEXTURE = 69902407,
	FA_CA_ROCK_STAR_RLETEXTURE = 227949085,
	FA_CA_SLACKER_RLETEXTURE = -1865431382,
	FA_CA_SPY_RLETEXTURE = -1024719060,
	FA_FT_DEFINED_01_RLETEXTURE = 1071790859,
	FA_FT_NORMAL_02_RLETEXTURE = -1208399710,
	FA_FT_ROUNDED_01_RLETEXTURE = 376728346,
	FA_LB_1C_ARMYPANTS_RLETEXTURE = 1528741822,
	FA_LB_1C_BELLA_RLETEXTURE = -957302167,
	FA_LB_1C_BELLS_01_RLETEXTURE = 146300165,
	FA_LB_1C_EXTREME_RLETEXTURE = 8626652,
	FA_LB_1C_FORMAL_RLETEXTURE = -102376612,
	FA_LB_1C_KNEE_01_RLETEXTURE = -919241173,
	FA_LB_1C_KNEE_02_RLETEXTURE = 1346121617,
	FA_LB_1C_KNEE_03_RLETEXTURE = 658185991,
	FA_LB_1C_KNEE_04_RLETEXTURE = -1184920924,
	FA_LB_1C_MINI_01_RLETEXTURE = -1964575488,
	FA_LB_1C_MINI_02_RLETEXTURE = 334472378,
	FA_LB_1C_MINI_02_ZIP_RLETEXTURE = 1748450185,
	FA_LB_1C_MINI_03_RLETEXTURE = 1692963884,
	FA_LB_1C_MINI_04_RLETEXTURE = -91487857,
	FA_LB_1C_MINI_05_RLETEXTURE = -1920257767,
	FA_LB_1C_MOB_BOSS_RLETEXTURE = 1900885855,
	FA_LB_1C_PANTS_01_RLETEXTURE = -550424056,
	FA_LB_1C_PANTS_02_RLETEXTURE = 1178100658,
	FA_LB_1C_PANTS_03_RLETEXTURE = 826233636,
	FA_LB_1C_PANTS_04_RLETEXTURE = -1352939897,
	FA_LB_1C_PJS_RLETEXTURE = -1434320036,
	FA_LB_1C_SHORTS_01_RLETEXTURE = 2035435268,
	FA_LB_1C_SHORTS_02_RLETEXTURE = -530901314,
	FA_LB_1C_SKIRT_01_RLETEXTURE = -94595324,
	FA_LB_1C_SKIRT_02_RLETEXTURE = 1666565822,
	FA_LB_1C_SKIRT_03_RLETEXTURE = 340981288,
	FA_LB_1C_SKIRT_04_RLETEXTURE = -1976147061,
	FA_LB_1C_SWIMSUIT_01_RLETEXTURE = 1239610868,
	FA_LB_1C_SWIMSUIT_02_RLETEXTURE = -789863346,
	FA_LB_1C_THEIF_RLETEXTURE = 939023103,
	FA_LB_1C_TIGHT_01_RLETEXTURE = 2002542951,
	FA_LB_1C_TIGHT_02_RLETEXTURE = -296406819,
	FA_LB_2C_KNEE_01_RLETEXTURE = 570606888,
	FA_LB_2C_KNEE_01_T_RLETEXTURE = -1498448866,
	FA_LB_2C_PANTS_RLETEXTURE = -1357130944,
	FA_LB_2C_PANTS_T_RLETEXTURE = -10508807,
	FA_LB_2C_SKIRT_01_RLETEXTURE = 1673457925,
	FA_LB_2C_SKIRT_01_T_RLETEXTURE = -1489923080,
	FA_MU_BLUSH_HEAVY_RLETEXTURE = -316220190,
	FA_MU_BLUSH_NORMAL_RLETEXTURE = -1347645253,
	FA_MU_EGYPTIAN_RLETEXTURE = 425718387,
	FA_MU_EYESHADOW_HEAVY_RLETEXTURE = 436549672,
	FA_MU_EYESHADOW_LIGHT_RLETEXTURE = 187571840,
	FA_MU_EYESHADOW_NORMAL_RLETEXTURE = -722822927,
	FA_MU_GEISHA_RLETEXTURE = 789025153,
	FA_MU_LIPSTICK_HEAVY_RLETEXTURE = 2019567760,
	FA_MU_LIPSTICK_LIGHT_RLETEXTURE = 1766526520,
	FA_MU_LIPSTICK_NORMAL_RLETEXTURE = 288540255,
	FA_MU_NEW_HEAVY_RLETEXTURE = 90469603,
	FA_MU_NEW_LIGHT_RLETEXTURE = 340742731,
	FA_MU_NEW_NORMAL_RLETEXTURE = -666639739,
	FA_MU_PUNK_RLETEXTURE = -661445326,
	FA_PO_FORMAL_RLETEXTURE = 550259536,
	FA_PO_PJS_RLETEXTURE = -1440717596,
	FA_PO_SWIMSUIT_RLETEXTURE = -1219654005,
	FA_PO_TEPPEN_RLETEXTURE = 284667105,
	FA_PO_WORKOUT_RLETEXTURE = -1609323669,
	FA_SH_ARMYBOOTS_RLETEXTURE = -999339296,
	FA_SH_BELLA_RLETEXTURE = 1913803757,
	FA_SH_EXTREME_RLETEXTURE = -2034625875,
	FA_SH_FORMAL_RLETEXTURE = 327450252,
	FA_SH_MOB_BOSS_RLETEXTURE = 1456033606,
	FA_SH_PUMP_01_RLETEXTURE = 343087962,
	FA_SH_PUMP_02_RLETEXTURE = -1921365280,
	FA_SH_PUMP_03_RLETEXTURE = -92439946,
	FA_SH_SKIN_TIGHT_01_RLETEXTURE = -454007190,
	FA_SH_SKIN_TIGHT_02_RLETEXTURE = 2113484752,
	FA_SH_SNEAKER_01_RLETEXTURE = 1075862151,
	FA_SH_SNEAKER_02_RLETEXTURE = -651621571,
	FA_SH_SNEAKER_03_RLETEXTURE = -1372701781,
	FA_SH_SNEAKER_04_RLETEXTURE = 810200584,
	FA_SH_THEIF_RLETEXTURE = -2095402117,
	FA_UB_1C_ARMYSHIRT_RLETEXTURE = -1630067100,
	FA_UB_1C_BELLA_RLETEXTURE = 323698727,
	FA_UB_1C_CROP_01_RLETEXTURE = -1876172398,
	FA_UB_1C_CROP_02_RLETEXTURE = 153268264,
	FA_UB_1C_EXTREME_RLETEXTURE = 856755694,
	FA_UB_1C_FORMAL_RLETEXTURE = 1750338609,
	FA_UB_1C_JACKET_01_RLETEXTURE = 2000723849,
	FA_UB_1C_JACKET_02_RLETEXTURE = -297152973,
	FA_UB_1C_JACKET_02T_RLETEXTURE = 20599480,
	FA_UB_1C_JACKET_03_RLETEXTURE = -1722876251,
	FA_UB_1C_JACKET_04_RLETEXTURE = 120220422,
	FA_UB_1C_LONG_01_RLETEXTURE = 696633000,
	FA_UB_1C_LONG_02_RLETEXTURE = -1332963566,
	FA_UB_1C_LONG_03_RLETEXTURE = -947148924,
	FA_UB_1C_MOB_BOSS_RLETEXTURE = -1180044173,
	FA_UB_1C_PJS_RLETEXTURE = -1428031626,
	FA_UB_1C_PUFFY_01_RLETEXTURE = 495644434,
	FA_UB_1C_PUFFY_02_RLETEXTURE = -2071740760,
	FA_UB_1C_SHORT_01_RLETEXTURE = -720786008,
	FA_UB_1C_SHORT_02_RLETEXTURE = 1275132946,
	FA_UB_1C_SHORT_02_T_RLETEXTURE = -603765651,
	FA_UB_1C_SHORT_03_RLETEXTURE = 990366852,
	FA_UB_1C_SHORT_04_RLETEXTURE = -1520215769,
	FA_UB_1C_SWIMSUIT_01_RLETEXTURE = 1057351764,
	FA_UB_1C_SWIMSUIT_02_RLETEXTURE = -1509115410,
	FA_UB_1C_THEIF_RLETEXTURE = -498884431,
	FA_UB_1C_TIGHT_01_RLETEXTURE = -1078418869,
	FA_UB_1C_TIGHT_02_RLETEXTURE = 649196529,
	FA_UB_1C_TIGHT_03_RLETEXTURE = 1370932071,
	FA_UB_1C_TIGHT_03_ZIP_RLETEXTURE = 37372361,
	FA_UB_1C_TIGHT_04_RLETEXTURE = -808298812,
	FA_UB_1C_TIGHT_05_RLETEXTURE = -1193974190,
	FA_UB_2C_LONG_RLETEXTURE = 1375097357,
	FA_UB_2C_LONG_02_RLETEXTURE = 1538993169,
	FA_UB_2C_LONG_02_T_RLETEXTURE = 1912459969,
	FA_UB_2C_LONG_T_RLETEXTURE = 540531178,
	FA_UB_2C_SHORT_01_RLETEXTURE = 1290521513,
	FA_UB_2C_SHORT_01_T_RLETEXTURE = 1670354682,
	FA_UB_2C_SHORT_02_RLETEXTURE = -706569709,
	FA_UB_2C_SHORT_02_T_RLETEXTURE = 1640573091,
	FC_CA_MILITARY_CADET_RLETEXTURE = -1123205534,
	FC_FP_BUTTERFLY_RLETEXTURE = -1521231958,
	FC_FP_CLOWN_RLETEXTURE = 1831493726,
	FC_FP_MAKEUP_RLETEXTURE = -826579208,
	FC_FP_WACKY_RLETEXTURE = 1721673791,
	FC_FR_HEAVY_RLETEXTURE = 1614517856,
	FC_FR_LIGHT_RLETEXTURE = 1896919240,
	FC_FT_NORMAL_02_RLETEXTURE = 1452772367,
	FC_FT_ROUNDED_01_RLETEXTURE = -1091380597,
	FC_HH_BALL_CAP_T_RLETEXTURE = 1399801181,
	FC_HH_COWBOY_HAT_T_RLETEXTURE = -1583372117,
	FC_HH_HEADBAND_T_RLETEXTURE = 932153073,
	FC_HH_PIGTAILS_T_RLETEXTURE = 1106732449,
	FC_HH_PONYTAIL_T_RLETEXTURE = 263891542,
	FC_HH_PRINCESS_HAT_T_RLETEXTURE = -847384692,
	FC_HH_WITCH_HAT_T_RLETEXTURE = 1975183061,
	FC_HH_WIZARD_HAT_T_RLETEXTURE = 1810946794,
	FC_LB_1C_PANTSTAIN_T_RLETEXTURE = 311893948,
	FC_LB_1C_PANTS_01_RLETEXTURE = 1485903723,
	FC_LB_1C_PANTS_02_RLETEXTURE = -1046985007,
	FC_LB_1C_SHORTS_01_RLETEXTURE = -1385244733,
	FC_LB_1C_SHORTS_02_RLETEXTURE = 879199865,
	FC_LB_1C_SKIRT_01_RLETEXTURE = 2113712743,
	FC_LB_1C_SKIRT_02_RLETEXTURE = -453647395,
	FC_LB_1C_SKIRT_PRINCESS_RLETEXTURE = 1736993351,
	FC_LB_1C_SKIRT_WITCH_RLETEXTURE = -1654782239,
	FC_LB_1C_TIGHT_01_RLETEXTURE = -251902972,
	FC_LB_1C_TIGHT_02_RLETEXTURE = 1777669566,
	FC_LB_2C_PANTS_01_RLETEXTURE = -1049398934,
	FC_LB_2C_PANTS_01_T_RLETEXTURE = -1460877955,
	FC_LB_2C_PANTS_02_T_RLETEXTURE = -1431667932,
	FC_LB_2C_SHORTS_01_T_RLETEXTURE = -1795322426,
	FC_LB_2C_SKIRT_01_RLETEXTURE = -467741594,
	FC_LB_2C_SKIRT_01_T_RLETEXTURE = -1561986949,
	FC_LB_2C_SKIRT_02_RLETEXTURE = 2098693596,
	FC_LB_2C_SKIRT_02_T_RLETEXTURE = -1599912414,
	FC_PO_PJS_RLETEXTURE = -402300007,
	FC_PO_SWIMSUIT_RLETEXTURE = -686736448,
	FC_SH_POINTY_01_RLETEXTURE = -1220440717,
	FC_SH_POINTY_02_RLETEXTURE = 776527049,
	FC_SH_POINTY_PRINCESS_01_RLETEXTURE = 1133368405,
	FC_SH_POINTY_WITCH_01_RLETEXTURE = -1400500958,
	FC_SH_SKIN_TIGHT_01_RLETEXTURE = -517730839,
	FC_SH_SKIN_TIGHT_02_RLETEXTURE = 2016238675,
	FC_SH_SNEAKER_01_RLETEXTURE = -391714026,
	FC_SH_SNEAKER_02_RLETEXTURE = 1907341996,
	FC_UB_1C_LONG_01_RLETEXTURE = -2130479303,
	FC_UB_1C_LONG_02_RLETEXTURE = 403318403,
	FC_UB_1C_LONG_PRINCESS_RLETEXTURE = 304277550,
	FC_UB_1C_LONG_WITCH_RLETEXTURE = 1626589473,
	FC_UB_1C_SHORT_01_RLETEXTURE = 1386842315,
	FC_UB_1C_SHORT_02_RLETEXTURE = -878651023,
	FC_UB_1C_SHORT_02_T_RLETEXTURE = -640208914,
	FC_UB_1C_SHORT_03_RLETEXTURE = -1129846297,
	FC_UB_1C_TIGHT_01_RLETEXTURE = 941131560,
	FC_UB_1C_TIGHT_02_RLETEXTURE = -1592666478,
	FC_UB_1C_TIGHT_02_T_RLETEXTURE = 1010563297,
	FC_UB_2C_LONG_01_RLETEXTURE = 1781845050,
	FC_UB_2C_LONG_01_T_RLETEXTURE = -1484260257,
	FC_UB_2C_LONG_02_RLETEXTURE = -214065792,
	FC_UB_2C_LONG_02_T_RLETEXTURE = -1514061306,
	FC_UB_2C_SHORT_01_RLETEXTURE = -884216118,
	FC_UB_2C_SHORT_01_T_RLETEXTURE = 1717304697,
	FC_UB_2C_SHORT_02_RLETEXTURE = 1380106096,
	FC_UB_2C_SHORT_02_T_RLETEXTURE = 1679639328,
	FC_UB_2C_SHORT_03_RLETEXTURE = 625315814,
	FC_UB_2C_SHORT_03_T_RLETEXTURE = 1709123863,
	FINAL_ADULT_FEMALE_NUDE_RLETEXTURE = 1583557018,
	FINAL_ADULT_MALE_NUDE_RLETEXTURE = 703761717,
	FINAL_CHILD_FEMALE_NUDE_RLETEXTURE = -1729234204,
	FU_HH_AFRO_RLETEXTURE = -753877958,
	FU_HH_BEEHIVE_RLETEXTURE = -301094195,
	FU_HH_COLORED_RLETEXTURE = 2143151426,
	FU_HH_EGYPTIAN_RLETEXTURE = -823748571,
	FU_HH_EGYPTIAN_T_RLETEXTURE = 115065854,
	FU_HH_ELEGANT_RLETEXTURE = -1300349746,
	FU_HH_GEISHA_T_RLETEXTURE = 1658161408,
	FU_HH_HEADBAND_RLETEXTURE = -1531608765,
	FU_HH_HIGHLIGHTS_RLETEXTURE = -1256944228,
	FU_HH_LONG_RLETEXTURE = -972584441,
	FU_HH_LONG_02_RLETEXTURE = -713612083,
	FU_HH_MED_LENGTH_RLETEXTURE = -1606534091,
	FU_HH_MOB_BOSS_T_RLETEXTURE = -848509033,
	FU_HH_MOHAWK_RLETEXTURE = -38040767,
	FU_HH_PIGTAILS_RLETEXTURE = -676221915,
	FU_HH_PONYTAIL_RLETEXTURE = -229309501,
	FU_HH_PUNK_SPIKED_RLETEXTURE = -992899467,
	FU_HH_PUNK_SPIKED_T_RLETEXTURE = 1219764684,
	FU_HH_SHORT_RLETEXTURE = 1773558912,
	FU_HH_THEIF_T_RLETEXTURE = 1578085124,
	MALE_CHILD_RLETEXTURE = -952392200,
	MA_CA_CRIMINAL_BURGLAR_RLETEXTURE = 1671987813,
	MA_CA_CRIMINAL_MOBSTER_RLETEXTURE = -26233865,
	MA_CA_EXTREME_OUTDOORS_RLETEXTURE = 1046714719,
	MA_CA_EXTREME_RACECAR_DRIVER_RLETEXTURE = -829366581,
	MA_CA_EXTREME_SPY_RLETEXTURE = -1708978054,
	MA_CA_MILITARY_ASTRONAUT_RLETEXTURE = 644431270,
	MA_CA_MILITARY_RANGER_RLETEXTURE = -1758533342,
	MA_CA_MILITARY_RECRUIT_RLETEXTURE = -635085683,
	MA_CA_MUSICIAN_LOUNGE_SINGER_RLETEXTURE = -246426258,
	MA_CA_MUSICIAN_ROCKSTAR_RLETEXTURE = 1743092065,
	MA_CA_SLACKER_CLERK_RLETEXTURE = 977388551,
	MA_CA_SLACKER_LIFEGUARD_RLETEXTURE = 209639677,
	MA_CA_SLACKER_SLACKER_RLETEXTURE = -536790596,
	MA_FH_BEARD_01_RLETEXTURE = 287646563,
	MA_FH_BEARD_02_RLETEXTURE = -2010352935,
	MA_FH_GOATEE_01_RLETEXTURE = 36463611,
	MA_FH_GOATEE_02_RLETEXTURE = -1692061119,
	MA_FH_MUSTACHE_01_RLETEXTURE = 1389967300,
	MA_FH_MUTTONCHOPS_RLETEXTURE = -2050747423,
	MA_FH_SOUL_PATCH_RLETEXTURE = -357463015,
	MA_FT_ASIAN_01_RLETEXTURE = 43541321,
	MA_FT_ASIAN_02_RLETEXTURE = -1684983053,
	MA_FT_BLACK_01_RLETEXTURE = -1127437902,
	MA_FT_BLACK_02_RLETEXTURE = 633731080,
	MA_FT_DEFINED_CUT_RLETEXTURE = -884658845,
	MA_FT_NORMAL_01_RLETEXTURE = -268124186,
	MA_FT_NORMAL_02_RLETEXTURE = 1762520668,
	MA_FT_ROUNDED_RLETEXTURE = -820389990,
	MA_FT_ROUNDED_02_RLETEXTURE = -710536931,
	MA_HH_RECEDING_RLETEXTURE = -1332638620,
	MA_LB_1C_PANTS_01_RLETEXTURE = 1790649874,
	MA_LB_1C_PANTS_02_RLETEXTURE = -206407768,
	MA_LB_1C_PANTS_03_RLETEXTURE = -2068494530,
	MA_LB_1C_PANTS_04_RLETEXTURE = 449958557,
	MA_LB_1C_PANTS_05_RLETEXTURE = 1842799115,
	MA_LB_1C_PANTS_06_RLETEXTURE = -186666063,
	MA_LB_1C_PANTS_07_RLETEXTURE = -2082962649,
	MA_LB_1C_PANTS_08_RLETEXTURE = 325557942,
	MA_LB_1C_PANTS_09_RLETEXTURE = 1684057632,
	MA_LB_1C_PANTS_10_RLETEXTURE = 78063557,
	MA_LB_1C_SHORTS_01_RLETEXTURE = -2071645078,
	MA_LB_1C_SHORTS_02_RLETEXTURE = 495740368,
	MA_LB_1C_SHORTS_03_RLETEXTURE = 1787516230,
	MA_LB_1C_SHORTS_04_RLETEXTURE = -185614107,
	MA_LB_1C_SHORTS_05_RLETEXTURE = -2081886093,
	MA_LB_1C_TIGHT_01_RLETEXTURE = -1026132611,
	MA_LB_1C_TIGHT_02_RLETEXTURE = 1541350599,
	MA_LB_1C_TIGHT_03_RLETEXTURE = 752358481,
	MA_LB_1C_TIGHT_04_RLETEXTURE = -1296268814,
	MA_LB_2C_PANTS_01_B_RLETEXTURE = -216301437,
	MA_LB_2C_PANTS_01_T_RLETEXTURE = 131020242,
	MA_LB_2C_PANTS_02_B_RLETEXTURE = -245547302,
	MA_LB_2C_PANTS_02_T_RLETEXTURE = 92900235,
	MA_LB_2C_PANTS_03_B_RLETEXTURE = -257993491,
	MA_LB_2C_PANTS_03_T_RLETEXTURE = 72081852,
	MA_LB_2C_SHORTS_01_B_RLETEXTURE = 653239582,
	MA_LB_2C_SHORTS_01_T_RLETEXTURE = -767881137,
	MA_LB_2C_SHORTS_02_B_RLETEXTURE = 615062343,
	MA_LB_2C_SHORTS_02_T_RLETEXTURE = -797069802,
	MA_LB_2C_TIGHT_01_B_RLETEXTURE = -484679736,
	MA_LB_2C_TIGHT_01_T_RLETEXTURE = 399043225,
	MA_LB_2C_TIGHT_02_B_RLETEXTURE = -514137711,
	MA_LB_2C_TIGHT_02_T_RLETEXTURE = 361649344,
	MA_PO_FORMAL_RLETEXTURE = 1365176158,
	MA_PO_NAKED_RLETEXTURE = -194064687,
	MA_PO_PAJAMAS_RLETEXTURE = 873783689,
	MA_PO_SKELETON_PLUS_RLETEXTURE = 2011493939,
	MA_PO_SWIMSUIT_RLETEXTURE = -126503578,
	MA_PO_TEPPEN_CHEF_RLETEXTURE = -1003294587,
	MA_SH_BOOTS_01_RLETEXTURE = 309391186,
	MA_SH_BOOTS_02_RLETEXTURE = -1954955544,
	MA_SH_CLOGS_01_RLETEXTURE = -932046845,
	MA_SH_CLOGS_02_RLETEXTURE = 1367034297,
	MA_SH_DRESS_01_RLETEXTURE = -1045568339,
	MA_SH_SKIN_TIGHT_01_RLETEXTURE = 1309146438,
	MA_SH_SNEAKERS_01_RLETEXTURE = 1435291536,
	MA_SH_SNEAKERS_02_RLETEXTURE = -863658454,
	MA_UB_1C_COLLARED_01_RLETEXTURE = 1768436971,
	MA_UB_1C_COLLARED_02_RLETEXTURE = -262052527,
	MA_UB_1C_COLLARED_03_RLETEXTURE = -2023336505,
	MA_UB_1C_JACKET_01_B_RLETEXTURE = 1554723383,
	MA_UB_1C_JACKET_01_T_RLETEXTURE = -1468037274,
	MA_UB_1C_JACKET_02_B_RLETEXTURE = 1592626286,
	MA_UB_1C_JACKET_02_T_RLETEXTURE = -1439090369,
	MA_UB_1C_JACKET_03_RLETEXTURE = 1687784907,
	MA_UB_1C_JACKET_04_B_RLETEXTURE = 1516302556,
	MA_UB_1C_JACKET_04_T_RLETEXTURE = -1363917427,
	MA_UB_1C_LONG_SLV_01_RLETEXTURE = -2102313554,
	MA_UB_1C_LONG_SLV_02_RLETEXTURE = 465071124,
	MA_UB_1C_LONG_SLV_03_RLETEXTURE = 1824480386,
	MA_UB_1C_LONG_SLV_04_RLETEXTURE = -220477151,
	MA_UB_1C_LONG_SLV_05_RLETEXTURE = -2049115721,
	MA_UB_1C_SHORT_SLV_01_RLETEXTURE = -1987026702,
	MA_UB_1C_SHORT_SLV_02_RLETEXTURE = 278475080,
	MA_UB_1C_SHORT_SLV_03_RLETEXTURE = 1738408414,
	MA_UB_1C_SHORT_SLV_04_RLETEXTURE = -101018499,
	MA_UB_1C_SHORT_SLV_04_B_RLETEXTURE = -1982080316,
	MA_UB_1C_SHORT_SLV_04_T_RLETEXTURE = 2098163605,
	MA_UB_1C_SHORT_SLV_05_RLETEXTURE = -1895979797,
	MA_UB_1C_TIGHT_01_RLETEXTURE = 171095633,
	MA_UB_1C_TIGHT_02_RLETEXTURE = -1824790549,
	MA_UB_1C_TIGHT_03_RLETEXTURE = -465774723,
	MA_UB_2C_LONG_SLV_01_RLETEXTURE = -19916683,
	MA_UB_2C_LONG_SLV_01_B_RLETEXTURE = -1525901075,
	MA_UB_2C_LONG_SLV_01_T_RLETEXTURE = 1373121980,
	MA_UB_2C_LONG_SLV_02_RLETEXTURE = 1742293455,
	MA_UB_2C_LONG_SLV_02_B_RLETEXTURE = -1488312652,
	MA_UB_2C_LONG_SLV_02_T_RLETEXTURE = 1402901477,
	MA_UB_2C_SHORT_SLV_01_RLETEXTURE = -1729295733,
	MA_UB_2C_SHORT_SLV_02_RLETEXTURE = 31742769,
	MC_CA_MILITARY_CADET_RLETEXTURE = -1887460070,
	MC_FE_HEAVY_RLETEXTURE = -513559708,
	MC_FE_LIGHT_RLETEXTURE = -263678516,
	MC_FE_MED_RLETEXTURE = -438653624,
	MC_FP_CLOWN_RLETEXTURE = 1309402906,
	MC_FP_KISS_RLETEXTURE = 577457610,
	MC_FP_ZANNY_RLETEXTURE = -931099428,
	MC_FP_ZORRO_RLETEXTURE = 801130999,
	MC_FT_ASIAN_RLETEXTURE = -789897531,
	MC_FT_BLACK_RLETEXTURE = -746658711,
	MC_FT_NORMAL_RLETEXTURE = 459981428,
	MC_FT_ROUNDED_RLETEXTURE = 589449477,
	MC_HH_COWBOY_HAT_T_RLETEXTURE = 1548278725,
	MC_HH_PIRATE_HAT_T_RLETEXTURE = -1854930228,
	MC_HH_WIZARD_HAT_RLETEXTURE = -790299315,
	MC_LB_1C_PANTS_01_RLETEXTURE = -316996751,
	MC_LB_1C_PANTS_02_RLETEXTURE = 1947357899,
	MC_LB_1C_PANTS_03_RLETEXTURE = 51733085,
	MC_LB_1C_PANTS_04_RLETEXTURE = -1653475330,
	MC_LB_1C_PANTS_05_RLETEXTURE = -361314456,
	MC_LB_1C_PANTS_06_RLETEXTURE = 1937741522,
	MC_LB_1C_PANTS_07_RLETEXTURE = 75015748,
	MC_LB_1C_PANTS_08_RLETEXTURE = -1798849579,
	MC_LB_1C_PANTS_09_RLETEXTURE = -473920701,
	MC_LB_1C_PANTS_10_RLETEXTURE = -2096692570,
	MC_LB_1C_SHORTS_01_RLETEXTURE = 1354343597,
	MC_LB_1C_SHORTS_02_RLETEXTURE = -911149801,
	MC_LB_1C_SHORTS_03_RLETEXTURE = -1095252607,
	MC_LB_1C_SHORTS_04_RLETEXTURE = 550719522,
	MC_LB_1C_TIGHT_01_RLETEXTURE = 1165381662,
	MC_LB_1C_TIGHT_02_RLETEXTURE = -595656284,
	MC_LB_1C_TIGHT_03_RLETEXTURE = -1418186446,
	MC_LB_2C_PANTS_01_B_RLETEXTURE = -154146048,
	MC_LB_2C_PANTS_01_T_RLETEXTURE = 35348049,
	MC_LB_2C_PANTS_02_B_RLETEXTURE = -192326311,
	MC_LB_2C_PANTS_02_T_RLETEXTURE = 6152200,
	MC_LB_2C_PANTS_03_B_RLETEXTURE = -179617938,
	MC_LB_2C_PANTS_03_T_RLETEXTURE = 27232831,
	MC_LB_2C_SHORTS_01_B_RLETEXTURE = 1381737455,
	MC_LB_2C_SHORTS_01_T_RLETEXTURE = -1500571970,
	MC_LB_2C_SHORTS_02_B_RLETEXTURE = 1344085430,
	MC_LB_2C_SHORTS_02_T_RLETEXTURE = -1530287897,
	MC_LB_2C_TIGHT_01_B_RLETEXTURE = -423087029,
	MC_LB_2C_TIGHT_01_T_RLETEXTURE = 303857946,
	MC_LB_2C_TIGHT_02_B_RLETEXTURE = -460420590,
	MC_LB_2C_TIGHT_02_T_RLETEXTURE = 274349891,
	MC_LB_COWBOY_RLETEXTURE = 1204952562,
	MC_LB_COWBOY_T_RLETEXTURE = 1433431741,
	MC_PO_FORMAL_RLETEXTURE = 154293919,
	MC_PO_NAKED_RLETEXTURE = -258269460,
	MC_PO_PAJAMAS_RLETEXTURE = -667975914,
	MC_PO_SWIMSUIT_RLETEXTURE = -1742143443,
	MC_SH_BOOTS_01_RLETEXTURE = 1915509273,
	MC_SH_BOOTS_02_RLETEXTURE = -349893725,
	MC_SH_CLOGS_01_RLETEXTURE = -1473335992,
	MC_SH_CLOGS_02_RLETEXTURE = 824704242,
	MC_SH_DRESS_01_RLETEXTURE = -1578020378,
	MC_SH_SKIN_TIGHT_01_RLETEXTURE = 1272157893,
	MC_SH_SNEAKERS_01_RLETEXTURE = -768808205,
	MC_SH_SNEAKERS_02_RLETEXTURE = 1260763977,
	MC_UB_1C_COLLARED_01_RLETEXTURE = 500970010,
	MC_UB_1C_COLLARED_02_RLETEXTURE = -2066390112,
	MC_UB_1C_COLLARED_03_RLETEXTURE = -204319946,
	MC_UB_1C_JACKET_01_B_RLETEXTURE = 673133766,
	MC_UB_1C_JACKET_01_T_RLETEXTURE = -590642793,
	MC_UB_1C_JACKET_02_B_RLETEXTURE = 710511263,
	MC_UB_1C_JACKET_02_T_RLETEXTURE = -561168434,
	MC_UB_1C_JACKET_03_RLETEXTURE = -1331356404,
	MC_UB_1C_JACKET_04_B_RLETEXTURE = 785708589,
	MC_UB_1C_JACKET_04_T_RLETEXTURE = -637516932,
	MC_UB_1C_LONG_SLV_01_RLETEXTURE = -167429281,
	MC_UB_1C_LONG_SLV_01_T_RLETEXTURE = -1663789005,
	MC_UB_1C_LONG_SLV_02_RLETEXTURE = 1863084773,
	MC_UB_1C_LONG_SLV_03_RLETEXTURE = 403397235,
	MC_UB_1C_LONG_SLV_04_RLETEXTURE = -2039492656,
	MC_UB_1C_LONG_SLV_05_RLETEXTURE = -244777146,
	MC_UB_1C_SHORT_SLV_01_RLETEXTURE = 1130239614,
	MC_UB_1C_SHORT_SLV_02_RLETEXTURE = -631814204,
	MC_UB_1C_SHORT_SLV_03_RLETEXTURE = -1387235502,
	MC_UB_1C_SHORT_SLV_04_B_RLETEXTURE = -1484057788,
	MC_UB_1C_SHORT_SLV_04_T_RLETEXTURE = 1398777365,
	MC_UB_1C_SHORT_SLV_05_RLETEXTURE = 1144246887,
	MC_UB_1C_TIGHT_01_RLETEXTURE = -1919773902,
	MC_UB_1C_TIGHT_02_RLETEXTURE = 345752200,
	MC_UB_1C_TIGHT_03_RLETEXTURE = 1671229982,
	MC_UB_2C_LONG_SLV_01_B_RLETEXTURE = 1103665552,
	MC_UB_2C_LONG_SLV_01_T_RLETEXTURE = -1256444735,
	MC_UB_2C_LONG_SLV_02_B_RLETEXTURE = 1133389769,
	MC_UB_2C_LONG_SLV_02_T_RLETEXTURE = -1218801000,
	MC_UB_2C_SHORT_SLV_01_RLETEXTURE = 1378057223,
	MC_UB_2C_SHORT_SLV_02_RLETEXTURE = -886428227,
	MC_UB_2C_SHORT_SLV_02_T_RLETEXTURE = 71860515,
	MC_UB_COWBOY_RLETEXTURE = 1202842072,
	MC_UB_COWBOY_T_RLETEXTURE = -2134141709,
	MU_HH_CLEAN_CUT_RLETEXTURE = -1741802355,
	MU_HH_HEADBAND_T_RLETEXTURE = 197977841,
	MU_HH_MED_LENGTH_01_RLETEXTURE = 754736885,
	MU_HH_MED_LENGTH_02_RLETEXTURE = -1242230961,
	MU_HH_MED_LENGTH_03_RLETEXTURE = -1024311335,
	MU_HH_MED_LENGTH_04_RLETEXTURE = 1553377914,
	MU_HH_MOHAWK_RLETEXTURE = -1943457969,
	MU_HH_MULLET_RLETEXTURE = -734013106,
	MU_HH_PONYTAIL_RLETEXTURE = -1116915666,
	MU_HH_PONY_TAIL_RLETEXTURE = 309375360,
	MU_HH_STOCKING_CAP_RLETEXTURE = -1657981736,
	MU_HH_STOCKING_CAP_T_RLETEXTURE = 2024398854,
	NEKKID_CENSORSHIP_BAR_RLETEXTURE = 1649194276,
	NPC_FIREFIGHTER_RLETEXTURE = 542255949,
	NPC_GARDENER_RLETEXTURE = -236245840,
	NPC_HANDYMAN_RLETEXTURE = 876295113,
	NPC_MAID_RLETEXTURE = 21221387,
	NPC_MAIL_CARRIER_RLETEXTURE = -169278974,
	NPC_MONKEY_BUTLER_RLETEXTURE = 1642686160,
	NPC_PAPERGIRL_RLETEXTURE = 1414048478,
	NPC_PIZZA_GUY_RLETEXTURE = 1269994351,
	NPC_POLICE_OFFICER_RLETEXTURE = 994415533,
	NPC_REAPER_RLETEXTURE = -183589130,
	NPC_REAPER_SMOKESKULL_RLETEXTURE = -736774461,
	NPC_REPOMAN_RLETEXTURE = 759903044,
	NPC_SOCIAL_WORKER_RLETEXTURE = -793679215,
	NPC_THIEF_RLETEXTURE = -745727416,
	UU_EY_IRIS_RLETEXTURE = -713522503,
	UU_EY_WHITE_RLETEXTURE = -907468313,
	UU_HH_AFRO_RLETEXTURE = 529106641,
	UU_HH_BALD_RLETEXTURE = 1273027053,
	UU_HH_BALD_02_RLETEXTURE = -554039174,
	UU_HH_BALL_CAP_RLETEXTURE = 1806855086,
	UU_HH_BALL_CAP_B_RLETEXTURE = 248263133,
	UU_HH_BALL_CAP_T_RLETEXTURE = -99056500,
	UU_HH_CHEF_HAT_T_RLETEXTURE = 1923056705,
	UU_HH_CORNROWS_RLETEXTURE = -891624142,
	UU_HH_COWBOY_HAT_RLETEXTURE = -205389309,
	UU_HH_COWBOY_HAT_B_RLETEXTURE = 554414837,
	UU_HH_COWBOY_HAT_T_RLETEXTURE = -706803804,
	UU_HH_PUNK_SPIKED_RLETEXTURE = -2145760116,
	UU_HH_PUNK_SPIKED_B_RLETEXTURE = 208939326,
	UU_HH_PUNK_SPIKED_T_RLETEXTURE = -123691921,
	UU_HH_TOP_HAT_B_RLETEXTURE = 1896194750,
	UU_HH_TOP_HAT_T_RLETEXTURE = -2049894417
};

struct TriTexture {
	u32 layer1;
	u32 layer2;
	u32 layer3;
};

struct VECTOR<Sim::LayeredPart> {
private:
	LayeredPart *pData;
	
public:
	VECTOR<Sim::LayeredPart>& operator=();
	VECTOR();
	VECTOR();
	int size();
	LayeredPart& operator[]();
	LayeredPart& operator[]();
	LayeredPart* begin();
	LayeredPart* end();
	LayeredPart* begin();
	LayeredPart* end();
};

struct VECTOR<Sim::SinglePart> {
private:
	SinglePart *pData;
	
public:
	VECTOR<Sim::SinglePart>& operator=();
	VECTOR();
	VECTOR();
	int size();
	SinglePart& operator[]();
	SinglePart& operator[]();
	SinglePart* begin();
	SinglePart* end();
	SinglePart* begin();
	SinglePart* end();
};

struct VECTOR<unsigned int> {
private:
	u32 *pData;
	
public:
	VECTOR<unsigned int>& operator=();
	VECTOR();
	VECTOR();
	int size();
	u32& operator[]();
	u32& operator[]();
	u32* begin();
	u32* end();
	u32* begin();
	u32* end();
};

struct VECTOR<Sim::TriTexture> {
private:
	TriTexture *pData;
	
public:
	VECTOR<Sim::TriTexture>& operator=();
	VECTOR();
	VECTOR();
	int size();
	TriTexture& operator[]();
	TriTexture& operator[]();
	TriTexture* begin();
	TriTexture* end();
	TriTexture* begin();
	TriTexture* end();
};

struct Table {
	VECTOR<Sim::LayeredPart> upperBody;
	VECTOR<Sim::LayeredPart> lowerBody;
	VECTOR<Sim::SinglePart> shoe;
	VECTOR<Sim::SinglePart> face;
	VECTOR<Sim::LayeredPart> hair;
	VECTOR<unsigned int> glasses;
	VECTOR<Sim::TriTexture> facialHair;
};

enum Sex {
	kMale = 0,
	kFemale = 1
};

enum Age {
	kAdult = 0,
	kChild = 1
};

struct CostumeSet {
	Costume maleAdult;
	Costume femaleAdult;
	Costume maleChild;
	Costume femaleChild;
};

struct TLinkedList<EStringRedBlackTreeNode,12,16> {
protected:
	EStringRedBlackTreeNode *m_pHead;
	EStringRedBlackTreeNode *m_pTail;
	
public:
	TLinkedList<EStringRedBlackTreeNode,12,16>& operator=();
	TLinkedList();
	TLinkedList();
	static EStringRedBlackTreeNode*& Last(/* parameters unknown */);
	static EStringRedBlackTreeNode*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EStringRedBlackTreeNode* Head();
	EStringRedBlackTreeNode* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct StackString<260> : StringBuffer {
private:
	char fChars[260];
};

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1647;
protected:
	struct {
		short int __delta;
		short int __index;
		union {
			s32 (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_ToolValueCalcFnTab[7];
	CursorMode m_mode;
	bool m_bUndoable;
	bool m_bNewObject;
	EVec3 m_vLastPos;
	EVec3 m_vPos;
	EVec2 m_vCursorAnchor;
	EVec2 m_vCursorAnchorCenter;
	ESimsCam *m_pCam;
	EDL *m_pdl;
	EDL *m_pLineDl;
	EPiMenu *m_pPiMenu;
	cXCursorObject *m_pCursorObject;
	float m_fCursorTheta;
	int m_wallPaperSide;
	ERShader *m_pLineShdr;
	ERShader *m_pFloorShd;
	ERShader *m_pWPaperShd;
	ERModel *m_pMainBase;
	ERModel *m_pMainBaseH;
	ERModel *m_pMainCirDash;
	ERModel *m_pArrow;
	ERModel *m_pArrowH;
	ERModel *m_pTrackBase;
	ERModel *m_pTrackH;
	ERModel *m_pTrackCirDash;
	ERModel *m_pBuild;
	ERModel *m_pBuild02;
	ERModel *m_pBuildH;
	ERModel *m_pBuy;
	ERModel *m_pBuy02;
	ERModel *m_pBuyH;
	EIParticleEmit *m_pEmit;
	ERParticleType *m_pType;
	ISimInstanceList m_objList;
	CursorFloorTilePtrList m_floorList;
	WallTile *m_pToolResMap;
	FTilePt m_undoLoc;
	SInt16 m_undoDir;
	SInt32 m_refund;
	SInt32 m_ring_S0;
	SInt32 m_ring_S1;
	float m_scaletime;
	WallStyle m_fenctype;
	u32 m_toolUnitPrice;
	static EBound3 m_lotBound;
	static bool m_bGridInit;
	static EDL *m_pGridDl;
	static ERShader *m_pWhiteLineShader;
	static ERShader *m_pWallUnderConstructionShd;
public:
	static ERShader *m_pBuildToolGuideShd;
	
	ESimsCursor& operator=();
	ESimsCursor();
	ESimsCursor();
	/* vtable[1] */ virtual ESimsCursor(ESimsCursor*, int, void);
	bool CanUserSell();
	void ClearPlacementError();
	void Init();
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[14] */ virtual void SetFlag();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawMenu();
	void Draw_Curs();
	void GetCamOff();
	void SnapToDefPos();
	void SetCam();
	ESimsCam* GetCam();
	void GetPos();
	EVec3& GetPos();
	/* vtable[4] */ virtual void SetPos();
	u32 GetPlayerId();
	float GetCurorRad();
	void SetCursorObject();
	bool SafeToUnPause();
	void MoveCursor();
	void InitFloorTool();
	void SnapToWallVert();
	void FindWallDragVert();
	EVec2 GetSnapPos();
	void GetSnapPos();
	void LiveUpdate();
	void PauseUpdate();
	void BuyUpdate();
	bool CheckForXPressLive();
	void GetListofObjectsInCusorRad();
	bool HasGrabObject();
	cXObject* GetGrabObject();
	bool CheckForXPressBuyBuild();
	void Float();
	cXObject* PointToObject();
	bool TurnToWall();
	void TurnObject();
	bool InPiMenu();
	bool PiMenuCanUpdate();
	void CancelCursor();
	void UpdateHouse();
	bool TryUndoObjectPlacement();
	void FloorUpdate();
	CursorFloorTile* CreateCursorFloorTile();
	CursorMode GetCursorMode();
	bool CursorHasObject();
	void ExitFloorTool();
	void DrawCursorFloorList();
	bool InToolMode();
	bool InFloorMode();
	bool InWallMode();
	void DrawFloorPrevew();
	void DrawDeletePrevew();
	void DrawPrevewRect();
	void DrawRoomFillPrevew();
	void SetFloor();
	void BeginWallTool();
	void ExitWallTool();
	void WallToolUpdate();
	void DrawWallPreview();
	void DrawWallDelPreview();
	void DrawWallRoomPreview();
	bool FinalizeWallPlacement();
	bool FinalizeWallDel();
	bool FinalizeRoom();
	s32 GetWallLineCost();
	bool CanChangeTileAdd();
	bool CanChangeTileDelete();
	bool SubmitLine();
	static bool KillArchitecturalObject(/* parameters unknown */);
	bool AddWallAtTile();
	void VertPosToTile();
	static void ConvertVertsToTiles(/* parameters unknown */);
	static TilePtDir GetTileDirection(/* parameters unknown */);
	void DeleteWallAtTile();
	bool LegalWallTile();
	bool InPaperTool();
	void BeginPaperTool();
	void ExitPaperTool();
	void PaperToolUpdate();
	void DrawPaperPreview();
	void DrawPaperDelPreview();
	void DrawPaperRoomPreview();
	bool FinalizePaperPlacement();
	bool FinalizePaperDel();
	bool FinalizePaperForRoom();
	void AddPaperAtTile();
	void DeletePaperAtTile();
	void ChangeTile();
	int GetSideOfWall();
	bool SubmitPaperLine();
	int GetPaperLineCost();
	static void UpdateLot(/* parameters unknown */);
	s32 _GetkDefaultToolValue();
	s32 _GetkFloorToolValue();
	s32 _GetkWallToolValue();
	s32 _GetkPaperToolValue();
	s32 _GetkFenceToolValue();
	s32 GetCurToolValue();
	static void CleanUpGrid(/* parameters unknown */);
	static void SetUpGrid(/* parameters unknown */);
	static void DrawGrid(/* parameters unknown */);
};

typedef ISimInstanceList *ISimInstanceListPtr;
typedef TNodeList<EPiSubMenu *> EPiSubMenuPtrList;

struct EPiSubMenu : EUIScrollMenu {
protected:
	EPiSubMenu *m_pLastMenu;
	BString2 m_name;
	
public:
	EPiSubMenu& operator=();
	EPiSubMenu();
	EPiSubMenu();
	EPiSubMenu();
	/* vtable[1] */ virtual EPiSubMenu(EPiSubMenu*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(/* a1 5 */ ERC *prc);
	/* vtable[7] */ virtual void Message(/* s2 18 */ EUIObjectNode *pChild, /* a2 6 */ u32 messId);
	void Draw_Menu(/* s2 18 */ ERC *prc);
	u8 GetPlayerId();
	int CreateItem(/* s6 22 */ u16 *longstr, /* s5 21 */ u32 objectHandle, /* s2 18 */ Interaction *pAction, /* s4 20 */ EPiSubMenu *pMenu);
	void Reset();
	void Init();
	void AdjustMenuSize();
	void StartAnim();
protected:
	void OnCancle();
	void DrawBlinkingPrompt(/* s1 17 */ ERC *prc, /* s2 18 */ int which);
};

struct TNodeList<EPiSubMenu *> : ENodeList {
	TNodeList(TNodeList<EPiSubMenu *>*, int, void);
	TNodeList();
	TNodeList();
	static EPiSubMenu* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EPiSubMenu *>& operator=();
	void MoveContents();
};

struct EPiMenu : EUIObjectNode {
protected:
	EPiSubMenu *m_pCurMenu;
	EPiSubMenuPtrList m_menuList;
	cXObject *m_pGoHereOb;
	bool m_bExit;
	
public:
	EPiMenu& operator=();
	EPiMenu();
	EPiMenu();
	EPiMenu();
	/* vtable[1] */ virtual EPiMenu(EPiMenu*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(/* a1 5 */ ERC *prc);
	/* vtable[7] */ virtual void Message(/* s3 19 */ EUIObjectNode *pChild, /* a2 6 */ u32 messId);
	u8 GetPlayerId();
	bool CreateObjectMenuFromOjbList(/* s0 16 */ TNodeList<ISimInstance *> &objlist);
	bool CreateObjectMenuForBuyBuild(/* s2 18 */ TNodeList<ISimInstance *> &objlist);
	void Kill();
	void SetMenu(/* a1 5 */ EPiSubMenu *pMenu);
	EPiSubMenu* FindSubMenu(/* s2 18 */ BString2 &str);
	void CleanUpActionMenus();
	void CleanUpAllMenus();
	void Die();
	void CreateGoHereObjectForMenu();
protected:
	void AdjustMenuSizes();
	EPiSubMenu* CreateInteractionMenu(/* s2 18 */ cXObject *pLeadObj, /* s4 20 */ InteractionList &interactions);
	bool CreateMenuForGoHere();
	void ProcessAction(/* s7 23 */ Interaction *pAction, /* a2 6 */ BString2 &szRoot);
};

struct House {
	__vtbl_ptr_type *$vf833;
	
	House& operator=();
	House();
protected:
	House();
	/* vtable[1] */ virtual House(House*, int, void);
public:
	/* vtable[2] */ virtual void Initialize();
	/* vtable[3] */ virtual void Destroy();
	/* vtable[4] */ virtual void SetLotSize(House*, int, void);
	/* vtable[5] */ virtual cXObject* GetFirstObject();
	/* vtable[6] */ virtual Family* GetFamily();
	/* vtable[7] */ virtual BString& GetDescription();
	/* vtable[8] */ virtual void SetDescription();
	/* vtable[9] */ virtual void GetHouseStats();
	/* vtable[10] */ virtual void AddLayoutTick();
	/* vtable[11] */ virtual Boolean DoCommand();
	/* vtable[12] */ virtual void DoStream();
	/* vtable[13] */ virtual void EnterLiveMode();
	/* vtable[14] */ virtual void PrepareForBudgetWindow();
	/* vtable[15] */ virtual PiecewiseFn* GetSizeScoreCurve();
	/* vtable[16] */ virtual PiecewiseFn* GetFurnishingsScoreCurve();
	/* vtable[17] */ virtual void SetFamilyToNull();
	static House* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

typedef TNodeList<EParticleObj *> EParticleObjPtrList;
typedef TNodeList<ERShader *> ERShaderPtrList;

struct TNodeList<EParticleEffect *> : ENodeList {
	TNodeList(TNodeList<EParticleEffect *>*, int, void);
	TNodeList();
	TNodeList();
	static EParticleEffect* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EParticleEffect *>& operator=();
	void MoveContents();
};

struct TFloatTree<EILightmap *> : EFloatTree {
	TFloatTree<EILightmap *>& operator=();
	TFloatTree();
	TFloatTree();
	TFloatTree(TFloatTree<EILightmap *>*, int, void);
	EILightmap* operator[]();
	EILightmap*& operator[]();
	FTIterator Insert();
	FTIterator Find();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	FTIterator SetValue();
	static void SetValue(/* parameters unknown */);
	void SetValues();
	static EILightmap* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct TRedBlackTree<ISimsObjectModel *,ISimsObjectModel *> : ERedBlackTree {
	TRedBlackTree<ISimsObjectModel *,ISimsObjectModel *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<ISimsObjectModel *,ISimsObjectModel *>*, int, void);
	ISimsObjectModel* operator[]();
	ISimsObjectModel*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static ISimsObjectModel* GetKey(/* parameters unknown */);
	static ISimsObjectModel* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct ISimsObjectModel : ISimInstance {
	static ETypeInfo m_typeInfo;
	EHouse *m_pEHouse;
	static EILightmapPtrRBTree m_lightmapComputeList;
	static EILightmapFloatTree m_lmcomputefloattree;
	static ISimsObjectModelPtrRBTree m_updateCalc3List;
	u32 m_bAnimSleep : 1;
	u32 m_bWasHidden : 1;
	u32 m_bAmOutside : 1;
	u32 m_bSubModel : 1;
	u32 m_bPortal : 1;
	static ERShader *m_pWhiteShader;
protected:
	int p1blendidx[2];
	int p2blendidx[2];
	u32 m_curShdId;
	u32 m_lastGraphic;
	u32 m_nTracks;
	f32 m_time;
	f32 m_fRot;
	f32 m_burpTime;
	float m_highlightTime[2];
	s32 m_lastdir;
	EVec3 m_vPos;
	ERShader *m_pCurShader;
	ObjAnimDef m_curState;
	EParticleObj *m_pCurParticleObj;
	EIStaticModel *m_pShadow;
	ISimInstanceList m_subModelList;
	EIWallPart2 *m_pWall;
	EILight *m_pLightBulb;
	ELights3 m_lights3;
	int m_nOtds;
	
public:
	ISimsObjectModel& operator=();
	ISimsObjectModel();
	static ISimsObjectModel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ISimsObjectModel* CreateCopy();
	ISimsObjectModel();
	/* vtable[6] */ virtual ISimsObjectModel(ISimsObjectModel*, int, void);
	static void ShutdownCalc3List(/* parameters unknown */);
	static void ShutdownLMComputeList(/* parameters unknown */);
	/* vtable[12] */ virtual void Draw(/* -0xd0(caller sp) */ ERC *prc, /* -0xcc(caller sp) */ u32 renderFlags);
	/* vtable[10] */ virtual void Update();
	/* vtable[25] */ virtual void Create(/* a1 5 */ cXObject *pXOb, /* a2 6 */ EHouse *pEHouse);
	/* vtable[39] */ virtual void OrentSubObject();
	/* vtable[2] */ virtual void SetObjOrient();
	/* vtable[28] */ virtual void CreateShadow();
	/* vtable[29] */ virtual void InsertSubModelsInHouse(/* s1 17 */ ERLevel *pLevel);
	/* vtable[30] */ virtual void RemoveSubModelsFromHouse(/* s1 17 */ ERLevel *pLevel);
	/* vtable[31] */ virtual void PropigateFlagsToSubModels();
	/* vtable[32] */ virtual EIStaticModel* GetShadow();
	/* vtable[19] */ virtual void CalcLights3(/* fp 30 */ EVec3 &vPos, /* s2 18 */ ELights3 &lights3Out);
	/* vtable[38] */ virtual bool IsMultiTilePart();
	/* vtable[24] */ virtual EMat4* GetDrawMatrix(/* s0 16 */ ERC *prc);
	void SetSOMModel(/* s0 16 */ u32 modelId);
	void DrawBounds(/* a1 5 */ ERC *prc);
	void ApplyMatrix(/* f22 60 */ float ftheta, /* s0 16 */ EVec3 &vPos, /* s1 17 */ EVec3 &vScale);
	void SetInitalObjectState();
	void SetShadow(/* a1 5 */ EIStaticModel *ps);
	void ChageShader(/* s2 18 */ u32 oldShdId, /* s1 17 */ u32 newShdId);
	void CreateParticles();
	void SetupCharacter();
	void InitBulb();
	float GetHeightOffset();
	void OrientSubObjects();
	bool GetDynamic();
	void SetDynamic(/* a1 5 */ bool on);
	EVec3& GetPos();
	void SetPos(/* a1 5 */ EVec3 &vpos);
	float GetRot();
	void SetRot(/* f12 50 */ float val);
	void SetPosStatic(/* a1 5 */ EVec3 &vpos, /* f12 50 */ float rot);
	/* vtable[33] */ virtual void SetOutOfWorld();
	/* vtable[34] */ virtual void StartBurp(/* a1 5 */ int player);
	static void AnimOrderTableCallback(/* parameters unknown */);
	static void BigAnimOrderTableCallback(/* parameters unknown */);
	static void StaticOrderTableCallback(/* parameters unknown */);
	void ReCalcLights3();
	EILight* GetILight();
	static void DoLightmapCompute(/* parameters unknown */);
	void OverlapLightmapCollect(/* s5 21 */ EILight *pLight);
	bool TestLightToObject(/* s1 17 */ EILight *pLight);
	void HotSyncLighting();
protected:
	void InitAnimTracks();
	void UpdateParticle(/* s1 17 */ ObjAnimDef *animdef);
	void UpdateModel(/* a1 5 */ ObjAnimDef *animdef);
	void UpdateAnim(/* s2 18 */ ObjAnimDef *animdef);
	void UpdateBulb(/* a1 5 */ ObjAnimDef *animdef);
	void UpdateShader(/* a1 5 */ ObjAnimDef *animdef);
	ObjAnimDef& GetAnimDef(/* s5 21 */ s32 graphic, /* a2 6 */ bool ignoreWarn);
	void CalcOrient();
	void UpdateHighlightAnim();
};

struct VALUE {
	Int index;
	Int motive;
	enum { // 0x4
		TTAB_NOTYPE = 0,
		TTAB_MAX = 1,
		TTAB_MOD = 2,
		TTAB_ATT = 3
	} type;
	Int value;
	Int att;
};

// warning: multiple differing types with the same name (enum constant not equal)
enum CATEGORY {
	WALLPAPER = 0,
	STRIPED = 1,
	TWO_TONE = 2,
	PANELED = 3,
	THEMED = 4,
	GEOMETRIC = 5,
	WACKY = 6,
	ANIMAL = 7,
	FANCY = 8,
	OUT_PANELED = 9,
	OUT_PATTERNED = 10,
	OUT_STRIPED = 11,
	OUT_MISC = 12
};

struct WallTile {
	u32 cost;
	ELocString name;
	u32 shaderID;
	CATEGORY category;
};

enum SOUND {
	HARD = 0,
	MEDIUM = 1,
	SOFT = 2,
	SQUISHY = 3
};

// warning: multiple differing types with the same name (enum constant not equal)
enum CATEGORY {
	SOLID_CARPET = 0,
	PATTERNED_CARPET = 1,
	LINOLEUM = 2,
	WOOD = 3,
	TILE = 4,
	WACKY = 5,
	ODD = 6,
	OUTDOOR = 7
};

struct FloorTile {
	u32 cost;
	ELocString name;
	SOUND sound;
	u32 shaderID;
	CATEGORY category;
};

struct VECTOR<WallTile *> {
private:
	WallTile **pData;
	
public:
	VECTOR<WallTile *>& operator=();
	VECTOR();
	VECTOR();
	int size();
	WallTile*& operator[]();
	WallTile*& operator[]();
	WallTile** begin();
	WallTile** end();
	WallTile** begin();
	WallTile** end();
};

struct WallSet : VECTOR<WallTile *> {
};

struct VECTOR<FloorTile *> {
private:
	FloorTile **pData;
	
public:
	VECTOR<FloorTile *>& operator=();
	VECTOR();
	VECTOR();
	int size();
	FloorTile*& operator[]();
	FloorTile*& operator[]();
	FloorTile** begin();
	FloorTile** end();
	FloorTile** begin();
	FloorTile** end();
};

struct FloorSet : VECTOR<FloorTile *> {
};

struct VECTOR<FenceData *> {
private:
	FenceData **pData;
	
public:
	VECTOR<FenceData *>& operator=();
	VECTOR();
	VECTOR();
	int size();
	FenceData*& operator[]();
	FenceData*& operator[]();
	FenceData** begin();
	FenceData** end();
	FenceData** begin();
	FenceData** end();
};

struct FenceSet : VECTOR<FenceData *> {
};

enum EParticleTypeSymbol {
	UNDEFINED_PARTICLETYPE = 0,
	ABDUCTION_PARTICLETYPE = 1789738282,
	ABDUCTION_QUICK_PARTICLETYPE = -177412686,
	ANDERSONVILLE_PEDESTAL_SINK_SUDS_PARTICLETYPE = -1886615844,
	ANDERSONVILLE_PEDESTAL_SINK_WATER_PARTICLETYPE = -221725309,
	AROMASTER_2000_BLUE_PARTICLETYPE = 1443615554,
	AROMASTER_2000_PURPLE_PARTICLETYPE = 1658998858,
	AROMASTER_2000_RED_PARTICLETYPE = 271133085,
	AROMASTER_2000_SMOKE_PARTICLETYPE = 641639298,
	AROMASTER_2000_YELLOW_PARTICLETYPE = 1482935859,
	BABY_CRADLE_FLOWERS_PARTICLETYPE = 712536731,
	BENI_KANA_TEPPENYAKI_TABLE_DRAGON_A_PARTICLETYPE = -1459349797,
	BENI_KANA_TEPPENYAKI_TABLE_DRAGON_N_PARTICLETYPE = 968559434,
	BENI_KANA_TEPPENYAKI_TABLE_FIREBALL_A_PARTICLETYPE = -800528706,
	BENI_KANA_TEPPENYAKI_TABLE_FIREBALL_N_PARTICLETYPE = 1089993519,
	BENI_KANA_TEPPENYAKI_TABLE_FLASH_PARTICLETYPE = 199791565,
	BENI_KANA_TEPPENYAKI_TABLE_SHRIMP_PARTICLETYPE = -733546595,
	BENI_KANA_TEPPENYAKI_TABLE_STEAM_PARTICLETYPE = 970119375,
	BILL_EXPLODE_FIRE_PARTICLETYPE = 2013747704,
	BILL_EXPLODE_FLARE_PARTICLETYPE = 1268207208,
	BIRCH_TREE_PARTICLETYPE = -1867305593,
	CARVING_BLOCK_ROCK_PARTICLETYPE = -778026852,
	CONGRATS_FLARE_PARTICLETYPE = -483633754,
	CONGRATS_SPARK_PARTICLETYPE = -1235515276,
	CONGRATS_STAR_PARTICLETYPE = 902205838,
	FIGHT_DIRTCLOUD_PARTICLETYPE = 856136588,
	FIGHT_STAR_PARTICLETYPE = -1510662048,
	FIREPLACE_FIRE_FIRE_PARTICLETYPE = 715416996,
	FIREPLACE_FIRE_HOTSPOT_PARTICLETYPE = -485598813,
	FIREPLACE_FIRE_SMOKE_PARTICLETYPE = -1472591090,
	FIRE_EXTINGUISHER_PARTICLETYPE = -1101703927,
	FLARE1_PARTICLETYPE = 1702921062,
	FOUNTAIN_OF_TRANQUILITY_PARTICLETYPE = -1299510361,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_STEAM_PARTICLETYPE = 539595525,
	HEAD_IN_JAR_CURIO_PARTICLETYPE = -287101311,
	HOUSE_FIRE_FIRE_PARTICLETYPE = -268095333,
	HOUSE_FIRE_SMOKE_PARTICLETYPE = 512132966,
	HYDRONOMIC_KITCHEN_SINK_SUDS_PARTICLETYPE = -915240516,
	HYDRONOMIC_KITCHEN_SINK_WATER_PARTICLETYPE = -1086577964,
	HYDROTHERA_BATHTUB_STEAM_PARTICLETYPE = 837853075,
	ICE_CHEST_COOLBLAST_PARTICLETYPE = -1777819009,
	JUSTA_BATHTUB_STEAM_PARTICLETYPE = 504408887,
	KRAFTKING_WOODWORKING_TABLE_PARTICLETYPE = -91620075,
	MASTER_SUITE_TUB_BUBBLES_PARTICLETYPE = 917065555,
	MASTER_SUITE_TUB_WATERFALL_PARTICLETYPE = -1059050558,
	MUSICAL_NOTES_GENERIC_PARTICLETYPE = 1788795740,
	PROP_WATERINGCAN_PARTICLETYPE = 1263278991,
	PROP_WATERINGCAN_TABLE_PARTICLETYPE = -560061360,
	REPOZESSER_PARTICLETYPE = -1356543608,
	REPOZESSER_SPARK_PARTICLETYPE = 200138538,
	RESURRECTION_PARTICLETYPE = 1480731303,
	RESURRECTION_B_PARTICLETYPE = -556414878,
	SANDBOX_DIRTCLOUD_PARTICLETYPE = -1350640329,
	SANDBOX_VOLCANO_FIRE_PARTICLETYPE = 1617760506,
	SANDBOX_VOLCANO_FLARE_PARTICLETYPE = -1518254835,
	SANDBOX_VOLCANO_SMOKE_PARTICLETYPE = 614710920,
	SANI_QUEEN_BATHTUB_STEAM_PARTICLETYPE = 189429425,
	SMOKE_HEAVY_GENERIC_PARTICLETYPE = -2086456734,
	SMOKE_LIGHT_GENERIC_PARTICLETYPE = 1720551738,
	SMOKE_PUFF_PARTICLETYPE = 1442147509,
	SMOKE_SMOLDERING_PARTICLETYPE = -1492126603,
	SONIC_SHOWER_BUBBLES_PARTICLETYPE = -1534009332,
	SPACE_MISER_SHOWER_SPRAY_PARTICLETYPE = 605721400,
	SPACE_MISER_SHOWER_STEAM_PARTICLETYPE = -1463065113,
	SPRINKLER_PARTICLETYPE = -1093599287,
	TREE_SWING_HEARTS_PARTICLETYPE = 653434236,
	WATERFALL_WATER_PARTICLETYPE = -812305165,
	WATER_SPLASH_PARTICLETYPE = 966184073,
	WATER_SPLASH_DROP_PARTICLETYPE = 1825722920,
	WATER_SPLASH_RIPPLE_PARTICLETYPE = 157177237,
	WATER_SPLASH_RIPPLE_BIG_PARTICLETYPE = -1254454134,
	WHIRL_WIZARD_HOT_TUB_PARTICLETYPE = 413093903,
	WHIRL_WIZARD_HOT_TUB_STEAM_PARTICLETYPE = -557104119,
	ZAP_ZALL_BUG_ZAPPER_BUG_PARTICLETYPE = 1707584011,
	ZAP_ZALL_BUG_ZAPPER_ZAP_PARTICLETYPE = -628159919,
	ZAP_ZALL_BUG_ZAPPER_ZAPPING_PARTICLETYPE = -1216642538
};

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2642;
protected:
	struct {
		short int __delta;
		short int __index;
		union {
			s32 (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_ToolValueCalcFnTab[7];
	CursorMode m_mode;
	bool m_bUndoable;
	bool m_bNewObject;
	EVec3 m_vLastPos;
	EVec3 m_vPos;
	EVec2 m_vCursorAnchor;
	EVec2 m_vCursorAnchorCenter;
	ESimsCam *m_pCam;
	EDL *m_pdl;
	EDL *m_pLineDl;
	EPiMenu *m_pPiMenu;
	cXCursorObject *m_pCursorObject;
	float m_fCursorTheta;
	int m_wallPaperSide;
	ERShader *m_pLineShdr;
	ERShader *m_pFloorShd;
	ERShader *m_pWPaperShd;
	ERModel *m_pMainBase;
	ERModel *m_pMainBaseH;
	ERModel *m_pMainCirDash;
	ERModel *m_pArrow;
	ERModel *m_pArrowH;
	ERModel *m_pTrackBase;
	ERModel *m_pTrackH;
	ERModel *m_pTrackCirDash;
	ERModel *m_pBuild;
	ERModel *m_pBuild02;
	ERModel *m_pBuildH;
	ERModel *m_pBuy;
	ERModel *m_pBuy02;
	ERModel *m_pBuyH;
	EIParticleEmit *m_pEmit;
	ERParticleType *m_pType;
	ISimInstanceList m_objList;
	CursorFloorTilePtrList m_floorList;
	WallTile *m_pToolResMap;
	FTilePt m_undoLoc;
	SInt16 m_undoDir;
	SInt32 m_refund;
	SInt32 m_ring_S0;
	SInt32 m_ring_S1;
	float m_scaletime;
	WallStyle m_fenctype;
	u32 m_toolUnitPrice;
	static EBound3 m_lotBound;
	static bool m_bGridInit;
	static EDL *m_pGridDl;
	static ERShader *m_pWhiteLineShader;
	static ERShader *m_pWallUnderConstructionShd;
public:
	static ERShader *m_pBuildToolGuideShd;
	
	ESimsCursor& operator=();
	ESimsCursor();
	ESimsCursor();
	/* vtable[1] */ virtual ESimsCursor(ESimsCursor*, int, void);
	bool CanUserSell();
	void ClearPlacementError();
	void Init();
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[14] */ virtual void SetFlag();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawMenu();
	void Draw_Curs();
	void GetCamOff();
	void SnapToDefPos();
	void SetCam();
	ESimsCam* GetCam();
	void GetPos();
	EVec3& GetPos();
	/* vtable[4] */ virtual void SetPos();
	u32 GetPlayerId();
	float GetCurorRad();
	void SetCursorObject();
	bool SafeToUnPause();
	void MoveCursor();
	void InitFloorTool();
	void SnapToWallVert();
	void FindWallDragVert();
	EVec2 GetSnapPos();
	void GetSnapPos();
	void LiveUpdate();
	void PauseUpdate();
	void BuyUpdate();
	bool CheckForXPressLive();
	void GetListofObjectsInCusorRad();
	bool HasGrabObject();
	cXObject* GetGrabObject();
	bool CheckForXPressBuyBuild();
	void Float();
	cXObject* PointToObject();
	bool TurnToWall();
	void TurnObject();
	bool InPiMenu();
	bool PiMenuCanUpdate();
	void CancelCursor();
	void UpdateHouse();
	bool TryUndoObjectPlacement();
	void FloorUpdate();
	CursorFloorTile* CreateCursorFloorTile();
	CursorMode GetCursorMode();
	bool CursorHasObject();
	void ExitFloorTool();
	void DrawCursorFloorList();
	bool InToolMode();
	bool InFloorMode();
	bool InWallMode();
	void DrawFloorPrevew();
	void DrawDeletePrevew();
	void DrawPrevewRect();
	void DrawRoomFillPrevew();
	void SetFloor();
	void BeginWallTool();
	void ExitWallTool();
	void WallToolUpdate();
	void DrawWallPreview();
	void DrawWallDelPreview();
	void DrawWallRoomPreview();
	bool FinalizeWallPlacement();
	bool FinalizeWallDel();
	bool FinalizeRoom();
	s32 GetWallLineCost();
	bool CanChangeTileAdd();
	bool CanChangeTileDelete();
	bool SubmitLine();
	static bool KillArchitecturalObject(/* parameters unknown */);
	bool AddWallAtTile();
	void VertPosToTile();
	static void ConvertVertsToTiles(/* parameters unknown */);
	static TilePtDir GetTileDirection(/* parameters unknown */);
	void DeleteWallAtTile();
	bool LegalWallTile();
	bool InPaperTool();
	void BeginPaperTool();
	void ExitPaperTool();
	void PaperToolUpdate();
	void DrawPaperPreview();
	void DrawPaperDelPreview();
	void DrawPaperRoomPreview();
	bool FinalizePaperPlacement();
	bool FinalizePaperDel();
	bool FinalizePaperForRoom();
	void AddPaperAtTile();
	void DeletePaperAtTile();
	void ChangeTile();
	int GetSideOfWall();
	bool SubmitPaperLine();
	int GetPaperLineCost();
	static void UpdateLot(/* parameters unknown */);
	s32 _GetkDefaultToolValue();
	s32 _GetkFloorToolValue();
	s32 _GetkWallToolValue();
	s32 _GetkPaperToolValue();
	s32 _GetkFenceToolValue();
	s32 GetCurToolValue();
	static void CleanUpGrid(/* parameters unknown */);
	static void SetUpGrid(/* parameters unknown */);
	static void DrawGrid(/* parameters unknown */);
};

struct RoomManager {
	__vtbl_ptr_type *$vf841;
	
	RoomManager& operator=();
	RoomManager();
protected:
	RoomManager();
	/* vtable[1] */ virtual RoomManager(RoomManager*, int, void);
public:
	/* vtable[2] */ virtual RoomManagerImpl* GetRoomManagerImpl();
	/* vtable[3] */ virtual void ComputeRooms(RoomManager*, int, void);
	/* vtable[4] */ virtual void ComputeCutaway(RoomManager*, int, void);
	/* vtable[5] */ virtual Int GetRoomCount();
	/* vtable[6] */ virtual void RoomLightingChanged(RoomManager*, int, void);
	/* vtable[7] */ virtual void RoomScoreChanged(RoomManager*, int, void);
	/* vtable[8] */ virtual void AllRoomsLightingChanged();
	/* vtable[9] */ virtual void AllRoomsScoreChanged();
	/* vtable[10] */ virtual void PrintStats();
	/* vtable[11] */ virtual Room* GetRoom();
	/* vtable[12] */ virtual Room* GetNewRoom();
	/* vtable[13] */ virtual float GetRoomEnvironmentScore();
	/* vtable[14] */ virtual bool ResolveDiagonal();
	/* vtable[15] */ virtual bool ResolveDiagonal();
	/* vtable[16] */ virtual bool ProcessDegenerateTile();
	/* vtable[17] */ virtual void ResetDiagonals(RoomManager*, int, void);
	/* vtable[18] */ virtual void ResetRooms();
	/* vtable[19] */ virtual float GetOutsideAmbientLevel();
	/* vtable[20] */ virtual float GetOutsideObjectScore();
	/* vtable[21] */ virtual int RoomCount();
	/* vtable[22] */ virtual House* GetHouse();
	/* vtable[23] */ virtual void ClearRoomPartitions();
	/* vtable[24] */ virtual void UpdateRooms();
	/* vtable[25] */ virtual void OffsetWorld();
	/* vtable[26] */ virtual float GetRoomAmbientLight();
	static RoomManager* GetRoomManager(/* parameters unknown */);
	static RoomManager* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct unary_function<unsigned int,unsigned int> {
};

struct subtractive_rng : unary_function<unsigned int,unsigned int> {
private:
	unsigned int table[55];
	unsigned int index1;
	unsigned int index2;
	
public:
	subtractive_rng& operator=();
	subtractive_rng();
	subtractive_rng();
	subtractive_rng();
	unsigned int operator()();
	void initialize();
};

typedef SInt32 iResFileType;

struct vector<PenaltyRect,__malloc_alloc_template<0> > {
protected:
	PenaltyRect *start;
	PenaltyRect *finish;
	PenaltyRect *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	PenaltyRect* begin();
	PenaltyRect* begin();
	PenaltyRect* end();
	PenaltyRect* end();
	reverse_iterator<PenaltyRect *,PenaltyRect,PenaltyRect &,int> rbegin();
	reverse_iterator<const PenaltyRect *,PenaltyRect,const PenaltyRect &,int> rbegin();
	reverse_iterator<PenaltyRect *,PenaltyRect,PenaltyRect &,int> rend();
	reverse_iterator<const PenaltyRect *,PenaltyRect,const PenaltyRect &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	PenaltyRect& operator[]();
	PenaltyRect& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<PenaltyRect,__malloc_alloc_template<0> >*, int, void);
	vector<PenaltyRect,__malloc_alloc_template<0> >& operator=();
	void reserve();
	PenaltyRect& front();
	PenaltyRect& front();
	PenaltyRect& back();
	PenaltyRect& back();
	void push_back();
	void swap();
	PenaltyRect* insert();
	PenaltyRect* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct RoomImpl : Room {
	short unsigned int fRoomID;
	vector<CTilePt,__malloc_alloc_template<0> > fRoomList;
	vector<EVec3,__malloc_alloc_template<0> > fLightPositions;
	Partition fPartition;
	int fUsed;
	int fArea;
	int fFlooredArea;
	int fObjectCount;
	int fWindowLightContribution;
	int fObjLightContribution;
	int fDirtyTotal;
	int fRoomImpactContribution;
	int fGoodObjectCount;
	int fBedCount;
	int fBathFixtureCount;
	int fWallSegmentCount;
	int fPatternedWallSegmentCount;
	float fBasicScore;
	float fLightLevel;
	bool fDirty;
	bool fKnowIfOutside;
	bool fOutside;
	bool fOverheadLightsOn;
	bool fWantsRoof;
	bool fIsPool;
	bool fIsFlat;
	bool fKnowIfFlat;
	RoomManagerImpl *fRoomManager;
	BitMatrix64 fCutawayMatrix;
	int fLampCount;
	int fPeopleCount;
	
	RoomImpl& operator=();
	RoomImpl(/* a1 5 */ short unsigned int inVal, /* s2 18 */ RoomManagerImpl *inMgr);
	static void* operator new(/* parameters unknown */);
	RoomImpl();
	/* vtable[1] */ virtual RoomImpl(RoomImpl*, int, void);
	void ClearPartition();
	/* vtable[2] */ virtual void Clear();
	/* vtable[3] */ virtual void ComputeRoom();
	/* vtable[4] */ virtual void CollectObjectStats(/* 0x0(caller sp) */ ObjectIterator objectIter);
	/* vtable[5] */ virtual void CollectTileStats(/* s0 16 */ CTilePt &tile);
	/* vtable[6] */ virtual void PrintStats();
	/* vtable[7] */ virtual RoomImpl* GetImpl();
	/* vtable[8] */ virtual short unsigned int GetRoomID();
	/* vtable[9] */ virtual int Used();
	/* vtable[10] */ virtual float GetAmbientLight();
	/* vtable[11] */ virtual void SetAmbientLight(/* f12 50 */ float inLight);
	/* vtable[12] */ virtual bool IsOutside();
	/* vtable[13] */ virtual bool IsPool();
	/* vtable[14] */ virtual bool IsBedroom();
	/* vtable[15] */ virtual bool IsBathroom();
	bool IsTileInRoom(/* s2 18 */ CTilePt &where);
	vector<CTilePt,__malloc_alloc_template<0> >& GetTileList();
	vector<EVec3,__malloc_alloc_template<0> >& GetLightPositionList();
	/* vtable[16] */ virtual void InvalidateRoom(/* a1 5 */ bool inFloorsWallsOnly);
	void AbsorbNewRoomList(/* s1 17 */ vector<CTilePt,__malloc_alloc_template<0> > &inRoomList);
	/* vtable[17] */ virtual float GetObjectDensity();
	/* vtable[18] */ virtual int GetArea();
	Partition* GetPartition();
	/* vtable[19] */ virtual void ComputeCutawayMatrix();
	/* vtable[20] */ virtual BitMatrix64& GetCutawayMatrix();
	/* vtable[21] */ virtual int GetLevel();
	/* vtable[22] */ virtual void SetOverheadLights(/* s1 17 */ bool on);
	/* vtable[23] */ virtual int GetPeopleCount();
	/* vtable[24] */ virtual bool WantsRoof();
};

struct binary_function<short unsigned int,short unsigned int,bool> {
};

struct binary_function<CTilePt,CTilePt,bool> {
};

struct map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > {
private:
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > t;
	
public:
	map(map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> >*, int, void);
	map();
	map();
	map();
	map();
	map();
	map();
	map();
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> >& operator=();
	less<CTilePt> key_comp();
	value_compare value_comp();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > begin();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > begin();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > end();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,const pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,const pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	pair<DiagonalNode,DiagonalNode>& operator[]();
	void swap();
	pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> insert();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > insert();
	void insert();
	void insert();
	void erase();
	unsigned int erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > find();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > find();
	unsigned int count();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > lower_bound();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > lower_bound();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > upper_bound();
	__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > upper_bound();
	pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > > equal_range();
	pair<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > > equal_range();
};

struct RoomManagerImpl : RoomManager {
	map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> > fRooms;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > fDiagonals;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > fSwapCache;
	unsigned int fRoomsDirty;
	bool fLightsInited;
	float fOutdoorScore;
	float fOutdoorObjectScore;
	cArray<unsigned char> *mRoomAmbient[2];
	static RoomManagerImpl *sRoomMgr;
	
	RoomManagerImpl& operator=();
	RoomManagerImpl();
	void InitLights();
	RoomManagerImpl();
	/* vtable[1] */ virtual RoomManagerImpl(RoomManagerImpl*, int, void);
	/* vtable[2] */ virtual RoomManagerImpl* GetRoomManagerImpl();
	/* vtable[3] */ virtual void ComputeRooms(/* s5 21 */ int inLevel);
	/* vtable[4] */ virtual void ComputeCutaway(/* s1 17 */ int inLevel);
	/* vtable[5] */ virtual Int GetRoomCount();
	/* vtable[6] */ virtual void RoomLightingChanged(/* a1 5 */ Int room);
	/* vtable[7] */ virtual void RoomScoreChanged(/* a1 5 */ Int room);
	/* vtable[8] */ virtual void AllRoomsLightingChanged();
	/* vtable[9] */ virtual void AllRoomsScoreChanged();
	/* vtable[10] */ virtual void PrintStats();
	/* vtable[11] */ virtual Room* GetRoom(/* a1 5 */ __rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > i);
	/* vtable[12] */ virtual Room* GetNewRoom(/* -0x60(caller sp) */ short unsigned int inRoomID);
	/* vtable[13] */ virtual float GetRoomEnvironmentScore(/* a1 5 */ short unsigned int inRoomID);
	/* vtable[14] */ virtual bool ResolveDiagonal(/* a1 5 */ CTilePt &inPt, /* s2 18 */ short unsigned int *outRoom1, /* s4 20 */ short unsigned int *outRoom2, /* s3 19 */ Sides *outSide1, /* s5 21 */ Sides *outSide2);
	/* vtable[15] */ virtual bool ResolveDiagonal();
	/* vtable[16] */ virtual bool ProcessDegenerateTile(/* s4 20 */ CTilePt &inPt, /* s1 17 */ short unsigned int inRoom, /* s0 16 */ Sides inSide);
	/* vtable[17] */ virtual void ResetDiagonals(/* s3 19 */ int inLevel);
	/* vtable[18] */ virtual void ResetRooms(/* s3 19 */ int inLevel);
	map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> >& GetRoomCollection();
	Room* GetRoom();
	Room* GetRoom();
	/* vtable[19] */ virtual float GetOutsideAmbientLevel();
	/* vtable[20] */ virtual float GetOutsideObjectScore();
	/* vtable[21] */ virtual int RoomCount();
	/* vtable[22] */ virtual House* GetHouse();
	/* vtable[23] */ virtual void ClearRoomPartitions();
	/* vtable[24] */ virtual void UpdateRooms();
	/* vtable[25] */ virtual void OffsetWorld(/* a1 5 */ CTilePt &inOffset);
	/* vtable[26] */ virtual float GetRoomAmbientLight(/* a1 5 */ FTilePt &inViewCoords, /* a2 6 */ int level);
	void ApplyLightLayer(/* s5 21 */ vector<CTilePt,__malloc_alloc_template<0> > &inList, /* f20 58 */ float val);
};

struct __rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > : __rb_tree_base_iterator {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >& operator=();
	__rb_tree_iterator();
	__rb_tree_iterator();
	__rb_tree_iterator();
	pair<const short unsigned int,RoomImpl *>& operator*();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >& operator++();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > operator++();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >& operator--();
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > operator--();
};

struct __rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > : __rb_tree_base_iterator {
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >& operator=();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	pair<const short unsigned int,RoomImpl *>& operator*();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >& operator++();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > operator++();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >& operator--();
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > operator--();
};

struct pair<const short unsigned int,RoomImpl *> {
	short unsigned int first;
	RoomImpl *second;
};

struct __rb_tree_node<pair<const short unsigned int,RoomImpl *> > : __rb_tree_node_base {
	pair<const short unsigned int,RoomImpl *> value_field;
};

enum EWallPartType {
	Wall_Error = 0,
	Wall_Wall = 1,
	Wall_Endcap = 2,
	Wall_Fence = 3,
	Wall_45 = 4
};

struct WallHalfKey {
	union {
		u32 _int;
		struct {
			unsigned int x : 8;
			unsigned int y : 8;
			TileWallsSegment seg;
			unsigned int pad : 8;
		} _bit;
	} m_data;
	
	WallHalfKey& operator=();
	WallHalfKey();
	WallHalfKey();
	WallHalfKey();
	WallHalfKey();
	WallHalfKey operator=();
	WallHalfKey(WallHalfKey*, int, void);
	u32 operator unsigned int();
	void Set();
	void SetX();
	void SetY();
	void SetSeg();
	u8 GetX();
	u8 GetY();
	TileWallsSegment GetSeg();
};

typedef TRedBlackTree<WallHalfKey,EISimsWall *> ISimsWallRedBlackTree;

struct WallUpDownPartId {
	u32 up;
	u32 halfUpL;
	u32 halfUpR;
	u32 down;
};

enum EWallModelGroupInd {
	_45_WALL_NW_FLAT_ = 0,
	_45_WALL_NW_H_ = 1,
	_45_WALL_NW_V_ = 2,
	_45_WALL_NW_WEDGE_ = 3,
	_45_WALL_SE_FLAT_ = 4,
	_45_WALL_SE_H_ = 5,
	_45_WALL_SE_V_ = 6,
	_45_WALL_SE_WEDGE_ = 7,
	WALL_CAP_BUILDMODE_01_ = 8,
	WALL_STRAIGHT_BUILDMODE_01_ = 9,
	PLATE_GLASS_WINDOW_ = 10,
	PRIVACY_WINDOW_ = 11,
	SINGLE_HUNG_WINDOW_ = 12,
	SINGLE_PANE_FIXED_WINDOW_ = 13,
	WALNUT_DOOR_ = 14,
	MAPLE_DOOR_FRAME_ = 15,
	NModelGroups = 16,
	ERROR_INDEX = 17
};

struct TNodeList<ERShader *> : ENodeList {
	TNodeList(TNodeList<ERShader *>*, int, void);
	TNodeList();
	TNodeList();
	static ERShader* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ERShader *>& operator=();
	void MoveContents();
};

union EWallProperties {
	u32 _int;
	struct {
		EWallPartType type;
		EWallUpDownStateType updownFlag;
		EWallModelGroupInd modelGroupInd;
		unsigned int notvis : 1;
		unsigned int isFence : 1;
	} _bit;
};

struct EIWallPart : EIStaticModel {
	static ETypeInfo m_typeInfo;
protected:
	ERShaderPtrList m_usedWallPaperList;
	EWallProperties m_props;
	u16 m_north;
	u16 m_south;
	TileWallsSegment m_seg;
	WallHalfKey m_key;
public:
	static WallUpDownPartId _WallUpDownPartIdTable[16];
	
	EIWallPart& operator=();
	EIWallPart();
	static EIWallPart* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIWallPart* CreateCopy();
	EIWallPart();
	/* vtable[6] */ virtual EIWallPart(EIWallPart*, int, void);
	/* vtable[12] */ virtual void Draw();
	/* vtable[25] */ virtual void InsertInLevel();
	/* vtable[26] */ virtual void RemoveFromLevel();
	/* vtable[27] */ virtual void SetUpDownState();
	/* vtable[28] */ virtual void SetWallUp();
	/* vtable[29] */ virtual void SetWallDown();
	/* vtable[30] */ virtual void SetWallHalfUpL();
	/* vtable[31] */ virtual void SetWallHalfUpR();
	/* vtable[32] */ virtual void SetVis();
	/* vtable[33] */ virtual void GetTileRect();
	/* vtable[34] */ virtual void SetWallPaperId();
	void ChangeShaders();
	void SetType();
	void SetModelGroupInd();
	EWallPartType GetType();
	EWallUpDownStateType GetUpdownState();
	EWallModelGroupInd GetModelGroupInd();
	bool IsVis();
	bool HasParSeg();
	TileWallsSegment GetSeg();
	WallHalfKey GetKey();
	bool IsFence();
};

struct EISimsWall : EIWallPart {
	static ETypeInfo m_typeInfo;
	
	EISimsWall& operator=();
	EISimsWall();
	static EISimsWall* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EISimsWall* CreateCopy();
	EISimsWall();
	/* vtable[6] */ virtual EISimsWall(EISimsWall*, int, void);
	/* vtable[35] */ virtual void SetWall();
	void SetEndCap();
	static bool HasWallNotFence(/* parameters unknown */);
	static bool IsLPair(/* parameters unknown */);
	static bool HasLPair(/* parameters unknown */);
	static TileWallsSegment GetOppSeg(/* parameters unknown */);
	static void GetOppPoint(/* parameters unknown */);
	static void GetCornerPoint(/* parameters unknown */);
	static u32 GetCorner(/* parameters unknown */);
};

struct EISims45Wall : EISimsWall {
	static ETypeInfo m_typeInfo;
protected:
	EIWallPart m_WallSE;
	EIWallPart m_floor;
	
public:
	EISims45Wall& operator=();
	EISims45Wall();
	static EISims45Wall* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EISims45Wall* CreateCopy();
	EISims45Wall();
	/* vtable[6] */ virtual EISims45Wall(EISims45Wall*, int, void);
	/* vtable[35] */ virtual void SetWall();
	/* vtable[25] */ virtual void InsertInLevel();
	/* vtable[26] */ virtual void RemoveFromLevel();
	/* vtable[27] */ virtual void SetUpDownState();
	/* vtable[32] */ virtual void SetVis();
	/* vtable[33] */ virtual void GetTileRect();
	/* vtable[28] */ virtual void SetWallUp();
	/* vtable[29] */ virtual void SetWallDown();
	/* vtable[30] */ virtual void SetWallHalfUpL();
	/* vtable[31] */ virtual void SetWallHalfUpR();
	/* vtable[34] */ virtual void SetWallPaperId();
protected:
	void SetDiag();
	static void GetModelforH45(/* parameters unknown */);
	static void GetModelforV45(/* parameters unknown */);
};

typedef CTilePt *CTilePtptr;

struct TRedBlackTree<WallHalfKey,EISimsWall *> : ERedBlackTree {
	TRedBlackTree<WallHalfKey,EISimsWall *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<WallHalfKey,EISimsWall *>*, int, void);
	EISimsWall* operator[]();
	EISimsWall*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static WallHalfKey GetKey(/* parameters unknown */);
	static EISimsWall* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EWallMan {
protected:
	ISimsWallRedBlackTree m_walls;
	ISimsWallRedBlackTree m_tempTree;
	EHouse *m_pHouse;
public:
	__vtbl_ptr_type *$vf4369;
	
	EWallMan& operator=();
	EWallMan();
	EWallMan();
	/* vtable[1] */ virtual EWallMan(EWallMan*, int, void);
	void BuildWalls();
	void ChangeWallsUpWallsDown();
	void UpdateWallsHalfUp();
	void AddWallsToHouse();
	void RemoveWallsFromHouse();
	bool IsEmpty();
protected:
	void SetWallupDownState();
	void Reset();
	void AddWalls();
	void CheckForEndCap();
	bool HandleLPair();
	bool CheckPointsForAnyWalls();
	void AnalizeTop();
	void AnalizeRight();
	void AnalizeDDown();
	void AnalizeDUp();
};

typedef TNodeList<EOrderTableData *> EFloorOtdList;
typedef TNodeList<ERShader *> EFloorShaderList;
typedef TNodeList<EDL *> EFloorDLList;

struct TNodeList<EOrderTableData *> : ENodeList {
	TNodeList(TNodeList<EOrderTableData *>*, int, void);
	TNodeList();
	TNodeList();
	static EOrderTableData* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EOrderTableData *>& operator=();
	void MoveContents();
};

struct TRedBlackTree<unsigned int,EIFloor *> : ERedBlackTree {
	TRedBlackTree<unsigned int,EIFloor *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,EIFloor *>*, int, void);
	EIFloor* operator[]();
	EIFloor*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EIFloor* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct EIFloor : EInstance {
	static ETypeInfo m_typeInfo;
protected:
	UInt32 m_roomID;
	EFloorOtdList m_otds;
	EFloorShaderList m_shaderList;
	EFloorDLList m_dLList;
	EVec3 m_vBoundCorners[4];
	static u32 m_nAlloced;
	static EIFloorTable m_floors;
	static EIFloorLightMapMan m_lightmapman;
	
public:
	EIFloor& operator=();
	EIFloor(/* s1 17 */ EHouse *pHouse);
	static EIFloor* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIFloor* CreateCopy();
protected:
	EIFloor();
public:
	/* vtable[6] */ virtual EIFloor(EIFloor*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[12] */ virtual void Draw(/* s1 17 */ ERC *prc, /* s2 18 */ u32 renderFlags);
	/* vtable[10] */ virtual void Update();
	/* vtable[11] */ virtual u32 VisibilityTest(/* a0 4 */ EPortalWindow &win, /* a2 6 */ u32 parentVis);
	void AddLightMapToLevel();
	void CalcBounds();
	void RemoveLightMapFromLevel();
	UInt16 GetRoomId();
	static void CollectWallLightMaps(/* parameters unknown */);
	static void DrawLightmapsDebug(/* parameters unknown */);
	static void ComputeLightMap(/* parameters unknown */);
	static void EnableShadows(/* parameters unknown */);
	static void CreateFloors(/* parameters unknown */);
	static void DestroyFloors(/* parameters unknown */);
	static bool TestCreateFloors(/* parameters unknown */);
	static float GetFloorMeterValue(/* parameters unknown */);
protected:
	void Cleanup();
	static EOrderTableData* AllocOtd(/* parameters unknown */);
	static void FreeOtd(/* parameters unknown */);
	static void OrderTableCallback(/* parameters unknown */);
};

struct TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *> : ERedBlackTree {
	TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *>*, int, void);
	EIFloorDiagonalDataList* operator[]();
	EIFloorDiagonalDataList*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EIFloorDiagonalDataList* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TNodeList<EIFloorDiagonalData *> : ENodeList {
	TNodeList(TNodeList<EIFloorDiagonalData *>*, int, void);
	TNodeList();
	TNodeList();
	static EIFloorDiagonalData* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EIFloorDiagonalData *>& operator=();
	void MoveContents();
};

struct TNodeList<EFloorStripInfo> : ENodeList {
	TNodeList(TNodeList<EFloorStripInfo>*, int, void);
	TNodeList();
	TNodeList();
	static EFloorStripInfo GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EFloorStripInfo>& operator=();
	void MoveContents();
};

struct TileWallStorage16 {
	Uint8 mSegments;
	Uint8 mPlacement;
	u16 mTopLeftStyle;
	union {
		u16 mTopRightStyle;
		u16 mDiagonalStyle;
	};
	u16 mTopLeftPattern;
	u16 mTopRightPattern;
	union {
		u16 mBottomLeftPattern;
		u16 mDiagTopLeftPattern;
	};
	union {
		u16 mBottomRightPattern;
		u16 mDiagBottomRightPattern;
	};
	
	TileWallStorage16& operator=();
	TileWallStorage16();
	TileWallStorage16();
	bool HasDiagonal();
	TileWallStorage operator TileWallStorage();
};

typedef TRedBlackTree<int,TNodeList<ERoomWall *> *> ERoomWallListRBTree;

struct TNodeList<EIWallPart2 *> : ENodeList {
	TNodeList(TNodeList<EIWallPart2 *>*, int, void);
	TNodeList();
	TNodeList();
	static EIWallPart2* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EIWallPart2 *>& operator=();
	void MoveContents();
};

struct TNodeList<ERoomWall *> : ENodeList {
	TNodeList(TNodeList<ERoomWall *>*, int, void);
	TNodeList();
	TNodeList();
	static ERoomWall* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ERoomWall *>& operator=();
	void MoveContents();
};

struct TRedBlackTree<int,TNodeList<ERoomWall *> *> : ERedBlackTree {
	TRedBlackTree<int,TNodeList<ERoomWall *> *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<int,TNodeList<ERoomWall *> *>*, int, void);
	ERoomWallList* operator[]();
	ERoomWallList*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static int GetKey(/* parameters unknown */);
	static ERoomWallList* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct ERoom {
	bool m_bInit;
protected:
	bool m_useLightMaps;
	ERoomWallList m_kBottomLeftWalls;
	ERoomWallList m_kBottomRightWalls;
	ERoomWallList m_kTopRightWalls;
	ERoomWallList m_kTopLeftWalls;
	ERoomWallList m_kHorizDiagWallskTop;
	ERoomWallList m_kHorizDiagWallskBottom;
	ERoomWallList m_kVertDiagWallskLeft;
	ERoomWallList m_kVertDiagWallskRight;
	ERoomWallList m_fenceWalls;
	ERoomWallList *m_listTab[9];
	ERoomWallListRBTree m_roomLookup;
	
public:
	ERoom& operator=();
	ERoom(/* -0xb0(caller sp) */ bool useLightMaps);
	ERoom();
	ERoom(ERoom*, int, void);
	void Init();
	void ProcStandardWalls(/* -0xcc(caller sp) */ bool row, /* -0xc8(caller sp) */ int &wallcount, /* -0xc4(caller sp) */ int &tilecount, /* -0xc0(caller sp) */ bool doAlloc);
	void ProcDiagonalWalls(/* -0xd0(caller sp) */ int &wallcount, /* -0xcc(caller sp) */ int &tilecount, /* fp 30 */ bool doAlloc);
	void ProcessCell(/* -0xa8(caller sp) */ ERoomWallList &curList, /* s1 17 */ ERoomWallPTR &curEWall, /* s2 18 */ CTilePt &thePt, /* -0xb0(caller sp) */ TileWallsSegment theSeg, /* s4 20 */ DiagonalSideSelector side, /* s3 19 */ TileWalls &walls, /* s7 23 */ int segidx, /* 0x0(caller sp) */ int &wallcount, /* 0x8(caller sp) */ int &tilecount, /* 0x10(caller sp) */ bool doAlloc);
	void DrawWallsDebug(/* a1 5 */ ERC *prc);
	void DrawWallpaperPreview(/* s2 18 */ ERC *prc, /* a2 6 */ UInt16 room);
	s32 GetWallPaperCost(/* a1 5 */ u32 newShdId, /* s2 18 */ UInt16 room);
	void BeginLmCompute();
	void EndLmCompute();
	void ComputeLightmaps();
	void ComputeLightmapsList(/* a1 5 */ int which);
	void EnableShadows(/* s1 17 */ bool enable);
	void SetWallState(/* a1 5 */ EWallUpDownStateType state);
	void UpdateWallsHalfUp(/* a1 5 */ int player);
	void CollectWallLighMaps(/* s2 18 */ TRedBlackTree<EILightmap *,EILightmap *> &tree);
	bool PreviewWallBuild(/* a1 5 */ bool testFences);
	void DeleteERoomWallContainingSegment(/* a1 5 */ TileWallsSegment seg, /* t2 10 */ CTilePt &c0, /* t0 8 */ CTilePt &c1);
	EIWallPart2* GetWallFromTileAndSegment(/* a1 5 */ TileWallsSegment seg, /* s1 17 */ CTilePt &c0);
	ERoomWall* FindWallContainingSegment(/* a1 5 */ ERoomWallList &list, /* s4 20 */ TileWallsSegment seg, /* s3 19 */ CTilePt &c0, /* s2 18 */ CTilePt &c1);
	void InitLightmaps();
	void InitRoomLookupTab();
};

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1647;
	float m_infoWinAlpha;
	float m_infoWinAlphaTime;
	s32 m_curwindow;
protected:
	s32 m_pressed;
	bool m_bButtdown;
	bool m_bDrawInfo;
	float m_introAnimDur;
	float m_infointroAnimDur;
	float m_infoDelayDur;
	float m_introTime;
	float m_hoverTime;
	float m_infoInTime;
	float m_simnametimeout;
	int m_curOpt;
	ERelationsWin m_rltnsMenu;
	static ESlideTextBox m_nameBoxs[2];
	static ESlideTextBox m_playerNameBoxs[2];
	static bool m_bInit;
	static void (*m_DrawTable[4])(/* parameters unknown */);
	static void (*m_UpdateTable[4])(/* parameters unknown */);
	static ERFont *m_pFont;
public:
	static ERShader *m_textarrowl;
	static ERShader *m_textarrowr;
	static ERShader *m_pDpadInverse;
	static ERShader *m_pMenubevel_T_L;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pTextBoxHBL;
	static ERShader *m_pTextBoxHBR;
	static ERShader *m_pTextBoxHTL;
	static ERShader *m_pTextBoxHTR;
	static ERShader *m_pTextBoxHML;
	static ERShader *m_pTextBoxHMR;
	static ERShader *m_pTextBoxHTC;
	static ERShader *m_pTextBoxHBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pTextPopOutC;
	static ERShader *m_pTextPopOutCH;
	static ERShader *m_pTextPopOutL;
	static ERShader *m_pTextPopOutLH;
	static ERShader *m_pTextPopOutR;
	static ERShader *m_pTextPopOutRH;
	static UiStringLookUpTableEntry __MoodStrings[8];
	static UiStringLookUpTableEntry __PersStrings[8];
	static UiStringLookUpTableEntry __JobStrings[8];
	static UiStringLookUpTableEntry __RelaStrings[8];
	static UiStringLookUpTableEntry *__InfoTextLookup[4];
	
	SimInfoWin& operator=();
	SimInfoWin();
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawInfo();
	void SetWindow();
	s32 GetWindow();
	void GetBut();
	void ResetState();
	void ChangedSelectedSim();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigHighlightBox(/* parameters unknown */);
protected:
	int GetDirection();
	void DrawBackGround();
	void StartIntro();
	void StartTextSlide();
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo();
};

// warning: multiple differing types with the same name (name not equal)
struct EPausePanel : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1647;
	EDialogMenu m_DialogMenu;
	c16 *m_ppNoYesOptions[2];
	c16 *m_ppYesNoOptions[2];
	c16 *m_ppCancelSaveNoSaveOptions[3];
	c16 *m_ppCancelRemove2Options[2];
protected:
	ERFont *m_pFont;
	float m_PauseTimer;
	static float m_ItemInfoTimer;
	u32 m_nDisplayMode;
	bool m_bCleanUpModelReference;
	bool m_bCheckSavedSuccess;
	bool m_bHideDialog;
	EPauseMainMenu m_PauseMainMenu;
	EPauseBudgetMenu m_PauseBudgetMenu;
	EPauseBuyMenu m_PauseBuyMenu;
	EPauseBuildMenu m_PauseBuildMenu;
	EPauseOptionsMenu m_PauseOptionsMenu;
	EPauseItemInfo *m_pItemInfo;
	bool m_bDeleteInfo;
	ERShader *m_pBlankShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pMenuBevelShdr;
	static ERShader *m_pDPadUp;
	static ERShader *m_pDPadDown;
	static ERShader *m_pDPadLeft;
	static ERShader *m_pDPadRight;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIIcon m_SquareIcon;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsYN[2];
	EUIPrompt m_PromptsYNC[3];
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBarYN;
	EPromptBar m_PromptBarYNC;
	EPromptBar m_PromptBar;
	
public:
	EPausePanel& operator=();
	EPausePanel();
	EPausePanel();
	/* vtable[1] */ virtual EPausePanel(EPausePanel*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawGenericMessageBox();
	static void ResetItemInfoTimer(/* parameters unknown */);
	static float GetItemInfoTimer(/* parameters unknown */);
	static ERShader* GetShaderDPadUp(/* parameters unknown */);
	static ERShader* GetShaderDPadDown(/* parameters unknown */);
	static ERShader* GetShaderDPadLeft(/* parameters unknown */);
	static ERShader* GetShaderDPadRight(/* parameters unknown */);
	static void SetDPadUp(/* parameters unknown */);
	static void SetDPadDown(/* parameters unknown */);
	static void SetDPadLeft(/* parameters unknown */);
	static void SetDPadRight(/* parameters unknown */);
};

typedef TNodeList<EActionIcon *> EActionIconList;

// warning: multiple differing types with the same name (name not equal)
struct EActionQueue : EUIMenu, virtual Panelstateman {
	Panelstateman *$vb1647;
protected:
	bool m_needsInit;
	bool m_bUserActionPlaced;
	SInt32 m_UserActionId;
	EVec2 m_vActionStart;
	EActionIconCache *m_pIconCache;
	
public:
	EActionQueue& operator=();
	EActionQueue(/* s1 17 */ int __in_chrg, /* s2 18 */ u32 playerid);
	EActionQueue();
	/* vtable[1] */ virtual EActionQueue(EActionQueue*, int, void);
	/* vtable[7] */ virtual void Message(/* a1 5 */ EUIObjectNode *pChild, /* a2 6 */ u32 messId);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(/* s2 18 */ ERC *prc);
	/* vtable[12] */ virtual void AddChild(/* a1 5 */ EUIObjectNode *pChild);
	/* vtable[15] */ virtual void RemoveOpt(/* s1 17 */ EUIObjectNode *pOpt);
	/* vtable[16] */ virtual void AddOpt(/* s1 17 */ EUIObjectNode *pOpt, /* s2 18 */ EVec3 pos);
	/* vtable[2] */ virtual void SetState(/* a1 5 */ Panelstate state);
	/* vtable[3] */ virtual void SetEvent(/* a1 5 */ PanelEvent event, /* a2 6 */ u32 data);
	void Init();
	void GetListOfActionsInQueue(/* s4 20 */ EInteractionPtrList &list);
	void SetShader(/* s3 19 */ EActionIcon *pIcon, /* a0 4 */ Interaction *pAction);
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
protected:
	void ResizeList();
	EActionIcon* GetIconFromActionId(/* a1 5 */ SInt32 id);
	bool StripMarkedActions();
};

struct EActionIcon : EUIObjectNode {
protected:
	ERShader *m_pBack;
	ERShader *m_pFore;
	ERShader *m_pX;
	ERShader *m_pREndcapShdr;
	ERShader *m_pLEndcapShdr;
	ERShader *m_pBackShdr;
	bool m_waitingForRemove;
	bool m_markedForRemove;
	bool m_inburp;
	bool m_amCurAction;
	bool m_bmoveIn;
	bool m_bmoveOut;
	bool m_bAnimate;
	bool m_bContinuation;
	float m_curAlpha;
	float m_lifeTime;
	EVec2 m_vStart;
	EVec2 m_vStop;
	EVec2 m_vCur;
	SInt32 m_actionID;
	BString2 m_actionName;
	EUIObjectMover m_mover;
	EUIObjectMover m_brupClock;
	u32 m_but;
	int m_nMiddlePieces;
	static float m_slidetime;
	static float m_burptime;
	static float m_burpscale;
	
public:
	EActionIcon& operator=();
	EActionIcon();
	EActionIcon();
	/* vtable[1] */ virtual EActionIcon(EActionIcon*, int, void);
	/* vtable[3] */ virtual void Draw(/* s2 18 */ ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(/* a1 5 */ EUIObjectNode *pChild, /* a2 6 */ u32 messId);
	void UpdateAnim();
	void ClearState();
	void SetShader(/* s1 17 */ ERShader *pShader);
	void SetShader();
	void StartBurp();
	void StartMoveIn();
	void StartMoveOut();
protected:
	void Burp();
	void DrawToolTip(/* s3 19 */ ERC *prc);
	void DrawToolTipBack(/* s0 16 */ ERC *prc, /* a2 6 */ int nMiddlePieces, /* f21 59 */ float x, /* f25 63 */ float y, /* f14 52 */ float xs, /* f24 62 */ float ys, /* s2 18 */ EVec4 &vcolor);
	int CalcBackgroundSize(/* s1 17 */ ERC *prc);
	EVec2 CalcToolTipXY(/* f22 60 */ float height, /* f20 58 */ float width);
};

struct TNodeList<EActionIcon *> : ENodeList {
	TNodeList(TNodeList<EActionIcon *>*, int, void);
	TNodeList();
	TNodeList();
	static EActionIcon* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EActionIcon *>& operator=();
	void MoveContents();
};

struct EActionIconCache {
protected:
	int m_nMembers;
	EActionIconList m_list;
	
public:
	EActionIconCache& operator=();
	EActionIconCache();
	EActionIconCache();
	EActionIconCache(EActionIconCache*, int, void);
	void CreateCache();
	bool IsEmpty();
	bool Enqueue(/* s1 17 */ EActionIcon *pIn);
	EActionIcon* Dequeue();
};

struct simple_alloc<Neighbor *,__malloc_alloc_template<0> > {
	simple_alloc<Neighbor *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static Neighbor** allocate(/* parameters unknown */);
	static Neighbor** allocate(/* parameters unknown */);
	static Neighbor** allocate(/* parameters unknown */);
	static Neighbor** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct OldBehaviorTree {
	SInt16 numNodes;
	BehaviorNode nodes[1];
};

enum SearchTypes {
	kClosestValue = 0,
	kFindAbove = 1,
	kFindBelow = 2
};

// warning: multiple differing types with the same name (name not equal)
struct TreeSimImpl : virtual TreeSim {
	TreeSim *$vb899;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf3338;
	
	TreeSimImpl& operator=();
	TreeSimImpl();
	/* vtable[1] */ virtual TreeSimImpl(TreeSimImpl*, int, void);
	/* vtable[1] */ virtual TreeReturnCode TryElement();
	/* vtable[2] */ virtual void Error();
	/* vtable[3] */ virtual void StackJustPopped();
	void GetCurrentNode();
	void Reset();
	bool Gosub();
	NodeAction DoNodeAction();
	/* vtable[4] */ virtual NodeAction HandleBreakpoint();
	bool RunCheckTree();
	void RunOneTickTree();
	TreeSimImpl();
	/* vtable[2] */ virtual void Initialize();
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[4] */ virtual void SetError();
	/* vtable[5] */ virtual SInt16 GetError();
	/* vtable[6] */ virtual void ClearError();
	/* vtable[7] */ virtual StackElem* GetHighLevelAction();
	/* vtable[8] */ virtual StackElem* GetCurElem();
	/* vtable[9] */ virtual StackElem* GetMainSimElem();
	/* vtable[10] */ virtual StackElem* GetNthElem();
	/* vtable[11] */ virtual SInt16 GetStackSize();
	/* vtable[12] */ virtual SInt16 GetCurrentPrimitive();
	/* vtable[13] */ virtual Int GetIterations();
	/* vtable[14] */ virtual bool GetLastTransition();
	/* vtable[15] */ virtual bool GetLastResult();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
};

enum EBinarieSymbol {
	UNDEFINED_BINARIE = 0,
	EORCREDITS_TXT_BINARIE = 1241896939,
	FINGERPRINT_TXT_BINARIE = 1676662844,
	HOUSE_ICO_BINARIE = -922163204,
	MAXISCREDITS_TXT_BINARIE = -918999350,
	SLIME1_ICO_BINARIE = -2000188476,
	SLIME2_ICO_BINARIE = -815271660,
	SLIME3_ICO_BINARIE = -234366812
};

enum EMovieSymbol {
	UNDEFINED_MOVIE = 0,
	EA_GAMES_MOVIE = -709965421,
	EOR_LOGO_MOVIE = -1102688467,
	SIMS_ENDING_MOVIE = -1665917470,
	SIMS_INTRO_MOVIE = -1248424232
};

struct ActState {
	f32 Duration;
	f32 Intensity;
	s32 Actuator;
	s32 Function;
	s32 SubFunction;
	s32 DataLength;
};

struct PropRef {
	u32 id;
	u32 childID;
	u32 uMemoryCost;
	bool showInWindow;
};

struct VECTOR<ObjDefinition *> {
private:
	ObjDefinition **pData;
	
public:
	VECTOR<ObjDefinition *>& operator=();
	VECTOR();
	VECTOR();
	int size();
	ObjDefinition*& operator[]();
	ObjDefinition*& operator[]();
	ObjDefinition** begin();
	ObjDefinition** end();
	ObjDefinition** begin();
	ObjDefinition** end();
};

struct VECTOR<AnimRefTable> {
private:
	AnimRefTable *pData;
	
public:
	VECTOR<AnimRefTable>& operator=();
	VECTOR();
	VECTOR();
	int size();
	AnimRefTable& operator[]();
	AnimRefTable& operator[]();
	AnimRefTable* begin();
	AnimRefTable* end();
	AnimRefTable* begin();
	AnimRefTable* end();
};

struct VECTOR<PropRefTable> {
private:
	PropRefTable *pData;
	
public:
	VECTOR<PropRefTable>& operator=();
	VECTOR();
	VECTOR();
	int size();
	PropRefTable& operator[]();
	PropRefTable& operator[]();
	PropRefTable* begin();
	PropRefTable* end();
	PropRefTable* begin();
	PropRefTable* end();
};

struct VECTOR<BehaviorTree> {
private:
	BehaviorTree *pData;
	
public:
	VECTOR<BehaviorTree>& operator=();
	VECTOR();
	VECTOR();
	int size();
	BehaviorTree& operator[]();
	BehaviorTree& operator[]();
	BehaviorTree* begin();
	BehaviorTree* end();
	BehaviorTree* begin();
	BehaviorTree* end();
};

struct VECTOR<AStringSet> {
private:
	AStringSet *pData;
	
public:
	VECTOR<AStringSet>& operator=();
	VECTOR();
	VECTOR();
	int size();
	AStringSet& operator[]();
	AStringSet& operator[]();
	AStringSet* begin();
	AStringSet* end();
	AStringSet* begin();
	AStringSet* end();
};

struct VECTOR<SndInfo> {
private:
	SndInfo *pData;
	
public:
	VECTOR<SndInfo>& operator=();
	VECTOR();
	VECTOR();
	int size();
	SndInfo& operator[]();
	SndInfo& operator[]();
	SndInfo* begin();
	SndInfo* end();
	SndInfo* begin();
	SndInfo* end();
};

struct VECTOR<CatalogData> {
private:
	CatalogData *pData;
	
public:
	VECTOR<CatalogData>& operator=();
	VECTOR();
	VECTOR();
	int size();
	CatalogData& operator[]();
	CatalogData& operator[]();
	CatalogData* begin();
	CatalogData* end();
	CatalogData* begin();
	CatalogData* end();
};

struct VECTOR<BehaviorConstants> {
private:
	BehaviorConstants *pData;
	
public:
	VECTOR<BehaviorConstants>& operator=();
	VECTOR();
	VECTOR();
	int size();
	BehaviorConstants& operator[]();
	BehaviorConstants& operator[]();
	BehaviorConstants* begin();
	BehaviorConstants* end();
	BehaviorConstants* begin();
	BehaviorConstants* end();
};

struct VECTOR<TreeTable> {
private:
	TreeTable *pData;
	
public:
	VECTOR<TreeTable>& operator=();
	VECTOR();
	VECTOR();
	int size();
	TreeTable& operator[]();
	TreeTable& operator[]();
	TreeTable* begin();
	TreeTable* end();
	TreeTable* begin();
	TreeTable* end();
};

struct VECTOR<SlotDescList> {
private:
	SlotDescList *pData;
	
public:
	VECTOR<SlotDescList>& operator=();
	VECTOR();
	VECTOR();
	int size();
	SlotDescList& operator[]();
	SlotDescList& operator[]();
	SlotDescList* begin();
	SlotDescList* end();
	SlotDescList* begin();
	SlotDescList* end();
};

struct VECTOR<ObjFnData> {
private:
	ObjFnData *pData;
	
public:
	VECTOR<ObjFnData>& operator=();
	VECTOR();
	VECTOR();
	int size();
	ObjFnData& operator[]();
	ObjFnData& operator[]();
	ObjFnData* begin();
	ObjFnData* end();
	ObjFnData* begin();
	ObjFnData* end();
};

struct VECTOR<FloatConstantsData> {
private:
	FloatConstantsData *pData;
	
public:
	VECTOR<FloatConstantsData>& operator=();
	VECTOR();
	VECTOR();
	int size();
	FloatConstantsData& operator[]();
	FloatConstantsData& operator[]();
	FloatConstantsData* begin();
	FloatConstantsData* end();
	FloatConstantsData* begin();
	FloatConstantsData* end();
};

struct ResFile {
	VECTOR<ObjDefinition *> objDefinition;
	VECTOR<AnimRefTable> animTables;
	VECTOR<PropRefTable> propTables;
	VECTOR<BehaviorTree> BHAV;
	VECTOR<AStringSet> stringSet;
	VECTOR<WStringSet> locStringSet;
	VECTOR<SndInfo> FWAV;
	VECTOR<CatalogData> catalog;
	VECTOR<BehaviorConstants> BCON;
	VECTOR<TreeTable> TTAB;
	VECTOR<SlotDescList> SLOT;
	VECTOR<ObjFnData> OBJf;
	VECTOR<FloatConstantsData> FCNS;
	ResFile *semiGlobFile;
	char *pNPCBodyType;
	u32 uAnimMemCost;
	u32 uPropMemCost;
	u32 datasetID;
};

struct GlobalResFile {
	ResFile *file;
};

struct simple_alloc<ObjSelector *,__malloc_alloc_template<0> > {
	simple_alloc<ObjSelector *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static ObjSelector** allocate(/* parameters unknown */);
	static ObjSelector** allocate(/* parameters unknown */);
	static ObjSelector** allocate(/* parameters unknown */);
	static ObjSelector** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct ObjMoverWrapper {
	EVec4 vStartPos;
	EVec4 vStopPos;
	EVec4 vCurPos;
	EUIObjectMover mover;
	float m_timeout;
	float m_timeoutClock;
	static float m_popupTime;
	static EVec2 vTopLeft;
	static EVec2 vTopLeftMessage;
	static EVec2 vWHDialog;
	static EVec2 vWHMessageBox;
	static EVec2 vWHMessageBack;
	static EVec2 vWTitleBar;
	static EVec2 vWPromptBar;
	static float m_fontSize;
	
	ObjMoverWrapper& operator=();
	ObjMoverWrapper();
	ObjMoverWrapper(ObjMoverWrapper*, int, void);
	ObjMoverWrapper();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	bool GetPopDone();
	void DoPop();
	bool GetTimedOut();
	void Update();
};

typedef TNodeList<BString2 *> String2List;

struct TNodeList<BString2 *> : ENodeList {
	TNodeList(TNodeList<BString2 *>*, int, void);
	TNodeList();
	TNodeList();
	static BString2* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<BString2 *>& operator=();
	void MoveContents();
};

struct DialogStrContainer {
	String2List m_strings;
	c16 *m_pfMessageStr;
	BString2 fTitleString;
	BString2 fCancelString;
	BString2 fNoString;
	BString2 fYesString;
	int nStrings;
	float m_textyPos;
	float m_yinc;
	NLIterator m_itFirstVis;
	NLIterator m_itLastVis;
	EVec2 vYesWH;
	EVec2 vNoWH;
	EVec2 vCancleWH;
	EVec2 vTitleWH;
	static float m_promptoff;
	static float m_titleoff;
	static float m_promptgap;
	static float onTextGap;
	static float onW;
	
	DialogStrContainer& operator=();
	DialogStrContainer();
	DialogStrContainer();
	DialogStrContainer(DialogStrContainer*, int, void);
	void AddStr();
	void Reset();
	float GetTotalWCNY();
	float GetTotalWNY();
	float GetTotalWY();
	float GetTotalHCNY();
	float GetTotalHNY();
	float GetTotalHY();
};

struct EMessageDialog : EDialogWin {
	bool m_bVis;
	float m_timeOut;
	
	EMessageDialog& operator=();
	EMessageDialog();
	EMessageDialog();
	/* vtable[1] */ virtual EMessageDialog(EMessageDialog*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[2] */ virtual void SafeDelete();
	/* vtable[8] */ virtual void SetParams(/* s3 19 */ StackElem *elem, /* s2 18 */ DialogParam *param);
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual void Draw(/* s2 18 */ ERC *prc);
protected:
	void InitState();
};

struct TNodeList<const Interaction *> : ENodeList {
	TNodeList(TNodeList<const Interaction *>*, int, void);
	TNodeList();
	TNodeList();
	static Interaction* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<const Interaction *>& operator=();
	void MoveContents();
};

struct EVanitySoundEvent {
	bool m_bHasStarted;
	u32 m_nEventIndex;
	float m_fQueTime;
};

struct EVanityMirrorMenu : EUIObjectNode {
protected:
	bool m_bExitMirror;
	bool m_bUpdateThumbnail;
	bool m_bMiddleAnim;
	bool m_bSwitchCameraMode;
	bool m_bReachedMidpoint;
	ESim *m_pMySim;
	ERFont *m_pFont;
	CustomCharacter *m_pCustomCharacter;
	ISimInstance *m_pWorldObject;
	ERShader *m_pBlankShdr;
	ERShader *m_pMirrorShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	ERShader *m_pDPadBackgroundShdr;
	ERShader *m_pSideMenuCurveShdr;
	ERModel *m_pGlassModel;
	ESimsCam *m_pCam;
	EUIIcon m_dpadIcons[4];
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIPrompt m_Prompts[2];
	u32 m_nNumPrompts;
	EPromptBar m_PromptBar;
	u8 m_nTransitionMode;
	short unsigned int m_szShortName[32];
	float m_fTransitionTime;
	float m_fTitleXPos;
	float m_fTitleWidth;
	float m_fMenuWidth;
	float m_fAnimSoundTimer;
	EUIMenu *m_pMenu;
	ECharedTextMenuItem m_pHeadMenuItems[5];
	CustomCharacter m_originalCharacter;
	EAnimController m_ac;
	u32 m_nCurrentChildAnim;
	unsigned int m_nIdleAnimationID[4];
	u32 m_nRepeatIdleCount;
	u32 m_nControllerID;
	EVanitySoundEvent m_soundEvent[6];
	AnimRef *m_pAnimRef;
	EVec3 m_vOldEye;
	EVec3 m_vOldTarget;
	EVec3 m_vOldUp;
	EVec3 m_vVanityEye;
	EVec3 m_vVanityTarget;
	EVec3 m_vVanityUp;
	EMat4 m_mMirrorOrientation;
	EVec3 m_vMidpoint;
	EPortalDef m_pd;
	
public:
	EVanityMirrorMenu& operator=();
	EVanityMirrorMenu(/* -0x100(caller sp) */ ESim *pPerson, /* -0xfc(caller sp) */ ISimInstance *pObj, /* -0xf8(caller sp) */ u32 nWhichController);
	EVanityMirrorMenu();
	/* vtable[1] */ virtual EVanityMirrorMenu(EVanityMirrorMenu*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Init(/* s3 19 */ ESim *pPerson, /* a2 6 */ ISimInstance *pObj, /* a3 7 */ u32 nWhichController);
	void CleanUp();
	/* vtable[3] */ virtual void Draw(/* s5 21 */ ERC *prc);
	/* vtable[7] */ virtual void Message(/* a1 5 */ EUIObjectNode *pChild, /* s0 16 */ u32 messId);
	bool MirrorUpdate();
	void MoveCamera(/* s2 18 */ ESimsCam *pCam);
	void RestoreCamera();
	void GetOldCameraData(/* a1 5 */ EVec3 *vEye, /* a2 6 */ EVec3 *vTarget, /* a3 7 */ EVec3 *vUp);
	EPortalDef GetPortalDefinition();
	ERShader* GetMirrorShader();
	ERModel* GetGlassModel();
	EMat4* GetOrient();
	ESim* GetSim();
	ISimInstance* GetObject();
	u32 GetControllerID();
	bool SwitchCameraMode();
	EVec3 GetLightVector();
	bool IsCameraMoving();
	void CalulateAnimation(/* s1 17 */ ERC *prc);
protected:
	void SetupDpadWin();
};

struct ECollision {
protected:
	static EVec4 m_vSkipPlanes[2][16];
	static int m_nSkipPlanes[2];
	static int m_skipPlanesToggle;
public:
	static long unsigned int m_lineMaskTable[8][8][8][8];
	static long unsigned int m_multMaskTable[256];
	
	ECollision& operator=();
	ECollision();
	ECollision();
	static bool CollidePointWithSphere(/* parameters unknown */);
	static bool CollideSphereWithSphere(/* parameters unknown */);
	static bool CollidePointWithCylinder(/* parameters unknown */);
	static bool CollidePointWithPolygon(/* parameters unknown */);
	static bool CollideSphereWithPolygon(/* parameters unknown */);
	static bool IntersectPointWithBoundBox(/* parameters unknown */);
	static void AddSkipPlane(/* parameters unknown */);
	static void RemoveSkipPlane(/* parameters unknown */);
	static void ClearSkipPlanes(/* parameters unknown */);
	static void ClearNoContactSkipPlanes(/* parameters unknown */);
	static void ToggleSkipPlanes(/* parameters unknown */);
	static void AssertNoSkipPlanes(/* parameters unknown */);
protected:
	static bool IsSkipPlane(/* parameters unknown */);
	static int FindSkipPlane(/* parameters unknown */);
	static void RemoveSkipPlane(/* parameters unknown */);
};

enum PersonRenderFields {
	kPRF_IsInvisible = 0,
	kPRF_IsGreen = 1
};

struct EWardrobeMenu : EUIObjectNode {
protected:
	EMat4 m_mMirrorOrientation;
	CustomCharacter m_originalCharacter;
	bool m_bExitMirror;
	bool m_bUpdateThumbnail;
	bool m_bMiddleAnim;
	bool m_bSwitchCameraMode;
	bool m_bReachedMidpoint;
	ESim *m_pMySim;
	ERFont *m_pFont;
	CustomCharacter *m_pCustomCharacter;
	ISimInstance *m_pWorldObject;
	ERShader *m_pBlankShdr;
	ERShader *m_pMirrorShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	ERShader *m_pDPadBackgroundShdr;
	ERShader *m_pSideMenuCurveShdr;
	ERModel *m_pGlassModel;
	EUIIcon m_dpadIcons[4];
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIPrompt m_Prompts[2];
	u32 m_nNumPrompts;
	EPromptBar m_PromptBar;
	float m_fTransitionTime;
	float m_fTitleXPos;
	float m_fTitleWidth;
	float m_fBodyMenuWidth;
	short unsigned int m_szShortName[32];
	EUIMenu *m_pMenu;
	ECharedTextMenuItem m_pBodyMenuItems[6];
	EAnimController m_ac;
	unsigned int m_nIdleAnimationID[9];
	u32 m_nRepeatIdleCount;
	u32 m_nControllerID;
	EVec3 m_vOldEye;
	EVec3 m_vOldTarget;
	EVec3 m_vOldUp;
	EVec3 m_vVanityEye;
	EVec3 m_vVanityTarget;
	EVec3 m_vVanityUp;
	EVec3 m_vMidpoint;
	u8 m_nTransitionMode;
	
public:
	EWardrobeMenu& operator=();
	EWardrobeMenu(/* -0x100(caller sp) */ ESim *pPerson, /* -0xfc(caller sp) */ ISimInstance *pObj, /* -0xf8(caller sp) */ u32 nWhichController);
	EWardrobeMenu();
	/* vtable[1] */ virtual EWardrobeMenu(EWardrobeMenu*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	void Init(/* a1 5 */ ESim *pPerson, /* a2 6 */ ISimInstance *pObj, /* a3 7 */ u32 nWhichController);
	void CleanUp();
	/* vtable[3] */ virtual void Draw(/* s5 21 */ ERC *prc);
	/* vtable[7] */ virtual void Message(/* a1 5 */ EUIObjectNode *pChild, /* s0 16 */ u32 messId);
	bool MirrorUpdate();
	void MoveCamera(/* s2 18 */ ESimsCam *pCam);
	void RestoreCamera();
	void GetOldCameraData(/* a1 5 */ EVec3 *vEye, /* a2 6 */ EVec3 *vTarget, /* a3 7 */ EVec3 *vUp);
	ERShader* GetMirrorShader();
	ERModel* GetGlassModel();
	EMat4* GetOrient();
	ESim* GetSim();
	ISimInstance* GetObject();
	u32 GetControllerID();
	bool SwitchCameraMode();
	EVec3 GetLightVector();
	bool IsCameraMoving();
	void CalulateAnimation(/* s1 17 */ ERC *prc);
protected:
	void SetupDpadWin();
};

typedef cArray<TileWallStorage> WallArray;

struct c2DArray<TileWallStorage> : _c2DArray {
	c2DArray<TileWallStorage>& operator=();
	c2DArray();
	c2DArray(c2DArray<TileWallStorage>*, int, void);
	c2DArray();
	static c2DArray<TileWallStorage>* GetArray(/* parameters unknown */);
	void Clear();
	void Clear();
	void SetValue();
	TileWallStorage* GetPointer();
	TileWallStorage& GetValue();
	TileWallStorage** GetArrayBase();
	TileWallStorage& GetWrappedValue();
};

struct cArray<TileWallStorage> : c2DArray<TileWallStorage> {
	cArray<TileWallStorage>& operator=();
	cArray();
	cArray(cArray<TileWallStorage>*, int, void);
	cArray();
	cArray();
	Int GetSize();
	cConstArrayRow<TileWallStorage> operator[]();
	cArrayRow<TileWallStorage> operator[]();
	TileWallStorage& operator()();
	TileWallStorage& operator()();
	cArray<TileWallStorage>* Clone();
	void DoOffset();
	void AndAll();
};

struct CWallArray : cArray<TileWallStorage> {
};

struct c2DArray<unsigned char> : _c2DArray {
	c2DArray<unsigned char>& operator=();
	c2DArray();
	c2DArray(c2DArray<unsigned char>*, int, void);
	c2DArray();
	static c2DArray<unsigned char>* GetArray(/* parameters unknown */);
	void Clear();
	void Clear();
	void SetValue();
	UInt8* GetPointer();
	UInt8& GetValue();
	UInt8** GetArrayBase();
	UInt8& GetWrappedValue();
};

struct CFloorArray : cArray<unsigned char> {
};

struct SpriteProperties {
	float width;
	float height;
	float xpos;
	float ypos;
	float zpos;
};

struct SpriteIdToResIdNode {
	u32 resID;
	u32 shaderID;
	SpriteProperties *m_pProps;
};

struct TNodeList<ESpriteRender *> : ENodeList {
	TNodeList(TNodeList<ESpriteRender *>*, int, void);
	TNodeList();
	TNodeList();
	static ESpriteRender* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ESpriteRender *>& operator=();
	void MoveContents();
};

struct TNodeList<EFamilyMemberMenuItem *> : ENodeList {
	TNodeList(TNodeList<EFamilyMemberMenuItem *>*, int, void);
	TNodeList();
	TNodeList();
	static EFamilyMemberMenuItem* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EFamilyMemberMenuItem *>& operator=();
	void MoveContents();
};

struct EFamilyMemberMenuMgr {
	ERShader *m_pTitleBgCenterShdr;
	ERShader *m_pTitleBgLeftShdr;
	ERShader *m_pTitleBgRightShdr;
	ERShader *m_pTitleHighCenterShdr;
	ERShader *m_pTitleHighLeftShdr;
	ERShader *m_pTitleHighRightShdr;
	ERShader *m_pTextLineCenterShdr;
	ERShader *m_pTextLineRightShdr;
	ERShader *m_pTextLineLeftShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	int m_Selection;
	int m_HouseCost;
	EString m_LoadFileName;
	bool m_bStartLoad;
	bool m_bExitLoad;
	int m_SelectedFamilyMemberNum;
protected:
	EFamilyMemberMenu *m_Menu;
	short unsigned int m_TitleString[128];
	bool m_bAlreadyInitted;
	
public:
	EFamilyMemberMenuMgr& operator=();
	EFamilyMemberMenuMgr();
	EFamilyMemberMenuMgr();
	EFamilyMemberMenuMgr(EFamilyMemberMenuMgr*, int, void);
	void Init(/* a1 5 */ NghResFile *ResFile, /* s2 18 */ int FamilyNum, /* s5 21 */ NeighborhoodImpl *NH, /* -0xc0(caller sp) */ bool AllowChildren);
	int Update();
	void Draw(/* s1 17 */ ERC *prc);
	void Reset();
};

typedef vector<FamilyImpl *,__malloc_alloc_template<0> > FamilyList;
typedef vector<int,__malloc_alloc_template<0> > FamilyIDList;

struct StackString2<32> : StringBuffer2 {
private:
	short unsigned int fChars[32];
};

struct vector<FamilyImpl *,__malloc_alloc_template<0> > {
protected:
	FamilyImpl **start;
	FamilyImpl **finish;
	FamilyImpl **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	FamilyImpl** begin();
	FamilyImpl** begin();
	FamilyImpl** end();
	FamilyImpl** end();
	reverse_iterator<FamilyImpl **,FamilyImpl *,FamilyImpl *&,int> rbegin();
	reverse_iterator<FamilyImpl *const *,FamilyImpl *,FamilyImpl *const &,int> rbegin();
	reverse_iterator<FamilyImpl **,FamilyImpl *,FamilyImpl *&,int> rend();
	reverse_iterator<FamilyImpl *const *,FamilyImpl *,FamilyImpl *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	FamilyImpl*& operator[]();
	FamilyImpl*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<FamilyImpl *,__malloc_alloc_template<0> >*, int, void);
	vector<FamilyImpl *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	FamilyImpl*& front();
	FamilyImpl*& front();
	FamilyImpl*& back();
	FamilyImpl*& back();
	void push_back();
	void swap();
	FamilyImpl** insert();
	FamilyImpl** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct NeighborhoodImpl : Neighborhood {
	FileName fFilename;
	StackString2<32> fNeighborhoodName;
	UnlockedRecon m_UnlockedRecon;
	vector<int,__malloc_alloc_template<0> > fNeighborHouses;
	short int fVars[16];
	NeighborList fNeighbors;
	FamilyList fFamilies;
	Int fHouseNum;
	
	NeighborhoodImpl& operator=();
	NeighborhoodImpl();
	UnlockedRecon* GetUnlockedRecon();
	static bool compareHouses(/* parameters unknown */);
	Neighbor* AddNewNeighbor(/* s3 19 */ ObjSelector *sel);
	void RemoveNeighbor(/* s2 18 */ Neighbor *n);
	Neighbor* FindNeighborByType(/* a1 5 */ ObjSelector *sel);
	void UpdateFamilyFriendsCount(/* s2 18 */ Family *f);
	ErrType Load(/* s4 20 */ NghResFile *pFile);
	void UpdateFamilyNumbers();
	ErrType MoveIn(/* s2 18 */ Family *f, /* s1 17 */ Int houseNum);
	Int GetHousePrice(/* s0 16 */ cSimulator *sim);
	NeighborhoodImpl();
	/* vtable[1] */ virtual NeighborhoodImpl(NeighborhoodImpl*, int, void);
	/* vtable[2] */ virtual c16* GetNeighborhoodName();
	/* vtable[3] */ virtual int GetHighestLevelCompleted();
	/* vtable[4] */ virtual void LevelComplete(/* s1 17 */ int levelNum);
	/* vtable[5] */ virtual void SetFilename(/* a1 5 */ StringBuffer *neighborhoodFile);
	/* vtable[6] */ virtual void GetFilename(/* a1 5 */ StringBuffer *fileName);
	/* vtable[7] */ virtual void GetDirectory(/* a1 5 */ StringBuffer *path);
	/* vtable[8] */ virtual void GetHousePath(/* s3 19 */ int houseNum, /* s4 20 */ StringBuffer *housePath);
	/* vtable[9] */ virtual Int GetNumCharacters();
	/* vtable[10] */ virtual Int GetFamilyFriendsCount(/* a1 5 */ Family *_f);
	/* vtable[11] */ virtual Int GetFriendCount(/* s1 17 */ Neighbor *n);
	/* vtable[12] */ virtual Int GetFamilyNetWorth(/* a1 5 */ Family *_f);
	/* vtable[13] */ virtual ErrType LoadHouse(/* -0xc0(caller sp) */ NghResFile *pFile, /* -0xbc(caller sp) */ Int houseNum, /* s3 19 */ Int familyIDToMoveIn);
	/* vtable[14] */ virtual ErrType SaveHouse(/* s4 20 */ NghResFile *pFile);
	/* vtable[15] */ virtual void UnloadHouse();
	/* vtable[16] */ virtual Int GetHouseNumber();
	/* vtable[17] */ virtual bool GetHouseFileInfo(/* s0 16 */ NghResFile *inFile, /* s5 21 */ Int *price, /* s2 18 */ int *isTutorial, /* s1 17 */ int *hasHouse, /* s3 19 */ int *moveInAllowed);
	/* vtable[18] */ virtual ErrType Save(/* s6 22 */ NghResFile *pFile, /* s7 23 */ SInt32 version);
	/* vtable[19] */ virtual int GetHouseNumberForLevel(/* a1 5 */ int level);
	/* vtable[20] */ virtual SInt16 GetNeighborhoodVar(/* a1 5 */ int which);
	/* vtable[21] */ virtual void SetNeighborhoodVar(/* a1 5 */ int which, /* a2 6 */ SInt16 data);
	/* vtable[22] */ virtual void UpdateInstanceVisitorTypes();
	/* vtable[23] */ virtual int GetNumNeighborHouses();
	/* vtable[24] */ virtual int GetNeighborHouseByIndex(/* a1 5 */ int iIndex);
	/* vtable[25] */ virtual void DoStream(/* s2 18 */ ReconBuffer *r, /* s4 20 */ SInt32 version);
	/* vtable[26] */ virtual Neighbor* FindNeighborByID(/* a1 5 */ Int id);
	/* vtable[27] */ virtual Neighbor* FindNeighborByGUID(/* s2 18 */ SInt32 guid);
	/* vtable[28] */ virtual ObjSelector* GetNeighborSelector(/* a1 5 */ Int neighborID);
	/* vtable[29] */ virtual SInt16 GetNeighborData(/* a1 5 */ SInt16 neighborID, /* s2 18 */ SInt16 dataIndex, /* s0 16 */ SInt16 **ref);
	/* vtable[30] */ virtual SInt16 GetNextNeighborID(/* a1 5 */ SInt16 startID);
	/* vtable[31] */ virtual void LoadPersistentData(/* s1 17 */ cXPerson *person);
	/* vtable[32] */ virtual void SavePersistentData(/* s3 19 */ cXPerson *person);
	/* vtable[33] */ virtual void RelationshipsChanged(/* a1 5 */ Neighbor *n);
	/* vtable[34] */ virtual void PostSim();
	/* vtable[35] */ virtual int GetNumFamilies();
	/* vtable[36] */ virtual Family* GetFamilyByIndex(/* a1 5 */ int iIndex);
	int GetFamilyIndex(/* s3 19 */ Family *f);
	/* vtable[37] */ virtual Family* GetFamily(/* s2 18 */ Int number);
	/* vtable[38] */ virtual Family* GetFamilyInHouse(/* s2 18 */ Int houseNumber);
	/* vtable[39] */ virtual Family* MakeNewFamily();
	/* vtable[40] */ virtual ErrType RemoveFamily(/* s0 16 */ Family *f);
	/* vtable[41] */ virtual ErrType AddToFamily(/* s2 18 */ Neighbor *n, /* a2 6 */ Family *_f);
	/* vtable[42] */ virtual ErrType RemoveFromFamily(/* s3 19 */ Neighbor *n);
	/* vtable[43] */ virtual ErrType AddNewCharacter(/* s1 17 */ Neighbor **outNewNeighbor);
	/* vtable[44] */ virtual ErrType DeleteCharacter(/* s5 21 */ Neighbor *n);
	/* vtable[45] */ virtual Int CountHouses();
	/* vtable[46] */ virtual ErrType MoveOut(/* -0xb0(caller sp) */ NghResFile *pFile, /* -0xac(caller sp) */ Int houseNum, /* -0xa8(caller sp) */ int tearDown);
	/* vtable[47] */ virtual void PrepareAndTestLot(/* s3 19 */ StringBuffer &errorMessage);
	/* vtable[48] */ virtual void GetLotPosition(/* a1 5 */ int houseNumber, /* a2 6 */ int *x, /* a3 7 */ int *y);
	/* vtable[49] */ virtual int GetCurrentTutorialStage();
	/* vtable[50] */ virtual void TutorialCompleted(/* s5 21 */ int stage);
	/* vtable[51] */ virtual void CancelTutorial();
	/* vtable[52] */ virtual bool GetShowTutorialArrow();
	/* vtable[53] */ virtual void SetShowTutorialArrow(/* a1 5 */ bool show);
	/* vtable[54] */ virtual void AddFamilyHistoryStat();
	bool GetFamilyInfo(/* a1 5 */ FamilyID familyNumber, /* s1 17 */ FamilyInfo *info);
	bool GetFamilyInfo();
	bool GetHouseInfo(/* a1 5 */ NghResFile *file, /* t0 8 */ HouseInfo *info);
	bool GetHouseInfo();
	/* vtable[55] */ virtual NeighborhoodImpl* GetImpl();
	void SetHouseNum(/* a1 5 */ int HouseNum);
	void SwitchToNewNeighborhood();
};

struct StackString<64> : StringBuffer {
private:
	char fChars[64];
};

typedef int _iconVu0IVECTOR[4];
typedef float _iconVu0FVECTOR[4];

typedef struct {
	unsigned char Head[4];
	short unsigned int Reserv1;
	short unsigned int OffsLF;
	unsigned int Reserv2;
	unsigned int TransRate;
	int BgColor[4][4];
	float LightDir[3][4];
	float LightColor[3][4];
	_iconVu0FVECTOR Ambient;
	unsigned char TitleName[68];
	unsigned char FnameView[64];
	unsigned char FnameCopy[64];
	unsigned char FnameDel[64];
	unsigned char Reserve3[512];
} sceMcIconSys;

typedef struct {
	unsigned char Resv2;
	unsigned char Sec;
	unsigned char Min;
	unsigned char Hour;
	unsigned char Day;
	unsigned char Month;
	short unsigned int Year;
} sceMcStDateTime;

typedef struct {
	sceMcStDateTime _Create;
	sceMcStDateTime _Modify;
	unsigned int FileSizeByte;
	short unsigned int AttrFile;
	short unsigned int Reserve1;
	unsigned int Reserve2;
	unsigned int PdaAplNo;
	unsigned char EntryName[32];
} sceMcTblGetDir;

struct IconData {
	unsigned int IconIds[3];
	unsigned int IconSizes[3];
};

struct simple_alloc<FamilyImpl *,__malloc_alloc_template<0> > {
	simple_alloc<FamilyImpl *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static FamilyImpl** allocate(/* parameters unknown */);
	static FamilyImpl** allocate(/* parameters unknown */);
	static FamilyImpl** allocate(/* parameters unknown */);
	static FamilyImpl** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct TNodeList<EFamilySelectMenuItem *> : ENodeList {
	TNodeList(TNodeList<EFamilySelectMenuItem *>*, int, void);
	TNodeList();
	TNodeList();
	static EFamilySelectMenuItem* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EFamilySelectMenuItem *>& operator=();
	void MoveContents();
};

struct EFamilySelect {
	ERShader *m_pTitleBgCenterShdr;
	ERShader *m_pTitleBgLeftShdr;
	ERShader *m_pTitleBgRightShdr;
	ERShader *m_pTitleHighCenterShdr;
	ERShader *m_pTitleHighLeftShdr;
	ERShader *m_pTitleHighRightShdr;
	int m_Selection;
	int m_HouseCost;
	bool m_bDeleteFamily;
	bool m_bAllowDeletionOption;
protected:
	EFamilySelectMenu *m_Menu;
	short unsigned int m_TitleString[128];
	bool m_bWaitForButUp;
	bool m_bAlreadyInitted;
	
public:
	EFamilySelect& operator=();
	EFamilySelect();
	EFamilySelect();
	EFamilySelect(EFamilySelect*, int, void);
	void Init(/* fp 30 */ c16 *Title, /* -0xb0(caller sp) */ int HouseCost, /* s6 22 */ bool NewFamilyOption, /* s7 23 */ bool ListAllFamilies, /* s3 19 */ NeighborhoodImpl *NH, /* s1 17 */ bool AllowDeletionOption);
	int Update(/* s3 19 */ bool *DeleteFamily);
	void Draw(/* s1 17 */ ERC *prc);
	void Reset();
};

struct EFloorStylesMenu : EUIScrollMenu {
protected:
	bool m_done;
	EUIObjectNodeList m_itemList;
	ERFont *m_pFont;
	
public:
	EFloorStylesMenu& operator=();
	EFloorStylesMenu();
	EFloorStylesMenu();
	/* vtable[1] */ virtual EFloorStylesMenu(EFloorStylesMenu*, int, void);
	/* vtable[24] */ virtual void Init();
	/* vtable[7] */ virtual void Message(/* a1 5 */ EUIObjectNode *pChild, /* s1 17 */ u32 messId);
	bool GetReadyToKill();
};

struct TLinkedList<EWaterWave,44,40> {
protected:
	EWaterWave *m_pHead;
	EWaterWave *m_pTail;
	
public:
	TLinkedList<EWaterWave,44,40>& operator=();
	TLinkedList();
	TLinkedList();
	static EWaterWave*& Last(/* parameters unknown */);
	static EWaterWave*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EWaterWave* Head();
	EWaterWave* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct TNodeList<EHouseImportMenuItem *> : ENodeList {
	TNodeList(TNodeList<EHouseImportMenuItem *>*, int, void);
	TNodeList();
	TNodeList();
	static EHouseImportMenuItem* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EHouseImportMenuItem *>& operator=();
	void MoveContents();
};

struct EHouseImportMenuMgr {
	ERShader *m_pTitleBgCenterShdr;
	ERShader *m_pTitleBgLeftShdr;
	ERShader *m_pTitleBgRightShdr;
	ERShader *m_pTitleHighCenterShdr;
	ERShader *m_pTitleHighLeftShdr;
	ERShader *m_pTitleHighRightShdr;
	ERShader *m_pTextLineCenterShdr;
	ERShader *m_pTextLineRightShdr;
	ERShader *m_pTextLineLeftShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	int m_Selection;
	int m_HouseCost;
	EString m_LoadFileName;
	bool m_bStartLoad;
	bool m_bExitLoad;
	int m_SelectedHouseNum;
protected:
	EHouseImportMenu *m_Menu;
	short unsigned int m_TitleString[128];
	
public:
	EHouseImportMenuMgr& operator=();
	EHouseImportMenuMgr();
	EHouseImportMenuMgr();
	EHouseImportMenuMgr(EHouseImportMenuMgr*, int, void);
	void Init(/* s5 21 */ NghResFile *ResFile);
	int Update();
	void Draw(/* s1 17 */ ERC *prc);
	void Reset();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPerson : virtual cXObject {
	cXObject *$vb2557;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf3232;
	
	cXPerson& operator=();
	cXPerson();
protected:
	cXPerson();
	/* vtable[1] */ virtual cXPerson(cXPerson*, int, void);
	void setPersonImpl();
public:
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPerson*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPerson*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[12] */ virtual float GetMotive();
	/* vtable[13] */ virtual float* GetMotiveRef();
	/* vtable[14] */ virtual float* GetOldMotiveRef();
	/* vtable[15] */ virtual void SetMotive();
	/* vtable[16] */ virtual void SimMotives();
	/* vtable[17] */ virtual void CalcHappy();
	/* vtable[18] */ virtual bool AddAction();
	/* vtable[19] */ virtual bool RemoveAction();
	/* vtable[20] */ virtual Int CountActions();
	/* vtable[21] */ virtual Interaction* GetIndAction();
	/* vtable[22] */ virtual Interaction& GetCurrentAction();
	/* vtable[23] */ virtual Interaction& GetLastAction();
	/* vtable[24] */ virtual void DeleteTopAction();
	/* vtable[25] */ virtual void DebugDumpHappyScape();
	/* vtable[26] */ virtual void Skipping3D();
	/* vtable[27] */ virtual bool IsSelected();
	/* vtable[28] */ virtual StdPrm GetPersonData();
	/* vtable[29] */ virtual void SetPersonData();
	/* vtable[30] */ virtual StdPrm* GetPersonDataArray();
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[33] */ virtual StdPrm GetIdleState();
	/* vtable[34] */ virtual bool IsCarrying();
	/* vtable[35] */ virtual TileList* GetDestList();
	/* vtable[36] */ virtual SAnimator* GetSAnimator();
	/* vtable[37] */ virtual void GetJobSuitTex();
	/* vtable[38] */ virtual RoomID GetCurrentRoom();
	/* vtable[39] */ virtual void UpdateCurrentRoom();
	/* vtable[40] */ virtual SInt16 GetNeighborID();
	/* vtable[41] */ virtual void SetNeighborID();
	/* vtable[42] */ virtual bool IsSleeping();
	/* vtable[43] */ virtual bool IsRouting();
	/* vtable[44] */ virtual bool IsVisitor();
	/* vtable[45] */ virtual bool IsChild();
	/* vtable[46] */ virtual bool IsMale();
	/* vtable[47] */ virtual bool IsFemale();
	/* vtable[48] */ virtual bool IsAdult();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(cXPerson*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPerson*, int, void);
	/* vtable[61] */ virtual int GetRecordStartTicks();
	/* vtable[62] */ virtual int GetRecordCurTicks();
	/* vtable[63] */ virtual int GetRecordTicksElapsed();
	/* vtable[64] */ virtual Skill* GetRecordSkill();
	/* vtable[65] */ virtual void StartRecording();
	/* vtable[66] */ virtual void StopRecording();
	/* vtable[67] */ virtual void ClearRecording();
	/* vtable[68] */ virtual int TickRecording();
	/* vtable[69] */ virtual void LogEvent();
	/* vtable[70] */ virtual void Track();
	/* vtable[71] */ virtual bool ShouldInterrupt();
	/* vtable[72] */ virtual cXObject* GetControllingObject();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
	cXPersonImpl* CAST_IMPL();
};

struct ERQTable<ChallengeData> {
	char *pName;
	ChallengeData *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct simple_alloc<UnlockedId,__malloc_alloc_template<0> > {
	simple_alloc<UnlockedId,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static UnlockedId* allocate(/* parameters unknown */);
	static UnlockedId* allocate(/* parameters unknown */);
	static UnlockedId* allocate(/* parameters unknown */);
	static UnlockedId* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2319;
	float m_infoWinAlpha;
	float m_infoWinAlphaTime;
	s32 m_curwindow;
protected:
	s32 m_pressed;
	bool m_bButtdown;
	bool m_bDrawInfo;
	float m_introAnimDur;
	float m_infointroAnimDur;
	float m_infoDelayDur;
	float m_introTime;
	float m_hoverTime;
	float m_infoInTime;
	float m_simnametimeout;
	int m_curOpt;
	ERelationsWin m_rltnsMenu;
	static ESlideTextBox m_nameBoxs[2];
	static ESlideTextBox m_playerNameBoxs[2];
	static bool m_bInit;
	static void (*m_DrawTable[4])(/* parameters unknown */);
	static void (*m_UpdateTable[4])(/* parameters unknown */);
	static ERFont *m_pFont;
public:
	static ERShader *m_textarrowl;
	static ERShader *m_textarrowr;
	static ERShader *m_pDpadInverse;
	static ERShader *m_pMenubevel_T_L;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pTextBoxHBL;
	static ERShader *m_pTextBoxHBR;
	static ERShader *m_pTextBoxHTL;
	static ERShader *m_pTextBoxHTR;
	static ERShader *m_pTextBoxHML;
	static ERShader *m_pTextBoxHMR;
	static ERShader *m_pTextBoxHTC;
	static ERShader *m_pTextBoxHBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pTextPopOutC;
	static ERShader *m_pTextPopOutCH;
	static ERShader *m_pTextPopOutL;
	static ERShader *m_pTextPopOutLH;
	static ERShader *m_pTextPopOutR;
	static ERShader *m_pTextPopOutRH;
	static UiStringLookUpTableEntry __MoodStrings[8];
	static UiStringLookUpTableEntry __PersStrings[8];
	static UiStringLookUpTableEntry __JobStrings[8];
	static UiStringLookUpTableEntry __RelaStrings[8];
	static UiStringLookUpTableEntry *__InfoTextLookup[4];
	
	SimInfoWin& operator=();
	SimInfoWin();
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawInfo();
	void SetWindow();
	s32 GetWindow();
	void GetBut();
	void ResetState();
	void ChangedSelectedSim();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigHighlightBox(/* parameters unknown */);
protected:
	int GetDirection();
	void DrawBackGround();
	void StartIntro();
	void StartTextSlide();
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo();
};

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2319;
protected:
	EVec2 m_vPosOff;
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_fnTab[10];
public:
	static bool m_bInit;
	static ERShader *m_pBack;
	static ERShader *m_pBack1;
	static ERShader *m_pBack2;
	static ERShader *m_pUpShdr;
	static ERShader *m_pDownShdr;
	static ERShader *m_pLeftShdr;
	static ERShader *m_pRightShdr;
	static ERShader *m_pDelqueueShdr;
	static ERShader *m_pJobShdr;
	static ERShader *m_pMoodShdr;
	static ERShader *m_pMovequeueShdr;
	static ERShader *m_pPersonalityShdr;
	static ERShader *m_pRelationshipsShdr;
	static ERShader *m_pBlankUp;
	static ERShader *m_pBlankDown;
	static ERShader *m_pBlankLeft;
	static ERShader *m_pBlankRight;
	static ERShader *m_pQuestion;
	static ERShader *m_pCancle;
	
	DPadWin& operator=();
	DPadWin();
	DPadWin();
	/* vtable[1] */ virtual DPadWin(DPadWin*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void SetDefaultFlags();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawButtonPrompts(/* parameters unknown */);
protected:
	void DrawHead();
	void DrawLIVE_DEFAULT();
	void DrawLIVE_DIALOG();
	void DrawLIVE_ACTIONQ();
	void DrawLIVE_INFOUP();
	void DrawLIVE_PIMENU();
};

// warning: multiple differing types with the same name (name not equal)
struct EPausePanel : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2319;
	EDialogMenu m_DialogMenu;
	c16 *m_ppNoYesOptions[2];
	c16 *m_ppYesNoOptions[2];
	c16 *m_ppCancelSaveNoSaveOptions[3];
	c16 *m_ppCancelRemove2Options[2];
protected:
	ERFont *m_pFont;
	float m_PauseTimer;
	static float m_ItemInfoTimer;
	u32 m_nDisplayMode;
	bool m_bCleanUpModelReference;
	bool m_bCheckSavedSuccess;
	bool m_bHideDialog;
	EPauseMainMenu m_PauseMainMenu;
	EPauseBudgetMenu m_PauseBudgetMenu;
	EPauseBuyMenu m_PauseBuyMenu;
	EPauseBuildMenu m_PauseBuildMenu;
	EPauseOptionsMenu m_PauseOptionsMenu;
	EPauseItemInfo *m_pItemInfo;
	bool m_bDeleteInfo;
	ERShader *m_pBlankShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pMenuBevelShdr;
	static ERShader *m_pDPadUp;
	static ERShader *m_pDPadDown;
	static ERShader *m_pDPadLeft;
	static ERShader *m_pDPadRight;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIIcon m_SquareIcon;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsYN[2];
	EUIPrompt m_PromptsYNC[3];
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBarYN;
	EPromptBar m_PromptBarYNC;
	EPromptBar m_PromptBar;
	
public:
	EPausePanel& operator=();
	EPausePanel();
	EPausePanel();
	/* vtable[1] */ virtual EPausePanel(EPausePanel*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawGenericMessageBox();
	static void ResetItemInfoTimer(/* parameters unknown */);
	static float GetItemInfoTimer(/* parameters unknown */);
	static ERShader* GetShaderDPadUp(/* parameters unknown */);
	static ERShader* GetShaderDPadDown(/* parameters unknown */);
	static ERShader* GetShaderDPadLeft(/* parameters unknown */);
	static ERShader* GetShaderDPadRight(/* parameters unknown */);
	static void SetDPadUp(/* parameters unknown */);
	static void SetDPadDown(/* parameters unknown */);
	static void SetDPadLeft(/* parameters unknown */);
	static void SetDPadRight(/* parameters unknown */);
};

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3390;
	float m_infoWinAlpha;
	float m_infoWinAlphaTime;
	s32 m_curwindow;
protected:
	s32 m_pressed;
	bool m_bButtdown;
	bool m_bDrawInfo;
	float m_introAnimDur;
	float m_infointroAnimDur;
	float m_infoDelayDur;
	float m_introTime;
	float m_hoverTime;
	float m_infoInTime;
	float m_simnametimeout;
	int m_curOpt;
	ERelationsWin m_rltnsMenu;
	static ESlideTextBox m_nameBoxs[2];
	static ESlideTextBox m_playerNameBoxs[2];
	static bool m_bInit;
	static void (*m_DrawTable[4])(/* parameters unknown */);
	static void (*m_UpdateTable[4])(/* parameters unknown */);
	static ERFont *m_pFont;
public:
	static ERShader *m_textarrowl;
	static ERShader *m_textarrowr;
	static ERShader *m_pDpadInverse;
	static ERShader *m_pMenubevel_T_L;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pTextBoxHBL;
	static ERShader *m_pTextBoxHBR;
	static ERShader *m_pTextBoxHTL;
	static ERShader *m_pTextBoxHTR;
	static ERShader *m_pTextBoxHML;
	static ERShader *m_pTextBoxHMR;
	static ERShader *m_pTextBoxHTC;
	static ERShader *m_pTextBoxHBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pTextPopOutC;
	static ERShader *m_pTextPopOutCH;
	static ERShader *m_pTextPopOutL;
	static ERShader *m_pTextPopOutLH;
	static ERShader *m_pTextPopOutR;
	static ERShader *m_pTextPopOutRH;
	static UiStringLookUpTableEntry __MoodStrings[8];
	static UiStringLookUpTableEntry __PersStrings[8];
	static UiStringLookUpTableEntry __JobStrings[8];
	static UiStringLookUpTableEntry __RelaStrings[8];
	static UiStringLookUpTableEntry *__InfoTextLookup[4];
	
	SimInfoWin& operator=();
	SimInfoWin();
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawInfo();
	void SetWindow();
	s32 GetWindow();
	void GetBut();
	void ResetState();
	void ChangedSelectedSim();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigHighlightBox(/* parameters unknown */);
protected:
	int GetDirection();
	void DrawBackGround();
	void StartIntro();
	void StartTextSlide();
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo();
};

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3390;
protected:
	EVec2 m_vPosOff;
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_fnTab[10];
public:
	static bool m_bInit;
	static ERShader *m_pBack;
	static ERShader *m_pBack1;
	static ERShader *m_pBack2;
	static ERShader *m_pUpShdr;
	static ERShader *m_pDownShdr;
	static ERShader *m_pLeftShdr;
	static ERShader *m_pRightShdr;
	static ERShader *m_pDelqueueShdr;
	static ERShader *m_pJobShdr;
	static ERShader *m_pMoodShdr;
	static ERShader *m_pMovequeueShdr;
	static ERShader *m_pPersonalityShdr;
	static ERShader *m_pRelationshipsShdr;
	static ERShader *m_pBlankUp;
	static ERShader *m_pBlankDown;
	static ERShader *m_pBlankLeft;
	static ERShader *m_pBlankRight;
	static ERShader *m_pQuestion;
	static ERShader *m_pCancle;
	
	DPadWin& operator=();
	DPadWin();
	DPadWin();
	/* vtable[1] */ virtual DPadWin(DPadWin*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void SetDefaultFlags();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawButtonPrompts(/* parameters unknown */);
protected:
	void DrawHead();
	void DrawLIVE_DEFAULT();
	void DrawLIVE_DIALOG();
	void DrawLIVE_ACTIONQ();
	void DrawLIVE_INFOUP();
	void DrawLIVE_PIMENU();
};

// warning: multiple differing types with the same name (name not equal)
struct EPausePanel : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3390;
	EDialogMenu m_DialogMenu;
	c16 *m_ppNoYesOptions[2];
	c16 *m_ppYesNoOptions[2];
	c16 *m_ppCancelSaveNoSaveOptions[3];
	c16 *m_ppCancelRemove2Options[2];
protected:
	ERFont *m_pFont;
	float m_PauseTimer;
	static float m_ItemInfoTimer;
	u32 m_nDisplayMode;
	bool m_bCleanUpModelReference;
	bool m_bCheckSavedSuccess;
	bool m_bHideDialog;
	EPauseMainMenu m_PauseMainMenu;
	EPauseBudgetMenu m_PauseBudgetMenu;
	EPauseBuyMenu m_PauseBuyMenu;
	EPauseBuildMenu m_PauseBuildMenu;
	EPauseOptionsMenu m_PauseOptionsMenu;
	EPauseItemInfo *m_pItemInfo;
	bool m_bDeleteInfo;
	ERShader *m_pBlankShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pMenuBevelShdr;
	static ERShader *m_pDPadUp;
	static ERShader *m_pDPadDown;
	static ERShader *m_pDPadLeft;
	static ERShader *m_pDPadRight;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIIcon m_SquareIcon;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsYN[2];
	EUIPrompt m_PromptsYNC[3];
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBarYN;
	EPromptBar m_PromptBarYNC;
	EPromptBar m_PromptBar;
	
public:
	EPausePanel& operator=();
	EPausePanel();
	EPausePanel();
	/* vtable[1] */ virtual EPausePanel(EPausePanel*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawGenericMessageBox();
	static void ResetItemInfoTimer(/* parameters unknown */);
	static float GetItemInfoTimer(/* parameters unknown */);
	static ERShader* GetShaderDPadUp(/* parameters unknown */);
	static ERShader* GetShaderDPadDown(/* parameters unknown */);
	static ERShader* GetShaderDPadLeft(/* parameters unknown */);
	static ERShader* GetShaderDPadRight(/* parameters unknown */);
	static void SetDPadUp(/* parameters unknown */);
	static void SetDPadDown(/* parameters unknown */);
	static void SetDPadLeft(/* parameters unknown */);
	static void SetDPadRight(/* parameters unknown */);
};

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3390;
protected:
	struct {
		short int __delta;
		short int __index;
		union {
			s32 (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_ToolValueCalcFnTab[7];
	CursorMode m_mode;
	bool m_bUndoable;
	bool m_bNewObject;
	EVec3 m_vLastPos;
	EVec3 m_vPos;
	EVec2 m_vCursorAnchor;
	EVec2 m_vCursorAnchorCenter;
	ESimsCam *m_pCam;
	EDL *m_pdl;
	EDL *m_pLineDl;
	EPiMenu *m_pPiMenu;
	cXCursorObject *m_pCursorObject;
	float m_fCursorTheta;
	int m_wallPaperSide;
	ERShader *m_pLineShdr;
	ERShader *m_pFloorShd;
	ERShader *m_pWPaperShd;
	ERModel *m_pMainBase;
	ERModel *m_pMainBaseH;
	ERModel *m_pMainCirDash;
	ERModel *m_pArrow;
	ERModel *m_pArrowH;
	ERModel *m_pTrackBase;
	ERModel *m_pTrackH;
	ERModel *m_pTrackCirDash;
	ERModel *m_pBuild;
	ERModel *m_pBuild02;
	ERModel *m_pBuildH;
	ERModel *m_pBuy;
	ERModel *m_pBuy02;
	ERModel *m_pBuyH;
	EIParticleEmit *m_pEmit;
	ERParticleType *m_pType;
	ISimInstanceList m_objList;
	CursorFloorTilePtrList m_floorList;
	WallTile *m_pToolResMap;
	FTilePt m_undoLoc;
	SInt16 m_undoDir;
	SInt32 m_refund;
	SInt32 m_ring_S0;
	SInt32 m_ring_S1;
	float m_scaletime;
	WallStyle m_fenctype;
	u32 m_toolUnitPrice;
	static EBound3 m_lotBound;
	static bool m_bGridInit;
	static EDL *m_pGridDl;
	static ERShader *m_pWhiteLineShader;
	static ERShader *m_pWallUnderConstructionShd;
public:
	static ERShader *m_pBuildToolGuideShd;
	
	ESimsCursor& operator=();
	ESimsCursor();
	ESimsCursor();
	/* vtable[1] */ virtual ESimsCursor(ESimsCursor*, int, void);
	bool CanUserSell();
	void ClearPlacementError();
	void Init();
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[14] */ virtual void SetFlag();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawMenu();
	void Draw_Curs();
	void GetCamOff();
	void SnapToDefPos();
	void SetCam();
	ESimsCam* GetCam();
	void GetPos();
	EVec3& GetPos();
	/* vtable[4] */ virtual void SetPos();
	u32 GetPlayerId();
	float GetCurorRad();
	void SetCursorObject();
	bool SafeToUnPause();
	void MoveCursor();
	void InitFloorTool();
	void SnapToWallVert();
	void FindWallDragVert();
	EVec2 GetSnapPos();
	void GetSnapPos();
	void LiveUpdate();
	void PauseUpdate();
	void BuyUpdate();
	bool CheckForXPressLive();
	void GetListofObjectsInCusorRad();
	bool HasGrabObject();
	cXObject* GetGrabObject();
	bool CheckForXPressBuyBuild();
	void Float();
	cXObject* PointToObject();
	bool TurnToWall();
	void TurnObject();
	bool InPiMenu();
	bool PiMenuCanUpdate();
	void CancelCursor();
	void UpdateHouse();
	bool TryUndoObjectPlacement();
	void FloorUpdate();
	CursorFloorTile* CreateCursorFloorTile();
	CursorMode GetCursorMode();
	bool CursorHasObject();
	void ExitFloorTool();
	void DrawCursorFloorList();
	bool InToolMode();
	bool InFloorMode();
	bool InWallMode();
	void DrawFloorPrevew();
	void DrawDeletePrevew();
	void DrawPrevewRect();
	void DrawRoomFillPrevew();
	void SetFloor();
	void BeginWallTool();
	void ExitWallTool();
	void WallToolUpdate();
	void DrawWallPreview();
	void DrawWallDelPreview();
	void DrawWallRoomPreview();
	bool FinalizeWallPlacement();
	bool FinalizeWallDel();
	bool FinalizeRoom();
	s32 GetWallLineCost();
	bool CanChangeTileAdd();
	bool CanChangeTileDelete();
	bool SubmitLine();
	static bool KillArchitecturalObject(/* parameters unknown */);
	bool AddWallAtTile();
	void VertPosToTile();
	static void ConvertVertsToTiles(/* parameters unknown */);
	static TilePtDir GetTileDirection(/* parameters unknown */);
	void DeleteWallAtTile();
	bool LegalWallTile();
	bool InPaperTool();
	void BeginPaperTool();
	void ExitPaperTool();
	void PaperToolUpdate();
	void DrawPaperPreview();
	void DrawPaperDelPreview();
	void DrawPaperRoomPreview();
	bool FinalizePaperPlacement();
	bool FinalizePaperDel();
	bool FinalizePaperForRoom();
	void AddPaperAtTile();
	void DeletePaperAtTile();
	void ChangeTile();
	int GetSideOfWall();
	bool SubmitPaperLine();
	int GetPaperLineCost();
	static void UpdateLot(/* parameters unknown */);
	s32 _GetkDefaultToolValue();
	s32 _GetkFloorToolValue();
	s32 _GetkWallToolValue();
	s32 _GetkPaperToolValue();
	s32 _GetkFenceToolValue();
	s32 GetCurToolValue();
	static void CleanUpGrid(/* parameters unknown */);
	static void SetUpGrid(/* parameters unknown */);
	static void DrawGrid(/* parameters unknown */);
};

struct ERQTable<HouseData> {
	char *pName;
	HouseData *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

enum JobReq {
	kJR_Friends = 0,
	kJR_Cook = 1,
	kJR_Repair = 2,
	kJR_Charisma = 3,
	kJR_Body = 4,
	kJR_Logic = 5,
	kJR_Creativity = 6,
	kJR_Count = 10
};

struct VECTOR<Job> {
private:
	Job *pData;
	
public:
	VECTOR<Job>& operator=();
	VECTOR();
	VECTOR();
	int size();
	Job& operator[]();
	Job& operator[]();
	Job* begin();
	Job* end();
	Job* begin();
	Job* end();
};

struct Career {
	Int fID;
	VECTOR<Job> fJobs;
	ELocString fName;
	ELocString fOfferDialogText[2];
};

struct Careers {
	__vtbl_ptr_type *$vf843;
	
	Careers& operator=();
	Careers();
protected:
	Careers();
	/* vtable[1] */ virtual Careers(Careers*, int, void);
public:
	/* vtable[2] */ virtual void Load();
	/* vtable[3] */ virtual void TearDown();
	/* vtable[4] */ virtual Career* GetCareerByID();
	/* vtable[5] */ virtual int GetNumCareers();
	/* vtable[6] */ virtual Career* GetCareerByIndex();
	/* vtable[7] */ virtual int GetIndexByCareer();
	/* vtable[8] */ virtual ELocString& GetJobPerformance();
	/* vtable[9] */ virtual ELocString& GetJobGrade();
	/* vtable[10] */ virtual ELocString& GetOfferDialogText();
	/* vtable[11] */ virtual bool GetBehCareerData();
	/* vtable[12] */ virtual ELocString& GetJobName();
	/* vtable[13] */ virtual ELocString& GetShortName();
	/* vtable[14] */ virtual Int GetCarpoolHour();
	/* vtable[15] */ virtual char* GetSuit();
	static Careers* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

// warning: multiple differing types with the same name (type name not equal)
struct simple_alloc<int,__malloc_alloc_template<0> > {
	simple_alloc<int,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static NodeRef* allocate(/* parameters unknown */);
	static NodeRef* allocate(/* parameters unknown */);
	static NodeRef* allocate(/* parameters unknown */);
	static NodeRef* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<float,__malloc_alloc_template<0> > {
	simple_alloc<float,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static float* allocate(/* parameters unknown */);
	static float* allocate(/* parameters unknown */);
	static float* allocate(/* parameters unknown */);
	static float* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct StackString2<8> : StringBuffer2 {
private:
	short unsigned int fChars[8];
};

struct TNodeList<ESimsMemCardMenuItem *> : ENodeList {
	TNodeList(TNodeList<ESimsMemCardMenuItem *>*, int, void);
	TNodeList();
	TNodeList();
	static ESimsMemCardMenuItem* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ESimsMemCardMenuItem *>& operator=();
	void MoveContents();
};

struct ESimsMemCardMenuMgr {
	ERShader *m_pTitleBgCenterShdr;
	ERShader *m_pTitleBgLeftShdr;
	ERShader *m_pTitleBgRightShdr;
	ERShader *m_pTitleHighCenterShdr;
	ERShader *m_pTitleHighLeftShdr;
	ERShader *m_pTitleHighRightShdr;
	ERShader *m_pTextLineCenterShdr;
	ERShader *m_pTextLineRightShdr;
	ERShader *m_pTextLineLeftShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	int m_Selection;
	int m_HouseCost;
	EString m_LoadFileName;
	bool m_bStartLoad;
	bool m_bExitLoad;
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBar;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	bool m_pPromptBarInitted;
protected:
	ESimsMemCardMenu *m_Menu;
	short unsigned int m_TitleString[128];
	bool m_bAlreadyInitted;
	
public:
	ESimsMemCardMenuMgr& operator=();
	ESimsMemCardMenuMgr();
	ESimsMemCardMenuMgr();
	ESimsMemCardMenuMgr(ESimsMemCardMenuMgr*, int, void);
	void Init(/* -0xd0(caller sp) */ c16 *Title, /* -0xcc(caller sp) */ int ListStoryModeFiles, /* -0xc8(caller sp) */ bool bSkipCurrentNeighborhood);
	bool Update();
	void Draw(/* s1 17 */ ERC *prc);
	void Reset();
};

typedef unsigned int wint_t;
typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;
typedef long int fd_mask;

typedef struct {
	fd_mask fds_bits[1];
} _types_fd_set;

typedef struct {
	unsigned int data;
	unsigned int addr;
	unsigned int size;
	unsigned int mode;
} sceSifDmaData;

typedef struct {
	unsigned int COUNT : 16;
	unsigned int p0 : 16;
} tT_COUNT;

typedef struct {
	unsigned int CLKS : 2;
	unsigned int GATE : 1;
	unsigned int GATS : 1;
	unsigned int GATM : 2;
	unsigned int ZRET : 1;
	unsigned int CUE : 1;
	unsigned int CMPE : 1;
	unsigned int OVFE : 1;
	unsigned int EQUF : 1;
	unsigned int OVFF : 1;
	unsigned int p0 : 20;
} tT_MODE;

typedef struct {
	unsigned int COMP : 16;
	unsigned int p0 : 16;
} tT_COMP;

typedef struct {
	unsigned int HOLD : 16;
	unsigned int p0 : 16;
} tT_HOLD;

typedef struct {
	unsigned int OPTION : 28;
	unsigned int CODE : 4;
} tIPU_CMD_write;

typedef struct {
	unsigned int DATA;
	unsigned int p0 : 31;
	unsigned int BUSY : 1;
} tIPU_CMD_read;

typedef struct {
	unsigned int BSTOP;
	unsigned int p0 : 31;
	unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct {
	unsigned int IFC : 4;
	unsigned int OFC : 4;
	unsigned int CBP : 6;
	unsigned int ECD : 1;
	unsigned int SCD : 1;
	unsigned int IDP : 2;
	unsigned int p0 : 2;
	unsigned int AS : 1;
	unsigned int IVF : 1;
	unsigned int QST : 1;
	unsigned int MP1 : 1;
	unsigned int PCT : 3;
	unsigned int p1 : 3;
	unsigned int RST : 1;
	unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct {
	unsigned int BP : 7;
	unsigned int p0 : 1;
	unsigned int IFC : 4;
	unsigned int p1 : 4;
	unsigned int FP : 2;
	unsigned int p2 : 14;
} tIPU_BP;

typedef struct {
	unsigned int RST : 1;
	unsigned int p0 : 2;
	unsigned int PSE : 1;
	unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct {
	unsigned int M3R : 1;
	unsigned int p0 : 1;
	unsigned int IMT : 1;
	unsigned int p1 : 29;
} tGIF_MODE;

typedef struct {
	unsigned int M3R : 1;
	unsigned int M3P : 1;
	unsigned int IMT : 1;
	unsigned int PSE : 1;
	unsigned int p0 : 1;
	unsigned int IP3 : 1;
	unsigned int P3Q : 1;
	unsigned int P2Q : 1;
	unsigned int P1Q : 1;
	unsigned int OPH : 1;
	unsigned int APATH : 2;
	unsigned int DIR : 1;
	unsigned int p1 : 11;
	unsigned int FQC : 5;
	unsigned int p2 : 3;
} tGIF_STAT;

typedef struct {
	unsigned int NLOOP : 15;
	unsigned int EOP : 1;
	unsigned int tag : 16;
} tGIF_TAG0;

typedef struct {
	unsigned int tag : 14;
	unsigned int PRE : 1;
	unsigned int PRIM : 11;
	unsigned int FLG : 2;
	unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct {
	unsigned int tag;
} tGIF_TAG2;

typedef struct {
	unsigned int tag;
} tGIF_TAG3;

typedef struct {
	unsigned int LOOPCNT : 15;
	unsigned int p0 : 1;
	unsigned int REGCNT : 4;
	unsigned int VUADDR : 10;
	unsigned int p1 : 2;
} tGIF_CNT;

typedef struct {
	unsigned int P3CNT : 15;
	unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct {
	unsigned int LOOPCNT : 15;
	unsigned int EOP : 1;
	unsigned int p0 : 16;
} tGIF_P3TAG;

typedef struct {
	unsigned int VPS : 2;
	unsigned int VEW : 1;
	unsigned int p0 : 3;
	unsigned int MRK : 1;
	unsigned int p1 : 1;
	unsigned int VSS : 1;
	unsigned int VFS : 1;
	unsigned int VIS : 1;
	unsigned int INT : 1;
	unsigned int ERO : 1;
	unsigned int ER1 : 1;
	unsigned int p2 : 10;
	unsigned int FQC : 4;
	unsigned int p3 : 4;
} tVIF0_STAT;

typedef struct {
	unsigned int RST : 1;
	unsigned int FBK : 1;
	unsigned int STP : 1;
	unsigned int STC : 1;
	unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct {
	unsigned int MII : 1;
	unsigned int ME0 : 1;
	unsigned int ME1 : 1;
	unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct {
	unsigned int MARK : 16;
	unsigned int p0 : 16;
} tVIF_MARK;

typedef struct {
	unsigned int CL : 8;
	unsigned int WL : 8;
	unsigned int p0 : 16;
} tVIF_CYCLE;

typedef struct {
	unsigned int MOD : 2;
	unsigned int p0 : 30;
} tVIF_MODE;

typedef struct {
	unsigned int num : 8;
	unsigned int p0 : 24;
} tVIF0_NUM;

typedef struct {
	unsigned int m0 : 2;
	unsigned int m1 : 2;
	unsigned int m2 : 2;
	unsigned int m3 : 2;
	unsigned int m4 : 2;
	unsigned int m5 : 2;
	unsigned int m6 : 2;
	unsigned int m7 : 2;
	unsigned int m8 : 2;
	unsigned int m9 : 2;
	unsigned int m10 : 2;
	unsigned int m11 : 2;
	unsigned int m12 : 2;
	unsigned int m13 : 2;
	unsigned int m14 : 2;
	unsigned int m15 : 2;
} tVIF_MASK;

typedef struct {
	unsigned int immediate : 16;
	unsigned int num : 8;
	unsigned int CMD : 8;
} tVIF_CODE;

typedef struct {
	unsigned int ITOPS : 10;
	unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct {
	unsigned int ITOP : 10;
	unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct {
	unsigned int R0;
} tVIF_R0;

typedef struct {
	unsigned int R1;
} tVIF_R1;

typedef struct {
	unsigned int R2;
} tVIF_R2;

typedef struct {
	unsigned int R3;
} tVIF_R3;

typedef struct {
	unsigned int C0;
} tVIF_C0;

typedef struct {
	unsigned int C1;
} tVIF_C1;

typedef struct {
	unsigned int C2;
} tVIF_C2;

typedef struct {
	unsigned int C3;
} tVIF_C3;

typedef struct {
	unsigned int VPS : 2;
	unsigned int VEW : 1;
	unsigned int VGW : 1;
	unsigned int p0 : 2;
	unsigned int MRK : 1;
	unsigned int DBF : 1;
	unsigned int VSS : 1;
	unsigned int VFS : 1;
	unsigned int VIS : 1;
	unsigned int INT : 1;
	unsigned int ERO : 1;
	unsigned int ER1 : 1;
	unsigned int p1 : 9;
	unsigned int FDR : 1;
	unsigned int FQC : 5;
	unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct {
	unsigned int RST : 1;
	unsigned int FBK : 1;
	unsigned int STP : 1;
	unsigned int STC : 1;
	unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct {
	unsigned int MII : 1;
	unsigned int ME0 : 1;
	unsigned int ME1 : 1;
	unsigned int p0 : 29;
} tVIF1_ERR;

typedef struct {
	unsigned int num : 8;
	unsigned int p0 : 24;
} tVIF1_NUM;

typedef struct {
	unsigned int BASE : 10;
	unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct {
	unsigned int OFFSET : 10;
	unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct {
	unsigned int TOPS : 10;
	unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct {
	unsigned int TOP : 10;
	unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct {
	unsigned int DIR : 1;
	unsigned int p0 : 1;
	unsigned int MOD : 2;
	unsigned int ASP : 2;
	unsigned int TTE : 1;
	unsigned int TIE : 1;
	unsigned int STR : 1;
	unsigned int p1 : 7;
	unsigned int TAG : 16;
} tD_CHCR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_MADR;

typedef struct {
	unsigned int QWC : 16;
	unsigned int p0 : 16;
} tD_QWC;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_TADR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_ASR0;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_ASR1;

typedef struct {
	unsigned int ADDR : 14;
	unsigned int p0 : 18;
} tD_SADR;

typedef struct {
	unsigned int DMAE : 1;
	unsigned int RELE : 1;
	unsigned int MFD : 2;
	unsigned int STS : 2;
	unsigned int STD : 2;
	unsigned int RCYC : 3;
	unsigned int p0 : 21;
} tD_CTRL;

typedef struct {
	unsigned int CIS0 : 1;
	unsigned int CIS1 : 1;
	unsigned int CIS2 : 1;
	unsigned int CIS3 : 1;
	unsigned int CIS4 : 1;
	unsigned int CIS5 : 1;
	unsigned int CIS6 : 1;
	unsigned int CIS7 : 1;
	unsigned int CIS8 : 1;
	unsigned int CIS9 : 1;
	unsigned int p0 : 3;
	unsigned int SIS : 1;
	unsigned int MEIS : 1;
	unsigned int BEIS : 1;
	unsigned int CIM0 : 1;
	unsigned int CIM1 : 1;
	unsigned int CIM2 : 1;
	unsigned int CIM3 : 1;
	unsigned int CIM4 : 1;
	unsigned int CIM5 : 1;
	unsigned int CIM6 : 1;
	unsigned int CIM7 : 1;
	unsigned int CIM8 : 1;
	unsigned int CIM9 : 1;
	unsigned int p1 : 3;
	unsigned int SIM : 1;
	unsigned int MEIM : 1;
	unsigned int p2 : 1;
} tD_STAT;

typedef struct {
	unsigned int CPC0 : 1;
	unsigned int CPC1 : 1;
	unsigned int CPC2 : 1;
	unsigned int CPC3 : 1;
	unsigned int CPC4 : 1;
	unsigned int CPC5 : 1;
	unsigned int CPC6 : 1;
	unsigned int CPC7 : 1;
	unsigned int CPC8 : 1;
	unsigned int CPC9 : 1;
	unsigned int p0 : 6;
	unsigned int CDE0 : 1;
	unsigned int CDE1 : 1;
	unsigned int CDE2 : 1;
	unsigned int CDE3 : 1;
	unsigned int CDE4 : 1;
	unsigned int CDE5 : 1;
	unsigned int CDE6 : 1;
	unsigned int CDE7 : 1;
	unsigned int CDE8 : 1;
	unsigned int CDE9 : 1;
	unsigned int p1 : 5;
	unsigned int PCE : 1;
} tD_PCR;

typedef struct {
	unsigned int SQWC : 8;
	unsigned int p0 : 8;
	unsigned int TQWC : 8;
	unsigned int p1 : 8;
} tD_SQWC;

typedef struct {
	unsigned int RMSK : 31;
	unsigned int p0 : 1;
} tD_RBSR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int p0 : 1;
} tD_RBOR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int p0 : 1;
} tD_STADR;

typedef struct {
	unsigned int p0 : 16;
	unsigned int CPND : 1;
	unsigned int p1 : 15;
} tD_ENABLER;

typedef struct {
	unsigned int p0 : 16;
	unsigned int CPND : 1;
	unsigned int p1 : 15;
} tD_ENABLEW;

typedef struct {
	unsigned int EN1 : 1;
	unsigned int EN2 : 1;
	unsigned int CRTMD : 3;
	unsigned int MMOD : 1;
	unsigned int AMOD : 1;
	unsigned int SLBG : 1;
	unsigned int ALP : 8;
	unsigned int p0 : 16;
	unsigned int p1;
} tGS_PMODE;

typedef struct {
	unsigned int INT : 1;
	unsigned int FFMD : 1;
	unsigned int DPMS : 2;
	unsigned int p0 : 28;
	unsigned int p1;
} tGS_SMODE2;

typedef struct {
	unsigned int FBP : 9;
	unsigned int FBW : 6;
	unsigned int PSM : 5;
	unsigned int p0 : 12;
	unsigned int DBX : 11;
	unsigned int DBY : 11;
	unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct {
	unsigned int DX : 12;
	unsigned int DY : 11;
	unsigned int MAGH : 4;
	unsigned int MAGV : 2;
	unsigned int p0 : 3;
	unsigned int DW : 12;
	unsigned int DH : 11;
	unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct {
	unsigned int FBP : 9;
	unsigned int FBW : 6;
	unsigned int PSM : 5;
	unsigned int p0 : 12;
	unsigned int DBX : 11;
	unsigned int DBY : 11;
	unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct {
	unsigned int DX : 12;
	unsigned int DY : 11;
	unsigned int MAGH : 4;
	unsigned int MAGV : 2;
	unsigned int p0 : 3;
	unsigned int DW : 12;
	unsigned int DH : 11;
	unsigned int p1 : 9;
} tGS_DISPLAY2;

typedef struct {
	unsigned int EXBP : 14;
	unsigned int EXBW : 6;
	unsigned int FBIN : 2;
	unsigned int WFFMD : 1;
	unsigned int EMODA : 2;
	unsigned int EMODC : 2;
	unsigned int p0 : 5;
	unsigned int WDX : 11;
	unsigned int WDY : 11;
	unsigned int p1 : 10;
} tGS_EXTBUF;

typedef struct {
	unsigned int SX : 12;
	unsigned int SY : 11;
	unsigned int SMPH : 4;
	unsigned int SMPV : 2;
	unsigned int p0 : 3;
	unsigned int WW : 12;
	unsigned int WH : 11;
	unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct {
	unsigned int WRITE : 1;
	unsigned int p0 : 31;
	unsigned int p1;
} tGS_EXTWRITE;

typedef struct {
	unsigned int R : 8;
	unsigned int G : 8;
	unsigned int B : 8;
	unsigned int p0 : 8;
	unsigned int p1;
} tGS_BGCOLOR;

typedef struct {
	unsigned int SIGNAL : 1;
	unsigned int FINISH : 1;
	unsigned int HSINT : 1;
	unsigned int VSINT : 1;
	unsigned int EDWINT : 1;
	unsigned int p0 : 3;
	unsigned int FLUSH : 1;
	unsigned int RESET : 1;
	unsigned int p1 : 2;
	unsigned int NFIELD : 1;
	unsigned int FIELD : 1;
	unsigned int FIFO : 2;
	unsigned int REV : 8;
	unsigned int ID : 8;
	unsigned int p2;
} tGS_CSR;

typedef struct {
	unsigned int p0 : 8;
	unsigned int SIGMSK : 1;
	unsigned int FINISHMSK : 1;
	unsigned int HSMSK : 1;
	unsigned int VSMSK : 1;
	unsigned int EDWMSK : 1;
	unsigned int p1 : 19;
	unsigned int p2;
} tGS_IMR;

typedef struct {
	unsigned int DIR : 1;
	unsigned int p0 : 31;
	unsigned int p1;
} tGS_BUSDIR;

typedef struct {
	unsigned int SIGID;
	unsigned int LBLID;
} tGS_SIGLBLID;

struct _sceGifPackRgbaq {
	u_int R;
	u_int G;
	u_int B;
	u_int A;
};

typedef _sceGifPackRgbaq sceGifPackRgbaq;

struct _sceGifPackAd {
	u_long DATA;
	u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

struct _sceGifPackSt {
	float S;
	float T;
	float Q;
	u_int pad96;
};

typedef _sceGifPackSt sceGifPackSt;

struct _sceGifPackUv {
	int U;
	int V;
	long int pad64;
};

typedef _sceGifPackUv sceGifPackUv;

struct _sceGifPackXyzf {
	int X;
	int Y;
	u_int Z;
	u_int F : 12;
	u_int pad108 : 3;
	u_int ADC : 1;
	u_int pad112 : 16;
};

typedef _sceGifPackXyzf sceGifPackXyzf;

struct _sceGifPackXyz {
	int X;
	int Y;
	u_int Z;
	u_int pad96 : 15;
	u_int ADC : 1;
	u_int pad112 : 16;
};

typedef _sceGifPackXyz sceGifPackXyz;

struct _sceGifPackFog {
	unsigned int pad[3];
	u_int F;
};

typedef _sceGifPackFog sceGifPackFog;

struct _sceGifPackNop {
	long unsigned int pad[2];
};

typedef _sceGifPackNop sceGifPackNop;

typedef struct {
	long unsigned int A : 2;
	long unsigned int B : 2;
	long unsigned int C : 2;
	long unsigned int D : 2;
	long unsigned int pad8 : 24;
	long unsigned int FIX : 8;
	long unsigned int pad40 : 24;
} sceGsAlpha;

typedef struct {
	long unsigned int SBP : 14;
	long unsigned int pad14 : 2;
	long unsigned int SBW : 6;
	long unsigned int pad22 : 2;
	long unsigned int SPSM : 6;
	long unsigned int pad30 : 2;
	long unsigned int DBP : 14;
	long unsigned int pad46 : 2;
	long unsigned int DBW : 6;
	long unsigned int pad54 : 2;
	long unsigned int DPSM : 6;
	long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct {
	long unsigned int WMS : 2;
	long unsigned int WMT : 2;
	long unsigned int MINU : 10;
	long unsigned int MAXU : 10;
	long unsigned int MINV : 10;
	long unsigned int MAXV : 10;
	long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct {
	long unsigned int CLAMP : 1;
	long unsigned int pad01 : 63;
} sceGsColclamp;

typedef struct {
	long unsigned int DIMX00 : 3;
	long unsigned int pad00 : 1;
	long unsigned int DIMX01 : 3;
	long unsigned int pad01 : 1;
	long unsigned int DIMX02 : 3;
	long unsigned int pad02 : 1;
	long unsigned int DIMX03 : 3;
	long unsigned int pad03 : 1;
	long unsigned int DIMX10 : 3;
	long unsigned int pad10 : 1;
	long unsigned int DIMX11 : 3;
	long unsigned int pad11 : 1;
	long unsigned int DIMX12 : 3;
	long unsigned int pad12 : 1;
	long unsigned int DIMX13 : 3;
	long unsigned int pad13 : 1;
	long unsigned int DIMX20 : 3;
	long unsigned int pad20 : 1;
	long unsigned int DIMX21 : 3;
	long unsigned int pad21 : 1;
	long unsigned int DIMX22 : 3;
	long unsigned int pad22 : 1;
	long unsigned int DIMX23 : 3;
	long unsigned int pad23 : 1;
	long unsigned int DIMX30 : 3;
	long unsigned int pad30 : 1;
	long unsigned int DIMX31 : 3;
	long unsigned int pad31 : 1;
	long unsigned int DIMX32 : 3;
	long unsigned int pad32 : 1;
	long unsigned int DIMX33 : 3;
	long unsigned int pad33 : 1;
} sceGsDimx;

typedef struct {
	long unsigned int DTHE : 1;
	long unsigned int pad01 : 63;
} sceGsDthe;

typedef struct {
	long unsigned int FBA : 1;
	long unsigned int pad01 : 63;
} sceGsFba;

typedef struct {
	long unsigned int pad00;
} sceGsFinish;

typedef struct {
	long unsigned int pad00 : 56;
	long unsigned int F : 8;
} sceGsFog;

typedef struct {
	long unsigned int FCR : 8;
	long unsigned int FCG : 8;
	long unsigned int FCB : 8;
	long unsigned int pad24 : 40;
} sceGsFogcol;

typedef struct {
	long unsigned int FBP : 9;
	long unsigned int pad09 : 7;
	long unsigned int FBW : 6;
	long unsigned int pad22 : 2;
	long unsigned int PSM : 6;
	long unsigned int pad30 : 2;
	long unsigned int FBMSK : 32;
} sceGsFrame;

typedef struct {
	long unsigned int WDATA;
} sceGsHwreg;

typedef struct {
	u_int ID;
	u_int IDMSK;
} sceGsLabel;

typedef struct {
	long unsigned int TBP1 : 14;
	long unsigned int TBW1 : 6;
	long unsigned int TBP2 : 14;
	long unsigned int TBW2 : 6;
	long unsigned int TBP3 : 14;
	long unsigned int TBW3 : 6;
	long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct {
	long unsigned int TBP4 : 14;
	long unsigned int TBW4 : 6;
	long unsigned int TBP5 : 14;
	long unsigned int TBW5 : 6;
	long unsigned int TBP6 : 14;
	long unsigned int TBW6 : 6;
	long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct {
	long unsigned int PABE : 1;
	long unsigned int pad01 : 63;
} sceGsPabe;

typedef struct {
	long unsigned int PRIM : 3;
	long unsigned int IIP : 1;
	long unsigned int TME : 1;
	long unsigned int FGE : 1;
	long unsigned int ABE : 1;
	long unsigned int AA1 : 1;
	long unsigned int FST : 1;
	long unsigned int CTXT : 1;
	long unsigned int FIX : 1;
	long unsigned int pad11 : 53;
} sceGsPrim;

typedef struct {
	long unsigned int pad00 : 3;
	long unsigned int IIP : 1;
	long unsigned int TME : 1;
	long unsigned int FGE : 1;
	long unsigned int ABE : 1;
	long unsigned int AA1 : 1;
	long unsigned int FST : 1;
	long unsigned int CTXT : 1;
	long unsigned int FIX : 1;
	long unsigned int pad11 : 53;
} sceGsPrmode;

typedef struct {
	long unsigned int AC : 1;
	long unsigned int pad01 : 63;
} sceGsPrmodecont;

typedef struct {
	u_int R : 8;
	u_int G : 8;
	u_int B : 8;
	u_int A : 8;
	float Q;
} sceGsRgbaq;

typedef struct {
	long unsigned int MSK : 2;
	long unsigned int pad02 : 62;
} sceGsScanmsk;

typedef struct {
	long unsigned int SCAX0 : 11;
	long unsigned int pad11 : 5;
	long unsigned int SCAX1 : 11;
	long unsigned int pad27 : 5;
	long unsigned int SCAY0 : 11;
	long unsigned int pad43 : 5;
	long unsigned int SCAY1 : 11;
	long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct {
	u_int ID;
	u_int IDMSK;
} sceGsSignal;

typedef struct {
	float S;
	float T;
} sceGsSt;

typedef struct {
	long unsigned int ATE : 1;
	long unsigned int ATST : 3;
	long unsigned int AREF : 8;
	long unsigned int AFAIL : 2;
	long unsigned int DATE : 1;
	long unsigned int DATM : 1;
	long unsigned int ZTE : 1;
	long unsigned int ZTST : 2;
	long unsigned int pad19 : 45;
} sceGsTest;

typedef struct {
	long unsigned int pad00 : 20;
	long unsigned int PSM : 6;
	long unsigned int pad26 : 11;
	long unsigned int CBP : 14;
	long unsigned int CPSM : 4;
	long unsigned int CSM : 1;
	long unsigned int CSA : 5;
	long unsigned int CLD : 3;
} sceGsTex2;

typedef struct {
	long unsigned int TA0 : 8;
	long unsigned int pad08 : 7;
	long unsigned int AEM : 1;
	long unsigned int pad16 : 16;
	long unsigned int TA1 : 8;
	long unsigned int pad40 : 24;
} sceGsTexa;

typedef struct {
	long unsigned int CBW : 6;
	long unsigned int COU : 6;
	long unsigned int COV : 10;
	long unsigned int pad22 : 42;
} sceGsTexclut;

typedef struct {
	long unsigned int pad00;
} sceGsTexflush;

typedef struct {
	long unsigned int XDR : 2;
	long unsigned int pad02 : 62;
} sceGsTrxdir;

typedef struct {
	long unsigned int SSAX : 11;
	long unsigned int pad11 : 5;
	long unsigned int SSAY : 11;
	long unsigned int pad27 : 5;
	long unsigned int DSAX : 11;
	long unsigned int pad43 : 5;
	long unsigned int DSAY : 11;
	long unsigned int DIR : 2;
	long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct {
	long unsigned int RRW : 12;
	long unsigned int pad12 : 20;
	long unsigned int RRH : 12;
	long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct {
	long unsigned int U : 14;
	long unsigned int pad14 : 2;
	long unsigned int V : 14;
	long unsigned int pad30 : 34;
} sceGsUv;

typedef struct {
	long unsigned int OFX : 16;
	long unsigned int pad16 : 16;
	long unsigned int OFY : 16;
	long unsigned int pad48 : 16;
} sceGsXyoffset;

typedef struct {
	long unsigned int X : 16;
	long unsigned int Y : 16;
	long unsigned int Z : 32;
} sceGsXyz;

typedef struct {
	long unsigned int X : 16;
	long unsigned int Y : 16;
	long unsigned int Z : 24;
	long unsigned int F : 8;
} sceGsXyzf;

typedef struct {
	long unsigned int ZBP : 9;
	long unsigned int pad09 : 15;
	long unsigned int PSM : 4;
	long unsigned int pad28 : 4;
	long unsigned int ZMSK : 1;
	long unsigned int pad33 : 31;
} sceGsZbuf;

typedef struct {
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

typedef struct {
	sceGsTexflush texflush;
	long int texflushaddr;
	sceGsTex1 tex11;
	long int tex11addr;
	sceGsTex0 tex01;
	long int tex01addr;
	sceGsClamp clamp1;
	long int clamp1addr;
} sceGsTexEnv;

typedef struct {
	sceGsTexflush texflush;
	long int texflushaddr;
	sceGsTex1 tex12;
	long int tex12addr;
	sceGsTex0 tex02;
	long int tex02addr;
	sceGsClamp clamp2;
	long int clamp2addr;
} sceGsTexEnv2;

typedef struct {
	sceGsAlpha alpha1;
	long int alpha1addr;
	sceGsPabe pabe;
	long int pabeaddr;
	sceGsTexa texa;
	long int texaaddr;
	sceGsFba fba1;
	long int fba1addr;
} sceGsAlphaEnv;

typedef struct {
	sceGsAlpha alpha2;
	long int alpha2addr;
	sceGsPabe pabe;
	long int pabeaddr;
	sceGsTexa texa;
	long int texaaddr;
	sceGsFba fba2;
	long int fba2addr;
} sceGsAlphaEnv2;

typedef struct {
	sceGifTag giftag0;
	sceGsBitbltbuf bitbltbuf;
	long int bitbltbufaddr;
	sceGsTrxpos trxpos;
	long int trxposaddr;
	sceGsTrxreg trxreg;
	long int trxregaddr;
	sceGsTrxdir trxdir;
	long int trxdiraddr;
	sceGifTag giftag1;
} sceGsLoadImage;

typedef struct {
	unsigned int vifcode[4];
	sceGifTag giftag;
	sceGsBitbltbuf bitbltbuf;
	long int bitbltbufaddr;
	sceGsTrxpos trxpos;
	long int trxposaddr;
	sceGsTrxreg trxreg;
	long int trxregaddr;
	sceGsFinish finish;
	long int finishaddr;
	sceGsTrxdir trxdir;
	long int trxdiraddr;
} sceGsStoreImage;

typedef struct {
	short int sceGsInterMode;
	short int sceGsOutMode;
	short int sceGsFFMode;
	short int sceGsVersion;
	int (*sceGsVSCfunc)(/* parameters unknown */);
	int sceGsVSCid;
} sceGsGParam;

struct EVramEntry {
	static TGrowPool<EVramEntry> pool;
	u32 flags;
	u32 address;
	u32 size;
	int nLocks;
	FVramDiscardCallback pfnDiscardCallback;
	u32 callbackParam;
	EVramEntry *pOrderedLast;
	EVramEntry *pOrderedNext;
	EVramEntry *pMultiLast;
	EVramEntry *pMultiNext;
	
	EVramEntry& operator=();
	EVramEntry();
	EVramEntry();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct TLinkedList<EVramEntry,24,28> {
protected:
	EVramEntry *m_pHead;
	EVramEntry *m_pTail;
	
public:
	TLinkedList<EVramEntry,24,28>& operator=();
	TLinkedList();
	TLinkedList();
	static EVramEntry*& Last(/* parameters unknown */);
	static EVramEntry*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EVramEntry* Head();
	EVramEntry* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct TLinkedList<EVramEntry,32,36> {
protected:
	EVramEntry *m_pHead;
	EVramEntry *m_pTail;
	
public:
	TLinkedList<EVramEntry,32,36>& operator=();
	TLinkedList();
	TLinkedList();
	static EVramEntry*& Last(/* parameters unknown */);
	static EVramEntry*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EVramEntry* Head();
	EVramEntry* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct _sceDmaTag {
	u_short qwc;
	u_char mark;
	u_char id;
	_sceDmaTag *next;
	unsigned int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct {
	u_char sts;
	u_char std;
	u_char mfd;
	u_char rcycle;
	u_short express;
	u_short notify;
	u_short sqwc;
	u_short tqwc;
	void *rbadr;
	u_int rbmsk;
} sceDmaEnv;

typedef struct {
	tD_CHCR chcr;
	unsigned int p0[3];
	void *madr;
	unsigned int p1[3];
	u_int qwc;
	unsigned int p2[3];
	sceDmaTag *tadr;
	unsigned int p3[3];
	void *as0;
	unsigned int p4[3];
	void *as1;
	unsigned int p5[3];
	unsigned int p6[4];
	unsigned int p7[4];
	void *sadr;
	unsigned int p8[3];
} sceDmaChan;

typedef struct {
	u_int *pCurrent;
	u_long128 *pBase;
	u_long128 *pDmaTag;
	u_int *pVifCode;
	u_int numlen;
	u_int pad11;
	u_int pad12;
	u_int pad13;
} sceVif0Packet;

typedef struct {
	u_int *pCurrent;
	u_long128 *pBase;
	u_long128 *pDmaTag;
	u_int *pVifCode;
	u_int numlen;
	u_long *pGifTag;
	u_int pad12;
	u_int pad13;
} sceVif1Packet;

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};

enum reg_class {
	NO_REGS = 0,
	M16_NA_REGS = 1,
	M16_REGS = 2,
	T_REG = 3,
	M16_T_REGS = 4,
	GR_REGS = 5,
	FP_REGS = 6,
	HI_REG = 7,
	LO_REG = 8,
	HILO_REG = 9,
	MD_REGS = 10,
	HI_AND_GR_REGS = 11,
	LO_AND_GR_REGS = 12,
	HILO_AND_GR_REGS = 13,
	HI1_REG = 14,
	LO1_REG = 15,
	HILO1_REG = 16,
	MD1_REGS = 17,
	HI1_AND_GR_REGS = 18,
	LO1_AND_GR_REGS = 19,
	HILO1_AND_GR_REGS = 20,
	HI01_REG = 21,
	LO01_REG = 22,
	HILO01_REG = 23,
	MD01_REGS = 24,
	HI01_AND_GR_REGS = 25,
	LO01_AND_GR_REGS = 26,
	HILO01_AND_GR_REGS = 27,
	ST_REGS = 28,
	ALL_REGS = 29,
	LIM_REG_CLASSES = 30
};

struct mips_frame_info {
	long int total_size;
	long int var_size;
	long int args_size;
	long int extra_size;
	int gp_reg_size;
	int fp_reg_size;
	long int mask;
	long int fmask;
	long int gp_save_offset;
	long int fp_save_offset;
	long int gp_sp_offset;
	long int fp_sp_offset;
	int initialized;
	int num_gp;
	int num_fp;
	long int insns_len;
};

struct mips_args {
	int gp_reg_found;
	int arg_number;
	int arg_words;
	int fp_arg_words;
	int last_arg_fp;
	int fp_code;
	int num_adjusts;
	rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

enum machine_mode {
	VOIDmode = 0,
	PQImode = 1,
	QImode = 2,
	PHImode = 3,
	HImode = 4,
	PSImode = 5,
	SImode = 6,
	PDImode = 7,
	DImode = 8,
	TImode = 9,
	OImode = 10,
	QFmode = 11,
	HFmode = 12,
	TQFmode = 13,
	SFmode = 14,
	DFmode = 15,
	XFmode = 16,
	TFmode = 17,
	QCmode = 18,
	HCmode = 19,
	SCmode = 20,
	DCmode = 21,
	XCmode = 22,
	TCmode = 23,
	CQImode = 24,
	CHImode = 25,
	CSImode = 26,
	CDImode = 27,
	CTImode = 28,
	COImode = 29,
	BLKmode = 30,
	CCmode = 31,
	MAX_MACHINE_MODE = 32
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MAX_MODE_CLASS = 7
};

typedef unsigned char UQItype;
typedef long int word_type;

struct DIstruct {
	SItype low;
	SItype high;
};

typedef union {
	DIstruct s;
	DItype ll;
} DIunion;

typedef short int HItype;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;

typedef int __gthread_mutex_t;

enum SndType {
	kSndTypeUnknown = 0,
	kSndTypeDigital = 1,
	kSndTypeDigitalStream = 2,
	kSndTypeMIDISeq = 3,
	kSndTypeMIDIOneShot = 4,
	kSndTypeBank = 5,
	kSndTypeCOUNT = 6
};

enum SndStreamingType {
	kSndStreamingTypeNo = 0,
	kSndStreamingTypeYes = 1,
	kSndStreamingTypeAuto = 2
};

enum SndDup {
	kSndDupDefault = 0,
	kSndDupInterrupt = 1,
	kSndDupContinue = 2,
	kSndDupOverlap = 3
};

enum SndStat {
	kSndStatNone = 0,
	kSndStatPlaying = 1,
	kSndStatDataLost = 2,
	kSndStatNotReg = 3,
	kSndStatNoSlot = 4,
	kSndStatNotInited = 5,
	kSndStatUnknown = 6
};

enum SndPriority {
	kSndPriorityDefault = 1,
	kSndPriorityLow = 1,
	kSndPriorityHigh = 10
};

struct cAudioScreenCoord {
	int mX;
	int mY;
};

enum GameSPL {
	kSplNormal = 0,
	kSplTV = 1,
	kSplVox = 2,
	kSplStereo = 3
};

enum EventId {
	kSndobPlay = 1,
	kSndobStop = 2,
	kSndobKill = 3,
	kSndobUpdate = 4,
	kSndobSetVolume = 5,
	kSndobSetPitch = 6,
	kSndobSetPan = 7,
	kSndobSetPosition = 8,
	kSndobSetFxType = 9,
	kSndobSetFxLevel = 10,
	kSndobPause = 11,
	kSndobUnpause = 12,
	kSndobLoad = 13,
	kSndobUnload = 14,
	kSndobCache = 15,
	kSndobUncache = 16,
	kSndobSetRegister = 17,
	kSndobFade = 18,
	kSndobCancelNote = 19,
	kKillAll = 20,
	kPause = 21,
	kUnpause = 22,
	kKillInstance = 23,
	kDShowMp3Callback = 24,
	kSetAppActive = 25,
	kDShowMp3Shutdown = 26,
	kSetReceiverChannel = 30,
	kUpdateSourceVolPan = 32,
	kViewChange = 33,
	kSetSoundEnabled = 34,
	kSetMusicEnabled = 35,
	kSetGameMode = 36,
	kSetSfxVolume = 37,
	kSetMusicVolume = 38,
	kSetVoxVolume = 39,
	kGetSfxVolume = 40,
	kGetMusicVolume = 41,
	kGetVoxVolume = 42,
	kPlayPiano = 43,
	kDebugEventsOn = 44,
	kDebugEventsOff = 45,
	kDebugSamplesOn = 46,
	kDebugSamplesOff = 47,
	kDebugTracksOn = 48,
	kDebugTracksOff = 49,
	kCheatSoundGood = 50,
	kCheatSoundBad = 51,
	kTestStart = 101,
	kTestStop = 102,
	kTestPause = 103,
	kTestUnpause = 104
};

// warning: multiple differing types with the same name (enum constant not equal)
enum ErrorCode {
	kSuccess = 0,
	kErrorNotInitialized = 1
};

struct binary_function<const int,const int,bool> {
};

struct NamedEvent {
	EventMapping *event;
};

struct VECTOR<short unsigned int> {
private:
	SndObj *pData;
	
public:
	VECTOR<short unsigned int>& operator=();
	VECTOR();
	VECTOR();
	int size();
	SndObj& operator[]();
	SndObj& operator[]();
	SndObj* begin();
	SndObj* end();
	SndObj* begin();
	SndObj* end();
};

enum TrackCmd {
	kTrackCmdInvalid = 0,
	kTrackCmdNote = 1,
	kTrackCmdNoteOn = 2,
	kTrackCmdNoteOff = 3,
	kTrackCmdLoadb = 4,
	kTrackCmdLoadl = 5,
	kTrackCmdSet = 6,
	kTrackCmdCall = 7,
	kTrackCmdReturn = 8,
	kTrackCmdWait = 9,
	kTrackCmdWaitSamp = 11,
	kTrackCmdEnd = 12,
	kTrackCmdJump = 13,
	kTrackCmdTest = 14,
	kTrackCmdNop = 15,
	kTrackCmdAdd = 16,
	kTrackCmdSub = 17,
	kTrackCmdDiv = 18,
	kTrackCmdMul = 19,
	kTrackCmdCmp = 20,
	kTrackCmdLess = 21,
	kTrackCmdGreater = 22,
	kTrackCmdNot = 23,
	kTrackCmdRand = 24,
	kTrackCmdAbs = 25,
	kTrackCmdLimit = 26,
	kTrackCmdError = 27,
	kTrackCmdAssert = 28,
	kTrackCmdAddToGroup = 29,
	kTrackCmdRemoveFromGroup = 30,
	kTrackCmdGetVar = 31,
	kTrackCmdLoop = 32,
	kTrackCmdSetLoop = 33,
	kTrackCmdCallback = 34,
	kTrackCmdSmartChoose = 39,
	kTrackCmdAnd = 40,
	kTrackCmdNand = 41,
	kTrackCmdOr = 42,
	kTrackCmdNor = 43,
	kTrackCmdXor = 44,
	kTrackCmdMin = 45,
	kTrackCmdMax = 46,
	kTrackCmdInc = 47,
	kTrackCmdDec = 48,
	kTrackCmdPrintReg = 49,
	kTrackCmdPlayTrack = 50,
	kTrackCmdKillTrack = 51,
	kTrackCmdPush = 52,
	kTrackCmdPush_mask = 53,
	kTrackCmdPush_vars = 54,
	kTrackCmdCall_mask = 55,
	kTrackCmdCall_push = 56,
	kTrackCmdPop = 57,
	kTrackCmdTest1 = 58,
	kTrackCmdTest2 = 59,
	kTrackCmdTest3 = 60,
	kTrackCmdTest4 = 61,
	kTrackCmdIfeq = 62,
	kTrackCmdIfne = 63,
	kTrackCmdIfgt = 64,
	kTrackCmdIflt = 65,
	kTrackCmdIfge = 66,
	kTrackCmdIfle = 67,
	kTrackCmdSmartSetList = 68,
	kTrackCmdSeqGroupKill = 69,
	kTrackCmdSeqGroupWait = 70,
	kTrackCmdSeqGroupReturn = 71,
	kTrackCmdGetSourceParm = 72,
	kTrackCmdSeqGroupTrackId = 73,
	kTrackCmdSetLocalLocal = 74,
	kTrackCmdSetLocalTarget = 75,
	kTrackCmdSetTargetLocal = 76,
	kTrackCmdWaitEq = 77,
	kTrackCmdWaitNe = 78,
	kTrackCmdWaitGt = 79,
	kTrackCmdWaitLt = 80,
	kTrackCmdWaitGe = 81,
	kTrackCmdWaitLe = 82,
	kTrackCmdLoadHitlist = 83,
	kTrackCmdLoadVoxHitlist = 84
};

typedef u32 TrackReg;

struct RegCmd {
	TrackCmd cmd;
	TrackReg reg1 : 8;
	TrackReg reg2 : 8;
	TrackReg reg3 : 8;
};

struct ValueCmd {
	TrackCmd cmd;
	s32 val : 16;
};

struct RegValCmd {
	TrackCmd cmd;
	TrackReg reg1 : 8;
	u32 val : 16;
};

struct VECTOR<snd::RegUnion> {
private:
	RegUnion *pData;
	
public:
	VECTOR<snd::RegUnion>& operator=();
	VECTOR();
	VECTOR();
	int size();
	RegUnion& operator[]();
	RegUnion& operator[]();
	RegUnion* begin();
	RegUnion* end();
	RegUnion* begin();
	RegUnion* end();
};

struct TrackData {
	Sint32 id;
	VECTOR<snd::RegUnion> trackData;
};

typedef ERQTable<snd::TrackData> TrackDataTable;

struct list<cSoundCacheHandle,__malloc_alloc_template<0> > {
protected:
	__list_node<cSoundCacheHandle> *node;
	unsigned int length;
	
	__list_node<cSoundCacheHandle>* get_node();
	void put_node();
public:
	list();
	__list_iterator<cSoundCacheHandle> begin();
	__list_const_iterator<cSoundCacheHandle> begin();
	__list_iterator<cSoundCacheHandle> end();
	__list_const_iterator<cSoundCacheHandle> end();
	reverse_bidirectional_iterator<__list_iterator<cSoundCacheHandle>,cSoundCacheHandle,cSoundCacheHandle &,int> rbegin();
	reverse_bidirectional_iterator<__list_const_iterator<cSoundCacheHandle>,cSoundCacheHandle,const cSoundCacheHandle &,int> rbegin();
	reverse_bidirectional_iterator<__list_iterator<cSoundCacheHandle>,cSoundCacheHandle,cSoundCacheHandle &,int> rend();
	reverse_bidirectional_iterator<__list_const_iterator<cSoundCacheHandle>,cSoundCacheHandle,const cSoundCacheHandle &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	cSoundCacheHandle& front();
	cSoundCacheHandle& front();
	cSoundCacheHandle& back();
	cSoundCacheHandle& back();
	void swap();
	__list_iterator<cSoundCacheHandle> insert();
	__list_iterator<cSoundCacheHandle> insert();
	void insert();
	void insert();
	void insert();
	void push_front();
	void push_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
	void pop_front();
	void pop_back();
	list();
	list();
	list();
	list();
	list();
	list(list<cSoundCacheHandle,__malloc_alloc_template<0> >*, int, void);
	list<cSoundCacheHandle,__malloc_alloc_template<0> >& operator=();
protected:
	void transfer();
public:
	void splice();
	void splice();
	void splice();
	void remove();
	void unique();
	void merge();
	void reverse();
	void sort();
};

struct __list_iterator<cSoundCacheHandle> {
	__list_node<cSoundCacheHandle> *node;
	
	__list_iterator<cSoundCacheHandle>& operator=();
	__list_iterator();
	__list_iterator();
	__list_iterator();
	bool operator==();
	bool operator!=();
	cSoundCacheHandle& operator*();
	__list_iterator<cSoundCacheHandle>& operator++();
	__list_iterator<cSoundCacheHandle> operator++();
	__list_iterator<cSoundCacheHandle>& operator--();
	__list_iterator<cSoundCacheHandle> operator--();
};

struct binary_function<int,int,bool> {
};

struct binary_function<const cSoundCacheHandle,const cSoundCacheHandle,bool> {
};

enum eArgsType {
	kArgsNormal = 0,
	kArgsVolPan = 1,
	kArgsIdVolPan = 2,
	kArgsXYZ = 3
};

enum eDuckingPri {
	kDuckPriAlways = 0,
	kDuckPriLow = 10,
	kDuckPriNormal = 20,
	kDuckPriHigh = 30,
	kDuckPriHigher = 40,
	kDuckPriEvenHigher = 50,
	kDuckPriNever = 100
};

typedef set<int,less<int>,__malloc_alloc_template<0> > tControlGroupTrackIdSet;

struct set<int,less<int>,__malloc_alloc_template<0> > {
private:
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > t;
	
public:
	set(set<int,less<int>,__malloc_alloc_template<0> >*, int, void);
	set();
	set();
	set();
	set();
	set();
	set();
	set();
	set<int,less<int>,__malloc_alloc_template<0> >& operator=();
	less<int> key_comp();
	less<int> value_comp();
	__rb_tree_const_iterator<int> begin();
	__rb_tree_const_iterator<int> end();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<int>,int,const int &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<int>,int,const int &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	pair<__rb_tree_const_iterator<int>,bool> insert();
	__rb_tree_const_iterator<int> insert();
	void insert();
	void insert();
	void erase();
	unsigned int erase();
	void erase();
	void clear();
	__rb_tree_const_iterator<int> find();
	unsigned int count();
	__rb_tree_const_iterator<int> lower_bound();
	__rb_tree_const_iterator<int> upper_bound();
	pair<__rb_tree_const_iterator<int>,__rb_tree_const_iterator<int> > equal_range();
};

struct cHitControlGroup : cSoundObject {
protected:
	Sint32 m_lControlGroupId;
	Sint32 m_lVolume;
	tControlGroupTrackIdSet m_TrackIdSet;
	
public:
	cHitControlGroup& operator=();
	cHitControlGroup(/* s1 17 */ Sint32 lControlGroupId);
	/* vtable[2] */ virtual cHitControlGroup(cHitControlGroup*, int, void);
	cHitControlGroup();
	Sint32 Volume();
	void AddTrack(/* -0x20(caller sp) */ Sint32 lSndobId);
	/* vtable[22] */ virtual bool Init();
	/* vtable[21] */ virtual bool Shutdown();
	/* vtable[17] */ virtual bool Play(/* a1 5 */ Sint32 lArg1, /* a2 6 */ Sint32 lArg2, /* a3 7 */ Sint32 lArg3);
	/* vtable[28] */ virtual bool Stop();
	/* vtable[29] */ virtual bool Kill();
	/* vtable[23] */ virtual bool SetVolume(/* a1 5 */ Sint32 lVolume);
	/* vtable[24] */ virtual bool SetPitch(/* a1 5 */ Sint32 lPitch);
	/* vtable[25] */ virtual bool SetPan(/* a1 5 */ Sint32 lPanPos);
	/* vtable[30] */ virtual bool SetFxType(/* a1 5 */ Sint32 lFxType);
	/* vtable[31] */ virtual bool SetFxLevel(/* a1 5 */ Sint32 lFxLevel);
	/* vtable[26] */ virtual bool Pause();
	/* vtable[27] */ virtual bool Unpause();
	/* vtable[32] */ virtual bool Load();
	/* vtable[33] */ virtual bool Unload();
	/* vtable[34] */ virtual bool Cache();
	/* vtable[35] */ virtual bool Uncache();
	/* vtable[11] */ virtual bool IsPlaying();
	/* vtable[12] */ virtual bool IsPaused();
	/* vtable[14] */ virtual bool SetRegister(/* a1 5 */ Sint32 lRegisterId, /* a2 6 */ Sint32 lValue, /* a3 7 */ bool bDeferred);
	/* vtable[15] */ virtual Sint32 RegisterVal(/* a1 5 */ Sint32 lRegisterId);
protected:
	cHitMan* HitMan();
	bool HasTrack(/* -0x30(caller sp) */ Sint32 lSndobId);
};

struct __rb_tree_const_iterator<int> : __rb_tree_base_iterator {
	__rb_tree_const_iterator<int>& operator=();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	Sint32& operator*();
	__rb_tree_const_iterator<int>& operator++();
	__rb_tree_const_iterator<int> operator++();
	__rb_tree_const_iterator<int>& operator--();
	__rb_tree_const_iterator<int> operator--();
};

struct __rb_tree_iterator<int> : __rb_tree_base_iterator {
	__rb_tree_iterator<int>& operator=();
	__rb_tree_iterator();
	__rb_tree_iterator();
	__rb_tree_iterator();
	Sint32& operator*();
	__rb_tree_iterator<int>& operator++();
	__rb_tree_iterator<int> operator++();
	__rb_tree_iterator<int>& operator--();
	__rb_tree_iterator<int> operator--();
};

struct __rb_tree_node<int> : __rb_tree_node_base {
	Sint32 value_field;
};

struct cSamplePatch : cSoundObject {
protected:
	Sint32 m_lResourceId;
	Sint32 m_lDefaultChannel;
	cSampleChannel *m_pDefaultChannel;
	Sint32 m_lLoadRefCount;
	Sint32 m_lCacheRefCount;
	bool m_bIsMusic;
	union {
	protected:
		u32 m_sampleID;
		u32 m_musicID;
	};
public:
	cIGZSnd *m_pSnd;
	
	cSamplePatch& operator=();
	cSamplePatch(/* s5 21 */ Sint32 lSndobId, /* s2 18 */ u32 sampleID, /* s1 17 */ u32 musicID, /* s4 20 */ bool bLoop);
	/* vtable[1] */ virtual void* _dyncastimpl(/* a1 5 */ SCID id);
	cSamplePatch();
	/* vtable[2] */ virtual cSamplePatch(cSamplePatch*, int, void);
	/* vtable[22] */ virtual bool Init();
	/* vtable[21] */ virtual bool Shutdown();
	/* vtable[36] */ virtual bool CreateSnd();
	/* vtable[37] */ virtual bool FreeSnd();
	/* vtable[17] */ virtual bool Play(/* a1 5 */ Sint32 lArg1, /* a2 6 */ Sint32 lArg2, /* a3 7 */ Sint32 lArg3);
	/* vtable[28] */ virtual bool Stop();
	/* vtable[29] */ virtual bool Kill();
	/* vtable[23] */ virtual bool SetVolume(/* a1 5 */ Sint32 lVolume);
	/* vtable[24] */ virtual bool SetPitch(/* a1 5 */ Sint32 lPitch);
	/* vtable[25] */ virtual bool SetPan(/* a1 5 */ Sint32 lPanPos);
	/* vtable[30] */ virtual bool SetFxType(/* a1 5 */ Sint32 lFxType);
	/* vtable[31] */ virtual bool SetFxLevel(/* a1 5 */ Sint32 lFxLevel);
	/* vtable[26] */ virtual bool Pause();
	/* vtable[27] */ virtual bool Unpause();
	/* vtable[11] */ virtual bool IsPlaying();
	/* vtable[32] */ virtual bool Load();
	/* vtable[33] */ virtual bool Unload();
	/* vtable[34] */ virtual bool Cache();
	/* vtable[35] */ virtual bool Uncache();
	/* vtable[38] */ virtual cSampleChannel* CreateChannel();
	/* vtable[39] */ virtual cIGZSnd* TempGetSnd();
protected:
	cIGZSndSys* GZSndSys();
	cHitMan* HitMan();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct cSampleChannel : cSoundObject {
protected:
	cSoundCacheHandle m_pPatch;
	cIGZSnd *m_pSnd;
	
public:
	cSampleChannel& operator=();
	cSampleChannel(/* s1 17 */ cSamplePatch *pPatch);
	cSampleChannel();
	/* vtable[2] */ virtual cSampleChannel(cSampleChannel*, int, void);
	/* vtable[22] */ virtual bool Init();
	/* vtable[21] */ virtual bool Shutdown();
	/* vtable[17] */ virtual bool Play(/* a1 5 */ Sint32 lArg1, /* a2 6 */ Sint32 lArg2, /* a3 7 */ Sint32 lArg3);
	/* vtable[11] */ virtual bool IsPlaying();
	/* vtable[28] */ virtual bool Stop();
	/* vtable[29] */ virtual bool Kill();
	/* vtable[23] */ virtual bool SetVolume(/* a1 5 */ Sint32 lVolume);
	/* vtable[24] */ virtual bool SetPitch(/* a1 5 */ Sint32 lPitch);
	/* vtable[25] */ virtual bool SetPan(/* s3 19 */ Sint32 lPanPos);
	/* vtable[30] */ virtual bool SetFxType(/* a1 5 */ Sint32 lFxType);
	/* vtable[31] */ virtual bool SetFxLevel(/* a1 5 */ Sint32 lFxLevel);
	/* vtable[26] */ virtual bool Pause();
	/* vtable[27] */ virtual bool Unpause();
	/* vtable[32] */ virtual bool Load();
	/* vtable[33] */ virtual bool Unload();
	/* vtable[34] */ virtual bool Cache();
	/* vtable[35] */ virtual bool Uncache();
	/* vtable[36] */ virtual bool NoteOn(/* a1 5 */ Sint32 lNoteNum);
	/* vtable[37] */ virtual bool NoteOff(/* a1 5 */ Sint32 lNoteNum);
	/* vtable[38] */ virtual bool SetPatch(/* s0 16 */ cSamplePatch *pPatch);
	/* vtable[15] */ virtual Sint32 RegisterVal(/* a1 5 */ Sint32 lRegisterId);
	/* vtable[12] */ virtual bool IsPaused();
protected:
	/* vtable[39] */ virtual cIGZSnd* Snd(/* a1 5 */ Sint32 lNoteNum);
};

struct cTrackPlayer : cSoundObject {
protected:
	cSoundCacheHandle m_pPatch;
	char *m_pPosition;
	cSoundCacheHandle m_pTrack;
	cSoundCacheHandle m_pTarget;
	cTrackAttrRegisterSet m_AttrRegisterSet;
	cRegisterSet m_VarRegisterSet;
	HitTimeVal m_lTimeNoteKill;
	HitTimeVal m_lTimeNextCommand;
	TrackDataReader m_tdrPlayPos;
	TrackDataReader m_tdrLoopPos;
	TrackDataReader m_tdrCurrentInstructionPos;
	cHitList *m_pHitList;
	bool m_bIsPlaying;
	Sint32 m_lPauseRefs;
	bool m_bCompareFlagEqual;
	bool m_bCompareFlagGreater;
	bool m_bCompareFlagLess;
	Sint32 m_lLastChooseValue;
public:
	bool m_bKillAfterFade;
private:
	cSampleChannel *m_pChannel;
	
public:
	cTrackPlayer& operator=();
	cTrackPlayer();
	cTrackPlayer();
	/* vtable[2] */ virtual cTrackPlayer(cTrackPlayer*, int, void);
	/* vtable[22] */ virtual bool Init();
	/* vtable[21] */ virtual bool Shutdown();
	/* vtable[9] */ virtual void HandleTimerCallback();
	/* vtable[14] */ virtual bool SetRegister(/* s0 16 */ Sint32 lRegisterId, /* s1 17 */ Sint32 lValue, /* s2 18 */ bool bDeferred);
	/* vtable[36] */ virtual bool SetLocalRegister(/* s3 19 */ Sint32 lRegisterId, /* s2 18 */ Sint32 lValue, /* s0 16 */ bool bDeferred);
	/* vtable[15] */ virtual Sint32 RegisterVal(/* s0 16 */ Sint32 lRegisterId);
	/* vtable[37] */ virtual Sint32 LocalRegisterVal(/* a1 5 */ Sint32 lRegisterId);
	/* vtable[17] */ virtual bool Play(/* a1 5 */ Sint32 lArg1, /* a2 6 */ Sint32 lArg2, /* a3 7 */ Sint32 lArg3);
	/* vtable[18] */ virtual bool PlayPause(/* fp 30 */ Sint32 lArg1, /* s7 23 */ Sint32 lArg2, /* -0xb0(caller sp) */ Sint32 lArg3);
	/* vtable[28] */ virtual bool Stop();
	/* vtable[29] */ virtual bool Kill();
	/* vtable[38] */ virtual bool CancelNote();
	/* vtable[39] */ virtual bool Update();
	/* vtable[40] */ virtual bool IsValid();
	/* vtable[11] */ virtual bool IsPlaying();
	/* vtable[12] */ virtual bool IsPaused();
	/* vtable[23] */ virtual bool SetVolume(/* a1 5 */ Sint32 lVolume);
	/* vtable[24] */ virtual bool SetPitch(/* a1 5 */ Sint32 lPitch);
	/* vtable[25] */ virtual bool SetPan(/* a1 5 */ Sint32 lPanPos);
	/* vtable[30] */ virtual bool SetFxType(/* a1 5 */ Sint32 lFxType);
	/* vtable[31] */ virtual bool SetFxLevel(/* a1 5 */ Sint32 lFxLevel);
	/* vtable[26] */ virtual bool Pause();
	/* vtable[27] */ virtual bool Unpause();
	/* vtable[32] */ virtual bool Load();
	/* vtable[33] */ virtual bool Unload();
	/* vtable[34] */ virtual bool Cache();
	/* vtable[35] */ virtual bool Uncache();
	/* vtable[41] */ virtual cSoundCacheHandle Track();
	/* vtable[42] */ virtual bool Step();
	/* vtable[43] */ virtual Sint32 HitListID();
	/* vtable[44] */ virtual Sint32 GetHitListForGender();
	bool UpdateVolPan();
protected:
	cHitMan* HitMan();
	cIGZSndSys* SndSys();
	cHitTimer* Timer();
	HitTimeVal Time();
	bool DoCommand();
	void SetCompareFlags(/* a1 5 */ Sint32 lDestValue, /* a2 6 */ Sint32 lSrcValue);
	bool NoteOn(/* a1 5 */ Sint32 lNoteNum);
	bool NoteOff(/* a1 5 */ Sint32 lNoteNum);
	bool UpdatePitch();
	bool SetPatch(/* s2 18 */ Sint32 lPatchId);
	RegUnion& ReadCommand();
	Sint32 CheckedRegId(/* a1 5 */ Sint32 lRegId);
	void Error();
	void Assert(/* a1 5 */ Sint32 lValue);
	bool SetTargetRegister();
	cSampleChannel* Channel(/* a1 5 */ Sint32 lNoteNum);
	TrackDataReader PlayPos();
	bool SetTrack(/* a1 5 */ int lTrackId);
};

struct cTrack : cTrackPlayer {
protected:
	cTrackAttrRegisterSet m_TrackDefRegisterSet;
	cSndobAttrRegisterSet m_TrackDefSndobRegisterSet;
	TrackData *m_pTrackData;
	Sint32 m_lControlGroupId;
	Sint32 m_lHitListId;
	
public:
	cTrack& operator=();
	cTrack(/* fp 30 */ Sint32 lSndobId, /* -0xb0(caller sp) */ Sint32 lVolume, /* s4 20 */ Sint32 lArgsType, /* s3 19 */ Sint32 lDuckPri, /* s5 21 */ Sint32 lControlGroupId, /* s2 18 */ Sint32 lSpl, /* s1 17 */ TrackData *pTrackData, /* 0x0(caller sp) */ Sint32 lPatchId, /* 0x8(caller sp) */ Sint32 lHitlistId);
	cTrack();
	/* vtable[2] */ virtual cTrack(cTrack*, int, void);
	/* vtable[22] */ virtual bool Init();
	/* vtable[21] */ virtual bool Shutdown();
	cTrackPlayer* TrackPlayer();
	TrackData& StartPos();
	cTrackAttrRegisterSet* TrackDefRegisterSet();
	cSndobAttrRegisterSet* TrackDefSndobRegisterSet();
	/* vtable[45] */ virtual Sint32 TrackDefRegisterVal(/* a1 5 */ Sint32 lRegisterId);
	/* vtable[16] */ virtual bool WantsViewChangeNotifications();
	/* vtable[46] */ virtual Sint32 ControlGroupId();
	/* vtable[43] */ virtual Sint32 HitListID();
	/* vtable[44] */ virtual Sint32 GetHitListForGender();
protected:
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct TFixedPool<cTrack,64> : EFixedPool {
protected:
	unsigned int m_buffer[13056];
	
public:
	TFixedPool<cTrack,64>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<cTrack,64>*, int, void);
	TFixedPool();
	cTrack* Alloc();
	void Free();
protected:
	void Free();
};

struct TFixedPool<cSamplePatch,64> : EFixedPool {
protected:
	unsigned int m_buffer[3584];
	
public:
	TFixedPool<cSamplePatch,64>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<cSamplePatch,64>*, int, void);
	TFixedPool();
	cSamplePatch* Alloc();
	void Free();
protected:
	void Free();
};

struct cSoundCache {
private:
	cTrack *m_vTracks[64];
	cSamplePatch *m_vPatches[64];
	int m_iTrackHead;
	int m_iSampleHead;
	TFixedPool<cTrack,64> m_trackPool;
	TFixedPool<cSamplePatch,64> m_samplePool;
	
public:
	cSoundCache& operator=();
	cSoundCache();
	cSoundCache();
	cSoundCache(cSoundCache*, int, void);
	cSoundObject* GetSoundObject(/* s1 17 */ Sint32 id);
	cSamplePatch* GetPatchObject(/* a3 7 */ Sint32 id);
	cTrack* GetTrackObject(/* a3 7 */ Sint32 id);
	bool IsInMemory(/* a1 5 */ Sint32 id);
	void Shutdown();
	void KillAll();
	void Pause();
	void Unpause();
	void CleanupIdleTracks();
private:
	cTrack* createTrack(/* a1 5 */ u32 id);
	cSamplePatch* createPatch(/* s2 18 */ u32 id);
	void onTrackDelete(/* a1 5 */ cTrack *pTrack);
	void onPatchDelete(/* a1 5 */ cSamplePatch *pPatch);
	void printTrackList();
};

struct cFreshPlayer {
	bool m_bIsInitted;
	Sint32 m_lRefCount;
	cFreshTimer *m_pFreshTimer;
	Sint32 m_lVol;
	Sint32 m_lEffectsLevel;
	cFreshScore *m_pScore;
	bool m_bIsPlaying;
	bool m_bIsManual;
	Sint32 m_lTempo;
	Sint32 m_lYPos;
	Sint32 m_lXPos;
	Sint32 m_lMsecLastSelectionAreaChange;
	Sint32 m_lZoom;
	Sint32 m_lNumCellsInSelectionArea;
	Sint32 m_lBeatNum;
	Sint32 m_lNextBeatNum;
	Sint32 m_lStartBeatNum;
	Sint32 m_lMSecSinceLastBeat;
	Sint32 m_lMinCellsPlaying;
	Sint32 m_lMaxCellsPlaying;
	Sint32 m_lMinCellsUpperLimit;
	Sint32 m_lSelectionAreaMaxXDistance;
	Sint32 m_lSelectionAreaMaxYDistance;
	Sint32 m_lLastCellKilledRow;
	Sint32 m_lLastCellKilledCol;
	Sint32 m_lLastCellStartedRow;
	Sint32 m_lLastCellStartedCol;
	cFreshCellPlayer *m_apCell[26][14];
	Sint32 m_lPlayPercent;
	Sint32 m_lStressLevel;
	Uint32 lTimeBase;
	bool m_bIsPaused;
	bool m_bIsFading;
	Sint32 m_lVolumeAsyncFadeStepValue;
	Sint32 m_lVolumeAsyncFadeEndingVolume;
	bool m_bKillAtEndOfFade;
	
	cFreshPlayer& operator=();
	cFreshPlayer();
	cFreshPlayer();
	cFreshPlayer(cFreshPlayer*, int, void);
	bool QueryInterface(/* a1 5 */ Sint32 riid, /* a2 6 */ void **ppvObject);
	Uint32 AddRef();
	Uint32 Release();
	bool Init(/* s1 17 */ cFreshTimer *pFreshTimer);
	bool Shutdown();
	void Update();
	bool Play();
	bool Play();
	bool IsPlaying();
	bool Stop();
	void StopFade();
	bool SetVolume(/* a1 5 */ Sint32 lVol);
	bool SetVolumeNoLock(/* a1 5 */ Sint32 lVol);
	bool FadeVolume(/* a1 5 */ Sint32 lMilliseconds, /* a2 6 */ Sint32 lEndingVolume, /* a3 7 */ bool bKill);
	bool SetTempo(/* a1 5 */ Sint32 lTempo);
	bool SetEffectsLevel();
	bool SetYPos(/* a1 5 */ Sint32 lIntensity);
	bool SetXPos(/* a1 5 */ Sint32 lAura);
	bool SetZoom(/* a1 5 */ Sint32 lZoom);
	bool SetPlayPercent(/* a1 5 */ Sint32 lPlayPercent);
	Sint32 GetYPos();
	Sint32 GetXPos();
	Sint32 GetZoom();
	bool SetManual(/* a1 5 */ bool bIsManual);
	bool SetSelectionAreaMaxDistances(/* a1 5 */ Sint32 lHeight, /* a2 6 */ Sint32 lWidth);
	bool GetSelectionAreaMaxDistances(/* a1 5 */ Sint32 &lHeight, /* a2 6 */ Sint32 &lWidth);
	void SetStressLevel(cFreshPlayer*, int, void);
	void SetPause(/* a1 5 */ bool bPause);
	bool CellIsInSelectionArea(/* a1 5 */ Sint32 lRow, /* s1 17 */ Sint32 lColumn);
	Sint32 GetRandCrit(/* a1 5 */ Sint32 lCellProb, /* a2 6 */ Sint32 lNumCellsInSelectionArea);
	bool StopNoLock();
	bool GetCellToAdd(/* -0xc0(caller sp) */ Sint32 &lRowNum, /* fp 30 */ Sint32 &lColumnNum, /* s7 23 */ Sint32 lFavorGroup);
	bool GetCellToSubtract(/* s2 18 */ Sint32 &lRowNum, /* s1 17 */ Sint32 &lColumnNum);
	void SubtractCell(/* a1 5 */ Sint32 lRow, /* a2 6 */ Sint32 lColumn);
	bool ToggleCell(/* a1 5 */ Sint32 lRow, /* a2 6 */ Sint32 lColumn);
	Sint32 ProbOfCellStarting(/* s3 19 */ Sint32 lRow, /* s2 18 */ Sint32 lColumn, /* s5 21 */ Sint32 lFavorGroup);
	Sint32 NumCellsBusy();
	Sint32 NumCellsDying();
	Sint32 NumCellsPlaying();
	bool ShowUsage();
	Sint32 GetMinCellsPlaying();
	Sint32 GetMaxCellsPlaying();
	Sint32 GetFirstSelectableRow();
	Sint32 GetLastSelectableRow();
	Sint32 GetFirstSelectableColumn();
	Sint32 GetLastSelectableColumn();
	void VolumeFadeTimerCallback();
	void ProcessVolumeFadeTimerCallback();
	bool ThereIsACellInSelectionAreaWaitingToDie();
	Sint32 BeatTime(/* a2 6 */ Sint32 lBeatNum);
	void UpdatePlayerInfo();
private:
	bool init(/* a1 5 */ cFreshScore *pScore, /* a2 6 */ cFreshTimer *pFreshTimer);
};

struct simple_alloc<__rb_tree_node<pair<const int,int> >,__malloc_alloc_template<0> > {
	simple_alloc<__rb_tree_node<pair<const int,int> >,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __rb_tree_node<pair<const int,int> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const int,int> >* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct pair<const int,int> {
	int first;
	int second;
};

struct __rb_tree_node<pair<const int,int> > : __rb_tree_node_base {
	pair<const int,int> value_field;
};

struct __rb_tree_iterator<pair<const int,int> > : __rb_tree_base_iterator {
	__rb_tree_iterator<pair<const int,int> >& operator=();
	__rb_tree_iterator();
	__rb_tree_iterator();
	__rb_tree_iterator();
	pair<const int,int>& operator*();
	__rb_tree_iterator<pair<const int,int> >& operator++();
	__rb_tree_iterator<pair<const int,int> > operator++();
	__rb_tree_iterator<pair<const int,int> >& operator--();
	__rb_tree_iterator<pair<const int,int> > operator--();
};

struct __list_node<cSoundCacheHandle> {
	void *next;
	void *prev;
	cSoundCacheHandle data;
};

struct unary_function<int,int> {
};

struct identity<int> : unary_function<int,int> {
	identity<int>& operator=();
	identity();
	identity();
	Sint32& operator()();
};

struct pair<__rb_tree_iterator<pair<const int,int> >,__rb_tree_iterator<pair<const int,int> > > {
	__rb_tree_iterator<pair<const int,int> > first;
	__rb_tree_iterator<pair<const int,int> > second;
};

struct unary_function<pair<const int,int>,const int> {
};

struct select1st<pair<const int,int> > : unary_function<pair<const int,int>,const int> {
	select1st<pair<const int,int> >& operator=();
	select1st();
	select1st();
	int& operator()();
};

struct vector<ASTNode,__malloc_alloc_template<0> > {
protected:
	ASTNode *start;
	ASTNode *finish;
	ASTNode *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	ASTNode* begin();
	ASTNode* begin();
	ASTNode* end();
	ASTNode* end();
	reverse_iterator<ASTNode *,ASTNode,ASTNode &,int> rbegin();
	reverse_iterator<const ASTNode *,ASTNode,const ASTNode &,int> rbegin();
	reverse_iterator<ASTNode *,ASTNode,ASTNode &,int> rend();
	reverse_iterator<const ASTNode *,ASTNode,const ASTNode &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	ASTNode& operator[]();
	ASTNode& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<ASTNode,__malloc_alloc_template<0> >*, int, void);
	vector<ASTNode,__malloc_alloc_template<0> >& operator=();
	void reserve();
	ASTNode& front();
	ASTNode& front();
	ASTNode& back();
	ASTNode& back();
	void push_back();
	void swap();
	ASTNode* insert();
	ASTNode* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct vector<tagPOINT,__malloc_alloc_template<0> > {
protected:
	POINT *start;
	POINT *finish;
	POINT *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	POINT* begin();
	POINT* begin();
	POINT* end();
	POINT* end();
	reverse_iterator<tagPOINT *,tagPOINT,tagPOINT &,int> rbegin();
	reverse_iterator<const tagPOINT *,tagPOINT,const tagPOINT &,int> rbegin();
	reverse_iterator<tagPOINT *,tagPOINT,tagPOINT &,int> rend();
	reverse_iterator<const tagPOINT *,tagPOINT,const tagPOINT &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	POINT& operator[]();
	POINT& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<tagPOINT,__malloc_alloc_template<0> >*, int, void);
	vector<tagPOINT,__malloc_alloc_template<0> >& operator=();
	void reserve();
	POINT& front();
	POINT& front();
	POINT& back();
	POINT& back();
	void push_back();
	void swap();
	POINT* insert();
	POINT* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct simple_alloc<tagPOINT,__malloc_alloc_template<0> > {
	simple_alloc<tagPOINT,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static POINT* allocate(/* parameters unknown */);
	static POINT* allocate(/* parameters unknown */);
	static POINT* allocate(/* parameters unknown */);
	static POINT* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<RouteGoal,__malloc_alloc_template<0> > {
	simple_alloc<RouteGoal,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static RouteGoal* allocate(/* parameters unknown */);
	static RouteGoal* allocate(/* parameters unknown */);
	static RouteGoal* allocate(/* parameters unknown */);
	static RouteGoal* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<PenaltyRect,__malloc_alloc_template<0> > {
	simple_alloc<PenaltyRect,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static PenaltyRect* allocate(/* parameters unknown */);
	static PenaltyRect* allocate(/* parameters unknown */);
	static PenaltyRect* allocate(/* parameters unknown */);
	static PenaltyRect* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<FTilePt,__malloc_alloc_template<0> > {
	simple_alloc<FTilePt,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static FTilePt* allocate(/* parameters unknown */);
	static FTilePt* allocate(/* parameters unknown */);
	static FTilePt* allocate(/* parameters unknown */);
	static FTilePt* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<ObjectSlot,__malloc_alloc_template<0> > {
	simple_alloc<ObjectSlot,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static ObjectSlot* allocate(/* parameters unknown */);
	static ObjectSlot* allocate(/* parameters unknown */);
	static ObjectSlot* allocate(/* parameters unknown */);
	static ObjectSlot* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<RoutingSlot,__malloc_alloc_template<0> > {
	simple_alloc<RoutingSlot,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static RoutingSlot* allocate(/* parameters unknown */);
	static RoutingSlot* allocate(/* parameters unknown */);
	static RoutingSlot* allocate(/* parameters unknown */);
	static RoutingSlot* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct LightingParameters {
	float gTweeks[13];
	SimTime gTimeParamsLastTweeked;
	bool gObjectShadowsEnabled;
	bool gSpriteAntialiasingEnabled;
	bool gLampLightingEnabled;
	
	LightingParameters& operator=();
	LightingParameters();
	LightingParameters();
	LightingParameters(LightingParameters*, int, void);
	int GetIntegerizedParam();
	void SetIntegerizedParam();
};

struct AUTOPTR<FloatConstants> {
private:
	FloatConstants *m_ptr;
	
public:
	AUTOPTR();
	AUTOPTR();
	AUTOPTR(AUTOPTR<FloatConstants>*, int, void);
	FloatConstants* CreateInstance();
	void Reset();
	FloatConstants* operator FloatConstants *();
	FloatConstants* operator->();
private:
	AUTOPTR<FloatConstants>& operator=();
};

struct simple_alloc<CTilePt,__malloc_alloc_template<0> > {
	simple_alloc<CTilePt,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static CTilePt* allocate(/* parameters unknown */);
	static CTilePt* allocate(/* parameters unknown */);
	static CTilePt* allocate(/* parameters unknown */);
	static CTilePt* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

typedef unsigned int QueueSizeType;

struct vector<ScoredInteraction,__malloc_alloc_template<0> > {
protected:
	ScoredInteraction *start;
	ScoredInteraction *finish;
	ScoredInteraction *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	ScoredInteraction* begin();
	ScoredInteraction* begin();
	ScoredInteraction* end();
	ScoredInteraction* end();
	reverse_iterator<ScoredInteraction *,ScoredInteraction,ScoredInteraction &,int> rbegin();
	reverse_iterator<const ScoredInteraction *,ScoredInteraction,const ScoredInteraction &,int> rbegin();
	reverse_iterator<ScoredInteraction *,ScoredInteraction,ScoredInteraction &,int> rend();
	reverse_iterator<const ScoredInteraction *,ScoredInteraction,const ScoredInteraction &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	ScoredInteraction& operator[]();
	ScoredInteraction& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<ScoredInteraction,__malloc_alloc_template<0> >*, int, void);
	vector<ScoredInteraction,__malloc_alloc_template<0> >& operator=();
	void reserve();
	ScoredInteraction& front();
	ScoredInteraction& front();
	ScoredInteraction& back();
	ScoredInteraction& back();
	void push_back();
	void swap();
	ScoredInteraction* insert();
	ScoredInteraction* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct Queue<Interaction,8> {
protected:
	Interaction fElems[8];
	QueueSizeType fFirst;
	QueueSizeType fLast;
	
public:
	Queue<Interaction,8>& operator=();
	Queue();
	Queue(Queue<Interaction,8>*, int, void);
	Queue();
	void Clear();
	bool Enqueue();
	bool Dequeue();
	QueueSizeType Count();
	bool Contains();
	void Remove();
	bool Peek();
	Interaction& Peek();
};

struct AvgIntervalProbe {
private:
	CTGMicroTimer fProbe;
	float *fSamples;
	int fNumSamples;
	int fMaxSamples;
	int fAvgDirty;
	float fAvg;
	
public:
	AvgIntervalProbe& operator=();
	AvgIntervalProbe();
	AvgIntervalProbe();
	AvgIntervalProbe(AvgIntervalProbe*, int, void);
	void Begin();
	void End();
	void Flush();
	int GetAvg();
	int CountSamples();
};

struct PrimitiveSample {
	int fCode;
	int fCallCount;
	int fTime;
};

struct vector<PrimitiveSample,__malloc_alloc_template<0> > {
protected:
	PrimitiveSample *start;
	PrimitiveSample *finish;
	PrimitiveSample *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	PrimitiveSample* begin();
	PrimitiveSample* begin();
	PrimitiveSample* end();
	PrimitiveSample* end();
	reverse_iterator<PrimitiveSample *,PrimitiveSample,PrimitiveSample &,int> rbegin();
	reverse_iterator<const PrimitiveSample *,PrimitiveSample,const PrimitiveSample &,int> rbegin();
	reverse_iterator<PrimitiveSample *,PrimitiveSample,PrimitiveSample &,int> rend();
	reverse_iterator<const PrimitiveSample *,PrimitiveSample,const PrimitiveSample &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	PrimitiveSample& operator[]();
	PrimitiveSample& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<PrimitiveSample,__malloc_alloc_template<0> >*, int, void);
	vector<PrimitiveSample,__malloc_alloc_template<0> >& operator=();
	void reserve();
	PrimitiveSample& front();
	PrimitiveSample& front();
	PrimitiveSample& back();
	PrimitiveSample& back();
	void push_back();
	void swap();
	PrimitiveSample* insert();
	PrimitiveSample* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct SimTickSample {
	int fTickCount;
	vector<PrimitiveSample,__malloc_alloc_template<0> > fPrims;
	
	SimTickSample& operator=();
	SimTickSample();
	SimTickSample(SimTickSample*, int, void);
	SimTickSample();
	int CountInstructions();
	int GetTotalTime();
};

struct vector<SimTickSample,__malloc_alloc_template<0> > {
protected:
	SimTickSample *start;
	SimTickSample *finish;
	SimTickSample *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	SimTickSample* begin();
	SimTickSample* begin();
	SimTickSample* end();
	SimTickSample* end();
	reverse_iterator<SimTickSample *,SimTickSample,SimTickSample &,int> rbegin();
	reverse_iterator<const SimTickSample *,SimTickSample,const SimTickSample &,int> rbegin();
	reverse_iterator<SimTickSample *,SimTickSample,SimTickSample &,int> rend();
	reverse_iterator<const SimTickSample *,SimTickSample,const SimTickSample &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	SimTickSample& operator[]();
	SimTickSample& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<SimTickSample,__malloc_alloc_template<0> >*, int, void);
	vector<SimTickSample,__malloc_alloc_template<0> >& operator=();
	void reserve();
	SimTickSample& front();
	SimTickSample& front();
	SimTickSample& back();
	SimTickSample& back();
	void push_back();
	void swap();
	SimTickSample* insert();
	SimTickSample* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct ObjectProbe {
private:
	AvgIntervalProbe fSimProbe;
	vector<SimTickSample,__malloc_alloc_template<0> > fTicks;
	int fNextTickSample;
	CTGMicroTimer fPrimTimer;
	bool fPaused;
	static bool sSAnim;
	
public:
	ObjectProbe& operator=();
	ObjectProbe();
	ObjectProbe();
	ObjectProbe(ObjectProbe*, int, void);
	void Pause();
	void Resume();
	bool IsPaused();
	void Flush();
	void BeginSim();
	void EndSim();
	float GetAvgSimTime();
	void BeginAnim(ObjectProbe*, int, void);
	void EndAnim(ObjectProbe*, int, void);
	float GetAvgAnimTime();
	void BeginPrim(ObjectProbe*, int, void);
	void EndPrim(ObjectProbe*, int, void);
	int CountTickSamples();
	SimTickSample& GetNthTickSample();
	int GetMaxTickSamples();
	static bool GetSAnim(/* parameters unknown */);
	static void SetSAnim(/* parameters unknown */);
};

struct SimLoopObjectSample {
private:
	SInt16 fObjectID;
	int fTime;
	
public:
	SimLoopObjectSample& operator=();
	SimLoopObjectSample();
	SimLoopObjectSample();
	SInt16 GetObjectID();
	int GetTime();
};

struct vector<SimLoopObjectSample,__malloc_alloc_template<0> > {
protected:
	SimLoopObjectSample *start;
	SimLoopObjectSample *finish;
	SimLoopObjectSample *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	SimLoopObjectSample* begin();
	SimLoopObjectSample* begin();
	SimLoopObjectSample* end();
	SimLoopObjectSample* end();
	reverse_iterator<SimLoopObjectSample *,SimLoopObjectSample,SimLoopObjectSample &,int> rbegin();
	reverse_iterator<const SimLoopObjectSample *,SimLoopObjectSample,const SimLoopObjectSample &,int> rbegin();
	reverse_iterator<SimLoopObjectSample *,SimLoopObjectSample,SimLoopObjectSample &,int> rend();
	reverse_iterator<const SimLoopObjectSample *,SimLoopObjectSample,const SimLoopObjectSample &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	SimLoopObjectSample& operator[]();
	SimLoopObjectSample& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<SimLoopObjectSample,__malloc_alloc_template<0> >*, int, void);
	vector<SimLoopObjectSample,__malloc_alloc_template<0> >& operator=();
	void reserve();
	SimLoopObjectSample& front();
	SimLoopObjectSample& front();
	SimLoopObjectSample& back();
	SimLoopObjectSample& back();
	void push_back();
	void swap();
	SimLoopObjectSample* insert();
	SimLoopObjectSample* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct SimLoopTickSample : vector<SimLoopObjectSample,__malloc_alloc_template<0> > {
private:
	int fTickCount;
	
public:
	SimLoopTickSample& operator=();
	SimLoopTickSample();
	SimLoopTickSample();
	SimLoopTickSample(SimLoopTickSample*, int, void);
	int GetTickCount();
	int GetTime();
};

struct vector<SimLoopTickSample,__malloc_alloc_template<0> > {
protected:
	SimLoopTickSample *start;
	SimLoopTickSample *finish;
	SimLoopTickSample *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	SimLoopTickSample* begin();
	SimLoopTickSample* begin();
	SimLoopTickSample* end();
	SimLoopTickSample* end();
	reverse_iterator<SimLoopTickSample *,SimLoopTickSample,SimLoopTickSample &,int> rbegin();
	reverse_iterator<const SimLoopTickSample *,SimLoopTickSample,const SimLoopTickSample &,int> rbegin();
	reverse_iterator<SimLoopTickSample *,SimLoopTickSample,SimLoopTickSample &,int> rend();
	reverse_iterator<const SimLoopTickSample *,SimLoopTickSample,const SimLoopTickSample &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	SimLoopTickSample& operator[]();
	SimLoopTickSample& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<SimLoopTickSample,__malloc_alloc_template<0> >*, int, void);
	vector<SimLoopTickSample,__malloc_alloc_template<0> >& operator=();
	void reserve();
	SimLoopTickSample& front();
	SimLoopTickSample& front();
	SimLoopTickSample& back();
	SimLoopTickSample& back();
	void push_back();
	void swap();
	SimLoopTickSample* insert();
	SimLoopTickSample* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct SimLoopProbe {
private:
	int fNextSample;
	vector<SimLoopTickSample,__malloc_alloc_template<0> > fSamples;
	CTGMicroTimer fObjTimer;
	CTGMicroTimer fTotalTimer;
	
public:
	SimLoopProbe& operator=();
	SimLoopProbe();
	SimLoopProbe(SimLoopProbe*, int, void);
	SimLoopProbe();
	void BeginSim();
	void EndSim();
	void BeginObject();
	void EndObject();
	int CountSamples();
	SimLoopTickSample& GetNthSample();
	int GetMaxSamples();
};

struct simple_alloc<cXPersonImpl *,__malloc_alloc_template<0> > {
	simple_alloc<cXPersonImpl *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static cXPersonImpl** allocate(/* parameters unknown */);
	static cXPersonImpl** allocate(/* parameters unknown */);
	static cXPersonImpl** allocate(/* parameters unknown */);
	static cXPersonImpl** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<SpriteSlot,__malloc_alloc_template<0> > {
	simple_alloc<SpriteSlot,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static SpriteSlot* allocate(/* parameters unknown */);
	static SpriteSlot* allocate(/* parameters unknown */);
	static SpriteSlot* allocate(/* parameters unknown */);
	static SpriteSlot* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

// warning: multiple differing types with the same name (type name not equal)
struct vector<unsigned int,__malloc_alloc_template<0> > {
protected:
	ResType *start;
	ResType *finish;
	ResType *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	ResType* begin();
	ResType* begin();
	ResType* end();
	ResType* end();
	reverse_iterator<unsigned int *,unsigned int,unsigned int &,int> rbegin();
	reverse_iterator<const unsigned int *,unsigned int,const unsigned int &,int> rbegin();
	reverse_iterator<unsigned int *,unsigned int,unsigned int &,int> rend();
	reverse_iterator<const unsigned int *,unsigned int,const unsigned int &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	ResType& operator[]();
	ResType& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<unsigned int,__malloc_alloc_template<0> >*, int, void);
	vector<unsigned int,__malloc_alloc_template<0> >& operator=();
	void reserve();
	ResType& front();
	ResType& front();
	ResType& back();
	ResType& back();
	void push_back();
	void swap();
	ResType* insert();
	ResType* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct ChainMemberFile {
	iResFile *file;
	vector<unsigned int,__malloc_alloc_template<0> > types;
	Boolean prohibited;
};

// warning: multiple differing types with the same name (type name not equal)
struct simple_alloc<unsigned int,__malloc_alloc_template<0> > {
	simple_alloc<unsigned int,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static ResType* allocate(/* parameters unknown */);
	static ResType* allocate(/* parameters unknown */);
	static ResType* allocate(/* parameters unknown */);
	static ResType* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct ChainResFile : iResFile {
private:
	ChainMemberFile fFiles[8];
	
public:
	ChainResFile& operator=();
	ChainResFile();
private:
	void BuildTypeVector();
protected:
	SInt16 CountFiles();
	iResFile* GetFile();
public:
	ChainResFile();
	/* vtable[1] */ virtual ChainResFile(ChainResFile*, int, void);
	/* vtable[2] */ virtual void* _dyncastimpl();
	void AddFile();
	void RemoveFile();
	void AddProhibitedType();
	void AddExclusiveType();
	/* vtable[6] */ virtual ErrType CloseForReopen();
	/* vtable[7] */ virtual ErrType Reopen();
	/* vtable[37] */ virtual Boolean TypeWritable();
	/* vtable[8] */ virtual ErrType Close();
	/* vtable[9] */ virtual void Update();
	/* vtable[10] */ virtual bool Writable();
	/* vtable[12] */ virtual bool ValidFile();
	/* vtable[13] */ virtual SInt16 CountTypes();
	/* vtable[14] */ virtual SInt32 GetIndType();
	/* vtable[15] */ virtual SInt16 Count();
	/* vtable[16] */ virtual MHandle GetByID();
	/* vtable[17] */ virtual MHandle GetByName();
	/* vtable[18] */ virtual MHandle GetByIndex();
	/* vtable[19] */ virtual MHandle GetByIDAndLanguage();
	/* vtable[20] */ virtual void GetName();
	/* vtable[21] */ virtual SInt32 GetResType();
	/* vtable[22] */ virtual void GetID();
	/* vtable[23] */ virtual void GetIndex();
	/* vtable[24] */ virtual char GetLanguage();
	/* vtable[25] */ virtual void FindUniqueName();
	/* vtable[26] */ virtual SInt16 FindUniqueID();
	/* vtable[27] */ virtual void Detach();
	/* vtable[28] */ virtual void Load();
	/* vtable[29] */ virtual bool IsLittleEndian();
	/* vtable[30] */ virtual void SetID();
	/* vtable[31] */ virtual void Add();
	/* vtable[32] */ virtual void AddWithLanguage();
	/* vtable[33] */ virtual void Write();
	/* vtable[34] */ virtual void Remove();
	/* vtable[35] */ virtual void SetInfo();
};

struct StackString<8> : StringBuffer {
private:
	char fChars[8];
};

struct OpenSpec {
	Int fileType;
	StackString<8> extension;
};

struct SeqResFile : ChainResFile {
private:
	OpenSpec fOpenSpecs[9];
	
public:
	SeqResFile& operator=();
	SeqResFile();
	SeqResFile();
	/* vtable[1] */ virtual SeqResFile(SeqResFile*, int, void);
	/* vtable[2] */ virtual void* _dyncastimpl();
	void ClearOpenSpecs();
	void AddOpenSpec();
	/* vtable[3] */ virtual ErrType Create();
	/* vtable[4] */ virtual ErrType Delete();
	/* vtable[5] */ virtual ErrType Open();
	/* vtable[8] */ virtual ErrType Close();
	/* vtable[11] */ virtual void GetFileName();
};

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb1168;
	cXObject *$vb966;
	static int sXDirTable[9];
	static int sYDirTable[9];
	static Int gPersonWidth;
	static bool sFreeWill;
	static bool sAutoCenter;
	static bool sAutoReset;
	static BString2 sLastUserTypedName;
	StdPrm *fAttrs;
	Int fNumAttr;
	StdPrm *fDynSpriteFlags;
	StdPrm fNumDynSprites;
	short int fTemp[8];
	short int fData[72];
	ObjectModule *fModule;
	cXObjectImpl *fNext;
	RelMatrix *fInstMatrix;
	SInt16 fID;
	FTilePt fLocation;
	FTileRect fRect;
	int fLevel;
	Int fMiscFlags;
	ObjDefinition *fDef;
	ObjSelector *fObjSel;
	vector<ObjectSlot,__malloc_alloc_template<0> > fHierSlots;
	vector<RoutingSlot,__malloc_alloc_template<0> > fRoutingSlots;
	vector<SpriteSlot,__malloc_alloc_template<0> > fSpriteSlots;
	RenderLayer mRenderLayer;
	RECT mLastDamage;
	int mHas3D;
	bool mDrawLabel;
	__vtbl_ptr_type *$vf901;
	
	cXObjectImpl& operator=();
	cXObjectImpl();
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[7] */ virtual void SetHilite();
	/* vtable[8] */ virtual Int GetHilite();
	/* vtable[9] */ virtual void SetMiscFlag();
	/* vtable[10] */ virtual bool GetMiscFlag();
	/* vtable[11] */ virtual void UpdateSimFlags();
	/* vtable[12] */ virtual void Dirty();
	/* vtable[13] */ virtual void SetRenderLayer();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[15] */ virtual RenderLayer GetRenderLayer();
	/* vtable[16] */ virtual bool IsRenderingRoot();
	/* vtable[17] */ virtual RECT& GetLastDamage();
	/* vtable[18] */ virtual void SetLastDamage();
	/* vtable[19] */ virtual void ResetDamage();
	/* vtable[20] */ virtual bool IsEmissive();
	/* vtable[21] */ virtual bool IsBeingDraggedAround();
	/* vtable[22] */ virtual void CenterHouseViewOnMe();
	/* vtable[23] */ virtual void SetDrawLabel();
	/* vtable[24] */ virtual bool IsSpriteVisible();
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[30] */ virtual void HandleError();
	/* vtable[29] */ virtual void Error();
	/* vtable[1] */ virtual TreeReturnCode TryElement();
	/* vtable[1] */ virtual bool GosubObjectTree();
	/* vtable[2] */ virtual void Cleanup();
	/* vtable[4] */ virtual NodeAction HandleBreakpoint();
	TreeReturnCode InterpValue();
	TreeReturnCode TryUserEvent();
	TreeReturnCode TryUIEffect();
	TreeReturnCode TryTestObjectType();
	TreeReturnCode TryMakeNewCharacter();
	TreeReturnCode TryFindGoodLocation();
	TreeReturnCode TrySetBalloon();
	TreeReturnCode TryDirectionTo();
	TreeReturnCode TryDistanceTo();
	TreeReturnCode TryRandom();
	TreeReturnCode TryTreeBreak();
	TreeReturnCode TryGrab();
	TreeReturnCode TryDrop();
	TreeReturnCode TryUpdate();
	TreeReturnCode TryIdle();
	TreeReturnCode TryKillObject();
	TreeReturnCode TryShowString();
	TreeReturnCode TryNotifyStackObject();
	TreeReturnCode TryCallNamedTree();
	TreeReturnCode TryMakeActionString();
	TreeReturnCode TryGenericSimCall();
	TreeReturnCode TryDialog();
	TreeReturnCode TryPushAction();
	TreeReturnCode TrySetToNext();
	TreeReturnCode TryExpression();
	TreeReturnCode TryFindTreeNew();
	TreeReturnCode TryCreateObject();
	TreeReturnCode TryPreloadObject();
	TreeReturnCode TryRelationship();
	TreeReturnCode TryRelationship2();
	TreeReturnCode TryDropOnto();
	TreeReturnCode TryBudget();
	TreeReturnCode TryFind5WorstMotives();
	TreeReturnCode TryFindFunctionalObject();
	TreeReturnCode TryCallFunctionalTree();
	TreeReturnCode TryPlaySound();
	TreeReturnCode TryKillSounds();
	TreeReturnCode TrySnap();
	TreeReturnCode TrySnap();
	TreeReturnCode TryBurn();
	TreeReturnCode TryTutorial();
	void JustBorn();
	void UpdateAge();
	void DayPassed();
	/* vtable[3] */ virtual void Initialize();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void PostLoad();
	/* vtable[6] */ virtual void PreSave();
	cXObjectImpl();
	/* vtable[1] */ virtual cXObjectImpl();
	void HierGetSite();
	void HierSetSite();
	void HierSever();
	cXObject* HierGetObject();
	Int HierCountSlots();
	ObjectSlot* HierGetSlot();
	cXObject* HierGetChild();
	cXObject* HierGetParent();
	cXObject* GetRootObject();
	void GetPlacementSpec();
	bool TestAndPlace();
	static void UpdateChairFacing(/* parameters unknown */);
	bool RequiresWallAdjacency();
	void UpdateWallAdjacency();
	bool AllowIdleOptimization();
	void SetLocation();
	void ComputeRect();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[41] */ virtual bool FindGoodLocation();
	/* vtable[42] */ virtual void GetPlacementInfo();
	/* vtable[43] */ virtual bool IsInWorld();
	/* vtable[44] */ virtual bool TestIntersection();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[46] */ virtual ObjFnTable* GetFnTable();
	/* vtable[47] */ virtual SInt16 GetTreeID();
	/* vtable[48] */ virtual void SetLevel();
	/* vtable[49] */ virtual bool IsOccupied();
	/* vtable[50] */ virtual void SetData();
	/* vtable[51] */ virtual void SetTemp();
	/* vtable[52] */ virtual void SetAttr();
	/* vtable[53] */ virtual ObjectProbe* GetObjectProbe();
	/* vtable[54] */ virtual void SetObjectProbe();
	/* vtable[55] */ virtual cXObject* GetInteractionLeader();
	/* vtable[56] */ virtual Int GetFrontFaceDirection();
	/* vtable[57] */ virtual ObjectFolder* GetFolder();
	/* vtable[58] */ virtual bool SimIndependent();
	/* vtable[59] */ virtual bool SimEnabled();
	/* vtable[60] */ virtual void EnableSim();
	/* vtable[61] */ virtual int GetIdleStatus();
	/* vtable[62] */ virtual void SetIdleStatus();
	/* vtable[63] */ virtual void ClearIdleStatus();
	/* vtable[64] */ virtual FTileRect& GetRect();
	/* vtable[65] */ virtual SInt16 GetData();
	/* vtable[66] */ virtual SInt16 GetTemp();
	/* vtable[67] */ virtual SInt16 GetAttr();
	/* vtable[68] */ virtual ObjectModule* GetModule();
	/* vtable[69] */ virtual AnimTable* GetAdultAnimTable();
	/* vtable[70] */ virtual AnimTable* GetChildAnimTable();
	/* vtable[71] */ virtual bool HideForCutaway();
	/* vtable[72] */ virtual TileWallsSegment GetRequiredSegment();
	/* vtable[73] */ virtual Int CountObjectSlots();
	/* vtable[74] */ virtual ObjectSlot* GetObjectSlot();
	/* vtable[75] */ virtual cXObject* GetContainedObject();
	/* vtable[76] */ virtual float GetSlotHeight();
	/* vtable[77] */ virtual cXObject* GetContainer();
	/* vtable[78] */ virtual bool IsContained();
	/* vtable[79] */ virtual SInt16 GetContainerID();
	/* vtable[80] */ virtual SInt16 GetContainedSlotNum();
	/* vtable[81] */ virtual cXObject* GetNextObjectSibling();
	/* vtable[82] */ virtual cXObject* GetPrevObjectSibling();
	/* vtable[83] */ virtual RoomID GetRoom();
	/* vtable[84] */ virtual ObjDefinition* GetDef();
	/* vtable[85] */ virtual SInt16 GetType();
	/* vtable[86] */ virtual void GetTypeName();
	/* vtable[87] */ virtual SInt16 GetID();
	/* vtable[88] */ virtual void GetLocation();
	/* vtable[89] */ virtual FTilePt& GetLocation();
	/* vtable[90] */ virtual int GetLevel();
	/* vtable[91] */ virtual CTilePt GetCTilePt();
	/* vtable[92] */ virtual TreeTable* GetTreeTab();
	/* vtable[93] */ virtual ObjSelector* GetSelector();
	/* vtable[94] */ virtual Behavior* GetBehavior();
	/* vtable[95] */ virtual iResFile* GetSelFile();
	/* vtable[96] */ virtual Int GetTileWidth();
	/* vtable[97] */ virtual bool IsMultiTile();
	/* vtable[98] */ virtual StdPrm GetFlags();
	/* vtable[99] */ virtual SInt16 GetWallPlacementFlags();
	/* vtable[100] */ virtual RelMatrix& GetRelMatrix();
	/* vtable[101] */ virtual cXObject* GetObstacleAtLocation();
	/* vtable[102] */ virtual int GetNumRoutingSlots();
	/* vtable[103] */ virtual RoutingSlot& GetRoutingSlot();
	/* vtable[104] */ virtual SInt16 GetCurrentValue();
	/* vtable[105] */ virtual SInt16 GetSize();
	/* vtable[106] */ virtual cSimulator* GetSim();
	/* vtable[107] */ virtual void GetErrorString();
	/* vtable[108] */ virtual Int GetAgeInMinutes();
	/* vtable[109] */ virtual bool CanChooseAutonomously();
	/* vtable[110] */ virtual int GetBuildModeType();
	/* vtable[111] */ virtual bool IsSupport();
	/* vtable[112] */ virtual bool ShouldAutoRotate();
	/* vtable[113] */ virtual bool CanContributeLight();
	/* vtable[114] */ virtual Int GetLightingContribution();
	/* vtable[115] */ virtual ObjectLightSource GetObjectLightSource();
	/* vtable[116] */ virtual bool IsDeletedByEvict();
	/* vtable[117] */ virtual bool IsFromCatalog();
	/* vtable[118] */ virtual bool IsBroken();
	/* vtable[119] */ virtual bool IsDirty();
	/* vtable[120] */ virtual bool IsBurning();
	/* vtable[121] */ virtual bool CanBurn();
	/* vtable[122] */ virtual bool IsFireproof();
	/* vtable[123] */ virtual bool HasZeroExtent();
	/* vtable[124] */ virtual bool CanIntersectPeople();
	/* vtable[125] */ virtual bool IsChair();
	/* vtable[126] */ virtual cXObject* GetObjectFromID();
	/* vtable[127] */ virtual cXObject* GetNext();
	/* vtable[128] */ virtual cXObject* GetFirst();
	cXObjectImpl* GetNextImpl();
	cXObjectImpl* GetFirstImpl();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
};

struct StackString<256> : StringBuffer {
private:
	char fChars[256];
};

struct simple_alloc<short int,__malloc_alloc_template<0> > {
	simple_alloc<short int,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static SInt16* allocate(/* parameters unknown */);
	static SInt16* allocate(/* parameters unknown */);
	static SInt16* allocate(/* parameters unknown */);
	static SInt16* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct StubObject {
	ResourceName fName;
	FileName fNewFileName;
	Boolean fKeepOldNames;
	Boolean fUsePrefix;
	
	StubObject& operator=();
	StubObject();
	StubObject();
	void SetName();
	void KeepOldNames();
	void SetPrefix();
	ErrType CreateNew();
	ErrType CreateNew();
	ErrType Duplicate();
	void GetNewFileName();
	static void SpawnGUID(/* parameters unknown */);
	static u32 MakeNewGUID(/* parameters unknown */);
};

struct FileRec {
	Int usecount;
	iResFile *file;
};

struct binary_function<const ResFile *,const ResFile *,bool> {
};

struct simple_alloc<__rb_tree_node<pair<const ResFile *const,FileRec> >,__malloc_alloc_template<0> > {
	simple_alloc<__rb_tree_node<pair<const ResFile *const,FileRec> >,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __rb_tree_node<pair<const ResFile *const,FileRec> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const ResFile *const,FileRec> >* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct pair<const ResFile *const,FileRec> {
	ResFile *first;
	FileRec second;
};

struct __rb_tree_node<pair<const ResFile *const,FileRec> > : __rb_tree_node_base {
	pair<const ResFile *const,FileRec> value_field;
};

struct __rb_tree_iterator<pair<const ResFile *const,FileRec> > : __rb_tree_base_iterator {
	__rb_tree_iterator<pair<const ResFile *const,FileRec> >& operator=();
	__rb_tree_iterator();
	__rb_tree_iterator();
	__rb_tree_iterator();
	pair<const ResFile *const,FileRec>& operator*();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> >& operator++();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > operator++();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> >& operator--();
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > operator--();
};

struct ERQTable<ResFile> {
	char *pName;
	ResFile *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

// warning: multiple differing types with the same name (name not equal)
struct cXMTObjectImpl : virtual cXMTObject, virtual cXObjectImpl {
	cXObjectImpl *$vb901;
	cXMTObject *$vb1079;
	cXMTObjectImpl *fMultiNext;
	cXMTObjectImpl *fLeadObject;
	Int fNormXOff;
	Int fNormYOff;
	Int fNormLevelOff;
	Int fXOff;
	Int fYOff;
	Int fLevelOff;
	
	cXMTObjectImpl& operator=();
	cXMTObjectImpl();
	void SetLeader();
	void RemoveFromChain();
	void UpdateDynAdjacency();
	void UpdateAllAdjacecy();
	void MergeDynamic();
	cXMTObjectImpl();
	/* vtable[1] */ virtual cXMTObjectImpl(cXMTObjectImpl*, int, void);
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[6] */ virtual void PostLoad(cXMTObjectImpl*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
	ISimInstance* GetISimInstanceBaseVer();
	cXMTObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (size not equal)
struct EVoice {
	bool bInUse;
	ERSampledata *pSampleRes;
	float volumeL;
	float volumeR;
	float pitch;
	bool bIsPlaying;
	bool bIsSilent;
	EAudioCmd *pQueuedCmd;
	
	EVoice& operator=();
	EVoice();
	EVoice();
	void reset();
};

struct EPs2ControllerInitInfo {
	int port;
	int slot;
	u128 *pDmaBuffer;
};

struct EPs2ClockData {
	u32 m_nStartWraps;
	u32 m_startCounter;
};

typedef int (*sceSdTransIntrHandler)(/* parameters unknown */);
typedef int (*sceSdSpu2IntrHandler)(/* parameters unknown */);

typedef struct {
	short unsigned int func;
	short unsigned int entry;
	unsigned int value;
} sceSdBatch;

typedef struct {
	int core;
	int mode;
	short int depth_L;
	short int depth_R;
	int delay;
	int feedback;
} sceSdEffectAttr;

typedef int (*sceSdrUserCommandFunction)(/* parameters unknown */);

enum FSMCommands {
	FSMC_INVALID = 0,
	FSMC_OPEN = 1,
	FSMC_CLOSE = 2,
	FSMC_GETSTATE = 3,
	FSMC_SETSTATE = 4,
	FSMC_READ = 5,
	FSMS_CLEARMEM = 6,
	FSMS_IOQUERY = 7
};

enum FSMState {
	FSMS_INVALID = -4,
	FSMS_IOERROR = -3,
	FSMS_ERROR = -2,
	FSMS_ENDOFSTREAM = -1,
	FSMS_UNOPENED = 0,
	FSMS_STOPPED = 1,
	FSMS_RUNNING = 2
};

enum FSMDest {
	FSMD_EE = 0,
	FSMD_IOP = 1,
	FSMD_SPU = 2
};

struct EFSState {
	u32 size;
	u32 id;
	u32 mask : 8;
	FSMState state;
	FSMDest dest;
	u32 buffers : 9;
	u32 looping : 1;
	u32 pos;
	u32 length;
	u32 loopStart;
	u32 loopEnd;
};

struct EPs2TexturePatch {
	sceGsTex0 tex0;
	EPs2TexturePatch *pThis;
	int nLocks;
};

typedef TNodeList<EPs2Shader *> EPs2ShaderList;

struct TNodeList<EPs2Shader *> : ENodeList {
	TNodeList();
	TNodeList();
	TNodeList();
	static EPs2Shader* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail(/* s1 17 */ EPs2Shader *data);
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove(/* s1 17 */ NLIterator i);
	NLIterator Search(/* s1 17 */ EPs2Shader *data);
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EPs2Shader *>& operator=();
	void MoveContents();
};

typedef void (*PFNCPUGECommand)(/* parameters unknown */);

struct EPs2GEClipPlane {
	u32 dim;
	u32 unused;
	u32 flags;
	float invPlane;
};

struct EPs2GEViewportData {
	EPs2GEClipPlane clipPlanes[6];
	EViewport vp;
};

struct EPs2GEModelMatrices {
	EMat4 mModel;
	EMat4 mModelView;
};

struct EPs2GELightData {
	EMat4 mLightDirs;
	EMat4 mLightColors;
	EVec4 vPointLightModel;
};

struct EPs2GETextureCoord {
	f32 s;
	f32 t;
	f32 q;
	u32 unused;
};

struct EPs2GETextureState {
	int nDone;
	ETexture *pCurTexture;
	float xSize;
	float ySize;
};

struct EPs2GeometryEngineData {
	EPs2GEGSEntry gifTags[2];
	EPs2GEModelMatrices modelMats[4];
	EMat4 mModelView;
	EMat4 mLookAt;
	EMat4 mLookAtTextureXForm;
	EMat4 mView;
	EMat4 mModelRotNorm;
	EMat4 mModelRotLightDirs;
	EMat4 mModelRotLookAtTextureXForm;
	EMat4 mTextureXForm;
	EPs2GETransformedVert tvs[4];
	EPs2GETransformedVert *pTvs012[3];
	EPs2GETransformedVert *pTvs230[3];
	EPs2GEGSEntry *pOutPos;
	u32 currentBuffer;
	EPs2GEInputBuffer *pCurrentBuffer;
	u32 wakeup;
	u32 interruptCause;
	u32 zbPatch;
	EPs2GEViewportData vpd;
	EPs2GELightData lights;
	u32 geomModes;
	unsigned int primModes[2];
	u32 textureTransformSource;
	EVec4 vClipRatioScaler;
	EMat4 mWindow;
	unsigned int vuVars[8];
	long long unsigned int scratch[80];
	unsigned int vu1Debug[4];
	float pixPerSqMeter;
	float scaleMipMult;
	float angularMipMult;
	float qMult;
	EMat4 mModelLookAtTextureXForm;
	EMat4 mLookAtWithTranslate;
	s32 mpg;
	u32 disableInterrupts;
	u32 error;
	u32 renderer;
	EPs2GEGSEntry emptyGsHeaderPrim;
	EPs2GEGSEntry emptyPrimReg;
	EPs2GEGSEntry emptyGsHeader;
	EPs2GEGSEntry gifTag1Pass;
	EMat4 mCombinedView;
	u32 matrixGeomModes;
	u32 pWhichViewMatrix;
	u32 adc;
	u32 vuCurOutputBuffer;
	EPs2GEInputBuffer inputBuffers[2];
	EPs2GEOutputBuffer outputBuffers[2];
	EPs2GETextureState textureStates[2];
	u32 pWaitTexture;
	unsigned int pad2[3];
	EVec4 vAmbientLightColor;
	EVec4 vDiffuseLightColors[3];
	EVec4 vAmbientMaterialColor;
	EVec4 vDiffuseMaterialColor;
	EVec4 vClipRatioOffset;
	EPs2TexturePatch txtPatch;
	EMat4 mProjection;
};

struct EScene {
protected:
	ELights3 m_lights;
	int m_nLights;
	EMat4 m_mLookAt;
	EVec3 m_vCurrentPos;
public:
	__vtbl_ptr_type *$vf1071;
	
	EScene& operator=();
	EScene();
	EScene();
	/* vtable[1] */ virtual EScene(EScene*, int, void);
	void SetLights();
	void SetLookAt();
	void SetPos();
	EVec3& GetPos();
	EMat4& GetLookAt();
	ELights3* GetLights();
	int GetLightCount();
};

struct TRedBlackTree<ESTGNode *,unsigned int> : ERedBlackTree {
	TRedBlackTree<ESTGNode *,unsigned int>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<ESTGNode *,unsigned int>*, int, void);
	u32 operator[]();
	u32& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static ESTGNode* GetKey(/* parameters unknown */);
	static u32 GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct ESTGNode {
	void *m_pObj;
	ESTGNode *m_pChildren[2];
	ESTGNode *m_pParent;
	EBoundSphere m_boundSphere;
	FTIterator m_iMinExt;
	FTIterator m_iMaxExt;
	FTIterator m_iRadius;
	NLIterator m_iNode;
	TRedBlackTree<ESTGNode *,unsigned int> m_desiredBy;
	ESTGNode *m_pBest;
	
	ESTGNode& operator=();
	ESTGNode();
	ESTGNode();
	ESTGNode(ESTGNode*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct TRedBlackTree<EInstance *,ERScript *> : ERedBlackTree {
	TRedBlackTree<EInstance *,ERScript *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EInstance *,ERScript *>*, int, void);
	ERScript* operator[]();
	ERScript*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static EInstance* GetKey(/* parameters unknown */);
	static ERScript* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TRedBlackTree<unsigned int,EScriptData *> : ERedBlackTree {
	TRedBlackTree<unsigned int,EScriptData *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,EScriptData *>*, int, void);
	EScriptData* operator[]();
	EScriptData*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EScriptData* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TRedBlackTree<unsigned int,unsigned int> : ERedBlackTree {
	TRedBlackTree<unsigned int,unsigned int>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,unsigned int>*, int, void);
	u32 operator[]();
	u32& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static u32 GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

typedef struct {
	long long unsigned int vf[32];
	u_int status;
	u_int mac;
	u_int clipping;
	u_int r;
	u_int i;
	u_int q;
	short unsigned int vi[16];
} sceDevVu0Cnd;

typedef struct {
	long long unsigned int vf[32];
	u_int status;
	u_int mac;
	u_int clipping;
	u_int r;
	u_int i;
	u_int q;
	u_int p;
	short unsigned int vi[16];
} sceDevVu1Cnd;

typedef struct {
	u_long128 tag;
	u_int stat;
	u_int count;
	u_int p3count;
	u_int p3tag;
	u_int pad;
} sceDevGifCnd;

typedef struct {
	unsigned int row[4];
	unsigned int col[4];
	u_int mask;
	u_int code;
	u_int stat;
	u_short itop;
	u_short itops;
	u_short mark;
	u_short num;
	u_char error;
	u_char cl;
	u_char wl;
	u_char cmod;
	u_char pad;
} sceDevVif0Cnd;

typedef struct {
	unsigned int row[4];
	unsigned int col[4];
	u_int mask;
	u_int code;
	u_int stat;
	u_short itop;
	u_short itops;
	u_short base;
	u_short offset;
	u_short top;
	u_short tops;
	u_short mark;
	u_short num;
	u_char error;
	u_char cl;
	u_char wl;
	u_char cmod;
	u_char pad;
} sceDevVif1Cnd;

enum DLCommand {
	DLC_TRISTRIP = 0,
	DLC_TRIFAN = 1,
	DLC_TRILIST = 2,
	DLC_QUADLIST = 3,
	DLC_POINTLIST = 4,
	DLC_SPRITELIST = 5,
	DLC_DISPLAYLIST = 6,
	DLC_GOTO = 7,
	DLC_END = 8,
	DLC_VIEWPORT = 9,
	DLC_CLIPRATIO = 10,
	DLC_SCISSOR = 11,
	DLC_MODELMATRICES = 12,
	DLC_VIEWMATRIX = 13,
	DLC_PROJECTIONMATRIX = 14,
	DLC_WINDOWMATRIX = 15,
	DLC_TEXTUREMATRIX = 16,
	DLC_TEXTURE = 17,
	DLC_ENABLEGEOMETRYMODES = 18,
	DLC_DISABLEGEOMETRYMODES = 19,
	DLC_SETGEOMETRYMODES = 20,
	DLC_ENABLERASTERMODES = 21,
	DLC_DISABLERASTERMODES = 22,
	DLC_SETRASTERMODES = 23,
	DLC_LIGHTS = 24,
	DLC_SENDGSDISPLAYLIST = 25,
	DLC_LINELIST = 26,
	DLC_LINESTRIP = 27,
	DLC_SAVESTATE = 28,
	DLC_RESTORESTATE = 29,
	DLC_CALLBACKPARAM = 30,
	DLC_CALLBACK = 31,
	DLC_GELIST = 32,
	DLC_RECT = 33,
	DLC_MEMCPY = 34,
	DLC_MATERIAL = 35,
	DLC_MIPMAPSETUP = 36,
	DLC_RECALCMATRICES = 37,
	DLC_DEBUG = 38,
	DLC_SETMIPMAP = 39,
	DLC_GEOMETRYSETUP = 40,
	DLC_DIRECTRECT = 41,
	DLC_TRISTRIPPACKED = 42,
	DLC_ZTEST = 43,
	DLC_ALPHATEST = 44,
	DLC_RENDERSURFACE = 45,
	DLC_VERTEX = 46,
	DLC_TRIINDEXED = 47,
	DLC_SAVEIMAGEDATA = 48,
	DLC_POINTLISTPACKED = 49,
	DLC_SPRITELISTPACKED = 50,
	DLC_SETCOMBINEMODE = 51,
	DLC_SETBLENDMODE = 52,
	DLC_POINTLIGHT = 53,
	DLC_NOOP = 54,
	DLC_CLIPRECT = 55,
	DLC_MOVIEFRAME = 56,
	DLC_TRISTRIPPACKEDINT = 57,
	DLC_VERIFYMPG = 58,
	DLC_RECTLIST = 59,
	DLC_PARTICLELIST = 60,
	DLC_PARTICLELISTROT = 61,
	DLC_COUNT = 62
};

typedef void (*PFNPs2RendCommand)(/* parameters unknown */);

struct EPs2RenderPassState {
	u32 rasterModes;
	EPs2TestState test;
};

struct EPs2TextureLock {
	ETexture *pLockedTextures[2048];
	ESemaphore ringBufferSemaphore;
	int curLocked;
	int curUnlocked;
	u32 totalLocked;
	u32 totalUnlocked;
};

typedef struct {
	unsigned char y[256];
	unsigned char cb[64];
	unsigned char cr[64];
} sceIpuRAW8;

typedef struct {
	short int y[256];
	short int cb[64];
	short int cr[64];
} sceIpuRAW16;

typedef struct {
	unsigned int pix[256];
} sceIpuRGB32;

typedef struct {
	short unsigned int pix[256];
} sceIpuRGB16;

typedef struct {
	unsigned int pix[32];
} sceIpuINDX4;

typedef struct {
	u_int d4madr;
	u_int d4tadr;
	u_int d4qwc;
	u_int d4chcr;
	u_int d3madr;
	u_int d3qwc;
	u_int d3chcr;
	u_int ipubp;
	u_int ipuctrl;
} sceIpuDmaEnv;

enum sceMpegStrType {
	sceMpegStrM2V = 0,
	sceMpegStrIPU = 1,
	sceMpegStrPCM = 2,
	sceMpegStrADPCM = 3,
	sceMpegStrDATA = 4
};

typedef int (*sceMpegCallback)(/* parameters unknown */);

struct EPs2DebugWaitEvent {
	int count;
	u32 data1;
	u32 data2;
	char name[32];
};

struct EPs2Debug {
protected:
	EPs2DebugWaitEvent m_waitEvents[4];
	
public:
	EPs2Debug& operator=();
	EPs2Debug();
	EPs2Debug();
	EPs2Debug(EPs2Debug*, int, void);
	void BeginWait();
	void EndWait(EPs2Debug*, int, void);
};

struct EAllocBucketNode {
	static TGrowPool<EAllocBucketNode> m_bucketNodePool;
	u32 m_elementSize;
	EAllocBucketNode *m_pNext;
	EGrowPool m_elementPool;
	
	EAllocBucketNode& operator=();
	EAllocBucketNode();
	EAllocBucketNode();
	EAllocBucketNode(EAllocBucketNode*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct TRedBlackTree<EInstance *,EScriptContext *> : ERedBlackTree {
	TRedBlackTree<EInstance *,EScriptContext *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EInstance *,EScriptContext *>*, int, void);
	EScriptContext* operator[]();
	EScriptContext*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static EInstance* GetKey(/* parameters unknown */);
	static EScriptContext* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TNodeList<EScriptData *> : ENodeList {
	TNodeList(TNodeList<EScriptData *>*, int, void);
	TNodeList();
	TNodeList();
	static EScriptData* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EScriptData *>& operator=();
	void MoveContents();
};

struct ETweakEntry {
	union {
		void *pData;
		EString *pSzData;
	} data;
	EString label;
	int type;
};

struct TLinkedList<EStringTableNoCaseNode,0,4> {
protected:
	EStringTableNoCaseNode *m_pHead;
	EStringTableNoCaseNode *m_pTail;
	
public:
	TLinkedList<EStringTableNoCaseNode,0,4>& operator=();
	TLinkedList();
	TLinkedList();
	static EStringTableNoCaseNode*& Last(/* parameters unknown */);
	static EStringTableNoCaseNode*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EStringTableNoCaseNode* Head();
	EStringTableNoCaseNode* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct TNodeList<ETweakEntry *> : ENodeList {
	TNodeList(TNodeList<ETweakEntry *>*, int, void);
	TNodeList();
	TNodeList();
	static ETweakEntry* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<ETweakEntry *>& operator=();
	void MoveContents();
};

struct flock {
	short int l_type;
	short int l_whence;
	long int l_start;
	long int l_len;
	short int l_pid;
	short int l_xxx;
};

struct eflock {
	short int l_type;
	short int l_whence;
	long int l_start;
	long int l_len;
	short int l_pid;
	short int l_xxx;
	long int l_rpid;
	long int l_rsys;
};

struct stat {
	dev_t st_dev;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	off_t st_size;
	time_t st_atime;
	long int st_spare1;
	time_t st_mtime;
	long int st_spare2;
	time_t st_ctime;
	long int st_spare3;
	long int st_blksize;
	long int st_blocks;
	long int st_spare4[2];
};

typedef void (*FScriptCommandFun)(/* parameters unknown */);
typedef void (*FScriptFun)(/* parameters unknown */);

struct EScriptFunDef {
	char *name;
	char *parameterTypes;
	char returnType;
	FScriptFun pFunction;
};

struct TLinkedList<ESchedCommand,16,20> {
protected:
	ESchedCommand *m_pHead;
	ESchedCommand *m_pTail;
	
public:
	TLinkedList<ESchedCommand,16,20>& operator=();
	TLinkedList();
	TLinkedList();
	static ESchedCommand*& Last(/* parameters unknown */);
	static ESchedCommand*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	ESchedCommand* Head();
	ESchedCommand* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct TLinkedList<EUpdateInstance,8,12> {
protected:
	EUpdateInstance *m_pHead;
	EUpdateInstance *m_pTail;
	
public:
	TLinkedList<EUpdateInstance,8,12>& operator=();
	TLinkedList();
	TLinkedList();
	static EUpdateInstance*& Last(/* parameters unknown */);
	static EUpdateInstance*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EUpdateInstance* Head();
	EUpdateInstance* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

struct TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> {
protected:
	EStringRedBlackTreeNoCaseNoCaseNode *m_pHead;
	EStringRedBlackTreeNoCaseNoCaseNode *m_pTail;
	
public:
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16>& operator=();
	TLinkedList();
	TLinkedList();
	static EStringRedBlackTreeNoCaseNoCaseNode*& Last(/* parameters unknown */);
	static EStringRedBlackTreeNoCaseNoCaseNode*& Next(/* parameters unknown */);
	void Init();
	void RemoveAll();
	EStringRedBlackTreeNoCaseNoCaseNode* Head();
	EStringRedBlackTreeNoCaseNoCaseNode* Tail();
	bool IsEmpty();
	void AddHead();
	void AddTail();
	void AddHead();
	void AddTail();
	void InsertBefore();
	void InsertAfter();
	void Remove();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	void SetHeadAndTail();
	int GetSize();
	int GetCount();
};

// warning: multiple differing types with the same name (type name not equal)
typedef struct {
	_Bigint *_next;
	int _k;
	int _maxwds;
	int _sign;
	int _wds;
	ULong _x[1];
} _Bigint;

typedef union {
	double value;
	struct {
		__uint32_t lsw;
		__uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union {
	float value;
	__uint32_t word;
} ieee_float_shape_type;

typedef long unsigned int sigset_t;

struct sigaction {
	void (*sa_handler)(/* parameters unknown */);
	sigset_t sa_mask;
	int sa_flags;
};

typedef int sig_atomic_t;

enum {
	__no_type_class = -1,
	__void_type_class = 0,
	__integer_type_class = 1,
	__char_type_class = 2,
	__enumeral_type_class = 3,
	__boolean_type_class = 4,
	__pointer_type_class = 5,
	__reference_type_class = 6,
	__offset_type_class = 7,
	__real_type_class = 8,
	__complex_type_class = 9,
	__function_type_class = 10,
	__method_type_class = 11,
	__record_type_class = 12,
	__union_type_class = 13,
	__array_type_class = 14,
	__string_type_class = 15,
	__set_type_class = 16,
	__file_type_class = 17,
	__lang_type_class = 18
};

typedef union {
	double value;
	struct {
		unsigned int fraction1;
		unsigned int fraction0 : 20;
		unsigned int exponent : 11;
		unsigned int sign : 1;
	} number;
	struct {
		unsigned int function1;
		unsigned int function0 : 19;
		unsigned int quiet : 1;
		unsigned int exponent : 11;
		unsigned int sign : 1;
	} nan;
	struct {
		long unsigned int lsw;
		long unsigned int msw;
	} parts;
	long int aslong[2];
} __ieee_double_shape_type;

typedef union {
	float value;
	struct {
		unsigned int fraction0 : 7;
		unsigned int fraction1 : 16;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} number;
	struct {
		unsigned int function1 : 16;
		unsigned int function0 : 6;
		unsigned int quiet : 1;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} nan;
	long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union {
	double d;
	__uint32_t i[2];
};

// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int ULong;

enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

typedef malloc_chunk *mchunkptr;
struct IDirectDrawSurface;
struct IDirectDraw;
struct IDirectDraw2;
struct IDirectDraw4;
struct IDirectDrawSurface2;
struct IDirectDrawSurface3;
struct IDirectDrawSurface4;
struct IDirectDrawPalette;
struct IDirectDrawClipper;
struct IDirectDrawColorControl;
struct IDirect3D;
struct IDirect3D2;
struct IDirect3D3;
struct IDirect3DDevice;
struct IDirect3DDevice2;
struct IDirect3DDevice3;
struct IDirect3DExecuteBuffer;
struct IDirect3DLight;
struct IDirect3DMaterial;
struct IDirect3DMaterial2;
struct IDirect3DMaterial3;
struct IDirect3DTexture;
struct IDirect3DTexture2;
struct IDirect3DViewport;
struct IDirect3DViewport2;
struct IDirect3DViewport3;
struct VBAnimMgr;
struct NLIteratorPtrType;
struct RBIteratorPtrType;
struct TRect<int>;
struct HTIteratorPtrType;
struct StackString2<260>;
struct reverse_iterator<UnlockedId *,UnlockedId,UnlockedId &,int>;
struct reverse_iterator<const UnlockedId *,UnlockedId,const UnlockedId &,int>;
struct FTIteratorPtrType;
struct OTIteratorPtrType;
struct TNodeList<cXObject *>;
struct TNodeList<ERoom *>;
enum RenderLayer};
struct Skill;
struct TNodeList<cXPerson *>;
struct reverse_iterator<Neighbor **,Neighbor *,Neighbor *&,int>;
struct reverse_iterator<Neighbor *const *,Neighbor *,Neighbor *const &,int>;
struct reverse_iterator<int *,int,int &,int>;
struct reverse_iterator<const int *,int,const int &,int>;
struct reverse_iterator<float *,float,float &,int>;
struct reverse_iterator<const float *,float,const float &,int>;
struct reverse_iterator<EPropItem **,EPropItem *,EPropItem *&,int>;
struct reverse_iterator<EPropItem *const *,EPropItem *,EPropItem *const &,int>;
struct SRBIteratorPtrType;
struct TNodeList<EParticleObj *>;
struct reverse_iterator<StackElem **,StackElem *,StackElem *&,int>;
struct reverse_iterator<StackElem *const *,StackElem *,StackElem *const &,int>;
struct reverse_iterator<ObjectSlot *,ObjectSlot,ObjectSlot &,int>;
struct reverse_iterator<const ObjectSlot *,ObjectSlot,const ObjectSlot &,int>;
struct reverse_iterator<RoutingSlot *,RoutingSlot,RoutingSlot &,int>;
struct reverse_iterator<const RoutingSlot *,RoutingSlot,const RoutingSlot &,int>;
struct reverse_iterator<SpriteSlot *,SpriteSlot,SpriteSlot &,int>;
struct reverse_iterator<const SpriteSlot *,SpriteSlot,const SpriteSlot &,int>;
struct reverse_iterator<CTilePt *,CTilePt,CTilePt &,int>;
struct reverse_iterator<const CTilePt *,CTilePt,const CTilePt &,int>;
struct reverse_iterator<EVec3 *,EVec3,EVec3 &,int>;
struct reverse_iterator<const EVec3 *,EVec3,const EVec3 &,int>;
struct reverse_iterator<PenaltyRect *,PenaltyRect,PenaltyRect &,int>;
struct reverse_iterator<const PenaltyRect *,PenaltyRect,const PenaltyRect &,int>;
struct reverse_bidirectional_iterator<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,pair<const short unsigned int,RoomImpl *> &,int>;
struct reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,pair<const short unsigned int,RoomImpl *>,const pair<const short unsigned int,RoomImpl *> &,int>;
struct pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > >;
struct pair<__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> >,__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > >;
struct value_compare;
struct __rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >;
struct reverse_bidirectional_iterator<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int>;
struct reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,const pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &,int>;
struct pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > >;
struct pair<__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__rb_tree_const_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > >;
enum WallMode};
enum PortalType};
struct reverse_iterator<unsigned int *,unsigned int,unsigned int &,int>;
struct reverse_iterator<const unsigned int *,unsigned int,const unsigned int &,int>;
struct reverse_iterator<ObjSelector **,ObjSelector *,ObjSelector *&,int>;
struct reverse_iterator<ObjSelector *const *,ObjSelector *,ObjSelector *const &,int>;
struct cConstArrayRow<TileWallStorage>;
struct cConstArrayRow<unsigned char>;
struct reverse_iterator<FamilyImpl **,FamilyImpl *,FamilyImpl *&,int>;
struct reverse_iterator<FamilyImpl *const *,FamilyImpl *,FamilyImpl *const &,int>;
struct reverse_iterator<FamilyMember *,FamilyMember,FamilyMember &,int>;
struct reverse_iterator<const FamilyMember *,FamilyMember,const FamilyMember &,int>;
struct IDirectMusicAudioPath;
struct IDirectMusicSegment8;
struct IDirectSoundBuffer8;
struct reverse_iterator<FTilePt *,FTilePt,FTilePt &,int>;
struct reverse_iterator<const FTilePt *,FTilePt,const FTilePt &,int>;
struct rtx_def;
struct ERQTable<snd::EventMapping>;
struct reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,int> >,pair<const int,int>,pair<const int,int> &,int>;
struct reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,int> >,pair<const int,int>,const pair<const int,int> &,int>;
struct pair<__rb_tree_iterator<pair<const int,int> >,bool>;
struct ERQTable<snd::TrackData>;
struct __list_const_iterator<cSoundCacheHandle>;
struct reverse_bidirectional_iterator<__list_iterator<cSoundCacheHandle>,cSoundCacheHandle,cSoundCacheHandle &,int>;
struct reverse_bidirectional_iterator<__list_const_iterator<cSoundCacheHandle>,cSoundCacheHandle,const cSoundCacheHandle &,int>;
struct __rb_tree_const_iterator<pair<const int,cHitControlGroup *> >;
struct reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,pair<const int,cHitControlGroup *> &,int>;
struct reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,pair<const int,cHitControlGroup *>,const pair<const int,cHitControlGroup *> &,int>;
struct pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,__rb_tree_iterator<pair<const int,cHitControlGroup *> > >;
struct pair<__rb_tree_const_iterator<pair<const int,cHitControlGroup *> >,__rb_tree_const_iterator<pair<const int,cHitControlGroup *> > >;
struct __list_iterator<unsigned int>;
struct __list_const_iterator<unsigned int>;
struct reverse_bidirectional_iterator<__list_iterator<unsigned int>,unsigned int,unsigned int &,int>;
struct reverse_bidirectional_iterator<__list_const_iterator<unsigned int>,unsigned int,const unsigned int &,int>;
struct __rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >;
struct reverse_bidirectional_iterator<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,pair<const cSoundCacheHandle,int> &,int>;
struct reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,pair<const cSoundCacheHandle,int>,const pair<const cSoundCacheHandle,int> &,int>;
struct pair<__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> >,__rb_tree_const_iterator<pair<const cSoundCacheHandle,int> > >;
struct cRZCallbackTimer;
struct reverse_bidirectional_iterator<__rb_tree_iterator<int>,int,int &,int>;
struct reverse_bidirectional_iterator<__rb_tree_const_iterator<int>,int,const int &,int>;
struct pair<__rb_tree_iterator<int>,__rb_tree_iterator<int> >;
struct pair<__rb_tree_const_iterator<int>,__rb_tree_const_iterator<int> >;
struct __list_const_iterator<cFreshPlayer *>;
struct reverse_bidirectional_iterator<__list_iterator<cFreshPlayer *>,cFreshPlayer *,cFreshPlayer *&,int>;
struct reverse_bidirectional_iterator<__list_const_iterator<cFreshPlayer *>,cFreshPlayer *,cFreshPlayer *const &,int>;
struct reverse_iterator<RouteGoal *,RouteGoal,RouteGoal &,int>;
struct reverse_iterator<const RouteGoal *,RouteGoal,const RouteGoal &,int>;
struct reverse_iterator<ASTNode *,ASTNode,ASTNode &,int>;
struct reverse_iterator<const ASTNode *,ASTNode,const ASTNode &,int>;
struct reverse_iterator<tagPOINT *,tagPOINT,tagPOINT &,int>;
struct reverse_iterator<const tagPOINT *,tagPOINT,const tagPOINT &,int>;
struct reverse_iterator<SlotDescriptor *,SlotDescriptor,SlotDescriptor &,int>;
struct reverse_iterator<const SlotDescriptor *,SlotDescriptor,const SlotDescriptor &,int>;
struct reverse_iterator<ScoredInteraction *,ScoredInteraction,ScoredInteraction &,int>;
struct reverse_iterator<const ScoredInteraction *,ScoredInteraction,const ScoredInteraction &,int>;
struct reverse_iterator<MotiveInc *,MotiveInc,MotiveInc &,int>;
struct reverse_iterator<const MotiveInc *,MotiveInc,const MotiveInc &,int>;
struct reverse_iterator<XRoute *,XRoute,XRoute &,int>;
struct reverse_iterator<const XRoute *,XRoute,const XRoute &,int>;
struct reverse_iterator<ObjectRecord *,ObjectRecord,ObjectRecord &,int>;
struct reverse_iterator<const ObjectRecord *,ObjectRecord,const ObjectRecord &,int>;
struct reverse_iterator<LogInteractionSample *,LogInteractionSample,LogInteractionSample &,int>;
struct reverse_iterator<const LogInteractionSample *,LogInteractionSample,const LogInteractionSample &,int>;
struct reverse_iterator<LogInteraction *,LogInteraction,LogInteraction &,int>;
struct reverse_iterator<const LogInteraction *,LogInteraction,const LogInteraction &,int>;
struct reverse_iterator<LogPersonTracker *,LogPersonTracker,LogPersonTracker &,int>;
struct reverse_iterator<const LogPersonTracker *,LogPersonTracker,const LogPersonTracker &,int>;
struct reverse_iterator<PrimitiveSample *,PrimitiveSample,PrimitiveSample &,int>;
struct reverse_iterator<const PrimitiveSample *,PrimitiveSample,const PrimitiveSample &,int>;
struct reverse_iterator<SimTickSample *,SimTickSample,SimTickSample &,int>;
struct reverse_iterator<const SimTickSample *,SimTickSample,const SimTickSample &,int>;
struct reverse_iterator<SimLoopObjectSample *,SimLoopObjectSample,SimLoopObjectSample &,int>;
struct reverse_iterator<const SimLoopObjectSample *,SimLoopObjectSample,const SimLoopObjectSample &,int>;
struct reverse_iterator<SimLoopTickSample *,SimLoopTickSample,SimLoopTickSample &,int>;
struct reverse_iterator<const SimLoopTickSample *,SimLoopTickSample,const SimLoopTickSample &,int>;
struct reverse_iterator<cXPersonImpl **,cXPersonImpl *,cXPersonImpl *&,int>;
struct reverse_iterator<cXPersonImpl *const *,cXPersonImpl *,cXPersonImpl *const &,int>;
struct reverse_iterator<cXObjectImpl **,cXObjectImpl *,cXObjectImpl *&,int>;
struct reverse_iterator<cXObjectImpl *const *,cXObjectImpl *,cXObjectImpl *const &,int>;
struct reverse_iterator<short int *,short int,short int &,int>;
struct reverse_iterator<const short int *,short int,const short int &,int>;
struct reverse_iterator<cXPortal **,cXPortal *,cXPortal *&,int>;
struct reverse_iterator<cXPortal *const *,cXPortal *,cXPortal *const &,int>;
struct reverse_bidirectional_iterator<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,pair<const ResFile *const,FileRec> &,int>;
struct reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,pair<const ResFile *const,FileRec>,const pair<const ResFile *const,FileRec> &,int>;
struct pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,__rb_tree_iterator<pair<const ResFile *const,FileRec> > >;
struct pair<__rb_tree_const_iterator<pair<const ResFile *const,FileRec> >,__rb_tree_const_iterator<pair<const ResFile *const,FileRec> > >;
struct vector<char *,__malloc_alloc_template<0> >;
struct reverse_iterator<vector<char *,__malloc_alloc_template<0> > *,vector<char *,__malloc_alloc_template<0> >,vector<char *,__malloc_alloc_template<0> > &,int>;
struct reverse_iterator<const vector<char *,__malloc_alloc_template<0> > *,vector<char *,__malloc_alloc_template<0> >,const vector<char *,__malloc_alloc_template<0> > &,int>;
struct reverse_iterator<ObjectTypeAttrBlock **,ObjectTypeAttrBlock *,ObjectTypeAttrBlock *&,int>;
struct reverse_iterator<ObjectTypeAttrBlock *const *,ObjectTypeAttrBlock *,ObjectTypeAttrBlock *const &,int>;
struct reverse_iterator<cXPerson **,cXPerson *,cXPerson *&,int>;
struct reverse_iterator<cXPerson *const *,cXPerson *,cXPerson *const &,int>;
struct reverse_iterator<PersDataPair *,PersDataPair,PersDataPair &,int>;
struct reverse_iterator<const PersDataPair *,PersDataPair,const PersDataPair &,int>;
struct reverse_iterator<IFFResNode *,IFFResNode,IFFResNode &,int>;
struct reverse_iterator<const IFFResNode *,IFFResNode,const IFFResNode &,int>;
struct reverse_iterator<IFFResList *,IFFResList,IFFResList &,int>;
struct reverse_iterator<const IFFResList *,IFFResList,const IFFResList &,int>;
struct reverse_iterator<iResFile **,iResFile *,iResFile *&,int>;
struct reverse_iterator<iResFile *const *,iResFile *,iResFile *const &,int>;
struct reverse_iterator<cGZSnd **,cGZSnd *,cGZSnd *&,int>;
struct reverse_iterator<cGZSnd *const *,cGZSnd *,cGZSnd *const &,int>;
struct reverse_iterator<cSoundCacheItem **,cSoundCacheItem *,cSoundCacheItem *&,int>;
struct reverse_iterator<cSoundCacheItem *const *,cSoundCacheItem *,cSoundCacheItem *const &,int>;
struct Vertex;
struct cArray<PackedAlt>;
struct cConstArrayRow<short unsigned int>;
struct cConstArrayRow<VertexConfig>;
struct reverse_iterator<RelInt *,RelInt,RelInt &,int>;
struct reverse_iterator<const RelInt *,RelInt,const RelInt &,int>;
struct reverse_iterator<RelArray **,RelArray *,RelArray *&,int>;
struct reverse_iterator<RelArray *const *,RelArray *,RelArray *const &,int>;
struct reverse_iterator<cXPortalImpl **,cXPortalImpl *,cXPortalImpl *&,int>;
struct reverse_iterator<cXPortalImpl *const *,cXPortalImpl *,cXPortalImpl *const &,int>;
struct reverse_iterator<LightEntry *,LightEntry,LightEntry &,int>;
struct reverse_iterator<const LightEntry *,LightEntry,const LightEntry &,int>;
struct TLinkedList<EDebugMessage,0,4>;
struct STNCIteratorPtrType;
struct SRBNCIteratorPtrType;
struct ERQTable<Sim::Table>;
struct ERQTable<Sim::CostumeSet>;
struct ERQTable<Sim::NPC>;
struct ERQTable<GlobalResFile>;
struct ERQTable<WStringSet>;
struct vec3;
struct FindTreeNewParam;
enum RecursionParam};

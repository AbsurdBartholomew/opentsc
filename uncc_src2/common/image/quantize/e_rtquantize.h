// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_IMAGE_QUANTIZE_E_RTQUANTIZE_H
#define C__EOR_SRC2_COMMON_IMAGE_QUANTIZE_E_RTQUANTIZE_H

struct ERTQNode {
	ERTQNode *parent;
	ERTQNode *child[8];
	u32 number_colors;
	u32 number_unique;
	u16 children;
	u8 level;
	u8 color_number;
	u8 id;
	EVec3 vMidColor;
	EVec3 vTotalColor;
};

struct ERTQCacheNode {
	u32 color;
	int data;
};

struct ERTQuantize {
protected:
	ERTQCacheNode m_cache[511];
	FnAlloc m_pfnAlloc;
	FnFree m_pfnFree;
	ERTQNode *m_root;
	void *m_pFreeNodeHead;
	void *m_pSegHead;
	u32 m_mode;
	u32 m_nNodes;
	u32 m_maxColors;
	u32 m_maxNodes;
	u32 m_depth;
	u32 m_nPixels;
	u32 m_nColors;
	u32 m_pruningThreshold;
	u32 m_nextPruningThreshold;
	unsigned int m_shift[11];
	u32 m_color_number;
	EVec3 m_colormap[256];
	EVec3 m_vColor;
	float m_distance;
	EMat4 m_mTrans;
	EMat4 m_mInvTrans;
	bool m_YUVColorSpace;
	
public:
	ERTQuantize& operator=();
	ERTQuantize();
	ERTQuantize();
	ERTQuantize(ERTQuantize*, int, void);
	void Init(u32 maxColors, u32 maxMemUsage, FnAlloc pfnAlloc, FnFree pfnFree, bool YUVColorSpace);
	void AddPixel(unsigned char *color);
	void Compute();
	int GetPaletteSize();
	void GetPaletteEntry(int index, unsigned char *colorOut);
	int GetClosestColor(unsigned char *color);
	void Deallocate();
protected:
	void InitializeCube();
	void FlushAdd(ERTQCacheNode &cn);
	ERTQNode* InitializeNode(u8 id, u32 level, ERTQNode *parent, EVec3 &vMidColor);
	void Classify(EVec3 &vColor, int count);
	void PruneLevel(ERTQNode *node);
	void PruneChild(ERTQNode *node);
	void Reduction();
	void Reduce(ERTQNode *node);
	void MColormap(ERTQNode *node);
	void TransformToYuv(unsigned char *colorIn, EVec3 &vYuvOut);
	void TransformFromYUV(EVec3 &vYuvIn, unsigned char *colorOut);
	void ClosestColor(ERTQNode *node);
	ERTQNode* AllocNode();
	void FreeNode();
	void* AllocNewSeg();
	static void* DefaultAlloc(/* parameters unknown */);
	static void DefaultFree(/* parameters unknown */);
};

void ERTQuantize::~ERTQuantize(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_IMAGE_QUANTIZE_E_RTQUANTIZE_H

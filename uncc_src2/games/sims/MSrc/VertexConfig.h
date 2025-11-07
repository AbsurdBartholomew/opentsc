// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_VERTEXCONFIG_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_VERTEXCONFIG_H

enum Wall {
	kNE = 1,
	kNW = 2,
	kSW = 4,
	kSE = 8,
	kN = 16,
	kW = 32,
	kS = 64,
	kE = 128
};

struct VertexConfig {
private:
	unsigned char mWalls;
	static unsigned char kInvalidConfig;
	static unsigned char sRotationLookup[3][256];
	static bool sBranchTable[256];
	static bool sRootTable[256];
	static bool sLookupsGenerated;
	
public:
	VertexConfig(int in);
	VertexConfig();
	VertexConfig(VertexConfig*, int, void);
	VertexConfig& operator=(VertexConfig &in);
	VertexConfig();
	bool operator==(VertexConfig &in);
	bool operator<(VertexConfig &in);
	bool Has(Wall &in);
	VertexConfig& Add(VertexConfig &in);
	VertexConfig& Add();
	VertexConfig& Remove(VertexConfig &in);
	VertexConfig& Remove();
	bool IsValid();
	bool IsEmpty();
	int ToInt();
	VertexConfig& Rotate(int inRotation);
	VertexConfig& Clear();
	bool HasBranch();
	bool IsRoot();
	static void GenerateLookups(/* parameters unknown */);
};

extern bool VertexConfig::sLookupsGenerated;
extern unsigned char VertexConfig::kInvalidConfig;
extern unsigned char VertexConfig::sRotationLookup[3][256];
extern bool VertexConfig::sBranchTable[256];
extern bool VertexConfig::sRootTable[256];

void VertexConfig::~VertexConfig(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_VERTEXCONFIG_H

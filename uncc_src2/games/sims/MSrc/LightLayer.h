// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_LIGHTLAYER_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_LIGHTLAYER_H

enum ObjectLightSource {
	kOLS_None = 0,
	kOLS_Lamp = 1
};

struct LightLayer {
	__vtbl_ptr_type *$vf1675;
	
	LightLayer();
protected:
	LightLayer();
	/* vtable[1] */ virtual LightLayer(LightLayer*, int, void);
public:
	/* vtable[2] */ virtual LightLayer& operator=();
	/* vtable[3] */ virtual LightEntry& Get();
	/* vtable[4] */ virtual LightEntry& Get();
	/* vtable[5] */ virtual void Set();
	/* vtable[6] */ virtual void Clear();
	/* vtable[7] */ virtual void PositionLight();
	/* vtable[8] */ virtual void RemoveLight();
	/* vtable[9] */ virtual void DoOffset();
	static LightLayer* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type LightLayerImpl virtual table[11];
extern __vtbl_ptr_type LightLayer virtual table[11];

void LightLayerImpl::~LightLayerImpl(int __in_chrg);
void LightLayer::~LightLayer(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_LIGHTLAYER_H

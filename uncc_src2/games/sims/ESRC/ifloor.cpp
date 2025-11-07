// STATUS: NOT STARTED

#include "ifloor.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb3268;
	__vtbl_ptr_type *$vf3332;
	
	cXObject& operator=();
	cXObject();
protected:
	cXObject();
	/* vtable[1] */ virtual cXObject(cXObject*, int, void);
	void setObjectImpl();
	void setPersonImpl();
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[7] */ virtual void SetHilite(cXObject*, int, void);
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
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static void SetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[29] */ virtual void Error();
	/* vtable[30] */ virtual void HandleError();
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
	/* vtable[48] */ virtual void SetLevel(cXObject*, int, void);
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
	/* vtable[62] */ virtual void SetIdleStatus(cXObject*, int, void);
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
	static Int GetPersonWidth(/* parameters unknown */);
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
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	static Int GetWallBlockFlagsAtTile(/* parameters unknown */);
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
	cXObjectImpl* CAST_IMPL();
};

struct EFloorVertTint {
	u8 r;
	u8 g;
};

typedef TFixedPool<EIFloor,100> EIFloorPool;
typedef TFixedPool<EOrderTableData,6400> EIFloorEOrderTableDataPool;

struct TFixedPool<EIFloor,100> : EFixedPool {
protected:
	unsigned int m_buffer[5200];
	
public:
	TFixedPool<EIFloor,100>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<EIFloor,100>*, int, void);
	TFixedPool();
	EIFloor* Alloc();
	void Free();
protected:
	void Free();
};

struct TFixedPool<EOrderTableData,6400> : EFixedPool {
protected:
	unsigned int m_buffer[76800];
	
public:
	TFixedPool<EOrderTableData,6400>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<EOrderTableData,6400>*, int, void);
	TFixedPool();
	EOrderTableData* Alloc();
	void Free();
protected:
	void Free();
};

EIFloorLightMapMan EIFloor::m_lightmapman = {
	/* .m_lightmaps = */ {
		/* base class 0 = */ {
			/* .m_list = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_pRoot = */ NULL
		}
	}
};

EIFloorPool *_eIFloorAllocPool = NULL;
EIFloorEOrderTableDataPool *_eIFloorOtdPool = NULL;
u32 EIFloor::m_nAlloced = 0;

EIFloorTable EIFloor::m_floors = {
	/* base class 0 = */ {
		/* .m_list = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_pRoot = */ NULL
	}
};

EFloorShdTblNode EFloorShdTblNode::_eFloorOrderTable[64] = {
	/* [0] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [1] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [2] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [3] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [4] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [5] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [6] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [7] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [8] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [9] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [10] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [11] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [12] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [13] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [14] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [15] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [16] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [17] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [18] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [19] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [20] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [21] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [22] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [23] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [24] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [25] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [26] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [27] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [28] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [29] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [30] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [31] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [32] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [33] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [34] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [35] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [36] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [37] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [38] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [39] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [40] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [41] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [42] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [43] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [44] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [45] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [46] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [47] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [48] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [49] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [50] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [51] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [52] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [53] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [54] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [55] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [56] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [57] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [58] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [59] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [60] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [61] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [62] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	},
	/* [63] = */ {
		/* .m_pShader = */ NULL,
		/* .m_stripList = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		}
	}
};

EIFloorDiagonalDataList EFloorShdTblNode::m_diagonalTiles = {
	/* base class 0 = */ {
		/* .m_l = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		}
	}
};

bool EFloorShdTblNode::m_bTableInited = false;
int EFloorShdTblNode::_m_nStrips = 0;
static float _baseFrequency = 0.05f;
static float _startR = 128.f;
static float _startG = 128.f;
static float _intensityVariationR = 43.85f;
static float _intensityVariationG = 28.3141594f;
ETypeInfo *gpTypeInfo_EIFloor = NULL;

EVec2 _vDiagSides[4][3] = {
	/* [0] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	},
	/* [1] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	},
	/* [2] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	},
	/* [3] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	}
};

EVec2 _vDiagSidesTc[4][3] = {
	/* [0] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	},
	/* [1] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	},
	/* [2] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	},
	/* [3] = */ {
		/* [0] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [1] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		},
		/* [2] = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f
				}
			}
		}
	}
};

__vtbl_ptr_type EIFloor virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::SafeDelete,
		/* .__delta2 = */ -22952
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::GetTypeInfo,
		/* .__delta2 = */ -22896
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::GetTypeName,
		/* .__delta2 = */ -22880
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::GetTypeKey,
		/* .__delta2 = */ -22864
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::GetTypeVersion,
		/* .__delta2 = */ -22848
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::~EIFloor,
		/* .__delta2 = */ -22720
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Read,
		/* .__delta2 = */ -8544
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Write,
		/* .__delta2 = */ -8776
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::Update,
		/* .__delta2 = */ -22600
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::VisibilityTest,
		/* .__delta2 = */ -29440
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFloor::Draw,
		/* .__delta2 = */ -29768
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetOrient,
		/* .__delta2 = */ -5168
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollidePointWithInstance,
		/* .__delta2 = */ -5152
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideSphereWithInstance,
		/* .__delta2 = */ -5144
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetBoundSphere,
		/* .__delta2 = */ -8224
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EFloorVertTint _vertColorLookup[63][63] = {
	/* [0] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [1] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [2] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [3] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [4] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [5] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [6] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [7] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [8] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [9] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [10] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [11] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [12] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [13] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [14] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [15] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [16] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [17] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [18] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [19] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [20] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [21] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [22] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [23] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [24] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [25] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [26] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [27] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [28] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [29] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [30] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [31] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [32] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [33] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [34] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [35] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [36] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [37] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [38] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [39] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [40] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [41] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [42] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [43] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [44] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [45] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [46] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [47] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [48] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [49] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [50] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [51] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [52] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [53] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [54] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [55] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [56] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [57] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [58] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [59] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [60] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [61] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	},
	/* [62] = */ {
		/* [0] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [1] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [2] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [3] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [4] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [5] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [6] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [7] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [8] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [9] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [10] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [11] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [12] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [13] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [14] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [15] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [16] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [17] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [18] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [19] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [20] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [21] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [22] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [23] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [24] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [25] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [26] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [27] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [28] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [29] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [30] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [31] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [32] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [33] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [34] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [35] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [36] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [37] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [38] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [39] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [40] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [41] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [42] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [43] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [44] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [45] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [46] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [47] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [48] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [49] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [50] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [51] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [52] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [53] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [54] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [55] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [56] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [57] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [58] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [59] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [60] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [61] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		},
		/* [62] = */ {
			/* .r = */ 0,
			/* .g = */ 0
		}
	}
};

ETypeInfo EIFloor::m_typeInfo;

void InitVertColorLookup() {
	int i;
	int j;
	float x;
	float y;
	
  int iVar1;
  int iVar2;
  EFloorVertTint *color;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = 0;
  fVar6 = 0.5;
  iVar2 = 0;
  do {
    iVar1 = iVar5 + -1;
    iVar5 = iVar5 + 1;
    color = (EFloorVertTint *)(&_vertColorLookup[0].r + iVar2);
    iVar2 = -1;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      Get2DNoiseIntensity__FR14EFloorVertTintff(color,(float)iVar1 + fVar6,(float)iVar2 + fVar6);
      color = color + 1;
      iVar2 = iVar3;
      iVar3 = iVar4;
    } while (iVar4 < 0x3f);
    iVar2 = iVar5 * 0x7e;
  } while (iVar5 < 0x3f);
  return;
}

float EIFloor::GetFloorMeterValue() {
  float fVar1;
  
  if ((int)_7EIFloor_m_nAlloced < 0) {
    fVar1 = (float)(_7EIFloor_m_nAlloced & 1 | _7EIFloor_m_nAlloced >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)_7EIFloor_m_nAlloced;
  }
  return fVar1 * 0.01;
}

void EIFloor::CollectWallLightMaps(TRedBlackTree<EILightmap *,EILightmap *> &tree) {
  CollectWallLightMaps__18EIFloorLightMapManRt13TRedBlackTree2ZP10EILightmapZP10EILightmap
            (&_7EIFloor_m_lightmapman,tree);
  return;
}

void EIFloorLightMapMan::CollectWallLightMaps(TRedBlackTree<EILightmap *,EILightmap *> &tree) {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	TRedBlackTree<EILightmap *,EILightmap *> *this;
	
  uint key;
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_lightmaps).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    key = pEVar1->value;
    while( true ) {
      Insert__13ERedBlackTreeUiUib(&tree->field0_0x0,key,key,false);
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      key = pEVar1->value;
    }
  }
  return;
}

void EIFloorLightMapMan::CreateLightMaps(ERLevel *pLevel) {
	TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *> *this;
	
  EILightmapForRoom *this_00;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
  this_00 = (EILightmapForRoom *)_memmanAlloc__FUiUi(0x180,0x10);
  __10EILightmap((EILightmap__0_4024 *)this_00);
                    /* end of inlined section */
  this_00->m_roomID = 0;
  Create__10EILightmapii((EILightmap__0_4024 *)this_00,0x80,0x80);
  SetLightmapPos__Q218EIFloorLightMapMan17EILightmapForRoomP4Room(this_00,(Room *)0x0);
  InsertInstance__7ERLevelP9EInstanceT1(pLevel,(EInstance *)this_00,(EInstance *)0x0);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Insert__13ERedBlackTreeUiUib((ERedBlackTree *)this,this_00->m_roomID,(uint)this_00,false);
  return;
}

void EIFloorLightMapMan::EILightmapForRoom::SetLightmapPos(Room *pRoom) {
	EVec3 vHouseOff;
	EHouse *this;
	RoomImpl *pRoomImpl;
	CTilePt *it;
	EBound3 bound;
	EMat4 mOr;
	EVec3 vHalf;
	EVec3 vXDelt;
	EVec3 vYDelt;
	RoomImpl *this;
	EVec3 v3;
	int size;
	Room *pOutSideRoom;
	RoomImpl *pRoomImpl;
	CTilePt *it;
	EBound3 bound;
	EMat4 mOr;
	EVec3 vHalf;
	EVec3 vXDelt;
	EVec3 vYDelt;
	RoomImpl *this;
	EVec3 v3;
	
  undefined *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  EBound3 *pEVar11;
  EMat4 *pEVar12;
  char *pcVar13;
  EVec3 *pEVar14;
  EVec3 *pEVar15;
  char *pcVar16;
  ulong in_t0;
  float fVar17;
  float fVar18;
  EVec3 vHouseOff;
  EBound3 bound;
  EVec3 v3;
  undefined auStack_114 [4];
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  EVec3 vHalf;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  EVec3 vXDelt;
  EVec3 vYDelt;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  vHouseOff.field0_0x0.d[0] = ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
  vHouseOff.field0_0x0.d[1] = ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1];
                    /* end of inlined section */
  vHouseOff.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  if (pRoom == (Room *)0x0) {
    iVar8 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar9 = (int *)(*(code *)_5Globs_pRoomManager->__vtable->ClearRoomPartitions)
                              ((int)&_5Globs_pRoomManager->__vtable +
                               (int)*(short *)&_5Globs_pRoomManager->__vtable->GetHouse,0);
    iVar10 = (**(code **)(*piVar9 + 0x3c))();
                    /* inlined from ../MSrc/Vector.h */
    pcVar13 = *(char **)(iVar10 + 8);
                    /* end of inlined section */
    cVar2 = pcVar13[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    v3.field0_0x0.d[1] = (float)(int)cVar2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    v3.field0_0x0.d[0] = (float)(int)*pcVar13;
    uVar7 = CONCAT44(v3.field0_0x0.d[1],(float)(int)*pcVar13);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)&bound.vMax & 7;
    puVar6 = (ulong *)((int)&bound.vMax - uVar5);
    *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    bound.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar4 = (uint)&bound.vMax & 7;
    bound.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
         (long)cVar2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)&bound.vMax - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
              (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar5) * 8;
    bound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    if (pcVar13 != *(char **)(iVar10 + 0xc)) {
      cVar2 = *pcVar13;
      do {
        pcVar16 = pcVar13 + 3;
        if ((long)cVar2 < 1) {
LAB_00167598:
                    /* inlined from ../MSrc/Vector.h */
          pcVar13 = *(char **)(iVar10 + 0xc);
        }
        else {
          if ((long)cVar2 <= (long)(iVar8 + -1)) {
            cVar3 = pcVar13[1];
            if (0 < (long)cVar3) {
              if ((long)(iVar8 + -1) < (long)cVar3) {
                pcVar13 = *(char **)(iVar10 + 0xc);
                goto LAB_0016759c;
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
              pEVar15 = &bound.vMax;
              v3.field0_0x0.d[0] = (float)(int)cVar2;
              v3.field0_0x0.d[1] = (float)(int)cVar3;
              pEVar11 = &bound;
              pEVar12 = (EMat4 *)&v3;
              do {
                fVar18 = (pEVar12->field0_0x0).d[0];
                fVar17 = ((EVec3__null___1__1 *)&pEVar11->vMin)->d[0];
                if (fVar18 <= fVar17) {
                  fVar17 = fVar18;
                }
                ((EVec3__null___1__1 *)&pEVar11->vMin)->d[0] = fVar17;
                fVar17 = (pEVar12->field0_0x0).d[0];
                if (fVar17 < (pEVar15->field0_0x0).d[0]) {
                  fVar17 = (pEVar15->field0_0x0).d[0];
                }
                (pEVar15->field0_0x0).d[0] = fVar17;
                pEVar12 = (EMat4 *)((int)&pEVar12->field0_0x0 + 4);
                pEVar15 = (EVec3 *)((int)&pEVar15->field0_0x0 + 4);
                pEVar11 = (EBound3 *)((int)&pEVar11->vMin + 4);
              } while ((int)pEVar12 < (int)auStack_114);
            }
            goto LAB_00167598;
          }
          pcVar13 = *(char **)(iVar10 + 0xc);
        }
LAB_0016759c:
                    /* end of inlined section */
        if (pcVar16 == pcVar13) break;
        cVar2 = *pcVar16;
        pcVar13 = pcVar16;
      } while( true );
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    bound.vMin.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    bound.vMax.field0_0x0.d[2] = 0.0;
    __as__5EMat4RC5EMat4((EMat4 *)&v3,&_mId);
                    /* end of inlined section */
    Translate__5EMat4RC5EVec3((EMat4 *)&v3,&vHouseOff);
    SwapXY__FR5EMat4((EMat4 *)&v3);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    vHalf.field0_0x0.d[0] =
         bound.vMax.field0_0x0.d[0] * v3.field0_0x0.d[0] + bound.vMax.field0_0x0.d[1] * local_110 +
         bound.vMax.field0_0x0.d[2] * local_100 + local_f0;
    vHalf.field0_0x0.d[1] =
         bound.vMax.field0_0x0.d[0] * v3.field0_0x0.d[1] + bound.vMax.field0_0x0.d[1] * local_10c +
         bound.vMax.field0_0x0.d[2] * local_fc + local_ec;
    vHalf.field0_0x0.d[2] =
         bound.vMax.field0_0x0.d[0] * v3.field0_0x0.d[2] + bound.vMax.field0_0x0.d[1] * local_108 +
         bound.vMax.field0_0x0.d[2] * local_f8 + local_e8;
                    /* end of inlined section */
    uVar7 = CONCAT44(vHalf.field0_0x0.d[1],vHalf.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)&bound.vMax & 7;
    puVar6 = (ulong *)((int)&bound.vMax - uVar5);
    *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    bound.vMax.field0_0x0.d[2] = vHalf.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    local_fc = bound.vMin.field0_0x0.d[2] * local_fc;
    local_f0 = bound.vMin.field0_0x0.d[0] * v3.field0_0x0.d[0] +
               bound.vMin.field0_0x0.d[1] * local_110 + bound.vMin.field0_0x0.d[2] * local_100 +
               local_f0;
    bound.vMin.field0_0x0.d[2] =
         bound.vMin.field0_0x0.d[0] * v3.field0_0x0.d[2] + bound.vMin.field0_0x0.d[1] * local_108 +
         bound.vMin.field0_0x0.d[2] * local_f8 + local_e8;
    local_ec = bound.vMin.field0_0x0.d[0] * v3.field0_0x0.d[1] +
               bound.vMin.field0_0x0.d[1] * local_10c + local_fc + local_ec;
    vHalf.field0_0x0.d[0] = local_f0;
    vHalf.field0_0x0.d[2] = bound.vMin.field0_0x0.d[2];
    vHalf.field0_0x0.d[1] = local_ec;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | CONCAT44(local_ec,local_f0) >> (7 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vHalf.field0_0x0.d[0] = 0.5;
    vHalf.field0_0x0.d[1] = 0.5;
    vYDelt.field0_0x0.d[2] = 0.0;
    bound.vMax.field0_0x0.d[0] = bound.vMax.field0_0x0.d[0] + 0.5;
    bound.vMax.field0_0x0.d[1] = bound.vMax.field0_0x0.d[1] + 0.5;
    vHalf.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    vXDelt.field0_0x0.d[0] = bound.vMax.field0_0x0.d[0] - (local_f0 - 0.5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    vYDelt.field0_0x0.d[1] = bound.vMax.field0_0x0.d[1] - (local_ec - 0.5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bound.vMin.field0_0x0._0_8_ = CONCAT44(local_ec - 0.5,local_f0 - 0.5);
    vXDelt.field0_0x0.d[1] = 0.0;
    vXDelt.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    vYDelt.field0_0x0.d[0] = 0.0;
    SetPosition__10EILightmapRC5EVec3N21((EILightmap__0_4024 *)this,&bound.vMin,&vXDelt,&vYDelt);
  }
  else {
    iVar8 = (*(code *)pRoom->__vtable->IsBathroom)
                      ((int)&pRoom->__vtable + (int)*(short *)&pRoom->__vtable->IsBedroom);
                    /* inlined from ../MSrc/Vector.h */
    pcVar13 = *(char **)(iVar8 + 8);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    v3.field0_0x0.d[0] = (float)(int)*pcVar13;
    v3.field0_0x0.d[1] = (float)(int)pcVar13[1];
    uVar7 = CONCAT44((float)(int)pcVar13[1],(float)(int)*pcVar13);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)&bound.vMax & 7;
    puVar6 = (ulong *)((int)&bound.vMax - uVar5);
    *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    bound.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar4 = (uint)&bound.vMax & 7;
    bound.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
         in_t0 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)&bound.vMax - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
              (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar5) * 8;
    bound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    if (pcVar13 != *(char **)(iVar8 + 0xc)) {
      cVar2 = pcVar13[1];
      while( true ) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
        v3.field0_0x0.d[1] = (float)(int)cVar2;
        v3.field0_0x0.d[0] = (float)(int)*pcVar13;
        pEVar11 = &bound;
        pEVar15 = &bound.vMax;
        pEVar14 = &v3;
        do {
          fVar17 = ((EVec3__null___1__1 *)&pEVar11->vMin)->d[0];
          if ((pEVar14->field0_0x0).d[0] <= fVar17) {
            fVar17 = (pEVar14->field0_0x0).d[0];
          }
          ((EVec3__null___1__1 *)&pEVar11->vMin)->d[0] = fVar17;
          fVar17 = (pEVar14->field0_0x0).d[0];
          if ((pEVar14->field0_0x0).d[0] < (pEVar15->field0_0x0).d[0]) {
            fVar17 = (pEVar15->field0_0x0).d[0];
          }
          (pEVar15->field0_0x0).d[0] = fVar17;
          pEVar14 = (EVec3 *)((int)&pEVar14->field0_0x0 + 4);
          pEVar15 = (EVec3 *)((int)&pEVar15->field0_0x0 + 4);
          pEVar11 = (EBound3 *)((int)&pEVar11->vMin + 4);
        } while ((int)pEVar14 < (int)auStack_114);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
        if (pcVar13 + 3 == *(char **)(iVar8 + 0xc)) break;
        cVar2 = pcVar13[4];
        pcVar13 = pcVar13 + 3;
      }
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    bound.vMin.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    bound.vMax.field0_0x0.d[2] = 0.0;
    __as__5EMat4RC5EMat4((EMat4 *)&local_110,&_mId);
                    /* end of inlined section */
    Translate__5EMat4RC5EVec3((EMat4 *)&local_110,&vHouseOff);
    SwapXY__FR5EMat4((EMat4 *)&local_110);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v3.field0_0x0.d[0] =
         bound.vMax.field0_0x0.d[0] * local_110 + bound.vMax.field0_0x0.d[1] * local_100 +
         bound.vMax.field0_0x0.d[2] * local_f0 + vHalf.field0_0x0.d[0];
    v3.field0_0x0.d[1] =
         bound.vMax.field0_0x0.d[0] * local_10c + bound.vMax.field0_0x0.d[1] * local_fc +
         bound.vMax.field0_0x0.d[2] * local_ec + vHalf.field0_0x0.d[1];
    v3.field0_0x0.d[2] =
         bound.vMax.field0_0x0.d[0] * local_108 + bound.vMax.field0_0x0.d[1] * local_f8 +
         bound.vMax.field0_0x0.d[2] * local_e8 + vHalf.field0_0x0.d[2];
                    /* end of inlined section */
    uVar7 = CONCAT44(v3.field0_0x0.d[1],v3.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)&bound.vMax & 7;
    puVar6 = (ulong *)((int)&bound.vMax - uVar5);
    *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    bound.vMax.field0_0x0.d[2] = v3.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    local_ec = bound.vMin.field0_0x0.d[2] * local_ec;
    fVar17 = bound.vMin.field0_0x0.d[0] * local_110 + bound.vMin.field0_0x0.d[1] * local_100 +
             bound.vMin.field0_0x0.d[2] * local_f0 + vHalf.field0_0x0.d[0];
    bound.vMin.field0_0x0.d[2] =
         bound.vMin.field0_0x0.d[0] * local_108 + bound.vMin.field0_0x0.d[1] * local_f8 +
         bound.vMin.field0_0x0.d[2] * local_e8 + vHalf.field0_0x0.d[2];
    fVar18 = bound.vMin.field0_0x0.d[0] * local_10c + bound.vMin.field0_0x0.d[1] * local_fc +
             local_ec + vHalf.field0_0x0.d[1];
    v3.field0_0x0.d[0] = fVar17;
    v3.field0_0x0.d[2] = bound.vMin.field0_0x0.d[2];
    v3.field0_0x0.d[1] = fVar18;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | CONCAT44(fVar18,fVar17) >> (7 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    v3.field0_0x0.d[0] = 0.5;
    v3.field0_0x0.d[1] = 0.5;
    local_b8 = 0;
    bound.vMax.field0_0x0.d[0] = bound.vMax.field0_0x0.d[0] + 0.5;
    bound.vMax.field0_0x0.d[1] = bound.vMax.field0_0x0.d[1] + 0.5;
    v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    local_d0 = bound.vMax.field0_0x0.d[0] - (fVar17 - 0.5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    local_bc = bound.vMax.field0_0x0.d[1] - (fVar18 - 0.5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bound.vMin.field0_0x0._0_8_ = CONCAT44(fVar18 - 0.5,fVar17 - 0.5);
    local_cc = 0;
    local_c8 = 0;
                    /* end of inlined section */
    local_c0 = 0;
    SetPosition__10EILightmapRC5EVec3N21
              ((EILightmap__0_4024 *)this,&bound.vMin,(EVec3 *)&local_d0,(EVec3 *)&local_c0);
  }
  return;
}

void EIFloorLightMapMan::AddFloors(EIFloorTable &floors) {
	RBIterator i;
	RBIterator rbi;
	RBIterator i;
	RBValue v;
	RBIterator i;
	TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *> *this;
	RBIterator i;
	RBIterator i;
	TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *> *this;
	RBIterator i;
	RBIterator i;
	
  EInstance *pInstance;
  undefined1 *puVar1;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (floors->field0_0x0).m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pInstance = (EInstance *)pEVar2->value;
    while( true ) {
      puVar1 = Find__C13ERedBlackTreeUiPUi
                         ((ERedBlackTree *)this,(uint)*(ushort *)&pInstance[1].field0_0x0.__vtable,
                          (uint *)0x0);
                    /* end of inlined section */
      if (puVar1 == (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        puVar1 = Find__C13ERedBlackTreeUiPUi((ERedBlackTree *)this,0,(uint *)0x0);
                    /* end of inlined section */
        AddReceiver__10EILightmapP9EInstance(*(EILightmap__0_4024 **)(puVar1 + 0x1c),pInstance);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar2 = pEVar2->pNext;
      }
      else {
                    /* end of inlined section */
        AddReceiver__10EILightmapP9EInstance(*(EILightmap__0_4024 **)(puVar1 + 0x1c),pInstance);
        pEVar2 = pEVar2->pNext;
      }
                    /* end of inlined section */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      pInstance = (EInstance *)pEVar2->value;
    }
  }
  return;
}

void EIFloorLightMapMan::Compute() {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_lightmaps).field0_0x0.m_list.m_pHead; pEVar1 != (ERedBlackTreeNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    Compute__10EILightmap((EILightmap__0_4024 *)pEVar1->value);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  }
  return;
}

void EIFloorLightMapMan::DrawDebug(ERC *prc) {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  EILightmap__0_4024 *this_00;
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_lightmaps).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
                    /* end of inlined section */
    this_00 = (EILightmap__0_4024 *)pEVar1->value;
    while( true ) {
      DrawPosition__10EILightmapP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (EILightmap__0_4024 *)pEVar1->value;
    }
  }
  return;
}

void EIFloorLightMapMan::EnableShadows(bool enable) {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	bool on;
	
  ERedBlackTreeNode *pEVar1;
  uint uVar2;
  uint uVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_lightmaps).field0_0x0.m_list.m_pHead; pEVar1 != (ERedBlackTreeNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    uVar2 = pEVar1->value;
    if (enable) {
      uVar3 = *(uint *)(uVar2 + 0x14) | 1;
    }
    else {
      uVar3 = *(uint *)(uVar2 + 0x14) & 0xfffffffe;
    }
    *(uint *)(uVar2 + 0x14) = uVar3;
                    /* end of inlined section */
  }
  return;
}

EFloorShdTblNode* EFloorShdTblNode::EFloorShdTblNode() {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_stripList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_stripList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pShader = (ERShader *)0x0;
  return this;
}

void EFloorShdTblNode::~EFloorShdTblNode(int __in_chrg) {
	void *pAddress;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_stripList).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EFloorShdTblNode::CleanUp() {
  RemoveAll__9ENodeList(&(this->m_stripList).field0_0x0);
  while (this->m_pShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShader->field0_0x0);
    this->m_pShader = (ERShader *)0x0;
  }
  return;
}

void EFloorShdTblNode::InitTable() {
	int i;
	unsigned int n;
	
  FloorSet *pFVar1;
  FloorTile **ppFVar2;
  ERShader *pEVar3;
  int iVar4;
  EFloorShdTblNode *pEVar5;
  FloorTile *pFVar6;
  
  pFVar1 = _globals._pFloorSet;
  if (__16EFloorShdTblNode_m_bTableInited == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
    __16EFloorShdTblNode_m_bTableInited = 1;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    ppFVar2 = ((_globals._pFloorSet)->field0_0x0).pData;
    pFVar6 = (FloorTile *)0x0;
    if (ppFVar2 != (FloorTile **)0x0) {
      pFVar6 = ppFVar2[-1];
    }
                    /* end of inlined section */
    iVar4 = 0;
    if (0 < (int)pFVar6) {
      pEVar5 = _16EFloorShdTblNode__eFloorOrderTable;
      do {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        ppFVar2 = (pFVar1->field0_0x0).pData + iVar4;
                    /* end of inlined section */
        iVar4 = iVar4 + 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
        pEVar3 = (ERShader *)
                 AddRef__16EResourceManagerUiP5EFilei
                           (&_shaderman.field0_0x0,(*ppFVar2)->shaderID,(EFile *)0x0,0);
                    /* end of inlined section */
        pEVar5->m_pShader = pEVar3;
        pEVar5 = pEVar5 + 1;
      } while (iVar4 < (int)pFVar6);
    }
  }
  return;
}

void EFloorShdTblNode::AddStripToTable(EFloorStripInfo &info) {
	int i;
	EFloorStripInfo *this;
	EFloorStripInfo &in;
	TNodeList<EFloorStripInfo> *this;
	EFloorStripInfo data;
	
  FloorTile **ppFVar1;
  FloorTile *pFVar2;
  uint uVar3;
  EFloorStripInfo__51_2398 data;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppFVar1 = ((_globals._pFloorSet)->field0_0x0).pData;
  pFVar2 = (FloorTile *)0x0;
  if (ppFVar1 != (FloorTile **)0x0) {
    pFVar2 = ppFVar1[-1];
  }
  uVar3 = 0;
  if (0 < (int)pFVar2) {
    do {
                    /* end of inlined section */
      if (uVar3 == *(byte *)&info->m_data) {
        AddTail__9ENodeListUi
                  (&_16EFloorShdTblNode__eFloorOrderTable[uVar3].m_stripList.field0_0x0,
                   (info->m_data).m_mask);
        return;
                    /* end of inlined section */
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)pFVar2);
  }
  return;
}

u16 ConvertRoomSideToWallSide(Sides inside) {
  if (inside == kBelow) {
    return 4;
  }
  if ((int)inside < 3) {
    if (inside == kLeft) {
      return 1;
    }
  }
  else {
    if (inside == kRight) {
      return 3;
    }
    if (inside == kAbove) {
      return 2;
    }
  }
  return 0;
}

void EFloorShdTblNode::BuildTable() {
	EFloorStripInfo curstrip;
	u8 size;
	u8 x;
	u8 curStyle;
	CTilePt lastCol;
	UInt16 lastRoomId;
	u8 in;
	u8 y;
	CTilePt pt;
	FloorPattern floor;
	TileWalls walls;
	Room *r1;
	Room *r2;
	Sides s1;
	Sides s2;
	UInt16 curRoomId;
	u8 in;
	u8 in;
	u8 in;
	u8 in;
	
  byte bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  short *data;
  short *data_00;
  FloorPattern FVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint y;
  undefined8 unaff_s5;
  byte bVar9;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  uint uVar10;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EFloorStripInfo__51_2398 curstrip;
  CTilePt lastCol;
  CTilePt pt;
  TileWalls walls;
  Room *r1;
  Room *r2;
  Sides s1;
  Sides s2;
  uchar x;
  CTilePt *local_ac;
  uint local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  InitTable__16EFloorShdTblNode();
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
  _x = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
  curstrip.m_data = (EFloorStripInfo__m_data)(m_bitf)0xff;
                    /* end of inlined section */
  _16EFloorShdTblNode__m_nStrips = 0;
  iVar4 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  uVar10 = iVar4 - 1U & 0xff;
  local_ac = &lastCol;
  while (_x < uVar10) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
    curstrip.m_data.m_mask._0_2_ = CONCAT11((char)_x,0xff);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
    y = 1;
    curstrip.m_data = (EFloorStripInfo__m_data)(uint)(ushort)curstrip.m_data.m_mask._0_2_;
                    /* end of inlined section */
    __7CTilePtiii(local_ac,0,_x,1);
    local_a8 = _x + 1;
    lVar7 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,local_ac);
    if (1 < uVar10) {
      do {
        __7CTilePtiii(&pt,_x,y,1);
        bVar1 = (*(code *)_5Globs_pFixedWorld->__vtable->GetVertexConfig)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable->IsOutside,&pt);
        (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                  (&walls,(int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&pt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pRoomManager->__vtable[1].GetRoomManagerImpl)
                  ((int)&_5Globs_pRoomManager->__vtable +
                   (int)*(short *)&_5Globs_pRoomManager->__vtable[1].RoomManager,&pt,&r1,&r2,&s1,&s2
                  );
        bVar2 = HasDiagonal__C9TileWalls(&walls);
        if (bVar2) {
          data = (short *)__builtin_new(0xc);
          data[1] = (short)pt.mY;
          *data = (short)pt.mX;
          data_00 = (short *)__builtin_new(0xc);
          data_00[1] = (short)pt.mY;
          *data_00 = (short)pt.mX;
          sVar3 = ConvertRoomSideToWallSide__FQ24Room5Sides(s1);
          data[3] = sVar3;
          if (sVar3 == 0) {
            bVar2 = HasWall__C9TileWalls16TileWallsSegment(&walls,kVertDiag);
            sVar3 = 2;
            if (bVar2) {
              sVar3 = 1;
            }
            data[3] = sVar3;
          }
          FVar5 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector
                            (&walls,(uint)(ushort)data[3]);
          uVar6 = RemapFloorId__FUi(FVar5);
          *(uint *)(data + 4) = uVar6;
          sVar3 = (*(code *)r1->__vtable->GetObjectDensity)
                            ((int)&r1->__vtable + (int)*(short *)&r1->__vtable->InvalidateRoom);
          data[2] = sVar3;
          sVar3 = ConvertRoomSideToWallSide__FQ24Room5Sides(s2);
          data_00[3] = sVar3;
          if (sVar3 == 0) {
            bVar2 = HasWall__C9TileWalls16TileWallsSegment(&walls,kVertDiag);
            sVar3 = 4;
            if (bVar2) {
              sVar3 = 3;
            }
            data_00[3] = sVar3;
          }
          FVar5 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector
                            (&walls,(uint)(ushort)data_00[3]);
          uVar6 = RemapFloorId__FUi(FVar5);
          *(uint *)(data_00 + 4) = uVar6;
          sVar3 = (*(code *)r2->__vtable->GetObjectDensity)
                            ((int)&r2->__vtable + (int)*(short *)&r2->__vtable->InvalidateRoom);
          uVar6 = *(uint *)(data + 4);
          data_00[2] = sVar3;
          bVar2 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,uVar6);
          if (bVar2) {
            uVar6 = *(uint *)(data_00 + 4);
          }
          else {
            uVar6 = RemapFloorId__FUi(0);
            *(uint *)(data + 4) = uVar6;
            uVar6 = *(uint *)(data_00 + 4);
          }
          bVar2 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,uVar6);
          if (!bVar2) {
            uVar6 = RemapFloorId__FUi(0);
            *(uint *)(data_00 + 4) = uVar6;
          }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          AddTail__9ENodeListUi(&_16EFloorShdTblNode_m_diagonalTiles.field0_0x0,(uint)data);
          AddTail__9ENodeListUi(&_16EFloorShdTblNode_m_diagonalTiles.field0_0x0,(uint)data_00);
          bVar9 = 0xff;
                    /* end of inlined section */
        }
        else {
          bVar2 = CheckForHotTub__16EFloorShdTblNodeRC7CTilePt(&pt);
          bVar9 = 0xff;
          if (!bVar2) {
            bVar9 = bVar1;
          }
        }
        lVar8 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&pt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
        if ((bVar9 == curstrip.m_data.m_mask._0_1_) && (lVar8 == lVar7)) {
          curstrip.m_data = (EFloorStripInfo__m_data)((uint)curstrip.m_data & 0xffffff | y << 0x18);
          lVar8 = lVar7;
        }
        else {
                    /* end of inlined section */
          if (curstrip.m_data.m_mask._0_1_ != -1) {
            AddStripToTable__16EFloorShdTblNodeRC15EFloorStripInfo(&curstrip);
            _16EFloorShdTblNode__m_nStrips = _16EFloorShdTblNode__m_nStrips + 1;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
          curstrip.m_data.m_mask._0_2_ = SUB42(curstrip.m_data,0) & 0xff00 | (ushort)bVar9;
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
          curstrip.m_data =
               (EFloorStripInfo__m_data)
               CONCAT13((char)y,CONCAT12((char)y,curstrip.m_data.m_mask._0_2_));
        }
                    /* end of inlined section */
        ___9TileWalls(&walls,2);
        ___7CTilePt(&pt,2);
        y = y + 1 & 0xff;
        lVar7 = lVar8;
      } while (y < uVar10);
                    /* end of inlined section */
    }
    if (curstrip.m_data.m_mask._0_1_ != -1) {
      AddStripToTable__16EFloorShdTblNodeRC15EFloorStripInfo(&curstrip);
      _16EFloorShdTblNode__m_nStrips = _16EFloorShdTblNode__m_nStrips + 1;
    }
    ___7CTilePt(local_ac,2);
    _x = local_a8 & 0xff;
  }
  return;
}

bool EFloorShdTblNode::CheckForHotTub(CTilePt &pt) {
	ObjectIterator i;
	CTilePt &location;
	cXObject *pTempOb;
	SInt32 guid;
	
  cXObject__15_2008 *pcVar1;
  int iVar2;
  ObjectIterator i;
  
                    /* inlined from ../MSrc/objectiterator.h */
  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,pt,kAll);
  pcVar1 = i.fCurrent;
  while( true ) {
                    /* end of inlined section */
    if (pcVar1 == (cXObject__15_2008 *)0x0) {
      return false;
    }
    i.fCurrent = pcVar1;
    iVar2 = (*(code *)pcVar1->__vtable[1].HandleError)
                      ((int)&pcVar1->_vb3534 + (int)*(short *)&pcVar1->__vtable[1].Error);
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == -0x7012ba88) {
      return true;
    }
    if (iVar2 == -0x7012cd0b) {
      return true;
    }
    if (iVar2 == -0x73c087c3) break;
    if (iVar2 == -0x7012cfc9) {
      return true;
    }
    iVar2 = (*(code *)pcVar1->__vtable[1].HandleError)
                      ((int)&pcVar1->_vb3534 + (int)*(short *)&pcVar1->__vtable[1].Error);
    if ((*(ushort *)(iVar2 + 0xb6) & 4) != 0) {
      return true;
    }
    __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
    pcVar1 = i.fCurrent;
  }
  return true;
}

void Get2DNoiseIntensity(EFloorVertTint &color, float xPos, float yPos) {
	float d[3];
	float intensityR;
	float scaleG;
	float intensityG;
	
  float fVar1;
  float d [3];
  
  d[1] = yPos * _baseFrequency;
  d[0] = xPos * _baseFrequency;
  d[2] = 0.0;
  fVar1 = fnoise3__FPf(d);
  d[1] = d[1] * 2.3;
  d[0] = d[0] * 2.3;
  color->r = (uchar)(int)(_startR + _intensityVariationR * fVar1);
  fVar1 = fnoise3__FPf(d);
  color->g = (uchar)(int)(_startG + _intensityVariationG * fVar1);
  return;
}

void EFloorShdTblNode::BuildStrip(ERC *prc, EFloorStripInfo &strip, EVec2 &vOff) {
	u8 row;
	u8 col0;
	int TotalTiles;
	int nStrips;
	int TilesLeft;
	bool isGrass;
	EFloorStripInfo *this;
	EFloorStripInfo *this;
	EFloorStripInfo *this;
	EFloorStripInfo *this;
	int i;
	int nTiles;
	int nVerts;
	int v;
	int colpos;
	EVec3 v0;
	float y0;
	int k;
	int ktc;
	int kcol;
	EVec3 vModel;
	EVec2 vTc;
	int count;
	ERC *this;
	ERC *this;
	ERC *this;
	ERC *this;
	EFloorVertTint color;
	float y;
	int idxj;
	EFloorVertTint color;
	EFloorVertTint color;
	float y;
	EFloorVertTint color;
	int j;
	EVec3 vModelj;
	EVec2 vTcj;
	EVec3 vModelj_1;
	EVec2 vTcj_1;
	int idxi;
	EFloorVertTint color;
	float y;
	int idxi;
	int idxj;
	EFloorVertTint color;
	
  uchar uVar1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uchar *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  uchar *puVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulong in_hi;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  EVec3 v0;
  EVec3 vModel;
  EVec2 vTc;
  EVec3 vModelj;
  EVec2 vTcj;
  EVec3 vModelj_1;
  EVec2 vTcj_1;
  ERC *this;
  EVec2 *local_ec;
  uchar row;
  uchar col0;
  int nStrips;
  int nTiles;
  int local_d8;
  int local_d4;
  EVec2 *local_d0;
  
  local_d4 = 0;
  _col0 = (uint)*(byte *)((int)&strip->m_data + 2);
  _row = (uint)*(byte *)((int)&strip->m_data + 1);
  iVar5 = *(byte *)((int)&strip->m_data + 3) - _col0;
  uVar13 = iVar5 + 1;
  bVar3 = *(char *)&strip->m_data != '\0';
  uVar18 = iVar5 + 8;
  if (-1 < (int)uVar13) {
    uVar18 = uVar13;
  }
  nStrips = ((int)uVar18 >> 3) + (uint)((uVar13 & 7) != 0);
  if (0 < nStrips) {
    local_d0 = &vTc;
    local_d8 = (_row + 1) * 2;
    fVar23 = 1.0;
    this = prc;
    local_ec = vOff;
    do {
      nTiles = 8;
      if ((int)uVar13 < 9) {
        nTiles = uVar13;
      }
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      iVar19 = nTiles * 2 + 2;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
      pfVar6 = (float *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,iVar19 * 0x10,0x10);
      uVar18 = iVar19 * 4;
      puVar7 = (undefined4 *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,iVar19 * 8,0x10);
      puVar8 = (uchar *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,uVar18,0x10);
      puVar9 = (undefined *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,uVar18,0x10);
                    /* end of inlined section */
      iVar5 = 0;
      puVar12 = puVar9;
      if (0 < (int)uVar18) {
        do {
          *puVar12 = 0;
          iVar5 = iVar5 + 4;
          puVar12[1] = 0;
          puVar12[2] = 0x7f;
          puVar12[3] = 0;
          puVar12 = puVar12 + 4;
        } while (iVar5 < (int)uVar18);
      }
      iVar5 = _col0 + local_d4 * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vModel.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
      fVar20 = (float)_row + (local_ec->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar22 = (float)iVar5 + (local_ec->field0_0x0).d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      *pfVar6 = fVar22 + -0.5;
      pfVar6[1] = fVar20 + -0.5;
      pfVar6[3] = 0.0;
      pfVar6[2] = 0.0;
      if (bVar3) {
        puVar8[3] = 0x80;
        puVar8[2] = 0x80;
        puVar8[1] = 0x80;
        *puVar8 = 0x80;
      }
      else {
        in_hi = in_hi & 0xffffffff00000000 | (ulong)(uint)(iVar5 * 0x7e >> 0x1f);
        vTc.field0_0x0.d[0] = (float)(uint)(ushort)_vertColorLookup[iVar5][_row];
        *puVar8 = _vertColorLookup[iVar5][_row].r;
        puVar8[2] = '\0';
        puVar8[1] = vTc.field0_0x0._1_1_;
        puVar8[3] = 0x80;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vTc.field0_0x0.d[1] = 0.0;
      vTc.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
      *puVar7 = 0;
      puVar7[1] = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      puVar12 = (undefined *)((int)&vModel.field0_0x0 + 7);
      uVar18 = (uint)puVar12 & 7;
      puVar2 = (ulong *)(puVar12 + -uVar18);
      local_d4 = local_d4 + 1;
      *puVar2 = *puVar2 & -1L << (uVar18 + 1) * 8 |
                CONCAT44(fVar20 + 0.5,fVar22 + -0.5) >> (7 - uVar18) * 8;
      vModel.field0_0x0.d[2] = 0.0;
      pfVar6[4] = fVar22 + -0.5;
      pfVar6[5] = fVar20 + 0.5;
      pfVar6[7] = 0.0;
      pfVar6[6] = 0.0;
      if (bVar3) {
        puVar8[5] = 0x80;
        puVar8[7] = 0x80;
        puVar8[6] = 0x80;
        puVar8[4] = 0x80;
      }
      else {
        lVar4 = ((long)local_d8 | in_hi) + (long)(iVar5 * 0x7e);
        iVar10 = (int)lVar4;
        in_hi = (ulong)(int)((ulong)lVar4 >> 0x20);
        uVar1 = (&_vertColorLookup[0].g)[iVar10];
        puVar8[4] = (&_vertColorLookup[0].r)[iVar10];
        puVar8[7] = 0x80;
        puVar8[5] = uVar1;
        puVar8[6] = '\0';
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vTc.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (local_d0->field0_0x0).d[1] = fVar23;
                    /* end of inlined section */
      puVar7[2] = 0;
      puVar7[3] = vTc.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      puVar12 = (undefined *)((int)&vModel.field0_0x0 + 7);
      uVar18 = (uint)puVar12 & 7;
      puVar2 = (ulong *)(puVar12 + -uVar18);
      *puVar2 = *puVar2 & -1L << (uVar18 + 1) * 8 |
                CONCAT44(fVar20 + -0.5,fVar22 + 0.5) >> (7 - uVar18) * 8;
      vModel.field0_0x0.d[2] = 0.0;
      pfVar6[8] = fVar22 + 0.5;
      pfVar6[9] = fVar20 + -0.5;
      pfVar6[10] = 0.0;
      pfVar6[0xb] = 0.0;
      if (bVar3) {
        puVar8[9] = 0x80;
        puVar8[0xb] = 0x80;
        puVar8[10] = 0x80;
        puVar8[8] = 0x80;
      }
      else {
        lVar4 = (in_hi | 0x7e) + (long)(iVar5 * 0x7e);
        iVar10 = (int)lVar4;
        in_hi = (ulong)(int)((ulong)lVar4 >> 0x20);
        uVar1 = (&_vertColorLookup[_row].g)[iVar10];
        puVar8[8] = (&_vertColorLookup[_row].r)[iVar10];
        puVar8[0xb] = 0x80;
        puVar8[9] = uVar1;
        puVar8[10] = '\0';
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vTc.field0_0x0.d[1] = 0.0;
      vTc.field0_0x0.d[0] = fVar23;
                    /* end of inlined section */
      puVar7[4] = fVar23;
      puVar7[5] = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      vModel.field0_0x0._0_8_ = CONCAT44(fVar20 + 0.5,fVar22 + 0.5);
      puVar12 = (undefined *)((int)&vModel.field0_0x0 + 7);
      uVar18 = (uint)puVar12 & 7;
      puVar2 = (ulong *)(puVar12 + -uVar18);
      *puVar2 = *puVar2 & -1L << (uVar18 + 1) * 8 |
                (ulong)vModel.field0_0x0._0_8_ >> (7 - uVar18) * 8;
      vModel.field0_0x0.d[2] = 0.0;
      pfVar6[0xc] = fVar22 + 0.5;
      pfVar6[0xd] = fVar20 + 0.5;
      pfVar6[0xe] = 0.0;
      pfVar6[0xf] = 0.0;
      if (bVar3) {
        puVar8[0xc] = 0x80;
        puVar8[0xf] = 0x80;
        puVar8[0xe] = 0x80;
        puVar8[0xd] = 0x80;
      }
      else {
        lVar4 = (in_hi | 0x7e) + (long)(iVar5 * 0x7e);
        in_hi = (ulong)(int)((ulong)lVar4 >> 0x20);
        iVar10 = (int)lVar4 + local_d8;
        uVar1 = (&_vertColorLookup[0].g)[iVar10];
        puVar8[0xc] = (&_vertColorLookup[0].r)[iVar10];
        puVar8[0xf] = 0x80;
        puVar8[0xd] = uVar1;
        puVar8[0xe] = '\0';
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (local_d0->field0_0x0).d[1] = fVar23;
                    /* end of inlined section */
      iVar17 = 4;
      puVar7[6] = fVar23;
      iVar10 = 1;
      uVar13 = uVar13 - nTiles;
      puVar7[7] = vTc.field0_0x0.d[1];
      if (4 < iVar19) {
        puVar14 = puVar8 + 0x10;
        pfVar16 = (float *)(puVar7 + 8);
        pfVar15 = pfVar6 + 0x10;
        do {
          fVar21 = (float)iVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          *pfVar15 = fVar22 + fVar21 + 0.5;
          pfVar15[1] = fVar20 + -0.5;
          pfVar15[3] = 0.0;
          pfVar15[2] = 0.0;
          if (bVar3) {
            puVar14[3] = 0x80;
            puVar14[2] = 0x80;
            puVar14[1] = 0x80;
            *puVar14 = 0x80;
          }
          else {
            iVar11 = iVar5 + iVar10 + 1;
            in_hi = in_hi & 0xffffffff00000000 | (ulong)(uint)(iVar11 * 0x7e >> 0x1f);
            vTcj.field0_0x0.d[0] = (float)(uint)(ushort)_vertColorLookup[iVar11][_row];
            *puVar14 = _vertColorLookup[iVar11][_row].r;
            puVar14[2] = '\0';
            puVar14[1] = vTcj.field0_0x0._1_1_;
            puVar14[3] = 0x80;
          }
          iVar10 = iVar10 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          *pfVar16 = fVar21 + 1.0;
          pfVar16[1] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          pfVar15[4] = fVar22 + fVar21 + 0.5;
          pfVar15[5] = fVar20 + 0.5;
          pfVar15[7] = 0.0;
          pfVar15[6] = 0.0;
          if (bVar3) {
            puVar14[7] = 0x80;
            puVar14[6] = 0x80;
            puVar14[5] = 0x80;
            puVar14[4] = 0x80;
          }
          else {
            in_hi = in_hi & 0xffffffff00000000 | (ulong)(uint)((iVar5 + iVar10) * 0x7e >> 0x1f);
            vTcj_1.field0_0x0.d[0] = (float)(uint)(ushort)_vertColorLookup[iVar5 + iVar10][_row + 1]
            ;
            puVar14[4] = _vertColorLookup[iVar5 + iVar10][_row + 1].r;
            puVar14[6] = '\0';
            puVar14[5] = vTcj_1.field0_0x0._1_1_;
            puVar14[7] = 0x80;
          }
          iVar17 = iVar17 + 2;
          puVar14 = puVar14 + 8;
          pfVar15 = pfVar15 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          pfVar16[2] = fVar21 + 1.0;
          pfVar16[3] = 1.0;
          pfVar16 = pfVar16 + 4;
        } while (iVar17 < iVar19);
      }
      (*(code *)this->__vtable->TriFan)
                ((int)&this->m_pdl + (int)*(short *)&this->__vtable->Vertex,iVar19,pfVar6,puVar7,
                 puVar8,puVar9,0);
    } while (local_d4 < nStrips);
  }
  return;
}

void EFloorShdTblNode::EmptyTable() {
	int i;
	
  FloorTile **ppFVar1;
  FloorTile *pFVar2;
  EFloorShdTblNode *this;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  __16EFloorShdTblNode_m_bTableInited = 0;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppFVar1 = ((_globals._pFloorSet)->field0_0x0).pData;
  pFVar2 = (FloorTile *)0x0;
  if (ppFVar1 != (FloorTile **)0x0) {
    pFVar2 = ppFVar1[-1];
  }
                    /* end of inlined section */
  if (0 < (int)pFVar2) {
    this = _16EFloorShdTblNode__eFloorOrderTable;
    do {
      pFVar2 = (FloorTile *)((int)&pFVar2[-1].category + 3);
      CleanUp__16EFloorShdTblNode(this);
      this = this + 1;
    } while (pFVar2 != (FloorTile *)0x0);
  }
  return;
}

EStream& operator<<(EStream &s, EIFloor *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIFloor *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EIFloor *)pStorable;
  return s;
}

EIFloor* EIFloor::EIFloor(EHouse *pHouse) {
	EHouse *this;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  
  __9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_otds).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_otds).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_7EIFloor;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_shaderList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_shaderList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_dLList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_dLList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  iVar7 = 2;
  do {
    bVar2 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar2);
  (this->field0_0x0).m_instanceFlags = (this->field0_0x0).m_instanceFlags & 0xfffffdff;
  SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,0x118);
  InsertInstance__7ERLevelP9EInstanceT1(pHouse->m_pLevel,&this->field0_0x0,(EInstance *)0x0);
  puVar1 = (undefined *)((int)&this->m_vBoundCorners[3].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vBoundCorners + 3) & 7;
  puVar6 = (ulong *)((int)(this->m_vBoundCorners + 3) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  this->m_vBoundCorners[3].field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&this->m_vBoundCorners[3].field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)(this->m_vBoundCorners + 3) & 7;
  uVar8 = *(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)(this->m_vBoundCorners + 3) - uVar3) >> uVar3 * 8;
  fVar4 = this->m_vBoundCorners[3].field0_0x0.d[2];
  puVar1 = (undefined *)((int)&this->m_vBoundCorners[2].field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vBoundCorners + 2) & 7;
  puVar6 = (ulong *)((int)(this->m_vBoundCorners + 2) - uVar5);
  *puVar6 = uVar8 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  this->m_vBoundCorners[2].field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&this->m_vBoundCorners[2].field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)(this->m_vBoundCorners + 2) & 7;
  uVar8 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          uVar8 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)(this->m_vBoundCorners + 2) - uVar3) >> uVar3 * 8;
  fVar4 = this->m_vBoundCorners[2].field0_0x0.d[2];
  puVar1 = (undefined *)((int)&this->m_vBoundCorners[1].field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vBoundCorners + 1) & 7;
  puVar6 = (ulong *)((int)(this->m_vBoundCorners + 1) - uVar5);
  *puVar6 = uVar8 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  this->m_vBoundCorners[1].field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&this->m_vBoundCorners[1].field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)(this->m_vBoundCorners + 1) & 7;
  uVar8 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          uVar8 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)(this->m_vBoundCorners + 1) - uVar3) >> uVar3 * 8;
  fVar4 = this->m_vBoundCorners[1].field0_0x0.d[2];
  puVar1 = (undefined *)((int)&this->m_vBoundCorners[0].field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  uVar5 = (uint)this->m_vBoundCorners & 7;
  puVar6 = (ulong *)((int)this->m_vBoundCorners - uVar5);
  *puVar6 = uVar8 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  this->m_vBoundCorners[0].field0_0x0.d[2] = fVar4;
  return this;
}

void EIFloor::Draw(ERC *prc, u32 renderFlags) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ERC__vtable *pEVar1;
  EOrderTableData *otd;
  ENodeListNode *pEVar2;
  
  if ((renderFlags & 8) == 0) {
    if ((renderFlags & 4) == 0) {
      if ((renderFlags & 2) == 0) {
        if ((renderFlags & 1) == 0) {
          (*(code *)prc->__vtable->EndCommand)
                    ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
          pEVar1 = prc->__vtable;
        }
        else {
          (*(code *)prc->__vtable->NewEntry)
                    ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate);
          pEVar1 = prc->__vtable;
        }
      }
      else {
        pEVar1 = prc->__vtable;
      }
      (*(code *)pEVar1->ZTest)((int)&prc->m_pdl + (int)*(short *)&pEVar1->RecalcMatrices);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEVar2 = (this->m_dLList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
      if (pEVar2 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
        pEVar1 = prc->__vtable;
        while( true ) {
          (*(code *)pEVar1->DisableRasterModes)
                    ((int)&prc->m_pdl + (int)*(short *)&pEVar1->EnableRasterModes,pEVar2->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
          if (pEVar2 == (ENodeListNode *)0x0) break;
          pEVar1 = prc->__vtable;
        }
      }
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = (this->m_otds).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
      if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        otd = (EOrderTableData *)pEVar2->data;
        while( true ) {
                    /* end of inlined section */
          otd->renderFlags = renderFlags;
          InsertInOrderTable__7ERLevelR15EOrderTableData((this->field0_0x0).m_pLevel,otd);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
          if (pEVar2 == (ENodeListNode *)0x0) break;
          otd = (EOrderTableData *)pEVar2->data;
        }
      }
    }
  }
  return;
}

void EIFloor::OrderTableCallback(ERC *prc, u32 param1, u32 param2) {
  (*(code *)prc->__vtable->DisableRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,param2);
  return;
}

u32 EIFloor::VisibilityTest(EPortalWindow &win, u32 parentVis) {
	EVec3 *this;
	EVec3 &v;
	
  bool bVar1;
  uint uVar2;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bVar1 = false;
  if (this->m_vBoundCorners[0].field0_0x0.d[0] == this->m_vBoundCorners[1].field0_0x0.d[0]) {
    if (this->m_vBoundCorners[0].field0_0x0.d[1] != this->m_vBoundCorners[1].field0_0x0.d[1]) {
      bVar1 = true;
      goto LAB_00168d64;
    }
    if (this->m_vBoundCorners[0].field0_0x0.d[2] == this->m_vBoundCorners[1].field0_0x0.d[2])
    goto LAB_00168d64;
  }
  bVar1 = true;
LAB_00168d64:
                    /* end of inlined section */
  if (bVar1) {
    uVar2 = Test__13EPortalWindowPC5EVec3iUi(win,this->m_vBoundCorners,4,parentVis);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

void* EIFloor::operator new() {
	EIFloor *p;
	void *p;
	
  void **ppvVar1;
  
  if (_eIFloorAllocPool == (TFixedPool_EIFloor_100_ *)0x0) {
    ppvVar1 = (void **)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
    ppvVar1 = (void **)(_eIFloorAllocPool->field0_0x0).m_pFreeObjHead;
                    /* end of inlined section */
    if ((ppvVar1 != (void **)0x0) &&
       ((_eIFloorAllocPool->field0_0x0).m_pFreeObjHead = *ppvVar1, ppvVar1 != (void **)0x0)) {
      _7EIFloor_m_nAlloced = _7EIFloor_m_nAlloced + 1;
      return ppvVar1;
    }
  }
  return ppvVar1;
}

void EIFloor::operator delete(void *p) {
	EIFloor *p;
	void *p;
	
  TFixedPool_EIFloor_100_ *pTVar1;
  
  pTVar1 = _eIFloorAllocPool;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (((_eIFloorAllocPool != (TFixedPool_EIFloor_100_ *)0x0) && (p != (void *)0x0)) &&
     (_7EIFloor_m_nAlloced = _7EIFloor_m_nAlloced - 1, p != (void *)0x0)) {
    *(void **)p = (_eIFloorAllocPool->field0_0x0).m_pFreeObjHead;
    (pTVar1->field0_0x0).m_pFreeObjHead = p;
  }
                    /* end of inlined section */
  return;
}

void EIFloor::DestroyFloors() {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	
  int *piVar1;
  EILightmapForRoom *this;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
  if (_7EIFloor_m_lightmapman.m_lightmaps.field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0) {
    this = (EILightmapForRoom *)
           (_7EIFloor_m_lightmapman.m_lightmaps.field0_0x0.m_list.m_pHead)->value;
    pEVar2 = _7EIFloor_m_lightmapman.m_lightmaps.field0_0x0.m_list.m_pHead;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      SafeDelete__Q218EIFloorLightMapMan17EILightmapForRoom(this);
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      this = (EILightmapForRoom *)pEVar2->value;
    }
  }
  RemoveAll__13ERedBlackTree((ERedBlackTree *)&_7EIFloor_m_lightmapman);
  if (_7EIFloor_m_floors.field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0) {
    piVar1 = (int *)(_7EIFloor_m_floors.field0_0x0.m_list.m_pHead)->value;
    pEVar2 = _7EIFloor_m_floors.field0_0x0.m_list.m_pHead;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      piVar1 = (int *)pEVar2->value;
    }
  }
  RemoveAll__13ERedBlackTree(&_7EIFloor_m_floors.field0_0x0);
                    /* end of inlined section */
  if (_eIFloorAllocPool != (TFixedPool_EIFloor_100_ *)0x0) {
    ___10EFixedPool(&_eIFloorAllocPool->field0_0x0,3);
  }
  _eIFloorAllocPool = (TFixedPool_EIFloor_100_ *)0x0;
  if (_eIFloorOtdPool != (TFixedPool_EOrderTableData_6400_ *)0x0) {
    ___10EFixedPool(&_eIFloorOtdPool->field0_0x0,3);
  }
  _eIFloorOtdPool = (TFixedPool_EOrderTableData_6400_ *)0x0;
  return;
}

EOrderTableData* EIFloor::AllocOtd() {
	TFixedPool<EOrderTableData,6400> *this;
	EFixedPool *this;
	void *p;
	
  EOrderTableData *__s;
  
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  __s = (EOrderTableData *)(_eIFloorOtdPool->field0_0x0).m_pFreeObjHead;
  if (__s != (EOrderTableData *)0x0) {
    (_eIFloorOtdPool->field0_0x0).m_pFreeObjHead = (void *)__s->sortMode;
  }
                    /* end of inlined section */
  memset(__s,0,0x30);
  __s->pfnCallback = OrderTableCallback__7EIFloorP3ERCUiUi;
  __s->pmOrient = &_mId;
  __s->renderFlags = 5;
  __s->pvPos = (EVec3 *)0x0;
  __s->pShader = (EShader *)0x0;
  __s->pLights = (ELights *)0x0;
  __s->sortMode = 0;
  __s->sortValue = 0;
  return __s;
}

void EIFloor::FreeOtd(EOrderTableData *p) {
	TFixedPool<EOrderTableData,6400> *this;
	EOrderTableData *p;
	void *p;
	EFixedPool *this;
	
  TFixedPool_EOrderTableData_6400_ *pTVar1;
  
  memset(p,0xfe,0x30);
  pTVar1 = _eIFloorOtdPool;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (p != (EOrderTableData *)0x0) {
    p->sortMode = (int)(_eIFloorOtdPool->field0_0x0).m_pFreeObjHead;
    (pTVar1->field0_0x0).m_pFreeObjHead = p;
  }
  return;
}

void BuildDiagonalTri(ERC *prc, EIFloorDiagonalData &data) {
	int tabpos;
	int v;
	EVec3 v0;
	EVec3 vModel;
	ERC *this;
	ERC *this;
	ERC *this;
	ERC *this;
	int colorx;
	int colory;
	EFloorVertTint color;
	EHouse *this;
	EVec2 &v;
	EVec2 &v;
	EVec2 &v;
	
  uchar uVar1;
  uint uVar2;
  ulong *puVar3;
  float *pfVar4;
  float *pfVar5;
  uchar *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uchar *puVar11;
  undefined *puVar12;
  EVec2 *pEVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  EFloorVertTint color;
  EVec3 v0;
  EVec3 vModel;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
  pfVar4 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x30,0x10);
  pfVar5 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x18,0x10);
  puVar6 = (uchar *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0xc,0x10);
  puVar7 = (undefined *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0xc,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  iVar15 = (ushort)data->side - 1;
  iVar14 = 8;
  pEVar13 = (EVec2 *)_vDiagSides[iVar15];
  puVar11 = puVar6;
  puVar12 = puVar7;
  do {
    iVar10 = (uint)(ushort)data->y + (int)((pEVar13->field0_0x0).d[0] + (pEVar13->field0_0x0).d[0]);
    iVar9 = (uint)(ushort)data->x + (int)((pEVar13->field0_0x0).d[1] + (pEVar13->field0_0x0).d[1]);
    if (iVar10 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0x3e;
      if (iVar10 < 0x3f) {
        iVar8 = iVar10;
      }
    }
    if (iVar9 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = 0x3e;
      if (iVar9 < 0x3f) {
        iVar10 = iVar9;
      }
    }
    pEVar13 = pEVar13 + 1;
    iVar14 = iVar14 + -4;
    uVar1 = _vertColorLookup[iVar8][iVar10].g;
    *puVar11 = _vertColorLookup[iVar8][iVar10].r;
    puVar11[2] = '\0';
    puVar11[1] = uVar1;
    puVar11[3] = 0x80;
    *puVar12 = 0;
    puVar11 = puVar11 + 4;
    puVar12[1] = 0;
    puVar12[2] = 0x7f;
    puVar12[3] = 0;
    puVar12 = puVar12 + 4;
  } while (-1 < iVar14);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar16 = (float)(uint)(ushort)data->x + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar18 = (float)(uint)(ushort)data->y + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vModel.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar19 = fVar18 + _vDiagSides[iVar15][0].field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar17 = fVar16 + _vDiagSides[iVar15][0].field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar12 = (undefined *)((int)&vModel.field0_0x0 + 7);
  uVar2 = (uint)puVar12 & 7;
  puVar3 = (ulong *)(puVar12 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar17,fVar19) >> (7 - uVar2) * 8;
  vModel.field0_0x0.d[2] = 0.0;
  *pfVar4 = fVar19;
  pfVar4[1] = fVar17;
  pfVar4[3] = 0.0;
  pfVar4[2] = 0.0;
  *pfVar5 = _vDiagSidesTc[iVar15][0].field0_0x0.d[0];
  pfVar5[1] = _vDiagSidesTc[iVar15][0].field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar19 = fVar18 + _vDiagSides[iVar15][1].field0_0x0.d[0];
  fVar17 = fVar16 + _vDiagSides[iVar15][1].field0_0x0.d[1];
                    /* end of inlined section */
  puVar12 = (undefined *)((int)&vModel.field0_0x0 + 7);
  uVar2 = (uint)puVar12 & 7;
  puVar3 = (ulong *)(puVar12 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar17,fVar19) >> (7 - uVar2) * 8;
  vModel.field0_0x0.d[2] = 0.0;
  pfVar4[4] = fVar19;
  pfVar4[5] = fVar17;
  pfVar4[7] = 0.0;
  pfVar4[6] = 0.0;
  pfVar5[2] = _vDiagSidesTc[iVar15][1].field0_0x0.d[0];
  pfVar5[3] = _vDiagSidesTc[iVar15][1].field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar18 = fVar18 + _vDiagSides[iVar15][2].field0_0x0.d[0];
  fVar16 = fVar16 + _vDiagSides[iVar15][2].field0_0x0.d[1];
                    /* end of inlined section */
  vModel.field0_0x0._0_8_ = CONCAT44(fVar16,fVar18);
  puVar12 = (undefined *)((int)&vModel.field0_0x0 + 7);
  uVar2 = (uint)puVar12 & 7;
  puVar3 = (ulong *)(puVar12 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)vModel.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  vModel.field0_0x0.d[2] = 0.0;
  pfVar4[8] = fVar18;
  pfVar4[9] = fVar16;
  pfVar4[0xb] = 0.0;
  pfVar4[10] = 0.0;
  pfVar5[4] = _vDiagSidesTc[iVar15][2].field0_0x0.d[0];
  pfVar5[5] = _vDiagSidesTc[iVar15][2].field0_0x0.d[1];
  (*(code *)prc->__vtable->TriFan)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Vertex,3,pfVar4,pfVar5,puVar6,puVar7,
             0);
  return;
}

void EFloorShdTblTempTable::SortDiagonalTabel(EIFloorDiagonalDataList &inList) {
	NLIterator itrDiagData;
	TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator next;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EIFloorDiagonalDataList *pCurList;
	NLIterator i;
	NLIterator i;
	TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *> *this;
	TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *> *this;
	
  ENodeList *this_00;
  uint data;
  ERedBlackTreeNode *pEVar1;
  undefined1 *puVar2;
  undefined8 unaff_s0;
  ENodeListNode *pEVar3;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  TNodeList_EIFloorDiagonalData___ *pCurList;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_tree).field0_0x0.m_list.m_pHead;
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
    this_00 = (ENodeList *)pEVar1->value;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      if (this_00 != (ENodeList *)0x0) {
        RemoveAll__9ENodeList(this_00);
        _memmanFree__FPv(this_00);
      }
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (ENodeList *)pEVar1->value;
    }
  }
  RemoveAll__13ERedBlackTree((ERedBlackTree *)this);
  pEVar3 = (inList->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar3 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    data = pEVar3->data;
    while( true ) {
                    /* end of inlined section */
      pCurList = (TNodeList_EIFloorDiagonalData___ *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      puVar2 = Find__C13ERedBlackTreeUiPUi
                         ((ERedBlackTree *)this,*(uint *)(data + 8),(uint *)&pCurList);
                    /* end of inlined section */
      if (puVar2 == (undefined1 *)0x0) {
        pCurList = (TNodeList_EIFloorDiagonalData___ *)__builtin_new(8);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        (pCurList->field0_0x0).m_l.m_pTail = (ENodeListNode *)0x0;
        (pCurList->field0_0x0).m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        Insert__13ERedBlackTreeUiUib((ERedBlackTree *)this,*(uint *)(data + 8),(uint)pCurList,false)
        ;
        AddTail__9ENodeListUi(&pCurList->field0_0x0,data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar3 = pEVar3->pNext;
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&pCurList->field0_0x0,data);
                    /* end of inlined section */
        pEVar3 = pEVar3->pNext;
      }
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) break;
      data = pEVar3->data;
    }
  }
  return;
}

EIFloorDiagonalDataList* EFloorShdTblTempTable::GetList(u32 shaderId) {
	EIFloorDiagonalDataList *pRetList;
	
  undefined8 unaff_retaddr;
  TNodeList_EIFloorDiagonalData___ *pRetList;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  pRetList = (TNodeList_EIFloorDiagonalData___ *)0x0;
  Find__C13ERedBlackTreeUiPUi((ERedBlackTree *)this,shaderId,(uint *)&pRetList);
                    /* end of inlined section */
  return pRetList;
}

void EIFloor::CreateFloors(EHouse *pHouse) {
	EFloorShdTblTempTable tempDiagSortTab;
	RoomManager *pRoomman;
	RoomManagerImpl *pRoommanImpl;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > roomItr;
	RoomManagerImpl *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	UInt16 roomId;
	bool bIsOutside;
	bool bFirstOutside;
	EIFloor *pCurFloor;
	int i;
	RoomManagerImpl *this;
	u32 key;
	ERC *prc;
	EOrderTableData *pnewOtd;
	EFloorShdTblNode &curTabEntry;
	ERShader *pUseShader;
	NLIterator nli;
	EIFloorDiagonalDataList *pDiagonalDataList;
	NLIterator nextTileI;
	EFloorStripInfo data;
	CTilePt tile;
	bool tileInRoom;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	Room *pCurRoom;
	Room *pTileRoom;
	ERShader *data;
	EOrderTableData *data;
	EVec2 vOff;
	EHouse *this;
	NLIterator i;
	EResource *this;
	NLIterator itrDiagData;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator itrNext;
	bool tileInRoom;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	Room *pCurRoom;
	Room *pTileRoom;
	ERShader *data;
	EOrderTableData *data;
	TNodeList<EIFloorDiagonalData *> *this;
	NLIterator i;
	EDL *pDl;
	EDL *data;
	__rb_tree_node_base *y;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	EHouse *this;
	EFloorShdTblTempTable *this;
	TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator next;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	TRedBlackTree<unsigned int,TNodeList<EIFloorDiagonalData *> *> *this;
	ERedBlackTree *this;
	void *pAddress;
	void *pAddress;
	
  FloorTile **ppFVar1;
  ERShader *this_00;
  ENodeListNode *pEVar2;
  EGlobalManagerClient__vtable *pEVar3;
  EIFloorDiagonalData *data;
  __rb_tree_base_iterator _Var4;
  __rb_tree_node_base *p_Var5;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ _Var6;
  ENodeList *this_01;
  bool bVar7;
  EGraphics *pEVar8;
  RoomManager *pRVar9;
  TFixedPool_EOrderTableData_6400_ *this_02;
  TFixedPool_EIFloor_100_ *this_03;
  int iVar10;
  EIFloor *pEVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  TNodeList_EIFloorDiagonalData___ *this_04;
  undefined1 *i;
  long lVar15;
  long lVar16;
  int iVar17;
  void *pAddress;
  FloorTile *pFVar18;
  FloorTile *pFVar19;
  ENodeListNode *pEVar20;
  EFloorShdTblTempTable tempDiagSortTab;
  EFloorStripInfo__m_data local_100 [4];
  CTilePt tile;
  EVec2 vOff;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ roomItr;
  EHouse__26_3190 *this;
  FloorTile *local_c4;
  EOrderTableData *pnewOtd;
  EFloorShdTblNode *curTabEntry;
  undefined1 *nextTileI;
  TNodeList_EIFloorDiagonalData___ *pDiagonalDataList;
  undefined1 *itrNext;
  
  this_02 = (TFixedPool_EOrderTableData_6400_ *)__builtin_new(0x4b010);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  __10EFixedPool((EFixedPool *)this_02);
  Init__10EFixedPooliiPv((EFixedPool *)this_02,0x30,0x1900,this_02->m_buffer);
  _eIFloorOtdPool = this_02;
                    /* end of inlined section */
  this_03 = (TFixedPool_EIFloor_100_ *)__builtin_new(0x5150);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  __10EFixedPool((EFixedPool *)this_03);
  Init__10EFixedPooliiPv((EFixedPool *)this_03,0xd0,100,this_03->m_buffer);
  _eIFloorAllocPool = this_03;
                    /* end of inlined section */
  BuildTable__16EFloorShdTblNode();
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  __13ERedBlackTree((ERedBlackTree *)&tempDiagSortTab);
                    /* end of inlined section */
  SortDiagonalTabel__21EFloorShdTblTempTableRCt9TNodeList1ZP19EIFloorDiagonalData
            (&tempDiagSortTab,&_16EFloorShdTblNode_m_diagonalTiles);
  pRVar9 = _5Globs_pRoomManager;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar10 = (*(code *)_5Globs_pRoomManager->__vtable->GetRoomCount)
                     ((int)&_5Globs_pRoomManager->__vtable +
                      (int)*(short *)&_5Globs_pRoomManager->__vtable->ComputeCutaway);
                    /* inlined from ../MSrc/roomsimpl.h */
  roomItr.field0_0x0.node = *(__rb_tree_base_iterator *)(*(int *)(iVar10 + 4) + 8);
                    /* end of inlined section */
  if (roomItr.field0_0x0.node != (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar10 + 4)) {
    do {
                    /* end of inlined section */
                    /* inlined from ../MSrc/roomsimpl.h */
      piVar13 = *(int **)((int)roomItr.field0_0x0.node + 0x14);
                    /* end of inlined section */
      lVar15 = (**(code **)(*piVar13 + 0x44))((int)piVar13 + (int)*(short *)(*piVar13 + 0x40));
      lVar16 = (**(code **)(*piVar13 + 100))((int)piVar13 + (int)*(short *)(*piVar13 + 0x60));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Find__C13ERedBlackTreeUiPUi(&_7EIFloor_m_floors.field0_0x0,(uint)lVar15,(uint *)0x0);
                    /* end of inlined section */
      if ((lVar16 == 0) || (lVar16 != 0 && lVar15 == 0)) {
        pEVar11 = (EIFloor *)__nw__7EIFloorUi();
        pEVar11 = __7EIFloorP6EHouse(pEVar11,pHouse);
        pEVar11->m_roomID = (uint)lVar15;
        CalcBounds__7EIFloor(pEVar11);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        Insert__13ERedBlackTreeUiUib
                  (&_7EIFloor_m_floors.field0_0x0,pEVar11->m_roomID,(uint)pEVar11,false);
        ppFVar1 = ((_globals._pFloorSet)->field0_0x0).pData;
        if (ppFVar1 == (FloorTile **)0x0) {
          local_c4 = (FloorTile *)0x0;
        }
        else {
          local_c4 = ppFVar1[-1];
        }
                    /* end of inlined section */
        pFVar18 = (FloorTile *)0x0;
        if (local_c4 != (FloorTile *)0x0) {
          do {
            pFVar19 = (FloorTile *)((int)&pFVar18->cost + 1);
            pnewOtd = (EOrderTableData *)0x0;
            lVar15 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
            pEVar20 = _16EFloorShdTblNode__eFloorOrderTable[(int)pFVar18].m_stripList.field0_0x0.m_l
                      .m_pHead;
                    /* end of inlined section */
            this_00 = _16EFloorShdTblNode__eFloorOrderTable[(int)pFVar18].m_pShader;
            if (pEVar20 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              local_100[0] = (EFloorStripInfo__m_data)pEVar20->data;
              while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                pEVar2 = pEVar20->pNext;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
                __7CTilePtiii(&tile,local_100[0].m_mask >> 8 & 0xff,
                              local_100[0].m_mask >> 0x10 & 0xff,1);
                uVar12 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                                   ((int)&_5Globs_pFixedWorld->__vtable +
                                    (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,
                                    &tile);
                bVar7 = pEVar11->m_roomID == uVar12;
                if ((!bVar7) && (uVar12 != 0xfffb)) {
                  piVar13 = (int *)(*(code *)pRVar9->__vtable->ClearRoomPartitions)
                                             ((int)&pRVar9->__vtable +
                                              (int)*(short *)&pRVar9->__vtable->GetHouse,
                                              *(undefined2 *)&pEVar11->m_roomID);
                  piVar14 = (int *)(*(code *)pRVar9->__vtable->ClearRoomPartitions)
                                             ((int)&pRVar9->__vtable +
                                              (int)*(short *)&pRVar9->__vtable->GetHouse,uVar12);
                  lVar16 = (**(code **)(*piVar13 + 100))
                                     ((int)piVar13 + (int)*(short *)(*piVar13 + 0x60));
                  if (lVar16 != 0) {
                    lVar16 = (**(code **)(*piVar14 + 100))
                                       ((int)piVar14 + (int)*(short *)(*piVar14 + 0x60));
                    bVar7 = lVar16 != 0 || bVar7;
                  }
                }
                if ((pnewOtd == (EOrderTableData *)0x0) && (bVar7)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                  AddTail__9ENodeListUi(&(pEVar11->m_shaderList).field0_0x0,(uint)this_00);
                    /* end of inlined section */
                  AddRef__9EResource(&this_00->field0_0x0);
                  pnewOtd = AllocOtd__7EIFloor();
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                  AddTail__9ENodeListUi(&(pEVar11->m_otds).field0_0x0,(uint)pnewOtd);
                  pEVar8 = _pGfx;
                    /* end of inlined section */
                  pnewOtd->pShader = this_00->m_pShader;
                  pEVar3 = (pEVar8->field0_0x0).__vtable;
                  lVar15 = (*(code *)pEVar3[6].EGlobalManagerClient)
                                     ((int)&(pEVar8->field0_0x0).__vtable +
                                      (int)*(short *)(pEVar3 + 6),1);
                }
                if ((lVar15 != 0) && (bVar7)) {
                  if (pHouse == (EHouse__26_3190 *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    vOff.field0_0x0.d[1] = 0.0;
                    vOff.field0_0x0.d[0] = 0.0;
                  }
                  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    vOff.field0_0x0.d[0] = (pHouse->m_vHouse_off).field0_0x0.d[0];
                    vOff.field0_0x0.d[1] = (pHouse->m_vHouse_off).field0_0x0.d[1];
                    /* end of inlined section */
                  }
                    /* end of inlined section */
                  BuildStrip__16EFloorShdTblNodeP3ERCRC15EFloorStripInfoRC5EVec2
                            ((ERC *)lVar15,(EFloorStripInfo__51_2398 *)&local_100[0].m_bitf,&vOff);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                  Remove__9ENodeListP17NLIteratorPtrType
                            (&_16EFloorShdTblNode__eFloorOrderTable[(int)pFVar18].m_stripList.
                              field0_0x0,(undefined1 *)pEVar20);
                }
                ___7CTilePt(&tile,2);
                if (pEVar2 == (ENodeListNode *)0x0) break;
                local_100[0] = (EFloorStripInfo__m_data)pEVar2->data;
                pEVar20 = pEVar2;
              }
            }
                    /* end of inlined section */
            this_04 = GetList__21EFloorShdTblTempTableUi
                                (&tempDiagSortTab,*(uint *)&this_00->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
            if ((this_04 != (TNodeList_EIFloorDiagonalData___ *)0x0) &&
               (pEVar20 = (this_04->field0_0x0).m_l.m_pHead, pEVar20 != (ENodeListNode *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              data = (EIFloorDiagonalData *)pEVar20->data;
              do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                pEVar2 = pEVar20->pNext;
                    /* end of inlined section */
                    /* end of inlined section */
                bVar7 = pEVar11->m_roomID == (uint)(ushort)data->roomID;
                if (!bVar7) {
                  piVar13 = (int *)(*(code *)pRVar9->__vtable->ClearRoomPartitions)
                                             ((int)&pRVar9->__vtable +
                                              (int)*(short *)&pRVar9->__vtable->GetHouse,
                                              *(undefined2 *)&pEVar11->m_roomID);
                  piVar14 = (int *)(*(code *)pRVar9->__vtable->ClearRoomPartitions)
                                             ((int)&pRVar9->__vtable +
                                              (int)*(short *)&pRVar9->__vtable->GetHouse,
                                              data->roomID);
                  lVar16 = (**(code **)(*piVar13 + 100))
                                     ((int)piVar13 + (int)*(short *)(*piVar13 + 0x60));
                  if ((lVar16 != 0) &&
                     (lVar16 = (**(code **)(*piVar14 + 100))
                                         ((int)piVar14 + (int)*(short *)(*piVar14 + 0x60)),
                     lVar16 != 0)) {
                    bVar7 = true;
                  }
                }
                if (pnewOtd == (EOrderTableData *)0x0) {
                  if (bVar7) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    AddTail__9ENodeListUi(&(pEVar11->m_shaderList).field0_0x0,(uint)this_00);
                    /* end of inlined section */
                    AddRef__9EResource(&this_00->field0_0x0);
                    pnewOtd = AllocOtd__7EIFloor();
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    AddTail__9ENodeListUi(&(pEVar11->m_otds).field0_0x0,(uint)pnewOtd);
                    pEVar8 = _pGfx;
                    /* end of inlined section */
                    pnewOtd->pShader = this_00->m_pShader;
                    pEVar3 = (pEVar8->field0_0x0).__vtable;
                    lVar15 = (*(code *)pEVar3[6].EGlobalManagerClient)
                                       ((int)&(pEVar8->field0_0x0).__vtable +
                                        (int)*(short *)(pEVar3 + 6),1);
                    goto LAB_00169958;
                  }
                }
                else {
LAB_00169958:
                  if ((bVar7) && (lVar15 != 0)) {
                    BuildDiagonalTri__FP3ERCRC19EIFloorDiagonalData((ERC *)lVar15,data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    Remove__9ENodeListP17NLIteratorPtrType
                              (&this_04->field0_0x0,(undefined1 *)pEVar20);
                    i = Search__C9ENodeListUi
                                  (&_16EFloorShdTblNode_m_diagonalTiles.field0_0x0,(uint)data);
                    Remove__9ENodeListP17NLIteratorPtrType
                              (&_16EFloorShdTblNode_m_diagonalTiles.field0_0x0,i);
                    _memmanFree__FPv(data);
                  }
                }
                if (pEVar2 == (ENodeListNode *)0x0) break;
                data = (EIFloorDiagonalData *)pEVar2->data;
                pEVar20 = pEVar2;
              } while( true );
            }
            if (lVar15 != 0) {
              pEVar3 = (_pGfx->field0_0x0).__vtable;
              uVar12 = (*(code *)pEVar3[6].ManagedShutdown)
                                 ((int)&(_pGfx->field0_0x0).__vtable +
                                  (int)*(short *)&pEVar3[6].ManagedStartup,lVar15);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              AddTail__9ENodeListUi(&(pEVar11->m_dLList).field0_0x0,uVar12);
                    /* end of inlined section */
              pnewOtd->callbackParam2 = uVar12;
              pnewOtd->callbackParam1 = (uint)pEVar11;
            }
            pFVar18 = pFVar19;
          } while (pFVar19 < local_c4);
        }
      }
                    /* inlined from ../MSrc/Tree.h */
      _Var4.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc);
      if (_Var4.node == (__rb_tree_node_base *)0x0) {
        iVar17 = *(int *)((int)roomItr.field0_0x0.node + 4);
        if (roomItr.field0_0x0.node ==
            (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar17 + 0xc)) {
          do {
            bVar7 = iVar17 == *(int *)(*(int *)(iVar17 + 4) + 0xc);
            iVar17 = *(int *)(iVar17 + 4);
          } while (bVar7);
        }
      }
      else {
        p_Var5 = (_Var4.node)->left;
        _Var6.field0_0x0.node = roomItr.field0_0x0.node;
        while (roomItr.field0_0x0.node =
                    (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node,
              p_Var5 != (__rb_tree_node_base *)0x0) {
          _Var6.field0_0x0.node = *(__rb_tree_base_iterator *)((int)_Var6.field0_0x0.node + 8);
          p_Var5 = *(__rb_tree_node_base **)((int)_Var6.field0_0x0.node + 8);
        }
      }
                    /* inlined from ../MSrc/Tree.h */
                    /* end of inlined section */
    } while (roomItr.field0_0x0.node !=
             (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar10 + 4));
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  if (_16EFloorShdTblNode_m_diagonalTiles.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
    pAddress = (void *)(_16EFloorShdTblNode_m_diagonalTiles.field0_0x0.m_l.m_pHead)->data;
    pEVar20 = _16EFloorShdTblNode_m_diagonalTiles.field0_0x0.m_l.m_pHead;
    while( true ) {
      pEVar20 = pEVar20->pNext;
      _memmanFree__FPv(pAddress);
      if (pEVar20 == (ENodeListNode *)0x0) break;
      pAddress = (void *)pEVar20->data;
    }
  }
  RemoveAll__9ENodeList(&_16EFloorShdTblNode_m_diagonalTiles.field0_0x0);
                    /* end of inlined section */
  EmptyTable__16EFloorShdTblNode();
  CreateLightMaps__18EIFloorLightMapManP7ERLevel(&_7EIFloor_m_lightmapman,pHouse->m_pLevel);
  AddFloors__18EIFloorLightMapManRt13TRedBlackTree2ZUiZP7EIFloor
            (&_7EIFloor_m_lightmapman,&_7EIFloor_m_floors);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if (tempDiagSortTab.m_tree.field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0) {
    this_01 = (ENodeList *)(tempDiagSortTab.m_tree.field0_0x0.m_list.m_pHead)->value;
    while( true ) {
      tempDiagSortTab.m_tree.field0_0x0.m_list.m_pHead =
           (tempDiagSortTab.m_tree.field0_0x0.m_list.m_pHead)->pNext;
      if (this_01 != (ENodeList *)0x0) {
        RemoveAll__9ENodeList(this_01);
        _memmanFree__FPv(this_01);
      }
      if (tempDiagSortTab.m_tree.field0_0x0.m_list.m_pHead == (ERedBlackTreeNode *)0x0) break;
      this_01 = (ENodeList *)(tempDiagSortTab.m_tree.field0_0x0.m_list.m_pHead)->value;
    }
  }
  RemoveAll__13ERedBlackTree((ERedBlackTree *)&tempDiagSortTab);
  RemoveAll__13ERedBlackTree((ERedBlackTree *)&tempDiagSortTab);
  return;
}

void EIFloor::Cleanup() {
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator next;
	ERShader *pData;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator next;
	EDL *pData;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EGlobalManagerClient__vtable *pEVar1;
  EOrderTableData *p;
  EResource *this_00;
  ENodeListNode *pEVar2;
  uint uVar3;
  
  RemoveFromLevel__9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_otds).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    p = (EOrderTableData *)pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      pEVar2 = pEVar2->pNext;
      FreeOtd__7EIFloorP15EOrderTableData(p);
      if (pEVar2 == (ENodeListNode *)0x0) break;
      p = (EOrderTableData *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_otds).field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_shaderList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = (EResource *)pEVar2->data;
    while( true ) {
      pEVar2 = (ENodeListNode *)(&pEVar2->data)[2];
      while (this_00 != (EResource *)0x0) {
        DelRef__9EResource(this_00);
        this_00 = (EResource *)0x0;
      }
      if (pEVar2 == (ENodeListNode *)0x0) break;
      this_00 = (EResource *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_shaderList).field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_dLList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar3 = pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      while (uVar3 != 0) {
        pEVar1 = (_pGfx->field0_0x0).__vtable;
        (*(code *)pEVar1[3].ManagedShutdown)
                  ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
        pEVar1 = (_pGfx->field0_0x0).__vtable;
        (*(code *)pEVar1[7].EGlobalManagerClient)
                  ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),uVar3);
        uVar3 = 0;
      }
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar3 = pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_dLList).field0_0x0);
  return;
}

bool EIFloor::TestCreateFloors() {
  bool bVar1;
  
  bVar1 = PreviewTable__16EFloorShdTblNode();
  return bVar1;
}

bool EFloorShdTblNode::PreviewTable() {
	int nstrips;
	EFloorStripInfo curstrip;
	u8 size;
	u8 x;
	u8 curStyle;
	CTilePt lastCol;
	UInt16 lastRoomId;
	u8 in;
	u8 y;
	CTilePt pt;
	FloorPattern floor;
	UInt16 curRoomId;
	u8 in;
	u8 in;
	u8 in;
	u8 in;
	
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint y;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint y_00;
  EFloorStripInfo__51_2398 curstrip;
  CTilePt lastCol;
  CTilePt pt;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
  y_00 = 1;
  iVar7 = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
  iVar3 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  uVar8 = iVar3 - 1U & 0xff;
  if (1 < uVar8) {
    do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
      curstrip.m_data = (EFloorStripInfo__m_data)(m_bitf)0xff;
      y = 1;
                    /* end of inlined section */
      __7CTilePtiii(&lastCol,0,y_00,1);
      lVar4 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                        ((int)&_5Globs_pFixedWorld->__vtable +
                         (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&lastCol);
      curstrip.m_data.m_mask._0_1_ = 0xff;
      if (1 < uVar8) {
        do {
          __7CTilePtiii(&pt,y_00,y,1);
          bVar1 = (*(code *)_5Globs_pFixedWorld->__vtable->GetVertexConfig)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable->IsOutside,&pt);
          bVar2 = CheckForHotTub__16EFloorShdTblNodeRC7CTilePt(&pt);
          bVar6 = 0xff;
          if (!bVar2) {
            bVar6 = bVar1;
          }
          lVar5 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&pt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
          if ((bVar6 != curstrip.m_data.m_mask._0_1_) || (lVar5 != lVar4)) {
                    /* end of inlined section */
            if (curstrip.m_data.m_mask._0_1_ != -1) {
              iVar7 = iVar7 + 1;
            }
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
            curstrip.m_data = (EFloorStripInfo__m_data)(uint)bVar6;
            lVar4 = lVar5;
          }
                    /* end of inlined section */
          ___7CTilePt(&pt,2);
          y = y + 1 & 0xff;
        } while (y < uVar8);
                    /* end of inlined section */
      }
      y_00 = y_00 + 1 & 0xff;
      if (curstrip.m_data.m_mask._0_1_ != -1) {
        iVar7 = iVar7 + 1;
      }
      ___7CTilePt(&lastCol,2);
    } while (y_00 < uVar8);
  }
  return iVar7 < 0x200;
}

void EIFloor::CalcBounds() {
	RoomManagerImpl *pRoommanImpl;
	EVec3 vHOff;
	Room *pRoom;
	EHouse *this;
	RoomImpl *pRoomImpl;
	CTilePt *it;
	EBound3 bound;
	EMat4 mOr;
	RoomImpl *this;
	EVec3 v3;
	int i;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	float z;
	
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  ulong *puVar6;
  int *piVar7;
  int iVar8;
  EBound3 *pEVar9;
  long lVar10;
  EVec3 *pEVar11;
  char *pcVar12;
  EVec3 *pEVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  EVec3 vHOff;
  EBound3 bound;
  EVec3 v3;
  EMat4 mOr;
  
  uVar17 = (ulong)(int)&vHOff;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar7 = (int *)(*(code *)_5Globs_pRoomManager->__vtable->GetRoomCount)
                            ((int)&_5Globs_pRoomManager->__vtable +
                             (int)*(short *)&_5Globs_pRoomManager->__vtable->ComputeCutaway);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  vHOff.field0_0x0.d[0] = ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
  vHOff.field0_0x0.d[1] = ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1];
                    /* end of inlined section */
  vHOff.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pcVar4 = *(code **)(*piVar7 + 0x5c);
  uVar16 = (ulong)(int)pcVar4;
  lVar10 = (*pcVar4)((int)piVar7 + (int)*(short *)(*piVar7 + 0x58),*(undefined2 *)&this->m_roomID);
  if (lVar10 == 0) {
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[3].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
    uVar5 = (uint)(this->m_vBoundCorners + 3) & 7;
    puVar6 = (ulong *)((int)(this->m_vBoundCorners + 3) - uVar5);
    *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this->m_vBoundCorners[3].field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[3].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)(this->m_vBoundCorners + 3) & 7;
    uVar17 = *(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)(this->m_vBoundCorners + 3) - uVar3) >> uVar3 * 8;
    fVar18 = this->m_vBoundCorners[3].field0_0x0.d[2];
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[2].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
    uVar5 = (uint)(this->m_vBoundCorners + 2) & 7;
    puVar6 = (ulong *)((int)(this->m_vBoundCorners + 2) - uVar5);
    *puVar6 = uVar17 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this->m_vBoundCorners[2].field0_0x0.d[2] = fVar18;
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[2].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)(this->m_vBoundCorners + 2) & 7;
    uVar17 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
             uVar16 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)(this->m_vBoundCorners + 2) - uVar3) >> uVar3 * 8;
    fVar18 = this->m_vBoundCorners[2].field0_0x0.d[2];
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[1].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
    uVar5 = (uint)(this->m_vBoundCorners + 1) & 7;
    puVar6 = (ulong *)((int)(this->m_vBoundCorners + 1) - uVar5);
    *puVar6 = uVar17 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this->m_vBoundCorners[1].field0_0x0.d[2] = fVar18;
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[1].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)(this->m_vBoundCorners + 1) & 7;
    uVar17 = *(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)(this->m_vBoundCorners + 1) - uVar3) >> uVar3 * 8;
    fVar18 = this->m_vBoundCorners[1].field0_0x0.d[2];
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[0].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
    uVar5 = (uint)this->m_vBoundCorners & 7;
    puVar6 = (ulong *)((int)this->m_vBoundCorners - uVar5);
    *puVar6 = uVar17 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this->m_vBoundCorners[0].field0_0x0.d[2] = fVar18;
  }
  else {
    iVar8 = *(int *)lVar10;
    iVar8 = (**(code **)(iVar8 + 0x3c))((int)(int *)lVar10 + (int)*(short *)(iVar8 + 0x38));
                    /* inlined from ../MSrc/Vector.h */
    pcVar12 = *(char **)(iVar8 + 8);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    v3.field0_0x0.d[0] = (float)(int)*pcVar12;
    v3.field0_0x0.d[1] = (float)(int)pcVar12[1];
    uVar16 = CONCAT44((float)(int)pcVar12[1],(float)(int)*pcVar12);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar16 >> (7 - uVar5) * 8;
    uVar5 = (uint)&bound.vMax & 7;
    puVar6 = (ulong *)((int)&bound.vMax - uVar5);
    *puVar6 = uVar16 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    bound.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)&bound.vMax & 7;
    bound.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
         uVar16 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)&bound.vMax - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
              (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar5) * 8;
    bound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    if (pcVar12 != *(char **)(iVar8 + 0xc)) {
      cVar2 = *pcVar12;
      while( true ) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
        pcVar15 = pcVar12 + 3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
        iVar14 = 2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
        v3.field0_0x0.d[0] = (float)(int)cVar2;
        v3.field0_0x0.d[1] = (float)(int)pcVar12[1];
        pEVar9 = &bound;
        pEVar13 = &v3;
        pEVar11 = &bound.vMax;
        do {
          fVar18 = (pEVar9->vMin).field0_0x0.d[0];
          if ((pEVar13->field0_0x0).d[0] <= fVar18) {
            fVar18 = (pEVar13->field0_0x0).d[0];
          }
          (pEVar9->vMin).field0_0x0.d[0] = fVar18;
          fVar18 = (pEVar13->field0_0x0).d[0];
          if ((pEVar13->field0_0x0).d[0] < (pEVar11->field0_0x0).d[0]) {
            fVar18 = (pEVar11->field0_0x0).d[0];
          }
          (pEVar11->field0_0x0).d[0] = fVar18;
          pEVar13 = (EVec3 *)((int)&pEVar13->field0_0x0 + 4);
          pEVar11 = (EVec3 *)((int)&pEVar11->field0_0x0 + 4);
          iVar14 = iVar14 + -1;
          pEVar9 = (EBound3 *)((int)&(pEVar9->vMin).field0_0x0 + 4);
        } while (-1 < iVar14);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
        if (pcVar15 == *(char **)(iVar8 + 0xc)) break;
        cVar2 = *pcVar15;
        pcVar12 = pcVar15;
      }
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    bound.vMax.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    bound.vMin.field0_0x0.d[2] = 0.0;
    __as__5EMat4RC5EMat4(&mOr,&_mId);
                    /* end of inlined section */
    Translate__5EMat4RC5EVec3(&mOr,&vHOff);
    SwapXY__FR5EMat4(&mOr);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v3.field0_0x0.d[0] =
         bound.vMax.field0_0x0.d[0] * mOr.field0_0x0.d[0][0] +
         bound.vMax.field0_0x0.d[1] * mOr.field0_0x0.d[1][0] +
         bound.vMax.field0_0x0.d[2] * mOr.field0_0x0.d[2][0] + mOr.field0_0x0.d[3][0];
    v3.field0_0x0.d[1] =
         bound.vMax.field0_0x0.d[0] * mOr.field0_0x0.d[0][1] +
         bound.vMax.field0_0x0.d[1] * mOr.field0_0x0.d[1][1] +
         bound.vMax.field0_0x0.d[2] * mOr.field0_0x0.d[2][1] + mOr.field0_0x0.d[3][1];
    v3.field0_0x0.d[2] =
         bound.vMax.field0_0x0.d[0] * mOr.field0_0x0.d[0][2] +
         bound.vMax.field0_0x0.d[1] * mOr.field0_0x0.d[1][2] +
         bound.vMax.field0_0x0.d[2] * mOr.field0_0x0.d[2][2] + mOr.field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar16 = CONCAT44(v3.field0_0x0.d[1],v3.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar16 >> (7 - uVar5) * 8;
    uVar5 = (uint)&bound.vMax & 7;
    puVar6 = (ulong *)((int)&bound.vMax - uVar5);
    *puVar6 = uVar16 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    bound.vMax.field0_0x0.d[2] = v3.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v3.field0_0x0.d[0] =
         bound.vMin.field0_0x0.d[0] * mOr.field0_0x0.d[0][0] +
         bound.vMin.field0_0x0.d[1] * mOr.field0_0x0.d[1][0] +
         bound.vMin.field0_0x0.d[2] * mOr.field0_0x0.d[2][0] + mOr.field0_0x0.d[3][0];
    v3.field0_0x0.d[2] =
         bound.vMin.field0_0x0.d[0] * mOr.field0_0x0.d[0][2] +
         bound.vMin.field0_0x0.d[1] * mOr.field0_0x0.d[1][2] +
         bound.vMin.field0_0x0.d[2] * mOr.field0_0x0.d[2][2] + mOr.field0_0x0.d[3][2];
    v3.field0_0x0.d[1] =
         bound.vMin.field0_0x0.d[0] * mOr.field0_0x0.d[0][1] +
         bound.vMin.field0_0x0.d[1] * mOr.field0_0x0.d[1][1] +
         bound.vMin.field0_0x0.d[2] * mOr.field0_0x0.d[2][1] + mOr.field0_0x0.d[3][1];
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
              CONCAT44(v3.field0_0x0.d[1],v3.field0_0x0.d[0]) >> (7 - uVar5) * 8;
    bound.vMax.field0_0x0.d[0] = bound.vMax.field0_0x0.d[0] + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    bound.vMax.field0_0x0.d[1] = bound.vMax.field0_0x0.d[1] + 0.5;
    bound.vMin.field0_0x0._0_8_ = CONCAT44(v3.field0_0x0.d[1] - 0.5,v3.field0_0x0.d[0] - 0.5);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)&bound.vMax & 7;
    uVar17 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
             uVar17 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&bound.vMax - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[0].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
    uVar5 = (uint)this->m_vBoundCorners & 7;
    puVar6 = (ulong *)((int)this->m_vBoundCorners - uVar5);
    *puVar6 = uVar17 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this->m_vBoundCorners[0].field0_0x0.d[2] = bound.vMax.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&this->m_vBoundCorners[1].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
              (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar5) * 8;
    uVar5 = (uint)(this->m_vBoundCorners + 1) & 7;
    puVar6 = (ulong *)((int)(this->m_vBoundCorners + 1) - uVar5);
    *puVar6 = bound.vMin.field0_0x0._0_8_ << uVar5 * 8 |
              *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this->m_vBoundCorners[1].field0_0x0.d[2] = v3.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    this->m_vBoundCorners[2].field0_0x0.d[0] = v3.field0_0x0.d[0] - 0.5;
    this->m_vBoundCorners[2].field0_0x0.d[1] = bound.vMax.field0_0x0.d[1];
    this->m_vBoundCorners[2].field0_0x0.d[2] = v3.field0_0x0.d[2];
    this->m_vBoundCorners[3].field0_0x0.d[0] = bound.vMax.field0_0x0.d[0];
    this->m_vBoundCorners[3].field0_0x0.d[2] = v3.field0_0x0.d[2];
                    /* end of inlined section */
    this->m_vBoundCorners[3].field0_0x0.d[1] = v3.field0_0x0.d[1] - 0.5;
  }
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  EFloorShdTblNode *this;
  EVec2 (*this_00) [3];
  int iVar1;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      RemoveAll__9ENodeList(&_16EFloorShdTblNode_m_diagonalTiles.field0_0x0);
      this_00 = _vDiagSides;
      do {
        this_00 = (EVec2 (*) [3])((int)this_00 + -0xc);
        ___16EFloorShdTblNode((EFloorShdTblNode *)this_00,0);
      } while ((EFloorShdTblNode *)this_00 != _16EFloorShdTblNode__eFloorOrderTable);
      RemoveAll__13ERedBlackTree(&_7EIFloor_m_floors.field0_0x0);
      DestroyLightMaps__18EIFloorLightMapMan(&_7EIFloor_m_lightmapman);
      RemoveAll__13ERedBlackTree((ERedBlackTree *)&_7EIFloor_m_lightmapman);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
      iVar1 = 0x3f;
      __13ERedBlackTree((ERedBlackTree *)&_7EIFloor_m_lightmapman);
      __13ERedBlackTree(&_7EIFloor_m_floors.field0_0x0);
      this = _16EFloorShdTblNode__eFloorOrderTable;
      do {
        iVar1 = iVar1 + -1;
        __16EFloorShdTblNode(this);
        this = this + 1;
      } while (iVar1 != -1);
      _16EFloorShdTblNode_m_diagonalTiles.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
      _16EFloorShdTblNode_m_diagonalTiles.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
      gpTypeInfo_EIFloor =
           Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_7EIFloor_m_typeInfo,New__7EIFloor,0,"EIFloor",&_9EInstance_m_typeInfo);
      _vDiagSides[3][2].field0_0x0._4_4_ = 0xbf000000;
      _vDiagSides[0][0].field0_0x0._0_4_ = 0x3f000000;
      _vDiagSides[3][2].field0_0x0._0_4_ = 0x3f000000;
      _vDiagSidesTc[0][0].field0_0x0._0_4_ = 0x3f800000;
      _vDiagSides[0][0].field0_0x0._4_4_ = 0x3f000000;
      _vDiagSides[0][1].field0_0x0._0_4_ = 0xbf000000;
      _vDiagSides[0][1].field0_0x0._4_4_ = 0xbf000000;
      _vDiagSides[0][2].field0_0x0._0_4_ = 0x3f000000;
      _vDiagSides[0][2].field0_0x0._4_4_ = 0xbf000000;
      _vDiagSides[1][0].field0_0x0._0_4_ = 0xbf000000;
      _vDiagSides[1][0].field0_0x0._4_4_ = 0x3f000000;
      _vDiagSides[1][1].field0_0x0._0_4_ = 0x3f000000;
      _vDiagSides[1][1].field0_0x0._4_4_ = 0xbf000000;
      _vDiagSides[1][2].field0_0x0._0_4_ = 0xbf000000;
      _vDiagSides[1][2].field0_0x0._4_4_ = 0xbf000000;
      _vDiagSides[2][0].field0_0x0._0_4_ = 0x3f000000;
      _vDiagSides[2][0].field0_0x0._4_4_ = 0x3f000000;
      _vDiagSides[2][1].field0_0x0._0_4_ = 0xbf000000;
      _vDiagSides[2][1].field0_0x0._4_4_ = 0x3f000000;
      _vDiagSides[2][2].field0_0x0._0_4_ = 0xbf000000;
      _vDiagSides[2][2].field0_0x0._4_4_ = 0xbf000000;
      _vDiagSides[3][0].field0_0x0._0_4_ = 0x3f000000;
      _vDiagSides[3][0].field0_0x0._4_4_ = 0x3f000000;
      _vDiagSides[3][1].field0_0x0._0_4_ = 0xbf000000;
      _vDiagSides[3][1].field0_0x0._4_4_ = 0x3f000000;
      _vDiagSidesTc[0][0].field0_0x0._4_4_ = 0x3f800000;
      _vDiagSidesTc[0][1].field0_0x0._0_4_ = 0;
      _vDiagSidesTc[0][1].field0_0x0._4_4_ = 0x3f800000;
      _vDiagSidesTc[0][2].field0_0x0._0_4_ = 0x3f800000;
      _vDiagSidesTc[0][2].field0_0x0._4_4_ = 0;
      _vDiagSidesTc[1][0].field0_0x0._0_4_ = 0;
      _vDiagSidesTc[1][0].field0_0x0._4_4_ = 0x3f800000;
      _vDiagSidesTc[1][1].field0_0x0._0_4_ = 0x3f800000;
      _vDiagSidesTc[3][2].field0_0x0._0_4_ = 0x3f800000;
      _vDiagSidesTc[3][2].field0_0x0._4_4_ = 0;
      _vDiagSidesTc[1][1].field0_0x0._4_4_ = 0;
      _vDiagSidesTc[1][2].field0_0x0._0_4_ = 0;
      _vDiagSidesTc[1][2].field0_0x0._4_4_ = 0;
      _vDiagSidesTc[2][0].field0_0x0._0_4_ = 0x3f800000;
      _vDiagSidesTc[2][0].field0_0x0._4_4_ = 0x3f800000;
      _vDiagSidesTc[2][1].field0_0x0._0_4_ = 0;
      _vDiagSidesTc[2][1].field0_0x0._4_4_ = 0x3f800000;
      _vDiagSidesTc[2][2].field0_0x0._0_4_ = 0;
      _vDiagSidesTc[2][2].field0_0x0._4_4_ = 0;
      _vDiagSidesTc[3][0].field0_0x0._0_4_ = 0x3f800000;
      _vDiagSidesTc[3][0].field0_0x0._4_4_ = 0x3f800000;
      _vDiagSidesTc[3][1].field0_0x0._0_4_ = 0;
      _vDiagSidesTc[3][1].field0_0x0._4_4_ = 0;
    }
  }
  return;
}

void EIFloorLightMapMan::DestroyLightMaps() {
	TRedBlackTree<unsigned int,EIFloorLightMapMan::EILightmapForRoom *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	
  EILightmapForRoom *this_00;
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_lightmaps).field0_0x0.m_list.m_pHead;
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
    this_00 = (EILightmapForRoom *)pEVar1->value;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      SafeDelete__Q218EIFloorLightMapMan17EILightmapForRoom(this_00);
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (EILightmapForRoom *)pEVar1->value;
    }
  }
  RemoveAll__13ERedBlackTree((ERedBlackTree *)this);
  return;
}

void EIFloorLightMapMan::EILightmapForRoom::SafeDelete() {
	EILightmapForRoom *this;
	
                    /* end of inlined section */
  if (this != (EILightmapForRoom *)0x0) {
    ___10EILightmap((EILightmap__0_4024 *)this,2);
    __dl__Q218EIFloorLightMapMan17EILightmapForRoomPv(this);
  }
  return;
}

EIFloor* EIFloor::New() {
  EIFloor *pEVar1;
  
  pEVar1 = (EIFloor *)__nw__7EIFloorUi();
  pEVar1 = __7EIFloorP6EHouse(pEVar1,(EHouse__26_3190 *)0x0);
  return pEVar1;
}

void EIFloor::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIFloor *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EIFloor::GetTypeInfo() {
  return &_7EIFloor_m_typeInfo;
}

char* EIFloor::GetTypeName() {
  return _7EIFloor_m_typeInfo.m_name;
}

u32 EIFloor::GetTypeKey() {
  return _7EIFloor_m_typeInfo.m_key;
}

u16 EIFloor::GetTypeVersion() {
  return _7EIFloor_m_typeInfo.m_version;
}

u16 EIFloor::GetReadVersion() {
  return _7EIFloor_m_typeInfo.m_readVersion;
}

ETypeInfo* EIFloor::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_7EIFloor_m_typeInfo,New__7EIFloor,version,"EIFloor",&_9EInstance_m_typeInfo)
  ;
  return pEVar1;
}

EIFloor* EIFloor::CreateCopy() {
  EIFloor *pEVar1;
  
  pEVar1 = (EIFloor *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void EIFloor::~EIFloor(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_7EIFloor;
  Cleanup__7EIFloor(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_dLList).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_shaderList).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_otds).field0_0x0);
                    /* end of inlined section */
  ___9EInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__7EIFloorPv(this);
  }
  return;
}

void EIFloor::Update() {
  return;
}

UInt16 EIFloor::GetRoomId() {
  return *(short *)&this->m_roomID;
}

void EIFloor::DrawLightmapsDebug(ERC *prc) {
  DrawDebug__18EIFloorLightMapManP3ERC(&_7EIFloor_m_lightmapman,prc);
  return;
}

void EIFloor::ComputeLightMap() {
  Compute__18EIFloorLightMapMan(&_7EIFloor_m_lightmapman);
  return;
}

void EIFloor::EnableShadows(bool enable) {
  EnableShadows__18EIFloorLightMapManb(&_7EIFloor_m_lightmapman,enable);
  return;
}

void EIFloorLightMapMan::EILightmapForRoom::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

void global constructors keyed to InitVertColorLookup() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to InitVertColorLookup() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

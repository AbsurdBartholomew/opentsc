/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once
#include "common/types.h"
#include "engine/texture/e_texture.h"

struct ERenderSurface
{
protected:
    int m_xsize;
    int m_ysize;
    u32 m_flags;
    int m_format;

public:
    ERenderSurface();
public:
    /* vtable[2] */ virtual bool Create();
    /* vtable[3] */ virtual void GetOutputRect(EFloatRect &rect);
    /* vtable[4] */ virtual void SetBackgroundColor();
    /* vtable[5] */ virtual void SetFlags(u32 flags);
    /* vtable[6] */ virtual u32 GetFlags();
    /* vtable[7] */ virtual void GetImageData();
    /* vtable[8] */ virtual bool CopyToTexture();
    /* vtable[9] */ virtual ETexture *GetTexture();

protected:
    /* vtable[10] */ virtual void Select();
    bool SetSize(int xsize, int ysize, int format);
};
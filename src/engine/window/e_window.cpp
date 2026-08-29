/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "common/types.h"
#include "e_window.h"

EWindow *EWindow::m_pCurrentWindow = NULL;
E3DWindow *EWindow::m_pCurrent3DWindow = NULL;
EPortalWindow *EWindow::m_pCurrentPortalWindow = NULL;

// TODO: Move to e_sdlgraphics
EGraphics *_pGfx = NULL;

EWindow::EWindow()
{
    m_rClipIn.left = 0.0;
    m_rClipIn.top = 0.0;
    m_rClipIn.right = 1.0;
    m_rClipIn.bottom = 1.0;
    m_rIn.left = m_rClipIn.left;
    m_rIn.top = m_rClipIn.top;
    m_rIn.right = m_rClipIn.right;
    m_rIn.bottom = m_rClipIn.bottom;
    m_rOut.left = m_rIn.left;
    m_rOut.top = m_rIn.top;
    m_rOut.right = m_rIn.right;
    m_rOut.bottom = m_rIn.bottom;

    m_outputRectNeedsSetting = true;

    CalcWindowMat();
    CalcClip();

    m_pRenderSurface = NULL;
}

EWindow::~EWindow()
{
    if (m_pCurrentWindow == this)
        m_pCurrentWindow = NULL;
    if (m_pCurrent3DWindow == (E3DWindow *)this)
        m_pCurrent3DWindow = NULL;
    if (m_pCurrentPortalWindow == (EPortalWindow *)this)
        m_pCurrent3DWindow = NULL;
}

void EWindow::Select(ERC *prc)
{
    EFloatRect rOut;
    void *pvVar3;

    if (m_outputRectNeedsSetting != false)
    {
        if (m_pRenderSurface == NULL)
        {
            _pGfx->ManagedShutdown();
            /* pEVar2 = (_pGfx->field0_0x0).__vtable;
            (*(code *)pEVar2[5].EGlobalManagerClient)
                        ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 5),&rOut);
                */
        }
        else
        {
            /*
            (*(code *)pEVar1->__vtable->GetImageData)
                ((int)&pEVar1->m_xsize + (int)*(short *)&pEVar1->__vtable->GetFlags);
            */
        }

        SetOutputCoordinates(rOut);
        m_outputRectNeedsSetting = false;
    }

    m_pCurrentWindow = this;
}

void EWindow::WindowMatrixChanged()
{
    return;
}

void EWindow::InputCoordinatesChanged()
{
    return;
}

void EWindow::OutputCoordinatesChanged()
{
    return;
}

E3DWindow *EWindow::Cast3DWindow()
{
    return (E3DWindow *)NULL;
}

EPortalWindow *EWindow::CastPortalWindow()
{
    return (EPortalWindow *)NULL;
}

void EWindow::SetRenderSurface(ERenderSurface *pRenderSurface)
{
    
}

void EWindow::CalcWindowMat()
{
    float xScale;
    float inWidth;
    float yScale;
    float inHeight;
    float x;
    float y;

    int64_t unaff_s0;
    int64_t unaff_retaddr;
    float fVar1;
    float fVar2;
    float local_40;
    float local_3c;
    int local_38;
    int local_30;
    int uStack_2c;
    int local_20;
    int uStack_1c;

    local_30 = (int)unaff_s0;
    uStack_2c = (int)((u64)unaff_s0 >> 0x20);
    local_20 = (int)unaff_retaddr;
    uStack_1c = (int)((u64)unaff_retaddr >> 0x20);
    /* inlined from /eor/src2/common/math/e_rect.h */
    fVar2 = m_rIn.right - m_rIn.left;
    /* end of inlined section */
    if (fVar2 == 0.0)
    {
        fVar2 = 1.0;
        fVar1 = m_rIn.top;
    }
    else
    {
        /* inlined from /eor/src2/common/math/e_rect.h */
        /* end of inlined section */
        fVar2 = m_rOut.right - m_rOut.left / fVar2;
        /* end of inlined section */
        /* inlined from /eor/src2/common/math/e_rect.h */
        fVar1 = m_rIn.top;
    }
    fVar1 = m_rIn.bottom - fVar1;
    /* end of inlined section */
    if (fVar1 == 0.0)
    {
        fVar1 = 1.0;
        local_40 = m_rIn.left;
    }
    else
    {
        /* inlined from /eor/src2/common/math/e_rect.h */
        /* end of inlined section */
        fVar1 = m_rOut.bottom - m_rOut.top / fVar1;
        local_40 = m_rIn.left;
    }
    /* inlined from /eor/src2/common/math/e_mat4.h */
    /* end of inlined section */
    /* inlined from /eor/src2/common/math/e_mat4.h */
    /* end of inlined section */
    local_40 = -local_40;
    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_38 = 0;
    /* end of inlined section */
    local_3c = -m_rIn.top;
    /* inlined from /eor/src2/common/math/e_vec3.h */
    m_mWindow.Translate(*(EVec3*)&local_40);
    local_38 = 0x3f800000;
    local_40 = fVar2;
    local_3c = fVar1;
    m_mWindow.PostScale(fVar2);
    local_40 = m_rOut.left;
    local_3c = m_rOut.top;
    local_38 = 0;
    m_mWindow.PostTranslate(*(EVec3*)&local_40);
    /* end of inlined section */
    //(*(code *)this->__vtable->Cast3DWindow)((int)&(this->m_mWindow).field0_0x0 + (int)*(short *)&this->__vtable->SetRenderSurface);
    return;
}

void EWindow::CalcClip()
{
    #if 0
    float xIn;
    float yIn;

    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    /* inlined from c:/eor/src2/engine/window/e_window.h */
    fVar4 = (this->m_mWindow).field0_0x0.d[0];
    fVar8 = (this->m_mWindow).field0_0x0.d[1][1];
    fVar2 = (this->m_rClipIn).top;
    fVar1 = (this->m_rClipIn).bottom;
    fVar6 = (this->m_mWindow).field0_0x0.d[3][0];
    fVar5 = (this->m_mWindow).field0_0x0.d[3][1];
    /* end of inlined section */
    fVar9 = (this->m_rOut).right;
    /* inlined from c:/eor/src2/engine/window/e_window.h */
    fVar3 = (this->m_rClipIn).left * fVar4 + fVar6;
    /* end of inlined section */
    fVar7 = (this->m_rOut).left;
    /* inlined from c:/eor/src2/engine/window/e_window.h */
    fVar6 = (this->m_rClipIn).right * fVar4 + fVar6;
    (this->m_rClipOut).left = fVar3;
    /* end of inlined section */
    /* inlined from c:/eor/src2/engine/window/e_window.h */
    (this->m_rClipOut).right = fVar6;
    (this->m_rClipOut).bottom = fVar1 * fVar8 + fVar5;
    /* end of inlined section */
    (this->m_rClipOut).top = fVar2 * fVar8 + fVar5;
    if (fVar7 < fVar9)
    {
        fVar1 = (float)((int)fVar7 * (uint)(fVar3 < fVar7) | (int)fVar3 * (uint)(fVar3 >= fVar7));
        fVar6 = (float)((int)fVar9 * (uint)(fVar9 < fVar6) | (int)fVar6 * (uint)(fVar9 >= fVar6));
    }
    else
    {
        fVar1 = (float)((int)fVar7 * (uint)(fVar7 < fVar3) | (int)fVar3 * (uint)(fVar7 >= fVar3));
        fVar6 = (float)((int)fVar9 * (uint)(fVar6 < fVar9) | (int)fVar6 * (uint)(fVar6 >= fVar9));
    }
    (this->m_rClipOutClamped).left = fVar1;
    (this->m_rClipOutClamped).right = fVar6;
    fVar1 = (this->m_rOut).bottom;
    fVar2 = (this->m_rOut).top;
    fVar6 = (this->m_rClipOut).top;
    if (fVar2 < fVar1)
    {
        fVar3 = (this->m_rClipOut).bottom;
        fVar2 = (float)((int)fVar2 * (uint)(fVar6 < fVar2) | (int)fVar6 * (uint)(fVar6 >= fVar2));
        fVar6 = (float)((int)fVar1 * (uint)(fVar1 < fVar3) | (int)fVar3 * (uint)(fVar1 >= fVar3));
    }
    else
    {
        fVar3 = (this->m_rClipOut).bottom;
        fVar2 = (float)((int)fVar2 * (uint)(fVar2 < fVar6) | (int)fVar6 * (uint)(fVar2 >= fVar6));
        fVar6 = (float)((int)fVar1 * (uint)(fVar3 < fVar1) | (int)fVar3 * (uint)(fVar3 >= fVar1));
    }
    (this->m_rClipOutClamped).top = fVar2;
    (this->m_rClipOutClamped).bottom = fVar6;
    #endif
}

void EWindow::CalcClipInv()
{
#if 0
    EWindow *this;
    float xIn;
    float yIn;
    EMat4 *this;
    EMat4 *this;
    EMat4 *this;
    EMat4 *this;
    EWindow *this;
    float xIn;
    float yIn;
    EMat4 *this;
    EMat4 *this;
    EMat4 *this;
    EMat4 *this;

    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    /* inlined from c:/eor/src2/engine/window/e_window.h */
    fVar4 = (this->m_mWindow).field0_0x0.d[3][0];
    fVar7 = (this->m_mWindow).field0_0x0.d[3][1];
    fVar3 = (this->m_rClipOut).top;
    fVar1 = (this->m_rClipOut).right;
    fVar2 = (this->m_rClipOut).bottom;
    fVar6 = (this->m_mWindow).field0_0x0.d[0];
    fVar5 = (this->m_mWindow).field0_0x0.d[1][1];
    (this->m_rClipIn).left = ((this->m_rClipOut).left - fVar4) / fVar6;
    (this->m_rClipIn).right = (fVar1 - fVar4) / fVar6;
    (this->m_rClipIn).bottom = (fVar2 - fVar7) / fVar5;
    (this->m_rClipIn).top = (fVar3 - fVar7) / fVar5;
#endif
}

void EWindow::SetClip(EFloatRect &rect)
{
    m_rClipIn.left = rect.left;
    m_rClipIn.top = rect.top;
    m_rClipIn.right = rect.right;
    m_rClipIn.bottom = rect.bottom;
    CalcClip();
}

void EWindow::SetInputCoordinates(EFloatRect &rect)
{
    bool bVar1;

    /* inlined from /eor/src2/common/math/e_rect.h */
    bVar1 = false;
    /* end of inlined section */
    /* inlined from /eor/src2/common/math/e_rect.h */
    if (m_rIn.left == rect.left)
    {
        if (m_rIn.top != rect.top)
        {
            bVar1 = true;
            goto LAB_00299a88;
        }
        if (m_rIn.right != rect.right)
        {
            bVar1 = true;
            goto LAB_00299a88;
        }
        if (m_rIn.bottom == rect.bottom)
            goto LAB_00299a88;
    }
    bVar1 = true;
LAB_00299a88:
    if (bVar1)
    {
        m_rIn.left = rect.left;
        m_rIn.top = rect.top;
        m_rIn.right = rect.right;
        m_rIn.bottom = rect.bottom;
        CalcWindowMat();
        CalcClipInv();
        //(**(code **)(this->__vtable + 1))((int)&(this->m_mWindow).field0_0x0 + (int)*(short *)&this->__vtable->CastPortalWindow);
    }
    return;
}

void EWindow::SetOutputCoordinates(EFloatRect &rect)
{
#if 0
    bool bVar1;

    /* inlined from /eor/src2/common/math/e_rect.h */
    bVar1 = false;
    /* end of inlined section */
    /* inlined from /eor/src2/common/math/e_rect.h */
    if ((this->m_rOut).left == rect->left)
    {
        if ((this->m_rOut).top != rect->top)
        {
            bVar1 = true;
            goto LAB_00299b60;
        }
        if ((this->m_rOut).right != rect->right)
        {
            bVar1 = true;
            goto LAB_00299b60;
        }
        if ((this->m_rOut).bottom == rect->bottom)
            goto LAB_00299b60;
    }
    bVar1 = true;
LAB_00299b60:
    /* end of inlined section */
    if (bVar1)
    {
        /* inlined from /eor/src2/common/math/e_rect.h */
        /* end of inlined section */
        /* inlined from /eor/src2/common/math/e_rect.h */
        (this->m_rOut).left = rect->left;
        (this->m_rOut).top = rect->top;
        (this->m_rOut).right = rect->right;
        /* end of inlined section */
        (this->m_rOut).bottom = rect->bottom;
        CalcWindowMat__7EWindow(this);
        CalcClip__7EWindow(this);
        (*(code *)this->__vtable[1].Select)((int)&(this->m_mWindow).field0_0x0 + (int)*(short *)&this->__vtable[1].EWindow);
    }
    return;
#endif
}
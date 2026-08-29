/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "engine/e_rc.h"
#include "engine/e_rendersurface.h"
#include "common/math/e_vec3.h"
#include "common/math/e_mat4.h"

struct EViewport {
	EVec4 vScale;
	EVec4 vOffset;
};

class E3DWindow;
class EPortalWindow;

class EWindow
{
public:
    static EWindow *m_pCurrentWindow;
	static E3DWindow *m_pCurrent3DWindow;
	static EPortalWindow *m_pCurrentPortalWindow;
	EMat4 m_mWindow;
	EFloatRect m_rIn;
	EFloatRect m_rOut;
	EFloatRect m_rClipIn;
	EFloatRect m_rClipOut;
	EFloatRect m_rClipOutClamped;
	ERenderSurface *m_pRenderSurface;
	bool m_outputRectNeedsSetting;

    EWindow();
    virtual ~EWindow();

    void SetInputCoordinates(EFloatRect &rect);
	void SetOutputCoordinates(EFloatRect &rect);
	void SetClip(EFloatRect &rect);
	void SetInputCoordinatesAndClip(EFloatRect &rect);
	void SetRect(EFloatRect &rect);
	void Transform(float xIn, float yIn, float &xOut, float &yOut);
	void Transform();
	void TransformInv(float xIn, float yIn, float &xOut, float &yOut);
	void TransformInv();
	void TransformToPixel(EVec2 &vIn, EVec2 &vOut);
	void TransformScale(EVec2 &vScaleIn, EVec2 &vScaleOut);
	void TransformScale();
	bool ClipTest(EFloatRect &rect);
	static EWindow* GetCurrentWindow() { return m_pCurrentWindow; }
	static E3DWindow* GetCurrent3DWindow() { return m_pCurrent3DWindow; }
	static EPortalWindow* GetCurrentPortalWindow() { return m_pCurrentPortalWindow; }
	/* vtable[2] */ virtual void Select(ERC *prc);
	/* vtable[3] */ virtual void WindowMatrixChanged();
	/* vtable[4] */ virtual void InputCoordinatesChanged();
	/* vtable[5] */ virtual void OutputCoordinatesChanged();
	/* vtable[6] */ virtual void SetRenderSurface(ERenderSurface *pRenderSurface);
	/* vtable[7] */ virtual E3DWindow* Cast3DWindow();
	/* vtable[8] */ virtual EPortalWindow* CastPortalWindow();
protected:
	void CalcWindowMat();
	void CalcClip();
	void CalcClipInv();
};
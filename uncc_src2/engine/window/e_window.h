// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_WINDOW_E_WINDOW_H
#define C__EOR_SRC2_ENGINE_WINDOW_E_WINDOW_H

typedef TRect<float> EFloatRect;

struct EWindow {
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
	__vtbl_ptr_type *$vf945;
	
	EWindow& operator=();
	EWindow();
	EWindow();
	/* vtable[1] */ virtual EWindow(EWindow*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
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
	bool ClipTest();
	bool ClipTest();
	static EWindow* GetCurrentWindow(/* parameters unknown */);
	static E3DWindow* GetCurrent3DWindow(/* parameters unknown */);
	static EPortalWindow* GetCurrentPortalWindow(/* parameters unknown */);
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

extern EWindow *EWindow::m_pCurrentWindow;
extern E3DWindow *EWindow::m_pCurrent3DWindow;
extern EPortalWindow *EWindow::m_pCurrentPortalWindow;
extern __vtbl_ptr_type EWindow virtual table[10];

void EWindow::~EWindow(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_WINDOW_E_WINDOW_H

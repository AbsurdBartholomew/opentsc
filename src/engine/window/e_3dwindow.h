/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/math/e_mat4.h"
#include "e_window.h"

class EWindow;

class E3DWindow : public EWindow
{
public:
    EMat4 m_mLookAt;
	EMat4 m_mLookAtPos;
	EMat4 m_mLookAtDotProjection;
	EMat4 m_mProjection;
	EFloatRect m_rViewportIn;
	EFloatRect m_rViewportOut;
	EViewport m_vpIn;
	EViewport m_vpOut;
};
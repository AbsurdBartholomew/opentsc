#pragma once

#include "common/math/e_vec3.h"

// TODO completely BS'ed... try to find out what this actually looks like
template <typename T> struct TRect
{
    T x;
    T y;
    T w;
    T h;
};

typedef TRect<float> EFloatRect;
typedef TRect<int> ERect;

struct EViewport {
	EVec4 vScale;
	EVec4 vOffset;
};
/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/math/e_vec3.h"

template <typename T> struct TRect
{
    T left;
	T top;
	T right;
	T bottom;
    
    TRect<T>& operator=(TRect<T> rect)
    {
        left = rect.left;
        top = rect.top;
        right = rect.right;
        bottom = rect.bottom;
    }
    bool operator==(TRect<T> rect)
    {
        return left == rect.left && top == rect.top && right == rect.right && bottom == rect.bottom;
    }
	bool operator!=(TRect<T> rect)
    {
        return left != rect.left && top != rect.top && right != rect.right && bottom != rect.bottom;
    }

	bool Overlaps()
    {

    }
	float Width()
    {

    }
	float Height()
    {

    }
	void Set()
    {

    }
	void Zero()
    {

    }
};

typedef TRect<float> EFloatRect;
typedef TRect<int> EIntRect;

struct EViewport {
	EVec4 vScale;
	EVec4 vOffset;
};
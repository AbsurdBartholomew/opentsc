/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

struct EMat4
{
    union
    {
        float d[4][4];
        struct
        {
            float _00;
            float _01;
            float _02;
            float _03;
            float _10;
            float _11;
            float _12;
            float _13;
            float _20;
            float _21;
            float _22;
            float _23;
            float _30;
            float _31;
            float _32;
            float _33;
        };
    };
};
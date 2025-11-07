/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#include "e_vec3.h"

EVec3::EVec3(float unit)
{
    x = unit;
    y = unit;
    z = unit;
}

EVec3::EVec3(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}

EVec3::EVec3(const EVec3 &vec)
{
    x = vec.x;
    y = vec.y;
    z = vec.z;
}

EVec3::EVec3(const EVec2 &vec)
{
    x = vec.x;
    y = vec.y;
    z = 0;
}

void EVec3::FromS8s(signed char *v)
{
    /*
    Castaway:
      double dVar1;
        float fVar2;

        fVar2 = @51424;
        dVar1 = @15588;
        *(float *)this =
            @51424 * (float)((double)CONCAT44(0x43300000,(int)*param_1 ^ 0x80000000) - @15588);
        *(float *)(this + 4) =
            fVar2 * (float)((double)CONCAT44(0x43300000,(int)param_1[1] ^ 0x80000000) - dVar1);
        *(float *)(this + 8) =
            fVar2 * (float)((double)CONCAT44(0x43300000,(int)param_1[2] ^ 0x80000000) - dVar1);
    Sims1:
      char cVar1;
        int iVar2;

        iVar2 = 2;
        do {
            cVar1 = *v;
            iVar2 = iVar2 + -1;
            v = v + 1;
            (this->field0_0x0).d[0] = (float)(int)cVar1 * 0.007874016;
            this = (EVec3 *)((int)&this->field0_0x0 + 4);
        } while (-1 < iVar2);
        return;
    */

    char cVar1;
    int iVar2 = 2;

    do
    {
        cVar1 = *v;
        iVar2 = iVar2 + -1;
        v = v + 1;
        x = (float)(int)cVar1 * 0.007874016;

    } while(-1 < iVar2);
}
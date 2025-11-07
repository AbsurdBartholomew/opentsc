/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

struct EVec2
{
	union
	{
		float d[2];
		struct
		{
			float x;
			float y;
		};
	};
};

struct EVec3
{
	union
	{
		float d[3];
		struct
		{
			float x;
			float y;
			float z;
		};
	};

	EVec3 &operator=(EVec3 *other)
	{
		x = other->x;
		y = other->y;
		z = other->z;
	}

	EVec3() { ; }
	EVec3(float unit);
	EVec3(float x, float y, float z);
	EVec3(const EVec3 &vec3);
	EVec3(const EVec2 &vec2);

	void FromS8s(signed char *v);
};

class EQuat
{
public:
};
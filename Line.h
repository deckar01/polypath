#ifndef _Line_def
#define _Line_def

#include <cstdio>
#include "Vector2.h"

class Line{
public:
	Vector2* a;
	Vector2* b;

	Line(Vector2* _a, Vector2* _b);

	bool intersects(Line* other);

	void print();
};

#endif
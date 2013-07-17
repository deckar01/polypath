#ifndef _Polygon_def
#define _Polygon_def

#include <cstdio>
#include <list>
#include "Vector2.h"
#include "Line.h"

using namespace std;

class Polygon{
public:
	list<Vector2*> points;

	Polygon();
	Polygon(list<Vector2*> _points);

	void add(Vector2* _point);

	bool intersects(Line* _line);

	void print();
};

#endif
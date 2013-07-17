#ifndef _Plane_def
#define _Plane_def

#include <cstdio>
#include <list>
#include "Polygon.h"

using namespace std;

class Plane{
public:
	list<Polygon*> polygons;

	Plane();
	Plane(list<Polygon*> _polygons);

	void add(Polygon* _polygon);

	void shortestPath(Vector2* _a, Vector2* _b, list<Vector2*> result);

	void print();
};

#endif
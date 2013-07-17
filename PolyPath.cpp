#include <cstdio>
#include "Vector2.h"
#include "Line.h"
#include "Polygon.h"
#include "Plane.h"

using namespace std;

int main(){
	Polygon* p = new Polygon();
	p->add(new Vector2(0, 0));
	p->add(new Vector2(0, 1));
	p->add(new Vector2(1, 1));
	p->add(new Vector2(1, 0));

	Line* u = new Line(new Vector2(.25, 0.5), new Vector2(.75, 0.5));

	if(p->intersects(u)) printf("intersects\n");
	else printf("no intersects\n");
}
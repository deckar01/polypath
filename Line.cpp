#include "Line.h"

Line::Line(Vector2* _a, Vector2* _b){
	a = _a;
	b = _b;
}

bool Line::intersects(Line* other){
	Vector2* c = other->a;
	Vector2* d = other->b;
	double det = (d->y - c->y)*(b->x - a->x) -
				 (d->x - c->x)*(b->y - a->y);
	if(det == 0) return false;

	double p1 = (a->y - c->y);
	double p2 = (a->x - c->x);

	float x = (d->x - c->x)*(p1) -
			  (d->y - c->y)*(p2);
	x /= det;
	if(x < 0 || x > 1) return false;

	float y = (b->x - a->x)*(p1) -
			  (b->y - a->y)*(p2);
	y /= det;
	if(y < 0 || y > 1) return false;

	return true;
}

void Line::print(){
	printf("(");
	a->print();
	printf(", ");
	b->print();
	printf(")\n\n");
}
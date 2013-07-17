#include "Polygon.h"

Polygon::Polygon(){}

Polygon::Polygon(list<Vector2*> _points){
	points.assign(_points.begin(), _points.end());
}

void Polygon::add(Vector2* _point){
	points.push_back(_point);
}

bool Polygon::intersects(Line* _line){
	list<Vector2*>::iterator it, jt;
	for(it = jt = points.begin(), it++; it != points.end(); it++, jt++){
		if(_line->intersects(new Line(*it, *jt))) return true;
	}
	if(_line->intersects(new Line(*jt, *points.begin()))) return true;

	return false;
}

void Polygon::print(){
	printf("Polygon(%d) =\n", points.size());
	list<Vector2*>::iterator it;
	for(it = points.begin(); it != points.end(); it++){
		(*it)->print();
		printf("\n");
	}
	printf("\n");
}

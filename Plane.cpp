#include "Plane.h"

Plane::Plane(){}

Plane::Plane(list<Polygon*> _polygons){
	polygons.assign(_polygons.begin(), _polygons.end());
}

void Plane::add(Polygon* _polygon){
	polygons.push_back(_polygon);
}

void Plane::shortestPath(Vector2* _a, Vector2* _b, list<Vector2*> result){
	
}

void Plane::print(){
	printf("Plane[%d] =\n\n", polygons.size());

	list<Polygon*>::iterator it;
	for(it = polygons.begin(); it != polygons.end(); it++){
		(*it)->print();
	}
}
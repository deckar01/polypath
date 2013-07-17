#include "Vector2.h"

Vector2::Vector2(double _x, double _y){
	x = _x;
	y = _y;
}
	
void Vector2::print(){
	printf("<%f, %f>", x, y);
}
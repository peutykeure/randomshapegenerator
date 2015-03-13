#ifndef SHAPE_H
#define SHAPE_H

#include "Color.h"

class Shape {
protected :
	int _x,_y;
	Color fill;
	int _moveMultiplier; //A voir plus tard
public : 
	Shape(int x, int y, int r, int g, int b);
	void move(int x, int y);
};

#endif
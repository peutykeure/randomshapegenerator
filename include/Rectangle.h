#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "SFML/Graphics.hpp"
#include "Shape.h"
class Rectangle : public Shape{
private :
	int _width, _height;
public :
	Rectangle(int x, int y, int r, int g, int b, int w, int h);
	void draw(sf::RenderWindow *win) const;
};

#endif

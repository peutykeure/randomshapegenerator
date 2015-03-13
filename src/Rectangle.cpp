#include "Rectangle.h"
#include "Color.h"
#include "Shape.h"

Rectangle::Rectangle(int x, int y, int r, int g, int b, int w, int h):Shape(x,y,r,g,b),_width(w),_height(h) {
	_moveMultiplier = 1;
}

void Rectangle::draw(sf::RenderWindow *win) const {
	int r,g,b;
  	this->fill.getRGB(r,g,b);
  	sf::RectangleShape shape(sf::Vector2f(_width, _height));
  	shape.setFillColor(sf::Color(r, g, b));
  	shape.setPosition(_x,_y);
  	win->draw(shape);
}

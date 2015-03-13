#include "Circle.h"
#include "Shape.h"
#include "Color.h"

void Circle::draw(sf::RenderWindow *win) const {
	int r,g,b;
	this->fill.getRGB(r,g,b);
	sf::CircleShape shape(_radius);
	shape.setFillColor(sf::Color(r, g, b));
	shape.setPosition(_x,_y);
	win->draw(shape);
}

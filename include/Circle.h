#ifndef CIRCLE_H
#define CIRCLE_H

#include "SFML/Graphics.hpp"
#include "Shape.h"
class Circle : public Shape {
private :
	int _radius;
public : 
	void draw(sf::RenderWindow *win) const;

};

#endif

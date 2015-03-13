#include "Shape.h"
#include "Color.h"

Shape::Shape(int x, int y, int r, int g, int b): _x(x),_y(y),fill(r,g,b)
{

}

void Shape::move(int x, int y)
{
	_x  = _x + _moveMultiplier*x;
	_y = _y + _moveMultiplier*y;
}

/* Le sujet nous demande que les cercles bougfent deux foix plus vites
(mouvement deux fois plus grand) que les rectangles. La méthode ci-dessous marche mais si on souhaite faire un mouvement particulier
comme une accélération on doit crée une méthode move particulière dans
la classe fille */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "SFML/Graphics.hpp"
#include "Shape.h"
#include "Color.h"
#include "Rectangle.h"

using namespace std;

int main(void) {
  srand (time(NULL));
  Rectangle aRectangle(rand() % 401,rand() % 401,rand() % 256,rand() % 256,rand() % 256,rand() % 100 + 10, rand() % 100 + 10);
  
  sf::RenderWindow Win(sf::VideoMode(500, 500), "Circle and Rectangles");

  while (Win.isOpen())
  {
    Win.clear(sf::Color(100, 100, 100));
	
    aRectangle.draw(&Win);

    Win.display();
    sf::Event event;
    if(Win.waitEvent(event)) 
    {
      switch (event.type) 
      {
        case sf::Event::Closed :
             Win.close();
             break;
        case sf::Event::KeyPressed :

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
          aRectangle.move(-5,0);
	     }
	     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		        aRectangle.move(5,0);
	     }
	     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            aRectangle.move(0,-5);
	     }
	     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            aRectangle.move(0,5);
	     }
             break;
        default:
          break;
      }
    }
  }
}

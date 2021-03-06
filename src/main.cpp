/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML window in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

#include <iostream>
#include "SFML/Graphics.hpp"
#include "Dot.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Hexagon.h"
#include "Octagon.h"
#include "Arc.h"
#include "Circle.h"

Dot DDot;
Line DLine;
Triangle DTriangle;
Square DSquare;
Hexagon DHex;
Octagon DOct;
Circle DCircle;
Arc DArc;

int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		
		window.clear();
		
		// Do your drawing here
		window.draw(DDot);
		window.draw(DLine);
		window.draw(DTriangle);
		window.draw(DSquare);
		window.draw(DHex);
		window.draw(DOct);
		window.draw(DCircle);
		window.draw(DArc);
		window.display();
	}
}
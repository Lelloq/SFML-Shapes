#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Dot.h
* \brief The dot shape class
*
* Inherits the Shape class.
*/

class Dot : public Shape
{
public:
	Dot(); //!<Default constructor of the dot, creates a point for a dot and makes it white
	/*!
	* \param p sf::Vector2f, location of the dot.
	* \param c sf::Color, colour of the dot.
	*/
	Dot(sf::Vector2f p, sf::Color c);//!<Dot constructor which includes position and colour
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};